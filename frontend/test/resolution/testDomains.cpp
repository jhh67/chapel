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

#include "test-resolution.h"

#include "chpl/parsing/parsing-queries.h"
#include "chpl/resolution/resolution-queries.h"
#include "chpl/resolution/scope-queries.h"
#include "chpl/types/all-types.h"
#include "chpl/uast/Identifier.h"
#include "chpl/uast/Module.h"
#include "chpl/uast/Record.h"
#include "chpl/uast/Variable.h"

static QualifiedType findVarType(const Module* m,
                                 const ResolutionResultByPostorderID& rr,
                                 std::string name) {
  const Variable* var = findOnlyNamed(m, name)->toVariable();
  assert(var != nullptr);
  return rr.byAst(var).type();
}

static void testRectangular(Context* context,
                                  std::string domainType,
                                  int rank,
                                  std::string idxType,
                                  std::string strides) {
  printf("Testing: %s\n", domainType.c_str());

  context->advanceToNextRevision(false);
  setupModuleSearchPaths(context, false, false, {}, {});
  ErrorGuard guard(context);

  std::string program =
R"""(
module M {
  var d : )""" + domainType + R"""(;
  param rg = )""" + std::to_string(rank) + R"""(;
  type ig = )""" + idxType + R"""(;
  type fullIndex = if rg == 1 then ig else rg*ig;

  param r = d.rank;
  type i = d.idxType;
  param s = d.strides;
  param rk = d.isRectangular();
  param ak = d.isAssociative();

  var p = d.pid;

  for loopI in d {
    var z = loopI;
  }

  proc generic(arg: domain) {
    type GT = arg.type;
    return 42;
  }

  proc concrete(arg: )""" + domainType + R"""() {
    type CT = arg.type;
    return 42;
  }

  var g_ret = generic(d);
  var c_ret = concrete(d);
}
)""";

  auto path = UniqueString::get(context, "input.chpl");
  setFileText(context, path, std::move(program));

  const ModuleVec& vec = parseToplevel(context, path);
  const Module* m = vec[0];

  const ResolutionResultByPostorderID& rr = resolveModule(context, m->id());

  const Variable* d = m->stmt(0)->toVariable();
  assert(d);
  assert(d->name() == "d");

  QualifiedType dQt = rr.byAst(d).type();
  assert(dQt.type());
  auto dType = dQt.type()->toDomainType();
  assert(dType);

  auto dTypeExpr = d->typeExpression();
  assert(dTypeExpr);
  auto typeRe = rr.byAst(dTypeExpr);
  auto& aa = typeRe.associatedActions()[0];
  assert(!aa.id().isEmpty());
  assert(aa.action() == AssociatedAction::RUNTIME_TYPE);

  QualifiedType fullIndexType = findVarType(m, rr, "fullIndex");

  auto rankVarTy = findVarType(m, rr, "r");
  assert(rankVarTy == dType->rank());
  ensureParamInt(rankVarTy, rank);

  auto idxTypeVarTy = findVarType(m, rr, "i");
  assert(idxTypeVarTy == dType->idxType());
  assert(findVarType(m, rr, "ig") == idxTypeVarTy);

  auto stridesVarTy = findVarType(m, rr, "s");
  assert(stridesVarTy == dType->strides());
  assert(stridesVarTy.param()->toEnumParam()->value().str == strides);

  ensureParamBool(findVarType(m, rr, "rk"), true);

  ensureParamBool(findVarType(m, rr, "ak"), false);

  assert(findVarType(m, rr, "p").type()->isIntType());

  assert(findVarType(m, rr, "z").type() == fullIndexType.type());

  {
    const Variable* g_ret = findOnlyNamed(m, "g_ret")->toVariable();
    auto res = rr.byAst(g_ret);
    assert(res.type().type()->isIntType());

    auto call = resolveOnlyCandidate(context, rr.byAst(g_ret->initExpression()));
    // Generic function, should have been instantiated
    assert(call->signature()->instantiatedFrom() != nullptr);

    const Variable* GT = findOnlyNamed(m, "GT")->toVariable();
    assert(call->byAst(GT).type().type() == dType);
  }

  {
    const Variable* c_ret = findOnlyNamed(m, "c_ret")->toVariable();
    auto res = rr.byAst(c_ret);
    assert(res.type().type()->isIntType());

    auto call = resolveOnlyCandidate(context, rr.byAst(c_ret->initExpression()));
    // Concrete function, should not be instantiated
    assert(call->signature()->instantiatedFrom() == nullptr);

    const Variable* CT = findOnlyNamed(m, "CT")->toVariable();
    assert(call->byAst(CT).type().type() == dType);
  }

  assert(guard.realizeErrors() == 0);
}

static void testDomainLiteral(Context* context,
                                  std::string domainLiteral,
                                  DomainType::Kind domainKind) {
  printf("Testing: %s\n", domainLiteral.c_str());

  context->advanceToNextRevision(false);
  setupModuleSearchPaths(context, false, false, {}, {});
  ErrorGuard guard(context);

  std::string program =
R"""(
module M {
  var d = )""" + domainLiteral + R"""(;

  type i = d.idxType;
  param rk = d.isRectangular();
  param ak = d.isAssociative();
}
)""";

  auto path = UniqueString::get(context, "input.chpl");
  setFileText(context, path, std::move(program));

  const ModuleVec& vec = parseToplevel(context, path);
  const Module* m = vec[0];

  const ResolutionResultByPostorderID& rr = resolveModule(context, m->id());

  const Variable* d = m->stmt(0)->toVariable();
  assert(d);
  assert(d->name() == "d");

  QualifiedType dQt = rr.byAst(d).type();
  assert(dQt.type());
  auto dType = dQt.type()->toDomainType();
  assert(dType);

  assert(findVarType(m, rr, "i") == dType->idxType());

  assert(dType->kind() == domainKind);
  bool isRectangular = domainKind == DomainType::Kind::Rectangular;
  ensureParamBool(findVarType(m, rr, "rk"), isRectangular);
  ensureParamBool(findVarType(m, rr, "ak"), !isRectangular);

  assert(guard.realizeErrors() == 0);
}

static void testAssociative(Context* context,
                                  std::string domainType,
                                  std::string idxType,
                                  bool parSafe) {
  printf("Testing: %s\n", domainType.c_str());

  context->advanceToNextRevision(false);
  setupModuleSearchPaths(context, false, false, {}, {});
  ErrorGuard guard(context);

  std::string program =
R"""(
module M {
  var d : )""" + domainType + R"""(;
  type ig = )""" + idxType + R"""(;

  type i = d.idxType;
  param s = d.parSafe;
  param rk = d.isRectangular();
  param ak = d.isAssociative();

  var p = d.pid;

  for loopI in d {
    var z = loopI;
  }

  proc generic(arg: domain) {
    type GT = arg.type;
    return 42;
  }

  proc concrete(arg: )""" + domainType + R"""() {
    type CT = arg.type;
    return 42;
  }

  var g_ret = generic(d);
  var c_ret = concrete(d);
}
)""";

  auto path = UniqueString::get(context, "input.chpl");
  setFileText(context, path, std::move(program));

  const ModuleVec& vec = parseToplevel(context, path);
  const Module* m = vec[0];

  const ResolutionResultByPostorderID& rr = resolveModule(context, m->id());

  QualifiedType dType = findVarType(m, rr, "d");
  assert(dType.type()->isDomainType());

  auto fullIndexType = findVarType(m, rr, "i");
  assert(findVarType(m, rr, "ig") == fullIndexType);

  ensureParamBool(findVarType(m, rr, "s"), parSafe);

  ensureParamBool(findVarType(m, rr, "rk"), false);

  ensureParamBool(findVarType(m, rr, "ak"), true);

  assert(findVarType(m, rr, "p").type()->isIntType());

  assert(findVarType(m, rr, "z").type() == fullIndexType.type());

  {
    const Variable* g_ret = findOnlyNamed(m, "g_ret")->toVariable();
    auto res = rr.byAst(g_ret);
    assert(res.type().type()->isIntType());

    auto call = resolveOnlyCandidate(context, rr.byAst(g_ret->initExpression()));
    // Generic function, should have been instantiated
    assert(call->signature()->instantiatedFrom() != nullptr);

    const Variable* GT = findOnlyNamed(m, "GT")->toVariable();
    assert(call->byAst(GT).type().type() == dType.type());
  }

  {
    const Variable* c_ret = findOnlyNamed(m, "c_ret")->toVariable();
    auto res = rr.byAst(c_ret);
    assert(res.type().type()->isIntType());

    auto call = resolveOnlyCandidate(context, rr.byAst(c_ret->initExpression()));
    // Concrete function, should not be instantiated
    assert(call->signature()->instantiatedFrom() == nullptr);

    const Variable* CT = findOnlyNamed(m, "CT")->toVariable();
    assert(call->byAst(CT).type().type() == dType.type());
  }

  assert(guard.errors().size() == 0);
}

// Ensure that we can't, e.g.,  pass a domain(1) to a domain(2)
static void testBadPass(Context* context, std::string argType,
                        std::string actualType) {
  printf("Testing: cannot pass %s to %s\n", actualType.c_str(), argType.c_str());

  context->advanceToNextRevision(false);
  setupModuleSearchPaths(context, false, false, {}, {});
  ErrorGuard guard(context);

  std::string program =
R"""(
module M {
  proc foo(arg: )""" + argType + R"""() {
    return 42;
  }

  var d : )""" + actualType + R"""(;
  var c_ret = foo(d);
}
)""";
  // TODO: generic checks

  auto path = UniqueString::get(context, "input.chpl");
  setFileText(context, path, std::move(program));

  const ModuleVec& vec = parseToplevel(context, path);
  const Module* m = vec[0];

  const ResolutionResultByPostorderID& rr = resolveModule(context, m->id());

  auto c_ret = findOnlyNamed(m, "c_ret")->toVariable();
  assert(rr.byAst(c_ret).type().isErroneousType());
  assert(guard.errors().size() == 1);
  auto& e = guard.errors()[0];
  assert(e->type() == chpl::NoMatchingCandidates);

  // 'clear' rather than 'realize' to simplify test output
  guard.clearErrors();
}

static void testIndex(Context* context,
                      std::string domainType,
                      std::string expectedType) {
  printf("Testing: index(%s) == %s\n", domainType.c_str(),
         expectedType.c_str());

  context->advanceToNextRevision(false);
  setupModuleSearchPaths(context, false, false, {}, {});
  ErrorGuard guard(context);

  std::string program =
R"""(
module M {
  var d : )""" + domainType + R"""(;
  type t = )""" + expectedType + R"""(;
  type i = index(d);

  param equal = i == t;
}
)""";

  auto path = UniqueString::get(context, "input.chpl");
  setFileText(context, path, std::move(program));

  const ModuleVec& vec = parseToplevel(context, path);
  const Module* m = vec[0];

  const ResolutionResultByPostorderID& rr = resolveModule(context, m->id());

  assert(!findVarType(m, rr, "d").isUnknownOrErroneous());
  assert(!findVarType(m, rr, "t").isUnknownOrErroneous());
  assert(!findVarType(m, rr, "i").isUnknownOrErroneous());

  ensureParamBool(findVarType(m, rr, "equal"), true);

  assert(guard.realizeErrors() == 0);
}

static void testBadDomainHelper(std::string domainType, Context* context,
                                ErrorGuard& guard) {
  std::string program =
R"""(
module M {
  var d : )""" + domainType + R"""(;
}
)""";

  auto path = UniqueString::get(context, "input.chpl");
  setFileText(context, path, std::move(program));

  const ModuleVec& vec = parseToplevel(context, path);
  const Module* m = vec[0];

  const ResolutionResultByPostorderID& rr = resolveModule(context, m->id());

  const Variable* d = m->stmt(0)->toVariable();
  assert(d);
  assert(d->name() == "d");
  QualifiedType dType = rr.byAst(d).type();
  assert(dType.type()->isErroneousType());

  assert(guard.errors().size() == 1);
  auto& e = guard.errors()[0];
  assert(e->type() == chpl::InvalidDomainCall);

  guard.clearErrors();
}

// Ensure we gracefully error for bad domain type expressions, with or without
// the standard modules available.
static void testBadDomain(Context* contextWithStd, std::string domainType) {
  printf("Testing: cannot resolve %s\n",
         domainType.c_str());

  // With standard modules
  {
    contextWithStd->advanceToNextRevision(false);
    setupModuleSearchPaths(contextWithStd, false, false, {}, {});
    ErrorGuard guard(contextWithStd);

    testBadDomainHelper(domainType, contextWithStd, guard);
  }
}

int main() {
  // Set up context with standard modules, re-used between tests for
  // performance.
  auto context = buildStdContext();

  testRectangular(context, "domain(1)", 1, "int", "one");
  testRectangular(context, "domain(2)", 2, "int", "one");
  testRectangular(context, "domain(1, strides=strideKind.one)", 1, "int", "one");
  testRectangular(context, "domain(2, int(8))", 2, "int(8)", "one");
  testRectangular(context, "domain(3, int(16), strideKind.negOne)", 3, "int(16)", "negOne");
  testRectangular(context, "domain(strides=strideKind.negative, idxType=int, rank=1)", 1, "int", "negative");

  testDomainLiteral(context, "{1..10}", DomainType::Kind::Rectangular);
  testDomainLiteral(context, "{1..10, 1..10}", DomainType::Kind::Rectangular);

  testAssociative(context, "domain(int)", "int", true);
  testAssociative(context, "domain(int, false)", "int", false);
  testAssociative(context, "domain(string)", "string", true);

  testBadPass(context, "domain(1)", "domain(2)");
  testBadPass(context, "domain(1, int(16))", "domain(1, int(8))");
  testBadPass(context, "domain(1, int(8))", "domain(1, int(16))");
  testBadPass(context, "domain(1, strides=strideKind.negOne)", "domain(1, strides=strideKind.one)");
  testBadPass(context, "domain(int)", "domain(string)");
  testBadPass(context, "domain(1)", "domain(int)");

  testIndex(context, "domain(1)", "int");
  testIndex(context, "domain(2)", "2*int");
  testIndex(context, "domain(1, bool)", "bool");
  testIndex(context, "domain(2, bool)", "2*bool");
  testIndex(context, "domain(int)", "int");
  testIndex(context, "domain(string)", "string");

  testBadDomain(context, "domain()");
  testBadDomain(context, "domain(1, 2, 3, 4)");
  testBadDomain(context, "domain(\"asdf\")");
  testBadDomain(context, "domain(\"asdf\", \"asdf2\")");
  testBadDomain(context, "domain(1, \"asdf\")");
  testBadDomain(context, "domain(1, int, \"asdf\")");

  return 0;
}
