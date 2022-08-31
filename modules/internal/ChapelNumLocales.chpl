/*
 * Copyright 2020-2022 Hewlett Packard Enterprise Development LP
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

// ChapelNumLocales.chpl
//
module ChapelNumLocales {
  private use ChapelBase;

  extern proc chpl_comm_default_num_locales(): int;
  private proc getEnvInt(name: string, default: int): int {
    extern proc getenv(name : c_string) : c_string;
    var strval = getenv(name.localize().c_str()): string;
    if strval.isEmpty() { return default; }
    return try! strval: int;
  }

  //
  // the number of locales on which to run the program
  //
  config const numLocales = getEnvInt("CHPL_RT_NUM_LOCALES", chpl_comm_default_num_locales());
  config const localesPerNode = 1;
  config const numNodes = numLocales;
}
