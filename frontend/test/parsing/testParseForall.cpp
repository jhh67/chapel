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
#include "chpl/uast/AstNode.h"
#include "chpl/uast/Block.h"
#include "chpl/uast/Forall.h"
#include "chpl/uast/Identifier.h"
#include "chpl/uast/Module.h"
#include "chpl/uast/TaskVar.h"
#include "chpl/uast/WithClause.h"
#include "chpl/uast/Zip.h"

#include <iostream>

static void test0(Parser* parser) {
  ErrorGuard guard(parser->context());
  auto parseResult = parseStringAndReportErrors(parser, "test0.chpl",
      "/* comment 1 */\n"
      "forall x in foo do\n"
      "  /* comment 2 */\n"
      "  foo();\n"
      "/* comment 3 */\n");
  assert(!guard.realizeErrors());
  auto mod = parseResult.singleModule();
  assert(mod);
  assert(mod->numStmts() == 3);
  assert(mod->stmt(0)->isComment());
  assert(mod->stmt(1)->isForall());
  assert(mod->stmt(2)->isComment());
  const Forall* forall = mod->stmt(1)->toForall();
  assert(forall != nullptr);
  assert(forall->index() != nullptr);
  assert(forall->index()->isVariable());
  assert(forall->iterand() != nullptr);
  assert(forall->iterand()->isIdentifier());
  assert(forall->withClause() == nullptr);
  assert(forall->numStmts() == 2);
  assert(forall->blockStyle() == BlockStyle::IMPLICIT);
  assert(!forall->isExpressionLevel());
  assert(forall->stmt(0)->isComment());
  assert(forall->stmt(1)->isFnCall());
}

static void test1(Parser* parser) {
  ErrorGuard guard(parser->context());
  auto parseResult = parseStringAndReportErrors(parser, "test1.chpl",
      "/* comment 1 */\n"
      "forall x in foo with (ref thing) {\n"
      "  /* comment 2 */\n"
      "  foo();\n"
      "  /* comment 3 */\n"
      "}\n"
      "/* comment 4 */\n");
  assert(!guard.realizeErrors());
  auto mod = parseResult.singleModule();
  assert(mod);
  assert(mod->numStmts() == 3);
  assert(mod->stmt(0)->isComment());
  assert(mod->stmt(1)->isForall());
  assert(mod->stmt(2)->isComment());
  const Forall* forall = mod->stmt(1)->toForall();
  assert(forall != nullptr);
  assert(forall->index() != nullptr);
  assert(forall->index()->isVariable());
  assert(forall->iterand() != nullptr);
  assert(forall->iterand()->isIdentifier());
  const WithClause* withClause = forall->withClause();
  assert(withClause);
  assert(withClause->numExprs() == 1);
  const TaskVar* taskVar = withClause->expr(0)->toTaskVar();
  assert(taskVar);
  assert(!taskVar->typeExpression());
  assert(!taskVar->initExpression());
  assert(taskVar->intent() == TaskVar::REF);
  assert(forall->blockStyle() == BlockStyle::EXPLICIT);
  assert(!forall->isExpressionLevel());
  assert(forall->numStmts() == 3);
  assert(forall->stmt(0)->isComment());
  assert(forall->stmt(1)->isFnCall());
  assert(forall->stmt(2)->isComment());
}

static void test2(Parser* parser) {
  ErrorGuard guard(parser->context());
  auto parseResult = parseStringAndReportErrors(parser, "test2.chpl",
      "/* comment 1 */\n"
      "forall x in zip(a, b) {\n"
      "  foo();\n"
      "}\n"
      "/* comment 4 */\n");
  assert(!guard.realizeErrors());
  auto mod = parseResult.singleModule();
  assert(mod);
  assert(mod->numStmts() == 3);
  assert(mod->stmt(0)->isComment());
  assert(mod->stmt(1)->isForall());
  assert(mod->stmt(2)->isComment());
  const Forall* forall = mod->stmt(1)->toForall();
  assert(forall != nullptr);
  assert(forall->index() != nullptr);
  assert(forall->index()->isVariable());
  assert(forall->iterand() != nullptr);
  const Zip* zip = forall->iterand()->toZip();
  assert(zip);
  assert(zip->numActuals() == 2);
  assert(zip->actual(0)->isIdentifier());
  assert(zip->actual(1)->isIdentifier());
  assert(forall->blockStyle() == BlockStyle::EXPLICIT);
  assert(!forall->isExpressionLevel());
  assert(forall->numStmts() == 1);
  assert(forall->stmt(0)->isFnCall());
}

static void test3(Parser* parser) {
  ErrorGuard guard(parser->context());
  auto parseResult = parseStringAndReportErrors(parser, "test3.chpl",
      "/* comment 1 */\n"
      "forall x in zip(a, b, foo()) with (const ref thing1, in thing2=d) {\n"
      "  writeln(thing1);\n"
      "  thing2 = thing3;\n"
      "}\n"
      "/* comment 4 */\n");
  assert(!guard.realizeErrors());
  auto mod = parseResult.singleModule();
  assert(mod);
  assert(mod->numStmts() == 3);
  assert(mod->stmt(0)->isComment());
  assert(mod->stmt(1)->isForall());
  assert(mod->stmt(2)->isComment());
  const Forall* forall = mod->stmt(1)->toForall();
  assert(forall != nullptr);
  assert(forall->index() != nullptr);
  assert(forall->index()->isVariable());
  assert(forall->iterand() != nullptr);
  const Zip* zip = forall->iterand()->toZip();
  assert(zip);
  assert(zip->numActuals() == 3);
  assert(zip->actual(0)->isIdentifier());
  assert(zip->actual(1)->isIdentifier());
  assert(zip->actual(2)->isFnCall());
  const WithClause* withClause = forall->withClause();
  assert(withClause);
  assert(withClause->numExprs() == 2);
  const TaskVar* taskVar0 = withClause->expr(0)->toTaskVar();
  assert(taskVar0);
  assert(!taskVar0->typeExpression());
  assert(!taskVar0->initExpression());
  assert(taskVar0->intent() == TaskVar::CONST_REF);
  const TaskVar* taskVar1 = withClause->expr(1)->toTaskVar();
  assert(taskVar1);
  assert(!taskVar1->typeExpression());
  assert(taskVar1->initExpression());
  assert(taskVar1->initExpression()->isIdentifier());
  assert(taskVar1->intent() == TaskVar::IN);
  assert(forall->blockStyle() == BlockStyle::EXPLICIT);
  assert(!forall->isExpressionLevel());
  assert(forall->numStmts() == 2);
  assert(forall->stmt(0)->isFnCall());
  assert(forall->stmt(1)->isOpCall());
}

static void test4(Parser* parser) {
  ErrorGuard guard(parser->context());
  auto parseResult = parseStringAndReportErrors(parser, "test4.chpl",
      "/* comment 1 */\n"
      "forall foo() do\n"
      "  /* comment 2 */\n"
      "  bar();\n"
      "/* comment 3 */\n");
  assert(!guard.realizeErrors());
  auto mod = parseResult.singleModule();
  assert(mod);
  assert(mod->numStmts() == 3);
  assert(mod->stmt(0)->isComment());
  assert(mod->stmt(1)->isForall());
  assert(mod->stmt(2)->isComment());
  const Forall* forall = mod->stmt(1)->toForall();
  assert(forall != nullptr);
  assert(forall->index() == nullptr);
  assert(forall->iterand() != nullptr);
  assert(forall->iterand()->isFnCall());
  assert(forall->withClause() == nullptr);
  assert(forall->numStmts() == 2);
  assert(forall->blockStyle() == BlockStyle::IMPLICIT);
  assert(!forall->isExpressionLevel());
  assert(forall->stmt(0)->isComment());
  assert(forall->stmt(1)->isFnCall());
}

static void test5(Parser* parser) {
  ErrorGuard guard(parser->context());
  auto parseResult = parseStringAndReportErrors(parser, "test5.chpl",
      "/* comment 1 */\n"
      "forall zip(a, b) with (var r=thing1) do {\n"
      "  writeln(r);\n"
      "}\n"
      "/* comment 4 */\n");
  assert(!guard.realizeErrors());
  auto mod = parseResult.singleModule();
  assert(mod);
  assert(mod->numStmts() == 3);
  assert(mod->stmt(0)->isComment());
  assert(mod->stmt(1)->isForall());
  assert(mod->stmt(2)->isComment());
  const Forall* forall = mod->stmt(1)->toForall();
  assert(forall != nullptr);
  assert(forall->index() == nullptr);
  assert(forall->iterand() != nullptr);
  const Zip* zip = forall->iterand()->toZip();
  assert(zip);
  assert(zip->numActuals() == 2);
  assert(zip->actual(0)->isIdentifier());
  assert(zip->actual(1)->isIdentifier());
  const WithClause* withClause = forall->withClause();
  assert(withClause);
  assert(withClause->numExprs() == 1);
  const TaskVar* taskVar0 = withClause->expr(0)->toTaskVar();
  assert(taskVar0);
  assert(!taskVar0->typeExpression());
  assert(taskVar0->initExpression());
  assert(taskVar0->intent() == TaskVar::VAR);
  assert(forall->blockStyle() == BlockStyle::UNNECESSARY_KEYWORD_AND_BLOCK);
  assert(!forall->isExpressionLevel());
  assert(forall->numStmts() == 1);
  assert(forall->stmt(0)->isFnCall());
}

static void test6(Parser* parser) {
  ErrorGuard guard(parser->context());
  auto parseResult = parseStringAndReportErrors(parser, "test6.chpl",
      "forall i in 1..10 with (re A) { }\n"
      "forall i in 1..10 with () { }\n"
      "forall i in 1..10 with ref A { }\n");
  auto numErrors = 5;
  assert(guard.errors().size() == (size_t) numErrors);
  assert("invalid intent expression in 'with' clause" == guard.error(1)->message());
  assert("'with' clause cannot be empty" == guard.error(2)->message());
  assert("missing parentheses around 'with' clause intents" == guard.error(4)->message());
  // The other errors are from the parser as "near ...".
  // It would be really nice to not have those be emitted at all.
  assert(guard.realizeErrors() == numErrors);
}

int main() {
  Context context;
  Context* ctx = &context;

  auto parser = Parser::createForTopLevelModule(ctx);
  Parser* p = &parser;

  test0(p);
  test1(p);
  test2(p);
  test3(p);
  test4(p);
  test5(p);
  test6(p);

  return 0;
}
