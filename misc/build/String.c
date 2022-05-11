/* String.chpl:208 */
static void chpl__init_String(int64_t _ln_chpl,
                              int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_String_p) {
    goto _exit_chpl__init_String_chpl;
  }
  printModuleInit_chpl("%*s\n", "String", INT64(6));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_String_p = UINT8(true);
  {
    chpl__init_CTypes(INT64(208), INT32(11));
    chpl__init_ByteBufferHelpers(INT64(208), INT32(11));
    chpl__init_BytesStringCommon(INT64(208), INT32(11));
    chpl__init_SysBasic(INT64(208), INT32(11));
    chpl__init_CString(INT64(208), INT32(11));
    chpl__init_StringCasts(INT64(208), INT32(11));
    chpl__init_NVStringFactory(INT64(208), INT32(11));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_String_chpl:;
  return;
}

/* String.chpl:247 */
static void init_chpl71(byteIndex_chpl * this_chpl7) {
  (this_chpl7)->_bindex = INT64(0);
  return;
}

/* String.chpl:252 */
static void init_ASSIGN__chpl20(byteIndex_chpl * this_chpl7,
                                int64_t i_chpl) {
  (this_chpl7)->_bindex = i_chpl;
  return;
}

/* String.chpl:258 */
static void chpl___COLON_11(byteIndex_chpl * val_chpl,
                            string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  chpl___COLON_16((val_chpl)->_bindex, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* String.chpl:270 */
static void init_chpl72(codepointIndex_chpl * this_chpl7) {
  (this_chpl7)->_cpindex = INT64(0);
  return;
}

/* String.chpl:288 */
static void chpl_build_bounded_range2(byteIndex_chpl * low_chpl2,
                                      byteIndex_chpl * high_chpl,
                                      range_byteIndex_bounded_F_chpl * _retArg_chpl) {
  range_byteIndex_bounded_F_chpl call_tmp_chpl36;
  range_byteIndex_bounded_F_chpl initTemp_chpl;
  init_chpl27(&initTemp_chpl, low_chpl2, high_chpl);
  call_tmp_chpl36 = initTemp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* String.chpl:293 */
static void chpl_build_low_bounded_range2(byteIndex_chpl * low_chpl2,
                                          range_byteIndex_boundedLow_F_chpl * _retArg_chpl) {
  range_byteIndex_boundedLow_F_chpl call_tmp_chpl36;
  range_byteIndex_boundedLow_F_chpl initTemp_chpl;
  init_chpl29(&initTemp_chpl, low_chpl2);
  call_tmp_chpl36 = initTemp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* String.chpl:298 */
static void chpl_build_high_bounded_range(byteIndex_chpl * high_chpl,
                                          range_byteIndex_boundedHigh_F_chpl * _retArg_chpl) {
  range_byteIndex_boundedHigh_F_chpl call_tmp_chpl36;
  range_byteIndex_boundedHigh_F_chpl initTemp_chpl;
  init_chpl30(&initTemp_chpl, high_chpl);
  call_tmp_chpl36 = initTemp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* String.chpl:529 */
static int64_t validateEncoding_chpl(uint8_t * buf_chpl,
                                     int64_t len_chpl,
                                     chpl____wide_Error * error_out_chpl) {
  string_chpl local__str_literal_75_chpl;
  int64_t ret_chpl;
  int64_t numCodepoints_chpl;
  int32_t call_tmp_chpl36;
  _owned_DecodeError_chpl call_tmp_chpl37;
  DecodeError_chpl new_temp_chpl = NULL;
  _owned_DecodeError_chpl initTemp_chpl;
  chpl____wide_Error call_tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 coerce_tmp_chpl3;
  _owned_Error_chpl2 ret_tmp_chpl;
  _ref__owned_DecodeError_chpl i_x_chpl = NULL;
  _ref__owned_Error_chpl2 i__retArg_chpl = NULL;
  _owned_DecodeError_chpl _formal_tmp_x_chpl;
  _owned_Error_chpl2 ret_chpl2;
  _ref__owned_DecodeError_chpl i_this_chpl = NULL;
  Error_chpl call_tmp_chpl39 = NULL;
  _ref__owned_DecodeError_chpl i_this_chpl2 = NULL;
  _owned_Error_chpl2 call_tmp_chpl40;
  _owned_Error_chpl2 initTemp_chpl2;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 _formal_tmp_in_err_chpl;
  chpl____wide_Error chpl_macro_tmp_701;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  numCodepoints_chpl = INT64(0);
  call_tmp_chpl36 = chpl_enc_validate_buf(buf_chpl, len_chpl, &numCodepoints_chpl);
  if (call_tmp_chpl36 != ((int32_t)(INT64(0)))) {
    new_temp_chpl = _new_chpl13(INT64(535), INT32(11));
    init_chpl49(&initTemp_chpl, new_temp_chpl);
    call_tmp_chpl37 = initTemp_chpl;
    i_x_chpl = &call_tmp_chpl37;
    i__retArg_chpl = &ret_tmp_chpl;
    _formal_tmp_x_chpl = *(i_x_chpl);
    i_this_chpl = &_formal_tmp_x_chpl;
    call_tmp_chpl39 = ((Error_chpl)((i_this_chpl)->chpl_p));
    i_this_chpl2 = &_formal_tmp_x_chpl;
    (i_this_chpl2)->chpl_p = ((DecodeError_chpl)(nil));
    if (((object_chpl)(call_tmp_chpl39)) == nil) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(535), INT32(11));
    }
    chpl_macro_tmp_701.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_701.addr = call_tmp_chpl39;
    tmp_chpl15 = chpl_macro_tmp_701;
    init_chpl68(&initTemp_chpl2, tmp_chpl15);
    call_tmp_chpl40 = initTemp_chpl2;
    ret_chpl2 = call_tmp_chpl40;
    chpl__autoDestroy8(&_formal_tmp_x_chpl);
    *(i__retArg_chpl) = ret_chpl2;
    coerce_tmp_chpl3 = ret_tmp_chpl;
    _formal_tmp_in_err_chpl = coerce_tmp_chpl3;
    call_tmp_chpl38 = chpl_fix_thrown_error(&_formal_tmp_in_err_chpl, INT64(535), INT32(11));
    *(error_out_chpl) = call_tmp_chpl38;
    goto _end_validateEncoding_chpl;
  }
  ret_chpl = numCodepoints_chpl;
  _end_validateEncoding_chpl:;
  return ret_chpl;
}

/* String.chpl:586 */
static string_chpl chpl_createStringWithLiteral(c_string buffer_chpl,
                                                int64_t offset_chpl,
                                                c_string x_chpl2,
                                                int64_t length_chpl,
                                                int64_t numCodepoints_chpl) {
  c_ptr_uint8_t_chpl call_tmp_chpl36 = NULL;
  c_ptr_uint8_t_chpl buf_chpl = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl37 = NULL;
  c_void_ptr call_tmp_chpl38;
  c_void_ptr call_tmp_chpl39;
  _ref_uint8_t_chpl call_tmp_chpl40 = NULL;
  int64_t call_tmp_chpl41;
  string_chpl ret_chpl;
  string_chpl ret_chpl2;
  call_tmp_chpl36 = ((c_ptr_uint8_t_chpl)(((c_void_ptr)(buffer_chpl))));
  buf_chpl = call_tmp_chpl36;
  call_tmp_chpl37 = (call_tmp_chpl36 + offset_chpl);
  buf_chpl = call_tmp_chpl37;
  call_tmp_chpl38 = ((c_void_ptr)(call_tmp_chpl37));
  call_tmp_chpl39 = ((c_void_ptr)(x_chpl2));
  checkValue_chpl(length_chpl);
  memcpy(call_tmp_chpl38, call_tmp_chpl39, ((uint64_t)(length_chpl)));
  call_tmp_chpl40 = (buf_chpl + length_chpl);
  *(call_tmp_chpl40) = ((uint8_t)(INT64(0)));
  call_tmp_chpl41 = (length_chpl + INT64(1));
  init_chpl73(&ret_chpl2);
  initWithBorrowedBuffer_chpl2(&ret_chpl2, call_tmp_chpl37, length_chpl, call_tmp_chpl41);
  (&ret_chpl2)->cachedNumCodepoints = numCodepoints_chpl;
  ret_chpl = ret_chpl2;
  return ret_chpl;
}

/* String.chpl:837 */
static void init_chpl73(string_chpl * this_chpl7) {
  c_ptr_uint8_t_chpl init_coerce_tmp_chpl3 = NULL;
  int32_t call_tmp_chpl36;
  (this_chpl7)->buffLen = INT64(0);
  (this_chpl7)->buffSize = INT64(0);
  (this_chpl7)->cachedNumCodepoints = INT64(0);
  init_coerce_tmp_chpl3 = ((c_ptr_uint8_t_chpl)(nil));
  (this_chpl7)->buff = init_coerce_tmp_chpl3;
  (this_chpl7)->isOwned = UINT8(true);
  (this_chpl7)->hasEscapes = UINT8(false);
  call_tmp_chpl36 = get_chpl_nodeID();
  (this_chpl7)->locale_id = call_tmp_chpl36;
  return;
}

/* String.chpl:841 */
static void init_ASSIGN__chpl21(string_chpl * this_chpl7,
                                chpl____wide__ref_string s_chpl) {
  c_ptr_uint8_t_chpl init_coerce_tmp_chpl3 = NULL;
  int32_t call_tmp_chpl36;
  int32_t call_tmp_chpl37;
  int32_t tmp_chpl15;
  chpl_bool call_tmp_chpl38;
  int64_t ret_chpl;
  int64_t tmp_chpl16;
  chpl_bool tmp_chpl17;
  int64_t tmp_chpl18;
  c_ptr_uint8_t_chpl call_tmp_chpl39 = NULL;
  int32_t tmp_chpl19;
  c_ptr_uint8_t_chpl tmp_chpl20 = NULL;
  c_ptr_uint8_t_chpl coerce_tmp_chpl3 = NULL;
  c_ptr_uint8_t_chpl tmp_chpl21 = NULL;
  int64_t call_tmp_chpl40;
  int64_t tmp_chpl22;
  int16_t call_tmp_chpl41;
  c_void_ptr cast_tmp_chpl;
  c_ptr_uint8_t_chpl call_tmp_chpl42 = NULL;
  c_ptr_uint8_t_chpl dst_chpl = NULL;
  uint64_t call_tmp_chpl43;
  c_void_ptr coerce_tmp_chpl4;
  c_void_ptr coerce_tmp_chpl5;
  _ref_uint8_t_chpl call_tmp_chpl44 = NULL;
  c_ptr_uint8_t_chpl coerce_tmp_chpl6 = NULL;
  int64_t coerce_tmp_chpl7;
  _ref_uint8_t_chpl call_tmp_chpl45 = NULL;
  chpl____wide__ref_int32_t chpl_macro_tmp_702;
  chpl____wide__ref_int64_t chpl_macro_tmp_703;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_704;
  chpl____wide__ref_int64_t chpl_macro_tmp_705;
  chpl____wide__ref_int32_t chpl_macro_tmp_706;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_707;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_708;
  (this_chpl7)->buffLen = INT64(0);
  (this_chpl7)->buffSize = INT64(0);
  (this_chpl7)->cachedNumCodepoints = INT64(0);
  init_coerce_tmp_chpl3 = ((c_ptr_uint8_t_chpl)(nil));
  (this_chpl7)->buff = init_coerce_tmp_chpl3;
  (this_chpl7)->isOwned = UINT8(true);
  (this_chpl7)->hasEscapes = UINT8(false);
  call_tmp_chpl36 = get_chpl_nodeID();
  (this_chpl7)->locale_id = call_tmp_chpl36;
  call_tmp_chpl37 = get_chpl_nodeID();
  chpl_macro_tmp_702.locale = (s_chpl).locale;
  chpl_macro_tmp_702.addr = &(((s_chpl).addr)->locale_id);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_702).locale, INT64(0), INT32(0)), (chpl_macro_tmp_702).addr, sizeof(int32_t), COMMID(0), INT64(843), INT64(11));
  call_tmp_chpl38 = (tmp_chpl15 != call_tmp_chpl37);
  chpl_macro_tmp_703.locale = (s_chpl).locale;
  chpl_macro_tmp_703.addr = &(((s_chpl).addr)->buffLen);
  chpl_gen_comm_get(((void*)(&tmp_chpl16)), chpl_nodeFromLocaleID((chpl_macro_tmp_703).locale, INT64(0), INT32(0)), (chpl_macro_tmp_703).addr, sizeof(int64_t), COMMID(1), INT64(843), INT64(11));
  ret_chpl = tmp_chpl16;
  (this_chpl7)->isOwned = UINT8(true);
  chpl_macro_tmp_704.locale = (s_chpl).locale;
  chpl_macro_tmp_704.addr = &(((s_chpl).addr)->hasEscapes);
  chpl_gen_comm_get(((void*)(&tmp_chpl17)), chpl_nodeFromLocaleID((chpl_macro_tmp_704).locale, INT64(0), INT32(0)), (chpl_macro_tmp_704).addr, sizeof(chpl_bool), COMMID(2), INT64(843), INT64(11));
  (this_chpl7)->hasEscapes = tmp_chpl17;
  chpl_macro_tmp_705.locale = (s_chpl).locale;
  chpl_macro_tmp_705.addr = &(((s_chpl).addr)->cachedNumCodepoints);
  chpl_gen_comm_get(((void*)(&tmp_chpl18)), chpl_nodeFromLocaleID((chpl_macro_tmp_705).locale, INT64(0), INT32(0)), (chpl_macro_tmp_705).addr, sizeof(int64_t), COMMID(3), INT64(843), INT64(11));
  (this_chpl7)->cachedNumCodepoints = tmp_chpl18;
  if (ret_chpl > INT64(0)) {
    (this_chpl7)->buffLen = ret_chpl;
    if (call_tmp_chpl38) {
      chpl_macro_tmp_706.locale = (s_chpl).locale;
      chpl_macro_tmp_706.addr = &(((s_chpl).addr)->locale_id);
      chpl_gen_comm_get(((void*)(&tmp_chpl19)), chpl_nodeFromLocaleID((chpl_macro_tmp_706).locale, INT64(0), INT32(0)), (chpl_macro_tmp_706).addr, sizeof(int32_t), COMMID(4), INT64(843), INT64(11));
      chpl_macro_tmp_707.locale = (s_chpl).locale;
      chpl_macro_tmp_707.addr = &(((s_chpl).addr)->buff);
      chpl_gen_comm_get(((void*)(&tmp_chpl20)), chpl_nodeFromLocaleID((chpl_macro_tmp_707).locale, INT64(0), INT32(0)), (chpl_macro_tmp_707).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(5), INT64(843), INT64(11));
      call_tmp_chpl39 = bufferCopyRemote_chpl(((int64_t)(tmp_chpl19)), tmp_chpl20, ret_chpl);
      (this_chpl7)->buff = call_tmp_chpl39;
      (this_chpl7)->buffSize = ((int64_t)((ret_chpl + INT64(1))));
    } else {
      chpl_macro_tmp_708.locale = (s_chpl).locale;
      chpl_macro_tmp_708.addr = &(((s_chpl).addr)->buff);
      chpl_gen_comm_get(((void*)(&tmp_chpl21)), chpl_nodeFromLocaleID((chpl_macro_tmp_708).locale, INT64(0), INT32(0)), (chpl_macro_tmp_708).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(6), INT64(843), INT64(11));
      coerce_tmp_chpl3 = tmp_chpl21;
      call_tmp_chpl40 = chpl_here_good_alloc_size(((int64_t)((ret_chpl + INT64(1)))), INT64(843), INT32(11));
      if (call_tmp_chpl40 > INT64(0)) {
        tmp_chpl22 = call_tmp_chpl40;
      } else {
        tmp_chpl22 = INT64(0);
      }
      call_tmp_chpl41 = offset_STR_COPY_DATA_chpl();
      cast_tmp_chpl = chpl_here_alloc(tmp_chpl22, call_tmp_chpl41, INT64(843), INT32(11));
      call_tmp_chpl42 = ((c_ptr_uint8_t_chpl)(cast_tmp_chpl));
      dst_chpl = call_tmp_chpl42;
      call_tmp_chpl43 = ((uint64_t)(ret_chpl));
      coerce_tmp_chpl4 = ((c_void_ptr)((call_tmp_chpl42 + INT64(0))));
      coerce_tmp_chpl5 = ((c_void_ptr)((coerce_tmp_chpl3 + INT64(0))));
      checkValue_chpl4();
      memcpy(coerce_tmp_chpl4, coerce_tmp_chpl5, call_tmp_chpl43);
      call_tmp_chpl44 = (dst_chpl + ret_chpl);
      *(call_tmp_chpl44) = ((uint8_t)(INT64(0)));
      (this_chpl7)->buff = call_tmp_chpl42;
      coerce_tmp_chpl6 = (this_chpl7)->buff;
      coerce_tmp_chpl7 = (this_chpl7)->buffLen;
      call_tmp_chpl45 = (coerce_tmp_chpl6 + coerce_tmp_chpl7);
      *(call_tmp_chpl45) = ((uint8_t)(INT64(0)));
      (this_chpl7)->buffSize = tmp_chpl22;
    }
  }
  return;
}

/* String.chpl:846 */
static void deinit_chpl42(chpl____wide__ref_string this_chpl7) {
  chpl_bool tmp_chpl15;
  chpl_bool tmp_chpl16;
  c_ptr_uint8_t_chpl tmp_chpl17 = NULL;
  chpl_localeID_t call_tmp_chpl36;
  int32_t tmp_chpl18;
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl74 _args_foron_fn_chpl = NULL;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_709;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_710;
  chpl____wide__ref_int32_t chpl_macro_tmp_711;
  chpl__class_localson_fn_chpl74_object chpl_macro_tmp_712;
  chpl_macro_tmp_709.locale = (this_chpl7).locale;
  chpl_macro_tmp_709.addr = &(((this_chpl7).addr)->isOwned);
  chpl_gen_comm_get(((void*)(&tmp_chpl16)), chpl_nodeFromLocaleID((chpl_macro_tmp_709).locale, INT64(0), INT32(0)), (chpl_macro_tmp_709).addr, sizeof(chpl_bool), COMMID(7), INT64(850), INT64(11));
  if (tmp_chpl16) {
    chpl_macro_tmp_710.locale = (this_chpl7).locale;
    chpl_macro_tmp_710.addr = &(((this_chpl7).addr)->buff);
    chpl_gen_comm_get(((void*)(&tmp_chpl17)), chpl_nodeFromLocaleID((chpl_macro_tmp_710).locale, INT64(0), INT32(0)), (chpl_macro_tmp_710).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(8), INT64(850), INT64(11));
    tmp_chpl15 = (tmp_chpl17 != nil);
  } else {
    tmp_chpl15 = UINT8(false);
  }
  if (tmp_chpl15) {
    chpl_macro_tmp_711.locale = (this_chpl7).locale;
    chpl_macro_tmp_711.addr = &(((this_chpl7).addr)->locale_id);
    chpl_gen_comm_get(((void*)(&tmp_chpl18)), chpl_nodeFromLocaleID((chpl_macro_tmp_711).locale, INT64(0), INT32(0)), (chpl_macro_tmp_711).addr, sizeof(int32_t), COMMID(9), INT64(852), INT64(11));
    call_tmp_chpl36 = chpl_buildLocaleID(tmp_chpl18, c_sublocid_any, INT64(852), INT32(11));
    call_tmp_chpl37 = call_tmp_chpl36;
    chpl_rmem_consist_release(INT64(851), INT32(11));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
    if (isdirect_chpl) {
      on_fn_chpl74(this_chpl7);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl74)(&chpl_macro_tmp_712));
      chpl_check_nil(_args_foron_fn_chpl, INT64(851), INT32(11));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
      tmp_chpl19 = this_chpl7;
      chpl_check_nil(_args_foron_fn_chpl, INT64(851), INT32(11));
      (_args_foron_fn_chpl)->_1_this = tmp_chpl19;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl74_object);
      chpl_taskRunningCntDec(INT64(851), INT32(11));
      /*** wrapon_fn_chpl74 ***/ chpl_executeOn(call_tmp_chpl37, INT32(86), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(851), INT32(11));
      chpl_taskRunningCntInc(INT64(851), INT32(11));
    }
    chpl_rmem_consist_acquire(INT64(851), INT32(11));
  }
  return;
}

/* String.chpl:851 */
static void wrapon_fn_chpl74(_class_localson_fn_chpl74 c_chpl) {
  chpl____wide__ref_string _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(851), INT32(11));
  chpl_check_nil(c_chpl, INT64(851), INT32(11));
  _1_this_chpl = (c_chpl)->_1_this;
  chpl_taskRunningCntInc(INT64(851), INT32(11));
  on_fn_chpl74(_1_this_chpl);
  chpl_taskRunningCntDec(INT64(851), INT32(11));
  chpl_rmem_consist_release(INT64(851), INT32(11));
  return;
}

/* String.chpl:851 */
static void on_fn_chpl74(chpl____wide__ref_string this_chpl7) {
  c_ptr_uint8_t_chpl tmp_chpl15 = NULL;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_713;
  chpl_macro_tmp_713.locale = (this_chpl7).locale;
  chpl_macro_tmp_713.addr = &(((this_chpl7).addr)->buff);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_713).locale, INT64(0), INT32(0)), (chpl_macro_tmp_713).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(10), INT64(853), INT64(11));
  chpl_here_free(((c_void_ptr)(tmp_chpl15)), INT64(853), INT32(11));
  return;
}

/* String.chpl:858 */
static void chpl__serialize3(string_chpl * this_chpl7,
                             chpl____serializeHelper * _retArg_chpl) {
  chpl__inPlaceBuffer data_chpl;
  c_ptr_uint8_t_chpl call_tmp_chpl36 = NULL;
  int64_t coerce_tmp_chpl3;
  c_ptr_uint8_t_chpl coerce_tmp_chpl4 = NULL;
  int64_t coerce_tmp_chpl5;
  chpl____serializeHelper call_tmp_chpl37;
  chpl____serializeHelper initTemp_chpl;
  memset(&data_chpl, INT32(0), sizeof(chpl__inPlaceBuffer));
  if ((this_chpl7)->buffLen <= ((int64_t)(CHPL_SHORT_STRING_SIZE))) {
    call_tmp_chpl36 = chpl__getInPlaceBufferDataForWrite(&data_chpl);
    coerce_tmp_chpl3 = ((int64_t)((this_chpl7)->locale_id));
    coerce_tmp_chpl4 = (this_chpl7)->buff;
    coerce_tmp_chpl5 = (this_chpl7)->buffLen;
    checkValue_chpl(coerce_tmp_chpl5);
    chpl_gen_comm_get(((void*)(call_tmp_chpl36)), coerce_tmp_chpl3, coerce_tmp_chpl4, ((uint64_t)(coerce_tmp_chpl5)), COMMID(11), INT64(861), INT32(11));
  }
  init_chpl4(&initTemp_chpl, (this_chpl7)->buffLen, (this_chpl7)->buff, (this_chpl7)->buffSize, (this_chpl7)->locale_id, data_chpl, (this_chpl7)->cachedNumCodepoints);
  call_tmp_chpl37 = initTemp_chpl;
  *(_retArg_chpl) = call_tmp_chpl37;
  return;
}

/* String.chpl:867 */
static void chpl__deserialize3(chpl____serializeHelper * data_chpl,
                               string_chpl * _retArg_chpl) {
  string_chpl ret_chpl;
  int32_t call_tmp_chpl36;
  _ref_chpl__inPlaceBuffer_chpl call_tmp_chpl37 = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl38 = NULL;
  int64_t coerce_tmp_chpl3;
  int64_t coerce_tmp_chpl4;
  int64_t coerce_tmp_chpl5;
  string_chpl ret_chpl2;
  string_chpl ret_chpl3;
  c_ptr_uint8_t_chpl call_tmp_chpl39 = NULL;
  int64_t coerce_tmp_chpl6;
  int64_t coerce_tmp_chpl7;
  int64_t coerce_tmp_chpl8;
  string_chpl ret_chpl4;
  string_chpl ret_chpl5;
  _ref_string_chpl i_x_chpl = NULL;
  c_ptr_uint8_t_chpl coerce_tmp_chpl9 = NULL;
  int64_t coerce_tmp_chpl10;
  int64_t coerce_tmp_chpl11;
  int64_t coerce_tmp_chpl12;
  string_chpl ret_chpl6;
  string_chpl ret_chpl7;
  call_tmp_chpl36 = get_chpl_nodeID();
  if ((data_chpl)->locale_id != call_tmp_chpl36) {
    if ((data_chpl)->buffLen <= ((int64_t)(CHPL_SHORT_STRING_SIZE))) {
      call_tmp_chpl37 = &((data_chpl)->shortData);
      call_tmp_chpl38 = chpl__getInPlaceBufferData(call_tmp_chpl37);
      coerce_tmp_chpl3 = (data_chpl)->buffLen;
      coerce_tmp_chpl4 = (data_chpl)->size;
      coerce_tmp_chpl5 = (data_chpl)->cachedNumCodepoints;
      init_chpl73(&ret_chpl3);
      initWithNewBuffer_chpl(&ret_chpl3, call_tmp_chpl38, coerce_tmp_chpl3, coerce_tmp_chpl4);
      (&ret_chpl3)->cachedNumCodepoints = coerce_tmp_chpl5;
      ret_chpl2 = ret_chpl3;
      ret_chpl = ret_chpl2;
      goto _end_chpl__deserialize_chpl;
    } else {
      call_tmp_chpl39 = bufferCopyRemote_chpl(((int64_t)((data_chpl)->locale_id)), (data_chpl)->buff, (data_chpl)->buffLen);
      coerce_tmp_chpl6 = (data_chpl)->buffLen;
      coerce_tmp_chpl7 = (data_chpl)->size;
      coerce_tmp_chpl8 = (data_chpl)->cachedNumCodepoints;
      init_chpl73(&ret_chpl5);
      i_x_chpl = &ret_chpl5;
      (i_x_chpl)->isOwned = UINT8(true);
      (i_x_chpl)->buff = call_tmp_chpl39;
      (i_x_chpl)->buffSize = coerce_tmp_chpl7;
      (i_x_chpl)->buffLen = coerce_tmp_chpl6;
      (&ret_chpl5)->cachedNumCodepoints = coerce_tmp_chpl8;
      ret_chpl4 = ret_chpl5;
      ret_chpl = ret_chpl4;
      goto _end_chpl__deserialize_chpl;
    }
  } else {
    coerce_tmp_chpl9 = (data_chpl)->buff;
    coerce_tmp_chpl10 = (data_chpl)->buffLen;
    coerce_tmp_chpl11 = (data_chpl)->size;
    coerce_tmp_chpl12 = (data_chpl)->cachedNumCodepoints;
    init_chpl73(&ret_chpl7);
    initWithBorrowedBuffer_chpl2(&ret_chpl7, coerce_tmp_chpl9, coerce_tmp_chpl10, coerce_tmp_chpl11);
    (&ret_chpl7)->cachedNumCodepoints = coerce_tmp_chpl12;
    ret_chpl6 = ret_chpl7;
    ret_chpl = ret_chpl6;
    goto _end_chpl__deserialize_chpl;
  }
  _end_chpl__deserialize_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* String.chpl:902 */
static void _cpIndexLenHelpNoAdjustment_chpl(string_chpl * this_chpl7,
                                             int64_t * start_chpl,
                                             _tuple_3_int32_t_byteIndex_int64_t_chpl * _retArg_chpl) {
  string_chpl local__str_literal_311_chpl;
  _tuple_3_int32_t_byteIndex_int64_t_chpl ret_chpl;
  int32_t call_tmp_chpl36;
  int64_t coerce_tmp_chpl3;
  int64_t ret_chpl2;
  int64_t tmp_chpl15;
  int64_t tmp_chpl16;
  c_ptr_uint8_t_chpl coerce_tmp_chpl4 = NULL;
  _ref_uint8_t_chpl call_tmp_chpl37 = NULL;
  int32_t call_tmp_chpl38;
  byteIndex_chpl call_tmp_chpl39;
  byteIndex_chpl ret_chpl3;
  byteIndex_chpl cpi_chpl;
  _tuple_3_int32_t__ref_byteIndex_int64_t_chpl call_tmp_chpl40;
  _tuple_3_int32_t__ref_byteIndex_int64_t_chpl ret_tmp_chpl;
  _ref_byteIndex_chpl i__e1_x_chpl = NULL;
  _ref_byteIndex_chpl copy_ret_tmp_x1_chpl = NULL;
  int64_t copy_ret_tmp_x2_chpl;
  _tuple_3_int32_t_byteIndex_int64_t_chpl ret_chpl4;
  byteIndex_chpl elt_x1_chpl;
  int32_t call_tmp_x1_chpl;
  int32_t call_tmp_x2_chpl;
  _tuple_3_syserr_int32_t_int32_t_chpl ret_tmp_chpl2;
  byteIndex_chpl call_tmp_chpl41;
  byteIndex_chpl ret_chpl5;
  byteIndex_chpl cpi_chpl2;
  int64_t call_tmp_chpl42;
  _tuple_3_int32_t__ref_byteIndex_int64_t_chpl call_tmp_chpl43;
  _tuple_3_int32_t__ref_byteIndex_int64_t_chpl ret_tmp_chpl3;
  _ref_byteIndex_chpl i__e1_x_chpl2 = NULL;
  _ref_byteIndex_chpl copy_ret_tmp_x1_chpl2 = NULL;
  int64_t copy_ret_tmp_x2_chpl2;
  _tuple_3_int32_t_byteIndex_int64_t_chpl ret_chpl6;
  byteIndex_chpl elt_x1_chpl2;
  local__str_literal_311_chpl = _str_literal_311_chpl /* "internal error -- method requires localized string" */;
  call_tmp_chpl36 = get_chpl_nodeID();
  if ((this_chpl7)->locale_id != call_tmp_chpl36) {
    halt_chpl(&local__str_literal_311_chpl, INT64(905), INT32(11));
  }
  coerce_tmp_chpl3 = *(start_chpl);
  tmp_chpl15 = (this_chpl7)->cachedNumCodepoints;
  ret_chpl2 = tmp_chpl15;
  tmp_chpl16 = (this_chpl7)->buffLen;
  if (ret_chpl2 == tmp_chpl16) {
    *(start_chpl) += INT64(1);
    coerce_tmp_chpl4 = (this_chpl7)->buff;
    call_tmp_chpl37 = (coerce_tmp_chpl4 + coerce_tmp_chpl3);
    call_tmp_chpl38 = ((int32_t)(*(call_tmp_chpl37)));
    init_chpl71(&cpi_chpl);
    (&cpi_chpl)->_bindex = coerce_tmp_chpl3;
    ret_chpl3 = cpi_chpl;
    call_tmp_chpl39 = ret_chpl3;
    i__e1_x_chpl = &call_tmp_chpl39;
    (&ret_tmp_chpl)->x0 = call_tmp_chpl38;
    (&ret_tmp_chpl)->x1 = i__e1_x_chpl;
    (&ret_tmp_chpl)->x2 = INT64(1);
    call_tmp_chpl40 = ret_tmp_chpl;
    copy_ret_tmp_x1_chpl = (&call_tmp_chpl40)->x1;
    copy_ret_tmp_x2_chpl = (&call_tmp_chpl40)->x2;
    elt_x1_chpl = *(copy_ret_tmp_x1_chpl);
    (&ret_chpl4)->x0 = (&call_tmp_chpl40)->x0;
    (&ret_chpl4)->x1 = elt_x1_chpl;
    (&ret_chpl4)->x2 = copy_ret_tmp_x2_chpl;
    ret_chpl = ret_chpl4;
    goto _end__cpIndexLenHelpNoAdjustment_chpl;
  } else {
    decodeHelp_chpl((this_chpl7)->buff, (this_chpl7)->buffLen, coerce_tmp_chpl3, UINT8(true), &ret_tmp_chpl2);
    call_tmp_x1_chpl = (&ret_tmp_chpl2)->x1;
    call_tmp_x2_chpl = (&ret_tmp_chpl2)->x2;
    *(start_chpl) += ((int64_t)(call_tmp_x2_chpl));
    init_chpl71(&cpi_chpl2);
    (&cpi_chpl2)->_bindex = coerce_tmp_chpl3;
    ret_chpl5 = cpi_chpl2;
    call_tmp_chpl41 = ret_chpl5;
    call_tmp_chpl42 = ((int64_t)(call_tmp_x2_chpl));
    i__e1_x_chpl2 = &call_tmp_chpl41;
    (&ret_tmp_chpl3)->x0 = call_tmp_x1_chpl;
    (&ret_tmp_chpl3)->x1 = i__e1_x_chpl2;
    (&ret_tmp_chpl3)->x2 = call_tmp_chpl42;
    call_tmp_chpl43 = ret_tmp_chpl3;
    copy_ret_tmp_x1_chpl2 = (&call_tmp_chpl43)->x1;
    copy_ret_tmp_x2_chpl2 = (&call_tmp_chpl43)->x2;
    elt_x1_chpl2 = *(copy_ret_tmp_x1_chpl2);
    (&ret_chpl6)->x0 = (&call_tmp_chpl43)->x0;
    (&ret_chpl6)->x1 = elt_x1_chpl2;
    (&ret_chpl6)->x2 = copy_ret_tmp_x2_chpl2;
    ret_chpl = ret_chpl6;
    goto _end__cpIndexLenHelpNoAdjustment_chpl;
  }
  _end__cpIndexLenHelpNoAdjustment_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* String.chpl:1087 */
static int64_t doSearchUTF8_chpl(string_chpl * this_chpl7,
                                 string_chpl * pattern_chpl,
                                 range_byteIndex_boundedLow_F_chpl indices_chpl2) {
  int64_t ret_chpl;
  int64_t ret_chpl2;
  chpl_localeID_t call_tmp_chpl36;
  chpl_localeID_t call_tmp_chpl37;
  chpl____serializeHelper pattern_data_chpl;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl75 _args_foron_fn_chpl = NULL;
  _ref_string_chpl tmp_chpl17 = NULL;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t_chpl tmp_chpl19 = NULL;
  chpl____wide__ref_int64_t tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_string chpl_macro_tmp_714;
  chpl____wide__ref_int64_t chpl_macro_tmp_715;
  chpl__class_localson_fn_chpl75_object chpl_macro_tmp_716;
  chpl____wide__ref_string chpl_macro_tmp_717;
  chpl____wide__ref_int64_t chpl_macro_tmp_718;
  ret_chpl2 = INT64(-1);
  call_tmp_chpl36 = chpl_buildLocaleID((this_chpl7)->locale_id, c_sublocid_any, INT64(1092), INT32(11));
  call_tmp_chpl37 = call_tmp_chpl36;
  chpl_rmem_consist_release(INT64(1091), INT32(11));
  chpl__serialize3(pattern_chpl, &pattern_data_chpl);
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
  if (isdirect_chpl) {
    chpl_macro_tmp_714.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_714.addr = this_chpl7;
    tmp_chpl15 = chpl_macro_tmp_714;
    chpl_macro_tmp_715.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_715.addr = &ret_chpl2;
    tmp_chpl16 = chpl_macro_tmp_715;
    on_fn_chpl75(tmp_chpl15, &pattern_data_chpl, indices_chpl2, tmp_chpl16);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl75)(&chpl_macro_tmp_716));
    chpl_check_nil(_args_foron_fn_chpl, INT64(1091), INT32(11));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
    tmp_chpl17 = this_chpl7;
    chpl_macro_tmp_717.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_717.addr = tmp_chpl17;
    tmp_chpl18 = chpl_macro_tmp_717;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1091), INT32(11));
    (_args_foron_fn_chpl)->_1_this = tmp_chpl18;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1091), INT32(11));
    (_args_foron_fn_chpl)->_2_pattern_data = pattern_data_chpl;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1091), INT32(11));
    (_args_foron_fn_chpl)->_3_indices = indices_chpl2;
    tmp_chpl19 = &ret_chpl2;
    chpl_macro_tmp_718.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_718.addr = tmp_chpl19;
    tmp_chpl20 = chpl_macro_tmp_718;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1091), INT32(11));
    (_args_foron_fn_chpl)->_4_ret = tmp_chpl20;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl75_object);
    chpl_taskRunningCntDec(INT64(1091), INT32(11));
    /*** wrapon_fn_chpl75 ***/ chpl_executeOn(call_tmp_chpl37, INT32(87), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1091), INT32(11));
    chpl_taskRunningCntInc(INT64(1091), INT32(11));
  }
  chpl_rmem_consist_acquire(INT64(1091), INT32(11));
  ret_chpl = ret_chpl2;
  return ret_chpl;
}

/* String.chpl:1091 */
static void on_fn_chpl75(chpl____wide__ref_string this_chpl7,
                         chpl____serializeHelper * pattern_chpl,
                         range_byteIndex_boundedLow_F_chpl indices_chpl2,
                         chpl____wide__ref_int64_t ret_chpl) {
  string_chpl local__str_literal_596_chpl;
  string_chpl pattern_chpl2;
  _ref_string_chpl pattern_chpl3 = NULL;
  _ref_string_chpl tmp_chpl15 = NULL;
  int64_t localRet_chpl;
  int64_t nLen_chpl;
  int64_t coerce_tmp_chpl3;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl call_tmp_chpl36;
  Error_chpl error_chpl = NULL;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_tmp_chpl;
  chpl____wide_Error tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl tmp_x0_chpl;
  range_int64_t_bounded_F_chpl tmp_chpl17;
  range_int64_t_bounded_F_chpl view_chpl;
  int64_t call_tmp_chpl37;
  string_chpl ret_chpl2;
  int32_t call_tmp_chpl38;
  string_chpl ret_chpl3;
  string_chpl ret_chpl4;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl x_chpl2;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl localPattern_chpl;
  int64_t call_tmp_chpl39;
  range_int64_t_bounded_F_chpl tmp_chpl20;
  range_int64_t_boundedLow_F_chpl call_tmp_chpl40;
  range_int64_t_boundedLow_F_chpl ret_tmp_chpl2;
  range_int64_t_bounded_F_chpl ret_tmp_chpl3;
  range_int64_t_bounded_F_chpl _ic__F0_this_chpl;
  int64_t i_chpl;
  range_int64_t_bounded_F_chpl this_chpl8;
  int64_t coerce_tmp_chpl4;
  range_int64_t_bounded_F_chpl this_chpl9;
  int64_t end_chpl;
  chpl_bool call_tmp_chpl41;
  chpl_bool call_tmp_chpl42;
  int64_t i_chpl2;
  int64_t tmp_x0_chpl2;
  int64_t tmp_x1_chpl;
  int64_t _ic__F1_high_chpl;
  int64_t i_chpl3;
  int64_t call_tmp_chpl43;
  c_ptr_uint8_t_chpl coerce_tmp_chpl5 = NULL;
  c_ptr_uint8_t_chpl tmp_chpl21 = NULL;
  _ref_uint8_t_chpl call_tmp_chpl44 = NULL;
  c_ptr_uint8_t_chpl coerce_tmp_chpl6 = NULL;
  _ref_uint8_t_chpl call_tmp_chpl45 = NULL;
  int64_t call_tmp_chpl46;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_719;
  chpl____wide__ref_string chpl_macro_tmp_720;
  chpl____wide__ref_string chpl_macro_tmp_721;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_722;
  chpl____wide__ref_string chpl_macro_tmp_723;
  chpl____wide__ref_string chpl_macro_tmp_724;
  local__str_literal_596_chpl = _str_literal_596_chpl /* "With a negative count, the range must have a last index." */;
  tmp_chpl15 = &pattern_chpl2;
  chpl__deserialize3(pattern_chpl, tmp_chpl15);
  pattern_chpl3 = &pattern_chpl2;
  localRet_chpl = INT64(-2);
  coerce_tmp_chpl3 = (&pattern_chpl2)->buffLen;
  nLen_chpl = coerce_tmp_chpl3;
  error_chpl = NULL;
  getView_chpl4(this_chpl7, indices_chpl2, &error_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  if (error_chpl != nil) {
    chpl_macro_tmp_719.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_719.addr = error_chpl;
    tmp_chpl16 = chpl_macro_tmp_719;
    chpl_uncaught_error(tmp_chpl16, INT64(1097), INT32(11));
  }
  tmp_chpl17 = (&call_tmp_chpl36)->x0;
  tmp_x0_chpl = tmp_chpl17;
  view_chpl = tmp_x0_chpl;
  call_tmp_chpl37 = size_chpl2(tmp_x0_chpl);
  if (coerce_tmp_chpl3 == INT64(0)) {
    localRet_chpl = INT64(-1);
  }
  if (coerce_tmp_chpl3 > call_tmp_chpl37) {
    localRet_chpl = INT64(-1);
  }
  if (localRet_chpl == INT64(-2)) {
    localRet_chpl = INT64(-1);
    call_tmp_chpl38 = get_chpl_nodeID();
    if ((&pattern_chpl2)->locale_id == call_tmp_chpl38) {
      init_chpl73(&ret_chpl4);
      (&ret_chpl4)->cachedNumCodepoints = (&pattern_chpl2)->cachedNumCodepoints;
      chpl_macro_tmp_720.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_720.addr = pattern_chpl3;
      tmp_chpl18 = chpl_macro_tmp_720;
      initWithBorrowedBuffer_chpl(&ret_chpl4, tmp_chpl18);
      ret_chpl3 = ret_chpl4;
      ret_chpl2 = ret_chpl3;
      goto _end_localize_chpl;
    } else {
      chpl_macro_tmp_721.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_721.addr = pattern_chpl3;
      tmp_chpl19 = chpl_macro_tmp_721;
      init_ASSIGN__chpl21(&x_chpl2, tmp_chpl19);
      ret_chpl2 = x_chpl2;
      goto _end_localize_chpl;
    }
    _end_localize_chpl:;
    localPattern_chpl = ret_chpl2;
    call_tmp_chpl39 = (((int64_t)((call_tmp_chpl37 - coerce_tmp_chpl3))) + INT64(1));
    chpl_build_low_bounded_range(INT64(0), &ret_tmp_chpl2);
    call_tmp_chpl40 = ret_tmp_chpl2;
    chpl___POUND_(call_tmp_chpl40, call_tmp_chpl39, &ret_tmp_chpl3);
    tmp_chpl20 = ret_tmp_chpl3;
    _ic__F0_this_chpl = tmp_chpl20;
    checkIfIterWillOverflow_chpl(tmp_chpl20, UINT8(true));
    i_chpl = INT64(0);
    this_chpl8 = _ic__F0_this_chpl;
    coerce_tmp_chpl4 = (&this_chpl8)->_low;
    this_chpl9 = _ic__F0_this_chpl;
    end_chpl = (&this_chpl9)->_high;
    call_tmp_chpl41 = (nLen_chpl < INT64(0));
    call_tmp_chpl42 = (nLen_chpl == INT64(0));
    for (i_chpl = coerce_tmp_chpl4; ((i_chpl <= end_chpl)); i_chpl += INT64(1)) {
      i_chpl2 = i_chpl;
      if (call_tmp_chpl41) {
        boundsCheckHalt_chpl(&local__str_literal_596_chpl, INT64(1153), INT32(11));
      }
      if (call_tmp_chpl42) {
        tmp_x0_chpl2 = INT64(0);
        tmp_x1_chpl = ((int64_t)(((uint64_t)((((uint64_t)(INT64(0))) - UINT64(1))))));
      } else {
        tmp_x0_chpl2 = INT64(0);
        tmp_x1_chpl = ((int64_t)((INT64(0) + ((int64_t)((nLen_chpl - INT64(1)))))));
      }
      _ic__F1_high_chpl = tmp_x1_chpl;
      i_chpl3 = INT64(0);
      chpl_checkIfRangeIterWillOverflow(tmp_x0_chpl2, tmp_x1_chpl, INT64(1), tmp_x0_chpl2, tmp_x1_chpl, UINT8(true));
      for (i_chpl3 = tmp_x0_chpl2; ((i_chpl3 <= _ic__F1_high_chpl)); i_chpl3 += INT64(1)) {
        call_tmp_chpl43 = orderToIndex_chpl(view_chpl, ((int64_t)((i_chpl2 + i_chpl3))));
        chpl_macro_tmp_722.locale = (this_chpl7).locale;
        chpl_macro_tmp_722.addr = &(((this_chpl7).addr)->buff);
        chpl_gen_comm_get(((void*)(&tmp_chpl21)), chpl_nodeFromLocaleID((chpl_macro_tmp_722).locale, INT64(0), INT32(0)), (chpl_macro_tmp_722).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(12), INT64(1155), INT64(11));
        coerce_tmp_chpl5 = tmp_chpl21;
        call_tmp_chpl44 = (coerce_tmp_chpl5 + call_tmp_chpl43);
        coerce_tmp_chpl6 = (&localPattern_chpl)->buff;
        call_tmp_chpl45 = (coerce_tmp_chpl6 + i_chpl3);
        if (*(call_tmp_chpl44) != *(call_tmp_chpl45)) {
          goto _breakLabel_chpl;
        }
        if (i_chpl3 == ((int64_t)((nLen_chpl - INT64(1))))) {
          call_tmp_chpl46 = orderToIndex_chpl(view_chpl, i_chpl2);
          localRet_chpl = call_tmp_chpl46;
        }
      }
      _breakLabel_chpl:;
      if (localRet_chpl != INT64(-1)) {
        goto _breakLabel_chpl2;
      }
    }
    _breakLabel_chpl2:;
    i_x_chpl = &localPattern_chpl;
    chpl_macro_tmp_723.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_723.addr = i_x_chpl;
    tmp_chpl22 = chpl_macro_tmp_723;
    deinit_chpl42(tmp_chpl22);
  }
  chpl_gen_comm_put(((void*)(&localRet_chpl)), chpl_nodeFromLocaleID((ret_chpl).locale, INT64(0), INT32(0)), (ret_chpl).addr, sizeof(int64_t), COMMID(13), INT64(1169), INT64(11));
  i_x_chpl2 = &pattern_chpl2;
  chpl_macro_tmp_724.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_724.addr = i_x_chpl2;
  tmp_chpl23 = chpl_macro_tmp_724;
  deinit_chpl42(tmp_chpl23);
  return;
}

/* String.chpl:1091 */
static void wrapon_fn_chpl75(_class_localson_fn_chpl75 c_chpl) {
  chpl____wide__ref_string _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____serializeHelper _2_pattern_data_chpl;
  chpl____serializeHelper tmp_chpl15;
  range_byteIndex_boundedLow_F_chpl _3_indices_chpl;
  range_byteIndex_boundedLow_F_chpl tmp_chpl16;
  chpl____wide__ref_int64_t _4_ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1091), INT32(11));
  chpl_check_nil(c_chpl, INT64(1091), INT32(11));
  _1_this_chpl = (c_chpl)->_1_this;
  chpl_check_nil(c_chpl, INT64(1091), INT32(11));
  tmp_chpl15 = (c_chpl)->_2_pattern_data;
  _2_pattern_data_chpl = tmp_chpl15;
  chpl_check_nil(c_chpl, INT64(1091), INT32(11));
  tmp_chpl16 = (c_chpl)->_3_indices;
  _3_indices_chpl = tmp_chpl16;
  chpl_check_nil(c_chpl, INT64(1091), INT32(11));
  _4_ret_chpl = (c_chpl)->_4_ret;
  chpl_taskRunningCntInc(INT64(1091), INT32(11));
  on_fn_chpl75(_1_this_chpl, &_2_pattern_data_chpl, _3_indices_chpl, _4_ret_chpl);
  chpl_taskRunningCntDec(INT64(1091), INT32(11));
  chpl_rmem_consist_release(INT64(1091), INT32(11));
  return;
}

/* String.chpl:1408 */
static void advance_chpl2(_ic_chpl_bytes__ref_string_chpl this_chpl7) {
  string_chpl local__str_literal_596_chpl;
  int64_t more_chpl;
  _ref_string_chpl tmp_chpl15 = NULL;
  string_chpl ret_chpl;
  int32_t call_tmp_chpl36;
  string_chpl ret_chpl2;
  string_chpl ret_chpl3;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl x_chpl2;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl tmp_chpl18 = NULL;
  int64_t coerce_tmp_chpl3;
  _ic_chpl_direct_counted_range_iter_chpl _ic__chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  int64_t low_chpl2;
  _ref__ic_chpl_direct_counted_range_iter_chpl tmp_chpl19 = NULL;
  int64_t count_chpl;
  _ref__ic_chpl_direct_counted_range_iter_chpl tmp_chpl20 = NULL;
  _ic_chpl_direct_counted_range_iter_helper_chpl _ic__chpl2 = NULL;
  c_void_ptr cast_tmp_chpl2;
  _ref__ic_chpl_direct_counted_range_iter_helper_chpl tmp_chpl21 = NULL;
  _tuple_2_star_int64_t_chpl tmp_chpl22;
  _ref__ic_chpl_direct_counted_range_iter_helper_chpl tmp_chpl23 = NULL;
  _ref__ic_chpl_direct_counted_range_iter_helper_chpl tmp_chpl24 = NULL;
  int64_t call_tmp_chpl37;
  _tuple_2_star_int64_t_chpl ret_tmp_chpl;
  _ref__ic_chpl_direct_counted_range_iter_helper_chpl tmp_chpl25 = NULL;
  _ref__ic_chpl_direct_counted_range_iter_helper_chpl tmp_chpl26 = NULL;
  int64_t call_tmp_chpl38;
  _ref__ic_chpl_direct_counted_range_iter_helper_chpl tmp_chpl27 = NULL;
  int64_t call_tmp_chpl39;
  _tuple_2_star_int64_t_chpl ret_tmp_chpl2;
  _ref__ic_chpl_direct_counted_range_iter_helper_chpl tmp_chpl28 = NULL;
  _ref__tuple_2_star_int64_t_chpl tmp_chpl29 = NULL;
  int64_t coerce_tmp_chpl4;
  _ref__tuple_2_star_int64_t_chpl tmp_chpl30 = NULL;
  int64_t coerce_tmp_chpl5;
  _ic_chpl_direct_param_stride_range_iter_chpl _ic__chpl3 = NULL;
  c_void_ptr cast_tmp_chpl3;
  int64_t low_chpl3;
  _ref__ic_chpl_direct_param_stride_range_iter_chpl tmp_chpl31 = NULL;
  int64_t high_chpl;
  _ref__ic_chpl_direct_param_stride_range_iter_chpl tmp_chpl32 = NULL;
  int64_t low_chpl4;
  _ref__ic_chpl_direct_param_stride_range_iter_chpl tmp_chpl33 = NULL;
  _ref__ic_chpl_direct_param_stride_range_iter_chpl tmp_chpl34 = NULL;
  int64_t tmp_chpl35;
  _ref_string_chpl tmp_chpl36 = NULL;
  c_ptr_uint8_t_chpl coerce_tmp_chpl6 = NULL;
  _ref_uint8_t_chpl call_tmp_chpl40 = NULL;
  uint8_t tmp_chpl37;
  c_void_ptr call_tmp_chpl41;
  c_void_ptr call_tmp_chpl42;
  c_void_ptr call_tmp_chpl43;
  _ref_string_chpl tmp_chpl38 = NULL;
  chpl____wide__ref_string tmp_chpl39 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl40;
  _ref__ic_chpl_direct_param_stride_range_iter_chpl tmp_chpl41 = NULL;
  int64_t tmp_chpl42;
  int64_t high_chpl2;
  _ref__ic_chpl_direct_param_stride_range_iter_chpl tmp_chpl43 = NULL;
  int64_t tmp_chpl44;
  c_void_ptr call_tmp_chpl44;
  c_void_ptr call_tmp_chpl45;
  c_void_ptr call_tmp_chpl46;
  _ref_string_chpl tmp_chpl45 = NULL;
  chpl____wide__ref_string tmp_chpl46 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_725;
  chpl____wide__ref_string chpl_macro_tmp_726;
  chpl____wide__ref_string chpl_macro_tmp_727;
  chpl____wide__ref_string chpl_macro_tmp_728;
  local__str_literal_596_chpl = _str_literal_596_chpl /* "With a negative count, the range must have a last index." */;
  chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
  more_chpl = (this_chpl7)->more;
  if (more_chpl == INT64(2)) {
    goto _jump_2_chpl;
  }
  if (more_chpl == INT64(-2)) {
    goto _jump_break_2_chpl;
  }
  chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
  tmp_chpl15 = (this_chpl7)->F0_this;
  call_tmp_chpl36 = get_chpl_nodeID();
  if ((tmp_chpl15)->locale_id == call_tmp_chpl36) {
    init_chpl73(&ret_chpl3);
    (&ret_chpl3)->cachedNumCodepoints = (tmp_chpl15)->cachedNumCodepoints;
    chpl_macro_tmp_725.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_725.addr = tmp_chpl15;
    tmp_chpl16 = chpl_macro_tmp_725;
    initWithBorrowedBuffer_chpl(&ret_chpl3, tmp_chpl16);
    ret_chpl2 = ret_chpl3;
    ret_chpl = ret_chpl2;
    goto _end_localize_chpl;
  } else {
    chpl_macro_tmp_726.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_726.addr = tmp_chpl15;
    tmp_chpl17 = chpl_macro_tmp_726;
    init_ASSIGN__chpl21(&x_chpl2, tmp_chpl17);
    ret_chpl = x_chpl2;
    goto _end_localize_chpl;
  }
  _end_localize_chpl:;
  chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
  (this_chpl7)->F1_localThis = ret_chpl;
  chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
  tmp_chpl18 = &((this_chpl7)->F1_localThis);
  coerce_tmp_chpl3 = (tmp_chpl18)->buffLen;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl__ic_chpl_direct_counted_range_iter_chpl_object), INT16(32), INT64(1411), INT32(11));
  _ic__chpl = ((_ic_chpl_direct_counted_range_iter_chpl)(cast_tmp_chpl));
  ((object_chpl)(_ic__chpl))->chpl__cid = chpl__cid__ic_chpl_direct_counted_range_iter_chpl;
  chpl_check_nil(_ic__chpl, INT64(1411), INT32(11));
  (_ic__chpl)->more = INT64(1);
  chpl_check_nil(_ic__chpl, INT64(1411), INT32(11));
  (_ic__chpl)->F0_low = INT64(0);
  chpl_check_nil(_ic__chpl, INT64(1411), INT32(11));
  (_ic__chpl)->F1_count = coerce_tmp_chpl3;
  chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
  (this_chpl7)->F2__iterator = _ic__chpl;
  chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
  tmp_chpl19 = &((this_chpl7)->F2__iterator);
  chpl_check_nil(tmp_chpl19, INT64(1411), INT32(11));
  low_chpl2 = (*(tmp_chpl19))->F0_low;
  chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
  tmp_chpl20 = &((this_chpl7)->F2__iterator);
  chpl_check_nil(tmp_chpl20, INT64(1411), INT32(11));
  count_chpl = (*(tmp_chpl20))->F1_count;
  cast_tmp_chpl2 = chpl_here_alloc(sizeof(chpl__ic_chpl_direct_counted_range_iter_helper_chpl_object), INT16(31), INT64(1411), INT32(11));
  _ic__chpl2 = ((_ic_chpl_direct_counted_range_iter_helper_chpl)(cast_tmp_chpl2));
  ((object_chpl)(_ic__chpl2))->chpl__cid = chpl__cid__ic_chpl_direct_counted_range_iter_helper_chpl;
  chpl_check_nil(_ic__chpl2, INT64(1411), INT32(11));
  (_ic__chpl2)->more = INT64(1);
  chpl_check_nil(_ic__chpl2, INT64(1411), INT32(11));
  (_ic__chpl2)->F0_low = low_chpl2;
  chpl_check_nil(_ic__chpl2, INT64(1411), INT32(11));
  (_ic__chpl2)->F1_count = count_chpl;
  chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
  (this_chpl7)->F3__iterator = _ic__chpl2;
  chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
  tmp_chpl21 = &((this_chpl7)->F3__iterator);
  chpl_check_nil(tmp_chpl21, INT64(1411), INT32(11));
  if ((*(tmp_chpl21))->F1_count < INT64(0)) {
    boundsCheckHalt_chpl(&local__str_literal_596_chpl, INT64(1411), INT32(11));
  }
  chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
  tmp_chpl23 = &((this_chpl7)->F3__iterator);
  chpl_check_nil(tmp_chpl23, INT64(1411), INT32(11));
  if ((*(tmp_chpl23))->F1_count == INT64(0)) {
    chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
    tmp_chpl24 = &((this_chpl7)->F3__iterator);
    chpl_check_nil(tmp_chpl24, INT64(1411), INT32(11));
    call_tmp_chpl37 = ((int64_t)(((uint64_t)((((uint64_t)((*(tmp_chpl24))->F0_low)) - UINT64(1))))));
    chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
    tmp_chpl25 = &((this_chpl7)->F3__iterator);
    chpl_check_nil(tmp_chpl25, INT64(1411), INT32(11));
    *(ret_tmp_chpl + INT64(0)) = (*(tmp_chpl25))->F0_low;
    *(ret_tmp_chpl + INT64(1)) = call_tmp_chpl37;
    *(tmp_chpl22 + INT64(0)) = *(ret_tmp_chpl + INT64(0));
    *(tmp_chpl22 + INT64(1)) = *(ret_tmp_chpl + INT64(1));
  } else {
    chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
    tmp_chpl26 = &((this_chpl7)->F3__iterator);
    chpl_check_nil(tmp_chpl26, INT64(1411), INT32(11));
    call_tmp_chpl38 = ((*(tmp_chpl26))->F1_count - INT64(1));
    chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
    tmp_chpl27 = &((this_chpl7)->F3__iterator);
    chpl_check_nil(tmp_chpl27, INT64(1411), INT32(11));
    call_tmp_chpl39 = ((*(tmp_chpl27))->F0_low + call_tmp_chpl38);
    chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
    tmp_chpl28 = &((this_chpl7)->F3__iterator);
    chpl_check_nil(tmp_chpl28, INT64(1411), INT32(11));
    *(ret_tmp_chpl2 + INT64(0)) = (*(tmp_chpl28))->F0_low;
    *(ret_tmp_chpl2 + INT64(1)) = call_tmp_chpl39;
    *(tmp_chpl22 + INT64(0)) = *(ret_tmp_chpl2 + INT64(0));
    *(tmp_chpl22 + INT64(1)) = *(ret_tmp_chpl2 + INT64(1));
  }
  chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
  *((this_chpl7)->F4_tmp + INT64(0)) = *(tmp_chpl22 + INT64(0));
  *((this_chpl7)->F4_tmp + INT64(1)) = *(tmp_chpl22 + INT64(1));
  chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
  tmp_chpl29 = &((this_chpl7)->F4_tmp);
  coerce_tmp_chpl4 = *(*(tmp_chpl29) + INT64(0));
  chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
  tmp_chpl30 = &((this_chpl7)->F4_tmp);
  coerce_tmp_chpl5 = *(*(tmp_chpl30) + INT64(1));
  cast_tmp_chpl3 = chpl_here_alloc(sizeof(chpl__ic_chpl_direct_param_stride_range_iter_chpl_object), INT16(28), INT64(1411), INT32(11));
  _ic__chpl3 = ((_ic_chpl_direct_param_stride_range_iter_chpl)(cast_tmp_chpl3));
  ((object_chpl)(_ic__chpl3))->chpl__cid = chpl__cid__ic_chpl_direct_param_stride_range_iter_chpl;
  chpl_check_nil(_ic__chpl3, INT64(1411), INT32(11));
  (_ic__chpl3)->more = INT64(1);
  chpl_check_nil(_ic__chpl3, INT64(1411), INT32(11));
  (_ic__chpl3)->F0_low = coerce_tmp_chpl4;
  chpl_check_nil(_ic__chpl3, INT64(1411), INT32(11));
  (_ic__chpl3)->F1_high = coerce_tmp_chpl5;
  chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
  (this_chpl7)->F5__iterator = _ic__chpl3;
  chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
  (this_chpl7)->F6_i = INT64(0);
  chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
  tmp_chpl31 = &((this_chpl7)->F5__iterator);
  chpl_check_nil(tmp_chpl31, INT64(1411), INT32(11));
  low_chpl3 = (*(tmp_chpl31))->F0_low;
  chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
  tmp_chpl32 = &((this_chpl7)->F5__iterator);
  chpl_check_nil(tmp_chpl32, INT64(1411), INT32(11));
  high_chpl = (*(tmp_chpl32))->F1_high;
  chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
  tmp_chpl33 = &((this_chpl7)->F5__iterator);
  chpl_check_nil(tmp_chpl33, INT64(1411), INT32(11));
  low_chpl4 = (*(tmp_chpl33))->F0_low;
  chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
  tmp_chpl34 = &((this_chpl7)->F5__iterator);
  chpl_check_nil(tmp_chpl34, INT64(1411), INT32(11));
  chpl_checkIfRangeIterWillOverflow(low_chpl4, (*(tmp_chpl34))->F1_high, INT64(1), low_chpl3, high_chpl, UINT8(true));
  for (chpl_check_nil(this_chpl7, INT64(1408), INT32(11)),tmp_chpl41 = &((this_chpl7)->F5__iterator),chpl_check_nil(tmp_chpl41, INT64(1411), INT32(11)),tmp_chpl40 = (*(tmp_chpl41))->F0_low,chpl_check_nil(this_chpl7, INT64(1408), INT32(11)),(this_chpl7)->F7_low = tmp_chpl40,chpl_check_nil(this_chpl7, INT64(1408), INT32(11)),tmp_chpl42 = (this_chpl7)->F7_low,chpl_check_nil(this_chpl7, INT64(1408), INT32(11)),(this_chpl7)->F6_i = tmp_chpl42; (chpl_check_nil(this_chpl7, INT64(1408), INT32(11)),tmp_chpl43 = &((this_chpl7)->F5__iterator),chpl_check_nil(tmp_chpl43, INT64(1411), INT32(11)),high_chpl2 = (*(tmp_chpl43))->F1_high,chpl_check_nil(this_chpl7, INT64(1408), INT32(11)),((this_chpl7)->F6_i <= high_chpl2)); chpl_check_nil(this_chpl7, INT64(1408), INT32(11)),tmp_chpl44 = (this_chpl7)->F6_i,tmp_chpl44 += INT64(1),chpl_check_nil(this_chpl7, INT64(1408), INT32(11)),(this_chpl7)->F6_i = tmp_chpl44) {
    chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
    tmp_chpl35 = (this_chpl7)->F6_i;
    chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
    tmp_chpl36 = &((this_chpl7)->F1_localThis);
    coerce_tmp_chpl6 = (tmp_chpl36)->buff;
    call_tmp_chpl40 = (coerce_tmp_chpl6 + tmp_chpl35);
    tmp_chpl37 = *(call_tmp_chpl40);
    chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
    (this_chpl7)->value = tmp_chpl37;
    chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
    (this_chpl7)->more = INT64(2);
    goto _end_chpl;
    _jump_break_2_chpl:;
    chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
    call_tmp_chpl41 = ((void*)((this_chpl7)->F5__iterator));
    chpl_here_free(call_tmp_chpl41, INT64(1411), INT32(11));
    chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
    call_tmp_chpl42 = ((void*)((this_chpl7)->F3__iterator));
    chpl_here_free(call_tmp_chpl42, INT64(1411), INT32(11));
    chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
    call_tmp_chpl43 = ((void*)((this_chpl7)->F2__iterator));
    chpl_here_free(call_tmp_chpl43, INT64(1411), INT32(11));
    chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
    tmp_chpl38 = &((this_chpl7)->F1_localThis);
    chpl_macro_tmp_727.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_727.addr = tmp_chpl38;
    tmp_chpl39 = chpl_macro_tmp_727;
    deinit_chpl42(tmp_chpl39);
    goto _endchpl_bytes_chpl;
    _jump_2_chpl:;
  }
  chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
  call_tmp_chpl44 = ((void*)((this_chpl7)->F5__iterator));
  chpl_here_free(call_tmp_chpl44, INT64(1411), INT32(11));
  chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
  call_tmp_chpl45 = ((void*)((this_chpl7)->F3__iterator));
  chpl_here_free(call_tmp_chpl45, INT64(1411), INT32(11));
  chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
  call_tmp_chpl46 = ((void*)((this_chpl7)->F2__iterator));
  chpl_here_free(call_tmp_chpl46, INT64(1411), INT32(11));
  chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
  tmp_chpl45 = &((this_chpl7)->F1_localThis);
  chpl_macro_tmp_728.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_728.addr = tmp_chpl45;
  tmp_chpl46 = chpl_macro_tmp_728;
  deinit_chpl42(tmp_chpl46);
  _endchpl_bytes_chpl:;
  chpl_check_nil(this_chpl7, INT64(1408), INT32(11));
  (this_chpl7)->more = INT64(0);
  _end_chpl:;
  return;
}

/* String.chpl:1439 */
static uint8_t byte_chpl(chpl____wide__ref_string this_chpl7,
                         int64_t i_chpl) {
  string_chpl local__str_literal_333_chpl;
  string_chpl local__str_literal_332_chpl;
  string_chpl local__str_literal_286_chpl;
  chpl_bool tmp_chpl15;
  int64_t tmp_chpl16;
  int64_t tmp_chpl17;
  c_ptr_uint8_t_chpl coerce_tmp_chpl3 = NULL;
  c_ptr_uint8_t_chpl tmp_chpl18 = NULL;
  int32_t coerce_tmp_chpl4;
  int32_t tmp_chpl19;
  uint8_t ret_chpl;
  int32_t call_tmp_chpl36;
  c_ptr_uint8_t_chpl call_tmp_chpl37 = NULL;
  c_ptr_uint8_t_chpl newBuf_chpl = NULL;
  _ref_uint8_t_chpl call_tmp_chpl38 = NULL;
  uint8_t coerce_tmp_chpl5;
  _ref_uint8_t_chpl call_tmp_chpl39 = NULL;
  chpl____wide__ref_int64_t chpl_macro_tmp_729;
  chpl____wide__ref_int64_t chpl_macro_tmp_730;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_731;
  chpl____wide__ref_int32_t chpl_macro_tmp_732;
  local__str_literal_333_chpl = _str_literal_333_chpl /* " bytes" */;
  local__str_literal_332_chpl = _str_literal_332_chpl /* " out of bounds for string with " */;
  local__str_literal_286_chpl = _str_literal_286_chpl /* "index " */;
  if (i_chpl < INT64(0)) {
    tmp_chpl15 = UINT8(true);
  } else {
    chpl_macro_tmp_729.locale = (this_chpl7).locale;
    chpl_macro_tmp_729.addr = &(((this_chpl7).addr)->buffLen);
    chpl_gen_comm_get(((void*)(&tmp_chpl16)), chpl_nodeFromLocaleID((chpl_macro_tmp_729).locale, INT64(0), INT32(0)), (chpl_macro_tmp_729).addr, sizeof(int64_t), COMMID(14), INT64(1440), INT64(11));
    tmp_chpl15 = (i_chpl >= tmp_chpl16);
  }
  if (tmp_chpl15) {
    chpl_macro_tmp_730.locale = (this_chpl7).locale;
    chpl_macro_tmp_730.addr = &(((this_chpl7).addr)->buffLen);
    chpl_gen_comm_get(((void*)(&tmp_chpl17)), chpl_nodeFromLocaleID((chpl_macro_tmp_730).locale, INT64(0), INT32(0)), (chpl_macro_tmp_730).addr, sizeof(int64_t), COMMID(15), INT64(1441), INT64(11));
    halt_chpl12(&local__str_literal_286_chpl, i_chpl, &local__str_literal_332_chpl, tmp_chpl17, &local__str_literal_333_chpl, INT64(1441), INT32(11));
  }
  chpl_macro_tmp_731.locale = (this_chpl7).locale;
  chpl_macro_tmp_731.addr = &(((this_chpl7).addr)->buff);
  chpl_gen_comm_get(((void*)(&tmp_chpl18)), chpl_nodeFromLocaleID((chpl_macro_tmp_731).locale, INT64(0), INT32(0)), (chpl_macro_tmp_731).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(16), INT64(1442), INT64(11));
  coerce_tmp_chpl3 = tmp_chpl18;
  chpl_macro_tmp_732.locale = (this_chpl7).locale;
  chpl_macro_tmp_732.addr = &(((this_chpl7).addr)->locale_id);
  chpl_gen_comm_get(((void*)(&tmp_chpl19)), chpl_nodeFromLocaleID((chpl_macro_tmp_732).locale, INT64(0), INT32(0)), (chpl_macro_tmp_732).addr, sizeof(int32_t), COMMID(17), INT64(1442), INT64(11));
  coerce_tmp_chpl4 = tmp_chpl19;
  call_tmp_chpl36 = get_chpl_nodeID();
  if (coerce_tmp_chpl4 != call_tmp_chpl36) {
    call_tmp_chpl37 = bufferCopyRemote_chpl(((int64_t)(coerce_tmp_chpl4)), (coerce_tmp_chpl3 + i_chpl), INT64(1));
    newBuf_chpl = call_tmp_chpl37;
    call_tmp_chpl38 = (newBuf_chpl + INT64(0));
    coerce_tmp_chpl5 = *(call_tmp_chpl38);
    chpl_here_free(((c_void_ptr)(call_tmp_chpl37)), INT64(1442), INT32(11));
    ret_chpl = coerce_tmp_chpl5;
    goto _end_bufferGetByte_chpl;
  } else {
    call_tmp_chpl39 = (coerce_tmp_chpl3 + i_chpl);
    ret_chpl = *(call_tmp_chpl39);
    goto _end_bufferGetByte_chpl;
  }
  _end_bufferGetByte_chpl:;
  return ret_chpl;
}

/* String.chpl:1540 */
static void this_chpl6(string_chpl * this_chpl7,
                       codepointIndex_chpl * i_chpl,
                       string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  item_chpl(this_chpl7, i_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* String.chpl:1560 */
static void item_chpl(string_chpl * this_chpl7,
                      codepointIndex_chpl * i_chpl,
                      string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_337_chpl;
  string_chpl local__str_literal_215_chpl;
  string_chpl local__str_literal_336_chpl;
  string_chpl local__str_literal_286_chpl;
  string_chpl ret_chpl;
  string_chpl inlineImm_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  string_chpl ret_chpl2;
  string_chpl tmp_chpl15;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret_chpl3;
  int64_t tmp_chpl17;
  int64_t tmp_chpl18;
  int64_t tmp_chpl19;
  int64_t ret_chpl4;
  int64_t tmp_chpl20;
  int64_t ret_chpl5;
  c_ptr_uint8_t_chpl coerce_tmp_chpl3 = NULL;
  int32_t coerce_tmp_chpl4;
  c_ptr_uint8_t_chpl ret_x0_chpl = NULL;
  int64_t ret_x1_chpl;
  int32_t call_tmp_chpl36;
  c_ptr_uint8_t_chpl call_tmp_chpl37 = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl38 = NULL;
  int64_t call_tmp_chpl39;
  int64_t tmp_chpl21;
  int16_t call_tmp_chpl40;
  c_void_ptr cast_tmp_chpl;
  c_ptr_uint8_t_chpl call_tmp_chpl41 = NULL;
  c_ptr_uint8_t_chpl dst_chpl = NULL;
  uint64_t call_tmp_chpl42;
  c_void_ptr coerce_tmp_chpl5;
  c_void_ptr coerce_tmp_chpl6;
  _ref_uint8_t_chpl call_tmp_chpl43 = NULL;
  string_chpl ret_chpl6;
  string_chpl ret_chpl7;
  _ref_string_chpl i_x_chpl2 = NULL;
  int64_t charCount_chpl;
  byteIndex_chpl default_arg_start_chpl4;
  byteIndex_chpl ret_chpl8;
  byteIndex_chpl cpi_chpl;
  _ref_byteIndex_chpl i_start_chpl = NULL;
  string_chpl ret_chpl9;
  int32_t call_tmp_chpl44;
  string_chpl ret_chpl10;
  string_chpl ret_chpl11;
  chpl____wide__ref_string tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl x_chpl2;
  chpl____wide__ref_string tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl localThis_chpl;
  int64_t call_tmp_chpl45;
  int64_t i_chpl2;
  chpl_bool tmp_chpl24;
  _tuple_3_int32_t_byteIndex_int64_t_chpl call_tmp_chpl46;
  _tuple_3_int32_t_byteIndex_int64_t_chpl ret_tmp_chpl;
  byteIndex_chpl _yieldedIndex_x1_chpl;
  int64_t _yieldedIndex_x2_chpl;
  byteIndex_chpl tmp_chpl25;
  byteIndex_chpl byteIdx_chpl;
  int64_t ret_chpl12;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl call_tmp_chpl47;
  c_ptr_uint8_t_chpl coerce_tmp_chpl7 = NULL;
  int32_t coerce_tmp_chpl8;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl ret_chpl13;
  int32_t call_tmp_chpl48;
  c_ptr_uint8_t_chpl call_tmp_chpl49 = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl50 = NULL;
  int64_t call_tmp_chpl51;
  int64_t tmp_chpl26;
  int16_t call_tmp_chpl52;
  c_void_ptr cast_tmp_chpl2;
  c_ptr_uint8_t_chpl call_tmp_chpl53 = NULL;
  c_ptr_uint8_t_chpl dst_chpl2 = NULL;
  uint64_t call_tmp_chpl54;
  c_void_ptr coerce_tmp_chpl9;
  c_void_ptr coerce_tmp_chpl10;
  _ref_uint8_t_chpl call_tmp_chpl55 = NULL;
  c_ptr_uint8_t_chpl tmp_x0_chpl = NULL;
  int64_t tmp_x1_chpl;
  string_chpl ret_chpl14;
  string_chpl ret_chpl15;
  _ref_string_chpl i_x_chpl3 = NULL;
  _ref_string_chpl i_x_chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t_chpl i_lhs_chpl = NULL;
  _ref_string_chpl i_x_chpl5 = NULL;
  chpl____wide__ref_string tmp_chpl28 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret_chpl16;
  int64_t tmp_chpl29;
  string_chpl inlineImm_chpl2;
  _ref_string_chpl i_x_chpl6 = NULL;
  string_chpl ret_chpl17;
  string_chpl tmp_chpl30;
  chpl____wide__ref_string tmp_chpl31 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_733;
  chpl____wide__ref_string chpl_macro_tmp_734;
  chpl____wide__ref_string chpl_macro_tmp_735;
  chpl____wide__ref_string chpl_macro_tmp_736;
  chpl____wide__ref_string chpl_macro_tmp_737;
  chpl____wide__ref_string chpl_macro_tmp_738;
  local__str_literal_337_chpl = _str_literal_337_chpl /* " out of bounds for string with length " */;
  local__str_literal_215_chpl = _str_literal_215_chpl /* "" */;
  local__str_literal_336_chpl = _str_literal_336_chpl /* " out of bounds for string" */;
  local__str_literal_286_chpl = _str_literal_286_chpl /* "index " */;
  if ((i_chpl)->_cpindex < INT64(0)) {
    halt_chpl6(&local__str_literal_286_chpl, (i_chpl)->_cpindex, &local__str_literal_336_chpl, INT64(1562), INT32(11));
  }
  if ((this_chpl7)->buffLen == INT64(0)) {
    inlineImm_chpl = local__str_literal_215_chpl;
    i_x_chpl = &inlineImm_chpl;
    chpl_macro_tmp_733.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_733.addr = i_x_chpl;
    tmp_chpl16 = chpl_macro_tmp_733;
    init_ASSIGN__chpl21(&tmp_chpl15, tmp_chpl16);
    ret_chpl2 = tmp_chpl15;
    ret_chpl = ret_chpl2;
    goto _end_item_chpl;
  }
  tmp_chpl17 = (this_chpl7)->cachedNumCodepoints;
  ret_chpl3 = tmp_chpl17;
  tmp_chpl18 = (this_chpl7)->buffLen;
  if (ret_chpl3 == tmp_chpl18) {
    tmp_chpl19 = (this_chpl7)->buffLen;
    if ((i_chpl)->_cpindex >= tmp_chpl19) {
      ret_chpl4 = (i_chpl)->_cpindex;
      tmp_chpl20 = (this_chpl7)->cachedNumCodepoints;
      halt_chpl5(&local__str_literal_286_chpl, ret_chpl4, &local__str_literal_337_chpl, tmp_chpl20, INT64(1567), INT32(11));
    }
    ret_chpl5 = (i_chpl)->_cpindex;
    coerce_tmp_chpl3 = (this_chpl7)->buff;
    coerce_tmp_chpl4 = (this_chpl7)->locale_id;
    call_tmp_chpl36 = get_chpl_nodeID();
    if (coerce_tmp_chpl4 != call_tmp_chpl36) {
      call_tmp_chpl37 = bufferCopyRemote_chpl(((int64_t)(coerce_tmp_chpl4)), (coerce_tmp_chpl3 + ret_chpl5), INT64(1));
      ret_x0_chpl = call_tmp_chpl37;
      ret_x1_chpl = INT64(1);
      goto _end_bufferCopy_chpl;
    } else {
      call_tmp_chpl38 = (coerce_tmp_chpl3 + ret_chpl5);
      call_tmp_chpl39 = chpl_here_good_alloc_size(((int64_t)((INT64(1) + INT64(1)))), INT64(1568), INT32(11));
      if (call_tmp_chpl39 > INT64(0)) {
        tmp_chpl21 = call_tmp_chpl39;
      } else {
        tmp_chpl21 = INT64(0);
      }
      call_tmp_chpl40 = offset_STR_COPY_DATA_chpl();
      cast_tmp_chpl = chpl_here_alloc(tmp_chpl21, call_tmp_chpl40, INT64(1568), INT32(11));
      call_tmp_chpl41 = ((c_ptr_uint8_t_chpl)(cast_tmp_chpl));
      dst_chpl = call_tmp_chpl41;
      call_tmp_chpl42 = ((uint64_t)(INT64(1)));
      coerce_tmp_chpl5 = ((c_void_ptr)((call_tmp_chpl41 + INT64(0))));
      coerce_tmp_chpl6 = ((c_void_ptr)((call_tmp_chpl38 + INT64(0))));
      checkValue_chpl4();
      memcpy(coerce_tmp_chpl5, coerce_tmp_chpl6, call_tmp_chpl42);
      call_tmp_chpl43 = (dst_chpl + INT64(1));
      *(call_tmp_chpl43) = ((uint8_t)(INT64(0)));
      ret_x0_chpl = call_tmp_chpl41;
      ret_x1_chpl = tmp_chpl21;
      goto _end_bufferCopy_chpl;
    }
    _end_bufferCopy_chpl:;
    init_chpl73(&ret_chpl7);
    i_x_chpl2 = &ret_chpl7;
    (i_x_chpl2)->isOwned = UINT8(true);
    (i_x_chpl2)->buff = ret_x0_chpl;
    (i_x_chpl2)->buffSize = ret_x1_chpl;
    (i_x_chpl2)->buffLen = INT64(1);
    (&ret_chpl7)->cachedNumCodepoints = INT64(1);
    ret_chpl6 = ret_chpl7;
    ret_chpl = ret_chpl6;
    goto _end_item_chpl;
  } else {
    charCount_chpl = INT64(0);
    init_chpl71(&cpi_chpl);
    (&cpi_chpl)->_bindex = INT64(0);
    ret_chpl8 = cpi_chpl;
    default_arg_start_chpl4 = ret_chpl8;
    i_start_chpl = &default_arg_start_chpl4;
    call_tmp_chpl44 = get_chpl_nodeID();
    if ((this_chpl7)->locale_id == call_tmp_chpl44) {
      init_chpl73(&ret_chpl11);
      (&ret_chpl11)->cachedNumCodepoints = (this_chpl7)->cachedNumCodepoints;
      chpl_macro_tmp_734.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_734.addr = this_chpl7;
      tmp_chpl22 = chpl_macro_tmp_734;
      initWithBorrowedBuffer_chpl(&ret_chpl11, tmp_chpl22);
      ret_chpl10 = ret_chpl11;
      ret_chpl9 = ret_chpl10;
      goto _end_localize_chpl;
    } else {
      chpl_macro_tmp_735.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_735.addr = this_chpl7;
      tmp_chpl23 = chpl_macro_tmp_735;
      init_ASSIGN__chpl21(&x_chpl2, tmp_chpl23);
      ret_chpl9 = x_chpl2;
      goto _end_localize_chpl;
    }
    _end_localize_chpl:;
    localThis_chpl = ret_chpl9;
    call_tmp_chpl45 = _findStartOfNextCodepointFromByte_chpl(&localThis_chpl, i_start_chpl);
    i_chpl2 = call_tmp_chpl45;
    tmp_chpl24 = (call_tmp_chpl45 < (&localThis_chpl)->buffLen);
    while (tmp_chpl24) {
      _cpIndexLenHelpNoAdjustment_chpl(&localThis_chpl, &i_chpl2, &ret_tmp_chpl);
      call_tmp_chpl46 = ret_tmp_chpl;
      tmp_chpl25 = (&call_tmp_chpl46)->x1;
      _yieldedIndex_x1_chpl = tmp_chpl25;
      _yieldedIndex_x2_chpl = (&call_tmp_chpl46)->x2;
      byteIdx_chpl = _yieldedIndex_x1_chpl;
      if (charCount_chpl == (i_chpl)->_cpindex) {
        ret_chpl12 = (&byteIdx_chpl)->_bindex;
        coerce_tmp_chpl7 = (this_chpl7)->buff;
        coerce_tmp_chpl8 = (this_chpl7)->locale_id;
        call_tmp_chpl48 = get_chpl_nodeID();
        if (coerce_tmp_chpl8 != call_tmp_chpl48) {
          call_tmp_chpl49 = bufferCopyRemote_chpl(((int64_t)(coerce_tmp_chpl8)), (coerce_tmp_chpl7 + ret_chpl12), _yieldedIndex_x2_chpl);
          (&ret_chpl13)->x0 = call_tmp_chpl49;
          (&ret_chpl13)->x1 = _yieldedIndex_x2_chpl;
          goto _end_bufferCopy_chpl2;
        } else {
          call_tmp_chpl50 = (coerce_tmp_chpl7 + ret_chpl12);
          call_tmp_chpl51 = chpl_here_good_alloc_size(((int64_t)((_yieldedIndex_x2_chpl + INT64(1)))), INT64(1576), INT32(11));
          if (call_tmp_chpl51 > INT64(0)) {
            tmp_chpl26 = call_tmp_chpl51;
          } else {
            tmp_chpl26 = INT64(0);
          }
          call_tmp_chpl52 = offset_STR_COPY_DATA_chpl();
          cast_tmp_chpl2 = chpl_here_alloc(tmp_chpl26, call_tmp_chpl52, INT64(1576), INT32(11));
          call_tmp_chpl53 = ((c_ptr_uint8_t_chpl)(cast_tmp_chpl2));
          dst_chpl2 = call_tmp_chpl53;
          call_tmp_chpl54 = ((uint64_t)(_yieldedIndex_x2_chpl));
          coerce_tmp_chpl9 = ((c_void_ptr)((call_tmp_chpl53 + INT64(0))));
          coerce_tmp_chpl10 = ((c_void_ptr)((call_tmp_chpl50 + INT64(0))));
          checkValue_chpl4();
          memcpy(coerce_tmp_chpl9, coerce_tmp_chpl10, call_tmp_chpl54);
          call_tmp_chpl55 = (dst_chpl2 + _yieldedIndex_x2_chpl);
          *(call_tmp_chpl55) = ((uint8_t)(INT64(0)));
          (&ret_chpl13)->x0 = call_tmp_chpl53;
          (&ret_chpl13)->x1 = tmp_chpl26;
          goto _end_bufferCopy_chpl2;
        }
        _end_bufferCopy_chpl2:;
        call_tmp_chpl47 = ret_chpl13;
        tmp_x0_chpl = (&call_tmp_chpl47)->x0;
        tmp_x1_chpl = (&call_tmp_chpl47)->x1;
        init_chpl73(&ret_chpl15);
        i_x_chpl3 = &ret_chpl15;
        (i_x_chpl3)->isOwned = UINT8(true);
        (i_x_chpl3)->buff = tmp_x0_chpl;
        (i_x_chpl3)->buffSize = tmp_x1_chpl;
        (i_x_chpl3)->buffLen = _yieldedIndex_x2_chpl;
        (&ret_chpl15)->cachedNumCodepoints = INT64(1);
        ret_chpl14 = ret_chpl15;
        ret_chpl = ret_chpl14;
        i_x_chpl4 = &localThis_chpl;
        chpl_macro_tmp_736.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_736.addr = i_x_chpl4;
        tmp_chpl27 = chpl_macro_tmp_736;
        deinit_chpl42(tmp_chpl27);
        goto _end_item_chpl;
      }
      i_lhs_chpl = &charCount_chpl;
      *(i_lhs_chpl) += INT64(1);
      tmp_chpl24 = (i_chpl2 < (&localThis_chpl)->buffLen);
    }
    i_x_chpl5 = &localThis_chpl;
    chpl_macro_tmp_737.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_737.addr = i_x_chpl5;
    tmp_chpl28 = chpl_macro_tmp_737;
    deinit_chpl42(tmp_chpl28);
    ret_chpl16 = (i_chpl)->_cpindex;
    tmp_chpl29 = (this_chpl7)->cachedNumCodepoints;
    halt_chpl5(&local__str_literal_286_chpl, ret_chpl16, &local__str_literal_337_chpl, tmp_chpl29, INT64(1583), INT32(11));
    inlineImm_chpl2 = local__str_literal_215_chpl;
    i_x_chpl6 = &inlineImm_chpl2;
    chpl_macro_tmp_738.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_738.addr = i_x_chpl6;
    tmp_chpl31 = chpl_macro_tmp_738;
    init_ASSIGN__chpl21(&tmp_chpl30, tmp_chpl31);
    ret_chpl17 = tmp_chpl30;
    ret_chpl = ret_chpl17;
    goto _end_item_chpl;
  }
  _end_item_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* String.chpl:1832 */
static void strip_chpl(string_chpl * this_chpl7,
                       string_chpl * chars_chpl,
                       chpl_bool leading_chpl,
                       chpl_bool trailing_chpl,
                       string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_215_chpl;
  string_chpl ret_chpl;
  int64_t ret_chpl2;
  int64_t tmp_chpl15;
  int64_t tmp_chpl16;
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  string_chpl inlineImm_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  string_chpl ret_chpl3;
  string_chpl tmp_chpl17;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl4;
  string_chpl tmp_chpl19;
  chpl____wide__ref_string tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl5;
  int32_t call_tmp_chpl37;
  string_chpl ret_chpl6;
  string_chpl ret_chpl7;
  chpl____wide__ref_string tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl x_chpl2;
  chpl____wide__ref_string tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl localThis_chpl;
  string_chpl ret_chpl8;
  int32_t call_tmp_chpl38;
  string_chpl ret_chpl9;
  string_chpl ret_chpl10;
  chpl____wide__ref_string tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl x_chpl3;
  chpl____wide__ref_string tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl localChars_chpl;
  byteIndex_chpl start_chpl;
  byteIndex_chpl end_chpl;
  byteIndex_chpl default_arg_start_chpl4;
  byteIndex_chpl ret_chpl11;
  byteIndex_chpl cpi_chpl;
  _ref_string_chpl i_this_chpl = NULL;
  _ref_byteIndex_chpl i_start_chpl = NULL;
  string_chpl ret_chpl12;
  int32_t call_tmp_chpl39;
  string_chpl ret_chpl13;
  string_chpl ret_chpl14;
  chpl____wide__ref_string tmp_chpl25 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl x_chpl4;
  chpl____wide__ref_string tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl localThis_chpl2;
  int64_t call_tmp_chpl40;
  int64_t i_chpl;
  chpl_bool tmp_chpl27;
  _tuple_3_int32_t_byteIndex_int64_t_chpl call_tmp_chpl41;
  _tuple_3_int32_t_byteIndex_int64_t_chpl ret_tmp_chpl2;
  byteIndex_chpl _yieldedIndex_x1_chpl;
  byteIndex_chpl tmp_chpl28;
  int32_t thisChar_chpl;
  byteIndex_chpl i_chpl2;
  int64_t nBytes_chpl;
  _ref_string_chpl i_this_chpl2 = NULL;
  string_chpl ret_chpl15;
  int32_t call_tmp_chpl42;
  string_chpl ret_chpl16;
  string_chpl ret_chpl17;
  chpl____wide__ref_string tmp_chpl29 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl x_chpl5;
  chpl____wide__ref_string tmp_chpl30 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl localThis_chpl3;
  int64_t i_chpl3;
  chpl_bool tmp_chpl31;
  _tuple_3_int32_t_byteIndex_int64_t_chpl ret_tmp_chpl3;
  byteIndex_chpl call_tmp_chpl43;
  int64_t call_tmp_chpl44;
  byteIndex_chpl ret_chpl18;
  byteIndex_chpl cpi_chpl2;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl32 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl33 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl34 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl5 = NULL;
  chpl____wide__ref_string tmp_chpl35 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_this_chpl3 = NULL;
  _ref_byteIndex_chpl i_start_chpl2 = NULL;
  string_chpl ret_chpl19;
  int32_t call_tmp_chpl45;
  string_chpl ret_chpl20;
  string_chpl ret_chpl21;
  chpl____wide__ref_string tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl x_chpl6;
  chpl____wide__ref_string tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl localThis_chpl4;
  int64_t call_tmp_chpl46;
  int64_t i_chpl4;
  chpl_bool tmp_chpl38;
  _tuple_3_int32_t_byteIndex_int64_t_chpl call_tmp_chpl47;
  _tuple_3_int32_t_byteIndex_int64_t_chpl ret_tmp_chpl4;
  byteIndex_chpl _yieldedIndex_x1_chpl2;
  byteIndex_chpl tmp_chpl39;
  int32_t thisChar_chpl2;
  byteIndex_chpl i_chpl5;
  int64_t nBytes_chpl2;
  _ref_string_chpl i_this_chpl4 = NULL;
  string_chpl ret_chpl22;
  int32_t call_tmp_chpl48;
  string_chpl ret_chpl23;
  string_chpl ret_chpl24;
  chpl____wide__ref_string tmp_chpl40 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl x_chpl7;
  chpl____wide__ref_string tmp_chpl41 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl localThis_chpl5;
  int64_t i_chpl6;
  chpl_bool tmp_chpl42;
  _tuple_3_int32_t_byteIndex_int64_t_chpl ret_tmp_chpl5;
  _ref_string_chpl i_x_chpl6 = NULL;
  chpl____wide__ref_string tmp_chpl43 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl7 = NULL;
  chpl____wide__ref_string tmp_chpl44 = {CHPL_LOCALEID_T_INIT, NULL};
  byteIndex_chpl call_tmp_chpl49;
  int64_t call_tmp_chpl50;
  byteIndex_chpl ret_chpl25;
  byteIndex_chpl cpi_chpl3;
  byteIndex_chpl call_tmp_chpl51;
  int64_t call_tmp_chpl52;
  byteIndex_chpl ret_chpl26;
  byteIndex_chpl cpi_chpl4;
  _ref_string_chpl i_x_chpl8 = NULL;
  chpl____wide__ref_string tmp_chpl45 = {CHPL_LOCALEID_T_INIT, NULL};
  range_byteIndex_bounded_F_chpl call_tmp_chpl53;
  range_byteIndex_bounded_F_chpl ret_tmp_chpl6;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_this_chpl5 = NULL;
  string_chpl ret_chpl27;
  string_chpl call_tmp_chpl54;
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_tmp_chpl7;
  _ref__wide_Error_chpl tmp_chpl46 = NULL;
  _ref_string_chpl i_x_chpl9 = NULL;
  chpl____wide__ref_string tmp_chpl47 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl10 = NULL;
  chpl____wide__ref_string tmp_chpl48 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_739;
  chpl____wide__ref_string chpl_macro_tmp_740;
  chpl____wide__ref_string chpl_macro_tmp_741;
  chpl____wide__ref_string chpl_macro_tmp_742;
  chpl____wide__ref_string chpl_macro_tmp_743;
  chpl____wide__ref_string chpl_macro_tmp_744;
  chpl____wide__ref_string chpl_macro_tmp_745;
  chpl____wide__ref_string chpl_macro_tmp_746;
  chpl____wide__ref_string chpl_macro_tmp_747;
  chpl____wide__ref_string chpl_macro_tmp_748;
  chpl____wide__ref_string chpl_macro_tmp_749;
  chpl____wide__ref_string chpl_macro_tmp_750;
  chpl____wide__ref_string chpl_macro_tmp_751;
  chpl____wide__ref_string chpl_macro_tmp_752;
  chpl____wide__ref_string chpl_macro_tmp_753;
  chpl____wide__ref_string chpl_macro_tmp_754;
  chpl____wide__ref_string chpl_macro_tmp_755;
  chpl____wide__ref_string chpl_macro_tmp_756;
  chpl____wide__ref_string chpl_macro_tmp_757;
  chpl____wide__ref_string chpl_macro_tmp_758;
  chpl____wide__ref_string chpl_macro_tmp_759;
  chpl____wide__nilType chpl_macro_tmp_760;
  chpl____wide_Error chpl_macro_tmp_761;
  chpl____wide__nilType chpl_macro_tmp_762;
  chpl____wide_Error chpl_macro_tmp_763;
  chpl____wide__ref_string chpl_macro_tmp_764;
  chpl____wide__ref_string chpl_macro_tmp_765;
  local__str_literal_215_chpl = _str_literal_215_chpl /* "" */;
  tmp_chpl15 = (this_chpl7)->cachedNumCodepoints;
  ret_chpl2 = tmp_chpl15;
  tmp_chpl16 = (this_chpl7)->buffLen;
  if (ret_chpl2 == tmp_chpl16) {
    doStripNoEnc_chpl(this_chpl7, chars_chpl, leading_chpl, trailing_chpl, &ret_tmp_chpl);
    call_tmp_chpl36 = ret_tmp_chpl;
    ret_chpl = call_tmp_chpl36;
    goto _end_strip_chpl;
  } else {
    if ((this_chpl7)->buffLen == INT64(0)) {
      inlineImm_chpl = local__str_literal_215_chpl;
      i_x_chpl = &inlineImm_chpl;
      chpl_macro_tmp_739.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_739.addr = i_x_chpl;
      tmp_chpl18 = chpl_macro_tmp_739;
      init_ASSIGN__chpl21(&tmp_chpl17, tmp_chpl18);
      ret_chpl3 = tmp_chpl17;
      ret_chpl = ret_chpl3;
      goto _end_strip_chpl;
    }
    if ((chars_chpl)->buffLen == INT64(0)) {
      chpl_macro_tmp_740.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_740.addr = this_chpl7;
      tmp_chpl20 = chpl_macro_tmp_740;
      init_ASSIGN__chpl21(&tmp_chpl19, tmp_chpl20);
      ret_chpl4 = tmp_chpl19;
      ret_chpl = ret_chpl4;
      goto _end_strip_chpl;
    }
    call_tmp_chpl37 = get_chpl_nodeID();
    if ((this_chpl7)->locale_id == call_tmp_chpl37) {
      init_chpl73(&ret_chpl7);
      (&ret_chpl7)->cachedNumCodepoints = (this_chpl7)->cachedNumCodepoints;
      chpl_macro_tmp_741.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_741.addr = this_chpl7;
      tmp_chpl21 = chpl_macro_tmp_741;
      initWithBorrowedBuffer_chpl(&ret_chpl7, tmp_chpl21);
      ret_chpl6 = ret_chpl7;
      ret_chpl5 = ret_chpl6;
      goto _end_localize_chpl;
    } else {
      chpl_macro_tmp_742.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_742.addr = this_chpl7;
      tmp_chpl22 = chpl_macro_tmp_742;
      init_ASSIGN__chpl21(&x_chpl2, tmp_chpl22);
      ret_chpl5 = x_chpl2;
      goto _end_localize_chpl;
    }
    _end_localize_chpl:;
    localThis_chpl = ret_chpl5;
    call_tmp_chpl38 = get_chpl_nodeID();
    if ((chars_chpl)->locale_id == call_tmp_chpl38) {
      init_chpl73(&ret_chpl10);
      (&ret_chpl10)->cachedNumCodepoints = (chars_chpl)->cachedNumCodepoints;
      chpl_macro_tmp_743.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_743.addr = chars_chpl;
      tmp_chpl23 = chpl_macro_tmp_743;
      initWithBorrowedBuffer_chpl(&ret_chpl10, tmp_chpl23);
      ret_chpl9 = ret_chpl10;
      ret_chpl8 = ret_chpl9;
      goto _end_localize_chpl2;
    } else {
      chpl_macro_tmp_744.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_744.addr = chars_chpl;
      tmp_chpl24 = chpl_macro_tmp_744;
      init_ASSIGN__chpl21(&x_chpl3, tmp_chpl24);
      ret_chpl8 = x_chpl3;
      goto _end_localize_chpl2;
    }
    _end_localize_chpl2:;
    localChars_chpl = ret_chpl8;
    init_ASSIGN__chpl20(&start_chpl, INT64(0));
    init_ASSIGN__chpl20(&end_chpl, ((int64_t)(((&localThis_chpl)->buffLen - INT64(1)))));
    if (leading_chpl) {
      init_chpl71(&cpi_chpl);
      (&cpi_chpl)->_bindex = INT64(0);
      ret_chpl11 = cpi_chpl;
      default_arg_start_chpl4 = ret_chpl11;
      i_this_chpl = &localThis_chpl;
      i_start_chpl = &default_arg_start_chpl4;
      call_tmp_chpl39 = get_chpl_nodeID();
      if ((&localThis_chpl)->locale_id == call_tmp_chpl39) {
        init_chpl73(&ret_chpl14);
        (&ret_chpl14)->cachedNumCodepoints = (&localThis_chpl)->cachedNumCodepoints;
        chpl_macro_tmp_745.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_745.addr = i_this_chpl;
        tmp_chpl25 = chpl_macro_tmp_745;
        initWithBorrowedBuffer_chpl(&ret_chpl14, tmp_chpl25);
        ret_chpl13 = ret_chpl14;
        ret_chpl12 = ret_chpl13;
        goto _end_localize_chpl3;
      } else {
        chpl_macro_tmp_746.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_746.addr = i_this_chpl;
        tmp_chpl26 = chpl_macro_tmp_746;
        init_ASSIGN__chpl21(&x_chpl4, tmp_chpl26);
        ret_chpl12 = x_chpl4;
        goto _end_localize_chpl3;
      }
      _end_localize_chpl3:;
      localThis_chpl2 = ret_chpl12;
      call_tmp_chpl40 = _findStartOfNextCodepointFromByte_chpl(&localThis_chpl2, i_start_chpl);
      i_chpl = call_tmp_chpl40;
      tmp_chpl27 = (call_tmp_chpl40 < (&localThis_chpl2)->buffLen);
      while (tmp_chpl27) {
        _cpIndexLenHelpNoAdjustment_chpl(&localThis_chpl2, &i_chpl, &ret_tmp_chpl2);
        call_tmp_chpl41 = ret_tmp_chpl2;
        tmp_chpl28 = (&call_tmp_chpl41)->x1;
        _yieldedIndex_x1_chpl = tmp_chpl28;
        thisChar_chpl = (&call_tmp_chpl41)->x0;
        i_chpl2 = _yieldedIndex_x1_chpl;
        nBytes_chpl = (&call_tmp_chpl41)->x2;
        i_this_chpl2 = &localChars_chpl;
        call_tmp_chpl42 = get_chpl_nodeID();
        if ((&localChars_chpl)->locale_id == call_tmp_chpl42) {
          init_chpl73(&ret_chpl17);
          (&ret_chpl17)->cachedNumCodepoints = (&localChars_chpl)->cachedNumCodepoints;
          chpl_macro_tmp_747.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_747.addr = i_this_chpl2;
          tmp_chpl29 = chpl_macro_tmp_747;
          initWithBorrowedBuffer_chpl(&ret_chpl17, tmp_chpl29);
          ret_chpl16 = ret_chpl17;
          ret_chpl15 = ret_chpl16;
          goto _end_localize_chpl4;
        } else {
          chpl_macro_tmp_748.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_748.addr = i_this_chpl2;
          tmp_chpl30 = chpl_macro_tmp_748;
          init_ASSIGN__chpl21(&x_chpl5, tmp_chpl30);
          ret_chpl15 = x_chpl5;
          goto _end_localize_chpl4;
        }
        _end_localize_chpl4:;
        localThis_chpl3 = ret_chpl15;
        i_chpl3 = INT64(0);
        tmp_chpl31 = (INT64(0) < (&localThis_chpl3)->buffLen);
        while (tmp_chpl31) {
          _cpIndexLenHelpNoAdjustment_chpl(&localThis_chpl3, &i_chpl3, &ret_tmp_chpl3);
          if (thisChar_chpl == (&ret_tmp_chpl3)->x0) {
            call_tmp_chpl44 = ((&i_chpl2)->_bindex + nBytes_chpl);
            init_chpl71(&cpi_chpl2);
            (&cpi_chpl2)->_bindex = call_tmp_chpl44;
            ret_chpl18 = cpi_chpl2;
            call_tmp_chpl43 = ret_chpl18;
            chpl___ASSIGN_5(&start_chpl, &call_tmp_chpl43);
            i_x_chpl2 = &localThis_chpl3;
            chpl_macro_tmp_749.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_749.addr = i_x_chpl2;
            tmp_chpl32 = chpl_macro_tmp_749;
            deinit_chpl42(tmp_chpl32);
            goto _continueLabel_chpl;
          }
          tmp_chpl31 = (i_chpl3 < (&localThis_chpl3)->buffLen);
        }
        i_x_chpl3 = &localThis_chpl3;
        chpl_macro_tmp_750.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_750.addr = i_x_chpl3;
        tmp_chpl33 = chpl_macro_tmp_750;
        deinit_chpl42(tmp_chpl33);
        i_x_chpl4 = &localThis_chpl2;
        chpl_macro_tmp_751.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_751.addr = i_x_chpl4;
        tmp_chpl34 = chpl_macro_tmp_751;
        deinit_chpl42(tmp_chpl34);
        goto _breakLabel_chpl;
        _continueLabel_chpl:;
        tmp_chpl27 = (i_chpl < (&localThis_chpl2)->buffLen);
      }
      i_x_chpl5 = &localThis_chpl2;
      chpl_macro_tmp_752.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_752.addr = i_x_chpl5;
      tmp_chpl35 = chpl_macro_tmp_752;
      deinit_chpl42(tmp_chpl35);
      _breakLabel_chpl:;
    }
    if (trailing_chpl) {
      chpl___ASSIGN_4(&end_chpl, INT64(-1));
      i_this_chpl3 = &localThis_chpl;
      i_start_chpl2 = &start_chpl;
      call_tmp_chpl45 = get_chpl_nodeID();
      if ((&localThis_chpl)->locale_id == call_tmp_chpl45) {
        init_chpl73(&ret_chpl21);
        (&ret_chpl21)->cachedNumCodepoints = (&localThis_chpl)->cachedNumCodepoints;
        chpl_macro_tmp_753.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_753.addr = i_this_chpl3;
        tmp_chpl36 = chpl_macro_tmp_753;
        initWithBorrowedBuffer_chpl(&ret_chpl21, tmp_chpl36);
        ret_chpl20 = ret_chpl21;
        ret_chpl19 = ret_chpl20;
        goto _end_localize_chpl5;
      } else {
        chpl_macro_tmp_754.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_754.addr = i_this_chpl3;
        tmp_chpl37 = chpl_macro_tmp_754;
        init_ASSIGN__chpl21(&x_chpl6, tmp_chpl37);
        ret_chpl19 = x_chpl6;
        goto _end_localize_chpl5;
      }
      _end_localize_chpl5:;
      localThis_chpl4 = ret_chpl19;
      call_tmp_chpl46 = _findStartOfNextCodepointFromByte_chpl(&localThis_chpl4, i_start_chpl2);
      i_chpl4 = call_tmp_chpl46;
      tmp_chpl38 = (call_tmp_chpl46 < (&localThis_chpl4)->buffLen);
      while (tmp_chpl38) {
        _cpIndexLenHelpNoAdjustment_chpl(&localThis_chpl4, &i_chpl4, &ret_tmp_chpl4);
        call_tmp_chpl47 = ret_tmp_chpl4;
        tmp_chpl39 = (&call_tmp_chpl47)->x1;
        _yieldedIndex_x1_chpl2 = tmp_chpl39;
        thisChar_chpl2 = (&call_tmp_chpl47)->x0;
        i_chpl5 = _yieldedIndex_x1_chpl2;
        nBytes_chpl2 = (&call_tmp_chpl47)->x2;
        i_this_chpl4 = &localChars_chpl;
        call_tmp_chpl48 = get_chpl_nodeID();
        if ((&localChars_chpl)->locale_id == call_tmp_chpl48) {
          init_chpl73(&ret_chpl24);
          (&ret_chpl24)->cachedNumCodepoints = (&localChars_chpl)->cachedNumCodepoints;
          chpl_macro_tmp_755.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_755.addr = i_this_chpl4;
          tmp_chpl40 = chpl_macro_tmp_755;
          initWithBorrowedBuffer_chpl(&ret_chpl24, tmp_chpl40);
          ret_chpl23 = ret_chpl24;
          ret_chpl22 = ret_chpl23;
          goto _end_localize_chpl6;
        } else {
          chpl_macro_tmp_756.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_756.addr = i_this_chpl4;
          tmp_chpl41 = chpl_macro_tmp_756;
          init_ASSIGN__chpl21(&x_chpl7, tmp_chpl41);
          ret_chpl22 = x_chpl7;
          goto _end_localize_chpl6;
        }
        _end_localize_chpl6:;
        localThis_chpl5 = ret_chpl22;
        i_chpl6 = INT64(0);
        tmp_chpl42 = (INT64(0) < (&localThis_chpl5)->buffLen);
        while (tmp_chpl42) {
          _cpIndexLenHelpNoAdjustment_chpl(&localThis_chpl5, &i_chpl6, &ret_tmp_chpl5);
          if (thisChar_chpl2 == (&ret_tmp_chpl5)->x0) {
            i_x_chpl6 = &localThis_chpl5;
            chpl_macro_tmp_757.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_757.addr = i_x_chpl6;
            tmp_chpl43 = chpl_macro_tmp_757;
            deinit_chpl42(tmp_chpl43);
            goto _continueLabel_chpl2;
          }
          tmp_chpl42 = (i_chpl6 < (&localThis_chpl5)->buffLen);
        }
        i_x_chpl7 = &localThis_chpl5;
        chpl_macro_tmp_758.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_758.addr = i_x_chpl7;
        tmp_chpl44 = chpl_macro_tmp_758;
        deinit_chpl42(tmp_chpl44);
        call_tmp_chpl50 = ((&i_chpl5)->_bindex + nBytes_chpl2);
        init_chpl71(&cpi_chpl3);
        (&cpi_chpl3)->_bindex = call_tmp_chpl50;
        ret_chpl25 = cpi_chpl3;
        call_tmp_chpl49 = ret_chpl25;
        call_tmp_chpl52 = ((&call_tmp_chpl49)->_bindex - INT64(1));
        init_chpl71(&cpi_chpl4);
        (&cpi_chpl4)->_bindex = call_tmp_chpl52;
        ret_chpl26 = cpi_chpl4;
        call_tmp_chpl51 = ret_chpl26;
        chpl___ASSIGN_5(&end_chpl, &call_tmp_chpl51);
        _continueLabel_chpl2:;
        tmp_chpl38 = (i_chpl4 < (&localThis_chpl4)->buffLen);
      }
      i_x_chpl8 = &localThis_chpl4;
      chpl_macro_tmp_759.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_759.addr = i_x_chpl8;
      tmp_chpl45 = chpl_macro_tmp_759;
      deinit_chpl42(tmp_chpl45);
    }
    chpl_build_bounded_range2(&start_chpl, &end_chpl, &ret_tmp_chpl6);
    call_tmp_chpl53 = ret_tmp_chpl6;
    chpl_macro_tmp_760.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_760.addr = nil;
    chpl_macro_tmp_761.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_761.addr = NULL;
    error_chpl = chpl_macro_tmp_761;
    i_this_chpl5 = &localThis_chpl;
    chpl_macro_tmp_762.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_762.addr = nil;
    chpl_macro_tmp_763.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_763.addr = NULL;
    error_chpl2 = chpl_macro_tmp_763;
    tmp_chpl46 = &error_chpl2;
    getSlice_chpl4(i_this_chpl5, call_tmp_chpl53, tmp_chpl46, &ret_tmp_chpl7);
    call_tmp_chpl54 = ret_tmp_chpl7;
    if ((&error_chpl2)->addr != nil) {
      error_chpl = error_chpl2;
      goto _endthis_chpl;
    }
    ret_chpl27 = call_tmp_chpl54;
    _endthis_chpl:;
    if ((&error_chpl)->addr != nil) {
      chpl_uncaught_error(error_chpl, INT64(1875), INT32(11));
    }
    ret_chpl = ret_chpl27;
    i_x_chpl9 = &localChars_chpl;
    chpl_macro_tmp_764.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_764.addr = i_x_chpl9;
    tmp_chpl47 = chpl_macro_tmp_764;
    deinit_chpl42(tmp_chpl47);
    i_x_chpl10 = &localThis_chpl;
    chpl_macro_tmp_765.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_765.addr = i_x_chpl10;
    tmp_chpl48 = chpl_macro_tmp_765;
    deinit_chpl42(tmp_chpl48);
    goto _end_strip_chpl;
  }
  _end_strip_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* String.chpl:2228 */
static void chpl___ASSIGN_4(byteIndex_chpl * lhs_chpl,
                            int64_t rhs_chpl) {
  (lhs_chpl)->_bindex = rhs_chpl;
  return;
}

/* String.chpl:2232 */
static void chpl___ASSIGN_5(byteIndex_chpl * lhs_chpl,
                            byteIndex_chpl * rhs_chpl) {
  *(lhs_chpl) = *(rhs_chpl);
  return;
}

/* String.chpl:2253 */
static void chpl___ASSIGN_6(chpl____wide__ref_string lhs_chpl,
                            string_chpl * rhs_chpl) {
  doAssign_chpl(lhs_chpl, rhs_chpl);
  return;
}

/* String.chpl:2263 */
static void chpl___PLUS_(string_chpl * s0_chpl,
                         chpl____wide__ref_string s1_chpl,
                         string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  doConcat_chpl(s0_chpl, s1_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* String.chpl:2382 */
static void chpl___PLUS__ASSIGN_(string_chpl * lhs_chpl,
                                 string_chpl * rhs_chpl) {
  doAppend_chpl(lhs_chpl, rhs_chpl);
  return;
}

/* String.chpl:2403 */
static chpl_bool chpl___EQUALS_3(string_chpl * a_chpl,
                                 string_chpl * b_chpl) {
  c_ptr_uint8_t_chpl coerce_tmp_chpl3 = NULL;
  int64_t coerce_tmp_chpl4;
  int32_t coerce_tmp_chpl5;
  c_ptr_uint8_t_chpl coerce_tmp_chpl6 = NULL;
  int64_t coerce_tmp_chpl7;
  int32_t coerce_tmp_chpl8;
  int64_t ret_chpl;
  int32_t call_tmp_chpl36;
  chpl_bool tmp_chpl15;
  int32_t call_tmp_chpl37;
  int64_t ret_chpl2;
  int64_t tmp_chpl16;
  int64_t size_chpl3;
  c_void_ptr coerce_tmp_chpl9;
  c_void_ptr coerce_tmp_chpl10;
  int32_t call_tmp_chpl38;
  int64_t call_tmp_chpl39;
  int32_t call_tmp_chpl40;
  chpl_bool tmp_chpl17;
  int32_t call_tmp_chpl41;
  c_ptr_uint8_t_chpl call_tmp_chpl42 = NULL;
  int64_t ret_chpl3;
  int64_t tmp_chpl18;
  int64_t size_chpl4;
  c_void_ptr coerce_tmp_chpl11;
  c_void_ptr coerce_tmp_chpl12;
  int32_t call_tmp_chpl43;
  int64_t call_tmp_chpl44;
  int32_t call_tmp_chpl45;
  chpl_bool tmp_chpl19;
  int32_t call_tmp_chpl46;
  c_ptr_uint8_t_chpl call_tmp_chpl47 = NULL;
  int64_t ret_chpl4;
  int64_t tmp_chpl20;
  int64_t size_chpl5;
  c_void_ptr coerce_tmp_chpl13;
  c_void_ptr coerce_tmp_chpl14;
  int32_t call_tmp_chpl48;
  int64_t call_tmp_chpl49;
  c_ptr_uint8_t_chpl call_tmp_chpl50 = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl51 = NULL;
  int64_t ret_chpl5;
  int64_t tmp_chpl21;
  int64_t size_chpl6;
  c_void_ptr coerce_tmp_chpl15;
  c_void_ptr coerce_tmp_chpl16;
  int32_t call_tmp_chpl52;
  int64_t call_tmp_chpl53;
  chpl_bool call_tmp_chpl54;
  coerce_tmp_chpl3 = (a_chpl)->buff;
  coerce_tmp_chpl4 = (a_chpl)->buffLen;
  coerce_tmp_chpl5 = (a_chpl)->locale_id;
  coerce_tmp_chpl6 = (b_chpl)->buff;
  coerce_tmp_chpl7 = (b_chpl)->buffLen;
  coerce_tmp_chpl8 = (b_chpl)->locale_id;
  call_tmp_chpl36 = get_chpl_nodeID();
  if (coerce_tmp_chpl5 == call_tmp_chpl36) {
    call_tmp_chpl37 = get_chpl_nodeID();
    tmp_chpl15 = (coerce_tmp_chpl8 == call_tmp_chpl37);
  } else {
    tmp_chpl15 = UINT8(false);
  }
  if (tmp_chpl15) {
    if (coerce_tmp_chpl4 < coerce_tmp_chpl7) {
      tmp_chpl16 = coerce_tmp_chpl4;
    } else {
      tmp_chpl16 = coerce_tmp_chpl7;
    }
    size_chpl3 = tmp_chpl16;
    coerce_tmp_chpl9 = ((c_void_ptr)(coerce_tmp_chpl3));
    coerce_tmp_chpl10 = ((c_void_ptr)(coerce_tmp_chpl6));
    checkValue_chpl(tmp_chpl16);
    call_tmp_chpl38 = memcmp(coerce_tmp_chpl9, coerce_tmp_chpl10, ((uint64_t)(size_chpl3)));
    checkValue_chpl5();
    call_tmp_chpl39 = ((int64_t)(call_tmp_chpl38));
    if (call_tmp_chpl39 == INT64(0)) {
      if (size_chpl3 < coerce_tmp_chpl4) {
        ret_chpl2 = INT64(1);
        goto _end__strcmp_local_chpl;
      }
      if (size_chpl3 < coerce_tmp_chpl7) {
        ret_chpl2 = INT64(-1);
        goto _end__strcmp_local_chpl;
      }
    }
    ret_chpl2 = call_tmp_chpl39;
    _end__strcmp_local_chpl:;
    ret_chpl = ret_chpl2;
    goto _end__strcmp_chpl;
  } else {
    call_tmp_chpl40 = get_chpl_nodeID();
    if (coerce_tmp_chpl5 != call_tmp_chpl40) {
      call_tmp_chpl41 = get_chpl_nodeID();
      tmp_chpl17 = (coerce_tmp_chpl8 == call_tmp_chpl41);
    } else {
      tmp_chpl17 = UINT8(false);
    }
    if (tmp_chpl17) {
      call_tmp_chpl42 = bufferCopyRemote_chpl(((int64_t)(coerce_tmp_chpl5)), coerce_tmp_chpl3, coerce_tmp_chpl4);
      if (coerce_tmp_chpl4 < coerce_tmp_chpl7) {
        tmp_chpl18 = coerce_tmp_chpl4;
      } else {
        tmp_chpl18 = coerce_tmp_chpl7;
      }
      size_chpl4 = tmp_chpl18;
      coerce_tmp_chpl11 = ((c_void_ptr)(call_tmp_chpl42));
      coerce_tmp_chpl12 = ((c_void_ptr)(coerce_tmp_chpl6));
      checkValue_chpl(tmp_chpl18);
      call_tmp_chpl43 = memcmp(coerce_tmp_chpl11, coerce_tmp_chpl12, ((uint64_t)(size_chpl4)));
      checkValue_chpl5();
      call_tmp_chpl44 = ((int64_t)(call_tmp_chpl43));
      if (call_tmp_chpl44 == INT64(0)) {
        if (size_chpl4 < coerce_tmp_chpl4) {
          ret_chpl3 = INT64(1);
          goto _end__strcmp_local_chpl2;
        }
        if (size_chpl4 < coerce_tmp_chpl7) {
          ret_chpl3 = INT64(-1);
          goto _end__strcmp_local_chpl2;
        }
      }
      ret_chpl3 = call_tmp_chpl44;
      _end__strcmp_local_chpl2:;
      chpl_here_free(((c_void_ptr)(call_tmp_chpl42)), INT64(2418), INT32(11));
      ret_chpl = ret_chpl3;
      goto _end__strcmp_chpl;
    } else {
      call_tmp_chpl45 = get_chpl_nodeID();
      if (coerce_tmp_chpl5 == call_tmp_chpl45) {
        call_tmp_chpl46 = get_chpl_nodeID();
        tmp_chpl19 = (coerce_tmp_chpl8 != call_tmp_chpl46);
      } else {
        tmp_chpl19 = UINT8(false);
      }
      if (tmp_chpl19) {
        call_tmp_chpl47 = bufferCopyRemote_chpl(((int64_t)(coerce_tmp_chpl8)), coerce_tmp_chpl6, coerce_tmp_chpl7);
        if (coerce_tmp_chpl4 < coerce_tmp_chpl7) {
          tmp_chpl20 = coerce_tmp_chpl4;
        } else {
          tmp_chpl20 = coerce_tmp_chpl7;
        }
        size_chpl5 = tmp_chpl20;
        coerce_tmp_chpl13 = ((c_void_ptr)(coerce_tmp_chpl3));
        coerce_tmp_chpl14 = ((c_void_ptr)(call_tmp_chpl47));
        checkValue_chpl(tmp_chpl20);
        call_tmp_chpl48 = memcmp(coerce_tmp_chpl13, coerce_tmp_chpl14, ((uint64_t)(size_chpl5)));
        checkValue_chpl5();
        call_tmp_chpl49 = ((int64_t)(call_tmp_chpl48));
        if (call_tmp_chpl49 == INT64(0)) {
          if (size_chpl5 < coerce_tmp_chpl4) {
            ret_chpl4 = INT64(1);
            goto _end__strcmp_local_chpl3;
          }
          if (size_chpl5 < coerce_tmp_chpl7) {
            ret_chpl4 = INT64(-1);
            goto _end__strcmp_local_chpl3;
          }
        }
        ret_chpl4 = call_tmp_chpl49;
        _end__strcmp_local_chpl3:;
        chpl_here_free(((c_void_ptr)(call_tmp_chpl47)), INT64(2418), INT32(11));
        ret_chpl = ret_chpl4;
        goto _end__strcmp_chpl;
      } else {
        call_tmp_chpl50 = bufferCopyRemote_chpl(((int64_t)(coerce_tmp_chpl5)), coerce_tmp_chpl3, coerce_tmp_chpl4);
        call_tmp_chpl51 = bufferCopyRemote_chpl(((int64_t)(coerce_tmp_chpl8)), coerce_tmp_chpl6, coerce_tmp_chpl7);
        if (coerce_tmp_chpl4 < coerce_tmp_chpl7) {
          tmp_chpl21 = coerce_tmp_chpl4;
        } else {
          tmp_chpl21 = coerce_tmp_chpl7;
        }
        size_chpl6 = tmp_chpl21;
        coerce_tmp_chpl15 = ((c_void_ptr)(call_tmp_chpl50));
        coerce_tmp_chpl16 = ((c_void_ptr)(call_tmp_chpl51));
        checkValue_chpl(tmp_chpl21);
        call_tmp_chpl52 = memcmp(coerce_tmp_chpl15, coerce_tmp_chpl16, ((uint64_t)(size_chpl6)));
        checkValue_chpl5();
        call_tmp_chpl53 = ((int64_t)(call_tmp_chpl52));
        if (call_tmp_chpl53 == INT64(0)) {
          if (size_chpl6 < coerce_tmp_chpl4) {
            ret_chpl5 = INT64(1);
            goto _end__strcmp_local_chpl4;
          }
          if (size_chpl6 < coerce_tmp_chpl7) {
            ret_chpl5 = INT64(-1);
            goto _end__strcmp_local_chpl4;
          }
        }
        ret_chpl5 = call_tmp_chpl53;
        _end__strcmp_local_chpl4:;
        chpl_here_free(((c_void_ptr)(call_tmp_chpl50)), INT64(2418), INT32(11));
        chpl_here_free(((c_void_ptr)(call_tmp_chpl51)), INT64(2418), INT32(11));
        ret_chpl = ret_chpl5;
        goto _end__strcmp_chpl;
      }
    }
  }
  _end__strcmp_chpl:;
  call_tmp_chpl54 = (ret_chpl == INT64(0));
  return call_tmp_chpl54;
}

/* String.chpl:2531 */
static void chpl___COLON_12(c_string cs_chpl,
                            string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_348_chpl;
  string_chpl ret_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl2;
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl3;
  string_chpl call_tmp_chpl36;
  chpl____wide_Error error_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_tmp_chpl;
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  _owned_Error_chpl2 call_tmp_chpl37;
  _owned_Error_chpl2 initTemp_chpl;
  _owned_Error_chpl2 chpl_anon_error;
  chpl____wide__nilType chpl_macro_tmp_766;
  chpl____wide_Error chpl_macro_tmp_767;
  chpl____wide__nilType chpl_macro_tmp_768;
  chpl____wide_Error chpl_macro_tmp_769;
  chpl____wide__nilType chpl_macro_tmp_770;
  chpl____wide_Error chpl_macro_tmp_771;
  local__str_literal_348_chpl = _str_literal_348_chpl /* "Casting a non-UTF-8 c_string to string" */;
  chpl_macro_tmp_766.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_766.addr = nil;
  chpl_macro_tmp_767.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_767.addr = NULL;
  error_chpl = chpl_macro_tmp_767;
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  chpl_macro_tmp_768.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_768.addr = nil;
  chpl_macro_tmp_769.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_769.addr = NULL;
  error_chpl2 = chpl_macro_tmp_769;
  chpl_macro_tmp_770.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_770.addr = nil;
  chpl_macro_tmp_771.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_771.addr = NULL;
  error_chpl3 = chpl_macro_tmp_771;
  tmp_chpl15 = &error_chpl3;
  decodeByteBuffer_chpl(((c_ptr_uint8_t_chpl)(cs_chpl)), string_length_bytes(cs_chpl), decodePolicy_chpl_strict_chpl, tmp_chpl15, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  if ((&error_chpl3)->addr != nil) {
    error_chpl2 = error_chpl3;
    goto _endcreateStringWithNewBuffer_chpl;
  }
  ret_chpl3 = call_tmp_chpl36;
  _endcreateStringWithNewBuffer_chpl:;
  if ((&error_chpl2)->addr != nil) {
    error_chpl = error_chpl2;
    goto _endcreateStringWithNewBuffer_chpl2;
  }
  ret_chpl2 = ret_chpl3;
  _endcreateStringWithNewBuffer_chpl2:;
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  ret_chpl = ret_chpl2;
  goto _end__COLON__chpl;
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    init_chpl68(&initTemp_chpl, error_chpl);
    call_tmp_chpl37 = initTemp_chpl;
    chpl_anon_error = call_tmp_chpl37;
    halt_chpl(&local__str_literal_348_chpl, INT64(2536), INT32(11));
    chpl__autoDestroy19(&chpl_anon_error);
  }
  _end__COLON__chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

