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

// ChapelTaskData.chpl
//
module ChapelTaskData {

  private use ChapelStandard, CTypes, OS.POSIX;

  // Chapel task-local data format:
  // up to 16 bytes of wide pointer for _remoteEndCountType
  // 1 byte for serial_state
  // 1 byte for nextCoStmtSerial
  // 1 byte for commDiagsTemporarilyDisabled
  private const chpl_offset_endCount = 0:c_size_t;
  private const chpl_offset_serial = sizeof_endcount_ptr();
  private const chpl_offset_nextCoStmtSerial = chpl_offset_serial+1;
  private const chpl_offset_commDiagsTemporarilyDisabled = chpl_offset_nextCoStmtSerial+1;
  private const chpl_offset_end = chpl_offset_commDiagsTemporarilyDisabled+1;

  // What is the size of a wide _EndCount pointer?
  private
  proc sizeof_endcount_ptr() {
    return c_sizeof(chpl_localeID_t) + c_sizeof(c_ptr(void));
  }

  // These functions get/set parts of the Chapel managed
  // task local storage starting from a pointer to the tls region.
  proc chpl_task_data_setDynamicEndCount(tls:c_ptr(chpl_task_infoChapel_t), end: _remoteEndCountType) {
    var prv = tls:c_ptr(c_uchar);
    var i:c_size_t;

    // Get the wide pointer components
    var loc = __primitive("_wide_get_locale", end);
    var adr = __primitive("_wide_get_addr", end);

    // Copy the localeID
    i = chpl_offset_endCount;
    memcpy(c_ptrTo(prv[i]), c_ptrTo(loc), c_sizeof(chpl_localeID_t));

    // Copy the address
    i += c_sizeof(chpl_localeID_t);
    memcpy(c_ptrTo(prv[i]), c_ptrTo(adr), c_sizeof(c_ptr(void)));
  }

  proc chpl_task_data_getDynamicEndCount(tls:c_ptr(chpl_task_infoChapel_t)) {
    var prv = tls:c_ptr(c_uchar);
    var i:c_size_t;

    var loc:chpl_localeID_t;
    var adr:c_ptr(void);

    // Copy the localeID
    i = chpl_offset_endCount;
    memcpy(c_ptrTo(loc), c_ptrTo(prv[i]), c_sizeof(chpl_localeID_t));

    // Copy the address
    i += c_sizeof(chpl_localeID_t);
    memcpy(c_ptrTo(adr), c_ptrTo(prv[i]), c_sizeof(c_ptr(void)));

    // Construct a pointer to return.
    var ret = __primitive("_wide_make", _remoteEndCountType, loc, adr);

    return ret;
  }

  proc chpl_task_data_setSerial(tls:c_ptr(chpl_task_infoChapel_t), makeSerial: bool) : void {
    var prv = tls:c_ptr(c_uchar);
    var i = chpl_offset_serial;
    var v:uint(8) = 0;
    if makeSerial then
      v = 1;
    // Using memcpy to avoid pointer type punning
    memcpy(c_ptrTo(prv[i]), c_ptrTo(v), c_sizeof(uint(8)));
  }
  proc chpl_task_data_getSerial(tls:c_ptr(chpl_task_infoChapel_t)) : bool {
    var prv = tls:c_ptr(c_uchar);
    var i = chpl_offset_serial;
    var v:uint(8) = 0;
    // Using memcpy to avoid pointer type punning
    memcpy(c_ptrTo(v), c_ptrTo(prv[i]), c_sizeof(uint(8)));
    // check we got 1 or 0 if bounds checking is on
    // (to detect runtime implementation errors where this part of
    //  the argument bundle is stack trash)
    if boundsChecking then
      assert(v == 0 || v == 1);
    return v == 1;
  }

  proc chpl_task_data_setNextCoStmtSerial(tls:c_ptr(chpl_task_infoChapel_t), makeSerial: bool) : void {
    var prv = tls:c_ptr(c_uchar);
    var i = chpl_offset_nextCoStmtSerial;
    var v:uint(8) = 0;
    if makeSerial then
      v = 1;
    memcpy(c_ptrTo(prv[i]), c_ptrTo(v), c_sizeof(uint(8)));
  }

  proc chpl_task_data_getNextCoStmtSerial(tls:c_ptr(chpl_task_infoChapel_t)) : bool {
    var prv = tls:c_ptr(c_uchar);
    var i = chpl_offset_nextCoStmtSerial;
    var v:uint(8) = 0;
    memcpy(c_ptrTo(v), c_ptrTo(prv[i]), c_sizeof(uint(8)));
    if boundsChecking then
      assert(v == 0 || v == 1);
    return v == 1;
  }

  proc chpl_task_data_setCommDiagsTemporarilyDisabled(tls:c_ptr(chpl_task_infoChapel_t), disabled: bool) : bool {
    var ret = chpl_task_data_getCommDiagsTemporarilyDisabled(tls);
    var prv = tls:c_ptr(c_uchar);
    var i = chpl_offset_commDiagsTemporarilyDisabled;
    var v:uint(8) = 0;
    if disabled then
      v = 1;
    memcpy(c_ptrTo(prv[i]), c_ptrTo(v), c_sizeof(uint(8)));
    return ret;
  }

  proc chpl_task_data_getCommDiagsTemporarilyDisabled(tls:c_ptr(chpl_task_infoChapel_t)) : bool {
    var prv = tls:c_ptr(c_uchar);
    var i = chpl_offset_commDiagsTemporarilyDisabled;
    var v:uint(8) = 0;
    memcpy(c_ptrTo(v), c_ptrTo(prv[i]), c_sizeof(uint(8)));
    if boundsChecking then
      assert(v == 0 || v == 1);
    return v == 1;
  }


  // These functions are like the above but first get the pointer
  // to the task local storage region for the currently executing task.
  // Note, these can be called before module initialization is complete.

  proc chpl_task_setDynamicEndCount(end: _remoteEndCountType) {
    chpl_task_data_setDynamicEndCount(chpl_task_getInfoChapel(), end);
  }
  proc chpl_task_getDynamicEndCount() : _remoteEndCountType {
    return chpl_task_data_getDynamicEndCount(chpl_task_getInfoChapel());
  }

  export proc chpl_task_setSerial(makeSerial: bool) : void {
    chpl_task_data_setSerial(chpl_task_getInfoChapel(), makeSerial);
  }
  export proc chpl_task_getSerial() : bool {
    return chpl_task_data_getSerial(chpl_task_getInfoChapel());
  }

  export proc chpl_task_setCommDiagsTemporarilyDisabled(disabled: bool) : bool {
    return chpl_task_data_setCommDiagsTemporarilyDisabled(chpl_task_getInfoChapel(), disabled);
  }

  export proc chpl_task_getCommDiagsTemporarilyDisabled() : bool {
    return chpl_task_data_getCommDiagsTemporarilyDisabled(chpl_task_getInfoChapel());
  }


  // module init function - check sizes
  {
    assert(chpl_offset_end <= c_sizeof(chpl_task_infoChapel_t));
  }
}
