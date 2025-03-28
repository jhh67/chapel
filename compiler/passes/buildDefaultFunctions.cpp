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

#include "passes.h"

#include "astutil.h"
#include "build.h"
#include "buildDefaultFunctions.h"
#include "config.h"
#include "driver.h"
#include "expr.h"
#include "IfExpr.h"
#include "ModuleSymbol.h"
#include "stlUtil.h"
#include "stmt.h"
#include "stringutil.h"
#include "symbol.h"
#include "TryStmt.h"
#include "wellknown.h"

#include "global-ast-vecs.h"

#include <unordered_map>
#include <array>
#include <vector>

FnSymbol* chplUserMain = NULL;
static bool mainReturnsSomething;

static void buildChplEntryPoints();
static void buildAccessors(AggregateType* ct, Symbol* field);

static void buildDefaultOfFunction(AggregateType* ct);

static void buildUnionAssignmentFunction(AggregateType* ct);

static void buildEnumIntegerCastFunctions(EnumType* et);
static void buildEnumFirstFunction(EnumType* et);
static void buildEnumSizeFunction(EnumType* et);
static void buildEnumOrderFunctions(EnumType* et);
static void buildEnumStringOrBytesCastFunctions(EnumType* type,
                                                AggregateType* otherType);

static void buildExternAssignmentFunction(Type* type);

static void buildRecordAssignmentFunction(AggregateType* ct);
static void checkNotPod(AggregateType* ct);
static void buildRecordHashFunction(AggregateType* ct);

static FnSymbol* buildRecordIsComparableFunc(AggregateType* ct, const char* op);
static void buildRecordComparisonFunc(AggregateType* ct, const char* op);
static void buildRecordEqualsBody(AggregateType* ct, FnSymbol *fn,
                                  ArgSymbol *arg1, ArgSymbol *arg2);
static void buildRecordNotEqualsBody(AggregateType* ct, FnSymbol *fn,
                                     ArgSymbol *arg1, ArgSymbol *arg2);
static void buildRecordLessThanBody(AggregateType* ct, FnSymbol *fn,
                                    ArgSymbol *arg1, ArgSymbol *arg2,
                                    bool allowEquals);
static void buildRecordGreaterThanBody(AggregateType* ct, FnSymbol *fn,
                                       ArgSymbol *arg1, ArgSymbol *arg2,
                                       bool allowEquals);

static void buildDefaultReadWriteFunctions(AggregateType* type);

static void buildFieldAccessorFunctions(AggregateType* at);

// FnSymbolIndex is a cache of function name -> vector<FnSymbol>
// We incrementally update it in functionExists because in the duration
// of this pass, FnSymbol's are only added to gFnSymbols.
// We (ugly) manage its lifetime with the pointer sFnSymbolIndex
// so that the pass can easily cleanup after itself after the entry point
// buildDefaultFunctions. Thus it is used as a singleton class
// There are other calls into this translation unit that are not part of the
// pass, so we revert to not using the cache in those circumstances because
// we can no longer guarantee that gFnSymbols hasn't changed
class FnSymbolIndex;
FnSymbolIndex *sFnSymbolIndex = nullptr;

class FnSymbolIndex {
  const std::vector<FnSymbol*> empty_;
  std::unordered_map<const char *, std::vector<FnSymbol*>> map_;
  size_t fnSymbolsSize_ = 0;

public:
  FnSymbolIndex() {sFnSymbolIndex = this;}
  ~FnSymbolIndex() {sFnSymbolIndex = nullptr;}

  const std::vector<FnSymbol*> &get(const char *astrName) {
    auto it = map_.find(astrName);
    if (it == map_.end()) return empty_;
    return it->second;
  }

  void update() {
    size_t n = gFnSymbols.size();
    if (n > fnSymbolsSize_) {
      for (size_t i = fnSymbolsSize_; i < n; i++) {
        FnSymbol *fn = gFnSymbols.v[i];
        auto it = map_.find(fn->name);
        if (it == map_.end()) {
          map_.insert({fn->name, {fn}});
        } else {
          it->second.push_back(fn);
        }
      }
    }
    fnSymbolsSize_ = n;
  }
};



void buildDefaultFunctions() {
  FnSymbolIndex fsi;

  buildChplEntryPoints();

  SET_LINENO(rootModule); // todo - remove reset_ast_loc() calls below?

  // Take a copy of the existing TypeSymbols because the below loop can create
  // new ones. This maintains compatibility with the previous approach which
  // used a collect_ast on rootModule
  std::vector<TypeSymbol *> typeSymbols(gTypeSymbols.begin(), gTypeSymbols.end());

  for (TypeSymbol *type : typeSymbols) {
    INT_ASSERT(type->inTree());
    // Here we build default functions that are always generated (even when
    // the type symbol has FLAG_NO_DEFAULT_FUNCTIONS attached).
    if (AggregateType* ct = toAggregateType(type->type)) {

      if (ct->symbol->hasFlag(FLAG_RESOLVED_EARLY)) {
        if (ct->symbol->hasFlag(FLAG_REF)) {
          // The frontend will generate '_ref' types early. These types
          // really shouldn't have 'init=' (etc) generated for them...
          continue;
        }
      }

      buildFieldAccessorFunctions(ct);

      if (ct->wantsDefaultInitializer()) {
        ct->buildDefaultInitializer();
        ct->buildReaderInitializer();
      }

      if (!ct->hasUserDefinedInitEquals()) {
        ct->buildCopyInitializer();
      }

      if (!ct->symbol->hasFlag(FLAG_REF)) {
        buildDefaultDestructor(ct);
      }

      // Classes should use the nil:<type> _defaultOf method unless they
      // do not inherit from object.  For those types and records, call
      // we need a more complicated _defaultOf method generated by the
      // compiler
      if (!ct->isClass() || ct->symbol->hasFlag(FLAG_NO_OBJECT)) {
        buildDefaultOfFunction(ct);
      }
    }

    if (type->hasFlag(FLAG_NO_DEFAULT_FUNCTIONS)) {

      // Here we build default functions that respect the "no default
      // functions" pragma.
    } else if (AggregateType* ct = toAggregateType(type->type)) {
      buildDefaultReadWriteFunctions(ct);

      // build the assignment
      if (type->hasFlag(FLAG_EXTERN)) {
        buildExternAssignmentFunction(type->type);
      } else if (isRecord(ct)) {
        buildRecordAssignmentFunction(ct);
      } else if (isUnion(ct)) {
        buildUnionAssignmentFunction(ct);
      }

      if (isRecord(ct)) {
        // Build hash function first so we don't trip over our own
        // compiler-generated '==' operator
        buildRecordHashFunction(ct);

        if (!isRecordWrappedType(ct)) {
          buildRecordComparisonFunc(ct, "==");
          buildRecordComparisonFunc(ct, "!=");
          buildRecordComparisonFunc(ct, "<");
          buildRecordComparisonFunc(ct, "<=");
          buildRecordComparisonFunc(ct, ">");
          buildRecordComparisonFunc(ct, ">=");
        }


        checkNotPod(ct);
      }

    } else if (EnumType* et = toEnumType(type->type)) {
      buildEnumFunctions(et);

    } else {
      // The type is a simple type
      // so assignment should be defined in the modules if it is not extern
      if (type->hasFlag(FLAG_EXTERN)) {
        buildExternAssignmentFunction(type->type);
      }
    }
  }
}


static void buildFieldAccessorFunctions(AggregateType* at) {
  for_fields(field, at) {
    if (!field->hasFlag(FLAG_IMPLICIT_ALIAS_FIELD)) {
      if (isVarSymbol(field)) {
        buildAccessors(at, field);
      } else if (isEnumType(field->type)) {
        buildAccessors(at, field);
      }
    }
  }
}

static bool typeMatch(Type* type, Symbol* sym) {
  if (type == dtAny)
    return true;
  if (sym->type == type)
    return true;
  SymExpr* se = toSymExpr(sym->defPoint->exprType);
  if (se && se->symbol()->type == type)
    return true;
  return false;
}

typedef enum {
  FIND_EITHER = 0,
  FIND_REF,
  FIND_NOT_REF
} functionExistsKind;

// functionExists returns true iff
//  function's name matches name
//  function's number of formals matches numFormals
//  function's ith formal type matches formalType[i]
// We have to template over the vector type here because the cache uses std::vector
// and gTypeSymbols is a Vec
template<bool useCache, typename V, size_t numFormals>
static FnSymbol* functionExists(const char *nameAstr,
                                const V &fns,
                                std::array<Type*, numFormals> formalTypes,
                                functionExistsKind kind) {
  for (FnSymbol *fn : fns) {
    if (!useCache) {
      if (fn->name != nameAstr)
        continue;
    }

    if (numFormals != fn->numFormals())
      continue;

    if (kind == FIND_REF && fn->retTag != RET_REF)
      continue;

    if (kind == FIND_NOT_REF && fn->retTag == RET_REF)
      continue;

    bool matched = true;
    size_t i = 0;
    for_formals(formal, fn) {
      if (!typeMatch(formalTypes[i], formal)) {
        matched = false;
        break;
      }
      i += 1;
    }

    if (matched) {
      return fn;
    }
  }

  return nullptr;
}

template<size_t numFormals>
static FnSymbol* functionExists(const char* name,
                                std::array<Type*, numFormals> formalTypes,
                                functionExistsKind kind) {
  const char *nameAstr = astr(name);
  if (sFnSymbolIndex) {
    sFnSymbolIndex->update();
    return functionExists<true>(
        name, sFnSymbolIndex->get(nameAstr), formalTypes, kind);
  } else {
    return functionExists<false>(nameAstr, gFnSymbols, formalTypes, kind);
  }
}

static FnSymbol* functionExists(const char* name,
                                 Type* formalType1,
                                 functionExistsKind kind=FIND_EITHER)
{
  return functionExists<1>(name, {{formalType1}}, kind);
}

static FnSymbol* functionExists(const char* name,
                                 Type* formalType1,
                                 Type* formalType2,
                                 functionExistsKind kind=FIND_EITHER)
{
  return functionExists<2>(name, {{formalType1, formalType2}}, kind);
}

static FnSymbol* functionExists(const char* name,
                                 Type* formalType1,
                                 Type* formalType2,
                                 Type* formalType3,
                                 functionExistsKind kind=FIND_EITHER)
{
  return functionExists<3>(name, {{formalType1, formalType2, formalType3}}, kind);
}

static FnSymbol* functionExists(const char* name,
                                Type* formalType1,
                                Type* formalType2,
                                Type* formalType3,
                                Type* formalType4,
                                functionExistsKind kind=FIND_EITHER) {
  return functionExists<4>(name, {{formalType1, formalType2, formalType3, formalType4}}, kind);
}

static FnSymbol* operatorExists(const char* name,
                                Type* formalType1,
                                Type* formalType2,
                                functionExistsKind kind=FIND_EITHER) {
  FnSymbol* retval = NULL;
  // check for operator method
  retval = functionExists(name, dtMethodToken, dtAny, formalType1, formalType2);
  if (retval == NULL) {
    // check for standalone operator
    retval = functionExists(name, formalType1, formalType2);
  }
  return retval;
}

static void fixupAccessor(AggregateType* ct, Symbol *field,
                           bool fieldIsConst, bool recordLike,
                           FnSymbol* fn)
{
  std::vector<CallExpr*> calls;
  collectCallExprs(fn, calls);
  for_vector(CallExpr, call, calls) {
    if (call->isNamedAstr(field->name) && call->numActuals() == 2) {
      if (call->get(1)->typeInfo() == dtMethodToken &&
          call->get(2)->typeInfo() == ct) {
        Expr *arg2 = call->get(2);
        call->replace(new CallExpr(PRIM_GET_MEMBER, arg2->remove(),
                                   new_CStringSymbol(field->name)));
      }
    }
  }
  fn->addFlag(FLAG_FIELD_ACCESSOR);
  if (fieldIsConst)
    fn->addFlag(FLAG_REF_TO_CONST);
  else if (recordLike)
    fn->addFlag(FLAG_REF_TO_CONST_WHEN_CONST_THIS);
}

// Resetting a union to store a different field requires two steps:
//   1. deinit anything that was stored
//   2. default-init the requested field
// If newField == NULL, skip step 2.
static BlockStmt* buildResetUnionField(Symbol* _this,
                                       AggregateType* ct,
                                       Symbol* newField) {

  INT_ASSERT(ct->isUnion());

  BlockStmt* block = new BlockStmt();

  // First, deinitialize whatever is there.
  for_fields(field, ct) {
    Symbol* fieldNameSym = new_CStringSymbol(field->name);

    CallExpr* checkId = new CallExpr("==",
                              new CallExpr(PRIM_GET_UNION_ID, _this),
                              new CallExpr(PRIM_FIELD_NAME_TO_NUM,
                                           ct->symbol,
                                           fieldNameSym));

    BlockStmt* deinitBlock = new BlockStmt();
    VarSymbol* tmp = newTemp("union_reset_deinit");
    CallExpr* setTmp = new CallExpr(PRIM_MOVE,
                                    tmp,
                                    new CallExpr(PRIM_GET_MEMBER_VALUE,
                                                 _this, fieldNameSym));
    tmp->addFlag(FLAG_INSERT_AUTO_DESTROY);
    deinitBlock->insertAtTail(new DefExpr(tmp));
    deinitBlock->insertAtTail(setTmp);

    block->insertAtTail(new CondStmt(checkId, deinitBlock));
  }

  if (newField != NULL) {
    Symbol* newFieldNameSym = new_CStringSymbol(newField->name);
    // Set the union ID to store the target field
    block->insertAtTail(new CallExpr(PRIM_SET_UNION_ID,
                                     _this,
                                     new CallExpr(PRIM_FIELD_NAME_TO_NUM,
                                                  ct->symbol,
                                                  newFieldNameSym)));

    // Next, initialize the requested field.
    VarSymbol* tmp = newTemp("union_reset_init");
    tmp->addFlag(FLAG_NO_AUTO_DESTROY); // will transfer to the field.
    block->insertAtTail(new DefExpr(tmp));

    block->insertAtTail(new CallExpr(PRIM_DEFAULT_INIT_VAR, tmp,
                                     new CallExpr(PRIM_STATIC_FIELD_TYPE,
                                                  _this,
                                                  newFieldNameSym)));

    block->insertAtTail(new CallExpr(PRIM_SET_MEMBER,
                                     _this,
                                     newFieldNameSym,
                                     tmp));
  }

  return block;
}

// This function builds the getter or the setter, depending on the
// 'setter' argument.
FnSymbol* build_accessor(AggregateType* ct, Symbol* field,
                           bool setter, bool typeMethod) {
  const bool fieldIsConst = field->hasFlag(FLAG_CONST);
  const bool recordLike   = ct->isRecord() || ct->isUnion();
  const bool chapelClass  = isClassLike(ct) && isClass(ct);
  const bool typeOrParam  = field->hasEitherFlag(FLAG_TYPE_VARIABLE, FLAG_PARAM);
  FnSymbol*  fn           = new FnSymbol(field->name);

  fn->addFlag(FLAG_NO_IMPLICIT_COPY);
  fn->addFlag(FLAG_INLINE);

  if (ct->symbol->hasFlag(FLAG_ATOMIC_TYPE))
    fn->addFlag(FLAG_ATOMIC_TYPE);

  fn->addFlag(FLAG_FIELD_ACCESSOR);

  if (field->hasFlag(FLAG_DEPRECATED)) {
    fn->addFlag(FLAG_DEPRECATED);
    fn->deprecationMsg = field->deprecationMsg;
  }

  if (field->hasFlag(FLAG_UNSTABLE)) {
    fn->addFlag(FLAG_UNSTABLE);
    fn->unstableMsg = field->unstableMsg;
  }

  if (!typeMethod) {
    if (fieldIsConst)
      fn->addFlag(FLAG_REF_TO_CONST);
    else if (recordLike)
      fn->addFlag(FLAG_REF_TO_CONST_WHEN_CONST_THIS);
  }

  fn->insertFormalAtTail(new ArgSymbol(INTENT_BLANK, "_mt", dtMethodToken));

  fn->setMethod(true);

  Type* thisType = ct;

  if (chapelClass && (typeMethod || typeOrParam))
    thisType = ct->getDecoratedClass(ClassTypeDecorator::GENERIC);

  ArgSymbol* _this = new ArgSymbol(INTENT_BLANK, "this", thisType);

  if (typeMethod) {
    _this->addFlag(FLAG_TYPE_VARIABLE);
  }

  _this->addFlag(FLAG_ARG_THIS);
  fn->insertFormalAtTail(_this);

  if (field->isParameter()) {
    fn->retTag = RET_PARAM;

  } else if (field->hasFlag(FLAG_TYPE_VARIABLE)) {
    fn->retTag = RET_TYPE;

  } else {
    // Can't access the field if we don't return param/type.
    // This would be different if we added something like C++ static fields
    INT_ASSERT(!typeMethod);

    if (field->hasFlag(FLAG_SUPER_CLASS) ||
        field->hasFlag(FLAG_C_FLEXIBLE_ARRAY_FIELD)) {
      fn->retTag = RET_VALUE;
    } else {
      if (fieldIsConst || !setter)
        fn->retTag = RET_CONST_REF;
      else {
        fn->retTag = RET_REF;
        if (recordLike) {
          _this->intent = INTENT_REF;
        }
      }
    }
  }

  Symbol* baseSym = _this;
  if (typeOrParam && chapelClass) {
    // Strip the _owned/_shared wrapper, if applicable.
    VarSymbol* borrowOfThis = new VarSymbol("borrowOfThis");
    if (typeMethod) borrowOfThis->addFlag(FLAG_TYPE_VARIABLE);

    fn->insertAtTail(new DefExpr(borrowOfThis));
    // This cast "throws" when the receiver actual is nilable. OK because:
    // - If this field is a runtime type, we will generate an error below.
    // - Otherwise this method will be eliminated before lowerErrorHandling.
    CallExpr* cast = createCast(_this, dtBorrowedNonNilable->symbol);
    CallExpr* move = new CallExpr(PRIM_MOVE, borrowOfThis, cast);
    fn->insertAtTail(move);
    baseSym = borrowOfThis;
  }

  Symbol* fieldNameSym = new_CStringSymbol(field->name);

  if (isUnion(ct) && !ct->symbol->hasFlag(FLAG_EXTERN)) {
    if (setter) {
      // Set the union ID in the setter.
      // If the ID is different from the target, deinit whatever was
      // there and then default-init the field.
      CallExpr* idDiffers = new CallExpr("!=",
                              new CallExpr(PRIM_GET_UNION_ID, _this),
                              new CallExpr(PRIM_FIELD_NAME_TO_NUM,
                                           ct->symbol,
                                           fieldNameSym));

      BlockStmt* resetBlock = buildResetUnionField(_this, ct, field);
      fn->insertAtTail(new CondStmt(idDiffers, resetBlock));

    } else {
      // Check the union ID in the getter.
      CallExpr* idDiffers = new CallExpr("!=",
                              new CallExpr(PRIM_GET_UNION_ID, _this),
                              new CallExpr(PRIM_FIELD_NAME_TO_NUM,
                                           ct->symbol,
                                           fieldNameSym));
      CallExpr* halt = new CallExpr("halt",
                                    new_StringSymbol("illegal union access"));

      fn->insertAtTail(new CondStmt(idDiffers, halt));
    }
  }

  Expr* toReturn = NULL;
  if (isTypeSymbol(field) && isEnumType(field->type)) {
    fn->insertAtTail(new CallExpr(PRIM_RETURN, field));
    // better flatten enumerated types now
    ct->symbol->defPoint->insertBefore(field->defPoint->remove());
  } else if (field->hasFlag(FLAG_TYPE_VARIABLE) ||
             field->hasFlag(FLAG_SUPER_CLASS) ||
             field->hasFlag(FLAG_C_FLEXIBLE_ARRAY_FIELD)) {
    toReturn = new CallExpr(PRIM_GET_MEMBER_VALUE,
                            new SymExpr(baseSym),
                            new SymExpr(fieldNameSym));
    if (chapelClass && field->hasFlag(FLAG_TYPE_VARIABLE))
      // Issue an error when accessing a runtime-type field of a nilable class.
      toReturn = new CallExpr("chpl_checkLegalTypeFieldAccessor", _this,
                              toReturn, new_StringSymbol(field->name));
  } else {
    toReturn = new CallExpr(PRIM_GET_MEMBER,
                            new SymExpr(baseSym),
                            new SymExpr(fieldNameSym));
  }

  if (toReturn != NULL) {
    if (typeOrParam) {
      Symbol* alternate = NULL;
      if (field->hasFlag(FLAG_PARAM))
        alternate = gUninstantiated;
      else
        alternate = dtUninstantiated->symbol;

      fn->insertAtTail(new CondStmt(new CallExpr(PRIM_IS_BOUND, baseSym, fieldNameSym),
                                    new CallExpr(PRIM_RETURN, toReturn),
                                    new CallExpr(PRIM_RETURN, alternate)));
    } else {
      fn->insertAtTail(new CallExpr(PRIM_RETURN, toReturn));
    }
  }

  DefExpr* def = new DefExpr(fn);

  ct->symbol->defPoint->insertBefore(def);

  reset_ast_loc(fn, field);

  normalize(fn);

  ct->methods.add(fn);

  fn->setMethod(true);

  fn->addFlag(FLAG_METHOD_PRIMARY);

  fn->cname = astr("chpl_get_", ct->symbol->cname, "_", fn->cname);

  fn->addFlag(FLAG_NO_PARENS);

  fn->_this = _this;

  return fn;
}

// Getter and setter functions are provided by the compiler if not supplied by
// the user.
// These functions have the same binding strength as if they were user-defined.
// This function calls build_accessor multiple times to create appropriate
// accessors.
static void buildAccessors(AggregateType* ct, Symbol *field) {
  const bool fieldIsConst = field->hasFlag(FLAG_CONST);
  const bool recordLike = ct->isRecord() || ct->isUnion();
  const bool fieldTypeOrParam = field->isParameter() ||
                                field->hasFlag(FLAG_TYPE_VARIABLE);

  FnSymbol *setter = functionExists(field->name,
                                     dtMethodToken, ct, FIND_REF);
  FnSymbol *getter = functionExists(field->name,
                                     dtMethodToken, ct, FIND_NOT_REF);
  if (setter)
    fixupAccessor(ct, field, fieldIsConst, recordLike, setter);
  if (getter)
    fixupAccessor(ct, field, fieldIsConst, recordLike, getter);
  if (getter || setter)
    return;

  // Otherwise, build compiler-default getter and setter.

  if (isUnion(ct) && !ct->symbol->hasFlag(FLAG_EXTERN)) {
    // Unions need a special getter and setter.
    build_accessor(ct, field, /* setter? */ false, /* type method? */ false);
    build_accessor(ct, field, /* setter? */ true,  /* type method? */ false);
  } else {
    // Otherwise, only build one version for records and classes.
    // This is normally the 'ref' version.
    build_accessor(ct, field,
                   /* setter? */ !fieldIsConst, /* type method? */ false);
  }

  // If the field is type/param, add a type-method accessor.
  if (fieldTypeOrParam) {
    build_accessor(ct, field, /* getter? */ false, /* type method? */ true);
  }
}

static FnSymbol* chplGenMainExists() {
  bool          errorP   = false;
  ModuleSymbol* module   = ModuleSymbol::mainModule();
  FnSymbol*     matchFn  = NULL;
  ModuleSymbol* matchMod = NULL;

  const char *mainAstr = astr("main");

  forv_Vec(FnSymbol, fn, gFnSymbols) {
    if (mainAstr == fn->name) {
      if (fn->numFormals() == 0 ||
          (fn->numFormals() == 1 &&
           fn->getFormal(1)->typeInfo() == dtArray) ) {
        mainHasArgs = (fn->numFormals() > 0);

        CallExpr* ret = toCallExpr(fn->body->body.last());

        if (ret == NULL || ret->isPrimitive(PRIM_RETURN) == false) {
          INT_FATAL(fn, "function is not normalized");
        }

        SymExpr* sym = toSymExpr(ret->get(1));

        if (sym == NULL) {
          INT_FATAL(fn, "function is not normalized");
        }

        mainReturnsSomething = (sym->symbol() != gVoid);

        ModuleSymbol* fnMod = fn->getModule();

        if (fnMod == module) {
          if (matchFn == NULL) {
            matchFn  = fn;
            matchMod = fnMod;

          } else {
            if (errorP == false) {
              const char* info = "";

              errorP = true;

              if (fnMod == matchMod) {
                info = " (use --main-module to disambiguate)";
              }

              USR_FATAL_CONT("Ambiguous main() function%s:", info);
              USR_PRINT(matchFn, "in module %s", matchMod->name);
            }

            USR_PRINT(fn, "in module %s", fnMod->name);
          } // else, this is not a candidate for the main module
        }

      } else {
        USR_FATAL_CONT("main() function with invalid signature");
        USR_PRINT(fn, "in module %s", fn->getModule()->name);
      }
    }
  }

  if (errorP == false) {
    USR_STOP();
  }

  return matchFn;
}


static void buildChplEntryPoints() {
  //
  // chpl_user_main is the (user) programmatic portion of the app
  //
  ModuleSymbol* mainModule   = ModuleSymbol::mainModule();
  if (chplUserMain == nullptr) {
    chplUserMain = chplGenMainExists();
  } else if (chplUserMain->hasFlag(FLAG_RESOLVED_EARLY)) {
    // set mainReturnsSomething according to the return type of main
    if (chplUserMain->retType &&
        chplUserMain->retType != dtUnknown &&
        chplUserMain->retType != dtVoid) {
      mainReturnsSomething = true;
    }
  }

  if (fLibraryCompile == true && chplUserMain != NULL) {
    USR_WARN(chplUserMain,
             "'main()' has no special meaning when compiling "
             "in --library mode");
  }

  if (chplUserMain == NULL) {
    SET_LINENO(mainModule);

    chplUserMain          = new FnSymbol("main");
    chplUserMain->retType = dtVoid;

    mainModule->block->insertAtTail(new DefExpr(chplUserMain));

    normalize(chplUserMain);

  } else {
    if (! isModuleSymbol(chplUserMain->defPoint->parentSymbol))
      USR_FATAL_CONT(chplUserMain,
                "main function must be defined at module scope");

    if (chplUserMain->retTag == RET_TYPE || chplUserMain->retTag == RET_PARAM)
      USR_FATAL_CONT(chplUserMain,
                "main function cannot return a type or a param");
  }

  SET_LINENO(chplUserMain);

  chplUserMain->cname = astr("chpl_user_main");
  if (fIdBasedMunging && !mainModule->astloc.id().isEmpty()) {
    const char* cname = astr(mainModule->astloc.id().symbolPath().c_str(),
                             ".main");
    chplUserMain->cname = cname;
  }

  //
  // chpl_gen_main is the entry point for the compiler-generated code.
  // It invokes the user's code.
  //

  ArgSymbol* arg = new ArgSymbol(INTENT_CONST_REF, "_arg", dtMainArgument);

  chpl_gen_main          = new FnSymbol("chpl_gen_main");
  chpl_gen_main->retType = dtInt[INT_SIZE_64];
  chpl_gen_main->cname   = astr("chpl_gen_main");

  chpl_gen_main->insertFormalAtTail(arg);

  chpl_gen_main->addFlag(FLAG_EXPORT);  // chpl_gen_main is always exported.
  chpl_gen_main->addFlag(FLAG_LOCAL_ARGS);
  chpl_gen_main->addFlag(FLAG_COMPILER_GENERATED);
  chpl_gen_main->addFlag(FLAG_GEN_MAIN_FUNC);

  mainModule->block->insertAtTail(new DefExpr(chpl_gen_main));

  VarSymbol* main_ret = newTemp("_main_ret", dtInt[INT_SIZE_64]);
  VarSymbol* endCount = NULL;

  chpl_gen_main->insertAtTail(new DefExpr(main_ret));

  //
  // In --minimal-modules compilation mode, we won't have any
  // parallelism, so no need for end counts (or atomic/sync types to
  // support them).
  //
  if (fMinimalModules == false) {
    endCount = newTemp("_endCount");
    chpl_gen_main->insertAtTail(new DefExpr(endCount));
    chpl_gen_main->insertAtTail(new CallExpr(PRIM_MOVE,
                                             endCount,
                                             new CallExpr("_endCountAlloc",
                                                          gFalse)));

    chpl_gen_main->insertAtTail(new CallExpr(PRIM_SET_DYNAMIC_END_COUNT, endCount));
  }

  chpl_gen_main->insertAtTail(new CallExpr("chpl_rt_preUserCodeHook"));

  // We have to initialize the main module explicitly.
  // It will initialize all the modules it uses, recursively.
  if (!fMultiLocaleInterop) {
    chpl_gen_main->insertAtTail(new CallExpr(mainModule->initFn));
    // also init other modules mentioned on command line
    forv_Vec(ModuleSymbol, mod, gModuleSymbols) {
      if (mod->hasFlag(FLAG_MODULE_FROM_COMMAND_LINE_FILE) &&
          mod != mainModule) {
        chpl_gen_main->insertAtTail(new CallExpr(mod->initFn));
      }
    }

  } else {
    // Create an extern definition for the multilocale library server's main
    // function.  chpl_gen_main needs to call it in the course of its run, so
    // that we correctly set up the runtime.
    FnSymbol* chpl_mli_smain = new FnSymbol("chpl_mli_smain");
    chpl_mli_smain->addFlag(FLAG_EXTERN);
    chpl_mli_smain->addFlag(FLAG_LOCAL_ARGS);
    // Takes the connection information
    ArgSymbol* setup_conn = new ArgSymbol(INTENT_BLANK, "setup_conn",
                                          dtStringC);
    chpl_mli_smain->insertFormalAtTail(setup_conn);

    mainModule->block->insertAtTail(new DefExpr(chpl_mli_smain));

    VarSymbol* connection = newTemp("setup_conn");
    chpl_gen_main->insertAtTail(new DefExpr(connection));
    chpl_gen_main->insertAtTail(new CallExpr(PRIM_MOVE, connection,
                                             new CallExpr("chpl_get_mli_connection",
                                                          arg)));
    chpl_gen_main->insertAtTail(new CallExpr("chpl_mli_smain", connection));
    normalize(chpl_mli_smain);
  }

  bool main_ret_set = false;

  if (!fLibraryCompile && !fDynoGenStdLib) {
    SET_LINENO(chpl_gen_main);

    if (mainHasArgs == true) {
      VarSymbol* converted_args = newTemp("_main_args");

      converted_args->addFlag(FLAG_INSERT_AUTO_DESTROY);

      chpl_gen_main->insertAtTail(new DefExpr(converted_args));
      chpl_gen_main->insertAtTail(new CallExpr(PRIM_MOVE,
                                               converted_args,
                                               new CallExpr("chpl_convert_args", arg)));

      if (mainReturnsSomething) {
        chpl_gen_main->insertAtTail(new CallExpr(PRIM_MOVE,
                                                 main_ret,
                                                 new CallExpr("main", converted_args)));
        main_ret_set = true;

      } else {
        chpl_gen_main->insertAtTail(new CallExpr("main", converted_args));
      }

    } else {
      if (mainReturnsSomething) {
        chpl_gen_main->insertAtTail(new CallExpr(PRIM_MOVE,
                                                 main_ret,
                                                 new CallExpr("main")));
        main_ret_set = true;

      } else {
        chpl_gen_main->insertAtTail(new CallExpr("main"));
      }
    }
  }

  if (!main_ret_set) {
    chpl_gen_main->insertAtTail(new CallExpr(PRIM_MOVE,
                                             main_ret,
                                             new_IntSymbol(0, INT_SIZE_64)));
  }

  chpl_gen_main->insertAtTail(new CallExpr("chpl_rt_postUserCodeHook"));

  //
  // In --minimal-modules compilation mode, we won't be waiting on an
  // endcount (see comment above)
  //
  if (fMinimalModules == false) {
    chpl_gen_main->insertAtTail(new CallExpr("_waitEndCount", endCount));
    chpl_gen_main->insertAtTail(new CallExpr("chpl_deinitModules"));
  }

  chpl_gen_main->insertAtTail(new CallExpr(PRIM_RETURN, main_ret));

  normalize(chpl_gen_main);
}

static FnSymbol* buildRecordIsComparableFunc(AggregateType* ct,
                                             const char* op) {
  Symbol* opSym = new_CStringSymbol(op);

  FnSymbol* fn = new FnSymbol("chpl_fields_are_comparable");
  fn->addFlag(FLAG_COMPILER_GENERATED);
  fn->addFlag(FLAG_LAST_RESORT);
  fn->addFlag(FLAG_PARAM);
  ArgSymbol* arg1 = new ArgSymbol(INTENT_BLANK, "_arg1", ct);
  arg1->addFlag(FLAG_MARKED_GENERIC);
  ArgSymbol* arg2 = new ArgSymbol(INTENT_BLANK, "_arg2", ct);
  arg2->addFlag(FLAG_MARKED_GENERIC);
  fn->insertFormalAtTail(arg1);
  fn->insertFormalAtTail(arg2);
  fn->retType = dtBool;
  fn->retTag = RET_PARAM;

  if (ct->numFields() == 0) {  // no fields, no need for &&
    fn->insertAtTail(new CallExpr(PRIM_RETURN, gTrue));
  }
  else {  // we have some fields, so possibly && them
    std::vector<CallExpr *> fieldChecks;
    for_fields(tmp, ct) {
      if (!tmp->hasFlag(FLAG_IMPLICIT_ALIAS_FIELD) &&
          !tmp->hasFlag(FLAG_TYPE_VARIABLE)) {  // types fields must be equal
        Expr* left = new CallExpr(tmp->name, gMethodToken, arg1);
        Expr* right = new CallExpr(tmp->name, gMethodToken, arg2);
        fieldChecks.push_back(new CallExpr(PRIM_CALL_RESOLVES,
                                           opSym, left, right));
      }
    }
    if (fieldChecks.size() == 0) {
      fn->insertAtTail(new CallExpr(PRIM_RETURN, gTrue));
    }
    else if (fieldChecks.size() == 1) {
      fn->insertAtTail(new CallExpr(PRIM_RETURN, fieldChecks[0]));
    }
    else {
      CallExpr* boolExpr = new CallExpr(PRIM_AND);
      for_vector(CallExpr, ce, fieldChecks) {
        boolExpr->insertAtTail(ce);
      }
      fn->insertAtTail(new CallExpr(PRIM_RETURN, boolExpr));
    }
  }

  DefExpr* def = new DefExpr(fn);
  ct->symbol->defPoint->insertBefore(def);
  reset_ast_loc(def, ct->symbol);
  normalize(fn);

  return fn;
}

static void buildRecordComparisonFunc(AggregateType* ct, const char* op) {
  if (operatorExists(op, ct, ct)) {
    return;
  }

  const char* astrOp = astr(op);

  // we need to special case `!=`:
  // it can return true early, and returns false after checking all fields
  // all other operators do the exact opposite
  FnSymbol* fn = new FnSymbol(op);
  fn->addFlag(FLAG_COMPILER_GENERATED);
  fn->addFlag(FLAG_LAST_RESORT);
  fn->addFlag(FLAG_OPERATOR);

  // Make the generated operator be an operator method
  ArgSymbol* methodToken = new ArgSymbol(INTENT_BLANK, "_mt", dtMethodToken);
  fn->insertFormalAtTail(methodToken);
  ArgSymbol* _this = new ArgSymbol(INTENT_BLANK, "this", ct);
  _this->addFlag(FLAG_TYPE_VARIABLE);
  _this->addFlag(FLAG_ARG_THIS);
  fn->insertFormalAtTail(_this);
  fn->_this = _this;
  fn->setMethod(true);
  ct->methods.add(fn);

  ArgSymbol* arg1 = new ArgSymbol(INTENT_BLANK, "_arg1", ct);
  arg1->addFlag(FLAG_MARKED_GENERIC);
  ArgSymbol* arg2 = new ArgSymbol(INTENT_BLANK, "_arg2", ct);
  arg2->addFlag(FLAG_MARKED_GENERIC);
  fn->insertFormalAtTail(arg1);
  fn->insertFormalAtTail(arg2);
  fn->retType = dtBool;

  //build the where clause
  Expr* typeComp = new CallExpr("==", new CallExpr(PRIM_TYPEOF, arg1),
                                      new CallExpr(PRIM_TYPEOF, arg2));
  Expr* fieldsCheckExpr = new CallExpr(buildRecordIsComparableFunc(ct, op),
                                       arg1, arg2);
  fn->where = new BlockStmt(new CallExpr(PRIM_AND, typeComp, fieldsCheckExpr));

  if (astrOp == astrSeq) {
    buildRecordEqualsBody(ct, fn, arg1, arg2);
  }
  else if (astrOp == astrSne) {
    buildRecordNotEqualsBody(ct, fn, arg1, arg2);
  }
  else if (astrOp == astrSgt) {
    buildRecordGreaterThanBody(ct, fn, arg1, arg2, false);
  }
  else if (astrOp == astrSgte) {
    buildRecordGreaterThanBody(ct, fn, arg1, arg2, true);
  }
  else if (astrOp == astrSlt) {
    buildRecordLessThanBody(ct, fn, arg1, arg2, false);
  }
  else if (astrOp == astrSlte) {
    buildRecordLessThanBody(ct, fn, arg1, arg2, true);
  }
  else {
    INT_FATAL("Unrecognized operator was passed to buildRecordComparisonFunc");
  }

  DefExpr* def = new DefExpr(fn);
  ct->symbol->defPoint->insertBefore(def);
  reset_ast_loc(def, ct->symbol);
  normalize(fn);
}

static void buildRecordEqualsBody(AggregateType *ct, FnSymbol *fn,
                                  ArgSymbol *arg1, ArgSymbol *arg2) {
  // add comparisons for fields
  for_fields(tmp, ct) {
    if (!tmp->hasFlag(FLAG_IMPLICIT_ALIAS_FIELD) &&
        !tmp->hasFlag(FLAG_TYPE_VARIABLE)) {  // types fields must be equal
      Expr* left = new CallExpr(tmp->name, gMethodToken, arg1);
      Expr* right = new CallExpr(tmp->name, gMethodToken, arg2);
      CallExpr *elemComp = new CallExpr("chpl_field_neq", left, right);
      fn->insertAtTail(new CondStmt(elemComp,
                                    new CallExpr(PRIM_RETURN, gFalse)));
    }
  }
  // either it is an empty record, and we didn't add any meaningful comparisons,
  // or we added those comparisons but they never returned

  // for ==, in either case we return true
  fn->insertAtTail(new CallExpr(PRIM_RETURN, gTrue));
}

static void buildRecordNotEqualsBody(AggregateType *ct, FnSymbol *fn,
                                  ArgSymbol *arg1, ArgSymbol *arg2) {
  // add comparisons for fields
  for_fields(tmp, ct) {
    if (!tmp->hasFlag(FLAG_IMPLICIT_ALIAS_FIELD) &&
        !tmp->hasFlag(FLAG_TYPE_VARIABLE)) {  // types fields must be equal
      Expr* left = new CallExpr(tmp->name, gMethodToken, arg1);
      Expr* right = new CallExpr(tmp->name, gMethodToken, arg2);
      CallExpr *elemComp = new CallExpr("chpl_field_neq", left, right);
      fn->insertAtTail(new CondStmt(elemComp,
                                    new CallExpr(PRIM_RETURN, gTrue)));
    }
  }
  // either it is an empty record, and we didn't add any meaningful comparisons,
  // or we added those comparisons but they never returned

  // for !=, in either case we return false
  fn->insertAtTail(new CallExpr(PRIM_RETURN, gFalse));
}

static void buildRecordLessThanBody(AggregateType *ct, FnSymbol *fn,
                                    ArgSymbol *arg1, ArgSymbol *arg2,
                                    bool allowEquals) {
  // add comparisons for fields
  for_fields(tmp, ct) {
    if (!tmp->hasFlag(FLAG_IMPLICIT_ALIAS_FIELD) &&
        !tmp->hasFlag(FLAG_TYPE_VARIABLE)) {  // types fields must be equal

        CallExpr *elemCompTrue = new CallExpr("chpl_field_lt",
                                   new CallExpr(tmp->name, gMethodToken, arg1),
                                   new CallExpr(tmp->name, gMethodToken, arg2));
        fn->insertAtTail(new CondStmt(elemCompTrue,
                                      new CallExpr(PRIM_RETURN, gTrue)));

        CallExpr *elemCompFalse = new CallExpr("chpl_field_gt",
                                   new CallExpr(tmp->name, gMethodToken, arg1),
                                   new CallExpr(tmp->name, gMethodToken, arg2));

        fn->insertAtTail(new CondStmt(elemCompFalse,
                                      new CallExpr(PRIM_RETURN, gFalse)));
    }
  }

  // either it is an empty record, and we didn't add any meaningful comparisons,
  // or we added those comparisons but they never returned
  if (allowEquals) {
    fn->insertAtTail(new CallExpr(PRIM_RETURN, gTrue));
  }
  else {
    fn->insertAtTail(new CallExpr(PRIM_RETURN, gFalse));
  }
}

static void buildRecordGreaterThanBody(AggregateType *ct, FnSymbol *fn,
                                       ArgSymbol *arg1, ArgSymbol *arg2,
                                       bool allowEquals) {
  // add comparisons for fields
  for_fields(tmp, ct) {
    if (!tmp->hasFlag(FLAG_IMPLICIT_ALIAS_FIELD) &&
        !tmp->hasFlag(FLAG_TYPE_VARIABLE)) {  // types fields must be equal

        CallExpr *elemCompTrue = new CallExpr("chpl_field_gt",
                                   new CallExpr(tmp->name, gMethodToken, arg1),
                                   new CallExpr(tmp->name, gMethodToken, arg2));
        fn->insertAtTail(new CondStmt(elemCompTrue,
                                      new CallExpr(PRIM_RETURN, gTrue)));

        CallExpr *elemCompFalse = new CallExpr("chpl_field_lt",
                                   new CallExpr(tmp->name, gMethodToken, arg1),
                                   new CallExpr(tmp->name, gMethodToken, arg2));

        fn->insertAtTail(new CondStmt(elemCompFalse,
                                      new CallExpr(PRIM_RETURN, gFalse)));
    }
  }

  // either it is an empty record, and we didn't add any meaningful comparisons,
  // or we added those comparisons but they never returned
  if (allowEquals) {
    fn->insertAtTail(new CallExpr(PRIM_RETURN, gTrue));
  }
  else {
    fn->insertAtTail(new CallExpr(PRIM_RETURN, gFalse));
  }
}

// Builds default enum functions that are defined outside of the scope in which
// the enum type is defined
// It is necessary to have this separated out, because such functions are not
// automatically created when the EnumType is copied.
void buildEnumFunctions(EnumType* et) {
  buildEnumStringOrBytesCastFunctions(et, dtBytes);
  buildEnumStringOrBytesCastFunctions(et, dtString);

  buildEnumIntegerCastFunctions(et);
  buildEnumFirstFunction(et);
  buildEnumSizeFunction(et);
  buildEnumOrderFunctions(et);
}


static void buildEnumSizeFunction(EnumType* et) {
  if (functionExists("size", et))
    return;
  // Build a function that returns the length of the enum specified
  FnSymbol* fn = new FnSymbol("size");

  fn->addFlag(FLAG_COMPILER_GENERATED);
  fn->addFlag(FLAG_LAST_RESORT);
  fn->addFlag(FLAG_NO_PARENS);

  fn->setMethod(true);

  fn->insertFormalAtTail(new ArgSymbol(INTENT_BLANK, "_mt", dtMethodToken));

  fn->_this = new ArgSymbol(INTENT_BLANK, "this", et);
  fn->_this->addFlag(FLAG_ARG_THIS);
  fn->_this->addFlag(FLAG_TYPE_VARIABLE);

  fn->insertFormalAtTail(fn->_this);

  fn->retTag = RET_PARAM;

  VarSymbol*  varS = new_IntSymbol(et->constants.length);
  fn->insertAtTail(new CallExpr(PRIM_RETURN, varS));

  DefExpr* fnDef = new DefExpr(fn);
  // needs to go in the base module because when called from _defaultOf(et),
  // they are automatically inserted
  baseModule->block->insertAtTail(fnDef);
  reset_ast_loc(fnDef, et->symbol);

  normalize(fn);
  fn->tagIfGeneric();
}



static void buildEnumFirstFunction(EnumType* et) {
  if (functionExists("chpl_enum_first", et))
    return;
  // Build a function that returns the first option for the enum
  // specified, also known as the default.
  FnSymbol* fn = new FnSymbol("chpl_enum_first");
  fn->addFlag(FLAG_COMPILER_GENERATED);
  fn->addFlag(FLAG_LAST_RESORT);
  // Making this compiler generated allows users to define what the
  // default is for a particular enum.  They can also redefine the
  // _defaultOf function for the enum to obtain this functionality (and
  // that is the encouraged path to take).
  fn->addFlag(FLAG_INLINE);
  ArgSymbol* arg = new ArgSymbol(INTENT_BLANK, "t", et);
  arg->addFlag(FLAG_TYPE_VARIABLE);
  fn->insertFormalAtTail(arg);
  fn->retTag = RET_PARAM;

  DefExpr* defExpr = toDefExpr(et->constants.head);
  if (defExpr)
    fn->insertAtTail(new CallExpr(PRIM_RETURN, defExpr->sym));
  else
    fn->insertAtTail(new CallExpr(PRIM_RETURN, gVoid));
  // If there are one or more enumerators for this type, return the first one
  // listed.  Otherwise return nothing.

  DefExpr* fnDef = new DefExpr(fn);
  // needs to go in the base module because when called from _defaultOf(et),
  // they are automatically inserted
  baseModule->block->insertAtTail(fnDef);
  reset_ast_loc(fnDef, et->symbol);

  normalize(fn);
  fn->tagIfGeneric();
}

static void buildEnumIntegerCastFunctions(EnumType* et) {
  bool initsExist = !et->isAbstract();

  FnSymbol* fn;
  ArgSymbol* from;
  ArgSymbol* toType;
  DefExpr* def;
  // only build the int<->enum cast functions if some enums were given values
  if (initsExist) {
    // build the integral value to enumerated type cast function
    fn = new FnSymbol(astrScolon);
    fn->addFlag(FLAG_OPERATOR);
    fn->addFlag(FLAG_COMPILER_GENERATED);
    fn->addFlag(FLAG_LAST_RESORT);
    from = new ArgSymbol(INTENT_BLANK, "from", dtIntegral);
    toType = new ArgSymbol(INTENT_BLANK, "t", et);
    toType->addFlag(FLAG_TYPE_VARIABLE);
    fn->insertFormalAtTail(from);
    fn->insertFormalAtTail(toType);
    fn->throwsErrorInit();

    // Generate a select statement with a 'when' clause for each of
    // the enumeration constants with an integer value which returns
    // the enum constant.
    int64_t count = 0;
    BlockStmt* whenstmts = buildChapelStmt();
    Expr* lastInit = NULL;
    for_enums(constant, et) {
      if (constant->init) {
        lastInit = constant->init;
        count = 0;
      } else {
        if (lastInit) {
          count++;
        }
      }
      if (lastInit != NULL) {
        CondStmt* when =
          new CondStmt(new CallExpr(PRIM_WHEN,
                                    new CallExpr("+", lastInit->copy(),
                                                 new SymExpr(new_IntSymbol(count)))),
                       new CallExpr(PRIM_RETURN,
                                    new CallExpr(PRIM_CAST,
                                                  et->symbol, from)));
        whenstmts->insertAtTail(when);
      }
    }
    fn->insertAtTail(buildSelectStmt(new SymExpr(from), whenstmts));

    // if we get through the select statement without finding our case
    // and returning its value (which can happen for semi-concrete
    // enums), call chpl_enum_cast_error(), which throws an error.
    fn->insertAtTail(new TryStmt(false,
                   new BlockStmt(new CallExpr("chpl_enum_cast_error",
                                              from,
                                              new_StringSymbol(et->symbol->name))),
                                 NULL));

    // in addition, insert a dummy return since the compiler doesn't
    // know that chpl_enum_cast_error() always throws
    fn->insertAtTail(new CallExpr(PRIM_RETURN,
                                  toDefExpr(et->constants.first())->sym));

    def = new DefExpr(fn);
    baseModule->block->insertAtTail(def);
    reset_ast_loc(def, et->symbol);
    normalize(fn);
    fn->tagIfGeneric();

    // build the enumerated to integer cast
    fn = new FnSymbol(astrScolon);
    fn->addFlag(FLAG_OPERATOR);
    fn->addFlag(FLAG_COMPILER_GENERATED);
    fn->addFlag(FLAG_LAST_RESORT);
    from = new ArgSymbol(INTENT_BLANK, "from", et);
    toType = new ArgSymbol(INTENT_BLANK, "t", dtIntegral);
    toType->addFlag(FLAG_TYPE_VARIABLE);
    fn->insertFormalAtTail(from);
    fn->insertFormalAtTail(toType);

    if (et->isConcrete()) {
      // If this enum is concrete, rely on the C cast and inline
      fn->insertAtTail(new CallExpr(PRIM_RETURN,
                                    new CallExpr(PRIM_CAST, toType, from)));
      fn->addFlag(FLAG_INLINE);
    } else {
      // Otherwise, it's semi-concrete, so we need errors for some
      // cases.  Generate a select statement with when clauses for
      // each of the enumeration constants, where the action is to
      // call chpl_enum_cast_error_no_int() for enums without an
      // associated integer value.  This routine throws an error.
      fn->throwsErrorInit();

      if (fWarnUnstable) {
        USR_WARN(et->symbol, "it has been suggested that support for "
                 "semi-concrete enums like this (in which initial members "
                 "have no integer values, but later ones do) should be "
                 "deprecated, so this enum could be considered unstable; "
                 "if you value such enums, please let the Chapel team know.");
      }

      count = 0;
      whenstmts = buildChapelStmt();
      lastInit = NULL;
      for_enums(constant, et) {
        if (constant->init) {
          lastInit = constant->init;
          count = 0;
        } else {
          if (lastInit != NULL) {
            count++;
          }
        }
        CallExpr* result;
        if (lastInit) {
          result = new CallExpr(PRIM_RETURN,
                                new CallExpr(PRIM_CAST, toType,
                                             new CallExpr("+", lastInit->copy(),
                                                          new SymExpr(new_IntSymbol(count)))));
        } else {
          result = new CallExpr("chpl_enum_cast_error_no_int",
                                new_StringSymbol(et->symbol->name),
                                new_StringSymbol(constant->sym->name));
        }
        CondStmt* when =
          new CondStmt(new CallExpr(PRIM_WHEN, new SymExpr(constant->sym)),
                       result);

        whenstmts->insertAtTail(when);
      }

      // We should never get to the otherwise clause because it would
      // imply that the enum expression was storing a constant that
      // isn't part of the enum.
      CondStmt* otherwise =
        new CondStmt(new CallExpr(PRIM_WHEN),
                     new BlockStmt(new CallExpr("halt",
                                                new_StringSymbol("should never get here"))));
      whenstmts->insertAtTail(otherwise);

      // wrap a try statement around the select statement and insert a
      // bogus return to help the compiler know that all paths return.
      fn->insertAtTail(new TryStmt(false,
                                   buildSelectStmt(new SymExpr(from), whenstmts),
                                   NULL));
      fn->insertAtTail(new CallExpr(PRIM_RETURN, new_IntSymbol(0)));
    }

    def = new DefExpr(fn);
    //
    // Like other enum functions, these cast functions have
    // traditionally needed to go in the base module in order to be
    // available in the event of local enums.
    //
    baseModule->block->insertAtTail(def);
    reset_ast_loc(def, et->symbol);
    normalize(fn);
    fn->tagIfGeneric();
  }
}


//
// Create a function that converts an enum symbol to an integer 0, 1, 2, ...:
//
//   'proc chpl_enumToOrder([param] e: enum) [param] : int'
//
static void buildEnumToOrderFunction(EnumType* et, bool paramVersion) {
  FnSymbol* fn = new FnSymbol(astr("chpl__enumToOrder"));
  fn->addFlag(FLAG_COMPILER_GENERATED);
  fn->addFlag(FLAG_LAST_RESORT);
  ArgSymbol* arg1 = new ArgSymbol(paramVersion ? INTENT_PARAM: INTENT_BLANK,
                                  "e", et);
  fn->insertFormalAtTail(arg1);
  if (paramVersion)
    fn->retTag = RET_PARAM;

  // Generate a select statement with when clauses for each of the
  // enumeration constants, and an otherwise clause that calls halt.
  int64_t count = 0;
  BlockStmt* whenstmts = buildChapelStmt();
  for_enums(constant, et) {
    CondStmt* when =
      new CondStmt(new CallExpr(PRIM_WHEN, new SymExpr(constant->sym)),
                   new CallExpr(PRIM_RETURN, new SymExpr(new_IntSymbol(count)))
                   );
    whenstmts->insertAtTail(when);
    count++;
  }
  const char * errorString = "enumerated type out of bounds";
  CondStmt* otherwise =
    new CondStmt(new CallExpr(PRIM_WHEN),
                 new BlockStmt(new CallExpr("halt",
                                            new_StringSymbol(errorString))));
  whenstmts->insertAtTail(otherwise);
  fn->insertAtTail(buildSelectStmt(new SymExpr(arg1), whenstmts));
  DefExpr* def = new DefExpr(fn);
  baseModule->block->insertAtTail(def);
  reset_ast_loc(def, et->symbol);
  normalize(fn);
  fn->tagIfGeneric();
}

//
// Create a function that converts an integer 0, 1, 2, ... into a
// value from the given enumerated type 'et':
//
//   'proc chpl_enumToOrder(i: integral, type et: et): et'
//
static void buildOrderToEnumFunction(EnumType* et, bool paramVersion) {
  FnSymbol* fn = new FnSymbol(astr("chpl__orderToEnum"));
  fn->addFlag(FLAG_COMPILER_GENERATED);
  fn->addFlag(FLAG_LAST_RESORT);
  ArgSymbol* arg1 = new ArgSymbol(paramVersion ? INTENT_PARAM : INTENT_BLANK,
                                  "i", dtIntegral);
  ArgSymbol* arg2 = new ArgSymbol(INTENT_BLANK, "et", et);
  arg2->addFlag(FLAG_TYPE_VARIABLE);
  fn->insertFormalAtTail(arg1);
  fn->insertFormalAtTail(arg2);
  if (paramVersion)
    fn->retTag = RET_PARAM;

  // Generate a select statement with when clauses for each of the
  // enumeration constants, and an otherwise clause that calls halt.
  int64_t count = 0;
  BlockStmt* whenstmts = buildChapelStmt();
  for_enums(constant, et) {
    CondStmt* when =
      new CondStmt(new CallExpr(PRIM_WHEN, new SymExpr(new_IntSymbol(count))),
                   new CallExpr(PRIM_RETURN, new SymExpr(constant->sym)));;
    whenstmts->insertAtTail(when);
    count++;
  }
  const char * errorString = "enumerated type out of bounds in chpl__orderToEnum()";
  CondStmt* otherwise =
    new CondStmt(new CallExpr(PRIM_WHEN),
                 new BlockStmt(new CallExpr(paramVersion ? "compilerError" : "halt",
                                            new_StringSymbol(errorString))));
  whenstmts->insertAtTail(otherwise);
  fn->insertAtTail(buildSelectStmt(new SymExpr(arg1), whenstmts));
  DefExpr* def = new DefExpr(fn);
  baseModule->block->insertAtTail(def);
  reset_ast_loc(def, et->symbol);
  normalize(fn);
  fn->tagIfGeneric();
}

//
// Build functions for converting enums to 0-based ordinal values and
// back again
//
static void buildEnumOrderFunctions(EnumType* et) {
  //
  // TODO: optimize case when enums are adjacent by using math rather
  // than select statements
  //
  buildEnumToOrderFunction(et, true);
  buildEnumToOrderFunction(et, false);
  buildOrderToEnumFunction(et, true);
  buildOrderToEnumFunction(et, false);
}


static void buildRecordAssignmentFunction(AggregateType* ct) {
  if (operatorExists("=", ct, ct)) {
    return;
  }

  bool externRecord = ct->symbol->hasFlag(FLAG_EXTERN);

  FnSymbol* fn = new FnSymbol("=");
  fn->addFlag(FLAG_ASSIGNOP);
  fn->addFlag(FLAG_COMPILER_GENERATED);
  fn->addFlag(FLAG_LAST_RESORT);
  fn->addFlag(FLAG_OPERATOR);

  // Make the generated operator be an operator method
  ArgSymbol* methodToken = new ArgSymbol(INTENT_BLANK, "_mt", dtMethodToken);
  fn->insertFormalAtTail(methodToken);
  ArgSymbol* _this = new ArgSymbol(INTENT_BLANK, "this", ct);
  _this->addFlag(FLAG_TYPE_VARIABLE);
  _this->addFlag(FLAG_ARG_THIS);
  fn->insertFormalAtTail(_this);
  fn->_this = _this;
  fn->setMethod(true);
  ct->methods.add(fn);

  ArgSymbol* arg1 = new ArgSymbol(INTENT_REF, "_arg1", ct);
  arg1->addFlag(FLAG_MARKED_GENERIC);
  ArgSymbol* arg2 = new ArgSymbol(INTENT_REF_MAYBE_CONST, "_arg2", ct);
  arg2->addFlag(FLAG_MARKED_GENERIC);

  fn->insertFormalAtTail(arg1);
  fn->insertFormalAtTail(arg2);

  fn->retType = dtVoid;
  fn->where = new BlockStmt(new CallExpr("==",
                                         new CallExpr(PRIM_TYPEOF, arg1),
                                         new CallExpr(PRIM_TYPEOF, arg2)));


  if (externRecord) {
    fn->insertAtTail(new CallExpr(PRIM_ASSIGN, arg1, arg2));
    ct->symbol->addFlag(FLAG_POD);
    fn->addFlag(FLAG_INLINE);
  } else {
    for_fields(tmp, ct) {
      if (!tmp->hasFlag(FLAG_IMPLICIT_ALIAS_FIELD)) {
        if (!tmp->hasFlag(FLAG_TYPE_VARIABLE) &&
            !tmp->isParameter())
          fn->insertAtTail(new CallExpr("=",
                                        new CallExpr(".", arg1, new_CStringSymbol(tmp->name)),
                                        new CallExpr(".", arg2, new_CStringSymbol(tmp->name))));
      }
    }
  }

  DefExpr* def = new DefExpr(fn);
  ct->symbol->defPoint->insertBefore(def);
  reset_ast_loc(def, ct->symbol);
  normalize(fn);
}

static void buildExternAssignmentFunction(Type* type)
{
  if (operatorExists("=", type, type))
    return;

  FnSymbol* fn = new FnSymbol("=");
  fn->addFlag(FLAG_ASSIGNOP);
  type->symbol->addFlag(FLAG_POD);
  fn->addFlag(FLAG_COMPILER_GENERATED);
  fn->addFlag(FLAG_LAST_RESORT);
  fn->addFlag(FLAG_INLINE);

  ArgSymbol* arg1 = new ArgSymbol(INTENT_REF, "_arg1", type);
  ArgSymbol* arg2 = new ArgSymbol(INTENT_BLANK, "_arg2", type);
  fn->insertFormalAtTail(arg1);
  fn->insertFormalAtTail(arg2);
  fn->insertAtTail(new CallExpr(PRIM_ASSIGN, arg1, arg2));
  DefExpr* def = new DefExpr(fn);
  if (type->symbol->defPoint->parentSymbol == rootModule)
    baseModule->block->body.insertAtTail(def);
  else
    type->symbol->defPoint->insertBefore(def);
  reset_ast_loc(def, type->symbol);

  normalize(fn);
}


// TODO: we should know what field is active after assigning unions
static void buildUnionAssignmentFunction(AggregateType* ct) {
  if (operatorExists("=", ct, ct))
    return;

  FnSymbol* fn = new FnSymbol("=");
  fn->addFlag(FLAG_ASSIGNOP);
  fn->addFlag(FLAG_COMPILER_GENERATED);
  fn->addFlag(FLAG_LAST_RESORT);
  ArgSymbol* arg1 = new ArgSymbol(INTENT_REF, "_arg1", ct);
  ArgSymbol* arg2 = new ArgSymbol(INTENT_BLANK, "_arg2", ct);
  fn->insertFormalAtTail(arg1);
  fn->insertFormalAtTail(arg2);
  fn->retType = dtUnknown;
  fn->insertAtTail(new CallExpr(PRIM_SET_UNION_ID, arg1, new_IntSymbol(0)));
  for_fields(tmp, ct) {
    if (!tmp->hasFlag(FLAG_IMPLICIT_ALIAS_FIELD)) {
      if (!tmp->hasFlag(FLAG_TYPE_VARIABLE)) {
        fn->insertAtTail(new CondStmt(
            new CallExpr("==",
              new CallExpr(PRIM_GET_UNION_ID, arg2),
              new CallExpr(PRIM_FIELD_NAME_TO_NUM,
                           ct->symbol,
                           new_CStringSymbol(tmp->name))),
            new CallExpr("=",
              new CallExpr(".", arg1, new_StringSymbol(tmp->name)),
              new CallExpr(".", arg2, new_StringSymbol(tmp->name)))));
      }
    }
  }
  DefExpr* def = new DefExpr(fn);
  ct->symbol->defPoint->insertBefore(def);
  reset_ast_loc(def, ct->symbol);
  normalize(fn);
}

/************************************* | **************************************
*                                                                             *
*                                                                             *
*                                                                             *
************************************** | *************************************/

static void checkNotPod(AggregateType* at) {
  if (functionExists(astr_initCopy, at) == NULL) {

    if (at->hasUserDefinedInitEquals()) {
      at->symbol->addFlag(FLAG_NOT_POD);
    } else {
      // Compiler-generated copy-initializers should not disable POD
      FnSymbol* fn = functionExists("init", dtMethodToken, at, at);
      if (fn != NULL && fn->hasFlag(FLAG_COMPILER_GENERATED) == false) {
        at->symbol->addFlag(FLAG_NOT_POD);
      }
    }
  }
}

/************************************* | **************************************
*                                                                             *
*                                                                             *
*                                                                             *
************************************** | *************************************/

static void buildRecordHashFunction(AggregateType *ct) {
  if (functionExists("hash", dtMethodToken, ct) ||
      (!ct->symbol->hasFlag(FLAG_TUPLE) &&  // tuples already always have ==/!=
       (operatorExists("==", ct, ct) ||
        operatorExists("!=", ct, ct))))
    return;

  FnSymbol *fn = new FnSymbol("hash");
  fn->addFlag(FLAG_COMPILER_GENERATED);
  fn->addFlag(FLAG_LAST_RESORT);
  ArgSymbol *arg = new ArgSymbol(INTENT_BLANK, "this", ct);
  arg->addFlag(FLAG_ARG_THIS);
  arg->addFlag(FLAG_MARKED_GENERIC);
  fn->insertFormalAtTail(new ArgSymbol(INTENT_BLANK, "_mt", dtMethodToken));
  fn->insertFormalAtTail(arg);
  fn->_this = arg;
  fn->setMethod(true);

  if (ct->fields.length == 0) {
    fn->insertAtTail(new CallExpr(PRIM_RETURN, new_UIntSymbol(0)));
    fn->addFlag(FLAG_INLINE);
  } else {
    CallExpr *call = NULL;
    bool first = true;
    int i = 1;
    for_fields(field, ct) {

      // See #11613 for rationale behind skipping type and param fields.
      if (!(field->hasFlag(FLAG_IMPLICIT_ALIAS_FIELD) ||
            field->hasFlag(FLAG_TYPE_VARIABLE) ||
            field->hasFlag(FLAG_PARAM))) {
        CallExpr *field_access = new CallExpr(field->name, gMethodToken, arg);
        if (first) {
          call = new CallExpr("chpl__defaultHashWrapperInner", field_access);
          first = false;
        } else {
          call = new CallExpr("chpl__defaultHashCombine",
                              new CallExpr("hash", gMethodToken, field_access),
                              call,
                              new_IntSymbol(i));
        }
      }
      i++;
    }

    if (call) {
      fn->insertAtTail(new CallExpr(PRIM_RETURN, call));
    } else {
      fn->insertAtTail(new CallExpr(PRIM_RETURN, new_UIntSymbol(0)));
      fn->addFlag(FLAG_INLINE);
    }
  }

  DefExpr *def = new DefExpr(fn);
  ct->symbol->defPoint->insertBefore(def);
  reset_ast_loc(def, ct->symbol);
  normalize(fn);
}

/************************************* | **************************************
*                                                                             *
*                                                                             *
*                                                                             *
************************************** | *************************************/

static void buildDefaultOfFunction(AggregateType* ct) {
  if (ct->symbol->hasEitherFlag(FLAG_TUPLE, FLAG_ITERATOR_RECORD) &&
      ct->defaultValue != gNil &&
      functionExists("_defaultOf", ct) == NULL) {

    FnSymbol*  fn  = new FnSymbol("_defaultOf");
    ArgSymbol* arg = new ArgSymbol(INTENT_BLANK, "t", ct);
    DefExpr*   def = new DefExpr(fn);

    arg->addFlag(FLAG_MARKED_GENERIC);

    arg->addFlag(FLAG_TYPE_VARIABLE);

    fn->addFlag(FLAG_COMPILER_GENERATED);
    fn->addFlag(FLAG_LAST_RESORT);
    fn->addFlag(FLAG_INLINE);

    fn->insertFormalAtTail(arg);

    // The shell for the function must exist before generics are
    // resolved but the body cannot be completed until resolution.
    if (ct->symbol->hasFlag(FLAG_TUPLE)) {

    } else if (ct->symbol->hasFlag(FLAG_ITERATOR_RECORD)) {
      fn->insertAtTail(new CallExpr(PRIM_RETURN, arg));

    } else {
      INT_FATAL("Unhandled _defaultOf generation case");
    }

    ct->symbol->defPoint->insertBefore(def);

    reset_ast_loc(def, ct->symbol);

    // Do not normalize until the definition has been inserted
    normalize(fn);
  }
}

/************************************* | **************************************
*                                                                             *
*                                                                             *
*                                                                             *
************************************** | *************************************/

static bool inheritsFromError(Type* t) {
  bool retval = false;

  if (t == dtError) {
    retval = true;

  } else if (AggregateType* at = toAggregateType(t)) {
    forv_Vec(AggregateType, parent, at->dispatchParents) {
      if (inheritsFromError(parent) == true) {
        retval = true;
        break;
      }
    }
  }

  return retval;
}


// common code to create a serialize method without filling in the body
FnSymbol* buildSerializeFnSymbol(AggregateType* ct, ArgSymbol** filearg) {
  FnSymbol* fn = new FnSymbol("serialize");

  fn->addFlag(FLAG_COMPILER_GENERATED);
  fn->addFlag(FLAG_LAST_RESORT);
  if (ct->isClass() && ct != dtObject) {
    fn->addFlag(FLAG_OVERRIDE);
  } else {
    fn->addFlag(FLAG_INLINE);
  }

  fn->cname = astr("_auto_", ct->symbol->name, "_serialize");
  fn->_this = new ArgSymbol(INTENT_BLANK, "this", ct);
  fn->_this->addFlag(FLAG_ARG_THIS);

  ArgSymbol* fileArg = new ArgSymbol(INTENT_BLANK, "writer", dtAny);
  *filearg = fileArg;

  fileArg->addFlag(FLAG_MARKED_GENERIC);

  fn->setMethod(true);

  fn->insertFormalAtTail(new ArgSymbol(INTENT_BLANK, "_mt", dtMethodToken));
  fn->insertFormalAtTail(fn->_this);
  fn->insertFormalAtTail(fileArg);

  ArgSymbol* serializer = new ArgSymbol(INTENT_REF, "serializer", dtAny);
  fn->insertFormalAtTail(serializer);

  fn->retType = dtVoid;

  DefExpr* def = new DefExpr(fn);

  ct->symbol->defPoint->insertBefore(def);

  fn->setMethod(true);
  fn->addFlag(FLAG_METHOD_PRIMARY);

  reset_ast_loc(def, ct->symbol);

  ct->methods.add(fn);

  return fn;
}

static FnSymbol* buildDeserializeFnSymbol(AggregateType* ct, ArgSymbol** filearg) {
  FnSymbol* fn = new FnSymbol("deserialize");

  fn->addFlag(FLAG_COMPILER_GENERATED);
  fn->addFlag(FLAG_LAST_RESORT);
  if (ct->isClass() && ct != dtObject)
    fn->addFlag(FLAG_OVERRIDE);
  else
    fn->addFlag(FLAG_INLINE);

  fn->cname = astr("_auto_", ct->symbol->name, "_deserialize");

  auto desIntent = ct->isClass() ? INTENT_BLANK : INTENT_REF;
  fn->_this = new ArgSymbol(desIntent, "this", ct);
  fn->_this->addFlag(FLAG_ARG_THIS);

  ArgSymbol* fileArg = new ArgSymbol(INTENT_BLANK, "reader", dtAny);
  *filearg = fileArg;

  fileArg->addFlag(FLAG_MARKED_GENERIC);

  fn->setMethod(true);

  fn->insertFormalAtTail(new ArgSymbol(INTENT_BLANK, "_mt", dtMethodToken));
  fn->insertFormalAtTail(fn->_this);
  fn->insertFormalAtTail(fileArg);

  fn->retType = dtVoid;

  DefExpr* def = new DefExpr(fn);

  ct->symbol->defPoint->insertBefore(def);

  fn->setMethod(true);
  fn->addFlag(FLAG_METHOD_PRIMARY);

  reset_ast_loc(def, ct->symbol);

  ct->methods.add(fn);

  return fn;
}

static void buildDefaultReadWriteFunctions(AggregateType* ct) {
  bool hasSerialize             = false;
  bool hasDeserialize           = false;
  bool AnySerialize             = false;
  FnSymbol* readerInit          = nullptr;

  // Always build for 'object' to satisfy 'override' keyword in some cases.
  bool makeSerialize            = ct == dtObject || !fNoIOGenSerialization;

  //
  // We have no QIO when compiling with --minimal-modules, so no need
  // to build default R/W functions.
  //
  if (fMinimalModules == true) {
    return;
  }

  // This is a workaround - want Error objects to overload message()
  // to build their own description.
  if (inheritsFromError(ct))
    return;

  // Similarly, Chapel arrays are written out using their own
  // dsiSerialRead/Write() routines, so don't create functions for them.
  if (isArrayImplType(ct))
    return;

  if (functionExists("deserialize", dtMethodToken, ct, dtAny, dtAny)) {
    hasDeserialize = true;
  }

  if (functionExists("serialize", dtMethodToken, ct, dtAny, dtAny)) {
    hasSerialize = true;
  }

  forv_Vec(FnSymbol, method, ct->methods) {
    int n = method ? method->numFormals() : 0;
    if (method != nullptr &&
        method->isInitializer() &&
        n >= 4 &&
        strcmp(method->getFormal(n-1)->name, "reader") == 0 &&
        strcmp(method->getFormal(n)->name, "deserializer") == 0) {
      readerInit = method;
      break;
    }
  }

  if (hasSerialize || hasDeserialize ||
      (readerInit != nullptr &&
       readerInit->hasFlag(FLAG_COMPILER_GENERATED) == false &&
       ct->getModule()->modTag != MOD_INTERNAL)) {
    // If there's a user-defined 'serialize' method...
    // Or a user-defined 'deserialize' method...
    // Or a user-defined 'init'-deserializing method...
    // Then do not generate anything (except for hinting compiler errors)
    AnySerialize = true;
  }

  if (hasSerialize) {
    makeSerialize = false;
  }

  //
  // Keep generating the 'serialize' method so that the override versions don't
  // cause errors.
  //
  if (makeSerialize && !hasSerialize) {
    ArgSymbol* fileArg = NULL;
    FnSymbol* fn = buildSerializeFnSymbol(ct, &fileArg);
    ArgSymbol* serializer = fn->getFormal(fn->numFormals());

    fn->throwsErrorInit();

    if (!fNoIOGenSerialization) {
      if (AnySerialize) {
        auto msg = new_StringSymbol("'serialize' methods are not compiler-generated when a type has a user-defined 'deserialize' method.");
        fn->insertAtTail(new CallExpr("compilerError", msg));
      } else {
        fn->insertAtTail(new CallExpr("serializeDefaultImpl",
                                      fileArg,
                                      serializer,
                                      fn->_this));
      }
    }

    normalize(fn);
  }

  bool makeDeserialize = ct == dtObject || !fNoIOGenSerialization;
  if (makeDeserialize && !hasDeserialize) {
    ArgSymbol* fileArg = NULL;
    FnSymbol* fn = buildDeserializeFnSymbol(ct, &fileArg);

    fn->throwsErrorInit();

    ArgSymbol* deserializer = new ArgSymbol(INTENT_REF, "deserializer", dtAny);
    fn->insertFormalAtTail(deserializer);

    if (AnySerialize) {
      auto msg = new_StringSymbol("'deserialize' methods are not compiler-generated when a type has a user-defined 'serialize' method.");
      fn->insertAtTail(new CallExpr("compilerError", msg));
    } else {
      VarSymbol* temp = newTemp("_deser_temp");
      fn->insertAtTail(new DefExpr(temp));
      fn->insertAtTail(new CallExpr(PRIM_MOVE, temp, fn->_this));
      fn->insertAtTail(new CallExpr("deserializeDefaultImpl",
                                    fileArg,
                                    deserializer,
                                    temp));
    }

    normalize(fn);
  }

  if (ct->builtReaderInit && AnySerialize && readerInit != nullptr) {
    auto msg = new_StringSymbol("Initializers called by IO for deserialization are not compiler-generated when a user-defined 'serialize' or 'deserialize' method exists");
    readerInit->insertAtHead(new CallExpr("compilerError", msg));
  }
}


static void buildEnumStringOrBytesCastFunctions(EnumType* et,
                                                AggregateType *otherType) {
  if (otherType != dtString && otherType != dtBytes) {
    INT_FATAL("wrong type was passed to buildEnumStringOrBytesCastFunctions");
  }
  if (operatorExists(astrScolon, otherType, et))
    return;

  FnSymbol* fn = new FnSymbol(astrScolon);
  fn->addFlag(FLAG_OPERATOR);
  fn->addFlag(FLAG_COMPILER_GENERATED);
  fn->addFlag(FLAG_LAST_RESORT);
  ArgSymbol* arg = new ArgSymbol(INTENT_BLANK, "from", et);
  fn->insertFormalAtTail(arg);
  ArgSymbol* t = new ArgSymbol(INTENT_BLANK, "t", otherType);
  t->addFlag(FLAG_TYPE_VARIABLE);
  fn->insertFormalAtTail(t);

  for_enums(constant, et) {
    fn->insertAtTail(
      new CondStmt(
        new CallExpr("==", arg, constant->sym),
        new CallExpr(PRIM_RETURN,
                     new_StringOrBytesSymbol(constant->sym->name, otherType))));
  }
  fn->insertAtTail(new CallExpr(PRIM_RETURN,
                                new_StringOrBytesSymbol("", otherType)));

  DefExpr* def = new DefExpr(fn);
  //
  // these cast functions need to go in the base module because they
  // are automatically inserted to handle implicit coercions
  //
  baseModule->block->insertAtTail(def);
  reset_ast_loc(def, et->symbol);
  normalize(fn);
  fn->tagIfGeneric();

  // string to enumerated type cast function
  fn = new FnSymbol(astrScolon);
  fn->addFlag(FLAG_OPERATOR);
  fn->addFlag(FLAG_COMPILER_GENERATED);
  fn->addFlag(FLAG_LAST_RESORT);
  ArgSymbol* from = new ArgSymbol(INTENT_BLANK, "from", otherType);
  ArgSymbol* toType = new ArgSymbol(INTENT_BLANK, "t", et);
  toType->addFlag(FLAG_TYPE_VARIABLE);
  fn->insertFormalAtTail(from);
  fn->insertFormalAtTail(toType);

  CondStmt* cond = NULL;
  for_enums(constant, et) {
    cond = new CondStmt(
             new CallExpr("==", from,
                          new_StringOrBytesSymbol(constant->sym->name, otherType)),
             new CallExpr(PRIM_RETURN, constant->sym),
             cond);
    cond = new CondStmt(
             new CallExpr("==", from,
                          new_StringOrBytesSymbol(
                            astr(et->symbol->name, ".", constant->sym->name),
                            otherType)),
             new CallExpr(PRIM_RETURN, constant->sym),
             cond);
  }

  fn->insertAtTail(cond);

  fn->throwsErrorInit();
  fn->insertAtTail(new TryStmt(
                     false,
                     new BlockStmt(
                       new CallExpr("chpl_enum_cast_error",
                                    from,
                                    new_StringSymbol(et->symbol->name))),
                     NULL));
  fn->addFlag(FLAG_INSERT_LINE_FILE_INFO);
  fn->addFlag(FLAG_ALWAYS_PROPAGATE_LINE_FILE_INFO);

  fn->insertAtTail(new CallExpr(PRIM_RETURN,
                                toDefExpr(et->constants.first())->sym));

  def = new DefExpr(fn);
  //
  // these cast functions need to go in the base module because they
  // are automatically inserted to handle implicit coercions
  //
  baseModule->block->insertAtTail(def);
  reset_ast_loc(def, et->symbol);
  normalize(fn);
  fn->tagIfGeneric();
}


void buildDefaultDestructor(AggregateType* ct) {
  if (functionExists("deinit", dtMethodToken, ct) == NULL) {
    SET_LINENO(ct->symbol);

    FnSymbol* fn = new FnSymbol("deinit");

    fn->cname = astr("chpl__auto_destroy_", ct->symbol->name);

    fn->setMethod(true);
    fn->addFlag(FLAG_METHOD_PRIMARY);

    fn->addFlag(FLAG_COMPILER_GENERATED);
    fn->addFlag(FLAG_LAST_RESORT);
    fn->addFlag(FLAG_DESTRUCTOR);
    fn->addFlag(FLAG_INLINE);

    if (ct->symbol->hasFlag(FLAG_TUPLE) == true) {
      gGenericTupleDestroy = fn;
    }

    fn->insertFormalAtTail(new ArgSymbol(INTENT_BLANK, "_mt", dtMethodToken));

    fn->_this = new ArgSymbol(INTENT_BLANK, "this", ct);
    fn->_this->addFlag(FLAG_ARG_THIS);

    fn->insertFormalAtTail(fn->_this);

    fn->retType = dtVoid;

    if (ct->isUnion() && !ct->symbol->hasFlag(FLAG_EXTERN)) {
      fn->insertAtTail(buildResetUnionField(fn->_this, ct, NULL));
    }

    fn->insertAtTail(new CallExpr(PRIM_RETURN, gVoid));

    ct->symbol->defPoint->insertBefore(new DefExpr(fn));

    normalize(fn);

    ct->methods.add(fn);
  }
}
