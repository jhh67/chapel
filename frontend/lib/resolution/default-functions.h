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

#ifndef DEFAULT_FUNCTIONS_
#define DEFAULT_FUNCTIONS_

#include "chpl/resolution/resolution-types.h"

namespace chpl {
namespace types {
  class CompositeType;
  class Type;
}
namespace resolution {


/**
  Computes a field accessor
 */
const TypedFnSignature* fieldAccessor(Context* context,
                                      const types::CompositeType* compType,
                                      UniqueString fieldName);

/**
  Given a type and a UniqueString representing the name of a method,
  determine if the type needs a method with such a name to be
  generated for it.
*/
bool needCompilerGeneratedMethod(Context* context, const types::Type* type,
                                 UniqueString name, bool parenless);

/**
  Same as getCompilerGeneratedMethod, but for operators. Here, we are more
  discerning: the other argument to the oeprator is also considered when
  determing if compiler generation is needed.
 */
bool needCompilerGeneratedBinaryOp(Context* context,
                                   const types::QualifiedType& lhs,
                                   const types::QualifiedType& rhs,
                                   UniqueString name);

/**
  Given a type and a UniqueString representing the name of a method,
  determine if the type needs a method with such a name to be
  generated for it, and if so, generates and returns a
  TypedFnSignature representing the generated method.

  If no method was generated, returns nullptr.
*/
const TypedFnSignature*
getCompilerGeneratedMethod(ResolutionContext* rc,
                           const types::QualifiedType receiverType,
                           UniqueString name, bool parenless);

/**
  Given the name of a binary operation and the types of its operands,
  determine if the compiler needs to provide a generated implementation,
  and if so, generates and returns a TypedFnSignature representing the
  generated binary operation.

  If no operation was generated, returns nullptr.
 */
const TypedFnSignature*
getCompilerGeneratedBinaryOp(ResolutionContext* rc,
                             const types::QualifiedType lhsType,
                             const types::QualifiedType rhsType,
                             UniqueString name);

/**
  Given a CallInfo object describing a call, attempts to find a compiler-generated
  function that would match. This is more general than the getCompilerGeneratedMethod
  mechanism, since the signature of the compiler-generated function can't
  be deduced from the type of the receiver itself; inspecting all arguments
  to the call is necessary.
*/
const TypedFnSignature*
getCompilerGeneratedFunction(ResolutionContext* context,
                             const CallInfo& ci);

const uast::BuilderResult& buildInitializer(Context* context, ID typeID);
const uast::BuilderResult& buildInitEquals(Context* context, ID typeID);
const uast::BuilderResult& buildRecordComparison(Context* context, ID typeID);
const uast::BuilderResult& buildRecordInequalityComparison(Context* context, ID typeID);
const uast::BuilderResult& buildRecordCompareLt(Context* context, ID typeID);
const uast::BuilderResult& buildRecordCompareLe(Context* context, ID typeID);
const uast::BuilderResult& buildRecordCompareGt(Context* context, ID typeID);
const uast::BuilderResult& buildRecordCompareGe(Context* context, ID typeID);
const uast::BuilderResult& buildRecordAssign(Context* context, ID typeID);
const uast::BuilderResult& buildRecordHash(Context* context, ID typeID);
const uast::BuilderResult& buildTypeConstructor(Context* context, ID typeID);
const uast::BuilderResult& buildDeinit(Context* context, ID typeID);
const uast::BuilderResult& buildDeSerialize(Context* context, ID typeID, bool isSerializer);
const uast::BuilderResult& buildEnumToOrder(Context* context, ID typeID);
const uast::BuilderResult& buildEnumToStringCastImpl(Context* context, ID typeID, int overloadIdx);
const uast::BuilderResult& buildEnumToBytesCastImpl(Context* context, ID typeID, int overloadIdx);
const uast::BuilderResult& buildOrderToEnum(Context* context, ID typeID);
const uast::BuilderResult& buildStringToEnumCastImpl(Context* context, ID typeID, int overloadIdx);
const uast::BuilderResult& buildBytesToEnumCastImpl(Context* context, ID typeID, int overloadIdx);

} // end namespace resolution
} // end namespace chpl

#endif
