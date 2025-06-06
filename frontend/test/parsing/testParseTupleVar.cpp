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

#include "test-parsing.h"

#include "chpl/parsing/Parser.h"
#include "chpl/framework/Context.h"
#include "chpl/uast/Identifier.h"
#include "chpl/uast/Module.h"
#include "chpl/uast/MultiDecl.h"
#include "chpl/uast/TupleDecl.h"
#include "chpl/uast/Variable.h"

static void test1(Parser* parser) {
  ErrorGuard guard(parser->context());
  auto parseResult = parseStringAndReportErrors(parser, "test1.chpl", "var (x, y);");
  assert(!guard.realizeErrors());
  auto mod = parseResult.singleModule();
  assert(mod);
  assert(mod->numStmts() == 1);
  auto tup = mod->stmt(0)->toTupleDecl();
  assert(tup->intentOrKind() == TupleDecl::VAR);

  assert(tup->numDecls() == 2);
  auto x = tup->decl(0)->toVariable();
  auto y = tup->decl(1)->toVariable();
  assert(x);
  assert(0 == x->name().compare("x"));
  assert(x->typeExpression() == nullptr);
  assert(x->initExpression() == nullptr);
  assert(x->kind() == Variable::VAR);
  assert(y);
  assert(0 == y->name().compare("y"));
  assert(y->typeExpression() == nullptr);
  assert(y->initExpression() == nullptr);
  assert(y->kind() == Variable::VAR);

  assert(tup->typeExpression() == nullptr);
  assert(tup->initExpression() == nullptr);
}

static void test2(Parser* parser) {
  ErrorGuard guard(parser->context());
  auto parseResult = parseStringAndReportErrors(parser, "test2.chpl", "const (x, y);");
  assert(!guard.realizeErrors());
  auto mod = parseResult.singleModule();
  assert(mod);
  assert(mod->numStmts() == 1);
  auto tup = mod->stmt(0)->toTupleDecl();
  assert(tup->intentOrKind() == TupleDecl::CONST_VAR);

  assert(tup->numDecls() == 2);
  auto x = tup->decl(0)->toVariable();
  auto y = tup->decl(1)->toVariable();
  assert(0 == x->name().compare("x"));
  assert(x->typeExpression() == nullptr);
  assert(x->initExpression() == nullptr);
  assert(x->kind() == Variable::CONST);
  assert(0 == y->name().compare("y"));
  assert(y->typeExpression() == nullptr);
  assert(y->initExpression() == nullptr);
  assert(y->kind() == Variable::CONST);

  assert(tup->typeExpression() == nullptr);
  assert(tup->initExpression() == nullptr);
}

static void test3(Parser* parser) {
  ErrorGuard guard(parser->context());
  auto parseResult = parseStringAndReportErrors(parser, "test3.chpl", "var (x, y): typ;");
  assert(!guard.realizeErrors());
  auto mod = parseResult.singleModule();
  assert(mod);
  assert(mod->numStmts() == 1);
  auto tup = mod->stmt(0)->toTupleDecl();
  assert(tup->intentOrKind() == TupleDecl::VAR);

  assert(tup->numDecls() == 2);
  auto x = tup->decl(0)->toVariable();
  auto y = tup->decl(1)->toVariable();
  assert(0 == x->name().compare("x"));
  assert(x->typeExpression() == nullptr);
  assert(x->initExpression() == nullptr);
  assert(x->kind() == Variable::VAR);
  assert(0 == y->name().compare("y"));
  assert(y->typeExpression() == nullptr);
  assert(y->initExpression() == nullptr);
  assert(y->kind() == Variable::VAR);

  assert(tup->typeExpression()->isIdentifier());
  assert(tup->initExpression() == nullptr);
}

static void test4(Parser* parser) {
  ErrorGuard guard(parser->context());
  auto parseResult = parseStringAndReportErrors(parser, "test4.chpl", "var (x, y) = tup;");
  assert(!guard.realizeErrors());
  auto mod = parseResult.singleModule();
  assert(mod);
  assert(mod->numStmts() == 1);
  auto tup = mod->stmt(0)->toTupleDecl();
  assert(tup->intentOrKind() == TupleDecl::VAR);

  assert(tup->numDecls() == 2);
  auto x = tup->decl(0)->toVariable();
  auto y = tup->decl(1)->toVariable();
  assert(0 == x->name().compare("x"));
  assert(x->typeExpression() == nullptr);
  assert(x->initExpression() == nullptr);
  assert(x->kind() == Variable::VAR);
  assert(0 == y->name().compare("y"));
  assert(y->typeExpression() == nullptr);
  assert(y->initExpression() == nullptr);
  assert(y->kind() == Variable::VAR);

  assert(tup->typeExpression() == nullptr);
  assert(tup->initExpression()->isIdentifier());
}

static void test5(Parser* parser) {
  ErrorGuard guard(parser->context());
  auto parseResult = parseStringAndReportErrors(parser, "test5.chpl",
                                         "var (x, y):typ = tup;");
  assert(!guard.realizeErrors());
  auto mod = parseResult.singleModule();
  assert(mod);
  assert(mod->numStmts() == 1);
  auto tup = mod->stmt(0)->toTupleDecl();
  assert(tup->intentOrKind() == TupleDecl::VAR);

  assert(tup->numDecls() == 2);
  auto x = tup->decl(0)->toVariable();
  auto y = tup->decl(1)->toVariable();
  assert(0 == x->name().compare("x"));
  assert(x->typeExpression() == nullptr);
  assert(x->initExpression() == nullptr);
  assert(x->kind() == Variable::VAR);
  assert(0 == y->name().compare("y"));
  assert(y->typeExpression() == nullptr);
  assert(y->initExpression() == nullptr);
  assert(y->kind() == Variable::VAR);

  assert(tup->typeExpression()->isIdentifier());
  assert(tup->initExpression()->isIdentifier());
}

static void check6(Parser* parser, const char* path, const char* str) {
  ErrorGuard guard(parser->context());
  auto parseResult = parseStringAndReportErrors(parser, path, str);
  assert(!guard.realizeErrors());
  auto mod = parseResult.singleModule();
  assert(mod);
  assert(mod->numStmts() == 1);
  auto tup = mod->stmt(0)->toTupleDecl();
  assert(tup->intentOrKind() == TupleDecl::VAR);

  // some variation on "var (x, (y, z)):typ = tup;"
  assert(tup->numDecls() == 2);
  auto x = tup->decl(0)->toVariable();
  auto inner = tup->decl(1)->toTupleDecl();

  auto y = inner->decl(0)->toVariable();
  auto z = inner->decl(1)->toVariable();
  assert(0 == x->name().compare("x"));
  assert(x->typeExpression() == nullptr);
  assert(x->initExpression() == nullptr);
  assert(x->kind() == Variable::VAR);
  assert(0 == y->name().compare("y"));
  assert(y->typeExpression() == nullptr);
  assert(y->initExpression() == nullptr);
  assert(y->kind() == Variable::VAR);
  assert(0 == z->name().compare("z"));
  assert(z->typeExpression() == nullptr);
  assert(z->initExpression() == nullptr);
  assert(z->kind() == Variable::VAR);


  auto type = tup->typeExpression()->toIdentifier();
  assert(0 == type->name().compare("typ"));
  auto init = tup->initExpression()->toIdentifier();
  assert(0 == init->name().compare("tup"));
}

static void test6(Parser* parser) {
  check6(parser, "test6a.chpl",
         "var (x, (y, z)):typ = tup;");

  check6(parser, "test6b.chpl",
         "var /*comment*/ (x, (y, z)):typ = tup;");

  check6(parser, "test6c.chpl",
         "var ( /*comment*/ x, (y, z)):typ = tup;");

  check6(parser, "test6d.chpl",
         "var ( x /*comment*/ , (y, z)):typ = tup;");

  check6(parser, "test6e.chpl",
         "var ( x, /*comment*/ (y, z)):typ = tup;");

  check6(parser, "test6f.chpl",
         "var ( x, ( /*comment*/ y, z)):typ = tup;");

  check6(parser, "test6g.chpl",
         "var ( x, ( y /*comment*/ , z)):typ = tup;");

  check6(parser, "test6h.chpl",
         "var ( x, ( y, /*comment*/ z)):typ = tup;");

  check6(parser, "test6i.chpl",
         "var ( x, ( y, z /*comment*/ )):typ = tup;");

  check6(parser, "test6j.chpl",
         "var ( x, ( y, z) /*comment*/ ):typ = tup;");

  check6(parser, "test6k.chpl",
         "var ( x, ( y, z) ) /*comment*/ :typ = tup;");

  check6(parser, "test6l.chpl",
         "var ( x, ( y, z) ) : /*comment*/ typ = tup;");

  check6(parser, "test6m.chpl",
         "var ( x, ( y, z) ) : typ /*comment*/ = tup;");

  check6(parser, "test6n.chpl",
         "var ( x, ( y, z) ) : typ = /*comment*/ tup;");
}

static void test7(Parser* parser) {
  ErrorGuard guard(parser->context());
  auto parseResult = parseStringAndReportErrors(parser, "test7.chpl",
                                         "var (x, y), z;");
  assert(!guard.realizeErrors());
  auto mod = parseResult.singleModule();
  assert(mod);
  assert(mod->numStmts() == 1);

  auto multi = mod->stmt(0)->toMultiDecl();

  auto tup = multi->declOrComment(0)->toTupleDecl();
  assert(tup->intentOrKind() == TupleDecl::VAR);

  assert(tup->numDecls() == 2);
  auto x = tup->decl(0)->toVariable();
  auto y = tup->decl(1)->toVariable();
  assert(0 == x->name().compare("x"));
  assert(x->typeExpression() == nullptr);
  assert(x->initExpression() == nullptr);
  assert(x->kind() == Variable::VAR);
  assert(0 == y->name().compare("y"));
  assert(y->typeExpression() == nullptr);
  assert(y->initExpression() == nullptr);
  assert(y->kind() == Variable::VAR);

  auto z = multi->declOrComment(1)->toVariable();
  assert(z);
  assert(0 == z->name().compare("z"));
}


int main() {
  Context context;
  Context* ctx = &context;

  auto parser = Parser::createForTopLevelModule(ctx);
  Parser* p = &parser;

  test1(p);
  test2(p);
  test3(p);
  test4(p);
  test5(p);
  test6(p);
  test7(p);

  return 0;
}
