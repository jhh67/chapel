/* ChapelRange.chpl:154 */
static void chpl__init_ChapelRange(int64_t _ln_chpl,
                                   int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_ChapelRange_p) {
    goto _exit_chpl__init_ChapelRange_chpl;
  }
  printModuleInit_chpl("%*s\n", "ChapelRange", INT64(11));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_ChapelRange_p = UINT8(true);
  {
    chpl__init_ChapelBase(INT64(154), INT32(21));
    chpl__init_SysBasic(INT64(154), INT32(21));
    chpl__init_HaltWrappers(INT64(154), INT32(21));
    chpl__init_DSIUtil(INT64(154), INT32(21));
    chpl__init_ChapelDebugPrint(INT64(154), INT32(21));
    chpl__init_CTypes(INT64(154), INT32(21));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_ChapelRange_chpl:;
  return;
}

/* ChapelRange.chpl:247 */
static void init_chpl26(range_int64_t_bounded_F_chpl * this_chpl7,
                        int64_t low_chpl2,
                        int64_t high_chpl) {
  (this_chpl7)->_low = low_chpl2;
  (this_chpl7)->_high = high_chpl;
  return;
}

/* ChapelRange.chpl:247 */
static void init_chpl27(range_byteIndex_bounded_F_chpl * this_chpl7,
                        byteIndex_chpl * low_chpl2,
                        byteIndex_chpl * high_chpl) {
  (this_chpl7)->_low = (low_chpl2)->_bindex;
  (this_chpl7)->_high = (high_chpl)->_bindex;
  return;
}

/* ChapelRange.chpl:257 */
static void init_chpl28(range_int64_t_boundedLow_F_chpl * this_chpl7,
                        int64_t low_chpl2) {
  (this_chpl7)->_low = low_chpl2;
  (this_chpl7)->_high = INT64(0);
  return;
}

/* ChapelRange.chpl:257 */
static void init_chpl29(range_byteIndex_boundedLow_F_chpl * this_chpl7,
                        byteIndex_chpl * low_chpl2) {
  (this_chpl7)->_low = (low_chpl2)->_bindex;
  (this_chpl7)->_high = INT64(0);
  return;
}

/* ChapelRange.chpl:266 */
static void init_chpl30(range_byteIndex_boundedHigh_F_chpl * this_chpl7,
                        byteIndex_chpl * high_chpl) {
  (this_chpl7)->_low = INT64(0);
  (this_chpl7)->_high = (high_chpl)->_bindex;
  return;
}

/* ChapelRange.chpl:283 */
static void init_chpl32(range_int64_t_bounded_F_chpl * this_chpl7) {
  int64_t call_tmp_chpl36;
  int64_t call_tmp_chpl37;
  call_tmp_chpl36 = chpl__defaultLowBound();
  call_tmp_chpl37 = chpl__defaultHighBound();
  init_chpl36(this_chpl7, call_tmp_chpl36, call_tmp_chpl37, INT64(1), INT64(0), UINT8(true));
  return;
}

/* ChapelRange.chpl:283 */
static void init_chpl33(range_int64_t_boundedLow_F_chpl * this_chpl7) {
  int64_t call_tmp_chpl36;
  int64_t call_tmp_chpl37;
  call_tmp_chpl36 = chpl__defaultLowBound();
  call_tmp_chpl37 = chpl__defaultHighBound();
  init_chpl35(this_chpl7, call_tmp_chpl36, call_tmp_chpl37, INT64(1), INT64(0), UINT8(true));
  return;
}

/* ChapelRange.chpl:283 */
static void init_chpl31(range_int64_t_boundedHigh_F_chpl * this_chpl7) {
  int64_t call_tmp_chpl36;
  int64_t call_tmp_chpl37;
  call_tmp_chpl36 = chpl__defaultLowBound();
  call_tmp_chpl37 = chpl__defaultHighBound();
  init_chpl34(this_chpl7, call_tmp_chpl36, call_tmp_chpl37, INT64(1), INT64(0), UINT8(true));
  return;
}

/* ChapelRange.chpl:298 */
static void init_chpl36(range_int64_t_bounded_F_chpl * this_chpl7,
                        int64_t _low_chpl,
                        int64_t _high_chpl,
                        int64_t _stride_chpl,
                        int64_t _alignment_chpl,
                        chpl_bool _aligned_chpl) {
  (this_chpl7)->_low = _low_chpl;
  (this_chpl7)->_high = _high_chpl;
  return;
}

/* ChapelRange.chpl:298 */
static void init_chpl35(range_int64_t_boundedLow_F_chpl * this_chpl7,
                        int64_t _low_chpl,
                        int64_t _high_chpl,
                        int64_t _stride_chpl,
                        int64_t _alignment_chpl,
                        chpl_bool _aligned_chpl) {
  (this_chpl7)->_low = _low_chpl;
  (this_chpl7)->_high = _high_chpl;
  return;
}

/* ChapelRange.chpl:298 */
static void init_chpl37(range_int64_t_bounded_F_chpl * this_chpl7,
                        int64_t _low_chpl,
                        int64_t _high_chpl,
                        int64_t _stride_chpl,
                        chpl_bool _aligned_chpl) {
  (this_chpl7)->_low = _low_chpl;
  (this_chpl7)->_high = _high_chpl;
  return;
}

/* ChapelRange.chpl:298 */
static void init_chpl38(range_int64_t_bounded_F_chpl * this_chpl7,
                        int64_t _low_chpl,
                        int64_t _high_chpl,
                        chpl_bool _aligned_chpl) {
  (this_chpl7)->_low = _low_chpl;
  (this_chpl7)->_high = _high_chpl;
  return;
}

/* ChapelRange.chpl:298 */
static void init_chpl34(range_int64_t_boundedHigh_F_chpl * this_chpl7,
                        int64_t _low_chpl,
                        int64_t _high_chpl,
                        int64_t _stride_chpl,
                        int64_t _alignment_chpl,
                        chpl_bool _aligned_chpl) {
  (this_chpl7)->_low = _low_chpl;
  (this_chpl7)->_high = _high_chpl;
  return;
}

/* ChapelRange.chpl:357 */
static void chpl_build_bounded_range(int64_t low_chpl2,
                                     int64_t high_chpl,
                                     range_int64_t_bounded_F_chpl * _retArg_chpl) {
  range_int64_t_bounded_F_chpl call_tmp_chpl36;
  range_int64_t_bounded_F_chpl initTemp_chpl;
  init_chpl26(&initTemp_chpl, low_chpl2, high_chpl);
  call_tmp_chpl36 = initTemp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelRange.chpl:381 */
static int64_t chpl__nudgeHighBound(int64_t high_chpl) {
  int64_t call_tmp_chpl36;
  call_tmp_chpl36 = (high_chpl - INT64(1));
  return call_tmp_chpl36;
}

/* ChapelRange.chpl:389 */
static void chpl_build_low_bounded_range(int64_t low_chpl2,
                                         range_int64_t_boundedLow_F_chpl * _retArg_chpl) {
  range_int64_t_boundedLow_F_chpl call_tmp_chpl36;
  range_int64_t_boundedLow_F_chpl initTemp_chpl;
  init_chpl28(&initTemp_chpl, low_chpl2);
  call_tmp_chpl36 = initTemp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelRange.chpl:621 */
static int64_t alignment_chpl2(range_int64_t_bounded_F_chpl this_chpl7) {
  int64_t coerce_tmp_chpl3;
  coerce_tmp_chpl3 = (&this_chpl7)->_low;
  return coerce_tmp_chpl3;
}

/* ChapelRange.chpl:621 */
static int64_t alignment_chpl(range_int64_t_boundedLow_F_chpl this_chpl7) {
  int64_t coerce_tmp_chpl3;
  coerce_tmp_chpl3 = (&this_chpl7)->_low;
  return coerce_tmp_chpl3;
}

/* ChapelRange.chpl:623 */
static int64_t alignment_chpl3(range_int64_t_boundedHigh_F_chpl this_chpl7) {
  return INT64(0);
}

/* ChapelRange.chpl:758 */
static int64_t size_chpl2(range_int64_t_bounded_F_chpl this_chpl7) {
  int64_t call_tmp_chpl36;
  call_tmp_chpl36 = sizeAs_chpl3(this_chpl7);
  return call_tmp_chpl36;
}

/* ChapelRange.chpl:768 */
static uint64_t sizeAs_chpl4(range_int64_t_bounded_F_chpl this_chpl7) {
  string_chpl local__str_literal_242_chpl;
  string_chpl local__str_literal_3336_chpl;
  string_chpl local__str_literal_42_chpl;
  uint64_t ret_chpl;
  int64_t ret_chpl2;
  int64_t ret_chpl3;
  uint64_t call_tmp_chpl36;
  chpl_bool tmp_chpl15;
  uint64_t call_tmp_chpl37;
  uint64_t call_tmp_chpl38;
  chpl_bool tmp_chpl16;
  chpl_bool tmp_chpl17;
  string_chpl call_tmp_chpl39;
  string_chpl ret_tmp_chpl;
  string_chpl call_tmp_chpl40;
  string_chpl ret_tmp_chpl2;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl41;
  string_chpl ret_tmp_chpl3;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_841;
  chpl____wide__ref_string chpl_macro_tmp_842;
  chpl____wide__ref_string chpl_macro_tmp_843;
  chpl____wide__ref_string chpl_macro_tmp_844;
  chpl____wide__ref_string chpl_macro_tmp_845;
  local__str_literal_242_chpl = _str_literal_242_chpl /* "'" */;
  local__str_literal_3336_chpl = _str_literal_3336_chpl /* "range.size exceeds max(uint(64)) for: '" */;
  local__str_literal_42_chpl = _str_literal_42_chpl /* "Attempt to divide by zero" */;
  ret_chpl2 = (&this_chpl7)->_high;
  ret_chpl3 = (&this_chpl7)->_low;
  if (ret_chpl3 > ret_chpl2) {
    ret_chpl = UINT64(0);
    goto _end_sizeAs_chpl;
  }
  call_tmp_chpl36 = (((uint64_t)(ret_chpl2)) - ((uint64_t)(ret_chpl3)));
  if (! (INT64(0) < INT64(0))) {
    tmp_chpl15 = (UINT64(1) == ((uint64_t)(INT64(0))));
  } else {
    tmp_chpl15 = UINT8(false);
  }
  if (tmp_chpl15) {
    halt_chpl(&local__str_literal_42_chpl, INT64(781), INT32(21));
  }
  call_tmp_chpl37 = (call_tmp_chpl36 / UINT64(1));
  call_tmp_chpl38 = (call_tmp_chpl37 + UINT64(1));
  if (! (INT64(0) < INT64(0))) {
    tmp_chpl16 = (call_tmp_chpl38 == ((uint64_t)(INT64(0))));
  } else {
    tmp_chpl16 = UINT8(false);
  }
  if (tmp_chpl16) {
    tmp_chpl17 = UINT8(true);
  } else {
    tmp_chpl17 = (call_tmp_chpl38 > UINT64(18446744073709551615));
  }
  if (tmp_chpl17) {
    chpl___COLON_7(this_chpl7, &ret_tmp_chpl);
    call_tmp_chpl39 = ret_tmp_chpl;
    chpl_macro_tmp_841.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_841.addr = &call_tmp_chpl39;
    tmp_chpl18 = chpl_macro_tmp_841;
    chpl___PLUS_(&local__str_literal_3336_chpl, tmp_chpl18, &ret_tmp_chpl2);
    call_tmp_chpl40 = ret_tmp_chpl2;
    chpl_macro_tmp_842.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_842.addr = &local__str_literal_242_chpl;
    tmp_chpl19 = chpl_macro_tmp_842;
    chpl___PLUS_(&call_tmp_chpl40, tmp_chpl19, &ret_tmp_chpl3);
    call_tmp_chpl41 = ret_tmp_chpl3;
    boundsCheckHalt_chpl(&call_tmp_chpl41, INT64(783), INT32(21));
    i_x_chpl = &call_tmp_chpl41;
    chpl_macro_tmp_843.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_843.addr = i_x_chpl;
    tmp_chpl20 = chpl_macro_tmp_843;
    deinit_chpl42(tmp_chpl20);
    i_x_chpl2 = &call_tmp_chpl40;
    chpl_macro_tmp_844.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_844.addr = i_x_chpl2;
    tmp_chpl21 = chpl_macro_tmp_844;
    deinit_chpl42(tmp_chpl21);
    i_x_chpl3 = &call_tmp_chpl39;
    chpl_macro_tmp_845.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_845.addr = i_x_chpl3;
    tmp_chpl22 = chpl_macro_tmp_845;
    deinit_chpl42(tmp_chpl22);
  }
  ret_chpl = call_tmp_chpl38;
  _end_sizeAs_chpl:;
  return ret_chpl;
}

/* ChapelRange.chpl:768 */
static int64_t sizeAs_chpl3(range_int64_t_bounded_F_chpl this_chpl7) {
  string_chpl local__str_literal_242_chpl;
  string_chpl local__str_literal_3338_chpl;
  string_chpl local__str_literal_42_chpl;
  int64_t ret_chpl;
  int64_t ret_chpl2;
  int64_t ret_chpl3;
  uint64_t call_tmp_chpl36;
  chpl_bool tmp_chpl15;
  uint64_t call_tmp_chpl37;
  uint64_t call_tmp_chpl38;
  chpl_bool tmp_chpl16;
  chpl_bool tmp_chpl17;
  chpl_bool tmp_chpl18;
  string_chpl call_tmp_chpl39;
  string_chpl ret_tmp_chpl;
  string_chpl call_tmp_chpl40;
  string_chpl ret_tmp_chpl2;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl41;
  string_chpl ret_tmp_chpl3;
  chpl____wide__ref_string tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_846;
  chpl____wide__ref_string chpl_macro_tmp_847;
  chpl____wide__ref_string chpl_macro_tmp_848;
  chpl____wide__ref_string chpl_macro_tmp_849;
  chpl____wide__ref_string chpl_macro_tmp_850;
  local__str_literal_242_chpl = _str_literal_242_chpl /* "'" */;
  local__str_literal_3338_chpl = _str_literal_3338_chpl /* "range.size exceeds max(int(64)) for: '" */;
  local__str_literal_42_chpl = _str_literal_42_chpl /* "Attempt to divide by zero" */;
  ret_chpl2 = (&this_chpl7)->_high;
  ret_chpl3 = (&this_chpl7)->_low;
  if (ret_chpl3 > ret_chpl2) {
    ret_chpl = INT64(0);
    goto _end_sizeAs_chpl;
  }
  call_tmp_chpl36 = (((uint64_t)(ret_chpl2)) - ((uint64_t)(ret_chpl3)));
  if (! (INT64(0) < INT64(0))) {
    tmp_chpl15 = (UINT64(1) == ((uint64_t)(INT64(0))));
  } else {
    tmp_chpl15 = UINT8(false);
  }
  if (tmp_chpl15) {
    halt_chpl(&local__str_literal_42_chpl, INT64(781), INT32(21));
  }
  call_tmp_chpl37 = (call_tmp_chpl36 / UINT64(1));
  call_tmp_chpl38 = (call_tmp_chpl37 + UINT64(1));
  if (! (INT64(0) < INT64(0))) {
    tmp_chpl16 = (call_tmp_chpl38 == ((uint64_t)(INT64(0))));
  } else {
    tmp_chpl16 = UINT8(false);
  }
  if (tmp_chpl16) {
    tmp_chpl17 = UINT8(true);
  } else {
    if (INT64(9223372036854775807) < INT64(0)) {
      tmp_chpl18 = UINT8(true);
    } else {
      tmp_chpl18 = (call_tmp_chpl38 > ((uint64_t)(INT64(9223372036854775807))));
    }
    tmp_chpl17 = tmp_chpl18;
  }
  if (tmp_chpl17) {
    chpl___COLON_7(this_chpl7, &ret_tmp_chpl);
    call_tmp_chpl39 = ret_tmp_chpl;
    chpl_macro_tmp_846.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_846.addr = &call_tmp_chpl39;
    tmp_chpl19 = chpl_macro_tmp_846;
    chpl___PLUS_(&local__str_literal_3338_chpl, tmp_chpl19, &ret_tmp_chpl2);
    call_tmp_chpl40 = ret_tmp_chpl2;
    chpl_macro_tmp_847.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_847.addr = &local__str_literal_242_chpl;
    tmp_chpl20 = chpl_macro_tmp_847;
    chpl___PLUS_(&call_tmp_chpl40, tmp_chpl20, &ret_tmp_chpl3);
    call_tmp_chpl41 = ret_tmp_chpl3;
    boundsCheckHalt_chpl(&call_tmp_chpl41, INT64(783), INT32(21));
    i_x_chpl = &call_tmp_chpl41;
    chpl_macro_tmp_848.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_848.addr = i_x_chpl;
    tmp_chpl21 = chpl_macro_tmp_848;
    deinit_chpl42(tmp_chpl21);
    i_x_chpl2 = &call_tmp_chpl40;
    chpl_macro_tmp_849.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_849.addr = i_x_chpl2;
    tmp_chpl22 = chpl_macro_tmp_849;
    deinit_chpl42(tmp_chpl22);
    i_x_chpl3 = &call_tmp_chpl39;
    chpl_macro_tmp_850.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_850.addr = i_x_chpl3;
    tmp_chpl23 = chpl_macro_tmp_850;
    deinit_chpl42(tmp_chpl23);
  }
  ret_chpl = ((int64_t)(call_tmp_chpl38));
  _end_sizeAs_chpl:;
  return ret_chpl;
}

/* ChapelRange.chpl:921 */
static chpl_bool chpl___EQUALS_2(range_int64_t_bounded_F_chpl r1_chpl,
                                 range_int64_t_bounded_F_chpl r2_chpl) {
  chpl_bool ret_chpl;
  uint64_t call_tmp_chpl36;
  uint64_t call_tmp_chpl37;
  chpl_bool tmp_chpl15;
  chpl_bool tmp_chpl16;
  call_tmp_chpl36 = sizeAs_chpl4(r1_chpl);
  call_tmp_chpl37 = sizeAs_chpl4(r2_chpl);
  if (call_tmp_chpl36 != call_tmp_chpl37) {
    ret_chpl = UINT8(false);
    goto _end__EQUALS__chpl;
  }
  if (! (INT64(0) < INT64(0))) {
    tmp_chpl15 = (call_tmp_chpl36 == ((uint64_t)(INT64(0))));
  } else {
    tmp_chpl15 = UINT8(false);
  }
  if (tmp_chpl15) {
    ret_chpl = UINT8(true);
    goto _end__EQUALS__chpl;
  }
  if ((&r1_chpl)->_low != (&r2_chpl)->_low) {
    ret_chpl = UINT8(false);
    goto _end__EQUALS__chpl;
  }
  if (! (INT64(1) < INT64(0))) {
    tmp_chpl16 = (call_tmp_chpl36 == ((uint64_t)(INT64(1))));
  } else {
    tmp_chpl16 = UINT8(false);
  }
  if (tmp_chpl16) {
    ret_chpl = UINT8(true);
    goto _end__EQUALS__chpl;
  }
  ret_chpl = UINT8(true);
  _end__EQUALS__chpl:;
  return ret_chpl;
}

/* ChapelRange.chpl:958 */
static chpl_bool chpl___EXCLAMATION__ASSIGN_2(range_int64_t_bounded_F_chpl r1_chpl,
                                              range_int64_t_bounded_F_chpl r2_chpl) {
  chpl_bool call_tmp_chpl36;
  chpl_bool call_tmp_chpl37;
  call_tmp_chpl36 = chpl___EQUALS_2(r1_chpl, r2_chpl);
  call_tmp_chpl37 = (! call_tmp_chpl36);
  return call_tmp_chpl37;
}

/* ChapelRange.chpl:997 */
static void safeCast_chpl(range_int64_t_bounded_F_chpl this_chpl7,
                          range_int64_t_bounded_F_chpl * _retArg_chpl) {
  range_int64_t_bounded_F_chpl ret_chpl;
  range_int64_t_bounded_F_chpl tmp_chpl15;
  int64_t coerce_tmp_chpl3;
  int64_t coerce_tmp_chpl4;
  init_chpl32(&tmp_chpl15);
  coerce_tmp_chpl3 = (&this_chpl7)->_low;
  checkValue_chpl6();
  (&tmp_chpl15)->_low = coerce_tmp_chpl3;
  coerce_tmp_chpl4 = (&this_chpl7)->_high;
  checkValue_chpl6();
  (&tmp_chpl15)->_high = coerce_tmp_chpl4;
  ret_chpl = tmp_chpl15;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelRange.chpl:1023 */
static void chpl___COLON_4(range_byteIndex_bounded_F_chpl r_chpl,
                           range_int64_t_bounded_F_chpl * _retArg_chpl) {
  range_int64_t_bounded_F_chpl ret_chpl;
  range_int64_t_bounded_F_chpl tmp_chpl15;
  byteIndex_chpl tmp_chpl16;
  int64_t coerce_tmp_chpl3;
  byteIndex_chpl ret_chpl2;
  byteIndex_chpl cpi_chpl;
  byteIndex_chpl tmp_chpl17;
  int64_t coerce_tmp_chpl4;
  byteIndex_chpl ret_chpl3;
  byteIndex_chpl cpi_chpl2;
  init_chpl32(&tmp_chpl15);
  coerce_tmp_chpl3 = (&r_chpl)->_low;
  init_chpl71(&cpi_chpl);
  (&cpi_chpl)->_bindex = coerce_tmp_chpl3;
  ret_chpl2 = cpi_chpl;
  tmp_chpl16 = ret_chpl2;
  (&tmp_chpl15)->_low = (&tmp_chpl16)->_bindex;
  coerce_tmp_chpl4 = (&r_chpl)->_high;
  init_chpl71(&cpi_chpl2);
  (&cpi_chpl2)->_bindex = coerce_tmp_chpl4;
  ret_chpl3 = cpi_chpl2;
  tmp_chpl17 = ret_chpl3;
  (&tmp_chpl15)->_high = (&tmp_chpl17)->_bindex;
  ret_chpl = tmp_chpl15;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelRange.chpl:1023 */
static void chpl___COLON_5(range_byteIndex_boundedLow_F_chpl r_chpl,
                           range_int64_t_boundedLow_F_chpl * _retArg_chpl) {
  range_int64_t_boundedLow_F_chpl ret_chpl;
  range_int64_t_boundedLow_F_chpl tmp_chpl15;
  byteIndex_chpl tmp_chpl16;
  int64_t coerce_tmp_chpl3;
  byteIndex_chpl ret_chpl2;
  byteIndex_chpl cpi_chpl;
  init_chpl33(&tmp_chpl15);
  coerce_tmp_chpl3 = (&r_chpl)->_low;
  init_chpl71(&cpi_chpl);
  (&cpi_chpl)->_bindex = coerce_tmp_chpl3;
  ret_chpl2 = cpi_chpl;
  tmp_chpl16 = ret_chpl2;
  (&tmp_chpl15)->_low = (&tmp_chpl16)->_bindex;
  (&tmp_chpl15)->_high = (&r_chpl)->_high;
  ret_chpl = tmp_chpl15;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelRange.chpl:1023 */
static void chpl___COLON_3(range_byteIndex_boundedHigh_F_chpl r_chpl,
                           range_int64_t_boundedHigh_F_chpl * _retArg_chpl) {
  range_int64_t_boundedHigh_F_chpl ret_chpl;
  range_int64_t_boundedHigh_F_chpl tmp_chpl15;
  byteIndex_chpl tmp_chpl16;
  int64_t coerce_tmp_chpl3;
  byteIndex_chpl ret_chpl2;
  byteIndex_chpl cpi_chpl;
  init_chpl31(&tmp_chpl15);
  (&tmp_chpl15)->_low = (&r_chpl)->_low;
  coerce_tmp_chpl3 = (&r_chpl)->_high;
  init_chpl71(&cpi_chpl);
  (&cpi_chpl)->_bindex = coerce_tmp_chpl3;
  ret_chpl2 = cpi_chpl;
  tmp_chpl16 = ret_chpl2;
  (&tmp_chpl15)->_high = (&tmp_chpl16)->_bindex;
  ret_chpl = tmp_chpl15;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelRange.chpl:1154 */
static int64_t orderToIndex_chpl(range_int64_t_bounded_F_chpl this_chpl7,
                                 int64_t ord_chpl) {
  string_chpl local__str_literal_564_chpl;
  string_chpl local__str_literal_563_chpl;
  string_chpl local__str_literal_562_chpl;
  string_chpl local__str_literal_560_chpl;
  chpl_bool tmp_chpl15;
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl2;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  uint64_t call_tmp_chpl38;
  chpl_bool tmp_chpl19;
  string_chpl call_tmp_chpl39;
  string_chpl ret_tmp_chpl3;
  string_chpl call_tmp_chpl40;
  string_chpl ret_tmp_chpl4;
  chpl____wide__ref_string tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl41;
  string_chpl ret_tmp_chpl5;
  chpl____wide__ref_string tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  uint64_t call_tmp_chpl42;
  string_chpl call_tmp_chpl43;
  string_chpl ret_tmp_chpl6;
  string_chpl call_tmp_chpl44;
  string_chpl ret_tmp_chpl7;
  chpl____wide__ref_string tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl5 = NULL;
  chpl____wide__ref_string tmp_chpl25 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl6 = NULL;
  chpl____wide__ref_string tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl7 = NULL;
  chpl____wide__ref_string tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl45;
  chpl____wide__ref_string chpl_macro_tmp_851;
  chpl____wide__ref_string chpl_macro_tmp_852;
  chpl____wide__ref_string chpl_macro_tmp_853;
  chpl____wide__ref_string chpl_macro_tmp_854;
  chpl____wide__ref_string chpl_macro_tmp_855;
  chpl____wide__ref_string chpl_macro_tmp_856;
  chpl____wide__ref_string chpl_macro_tmp_857;
  chpl____wide__ref_string chpl_macro_tmp_858;
  chpl____wide__ref_string chpl_macro_tmp_859;
  chpl____wide__ref_string chpl_macro_tmp_860;
  chpl____wide__ref_string chpl_macro_tmp_861;
  local__str_literal_564_chpl = _str_literal_564_chpl /* " that is larger than the range's number of indices " */;
  local__str_literal_563_chpl = _str_literal_563_chpl /* "invoking orderToIndex on an integer " */;
  local__str_literal_562_chpl = _str_literal_562_chpl /* "invoking orderToIndex on a negative integer: " */;
  local__str_literal_560_chpl = _str_literal_560_chpl /* "invoking orderToIndex on a range that has no first index" */;
  if ((&this_chpl7)->_low > (&this_chpl7)->_high) {
    tmp_chpl15 = UINT8(false);
  } else {
    tmp_chpl15 = UINT8(true);
  }
  if (! tmp_chpl15) {
    boundsCheckHalt_chpl(&local__str_literal_560_chpl, INT64(1158), INT32(21));
  }
  if (ord_chpl < INT64(0)) {
    chpl___COLON_16(ord_chpl, &ret_tmp_chpl);
    call_tmp_chpl36 = ret_tmp_chpl;
    chpl_macro_tmp_851.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_851.addr = &call_tmp_chpl36;
    tmp_chpl16 = chpl_macro_tmp_851;
    chpl___PLUS_(&local__str_literal_562_chpl, tmp_chpl16, &ret_tmp_chpl2);
    call_tmp_chpl37 = ret_tmp_chpl2;
    boundsCheckHalt_chpl(&call_tmp_chpl37, INT64(1164), INT32(21));
    i_x_chpl = &call_tmp_chpl37;
    chpl_macro_tmp_852.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_852.addr = i_x_chpl;
    tmp_chpl17 = chpl_macro_tmp_852;
    deinit_chpl42(tmp_chpl17);
    i_x_chpl2 = &call_tmp_chpl36;
    chpl_macro_tmp_853.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_853.addr = i_x_chpl2;
    tmp_chpl18 = chpl_macro_tmp_853;
    deinit_chpl42(tmp_chpl18);
  }
  call_tmp_chpl38 = sizeAs_chpl4(this_chpl7);
  if (! (ord_chpl < INT64(0))) {
    tmp_chpl19 = (((uint64_t)(ord_chpl)) >= call_tmp_chpl38);
  } else {
    tmp_chpl19 = UINT8(false);
  }
  if (tmp_chpl19) {
    chpl___COLON_16(ord_chpl, &ret_tmp_chpl3);
    call_tmp_chpl39 = ret_tmp_chpl3;
    chpl_macro_tmp_854.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_854.addr = &call_tmp_chpl39;
    tmp_chpl20 = chpl_macro_tmp_854;
    chpl___PLUS_(&local__str_literal_563_chpl, tmp_chpl20, &ret_tmp_chpl4);
    call_tmp_chpl40 = ret_tmp_chpl4;
    chpl_macro_tmp_855.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_855.addr = &local__str_literal_564_chpl;
    tmp_chpl21 = chpl_macro_tmp_855;
    chpl___PLUS_(&call_tmp_chpl40, tmp_chpl21, &ret_tmp_chpl5);
    call_tmp_chpl41 = ret_tmp_chpl5;
    call_tmp_chpl42 = sizeAs_chpl4(this_chpl7);
    chpl___COLON_14(call_tmp_chpl42, &ret_tmp_chpl6);
    call_tmp_chpl43 = ret_tmp_chpl6;
    chpl_macro_tmp_856.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_856.addr = &call_tmp_chpl43;
    tmp_chpl22 = chpl_macro_tmp_856;
    chpl___PLUS_(&call_tmp_chpl41, tmp_chpl22, &ret_tmp_chpl7);
    call_tmp_chpl44 = ret_tmp_chpl7;
    boundsCheckHalt_chpl(&call_tmp_chpl44, INT64(1167), INT32(21));
    i_x_chpl3 = &call_tmp_chpl44;
    chpl_macro_tmp_857.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_857.addr = i_x_chpl3;
    tmp_chpl23 = chpl_macro_tmp_857;
    deinit_chpl42(tmp_chpl23);
    i_x_chpl4 = &call_tmp_chpl43;
    chpl_macro_tmp_858.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_858.addr = i_x_chpl4;
    tmp_chpl24 = chpl_macro_tmp_858;
    deinit_chpl42(tmp_chpl24);
    i_x_chpl5 = &call_tmp_chpl41;
    chpl_macro_tmp_859.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_859.addr = i_x_chpl5;
    tmp_chpl25 = chpl_macro_tmp_859;
    deinit_chpl42(tmp_chpl25);
    i_x_chpl6 = &call_tmp_chpl40;
    chpl_macro_tmp_860.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_860.addr = i_x_chpl6;
    tmp_chpl26 = chpl_macro_tmp_860;
    deinit_chpl42(tmp_chpl26);
    i_x_chpl7 = &call_tmp_chpl39;
    chpl_macro_tmp_861.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_861.addr = i_x_chpl7;
    tmp_chpl27 = chpl_macro_tmp_861;
    deinit_chpl42(tmp_chpl27);
  }
  call_tmp_chpl45 = chpl__addRangeStrides((&this_chpl7)->_low, INT64(1), ord_chpl);
  return call_tmp_chpl45;
}

/* ChapelRange.chpl:1549 */
static void this_chpl2(range_int64_t_bounded_F_chpl this_chpl7,
                       range_int64_t_bounded_F_chpl other_chpl,
                       range_int64_t_bounded_F_chpl * _retArg_chpl) {
  int64_t coerce_tmp_chpl3;
  int64_t coerce_tmp_chpl4;
  int64_t coerce_tmp_chpl5;
  int64_t coerce_tmp_chpl6;
  _tuple_2_star_int64_t_chpl ret_tmp_chpl;
  int64_t tmp_chpl15;
  int64_t tmp_chpl16;
  chpl_bool tmp_chpl17;
  range_int64_t_bounded_F_chpl call_tmp_chpl36;
  range_int64_t_bounded_F_chpl initTemp_chpl;
  coerce_tmp_chpl3 = (&this_chpl7)->_low;
  coerce_tmp_chpl4 = (&this_chpl7)->_high;
  coerce_tmp_chpl5 = (&other_chpl)->_low;
  coerce_tmp_chpl6 = (&other_chpl)->_high;
  *(ret_tmp_chpl + INT64(0)) = INT64(1);
  *(ret_tmp_chpl + INT64(1)) = INT64(0);
  if (coerce_tmp_chpl3 > coerce_tmp_chpl5) {
    tmp_chpl15 = coerce_tmp_chpl3;
  } else {
    tmp_chpl15 = coerce_tmp_chpl5;
  }
  if (coerce_tmp_chpl4 < coerce_tmp_chpl6) {
    tmp_chpl16 = coerce_tmp_chpl4;
  } else {
    tmp_chpl16 = coerce_tmp_chpl6;
  }
  if (! UINT8(false)) {
    tmp_chpl17 = UINT8(true);
  } else {
    tmp_chpl17 = UINT8(false);
  }
  init_chpl36(&initTemp_chpl, tmp_chpl15, tmp_chpl16, INT64(1), INT64(0), tmp_chpl17);
  call_tmp_chpl36 = initTemp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelRange.chpl:1549 */
static void this_chpl4(range_int64_t_boundedLow_F_chpl this_chpl7,
                       range_int64_t_bounded_F_chpl other_chpl,
                       range_int64_t_bounded_F_chpl * _retArg_chpl) {
  int64_t coerce_tmp_chpl3;
  int64_t coerce_tmp_chpl4;
  int64_t coerce_tmp_chpl5;
  int64_t coerce_tmp_chpl6;
  _tuple_2_star_int64_t_chpl ret_tmp_chpl;
  int64_t tmp_chpl15;
  int64_t tmp_chpl16;
  chpl_bool tmp_chpl17;
  range_int64_t_bounded_F_chpl call_tmp_chpl36;
  range_int64_t_bounded_F_chpl initTemp_chpl;
  coerce_tmp_chpl3 = (&this_chpl7)->_low;
  coerce_tmp_chpl4 = (&other_chpl)->_high;
  coerce_tmp_chpl5 = (&other_chpl)->_low;
  coerce_tmp_chpl6 = (&other_chpl)->_high;
  *(ret_tmp_chpl + INT64(0)) = INT64(1);
  *(ret_tmp_chpl + INT64(1)) = INT64(0);
  if (coerce_tmp_chpl3 > coerce_tmp_chpl5) {
    tmp_chpl15 = coerce_tmp_chpl3;
  } else {
    tmp_chpl15 = coerce_tmp_chpl5;
  }
  if (coerce_tmp_chpl4 < coerce_tmp_chpl6) {
    tmp_chpl16 = coerce_tmp_chpl4;
  } else {
    tmp_chpl16 = coerce_tmp_chpl6;
  }
  if (! UINT8(false)) {
    tmp_chpl17 = UINT8(true);
  } else {
    tmp_chpl17 = UINT8(false);
  }
  init_chpl36(&initTemp_chpl, tmp_chpl15, tmp_chpl16, INT64(1), INT64(0), tmp_chpl17);
  call_tmp_chpl36 = initTemp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelRange.chpl:1549 */
static void this_chpl3(range_int64_t_boundedHigh_F_chpl this_chpl7,
                       range_int64_t_bounded_F_chpl other_chpl,
                       range_int64_t_bounded_F_chpl * _retArg_chpl) {
  int64_t coerce_tmp_chpl3;
  int64_t coerce_tmp_chpl4;
  int64_t coerce_tmp_chpl5;
  int64_t coerce_tmp_chpl6;
  _tuple_2_star_int64_t_chpl ret_tmp_chpl;
  int64_t tmp_chpl15;
  int64_t tmp_chpl16;
  chpl_bool tmp_chpl17;
  range_int64_t_bounded_F_chpl call_tmp_chpl36;
  range_int64_t_bounded_F_chpl initTemp_chpl;
  coerce_tmp_chpl3 = (&other_chpl)->_low;
  coerce_tmp_chpl4 = (&this_chpl7)->_high;
  coerce_tmp_chpl5 = (&other_chpl)->_low;
  coerce_tmp_chpl6 = (&other_chpl)->_high;
  *(ret_tmp_chpl + INT64(0)) = INT64(1);
  *(ret_tmp_chpl + INT64(1)) = INT64(0);
  if (coerce_tmp_chpl3 > coerce_tmp_chpl5) {
    tmp_chpl15 = coerce_tmp_chpl3;
  } else {
    tmp_chpl15 = coerce_tmp_chpl5;
  }
  if (coerce_tmp_chpl4 < coerce_tmp_chpl6) {
    tmp_chpl16 = coerce_tmp_chpl4;
  } else {
    tmp_chpl16 = coerce_tmp_chpl6;
  }
  if (! UINT8(false)) {
    tmp_chpl17 = UINT8(true);
  } else {
    tmp_chpl17 = UINT8(false);
  }
  init_chpl36(&initTemp_chpl, tmp_chpl15, tmp_chpl16, INT64(1), INT64(0), tmp_chpl17);
  call_tmp_chpl36 = initTemp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelRange.chpl:1743 */
static void chpl_count_help(range_int64_t_boundedLow_F_chpl r_chpl,
                            int64_t count_chpl,
                            range_int64_t_bounded_F_chpl * _retArg_chpl) {
  string_chpl local__str_literal_596_chpl;
  range_int64_t_bounded_F_chpl ret_chpl;
  int64_t call_tmp_chpl36;
  range_int64_t_bounded_F_chpl call_tmp_chpl37;
  range_int64_t_bounded_F_chpl initTemp_chpl;
  chpl_bool tmp_chpl15;
  int64_t call_tmp_chpl38;
  int64_t tmp_chpl16;
  int64_t tmp_chpl17;
  int64_t tmp_chpl18;
  int64_t tmp_chpl19;
  int64_t tmp_chpl20;
  int64_t tmp_chpl21;
  range_int64_t_bounded_F_chpl call_tmp_chpl39;
  range_int64_t_bounded_F_chpl initTemp_chpl2;
  local__str_literal_596_chpl = _str_literal_596_chpl /* "With a negative count, the range must have a last index." */;
  if (count_chpl == INT64(0)) {
    call_tmp_chpl36 = absSameType_chpl(INT64(1));
    init_chpl37(&initTemp_chpl, (&r_chpl)->_low, ((int64_t)(((&r_chpl)->_low - call_tmp_chpl36))), INT64(1), UINT8(true));
    call_tmp_chpl37 = initTemp_chpl;
    ret_chpl = call_tmp_chpl37;
    goto _end_chpl_count_help_chpl;
  }
  if (! UINT8(false)) {
    tmp_chpl15 = (count_chpl < INT64(0));
  } else {
    tmp_chpl15 = UINT8(false);
  }
  if (tmp_chpl15) {
    boundsCheckHalt_chpl(&local__str_literal_596_chpl, INT64(1785), INT32(21));
  }
  call_tmp_chpl38 = (count_chpl * INT64(1));
  if (call_tmp_chpl38 > INT64(0)) {
    tmp_chpl17 = (&r_chpl)->_low;
    tmp_chpl16 = tmp_chpl17;
  } else {
    tmp_chpl18 = chpl__add((&r_chpl)->_high, ((int64_t)((call_tmp_chpl38 + INT64(1)))));
    tmp_chpl16 = tmp_chpl18;
  }
  if (call_tmp_chpl38 < INT64(0)) {
    tmp_chpl20 = (&r_chpl)->_high;
    tmp_chpl19 = tmp_chpl20;
  } else {
    tmp_chpl21 = chpl__add((&r_chpl)->_low, ((int64_t)((call_tmp_chpl38 - INT64(1)))));
    tmp_chpl19 = tmp_chpl21;
  }
  init_chpl38(&initTemp_chpl2, tmp_chpl16, tmp_chpl19, UINT8(true));
  call_tmp_chpl39 = initTemp_chpl2;
  ret_chpl = call_tmp_chpl39;
  _end_chpl_count_help_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelRange.chpl:1750 */
static int64_t absSameType_chpl(int64_t str_chpl) {
  return INT64(1);
}

/* ChapelRange.chpl:1836 */
static void chpl___POUND_(range_int64_t_boundedLow_F_chpl r_chpl,
                          int64_t count_chpl,
                          range_int64_t_bounded_F_chpl * _retArg_chpl) {
  range_int64_t_bounded_F_chpl call_tmp_chpl36;
  range_int64_t_bounded_F_chpl ret_tmp_chpl;
  chpl_count_help(r_chpl, count_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelRange.chpl:1860 */
static chpl_bool chpl_checkIfRangeIterWillOverflow2(int32_t low_chpl2,
                                                    int32_t high_chpl,
                                                    int64_t stride_chpl2,
                                                    int32_t first_chpl,
                                                    int32_t last_chpl,
                                                    chpl_bool shouldHalt_chpl) {
  string_chpl local__str_literal_602_chpl;
  chpl_bool ret_chpl;
  chpl_bool willOverFlow_chpl;
  chpl_bool tmp_chpl15;
  chpl_bool tmp_chpl16;
  chpl_bool tmp_chpl17;
  local__str_literal_602_chpl = _str_literal_602_chpl /* "Iteration over a bounded range may be incorrect due to overflow." */;
  if (low_chpl2 > high_chpl) {
    ret_chpl = UINT8(false);
    goto _end_chpl_checkIfRangeIterWillOverflow_chpl;
  }
  willOverFlow_chpl = UINT8(false);
  if (last_chpl > ((int32_t)(INT64(0)))) {
    tmp_chpl15 = (stride_chpl2 > INT64(0));
  } else {
    tmp_chpl15 = UINT8(false);
  }
  if (tmp_chpl15) {
    if (stride_chpl2 > ((int64_t)(((int32_t)((INT64(2147483647) - last_chpl)))))) {
      willOverFlow_chpl = UINT8(true);
    }
  } else {
    if (last_chpl < ((int32_t)(INT64(0)))) {
      tmp_chpl16 = (stride_chpl2 < INT64(0));
    } else {
      tmp_chpl16 = UINT8(false);
    }
    if (tmp_chpl16) {
      if (stride_chpl2 < ((int64_t)(((int32_t)((INT64(-2147483648) - last_chpl)))))) {
        willOverFlow_chpl = UINT8(true);
      }
    }
  }
  if (willOverFlow_chpl) {
    tmp_chpl17 = shouldHalt_chpl;
  } else {
    tmp_chpl17 = UINT8(false);
  }
  if (tmp_chpl17) {
    boundsCheckHalt_chpl(&local__str_literal_602_chpl, INT64(1896), INT32(21));
  }
  ret_chpl = willOverFlow_chpl;
  _end_chpl_checkIfRangeIterWillOverflow_chpl:;
  return ret_chpl;
}

/* ChapelRange.chpl:1860 */
static chpl_bool chpl_checkIfRangeIterWillOverflow(int64_t low_chpl2,
                                                   int64_t high_chpl,
                                                   int64_t stride_chpl2,
                                                   int64_t first_chpl,
                                                   int64_t last_chpl,
                                                   chpl_bool shouldHalt_chpl) {
  string_chpl local__str_literal_602_chpl;
  chpl_bool ret_chpl;
  chpl_bool willOverFlow_chpl;
  chpl_bool tmp_chpl15;
  chpl_bool tmp_chpl16;
  chpl_bool tmp_chpl17;
  local__str_literal_602_chpl = _str_literal_602_chpl /* "Iteration over a bounded range may be incorrect due to overflow." */;
  if (low_chpl2 > high_chpl) {
    ret_chpl = UINT8(false);
    goto _end_chpl_checkIfRangeIterWillOverflow_chpl;
  }
  willOverFlow_chpl = UINT8(false);
  if (last_chpl > INT64(0)) {
    tmp_chpl15 = (stride_chpl2 > INT64(0));
  } else {
    tmp_chpl15 = UINT8(false);
  }
  if (tmp_chpl15) {
    if (stride_chpl2 > ((int64_t)((INT64(9223372036854775807) - last_chpl)))) {
      willOverFlow_chpl = UINT8(true);
    }
  } else {
    if (last_chpl < INT64(0)) {
      tmp_chpl16 = (stride_chpl2 < INT64(0));
    } else {
      tmp_chpl16 = UINT8(false);
    }
    if (tmp_chpl16) {
      if (stride_chpl2 < ((int64_t)((-INT64(9223372036854775807) - INT64(1) - last_chpl)))) {
        willOverFlow_chpl = UINT8(true);
      }
    }
  }
  if (willOverFlow_chpl) {
    tmp_chpl17 = shouldHalt_chpl;
  } else {
    tmp_chpl17 = UINT8(false);
  }
  if (tmp_chpl17) {
    boundsCheckHalt_chpl(&local__str_literal_602_chpl, INT64(1896), INT32(21));
  }
  ret_chpl = willOverFlow_chpl;
  _end_chpl_checkIfRangeIterWillOverflow_chpl:;
  return ret_chpl;
}

/* ChapelRange.chpl:1902 */
static chpl_bool checkIfIterWillOverflow_chpl(range_int64_t_bounded_F_chpl this_chpl7,
                                              chpl_bool shouldHalt_chpl) {
  chpl_bool call_tmp_chpl36;
  call_tmp_chpl36 = chpl_checkIfRangeIterWillOverflow((&this_chpl7)->_low, (&this_chpl7)->_high, INT64(1), (&this_chpl7)->_low, (&this_chpl7)->_high, shouldHalt_chpl);
  return call_tmp_chpl36;
}

/* ChapelRange.chpl:2217 */
static void advance_chpl(_ic_these_range_int64_t_bounded_F_chpl this_chpl7) {
  int64_t more_chpl;
  range_int64_t_bounded_F_chpl tmp_chpl15;
  range_int64_t_bounded_F_chpl tmp_chpl16;
  _ref_range_int64_t_bounded_F_chpl tmp_chpl17 = NULL;
  int64_t tmp_chpl18;
  _ref_range_int64_t_bounded_F_chpl tmp_chpl19 = NULL;
  int64_t coerce_tmp_chpl3;
  int64_t tmp_chpl20;
  int64_t tmp_chpl21;
  int64_t tmp_chpl22;
  int64_t tmp_chpl23;
  chpl_check_nil(this_chpl7, INT64(2217), INT32(21));
  more_chpl = (this_chpl7)->more;
  if (more_chpl == INT64(2)) {
    goto _jump_2_chpl;
  }
  if (more_chpl == INT64(-2)) {
    goto _jump_break_2_chpl;
  }
  chpl_check_nil(this_chpl7, INT64(2217), INT32(21));
  tmp_chpl16 = (this_chpl7)->F0_this;
  tmp_chpl15 = tmp_chpl16;
  checkIfIterWillOverflow_chpl(tmp_chpl15, UINT8(true));
  chpl_check_nil(this_chpl7, INT64(2217), INT32(21));
  (this_chpl7)->F1_i = INT64(0);
  chpl_check_nil(this_chpl7, INT64(2217), INT32(21));
  tmp_chpl17 = &((this_chpl7)->F0_this);
  tmp_chpl18 = (tmp_chpl17)->_low;
  chpl_check_nil(this_chpl7, INT64(2217), INT32(21));
  (this_chpl7)->F3_coerce_tmp = tmp_chpl18;
  chpl_check_nil(this_chpl7, INT64(2217), INT32(21));
  tmp_chpl19 = &((this_chpl7)->F0_this);
  coerce_tmp_chpl3 = (tmp_chpl19)->_high;
  chpl_check_nil(this_chpl7, INT64(2217), INT32(21));
  (this_chpl7)->F2_end = coerce_tmp_chpl3;
  for (chpl_check_nil(this_chpl7, INT64(2217), INT32(21)),tmp_chpl21 = (this_chpl7)->F3_coerce_tmp,chpl_check_nil(this_chpl7, INT64(2217), INT32(21)),(this_chpl7)->F1_i = tmp_chpl21; (chpl_check_nil(this_chpl7, INT64(2217), INT32(21)),tmp_chpl22 = (this_chpl7)->F1_i,chpl_check_nil(this_chpl7, INT64(2217), INT32(21)),(tmp_chpl22 <= (this_chpl7)->F2_end)); chpl_check_nil(this_chpl7, INT64(2217), INT32(21)),tmp_chpl23 = (this_chpl7)->F1_i,tmp_chpl23 += INT64(1),chpl_check_nil(this_chpl7, INT64(2217), INT32(21)),(this_chpl7)->F1_i = tmp_chpl23) {
    chpl_check_nil(this_chpl7, INT64(2217), INT32(21));
    tmp_chpl20 = (this_chpl7)->F1_i;
    chpl_check_nil(this_chpl7, INT64(2217), INT32(21));
    (this_chpl7)->value = tmp_chpl20;
    chpl_check_nil(this_chpl7, INT64(2217), INT32(21));
    (this_chpl7)->more = INT64(2);
    goto _end_chpl;
    _jump_break_2_chpl:;
    goto _endthese_chpl;
    _jump_2_chpl:;
  }
  _endthese_chpl:;
  chpl_check_nil(this_chpl7, INT64(2217), INT32(21));
  (this_chpl7)->more = INT64(0);
  _end_chpl:;
  return;
}

/* ChapelRange.chpl:2538 */
static void chpl___COLON_7(range_int64_t_bounded_F_chpl x_chpl2,
                           string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_526_chpl;
  string_chpl ret_chpl;
  string_chpl ret_chpl2;
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl2;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_862;
  chpl____wide__ref_string chpl_macro_tmp_863;
  local__str_literal_526_chpl = _str_literal_526_chpl /* ".." */;
  init_chpl73(&ret_chpl2);
  chpl___COLON_16((&x_chpl2)->_low, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl___PLUS__ASSIGN_(&ret_chpl2, &call_tmp_chpl36);
  i_x_chpl = &call_tmp_chpl36;
  chpl_macro_tmp_862.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_862.addr = i_x_chpl;
  tmp_chpl15 = chpl_macro_tmp_862;
  deinit_chpl42(tmp_chpl15);
  chpl___PLUS__ASSIGN_(&ret_chpl2, &local__str_literal_526_chpl);
  chpl___COLON_16((&x_chpl2)->_high, &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  chpl___PLUS__ASSIGN_(&ret_chpl2, &call_tmp_chpl37);
  i_x_chpl2 = &call_tmp_chpl37;
  chpl_macro_tmp_863.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_863.addr = i_x_chpl2;
  tmp_chpl16 = chpl_macro_tmp_863;
  deinit_chpl42(tmp_chpl16);
  ret_chpl = ret_chpl2;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelRange.chpl:2538 */
static void chpl___COLON_8(range_byteIndex_bounded_F_chpl x_chpl2,
                           string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_526_chpl;
  string_chpl ret_chpl;
  string_chpl ret_chpl2;
  byteIndex_chpl call_tmp_chpl36;
  int64_t coerce_tmp_chpl3;
  byteIndex_chpl ret_chpl3;
  byteIndex_chpl cpi_chpl;
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  byteIndex_chpl call_tmp_chpl38;
  int64_t coerce_tmp_chpl4;
  byteIndex_chpl ret_chpl4;
  byteIndex_chpl cpi_chpl2;
  string_chpl call_tmp_chpl39;
  string_chpl ret_tmp_chpl2;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_864;
  chpl____wide__ref_string chpl_macro_tmp_865;
  local__str_literal_526_chpl = _str_literal_526_chpl /* ".." */;
  init_chpl73(&ret_chpl2);
  coerce_tmp_chpl3 = (&x_chpl2)->_low;
  init_chpl71(&cpi_chpl);
  (&cpi_chpl)->_bindex = coerce_tmp_chpl3;
  ret_chpl3 = cpi_chpl;
  call_tmp_chpl36 = ret_chpl3;
  chpl___COLON_11(&call_tmp_chpl36, &ret_tmp_chpl);
  call_tmp_chpl37 = ret_tmp_chpl;
  chpl___PLUS__ASSIGN_(&ret_chpl2, &call_tmp_chpl37);
  i_x_chpl = &call_tmp_chpl37;
  chpl_macro_tmp_864.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_864.addr = i_x_chpl;
  tmp_chpl15 = chpl_macro_tmp_864;
  deinit_chpl42(tmp_chpl15);
  chpl___PLUS__ASSIGN_(&ret_chpl2, &local__str_literal_526_chpl);
  coerce_tmp_chpl4 = (&x_chpl2)->_high;
  init_chpl71(&cpi_chpl2);
  (&cpi_chpl2)->_bindex = coerce_tmp_chpl4;
  ret_chpl4 = cpi_chpl2;
  call_tmp_chpl38 = ret_chpl4;
  chpl___COLON_11(&call_tmp_chpl38, &ret_tmp_chpl2);
  call_tmp_chpl39 = ret_tmp_chpl2;
  chpl___PLUS__ASSIGN_(&ret_chpl2, &call_tmp_chpl39);
  i_x_chpl2 = &call_tmp_chpl39;
  chpl_macro_tmp_865.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_865.addr = i_x_chpl2;
  tmp_chpl16 = chpl_macro_tmp_865;
  deinit_chpl42(tmp_chpl16);
  ret_chpl = ret_chpl2;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelRange.chpl:2538 */
static void chpl___COLON_9(range_int64_t_boundedLow_F_chpl x_chpl2,
                           string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_526_chpl;
  string_chpl ret_chpl;
  string_chpl ret_chpl2;
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_866;
  local__str_literal_526_chpl = _str_literal_526_chpl /* ".." */;
  init_chpl73(&ret_chpl2);
  chpl___COLON_16((&x_chpl2)->_low, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl___PLUS__ASSIGN_(&ret_chpl2, &call_tmp_chpl36);
  i_x_chpl = &call_tmp_chpl36;
  chpl_macro_tmp_866.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_866.addr = i_x_chpl;
  tmp_chpl15 = chpl_macro_tmp_866;
  deinit_chpl42(tmp_chpl15);
  chpl___PLUS__ASSIGN_(&ret_chpl2, &local__str_literal_526_chpl);
  ret_chpl = ret_chpl2;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelRange.chpl:2538 */
static void chpl___COLON_10(range_byteIndex_boundedLow_F_chpl x_chpl2,
                            string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_526_chpl;
  string_chpl ret_chpl;
  string_chpl ret_chpl2;
  byteIndex_chpl call_tmp_chpl36;
  int64_t coerce_tmp_chpl3;
  byteIndex_chpl ret_chpl3;
  byteIndex_chpl cpi_chpl;
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_867;
  local__str_literal_526_chpl = _str_literal_526_chpl /* ".." */;
  init_chpl73(&ret_chpl2);
  coerce_tmp_chpl3 = (&x_chpl2)->_low;
  init_chpl71(&cpi_chpl);
  (&cpi_chpl)->_bindex = coerce_tmp_chpl3;
  ret_chpl3 = cpi_chpl;
  call_tmp_chpl36 = ret_chpl3;
  chpl___COLON_11(&call_tmp_chpl36, &ret_tmp_chpl);
  call_tmp_chpl37 = ret_tmp_chpl;
  chpl___PLUS__ASSIGN_(&ret_chpl2, &call_tmp_chpl37);
  i_x_chpl = &call_tmp_chpl37;
  chpl_macro_tmp_867.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_867.addr = i_x_chpl;
  tmp_chpl15 = chpl_macro_tmp_867;
  deinit_chpl42(tmp_chpl15);
  chpl___PLUS__ASSIGN_(&ret_chpl2, &local__str_literal_526_chpl);
  ret_chpl = ret_chpl2;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelRange.chpl:2538 */
static void chpl___COLON_6(range_byteIndex_boundedHigh_F_chpl x_chpl2,
                           string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_526_chpl;
  string_chpl ret_chpl;
  string_chpl ret_chpl2;
  byteIndex_chpl call_tmp_chpl36;
  int64_t coerce_tmp_chpl3;
  byteIndex_chpl ret_chpl3;
  byteIndex_chpl cpi_chpl;
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_868;
  local__str_literal_526_chpl = _str_literal_526_chpl /* ".." */;
  init_chpl73(&ret_chpl2);
  chpl___PLUS__ASSIGN_(&ret_chpl2, &local__str_literal_526_chpl);
  coerce_tmp_chpl3 = (&x_chpl2)->_high;
  init_chpl71(&cpi_chpl);
  (&cpi_chpl)->_bindex = coerce_tmp_chpl3;
  ret_chpl3 = cpi_chpl;
  call_tmp_chpl36 = ret_chpl3;
  chpl___COLON_11(&call_tmp_chpl36, &ret_tmp_chpl);
  call_tmp_chpl37 = ret_tmp_chpl;
  chpl___PLUS__ASSIGN_(&ret_chpl2, &call_tmp_chpl37);
  i_x_chpl = &call_tmp_chpl37;
  chpl_macro_tmp_868.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_868.addr = i_x_chpl;
  tmp_chpl15 = chpl_macro_tmp_868;
  deinit_chpl42(tmp_chpl15);
  ret_chpl = ret_chpl2;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelRange.chpl:2652 */
static int64_t chpl__add(int64_t a_chpl,
                         int64_t b_chpl) {
  int64_t ret_chpl;
  chpl_bool tmp_chpl15;
  chpl_bool tmp_chpl16;
  chpl_bool tmp_chpl17;
  chpl_bool tmp_chpl18;
  if (a_chpl > INT64(0)) {
    tmp_chpl15 = (b_chpl > INT64(0));
  } else {
    tmp_chpl15 = UINT8(false);
  }
  if (tmp_chpl15) {
    tmp_chpl16 = (b_chpl > ((int64_t)((INT64(9223372036854775807) - a_chpl))));
  } else {
    tmp_chpl16 = UINT8(false);
  }
  if (tmp_chpl16) {
    ret_chpl = INT64(9223372036854775807);
    goto _end_chpl__add_chpl;
  }
  if (a_chpl < INT64(0)) {
    tmp_chpl17 = (b_chpl < INT64(0));
  } else {
    tmp_chpl17 = UINT8(false);
  }
  if (tmp_chpl17) {
    tmp_chpl18 = (b_chpl < ((int64_t)((-INT64(9223372036854775807) - INT64(1) - a_chpl))));
  } else {
    tmp_chpl18 = UINT8(false);
  }
  if (tmp_chpl18) {
    ret_chpl = -INT64(9223372036854775807) - INT64(1);
    goto _end_chpl__add_chpl;
  }
  ret_chpl = ((int64_t)((a_chpl + b_chpl)));
  _end_chpl__add_chpl:;
  return ret_chpl;
}

/* ChapelRange.chpl:2674 */
static int64_t chpl__addRangeStrides(int64_t start_chpl,
                                     int64_t stride_chpl2,
                                     int64_t count_chpl) {
  int64_t call_tmp_chpl36;
  int64_t call_tmp_chpl37;
  call_tmp_chpl36 = mul_chpl(stride_chpl2, count_chpl);
  call_tmp_chpl37 = add_chpl(start_chpl, call_tmp_chpl36);
  return call_tmp_chpl37;
}

/* ChapelRange.chpl:2679 */
static int64_t mul_chpl(int64_t a_chpl,
                        int64_t b_chpl) {
  int64_t call_tmp_chpl36;
  call_tmp_chpl36 = (a_chpl * b_chpl);
  return call_tmp_chpl36;
}

/* ChapelRange.chpl:2680 */
static int64_t add_chpl(int64_t a_chpl,
                        int64_t b_chpl) {
  int64_t call_tmp_chpl36;
  call_tmp_chpl36 = (a_chpl + b_chpl);
  return call_tmp_chpl36;
}

/* ChapelRange.chpl:2825 */
static int64_t chpl__defaultLowBound(void) {
  return INT64(1);
}

/* ChapelRange.chpl:2833 */
static int64_t chpl__defaultHighBound(void) {
  return INT64(0);
}

