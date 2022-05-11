/* CopyAggregation.chpl:348 */
static void chpl__init_AggregationPrimitives(int64_t _ln_chpl,
                                             int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_AggregationPrimitives_p) {
    goto _exit_chpl__init_AggregationPrimitives_chpl;
  }
  printModuleInit_chpl("%*s\n", "AggregationPrimitives", INT64(21));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_AggregationPrimitives_p = UINT8(true);
  {
    chpl__init_CTypes(INT64(348), INT32(82));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_AggregationPrimitives_chpl:;
  return;
}

/* CopyAggregation.chpl:370 */
static int64_t getEnvInt_chpl(string_chpl * name_chpl,
                              int64_t default_chpl) {
  string_chpl local__str_literal_3282_chpl;
  int64_t ret_chpl;
  string_chpl call_tmp_chpl36;
  string_chpl ret_chpl2;
  int32_t call_tmp_chpl37;
  string_chpl ret_chpl3;
  string_chpl ret_chpl4;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl x_chpl2;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t call_tmp_chpl38;
  c_string call_tmp_chpl39;
  string_chpl call_tmp_chpl40;
  string_chpl ret_tmp_chpl;
  string_chpl strval_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl41;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl19 = NULL;
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_2829;
  chpl____wide__ref_string chpl_macro_tmp_2830;
  chpl____wide__ref_string chpl_macro_tmp_2831;
  chpl____wide__ref_string chpl_macro_tmp_2832;
  chpl____wide__nilType chpl_macro_tmp_2833;
  chpl____wide_Error chpl_macro_tmp_2834;
  chpl____wide__ref_string chpl_macro_tmp_2835;
  chpl____wide__ref_string chpl_macro_tmp_2836;
  local__str_literal_3282_chpl = _str_literal_3282_chpl /* "Cannot call .c_str() on a remote string" */;
  call_tmp_chpl37 = get_chpl_nodeID();
  if ((name_chpl)->locale_id == call_tmp_chpl37) {
    init_chpl73(&ret_chpl4);
    (&ret_chpl4)->cachedNumCodepoints = (name_chpl)->cachedNumCodepoints;
    chpl_macro_tmp_2829.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2829.addr = name_chpl;
    tmp_chpl15 = chpl_macro_tmp_2829;
    initWithBorrowedBuffer_chpl(&ret_chpl4, tmp_chpl15);
    ret_chpl3 = ret_chpl4;
    ret_chpl2 = ret_chpl3;
    goto _end_localize_chpl;
  } else {
    chpl_macro_tmp_2830.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2830.addr = name_chpl;
    tmp_chpl16 = chpl_macro_tmp_2830;
    init_ASSIGN__chpl21(&x_chpl2, tmp_chpl16);
    ret_chpl2 = x_chpl2;
    goto _end_localize_chpl;
  }
  _end_localize_chpl:;
  call_tmp_chpl36 = ret_chpl2;
  call_tmp_chpl38 = get_chpl_nodeID();
  if ((&call_tmp_chpl36)->locale_id != call_tmp_chpl38) {
    halt_chpl(&local__str_literal_3282_chpl, INT64(372), INT32(82));
  }
  call_tmp_chpl39 = getenv(((c_string)((&call_tmp_chpl36)->buff)));
  chpl___COLON_12(call_tmp_chpl39, &ret_tmp_chpl);
  call_tmp_chpl40 = ret_tmp_chpl;
  strval_chpl = call_tmp_chpl40;
  if ((&strval_chpl)->buffLen == INT64(0)) {
    ret_chpl = default_chpl;
    i_x_chpl = &strval_chpl;
    chpl_macro_tmp_2831.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2831.addr = i_x_chpl;
    tmp_chpl17 = chpl_macro_tmp_2831;
    deinit_chpl42(tmp_chpl17);
    i_x_chpl2 = &call_tmp_chpl36;
    chpl_macro_tmp_2832.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2832.addr = i_x_chpl2;
    tmp_chpl18 = chpl_macro_tmp_2832;
    deinit_chpl42(tmp_chpl18);
    goto _end_getEnvInt_chpl;
  }
  chpl_macro_tmp_2833.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2833.addr = nil;
  chpl_macro_tmp_2834.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2834.addr = NULL;
  error_chpl = chpl_macro_tmp_2834;
  tmp_chpl19 = &error_chpl;
  call_tmp_chpl41 = chpl___COLON_18(&strval_chpl, tmp_chpl19);
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, INT64(374), INT32(82));
  }
  ret_chpl = call_tmp_chpl41;
  i_x_chpl3 = &strval_chpl;
  chpl_macro_tmp_2835.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2835.addr = i_x_chpl3;
  tmp_chpl20 = chpl_macro_tmp_2835;
  deinit_chpl42(tmp_chpl20);
  i_x_chpl4 = &call_tmp_chpl36;
  chpl_macro_tmp_2836.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2836.addr = i_x_chpl4;
  tmp_chpl21 = chpl_macro_tmp_2836;
  deinit_chpl42(tmp_chpl21);
  _end_getEnvInt_chpl:;
  return ret_chpl;
}

