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
#include "expr.h"
#include "initializerRules.h"
#include "stlUtil.h"

#include "global-ast-vecs.h"

static void checkFunctionSignatures();
static void checkPrimNew();
static void checkExplicitThis();

void checkNormalized() {
  checkFunctionSignatures();
  checkPrimNew();
  checkExplicitThis();
}


static void checkFunctionSignatures() {
  forv_Vec(FnSymbol, fn, gFnSymbols) {
    if (fn->isIterator()) {
      if (fn->retTag == RET_TYPE) {
        USR_FATAL_CONT(fn, "iterators may not yield or return types");
      }

      if (fn->retTag == RET_PARAM) {
        USR_FATAL_CONT(fn, "iterators may not yield or return parameters");
      }

    } else if (fn->hasFlag(FLAG_DESTRUCTOR) == true) {
      if (fn->retExprType != NULL) {
        USR_FATAL_CONT(fn, "destructors may not declare a return type");
      }
    }
  }
}

static void checkPrimNew() {
  forv_Vec(CallExpr, call, gCallExprs) {
    if (call->inTree() && isNewLike(call)) {

      int type_index = call->isPrimitive(PRIM_NEW) ? 1 : 2;

      if (call->numActuals() >= type_index) {
        Expr*    arg1     = call->get(type_index);
        SymExpr* se       = toSymExpr(arg1);
        Expr*    typeExpr = NULL;

        // Extract the type expression
        if (se != NULL && se->symbol() == gModuleToken) {
          typeExpr = call->get(type_index+2);
        } else {
          typeExpr = call->get(type_index);
        }

        if        (isUnresolvedSymExpr(typeExpr) == true) {

        } else if (isTypeExpr(typeExpr)          == true) {

        } else if (isCallExpr(typeExpr)          == true) {

        } else if (SymExpr* se = toSymExpr(typeExpr)) {
          if (se->symbol()->hasFlag(FLAG_MAYBE_TYPE) == false) {
            USR_FATAL_CONT(call,
                           "'new' must be followed by a type expression");
          }

        } else {
          USR_FATAL_CONT(call, "'new' must be followed by a type expression");
        }

      } else {
        USR_FATAL_CONT(call, "invalid use of 'new'");
      }
    }
  }

  USR_STOP();
}

static void checkExplicitThis() {
  // only do these checks if `--warn-unstable`
  if (!fWarnUnstable) return;

  // keep track of if we have run these checks,
  // because checkNormalized is called multiple times with `--verify`
  // and these should only run once
  static bool hasPerformedChecks = false;
  if (hasPerformedChecks) return;

  for_alive_in_Vec(CallExpr, ce, gCallExprs) {
    if (shouldWarnUnstableFor(ce)) {
      // if there is an explicit method call to `this`, warn unstable
      bool isNamedThis = false;
      bool isMethod = false;

      if (UnresolvedSymExpr* methodName = toUnresolvedSymExpr(ce->baseExpr)) {
        isNamedThis = methodName->unresolved == astrThis;
      }
      // cannot use methodTag since we are preResolution
      if (ce->numActuals() >= 1) {
        if (SymExpr* firstArg = toSymExpr(ce->get(1))) {
          isMethod = firstArg->symbol()->type == dtMethodToken;
        }
      }

      if (isNamedThis && isMethod)
        USR_WARN(ce,
                "calling the 'this' method explicitly is unstable "
                "and may change in the future");
    }
  }
  hasPerformedChecks = true;
}
