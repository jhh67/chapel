/* ChapelIOStringifyHelper.chpl:24 */
static void chpl__init_ChapelIOStringifyHelper(int64_t _ln_chpl,
                                               int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_ChapelIOStringifyHelper_p) {
    goto _exit_chpl__init_ChapelIOStringifyHelper_chpl;
  }
  printModuleInit_chpl("%*s\n", "ChapelIOStringifyHelper", INT64(23));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_ChapelIOStringifyHelper_p = UINT8(true);
  {
    chpl__init_BytesStringCommon(INT64(24), INT32(60));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_ChapelIOStringifyHelper_chpl:;
  return;
}

/* ChapelIOStringifyHelper.chpl:73 */
static void stringify_simple_chpl8(c_string _e0_args_chpl,
                                   string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_215_chpl;
  string_chpl ret_chpl;
  string_chpl str_chpl;
  string_chpl inlineImm_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  string_chpl ret_chpl2;
  string_chpl tmp_chpl15;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl36;
  string_chpl ret_chpl3;
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl4;
  string_chpl call_tmp_chpl37;
  chpl____wide_Error error_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_tmp_chpl;
  _ref__wide_Error_chpl tmp_chpl17 = NULL;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_2143;
  chpl____wide__nilType chpl_macro_tmp_2144;
  chpl____wide_Error chpl_macro_tmp_2145;
  chpl____wide__nilType chpl_macro_tmp_2146;
  chpl____wide_Error chpl_macro_tmp_2147;
  chpl____wide__nilType chpl_macro_tmp_2148;
  chpl____wide_Error chpl_macro_tmp_2149;
  chpl____wide__ref_string chpl_macro_tmp_2150;
  local__str_literal_215_chpl = _str_literal_215_chpl /* "" */;
  inlineImm_chpl = local__str_literal_215_chpl;
  i_x_chpl = &inlineImm_chpl;
  chpl_macro_tmp_2143.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2143.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_2143;
  init_ASSIGN__chpl21(&tmp_chpl15, tmp_chpl16);
  ret_chpl2 = tmp_chpl15;
  str_chpl = ret_chpl2;
  chpl_macro_tmp_2144.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2144.addr = nil;
  chpl_macro_tmp_2145.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2145.addr = NULL;
  error_chpl = chpl_macro_tmp_2145;
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  chpl_macro_tmp_2146.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2146.addr = nil;
  chpl_macro_tmp_2147.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2147.addr = NULL;
  error_chpl2 = chpl_macro_tmp_2147;
  chpl_macro_tmp_2148.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2148.addr = nil;
  chpl_macro_tmp_2149.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2149.addr = NULL;
  error_chpl3 = chpl_macro_tmp_2149;
  tmp_chpl17 = &error_chpl3;
  decodeByteBuffer_chpl(((c_ptr_uint8_t_chpl)(_e0_args_chpl)), string_length_bytes(_e0_args_chpl), decodePolicy_chpl_replace_chpl, tmp_chpl17, &ret_tmp_chpl);
  call_tmp_chpl37 = ret_tmp_chpl;
  if ((&error_chpl3)->addr != nil) {
    error_chpl2 = error_chpl3;
    goto _endcreateStringWithNewBuffer_chpl;
  }
  ret_chpl4 = call_tmp_chpl37;
  _endcreateStringWithNewBuffer_chpl:;
  if ((&error_chpl2)->addr != nil) {
    error_chpl = error_chpl2;
    goto _endcreateStringWithNewBuffer_chpl2;
  }
  ret_chpl3 = ret_chpl4;
  _endcreateStringWithNewBuffer_chpl2:;
  call_tmp_chpl36 = ret_chpl3;
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  chpl___PLUS__ASSIGN_(&str_chpl, &call_tmp_chpl36);
  i_x_chpl2 = &call_tmp_chpl36;
  chpl_macro_tmp_2150.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2150.addr = i_x_chpl2;
  tmp_chpl18 = chpl_macro_tmp_2150;
  deinit_chpl42(tmp_chpl18);
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, INT64(86), INT32(60));
  }
  ret_chpl = str_chpl;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelIOStringifyHelper.chpl:73 */
static void stringify_simple_chpl2(string_chpl * _e0_args_chpl,
                                   int64_t _e1_args_chpl,
                                   string_chpl * _e2_args_chpl,
                                   int64_t _e3_args_chpl,
                                   string_chpl * _e4_args_chpl,
                                   string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_215_chpl;
  string_chpl ret_chpl;
  string_chpl str_chpl;
  string_chpl inlineImm_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  string_chpl ret_chpl2;
  string_chpl tmp_chpl15;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl2;
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_2151;
  chpl____wide__ref_string chpl_macro_tmp_2152;
  chpl____wide__ref_string chpl_macro_tmp_2153;
  local__str_literal_215_chpl = _str_literal_215_chpl /* "" */;
  inlineImm_chpl = local__str_literal_215_chpl;
  i_x_chpl = &inlineImm_chpl;
  chpl_macro_tmp_2151.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2151.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_2151;
  init_ASSIGN__chpl21(&tmp_chpl15, tmp_chpl16);
  ret_chpl2 = tmp_chpl15;
  str_chpl = ret_chpl2;
  chpl___PLUS__ASSIGN_(&str_chpl, _e0_args_chpl);
  chpl___COLON_16(_e1_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl___PLUS__ASSIGN_(&str_chpl, &call_tmp_chpl36);
  i_x_chpl2 = &call_tmp_chpl36;
  chpl_macro_tmp_2152.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2152.addr = i_x_chpl2;
  tmp_chpl17 = chpl_macro_tmp_2152;
  deinit_chpl42(tmp_chpl17);
  chpl___PLUS__ASSIGN_(&str_chpl, _e2_args_chpl);
  chpl___COLON_16(_e3_args_chpl, &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  chpl___PLUS__ASSIGN_(&str_chpl, &call_tmp_chpl37);
  i_x_chpl3 = &call_tmp_chpl37;
  chpl_macro_tmp_2153.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2153.addr = i_x_chpl3;
  tmp_chpl18 = chpl_macro_tmp_2153;
  deinit_chpl42(tmp_chpl18);
  chpl___PLUS__ASSIGN_(&str_chpl, _e4_args_chpl);
  ret_chpl = str_chpl;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelIOStringifyHelper.chpl:73 */
static void stringify_simple_chpl12(string_chpl * _e0_args_chpl,
                                    string_chpl * _e1_args_chpl,
                                    int64_t _e2_args_chpl,
                                    string_chpl * _e3_args_chpl,
                                    range_int64_t_bounded_F_chpl _e4_args_chpl,
                                    string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_215_chpl;
  string_chpl ret_chpl;
  string_chpl str_chpl;
  string_chpl inlineImm_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  string_chpl ret_chpl2;
  string_chpl tmp_chpl15;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl2;
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_2154;
  chpl____wide__ref_string chpl_macro_tmp_2155;
  chpl____wide__ref_string chpl_macro_tmp_2156;
  local__str_literal_215_chpl = _str_literal_215_chpl /* "" */;
  inlineImm_chpl = local__str_literal_215_chpl;
  i_x_chpl = &inlineImm_chpl;
  chpl_macro_tmp_2154.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2154.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_2154;
  init_ASSIGN__chpl21(&tmp_chpl15, tmp_chpl16);
  ret_chpl2 = tmp_chpl15;
  str_chpl = ret_chpl2;
  chpl___PLUS__ASSIGN_(&str_chpl, _e0_args_chpl);
  chpl___PLUS__ASSIGN_(&str_chpl, _e1_args_chpl);
  chpl___COLON_16(_e2_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl___PLUS__ASSIGN_(&str_chpl, &call_tmp_chpl36);
  i_x_chpl2 = &call_tmp_chpl36;
  chpl_macro_tmp_2155.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2155.addr = i_x_chpl2;
  tmp_chpl17 = chpl_macro_tmp_2155;
  deinit_chpl42(tmp_chpl17);
  chpl___PLUS__ASSIGN_(&str_chpl, _e3_args_chpl);
  chpl___COLON_7(_e4_args_chpl, &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  chpl___PLUS__ASSIGN_(&str_chpl, &call_tmp_chpl37);
  i_x_chpl3 = &call_tmp_chpl37;
  chpl_macro_tmp_2156.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2156.addr = i_x_chpl3;
  tmp_chpl18 = chpl_macro_tmp_2156;
  deinit_chpl42(tmp_chpl18);
  ret_chpl = str_chpl;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelIOStringifyHelper.chpl:73 */
static void stringify_simple_chpl10(string_chpl * _e0_args_chpl,
                                    range_int64_t_bounded_F_chpl _e1_args_chpl,
                                    string_chpl * _e2_args_chpl,
                                    int64_t _e3_args_chpl,
                                    string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_215_chpl;
  string_chpl ret_chpl;
  string_chpl str_chpl;
  string_chpl inlineImm_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  string_chpl ret_chpl2;
  string_chpl tmp_chpl15;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl2;
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_2157;
  chpl____wide__ref_string chpl_macro_tmp_2158;
  chpl____wide__ref_string chpl_macro_tmp_2159;
  local__str_literal_215_chpl = _str_literal_215_chpl /* "" */;
  inlineImm_chpl = local__str_literal_215_chpl;
  i_x_chpl = &inlineImm_chpl;
  chpl_macro_tmp_2157.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2157.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_2157;
  init_ASSIGN__chpl21(&tmp_chpl15, tmp_chpl16);
  ret_chpl2 = tmp_chpl15;
  str_chpl = ret_chpl2;
  chpl___PLUS__ASSIGN_(&str_chpl, _e0_args_chpl);
  chpl___COLON_7(_e1_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl___PLUS__ASSIGN_(&str_chpl, &call_tmp_chpl36);
  i_x_chpl2 = &call_tmp_chpl36;
  chpl_macro_tmp_2158.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2158.addr = i_x_chpl2;
  tmp_chpl17 = chpl_macro_tmp_2158;
  deinit_chpl42(tmp_chpl17);
  chpl___PLUS__ASSIGN_(&str_chpl, _e2_args_chpl);
  chpl___COLON_16(_e3_args_chpl, &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  chpl___PLUS__ASSIGN_(&str_chpl, &call_tmp_chpl37);
  i_x_chpl3 = &call_tmp_chpl37;
  chpl_macro_tmp_2159.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2159.addr = i_x_chpl3;
  tmp_chpl18 = chpl_macro_tmp_2159;
  deinit_chpl42(tmp_chpl18);
  ret_chpl = str_chpl;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelIOStringifyHelper.chpl:73 */
static void stringify_simple_chpl4(string_chpl * _e0_args_chpl,
                                   range_byteIndex_bounded_F_chpl _e1_args_chpl,
                                   string_chpl * _e2_args_chpl,
                                   int64_t _e3_args_chpl,
                                   string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_215_chpl;
  string_chpl ret_chpl;
  string_chpl str_chpl;
  string_chpl inlineImm_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  string_chpl ret_chpl2;
  string_chpl tmp_chpl15;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl2;
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_2160;
  chpl____wide__ref_string chpl_macro_tmp_2161;
  chpl____wide__ref_string chpl_macro_tmp_2162;
  local__str_literal_215_chpl = _str_literal_215_chpl /* "" */;
  inlineImm_chpl = local__str_literal_215_chpl;
  i_x_chpl = &inlineImm_chpl;
  chpl_macro_tmp_2160.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2160.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_2160;
  init_ASSIGN__chpl21(&tmp_chpl15, tmp_chpl16);
  ret_chpl2 = tmp_chpl15;
  str_chpl = ret_chpl2;
  chpl___PLUS__ASSIGN_(&str_chpl, _e0_args_chpl);
  chpl___COLON_8(_e1_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl___PLUS__ASSIGN_(&str_chpl, &call_tmp_chpl36);
  i_x_chpl2 = &call_tmp_chpl36;
  chpl_macro_tmp_2161.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2161.addr = i_x_chpl2;
  tmp_chpl17 = chpl_macro_tmp_2161;
  deinit_chpl42(tmp_chpl17);
  chpl___PLUS__ASSIGN_(&str_chpl, _e2_args_chpl);
  chpl___COLON_16(_e3_args_chpl, &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  chpl___PLUS__ASSIGN_(&str_chpl, &call_tmp_chpl37);
  i_x_chpl3 = &call_tmp_chpl37;
  chpl_macro_tmp_2162.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2162.addr = i_x_chpl3;
  tmp_chpl18 = chpl_macro_tmp_2162;
  deinit_chpl42(tmp_chpl18);
  ret_chpl = str_chpl;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelIOStringifyHelper.chpl:73 */
static void stringify_simple_chpl6(string_chpl * _e0_args_chpl,
                                   int64_t _e1_args_chpl,
                                   string_chpl * _e2_args_chpl,
                                   int64_t _e3_args_chpl,
                                   string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_215_chpl;
  string_chpl ret_chpl;
  string_chpl str_chpl;
  string_chpl inlineImm_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  string_chpl ret_chpl2;
  string_chpl tmp_chpl15;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl2;
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_2163;
  chpl____wide__ref_string chpl_macro_tmp_2164;
  chpl____wide__ref_string chpl_macro_tmp_2165;
  local__str_literal_215_chpl = _str_literal_215_chpl /* "" */;
  inlineImm_chpl = local__str_literal_215_chpl;
  i_x_chpl = &inlineImm_chpl;
  chpl_macro_tmp_2163.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2163.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_2163;
  init_ASSIGN__chpl21(&tmp_chpl15, tmp_chpl16);
  ret_chpl2 = tmp_chpl15;
  str_chpl = ret_chpl2;
  chpl___PLUS__ASSIGN_(&str_chpl, _e0_args_chpl);
  chpl___COLON_16(_e1_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl___PLUS__ASSIGN_(&str_chpl, &call_tmp_chpl36);
  i_x_chpl2 = &call_tmp_chpl36;
  chpl_macro_tmp_2164.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2164.addr = i_x_chpl2;
  tmp_chpl17 = chpl_macro_tmp_2164;
  deinit_chpl42(tmp_chpl17);
  chpl___PLUS__ASSIGN_(&str_chpl, _e2_args_chpl);
  chpl___COLON_16(_e3_args_chpl, &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  chpl___PLUS__ASSIGN_(&str_chpl, &call_tmp_chpl37);
  i_x_chpl3 = &call_tmp_chpl37;
  chpl_macro_tmp_2165.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2165.addr = i_x_chpl3;
  tmp_chpl18 = chpl_macro_tmp_2165;
  deinit_chpl42(tmp_chpl18);
  ret_chpl = str_chpl;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelIOStringifyHelper.chpl:73 */
static void stringify_simple_chpl7(string_chpl * _e0_args_chpl,
                                   range_int64_t_boundedLow_F_chpl _e1_args_chpl,
                                   string_chpl * _e2_args_chpl,
                                   int64_t _e3_args_chpl,
                                   string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_215_chpl;
  string_chpl ret_chpl;
  string_chpl str_chpl;
  string_chpl inlineImm_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  string_chpl ret_chpl2;
  string_chpl tmp_chpl15;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl2;
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_2166;
  chpl____wide__ref_string chpl_macro_tmp_2167;
  chpl____wide__ref_string chpl_macro_tmp_2168;
  local__str_literal_215_chpl = _str_literal_215_chpl /* "" */;
  inlineImm_chpl = local__str_literal_215_chpl;
  i_x_chpl = &inlineImm_chpl;
  chpl_macro_tmp_2166.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2166.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_2166;
  init_ASSIGN__chpl21(&tmp_chpl15, tmp_chpl16);
  ret_chpl2 = tmp_chpl15;
  str_chpl = ret_chpl2;
  chpl___PLUS__ASSIGN_(&str_chpl, _e0_args_chpl);
  chpl___COLON_9(_e1_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl___PLUS__ASSIGN_(&str_chpl, &call_tmp_chpl36);
  i_x_chpl2 = &call_tmp_chpl36;
  chpl_macro_tmp_2167.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2167.addr = i_x_chpl2;
  tmp_chpl17 = chpl_macro_tmp_2167;
  deinit_chpl42(tmp_chpl17);
  chpl___PLUS__ASSIGN_(&str_chpl, _e2_args_chpl);
  chpl___COLON_16(_e3_args_chpl, &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  chpl___PLUS__ASSIGN_(&str_chpl, &call_tmp_chpl37);
  i_x_chpl3 = &call_tmp_chpl37;
  chpl_macro_tmp_2168.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2168.addr = i_x_chpl3;
  tmp_chpl18 = chpl_macro_tmp_2168;
  deinit_chpl42(tmp_chpl18);
  ret_chpl = str_chpl;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelIOStringifyHelper.chpl:73 */
static void stringify_simple_chpl11(string_chpl * _e0_args_chpl,
                                    range_byteIndex_boundedLow_F_chpl _e1_args_chpl,
                                    string_chpl * _e2_args_chpl,
                                    int64_t _e3_args_chpl,
                                    string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_215_chpl;
  string_chpl ret_chpl;
  string_chpl str_chpl;
  string_chpl inlineImm_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  string_chpl ret_chpl2;
  string_chpl tmp_chpl15;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl2;
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_2169;
  chpl____wide__ref_string chpl_macro_tmp_2170;
  chpl____wide__ref_string chpl_macro_tmp_2171;
  local__str_literal_215_chpl = _str_literal_215_chpl /* "" */;
  inlineImm_chpl = local__str_literal_215_chpl;
  i_x_chpl = &inlineImm_chpl;
  chpl_macro_tmp_2169.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2169.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_2169;
  init_ASSIGN__chpl21(&tmp_chpl15, tmp_chpl16);
  ret_chpl2 = tmp_chpl15;
  str_chpl = ret_chpl2;
  chpl___PLUS__ASSIGN_(&str_chpl, _e0_args_chpl);
  chpl___COLON_10(_e1_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl___PLUS__ASSIGN_(&str_chpl, &call_tmp_chpl36);
  i_x_chpl2 = &call_tmp_chpl36;
  chpl_macro_tmp_2170.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2170.addr = i_x_chpl2;
  tmp_chpl17 = chpl_macro_tmp_2170;
  deinit_chpl42(tmp_chpl17);
  chpl___PLUS__ASSIGN_(&str_chpl, _e2_args_chpl);
  chpl___COLON_16(_e3_args_chpl, &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  chpl___PLUS__ASSIGN_(&str_chpl, &call_tmp_chpl37);
  i_x_chpl3 = &call_tmp_chpl37;
  chpl_macro_tmp_2171.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2171.addr = i_x_chpl3;
  tmp_chpl18 = chpl_macro_tmp_2171;
  deinit_chpl42(tmp_chpl18);
  ret_chpl = str_chpl;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelIOStringifyHelper.chpl:73 */
static void stringify_simple_chpl(string_chpl * _e0_args_chpl,
                                  range_byteIndex_boundedHigh_F_chpl _e1_args_chpl,
                                  string_chpl * _e2_args_chpl,
                                  int64_t _e3_args_chpl,
                                  string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_215_chpl;
  string_chpl ret_chpl;
  string_chpl str_chpl;
  string_chpl inlineImm_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  string_chpl ret_chpl2;
  string_chpl tmp_chpl15;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl2;
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_2172;
  chpl____wide__ref_string chpl_macro_tmp_2173;
  chpl____wide__ref_string chpl_macro_tmp_2174;
  local__str_literal_215_chpl = _str_literal_215_chpl /* "" */;
  inlineImm_chpl = local__str_literal_215_chpl;
  i_x_chpl = &inlineImm_chpl;
  chpl_macro_tmp_2172.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2172.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_2172;
  init_ASSIGN__chpl21(&tmp_chpl15, tmp_chpl16);
  ret_chpl2 = tmp_chpl15;
  str_chpl = ret_chpl2;
  chpl___PLUS__ASSIGN_(&str_chpl, _e0_args_chpl);
  chpl___COLON_6(_e1_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl___PLUS__ASSIGN_(&str_chpl, &call_tmp_chpl36);
  i_x_chpl2 = &call_tmp_chpl36;
  chpl_macro_tmp_2173.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2173.addr = i_x_chpl2;
  tmp_chpl17 = chpl_macro_tmp_2173;
  deinit_chpl42(tmp_chpl17);
  chpl___PLUS__ASSIGN_(&str_chpl, _e2_args_chpl);
  chpl___COLON_16(_e3_args_chpl, &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  chpl___PLUS__ASSIGN_(&str_chpl, &call_tmp_chpl37);
  i_x_chpl3 = &call_tmp_chpl37;
  chpl_macro_tmp_2174.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2174.addr = i_x_chpl3;
  tmp_chpl18 = chpl_macro_tmp_2174;
  deinit_chpl42(tmp_chpl18);
  ret_chpl = str_chpl;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelIOStringifyHelper.chpl:73 */
static void stringify_simple_chpl3(string_chpl * _e0_args_chpl,
                                   string_chpl * _e1_args_chpl,
                                   string_chpl * _e2_args_chpl,
                                   string_chpl * _e3_args_chpl,
                                   string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_215_chpl;
  string_chpl ret_chpl;
  string_chpl str_chpl;
  string_chpl inlineImm_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  string_chpl ret_chpl2;
  string_chpl tmp_chpl15;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_2175;
  local__str_literal_215_chpl = _str_literal_215_chpl /* "" */;
  inlineImm_chpl = local__str_literal_215_chpl;
  i_x_chpl = &inlineImm_chpl;
  chpl_macro_tmp_2175.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2175.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_2175;
  init_ASSIGN__chpl21(&tmp_chpl15, tmp_chpl16);
  ret_chpl2 = tmp_chpl15;
  str_chpl = ret_chpl2;
  chpl___PLUS__ASSIGN_(&str_chpl, _e0_args_chpl);
  chpl___PLUS__ASSIGN_(&str_chpl, _e1_args_chpl);
  chpl___PLUS__ASSIGN_(&str_chpl, _e2_args_chpl);
  chpl___PLUS__ASSIGN_(&str_chpl, _e3_args_chpl);
  ret_chpl = str_chpl;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelIOStringifyHelper.chpl:73 */
static void stringify_simple_chpl5(string_chpl * _e0_args_chpl,
                                   int64_t _e1_args_chpl,
                                   string_chpl * _e2_args_chpl,
                                   string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_215_chpl;
  string_chpl ret_chpl;
  string_chpl str_chpl;
  string_chpl inlineImm_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  string_chpl ret_chpl2;
  string_chpl tmp_chpl15;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_2176;
  chpl____wide__ref_string chpl_macro_tmp_2177;
  local__str_literal_215_chpl = _str_literal_215_chpl /* "" */;
  inlineImm_chpl = local__str_literal_215_chpl;
  i_x_chpl = &inlineImm_chpl;
  chpl_macro_tmp_2176.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2176.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_2176;
  init_ASSIGN__chpl21(&tmp_chpl15, tmp_chpl16);
  ret_chpl2 = tmp_chpl15;
  str_chpl = ret_chpl2;
  chpl___PLUS__ASSIGN_(&str_chpl, _e0_args_chpl);
  chpl___COLON_16(_e1_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl___PLUS__ASSIGN_(&str_chpl, &call_tmp_chpl36);
  i_x_chpl2 = &call_tmp_chpl36;
  chpl_macro_tmp_2177.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2177.addr = i_x_chpl2;
  tmp_chpl17 = chpl_macro_tmp_2177;
  deinit_chpl42(tmp_chpl17);
  chpl___PLUS__ASSIGN_(&str_chpl, _e2_args_chpl);
  ret_chpl = str_chpl;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelIOStringifyHelper.chpl:73 */
static void stringify_simple_chpl9(string_chpl * _e0_args_chpl,
                                   int64_t _e1_args_chpl,
                                   string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_215_chpl;
  string_chpl ret_chpl;
  string_chpl str_chpl;
  string_chpl inlineImm_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  string_chpl ret_chpl2;
  string_chpl tmp_chpl15;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_2178;
  chpl____wide__ref_string chpl_macro_tmp_2179;
  local__str_literal_215_chpl = _str_literal_215_chpl /* "" */;
  inlineImm_chpl = local__str_literal_215_chpl;
  i_x_chpl = &inlineImm_chpl;
  chpl_macro_tmp_2178.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2178.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_2178;
  init_ASSIGN__chpl21(&tmp_chpl15, tmp_chpl16);
  ret_chpl2 = tmp_chpl15;
  str_chpl = ret_chpl2;
  chpl___PLUS__ASSIGN_(&str_chpl, _e0_args_chpl);
  chpl___COLON_16(_e1_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl___PLUS__ASSIGN_(&str_chpl, &call_tmp_chpl36);
  i_x_chpl2 = &call_tmp_chpl36;
  chpl_macro_tmp_2179.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2179.addr = i_x_chpl2;
  tmp_chpl17 = chpl_macro_tmp_2179;
  deinit_chpl42(tmp_chpl17);
  ret_chpl = str_chpl;
  *(_retArg_chpl) = ret_chpl;
  return;
}

