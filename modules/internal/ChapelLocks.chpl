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

/*
 * Collection of mutexes/locks.
 */
module ChapelLocks {
  private use Atomics, ChapelBase;
  private use MemConsistency;
  import CTypes.{c_ptr, c_ptrTo};

  /*
   * Local processor atomic spinlock. Intended for situations with minimal
   * contention or very short critical sections.
   */
  pragma "default intent is ref"
  record chpl_LocalSpinlock {
    var l: chpl__processorAtomicType(bool);

    // override compiler-generated default initializer because we don't
    // ever want/need to pass an atomic into it (and someday it'll
    // just take bool rather than atomic bool, and until then, we get
    // a --warn-unstable error)
    proc init() {
    }
    proc init=(other: chpl_LocalSpinlock) {
      init this;
      this.l.init_helper(other.l.read());
    }

    inline proc ref lock() {
      use ChapelBase.currentTask;
      on this do
        while l.read() || l.testAndSet(memoryOrder.acquire) do
          yieldExecution();
    }

    inline proc ref unlock() {
      l.clear(memoryOrder.release);
    }

    inline proc ref enterContext() do lock();
    inline proc ref exitContext(in e: owned Error?) {
      defer unlock();
      if e then halt();
    }
  }

  chpl_LocalSpinlock implements contextManager;
}
