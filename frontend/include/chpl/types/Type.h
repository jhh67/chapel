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

#ifndef CHPL_TYPES_TYPE_H
#define CHPL_TYPES_TYPE_H

#include "chpl/framework/Context.h"
#include "chpl/framework/update-functions.h"
#include "chpl/framework/mark-functions.h"
#include "chpl/types/TypeTag.h"
#include "chpl/uast/Pragma.h"
#include "chpl/util/hash.h"

#include <deque>

namespace chpl {

namespace resolution {
  class ResolutionContext;
}

namespace uast {
  class Decl;
}

namespace types {


// forward declare the various Type subclasses
// using macros and type-classes-list.h
/// \cond DO_NOT_DOCUMENT
#define TYPE_NODE(NAME) class NAME;
/// \endcond
// Apply the above macros to type-classes-list.h
#include "chpl/types/type-classes-list-adapter.h"

class Type;
using PlaceholderMap = std::unordered_map<ID, const Type*>;

namespace detail {

template <typename T>
const T* typeToConst(const Type* type) = delete;

template <typename T>
T* typeTo(Type* type) = delete;

template <typename T>
bool typeIs(const Type* type) = delete;

} // end namespace detail

/**
  This is the base class for classes that represent a type.

  Functions like someType->isRecord() / someType->toRecord() are available and
  generated for all Type subclasses.

 */
class Type {
 public:
  enum Genericity {
    /** A concrete type e.g. 'int' */
    CONCRETE,

    /** A generic type, e.g. 'integral' */
    GENERIC,

    /** A type that is generic but has a default for each generic field.
        E.g. 'record R { type t = int; }'.
      */
    GENERIC_WITH_DEFAULTS,

    /** When we need more information to decide if the type is generic.
        It might depend on fields, e.g. */
    MAYBE_GENERIC,
  };

 private:
  TypeTag tag_;

 protected:
  /**
    This function needs to be defined by subclasses.
    It should check only those fields defined in subclasses
    (it should not check the Type fields such as tag_).

    It can assume that other has the same type as the receiver.
   */
  virtual bool contentsMatchInner(const Type* other) const = 0;

  /**
   This function needs to be defined by subclasses.
   It should call the 'mark' method on any UniqueStrings
   stored as fields.
   */
  virtual void markUniqueStringsInner(Context* context) const = 0;

 public:
  /**
   This function returns an enum Genericity value to indicate
   if the type is concrete, generic, generic with defaults,
   or maybe generic (e.g. depending on the fields).

   This function needs to be defined by subclasses.
   */
  virtual Genericity genericity() const = 0;

 protected:
  Type(TypeTag tag)
    : tag_(tag) {
  }

 public:
  virtual ~Type() = 0; // this is an abstract base class

  /**
    Returns the tag indicating which Type subclass this is.
   */
  TypeTag tag() const {
    return tag_;
  }

  bool operator==(const Type& other) const {
    (void)tag_;  // quiet nextLinter
    return completeMatch(&other);
  }
  bool operator!=(const Type& other) const {
    return !(*this == other);
  }
  template<typename T>
  static bool update(owned<T>& keep, owned<T>& addin) {
    return defaultUpdateOwned(keep, addin);
  }
  void mark(Context* context) const {
    return markUniqueStringsInner(context);
  }

  static void gatherBuiltins(Context* context,
                             std::unordered_map<UniqueString,const Type*>& map);

  bool completeMatch(const Type* other) const;

  /** replaces placeholders (as in PlaceholderType in the type) according
      to their values in the 'subs' map. */
  virtual const Type* substitute(Context* context,
                                 const PlaceholderMap& subs) const {
    return this;
  }

  /** For a given subclass of 'Type', replaces placeholders (as in
      PlaceholderType in the type) according to their values in the 'subs' map,
      handling the case in which the type is null.

      Since replacing placeholders ought not to change which subclass
      the type is, asserts and casts the result back to the same subclass. */
  template <typename TargetType>
  static const TargetType* substitute(Context* context,
                                      const TargetType* type,
                                      const PlaceholderMap& subs) {
    if (!type) return type;
    auto substituted = type->substitute(context, subs);
    CHPL_ASSERT(substituted);
    auto cast = substituted->template to<TargetType>();
    CHPL_ASSERT(cast);
    return cast;
  }

  virtual void stringify(std::ostream& ss, chpl::StringifyKind stringKind) const;

  /** Check if this type is particular subclass. The call someType->is<IntType>()
      returns whether or not someType is an IntType.
   */
  template <typename TargetType>
  bool is() const {
    return detail::typeIs<TargetType>(this);
  }

  // define is__ methods for the various Type subclasses
  // using macros and type-classes-list.h
  /// \cond DO_NOT_DOCUMENT
  #define TYPE_NODE(NAME) \
    bool is##NAME() const { \
      return typetags::is##NAME(this->tag_); \
    }
  /// \endcond
  // Apply the above macros to type-classes-list.h
  #include "chpl/types/type-classes-list-adapter.h"

  // Additional helper functions
  // Don't name these queries 'isAny...'.
  // Why? Consider an example.
  // AnyNumericType is a builtin type called 'numeric' in the source code.
  // So, isAnyNumericType checks if the type is that builtin type 'numeric'.
  // In contrast, isNumericType checks to see if the type is one of the
  // numeric types.

  /** returns true if this represents the string type */
  bool isStringType() const;

  /** returns true if this represents the bytes type */
  bool isBytesType() const;

  /** returns true if this represents the locale type */
  bool isLocaleType() const;

  /** returns true if it's string, bytes, or c_string type */
  bool isStringLikeType() const {
    return isStringType() || isBytesType() || isCStringType();
  }
  /** returns true if it's an int or uint type of any width */
  bool isIntegralType() const {
    return isIntType() || isUintType();
  }
  /** returns true if it's a numeric type of any width; that includes
      int, uint, real, imag, complex */
  bool isNumericType() const {
    return isIntType() || isUintType() ||
           isRealType() || isImagType() ||
           isComplexType();
  }

  /** returns true if it's a numeric type or bool type
      of any width */
  bool isNumericOrBoolType() const {
    return isNumericType() || isBoolType();
  }

  /** returns true for a type that is a kind of pointer */
  bool isPointerLikeType() const {
    return isClassType() || isCFnPtrType() || isCVoidPtrType() || isPtrType();
  }

  /** returns true for a pointer type that can store nil */
  bool isNilablePtrType() const;

  /** Returns true for a type that is a user-defined record.
      The compiler treats some internal types as records
      but the language design does not insist that they are.
   */
  bool isUserRecordType() const;

  bool isRecordLike() const;

  /** Returns true if this type has the pragma 'p' attached to it. */
  bool hasPragma(Context* context, uast::pragmatags::PragmaTag p) const;

  /** If 'this' is a CompositeType, return it.
      If 'this' is a ClassType, return the basicClassType.
      Otherwise, returns nullptr.
   */
  const CompositeType* getCompositeType() const;

  /** Try cast to a type known at compile-time. The call someType->to<IntType>()
      returns nullptr if someType is not an IntType, and cast to IntType
      if it is.
   */
  template <typename TargetType>
  const TargetType* to() const {
    return detail::typeToConst<TargetType>(this);
  }

  template <typename TargetType>
  TargetType* to() {
    return detail::typeTo<TargetType>(this);
  }

  // define to__ methods for the various Type subclasses
  // using macros and type-classes-list.h
  // Note: these offer equivalent functionality to C++ dynamic_cast<DstType*>
  /// \cond DO_NOT_DOCUMENT
  #define TYPE_NODE(NAME) \
    const NAME * to##NAME() const { \
      return this->is##NAME() ? (const NAME *)this : nullptr; \
    } \
    NAME * to##NAME() { \
      return this->is##NAME() ? (NAME *)this : nullptr; \
    }
  /// \endcond
  // Apply the above macros to type-classes-list.h
  #include "chpl/types/type-classes-list-adapter.h"

  /** Given a type 't', determine if 't' is "plain-old-data" (POD).

      If 't' is marked with the pragma "plain old data" then it is
      always considered to be POD, and no further evaluation takes
      place.

      If 't' is the sync type, the single type, an atomic type, the
      array type, or the domain type, then 't' is not POD.

      If 't' is a class with 'owned' or 'shared' management, then 't'
      is not POD.

      If 't' is a record, class, or union type, and any member of 't'
      is not POD, then 't' is not POD.

      If 't' is a record or union type with a user-defined 'deinit',
      'init=', or assignment operator, then 't' is not POD.

      If 't' is generic then it is considered to be not POD for the
      purposes of this evaluation.

      All other cases are considered to be POD.
  */
  static bool isPod(chpl::resolution::ResolutionContext* rc, const Type* t);

  static bool isDefaultInitializable(chpl::resolution::ResolutionContext* rc, const Type* t);

  static bool needsInitDeinitCall(const Type* t);

  /// \cond DO_NOT_DOCUMENT
  // Define a struct to do tag-driven dynamic dispatch over types.
  template <typename ReturnType, typename Visitor>
  struct Dispatcher {
    static ReturnType doDispatch(const Type* t, Visitor& v) {
      switch (t->tag()) {
        #define TYPE_NODE(NAME) \
          case chpl::types::typetags::NAME: { \
            return v.visit((const chpl::types::NAME*) t); \
          }
        // Do nothing, visitor should provide overloads for parent classes.
        #define TYPE_BEGIN_SUBCLASSES(NAME)
        // Apply the above macros to type-classes-list.h
        #include "chpl/types/type-classes-list-adapter.h"

        default: break;
      }

      CHPL_ASSERT(false && "this code should never be run");
      return ReturnType();
    }
  };
  template <typename Visitor>
  struct Dispatcher<void, Visitor> {
    static void doDispatch(const Type* t, Visitor& v) {
      switch (t->tag()) {
        #define TYPE_NODE(NAME) \
          case chpl::types::typetags::NAME: { \
            v.visit((const chpl::types::NAME*) t); \
            return; \
          }
        // Do nothing, visitor should provide overloads for parent classes.
        #define TYPE_BEGIN_SUBCLASSES(NAME)
        // Apply the above macros to type-classes-list.h
        #include "chpl/types/type-classes-list-adapter.h"

        default: break;
      }

      CHPL_ASSERT(false && "this code should never be run");
    }
  };
  /// \endcond DO_NOT_DOCUMENT

 public:

  /**
     The dispatch function supports calling a method according to the tag
     (aka runtime type) of a type node.

     It is a template and the Visitor argument should provide functions
     like

        MyReturnType MyVisitor::visit(const types::Type* t);
        MyReturnType MyVisitor::visit(const types::BoolType* t);

     and these will be invoked according to C++ overload resolution
     (where in particular an exact match will be preferred).

     It is generally necessary to specify the ReturnType when calling it, e.g.

       t->dispatch<MyReturnType>(myVisitor);

     The return type currently needs to be default constructable.
   */
  template <typename ReturnType, typename Visitor>
  ReturnType dispatch(Visitor& v) const {
    return Dispatcher<ReturnType, Visitor>::doDispatch(this, v);
  }

  /// \cond DO_NOT_DOCUMENT
  DECLARE_DUMP;
  /// \endcond DO_NOT_DOCUMENT
};

namespace detail {

template <> inline bool typeIs<Type>(const Type* type) { return true; }
template <> inline const Type* typeToConst<Type>(const Type* type) { return type; }
template <> inline Type* typeTo<Type>(Type* type) { return type; }


/// \cond DO_NOT_DOCUMENT
#define TYPE_NODE(NAME) \
  template <> inline bool typeIs<NAME>(const Type* type) { return type->is##NAME(); } \
  template <> inline const NAME * typeToConst<NAME>(const Type* type) { return type->to##NAME(); } \
  template <> inline NAME * typeTo<NAME>(Type* type) { return type->to##NAME(); } \
/// \endcond
// Apply the above macros to type-classes-list.h
#include "chpl/types/type-classes-list-adapter.h"

} // end namespace detail


} // end namespace types

/// \cond DO_NOT_DOCUMENT

template<> struct update<types::Type::Genericity> {
  bool operator()(types::Type::Genericity& keep,
                  types::Type::Genericity& addin) const {
    return defaultUpdateBasic(keep, addin);
  }
};

template<> struct mark<types::Type::Genericity> {
  void operator()(Context* context,
                  const types::Type::Genericity& keep) const {
    // nothing to do for enum
  }
};

/// \endcond DO_NOT_DOCUMENT

} // end namespace chpl

// TODO: is there a reasonable way to define std::less on Type*?
// Comparing pointers would lead to some nondeterministic ordering.

namespace std {
  template<> struct hash<chpl::types::PlaceholderMap> {
    inline size_t operator()(const chpl::types::PlaceholderMap& k) const{
      return chpl::hashUnorderedMap(k);
    }
  };
}

#endif
