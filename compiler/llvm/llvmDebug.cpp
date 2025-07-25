/*
 * Copyright 2020-2025 Hewlett Packard Enterprise Development LP
 * Copyright 2004-2019 Cray Inc.
 * Other additional copyright holders may be indicated within.
 *
 * The entirety of this work is licensed under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 *
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "llvmDebug.h"

#include "alist.h"
#include "clangUtil.h"
#include "codegen.h"
#include "expr.h"
#include "genret.h"
#include "llvmVer.h"
#include "stringutil.h"
#include "symbol.h"
#include "vec.h"
#include "version.h"

#include <iostream>
#include <map>

#ifdef HAVE_LLVM
#include "llvm/ADT/ArrayRef.h"
#include "llvm/ADT/DenseMap.h"
#include "llvm/IR/Module.h"
#include "llvm/Support/raw_ostream.h"

/*
LLVM provides a class called DIBuilder, you pass the LLVM module to this
class and it will attach the debug information to the LLVM code after the
call to finalize() on DIBuilder. The initialization happens in the
constructor of debug_data (inlined in the header). It is instanced during
codegen after setting up the LLVM module and put into debug_info. If the
-g flag wasn't passed to the compiler then debug_info is null. The
finalize call happens in finishCodegenLLVM().

As for all the additional data structures, all of that was built into LLVM
rather than me. The functions to create the debug information requires the
DI* types. It sort of makes sense to me, since it is building a DWARF tree
rather than building LLVM IR. It starts at the top level with the
create_compile_unit() call just before working through the modules and
attaching the simple types and building up more complex structures from
there. Getting things setup so that I can get a DISubroutine to pass to
SetCurrentDebugLocation() is needed to get information like line numbers
into the binary. So I think that the only new data structure that I'm
creating myself is the debug class itself.


See
http://llvm.org/docs/SourceLevelDebugging.html
for more information on LLVM debug information.
*/

// Note: All char strings must be the same size
// Very hacky, but completely legal and functional. Only issue is that file_name
// will have garbage from beyond full_path.
// garbage issue could be solved with scrubbing, if it matters.

char current_dir[128];
llvm::DenseMap<const Type *, llvm::MDNode *> myTypeDescriptors;

// Ifdef'd to avoid unused warning, because its only usage has the same ifdef.
// If this gets used elsewhere the ifdef can be removed; besides the warning,
// there is nothing wrong with this code being included without
// HAVE_LLVM_TYPED_POINTERS.
#ifdef HAVE_LLVM_TYPED_POINTERS
static
std::string myGetTypeName(llvm::Type *ty) {
  std::string TypeName;
  llvm::raw_string_ostream TypeStream(TypeName);
  if(ty)
    ty->print(TypeStream);
  else
    TypeStream << "Printing <null> Type";
  TypeStream.flush();
  return TypeName;
}
#endif

static
llvm::MDNode *myGetType(const Type *type) {
  typedef llvm::DenseMap<const Type*, llvm::MDNode *>::const_iterator TypeNodeIter;
  TypeNodeIter i = myTypeDescriptors.find(type);
  if(i != myTypeDescriptors.end())
    return i->second;
  return NULL;
}


void debug_data::finalize() {
  forv_Vec(ModuleSymbol, currentModule, allModules) {
    currentModule->llvmDIBuilder->finalize();
  }
}

void debug_data::create_compile_unit(ModuleSymbol* modSym, const char *file, const char *directory, bool is_optimized, const char *flags)
{
  this->optimized = is_optimized;
  char version[128];
  char chapel_string[256];
  get_version(version, sizeof(version));
  snprintf(chapel_string, 256, "Chapel version %s", version);
  strncpy(current_dir, directory,sizeof(current_dir)-1);

  GenInfo* info = gGenInfo;
  modSym->llvmDIBuilder = new llvm::DIBuilder(*info->module);
  auto llvmFile = modSym->llvmDIBuilder->createFile(file, directory);
  modSym->llvmDICompileUnit =
    modSym->llvmDIBuilder->createCompileUnit(llvm::dwarf::DW_LANG_C99, /* Lang */
                                             llvmFile, /* File */
                                             chapel_string, /* Producer */
                                             is_optimized, /* isOptimized */
                                             flags, /* Flags */
                                             0 /* RV */ );
}


llvm::DIType* debug_data::construct_type(Type *type)
{
  llvm::MDNode *N = myGetType(type);
  if(N) return llvm::cast_or_null<llvm::DIType>(N);

  GenInfo* info = gGenInfo;
  const llvm::DataLayout& layout = info->module->getDataLayout();

  llvm::Type* ty = type->symbol->getLLVMType();
  const char* name = type->symbol->name;
  ModuleSymbol* defModule = type->symbol->getModule();
  const char* defFile = type->symbol->fname();
  int defLine = type->symbol->linenum();

  auto dibuilder = defModule->llvmDIBuilder;

  if(!ty) {
    return NULL;
  }
  if(ty->isIntegerTy()) {
    N = dibuilder->createBasicType(
      name, /* Name */
      layout.getTypeSizeInBits(ty), /* SizeInBits */
      (is_signed(type))?
      (llvm::dwarf::DW_ATE_signed):
      (llvm::dwarf::DW_ATE_unsigned) /* Encoding */);

    myTypeDescriptors[type] = N;
    return llvm::cast_or_null<llvm::DIType>(N);
  }

  else if(ty->isFloatingPointTy()) {
    N = dibuilder->createBasicType(
      name,
      layout.getTypeSizeInBits(ty),
      llvm::dwarf::DW_ATE_float);

    myTypeDescriptors[type] = N;
    return llvm::cast_or_null<llvm::DIType>(N);
  }

  else if(ty->isPointerTy()) {
    if(type != type->getValType()) {//Add this condition to avoid segFault
      N = dibuilder->createPointerType(
        get_type(type->getValType()),//it should return the pointee's DIType
        layout.getPointerSizeInBits(ty->getPointerAddressSpace()),
        0, /* alignment */
        chpl::empty,
        name);

      myTypeDescriptors[type] = N;
      return llvm::cast_or_null<llvm::DIType>(N);
    }
    else {
      if(type->astTag == E_PrimitiveType) {
        // TODO: reimplement this properly within the Chapel type system
#ifdef HAVE_LLVM_TYPED_POINTERS
        llvm::Type *PointeeTy = ty->getPointerElementType();
        // handle string, c_string, nil, opaque, raw_c_void_ptr
        if(PointeeTy->isIntegerTy()) {
          llvm::DIType* pteIntDIType; //create the DI-pointeeType
          pteIntDIType = dibuilder->createBasicType(
            myGetTypeName(PointeeTy),
            layout.getTypeSizeInBits(PointeeTy),
            llvm::dwarf::DW_ATE_unsigned);

          N = dibuilder->createPointerType(
            pteIntDIType,
            layout.getPointerSizeInBits(ty->getPointerAddressSpace()),
            0,
            chpl::empty,
            name);

          myTypeDescriptors[type] = N;
          return llvm::cast_or_null<llvm::DIType>(N);
        }
        // handle qio_channel_ptr_t, qio_file_ptr_t, syserr, _file
        else if(PointeeTy->isStructTy()) {
          llvm::DIType* pteStrDIType; //create the DI-pointeeType
          pteStrDIType = dibuilder->createStructType(
            get_module_scope(defModule), /* Scope */
            PointeeTy->getStructName(), /* Name */
            get_file(defModule, defFile), /* File */
            0, /* LineNumber */
            (PointeeTy->isSized()?
            layout.getTypeSizeInBits(PointeeTy):
            8), /* SizeInBits */
            (PointeeTy->isSized()?
            8*layout.getABITypeAlign(PointeeTy).value():
            8), /* AlignInBits */
            llvm::DINode::FlagZero, /* Flags */
            NULL, /* DerivedFrom */
            NULL /* Elements */
            );

          N = dibuilder->createPointerType(
            pteStrDIType,
            layout.getPointerSizeInBits(ty->getPointerAddressSpace()),
            0,
            chpl::empty,
            name);

          myTypeDescriptors[type] = N;
          return llvm::cast_or_null<llvm::DIType>(N);
        }
#else
        return NULL;
#endif
      }
      else if(type->astTag == E_AggregateType) {
        // dealing with classes
        AggregateType *this_class = (AggregateType *)type;

        llvm::SmallVector<llvm::Metadata *, 8> EltTys;
        llvm::DIType* derivedFrom = nullptr;

        if( this_class->dispatchParents.length() > 0 )
          derivedFrom = get_type(this_class->dispatchParents.first());

        // solve the data class: _ddata
        if(this_class->symbol->hasFlag(FLAG_DATA_CLASS)) {
          Type* vt = getDataClassType(this_class->symbol)->typeInfo();
          if(vt) {
            N = dibuilder->createPointerType(
              get_type(vt),
              layout.getPointerSizeInBits(ty->getPointerAddressSpace()),
              0,
              chpl::empty,
              name);

            myTypeDescriptors[type] = N;
            return llvm::cast_or_null<llvm::DIType>(N);
          }
        } //Not sure whether we should directly return getType(vt)

        const llvm::StructLayout* slayout = NULL;
        const char *struct_name = this_class->classStructName(true);
        llvm::Type* st = getTypeLLVM(struct_name);
        if(st){
          llvm::StructType* struct_type = llvm::cast<llvm::StructType>(st);
          if(!struct_type->isOpaque()){
            N = dibuilder->createForwardDecl(
              llvm::dwarf::DW_TAG_structure_type,
              name,
              get_module_scope(defModule),
              get_file(defModule, defFile),
              defLine,
              0, // RuntimeLang
              layout.getTypeSizeInBits(ty),
              8*layout.getABITypeAlign(ty).value());

            //N is added to the map (early) so that element search below can find it,
            //so as to avoid infinite recursion for structs that contain pointers to
            //their own type.
            myTypeDescriptors[type] = N;

            slayout = layout.getStructLayout(struct_type);
            for_fields(field, this_class) {
              // field is a Symbol
              const char* fieldDefFile = field->defPoint->fname();
              int fieldDefLine = field->defPoint->linenum();
              TypeSymbol* fts = field->type->symbol;
              llvm::Type* fty = fts->getLLVMType();
              llvm::DIType* mty;
              llvm::DIType* fditype =  get_type(field->type);
              if(fditype == NULL)
              // if field->type is an internal type, get_type returns null
              // which is not a good type for a MemberType). At the moment it
              // uses a nullptr type as a stub, but we should change it
                fditype = dibuilder->createNullPtrType();

              bool unused;
              //use the dummy type for 'BaseArr'
              mty = dibuilder->createMemberType(
                get_module_scope(defModule),
                field->name,
                get_file(defModule, fieldDefFile),
                fieldDefLine,
                layout.getTypeSizeInBits(fty),
                8*layout.getABITypeAlign(fty).value(),
                slayout->getElementOffsetInBits(this_class->getMemberGEP(field->cname, unused)),
                llvm::DINode::FlagZero,
                fditype);

              EltTys.push_back(mty);
            }

            // Now create the DItype for the struct
            N = dibuilder->createStructType(
              get_module_scope(defModule), /* Scope */
              name, /* Name */
              get_file(defModule, defFile), /* File */
              defLine, /* LineNumber */
              layout.getTypeSizeInBits(ty), /* SizeInBits */
              8*layout.getABITypeAlign(ty).value(), /* AlignInBits */
              llvm::DINode::FlagZero, /* Flags */
              derivedFrom, /* DerivedFrom */
              dibuilder->getOrCreateArray(EltTys) /* Elements */
              );

            return llvm::cast_or_null<llvm::DIType>(N);
          }//end of if(!Opaque)
        }// end of if(st)
      } // end of astTag == E_AggregateTy
    } // end of else (type==type->getType)
  } // end of ty->isPointerTy()

  else if(ty->isStructTy() && type->astTag == E_AggregateType) {
    AggregateType *this_class = (AggregateType *)type;

    llvm::SmallVector<llvm::Metadata *, 8> EltTys;
    llvm::DIType* derivedFrom = nullptr;

    if( this_class->dispatchParents.length() > 0 )
      derivedFrom = get_type(this_class->dispatchParents.first());

    const llvm::StructLayout* slayout = NULL;
    llvm::StructType* struct_type = llvm::cast<llvm::StructType>(ty);
    slayout = layout.getStructLayout(struct_type);

    N = dibuilder->createForwardDecl(
      llvm::dwarf::DW_TAG_structure_type,
      name,
      get_module_scope(defModule),
      get_file(defModule, defFile),
      defLine,
      0, // RuntimeLang
      layout.getTypeSizeInBits(ty),
      8*layout.getABITypeAlign(ty).value());

    //N is added to the map (early) so that element search below can find it,
    //so as to avoid infinite recursion for structs that contain pointers to
    //their own type.
    myTypeDescriptors[type] = N;

    for_fields(field, this_class) {
      const char* fieldDefFile = field->defPoint->fname();
      int fieldDefLine = field->defPoint->linenum();
      TypeSymbol* fts = field->type->symbol;
      llvm::Type* fty = fts->getLLVMType();
      llvm::DIType* fditype =  get_type(field->type);
      if(fditype == NULL)
      // See line 270 for a comment about this if
        fditype = dibuilder->createNullPtrType();

      if(!fty){
        fty = getTypeLLVM(fts->cname);
        if(!fty) {
          // FIXME: Types should have an LLVM type
          return NULL;
        }
      }
      bool unused;
      llvm::DIType* mty = dibuilder->createMemberType(
        get_module_scope(defModule),
        field->name,
        get_file(defModule, fieldDefFile),
        fieldDefLine,
        layout.getTypeSizeInBits(fty),
        8*layout.getABITypeAlign(fty).value(),
        slayout->getElementOffsetInBits(this_class->getMemberGEP(field->cname, unused)),
        llvm::DINode::FlagZero,
        fditype);

      EltTys.push_back(mty);
    }

    if(this_class->aggregateTag == AGGREGATE_RECORD) {
      N = dibuilder->createStructType(
        get_module_scope(defModule),
        name,
        get_file(defModule, defFile),
        defLine,
        layout.getTypeSizeInBits(ty),
        8*layout.getABITypeAlign(ty).value(),
        llvm::DINode::FlagZero,
        derivedFrom,
        dibuilder->getOrCreateArray(EltTys));

      myTypeDescriptors[type] = N;
      return llvm::cast_or_null<llvm::DIType>(N);
    }
    else if(this_class->aggregateTag == AGGREGATE_CLASS) {
      N = dibuilder->createStructType(
        get_module_scope(defModule),
        name,
        get_file(defModule, defFile),
        defLine,
        layout.getTypeSizeInBits(ty),
        8*layout.getABITypeAlign(ty).value(),
        llvm::DINode::FlagZero,
        derivedFrom,
        dibuilder->getOrCreateArray(EltTys));

      myTypeDescriptors[type] = N;
      return llvm::cast_or_null<llvm::DIType>(N);
    }
    else if(this_class->aggregateTag == AGGREGATE_UNION) {
      N = dibuilder->createUnionType(
        get_module_scope(defModule),
        name,
        get_file(defModule, defFile),
        defLine,
        layout.getTypeSizeInBits(ty),
        8*layout.getABITypeAlign(ty).value(),
        llvm::DINode::FlagZero,
        dibuilder->getOrCreateArray(EltTys));

      myTypeDescriptors[type] = N;
      return llvm::cast_or_null<llvm::DIType>(N);
    }
  }

  else if(ty->isArrayTy() && type->astTag == E_AggregateType) {
    if (type->symbol->hasFlag(FLAG_C_ARRAY)) return NULL;
    AggregateType *this_class = (AggregateType *)type;
    // Subscripts are "ranges" for each dimension of the array
    llvm::SmallVector<llvm::Metadata *, 4> Subscripts;
    int Asize = this_class->fields.length;
    // C-style language always has 1D for array, and index starts with "0"
    Subscripts.push_back(dibuilder->getOrCreateSubrange(0, Asize));
    Symbol *eleSym = toDefExpr(this_class->fields.head)->sym;
    Type *eleType = eleSym->type;
    if (get_type(eleType) == NULL) return NULL;
    N = dibuilder->createArrayType(
      Asize,
      8*layout.getABITypeAlign(ty).value(),
      get_type(eleType),
      dibuilder->getOrCreateArray(Subscripts));

    myTypeDescriptors[type] = N;
    return llvm::cast_or_null<llvm::DIType>(N);
  }

  // We are unable for some reasons to find a debug type. This shouldn't be a
  // problem for a correct compilation, but it would be better to find a way to
  // deal with this case
  //
  // These are some debug prints for helping find these types.
  //
  /*printf("Unhandled type: %s\n\ttype->astTag=%i\n", type->symbol->name, type->astTag);
  if(type->symbol->getLLVMType()) {
    printf("\tllvmImplType->getTypeID() = %i\n", type->symbol->getLLVMType()->getTypeID());
  }
  else {
    printf("\tllvmImplType is NULL\n");
  }*/

  return NULL;
}

llvm::DIType* debug_data::get_type(Type *type)
{
  if( NULL == type->symbol->llvmDIType ) {
    type->symbol->llvmDIType = construct_type(type);
  }
  return llvm::cast_or_null<llvm::DIType>(type->symbol->llvmDIType);
}

llvm::DIFile* debug_data::construct_file(ModuleSymbol* modSym, const char *fpath)
{
  // Create strings for the directory and file.
  const char* last_slash;
  const char* file;
  const char* directory;

  last_slash = strrchr(fpath, '/');
  if( last_slash ) {
    file = astr(last_slash+1);
    directory = asubstr(fpath, last_slash);
  }
  else {
    file = fpath;
    directory = astr(current_dir);
  }

  return modSym->llvmDIBuilder->createFile(file, directory);
}

llvm::DIFile* debug_data::get_file(ModuleSymbol* modSym, const char *fpath)
{
  // First, check to see if it's already a in our hashtable.
  if( this->filesByName.count(fpath) > 0 ) {
    return this->filesByName[fpath];
  }

  // Otherwise, construct the type, add it to the map,and return it
  llvm::DIFile* dif = construct_file(modSym, fpath);
  this->filesByName[fpath] = dif;
  return dif;
}

llvm::DINamespace* debug_data::construct_module_scope(ModuleSymbol* modSym)
{
  const char* fname = modSym->fname();
  llvm::DIFile* file = get_file(modSym, fname);
  return modSym->llvmDIBuilder->createNameSpace(file, /* Scope */
                                         modSym->name, /* Name */
                                         false /* ExportSymbols */
                                        );
}

llvm::DINamespace* debug_data::get_module_scope(ModuleSymbol* modSym)
{
  if( NULL == modSym->llvmDINameSpace ) {
    modSym->llvmDINameSpace = construct_module_scope(modSym);
  }
  return llvm::cast_or_null<llvm::DINamespace>(modSym->llvmDINameSpace);
}

llvm::DISubroutineType* debug_data::get_function_type(FnSymbol *function)
{
  ModuleSymbol* modSym = function->getModule();
  llvm::SmallVector<llvm::Metadata *,16> ret_arg_types;

  ret_arg_types.push_back(get_type(function->retType));
  for_formals(arg, function)
  {
    ret_arg_types.push_back(get_type(arg->type));
  }
  llvm::DITypeRefArray ret_arg_arr = modSym->llvmDIBuilder->getOrCreateTypeArray(ret_arg_types);
  return modSym->llvmDIBuilder->createSubroutineType(ret_arg_arr);
}

llvm::DISubprogram* debug_data::construct_function(FnSymbol *function)
{
  const char *name = function->name;
  const char *cname = function->cname;
  ModuleSymbol* modSym = (ModuleSymbol*) function->defPoint->parentSymbol;
  const char *file_name = function->astloc.filename();
  int line_number = function->astloc.lineno();
  // Get the function using the cname since that is how it is
  // stored in the generated code. The name is just used within Chapel.

  llvm::DINamespace* module = get_module_scope(modSym);
  llvm::DIFile* file = get_file(modSym, file_name);

  llvm::DISubroutineType* function_type = get_function_type(function);

  llvm::DISubprogram::DISPFlags SPFlags = llvm::DISubprogram::SPFlagDefinition;
  if (!function->hasFlag(FLAG_EXPORT))
    SPFlags |= llvm::DISubprogram::SPFlagLocalToUnit;
  if (optimized)
    SPFlags |= llvm::DISubprogram::SPFlagOptimized;

  llvm::DISubprogram* ret = modSym->llvmDIBuilder->createFunction(
    module, /* scope */
    name, /* name */
    cname, /* linkage name */
    file, line_number, function_type,
    line_number, /* beginning of scope we start */
    llvm::DINode::FlagZero, /* flags */
    SPFlags /* subprogram flags */
    );
  return ret;
}

llvm::DISubprogram* debug_data::get_function(FnSymbol *function)
{
  if( NULL == function->llvmDISubprogram ) {
    function->llvmDISubprogram = construct_function(function);
  }
  return llvm::cast_or_null<llvm::DISubprogram>(function->llvmDISubprogram);
}


llvm::DIGlobalVariableExpression* debug_data::construct_global_variable(VarSymbol *gVarSym)
{
  const char *name = gVarSym->name;
  const char *cname = gVarSym->cname;
  const char *file_name = gVarSym->astloc.filename();
  int line_number = gVarSym->astloc.lineno();

  ModuleSymbol* modSym = gVarSym->getModule();
  auto dibuilder = modSym->llvmDIBuilder;
  auto compileUnit = modSym->llvmDICompileUnit;

  llvm::DIFile* file = get_file(modSym, file_name);
  llvm::DIType* gVarSym_type = get_type(gVarSym->type); // type is member of Symbol

  if(gVarSym_type)
    return dibuilder->createGlobalVariableExpression
     (
      compileUnit, /* Context */
      name, /* name */
      cname, /* linkage name */
      file, /* File */
      line_number, /* LineNo */
      gVarSym_type, /* Ty */
      !gVarSym->hasFlag(FLAG_EXPORT) /* is local to unit */
     );
  else {
    //return an Empty dbg node if the symbol type is unresolved
    return NULL;
  }
}

llvm::DIGlobalVariableExpression* debug_data::get_global_variable(VarSymbol *gVarSym)
{
  if( NULL == gVarSym->llvmDIGlobalVariable ) {
    gVarSym->llvmDIGlobalVariable = construct_global_variable(gVarSym);
  }
  return llvm::cast_or_null<llvm::DIGlobalVariableExpression>(
              gVarSym->llvmDIGlobalVariable);
}

llvm::DIVariable* debug_data::construct_variable(VarSymbol *varSym)
{
  const char *name = varSym->name;
  const char *file_name = varSym->astloc.filename();
  int line_number = varSym->astloc.lineno();
  FnSymbol *funcSym = varSym->defPoint->getFunction();
  ModuleSymbol* modSym = varSym->getModule();

  llvm::DISubprogram* scope = get_function(funcSym);
  llvm::DIFile* file = get_file(modSym, file_name);
  llvm::DIType* varSym_type = get_type(varSym->type);

  if(varSym_type) {
    llvm::DILocalVariable* localVariable = modSym->llvmDIBuilder->createAutoVariable(
      scope, /* Scope */
      name, /*Name*/
      file, /*File*/
      line_number, /*Lineno*/
      varSym_type, /*Type*/
      true/*AlwaysPreserve, won't be removed when optimized*/
      ); //omit the  Flags and ArgNo

    modSym->llvmDIBuilder->insertDeclare(varSym->codegen().val, localVariable,
      modSym->llvmDIBuilder->createExpression(), llvm::DILocation::get(
        scope->getContext(), line_number, 0, scope, nullptr, false),
      gGenInfo->irBuilder->GetInsertBlock());
    return localVariable;
  }
  else {
    //Empty dbg node if the symbol type is unresolved
    return NULL;
  }
}

llvm::DIVariable* debug_data::get_variable(VarSymbol *varSym)
{
  if( NULL == varSym->llvmDIVariable ){
    varSym->llvmDIVariable = construct_variable(varSym);
  }
  return llvm::cast_or_null<llvm::DIVariable>(varSym->llvmDIVariable);
}

llvm::DIVariable* debug_data::construct_formal_arg(ArgSymbol *argSym, unsigned ArgNo)
{
  const char *name = argSym->name;
  const char *file_name = argSym->astloc.filename();
  int line_number = argSym->astloc.lineno();
  FnSymbol *funcSym = NULL;
  if(isFnSymbol(argSym->defPoint->parentSymbol))
    funcSym = (FnSymbol*)argSym->defPoint->parentSymbol;
  else
    printf("Couldn't find the function parent of param: %s!\n",name);
  ModuleSymbol* modSym = argSym->getModule();

  llvm::DISubprogram* scope = get_function(funcSym);
  llvm::DIFile* file = get_file(modSym, file_name);
  llvm::DIType* argSym_type = get_type(argSym->type);

  if(argSym_type) {
    auto diParameterVariable = modSym->llvmDIBuilder->createParameterVariable(
      scope, /* Scope */
      name, /*Name*/
      ArgNo, /* ArgNo */
      file, /*File*/
      line_number, /*Lineno*/
      argSym_type, /*Type*/
      true,/*AlwaysPreserve, won't be removed when optimized*/
      llvm::DINode::FlagZero /*Flags*/
      );
    auto Storage = gGenInfo->lvt->getValue(argSym->cname);
    modSym->llvmDIBuilder->insertDeclare(Storage.val, diParameterVariable,
      modSym->llvmDIBuilder->createExpression(), llvm::DILocation::get(
        scope->getContext(), line_number, 0, scope, nullptr, false),
      gGenInfo->irBuilder->GetInsertBlock());
    return diParameterVariable;
  } else {
    //Empty dbg node if the symbol type is unresolved
    return NULL;
  }
}

llvm::DIVariable* debug_data::get_formal_arg(ArgSymbol *argSym, unsigned int ArgNo)
{
  if( NULL == argSym->llvmDIFormal ){
    argSym->llvmDIFormal = construct_formal_arg(argSym, ArgNo);
  }
  return llvm::cast_or_null<llvm::DIVariable>(argSym->llvmDIFormal);
}
#endif
