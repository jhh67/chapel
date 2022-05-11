/* ChapelIO.chpl:181 */
static void chpl__init_ChapelIO(int64_t _ln_chpl,
                                int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_ChapelIO_p) {
    goto _exit_chpl__init_ChapelIO_chpl;
  }
  printModuleInit_chpl("%*s\n", "ChapelIO", INT64(8));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_ChapelIO_p = UINT8(true);
  {
    chpl__init_ChapelBase(INT64(181), INT32(70));
    chpl__init_ChapelLocale(INT64(181), INT32(70));
    chpl__init_SysBasic(INT64(181), INT32(70));
    chpl__init_SysError(INT64(181), INT32(70));
    chpl__init_IO(INT64(181), INT32(70));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_ChapelIO_chpl:;
  return;
}

/* ChapelIO.chpl:774 */
static void writeln_chpl(string_chpl * _e0_args_chpl,
                         int64_t _e1_args_chpl) {
  channel_T_dynamic_T_chpl local_stdout_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  chpl____wide__nilType chpl_macro_tmp_2253;
  chpl____wide_Error chpl_macro_tmp_2254;
  local_stdout_chpl = stdout_chpl;
  chpl_macro_tmp_2253.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2253.addr = nil;
  chpl_macro_tmp_2254.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2254.addr = NULL;
  error_chpl = chpl_macro_tmp_2254;
  tmp_chpl15 = &error_chpl;
  writeln_chpl2(&local_stdout_chpl, _e0_args_chpl, _e1_args_chpl, tmp_chpl15);
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, INT64(775), INT32(70));
  }
  return;
}

/* ChapelIO.chpl:804 */
static void chpl_stringify_wrapper4(c_string _e0_args_chpl,
                                    string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  stringify_chpl3(_e0_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelIO.chpl:804 */
static void chpl_stringify_wrapper5(string_chpl * _e0_args_chpl,
                                    int64_t _e1_args_chpl,
                                    string_chpl * _e2_args_chpl,
                                    int64_t _e3_args_chpl,
                                    string_chpl * _e4_args_chpl,
                                    string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  stringify_chpl11(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, _e4_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelIO.chpl:804 */
static void chpl_stringify_wrapper(string_chpl * _e0_args_chpl,
                                   string_chpl * _e1_args_chpl,
                                   int64_t _e2_args_chpl,
                                   string_chpl * _e3_args_chpl,
                                   range_int64_t_bounded_F_chpl _e4_args_chpl,
                                   string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  stringify_chpl6(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, _e4_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelIO.chpl:804 */
static void chpl_stringify_wrapper3(string_chpl * _e0_args_chpl,
                                    range_int64_t_bounded_F_chpl _e1_args_chpl,
                                    string_chpl * _e2_args_chpl,
                                    int64_t _e3_args_chpl,
                                    string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  stringify_chpl9(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelIO.chpl:804 */
static void chpl_stringify_wrapper10(string_chpl * _e0_args_chpl,
                                     range_byteIndex_bounded_F_chpl _e1_args_chpl,
                                     string_chpl * _e2_args_chpl,
                                     int64_t _e3_args_chpl,
                                     string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  stringify_chpl8(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelIO.chpl:804 */
static void chpl_stringify_wrapper6(string_chpl * _e0_args_chpl,
                                    int64_t _e1_args_chpl,
                                    string_chpl * _e2_args_chpl,
                                    int64_t _e3_args_chpl,
                                    string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  stringify_chpl4(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelIO.chpl:804 */
static void chpl_stringify_wrapper8(string_chpl * _e0_args_chpl,
                                    range_int64_t_boundedLow_F_chpl _e1_args_chpl,
                                    string_chpl * _e2_args_chpl,
                                    int64_t _e3_args_chpl,
                                    string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  stringify_chpl2(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelIO.chpl:804 */
static void chpl_stringify_wrapper11(string_chpl * _e0_args_chpl,
                                     range_byteIndex_boundedLow_F_chpl _e1_args_chpl,
                                     string_chpl * _e2_args_chpl,
                                     int64_t _e3_args_chpl,
                                     string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  stringify_chpl5(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelIO.chpl:804 */
static void chpl_stringify_wrapper7(string_chpl * _e0_args_chpl,
                                    range_byteIndex_boundedHigh_F_chpl _e1_args_chpl,
                                    string_chpl * _e2_args_chpl,
                                    int64_t _e3_args_chpl,
                                    string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  stringify_chpl10(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelIO.chpl:804 */
static void chpl_stringify_wrapper9(string_chpl * _e0_args_chpl,
                                    string_chpl * _e1_args_chpl,
                                    string_chpl * _e2_args_chpl,
                                    string_chpl * _e3_args_chpl,
                                    string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  stringify_chpl12(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelIO.chpl:804 */
static void chpl_stringify_wrapper12(string_chpl * _e0_args_chpl,
                                     int64_t _e1_args_chpl,
                                     string_chpl * _e2_args_chpl,
                                     string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  stringify_chpl7(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelIO.chpl:804 */
static void chpl_stringify_wrapper2(string_chpl * _e0_args_chpl,
                                    int64_t _e1_args_chpl,
                                    string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  stringify_chpl(_e0_args_chpl, _e1_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

