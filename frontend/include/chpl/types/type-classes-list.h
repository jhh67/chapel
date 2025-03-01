/*
 * Copyright 2021-2025 Hewlett Packard Enterprise Development LP
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

// This file lists the ASTType subclasses to help with macros generating code
// for each
//
// Each line consists of one of
//   TYPE_NODE(NAME)
//   BUILTIN_TYPE_NODE(NAME, "chapel name")
//   TYPE_BEGIN_SUBCLASSES(NAME)
//   TYPE_END_SUBCLASSES(NAME)
//
// TYPE_NODE is for an ASTType subclass
// BUILTIN_TYPE_NODE is for BuiltinType subclasses
// TYPE_BEGIN_SUBCLASSES/TYPE_END_SUBCLASSES mark subclasses of abstract classes

// These Type nodes are documented in their respective header files
// and only listed here.

// This file should store the Type nodes in groups according to the
// class hierarchy and otherwise be in sorted order.

// the following comment disables doxygen for these
/// \cond DO_NOT_DOCUMENT

TYPE_NODE(AnyType)
TYPE_NODE(CStringType)
TYPE_NODE(ErroneousType)
TYPE_NODE(NilType)
TYPE_NODE(NothingType)
TYPE_NODE(PlaceholderType)
TYPE_NODE(RuntimeType)
TYPE_NODE(UnknownType)
TYPE_NODE(VoidType)

TYPE_BEGIN_SUBCLASSES(PtrType)
  TYPE_NODE(CPtrType)
  TYPE_NODE(HeapBufferType)
TYPE_END_SUBCLASSES(PtrType)

TYPE_BEGIN_SUBCLASSES(IteratorType)
  TYPE_NODE(LoopExprIteratorType)
  TYPE_NODE(FnIteratorType)
  TYPE_NODE(PromotionIteratorType)
TYPE_END_SUBCLASSES(IteratorType)


// TODO:
// migrate array and distribution to something backed by the modules
// (if the modules are parsed)

// c_array

TYPE_BEGIN_SUBCLASSES(BuiltinType)
  // concrete builtin types
  BUILTIN_TYPE_NODE(CFnPtrType, "chpl_c_fn_ptr")
  BUILTIN_TYPE_NODE(CVoidPtrType, "chpl__c_void_ptr")
  BUILTIN_TYPE_NODE(OpaqueType, "opaque")
  BUILTIN_TYPE_NODE(SyncAuxType, "_sync_aux_t")
  BUILTIN_TYPE_NODE(TaskIdType, "chpl_taskID_t")

  // generic builtin types. AnyComplexType must be the first of these
  // (or else adjust BuiltinType::genericity and this comment)
  BUILTIN_TYPE_NODE(AnyComplexType, "chpl_anycomplex")
  BUILTIN_TYPE_NODE(AnyEnumType, "enum")
  BUILTIN_TYPE_NODE(AnyImagType, "chpl_anyimag")
  BUILTIN_TYPE_NODE(AnyIntType, "chpl_anyint")
  BUILTIN_TYPE_NODE(AnyIntegralType, "integral")
  BUILTIN_TYPE_NODE(AnyIteratorClassType, "_iteratorClass")
  BUILTIN_TYPE_NODE(AnyIteratorRecordType, "_iteratorRecord")
  BUILTIN_TYPE_NODE(AnyThunkRecordType, "_thunkRecord")
  BUILTIN_TYPE_NODE(AnyNumericType, "numeric")
  BUILTIN_TYPE_NODE(AnyOwnedType, "owned")
  BUILTIN_TYPE_NODE(AnyPodType, "chpl_anyPOD")
  BUILTIN_TYPE_NODE(AnyRealType, "chpl_anyreal")
  BUILTIN_TYPE_NODE(AnyRecordType, "record")
  BUILTIN_TYPE_NODE(AnySharedType, "shared")
  BUILTIN_TYPE_NODE(AnyUintType, "chpl_anyuint")
  BUILTIN_TYPE_NODE(AnyUninstantiatedType, "?")
  BUILTIN_TYPE_NODE(AnyUnionType, "union")
  // end generic builtin types.
TYPE_END_SUBCLASSES(BuiltinType)

TYPE_BEGIN_SUBCLASSES(DeclaredType)
  TYPE_NODE(ClassType)
  TYPE_NODE(EnumType)
  TYPE_NODE(ExternType)
  // TYPE_NODE(FunctionType)
  TYPE_NODE(InterfaceType)

  TYPE_BEGIN_SUBCLASSES(CompositeType)
    TYPE_NODE(ArrayType)
    TYPE_BEGIN_SUBCLASSES(ManageableType)
      TYPE_NODE(BasicClassType)
      TYPE_NODE(AnyClassType)
    TYPE_END_SUBCLASSES(ManageableType)
    TYPE_NODE(DomainType)
    TYPE_NODE(RecordType)
    TYPE_NODE(TupleType)
    TYPE_NODE(UnionType)
  TYPE_END_SUBCLASSES(CompositeType)

TYPE_END_SUBCLASSES(DeclaredType)

TYPE_BEGIN_SUBCLASSES(PrimitiveType)
    TYPE_NODE(BoolType)
    TYPE_NODE(ComplexType)
    TYPE_NODE(ImagType)
    TYPE_NODE(IntType)
    TYPE_NODE(RealType)
    TYPE_NODE(UintType)
TYPE_END_SUBCLASSES(PrimitiveType)


/// \endcond

// this comment seems to be necessary for doxygen xml output to be well-formed
