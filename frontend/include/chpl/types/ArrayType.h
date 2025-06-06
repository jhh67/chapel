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

#ifndef CHPL_TYPES_ARRAY_TYPE_H
#define CHPL_TYPES_ARRAY_TYPE_H

#include "chpl/types/CompositeType.h"
#include "chpl/types/DomainType.h"

namespace chpl {
namespace types {

/**
  This class represents an array type e.g. `[1..10] int`.
 */
class ArrayType final : public CompositeType {
 private:
  // TODO:
  // - Slicing
  // - Array literals

  // Will compute domainType and eltType from 'subs'
  ArrayType(ID id, UniqueString name,
            const ArrayType* instantiatedFrom,
            SubstitutionsMap subs)
    : CompositeType(typetags::ArrayType, id, name,
                    instantiatedFrom, std::move(subs),
                    uast::Decl::DEFAULT_LINKAGE)
  {
  }


  bool contentsMatchInner(const Type* other) const override {
    const ArrayType* rhs = (const ArrayType*) other;
    return compositeTypeContentsMatchInner(rhs);
  }

  void markUniqueStringsInner(Context* context) const override {
    compositeTypeMarkUniqueStringsInner(context);
  }

  static const owned<ArrayType>&
  getArrayTypeQuery(Context* context, ID id, UniqueString name,
                    const ArrayType* instantiatedFrom,
                    SubstitutionsMap subs);

  static const ID domainId;
  static const ID eltTypeId;

 public:

  /** Return the generic array type */
  static const ArrayType* getGenericArrayType(Context* context);

  static const ArrayType* getArrayType(Context* context,
                                       const QualifiedType& instance,
                                       const QualifiedType& domainType,
                                       const QualifiedType& eltType);

  const Type* substitute(Context* context,
                         const PlaceholderMap& subs) const override {
    return getArrayTypeQuery(context,
                             id_, name_,
                             Type::substitute(context, instantiatedFrom_->toArrayType(), subs),
                             resolution::substituteInMap(context, subs_, subs)).get();
  }

  QualifiedType domainType() const {
    auto it = subs_.find(domainId);
    if (it != subs_.end()) {
      return it->second;
    } else {
      return QualifiedType();
    }
  }

  QualifiedType eltType() const {
    auto it = subs_.find(eltTypeId);
    if (it != subs_.end()) {
      return it->second;
    } else {
      return QualifiedType();
    }
  }

  const RuntimeType* runtimeType(Context* context) const;

  bool isAliasingArray(Context* context) const;

  ~ArrayType() = default;

  virtual void stringify(std::ostream& ss,
                         chpl::StringifyKind stringKind) const override;

};


} // end namespace types

} // end namespace chpl

#endif
