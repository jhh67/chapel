/* BytesStringCommon.chpl:21 */
static void chpl__init_BytesStringCommon(int64_t _ln_chpl,
                                         int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_BytesStringCommon_p) {
    goto _exit_chpl__init_BytesStringCommon_chpl;
  }
  printModuleInit_chpl("%*s\n", "BytesStringCommon", INT64(17));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_BytesStringCommon_p = UINT8(true);
  {
    chpl__init_CTypes(INT64(21), INT32(47));
    chpl__init_ByteBufferHelpers(INT64(21), INT32(47));
    chpl__init_NVStringFactory(INT64(21), INT32(47));
    chpl__init_SysBasic(INT64(21), INT32(47));
    chpl__init_Bytes(INT64(21), INT32(47));
    chpl__init_String(INT64(21), INT32(47));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_BytesStringCommon_chpl:;
  return;
}

/* BytesStringCommon.chpl:38 */
static void init_chpl4(chpl____serializeHelper * this_chpl7,
                       int64_t buffLen_chpl,
                       uint8_t * buff_chpl,
                       int64_t size_chpl3,
                       int32_t locale_id_chpl,
                       chpl__inPlaceBuffer shortData_chpl,
                       int64_t cachedNumCodepoints_chpl) {
  (this_chpl7)->buffLen = buffLen_chpl;
  (this_chpl7)->buff = buff_chpl;
  (this_chpl7)->size = size_chpl3;
  (this_chpl7)->locale_id = locale_id_chpl;
  (this_chpl7)->shortData = shortData_chpl;
  (this_chpl7)->cachedNumCodepoints = cachedNumCodepoints_chpl;
  return;
}

/* BytesStringCommon.chpl:108 */
static void decodeByteBuffer_chpl(uint8_t * buff_chpl,
                                  int64_t length_chpl,
                                  decodePolicy_chpl policy_chpl,
                                  chpl____wide_Error * error_out_chpl,
                                  string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_596_chpl;
  string_chpl local__str_literal_75_chpl;
  string_chpl local__str_literal_215_chpl;
  string_chpl ret_chpl;
  string_chpl inlineImm_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  string_chpl ret_chpl2;
  string_chpl tmp_chpl15;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl36;
  int64_t tmp_chpl17;
  int16_t call_tmp_chpl37;
  c_void_ptr cast_tmp_chpl;
  c_ptr_uint8_t_chpl newBuff_chpl = NULL;
  int64_t allocSize_chpl;
  chpl_bool hasEscapes_chpl;
  int64_t numCodepoints_chpl;
  int64_t expectedSize_chpl;
  int64_t thisIdx_chpl;
  int64_t decodedIdx_chpl;
  chpl_bool tmp_chpl18;
  syserr call_tmp_x0_chpl;
  int32_t call_tmp_x2_chpl;
  _tuple_3_syserr_int32_t_int32_t_chpl ret_tmp_chpl;
  syserr tmp_chpl19;
  c_ptr_uint8_t_chpl call_tmp_chpl38 = NULL;
  _ref_int64_t_chpl i_lhs_chpl = NULL;
  int32_t call_tmp_chpl39;
  _owned_DecodeError_chpl call_tmp_chpl40;
  DecodeError_chpl new_temp_chpl = NULL;
  _owned_DecodeError_chpl initTemp_chpl;
  chpl____wide_Error call_tmp_chpl41 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 coerce_tmp_chpl3;
  _owned_Error_chpl2 ret_tmp_chpl2;
  _ref__owned_DecodeError_chpl i_x_chpl2 = NULL;
  _ref__owned_Error_chpl2 i__retArg_chpl = NULL;
  _owned_DecodeError_chpl _formal_tmp_x_chpl;
  _owned_Error_chpl2 ret_chpl3;
  _ref__owned_DecodeError_chpl i_this_chpl = NULL;
  Error_chpl call_tmp_chpl42 = NULL;
  _ref__owned_DecodeError_chpl i_this_chpl2 = NULL;
  _owned_Error_chpl2 call_tmp_chpl43;
  _owned_Error_chpl2 initTemp_chpl2;
  chpl____wide_Error tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 _formal_tmp_in_err_chpl;
  int32_t nInvalidBytes_chpl;
  int32_t tmp_chpl21;
  _ref_int64_t_chpl i_lhs_chpl2 = NULL;
  _ref_int64_t_chpl i_lhs_chpl3 = NULL;
  c_ptr_uint8_t_chpl tmp_x0_chpl = NULL;
  int64_t tmp_x1_chpl;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl ret_tmp_chpl3;
  _ref_int64_t_chpl i_lhs_chpl4 = NULL;
  _ref_int64_t_chpl i_lhs_chpl5 = NULL;
  int64_t tmp_x1_chpl2;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl ret_tmp_chpl4;
  int32_t coerce_tmp_chpl4;
  int32_t tmp_x0_chpl2;
  int32_t tmp_x1_chpl3;
  int32_t _ic__F1_high_chpl;
  int32_t i_chpl;
  int64_t call_tmp_chpl44;
  _ref_uint8_t_chpl call_tmp_chpl45 = NULL;
  _ref_int64_t_chpl i_lhs_chpl6 = NULL;
  _ref_int64_t_chpl i_lhs_chpl7 = NULL;
  uint64_t call_tmp_chpl46;
  c_void_ptr coerce_tmp_chpl5;
  c_void_ptr coerce_tmp_chpl6;
  _ref_int64_t_chpl i_lhs_chpl8 = NULL;
  _ref_int64_t_chpl i_lhs_chpl9 = NULL;
  _ref_uint8_t_chpl call_tmp_chpl47 = NULL;
  string_chpl ret_chpl4;
  string_chpl ret_chpl5;
  _ref_string_chpl i_x_chpl3 = NULL;
  string_chpl ret_chpl6;
  chpl____wide__ref_string chpl_macro_tmp_1823;
  chpl____wide_Error chpl_macro_tmp_1824;
  local__str_literal_596_chpl = _str_literal_596_chpl /* "With a negative count, the range must have a last index." */;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  local__str_literal_215_chpl = _str_literal_215_chpl /* "" */;
  if (length_chpl == INT64(0)) {
    inlineImm_chpl = local__str_literal_215_chpl;
    i_x_chpl = &inlineImm_chpl;
    chpl_macro_tmp_1823.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1823.addr = i_x_chpl;
    tmp_chpl16 = chpl_macro_tmp_1823;
    init_ASSIGN__chpl21(&tmp_chpl15, tmp_chpl16);
    ret_chpl2 = tmp_chpl15;
    ret_chpl = ret_chpl2;
    goto _end_decodeByteBuffer_chpl;
  }
  call_tmp_chpl36 = chpl_here_good_alloc_size(((int64_t)((length_chpl + INT64(1)))), INT64(122), INT32(47));
  if (call_tmp_chpl36 > INT64(0)) {
    tmp_chpl17 = call_tmp_chpl36;
  } else {
    tmp_chpl17 = INT64(0);
  }
  call_tmp_chpl37 = offset_STR_COPY_DATA_chpl();
  cast_tmp_chpl = chpl_here_alloc(tmp_chpl17, call_tmp_chpl37, INT64(122), INT32(47));
  newBuff_chpl = ((c_ptr_uint8_t_chpl)(cast_tmp_chpl));
  allocSize_chpl = tmp_chpl17;
  hasEscapes_chpl = UINT8(false);
  numCodepoints_chpl = INT64(0);
  expectedSize_chpl = tmp_chpl17;
  thisIdx_chpl = INT64(0);
  decodedIdx_chpl = INT64(0);
  tmp_chpl18 = (INT64(0) < length_chpl);
  while (tmp_chpl18) {
    decodeHelp_chpl(buff_chpl, length_chpl, thisIdx_chpl, UINT8(false), &ret_tmp_chpl);
    tmp_chpl19 = (&ret_tmp_chpl)->x0;
    call_tmp_x0_chpl = tmp_chpl19;
    call_tmp_x2_chpl = (&ret_tmp_chpl)->x2;
    call_tmp_chpl38 = (buff_chpl + thisIdx_chpl);
    i_lhs_chpl = &numCodepoints_chpl;
    *(i_lhs_chpl) += INT64(1);
    call_tmp_chpl39 = qio_err_to_int(call_tmp_x0_chpl);
    if (! (call_tmp_chpl39 == ((int32_t)(INT64(0))))) {
      if (policy_chpl == decodePolicy_chpl_strict_chpl) {
        chpl_here_free(((c_void_ptr)(newBuff_chpl)), INT64(140), INT32(47));
        new_temp_chpl = _new_chpl13(INT64(141), INT32(47));
        init_chpl49(&initTemp_chpl, new_temp_chpl);
        call_tmp_chpl40 = initTemp_chpl;
        i_x_chpl2 = &call_tmp_chpl40;
        i__retArg_chpl = &ret_tmp_chpl2;
        _formal_tmp_x_chpl = *(i_x_chpl2);
        i_this_chpl = &_formal_tmp_x_chpl;
        call_tmp_chpl42 = ((Error_chpl)((i_this_chpl)->chpl_p));
        i_this_chpl2 = &_formal_tmp_x_chpl;
        (i_this_chpl2)->chpl_p = ((DecodeError_chpl)(nil));
        if (((object_chpl)(call_tmp_chpl42)) == nil) {
          nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(141), INT32(47));
        }
        chpl_macro_tmp_1824.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1824.addr = call_tmp_chpl42;
        tmp_chpl20 = chpl_macro_tmp_1824;
        init_chpl68(&initTemp_chpl2, tmp_chpl20);
        call_tmp_chpl43 = initTemp_chpl2;
        ret_chpl3 = call_tmp_chpl43;
        chpl__autoDestroy8(&_formal_tmp_x_chpl);
        *(i__retArg_chpl) = ret_chpl3;
        coerce_tmp_chpl3 = ret_tmp_chpl2;
        _formal_tmp_in_err_chpl = coerce_tmp_chpl3;
        call_tmp_chpl41 = chpl_fix_thrown_error(&_formal_tmp_in_err_chpl, INT64(141), INT32(47));
        *(error_out_chpl) = call_tmp_chpl41;
        goto _end_decodeByteBuffer_chpl;
      } else {
        if (call_tmp_x2_chpl == ((int32_t)(INT64(1)))) {
          tmp_chpl21 = call_tmp_x2_chpl;
        } else {
          tmp_chpl21 = ((int32_t)((call_tmp_x2_chpl - ((int32_t)(INT64(1))))));
        }
        nInvalidBytes_chpl = tmp_chpl21;
        i_lhs_chpl2 = &thisIdx_chpl;
        *(i_lhs_chpl2) += ((int64_t)(tmp_chpl21));
        if (policy_chpl == decodePolicy_chpl_replace_chpl) {
          i_lhs_chpl3 = &expectedSize_chpl;
          *(i_lhs_chpl3) += ((int64_t)(((int32_t)((((int32_t)(INT64(3))) - tmp_chpl21)))));
          bufferEnsureSize_chpl(newBuff_chpl, allocSize_chpl, expectedSize_chpl, &ret_tmp_chpl3);
          tmp_x0_chpl = (&ret_tmp_chpl3)->x0;
          tmp_x1_chpl = (&ret_tmp_chpl3)->x1;
          newBuff_chpl = tmp_x0_chpl;
          allocSize_chpl = tmp_x1_chpl;
          qio_encode_char_buf(((c_void_ptr)((tmp_x0_chpl + decodedIdx_chpl))), INT32(65533));
          i_lhs_chpl4 = &decodedIdx_chpl;
          *(i_lhs_chpl4) += INT64(3);
        } else {
          if (policy_chpl == decodePolicy_chpl_escape_chpl) {
            hasEscapes_chpl = UINT8(true);
            i_lhs_chpl5 = &expectedSize_chpl;
            *(i_lhs_chpl5) += ((int64_t)(((int32_t)((((int32_t)(INT64(2))) * tmp_chpl21)))));
            bufferEnsureSize_chpl(newBuff_chpl, allocSize_chpl, expectedSize_chpl, &ret_tmp_chpl4);
            tmp_x1_chpl2 = (&ret_tmp_chpl4)->x1;
            newBuff_chpl = (&ret_tmp_chpl4)->x0;
            allocSize_chpl = tmp_x1_chpl2;
            coerce_tmp_chpl4 = ((int32_t)(INT64(0)));
            if (tmp_chpl21 < ((int32_t)(INT64(0)))) {
              boundsCheckHalt_chpl(&local__str_literal_596_chpl, INT64(177), INT32(47));
            }
            if (tmp_chpl21 == ((int32_t)(INT64(0)))) {
              tmp_x0_chpl2 = coerce_tmp_chpl4;
              tmp_x1_chpl3 = ((int32_t)(((uint64_t)((((uint64_t)(coerce_tmp_chpl4)) - UINT64(1))))));
            } else {
              tmp_x0_chpl2 = coerce_tmp_chpl4;
              tmp_x1_chpl3 = ((int32_t)((coerce_tmp_chpl4 + ((int32_t)((tmp_chpl21 - ((int32_t)(INT64(1)))))))));
            }
            _ic__F1_high_chpl = tmp_x1_chpl3;
            i_chpl = INT32(0);
            chpl_checkIfRangeIterWillOverflow2(tmp_x0_chpl2, tmp_x1_chpl3, INT64(1), tmp_x0_chpl2, tmp_x1_chpl3, UINT8(true));
            for (i_chpl = tmp_x0_chpl2; ((i_chpl <= _ic__F1_high_chpl)); i_chpl += INT32(1)) {
              call_tmp_chpl44 = (((int64_t)((thisIdx_chpl - ((int64_t)(nInvalidBytes_chpl))))) + ((int64_t)(i_chpl)));
              call_tmp_chpl45 = (buff_chpl + call_tmp_chpl44);
              qio_encode_char_buf(((c_void_ptr)((newBuff_chpl + decodedIdx_chpl))), ((int32_t)(((uint16_t)((((uint16_t)(INT64(56320))) + ((uint16_t)(*(call_tmp_chpl45)))))))));
              i_lhs_chpl6 = &decodedIdx_chpl;
              *(i_lhs_chpl6) += INT64(3);
            }
            i_lhs_chpl7 = &numCodepoints_chpl;
            *(i_lhs_chpl7) += ((int64_t)(((int32_t)((nInvalidBytes_chpl - ((int32_t)(INT64(1))))))));
          }
        }
      }
    } else {
      call_tmp_chpl46 = ((uint64_t)(((int64_t)(call_tmp_x2_chpl))));
      coerce_tmp_chpl5 = ((c_void_ptr)((newBuff_chpl + decodedIdx_chpl)));
      coerce_tmp_chpl6 = ((c_void_ptr)((call_tmp_chpl38 + INT64(0))));
      checkValue_chpl4();
      memcpy(coerce_tmp_chpl5, coerce_tmp_chpl6, call_tmp_chpl46);
      i_lhs_chpl8 = &thisIdx_chpl;
      *(i_lhs_chpl8) += ((int64_t)(call_tmp_x2_chpl));
      i_lhs_chpl9 = &decodedIdx_chpl;
      *(i_lhs_chpl9) += ((int64_t)(call_tmp_x2_chpl));
    }
    tmp_chpl18 = (thisIdx_chpl < length_chpl);
  }
  call_tmp_chpl47 = (newBuff_chpl + decodedIdx_chpl);
  *(call_tmp_chpl47) = ((uint8_t)(INT64(0)));
  init_chpl73(&ret_chpl5);
  i_x_chpl3 = &ret_chpl5;
  (i_x_chpl3)->isOwned = UINT8(true);
  (i_x_chpl3)->buff = newBuff_chpl;
  (i_x_chpl3)->buffSize = allocSize_chpl;
  (i_x_chpl3)->buffLen = decodedIdx_chpl;
  (&ret_chpl5)->cachedNumCodepoints = numCodepoints_chpl;
  ret_chpl4 = ret_chpl5;
  ret_chpl6 = ret_chpl4;
  (&ret_chpl6)->hasEscapes = hasEscapes_chpl;
  ret_chpl = ret_chpl6;
  _end_decodeByteBuffer_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* BytesStringCommon.chpl:231 */
static void decodeHelp_chpl(uint8_t * buff_chpl,
                            int64_t buffLen_chpl,
                            int64_t offset_chpl,
                            chpl_bool allowEsc_chpl,
                            _tuple_3_syserr_int32_t_int32_t_chpl * _retArg_chpl) {
  int32_t chr_chpl;
  int32_t nBytes_chpl;
  int32_t call_tmp_chpl36;
  c_string call_tmp_chpl37;
  int64_t call_tmp_chpl38;
  syserr decodeRet_chpl;
  syserr call_tmp_chpl39;
  syserr call_tmp_chpl40;
  _tuple_3_syserr_int32_t_int32_t_chpl ret_tmp_chpl;
  int32_t this_x1_chpl;
  int32_t this_x2_chpl;
  chr_chpl = INT32(0);
  nBytes_chpl = INT32(0);
  call_tmp_chpl36 = ((int32_t)(offset_chpl));
  call_tmp_chpl37 = ((c_string)((buff_chpl + call_tmp_chpl36)));
  call_tmp_chpl38 = (buffLen_chpl - ((int64_t)(call_tmp_chpl36)));
  if (allowEsc_chpl) {
    call_tmp_chpl39 = qio_decode_char_buf_esc(&chr_chpl, &nBytes_chpl, call_tmp_chpl37, call_tmp_chpl38);
    decodeRet_chpl = call_tmp_chpl39;
  } else {
    call_tmp_chpl40 = qio_decode_char_buf(&chr_chpl, &nBytes_chpl, call_tmp_chpl37, call_tmp_chpl38);
    decodeRet_chpl = call_tmp_chpl40;
  }
  this_x1_chpl = chr_chpl;
  this_x2_chpl = nBytes_chpl;
  (&ret_tmp_chpl)->x0 = decodeRet_chpl;
  (&ret_tmp_chpl)->x1 = this_x1_chpl;
  (&ret_tmp_chpl)->x2 = this_x2_chpl;
  *(_retArg_chpl) = ret_tmp_chpl;
  return;
}

/* BytesStringCommon.chpl:264 */
static void initWithBorrowedBuffer_chpl(string_chpl * x_chpl2,
                                        chpl____wide__ref_string other_chpl) {
  chpl_bool tmp_chpl15;
  int32_t call_tmp_chpl36;
  int32_t tmp_chpl16;
  chpl_bool call_tmp_chpl37;
  int64_t ret_chpl;
  int64_t tmp_chpl17;
  c_ptr_uint8_t_chpl call_tmp_chpl38 = NULL;
  int32_t tmp_chpl18;
  c_ptr_uint8_t_chpl tmp_chpl19 = NULL;
  int64_t tmp_chpl20;
  c_ptr_uint8_t_chpl tmp_chpl21 = NULL;
  int64_t tmp_chpl22;
  int64_t tmp_chpl23;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1825;
  chpl____wide__ref_int32_t chpl_macro_tmp_1826;
  chpl____wide__ref_int64_t chpl_macro_tmp_1827;
  chpl____wide__ref_int32_t chpl_macro_tmp_1828;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_1829;
  chpl____wide__ref_int64_t chpl_macro_tmp_1830;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_1831;
  chpl____wide__ref_int64_t chpl_macro_tmp_1832;
  chpl____wide__ref_int64_t chpl_macro_tmp_1833;
  (x_chpl2)->isOwned = UINT8(false);
  chpl_macro_tmp_1825.locale = (other_chpl).locale;
  chpl_macro_tmp_1825.addr = &(((other_chpl).addr)->hasEscapes);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1825).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1825).addr, sizeof(chpl_bool), COMMID(0), INT64(268), INT64(47));
  (x_chpl2)->hasEscapes = tmp_chpl15;
  call_tmp_chpl36 = get_chpl_nodeID();
  chpl_macro_tmp_1826.locale = (other_chpl).locale;
  chpl_macro_tmp_1826.addr = &(((other_chpl).addr)->locale_id);
  chpl_gen_comm_get(((void*)(&tmp_chpl16)), chpl_nodeFromLocaleID((chpl_macro_tmp_1826).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1826).addr, sizeof(int32_t), COMMID(1), INT64(270), INT64(47));
  call_tmp_chpl37 = (tmp_chpl16 != call_tmp_chpl36);
  chpl_macro_tmp_1827.locale = (other_chpl).locale;
  chpl_macro_tmp_1827.addr = &(((other_chpl).addr)->buffLen);
  chpl_gen_comm_get(((void*)(&tmp_chpl17)), chpl_nodeFromLocaleID((chpl_macro_tmp_1827).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1827).addr, sizeof(int64_t), COMMID(2), INT64(271), INT64(47));
  ret_chpl = tmp_chpl17;
  if (ret_chpl > INT64(0)) {
    (x_chpl2)->buffLen = ret_chpl;
    if (call_tmp_chpl37) {
      (x_chpl2)->isOwned = UINT8(true);
      chpl_macro_tmp_1828.locale = (other_chpl).locale;
      chpl_macro_tmp_1828.addr = &(((other_chpl).addr)->locale_id);
      chpl_gen_comm_get(((void*)(&tmp_chpl18)), chpl_nodeFromLocaleID((chpl_macro_tmp_1828).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1828).addr, sizeof(int32_t), COMMID(3), INT64(278), INT64(47));
      chpl_macro_tmp_1829.locale = (other_chpl).locale;
      chpl_macro_tmp_1829.addr = &(((other_chpl).addr)->buff);
      chpl_gen_comm_get(((void*)(&tmp_chpl19)), chpl_nodeFromLocaleID((chpl_macro_tmp_1829).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1829).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(4), INT64(278), INT64(47));
      call_tmp_chpl38 = bufferCopyRemote_chpl(((int64_t)(tmp_chpl18)), tmp_chpl19, ret_chpl);
      (x_chpl2)->buff = call_tmp_chpl38;
      (x_chpl2)->buffLen = ((int64_t)((ret_chpl + INT64(1))));
      chpl_macro_tmp_1830.locale = (other_chpl).locale;
      chpl_macro_tmp_1830.addr = &(((other_chpl).addr)->cachedNumCodepoints);
      chpl_gen_comm_get(((void*)(&tmp_chpl20)), chpl_nodeFromLocaleID((chpl_macro_tmp_1830).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1830).addr, sizeof(int64_t), COMMID(5), INT64(280), INT64(47));
      (x_chpl2)->cachedNumCodepoints = tmp_chpl20;
    } else {
      chpl_macro_tmp_1831.locale = (other_chpl).locale;
      chpl_macro_tmp_1831.addr = &(((other_chpl).addr)->buff);
      chpl_gen_comm_get(((void*)(&tmp_chpl21)), chpl_nodeFromLocaleID((chpl_macro_tmp_1831).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1831).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(6), INT64(284), INT64(47));
      (x_chpl2)->buff = tmp_chpl21;
      chpl_macro_tmp_1832.locale = (other_chpl).locale;
      chpl_macro_tmp_1832.addr = &(((other_chpl).addr)->buffSize);
      chpl_gen_comm_get(((void*)(&tmp_chpl22)), chpl_nodeFromLocaleID((chpl_macro_tmp_1832).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1832).addr, sizeof(int64_t), COMMID(7), INT64(285), INT64(47));
      (x_chpl2)->buffSize = tmp_chpl22;
      chpl_macro_tmp_1833.locale = (other_chpl).locale;
      chpl_macro_tmp_1833.addr = &(((other_chpl).addr)->cachedNumCodepoints);
      chpl_gen_comm_get(((void*)(&tmp_chpl23)), chpl_nodeFromLocaleID((chpl_macro_tmp_1833).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1833).addr, sizeof(int64_t), COMMID(8), INT64(286), INT64(47));
      (x_chpl2)->cachedNumCodepoints = tmp_chpl23;
    }
  }
  return;
}

/* BytesStringCommon.chpl:291 */
static void initWithBorrowedBuffer_chpl2(string_chpl * x_chpl2,
                                         uint8_t * other_chpl,
                                         int64_t length_chpl,
                                         int64_t size_chpl3) {
  (x_chpl2)->isOwned = UINT8(false);
  (x_chpl2)->buff = other_chpl;
  (x_chpl2)->buffSize = size_chpl3;
  (x_chpl2)->buffLen = length_chpl;
  return;
}

/* BytesStringCommon.chpl:291 */
static void initWithBorrowedBuffer_chpl3(bytes_chpl * x_chpl2,
                                         uint8_t * other_chpl,
                                         int64_t length_chpl,
                                         int64_t size_chpl3) {
  (x_chpl2)->isOwned = UINT8(false);
  (x_chpl2)->buff = other_chpl;
  (x_chpl2)->buffSize = size_chpl3;
  (x_chpl2)->buffLen = length_chpl;
  return;
}

/* BytesStringCommon.chpl:341 */
static void initWithNewBuffer_chpl(string_chpl * x_chpl2,
                                   uint8_t * other_chpl,
                                   int64_t length_chpl,
                                   int64_t size_chpl3) {
  _tuple_2_c_ptr_uint8_t_int64_t_chpl call_tmp_chpl36;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl ret_chpl;
  int64_t call_tmp_chpl37;
  int64_t tmp_chpl15;
  int16_t call_tmp_chpl38;
  c_void_ptr cast_tmp_chpl;
  c_ptr_uint8_t_chpl call_tmp_chpl39 = NULL;
  c_ptr_uint8_t_chpl dst_chpl = NULL;
  uint64_t call_tmp_chpl40;
  c_void_ptr coerce_tmp_chpl3;
  c_void_ptr coerce_tmp_chpl4;
  _ref_uint8_t_chpl call_tmp_chpl41 = NULL;
  int64_t tmp_x1_chpl;
  c_ptr_uint8_t_chpl coerce_tmp_chpl5 = NULL;
  int64_t coerce_tmp_chpl6;
  _ref_uint8_t_chpl call_tmp_chpl42 = NULL;
  (x_chpl2)->isOwned = UINT8(true);
  if (length_chpl > INT64(0)) {
    call_tmp_chpl37 = chpl_here_good_alloc_size(((int64_t)((length_chpl + INT64(1)))), INT64(349), INT32(47));
    if (call_tmp_chpl37 > INT64(0)) {
      tmp_chpl15 = call_tmp_chpl37;
    } else {
      tmp_chpl15 = INT64(0);
    }
    call_tmp_chpl38 = offset_STR_COPY_DATA_chpl();
    cast_tmp_chpl = chpl_here_alloc(tmp_chpl15, call_tmp_chpl38, INT64(349), INT32(47));
    call_tmp_chpl39 = ((c_ptr_uint8_t_chpl)(cast_tmp_chpl));
    dst_chpl = call_tmp_chpl39;
    call_tmp_chpl40 = ((uint64_t)(length_chpl));
    coerce_tmp_chpl3 = ((c_void_ptr)((call_tmp_chpl39 + INT64(0))));
    coerce_tmp_chpl4 = ((c_void_ptr)((other_chpl + INT64(0))));
    checkValue_chpl4();
    memcpy(coerce_tmp_chpl3, coerce_tmp_chpl4, call_tmp_chpl40);
    call_tmp_chpl41 = (dst_chpl + length_chpl);
    *(call_tmp_chpl41) = ((uint8_t)(INT64(0)));
    (&ret_chpl)->x0 = call_tmp_chpl39;
    (&ret_chpl)->x1 = tmp_chpl15;
    call_tmp_chpl36 = ret_chpl;
    tmp_x1_chpl = (&call_tmp_chpl36)->x1;
    (x_chpl2)->buff = (&call_tmp_chpl36)->x0;
    (x_chpl2)->buffLen = length_chpl;
    coerce_tmp_chpl5 = (x_chpl2)->buff;
    coerce_tmp_chpl6 = (x_chpl2)->buffLen;
    call_tmp_chpl42 = (coerce_tmp_chpl5 + coerce_tmp_chpl6);
    *(call_tmp_chpl42) = ((uint8_t)(INT64(0)));
    (x_chpl2)->buffSize = tmp_x1_chpl;
  }
  return;
}

/* BytesStringCommon.chpl:366 */
static void getView_chpl2(string_chpl * x_chpl2,
                          range_int64_t_bounded_F_chpl r_chpl,
                          Error_chpl * error_out_chpl,
                          _tuple_2_range_int64_t_bounded_F_int64_t_chpl * _retArg_chpl) {
  string_chpl local__str_literal_337_chpl;
  string_chpl local__str_literal_1304_chpl;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_chpl;
  int64_t ret_chpl2;
  int64_t tmp_chpl15;
  int64_t tmp_chpl16;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl call_tmp_chpl36;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_tmp_chpl;
  int64_t tmp_chpl17;
  int64_t call_tmp_chpl37;
  range_int64_t_bounded_F_chpl call_tmp_chpl38;
  range_int64_t_bounded_F_chpl ret_tmp_chpl2;
  chpl_bool call_tmp_chpl39;
  int64_t tmp_chpl18;
  int64_t call_tmp_chpl40;
  range_int64_t_bounded_F_chpl call_tmp_chpl41;
  range_int64_t_bounded_F_chpl ret_tmp_chpl3;
  int64_t coerce_tmp_chpl3;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_tmp_chpl4;
  range_int64_t_bounded_F_chpl intR_chpl;
  range_int64_t_bounded_F_chpl call_tmp_chpl42;
  int64_t tmp_chpl19;
  int64_t call_tmp_chpl43;
  range_int64_t_bounded_F_chpl call_tmp_chpl44;
  range_int64_t_bounded_F_chpl ret_tmp_chpl5;
  range_int64_t_bounded_F_chpl boundedOther_chpl;
  int64_t call_tmp_chpl45;
  range_int64_t_bounded_F_chpl call_tmp_chpl46;
  range_int64_t_bounded_F_chpl initTemp_chpl;
  uint64_t call_tmp_chpl47;
  chpl_bool tmp_chpl20;
  chpl_bool tmp_chpl21;
  chpl_bool ret_chpl3;
  uint64_t call_tmp_chpl48;
  chpl_bool tmp_chpl22;
  uint64_t call_tmp_chpl49;
  chpl_bool tmp_chpl23;
  range_int64_t_bounded_F_chpl call_tmp_chpl50;
  range_int64_t_bounded_F_chpl ret_tmp_chpl6;
  chpl_bool call_tmp_chpl51;
  int64_t tmp_chpl24;
  int64_t cpCount_chpl;
  int64_t cpIdxLow_chpl;
  int64_t tmp_chpl25;
  int64_t cpIdxHigh_chpl;
  int64_t ret_chpl4;
  int64_t byteLow_chpl;
  int64_t byteHigh_chpl;
  byteIndex_chpl default_arg_start_chpl4;
  byteIndex_chpl ret_chpl5;
  byteIndex_chpl cpi_chpl;
  string_chpl ret_chpl6;
  int32_t call_tmp_chpl52;
  string_chpl ret_chpl7;
  string_chpl ret_chpl8;
  chpl____wide__ref_string tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl x_chpl3;
  chpl____wide__ref_string tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl localThis_chpl;
  int64_t ret_chpl9;
  int64_t i_chpl;
  chpl_bool tmp_chpl28;
  chpl_bool tmp_chpl29;
  c_ptr_uint8_t_chpl coerce_tmp_chpl4 = NULL;
  _ref_uint8_t_chpl call_tmp_chpl53 = NULL;
  _ref_int64_t_chpl i_lhs_chpl = NULL;
  chpl_bool tmp_chpl30;
  c_ptr_uint8_t_chpl coerce_tmp_chpl5 = NULL;
  _ref_uint8_t_chpl call_tmp_chpl54 = NULL;
  chpl_bool tmp_chpl31;
  int64_t call_tmp_chpl55;
  int64_t j_chpl;
  chpl_bool tmp_chpl32;
  chpl_bool tmp_chpl33;
  c_ptr_uint8_t_chpl coerce_tmp_chpl6 = NULL;
  _ref_uint8_t_chpl call_tmp_chpl56 = NULL;
  _ref_int64_t_chpl i_lhs_chpl2 = NULL;
  chpl_bool tmp_chpl34;
  c_ptr_uint8_t_chpl coerce_tmp_chpl7 = NULL;
  _ref_uint8_t_chpl call_tmp_chpl57 = NULL;
  byteIndex_chpl call_tmp_chpl58;
  byteIndex_chpl ret_chpl10;
  byteIndex_chpl cpi_chpl2;
  int64_t call_tmp_chpl59;
  _tuple_2__ref_byteIndex_int64_t_chpl call_tmp_chpl60;
  _tuple_2__ref_byteIndex_int64_t_chpl ret_tmp_chpl7;
  _ref_byteIndex_chpl i__e0_x_chpl = NULL;
  _ref_byteIndex_chpl _yieldedIndex_x0_chpl = NULL;
  int64_t _yieldedIndex_x1_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl35 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t_chpl i_lhs_chpl3 = NULL;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl call_tmp_chpl61;
  range_int64_t_bounded_F_chpl ret_tmp_chpl8;
  int64_t call_tmp_chpl62;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_tmp_chpl9;
  chpl____wide__ref_string chpl_macro_tmp_1834;
  chpl____wide__ref_string chpl_macro_tmp_1835;
  chpl____wide__ref_string chpl_macro_tmp_1836;
  chpl____wide__ref_string chpl_macro_tmp_1837;
  local__str_literal_337_chpl = _str_literal_337_chpl /* " out of bounds for string with length " */;
  local__str_literal_1304_chpl = _str_literal_1304_chpl /* "range " */;
  tmp_chpl15 = (x_chpl2)->cachedNumCodepoints;
  ret_chpl2 = tmp_chpl15;
  tmp_chpl16 = (x_chpl2)->buffLen;
  if (ret_chpl2 == tmp_chpl16) {
    simpleCaseHelper_chpl5(x_chpl2, r_chpl, &ret_tmp_chpl);
    call_tmp_chpl36 = ret_tmp_chpl;
    ret_chpl = call_tmp_chpl36;
    goto _end_getView_chpl;
  } else {
    tmp_chpl17 = (x_chpl2)->cachedNumCodepoints;
    call_tmp_chpl37 = chpl__nudgeHighBound(tmp_chpl17);
    chpl_build_bounded_range(INT64(0), call_tmp_chpl37, &ret_tmp_chpl2);
    call_tmp_chpl38 = ret_tmp_chpl2;
    call_tmp_chpl39 = chpl___EQUALS_2(r_chpl, call_tmp_chpl38);
    if (call_tmp_chpl39) {
      tmp_chpl18 = (x_chpl2)->buffLen;
      call_tmp_chpl40 = chpl__nudgeHighBound(tmp_chpl18);
      chpl_build_bounded_range(INT64(0), call_tmp_chpl40, &ret_tmp_chpl3);
      call_tmp_chpl41 = ret_tmp_chpl3;
      coerce_tmp_chpl3 = (x_chpl2)->cachedNumCodepoints;
      (&ret_tmp_chpl4)->x0 = call_tmp_chpl41;
      (&ret_tmp_chpl4)->x1 = coerce_tmp_chpl3;
      ret_chpl = ret_tmp_chpl4;
      goto _end_getView_chpl;
    }
    intR_chpl = r_chpl;
    tmp_chpl19 = (x_chpl2)->cachedNumCodepoints;
    call_tmp_chpl43 = chpl__nudgeHighBound(tmp_chpl19);
    chpl_build_bounded_range(INT64(0), call_tmp_chpl43, &ret_tmp_chpl5);
    call_tmp_chpl44 = ret_tmp_chpl5;
    call_tmp_chpl42 = call_tmp_chpl44;
    call_tmp_chpl45 = alignment_chpl2(r_chpl);
    init_chpl36(&initTemp_chpl, (&intR_chpl)->_low, (&intR_chpl)->_high, INT64(1), call_tmp_chpl45, UINT8(true));
    call_tmp_chpl46 = initTemp_chpl;
    boundedOther_chpl = call_tmp_chpl46;
    call_tmp_chpl47 = sizeAs_chpl4(call_tmp_chpl46);
    if (! (INT64(0) < INT64(0))) {
      tmp_chpl20 = (call_tmp_chpl47 == ((uint64_t)(INT64(0))));
    } else {
      tmp_chpl20 = UINT8(false);
    }
    if (tmp_chpl20) {
      tmp_chpl21 = UINT8(true);
    } else {
      call_tmp_chpl48 = sizeAs_chpl4(call_tmp_chpl44);
      if (! (INT64(0) < INT64(0))) {
        tmp_chpl22 = (call_tmp_chpl48 == ((uint64_t)(INT64(0))));
      } else {
        tmp_chpl22 = UINT8(false);
      }
      if (tmp_chpl22) {
        call_tmp_chpl49 = sizeAs_chpl4(boundedOther_chpl);
        if (! (INT64(0) < INT64(0))) {
          tmp_chpl23 = (call_tmp_chpl49 == ((uint64_t)(INT64(0))));
        } else {
          tmp_chpl23 = UINT8(false);
        }
        ret_chpl3 = tmp_chpl23;
        goto _end_contains_chpl;
      }
      this_chpl2(call_tmp_chpl42, boundedOther_chpl, &ret_tmp_chpl6);
      call_tmp_chpl50 = ret_tmp_chpl6;
      call_tmp_chpl51 = chpl___EQUALS_2(boundedOther_chpl, call_tmp_chpl50);
      ret_chpl3 = call_tmp_chpl51;
      _end_contains_chpl:;
      tmp_chpl21 = ret_chpl3;
    }
    if (! tmp_chpl21) {
      tmp_chpl24 = (x_chpl2)->cachedNumCodepoints;
      halt_chpl8(&local__str_literal_1304_chpl, r_chpl, &local__str_literal_337_chpl, tmp_chpl24, INT64(434), INT32(47));
    }
    cpCount_chpl = INT64(0);
    if ((&intR_chpl)->_low >= INT64(0)) {
      tmp_chpl25 = (&intR_chpl)->_low;
    } else {
      tmp_chpl25 = INT64(0);
    }
    cpIdxLow_chpl = tmp_chpl25;
    ret_chpl4 = (&intR_chpl)->_high;
    cpIdxHigh_chpl = ret_chpl4;
    byteLow_chpl = (x_chpl2)->buffLen;
    byteHigh_chpl = ((int64_t)(((x_chpl2)->buffLen - INT64(1))));
    if (ret_chpl4 >= INT64(0)) {
      init_chpl71(&cpi_chpl);
      (&cpi_chpl)->_bindex = INT64(0);
      ret_chpl5 = cpi_chpl;
      default_arg_start_chpl4 = ret_chpl5;
      call_tmp_chpl52 = get_chpl_nodeID();
      if ((x_chpl2)->locale_id == call_tmp_chpl52) {
        init_chpl73(&ret_chpl8);
        (&ret_chpl8)->cachedNumCodepoints = (x_chpl2)->cachedNumCodepoints;
        chpl_macro_tmp_1834.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1834.addr = x_chpl2;
        tmp_chpl26 = chpl_macro_tmp_1834;
        initWithBorrowedBuffer_chpl(&ret_chpl8, tmp_chpl26);
        ret_chpl7 = ret_chpl8;
        ret_chpl6 = ret_chpl7;
        goto _end_localize_chpl;
      } else {
        chpl_macro_tmp_1835.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1835.addr = x_chpl2;
        tmp_chpl27 = chpl_macro_tmp_1835;
        init_ASSIGN__chpl21(&x_chpl3, tmp_chpl27);
        ret_chpl6 = x_chpl3;
        goto _end_localize_chpl;
      }
      _end_localize_chpl:;
      localThis_chpl = ret_chpl6;
      ret_chpl9 = (&default_arg_start_chpl4)->_bindex;
      i_chpl = ret_chpl9;
      if (ret_chpl9 > INT64(0)) {
        if (ret_chpl9 < (&localThis_chpl)->buffLen) {
          coerce_tmp_chpl4 = (&localThis_chpl)->buff;
          call_tmp_chpl53 = (coerce_tmp_chpl4 + ret_chpl9);
          tmp_chpl29 = (! ((*(call_tmp_chpl53) & ((uint8_t)(INT64(192)))) != ((uint8_t)(INT64(128)))));
        } else {
          tmp_chpl29 = UINT8(false);
        }
        tmp_chpl28 = tmp_chpl29;
        while (tmp_chpl28) {
          i_lhs_chpl = &i_chpl;
          *(i_lhs_chpl) += INT64(1);
          if (i_chpl < (&localThis_chpl)->buffLen) {
            coerce_tmp_chpl5 = (&localThis_chpl)->buff;
            call_tmp_chpl54 = (coerce_tmp_chpl5 + i_chpl);
            tmp_chpl30 = (! ((*(call_tmp_chpl54) & ((uint8_t)(INT64(192)))) != ((uint8_t)(INT64(128)))));
          } else {
            tmp_chpl30 = UINT8(false);
          }
          tmp_chpl28 = tmp_chpl30;
        }
      }
      tmp_chpl31 = (i_chpl < (&localThis_chpl)->buffLen);
      while (tmp_chpl31) {
        call_tmp_chpl55 = (i_chpl + INT64(1));
        j_chpl = call_tmp_chpl55;
        if (call_tmp_chpl55 < (&localThis_chpl)->buffLen) {
          coerce_tmp_chpl6 = (&localThis_chpl)->buff;
          call_tmp_chpl56 = (coerce_tmp_chpl6 + call_tmp_chpl55);
          tmp_chpl33 = (! ((*(call_tmp_chpl56) & ((uint8_t)(INT64(192)))) != ((uint8_t)(INT64(128)))));
        } else {
          tmp_chpl33 = UINT8(false);
        }
        tmp_chpl32 = tmp_chpl33;
        while (tmp_chpl32) {
          i_lhs_chpl2 = &j_chpl;
          *(i_lhs_chpl2) += INT64(1);
          if (j_chpl < (&localThis_chpl)->buffLen) {
            coerce_tmp_chpl7 = (&localThis_chpl)->buff;
            call_tmp_chpl57 = (coerce_tmp_chpl7 + j_chpl);
            tmp_chpl34 = (! ((*(call_tmp_chpl57) & ((uint8_t)(INT64(192)))) != ((uint8_t)(INT64(128)))));
          } else {
            tmp_chpl34 = UINT8(false);
          }
          tmp_chpl32 = tmp_chpl34;
        }
        init_chpl71(&cpi_chpl2);
        (&cpi_chpl2)->_bindex = i_chpl;
        ret_chpl10 = cpi_chpl2;
        call_tmp_chpl58 = ret_chpl10;
        call_tmp_chpl59 = (j_chpl - i_chpl);
        i__e0_x_chpl = &call_tmp_chpl58;
        (&ret_tmp_chpl7)->x0 = i__e0_x_chpl;
        (&ret_tmp_chpl7)->x1 = call_tmp_chpl59;
        call_tmp_chpl60 = ret_tmp_chpl7;
        _yieldedIndex_x0_chpl = (&call_tmp_chpl60)->x0;
        _yieldedIndex_x1_chpl = (&call_tmp_chpl60)->x1;
        if (cpCount_chpl == cpIdxLow_chpl) {
          byteLow_chpl = (_yieldedIndex_x0_chpl)->_bindex;
        }
        if (cpCount_chpl == cpIdxHigh_chpl) {
          byteHigh_chpl = ((int64_t)((((int64_t)(((_yieldedIndex_x0_chpl)->_bindex + _yieldedIndex_x1_chpl))) - INT64(1))));
          i_x_chpl = &localThis_chpl;
          chpl_macro_tmp_1836.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_1836.addr = i_x_chpl;
          tmp_chpl35 = chpl_macro_tmp_1836;
          deinit_chpl42(tmp_chpl35);
          goto _breakLabel_chpl;
        }
        i_lhs_chpl3 = &cpCount_chpl;
        *(i_lhs_chpl3) += INT64(1);
        i_chpl = j_chpl;
        tmp_chpl31 = (i_chpl < (&localThis_chpl)->buffLen);
      }
      i_x_chpl2 = &localThis_chpl;
      chpl_macro_tmp_1837.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1837.addr = i_x_chpl2;
      tmp_chpl36 = chpl_macro_tmp_1837;
      deinit_chpl42(tmp_chpl36);
      _breakLabel_chpl:;
    }
    chpl_build_bounded_range(byteLow_chpl, byteHigh_chpl, &ret_tmp_chpl8);
    call_tmp_chpl61 = ret_tmp_chpl8;
    call_tmp_chpl62 = (((int64_t)((cpIdxHigh_chpl - cpIdxLow_chpl))) + INT64(1));
    (&ret_tmp_chpl9)->x0 = call_tmp_chpl61;
    (&ret_tmp_chpl9)->x1 = call_tmp_chpl62;
    ret_chpl = ret_tmp_chpl9;
    goto _end_getView_chpl;
  }
  _end_getView_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* BytesStringCommon.chpl:366 */
static void getView_chpl3(string_chpl * x_chpl2,
                          range_byteIndex_bounded_F_chpl r_chpl,
                          chpl____wide_Error * error_out_chpl,
                          _tuple_2_range_int64_t_bounded_F_int64_t_chpl * _retArg_chpl) {
  string_chpl local__str_literal_3344_chpl;
  string_chpl local__str_literal_75_chpl;
  string_chpl local__str_literal_1309_chpl;
  string_chpl local__str_literal_3342_chpl;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_chpl;
  range_int64_t_bounded_F_chpl call_tmp_chpl36;
  int64_t tmp_chpl15;
  int64_t call_tmp_chpl37;
  range_int64_t_bounded_F_chpl call_tmp_chpl38;
  range_int64_t_bounded_F_chpl ret_tmp_chpl;
  byteIndex_chpl call_tmp_chpl39;
  int64_t coerce_tmp_chpl3;
  byteIndex_chpl ret_chpl2;
  byteIndex_chpl cpi_chpl;
  int64_t ret_chpl3;
  chpl_bool ret_chpl4;
  chpl_bool tmp_chpl16;
  byteIndex_chpl call_tmp_chpl40;
  int64_t coerce_tmp_chpl4;
  byteIndex_chpl ret_chpl5;
  byteIndex_chpl cpi_chpl2;
  uint8_t call_tmp_chpl41;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  byteIndex_chpl call_tmp_chpl42;
  int64_t coerce_tmp_chpl5;
  byteIndex_chpl ret_chpl6;
  byteIndex_chpl cpi_chpl3;
  string_chpl call_tmp_chpl43;
  string_chpl ret_tmp_chpl2;
  string_chpl call_tmp_chpl44;
  string_chpl ret_tmp_chpl3;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl45;
  string_chpl ret_tmp_chpl4;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_CodepointSplittingError_chpl call_tmp_chpl46;
  CodepointSplittingError_chpl new_temp_chpl = NULL;
  _owned_CodepointSplittingError_chpl initTemp_chpl;
  chpl____wide_Error call_tmp_chpl47 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 coerce_tmp_chpl6;
  _owned_Error_chpl2 ret_tmp_chpl5;
  _ref__owned_CodepointSplittingError_chpl i_x_chpl = NULL;
  _ref__owned_Error_chpl2 i__retArg_chpl = NULL;
  _owned_CodepointSplittingError_chpl _formal_tmp_x_chpl;
  _owned_Error_chpl2 ret_chpl7;
  _ref__owned_CodepointSplittingError_chpl i_this_chpl = NULL;
  Error_chpl call_tmp_chpl48 = NULL;
  _ref__owned_CodepointSplittingError_chpl i_this_chpl2 = NULL;
  _owned_Error_chpl2 call_tmp_chpl49;
  _owned_Error_chpl2 initTemp_chpl2;
  chpl____wide_Error tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 _formal_tmp_in_err_chpl;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl call_tmp_chpl50;
  int64_t tmp_chpl24;
  int64_t call_tmp_chpl51;
  range_int64_t_bounded_F_chpl call_tmp_chpl52;
  range_int64_t_bounded_F_chpl ret_tmp_chpl6;
  byteIndex_chpl call_tmp_chpl53;
  int64_t coerce_tmp_chpl7;
  byteIndex_chpl ret_chpl8;
  byteIndex_chpl cpi_chpl4;
  int64_t call_tmp_chpl54;
  chpl_bool ret_chpl9;
  chpl_bool tmp_chpl25;
  byteIndex_chpl call_tmp_chpl55;
  int64_t coerce_tmp_chpl8;
  byteIndex_chpl ret_chpl10;
  byteIndex_chpl cpi_chpl5;
  uint8_t call_tmp_chpl56;
  chpl____wide__ref_string tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  byteIndex_chpl call_tmp_chpl57;
  int64_t coerce_tmp_chpl9;
  byteIndex_chpl ret_chpl11;
  byteIndex_chpl cpi_chpl6;
  string_chpl call_tmp_chpl58;
  string_chpl ret_tmp_chpl7;
  string_chpl call_tmp_chpl59;
  string_chpl ret_tmp_chpl8;
  chpl____wide__ref_string tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl60;
  string_chpl ret_tmp_chpl9;
  chpl____wide__ref_string tmp_chpl28 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_CodepointSplittingError_chpl call_tmp_chpl61;
  CodepointSplittingError_chpl new_temp_chpl2 = NULL;
  _owned_CodepointSplittingError_chpl initTemp_chpl3;
  chpl____wide_Error call_tmp_chpl62 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 coerce_tmp_chpl10;
  _owned_Error_chpl2 ret_tmp_chpl10;
  _ref__owned_CodepointSplittingError_chpl i_x_chpl5 = NULL;
  _ref__owned_Error_chpl2 i__retArg_chpl2 = NULL;
  _owned_CodepointSplittingError_chpl _formal_tmp_x_chpl2;
  _owned_Error_chpl2 ret_chpl12;
  _ref__owned_CodepointSplittingError_chpl i_this_chpl3 = NULL;
  Error_chpl call_tmp_chpl63 = NULL;
  _ref__owned_CodepointSplittingError_chpl i_this_chpl4 = NULL;
  _owned_Error_chpl2 call_tmp_chpl64;
  _owned_Error_chpl2 initTemp_chpl4;
  chpl____wide_Error tmp_chpl29 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 _formal_tmp_in_err_chpl2;
  _ref_string_chpl i_x_chpl6 = NULL;
  chpl____wide__ref_string tmp_chpl30 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl7 = NULL;
  chpl____wide__ref_string tmp_chpl31 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl8 = NULL;
  chpl____wide__ref_string tmp_chpl32 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl call_tmp_chpl65;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_tmp_chpl11;
  chpl____wide__ref_string chpl_macro_tmp_1838;
  chpl____wide__ref_string chpl_macro_tmp_1839;
  chpl____wide__ref_string chpl_macro_tmp_1840;
  chpl____wide_Error chpl_macro_tmp_1841;
  chpl____wide__ref_string chpl_macro_tmp_1842;
  chpl____wide__ref_string chpl_macro_tmp_1843;
  chpl____wide__ref_string chpl_macro_tmp_1844;
  chpl____wide__ref_string chpl_macro_tmp_1845;
  chpl____wide__ref_string chpl_macro_tmp_1846;
  chpl____wide__ref_string chpl_macro_tmp_1847;
  chpl____wide_Error chpl_macro_tmp_1848;
  chpl____wide__ref_string chpl_macro_tmp_1849;
  chpl____wide__ref_string chpl_macro_tmp_1850;
  chpl____wide__ref_string chpl_macro_tmp_1851;
  local__str_literal_3344_chpl = _str_literal_3344_chpl /* "Byte-based string slice is not aligned to codepoint boundaries. The byte at high boundary " */;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  local__str_literal_1309_chpl = _str_literal_1309_chpl /* " is not the first byte of a UTF-8 codepoint" */;
  local__str_literal_3342_chpl = _str_literal_3342_chpl /* "Byte-based string slice is not aligned to codepoint boundaries. The byte at low boundary " */;
  tmp_chpl15 = (x_chpl2)->buffLen;
  call_tmp_chpl37 = chpl__nudgeHighBound(tmp_chpl15);
  chpl_build_bounded_range(INT64(0), call_tmp_chpl37, &ret_tmp_chpl);
  call_tmp_chpl38 = ret_tmp_chpl;
  call_tmp_chpl36 = call_tmp_chpl38;
  coerce_tmp_chpl3 = (&r_chpl)->_low;
  init_chpl71(&cpi_chpl);
  (&cpi_chpl)->_bindex = coerce_tmp_chpl3;
  ret_chpl2 = cpi_chpl;
  call_tmp_chpl39 = ret_chpl2;
  ret_chpl3 = (&call_tmp_chpl39)->_bindex;
  if (ret_chpl3 > (&call_tmp_chpl36)->_high) {
    ret_chpl4 = UINT8(false);
    goto _end_contains_chpl;
  }
  if (ret_chpl3 < (&call_tmp_chpl36)->_low) {
    ret_chpl4 = UINT8(false);
    goto _end_contains_chpl;
  }
  ret_chpl4 = UINT8(true);
  _end_contains_chpl:;
  if (ret_chpl4) {
    coerce_tmp_chpl4 = (&r_chpl)->_low;
    init_chpl71(&cpi_chpl2);
    (&cpi_chpl2)->_bindex = coerce_tmp_chpl4;
    ret_chpl5 = cpi_chpl2;
    call_tmp_chpl40 = ret_chpl5;
    chpl_macro_tmp_1838.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1838.addr = x_chpl2;
    tmp_chpl17 = chpl_macro_tmp_1838;
    call_tmp_chpl41 = byte_chpl(tmp_chpl17, (&call_tmp_chpl40)->_bindex);
    tmp_chpl16 = (! ((call_tmp_chpl41 & ((uint8_t)(INT64(192)))) != ((uint8_t)(INT64(128)))));
  } else {
    tmp_chpl16 = UINT8(false);
  }
  if (tmp_chpl16) {
    coerce_tmp_chpl5 = (&r_chpl)->_low;
    init_chpl71(&cpi_chpl3);
    (&cpi_chpl3)->_bindex = coerce_tmp_chpl5;
    ret_chpl6 = cpi_chpl3;
    call_tmp_chpl42 = ret_chpl6;
    chpl___COLON_11(&call_tmp_chpl42, &ret_tmp_chpl2);
    call_tmp_chpl43 = ret_tmp_chpl2;
    chpl_macro_tmp_1839.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1839.addr = &call_tmp_chpl43;
    tmp_chpl18 = chpl_macro_tmp_1839;
    chpl___PLUS_(&local__str_literal_3342_chpl, tmp_chpl18, &ret_tmp_chpl3);
    call_tmp_chpl44 = ret_tmp_chpl3;
    chpl_macro_tmp_1840.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1840.addr = &local__str_literal_1309_chpl;
    tmp_chpl19 = chpl_macro_tmp_1840;
    chpl___PLUS_(&call_tmp_chpl44, tmp_chpl19, &ret_tmp_chpl4);
    call_tmp_chpl45 = ret_tmp_chpl4;
    new_temp_chpl = _new_chpl16(&call_tmp_chpl45, INT64(398), INT32(47));
    init_chpl51(&initTemp_chpl, new_temp_chpl);
    call_tmp_chpl46 = initTemp_chpl;
    i_x_chpl = &call_tmp_chpl46;
    i__retArg_chpl = &ret_tmp_chpl5;
    _formal_tmp_x_chpl = *(i_x_chpl);
    i_this_chpl = &_formal_tmp_x_chpl;
    call_tmp_chpl48 = ((Error_chpl)((i_this_chpl)->chpl_p));
    i_this_chpl2 = &_formal_tmp_x_chpl;
    (i_this_chpl2)->chpl_p = ((CodepointSplittingError_chpl)(nil));
    if (((object_chpl)(call_tmp_chpl48)) == nil) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(398), INT32(47));
    }
    chpl_macro_tmp_1841.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1841.addr = call_tmp_chpl48;
    tmp_chpl20 = chpl_macro_tmp_1841;
    init_chpl68(&initTemp_chpl2, tmp_chpl20);
    call_tmp_chpl49 = initTemp_chpl2;
    ret_chpl7 = call_tmp_chpl49;
    chpl__autoDestroy23(&_formal_tmp_x_chpl);
    *(i__retArg_chpl) = ret_chpl7;
    coerce_tmp_chpl6 = ret_tmp_chpl5;
    _formal_tmp_in_err_chpl = coerce_tmp_chpl6;
    call_tmp_chpl47 = chpl_fix_thrown_error(&_formal_tmp_in_err_chpl, INT64(398), INT32(47));
    *(error_out_chpl) = call_tmp_chpl47;
    i_x_chpl2 = &call_tmp_chpl45;
    chpl_macro_tmp_1842.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1842.addr = i_x_chpl2;
    tmp_chpl21 = chpl_macro_tmp_1842;
    deinit_chpl42(tmp_chpl21);
    i_x_chpl3 = &call_tmp_chpl44;
    chpl_macro_tmp_1843.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1843.addr = i_x_chpl3;
    tmp_chpl22 = chpl_macro_tmp_1843;
    deinit_chpl42(tmp_chpl22);
    i_x_chpl4 = &call_tmp_chpl43;
    chpl_macro_tmp_1844.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1844.addr = i_x_chpl4;
    tmp_chpl23 = chpl_macro_tmp_1844;
    deinit_chpl42(tmp_chpl23);
    goto _end_getView_chpl;
  }
  tmp_chpl24 = (x_chpl2)->buffLen;
  call_tmp_chpl51 = chpl__nudgeHighBound(tmp_chpl24);
  chpl_build_bounded_range(INT64(0), call_tmp_chpl51, &ret_tmp_chpl6);
  call_tmp_chpl52 = ret_tmp_chpl6;
  call_tmp_chpl50 = call_tmp_chpl52;
  coerce_tmp_chpl7 = (&r_chpl)->_high;
  init_chpl71(&cpi_chpl4);
  (&cpi_chpl4)->_bindex = coerce_tmp_chpl7;
  ret_chpl8 = cpi_chpl4;
  call_tmp_chpl53 = ret_chpl8;
  call_tmp_chpl54 = ((&call_tmp_chpl53)->_bindex + INT64(1));
  if (call_tmp_chpl54 > (&call_tmp_chpl50)->_high) {
    ret_chpl9 = UINT8(false);
    goto _end_contains_chpl2;
  }
  if (call_tmp_chpl54 < (&call_tmp_chpl50)->_low) {
    ret_chpl9 = UINT8(false);
    goto _end_contains_chpl2;
  }
  ret_chpl9 = UINT8(true);
  _end_contains_chpl2:;
  if (ret_chpl9) {
    coerce_tmp_chpl8 = (&r_chpl)->_high;
    init_chpl71(&cpi_chpl5);
    (&cpi_chpl5)->_bindex = coerce_tmp_chpl8;
    ret_chpl10 = cpi_chpl5;
    call_tmp_chpl55 = ret_chpl10;
    chpl_macro_tmp_1845.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1845.addr = x_chpl2;
    tmp_chpl26 = chpl_macro_tmp_1845;
    call_tmp_chpl56 = byte_chpl(tmp_chpl26, ((int64_t)(((&call_tmp_chpl55)->_bindex + INT64(1)))));
    tmp_chpl25 = (! ((call_tmp_chpl56 & ((uint8_t)(INT64(192)))) != ((uint8_t)(INT64(128)))));
  } else {
    tmp_chpl25 = UINT8(false);
  }
  if (tmp_chpl25) {
    coerce_tmp_chpl9 = (&r_chpl)->_high;
    init_chpl71(&cpi_chpl6);
    (&cpi_chpl6)->_bindex = coerce_tmp_chpl9;
    ret_chpl11 = cpi_chpl6;
    call_tmp_chpl57 = ret_chpl11;
    chpl___COLON_11(&call_tmp_chpl57, &ret_tmp_chpl7);
    call_tmp_chpl58 = ret_tmp_chpl7;
    chpl_macro_tmp_1846.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1846.addr = &call_tmp_chpl58;
    tmp_chpl27 = chpl_macro_tmp_1846;
    chpl___PLUS_(&local__str_literal_3344_chpl, tmp_chpl27, &ret_tmp_chpl8);
    call_tmp_chpl59 = ret_tmp_chpl8;
    chpl_macro_tmp_1847.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1847.addr = &local__str_literal_1309_chpl;
    tmp_chpl28 = chpl_macro_tmp_1847;
    chpl___PLUS_(&call_tmp_chpl59, tmp_chpl28, &ret_tmp_chpl9);
    call_tmp_chpl60 = ret_tmp_chpl9;
    new_temp_chpl2 = _new_chpl16(&call_tmp_chpl60, INT64(407), INT32(47));
    init_chpl51(&initTemp_chpl3, new_temp_chpl2);
    call_tmp_chpl61 = initTemp_chpl3;
    i_x_chpl5 = &call_tmp_chpl61;
    i__retArg_chpl2 = &ret_tmp_chpl10;
    _formal_tmp_x_chpl2 = *(i_x_chpl5);
    i_this_chpl3 = &_formal_tmp_x_chpl2;
    call_tmp_chpl63 = ((Error_chpl)((i_this_chpl3)->chpl_p));
    i_this_chpl4 = &_formal_tmp_x_chpl2;
    (i_this_chpl4)->chpl_p = ((CodepointSplittingError_chpl)(nil));
    if (((object_chpl)(call_tmp_chpl63)) == nil) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(407), INT32(47));
    }
    chpl_macro_tmp_1848.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1848.addr = call_tmp_chpl63;
    tmp_chpl29 = chpl_macro_tmp_1848;
    init_chpl68(&initTemp_chpl4, tmp_chpl29);
    call_tmp_chpl64 = initTemp_chpl4;
    ret_chpl12 = call_tmp_chpl64;
    chpl__autoDestroy23(&_formal_tmp_x_chpl2);
    *(i__retArg_chpl2) = ret_chpl12;
    coerce_tmp_chpl10 = ret_tmp_chpl10;
    _formal_tmp_in_err_chpl2 = coerce_tmp_chpl10;
    call_tmp_chpl62 = chpl_fix_thrown_error(&_formal_tmp_in_err_chpl2, INT64(407), INT32(47));
    *(error_out_chpl) = call_tmp_chpl62;
    i_x_chpl6 = &call_tmp_chpl60;
    chpl_macro_tmp_1849.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1849.addr = i_x_chpl6;
    tmp_chpl30 = chpl_macro_tmp_1849;
    deinit_chpl42(tmp_chpl30);
    i_x_chpl7 = &call_tmp_chpl59;
    chpl_macro_tmp_1850.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1850.addr = i_x_chpl7;
    tmp_chpl31 = chpl_macro_tmp_1850;
    deinit_chpl42(tmp_chpl31);
    i_x_chpl8 = &call_tmp_chpl58;
    chpl_macro_tmp_1851.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1851.addr = i_x_chpl8;
    tmp_chpl32 = chpl_macro_tmp_1851;
    deinit_chpl42(tmp_chpl32);
    goto _end_getView_chpl;
  }
  simpleCaseHelper_chpl(x_chpl2, r_chpl, &ret_tmp_chpl11);
  call_tmp_chpl65 = ret_tmp_chpl11;
  ret_chpl = call_tmp_chpl65;
  _end_getView_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* BytesStringCommon.chpl:366 */
static void getView_chpl5(string_chpl * x_chpl2,
                          range_int64_t_boundedLow_F_chpl r_chpl,
                          Error_chpl * error_out_chpl,
                          _tuple_2_range_int64_t_bounded_F_int64_t_chpl * _retArg_chpl) {
  string_chpl local__str_literal_337_chpl;
  string_chpl local__str_literal_1304_chpl;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_chpl;
  int64_t ret_chpl2;
  int64_t tmp_chpl15;
  int64_t tmp_chpl16;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl call_tmp_chpl36;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_tmp_chpl;
  int64_t tmp_chpl17;
  int64_t call_tmp_chpl37;
  range_int64_t_bounded_F_chpl ret_tmp_chpl2;
  range_int64_t_boundedLow_F_chpl intR_chpl;
  range_int64_t_bounded_F_chpl call_tmp_chpl38;
  int64_t tmp_chpl18;
  int64_t call_tmp_chpl39;
  range_int64_t_bounded_F_chpl call_tmp_chpl40;
  range_int64_t_bounded_F_chpl ret_tmp_chpl3;
  range_int64_t_bounded_F_chpl boundedOther_chpl;
  int64_t call_tmp_chpl41;
  range_int64_t_bounded_F_chpl call_tmp_chpl42;
  range_int64_t_bounded_F_chpl initTemp_chpl;
  uint64_t call_tmp_chpl43;
  chpl_bool tmp_chpl19;
  chpl_bool tmp_chpl20;
  chpl_bool ret_chpl3;
  uint64_t call_tmp_chpl44;
  chpl_bool tmp_chpl21;
  uint64_t call_tmp_chpl45;
  chpl_bool tmp_chpl22;
  range_int64_t_bounded_F_chpl call_tmp_chpl46;
  range_int64_t_bounded_F_chpl ret_tmp_chpl4;
  chpl_bool call_tmp_chpl47;
  int64_t tmp_chpl23;
  int64_t cpCount_chpl;
  int64_t cpIdxLow_chpl;
  int64_t tmp_chpl24;
  int64_t cpIdxHigh_chpl;
  int64_t call_tmp_chpl48;
  int64_t byteLow_chpl;
  int64_t byteHigh_chpl;
  byteIndex_chpl default_arg_start_chpl4;
  byteIndex_chpl ret_chpl4;
  byteIndex_chpl cpi_chpl;
  string_chpl ret_chpl5;
  int32_t call_tmp_chpl49;
  string_chpl ret_chpl6;
  string_chpl ret_chpl7;
  chpl____wide__ref_string tmp_chpl25 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl x_chpl3;
  chpl____wide__ref_string tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl localThis_chpl;
  int64_t ret_chpl8;
  int64_t i_chpl;
  chpl_bool tmp_chpl27;
  chpl_bool tmp_chpl28;
  c_ptr_uint8_t_chpl coerce_tmp_chpl3 = NULL;
  _ref_uint8_t_chpl call_tmp_chpl50 = NULL;
  _ref_int64_t_chpl i_lhs_chpl = NULL;
  chpl_bool tmp_chpl29;
  c_ptr_uint8_t_chpl coerce_tmp_chpl4 = NULL;
  _ref_uint8_t_chpl call_tmp_chpl51 = NULL;
  chpl_bool tmp_chpl30;
  int64_t call_tmp_chpl52;
  int64_t j_chpl;
  chpl_bool tmp_chpl31;
  chpl_bool tmp_chpl32;
  c_ptr_uint8_t_chpl coerce_tmp_chpl5 = NULL;
  _ref_uint8_t_chpl call_tmp_chpl53 = NULL;
  _ref_int64_t_chpl i_lhs_chpl2 = NULL;
  chpl_bool tmp_chpl33;
  c_ptr_uint8_t_chpl coerce_tmp_chpl6 = NULL;
  _ref_uint8_t_chpl call_tmp_chpl54 = NULL;
  byteIndex_chpl call_tmp_chpl55;
  byteIndex_chpl ret_chpl9;
  byteIndex_chpl cpi_chpl2;
  int64_t call_tmp_chpl56;
  _tuple_2__ref_byteIndex_int64_t_chpl call_tmp_chpl57;
  _tuple_2__ref_byteIndex_int64_t_chpl ret_tmp_chpl5;
  _ref_byteIndex_chpl i__e0_x_chpl = NULL;
  _ref_byteIndex_chpl _yieldedIndex_x0_chpl = NULL;
  int64_t _yieldedIndex_x1_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl34 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl35 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t_chpl i_lhs_chpl3 = NULL;
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl call_tmp_chpl58;
  range_int64_t_bounded_F_chpl ret_tmp_chpl6;
  int64_t call_tmp_chpl59;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_tmp_chpl7;
  chpl____wide__ref_string chpl_macro_tmp_1852;
  chpl____wide__ref_string chpl_macro_tmp_1853;
  chpl____wide__ref_string chpl_macro_tmp_1854;
  chpl____wide__ref_string chpl_macro_tmp_1855;
  chpl____wide__ref_string chpl_macro_tmp_1856;
  local__str_literal_337_chpl = _str_literal_337_chpl /* " out of bounds for string with length " */;
  local__str_literal_1304_chpl = _str_literal_1304_chpl /* "range " */;
  tmp_chpl15 = (x_chpl2)->cachedNumCodepoints;
  ret_chpl2 = tmp_chpl15;
  tmp_chpl16 = (x_chpl2)->buffLen;
  if (ret_chpl2 == tmp_chpl16) {
    simpleCaseHelper_chpl2(x_chpl2, r_chpl, &ret_tmp_chpl);
    call_tmp_chpl36 = ret_tmp_chpl;
    ret_chpl = call_tmp_chpl36;
    goto _end_getView_chpl;
  } else {
    tmp_chpl17 = (x_chpl2)->cachedNumCodepoints;
    call_tmp_chpl37 = chpl__nudgeHighBound(tmp_chpl17);
    chpl_build_bounded_range(INT64(0), call_tmp_chpl37, &ret_tmp_chpl2);
    intR_chpl = r_chpl;
    tmp_chpl18 = (x_chpl2)->cachedNumCodepoints;
    call_tmp_chpl39 = chpl__nudgeHighBound(tmp_chpl18);
    chpl_build_bounded_range(INT64(0), call_tmp_chpl39, &ret_tmp_chpl3);
    call_tmp_chpl40 = ret_tmp_chpl3;
    call_tmp_chpl38 = call_tmp_chpl40;
    call_tmp_chpl41 = alignment_chpl(r_chpl);
    init_chpl36(&initTemp_chpl, (&intR_chpl)->_low, (&call_tmp_chpl38)->_high, INT64(1), call_tmp_chpl41, UINT8(true));
    call_tmp_chpl42 = initTemp_chpl;
    boundedOther_chpl = call_tmp_chpl42;
    call_tmp_chpl43 = sizeAs_chpl4(call_tmp_chpl42);
    if (! (INT64(0) < INT64(0))) {
      tmp_chpl19 = (call_tmp_chpl43 == ((uint64_t)(INT64(0))));
    } else {
      tmp_chpl19 = UINT8(false);
    }
    if (tmp_chpl19) {
      tmp_chpl20 = UINT8(true);
    } else {
      call_tmp_chpl44 = sizeAs_chpl4(call_tmp_chpl40);
      if (! (INT64(0) < INT64(0))) {
        tmp_chpl21 = (call_tmp_chpl44 == ((uint64_t)(INT64(0))));
      } else {
        tmp_chpl21 = UINT8(false);
      }
      if (tmp_chpl21) {
        call_tmp_chpl45 = sizeAs_chpl4(boundedOther_chpl);
        if (! (INT64(0) < INT64(0))) {
          tmp_chpl22 = (call_tmp_chpl45 == ((uint64_t)(INT64(0))));
        } else {
          tmp_chpl22 = UINT8(false);
        }
        ret_chpl3 = tmp_chpl22;
        goto _end_contains_chpl;
      }
      this_chpl2(call_tmp_chpl38, boundedOther_chpl, &ret_tmp_chpl4);
      call_tmp_chpl46 = ret_tmp_chpl4;
      call_tmp_chpl47 = chpl___EQUALS_2(boundedOther_chpl, call_tmp_chpl46);
      ret_chpl3 = call_tmp_chpl47;
      _end_contains_chpl:;
      tmp_chpl20 = ret_chpl3;
    }
    if (! tmp_chpl20) {
      tmp_chpl23 = (x_chpl2)->cachedNumCodepoints;
      halt_chpl9(&local__str_literal_1304_chpl, r_chpl, &local__str_literal_337_chpl, tmp_chpl23, INT64(434), INT32(47));
    }
    cpCount_chpl = INT64(0);
    if ((&intR_chpl)->_low >= INT64(0)) {
      tmp_chpl24 = (&intR_chpl)->_low;
    } else {
      tmp_chpl24 = INT64(0);
    }
    cpIdxLow_chpl = tmp_chpl24;
    call_tmp_chpl48 = ((x_chpl2)->buffLen - INT64(1));
    cpIdxHigh_chpl = call_tmp_chpl48;
    byteLow_chpl = (x_chpl2)->buffLen;
    byteHigh_chpl = ((int64_t)(((x_chpl2)->buffLen - INT64(1))));
    if (call_tmp_chpl48 >= INT64(0)) {
      init_chpl71(&cpi_chpl);
      (&cpi_chpl)->_bindex = INT64(0);
      ret_chpl4 = cpi_chpl;
      default_arg_start_chpl4 = ret_chpl4;
      call_tmp_chpl49 = get_chpl_nodeID();
      if ((x_chpl2)->locale_id == call_tmp_chpl49) {
        init_chpl73(&ret_chpl7);
        (&ret_chpl7)->cachedNumCodepoints = (x_chpl2)->cachedNumCodepoints;
        chpl_macro_tmp_1852.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1852.addr = x_chpl2;
        tmp_chpl25 = chpl_macro_tmp_1852;
        initWithBorrowedBuffer_chpl(&ret_chpl7, tmp_chpl25);
        ret_chpl6 = ret_chpl7;
        ret_chpl5 = ret_chpl6;
        goto _end_localize_chpl;
      } else {
        chpl_macro_tmp_1853.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1853.addr = x_chpl2;
        tmp_chpl26 = chpl_macro_tmp_1853;
        init_ASSIGN__chpl21(&x_chpl3, tmp_chpl26);
        ret_chpl5 = x_chpl3;
        goto _end_localize_chpl;
      }
      _end_localize_chpl:;
      localThis_chpl = ret_chpl5;
      ret_chpl8 = (&default_arg_start_chpl4)->_bindex;
      i_chpl = ret_chpl8;
      if (ret_chpl8 > INT64(0)) {
        if (ret_chpl8 < (&localThis_chpl)->buffLen) {
          coerce_tmp_chpl3 = (&localThis_chpl)->buff;
          call_tmp_chpl50 = (coerce_tmp_chpl3 + ret_chpl8);
          tmp_chpl28 = (! ((*(call_tmp_chpl50) & ((uint8_t)(INT64(192)))) != ((uint8_t)(INT64(128)))));
        } else {
          tmp_chpl28 = UINT8(false);
        }
        tmp_chpl27 = tmp_chpl28;
        while (tmp_chpl27) {
          i_lhs_chpl = &i_chpl;
          *(i_lhs_chpl) += INT64(1);
          if (i_chpl < (&localThis_chpl)->buffLen) {
            coerce_tmp_chpl4 = (&localThis_chpl)->buff;
            call_tmp_chpl51 = (coerce_tmp_chpl4 + i_chpl);
            tmp_chpl29 = (! ((*(call_tmp_chpl51) & ((uint8_t)(INT64(192)))) != ((uint8_t)(INT64(128)))));
          } else {
            tmp_chpl29 = UINT8(false);
          }
          tmp_chpl27 = tmp_chpl29;
        }
      }
      tmp_chpl30 = (i_chpl < (&localThis_chpl)->buffLen);
      while (tmp_chpl30) {
        call_tmp_chpl52 = (i_chpl + INT64(1));
        j_chpl = call_tmp_chpl52;
        if (call_tmp_chpl52 < (&localThis_chpl)->buffLen) {
          coerce_tmp_chpl5 = (&localThis_chpl)->buff;
          call_tmp_chpl53 = (coerce_tmp_chpl5 + call_tmp_chpl52);
          tmp_chpl32 = (! ((*(call_tmp_chpl53) & ((uint8_t)(INT64(192)))) != ((uint8_t)(INT64(128)))));
        } else {
          tmp_chpl32 = UINT8(false);
        }
        tmp_chpl31 = tmp_chpl32;
        while (tmp_chpl31) {
          i_lhs_chpl2 = &j_chpl;
          *(i_lhs_chpl2) += INT64(1);
          if (j_chpl < (&localThis_chpl)->buffLen) {
            coerce_tmp_chpl6 = (&localThis_chpl)->buff;
            call_tmp_chpl54 = (coerce_tmp_chpl6 + j_chpl);
            tmp_chpl33 = (! ((*(call_tmp_chpl54) & ((uint8_t)(INT64(192)))) != ((uint8_t)(INT64(128)))));
          } else {
            tmp_chpl33 = UINT8(false);
          }
          tmp_chpl31 = tmp_chpl33;
        }
        init_chpl71(&cpi_chpl2);
        (&cpi_chpl2)->_bindex = i_chpl;
        ret_chpl9 = cpi_chpl2;
        call_tmp_chpl55 = ret_chpl9;
        call_tmp_chpl56 = (j_chpl - i_chpl);
        i__e0_x_chpl = &call_tmp_chpl55;
        (&ret_tmp_chpl5)->x0 = i__e0_x_chpl;
        (&ret_tmp_chpl5)->x1 = call_tmp_chpl56;
        call_tmp_chpl57 = ret_tmp_chpl5;
        _yieldedIndex_x0_chpl = (&call_tmp_chpl57)->x0;
        _yieldedIndex_x1_chpl = (&call_tmp_chpl57)->x1;
        if (cpCount_chpl == cpIdxLow_chpl) {
          byteLow_chpl = (_yieldedIndex_x0_chpl)->_bindex;
          i_x_chpl = &localThis_chpl;
          chpl_macro_tmp_1854.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_1854.addr = i_x_chpl;
          tmp_chpl34 = chpl_macro_tmp_1854;
          deinit_chpl42(tmp_chpl34);
          goto _breakLabel_chpl;
        }
        if (cpCount_chpl == cpIdxHigh_chpl) {
          byteHigh_chpl = ((int64_t)((((int64_t)(((_yieldedIndex_x0_chpl)->_bindex + _yieldedIndex_x1_chpl))) - INT64(1))));
          i_x_chpl2 = &localThis_chpl;
          chpl_macro_tmp_1855.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_1855.addr = i_x_chpl2;
          tmp_chpl35 = chpl_macro_tmp_1855;
          deinit_chpl42(tmp_chpl35);
          goto _breakLabel_chpl;
        }
        i_lhs_chpl3 = &cpCount_chpl;
        *(i_lhs_chpl3) += INT64(1);
        i_chpl = j_chpl;
        tmp_chpl30 = (i_chpl < (&localThis_chpl)->buffLen);
      }
      i_x_chpl3 = &localThis_chpl;
      chpl_macro_tmp_1856.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1856.addr = i_x_chpl3;
      tmp_chpl36 = chpl_macro_tmp_1856;
      deinit_chpl42(tmp_chpl36);
      _breakLabel_chpl:;
    }
    chpl_build_bounded_range(byteLow_chpl, byteHigh_chpl, &ret_tmp_chpl6);
    call_tmp_chpl58 = ret_tmp_chpl6;
    call_tmp_chpl59 = (((int64_t)((cpIdxHigh_chpl - cpIdxLow_chpl))) + INT64(1));
    (&ret_tmp_chpl7)->x0 = call_tmp_chpl58;
    (&ret_tmp_chpl7)->x1 = call_tmp_chpl59;
    ret_chpl = ret_tmp_chpl7;
    goto _end_getView_chpl;
  }
  _end_getView_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* BytesStringCommon.chpl:366 */
static void getView_chpl6(chpl____wide__ref_string x_chpl2,
                          range_byteIndex_boundedLow_F_chpl r_chpl,
                          chpl____wide_Error * error_out_chpl,
                          _tuple_2_range_int64_t_bounded_F_int64_t_chpl * _retArg_chpl) {
  string_chpl local__str_literal_75_chpl;
  string_chpl local__str_literal_1309_chpl;
  string_chpl local__str_literal_3342_chpl;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_chpl;
  range_int64_t_bounded_F_chpl call_tmp_chpl36;
  int64_t tmp_chpl15;
  int64_t call_tmp_chpl37;
  range_int64_t_bounded_F_chpl call_tmp_chpl38;
  range_int64_t_bounded_F_chpl ret_tmp_chpl;
  byteIndex_chpl call_tmp_chpl39;
  int64_t coerce_tmp_chpl3;
  byteIndex_chpl ret_chpl2;
  byteIndex_chpl cpi_chpl;
  int64_t ret_chpl3;
  chpl_bool ret_chpl4;
  chpl_bool tmp_chpl16;
  byteIndex_chpl call_tmp_chpl40;
  int64_t coerce_tmp_chpl4;
  byteIndex_chpl ret_chpl5;
  byteIndex_chpl cpi_chpl2;
  uint8_t call_tmp_chpl41;
  byteIndex_chpl call_tmp_chpl42;
  int64_t coerce_tmp_chpl5;
  byteIndex_chpl ret_chpl6;
  byteIndex_chpl cpi_chpl3;
  string_chpl call_tmp_chpl43;
  string_chpl ret_tmp_chpl2;
  string_chpl call_tmp_chpl44;
  string_chpl ret_tmp_chpl3;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl45;
  string_chpl ret_tmp_chpl4;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_CodepointSplittingError_chpl call_tmp_chpl46;
  CodepointSplittingError_chpl new_temp_chpl = NULL;
  _owned_CodepointSplittingError_chpl initTemp_chpl;
  chpl____wide_Error call_tmp_chpl47 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 coerce_tmp_chpl6;
  _owned_Error_chpl2 ret_tmp_chpl5;
  _ref__owned_CodepointSplittingError_chpl i_x_chpl = NULL;
  _ref__owned_Error_chpl2 i__retArg_chpl = NULL;
  _owned_CodepointSplittingError_chpl _formal_tmp_x_chpl;
  _owned_Error_chpl2 ret_chpl7;
  _ref__owned_CodepointSplittingError_chpl i_this_chpl = NULL;
  Error_chpl call_tmp_chpl48 = NULL;
  _ref__owned_CodepointSplittingError_chpl i_this_chpl2 = NULL;
  _owned_Error_chpl2 call_tmp_chpl49;
  _owned_Error_chpl2 initTemp_chpl2;
  chpl____wide_Error tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 _formal_tmp_in_err_chpl;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl call_tmp_chpl50;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_tmp_chpl6;
  chpl____wide__ref_int64_t chpl_macro_tmp_1857;
  chpl____wide__ref_string chpl_macro_tmp_1858;
  chpl____wide__ref_string chpl_macro_tmp_1859;
  chpl____wide_Error chpl_macro_tmp_1860;
  chpl____wide__ref_string chpl_macro_tmp_1861;
  chpl____wide__ref_string chpl_macro_tmp_1862;
  chpl____wide__ref_string chpl_macro_tmp_1863;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  local__str_literal_1309_chpl = _str_literal_1309_chpl /* " is not the first byte of a UTF-8 codepoint" */;
  local__str_literal_3342_chpl = _str_literal_3342_chpl /* "Byte-based string slice is not aligned to codepoint boundaries. The byte at low boundary " */;
  chpl_macro_tmp_1857.locale = (x_chpl2).locale;
  chpl_macro_tmp_1857.addr = &(((x_chpl2).addr)->buffLen);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1857).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1857).addr, sizeof(int64_t), COMMID(9), INT64(396), INT64(47));
  call_tmp_chpl37 = chpl__nudgeHighBound(tmp_chpl15);
  chpl_build_bounded_range(INT64(0), call_tmp_chpl37, &ret_tmp_chpl);
  call_tmp_chpl38 = ret_tmp_chpl;
  call_tmp_chpl36 = call_tmp_chpl38;
  coerce_tmp_chpl3 = (&r_chpl)->_low;
  init_chpl71(&cpi_chpl);
  (&cpi_chpl)->_bindex = coerce_tmp_chpl3;
  ret_chpl2 = cpi_chpl;
  call_tmp_chpl39 = ret_chpl2;
  ret_chpl3 = (&call_tmp_chpl39)->_bindex;
  if (ret_chpl3 > (&call_tmp_chpl36)->_high) {
    ret_chpl4 = UINT8(false);
    goto _end_contains_chpl;
  }
  if (ret_chpl3 < (&call_tmp_chpl36)->_low) {
    ret_chpl4 = UINT8(false);
    goto _end_contains_chpl;
  }
  ret_chpl4 = UINT8(true);
  _end_contains_chpl:;
  if (ret_chpl4) {
    coerce_tmp_chpl4 = (&r_chpl)->_low;
    init_chpl71(&cpi_chpl2);
    (&cpi_chpl2)->_bindex = coerce_tmp_chpl4;
    ret_chpl5 = cpi_chpl2;
    call_tmp_chpl40 = ret_chpl5;
    call_tmp_chpl41 = byte_chpl(x_chpl2, (&call_tmp_chpl40)->_bindex);
    tmp_chpl16 = (! ((call_tmp_chpl41 & ((uint8_t)(INT64(192)))) != ((uint8_t)(INT64(128)))));
  } else {
    tmp_chpl16 = UINT8(false);
  }
  if (tmp_chpl16) {
    coerce_tmp_chpl5 = (&r_chpl)->_low;
    init_chpl71(&cpi_chpl3);
    (&cpi_chpl3)->_bindex = coerce_tmp_chpl5;
    ret_chpl6 = cpi_chpl3;
    call_tmp_chpl42 = ret_chpl6;
    chpl___COLON_11(&call_tmp_chpl42, &ret_tmp_chpl2);
    call_tmp_chpl43 = ret_tmp_chpl2;
    chpl_macro_tmp_1858.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1858.addr = &call_tmp_chpl43;
    tmp_chpl17 = chpl_macro_tmp_1858;
    chpl___PLUS_(&local__str_literal_3342_chpl, tmp_chpl17, &ret_tmp_chpl3);
    call_tmp_chpl44 = ret_tmp_chpl3;
    chpl_macro_tmp_1859.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1859.addr = &local__str_literal_1309_chpl;
    tmp_chpl18 = chpl_macro_tmp_1859;
    chpl___PLUS_(&call_tmp_chpl44, tmp_chpl18, &ret_tmp_chpl4);
    call_tmp_chpl45 = ret_tmp_chpl4;
    new_temp_chpl = _new_chpl16(&call_tmp_chpl45, INT64(398), INT32(47));
    init_chpl51(&initTemp_chpl, new_temp_chpl);
    call_tmp_chpl46 = initTemp_chpl;
    i_x_chpl = &call_tmp_chpl46;
    i__retArg_chpl = &ret_tmp_chpl5;
    _formal_tmp_x_chpl = *(i_x_chpl);
    i_this_chpl = &_formal_tmp_x_chpl;
    call_tmp_chpl48 = ((Error_chpl)((i_this_chpl)->chpl_p));
    i_this_chpl2 = &_formal_tmp_x_chpl;
    (i_this_chpl2)->chpl_p = ((CodepointSplittingError_chpl)(nil));
    if (((object_chpl)(call_tmp_chpl48)) == nil) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(398), INT32(47));
    }
    chpl_macro_tmp_1860.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1860.addr = call_tmp_chpl48;
    tmp_chpl19 = chpl_macro_tmp_1860;
    init_chpl68(&initTemp_chpl2, tmp_chpl19);
    call_tmp_chpl49 = initTemp_chpl2;
    ret_chpl7 = call_tmp_chpl49;
    chpl__autoDestroy23(&_formal_tmp_x_chpl);
    *(i__retArg_chpl) = ret_chpl7;
    coerce_tmp_chpl6 = ret_tmp_chpl5;
    _formal_tmp_in_err_chpl = coerce_tmp_chpl6;
    call_tmp_chpl47 = chpl_fix_thrown_error(&_formal_tmp_in_err_chpl, INT64(398), INT32(47));
    *(error_out_chpl) = call_tmp_chpl47;
    i_x_chpl2 = &call_tmp_chpl45;
    chpl_macro_tmp_1861.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1861.addr = i_x_chpl2;
    tmp_chpl20 = chpl_macro_tmp_1861;
    deinit_chpl42(tmp_chpl20);
    i_x_chpl3 = &call_tmp_chpl44;
    chpl_macro_tmp_1862.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1862.addr = i_x_chpl3;
    tmp_chpl21 = chpl_macro_tmp_1862;
    deinit_chpl42(tmp_chpl21);
    i_x_chpl4 = &call_tmp_chpl43;
    chpl_macro_tmp_1863.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1863.addr = i_x_chpl4;
    tmp_chpl22 = chpl_macro_tmp_1863;
    deinit_chpl42(tmp_chpl22);
    goto _end_getView_chpl;
  }
  simpleCaseHelper_chpl3(x_chpl2, r_chpl, &ret_tmp_chpl6);
  call_tmp_chpl50 = ret_tmp_chpl6;
  ret_chpl = call_tmp_chpl50;
  _end_getView_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* BytesStringCommon.chpl:366 */
static void getView_chpl4(chpl____wide__ref_string x_chpl2,
                          range_byteIndex_boundedLow_F_chpl r_chpl,
                          Error_chpl * error_out_chpl,
                          _tuple_2_range_int64_t_bounded_F_int64_t_chpl * _retArg_chpl) {
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl call_tmp_chpl36;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_tmp_chpl;
  simpleCaseHelper_chpl6(x_chpl2, r_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* BytesStringCommon.chpl:366 */
static void getView_chpl(string_chpl * x_chpl2,
                         range_byteIndex_boundedHigh_F_chpl r_chpl,
                         chpl____wide_Error * error_out_chpl,
                         _tuple_2_range_int64_t_bounded_F_int64_t_chpl * _retArg_chpl) {
  string_chpl local__str_literal_75_chpl;
  string_chpl local__str_literal_1309_chpl;
  string_chpl local__str_literal_3344_chpl;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_chpl;
  range_int64_t_bounded_F_chpl call_tmp_chpl36;
  int64_t tmp_chpl15;
  int64_t call_tmp_chpl37;
  range_int64_t_bounded_F_chpl call_tmp_chpl38;
  range_int64_t_bounded_F_chpl ret_tmp_chpl;
  byteIndex_chpl call_tmp_chpl39;
  int64_t coerce_tmp_chpl3;
  byteIndex_chpl ret_chpl2;
  byteIndex_chpl cpi_chpl;
  int64_t call_tmp_chpl40;
  chpl_bool ret_chpl3;
  chpl_bool tmp_chpl16;
  byteIndex_chpl call_tmp_chpl41;
  int64_t coerce_tmp_chpl4;
  byteIndex_chpl ret_chpl4;
  byteIndex_chpl cpi_chpl2;
  uint8_t call_tmp_chpl42;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  byteIndex_chpl call_tmp_chpl43;
  int64_t coerce_tmp_chpl5;
  byteIndex_chpl ret_chpl5;
  byteIndex_chpl cpi_chpl3;
  string_chpl call_tmp_chpl44;
  string_chpl ret_tmp_chpl2;
  string_chpl call_tmp_chpl45;
  string_chpl ret_tmp_chpl3;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl46;
  string_chpl ret_tmp_chpl4;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_CodepointSplittingError_chpl call_tmp_chpl47;
  CodepointSplittingError_chpl new_temp_chpl = NULL;
  _owned_CodepointSplittingError_chpl initTemp_chpl;
  chpl____wide_Error call_tmp_chpl48 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 coerce_tmp_chpl6;
  _owned_Error_chpl2 ret_tmp_chpl5;
  _ref__owned_CodepointSplittingError_chpl i_x_chpl = NULL;
  _ref__owned_Error_chpl2 i__retArg_chpl = NULL;
  _owned_CodepointSplittingError_chpl _formal_tmp_x_chpl;
  _owned_Error_chpl2 ret_chpl6;
  _ref__owned_CodepointSplittingError_chpl i_this_chpl = NULL;
  Error_chpl call_tmp_chpl49 = NULL;
  _ref__owned_CodepointSplittingError_chpl i_this_chpl2 = NULL;
  _owned_Error_chpl2 call_tmp_chpl50;
  _owned_Error_chpl2 initTemp_chpl2;
  chpl____wide_Error tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 _formal_tmp_in_err_chpl;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl call_tmp_chpl51;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_tmp_chpl6;
  chpl____wide__ref_string chpl_macro_tmp_1864;
  chpl____wide__ref_string chpl_macro_tmp_1865;
  chpl____wide__ref_string chpl_macro_tmp_1866;
  chpl____wide_Error chpl_macro_tmp_1867;
  chpl____wide__ref_string chpl_macro_tmp_1868;
  chpl____wide__ref_string chpl_macro_tmp_1869;
  chpl____wide__ref_string chpl_macro_tmp_1870;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  local__str_literal_1309_chpl = _str_literal_1309_chpl /* " is not the first byte of a UTF-8 codepoint" */;
  local__str_literal_3344_chpl = _str_literal_3344_chpl /* "Byte-based string slice is not aligned to codepoint boundaries. The byte at high boundary " */;
  tmp_chpl15 = (x_chpl2)->buffLen;
  call_tmp_chpl37 = chpl__nudgeHighBound(tmp_chpl15);
  chpl_build_bounded_range(INT64(0), call_tmp_chpl37, &ret_tmp_chpl);
  call_tmp_chpl38 = ret_tmp_chpl;
  call_tmp_chpl36 = call_tmp_chpl38;
  coerce_tmp_chpl3 = (&r_chpl)->_high;
  init_chpl71(&cpi_chpl);
  (&cpi_chpl)->_bindex = coerce_tmp_chpl3;
  ret_chpl2 = cpi_chpl;
  call_tmp_chpl39 = ret_chpl2;
  call_tmp_chpl40 = ((&call_tmp_chpl39)->_bindex + INT64(1));
  if (call_tmp_chpl40 > (&call_tmp_chpl36)->_high) {
    ret_chpl3 = UINT8(false);
    goto _end_contains_chpl;
  }
  if (call_tmp_chpl40 < (&call_tmp_chpl36)->_low) {
    ret_chpl3 = UINT8(false);
    goto _end_contains_chpl;
  }
  ret_chpl3 = UINT8(true);
  _end_contains_chpl:;
  if (ret_chpl3) {
    coerce_tmp_chpl4 = (&r_chpl)->_high;
    init_chpl71(&cpi_chpl2);
    (&cpi_chpl2)->_bindex = coerce_tmp_chpl4;
    ret_chpl4 = cpi_chpl2;
    call_tmp_chpl41 = ret_chpl4;
    chpl_macro_tmp_1864.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1864.addr = x_chpl2;
    tmp_chpl17 = chpl_macro_tmp_1864;
    call_tmp_chpl42 = byte_chpl(tmp_chpl17, ((int64_t)(((&call_tmp_chpl41)->_bindex + INT64(1)))));
    tmp_chpl16 = (! ((call_tmp_chpl42 & ((uint8_t)(INT64(192)))) != ((uint8_t)(INT64(128)))));
  } else {
    tmp_chpl16 = UINT8(false);
  }
  if (tmp_chpl16) {
    coerce_tmp_chpl5 = (&r_chpl)->_high;
    init_chpl71(&cpi_chpl3);
    (&cpi_chpl3)->_bindex = coerce_tmp_chpl5;
    ret_chpl5 = cpi_chpl3;
    call_tmp_chpl43 = ret_chpl5;
    chpl___COLON_11(&call_tmp_chpl43, &ret_tmp_chpl2);
    call_tmp_chpl44 = ret_tmp_chpl2;
    chpl_macro_tmp_1865.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1865.addr = &call_tmp_chpl44;
    tmp_chpl18 = chpl_macro_tmp_1865;
    chpl___PLUS_(&local__str_literal_3344_chpl, tmp_chpl18, &ret_tmp_chpl3);
    call_tmp_chpl45 = ret_tmp_chpl3;
    chpl_macro_tmp_1866.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1866.addr = &local__str_literal_1309_chpl;
    tmp_chpl19 = chpl_macro_tmp_1866;
    chpl___PLUS_(&call_tmp_chpl45, tmp_chpl19, &ret_tmp_chpl4);
    call_tmp_chpl46 = ret_tmp_chpl4;
    new_temp_chpl = _new_chpl16(&call_tmp_chpl46, INT64(407), INT32(47));
    init_chpl51(&initTemp_chpl, new_temp_chpl);
    call_tmp_chpl47 = initTemp_chpl;
    i_x_chpl = &call_tmp_chpl47;
    i__retArg_chpl = &ret_tmp_chpl5;
    _formal_tmp_x_chpl = *(i_x_chpl);
    i_this_chpl = &_formal_tmp_x_chpl;
    call_tmp_chpl49 = ((Error_chpl)((i_this_chpl)->chpl_p));
    i_this_chpl2 = &_formal_tmp_x_chpl;
    (i_this_chpl2)->chpl_p = ((CodepointSplittingError_chpl)(nil));
    if (((object_chpl)(call_tmp_chpl49)) == nil) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(407), INT32(47));
    }
    chpl_macro_tmp_1867.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1867.addr = call_tmp_chpl49;
    tmp_chpl20 = chpl_macro_tmp_1867;
    init_chpl68(&initTemp_chpl2, tmp_chpl20);
    call_tmp_chpl50 = initTemp_chpl2;
    ret_chpl6 = call_tmp_chpl50;
    chpl__autoDestroy23(&_formal_tmp_x_chpl);
    *(i__retArg_chpl) = ret_chpl6;
    coerce_tmp_chpl6 = ret_tmp_chpl5;
    _formal_tmp_in_err_chpl = coerce_tmp_chpl6;
    call_tmp_chpl48 = chpl_fix_thrown_error(&_formal_tmp_in_err_chpl, INT64(407), INT32(47));
    *(error_out_chpl) = call_tmp_chpl48;
    i_x_chpl2 = &call_tmp_chpl46;
    chpl_macro_tmp_1868.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1868.addr = i_x_chpl2;
    tmp_chpl21 = chpl_macro_tmp_1868;
    deinit_chpl42(tmp_chpl21);
    i_x_chpl3 = &call_tmp_chpl45;
    chpl_macro_tmp_1869.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1869.addr = i_x_chpl3;
    tmp_chpl22 = chpl_macro_tmp_1869;
    deinit_chpl42(tmp_chpl22);
    i_x_chpl4 = &call_tmp_chpl44;
    chpl_macro_tmp_1870.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1870.addr = i_x_chpl4;
    tmp_chpl23 = chpl_macro_tmp_1870;
    deinit_chpl42(tmp_chpl23);
    goto _end_getView_chpl;
  }
  simpleCaseHelper_chpl4(x_chpl2, r_chpl, &ret_tmp_chpl6);
  call_tmp_chpl51 = ret_tmp_chpl6;
  ret_chpl = call_tmp_chpl51;
  _end_getView_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* BytesStringCommon.chpl:372 */
static void simpleCaseHelper_chpl4(string_chpl * x_chpl2,
                                   range_byteIndex_boundedHigh_F_chpl r_chpl,
                                   _tuple_2_range_int64_t_bounded_F_int64_t_chpl * _retArg_chpl) {
  string_chpl local__str_literal_337_chpl;
  string_chpl local__str_literal_1304_chpl;
  range_int64_t_boundedHigh_F_chpl call_tmp_chpl36;
  range_int64_t_boundedHigh_F_chpl ret_tmp_chpl;
  range_int64_t_boundedHigh_F_chpl intR_chpl;
  range_int64_t_bounded_F_chpl call_tmp_chpl37;
  int64_t tmp_chpl15;
  int64_t call_tmp_chpl38;
  range_int64_t_bounded_F_chpl call_tmp_chpl39;
  range_int64_t_bounded_F_chpl ret_tmp_chpl2;
  range_int64_t_bounded_F_chpl boundedOther_chpl;
  int64_t call_tmp_chpl40;
  range_int64_t_bounded_F_chpl call_tmp_chpl41;
  range_int64_t_bounded_F_chpl initTemp_chpl;
  uint64_t call_tmp_chpl42;
  chpl_bool tmp_chpl16;
  chpl_bool tmp_chpl17;
  chpl_bool ret_chpl;
  uint64_t call_tmp_chpl43;
  chpl_bool tmp_chpl18;
  uint64_t call_tmp_chpl44;
  chpl_bool tmp_chpl19;
  range_int64_t_bounded_F_chpl call_tmp_chpl45;
  range_int64_t_bounded_F_chpl ret_tmp_chpl3;
  chpl_bool call_tmp_chpl46;
  int64_t tmp_chpl20;
  int64_t tmp_chpl21;
  int64_t call_tmp_chpl47;
  range_int64_t_bounded_F_chpl call_tmp_chpl48;
  range_int64_t_bounded_F_chpl ret_tmp_chpl4;
  range_int64_t_bounded_F_chpl call_tmp_chpl49;
  range_int64_t_bounded_F_chpl ret_tmp_chpl5;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_tmp_chpl6;
  local__str_literal_337_chpl = _str_literal_337_chpl /* " out of bounds for string with length " */;
  local__str_literal_1304_chpl = _str_literal_1304_chpl /* "range " */;
  chpl___COLON_3(r_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  intR_chpl = call_tmp_chpl36;
  tmp_chpl15 = (x_chpl2)->buffLen;
  call_tmp_chpl38 = chpl__nudgeHighBound(tmp_chpl15);
  chpl_build_bounded_range(INT64(0), call_tmp_chpl38, &ret_tmp_chpl2);
  call_tmp_chpl39 = ret_tmp_chpl2;
  call_tmp_chpl37 = call_tmp_chpl39;
  call_tmp_chpl40 = alignment_chpl3(call_tmp_chpl36);
  init_chpl36(&initTemp_chpl, (&call_tmp_chpl37)->_low, (&intR_chpl)->_high, INT64(1), call_tmp_chpl40, UINT8(true));
  call_tmp_chpl41 = initTemp_chpl;
  boundedOther_chpl = call_tmp_chpl41;
  call_tmp_chpl42 = sizeAs_chpl4(call_tmp_chpl41);
  if (! (INT64(0) < INT64(0))) {
    tmp_chpl16 = (call_tmp_chpl42 == ((uint64_t)(INT64(0))));
  } else {
    tmp_chpl16 = UINT8(false);
  }
  if (tmp_chpl16) {
    tmp_chpl17 = UINT8(true);
  } else {
    call_tmp_chpl43 = sizeAs_chpl4(call_tmp_chpl39);
    if (! (INT64(0) < INT64(0))) {
      tmp_chpl18 = (call_tmp_chpl43 == ((uint64_t)(INT64(0))));
    } else {
      tmp_chpl18 = UINT8(false);
    }
    if (tmp_chpl18) {
      call_tmp_chpl44 = sizeAs_chpl4(boundedOther_chpl);
      if (! (INT64(0) < INT64(0))) {
        tmp_chpl19 = (call_tmp_chpl44 == ((uint64_t)(INT64(0))));
      } else {
        tmp_chpl19 = UINT8(false);
      }
      ret_chpl = tmp_chpl19;
      goto _end_contains_chpl;
    }
    this_chpl2(call_tmp_chpl37, boundedOther_chpl, &ret_tmp_chpl3);
    call_tmp_chpl45 = ret_tmp_chpl3;
    call_tmp_chpl46 = chpl___EQUALS_2(boundedOther_chpl, call_tmp_chpl45);
    ret_chpl = call_tmp_chpl46;
    _end_contains_chpl:;
    tmp_chpl17 = ret_chpl;
  }
  if (! tmp_chpl17) {
    tmp_chpl20 = (x_chpl2)->buffLen;
    halt_chpl2(&local__str_literal_1304_chpl, r_chpl, &local__str_literal_337_chpl, tmp_chpl20, INT64(378), INT32(47));
  }
  tmp_chpl21 = (x_chpl2)->buffLen;
  call_tmp_chpl47 = chpl__nudgeHighBound(tmp_chpl21);
  chpl_build_bounded_range(INT64(0), call_tmp_chpl47, &ret_tmp_chpl4);
  call_tmp_chpl48 = ret_tmp_chpl4;
  this_chpl3(intR_chpl, call_tmp_chpl48, &ret_tmp_chpl5);
  call_tmp_chpl49 = ret_tmp_chpl5;
  (&ret_tmp_chpl6)->x0 = call_tmp_chpl49;
  (&ret_tmp_chpl6)->x1 = INT64(-1);
  *(_retArg_chpl) = ret_tmp_chpl6;
  return;
}

/* BytesStringCommon.chpl:372 */
static void simpleCaseHelper_chpl6(chpl____wide__ref_string x_chpl2,
                                   range_byteIndex_boundedLow_F_chpl r_chpl,
                                   _tuple_2_range_int64_t_bounded_F_int64_t_chpl * _retArg_chpl) {
  string_chpl local__str_literal_337_chpl;
  string_chpl local__str_literal_1304_chpl;
  range_int64_t_boundedLow_F_chpl call_tmp_chpl36;
  range_int64_t_boundedLow_F_chpl ret_tmp_chpl;
  range_int64_t_boundedLow_F_chpl intR_chpl;
  range_int64_t_bounded_F_chpl call_tmp_chpl37;
  int64_t tmp_chpl15;
  int64_t call_tmp_chpl38;
  range_int64_t_bounded_F_chpl call_tmp_chpl39;
  range_int64_t_bounded_F_chpl ret_tmp_chpl2;
  range_int64_t_bounded_F_chpl boundedOther_chpl;
  int64_t call_tmp_chpl40;
  range_int64_t_bounded_F_chpl call_tmp_chpl41;
  range_int64_t_bounded_F_chpl initTemp_chpl;
  uint64_t call_tmp_chpl42;
  chpl_bool tmp_chpl16;
  chpl_bool tmp_chpl17;
  chpl_bool ret_chpl;
  uint64_t call_tmp_chpl43;
  chpl_bool tmp_chpl18;
  uint64_t call_tmp_chpl44;
  chpl_bool tmp_chpl19;
  range_int64_t_bounded_F_chpl call_tmp_chpl45;
  range_int64_t_bounded_F_chpl ret_tmp_chpl3;
  chpl_bool call_tmp_chpl46;
  int64_t tmp_chpl20;
  int64_t tmp_chpl21;
  int64_t call_tmp_chpl47;
  range_int64_t_bounded_F_chpl call_tmp_chpl48;
  range_int64_t_bounded_F_chpl ret_tmp_chpl4;
  range_int64_t_bounded_F_chpl call_tmp_chpl49;
  range_int64_t_bounded_F_chpl ret_tmp_chpl5;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_tmp_chpl6;
  chpl____wide__ref_int64_t chpl_macro_tmp_1871;
  chpl____wide__ref_int64_t chpl_macro_tmp_1872;
  chpl____wide__ref_int64_t chpl_macro_tmp_1873;
  local__str_literal_337_chpl = _str_literal_337_chpl /* " out of bounds for string with length " */;
  local__str_literal_1304_chpl = _str_literal_1304_chpl /* "range " */;
  chpl___COLON_5(r_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  intR_chpl = call_tmp_chpl36;
  chpl_macro_tmp_1871.locale = (x_chpl2).locale;
  chpl_macro_tmp_1871.addr = &(((x_chpl2).addr)->buffLen);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1871).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1871).addr, sizeof(int64_t), COMMID(10), INT64(377), INT64(47));
  call_tmp_chpl38 = chpl__nudgeHighBound(tmp_chpl15);
  chpl_build_bounded_range(INT64(0), call_tmp_chpl38, &ret_tmp_chpl2);
  call_tmp_chpl39 = ret_tmp_chpl2;
  call_tmp_chpl37 = call_tmp_chpl39;
  call_tmp_chpl40 = alignment_chpl(call_tmp_chpl36);
  init_chpl36(&initTemp_chpl, (&intR_chpl)->_low, (&call_tmp_chpl37)->_high, INT64(1), call_tmp_chpl40, UINT8(true));
  call_tmp_chpl41 = initTemp_chpl;
  boundedOther_chpl = call_tmp_chpl41;
  call_tmp_chpl42 = sizeAs_chpl4(call_tmp_chpl41);
  if (! (INT64(0) < INT64(0))) {
    tmp_chpl16 = (call_tmp_chpl42 == ((uint64_t)(INT64(0))));
  } else {
    tmp_chpl16 = UINT8(false);
  }
  if (tmp_chpl16) {
    tmp_chpl17 = UINT8(true);
  } else {
    call_tmp_chpl43 = sizeAs_chpl4(call_tmp_chpl39);
    if (! (INT64(0) < INT64(0))) {
      tmp_chpl18 = (call_tmp_chpl43 == ((uint64_t)(INT64(0))));
    } else {
      tmp_chpl18 = UINT8(false);
    }
    if (tmp_chpl18) {
      call_tmp_chpl44 = sizeAs_chpl4(boundedOther_chpl);
      if (! (INT64(0) < INT64(0))) {
        tmp_chpl19 = (call_tmp_chpl44 == ((uint64_t)(INT64(0))));
      } else {
        tmp_chpl19 = UINT8(false);
      }
      ret_chpl = tmp_chpl19;
      goto _end_contains_chpl;
    }
    this_chpl2(call_tmp_chpl37, boundedOther_chpl, &ret_tmp_chpl3);
    call_tmp_chpl45 = ret_tmp_chpl3;
    call_tmp_chpl46 = chpl___EQUALS_2(boundedOther_chpl, call_tmp_chpl45);
    ret_chpl = call_tmp_chpl46;
    _end_contains_chpl:;
    tmp_chpl17 = ret_chpl;
  }
  if (! tmp_chpl17) {
    chpl_macro_tmp_1872.locale = (x_chpl2).locale;
    chpl_macro_tmp_1872.addr = &(((x_chpl2).addr)->buffLen);
    chpl_gen_comm_get(((void*)(&tmp_chpl20)), chpl_nodeFromLocaleID((chpl_macro_tmp_1872).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1872).addr, sizeof(int64_t), COMMID(11), INT64(379), INT64(47));
    halt_chpl10(&local__str_literal_1304_chpl, r_chpl, &local__str_literal_337_chpl, tmp_chpl20, INT64(378), INT32(47));
  }
  chpl_macro_tmp_1873.locale = (x_chpl2).locale;
  chpl_macro_tmp_1873.addr = &(((x_chpl2).addr)->buffLen);
  chpl_gen_comm_get(((void*)(&tmp_chpl21)), chpl_nodeFromLocaleID((chpl_macro_tmp_1873).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1873).addr, sizeof(int64_t), COMMID(12), INT64(383), INT64(47));
  call_tmp_chpl47 = chpl__nudgeHighBound(tmp_chpl21);
  chpl_build_bounded_range(INT64(0), call_tmp_chpl47, &ret_tmp_chpl4);
  call_tmp_chpl48 = ret_tmp_chpl4;
  this_chpl4(intR_chpl, call_tmp_chpl48, &ret_tmp_chpl5);
  call_tmp_chpl49 = ret_tmp_chpl5;
  (&ret_tmp_chpl6)->x0 = call_tmp_chpl49;
  (&ret_tmp_chpl6)->x1 = INT64(-1);
  *(_retArg_chpl) = ret_tmp_chpl6;
  return;
}

/* BytesStringCommon.chpl:372 */
static void simpleCaseHelper_chpl3(chpl____wide__ref_string x_chpl2,
                                   range_byteIndex_boundedLow_F_chpl r_chpl,
                                   _tuple_2_range_int64_t_bounded_F_int64_t_chpl * _retArg_chpl) {
  string_chpl local__str_literal_337_chpl;
  string_chpl local__str_literal_1304_chpl;
  range_int64_t_boundedLow_F_chpl call_tmp_chpl36;
  range_int64_t_boundedLow_F_chpl ret_tmp_chpl;
  range_int64_t_boundedLow_F_chpl intR_chpl;
  range_int64_t_bounded_F_chpl call_tmp_chpl37;
  int64_t tmp_chpl15;
  int64_t call_tmp_chpl38;
  range_int64_t_bounded_F_chpl call_tmp_chpl39;
  range_int64_t_bounded_F_chpl ret_tmp_chpl2;
  range_int64_t_bounded_F_chpl boundedOther_chpl;
  int64_t call_tmp_chpl40;
  range_int64_t_bounded_F_chpl call_tmp_chpl41;
  range_int64_t_bounded_F_chpl initTemp_chpl;
  uint64_t call_tmp_chpl42;
  chpl_bool tmp_chpl16;
  chpl_bool tmp_chpl17;
  chpl_bool ret_chpl;
  uint64_t call_tmp_chpl43;
  chpl_bool tmp_chpl18;
  uint64_t call_tmp_chpl44;
  chpl_bool tmp_chpl19;
  range_int64_t_bounded_F_chpl call_tmp_chpl45;
  range_int64_t_bounded_F_chpl ret_tmp_chpl3;
  chpl_bool call_tmp_chpl46;
  int64_t tmp_chpl20;
  int64_t tmp_chpl21;
  int64_t call_tmp_chpl47;
  range_int64_t_bounded_F_chpl call_tmp_chpl48;
  range_int64_t_bounded_F_chpl ret_tmp_chpl4;
  range_int64_t_bounded_F_chpl call_tmp_chpl49;
  range_int64_t_bounded_F_chpl ret_tmp_chpl5;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_tmp_chpl6;
  chpl____wide__ref_int64_t chpl_macro_tmp_1874;
  chpl____wide__ref_int64_t chpl_macro_tmp_1875;
  chpl____wide__ref_int64_t chpl_macro_tmp_1876;
  local__str_literal_337_chpl = _str_literal_337_chpl /* " out of bounds for string with length " */;
  local__str_literal_1304_chpl = _str_literal_1304_chpl /* "range " */;
  chpl___COLON_5(r_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  intR_chpl = call_tmp_chpl36;
  chpl_macro_tmp_1874.locale = (x_chpl2).locale;
  chpl_macro_tmp_1874.addr = &(((x_chpl2).addr)->buffLen);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1874).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1874).addr, sizeof(int64_t), COMMID(13), INT64(377), INT64(47));
  call_tmp_chpl38 = chpl__nudgeHighBound(tmp_chpl15);
  chpl_build_bounded_range(INT64(0), call_tmp_chpl38, &ret_tmp_chpl2);
  call_tmp_chpl39 = ret_tmp_chpl2;
  call_tmp_chpl37 = call_tmp_chpl39;
  call_tmp_chpl40 = alignment_chpl(call_tmp_chpl36);
  init_chpl36(&initTemp_chpl, (&intR_chpl)->_low, (&call_tmp_chpl37)->_high, INT64(1), call_tmp_chpl40, UINT8(true));
  call_tmp_chpl41 = initTemp_chpl;
  boundedOther_chpl = call_tmp_chpl41;
  call_tmp_chpl42 = sizeAs_chpl4(call_tmp_chpl41);
  if (! (INT64(0) < INT64(0))) {
    tmp_chpl16 = (call_tmp_chpl42 == ((uint64_t)(INT64(0))));
  } else {
    tmp_chpl16 = UINT8(false);
  }
  if (tmp_chpl16) {
    tmp_chpl17 = UINT8(true);
  } else {
    call_tmp_chpl43 = sizeAs_chpl4(call_tmp_chpl39);
    if (! (INT64(0) < INT64(0))) {
      tmp_chpl18 = (call_tmp_chpl43 == ((uint64_t)(INT64(0))));
    } else {
      tmp_chpl18 = UINT8(false);
    }
    if (tmp_chpl18) {
      call_tmp_chpl44 = sizeAs_chpl4(boundedOther_chpl);
      if (! (INT64(0) < INT64(0))) {
        tmp_chpl19 = (call_tmp_chpl44 == ((uint64_t)(INT64(0))));
      } else {
        tmp_chpl19 = UINT8(false);
      }
      ret_chpl = tmp_chpl19;
      goto _end_contains_chpl;
    }
    this_chpl2(call_tmp_chpl37, boundedOther_chpl, &ret_tmp_chpl3);
    call_tmp_chpl45 = ret_tmp_chpl3;
    call_tmp_chpl46 = chpl___EQUALS_2(boundedOther_chpl, call_tmp_chpl45);
    ret_chpl = call_tmp_chpl46;
    _end_contains_chpl:;
    tmp_chpl17 = ret_chpl;
  }
  if (! tmp_chpl17) {
    chpl_macro_tmp_1875.locale = (x_chpl2).locale;
    chpl_macro_tmp_1875.addr = &(((x_chpl2).addr)->buffLen);
    chpl_gen_comm_get(((void*)(&tmp_chpl20)), chpl_nodeFromLocaleID((chpl_macro_tmp_1875).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1875).addr, sizeof(int64_t), COMMID(14), INT64(379), INT64(47));
    halt_chpl10(&local__str_literal_1304_chpl, r_chpl, &local__str_literal_337_chpl, tmp_chpl20, INT64(378), INT32(47));
  }
  chpl_macro_tmp_1876.locale = (x_chpl2).locale;
  chpl_macro_tmp_1876.addr = &(((x_chpl2).addr)->buffLen);
  chpl_gen_comm_get(((void*)(&tmp_chpl21)), chpl_nodeFromLocaleID((chpl_macro_tmp_1876).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1876).addr, sizeof(int64_t), COMMID(15), INT64(383), INT64(47));
  call_tmp_chpl47 = chpl__nudgeHighBound(tmp_chpl21);
  chpl_build_bounded_range(INT64(0), call_tmp_chpl47, &ret_tmp_chpl4);
  call_tmp_chpl48 = ret_tmp_chpl4;
  this_chpl4(intR_chpl, call_tmp_chpl48, &ret_tmp_chpl5);
  call_tmp_chpl49 = ret_tmp_chpl5;
  (&ret_tmp_chpl6)->x0 = call_tmp_chpl49;
  (&ret_tmp_chpl6)->x1 = INT64(-1);
  *(_retArg_chpl) = ret_tmp_chpl6;
  return;
}

/* BytesStringCommon.chpl:372 */
static void simpleCaseHelper_chpl2(string_chpl * x_chpl2,
                                   range_int64_t_boundedLow_F_chpl r_chpl,
                                   _tuple_2_range_int64_t_bounded_F_int64_t_chpl * _retArg_chpl) {
  string_chpl local__str_literal_337_chpl;
  string_chpl local__str_literal_1304_chpl;
  range_int64_t_boundedLow_F_chpl intR_chpl;
  range_int64_t_bounded_F_chpl call_tmp_chpl36;
  int64_t tmp_chpl15;
  int64_t call_tmp_chpl37;
  range_int64_t_bounded_F_chpl call_tmp_chpl38;
  range_int64_t_bounded_F_chpl ret_tmp_chpl;
  range_int64_t_bounded_F_chpl boundedOther_chpl;
  int64_t call_tmp_chpl39;
  range_int64_t_bounded_F_chpl call_tmp_chpl40;
  range_int64_t_bounded_F_chpl initTemp_chpl;
  uint64_t call_tmp_chpl41;
  chpl_bool tmp_chpl16;
  chpl_bool tmp_chpl17;
  chpl_bool ret_chpl;
  uint64_t call_tmp_chpl42;
  chpl_bool tmp_chpl18;
  uint64_t call_tmp_chpl43;
  chpl_bool tmp_chpl19;
  range_int64_t_bounded_F_chpl call_tmp_chpl44;
  range_int64_t_bounded_F_chpl ret_tmp_chpl2;
  chpl_bool call_tmp_chpl45;
  int64_t tmp_chpl20;
  int64_t tmp_chpl21;
  int64_t call_tmp_chpl46;
  range_int64_t_bounded_F_chpl call_tmp_chpl47;
  range_int64_t_bounded_F_chpl ret_tmp_chpl3;
  range_int64_t_bounded_F_chpl call_tmp_chpl48;
  range_int64_t_bounded_F_chpl ret_tmp_chpl4;
  range_int64_t_bounded_F_chpl retRange_chpl;
  int64_t call_tmp_chpl49;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_tmp_chpl5;
  local__str_literal_337_chpl = _str_literal_337_chpl /* " out of bounds for string with length " */;
  local__str_literal_1304_chpl = _str_literal_1304_chpl /* "range " */;
  intR_chpl = r_chpl;
  tmp_chpl15 = (x_chpl2)->buffLen;
  call_tmp_chpl37 = chpl__nudgeHighBound(tmp_chpl15);
  chpl_build_bounded_range(INT64(0), call_tmp_chpl37, &ret_tmp_chpl);
  call_tmp_chpl38 = ret_tmp_chpl;
  call_tmp_chpl36 = call_tmp_chpl38;
  call_tmp_chpl39 = alignment_chpl(r_chpl);
  init_chpl36(&initTemp_chpl, (&intR_chpl)->_low, (&call_tmp_chpl36)->_high, INT64(1), call_tmp_chpl39, UINT8(true));
  call_tmp_chpl40 = initTemp_chpl;
  boundedOther_chpl = call_tmp_chpl40;
  call_tmp_chpl41 = sizeAs_chpl4(call_tmp_chpl40);
  if (! (INT64(0) < INT64(0))) {
    tmp_chpl16 = (call_tmp_chpl41 == ((uint64_t)(INT64(0))));
  } else {
    tmp_chpl16 = UINT8(false);
  }
  if (tmp_chpl16) {
    tmp_chpl17 = UINT8(true);
  } else {
    call_tmp_chpl42 = sizeAs_chpl4(call_tmp_chpl38);
    if (! (INT64(0) < INT64(0))) {
      tmp_chpl18 = (call_tmp_chpl42 == ((uint64_t)(INT64(0))));
    } else {
      tmp_chpl18 = UINT8(false);
    }
    if (tmp_chpl18) {
      call_tmp_chpl43 = sizeAs_chpl4(boundedOther_chpl);
      if (! (INT64(0) < INT64(0))) {
        tmp_chpl19 = (call_tmp_chpl43 == ((uint64_t)(INT64(0))));
      } else {
        tmp_chpl19 = UINT8(false);
      }
      ret_chpl = tmp_chpl19;
      goto _end_contains_chpl;
    }
    this_chpl2(call_tmp_chpl36, boundedOther_chpl, &ret_tmp_chpl2);
    call_tmp_chpl44 = ret_tmp_chpl2;
    call_tmp_chpl45 = chpl___EQUALS_2(boundedOther_chpl, call_tmp_chpl44);
    ret_chpl = call_tmp_chpl45;
    _end_contains_chpl:;
    tmp_chpl17 = ret_chpl;
  }
  if (! tmp_chpl17) {
    tmp_chpl20 = (x_chpl2)->buffLen;
    halt_chpl9(&local__str_literal_1304_chpl, r_chpl, &local__str_literal_337_chpl, tmp_chpl20, INT64(378), INT32(47));
  }
  tmp_chpl21 = (x_chpl2)->buffLen;
  call_tmp_chpl46 = chpl__nudgeHighBound(tmp_chpl21);
  chpl_build_bounded_range(INT64(0), call_tmp_chpl46, &ret_tmp_chpl3);
  call_tmp_chpl47 = ret_tmp_chpl3;
  this_chpl4(intR_chpl, call_tmp_chpl47, &ret_tmp_chpl4);
  call_tmp_chpl48 = ret_tmp_chpl4;
  retRange_chpl = call_tmp_chpl48;
  call_tmp_chpl49 = size_chpl2(call_tmp_chpl48);
  (&ret_tmp_chpl5)->x0 = retRange_chpl;
  (&ret_tmp_chpl5)->x1 = call_tmp_chpl49;
  *(_retArg_chpl) = ret_tmp_chpl5;
  return;
}

/* BytesStringCommon.chpl:372 */
static void simpleCaseHelper_chpl(string_chpl * x_chpl2,
                                  range_byteIndex_bounded_F_chpl r_chpl,
                                  _tuple_2_range_int64_t_bounded_F_int64_t_chpl * _retArg_chpl) {
  string_chpl local__str_literal_337_chpl;
  string_chpl local__str_literal_1304_chpl;
  range_int64_t_bounded_F_chpl call_tmp_chpl36;
  range_int64_t_bounded_F_chpl ret_tmp_chpl;
  range_int64_t_bounded_F_chpl intR_chpl;
  range_int64_t_bounded_F_chpl call_tmp_chpl37;
  int64_t tmp_chpl15;
  int64_t call_tmp_chpl38;
  range_int64_t_bounded_F_chpl call_tmp_chpl39;
  range_int64_t_bounded_F_chpl ret_tmp_chpl2;
  range_int64_t_bounded_F_chpl boundedOther_chpl;
  int64_t call_tmp_chpl40;
  range_int64_t_bounded_F_chpl call_tmp_chpl41;
  range_int64_t_bounded_F_chpl initTemp_chpl;
  uint64_t call_tmp_chpl42;
  chpl_bool tmp_chpl16;
  chpl_bool tmp_chpl17;
  chpl_bool ret_chpl;
  uint64_t call_tmp_chpl43;
  chpl_bool tmp_chpl18;
  uint64_t call_tmp_chpl44;
  chpl_bool tmp_chpl19;
  range_int64_t_bounded_F_chpl call_tmp_chpl45;
  range_int64_t_bounded_F_chpl ret_tmp_chpl3;
  chpl_bool call_tmp_chpl46;
  int64_t tmp_chpl20;
  int64_t tmp_chpl21;
  int64_t call_tmp_chpl47;
  range_int64_t_bounded_F_chpl call_tmp_chpl48;
  range_int64_t_bounded_F_chpl ret_tmp_chpl4;
  range_int64_t_bounded_F_chpl call_tmp_chpl49;
  range_int64_t_bounded_F_chpl ret_tmp_chpl5;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_tmp_chpl6;
  local__str_literal_337_chpl = _str_literal_337_chpl /* " out of bounds for string with length " */;
  local__str_literal_1304_chpl = _str_literal_1304_chpl /* "range " */;
  chpl___COLON_4(r_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  intR_chpl = call_tmp_chpl36;
  tmp_chpl15 = (x_chpl2)->buffLen;
  call_tmp_chpl38 = chpl__nudgeHighBound(tmp_chpl15);
  chpl_build_bounded_range(INT64(0), call_tmp_chpl38, &ret_tmp_chpl2);
  call_tmp_chpl39 = ret_tmp_chpl2;
  call_tmp_chpl37 = call_tmp_chpl39;
  call_tmp_chpl40 = alignment_chpl2(call_tmp_chpl36);
  init_chpl36(&initTemp_chpl, (&intR_chpl)->_low, (&intR_chpl)->_high, INT64(1), call_tmp_chpl40, UINT8(true));
  call_tmp_chpl41 = initTemp_chpl;
  boundedOther_chpl = call_tmp_chpl41;
  call_tmp_chpl42 = sizeAs_chpl4(call_tmp_chpl41);
  if (! (INT64(0) < INT64(0))) {
    tmp_chpl16 = (call_tmp_chpl42 == ((uint64_t)(INT64(0))));
  } else {
    tmp_chpl16 = UINT8(false);
  }
  if (tmp_chpl16) {
    tmp_chpl17 = UINT8(true);
  } else {
    call_tmp_chpl43 = sizeAs_chpl4(call_tmp_chpl39);
    if (! (INT64(0) < INT64(0))) {
      tmp_chpl18 = (call_tmp_chpl43 == ((uint64_t)(INT64(0))));
    } else {
      tmp_chpl18 = UINT8(false);
    }
    if (tmp_chpl18) {
      call_tmp_chpl44 = sizeAs_chpl4(boundedOther_chpl);
      if (! (INT64(0) < INT64(0))) {
        tmp_chpl19 = (call_tmp_chpl44 == ((uint64_t)(INT64(0))));
      } else {
        tmp_chpl19 = UINT8(false);
      }
      ret_chpl = tmp_chpl19;
      goto _end_contains_chpl;
    }
    this_chpl2(call_tmp_chpl37, boundedOther_chpl, &ret_tmp_chpl3);
    call_tmp_chpl45 = ret_tmp_chpl3;
    call_tmp_chpl46 = chpl___EQUALS_2(boundedOther_chpl, call_tmp_chpl45);
    ret_chpl = call_tmp_chpl46;
    _end_contains_chpl:;
    tmp_chpl17 = ret_chpl;
  }
  if (! tmp_chpl17) {
    tmp_chpl20 = (x_chpl2)->buffLen;
    halt_chpl4(&local__str_literal_1304_chpl, r_chpl, &local__str_literal_337_chpl, tmp_chpl20, INT64(378), INT32(47));
  }
  tmp_chpl21 = (x_chpl2)->buffLen;
  call_tmp_chpl47 = chpl__nudgeHighBound(tmp_chpl21);
  chpl_build_bounded_range(INT64(0), call_tmp_chpl47, &ret_tmp_chpl4);
  call_tmp_chpl48 = ret_tmp_chpl4;
  this_chpl2(intR_chpl, call_tmp_chpl48, &ret_tmp_chpl5);
  call_tmp_chpl49 = ret_tmp_chpl5;
  (&ret_tmp_chpl6)->x0 = call_tmp_chpl49;
  (&ret_tmp_chpl6)->x1 = INT64(-1);
  *(_retArg_chpl) = ret_tmp_chpl6;
  return;
}

/* BytesStringCommon.chpl:372 */
static void simpleCaseHelper_chpl5(string_chpl * x_chpl2,
                                   range_int64_t_bounded_F_chpl r_chpl,
                                   _tuple_2_range_int64_t_bounded_F_int64_t_chpl * _retArg_chpl) {
  string_chpl local__str_literal_337_chpl;
  string_chpl local__str_literal_1304_chpl;
  range_int64_t_bounded_F_chpl intR_chpl;
  range_int64_t_bounded_F_chpl call_tmp_chpl36;
  int64_t tmp_chpl15;
  int64_t call_tmp_chpl37;
  range_int64_t_bounded_F_chpl call_tmp_chpl38;
  range_int64_t_bounded_F_chpl ret_tmp_chpl;
  range_int64_t_bounded_F_chpl boundedOther_chpl;
  int64_t call_tmp_chpl39;
  range_int64_t_bounded_F_chpl call_tmp_chpl40;
  range_int64_t_bounded_F_chpl initTemp_chpl;
  uint64_t call_tmp_chpl41;
  chpl_bool tmp_chpl16;
  chpl_bool tmp_chpl17;
  chpl_bool ret_chpl;
  uint64_t call_tmp_chpl42;
  chpl_bool tmp_chpl18;
  uint64_t call_tmp_chpl43;
  chpl_bool tmp_chpl19;
  range_int64_t_bounded_F_chpl call_tmp_chpl44;
  range_int64_t_bounded_F_chpl ret_tmp_chpl2;
  chpl_bool call_tmp_chpl45;
  int64_t tmp_chpl20;
  int64_t tmp_chpl21;
  int64_t call_tmp_chpl46;
  range_int64_t_bounded_F_chpl call_tmp_chpl47;
  range_int64_t_bounded_F_chpl ret_tmp_chpl3;
  range_int64_t_bounded_F_chpl call_tmp_chpl48;
  range_int64_t_bounded_F_chpl ret_tmp_chpl4;
  range_int64_t_bounded_F_chpl retRange_chpl;
  int64_t call_tmp_chpl49;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_tmp_chpl5;
  local__str_literal_337_chpl = _str_literal_337_chpl /* " out of bounds for string with length " */;
  local__str_literal_1304_chpl = _str_literal_1304_chpl /* "range " */;
  intR_chpl = r_chpl;
  tmp_chpl15 = (x_chpl2)->buffLen;
  call_tmp_chpl37 = chpl__nudgeHighBound(tmp_chpl15);
  chpl_build_bounded_range(INT64(0), call_tmp_chpl37, &ret_tmp_chpl);
  call_tmp_chpl38 = ret_tmp_chpl;
  call_tmp_chpl36 = call_tmp_chpl38;
  call_tmp_chpl39 = alignment_chpl2(r_chpl);
  init_chpl36(&initTemp_chpl, (&intR_chpl)->_low, (&intR_chpl)->_high, INT64(1), call_tmp_chpl39, UINT8(true));
  call_tmp_chpl40 = initTemp_chpl;
  boundedOther_chpl = call_tmp_chpl40;
  call_tmp_chpl41 = sizeAs_chpl4(call_tmp_chpl40);
  if (! (INT64(0) < INT64(0))) {
    tmp_chpl16 = (call_tmp_chpl41 == ((uint64_t)(INT64(0))));
  } else {
    tmp_chpl16 = UINT8(false);
  }
  if (tmp_chpl16) {
    tmp_chpl17 = UINT8(true);
  } else {
    call_tmp_chpl42 = sizeAs_chpl4(call_tmp_chpl38);
    if (! (INT64(0) < INT64(0))) {
      tmp_chpl18 = (call_tmp_chpl42 == ((uint64_t)(INT64(0))));
    } else {
      tmp_chpl18 = UINT8(false);
    }
    if (tmp_chpl18) {
      call_tmp_chpl43 = sizeAs_chpl4(boundedOther_chpl);
      if (! (INT64(0) < INT64(0))) {
        tmp_chpl19 = (call_tmp_chpl43 == ((uint64_t)(INT64(0))));
      } else {
        tmp_chpl19 = UINT8(false);
      }
      ret_chpl = tmp_chpl19;
      goto _end_contains_chpl;
    }
    this_chpl2(call_tmp_chpl36, boundedOther_chpl, &ret_tmp_chpl2);
    call_tmp_chpl44 = ret_tmp_chpl2;
    call_tmp_chpl45 = chpl___EQUALS_2(boundedOther_chpl, call_tmp_chpl44);
    ret_chpl = call_tmp_chpl45;
    _end_contains_chpl:;
    tmp_chpl17 = ret_chpl;
  }
  if (! tmp_chpl17) {
    tmp_chpl20 = (x_chpl2)->buffLen;
    halt_chpl8(&local__str_literal_1304_chpl, r_chpl, &local__str_literal_337_chpl, tmp_chpl20, INT64(378), INT32(47));
  }
  tmp_chpl21 = (x_chpl2)->buffLen;
  call_tmp_chpl46 = chpl__nudgeHighBound(tmp_chpl21);
  chpl_build_bounded_range(INT64(0), call_tmp_chpl46, &ret_tmp_chpl3);
  call_tmp_chpl47 = ret_tmp_chpl3;
  this_chpl2(intR_chpl, call_tmp_chpl47, &ret_tmp_chpl4);
  call_tmp_chpl48 = ret_tmp_chpl4;
  retRange_chpl = call_tmp_chpl48;
  call_tmp_chpl49 = size_chpl2(call_tmp_chpl48);
  (&ret_tmp_chpl5)->x0 = retRange_chpl;
  (&ret_tmp_chpl5)->x1 = call_tmp_chpl49;
  *(_retArg_chpl) = ret_tmp_chpl5;
  return;
}

/* BytesStringCommon.chpl:469 */
static void getSlice_chpl2(string_chpl * x_chpl2,
                           range_int64_t_bounded_F_chpl r_chpl,
                           Error_chpl * error_out_chpl,
                           string_chpl * _retArg_chpl) {
  string_chpl ret_chpl;
  string_chpl ret_chpl2;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl call_tmp_chpl36;
  Error_chpl error_chpl = NULL;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_tmp_chpl;
  range_int64_t_bounded_F_chpl tmp_x0_chpl;
  int64_t tmp_x1_chpl;
  range_int64_t_bounded_F_chpl tmp_chpl15;
  range_int64_t_bounded_F_chpl r2_chpl;
  int64_t call_tmp_chpl37;
  string_chpl ret_chpl3;
  c_ptr_uint8_t_chpl buff_chpl = NULL;
  int64_t call_tmp_chpl38;
  int64_t coerce_tmp_chpl3;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl call_tmp_chpl39;
  c_ptr_uint8_t_chpl coerce_tmp_chpl4 = NULL;
  int32_t coerce_tmp_chpl5;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl ret_chpl4;
  int32_t call_tmp_chpl40;
  c_ptr_uint8_t_chpl call_tmp_chpl41 = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl42 = NULL;
  int64_t call_tmp_chpl43;
  int64_t tmp_chpl16;
  int16_t call_tmp_chpl44;
  c_void_ptr cast_tmp_chpl;
  c_ptr_uint8_t_chpl call_tmp_chpl45 = NULL;
  c_ptr_uint8_t_chpl dst_chpl = NULL;
  uint64_t call_tmp_chpl46;
  c_void_ptr coerce_tmp_chpl6;
  c_void_ptr coerce_tmp_chpl7;
  _ref_uint8_t_chpl call_tmp_chpl47 = NULL;
  c_ptr_uint8_t_chpl tmp_x0_chpl2 = NULL;
  int64_t tmp_x1_chpl2;
  int64_t call_tmp_chpl48;
  _ref_uint8_t_chpl call_tmp_chpl49 = NULL;
  int64_t numCodepoints_chpl;
  int64_t call_tmp_chpl50;
  string_chpl ret_chpl5;
  string_chpl ret_chpl6;
  _ref_string_chpl i_x_chpl = NULL;
  if ((x_chpl2)->buffLen == INT64(0)) {
    init_chpl73(&ret_chpl2);
    ret_chpl = ret_chpl2;
    goto _end_getSlice_chpl;
  }
  error_chpl = NULL;
  getView_chpl2(x_chpl2, r_chpl, &error_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  if (error_chpl != nil) {
    *(error_out_chpl) = error_chpl;
    goto _end_getSlice_chpl;
  }
  tmp_chpl15 = (&call_tmp_chpl36)->x0;
  tmp_x0_chpl = tmp_chpl15;
  tmp_x1_chpl = (&call_tmp_chpl36)->x1;
  r2_chpl = tmp_x0_chpl;
  call_tmp_chpl37 = size_chpl2(tmp_x0_chpl);
  if (call_tmp_chpl37 <= INT64(0)) {
    init_chpl73(&ret_chpl3);
    ret_chpl = ret_chpl3;
    goto _end_getSlice_chpl;
  }
  call_tmp_chpl38 = (((int64_t)(((&r2_chpl)->_high - (&r2_chpl)->_low))) + INT64(1));
  coerce_tmp_chpl3 = (&r2_chpl)->_low;
  coerce_tmp_chpl4 = (x_chpl2)->buff;
  coerce_tmp_chpl5 = (x_chpl2)->locale_id;
  call_tmp_chpl40 = get_chpl_nodeID();
  if (coerce_tmp_chpl5 != call_tmp_chpl40) {
    call_tmp_chpl41 = bufferCopyRemote_chpl(((int64_t)(coerce_tmp_chpl5)), (coerce_tmp_chpl4 + coerce_tmp_chpl3), call_tmp_chpl38);
    (&ret_chpl4)->x0 = call_tmp_chpl41;
    (&ret_chpl4)->x1 = call_tmp_chpl38;
    goto _end_bufferCopy_chpl;
  } else {
    call_tmp_chpl42 = (coerce_tmp_chpl4 + coerce_tmp_chpl3);
    call_tmp_chpl43 = chpl_here_good_alloc_size(((int64_t)((call_tmp_chpl38 + INT64(1)))), INT64(491), INT32(47));
    if (call_tmp_chpl43 > INT64(0)) {
      tmp_chpl16 = call_tmp_chpl43;
    } else {
      tmp_chpl16 = INT64(0);
    }
    call_tmp_chpl44 = offset_STR_COPY_DATA_chpl();
    cast_tmp_chpl = chpl_here_alloc(tmp_chpl16, call_tmp_chpl44, INT64(491), INT32(47));
    call_tmp_chpl45 = ((c_ptr_uint8_t_chpl)(cast_tmp_chpl));
    dst_chpl = call_tmp_chpl45;
    call_tmp_chpl46 = ((uint64_t)(call_tmp_chpl38));
    coerce_tmp_chpl6 = ((c_void_ptr)((call_tmp_chpl45 + INT64(0))));
    coerce_tmp_chpl7 = ((c_void_ptr)((call_tmp_chpl42 + INT64(0))));
    checkValue_chpl4();
    memcpy(coerce_tmp_chpl6, coerce_tmp_chpl7, call_tmp_chpl46);
    call_tmp_chpl47 = (dst_chpl + call_tmp_chpl38);
    *(call_tmp_chpl47) = ((uint8_t)(INT64(0)));
    (&ret_chpl4)->x0 = call_tmp_chpl45;
    (&ret_chpl4)->x1 = tmp_chpl16;
    goto _end_bufferCopy_chpl;
  }
  _end_bufferCopy_chpl:;
  call_tmp_chpl39 = ret_chpl4;
  tmp_x0_chpl2 = (&call_tmp_chpl39)->x0;
  tmp_x1_chpl2 = (&call_tmp_chpl39)->x1;
  buff_chpl = tmp_x0_chpl2;
  call_tmp_chpl48 = size_chpl2(r2_chpl);
  call_tmp_chpl49 = (buff_chpl + call_tmp_chpl48);
  *(call_tmp_chpl49) = ((uint8_t)(INT64(0)));
  numCodepoints_chpl = tmp_x1_chpl;
  if (tmp_x1_chpl == INT64(-1)) {
    call_tmp_chpl50 = countNumCodepoints_chpl(tmp_x0_chpl2, call_tmp_chpl48);
    numCodepoints_chpl = call_tmp_chpl50;
  }
  init_chpl73(&ret_chpl6);
  i_x_chpl = &ret_chpl6;
  (i_x_chpl)->isOwned = UINT8(true);
  (i_x_chpl)->buff = tmp_x0_chpl2;
  (i_x_chpl)->buffSize = tmp_x1_chpl2;
  (i_x_chpl)->buffLen = call_tmp_chpl48;
  (&ret_chpl6)->cachedNumCodepoints = numCodepoints_chpl;
  ret_chpl5 = ret_chpl6;
  ret_chpl = ret_chpl5;
  _end_getSlice_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* BytesStringCommon.chpl:469 */
static void getSlice_chpl4(string_chpl * x_chpl2,
                           range_byteIndex_bounded_F_chpl r_chpl,
                           chpl____wide_Error * error_out_chpl,
                           string_chpl * _retArg_chpl) {
  string_chpl ret_chpl;
  string_chpl ret_chpl2;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl call_tmp_chpl36;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_tmp_chpl;
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  range_int64_t_bounded_F_chpl tmp_x0_chpl;
  int64_t tmp_x1_chpl;
  range_int64_t_bounded_F_chpl tmp_chpl16;
  range_int64_t_bounded_F_chpl r2_chpl;
  int64_t call_tmp_chpl37;
  string_chpl ret_chpl3;
  c_ptr_uint8_t_chpl buff_chpl = NULL;
  int64_t call_tmp_chpl38;
  int64_t coerce_tmp_chpl3;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl call_tmp_chpl39;
  c_ptr_uint8_t_chpl coerce_tmp_chpl4 = NULL;
  int32_t coerce_tmp_chpl5;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl ret_chpl4;
  int32_t call_tmp_chpl40;
  c_ptr_uint8_t_chpl call_tmp_chpl41 = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl42 = NULL;
  int64_t call_tmp_chpl43;
  int64_t tmp_chpl17;
  int16_t call_tmp_chpl44;
  c_void_ptr cast_tmp_chpl;
  c_ptr_uint8_t_chpl call_tmp_chpl45 = NULL;
  c_ptr_uint8_t_chpl dst_chpl = NULL;
  uint64_t call_tmp_chpl46;
  c_void_ptr coerce_tmp_chpl6;
  c_void_ptr coerce_tmp_chpl7;
  _ref_uint8_t_chpl call_tmp_chpl47 = NULL;
  c_ptr_uint8_t_chpl tmp_x0_chpl2 = NULL;
  int64_t tmp_x1_chpl2;
  int64_t call_tmp_chpl48;
  _ref_uint8_t_chpl call_tmp_chpl49 = NULL;
  int64_t numCodepoints_chpl;
  int64_t call_tmp_chpl50;
  string_chpl ret_chpl5;
  string_chpl ret_chpl6;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__nilType chpl_macro_tmp_1877;
  chpl____wide_Error chpl_macro_tmp_1878;
  if ((x_chpl2)->buffLen == INT64(0)) {
    init_chpl73(&ret_chpl2);
    ret_chpl = ret_chpl2;
    goto _end_getSlice_chpl;
  }
  chpl_macro_tmp_1877.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1877.addr = nil;
  chpl_macro_tmp_1878.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1878.addr = NULL;
  error_chpl = chpl_macro_tmp_1878;
  tmp_chpl15 = &error_chpl;
  getView_chpl3(x_chpl2, r_chpl, tmp_chpl15, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  if ((&error_chpl)->addr != nil) {
    *(error_out_chpl) = error_chpl;
    goto _end_getSlice_chpl;
  }
  tmp_chpl16 = (&call_tmp_chpl36)->x0;
  tmp_x0_chpl = tmp_chpl16;
  tmp_x1_chpl = (&call_tmp_chpl36)->x1;
  r2_chpl = tmp_x0_chpl;
  call_tmp_chpl37 = size_chpl2(tmp_x0_chpl);
  if (call_tmp_chpl37 <= INT64(0)) {
    init_chpl73(&ret_chpl3);
    ret_chpl = ret_chpl3;
    goto _end_getSlice_chpl;
  }
  call_tmp_chpl38 = (((int64_t)(((&r2_chpl)->_high - (&r2_chpl)->_low))) + INT64(1));
  coerce_tmp_chpl3 = (&r2_chpl)->_low;
  coerce_tmp_chpl4 = (x_chpl2)->buff;
  coerce_tmp_chpl5 = (x_chpl2)->locale_id;
  call_tmp_chpl40 = get_chpl_nodeID();
  if (coerce_tmp_chpl5 != call_tmp_chpl40) {
    call_tmp_chpl41 = bufferCopyRemote_chpl(((int64_t)(coerce_tmp_chpl5)), (coerce_tmp_chpl4 + coerce_tmp_chpl3), call_tmp_chpl38);
    (&ret_chpl4)->x0 = call_tmp_chpl41;
    (&ret_chpl4)->x1 = call_tmp_chpl38;
    goto _end_bufferCopy_chpl;
  } else {
    call_tmp_chpl42 = (coerce_tmp_chpl4 + coerce_tmp_chpl3);
    call_tmp_chpl43 = chpl_here_good_alloc_size(((int64_t)((call_tmp_chpl38 + INT64(1)))), INT64(491), INT32(47));
    if (call_tmp_chpl43 > INT64(0)) {
      tmp_chpl17 = call_tmp_chpl43;
    } else {
      tmp_chpl17 = INT64(0);
    }
    call_tmp_chpl44 = offset_STR_COPY_DATA_chpl();
    cast_tmp_chpl = chpl_here_alloc(tmp_chpl17, call_tmp_chpl44, INT64(491), INT32(47));
    call_tmp_chpl45 = ((c_ptr_uint8_t_chpl)(cast_tmp_chpl));
    dst_chpl = call_tmp_chpl45;
    call_tmp_chpl46 = ((uint64_t)(call_tmp_chpl38));
    coerce_tmp_chpl6 = ((c_void_ptr)((call_tmp_chpl45 + INT64(0))));
    coerce_tmp_chpl7 = ((c_void_ptr)((call_tmp_chpl42 + INT64(0))));
    checkValue_chpl4();
    memcpy(coerce_tmp_chpl6, coerce_tmp_chpl7, call_tmp_chpl46);
    call_tmp_chpl47 = (dst_chpl + call_tmp_chpl38);
    *(call_tmp_chpl47) = ((uint8_t)(INT64(0)));
    (&ret_chpl4)->x0 = call_tmp_chpl45;
    (&ret_chpl4)->x1 = tmp_chpl17;
    goto _end_bufferCopy_chpl;
  }
  _end_bufferCopy_chpl:;
  call_tmp_chpl39 = ret_chpl4;
  tmp_x0_chpl2 = (&call_tmp_chpl39)->x0;
  tmp_x1_chpl2 = (&call_tmp_chpl39)->x1;
  buff_chpl = tmp_x0_chpl2;
  call_tmp_chpl48 = size_chpl2(r2_chpl);
  call_tmp_chpl49 = (buff_chpl + call_tmp_chpl48);
  *(call_tmp_chpl49) = ((uint8_t)(INT64(0)));
  numCodepoints_chpl = tmp_x1_chpl;
  if (tmp_x1_chpl == INT64(-1)) {
    call_tmp_chpl50 = countNumCodepoints_chpl(tmp_x0_chpl2, call_tmp_chpl48);
    numCodepoints_chpl = call_tmp_chpl50;
  }
  init_chpl73(&ret_chpl6);
  i_x_chpl = &ret_chpl6;
  (i_x_chpl)->isOwned = UINT8(true);
  (i_x_chpl)->buff = tmp_x0_chpl2;
  (i_x_chpl)->buffSize = tmp_x1_chpl2;
  (i_x_chpl)->buffLen = call_tmp_chpl48;
  (&ret_chpl6)->cachedNumCodepoints = numCodepoints_chpl;
  ret_chpl5 = ret_chpl6;
  ret_chpl = ret_chpl5;
  _end_getSlice_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* BytesStringCommon.chpl:469 */
static void getSlice_chpl(string_chpl * x_chpl2,
                          range_int64_t_boundedLow_F_chpl r_chpl,
                          Error_chpl * error_out_chpl,
                          string_chpl * _retArg_chpl) {
  string_chpl ret_chpl;
  string_chpl ret_chpl2;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl call_tmp_chpl36;
  Error_chpl error_chpl = NULL;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_tmp_chpl;
  range_int64_t_bounded_F_chpl tmp_x0_chpl;
  int64_t tmp_x1_chpl;
  range_int64_t_bounded_F_chpl tmp_chpl15;
  range_int64_t_bounded_F_chpl r2_chpl;
  int64_t call_tmp_chpl37;
  string_chpl ret_chpl3;
  c_ptr_uint8_t_chpl buff_chpl = NULL;
  int64_t call_tmp_chpl38;
  int64_t coerce_tmp_chpl3;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl call_tmp_chpl39;
  c_ptr_uint8_t_chpl coerce_tmp_chpl4 = NULL;
  int32_t coerce_tmp_chpl5;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl ret_chpl4;
  int32_t call_tmp_chpl40;
  c_ptr_uint8_t_chpl call_tmp_chpl41 = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl42 = NULL;
  int64_t call_tmp_chpl43;
  int64_t tmp_chpl16;
  int16_t call_tmp_chpl44;
  c_void_ptr cast_tmp_chpl;
  c_ptr_uint8_t_chpl call_tmp_chpl45 = NULL;
  c_ptr_uint8_t_chpl dst_chpl = NULL;
  uint64_t call_tmp_chpl46;
  c_void_ptr coerce_tmp_chpl6;
  c_void_ptr coerce_tmp_chpl7;
  _ref_uint8_t_chpl call_tmp_chpl47 = NULL;
  c_ptr_uint8_t_chpl tmp_x0_chpl2 = NULL;
  int64_t tmp_x1_chpl2;
  int64_t call_tmp_chpl48;
  _ref_uint8_t_chpl call_tmp_chpl49 = NULL;
  int64_t numCodepoints_chpl;
  int64_t call_tmp_chpl50;
  string_chpl ret_chpl5;
  string_chpl ret_chpl6;
  _ref_string_chpl i_x_chpl = NULL;
  if ((x_chpl2)->buffLen == INT64(0)) {
    init_chpl73(&ret_chpl2);
    ret_chpl = ret_chpl2;
    goto _end_getSlice_chpl;
  }
  error_chpl = NULL;
  getView_chpl5(x_chpl2, r_chpl, &error_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  if (error_chpl != nil) {
    *(error_out_chpl) = error_chpl;
    goto _end_getSlice_chpl;
  }
  tmp_chpl15 = (&call_tmp_chpl36)->x0;
  tmp_x0_chpl = tmp_chpl15;
  tmp_x1_chpl = (&call_tmp_chpl36)->x1;
  r2_chpl = tmp_x0_chpl;
  call_tmp_chpl37 = size_chpl2(tmp_x0_chpl);
  if (call_tmp_chpl37 <= INT64(0)) {
    init_chpl73(&ret_chpl3);
    ret_chpl = ret_chpl3;
    goto _end_getSlice_chpl;
  }
  call_tmp_chpl38 = (((int64_t)(((&r2_chpl)->_high - (&r2_chpl)->_low))) + INT64(1));
  coerce_tmp_chpl3 = (&r2_chpl)->_low;
  coerce_tmp_chpl4 = (x_chpl2)->buff;
  coerce_tmp_chpl5 = (x_chpl2)->locale_id;
  call_tmp_chpl40 = get_chpl_nodeID();
  if (coerce_tmp_chpl5 != call_tmp_chpl40) {
    call_tmp_chpl41 = bufferCopyRemote_chpl(((int64_t)(coerce_tmp_chpl5)), (coerce_tmp_chpl4 + coerce_tmp_chpl3), call_tmp_chpl38);
    (&ret_chpl4)->x0 = call_tmp_chpl41;
    (&ret_chpl4)->x1 = call_tmp_chpl38;
    goto _end_bufferCopy_chpl;
  } else {
    call_tmp_chpl42 = (coerce_tmp_chpl4 + coerce_tmp_chpl3);
    call_tmp_chpl43 = chpl_here_good_alloc_size(((int64_t)((call_tmp_chpl38 + INT64(1)))), INT64(491), INT32(47));
    if (call_tmp_chpl43 > INT64(0)) {
      tmp_chpl16 = call_tmp_chpl43;
    } else {
      tmp_chpl16 = INT64(0);
    }
    call_tmp_chpl44 = offset_STR_COPY_DATA_chpl();
    cast_tmp_chpl = chpl_here_alloc(tmp_chpl16, call_tmp_chpl44, INT64(491), INT32(47));
    call_tmp_chpl45 = ((c_ptr_uint8_t_chpl)(cast_tmp_chpl));
    dst_chpl = call_tmp_chpl45;
    call_tmp_chpl46 = ((uint64_t)(call_tmp_chpl38));
    coerce_tmp_chpl6 = ((c_void_ptr)((call_tmp_chpl45 + INT64(0))));
    coerce_tmp_chpl7 = ((c_void_ptr)((call_tmp_chpl42 + INT64(0))));
    checkValue_chpl4();
    memcpy(coerce_tmp_chpl6, coerce_tmp_chpl7, call_tmp_chpl46);
    call_tmp_chpl47 = (dst_chpl + call_tmp_chpl38);
    *(call_tmp_chpl47) = ((uint8_t)(INT64(0)));
    (&ret_chpl4)->x0 = call_tmp_chpl45;
    (&ret_chpl4)->x1 = tmp_chpl16;
    goto _end_bufferCopy_chpl;
  }
  _end_bufferCopy_chpl:;
  call_tmp_chpl39 = ret_chpl4;
  tmp_x0_chpl2 = (&call_tmp_chpl39)->x0;
  tmp_x1_chpl2 = (&call_tmp_chpl39)->x1;
  buff_chpl = tmp_x0_chpl2;
  call_tmp_chpl48 = size_chpl2(r2_chpl);
  call_tmp_chpl49 = (buff_chpl + call_tmp_chpl48);
  *(call_tmp_chpl49) = ((uint8_t)(INT64(0)));
  numCodepoints_chpl = tmp_x1_chpl;
  if (tmp_x1_chpl == INT64(-1)) {
    call_tmp_chpl50 = countNumCodepoints_chpl(tmp_x0_chpl2, call_tmp_chpl48);
    numCodepoints_chpl = call_tmp_chpl50;
  }
  init_chpl73(&ret_chpl6);
  i_x_chpl = &ret_chpl6;
  (i_x_chpl)->isOwned = UINT8(true);
  (i_x_chpl)->buff = tmp_x0_chpl2;
  (i_x_chpl)->buffSize = tmp_x1_chpl2;
  (i_x_chpl)->buffLen = call_tmp_chpl48;
  (&ret_chpl6)->cachedNumCodepoints = numCodepoints_chpl;
  ret_chpl5 = ret_chpl6;
  ret_chpl = ret_chpl5;
  _end_getSlice_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* BytesStringCommon.chpl:469 */
static void getSlice_chpl5(string_chpl * x_chpl2,
                           range_byteIndex_boundedHigh_F_chpl r_chpl,
                           chpl____wide_Error * error_out_chpl,
                           string_chpl * _retArg_chpl) {
  string_chpl ret_chpl;
  string_chpl ret_chpl2;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl call_tmp_chpl36;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_tmp_chpl;
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  range_int64_t_bounded_F_chpl tmp_x0_chpl;
  int64_t tmp_x1_chpl;
  range_int64_t_bounded_F_chpl tmp_chpl16;
  range_int64_t_bounded_F_chpl r2_chpl;
  int64_t call_tmp_chpl37;
  string_chpl ret_chpl3;
  c_ptr_uint8_t_chpl buff_chpl = NULL;
  int64_t call_tmp_chpl38;
  int64_t coerce_tmp_chpl3;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl call_tmp_chpl39;
  c_ptr_uint8_t_chpl coerce_tmp_chpl4 = NULL;
  int32_t coerce_tmp_chpl5;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl ret_chpl4;
  int32_t call_tmp_chpl40;
  c_ptr_uint8_t_chpl call_tmp_chpl41 = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl42 = NULL;
  int64_t call_tmp_chpl43;
  int64_t tmp_chpl17;
  int16_t call_tmp_chpl44;
  c_void_ptr cast_tmp_chpl;
  c_ptr_uint8_t_chpl call_tmp_chpl45 = NULL;
  c_ptr_uint8_t_chpl dst_chpl = NULL;
  uint64_t call_tmp_chpl46;
  c_void_ptr coerce_tmp_chpl6;
  c_void_ptr coerce_tmp_chpl7;
  _ref_uint8_t_chpl call_tmp_chpl47 = NULL;
  c_ptr_uint8_t_chpl tmp_x0_chpl2 = NULL;
  int64_t tmp_x1_chpl2;
  int64_t call_tmp_chpl48;
  _ref_uint8_t_chpl call_tmp_chpl49 = NULL;
  int64_t numCodepoints_chpl;
  int64_t call_tmp_chpl50;
  string_chpl ret_chpl5;
  string_chpl ret_chpl6;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__nilType chpl_macro_tmp_1879;
  chpl____wide_Error chpl_macro_tmp_1880;
  if ((x_chpl2)->buffLen == INT64(0)) {
    init_chpl73(&ret_chpl2);
    ret_chpl = ret_chpl2;
    goto _end_getSlice_chpl;
  }
  chpl_macro_tmp_1879.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1879.addr = nil;
  chpl_macro_tmp_1880.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1880.addr = NULL;
  error_chpl = chpl_macro_tmp_1880;
  tmp_chpl15 = &error_chpl;
  getView_chpl(x_chpl2, r_chpl, tmp_chpl15, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  if ((&error_chpl)->addr != nil) {
    *(error_out_chpl) = error_chpl;
    goto _end_getSlice_chpl;
  }
  tmp_chpl16 = (&call_tmp_chpl36)->x0;
  tmp_x0_chpl = tmp_chpl16;
  tmp_x1_chpl = (&call_tmp_chpl36)->x1;
  r2_chpl = tmp_x0_chpl;
  call_tmp_chpl37 = size_chpl2(tmp_x0_chpl);
  if (call_tmp_chpl37 <= INT64(0)) {
    init_chpl73(&ret_chpl3);
    ret_chpl = ret_chpl3;
    goto _end_getSlice_chpl;
  }
  call_tmp_chpl38 = (((int64_t)(((&r2_chpl)->_high - (&r2_chpl)->_low))) + INT64(1));
  coerce_tmp_chpl3 = (&r2_chpl)->_low;
  coerce_tmp_chpl4 = (x_chpl2)->buff;
  coerce_tmp_chpl5 = (x_chpl2)->locale_id;
  call_tmp_chpl40 = get_chpl_nodeID();
  if (coerce_tmp_chpl5 != call_tmp_chpl40) {
    call_tmp_chpl41 = bufferCopyRemote_chpl(((int64_t)(coerce_tmp_chpl5)), (coerce_tmp_chpl4 + coerce_tmp_chpl3), call_tmp_chpl38);
    (&ret_chpl4)->x0 = call_tmp_chpl41;
    (&ret_chpl4)->x1 = call_tmp_chpl38;
    goto _end_bufferCopy_chpl;
  } else {
    call_tmp_chpl42 = (coerce_tmp_chpl4 + coerce_tmp_chpl3);
    call_tmp_chpl43 = chpl_here_good_alloc_size(((int64_t)((call_tmp_chpl38 + INT64(1)))), INT64(491), INT32(47));
    if (call_tmp_chpl43 > INT64(0)) {
      tmp_chpl17 = call_tmp_chpl43;
    } else {
      tmp_chpl17 = INT64(0);
    }
    call_tmp_chpl44 = offset_STR_COPY_DATA_chpl();
    cast_tmp_chpl = chpl_here_alloc(tmp_chpl17, call_tmp_chpl44, INT64(491), INT32(47));
    call_tmp_chpl45 = ((c_ptr_uint8_t_chpl)(cast_tmp_chpl));
    dst_chpl = call_tmp_chpl45;
    call_tmp_chpl46 = ((uint64_t)(call_tmp_chpl38));
    coerce_tmp_chpl6 = ((c_void_ptr)((call_tmp_chpl45 + INT64(0))));
    coerce_tmp_chpl7 = ((c_void_ptr)((call_tmp_chpl42 + INT64(0))));
    checkValue_chpl4();
    memcpy(coerce_tmp_chpl6, coerce_tmp_chpl7, call_tmp_chpl46);
    call_tmp_chpl47 = (dst_chpl + call_tmp_chpl38);
    *(call_tmp_chpl47) = ((uint8_t)(INT64(0)));
    (&ret_chpl4)->x0 = call_tmp_chpl45;
    (&ret_chpl4)->x1 = tmp_chpl17;
    goto _end_bufferCopy_chpl;
  }
  _end_bufferCopy_chpl:;
  call_tmp_chpl39 = ret_chpl4;
  tmp_x0_chpl2 = (&call_tmp_chpl39)->x0;
  tmp_x1_chpl2 = (&call_tmp_chpl39)->x1;
  buff_chpl = tmp_x0_chpl2;
  call_tmp_chpl48 = size_chpl2(r2_chpl);
  call_tmp_chpl49 = (buff_chpl + call_tmp_chpl48);
  *(call_tmp_chpl49) = ((uint8_t)(INT64(0)));
  numCodepoints_chpl = tmp_x1_chpl;
  if (tmp_x1_chpl == INT64(-1)) {
    call_tmp_chpl50 = countNumCodepoints_chpl(tmp_x0_chpl2, call_tmp_chpl48);
    numCodepoints_chpl = call_tmp_chpl50;
  }
  init_chpl73(&ret_chpl6);
  i_x_chpl = &ret_chpl6;
  (i_x_chpl)->isOwned = UINT8(true);
  (i_x_chpl)->buff = tmp_x0_chpl2;
  (i_x_chpl)->buffSize = tmp_x1_chpl2;
  (i_x_chpl)->buffLen = call_tmp_chpl48;
  (&ret_chpl6)->cachedNumCodepoints = numCodepoints_chpl;
  ret_chpl5 = ret_chpl6;
  ret_chpl = ret_chpl5;
  _end_getSlice_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* BytesStringCommon.chpl:469 */
static void getSlice_chpl3(string_chpl * x_chpl2,
                           range_byteIndex_boundedLow_F_chpl r_chpl,
                           chpl____wide_Error * error_out_chpl,
                           string_chpl * _retArg_chpl) {
  string_chpl ret_chpl;
  string_chpl ret_chpl2;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl call_tmp_chpl36;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_tmp_chpl;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl16 = NULL;
  range_int64_t_bounded_F_chpl tmp_x0_chpl;
  int64_t tmp_x1_chpl;
  range_int64_t_bounded_F_chpl tmp_chpl17;
  range_int64_t_bounded_F_chpl r2_chpl;
  int64_t call_tmp_chpl37;
  string_chpl ret_chpl3;
  c_ptr_uint8_t_chpl buff_chpl = NULL;
  int64_t call_tmp_chpl38;
  int64_t coerce_tmp_chpl3;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl call_tmp_chpl39;
  c_ptr_uint8_t_chpl coerce_tmp_chpl4 = NULL;
  int32_t coerce_tmp_chpl5;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl ret_chpl4;
  int32_t call_tmp_chpl40;
  c_ptr_uint8_t_chpl call_tmp_chpl41 = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl42 = NULL;
  int64_t call_tmp_chpl43;
  int64_t tmp_chpl18;
  int16_t call_tmp_chpl44;
  c_void_ptr cast_tmp_chpl;
  c_ptr_uint8_t_chpl call_tmp_chpl45 = NULL;
  c_ptr_uint8_t_chpl dst_chpl = NULL;
  uint64_t call_tmp_chpl46;
  c_void_ptr coerce_tmp_chpl6;
  c_void_ptr coerce_tmp_chpl7;
  _ref_uint8_t_chpl call_tmp_chpl47 = NULL;
  c_ptr_uint8_t_chpl tmp_x0_chpl2 = NULL;
  int64_t tmp_x1_chpl2;
  int64_t call_tmp_chpl48;
  _ref_uint8_t_chpl call_tmp_chpl49 = NULL;
  int64_t numCodepoints_chpl;
  int64_t call_tmp_chpl50;
  string_chpl ret_chpl5;
  string_chpl ret_chpl6;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__nilType chpl_macro_tmp_1881;
  chpl____wide_Error chpl_macro_tmp_1882;
  chpl____wide__ref_string chpl_macro_tmp_1883;
  if ((x_chpl2)->buffLen == INT64(0)) {
    init_chpl73(&ret_chpl2);
    ret_chpl = ret_chpl2;
    goto _end_getSlice_chpl;
  }
  chpl_macro_tmp_1881.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1881.addr = nil;
  chpl_macro_tmp_1882.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1882.addr = NULL;
  error_chpl = chpl_macro_tmp_1882;
  chpl_macro_tmp_1883.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1883.addr = x_chpl2;
  tmp_chpl15 = chpl_macro_tmp_1883;
  tmp_chpl16 = &error_chpl;
  getView_chpl6(tmp_chpl15, r_chpl, tmp_chpl16, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  if ((&error_chpl)->addr != nil) {
    *(error_out_chpl) = error_chpl;
    goto _end_getSlice_chpl;
  }
  tmp_chpl17 = (&call_tmp_chpl36)->x0;
  tmp_x0_chpl = tmp_chpl17;
  tmp_x1_chpl = (&call_tmp_chpl36)->x1;
  r2_chpl = tmp_x0_chpl;
  call_tmp_chpl37 = size_chpl2(tmp_x0_chpl);
  if (call_tmp_chpl37 <= INT64(0)) {
    init_chpl73(&ret_chpl3);
    ret_chpl = ret_chpl3;
    goto _end_getSlice_chpl;
  }
  call_tmp_chpl38 = (((int64_t)(((&r2_chpl)->_high - (&r2_chpl)->_low))) + INT64(1));
  coerce_tmp_chpl3 = (&r2_chpl)->_low;
  coerce_tmp_chpl4 = (x_chpl2)->buff;
  coerce_tmp_chpl5 = (x_chpl2)->locale_id;
  call_tmp_chpl40 = get_chpl_nodeID();
  if (coerce_tmp_chpl5 != call_tmp_chpl40) {
    call_tmp_chpl41 = bufferCopyRemote_chpl(((int64_t)(coerce_tmp_chpl5)), (coerce_tmp_chpl4 + coerce_tmp_chpl3), call_tmp_chpl38);
    (&ret_chpl4)->x0 = call_tmp_chpl41;
    (&ret_chpl4)->x1 = call_tmp_chpl38;
    goto _end_bufferCopy_chpl;
  } else {
    call_tmp_chpl42 = (coerce_tmp_chpl4 + coerce_tmp_chpl3);
    call_tmp_chpl43 = chpl_here_good_alloc_size(((int64_t)((call_tmp_chpl38 + INT64(1)))), INT64(491), INT32(47));
    if (call_tmp_chpl43 > INT64(0)) {
      tmp_chpl18 = call_tmp_chpl43;
    } else {
      tmp_chpl18 = INT64(0);
    }
    call_tmp_chpl44 = offset_STR_COPY_DATA_chpl();
    cast_tmp_chpl = chpl_here_alloc(tmp_chpl18, call_tmp_chpl44, INT64(491), INT32(47));
    call_tmp_chpl45 = ((c_ptr_uint8_t_chpl)(cast_tmp_chpl));
    dst_chpl = call_tmp_chpl45;
    call_tmp_chpl46 = ((uint64_t)(call_tmp_chpl38));
    coerce_tmp_chpl6 = ((c_void_ptr)((call_tmp_chpl45 + INT64(0))));
    coerce_tmp_chpl7 = ((c_void_ptr)((call_tmp_chpl42 + INT64(0))));
    checkValue_chpl4();
    memcpy(coerce_tmp_chpl6, coerce_tmp_chpl7, call_tmp_chpl46);
    call_tmp_chpl47 = (dst_chpl + call_tmp_chpl38);
    *(call_tmp_chpl47) = ((uint8_t)(INT64(0)));
    (&ret_chpl4)->x0 = call_tmp_chpl45;
    (&ret_chpl4)->x1 = tmp_chpl18;
    goto _end_bufferCopy_chpl;
  }
  _end_bufferCopy_chpl:;
  call_tmp_chpl39 = ret_chpl4;
  tmp_x0_chpl2 = (&call_tmp_chpl39)->x0;
  tmp_x1_chpl2 = (&call_tmp_chpl39)->x1;
  buff_chpl = tmp_x0_chpl2;
  call_tmp_chpl48 = size_chpl2(r2_chpl);
  call_tmp_chpl49 = (buff_chpl + call_tmp_chpl48);
  *(call_tmp_chpl49) = ((uint8_t)(INT64(0)));
  numCodepoints_chpl = tmp_x1_chpl;
  if (tmp_x1_chpl == INT64(-1)) {
    call_tmp_chpl50 = countNumCodepoints_chpl(tmp_x0_chpl2, call_tmp_chpl48);
    numCodepoints_chpl = call_tmp_chpl50;
  }
  init_chpl73(&ret_chpl6);
  i_x_chpl = &ret_chpl6;
  (i_x_chpl)->isOwned = UINT8(true);
  (i_x_chpl)->buff = tmp_x0_chpl2;
  (i_x_chpl)->buffSize = tmp_x1_chpl2;
  (i_x_chpl)->buffLen = call_tmp_chpl48;
  (&ret_chpl6)->cachedNumCodepoints = numCodepoints_chpl;
  ret_chpl5 = ret_chpl6;
  ret_chpl = ret_chpl5;
  _end_getSlice_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* BytesStringCommon.chpl:531 */
static void doReplace_chpl(string_chpl * x_chpl2,
                           string_chpl * needle_chpl,
                           string_chpl * replacement_chpl,
                           int64_t count_chpl,
                           string_chpl * _retArg_chpl) {
  string_chpl ret_chpl;
  string_chpl result_chpl;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t found_chpl;
  byteIndex_chpl startIdx_chpl;
  string_chpl ret_chpl2;
  int32_t call_tmp_chpl36;
  string_chpl ret_chpl3;
  string_chpl ret_chpl4;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl x_chpl3;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl localNeedle_chpl;
  string_chpl ret_chpl5;
  int32_t call_tmp_chpl37;
  string_chpl ret_chpl6;
  string_chpl ret_chpl7;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl x_chpl4;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl localReplacement_chpl;
  chpl_bool tmp_chpl20;
  chpl_bool tmp_chpl21;
  range_byteIndex_boundedLow_F_chpl call_tmp_chpl38;
  range_byteIndex_boundedLow_F_chpl ret_tmp_chpl;
  _ref_string_chpl i_this_chpl = NULL;
  _ref_string_chpl i_pattern_chpl = NULL;
  byteIndex_chpl ret_chpl8;
  int64_t ret_chpl9;
  int64_t tmp_chpl22;
  int64_t tmp_chpl23;
  int64_t call_tmp_chpl39;
  byteIndex_chpl ret_chpl10;
  byteIndex_chpl cpi_chpl;
  int64_t call_tmp_chpl40;
  byteIndex_chpl ret_chpl11;
  byteIndex_chpl cpi_chpl2;
  byteIndex_chpl idx_chpl;
  _ref_int64_t_chpl i_lhs_chpl = NULL;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  byteIndex_chpl call_tmp_chpl41;
  int64_t call_tmp_chpl42;
  byteIndex_chpl ret_chpl12;
  byteIndex_chpl cpi_chpl3;
  range_byteIndex_boundedHigh_F_chpl call_tmp_chpl43;
  range_byteIndex_boundedHigh_F_chpl ret_tmp_chpl2;
  string_chpl call_tmp_chpl44;
  _ref_string_chpl i_this_chpl2 = NULL;
  string_chpl ret_chpl13;
  string_chpl call_tmp_chpl45;
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_tmp_chpl3;
  _ref__wide_Error_chpl tmp_chpl24 = NULL;
  string_chpl call_tmp_chpl46;
  string_chpl ret_tmp_chpl4;
  chpl____wide__ref_string tmp_chpl25 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl26;
  byteIndex_chpl call_tmp_chpl47;
  int64_t call_tmp_chpl48;
  byteIndex_chpl ret_chpl14;
  byteIndex_chpl cpi_chpl4;
  range_byteIndex_boundedLow_F_chpl call_tmp_chpl49;
  range_byteIndex_boundedLow_F_chpl ret_tmp_chpl5;
  string_chpl call_tmp_chpl50;
  _ref_string_chpl i_this_chpl3 = NULL;
  string_chpl ret_chpl15;
  string_chpl call_tmp_chpl51;
  chpl____wide_Error error_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_tmp_chpl6;
  _ref__wide_Error_chpl tmp_chpl27 = NULL;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl28 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl29 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl52;
  string_chpl ret_tmp_chpl7;
  chpl____wide__ref_string tmp_chpl30 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl31 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl32 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl33 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl5 = NULL;
  chpl____wide__ref_string tmp_chpl34 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl6 = NULL;
  chpl____wide__ref_string tmp_chpl35 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl36;
  byteIndex_chpl call_tmp_chpl53;
  int64_t call_tmp_chpl54;
  byteIndex_chpl ret_chpl16;
  byteIndex_chpl cpi_chpl5;
  chpl_bool tmp_chpl37;
  _ref_string_chpl i_x_chpl7 = NULL;
  chpl____wide__ref_string tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl8 = NULL;
  chpl____wide__ref_string tmp_chpl39 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_1884;
  chpl____wide__ref_string chpl_macro_tmp_1885;
  chpl____wide__ref_string chpl_macro_tmp_1886;
  chpl____wide__ref_string chpl_macro_tmp_1887;
  chpl____wide__ref_string chpl_macro_tmp_1888;
  chpl____wide__nilType chpl_macro_tmp_1889;
  chpl____wide_Error chpl_macro_tmp_1890;
  chpl____wide__nilType chpl_macro_tmp_1891;
  chpl____wide_Error chpl_macro_tmp_1892;
  chpl____wide__ref_string chpl_macro_tmp_1893;
  chpl____wide__nilType chpl_macro_tmp_1894;
  chpl____wide_Error chpl_macro_tmp_1895;
  chpl____wide__ref_string chpl_macro_tmp_1896;
  chpl____wide__ref_string chpl_macro_tmp_1897;
  chpl____wide__ref_string chpl_macro_tmp_1898;
  chpl____wide__ref_string chpl_macro_tmp_1899;
  chpl____wide__ref_string chpl_macro_tmp_1900;
  chpl____wide__ref_string chpl_macro_tmp_1901;
  chpl____wide__ref_string chpl_macro_tmp_1902;
  chpl____wide__ref_string chpl_macro_tmp_1903;
  chpl____wide__ref_string chpl_macro_tmp_1904;
  chpl____wide__ref_string chpl_macro_tmp_1905;
  chpl_macro_tmp_1884.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1884.addr = x_chpl2;
  tmp_chpl15 = chpl_macro_tmp_1884;
  init_ASSIGN__chpl21(&result_chpl, tmp_chpl15);
  found_chpl = INT64(0);
  init_ASSIGN__chpl20(&startIdx_chpl, INT64(0));
  call_tmp_chpl36 = get_chpl_nodeID();
  if ((needle_chpl)->locale_id == call_tmp_chpl36) {
    init_chpl73(&ret_chpl4);
    (&ret_chpl4)->cachedNumCodepoints = (needle_chpl)->cachedNumCodepoints;
    chpl_macro_tmp_1885.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1885.addr = needle_chpl;
    tmp_chpl16 = chpl_macro_tmp_1885;
    initWithBorrowedBuffer_chpl(&ret_chpl4, tmp_chpl16);
    ret_chpl3 = ret_chpl4;
    ret_chpl2 = ret_chpl3;
    goto _end_localize_chpl;
  } else {
    chpl_macro_tmp_1886.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1886.addr = needle_chpl;
    tmp_chpl17 = chpl_macro_tmp_1886;
    init_ASSIGN__chpl21(&x_chpl3, tmp_chpl17);
    ret_chpl2 = x_chpl3;
    goto _end_localize_chpl;
  }
  _end_localize_chpl:;
  localNeedle_chpl = ret_chpl2;
  call_tmp_chpl37 = get_chpl_nodeID();
  if ((replacement_chpl)->locale_id == call_tmp_chpl37) {
    init_chpl73(&ret_chpl7);
    (&ret_chpl7)->cachedNumCodepoints = (replacement_chpl)->cachedNumCodepoints;
    chpl_macro_tmp_1887.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1887.addr = replacement_chpl;
    tmp_chpl18 = chpl_macro_tmp_1887;
    initWithBorrowedBuffer_chpl(&ret_chpl7, tmp_chpl18);
    ret_chpl6 = ret_chpl7;
    ret_chpl5 = ret_chpl6;
    goto _end_localize_chpl2;
  } else {
    chpl_macro_tmp_1888.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1888.addr = replacement_chpl;
    tmp_chpl19 = chpl_macro_tmp_1888;
    init_ASSIGN__chpl21(&x_chpl4, tmp_chpl19);
    ret_chpl5 = x_chpl4;
    goto _end_localize_chpl2;
  }
  _end_localize_chpl2:;
  localReplacement_chpl = ret_chpl5;
  if (count_chpl < INT64(0)) {
    tmp_chpl21 = UINT8(true);
  } else {
    tmp_chpl21 = (INT64(0) < count_chpl);
  }
  tmp_chpl20 = tmp_chpl21;
  while (tmp_chpl20) {
    chpl_build_low_bounded_range2(&startIdx_chpl, &ret_tmp_chpl);
    call_tmp_chpl38 = ret_tmp_chpl;
    i_this_chpl = &result_chpl;
    i_pattern_chpl = &localNeedle_chpl;
    tmp_chpl22 = (&result_chpl)->cachedNumCodepoints;
    ret_chpl9 = tmp_chpl22;
    tmp_chpl23 = (&result_chpl)->buffLen;
    if (ret_chpl9 == tmp_chpl23) {
      call_tmp_chpl39 = doSearchNoEnc_chpl(i_this_chpl, i_pattern_chpl, call_tmp_chpl38);
      init_chpl71(&cpi_chpl);
      (&cpi_chpl)->_bindex = call_tmp_chpl39;
      ret_chpl10 = cpi_chpl;
      ret_chpl8 = ret_chpl10;
      goto _end_find_chpl;
    } else {
      call_tmp_chpl40 = doSearchUTF8_chpl(i_this_chpl, i_pattern_chpl, call_tmp_chpl38);
      init_chpl71(&cpi_chpl2);
      (&cpi_chpl2)->_bindex = call_tmp_chpl40;
      ret_chpl11 = cpi_chpl2;
      ret_chpl8 = ret_chpl11;
      goto _end_find_chpl;
    }
    _end_find_chpl:;
    idx_chpl = ret_chpl8;
    if ((&idx_chpl)->_bindex == INT64(-1)) {
      goto _breakLabel_chpl;
    }
    i_lhs_chpl = &found_chpl;
    *(i_lhs_chpl) += INT64(1);
    chpl_macro_tmp_1889.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1889.addr = nil;
    chpl_macro_tmp_1890.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1890.addr = NULL;
    error_chpl = chpl_macro_tmp_1890;
    call_tmp_chpl42 = ((&idx_chpl)->_bindex - INT64(1));
    init_chpl71(&cpi_chpl3);
    (&cpi_chpl3)->_bindex = call_tmp_chpl42;
    ret_chpl12 = cpi_chpl3;
    call_tmp_chpl41 = ret_chpl12;
    chpl_build_high_bounded_range(&call_tmp_chpl41, &ret_tmp_chpl2);
    call_tmp_chpl43 = ret_tmp_chpl2;
    i_this_chpl2 = &result_chpl;
    chpl_macro_tmp_1891.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1891.addr = nil;
    chpl_macro_tmp_1892.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1892.addr = NULL;
    error_chpl2 = chpl_macro_tmp_1892;
    tmp_chpl24 = &error_chpl2;
    getSlice_chpl5(i_this_chpl2, call_tmp_chpl43, tmp_chpl24, &ret_tmp_chpl3);
    call_tmp_chpl45 = ret_tmp_chpl3;
    if ((&error_chpl2)->addr != nil) {
      error_chpl = error_chpl2;
      goto _endthis_chpl;
    }
    ret_chpl13 = call_tmp_chpl45;
    _endthis_chpl:;
    call_tmp_chpl44 = ret_chpl13;
    if ((&error_chpl)->addr != nil) {
      goto handler_chpl;
    }
    chpl_macro_tmp_1893.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1893.addr = &localReplacement_chpl;
    tmp_chpl25 = chpl_macro_tmp_1893;
    chpl___PLUS_(&call_tmp_chpl44, tmp_chpl25, &ret_tmp_chpl4);
    call_tmp_chpl46 = ret_tmp_chpl4;
    tmp_chpl26 = (&localNeedle_chpl)->buffLen;
    call_tmp_chpl48 = ((&idx_chpl)->_bindex + tmp_chpl26);
    init_chpl71(&cpi_chpl4);
    (&cpi_chpl4)->_bindex = call_tmp_chpl48;
    ret_chpl14 = cpi_chpl4;
    call_tmp_chpl47 = ret_chpl14;
    chpl_build_low_bounded_range2(&call_tmp_chpl47, &ret_tmp_chpl5);
    call_tmp_chpl49 = ret_tmp_chpl5;
    i_this_chpl3 = &result_chpl;
    chpl_macro_tmp_1894.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1894.addr = nil;
    chpl_macro_tmp_1895.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1895.addr = NULL;
    error_chpl3 = chpl_macro_tmp_1895;
    tmp_chpl27 = &error_chpl3;
    getSlice_chpl3(i_this_chpl3, call_tmp_chpl49, tmp_chpl27, &ret_tmp_chpl6);
    call_tmp_chpl51 = ret_tmp_chpl6;
    if ((&error_chpl3)->addr != nil) {
      error_chpl = error_chpl3;
      goto _endthis_chpl2;
    }
    ret_chpl15 = call_tmp_chpl51;
    _endthis_chpl2:;
    call_tmp_chpl50 = ret_chpl15;
    if ((&error_chpl)->addr != nil) {
      i_x_chpl = &call_tmp_chpl46;
      chpl_macro_tmp_1896.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1896.addr = i_x_chpl;
      tmp_chpl28 = chpl_macro_tmp_1896;
      deinit_chpl42(tmp_chpl28);
      i_x_chpl2 = &call_tmp_chpl44;
      chpl_macro_tmp_1897.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1897.addr = i_x_chpl2;
      tmp_chpl29 = chpl_macro_tmp_1897;
      deinit_chpl42(tmp_chpl29);
      goto handler_chpl;
    }
    chpl_macro_tmp_1898.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1898.addr = &call_tmp_chpl50;
    tmp_chpl30 = chpl_macro_tmp_1898;
    chpl___PLUS_(&call_tmp_chpl46, tmp_chpl30, &ret_tmp_chpl7);
    call_tmp_chpl52 = ret_tmp_chpl7;
    chpl_macro_tmp_1899.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1899.addr = &result_chpl;
    tmp_chpl31 = chpl_macro_tmp_1899;
    chpl___ASSIGN_6(tmp_chpl31, &call_tmp_chpl52);
    i_x_chpl3 = &call_tmp_chpl52;
    chpl_macro_tmp_1900.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1900.addr = i_x_chpl3;
    tmp_chpl32 = chpl_macro_tmp_1900;
    deinit_chpl42(tmp_chpl32);
    i_x_chpl4 = &call_tmp_chpl50;
    chpl_macro_tmp_1901.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1901.addr = i_x_chpl4;
    tmp_chpl33 = chpl_macro_tmp_1901;
    deinit_chpl42(tmp_chpl33);
    i_x_chpl5 = &call_tmp_chpl46;
    chpl_macro_tmp_1902.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1902.addr = i_x_chpl5;
    tmp_chpl34 = chpl_macro_tmp_1902;
    deinit_chpl42(tmp_chpl34);
    i_x_chpl6 = &call_tmp_chpl44;
    chpl_macro_tmp_1903.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1903.addr = i_x_chpl6;
    tmp_chpl35 = chpl_macro_tmp_1903;
    deinit_chpl42(tmp_chpl35);
    handler_chpl:;
    if ((&error_chpl)->addr != nil) {
      chpl_uncaught_error(error_chpl, INT64(548), INT32(47));
    }
    tmp_chpl36 = (&localReplacement_chpl)->buffLen;
    call_tmp_chpl54 = ((&idx_chpl)->_bindex + tmp_chpl36);
    init_chpl71(&cpi_chpl5);
    (&cpi_chpl5)->_bindex = call_tmp_chpl54;
    ret_chpl16 = cpi_chpl5;
    call_tmp_chpl53 = ret_chpl16;
    chpl___ASSIGN_5(&startIdx_chpl, &call_tmp_chpl53);
    if (count_chpl < INT64(0)) {
      tmp_chpl37 = UINT8(true);
    } else {
      tmp_chpl37 = (found_chpl < count_chpl);
    }
    tmp_chpl20 = tmp_chpl37;
  }
  _breakLabel_chpl:;
  ret_chpl = result_chpl;
  i_x_chpl7 = &localReplacement_chpl;
  chpl_macro_tmp_1904.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1904.addr = i_x_chpl7;
  tmp_chpl38 = chpl_macro_tmp_1904;
  deinit_chpl42(tmp_chpl38);
  i_x_chpl8 = &localNeedle_chpl;
  chpl_macro_tmp_1905.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1905.addr = i_x_chpl8;
  tmp_chpl39 = chpl_macro_tmp_1905;
  deinit_chpl42(tmp_chpl39);
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* BytesStringCommon.chpl:718 */
static int64_t doSearchNoEnc_chpl(string_chpl * x_chpl2,
                                  string_chpl * needle_chpl,
                                  range_byteIndex_boundedLow_F_chpl region_chpl) {
  int64_t ret_chpl;
  int64_t ret_chpl2;
  chpl_localeID_t call_tmp_chpl36;
  chpl_localeID_t call_tmp_chpl37;
  chpl____serializeHelper needle_data_chpl;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl13 _args_foron_fn_chpl = NULL;
  _ref_string_chpl tmp_chpl17 = NULL;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t_chpl tmp_chpl19 = NULL;
  chpl____wide__ref_int64_t tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_string chpl_macro_tmp_1906;
  chpl____wide__ref_int64_t chpl_macro_tmp_1907;
  chpl__class_localson_fn_chpl13_object chpl_macro_tmp_1908;
  chpl____wide__ref_string chpl_macro_tmp_1909;
  chpl____wide__ref_int64_t chpl_macro_tmp_1910;
  ret_chpl2 = INT64(-1);
  call_tmp_chpl36 = chpl_buildLocaleID((x_chpl2)->locale_id, c_sublocid_any, INT64(725), INT32(47));
  call_tmp_chpl37 = call_tmp_chpl36;
  chpl_rmem_consist_release(INT64(724), INT32(47));
  chpl__serialize3(needle_chpl, &needle_data_chpl);
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
  if (isdirect_chpl) {
    chpl_macro_tmp_1906.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1906.addr = x_chpl2;
    tmp_chpl15 = chpl_macro_tmp_1906;
    chpl_macro_tmp_1907.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1907.addr = &ret_chpl2;
    tmp_chpl16 = chpl_macro_tmp_1907;
    on_fn_chpl13(tmp_chpl15, &needle_data_chpl, region_chpl, tmp_chpl16);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl13)(&chpl_macro_tmp_1908));
    chpl_check_nil(_args_foron_fn_chpl, INT64(724), INT32(47));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
    tmp_chpl17 = x_chpl2;
    chpl_macro_tmp_1909.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1909.addr = tmp_chpl17;
    tmp_chpl18 = chpl_macro_tmp_1909;
    chpl_check_nil(_args_foron_fn_chpl, INT64(724), INT32(47));
    (_args_foron_fn_chpl)->_1_x = tmp_chpl18;
    chpl_check_nil(_args_foron_fn_chpl, INT64(724), INT32(47));
    (_args_foron_fn_chpl)->_2_needle_data = needle_data_chpl;
    chpl_check_nil(_args_foron_fn_chpl, INT64(724), INT32(47));
    (_args_foron_fn_chpl)->_3_region = region_chpl;
    tmp_chpl19 = &ret_chpl2;
    chpl_macro_tmp_1910.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1910.addr = tmp_chpl19;
    tmp_chpl20 = chpl_macro_tmp_1910;
    chpl_check_nil(_args_foron_fn_chpl, INT64(724), INT32(47));
    (_args_foron_fn_chpl)->_4_ret = tmp_chpl20;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl13_object);
    chpl_taskRunningCntDec(INT64(724), INT32(47));
    /*** wrapon_fn_chpl13 ***/ chpl_executeOn(call_tmp_chpl37, INT32(15), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(724), INT32(47));
    chpl_taskRunningCntInc(INT64(724), INT32(47));
  }
  chpl_rmem_consist_acquire(INT64(724), INT32(47));
  ret_chpl = ret_chpl2;
  return ret_chpl;
}

/* BytesStringCommon.chpl:724 */
static void wrapon_fn_chpl13(_class_localson_fn_chpl13 c_chpl) {
  chpl____wide__ref_string _1_x_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____serializeHelper _2_needle_data_chpl;
  chpl____serializeHelper tmp_chpl15;
  range_byteIndex_boundedLow_F_chpl _3_region_chpl;
  range_byteIndex_boundedLow_F_chpl tmp_chpl16;
  chpl____wide__ref_int64_t _4_ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(724), INT32(47));
  chpl_check_nil(c_chpl, INT64(724), INT32(47));
  _1_x_chpl = (c_chpl)->_1_x;
  chpl_check_nil(c_chpl, INT64(724), INT32(47));
  tmp_chpl15 = (c_chpl)->_2_needle_data;
  _2_needle_data_chpl = tmp_chpl15;
  chpl_check_nil(c_chpl, INT64(724), INT32(47));
  tmp_chpl16 = (c_chpl)->_3_region;
  _3_region_chpl = tmp_chpl16;
  chpl_check_nil(c_chpl, INT64(724), INT32(47));
  _4_ret_chpl = (c_chpl)->_4_ret;
  chpl_taskRunningCntInc(INT64(724), INT32(47));
  on_fn_chpl13(_1_x_chpl, &_2_needle_data_chpl, _3_region_chpl, _4_ret_chpl);
  chpl_taskRunningCntDec(INT64(724), INT32(47));
  chpl_rmem_consist_release(INT64(724), INT32(47));
  return;
}

/* BytesStringCommon.chpl:724 */
static void on_fn_chpl13(chpl____wide__ref_string x_chpl2,
                         chpl____serializeHelper * needle_chpl,
                         range_byteIndex_boundedLow_F_chpl region_chpl,
                         chpl____wide__ref_int64_t ret_chpl) {
  string_chpl local__str_literal_596_chpl;
  string_chpl needle_chpl2;
  _ref_string_chpl needle_chpl3 = NULL;
  _ref_string_chpl tmp_chpl15 = NULL;
  int64_t localRet_chpl;
  int64_t nLen_chpl;
  int64_t coerce_tmp_chpl3;
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl call_tmp_chpl36;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_2_range_int64_t_bounded_F_int64_t_chpl ret_tmp_chpl;
  _ref__wide_Error_chpl tmp_chpl16 = NULL;
  range_int64_t_bounded_F_chpl tmp_x0_chpl;
  range_int64_t_bounded_F_chpl tmp_chpl17;
  range_int64_t_bounded_F_chpl view_chpl;
  int64_t call_tmp_chpl37;
  string_chpl ret_chpl2;
  int32_t call_tmp_chpl38;
  string_chpl ret_chpl3;
  string_chpl ret_chpl4;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl x_chpl3;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl localNeedle_chpl;
  int64_t call_tmp_chpl39;
  range_int64_t_bounded_F_chpl tmp_chpl20;
  range_int64_t_boundedLow_F_chpl call_tmp_chpl40;
  range_int64_t_boundedLow_F_chpl ret_tmp_chpl2;
  range_int64_t_bounded_F_chpl ret_tmp_chpl3;
  range_int64_t_bounded_F_chpl _ic__F0_this_chpl;
  int64_t i_chpl;
  range_int64_t_bounded_F_chpl this_chpl7;
  int64_t coerce_tmp_chpl4;
  range_int64_t_bounded_F_chpl this_chpl8;
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
  chpl____wide__nilType chpl_macro_tmp_1911;
  chpl____wide_Error chpl_macro_tmp_1912;
  chpl____wide__ref_string chpl_macro_tmp_1913;
  chpl____wide__ref_string chpl_macro_tmp_1914;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_1915;
  chpl____wide__ref_string chpl_macro_tmp_1916;
  chpl____wide__ref_string chpl_macro_tmp_1917;
  local__str_literal_596_chpl = _str_literal_596_chpl /* "With a negative count, the range must have a last index." */;
  tmp_chpl15 = &needle_chpl2;
  chpl__deserialize3(needle_chpl, tmp_chpl15);
  needle_chpl3 = &needle_chpl2;
  localRet_chpl = INT64(-2);
  coerce_tmp_chpl3 = (&needle_chpl2)->buffLen;
  nLen_chpl = coerce_tmp_chpl3;
  chpl_macro_tmp_1911.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1911.addr = nil;
  chpl_macro_tmp_1912.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1912.addr = NULL;
  error_chpl = chpl_macro_tmp_1912;
  tmp_chpl16 = &error_chpl;
  getView_chpl6(x_chpl2, region_chpl, tmp_chpl16, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, INT64(733), INT32(47));
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
    if ((&needle_chpl2)->locale_id == call_tmp_chpl38) {
      init_chpl73(&ret_chpl4);
      (&ret_chpl4)->cachedNumCodepoints = (&needle_chpl2)->cachedNumCodepoints;
      chpl_macro_tmp_1913.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1913.addr = needle_chpl3;
      tmp_chpl18 = chpl_macro_tmp_1913;
      initWithBorrowedBuffer_chpl(&ret_chpl4, tmp_chpl18);
      ret_chpl3 = ret_chpl4;
      ret_chpl2 = ret_chpl3;
      goto _end_localize_chpl;
    } else {
      chpl_macro_tmp_1914.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1914.addr = needle_chpl3;
      tmp_chpl19 = chpl_macro_tmp_1914;
      init_ASSIGN__chpl21(&x_chpl3, tmp_chpl19);
      ret_chpl2 = x_chpl3;
      goto _end_localize_chpl;
    }
    _end_localize_chpl:;
    localNeedle_chpl = ret_chpl2;
    call_tmp_chpl39 = (((int64_t)((call_tmp_chpl37 - coerce_tmp_chpl3))) + INT64(1));
    chpl_build_low_bounded_range(INT64(0), &ret_tmp_chpl2);
    call_tmp_chpl40 = ret_tmp_chpl2;
    chpl___POUND_(call_tmp_chpl40, call_tmp_chpl39, &ret_tmp_chpl3);
    tmp_chpl20 = ret_tmp_chpl3;
    _ic__F0_this_chpl = tmp_chpl20;
    checkIfIterWillOverflow_chpl(tmp_chpl20, UINT8(true));
    i_chpl = INT64(0);
    this_chpl7 = _ic__F0_this_chpl;
    coerce_tmp_chpl4 = (&this_chpl7)->_low;
    this_chpl8 = _ic__F0_this_chpl;
    end_chpl = (&this_chpl8)->_high;
    call_tmp_chpl41 = (nLen_chpl < INT64(0));
    call_tmp_chpl42 = (nLen_chpl == INT64(0));
    for (i_chpl = coerce_tmp_chpl4; ((i_chpl <= end_chpl)); i_chpl += INT64(1)) {
      i_chpl2 = i_chpl;
      if (call_tmp_chpl41) {
        boundsCheckHalt_chpl(&local__str_literal_596_chpl, INT64(770), INT32(47));
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
        chpl_macro_tmp_1915.locale = (x_chpl2).locale;
        chpl_macro_tmp_1915.addr = &(((x_chpl2).addr)->buff);
        chpl_gen_comm_get(((void*)(&tmp_chpl21)), chpl_nodeFromLocaleID((chpl_macro_tmp_1915).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1915).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(16), INT64(772), INT64(47));
        coerce_tmp_chpl5 = tmp_chpl21;
        call_tmp_chpl44 = (coerce_tmp_chpl5 + call_tmp_chpl43);
        coerce_tmp_chpl6 = (&localNeedle_chpl)->buff;
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
    i_x_chpl = &localNeedle_chpl;
    chpl_macro_tmp_1916.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1916.addr = i_x_chpl;
    tmp_chpl22 = chpl_macro_tmp_1916;
    deinit_chpl42(tmp_chpl22);
  }
  chpl_gen_comm_put(((void*)(&localRet_chpl)), chpl_nodeFromLocaleID((ret_chpl).locale, INT64(0), INT32(0)), (ret_chpl).addr, sizeof(int64_t), COMMID(17), INT64(786), INT64(47));
  i_x_chpl2 = &needle_chpl2;
  chpl_macro_tmp_1917.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1917.addr = i_x_chpl2;
  tmp_chpl23 = chpl_macro_tmp_1917;
  deinit_chpl42(tmp_chpl23);
  return;
}

/* BytesStringCommon.chpl:1027 */
static void doAppend_chpl(string_chpl * lhs_chpl,
                          string_chpl * rhs_chpl) {
  chpl_localeID_t call_tmp_chpl36;
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl14 _args_foron_fn_chpl = NULL;
  _ref_string_chpl tmp_chpl17 = NULL;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl tmp_chpl19 = NULL;
  chpl____wide__ref_string tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_string chpl_macro_tmp_1918;
  chpl____wide__ref_string chpl_macro_tmp_1919;
  chpl__class_localson_fn_chpl14_object chpl_macro_tmp_1920;
  chpl____wide__ref_string chpl_macro_tmp_1921;
  chpl____wide__ref_string chpl_macro_tmp_1922;
  if ((rhs_chpl)->buffLen == INT64(0)) {
    goto _end_doAppend_chpl;
  }
  call_tmp_chpl36 = chpl_buildLocaleID((lhs_chpl)->locale_id, c_sublocid_any, INT64(1034), INT32(47));
  call_tmp_chpl37 = call_tmp_chpl36;
  chpl_rmem_consist_release(INT64(1033), INT32(47));
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
  if (isdirect_chpl) {
    chpl_macro_tmp_1918.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1918.addr = lhs_chpl;
    tmp_chpl15 = chpl_macro_tmp_1918;
    chpl_macro_tmp_1919.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1919.addr = rhs_chpl;
    tmp_chpl16 = chpl_macro_tmp_1919;
    on_fn_chpl14(tmp_chpl15, tmp_chpl16);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl14)(&chpl_macro_tmp_1920));
    chpl_check_nil(_args_foron_fn_chpl, INT64(1033), INT32(47));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
    tmp_chpl17 = lhs_chpl;
    chpl_macro_tmp_1921.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1921.addr = tmp_chpl17;
    tmp_chpl18 = chpl_macro_tmp_1921;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1033), INT32(47));
    (_args_foron_fn_chpl)->_1_lhs = tmp_chpl18;
    tmp_chpl19 = rhs_chpl;
    chpl_macro_tmp_1922.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1922.addr = tmp_chpl19;
    tmp_chpl20 = chpl_macro_tmp_1922;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1033), INT32(47));
    (_args_foron_fn_chpl)->_2_rhs = tmp_chpl20;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl14_object);
    chpl_taskRunningCntDec(INT64(1033), INT32(47));
    /*** wrapon_fn_chpl14 ***/ chpl_executeOn(call_tmp_chpl37, INT32(16), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1033), INT32(47));
    chpl_taskRunningCntInc(INT64(1033), INT32(47));
  }
  chpl_rmem_consist_acquire(INT64(1033), INT32(47));
  _end_doAppend_chpl:;
  return;
}

/* BytesStringCommon.chpl:1033 */
static void on_fn_chpl14(chpl____wide__ref_string lhs_chpl,
                         chpl____wide__ref_string rhs_chpl) {
  string_chpl local__str_literal_1329_chpl;
  chpl_bool call_tmp_chpl36;
  int64_t tmp_chpl15;
  int64_t tmp_chpl16;
  int64_t tmp_chpl17;
  int64_t tmp_chpl18;
  int64_t call_tmp_chpl37;
  int64_t tmp_chpl19;
  int64_t call_tmp_chpl38;
  int64_t tmp_chpl20;
  int64_t call_tmp_chpl39;
  int64_t tmp_chpl21;
  chpl_bool tmp_chpl22;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl call_tmp_chpl40;
  c_ptr_uint8_t_chpl tmp_chpl23 = NULL;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl ret_tmp_chpl;
  int64_t tmp_x1_chpl;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl call_tmp_chpl41;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl ret_chpl;
  int64_t call_tmp_chpl42;
  int64_t tmp_chpl24;
  int16_t call_tmp_chpl43;
  c_void_ptr cast_tmp_chpl;
  c_ptr_uint8_t_chpl tmp_x0_chpl = NULL;
  int64_t tmp_x1_chpl2;
  c_ptr_uint8_t_chpl tmp_chpl25 = NULL;
  int64_t tmp_chpl26;
  uint64_t call_tmp_chpl44;
  c_void_ptr coerce_tmp_chpl3;
  c_void_ptr coerce_tmp_chpl4;
  c_ptr_uint8_t_chpl coerce_tmp_chpl5 = NULL;
  c_ptr_uint8_t_chpl tmp_chpl27 = NULL;
  int32_t tmp_chpl28;
  int64_t coerce_tmp_chpl6;
  c_ptr_uint8_t_chpl coerce_tmp_chpl7 = NULL;
  c_ptr_uint8_t_chpl tmp_chpl29 = NULL;
  int64_t coerce_tmp_chpl8;
  int64_t tmp_chpl30;
  int64_t coerce_tmp_chpl9;
  int64_t tmp_chpl31;
  int32_t call_tmp_chpl45;
  c_ptr_uint8_t_chpl call_tmp_chpl46 = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl47 = NULL;
  c_void_ptr coerce_tmp_chpl10;
  c_void_ptr coerce_tmp_chpl11;
  c_ptr_uint8_t_chpl coerce_tmp_chpl12 = NULL;
  c_ptr_uint8_t_chpl tmp_chpl32 = NULL;
  _ref_uint8_t_chpl call_tmp_chpl48 = NULL;
  chpl____wide__ref_int64_t call_tmp_chpl49 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl33;
  chpl____wide__ref_int64_t chpl_macro_tmp_1923;
  chpl____wide__ref_int64_t chpl_macro_tmp_1924;
  chpl____wide__ref_int64_t chpl_macro_tmp_1925;
  chpl____wide__ref_int64_t chpl_macro_tmp_1926;
  chpl____wide__ref_int64_t chpl_macro_tmp_1927;
  chpl____wide__ref_int64_t chpl_macro_tmp_1928;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1929;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_1930;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_1931;
  chpl____wide__ref_int64_t chpl_macro_tmp_1932;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_1933;
  chpl____wide__ref_int64_t chpl_macro_tmp_1934;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_1935;
  chpl____wide__ref_int64_t chpl_macro_tmp_1936;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1937;
  chpl_bool chpl_macro_tmp_1938;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_1939;
  chpl____wide__ref_int32_t chpl_macro_tmp_1940;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_1941;
  chpl____wide__ref_int64_t chpl_macro_tmp_1942;
  chpl____wide__ref_int64_t chpl_macro_tmp_1943;
  chpl____wide__ref_int64_t chpl_macro_tmp_1944;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_1945;
  chpl____wide__ref_int64_t chpl_macro_tmp_1946;
  chpl____wide__ref_int64_t chpl_macro_tmp_1947;
  int64_t chpl_macro_tmp_1948;
  local__str_literal_1329_chpl = _str_literal_1329_chpl /* "Buffer overflow allocating string copy data" */;
  chpl_macro_tmp_1923.locale = (lhs_chpl).locale;
  chpl_macro_tmp_1923.addr = &(((lhs_chpl).addr)->buffLen);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1923).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1923).addr, sizeof(int64_t), COMMID(18), INT64(1035), INT64(47));
  chpl_macro_tmp_1924.locale = (rhs_chpl).locale;
  chpl_macro_tmp_1924.addr = &(((rhs_chpl).addr)->buffLen);
  chpl_gen_comm_get(((void*)(&tmp_chpl16)), chpl_nodeFromLocaleID((chpl_macro_tmp_1924).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1924).addr, sizeof(int64_t), COMMID(19), INT64(1035), INT64(47));
  call_tmp_chpl36 = safeAdd_chpl(tmp_chpl15, tmp_chpl16);
  if (! call_tmp_chpl36) {
    halt_chpl(&local__str_literal_1329_chpl, INT64(1036), INT32(47));
  }
  chpl_macro_tmp_1925.locale = (lhs_chpl).locale;
  chpl_macro_tmp_1925.addr = &(((lhs_chpl).addr)->buffLen);
  chpl_gen_comm_get(((void*)(&tmp_chpl17)), chpl_nodeFromLocaleID((chpl_macro_tmp_1925).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1925).addr, sizeof(int64_t), COMMID(20), INT64(1037), INT64(47));
  chpl_macro_tmp_1926.locale = (rhs_chpl).locale;
  chpl_macro_tmp_1926.addr = &(((rhs_chpl).addr)->buffLen);
  chpl_gen_comm_get(((void*)(&tmp_chpl18)), chpl_nodeFromLocaleID((chpl_macro_tmp_1926).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1926).addr, sizeof(int64_t), COMMID(21), INT64(1037), INT64(47));
  call_tmp_chpl37 = (tmp_chpl17 + tmp_chpl18);
  chpl_macro_tmp_1927.locale = (lhs_chpl).locale;
  chpl_macro_tmp_1927.addr = &(((lhs_chpl).addr)->buffSize);
  chpl_gen_comm_get(((void*)(&tmp_chpl19)), chpl_nodeFromLocaleID((chpl_macro_tmp_1927).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1927).addr, sizeof(int64_t), COMMID(22), INT64(1039), INT64(47));
  if (tmp_chpl19 <= call_tmp_chpl37) {
    call_tmp_chpl38 = (call_tmp_chpl37 + INT64(1));
    chpl_macro_tmp_1928.locale = (lhs_chpl).locale;
    chpl_macro_tmp_1928.addr = &(((lhs_chpl).addr)->buffLen);
    chpl_gen_comm_get(((void*)(&tmp_chpl20)), chpl_nodeFromLocaleID((chpl_macro_tmp_1928).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1928).addr, sizeof(int64_t), COMMID(23), INT64(1041), INT64(47));
    call_tmp_chpl39 = ((int64_t)(((_real64)((((_real64)(tmp_chpl20)) * REAL64(0x1.8p+0))))));
    if (call_tmp_chpl38 > call_tmp_chpl39) {
      tmp_chpl21 = call_tmp_chpl38;
    } else {
      tmp_chpl21 = call_tmp_chpl39;
    }
    chpl_macro_tmp_1929.locale = (lhs_chpl).locale;
    chpl_macro_tmp_1929.addr = &(((lhs_chpl).addr)->isOwned);
    chpl_gen_comm_get(((void*)(&tmp_chpl22)), chpl_nodeFromLocaleID((chpl_macro_tmp_1929).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1929).addr, sizeof(chpl_bool), COMMID(24), INT64(1042), INT64(47));
    if (tmp_chpl22) {
      chpl_macro_tmp_1930.locale = (lhs_chpl).locale;
      chpl_macro_tmp_1930.addr = &(((lhs_chpl).addr)->buff);
      chpl_gen_comm_get(((void*)(&tmp_chpl23)), chpl_nodeFromLocaleID((chpl_macro_tmp_1930).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1930).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(25), INT64(1043), INT64(47));
      bufferRealloc_chpl(tmp_chpl23, tmp_chpl21, &ret_tmp_chpl);
      call_tmp_chpl40 = ret_tmp_chpl;
      tmp_x1_chpl = (&call_tmp_chpl40)->x1;
      chpl_macro_tmp_1931.locale = (lhs_chpl).locale;
      chpl_macro_tmp_1931.addr = &(((lhs_chpl).addr)->buff);
      chpl_gen_comm_put(((void*)(&((&call_tmp_chpl40)->x0))), chpl_nodeFromLocaleID((chpl_macro_tmp_1931).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1931).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(26), INT64(1044), INT64(47));
      chpl_macro_tmp_1932.locale = (lhs_chpl).locale;
      chpl_macro_tmp_1932.addr = &(((lhs_chpl).addr)->buffSize);
      chpl_gen_comm_put(((void*)(&tmp_x1_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_1932).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1932).addr, sizeof(int64_t), COMMID(27), INT64(1045), INT64(47));
    } else {
      call_tmp_chpl42 = chpl_here_good_alloc_size(tmp_chpl21, INT64(1047), INT32(47));
      if (call_tmp_chpl42 > INT64(0)) {
        tmp_chpl24 = call_tmp_chpl42;
      } else {
        tmp_chpl24 = INT64(0);
      }
      call_tmp_chpl43 = offset_STR_COPY_DATA_chpl();
      cast_tmp_chpl = chpl_here_alloc(tmp_chpl24, call_tmp_chpl43, INT64(1047), INT32(47));
      (&ret_chpl)->x0 = ((c_ptr_uint8_t_chpl)(cast_tmp_chpl));
      (&ret_chpl)->x1 = tmp_chpl24;
      call_tmp_chpl41 = ret_chpl;
      tmp_x0_chpl = (&call_tmp_chpl41)->x0;
      tmp_x1_chpl2 = (&call_tmp_chpl41)->x1;
      chpl_macro_tmp_1933.locale = (lhs_chpl).locale;
      chpl_macro_tmp_1933.addr = &(((lhs_chpl).addr)->buff);
      chpl_gen_comm_get(((void*)(&tmp_chpl25)), chpl_nodeFromLocaleID((chpl_macro_tmp_1933).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1933).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(28), INT64(1048), INT64(47));
      chpl_macro_tmp_1934.locale = (lhs_chpl).locale;
      chpl_macro_tmp_1934.addr = &(((lhs_chpl).addr)->buffLen);
      chpl_gen_comm_get(((void*)(&tmp_chpl26)), chpl_nodeFromLocaleID((chpl_macro_tmp_1934).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1934).addr, sizeof(int64_t), COMMID(29), INT64(1048), INT64(47));
      call_tmp_chpl44 = ((uint64_t)(tmp_chpl26));
      coerce_tmp_chpl3 = ((c_void_ptr)((tmp_x0_chpl + INT64(0))));
      coerce_tmp_chpl4 = ((c_void_ptr)((tmp_chpl25 + INT64(0))));
      checkValue_chpl4();
      memcpy(coerce_tmp_chpl3, coerce_tmp_chpl4, call_tmp_chpl44);
      chpl_macro_tmp_1935.locale = (lhs_chpl).locale;
      chpl_macro_tmp_1935.addr = &(((lhs_chpl).addr)->buff);
      chpl_gen_comm_put(((void*)(&tmp_x0_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_1935).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1935).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(30), INT64(1049), INT64(47));
      chpl_macro_tmp_1936.locale = (lhs_chpl).locale;
      chpl_macro_tmp_1936.addr = &(((lhs_chpl).addr)->buffSize);
      chpl_gen_comm_put(((void*)(&tmp_x1_chpl2)), chpl_nodeFromLocaleID((chpl_macro_tmp_1936).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1936).addr, sizeof(int64_t), COMMID(31), INT64(1050), INT64(47));
      chpl_macro_tmp_1937.locale = (lhs_chpl).locale;
      chpl_macro_tmp_1937.addr = &(((lhs_chpl).addr)->isOwned);
      chpl_macro_tmp_1938 = UINT8(true);
      chpl_gen_comm_put(((void*)(&chpl_macro_tmp_1938)), chpl_nodeFromLocaleID((chpl_macro_tmp_1937).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1937).addr, sizeof(chpl_bool), COMMID(32), INT64(1051), INT64(47));
    }
  }
  chpl_macro_tmp_1939.locale = (lhs_chpl).locale;
  chpl_macro_tmp_1939.addr = &(((lhs_chpl).addr)->buff);
  chpl_gen_comm_get(((void*)(&tmp_chpl27)), chpl_nodeFromLocaleID((chpl_macro_tmp_1939).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1939).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(33), INT64(1055), INT64(47));
  coerce_tmp_chpl5 = tmp_chpl27;
  chpl_macro_tmp_1940.locale = (rhs_chpl).locale;
  chpl_macro_tmp_1940.addr = &(((rhs_chpl).addr)->locale_id);
  chpl_gen_comm_get(((void*)(&tmp_chpl28)), chpl_nodeFromLocaleID((chpl_macro_tmp_1940).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1940).addr, sizeof(int32_t), COMMID(34), INT64(1055), INT64(47));
  coerce_tmp_chpl6 = ((int64_t)(tmp_chpl28));
  chpl_macro_tmp_1941.locale = (rhs_chpl).locale;
  chpl_macro_tmp_1941.addr = &(((rhs_chpl).addr)->buff);
  chpl_gen_comm_get(((void*)(&tmp_chpl29)), chpl_nodeFromLocaleID((chpl_macro_tmp_1941).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1941).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(35), INT64(1055), INT64(47));
  coerce_tmp_chpl7 = tmp_chpl29;
  chpl_macro_tmp_1942.locale = (rhs_chpl).locale;
  chpl_macro_tmp_1942.addr = &(((rhs_chpl).addr)->buffLen);
  chpl_gen_comm_get(((void*)(&tmp_chpl30)), chpl_nodeFromLocaleID((chpl_macro_tmp_1942).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1942).addr, sizeof(int64_t), COMMID(36), INT64(1055), INT64(47));
  coerce_tmp_chpl8 = tmp_chpl30;
  chpl_macro_tmp_1943.locale = (lhs_chpl).locale;
  chpl_macro_tmp_1943.addr = &(((lhs_chpl).addr)->buffLen);
  chpl_gen_comm_get(((void*)(&tmp_chpl31)), chpl_nodeFromLocaleID((chpl_macro_tmp_1943).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1943).addr, sizeof(int64_t), COMMID(37), INT64(1055), INT64(47));
  coerce_tmp_chpl9 = tmp_chpl31;
  call_tmp_chpl45 = get_chpl_nodeID();
  if (coerce_tmp_chpl6 != ((int64_t)(call_tmp_chpl45))) {
    call_tmp_chpl46 = (coerce_tmp_chpl5 + coerce_tmp_chpl9);
    call_tmp_chpl47 = (coerce_tmp_chpl7 + INT64(0));
    checkValue_chpl(coerce_tmp_chpl8);
    chpl_gen_comm_get(((void*)(call_tmp_chpl46)), coerce_tmp_chpl6, call_tmp_chpl47, ((uint64_t)(coerce_tmp_chpl8)), COMMID(38), INT64(1055), INT32(47));
  } else {
    coerce_tmp_chpl10 = ((c_void_ptr)((coerce_tmp_chpl5 + coerce_tmp_chpl9)));
    coerce_tmp_chpl11 = ((c_void_ptr)((coerce_tmp_chpl7 + INT64(0))));
    checkValue_chpl(coerce_tmp_chpl8);
    memcpy(coerce_tmp_chpl10, coerce_tmp_chpl11, ((uint64_t)(coerce_tmp_chpl8)));
  }
  chpl_macro_tmp_1944.locale = (lhs_chpl).locale;
  chpl_macro_tmp_1944.addr = &(((lhs_chpl).addr)->buffLen);
  chpl_gen_comm_put(((void*)(&call_tmp_chpl37)), chpl_nodeFromLocaleID((chpl_macro_tmp_1944).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1944).addr, sizeof(int64_t), COMMID(39), INT64(1057), INT64(47));
  chpl_macro_tmp_1945.locale = (lhs_chpl).locale;
  chpl_macro_tmp_1945.addr = &(((lhs_chpl).addr)->buff);
  chpl_gen_comm_get(((void*)(&tmp_chpl32)), chpl_nodeFromLocaleID((chpl_macro_tmp_1945).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1945).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(40), INT64(1058), INT64(47));
  coerce_tmp_chpl12 = tmp_chpl32;
  call_tmp_chpl48 = (coerce_tmp_chpl12 + call_tmp_chpl37);
  *(call_tmp_chpl48) = ((uint8_t)(INT64(0)));
  chpl_macro_tmp_1946.locale = (lhs_chpl).locale;
  chpl_macro_tmp_1946.addr = &(((lhs_chpl).addr)->cachedNumCodepoints);
  call_tmp_chpl49 = chpl_macro_tmp_1946;
  chpl_macro_tmp_1947.locale = (rhs_chpl).locale;
  chpl_macro_tmp_1947.addr = &(((rhs_chpl).addr)->cachedNumCodepoints);
  chpl_gen_comm_get(((void*)(&tmp_chpl33)), chpl_nodeFromLocaleID((chpl_macro_tmp_1947).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1947).addr, sizeof(int64_t), COMMID(41), INT64(1059), INT64(47));
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1948)), chpl_nodeFromLocaleID((call_tmp_chpl49).locale, INT64(0), INT32(0)), (call_tmp_chpl49).addr, sizeof(int64_t), COMMID(42), INT64(1059), INT64(47));
  chpl_macro_tmp_1948 += tmp_chpl33;
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_1948)), chpl_nodeFromLocaleID((call_tmp_chpl49).locale, INT64(0), INT32(0)), (call_tmp_chpl49).addr, sizeof(int64_t), COMMID(43), INT64(1059), INT64(47));
  return;
}

/* BytesStringCommon.chpl:1033 */
static void wrapon_fn_chpl14(_class_localson_fn_chpl14 c_chpl) {
  chpl____wide__ref_string _1_lhs_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _2_rhs_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1033), INT32(47));
  chpl_check_nil(c_chpl, INT64(1033), INT32(47));
  _1_lhs_chpl = (c_chpl)->_1_lhs;
  chpl_check_nil(c_chpl, INT64(1033), INT32(47));
  _2_rhs_chpl = (c_chpl)->_2_rhs;
  chpl_taskRunningCntInc(INT64(1033), INT32(47));
  on_fn_chpl14(_1_lhs_chpl, _2_rhs_chpl);
  chpl_taskRunningCntDec(INT64(1033), INT32(47));
  chpl_rmem_consist_release(INT64(1033), INT32(47));
  return;
}

/* BytesStringCommon.chpl:1063 */
static void reinitWithNewBuffer_chpl(chpl____wide__ref_string lhs_chpl,
                                     uint8_t * buff_chpl,
                                     int64_t buffLen_chpl,
                                     int64_t buffSize_chpl,
                                     int64_t numCodepoints_chpl) {
  int64_t tmp_chpl15;
  chpl_bool tmp_chpl16;
  chpl_bool tmp_chpl17;
  chpl_bool tmp_chpl18;
  int64_t tmp_chpl19;
  chpl_bool tmp_chpl20;
  chpl_bool tmp_chpl21;
  int64_t tmp_chpl22;
  c_ptr_uint8_t_chpl tmp_chpl23 = NULL;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl call_tmp_chpl36;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl ret_chpl;
  int64_t call_tmp_chpl37;
  int64_t tmp_chpl24;
  int16_t call_tmp_chpl38;
  c_void_ptr cast_tmp_chpl;
  int64_t tmp_x1_chpl;
  c_ptr_uint8_t_chpl tmp_chpl25 = NULL;
  c_void_ptr coerce_tmp_chpl3;
  c_void_ptr coerce_tmp_chpl4;
  c_ptr_uint8_t_chpl coerce_tmp_chpl5 = NULL;
  c_ptr_uint8_t_chpl tmp_chpl26 = NULL;
  _ref_uint8_t_chpl call_tmp_chpl39 = NULL;
  chpl_bool tmp_chpl27;
  chpl_bool tmp_chpl28;
  int64_t tmp_chpl29;
  c_ptr_uint8_t_chpl tmp_chpl30 = NULL;
  chpl____wide__ref_int64_t chpl_macro_tmp_1949;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1950;
  chpl____wide__ref_int64_t chpl_macro_tmp_1951;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1952;
  chpl____wide__ref_int64_t chpl_macro_tmp_1953;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_1954;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_1955;
  chpl____wide__ref_int64_t chpl_macro_tmp_1956;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1957;
  chpl_bool chpl_macro_tmp_1958;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_1959;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_1960;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1961;
  chpl____wide__ref_int64_t chpl_macro_tmp_1962;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_1963;
  chpl____wide__ref_int64_t chpl_macro_tmp_1964;
  int64_t chpl_macro_tmp_1965;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_1966;
  c_ptr_uint8_t_chpl chpl_macro_tmp_1967;
  chpl____wide__ref_int64_t chpl_macro_tmp_1968;
  chpl____wide__ref_int64_t chpl_macro_tmp_1969;
  chpl_macro_tmp_1949.locale = (lhs_chpl).locale;
  chpl_macro_tmp_1949.addr = &(((lhs_chpl).addr)->buffLen);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1949).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1949).addr, sizeof(int64_t), COMMID(44), INT64(1065), INT64(47));
  if (tmp_chpl15 == INT64(0)) {
    tmp_chpl16 = (buff_chpl == nil);
  } else {
    tmp_chpl16 = UINT8(false);
  }
  if (tmp_chpl16) {
    goto _end_reinitWithNewBuffer_chpl;
  }
  if (buffLen_chpl != INT64(0)) {
    chpl_macro_tmp_1950.locale = (lhs_chpl).locale;
    chpl_macro_tmp_1950.addr = &(((lhs_chpl).addr)->isOwned);
    chpl_gen_comm_get(((void*)(&tmp_chpl17)), chpl_nodeFromLocaleID((chpl_macro_tmp_1950).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1950).addr, sizeof(chpl_bool), COMMID(45), INT64(1070), INT64(47));
    if (! tmp_chpl17) {
      tmp_chpl18 = UINT8(true);
    } else {
      chpl_macro_tmp_1951.locale = (lhs_chpl).locale;
      chpl_macro_tmp_1951.addr = &(((lhs_chpl).addr)->buffSize);
      chpl_gen_comm_get(((void*)(&tmp_chpl19)), chpl_nodeFromLocaleID((chpl_macro_tmp_1951).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1951).addr, sizeof(int64_t), COMMID(46), INT64(1070), INT64(47));
      tmp_chpl18 = (((int64_t)((buffLen_chpl + INT64(1)))) > tmp_chpl19);
    }
    if (tmp_chpl18) {
      chpl_macro_tmp_1952.locale = (lhs_chpl).locale;
      chpl_macro_tmp_1952.addr = &(((lhs_chpl).addr)->isOwned);
      chpl_gen_comm_get(((void*)(&tmp_chpl21)), chpl_nodeFromLocaleID((chpl_macro_tmp_1952).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1952).addr, sizeof(chpl_bool), COMMID(47), INT64(1073), INT64(47));
      if (tmp_chpl21) {
        chpl_macro_tmp_1953.locale = (lhs_chpl).locale;
        chpl_macro_tmp_1953.addr = &(((lhs_chpl).addr)->buffLen);
        chpl_gen_comm_get(((void*)(&tmp_chpl22)), chpl_nodeFromLocaleID((chpl_macro_tmp_1953).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1953).addr, sizeof(int64_t), COMMID(48), INT64(1073), INT64(47));
        tmp_chpl20 = (! (tmp_chpl22 == INT64(0)));
      } else {
        tmp_chpl20 = UINT8(false);
      }
      if (tmp_chpl20) {
        chpl_macro_tmp_1954.locale = (lhs_chpl).locale;
        chpl_macro_tmp_1954.addr = &(((lhs_chpl).addr)->buff);
        chpl_gen_comm_get(((void*)(&tmp_chpl23)), chpl_nodeFromLocaleID((chpl_macro_tmp_1954).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1954).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(49), INT64(1074), INT64(47));
        chpl_here_free(((c_void_ptr)(tmp_chpl23)), INT64(1074), INT32(47));
      }
      call_tmp_chpl37 = chpl_here_good_alloc_size(((int64_t)((buffLen_chpl + INT64(1)))), INT64(1076), INT32(47));
      if (call_tmp_chpl37 > INT64(0)) {
        tmp_chpl24 = call_tmp_chpl37;
      } else {
        tmp_chpl24 = INT64(0);
      }
      call_tmp_chpl38 = offset_STR_COPY_DATA_chpl();
      cast_tmp_chpl = chpl_here_alloc(tmp_chpl24, call_tmp_chpl38, INT64(1076), INT32(47));
      (&ret_chpl)->x0 = ((c_ptr_uint8_t_chpl)(cast_tmp_chpl));
      (&ret_chpl)->x1 = tmp_chpl24;
      call_tmp_chpl36 = ret_chpl;
      tmp_x1_chpl = (&call_tmp_chpl36)->x1;
      chpl_macro_tmp_1955.locale = (lhs_chpl).locale;
      chpl_macro_tmp_1955.addr = &(((lhs_chpl).addr)->buff);
      chpl_gen_comm_put(((void*)(&((&call_tmp_chpl36)->x0))), chpl_nodeFromLocaleID((chpl_macro_tmp_1955).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1955).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(50), INT64(1077), INT64(47));
      chpl_macro_tmp_1956.locale = (lhs_chpl).locale;
      chpl_macro_tmp_1956.addr = &(((lhs_chpl).addr)->buffSize);
      chpl_gen_comm_put(((void*)(&tmp_x1_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_1956).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1956).addr, sizeof(int64_t), COMMID(51), INT64(1078), INT64(47));
      chpl_macro_tmp_1957.locale = (lhs_chpl).locale;
      chpl_macro_tmp_1957.addr = &(((lhs_chpl).addr)->isOwned);
      chpl_macro_tmp_1958 = UINT8(true);
      chpl_gen_comm_put(((void*)(&chpl_macro_tmp_1958)), chpl_nodeFromLocaleID((chpl_macro_tmp_1957).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1957).addr, sizeof(chpl_bool), COMMID(52), INT64(1080), INT64(47));
    }
    chpl_macro_tmp_1959.locale = (lhs_chpl).locale;
    chpl_macro_tmp_1959.addr = &(((lhs_chpl).addr)->buff);
    chpl_gen_comm_get(((void*)(&tmp_chpl25)), chpl_nodeFromLocaleID((chpl_macro_tmp_1959).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1959).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(53), INT64(1082), INT64(47));
    coerce_tmp_chpl3 = ((c_void_ptr)((tmp_chpl25 + INT64(0))));
    coerce_tmp_chpl4 = ((c_void_ptr)((buff_chpl + INT64(0))));
    checkValue_chpl(buffLen_chpl);
    memmove(coerce_tmp_chpl3, coerce_tmp_chpl4, ((uint64_t)(buffLen_chpl)));
    chpl_macro_tmp_1960.locale = (lhs_chpl).locale;
    chpl_macro_tmp_1960.addr = &(((lhs_chpl).addr)->buff);
    chpl_gen_comm_get(((void*)(&tmp_chpl26)), chpl_nodeFromLocaleID((chpl_macro_tmp_1960).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1960).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(54), INT64(1083), INT64(47));
    coerce_tmp_chpl5 = tmp_chpl26;
    call_tmp_chpl39 = (coerce_tmp_chpl5 + buffLen_chpl);
    *(call_tmp_chpl39) = ((uint8_t)(INT64(0)));
  } else {
    chpl_macro_tmp_1961.locale = (lhs_chpl).locale;
    chpl_macro_tmp_1961.addr = &(((lhs_chpl).addr)->isOwned);
    chpl_gen_comm_get(((void*)(&tmp_chpl28)), chpl_nodeFromLocaleID((chpl_macro_tmp_1961).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1961).addr, sizeof(chpl_bool), COMMID(55), INT64(1087), INT64(47));
    if (tmp_chpl28) {
      chpl_macro_tmp_1962.locale = (lhs_chpl).locale;
      chpl_macro_tmp_1962.addr = &(((lhs_chpl).addr)->buffLen);
      chpl_gen_comm_get(((void*)(&tmp_chpl29)), chpl_nodeFromLocaleID((chpl_macro_tmp_1962).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1962).addr, sizeof(int64_t), COMMID(56), INT64(1087), INT64(47));
      tmp_chpl27 = (! (tmp_chpl29 == INT64(0)));
    } else {
      tmp_chpl27 = UINT8(false);
    }
    if (tmp_chpl27) {
      chpl_macro_tmp_1963.locale = (lhs_chpl).locale;
      chpl_macro_tmp_1963.addr = &(((lhs_chpl).addr)->buff);
      chpl_gen_comm_get(((void*)(&tmp_chpl30)), chpl_nodeFromLocaleID((chpl_macro_tmp_1963).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1963).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(57), INT64(1087), INT64(47));
      chpl_here_free(((c_void_ptr)(tmp_chpl30)), INT64(1087), INT32(47));
    }
    chpl_macro_tmp_1964.locale = (lhs_chpl).locale;
    chpl_macro_tmp_1964.addr = &(((lhs_chpl).addr)->buffSize);
    chpl_macro_tmp_1965 = INT64(0);
    chpl_gen_comm_put(((void*)(&chpl_macro_tmp_1965)), chpl_nodeFromLocaleID((chpl_macro_tmp_1964).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1964).addr, sizeof(int64_t), COMMID(58), INT64(1088), INT64(47));
    chpl_macro_tmp_1966.locale = (lhs_chpl).locale;
    chpl_macro_tmp_1966.addr = &(((lhs_chpl).addr)->buff);
    chpl_macro_tmp_1967 = ((c_ptr_uint8_t_chpl)(nil));
    chpl_gen_comm_put(((void*)(&chpl_macro_tmp_1967)), chpl_nodeFromLocaleID((chpl_macro_tmp_1966).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1966).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(59), INT64(1093), INT64(47));
  }
  chpl_macro_tmp_1968.locale = (lhs_chpl).locale;
  chpl_macro_tmp_1968.addr = &(((lhs_chpl).addr)->buffLen);
  chpl_gen_comm_put(((void*)(&buffLen_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_1968).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1968).addr, sizeof(int64_t), COMMID(60), INT64(1096), INT64(47));
  chpl_macro_tmp_1969.locale = (lhs_chpl).locale;
  chpl_macro_tmp_1969.addr = &(((lhs_chpl).addr)->cachedNumCodepoints);
  chpl_gen_comm_put(((void*)(&numCodepoints_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_1969).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1969).addr, sizeof(int64_t), COMMID(61), INT64(1097), INT64(47));
  _end_reinitWithNewBuffer_chpl:;
  return;
}

/* BytesStringCommon.chpl:1100 */
static void reinitWithOwnedBuffer_chpl(chpl____wide__ref_string lhs_chpl,
                                       uint8_t * buff_chpl,
                                       int64_t buffLen_chpl,
                                       int64_t buffSize_chpl,
                                       int64_t numCodepoints_chpl) {
  int64_t tmp_chpl15;
  chpl_bool tmp_chpl16;
  chpl_bool tmp_chpl17;
  chpl_bool tmp_chpl18;
  int64_t tmp_chpl19;
  c_ptr_uint8_t_chpl tmp_chpl20 = NULL;
  chpl_bool tmp_chpl21;
  chpl_bool tmp_chpl22;
  int64_t tmp_chpl23;
  c_ptr_uint8_t_chpl tmp_chpl24 = NULL;
  chpl____wide__ref_int64_t chpl_macro_tmp_1970;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1971;
  chpl____wide__ref_int64_t chpl_macro_tmp_1972;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_1973;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_1974;
  chpl____wide__ref_int64_t chpl_macro_tmp_1975;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1976;
  chpl____wide__ref_int64_t chpl_macro_tmp_1977;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_1978;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_1979;
  chpl____wide__ref_int64_t chpl_macro_tmp_1980;
  int64_t chpl_macro_tmp_1981;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1982;
  chpl_bool chpl_macro_tmp_1983;
  chpl____wide__ref_int64_t chpl_macro_tmp_1984;
  chpl____wide__ref_int64_t chpl_macro_tmp_1985;
  chpl_macro_tmp_1970.locale = (lhs_chpl).locale;
  chpl_macro_tmp_1970.addr = &(((lhs_chpl).addr)->buffLen);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1970).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1970).addr, sizeof(int64_t), COMMID(62), INT64(1103), INT64(47));
  if (tmp_chpl15 == INT64(0)) {
    tmp_chpl16 = (buff_chpl == nil);
  } else {
    tmp_chpl16 = UINT8(false);
  }
  if (tmp_chpl16) {
    goto _end_reinitWithOwnedBuffer_chpl;
  }
  if (buffLen_chpl != INT64(0)) {
    chpl_macro_tmp_1971.locale = (lhs_chpl).locale;
    chpl_macro_tmp_1971.addr = &(((lhs_chpl).addr)->isOwned);
    chpl_gen_comm_get(((void*)(&tmp_chpl18)), chpl_nodeFromLocaleID((chpl_macro_tmp_1971).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1971).addr, sizeof(chpl_bool), COMMID(63), INT64(1108), INT64(47));
    if (tmp_chpl18) {
      chpl_macro_tmp_1972.locale = (lhs_chpl).locale;
      chpl_macro_tmp_1972.addr = &(((lhs_chpl).addr)->buffLen);
      chpl_gen_comm_get(((void*)(&tmp_chpl19)), chpl_nodeFromLocaleID((chpl_macro_tmp_1972).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1972).addr, sizeof(int64_t), COMMID(64), INT64(1108), INT64(47));
      tmp_chpl17 = (! (tmp_chpl19 == INT64(0)));
    } else {
      tmp_chpl17 = UINT8(false);
    }
    if (tmp_chpl17) {
      chpl_macro_tmp_1973.locale = (lhs_chpl).locale;
      chpl_macro_tmp_1973.addr = &(((lhs_chpl).addr)->buff);
      chpl_gen_comm_get(((void*)(&tmp_chpl20)), chpl_nodeFromLocaleID((chpl_macro_tmp_1973).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1973).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(65), INT64(1109), INT64(47));
      chpl_here_free(((c_void_ptr)(tmp_chpl20)), INT64(1109), INT32(47));
    }
    chpl_macro_tmp_1974.locale = (lhs_chpl).locale;
    chpl_macro_tmp_1974.addr = &(((lhs_chpl).addr)->buff);
    chpl_gen_comm_put(((void*)(&buff_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_1974).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1974).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(66), INT64(1110), INT64(47));
    chpl_macro_tmp_1975.locale = (lhs_chpl).locale;
    chpl_macro_tmp_1975.addr = &(((lhs_chpl).addr)->buffSize);
    chpl_gen_comm_put(((void*)(&buffSize_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_1975).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1975).addr, sizeof(int64_t), COMMID(67), INT64(1111), INT64(47));
  } else {
    chpl_macro_tmp_1976.locale = (lhs_chpl).locale;
    chpl_macro_tmp_1976.addr = &(((lhs_chpl).addr)->isOwned);
    chpl_gen_comm_get(((void*)(&tmp_chpl22)), chpl_nodeFromLocaleID((chpl_macro_tmp_1976).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1976).addr, sizeof(chpl_bool), COMMID(68), INT64(1115), INT64(47));
    if (tmp_chpl22) {
      chpl_macro_tmp_1977.locale = (lhs_chpl).locale;
      chpl_macro_tmp_1977.addr = &(((lhs_chpl).addr)->buffLen);
      chpl_gen_comm_get(((void*)(&tmp_chpl23)), chpl_nodeFromLocaleID((chpl_macro_tmp_1977).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1977).addr, sizeof(int64_t), COMMID(69), INT64(1115), INT64(47));
      tmp_chpl21 = (! (tmp_chpl23 == INT64(0)));
    } else {
      tmp_chpl21 = UINT8(false);
    }
    if (tmp_chpl21) {
      chpl_macro_tmp_1978.locale = (lhs_chpl).locale;
      chpl_macro_tmp_1978.addr = &(((lhs_chpl).addr)->buff);
      chpl_gen_comm_get(((void*)(&tmp_chpl24)), chpl_nodeFromLocaleID((chpl_macro_tmp_1978).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1978).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(70), INT64(1115), INT64(47));
      chpl_here_free(((c_void_ptr)(tmp_chpl24)), INT64(1115), INT32(47));
    }
    chpl_macro_tmp_1979.locale = (lhs_chpl).locale;
    chpl_macro_tmp_1979.addr = &(((lhs_chpl).addr)->buff);
    chpl_gen_comm_put(((void*)(&buff_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_1979).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1979).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(71), INT64(1116), INT64(47));
    chpl_macro_tmp_1980.locale = (lhs_chpl).locale;
    chpl_macro_tmp_1980.addr = &(((lhs_chpl).addr)->buffSize);
    chpl_macro_tmp_1981 = INT64(0);
    chpl_gen_comm_put(((void*)(&chpl_macro_tmp_1981)), chpl_nodeFromLocaleID((chpl_macro_tmp_1980).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1980).addr, sizeof(int64_t), COMMID(72), INT64(1117), INT64(47));
  }
  chpl_macro_tmp_1982.locale = (lhs_chpl).locale;
  chpl_macro_tmp_1982.addr = &(((lhs_chpl).addr)->isOwned);
  chpl_macro_tmp_1983 = UINT8(true);
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_1983)), chpl_nodeFromLocaleID((chpl_macro_tmp_1982).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1982).addr, sizeof(chpl_bool), COMMID(73), INT64(1120), INT64(47));
  chpl_macro_tmp_1984.locale = (lhs_chpl).locale;
  chpl_macro_tmp_1984.addr = &(((lhs_chpl).addr)->buffLen);
  chpl_gen_comm_put(((void*)(&buffLen_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_1984).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1984).addr, sizeof(int64_t), COMMID(74), INT64(1121), INT64(47));
  chpl_macro_tmp_1985.locale = (lhs_chpl).locale;
  chpl_macro_tmp_1985.addr = &(((lhs_chpl).addr)->cachedNumCodepoints);
  chpl_gen_comm_put(((void*)(&numCodepoints_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_1985).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1985).addr, sizeof(int64_t), COMMID(75), INT64(1122), INT64(47));
  _end_reinitWithOwnedBuffer_chpl:;
  return;
}

/* BytesStringCommon.chpl:1125 */
static void doAssign_chpl(chpl____wide__ref_string lhs_chpl,
                          string_chpl * rhs_chpl) {
  int32_t call_tmp_chpl36;
  int32_t tmp_chpl15;
  int32_t call_tmp_chpl37;
  int64_t tmp_chpl16;
  int64_t coerce_tmp_chpl3;
  c_ptr_uint8_t_chpl remote_buf_chpl = NULL;
  c_ptr_uint8_t_chpl init_coerce_tmp_chpl3 = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl38 = NULL;
  chpl_localeID_t call_tmp_chpl39;
  int32_t tmp_chpl17;
  chpl_localeID_t call_tmp_chpl40;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl15 _args_foron_fn_chpl = NULL;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl tmp_chpl20 = NULL;
  chpl____wide__ref_string tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_int32_t chpl_macro_tmp_1986;
  chpl____wide__ref_int32_t chpl_macro_tmp_1987;
  chpl____wide__ref_string chpl_macro_tmp_1988;
  chpl__class_localson_fn_chpl15_object chpl_macro_tmp_1989;
  chpl____wide__ref_string chpl_macro_tmp_1990;
  call_tmp_chpl36 = get_chpl_nodeID();
  chpl_macro_tmp_1986.locale = (lhs_chpl).locale;
  chpl_macro_tmp_1986.addr = &(((lhs_chpl).addr)->locale_id);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1986).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1986).addr, sizeof(int32_t), COMMID(76), INT64(1152), INT64(47));
  if (tmp_chpl15 == call_tmp_chpl36) {
    call_tmp_chpl37 = get_chpl_nodeID();
    if ((rhs_chpl)->locale_id == call_tmp_chpl37) {
      tmp_chpl16 = (rhs_chpl)->cachedNumCodepoints;
      reinitWithNewBuffer_chpl(lhs_chpl, (rhs_chpl)->buff, (rhs_chpl)->buffLen, (rhs_chpl)->buffSize, tmp_chpl16);
    } else {
      coerce_tmp_chpl3 = (rhs_chpl)->buffLen;
      init_coerce_tmp_chpl3 = ((c_ptr_uint8_t_chpl)(nil));
      remote_buf_chpl = init_coerce_tmp_chpl3;
      if (coerce_tmp_chpl3 != INT64(0)) {
        call_tmp_chpl38 = bufferCopyRemote_chpl(((int64_t)((rhs_chpl)->locale_id)), (rhs_chpl)->buff, coerce_tmp_chpl3);
        remote_buf_chpl = call_tmp_chpl38;
      }
      reinitWithOwnedBuffer_chpl(lhs_chpl, remote_buf_chpl, coerce_tmp_chpl3, ((int64_t)((coerce_tmp_chpl3 + INT64(1)))), (rhs_chpl)->cachedNumCodepoints);
    }
  } else {
    chpl_macro_tmp_1987.locale = (lhs_chpl).locale;
    chpl_macro_tmp_1987.addr = &(((lhs_chpl).addr)->locale_id);
    chpl_gen_comm_get(((void*)(&tmp_chpl17)), chpl_nodeFromLocaleID((chpl_macro_tmp_1987).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1987).addr, sizeof(int32_t), COMMID(77), INT64(1157), INT64(47));
    call_tmp_chpl39 = chpl_buildLocaleID(tmp_chpl17, c_sublocid_any, INT64(1157), INT32(47));
    call_tmp_chpl40 = call_tmp_chpl39;
    chpl_rmem_consist_release(INT64(1156), INT32(47));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl40);
    if (isdirect_chpl) {
      chpl_macro_tmp_1988.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1988.addr = rhs_chpl;
      tmp_chpl18 = chpl_macro_tmp_1988;
      on_fn_chpl15(lhs_chpl, tmp_chpl18);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl15)(&chpl_macro_tmp_1989));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1156), INT32(47));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl40;
      tmp_chpl19 = lhs_chpl;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1156), INT32(47));
      (_args_foron_fn_chpl)->_1_lhs = tmp_chpl19;
      tmp_chpl20 = rhs_chpl;
      chpl_macro_tmp_1990.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1990.addr = tmp_chpl20;
      tmp_chpl21 = chpl_macro_tmp_1990;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1156), INT32(47));
      (_args_foron_fn_chpl)->_2_rhs = tmp_chpl21;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl15_object);
      chpl_taskRunningCntDec(INT64(1156), INT32(47));
      /*** wrapon_fn_chpl15 ***/ chpl_executeOn(call_tmp_chpl40, INT32(17), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1156), INT32(47));
      chpl_taskRunningCntInc(INT64(1156), INT32(47));
    }
    chpl_rmem_consist_acquire(INT64(1156), INT32(47));
  }
  return;
}

/* BytesStringCommon.chpl:1156 */
static void on_fn_chpl15(chpl____wide__ref_string lhs_chpl,
                         chpl____wide__ref_string rhs_chpl) {
  int32_t call_tmp_chpl36;
  int32_t tmp_chpl15;
  int64_t tmp_chpl16;
  c_ptr_uint8_t_chpl tmp_chpl17 = NULL;
  int64_t tmp_chpl18;
  int64_t tmp_chpl19;
  int64_t coerce_tmp_chpl3;
  int64_t tmp_chpl20;
  c_ptr_uint8_t_chpl remote_buf_chpl = NULL;
  c_ptr_uint8_t_chpl init_coerce_tmp_chpl3 = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl37 = NULL;
  int32_t tmp_chpl21;
  c_ptr_uint8_t_chpl tmp_chpl22 = NULL;
  int64_t tmp_chpl23;
  chpl____wide__ref_int32_t chpl_macro_tmp_1991;
  chpl____wide__ref_int64_t chpl_macro_tmp_1992;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_1993;
  chpl____wide__ref_int64_t chpl_macro_tmp_1994;
  chpl____wide__ref_int64_t chpl_macro_tmp_1995;
  chpl____wide__ref_int64_t chpl_macro_tmp_1996;
  chpl____wide__ref_int32_t chpl_macro_tmp_1997;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_1998;
  chpl____wide__ref_int64_t chpl_macro_tmp_1999;
  call_tmp_chpl36 = get_chpl_nodeID();
  chpl_macro_tmp_1991.locale = (rhs_chpl).locale;
  chpl_macro_tmp_1991.addr = &(((rhs_chpl).addr)->locale_id);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1991).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1991).addr, sizeof(int32_t), COMMID(78), INT64(1158), INT64(47));
  if (tmp_chpl15 == call_tmp_chpl36) {
    chpl_macro_tmp_1992.locale = (rhs_chpl).locale;
    chpl_macro_tmp_1992.addr = &(((rhs_chpl).addr)->cachedNumCodepoints);
    chpl_gen_comm_get(((void*)(&tmp_chpl16)), chpl_nodeFromLocaleID((chpl_macro_tmp_1992).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1992).addr, sizeof(int64_t), COMMID(79), INT64(1158), INT64(47));
    chpl_macro_tmp_1993.locale = (rhs_chpl).locale;
    chpl_macro_tmp_1993.addr = &(((rhs_chpl).addr)->buff);
    chpl_gen_comm_get(((void*)(&tmp_chpl17)), chpl_nodeFromLocaleID((chpl_macro_tmp_1993).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1993).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(80), INT64(1158), INT64(47));
    chpl_macro_tmp_1994.locale = (rhs_chpl).locale;
    chpl_macro_tmp_1994.addr = &(((rhs_chpl).addr)->buffLen);
    chpl_gen_comm_get(((void*)(&tmp_chpl18)), chpl_nodeFromLocaleID((chpl_macro_tmp_1994).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1994).addr, sizeof(int64_t), COMMID(81), INT64(1158), INT64(47));
    chpl_macro_tmp_1995.locale = (rhs_chpl).locale;
    chpl_macro_tmp_1995.addr = &(((rhs_chpl).addr)->buffSize);
    chpl_gen_comm_get(((void*)(&tmp_chpl19)), chpl_nodeFromLocaleID((chpl_macro_tmp_1995).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1995).addr, sizeof(int64_t), COMMID(82), INT64(1158), INT64(47));
    reinitWithNewBuffer_chpl(lhs_chpl, tmp_chpl17, tmp_chpl18, tmp_chpl19, tmp_chpl16);
  } else {
    chpl_macro_tmp_1996.locale = (rhs_chpl).locale;
    chpl_macro_tmp_1996.addr = &(((rhs_chpl).addr)->buffLen);
    chpl_gen_comm_get(((void*)(&tmp_chpl20)), chpl_nodeFromLocaleID((chpl_macro_tmp_1996).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1996).addr, sizeof(int64_t), COMMID(83), INT64(1158), INT64(47));
    coerce_tmp_chpl3 = tmp_chpl20;
    init_coerce_tmp_chpl3 = ((c_ptr_uint8_t_chpl)(nil));
    remote_buf_chpl = init_coerce_tmp_chpl3;
    if (coerce_tmp_chpl3 != INT64(0)) {
      chpl_macro_tmp_1997.locale = (rhs_chpl).locale;
      chpl_macro_tmp_1997.addr = &(((rhs_chpl).addr)->locale_id);
      chpl_gen_comm_get(((void*)(&tmp_chpl21)), chpl_nodeFromLocaleID((chpl_macro_tmp_1997).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1997).addr, sizeof(int32_t), COMMID(84), INT64(1158), INT64(47));
      chpl_macro_tmp_1998.locale = (rhs_chpl).locale;
      chpl_macro_tmp_1998.addr = &(((rhs_chpl).addr)->buff);
      chpl_gen_comm_get(((void*)(&tmp_chpl22)), chpl_nodeFromLocaleID((chpl_macro_tmp_1998).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1998).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(85), INT64(1158), INT64(47));
      call_tmp_chpl37 = bufferCopyRemote_chpl(((int64_t)(tmp_chpl21)), tmp_chpl22, coerce_tmp_chpl3);
      remote_buf_chpl = call_tmp_chpl37;
    }
    chpl_macro_tmp_1999.locale = (rhs_chpl).locale;
    chpl_macro_tmp_1999.addr = &(((rhs_chpl).addr)->cachedNumCodepoints);
    chpl_gen_comm_get(((void*)(&tmp_chpl23)), chpl_nodeFromLocaleID((chpl_macro_tmp_1999).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1999).addr, sizeof(int64_t), COMMID(86), INT64(1158), INT64(47));
    reinitWithOwnedBuffer_chpl(lhs_chpl, remote_buf_chpl, coerce_tmp_chpl3, ((int64_t)((coerce_tmp_chpl3 + INT64(1)))), tmp_chpl23);
  }
  return;
}

/* BytesStringCommon.chpl:1156 */
static void wrapon_fn_chpl15(_class_localson_fn_chpl15 c_chpl) {
  chpl____wide__ref_string _1_lhs_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _2_rhs_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1156), INT32(47));
  chpl_check_nil(c_chpl, INT64(1156), INT32(47));
  _1_lhs_chpl = (c_chpl)->_1_lhs;
  chpl_check_nil(c_chpl, INT64(1156), INT32(47));
  _2_rhs_chpl = (c_chpl)->_2_rhs;
  chpl_taskRunningCntInc(INT64(1156), INT32(47));
  on_fn_chpl15(_1_lhs_chpl, _2_rhs_chpl);
  chpl_taskRunningCntDec(INT64(1156), INT32(47));
  chpl_rmem_consist_release(INT64(1156), INT32(47));
  return;
}

/* BytesStringCommon.chpl:1203 */
static void doConcat_chpl(string_chpl * s0_chpl,
                          chpl____wide__ref_string s1_chpl,
                          string_chpl * _retArg_chpl) {
  string_chpl ret_chpl;
  int64_t s0len_chpl;
  int64_t coerce_tmp_chpl3;
  string_chpl ret_chpl2;
  string_chpl tmp_chpl15;
  int64_t s1len_chpl;
  int64_t coerce_tmp_chpl4;
  int64_t tmp_chpl16;
  string_chpl ret_chpl3;
  string_chpl tmp_chpl17;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl36;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl call_tmp_chpl37;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl ret_chpl4;
  int64_t call_tmp_chpl38;
  int64_t tmp_chpl19;
  int16_t call_tmp_chpl39;
  c_void_ptr cast_tmp_chpl;
  c_ptr_uint8_t_chpl tmp_x0_chpl = NULL;
  int64_t tmp_x1_chpl;
  c_ptr_uint8_t_chpl buff_chpl = NULL;
  int64_t coerce_tmp_chpl5;
  c_ptr_uint8_t_chpl coerce_tmp_chpl6 = NULL;
  int32_t call_tmp_chpl40;
  c_ptr_uint8_t_chpl call_tmp_chpl41 = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl42 = NULL;
  c_void_ptr coerce_tmp_chpl7;
  c_void_ptr coerce_tmp_chpl8;
  int32_t tmp_chpl20;
  int64_t coerce_tmp_chpl9;
  c_ptr_uint8_t_chpl coerce_tmp_chpl10 = NULL;
  c_ptr_uint8_t_chpl tmp_chpl21 = NULL;
  int32_t call_tmp_chpl43;
  c_ptr_uint8_t_chpl call_tmp_chpl44 = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl45 = NULL;
  c_void_ptr coerce_tmp_chpl11;
  c_void_ptr coerce_tmp_chpl12;
  _ref_uint8_t_chpl call_tmp_chpl46 = NULL;
  string_chpl ret_chpl5;
  int64_t tmp_chpl22;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_int64_t chpl_macro_tmp_2000;
  chpl____wide__ref_string chpl_macro_tmp_2001;
  chpl____wide__ref_int32_t chpl_macro_tmp_2002;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_2003;
  chpl____wide__ref_int64_t chpl_macro_tmp_2004;
  coerce_tmp_chpl3 = (s0_chpl)->buffLen;
  s0len_chpl = coerce_tmp_chpl3;
  if (coerce_tmp_chpl3 == INT64(0)) {
    init_ASSIGN__chpl21(&tmp_chpl15, s1_chpl);
    ret_chpl2 = tmp_chpl15;
    ret_chpl = ret_chpl2;
    goto _end_doConcat_chpl;
  }
  chpl_macro_tmp_2000.locale = (s1_chpl).locale;
  chpl_macro_tmp_2000.addr = &(((s1_chpl).addr)->buffLen);
  chpl_gen_comm_get(((void*)(&tmp_chpl16)), chpl_nodeFromLocaleID((chpl_macro_tmp_2000).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2000).addr, sizeof(int64_t), COMMID(87), INT64(1209), INT64(47));
  coerce_tmp_chpl4 = tmp_chpl16;
  s1len_chpl = coerce_tmp_chpl4;
  if (coerce_tmp_chpl4 == INT64(0)) {
    chpl_macro_tmp_2001.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2001.addr = s0_chpl;
    tmp_chpl18 = chpl_macro_tmp_2001;
    init_ASSIGN__chpl21(&tmp_chpl17, tmp_chpl18);
    ret_chpl3 = tmp_chpl17;
    ret_chpl = ret_chpl3;
    goto _end_doConcat_chpl;
  }
  call_tmp_chpl36 = (coerce_tmp_chpl3 + coerce_tmp_chpl4);
  call_tmp_chpl38 = chpl_here_good_alloc_size(((int64_t)((call_tmp_chpl36 + INT64(1)))), INT64(1213), INT32(47));
  if (call_tmp_chpl38 > INT64(0)) {
    tmp_chpl19 = call_tmp_chpl38;
  } else {
    tmp_chpl19 = INT64(0);
  }
  call_tmp_chpl39 = offset_STR_COPY_DATA_chpl();
  cast_tmp_chpl = chpl_here_alloc(tmp_chpl19, call_tmp_chpl39, INT64(1213), INT32(47));
  (&ret_chpl4)->x0 = ((c_ptr_uint8_t_chpl)(cast_tmp_chpl));
  (&ret_chpl4)->x1 = tmp_chpl19;
  call_tmp_chpl37 = ret_chpl4;
  tmp_x0_chpl = (&call_tmp_chpl37)->x0;
  tmp_x1_chpl = (&call_tmp_chpl37)->x1;
  buff_chpl = tmp_x0_chpl;
  coerce_tmp_chpl5 = ((int64_t)((s0_chpl)->locale_id));
  coerce_tmp_chpl6 = (s0_chpl)->buff;
  call_tmp_chpl40 = get_chpl_nodeID();
  if (coerce_tmp_chpl5 != ((int64_t)(call_tmp_chpl40))) {
    call_tmp_chpl41 = (tmp_x0_chpl + INT64(0));
    call_tmp_chpl42 = (coerce_tmp_chpl6 + INT64(0));
    checkValue_chpl(coerce_tmp_chpl3);
    chpl_gen_comm_get(((void*)(call_tmp_chpl41)), coerce_tmp_chpl5, call_tmp_chpl42, ((uint64_t)(s0len_chpl)), COMMID(88), INT64(1215), INT32(47));
  } else {
    coerce_tmp_chpl7 = ((c_void_ptr)((tmp_x0_chpl + INT64(0))));
    coerce_tmp_chpl8 = ((c_void_ptr)((coerce_tmp_chpl6 + INT64(0))));
    checkValue_chpl(coerce_tmp_chpl3);
    memcpy(coerce_tmp_chpl7, coerce_tmp_chpl8, ((uint64_t)(s0len_chpl)));
  }
  chpl_macro_tmp_2002.locale = (s1_chpl).locale;
  chpl_macro_tmp_2002.addr = &(((s1_chpl).addr)->locale_id);
  chpl_gen_comm_get(((void*)(&tmp_chpl20)), chpl_nodeFromLocaleID((chpl_macro_tmp_2002).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2002).addr, sizeof(int32_t), COMMID(89), INT64(1216), INT64(47));
  coerce_tmp_chpl9 = ((int64_t)(tmp_chpl20));
  chpl_macro_tmp_2003.locale = (s1_chpl).locale;
  chpl_macro_tmp_2003.addr = &(((s1_chpl).addr)->buff);
  chpl_gen_comm_get(((void*)(&tmp_chpl21)), chpl_nodeFromLocaleID((chpl_macro_tmp_2003).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2003).addr, sizeof(c_ptr_uint8_t_chpl), COMMID(90), INT64(1216), INT64(47));
  coerce_tmp_chpl10 = tmp_chpl21;
  call_tmp_chpl43 = get_chpl_nodeID();
  if (coerce_tmp_chpl9 != ((int64_t)(call_tmp_chpl43))) {
    call_tmp_chpl44 = (tmp_x0_chpl + s0len_chpl);
    call_tmp_chpl45 = (coerce_tmp_chpl10 + INT64(0));
    checkValue_chpl(coerce_tmp_chpl4);
    chpl_gen_comm_get(((void*)(call_tmp_chpl44)), coerce_tmp_chpl9, call_tmp_chpl45, ((uint64_t)(s1len_chpl)), COMMID(91), INT64(1216), INT32(47));
  } else {
    coerce_tmp_chpl11 = ((c_void_ptr)((tmp_x0_chpl + s0len_chpl)));
    coerce_tmp_chpl12 = ((c_void_ptr)((coerce_tmp_chpl10 + INT64(0))));
    checkValue_chpl(coerce_tmp_chpl4);
    memcpy(coerce_tmp_chpl11, coerce_tmp_chpl12, ((uint64_t)(s1len_chpl)));
  }
  call_tmp_chpl46 = (buff_chpl + call_tmp_chpl36);
  *(call_tmp_chpl46) = ((uint8_t)(INT64(0)));
  init_chpl73(&ret_chpl5);
  chpl_macro_tmp_2004.locale = (s1_chpl).locale;
  chpl_macro_tmp_2004.addr = &(((s1_chpl).addr)->cachedNumCodepoints);
  chpl_gen_comm_get(((void*)(&tmp_chpl22)), chpl_nodeFromLocaleID((chpl_macro_tmp_2004).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2004).addr, sizeof(int64_t), COMMID(92), INT64(1222), INT64(47));
  (&ret_chpl5)->cachedNumCodepoints = ((int64_t)(((s0_chpl)->cachedNumCodepoints + tmp_chpl22)));
  i_x_chpl = &ret_chpl5;
  (i_x_chpl)->isOwned = UINT8(true);
  (i_x_chpl)->buff = tmp_x0_chpl;
  (i_x_chpl)->buffSize = tmp_x1_chpl;
  (i_x_chpl)->buffLen = call_tmp_chpl36;
  ret_chpl = ret_chpl5;
  _end_doConcat_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* BytesStringCommon.chpl:1228 */
static void doStripNoEnc_chpl(string_chpl * x_chpl2,
                              string_chpl * chars_chpl,
                              chpl_bool leading_chpl,
                              chpl_bool trailing_chpl,
                              string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_596_chpl;
  string_chpl local__str_literal_215_chpl;
  string_chpl ret_chpl;
  string_chpl inlineImm_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  string_chpl ret_chpl2;
  string_chpl tmp_chpl15;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl3;
  string_chpl tmp_chpl17;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl4;
  int32_t call_tmp_chpl36;
  string_chpl ret_chpl5;
  string_chpl ret_chpl6;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl x_chpl3;
  chpl____wide__ref_string tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl localX_chpl;
  string_chpl ret_chpl7;
  int32_t call_tmp_chpl37;
  string_chpl ret_chpl8;
  string_chpl ret_chpl9;
  chpl____wide__ref_string tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl x_chpl4;
  chpl____wide__ref_string tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl localChars_chpl;
  int64_t start_chpl;
  int64_t end_chpl;
  int64_t tmp_chpl23;
  int64_t call_tmp_chpl38;
  range_int64_t_bounded_F_chpl call_tmp_chpl39;
  range_int64_t_bounded_F_chpl ret_tmp_chpl;
  _ic_these_range_int64_t_bounded_F_chpl _ic__chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  _ref_string_chpl i_this_chpl = NULL;
  _ic_chpl_bytes__ref_string_chpl _ic__chpl2 = NULL;
  c_void_ptr cast_tmp_chpl2;
  int64_t coerce_tmp_chpl3;
  range_int64_t_bounded_F_chpl tmp_chpl24;
  _ref_range_int64_t_bounded_F_chpl tmp_chpl25 = NULL;
  int64_t tmp_chpl26;
  _ref_range_int64_t_bounded_F_chpl tmp_chpl27 = NULL;
  range_int64_t_bounded_F_chpl tmp_chpl28;
  int64_t coerce_tmp_chpl4;
  int64_t low_chpl2;
  int64_t count_chpl;
  _tuple_2_star_int64_t_chpl tmp_chpl29;
  int64_t coerce_tmp_chpl5;
  int64_t coerce_tmp_chpl6;
  int64_t low_chpl3;
  int64_t high_chpl;
  int64_t low_chpl4;
  _ref_string_chpl tmp_chpl30 = NULL;
  _ref_string_chpl tmp_chpl31 = NULL;
  _ref__ic_chpl_direct_counted_range_iter_chpl tmp_chpl32 = NULL;
  _ref__ic_chpl_direct_counted_range_iter_chpl tmp_chpl33 = NULL;
  _ref__ic_chpl_direct_counted_range_iter_helper_chpl tmp_chpl34 = NULL;
  _ref__ic_chpl_direct_counted_range_iter_helper_chpl tmp_chpl35 = NULL;
  _ref__tuple_2_star_int64_t_chpl tmp_chpl36 = NULL;
  _ref__tuple_2_star_int64_t_chpl tmp_chpl37 = NULL;
  _ref__ic_chpl_direct_param_stride_range_iter_chpl tmp_chpl38 = NULL;
  _ref__ic_chpl_direct_param_stride_range_iter_chpl tmp_chpl39 = NULL;
  _ref__ic_chpl_direct_param_stride_range_iter_chpl tmp_chpl40 = NULL;
  _ref__ic_chpl_direct_param_stride_range_iter_chpl tmp_chpl41 = NULL;
  string_chpl ret_chpl10;
  int32_t call_tmp_chpl40;
  string_chpl ret_chpl11;
  string_chpl ret_chpl12;
  chpl____wide__ref_string tmp_chpl42 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl x_chpl5;
  chpl____wide__ref_string tmp_chpl43 = {CHPL_LOCALEID_T_INIT, NULL};
  _ic_chpl_direct_counted_range_iter_chpl _ic__chpl3 = NULL;
  c_void_ptr cast_tmp_chpl3;
  _ic_chpl_direct_counted_range_iter_helper_chpl _ic__chpl4 = NULL;
  c_void_ptr cast_tmp_chpl4;
  _ref__ic_chpl_direct_counted_range_iter_helper_chpl tmp_chpl44 = NULL;
  int64_t call_tmp_chpl41;
  _ref__ic_chpl_direct_counted_range_iter_helper_chpl tmp_chpl45 = NULL;
  _ref__ic_chpl_direct_counted_range_iter_helper_chpl tmp_chpl46 = NULL;
  int64_t call_tmp_chpl42;
  _ref__ic_chpl_direct_counted_range_iter_helper_chpl tmp_chpl47 = NULL;
  int64_t call_tmp_chpl43;
  _ref__ic_chpl_direct_counted_range_iter_helper_chpl tmp_chpl48 = NULL;
  _ic_chpl_direct_param_stride_range_iter_chpl _ic__chpl5 = NULL;
  c_void_ptr cast_tmp_chpl5;
  chpl_bool hasMore_chpl;
  int64_t tmp_chpl49;
  c_ptr_uint8_t_chpl coerce_tmp_chpl7 = NULL;
  int64_t tmp_chpl50;
  _ref_string_chpl tmp_chpl51 = NULL;
  uint8_t tmp_chpl52;
  _ref_uint8_t_chpl call_tmp_chpl44 = NULL;
  int64_t tmp_chpl53;
  int64_t high_chpl2;
  _ref__ic_chpl_direct_param_stride_range_iter_chpl tmp_chpl54 = NULL;
  uint8_t tmp_chpl55;
  int64_t tmp_chpl56;
  int64_t i_chpl;
  uint8_t xChar_chpl;
  _ref_string_chpl i_this_chpl2 = NULL;
  string_chpl ret_chpl13;
  int32_t call_tmp_chpl45;
  string_chpl ret_chpl14;
  string_chpl ret_chpl15;
  chpl____wide__ref_string tmp_chpl57 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl x_chpl6;
  chpl____wide__ref_string tmp_chpl58 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl localThis_chpl;
  int64_t coerce_tmp_chpl8;
  int64_t tmp_x0_chpl;
  int64_t tmp_x1_chpl;
  int64_t _ic__F1_high_chpl;
  int64_t i_chpl2;
  uint8_t yret_chpl;
  c_ptr_uint8_t_chpl coerce_tmp_chpl9 = NULL;
  _ref_uint8_t_chpl call_tmp_chpl46 = NULL;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl59 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl60 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl61;
  int64_t moreValNeg1_chpl;
  int64_t tmp_chpl62;
  int64_t moreValNeg2_chpl;
  int64_t tmp_chpl63;
  int64_t tmp_chpl64;
  _ref__ic_chpl_direct_param_stride_range_iter_chpl tmp_chpl65 = NULL;
  int64_t tmp_chpl66;
  int64_t tmp_chpl67;
  int64_t tmp_chpl68;
  int64_t tmp_chpl69;
  int64_t tmp_chpl70;
  int64_t high_chpl3;
  _ref__ic_chpl_direct_param_stride_range_iter_chpl tmp_chpl71 = NULL;
  _ref_string_chpl tmp_chpl72 = NULL;
  c_void_ptr call_tmp_chpl47;
  c_void_ptr call_tmp_chpl48;
  c_void_ptr call_tmp_chpl49;
  chpl____wide__ref_string tmp_chpl73 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr call_tmp_chpl50;
  c_void_ptr call_tmp_chpl51;
  int64_t tmp_chpl74;
  int64_t call_tmp_chpl52;
  range_int64_t_bounded_F_chpl call_tmp_chpl53;
  range_int64_t_bounded_F_chpl ret_tmp_chpl2;
  range_int64_t_bounded_F_chpl _ic__F0_this_chpl;
  int64_t _ic__F1_i_chpl;
  int64_t _ic__F2_end_chpl;
  _ref_string_chpl i_this_chpl3 = NULL;
  string_chpl _ic__F1_localThis_chpl;
  int64_t _ic__F4_tmp_x0_chpl;
  int64_t _ic__F4_tmp_x1_chpl;
  int64_t _ic__F6_i_chpl;
  int64_t tmp_chpl75;
  int64_t coerce_tmp_chpl10;
  _tuple_2_star_int64_t_chpl tmp_chpl76;
  string_chpl ret_chpl16;
  int32_t call_tmp_chpl54;
  string_chpl ret_chpl17;
  string_chpl ret_chpl18;
  chpl____wide__ref_string tmp_chpl77 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl x_chpl7;
  chpl____wide__ref_string tmp_chpl78 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl55;
  int64_t call_tmp_chpl56;
  int64_t _ic__F1_high_chpl2;
  chpl_bool hasMore_chpl2;
  c_ptr_uint8_t_chpl coerce_tmp_chpl11 = NULL;
  uint8_t tmp_chpl79;
  _ref_uint8_t_chpl call_tmp_chpl57 = NULL;
  int64_t tmp_chpl80;
  int64_t i_chpl3;
  uint8_t xChar_chpl2;
  _ref_string_chpl i_this_chpl4 = NULL;
  string_chpl ret_chpl19;
  int32_t call_tmp_chpl58;
  string_chpl ret_chpl20;
  string_chpl ret_chpl21;
  chpl____wide__ref_string tmp_chpl81 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl x_chpl8;
  chpl____wide__ref_string tmp_chpl82 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl localThis_chpl2;
  int64_t coerce_tmp_chpl12;
  int64_t tmp_x0_chpl2;
  int64_t tmp_x1_chpl2;
  int64_t _ic__F1_high_chpl3;
  int64_t i_chpl4;
  uint8_t yret_chpl2;
  c_ptr_uint8_t_chpl coerce_tmp_chpl13 = NULL;
  _ref_uint8_t_chpl call_tmp_chpl59 = NULL;
  _ref_string_chpl i_x_chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl83 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl5 = NULL;
  chpl____wide__ref_string tmp_chpl84 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl85;
  int64_t tmp_chpl86;
  int64_t tmp_chpl87;
  int64_t tmp_chpl88;
  _ref_string_chpl tmp_chpl89 = NULL;
  chpl____wide__ref_string tmp_chpl90 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl call_tmp_chpl60;
  range_int64_t_bounded_F_chpl ret_tmp_chpl3;
  _ref_string_chpl i_this_chpl5 = NULL;
  string_chpl call_tmp_chpl61;
  Error_chpl error_chpl = NULL;
  string_chpl ret_tmp_chpl4;
  chpl____wide_Error tmp_chpl91 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl6 = NULL;
  chpl____wide__ref_string tmp_chpl92 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl7 = NULL;
  chpl____wide__ref_string tmp_chpl93 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_2005;
  chpl____wide__ref_string chpl_macro_tmp_2006;
  chpl____wide__ref_string chpl_macro_tmp_2007;
  chpl____wide__ref_string chpl_macro_tmp_2008;
  chpl____wide__ref_string chpl_macro_tmp_2009;
  chpl____wide__ref_string chpl_macro_tmp_2010;
  chpl____wide__ref_string chpl_macro_tmp_2011;
  chpl____wide__ref_string chpl_macro_tmp_2012;
  chpl____wide__ref_string chpl_macro_tmp_2013;
  chpl____wide__ref_string chpl_macro_tmp_2014;
  chpl____wide__ref_string chpl_macro_tmp_2015;
  chpl____wide__ref_string chpl_macro_tmp_2016;
  chpl____wide__ref_string chpl_macro_tmp_2017;
  chpl____wide__ref_string chpl_macro_tmp_2018;
  chpl____wide__ref_string chpl_macro_tmp_2019;
  chpl____wide__ref_string chpl_macro_tmp_2020;
  chpl____wide__ref_string chpl_macro_tmp_2021;
  chpl____wide__ref_string chpl_macro_tmp_2022;
  chpl____wide__ref_string chpl_macro_tmp_2023;
  chpl____wide__ref_string chpl_macro_tmp_2024;
  chpl____wide_Error chpl_macro_tmp_2025;
  chpl____wide__ref_string chpl_macro_tmp_2026;
  chpl____wide__ref_string chpl_macro_tmp_2027;
  local__str_literal_596_chpl = _str_literal_596_chpl /* "With a negative count, the range must have a last index." */;
  local__str_literal_215_chpl = _str_literal_215_chpl /* "" */;
  if ((x_chpl2)->buffLen == INT64(0)) {
    inlineImm_chpl = local__str_literal_215_chpl;
    i_x_chpl = &inlineImm_chpl;
    chpl_macro_tmp_2005.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2005.addr = i_x_chpl;
    tmp_chpl16 = chpl_macro_tmp_2005;
    init_ASSIGN__chpl21(&tmp_chpl15, tmp_chpl16);
    ret_chpl2 = tmp_chpl15;
    ret_chpl = ret_chpl2;
    goto _end_doStripNoEnc_chpl;
  }
  if ((chars_chpl)->buffLen == INT64(0)) {
    chpl_macro_tmp_2006.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2006.addr = x_chpl2;
    tmp_chpl18 = chpl_macro_tmp_2006;
    init_ASSIGN__chpl21(&tmp_chpl17, tmp_chpl18);
    ret_chpl3 = tmp_chpl17;
    ret_chpl = ret_chpl3;
    goto _end_doStripNoEnc_chpl;
  }
  call_tmp_chpl36 = get_chpl_nodeID();
  if ((x_chpl2)->locale_id == call_tmp_chpl36) {
    init_chpl73(&ret_chpl6);
    (&ret_chpl6)->cachedNumCodepoints = (x_chpl2)->cachedNumCodepoints;
    chpl_macro_tmp_2007.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2007.addr = x_chpl2;
    tmp_chpl19 = chpl_macro_tmp_2007;
    initWithBorrowedBuffer_chpl(&ret_chpl6, tmp_chpl19);
    ret_chpl5 = ret_chpl6;
    ret_chpl4 = ret_chpl5;
    goto _end_localize_chpl;
  } else {
    chpl_macro_tmp_2008.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2008.addr = x_chpl2;
    tmp_chpl20 = chpl_macro_tmp_2008;
    init_ASSIGN__chpl21(&x_chpl3, tmp_chpl20);
    ret_chpl4 = x_chpl3;
    goto _end_localize_chpl;
  }
  _end_localize_chpl:;
  localX_chpl = ret_chpl4;
  call_tmp_chpl37 = get_chpl_nodeID();
  if ((chars_chpl)->locale_id == call_tmp_chpl37) {
    init_chpl73(&ret_chpl9);
    (&ret_chpl9)->cachedNumCodepoints = (chars_chpl)->cachedNumCodepoints;
    chpl_macro_tmp_2009.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2009.addr = chars_chpl;
    tmp_chpl21 = chpl_macro_tmp_2009;
    initWithBorrowedBuffer_chpl(&ret_chpl9, tmp_chpl21);
    ret_chpl8 = ret_chpl9;
    ret_chpl7 = ret_chpl8;
    goto _end_localize_chpl2;
  } else {
    chpl_macro_tmp_2010.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2010.addr = chars_chpl;
    tmp_chpl22 = chpl_macro_tmp_2010;
    init_ASSIGN__chpl21(&x_chpl4, tmp_chpl22);
    ret_chpl7 = x_chpl4;
    goto _end_localize_chpl2;
  }
  _end_localize_chpl2:;
  localChars_chpl = ret_chpl7;
  start_chpl = INT64(0);
  end_chpl = ((int64_t)(((&localX_chpl)->buffLen - INT64(1))));
  if (leading_chpl) {
    tmp_chpl23 = (x_chpl2)->cachedNumCodepoints;
    call_tmp_chpl38 = chpl__nudgeHighBound(tmp_chpl23);
    chpl_build_bounded_range(INT64(0), call_tmp_chpl38, &ret_tmp_chpl);
    call_tmp_chpl39 = ret_tmp_chpl;
    cast_tmp_chpl = chpl_here_alloc(sizeof(chpl__ic_these_range_int64_t_bounded_F_chpl_object), INT16(26), INT64(1240), INT32(47));
    _ic__chpl = ((_ic_these_range_int64_t_bounded_F_chpl)(cast_tmp_chpl));
    ((object_chpl)(_ic__chpl))->chpl__cid = chpl__cid__ic_these_range_int64_t_bounded_F_chpl;
    chpl_check_nil(_ic__chpl, INT64(1240), INT32(47));
    (_ic__chpl)->more = INT64(1);
    chpl_check_nil(_ic__chpl, INT64(1240), INT32(47));
    (_ic__chpl)->F0_this = call_tmp_chpl39;
    i_this_chpl = &localX_chpl;
    cast_tmp_chpl2 = chpl_here_alloc(sizeof(chpl__ic_chpl_bytes__ref_string_chpl_object), INT16(30), INT64(1240), INT32(47));
    _ic__chpl2 = ((_ic_chpl_bytes__ref_string_chpl)(cast_tmp_chpl2));
    ((object_chpl)(_ic__chpl2))->chpl__cid = chpl__cid__ic_chpl_bytes__ref_string_chpl;
    chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
    (_ic__chpl2)->more = INT64(1);
    chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
    (_ic__chpl2)->F0_this = i_this_chpl;
    chpl_check_nil(_ic__chpl, INT64(1240), INT32(47));
    tmp_chpl28 = (_ic__chpl)->F0_this;
    tmp_chpl24 = tmp_chpl28;
    checkIfIterWillOverflow_chpl(tmp_chpl24, UINT8(true));
    chpl_check_nil(_ic__chpl, INT64(1240), INT32(47));
    (_ic__chpl)->F1_i = INT64(0);
    chpl_check_nil(_ic__chpl, INT64(1240), INT32(47));
    tmp_chpl25 = &((_ic__chpl)->F0_this);
    tmp_chpl26 = (tmp_chpl25)->_low;
    chpl_check_nil(_ic__chpl, INT64(1240), INT32(47));
    (_ic__chpl)->F3_coerce_tmp = tmp_chpl26;
    chpl_check_nil(_ic__chpl, INT64(1240), INT32(47));
    tmp_chpl27 = &((_ic__chpl)->F0_this);
    coerce_tmp_chpl3 = (tmp_chpl27)->_high;
    chpl_check_nil(_ic__chpl, INT64(1240), INT32(47));
    (_ic__chpl)->F2_end = coerce_tmp_chpl3;
    chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
    tmp_chpl30 = (_ic__chpl2)->F0_this;
    call_tmp_chpl40 = get_chpl_nodeID();
    if ((tmp_chpl30)->locale_id == call_tmp_chpl40) {
      init_chpl73(&ret_chpl12);
      (&ret_chpl12)->cachedNumCodepoints = (tmp_chpl30)->cachedNumCodepoints;
      chpl_macro_tmp_2011.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2011.addr = tmp_chpl30;
      tmp_chpl42 = chpl_macro_tmp_2011;
      initWithBorrowedBuffer_chpl(&ret_chpl12, tmp_chpl42);
      ret_chpl11 = ret_chpl12;
      ret_chpl10 = ret_chpl11;
      goto _end_localize_chpl3;
    } else {
      chpl_macro_tmp_2012.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2012.addr = tmp_chpl30;
      tmp_chpl43 = chpl_macro_tmp_2012;
      init_ASSIGN__chpl21(&x_chpl5, tmp_chpl43);
      ret_chpl10 = x_chpl5;
      goto _end_localize_chpl3;
    }
    _end_localize_chpl3:;
    chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
    (_ic__chpl2)->F1_localThis = ret_chpl10;
    chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
    tmp_chpl31 = &((_ic__chpl2)->F1_localThis);
    coerce_tmp_chpl4 = (tmp_chpl31)->buffLen;
    cast_tmp_chpl3 = chpl_here_alloc(sizeof(chpl__ic_chpl_direct_counted_range_iter_chpl_object), INT16(32), INT64(1240), INT32(47));
    _ic__chpl3 = ((_ic_chpl_direct_counted_range_iter_chpl)(cast_tmp_chpl3));
    ((object_chpl)(_ic__chpl3))->chpl__cid = chpl__cid__ic_chpl_direct_counted_range_iter_chpl;
    chpl_check_nil(_ic__chpl3, INT64(1240), INT32(47));
    (_ic__chpl3)->more = INT64(1);
    chpl_check_nil(_ic__chpl3, INT64(1240), INT32(47));
    (_ic__chpl3)->F0_low = INT64(0);
    chpl_check_nil(_ic__chpl3, INT64(1240), INT32(47));
    (_ic__chpl3)->F1_count = coerce_tmp_chpl4;
    chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
    (_ic__chpl2)->F2__iterator = _ic__chpl3;
    chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
    tmp_chpl32 = &((_ic__chpl2)->F2__iterator);
    chpl_check_nil(tmp_chpl32, INT64(1240), INT32(47));
    low_chpl2 = (*(tmp_chpl32))->F0_low;
    chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
    tmp_chpl33 = &((_ic__chpl2)->F2__iterator);
    chpl_check_nil(tmp_chpl33, INT64(1240), INT32(47));
    count_chpl = (*(tmp_chpl33))->F1_count;
    cast_tmp_chpl4 = chpl_here_alloc(sizeof(chpl__ic_chpl_direct_counted_range_iter_helper_chpl_object), INT16(31), INT64(1240), INT32(47));
    _ic__chpl4 = ((_ic_chpl_direct_counted_range_iter_helper_chpl)(cast_tmp_chpl4));
    ((object_chpl)(_ic__chpl4))->chpl__cid = chpl__cid__ic_chpl_direct_counted_range_iter_helper_chpl;
    chpl_check_nil(_ic__chpl4, INT64(1240), INT32(47));
    (_ic__chpl4)->more = INT64(1);
    chpl_check_nil(_ic__chpl4, INT64(1240), INT32(47));
    (_ic__chpl4)->F0_low = low_chpl2;
    chpl_check_nil(_ic__chpl4, INT64(1240), INT32(47));
    (_ic__chpl4)->F1_count = count_chpl;
    chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
    (_ic__chpl2)->F3__iterator = _ic__chpl4;
    chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
    tmp_chpl34 = &((_ic__chpl2)->F3__iterator);
    chpl_check_nil(tmp_chpl34, INT64(1240), INT32(47));
    if ((*(tmp_chpl34))->F1_count < INT64(0)) {
      boundsCheckHalt_chpl(&local__str_literal_596_chpl, INT64(1240), INT32(47));
    }
    chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
    tmp_chpl35 = &((_ic__chpl2)->F3__iterator);
    chpl_check_nil(tmp_chpl35, INT64(1240), INT32(47));
    if ((*(tmp_chpl35))->F1_count == INT64(0)) {
      chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
      tmp_chpl44 = &((_ic__chpl2)->F3__iterator);
      chpl_check_nil(tmp_chpl44, INT64(1240), INT32(47));
      call_tmp_chpl41 = ((int64_t)(((uint64_t)((((uint64_t)((*(tmp_chpl44))->F0_low)) - UINT64(1))))));
      chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
      tmp_chpl45 = &((_ic__chpl2)->F3__iterator);
      chpl_check_nil(tmp_chpl45, INT64(1240), INT32(47));
      *(tmp_chpl29 + INT64(0)) = (*(tmp_chpl45))->F0_low;
      *(tmp_chpl29 + INT64(1)) = call_tmp_chpl41;
    } else {
      chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
      tmp_chpl46 = &((_ic__chpl2)->F3__iterator);
      chpl_check_nil(tmp_chpl46, INT64(1240), INT32(47));
      call_tmp_chpl42 = ((*(tmp_chpl46))->F1_count - INT64(1));
      chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
      tmp_chpl47 = &((_ic__chpl2)->F3__iterator);
      chpl_check_nil(tmp_chpl47, INT64(1240), INT32(47));
      call_tmp_chpl43 = ((*(tmp_chpl47))->F0_low + call_tmp_chpl42);
      chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
      tmp_chpl48 = &((_ic__chpl2)->F3__iterator);
      chpl_check_nil(tmp_chpl48, INT64(1240), INT32(47));
      *(tmp_chpl29 + INT64(0)) = (*(tmp_chpl48))->F0_low;
      *(tmp_chpl29 + INT64(1)) = call_tmp_chpl43;
    }
    chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
    *((_ic__chpl2)->F4_tmp + INT64(0)) = *(tmp_chpl29 + INT64(0));
    *((_ic__chpl2)->F4_tmp + INT64(1)) = *(tmp_chpl29 + INT64(1));
    chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
    tmp_chpl36 = &((_ic__chpl2)->F4_tmp);
    coerce_tmp_chpl5 = *(*(tmp_chpl36) + INT64(0));
    chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
    tmp_chpl37 = &((_ic__chpl2)->F4_tmp);
    coerce_tmp_chpl6 = *(*(tmp_chpl37) + INT64(1));
    cast_tmp_chpl5 = chpl_here_alloc(sizeof(chpl__ic_chpl_direct_param_stride_range_iter_chpl_object), INT16(28), INT64(1240), INT32(47));
    _ic__chpl5 = ((_ic_chpl_direct_param_stride_range_iter_chpl)(cast_tmp_chpl5));
    ((object_chpl)(_ic__chpl5))->chpl__cid = chpl__cid__ic_chpl_direct_param_stride_range_iter_chpl;
    chpl_check_nil(_ic__chpl5, INT64(1240), INT32(47));
    (_ic__chpl5)->more = INT64(1);
    chpl_check_nil(_ic__chpl5, INT64(1240), INT32(47));
    (_ic__chpl5)->F0_low = coerce_tmp_chpl5;
    chpl_check_nil(_ic__chpl5, INT64(1240), INT32(47));
    (_ic__chpl5)->F1_high = coerce_tmp_chpl6;
    chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
    (_ic__chpl2)->F5__iterator = _ic__chpl5;
    chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
    (_ic__chpl2)->F6_i = INT64(0);
    chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
    tmp_chpl38 = &((_ic__chpl2)->F5__iterator);
    chpl_check_nil(tmp_chpl38, INT64(1240), INT32(47));
    low_chpl3 = (*(tmp_chpl38))->F0_low;
    chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
    tmp_chpl39 = &((_ic__chpl2)->F5__iterator);
    chpl_check_nil(tmp_chpl39, INT64(1240), INT32(47));
    high_chpl = (*(tmp_chpl39))->F1_high;
    chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
    tmp_chpl40 = &((_ic__chpl2)->F5__iterator);
    chpl_check_nil(tmp_chpl40, INT64(1240), INT32(47));
    low_chpl4 = (*(tmp_chpl40))->F0_low;
    chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
    tmp_chpl41 = &((_ic__chpl2)->F5__iterator);
    chpl_check_nil(tmp_chpl41, INT64(1240), INT32(47));
    chpl_checkIfRangeIterWillOverflow(low_chpl4, (*(tmp_chpl41))->F1_high, INT64(1), low_chpl3, high_chpl, UINT8(true));
    chpl_check_nil(_ic__chpl, INT64(1240), INT32(47));
    tmp_chpl49 = (_ic__chpl)->F2_end;
    for (chpl_check_nil(_ic__chpl, INT64(1240), INT32(47)),tmp_chpl63 = (_ic__chpl)->F3_coerce_tmp,chpl_check_nil(_ic__chpl, INT64(1240), INT32(47)),(_ic__chpl)->F1_i = tmp_chpl63,chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47)),tmp_chpl65 = &((_ic__chpl2)->F5__iterator),chpl_check_nil(tmp_chpl65, INT64(1240), INT32(47)),tmp_chpl64 = (*(tmp_chpl65))->F0_low,chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47)),(_ic__chpl2)->F7_low = tmp_chpl64,chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47)),tmp_chpl66 = (_ic__chpl2)->F7_low,chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47)),(_ic__chpl2)->F6_i = tmp_chpl66; (chpl_check_nil(_ic__chpl, INT64(1240), INT32(47)),tmp_chpl67 = ((_ic__chpl)->F1_i <= tmp_chpl49),tmp_chpl67); chpl_check_nil(_ic__chpl, INT64(1240), INT32(47)),tmp_chpl68 = (_ic__chpl)->F1_i,tmp_chpl68 += INT64(1),chpl_check_nil(_ic__chpl, INT64(1240), INT32(47)),(_ic__chpl)->F1_i = tmp_chpl68,chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47)),tmp_chpl69 = (_ic__chpl2)->F6_i,tmp_chpl69 += INT64(1),chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47)),(_ic__chpl2)->F6_i = tmp_chpl69) {
      chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
      tmp_chpl50 = (_ic__chpl2)->F6_i;
      chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
      tmp_chpl51 = &((_ic__chpl2)->F1_localThis);
      coerce_tmp_chpl7 = (tmp_chpl51)->buff;
      call_tmp_chpl44 = (coerce_tmp_chpl7 + tmp_chpl50);
      tmp_chpl52 = *(call_tmp_chpl44);
      chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
      (_ic__chpl2)->value = tmp_chpl52;
      chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
      (_ic__chpl2)->more = INT64(2);
      chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
      tmp_chpl54 = &((_ic__chpl2)->F5__iterator);
      chpl_check_nil(tmp_chpl54, INT64(1240), INT32(47));
      high_chpl2 = (*(tmp_chpl54))->F1_high;
      chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
      tmp_chpl53 = ((_ic__chpl2)->F6_i <= high_chpl2);
      hasMore_chpl = (tmp_chpl53 != INT64(0));
      if (! hasMore_chpl) {
        chpl_error("zippered iterations have non-equal lengths", INT64(1240), INT32(47));
      }
      chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
      tmp_chpl55 = (_ic__chpl2)->value;
      chpl_check_nil(_ic__chpl, INT64(1240), INT32(47));
      tmp_chpl56 = (_ic__chpl)->F1_i;
      chpl_check_nil(_ic__chpl, INT64(1240), INT32(47));
      (_ic__chpl)->value = tmp_chpl56;
      chpl_check_nil(_ic__chpl, INT64(1240), INT32(47));
      (_ic__chpl)->more = INT64(2);
      chpl_check_nil(_ic__chpl, INT64(1240), INT32(47));
      i_chpl = (_ic__chpl)->value;
      xChar_chpl = tmp_chpl55;
      i_this_chpl2 = &localChars_chpl;
      call_tmp_chpl45 = get_chpl_nodeID();
      if ((&localChars_chpl)->locale_id == call_tmp_chpl45) {
        init_chpl73(&ret_chpl15);
        (&ret_chpl15)->cachedNumCodepoints = (&localChars_chpl)->cachedNumCodepoints;
        chpl_macro_tmp_2013.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_2013.addr = i_this_chpl2;
        tmp_chpl57 = chpl_macro_tmp_2013;
        initWithBorrowedBuffer_chpl(&ret_chpl15, tmp_chpl57);
        ret_chpl14 = ret_chpl15;
        ret_chpl13 = ret_chpl14;
        goto _end_localize_chpl4;
      } else {
        chpl_macro_tmp_2014.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_2014.addr = i_this_chpl2;
        tmp_chpl58 = chpl_macro_tmp_2014;
        init_ASSIGN__chpl21(&x_chpl6, tmp_chpl58);
        ret_chpl13 = x_chpl6;
        goto _end_localize_chpl4;
      }
      _end_localize_chpl4:;
      localThis_chpl = ret_chpl13;
      coerce_tmp_chpl8 = (&localThis_chpl)->buffLen;
      if (coerce_tmp_chpl8 < INT64(0)) {
        boundsCheckHalt_chpl(&local__str_literal_596_chpl, INT64(1241), INT32(47));
      }
      if (coerce_tmp_chpl8 == INT64(0)) {
        tmp_x0_chpl = INT64(0);
        tmp_x1_chpl = ((int64_t)(((uint64_t)((((uint64_t)(INT64(0))) - UINT64(1))))));
      } else {
        tmp_x0_chpl = INT64(0);
        tmp_x1_chpl = ((int64_t)((INT64(0) + ((int64_t)((coerce_tmp_chpl8 - INT64(1)))))));
      }
      _ic__F1_high_chpl = tmp_x1_chpl;
      i_chpl2 = INT64(0);
      chpl_checkIfRangeIterWillOverflow(tmp_x0_chpl, tmp_x1_chpl, INT64(1), tmp_x0_chpl, tmp_x1_chpl, UINT8(true));
      for (i_chpl2 = tmp_x0_chpl; ((i_chpl2 <= _ic__F1_high_chpl)); i_chpl2 += INT64(1)) {
        coerce_tmp_chpl9 = (&localThis_chpl)->buff;
        call_tmp_chpl46 = (coerce_tmp_chpl9 + i_chpl2);
        yret_chpl = *(call_tmp_chpl46);
        if (xChar_chpl == yret_chpl) {
          start_chpl = ((int64_t)((i_chpl + INT64(1))));
          i_x_chpl2 = &localThis_chpl;
          chpl_macro_tmp_2015.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_2015.addr = i_x_chpl2;
          tmp_chpl59 = chpl_macro_tmp_2015;
          deinit_chpl42(tmp_chpl59);
          goto _continueLabel_chpl;
        }
      }
      i_x_chpl3 = &localThis_chpl;
      chpl_macro_tmp_2016.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2016.addr = i_x_chpl3;
      tmp_chpl60 = chpl_macro_tmp_2016;
      deinit_chpl42(tmp_chpl60);
      chpl_check_nil(_ic__chpl, INT64(1240), INT32(47));
      tmp_chpl61 = (_ic__chpl)->more;
      moreValNeg1_chpl = (-tmp_chpl61);
      chpl_check_nil(_ic__chpl, INT64(1240), INT32(47));
      (_ic__chpl)->more = moreValNeg1_chpl;
      chpl_check_nil(_ic__chpl, INT64(1240), INT32(47));
      advance_chpl(_ic__chpl);
      chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
      tmp_chpl62 = (_ic__chpl2)->more;
      moreValNeg2_chpl = (-tmp_chpl62);
      chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
      (_ic__chpl2)->more = moreValNeg2_chpl;
      chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
      advance_chpl2(_ic__chpl2);
      goto _breakLabel_chpl;
      _continueLabel_chpl:;
    }
    chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
    tmp_chpl71 = &((_ic__chpl2)->F5__iterator);
    chpl_check_nil(tmp_chpl71, INT64(1240), INT32(47));
    high_chpl3 = (*(tmp_chpl71))->F1_high;
    chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
    tmp_chpl70 = ((_ic__chpl2)->F6_i <= high_chpl3);
    hasMore_chpl = (tmp_chpl70 != INT64(0));
    if (hasMore_chpl) {
      chpl_error("zippered iterations have non-equal lengths", INT64(1240), INT32(47));
    }
    chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
    call_tmp_chpl47 = ((void*)((_ic__chpl2)->F5__iterator));
    chpl_here_free(call_tmp_chpl47, INT64(1240), INT32(47));
    chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
    call_tmp_chpl48 = ((void*)((_ic__chpl2)->F3__iterator));
    chpl_here_free(call_tmp_chpl48, INT64(1240), INT32(47));
    chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
    call_tmp_chpl49 = ((void*)((_ic__chpl2)->F2__iterator));
    chpl_here_free(call_tmp_chpl49, INT64(1240), INT32(47));
    chpl_check_nil(_ic__chpl2, INT64(1240), INT32(47));
    tmp_chpl72 = &((_ic__chpl2)->F1_localThis);
    chpl_macro_tmp_2017.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2017.addr = tmp_chpl72;
    tmp_chpl73 = chpl_macro_tmp_2017;
    deinit_chpl42(tmp_chpl73);
    _breakLabel_chpl:;
    call_tmp_chpl50 = ((void*)(_ic__chpl));
    chpl_here_free(call_tmp_chpl50, INT64(1240), INT32(47));
    call_tmp_chpl51 = ((void*)(_ic__chpl2));
    chpl_here_free(call_tmp_chpl51, INT64(1240), INT32(47));
  }
  if (trailing_chpl) {
    end_chpl = INT64(-1);
    tmp_chpl74 = (x_chpl2)->cachedNumCodepoints;
    call_tmp_chpl52 = chpl__nudgeHighBound(tmp_chpl74);
    chpl_build_bounded_range(INT64(0), call_tmp_chpl52, &ret_tmp_chpl2);
    call_tmp_chpl53 = ret_tmp_chpl2;
    _ic__F0_this_chpl = call_tmp_chpl53;
    i_this_chpl3 = &localX_chpl;
    checkIfIterWillOverflow_chpl(call_tmp_chpl53, UINT8(true));
    _ic__F1_i_chpl = INT64(0);
    tmp_chpl75 = (&_ic__F0_this_chpl)->_low;
    _ic__F2_end_chpl = (&_ic__F0_this_chpl)->_high;
    call_tmp_chpl54 = get_chpl_nodeID();
    if ((&localX_chpl)->locale_id == call_tmp_chpl54) {
      init_chpl73(&ret_chpl18);
      (&ret_chpl18)->cachedNumCodepoints = (&localX_chpl)->cachedNumCodepoints;
      chpl_macro_tmp_2018.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2018.addr = i_this_chpl3;
      tmp_chpl77 = chpl_macro_tmp_2018;
      initWithBorrowedBuffer_chpl(&ret_chpl18, tmp_chpl77);
      ret_chpl17 = ret_chpl18;
      ret_chpl16 = ret_chpl17;
      goto _end_localize_chpl5;
    } else {
      chpl_macro_tmp_2019.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2019.addr = i_this_chpl3;
      tmp_chpl78 = chpl_macro_tmp_2019;
      init_ASSIGN__chpl21(&x_chpl7, tmp_chpl78);
      ret_chpl16 = x_chpl7;
      goto _end_localize_chpl5;
    }
    _end_localize_chpl5:;
    _ic__F1_localThis_chpl = ret_chpl16;
    coerce_tmp_chpl10 = (&_ic__F1_localThis_chpl)->buffLen;
    if (coerce_tmp_chpl10 < INT64(0)) {
      boundsCheckHalt_chpl(&local__str_literal_596_chpl, INT64(1257), INT32(47));
    }
    if (coerce_tmp_chpl10 == INT64(0)) {
      call_tmp_chpl55 = ((int64_t)(((uint64_t)((((uint64_t)(INT64(0))) - UINT64(1))))));
      *(tmp_chpl76 + INT64(0)) = INT64(0);
      *(tmp_chpl76 + INT64(1)) = call_tmp_chpl55;
    } else {
      call_tmp_chpl56 = (INT64(0) + ((int64_t)((coerce_tmp_chpl10 - INT64(1)))));
      *(tmp_chpl76 + INT64(0)) = INT64(0);
      *(tmp_chpl76 + INT64(1)) = call_tmp_chpl56;
    }
    _ic__F4_tmp_x0_chpl = *(tmp_chpl76 + INT64(0));
    _ic__F4_tmp_x1_chpl = *(tmp_chpl76 + INT64(1));
    _ic__F1_high_chpl2 = _ic__F4_tmp_x1_chpl;
    _ic__F6_i_chpl = INT64(0);
    chpl_checkIfRangeIterWillOverflow(_ic__F4_tmp_x0_chpl, _ic__F4_tmp_x1_chpl, INT64(1), _ic__F4_tmp_x0_chpl, _ic__F4_tmp_x1_chpl, UINT8(true));
    for (_ic__F1_i_chpl = tmp_chpl75,_ic__F6_i_chpl = _ic__F4_tmp_x0_chpl; (tmp_chpl85 = (_ic__F1_i_chpl <= _ic__F2_end_chpl),tmp_chpl85); tmp_chpl86 = _ic__F1_i_chpl,tmp_chpl86 += INT64(1),_ic__F1_i_chpl = tmp_chpl86,tmp_chpl87 = _ic__F6_i_chpl,tmp_chpl87 += INT64(1),_ic__F6_i_chpl = tmp_chpl87) {
      coerce_tmp_chpl11 = (&_ic__F1_localThis_chpl)->buff;
      call_tmp_chpl57 = (coerce_tmp_chpl11 + _ic__F6_i_chpl);
      tmp_chpl79 = *(call_tmp_chpl57);
      tmp_chpl80 = (_ic__F6_i_chpl <= _ic__F1_high_chpl2);
      hasMore_chpl2 = (tmp_chpl80 != INT64(0));
      if (! hasMore_chpl2) {
        chpl_error("zippered iterations have non-equal lengths", INT64(1257), INT32(47));
      }
      i_chpl3 = _ic__F1_i_chpl;
      xChar_chpl2 = tmp_chpl79;
      i_this_chpl4 = &localChars_chpl;
      call_tmp_chpl58 = get_chpl_nodeID();
      if ((&localChars_chpl)->locale_id == call_tmp_chpl58) {
        init_chpl73(&ret_chpl21);
        (&ret_chpl21)->cachedNumCodepoints = (&localChars_chpl)->cachedNumCodepoints;
        chpl_macro_tmp_2020.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_2020.addr = i_this_chpl4;
        tmp_chpl81 = chpl_macro_tmp_2020;
        initWithBorrowedBuffer_chpl(&ret_chpl21, tmp_chpl81);
        ret_chpl20 = ret_chpl21;
        ret_chpl19 = ret_chpl20;
        goto _end_localize_chpl6;
      } else {
        chpl_macro_tmp_2021.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_2021.addr = i_this_chpl4;
        tmp_chpl82 = chpl_macro_tmp_2021;
        init_ASSIGN__chpl21(&x_chpl8, tmp_chpl82);
        ret_chpl19 = x_chpl8;
        goto _end_localize_chpl6;
      }
      _end_localize_chpl6:;
      localThis_chpl2 = ret_chpl19;
      coerce_tmp_chpl12 = (&localThis_chpl2)->buffLen;
      if (coerce_tmp_chpl12 < INT64(0)) {
        boundsCheckHalt_chpl(&local__str_literal_596_chpl, INT64(1258), INT32(47));
      }
      if (coerce_tmp_chpl12 == INT64(0)) {
        tmp_x0_chpl2 = INT64(0);
        tmp_x1_chpl2 = ((int64_t)(((uint64_t)((((uint64_t)(INT64(0))) - UINT64(1))))));
      } else {
        tmp_x0_chpl2 = INT64(0);
        tmp_x1_chpl2 = ((int64_t)((INT64(0) + ((int64_t)((coerce_tmp_chpl12 - INT64(1)))))));
      }
      _ic__F1_high_chpl3 = tmp_x1_chpl2;
      i_chpl4 = INT64(0);
      chpl_checkIfRangeIterWillOverflow(tmp_x0_chpl2, tmp_x1_chpl2, INT64(1), tmp_x0_chpl2, tmp_x1_chpl2, UINT8(true));
      for (i_chpl4 = tmp_x0_chpl2; ((i_chpl4 <= _ic__F1_high_chpl3)); i_chpl4 += INT64(1)) {
        coerce_tmp_chpl13 = (&localThis_chpl2)->buff;
        call_tmp_chpl59 = (coerce_tmp_chpl13 + i_chpl4);
        yret_chpl2 = *(call_tmp_chpl59);
        if (xChar_chpl2 == yret_chpl2) {
          i_x_chpl4 = &localThis_chpl2;
          chpl_macro_tmp_2022.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_2022.addr = i_x_chpl4;
          tmp_chpl83 = chpl_macro_tmp_2022;
          deinit_chpl42(tmp_chpl83);
          goto _continueLabel_chpl2;
        }
      }
      i_x_chpl5 = &localThis_chpl2;
      chpl_macro_tmp_2023.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2023.addr = i_x_chpl5;
      tmp_chpl84 = chpl_macro_tmp_2023;
      deinit_chpl42(tmp_chpl84);
      end_chpl = i_chpl3;
      _continueLabel_chpl2:;
    }
    tmp_chpl88 = (_ic__F6_i_chpl <= _ic__F1_high_chpl2);
    hasMore_chpl2 = (tmp_chpl88 != INT64(0));
    if (hasMore_chpl2) {
      chpl_error("zippered iterations have non-equal lengths", INT64(1257), INT32(47));
    }
    tmp_chpl89 = &_ic__F1_localThis_chpl;
    chpl_macro_tmp_2024.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2024.addr = tmp_chpl89;
    tmp_chpl90 = chpl_macro_tmp_2024;
    deinit_chpl42(tmp_chpl90);
  }
  chpl_build_bounded_range(start_chpl, end_chpl, &ret_tmp_chpl3);
  call_tmp_chpl60 = ret_tmp_chpl3;
  i_this_chpl5 = &localX_chpl;
  error_chpl = NULL;
  getSlice_chpl2(i_this_chpl5, call_tmp_chpl60, &error_chpl, &ret_tmp_chpl4);
  call_tmp_chpl61 = ret_tmp_chpl4;
  if (error_chpl != nil) {
    chpl_macro_tmp_2025.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2025.addr = error_chpl;
    tmp_chpl91 = chpl_macro_tmp_2025;
    chpl_uncaught_error(tmp_chpl91, INT64(1268), INT32(47));
  }
  ret_chpl = call_tmp_chpl61;
  i_x_chpl6 = &localChars_chpl;
  chpl_macro_tmp_2026.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2026.addr = i_x_chpl6;
  tmp_chpl92 = chpl_macro_tmp_2026;
  deinit_chpl42(tmp_chpl92);
  i_x_chpl7 = &localX_chpl;
  chpl_macro_tmp_2027.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2027.addr = i_x_chpl7;
  tmp_chpl93 = chpl_macro_tmp_2027;
  deinit_chpl42(tmp_chpl93);
  _end_doStripNoEnc_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* BytesStringCommon.chpl:1353 */
static int64_t countNumCodepoints_chpl(uint8_t * buff_chpl,
                                       int64_t buffLen_chpl) {
  int64_t ret_chpl;
  int64_t n_chpl;
  int64_t i_chpl;
  chpl_bool tmp_chpl15;
  _ref_int64_t_chpl i_lhs_chpl = NULL;
  chpl_bool tmp_chpl16;
  chpl_bool tmp_chpl17;
  _ref_uint8_t_chpl call_tmp_chpl36 = NULL;
  _ref_int64_t_chpl i_lhs_chpl2 = NULL;
  chpl_bool tmp_chpl18;
  _ref_uint8_t_chpl call_tmp_chpl37 = NULL;
  _ref_int64_t_chpl i_lhs_chpl3 = NULL;
  n_chpl = INT64(0);
  i_chpl = INT64(0);
  tmp_chpl15 = (INT64(0) < buffLen_chpl);
  while (tmp_chpl15) {
    i_lhs_chpl = &i_chpl;
    *(i_lhs_chpl) += INT64(1);
    if (i_chpl < buffLen_chpl) {
      call_tmp_chpl36 = (buff_chpl + i_chpl);
      tmp_chpl17 = (! ((*(call_tmp_chpl36) & ((uint8_t)(INT64(192)))) != ((uint8_t)(INT64(128)))));
    } else {
      tmp_chpl17 = UINT8(false);
    }
    tmp_chpl16 = tmp_chpl17;
    while (tmp_chpl16) {
      i_lhs_chpl2 = &i_chpl;
      *(i_lhs_chpl2) += INT64(1);
      if (i_chpl < buffLen_chpl) {
        call_tmp_chpl37 = (buff_chpl + i_chpl);
        tmp_chpl18 = (! ((*(call_tmp_chpl37) & ((uint8_t)(INT64(192)))) != ((uint8_t)(INT64(128)))));
      } else {
        tmp_chpl18 = UINT8(false);
      }
      tmp_chpl16 = tmp_chpl18;
    }
    i_lhs_chpl3 = &n_chpl;
    *(i_lhs_chpl3) += INT64(1);
    tmp_chpl15 = (i_chpl < buffLen_chpl);
  }
  ret_chpl = n_chpl;
  return ret_chpl;
}

/* BytesStringCommon.chpl:1378 */
static int64_t _findStartOfNextCodepointFromByte_chpl(string_chpl * x_chpl2,
                                                      byteIndex_chpl * i_chpl) {
  int64_t ret_chpl;
  int64_t ret_chpl2;
  int64_t ret_chpl3;
  chpl_bool tmp_chpl15;
  chpl_bool tmp_chpl16;
  c_ptr_uint8_t_chpl coerce_tmp_chpl3 = NULL;
  _ref_uint8_t_chpl call_tmp_chpl36 = NULL;
  _ref_int64_t_chpl i_lhs_chpl = NULL;
  chpl_bool tmp_chpl17;
  c_ptr_uint8_t_chpl coerce_tmp_chpl4 = NULL;
  _ref_uint8_t_chpl call_tmp_chpl37 = NULL;
  ret_chpl2 = (i_chpl)->_bindex;
  ret_chpl3 = ret_chpl2;
  if (ret_chpl2 > INT64(0)) {
    if (ret_chpl2 < (x_chpl2)->buffLen) {
      coerce_tmp_chpl3 = (x_chpl2)->buff;
      call_tmp_chpl36 = (coerce_tmp_chpl3 + ret_chpl2);
      tmp_chpl16 = (! ((*(call_tmp_chpl36) & ((uint8_t)(INT64(192)))) != ((uint8_t)(INT64(128)))));
    } else {
      tmp_chpl16 = UINT8(false);
    }
    tmp_chpl15 = tmp_chpl16;
    while (tmp_chpl15) {
      i_lhs_chpl = &ret_chpl3;
      *(i_lhs_chpl) += INT64(1);
      if (ret_chpl3 < (x_chpl2)->buffLen) {
        coerce_tmp_chpl4 = (x_chpl2)->buff;
        call_tmp_chpl37 = (coerce_tmp_chpl4 + ret_chpl3);
        tmp_chpl17 = (! ((*(call_tmp_chpl37) & ((uint8_t)(INT64(192)))) != ((uint8_t)(INT64(128)))));
      } else {
        tmp_chpl17 = UINT8(false);
      }
      tmp_chpl15 = tmp_chpl17;
    }
  }
  ret_chpl = ret_chpl3;
  return ret_chpl;
}

/* BytesStringCommon.chpl:1389 */
static void _cleanupForNumericCast_chpl(string_chpl * x_chpl2) {
  string_chpl local__str_literal_215_chpl;
  string_chpl local__str_literal_387_chpl;
  string_chpl local__str_literal_342_chpl;
  chpl_bool hasUnderscores_chpl;
  int64_t tmp_chpl15;
  int64_t call_tmp_chpl36;
  int64_t _ic__F1_high_chpl;
  int64_t i_chpl;
  uint8_t call_tmp_chpl37;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl38;
  string_chpl ret_tmp_chpl;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl39;
  int64_t ret_chpl;
  int64_t tmp_chpl19;
  chpl_bool tmp_chpl20;
  uint8_t call_tmp_chpl40;
  chpl____wide__ref_string tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl41;
  codepointIndex_chpl call_tmp_chpl42;
  codepointIndex_chpl ret_chpl2;
  codepointIndex_chpl cpi_chpl;
  string_chpl call_tmp_chpl43;
  string_chpl ret_tmp_chpl2;
  range_int64_t_boundedLow_F_chpl call_tmp_chpl44;
  range_int64_t_boundedLow_F_chpl ret_tmp_chpl3;
  string_chpl call_tmp_chpl45;
  string_chpl call_tmp_chpl46;
  Error_chpl error_chpl = NULL;
  string_chpl ret_tmp_chpl4;
  chpl____wide_Error tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl47;
  _ref_string_chpl i_this_chpl = NULL;
  string_chpl inlineImm_chpl;
  _ref_string_chpl i_pattern_chpl = NULL;
  string_chpl inlineImm_chpl2;
  _ref_string_chpl i_replacement_chpl = NULL;
  string_chpl call_tmp_chpl48;
  string_chpl ret_tmp_chpl5;
  string_chpl call_tmp_chpl49;
  string_chpl ret_tmp_chpl6;
  chpl____wide__ref_string tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl25 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl5 = NULL;
  chpl____wide__ref_string tmp_chpl28 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl50;
  string_chpl inlineImm_chpl3;
  _ref_string_chpl i_pattern_chpl2 = NULL;
  string_chpl inlineImm_chpl4;
  _ref_string_chpl i_replacement_chpl2 = NULL;
  string_chpl call_tmp_chpl51;
  string_chpl ret_tmp_chpl7;
  chpl____wide__ref_string tmp_chpl29 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl6 = NULL;
  chpl____wide__ref_string tmp_chpl30 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_2028;
  chpl____wide__ref_string chpl_macro_tmp_2029;
  chpl____wide__ref_string chpl_macro_tmp_2030;
  chpl____wide__ref_string chpl_macro_tmp_2031;
  chpl____wide_Error chpl_macro_tmp_2032;
  chpl____wide__ref_string chpl_macro_tmp_2033;
  chpl____wide__ref_string chpl_macro_tmp_2034;
  chpl____wide__ref_string chpl_macro_tmp_2035;
  chpl____wide__ref_string chpl_macro_tmp_2036;
  chpl____wide__ref_string chpl_macro_tmp_2037;
  chpl____wide__ref_string chpl_macro_tmp_2038;
  chpl____wide__ref_string chpl_macro_tmp_2039;
  chpl____wide__ref_string chpl_macro_tmp_2040;
  local__str_literal_215_chpl = _str_literal_215_chpl /* "" */;
  local__str_literal_387_chpl = _str_literal_387_chpl /* "_" */;
  local__str_literal_342_chpl = _str_literal_342_chpl /* " \t\r\n" */;
  hasUnderscores_chpl = UINT8(false);
  tmp_chpl15 = (x_chpl2)->buffLen;
  call_tmp_chpl36 = chpl__nudgeHighBound(tmp_chpl15);
  _ic__F1_high_chpl = call_tmp_chpl36;
  i_chpl = INT64(0);
  chpl_checkIfRangeIterWillOverflow(INT64(1), call_tmp_chpl36, INT64(1), INT64(1), call_tmp_chpl36, UINT8(true));
  for (i_chpl = INT64(1); ((i_chpl <= _ic__F1_high_chpl)); i_chpl += INT64(1)) {
    chpl_macro_tmp_2028.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2028.addr = x_chpl2;
    tmp_chpl16 = chpl_macro_tmp_2028;
    call_tmp_chpl37 = byte_chpl(tmp_chpl16, i_chpl);
    if (call_tmp_chpl37 == UINT8(95)) {
      hasUnderscores_chpl = UINT8(true);
      goto _breakLabel_chpl;
    }
  }
  _breakLabel_chpl:;
  if (hasUnderscores_chpl) {
    strip_chpl(x_chpl2, &local__str_literal_342_chpl, UINT8(true), UINT8(true), &ret_tmp_chpl);
    call_tmp_chpl38 = ret_tmp_chpl;
    chpl_macro_tmp_2029.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2029.addr = x_chpl2;
    tmp_chpl17 = chpl_macro_tmp_2029;
    chpl___ASSIGN_6(tmp_chpl17, &call_tmp_chpl38);
    i_x_chpl = &call_tmp_chpl38;
    chpl_macro_tmp_2030.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2030.addr = i_x_chpl;
    tmp_chpl18 = chpl_macro_tmp_2030;
    deinit_chpl42(tmp_chpl18);
    call_tmp_chpl39 = _isSingleWord_chpl(x_chpl2);
    if (call_tmp_chpl39) {
      tmp_chpl19 = (x_chpl2)->cachedNumCodepoints;
      ret_chpl = tmp_chpl19;
      if (ret_chpl >= INT64(2)) {
        if (ret_chpl > INT64(2)) {
          chpl_macro_tmp_2031.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_2031.addr = x_chpl2;
          tmp_chpl21 = chpl_macro_tmp_2031;
          call_tmp_chpl40 = byte_chpl(tmp_chpl21, INT64(0));
          tmp_chpl20 = (call_tmp_chpl40 == UINT8(95));
        } else {
          tmp_chpl20 = UINT8(false);
        }
        if (tmp_chpl20) {
          init_chpl72(&cpi_chpl);
          (&cpi_chpl)->_cpindex = INT64(0);
          ret_chpl2 = cpi_chpl;
          call_tmp_chpl42 = ret_chpl2;
          this_chpl6(x_chpl2, &call_tmp_chpl42, &ret_tmp_chpl2);
          call_tmp_chpl43 = ret_tmp_chpl2;
          call_tmp_chpl41 = call_tmp_chpl43;
          chpl_build_low_bounded_range(INT64(1), &ret_tmp_chpl3);
          call_tmp_chpl44 = ret_tmp_chpl3;
          error_chpl = NULL;
          getSlice_chpl(x_chpl2, call_tmp_chpl44, &error_chpl, &ret_tmp_chpl4);
          call_tmp_chpl46 = ret_tmp_chpl4;
          if (error_chpl != nil) {
            chpl_macro_tmp_2032.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_2032.addr = error_chpl;
            tmp_chpl22 = chpl_macro_tmp_2032;
            chpl_uncaught_error(tmp_chpl22, INT64(1411), INT32(47));
          }
          call_tmp_chpl45 = call_tmp_chpl46;
          i_this_chpl = &call_tmp_chpl45;
          inlineImm_chpl = local__str_literal_387_chpl;
          i_pattern_chpl = &inlineImm_chpl;
          inlineImm_chpl2 = local__str_literal_215_chpl;
          i_replacement_chpl = &inlineImm_chpl2;
          doReplace_chpl(i_this_chpl, i_pattern_chpl, i_replacement_chpl, INT64(-1), &ret_tmp_chpl5);
          call_tmp_chpl48 = ret_tmp_chpl5;
          call_tmp_chpl47 = call_tmp_chpl48;
          chpl_macro_tmp_2033.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_2033.addr = &call_tmp_chpl47;
          tmp_chpl23 = chpl_macro_tmp_2033;
          chpl___PLUS_(&call_tmp_chpl41, tmp_chpl23, &ret_tmp_chpl6);
          call_tmp_chpl49 = ret_tmp_chpl6;
          chpl_macro_tmp_2034.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_2034.addr = x_chpl2;
          tmp_chpl24 = chpl_macro_tmp_2034;
          chpl___ASSIGN_6(tmp_chpl24, &call_tmp_chpl49);
          i_x_chpl2 = &call_tmp_chpl49;
          chpl_macro_tmp_2035.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_2035.addr = i_x_chpl2;
          tmp_chpl25 = chpl_macro_tmp_2035;
          deinit_chpl42(tmp_chpl25);
          i_x_chpl3 = &call_tmp_chpl47;
          chpl_macro_tmp_2036.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_2036.addr = i_x_chpl3;
          tmp_chpl26 = chpl_macro_tmp_2036;
          deinit_chpl42(tmp_chpl26);
          i_x_chpl4 = &call_tmp_chpl45;
          chpl_macro_tmp_2037.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_2037.addr = i_x_chpl4;
          tmp_chpl27 = chpl_macro_tmp_2037;
          deinit_chpl42(tmp_chpl27);
          i_x_chpl5 = &call_tmp_chpl41;
          chpl_macro_tmp_2038.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_2038.addr = i_x_chpl5;
          tmp_chpl28 = chpl_macro_tmp_2038;
          deinit_chpl42(tmp_chpl28);
        } else {
          inlineImm_chpl3 = local__str_literal_387_chpl;
          i_pattern_chpl2 = &inlineImm_chpl3;
          inlineImm_chpl4 = local__str_literal_215_chpl;
          i_replacement_chpl2 = &inlineImm_chpl4;
          doReplace_chpl(x_chpl2, i_pattern_chpl2, i_replacement_chpl2, INT64(-1), &ret_tmp_chpl7);
          call_tmp_chpl51 = ret_tmp_chpl7;
          call_tmp_chpl50 = call_tmp_chpl51;
          chpl_macro_tmp_2039.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_2039.addr = x_chpl2;
          tmp_chpl29 = chpl_macro_tmp_2039;
          chpl___ASSIGN_6(tmp_chpl29, &call_tmp_chpl50);
          i_x_chpl6 = &call_tmp_chpl50;
          chpl_macro_tmp_2040.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_2040.addr = i_x_chpl6;
          tmp_chpl30 = chpl_macro_tmp_2040;
          deinit_chpl42(tmp_chpl30);
        }
      }
    }
  }
  return;
}

/* BytesStringCommon.chpl:1420 */
static chpl_bool _isSingleWord_chpl(string_chpl * x_chpl2) {
  string_chpl local__str_literal_596_chpl;
  chpl_bool ret_chpl;
  string_chpl ret_chpl2;
  int32_t call_tmp_chpl36;
  string_chpl ret_chpl3;
  string_chpl ret_chpl4;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl x_chpl3;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl localThis_chpl;
  int64_t coerce_tmp_chpl3;
  int64_t tmp_x0_chpl;
  int64_t tmp_x1_chpl;
  int64_t _ic__F1_high_chpl;
  int64_t i_chpl;
  uint8_t yret_chpl;
  c_ptr_uint8_t_chpl coerce_tmp_chpl4 = NULL;
  _ref_uint8_t_chpl call_tmp_chpl37 = NULL;
  int32_t call_tmp_chpl38;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_2041;
  chpl____wide__ref_string chpl_macro_tmp_2042;
  chpl____wide__ref_string chpl_macro_tmp_2043;
  chpl____wide__ref_string chpl_macro_tmp_2044;
  local__str_literal_596_chpl = _str_literal_596_chpl /* "With a negative count, the range must have a last index." */;
  call_tmp_chpl36 = get_chpl_nodeID();
  if ((x_chpl2)->locale_id == call_tmp_chpl36) {
    init_chpl73(&ret_chpl4);
    (&ret_chpl4)->cachedNumCodepoints = (x_chpl2)->cachedNumCodepoints;
    chpl_macro_tmp_2041.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2041.addr = x_chpl2;
    tmp_chpl15 = chpl_macro_tmp_2041;
    initWithBorrowedBuffer_chpl(&ret_chpl4, tmp_chpl15);
    ret_chpl3 = ret_chpl4;
    ret_chpl2 = ret_chpl3;
    goto _end_localize_chpl;
  } else {
    chpl_macro_tmp_2042.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2042.addr = x_chpl2;
    tmp_chpl16 = chpl_macro_tmp_2042;
    init_ASSIGN__chpl21(&x_chpl3, tmp_chpl16);
    ret_chpl2 = x_chpl3;
    goto _end_localize_chpl;
  }
  _end_localize_chpl:;
  localThis_chpl = ret_chpl2;
  coerce_tmp_chpl3 = (&localThis_chpl)->buffLen;
  if (coerce_tmp_chpl3 < INT64(0)) {
    boundsCheckHalt_chpl(&local__str_literal_596_chpl, INT64(1424), INT32(47));
  }
  if (coerce_tmp_chpl3 == INT64(0)) {
    tmp_x0_chpl = INT64(0);
    tmp_x1_chpl = ((int64_t)(((uint64_t)((((uint64_t)(INT64(0))) - UINT64(1))))));
  } else {
    tmp_x0_chpl = INT64(0);
    tmp_x1_chpl = ((int64_t)((INT64(0) + ((int64_t)((coerce_tmp_chpl3 - INT64(1)))))));
  }
  _ic__F1_high_chpl = tmp_x1_chpl;
  i_chpl = INT64(0);
  chpl_checkIfRangeIterWillOverflow(tmp_x0_chpl, tmp_x1_chpl, INT64(1), tmp_x0_chpl, tmp_x1_chpl, UINT8(true));
  for (i_chpl = tmp_x0_chpl; ((i_chpl <= _ic__F1_high_chpl)); i_chpl += INT64(1)) {
    coerce_tmp_chpl4 = (&localThis_chpl)->buff;
    call_tmp_chpl37 = (coerce_tmp_chpl4 + i_chpl);
    yret_chpl = *(call_tmp_chpl37);
    call_tmp_chpl38 = isspace(((int32_t)(yret_chpl)));
    if (call_tmp_chpl38 != ((int32_t)(INT64(0)))) {
      ret_chpl = UINT8(false);
      i_x_chpl = &localThis_chpl;
      chpl_macro_tmp_2043.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2043.addr = i_x_chpl;
      tmp_chpl17 = chpl_macro_tmp_2043;
      deinit_chpl42(tmp_chpl17);
      goto _end__isSingleWord_chpl;
    }
  }
  i_x_chpl2 = &localThis_chpl;
  chpl_macro_tmp_2044.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2044.addr = i_x_chpl2;
  tmp_chpl18 = chpl_macro_tmp_2044;
  deinit_chpl42(tmp_chpl18);
  ret_chpl = UINT8(true);
  _end__isSingleWord_chpl:;
  return ret_chpl;
}

