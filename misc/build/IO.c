/* IO.chpl:387 */
static void chpl__init_IO(int64_t _ln_chpl,
                          int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  string_chpl local__str_literal_1979_chpl;
  string_chpl local__str_literal_1978_chpl;
  string_chpl local__str_literal_1977_chpl;
  string_chpl local__str_literal_1976_chpl;
  string_chpl local__str_literal_1975_chpl;
  string_chpl local__str_literal_1974_chpl;
  _tuple_6_star__ref_string_chpl ret_tmp_chpl;
  string_chpl inlineImm_chpl;
  _ref_string_chpl i__e0_x_chpl = NULL;
  string_chpl inlineImm_chpl2;
  _ref_string_chpl i__e1_x_chpl = NULL;
  string_chpl inlineImm_chpl3;
  _ref_string_chpl i__e2_x_chpl = NULL;
  string_chpl inlineImm_chpl4;
  _ref_string_chpl i__e3_x_chpl = NULL;
  string_chpl inlineImm_chpl5;
  _ref_string_chpl i__e4_x_chpl = NULL;
  string_chpl inlineImm_chpl6;
  _ref_string_chpl i__e5_x_chpl = NULL;
  _tuple_6_star_string_chpl ret_chpl;
  _ref_string_chpl read_x0_chpl = NULL;
  string_chpl ret_chpl2;
  string_chpl tmp_chpl15;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl read_x1_chpl = NULL;
  string_chpl ret_chpl3;
  string_chpl tmp_chpl17;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl read_x2_chpl = NULL;
  string_chpl ret_chpl4;
  string_chpl tmp_chpl19;
  chpl____wide__ref_string tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl read_x3_chpl = NULL;
  string_chpl ret_chpl5;
  string_chpl tmp_chpl21;
  chpl____wide__ref_string tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl read_x4_chpl = NULL;
  string_chpl ret_chpl6;
  string_chpl tmp_chpl23;
  chpl____wide__ref_string tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl read_x5_chpl = NULL;
  string_chpl ret_chpl7;
  string_chpl tmp_chpl25;
  chpl____wide__ref_string tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t coerce_tmp_chpl3;
  Error_chpl error_chpl = NULL;
  int32_t tmp_chpl27;
  chpl____wide_Error tmp_chpl28 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  file_chpl ret_tmp_chpl2;
  _ref__wide_Error_chpl tmp_chpl29 = NULL;
  Error_chpl error_chpl3 = NULL;
  chpl____wide_Error tmp_chpl30 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl error_chpl4 = NULL;
  chpl____wide_Error tmp_chpl31 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl error_chpl5 = NULL;
  int32_t tmp_chpl32;
  chpl____wide_Error tmp_chpl33 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error error_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_F_dynamic_T_chpl ret_tmp_chpl3;
  _ref__wide_Error_chpl tmp_chpl34 = NULL;
  Error_chpl error_chpl7 = NULL;
  int32_t tmp_chpl35;
  chpl____wide_Error tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error error_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  file_chpl ret_tmp_chpl4;
  _ref__wide_Error_chpl tmp_chpl37 = NULL;
  Error_chpl error_chpl9 = NULL;
  chpl____wide_Error tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl error_chpl10 = NULL;
  chpl____wide_Error tmp_chpl39 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl error_chpl11 = NULL;
  chpl____wide_Error tmp_chpl40 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error error_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_T_chpl ret_tmp_chpl5;
  _ref__wide_Error_chpl tmp_chpl41 = NULL;
  Error_chpl error_chpl13 = NULL;
  int32_t tmp_chpl42;
  chpl____wide_Error tmp_chpl43 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error error_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  file_chpl ret_tmp_chpl6;
  _ref__wide_Error_chpl tmp_chpl44 = NULL;
  Error_chpl error_chpl15 = NULL;
  chpl____wide_Error tmp_chpl45 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl error_chpl16 = NULL;
  chpl____wide_Error tmp_chpl46 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl error_chpl17 = NULL;
  chpl____wide_Error tmp_chpl47 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error error_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_T_chpl ret_tmp_chpl7;
  _ref__wide_Error_chpl tmp_chpl48 = NULL;
  chpl____wide__ref_string chpl_macro_tmp_2266;
  chpl____wide__ref_string chpl_macro_tmp_2267;
  chpl____wide__ref_string chpl_macro_tmp_2268;
  chpl____wide__ref_string chpl_macro_tmp_2269;
  chpl____wide__ref_string chpl_macro_tmp_2270;
  chpl____wide__ref_string chpl_macro_tmp_2271;
  chpl____wide__ref__tuple_6_star_string chpl_macro_tmp_2272;
  chpl____wide_Error chpl_macro_tmp_2273;
  chpl____wide__nilType chpl_macro_tmp_2274;
  chpl____wide_Error chpl_macro_tmp_2275;
  chpl____wide_Error chpl_macro_tmp_2276;
  chpl____wide_Error chpl_macro_tmp_2277;
  chpl____wide_Error chpl_macro_tmp_2278;
  chpl____wide__nilType chpl_macro_tmp_2279;
  chpl____wide_Error chpl_macro_tmp_2280;
  chpl____wide_Error chpl_macro_tmp_2281;
  chpl____wide__nilType chpl_macro_tmp_2282;
  chpl____wide_Error chpl_macro_tmp_2283;
  chpl____wide_Error chpl_macro_tmp_2284;
  chpl____wide_Error chpl_macro_tmp_2285;
  chpl____wide_Error chpl_macro_tmp_2286;
  chpl____wide__nilType chpl_macro_tmp_2287;
  chpl____wide_Error chpl_macro_tmp_2288;
  chpl____wide_Error chpl_macro_tmp_2289;
  chpl____wide__nilType chpl_macro_tmp_2290;
  chpl____wide_Error chpl_macro_tmp_2291;
  chpl____wide_Error chpl_macro_tmp_2292;
  chpl____wide_Error chpl_macro_tmp_2293;
  chpl____wide_Error chpl_macro_tmp_2294;
  chpl____wide__nilType chpl_macro_tmp_2295;
  chpl____wide_Error chpl_macro_tmp_2296;
  if (chpl__init_IO_p) {
    goto _exit_chpl__init_IO_chpl;
  }
  printModuleInit_chpl("%*s\n", "IO", INT64(2));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_IO_p = UINT8(true);
  {
    chpl__init_SysBasic(INT64(387), INT32(77));
    chpl__init_CTypes(INT64(387), INT32(77));
    chpl__init_SysError(INT64(387), INT32(77));
    chpl__init_HaltWrappers(INT64(387), INT32(77));
    chpl__init_ChapelIOStringifyHelper(INT64(387), INT32(77));
    chpl__init_FormattedIO(INT64(387), INT32(77));
  }
  chpl_addModule("IO", ((c_fn_ptr)(chpl__deinit_IO)));
  local__str_literal_1979_chpl = _str_literal_1979_chpl /* "f" */;
  local__str_literal_1978_chpl = _str_literal_1978_chpl /* "e" */;
  local__str_literal_1977_chpl = _str_literal_1977_chpl /* "d" */;
  local__str_literal_1976_chpl = _str_literal_1976_chpl /* "c" */;
  local__str_literal_1975_chpl = _str_literal_1975_chpl /* "b" */;
  local__str_literal_1974_chpl = _str_literal_1974_chpl /* "a" */;
  IOHINT_NONE_chpl = INT32(0);
  chpl_comm_broadcast_private(INT64(24), sizeof(int32_t));
  IOHINT_RANDOM_chpl = QIO_HINT_RANDOM;
  chpl_comm_broadcast_private(INT64(25), sizeof(int32_t));
  IOHINT_SEQUENTIAL_chpl = QIO_HINT_SEQUENTIAL;
  chpl_comm_broadcast_private(INT64(26), sizeof(int32_t));
  IOHINT_CACHED_chpl = QIO_HINT_CACHED;
  chpl_comm_broadcast_private(INT64(27), sizeof(int32_t));
  IOHINT_PARALLEL_chpl = QIO_HINT_PARALLEL;
  chpl_comm_broadcast_private(INT64(28), sizeof(int32_t));
  inlineImm_chpl = local__str_literal_1974_chpl;
  i__e0_x_chpl = &inlineImm_chpl;
  inlineImm_chpl2 = local__str_literal_1975_chpl;
  i__e1_x_chpl = &inlineImm_chpl2;
  inlineImm_chpl3 = local__str_literal_1976_chpl;
  i__e2_x_chpl = &inlineImm_chpl3;
  inlineImm_chpl4 = local__str_literal_1977_chpl;
  i__e3_x_chpl = &inlineImm_chpl4;
  inlineImm_chpl5 = local__str_literal_1978_chpl;
  i__e4_x_chpl = &inlineImm_chpl5;
  inlineImm_chpl6 = local__str_literal_1979_chpl;
  i__e5_x_chpl = &inlineImm_chpl6;
  *(ret_tmp_chpl + INT64(0)) = i__e0_x_chpl;
  *(ret_tmp_chpl + INT64(1)) = i__e1_x_chpl;
  *(ret_tmp_chpl + INT64(2)) = i__e2_x_chpl;
  *(ret_tmp_chpl + INT64(3)) = i__e3_x_chpl;
  *(ret_tmp_chpl + INT64(4)) = i__e4_x_chpl;
  *(ret_tmp_chpl + INT64(5)) = i__e5_x_chpl;
  *(call_tmp_chpl25 + INT64(0)) = *(ret_tmp_chpl + INT64(0));
  *(call_tmp_chpl25 + INT64(1)) = *(ret_tmp_chpl + INT64(1));
  *(call_tmp_chpl25 + INT64(2)) = *(ret_tmp_chpl + INT64(2));
  *(call_tmp_chpl25 + INT64(3)) = *(ret_tmp_chpl + INT64(3));
  *(call_tmp_chpl25 + INT64(4)) = *(ret_tmp_chpl + INT64(4));
  *(call_tmp_chpl25 + INT64(5)) = *(ret_tmp_chpl + INT64(5));
  read_x0_chpl = *(call_tmp_chpl25 + INT64(0));
  chpl_macro_tmp_2266.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2266.addr = read_x0_chpl;
  tmp_chpl16 = chpl_macro_tmp_2266;
  init_ASSIGN__chpl21(&tmp_chpl15, tmp_chpl16);
  ret_chpl2 = tmp_chpl15;
  read_x1_chpl = *(call_tmp_chpl25 + INT64(1));
  chpl_macro_tmp_2267.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2267.addr = read_x1_chpl;
  tmp_chpl18 = chpl_macro_tmp_2267;
  init_ASSIGN__chpl21(&tmp_chpl17, tmp_chpl18);
  ret_chpl3 = tmp_chpl17;
  read_x2_chpl = *(call_tmp_chpl25 + INT64(2));
  chpl_macro_tmp_2268.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2268.addr = read_x2_chpl;
  tmp_chpl20 = chpl_macro_tmp_2268;
  init_ASSIGN__chpl21(&tmp_chpl19, tmp_chpl20);
  ret_chpl4 = tmp_chpl19;
  read_x3_chpl = *(call_tmp_chpl25 + INT64(3));
  chpl_macro_tmp_2269.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2269.addr = read_x3_chpl;
  tmp_chpl22 = chpl_macro_tmp_2269;
  init_ASSIGN__chpl21(&tmp_chpl21, tmp_chpl22);
  ret_chpl5 = tmp_chpl21;
  read_x4_chpl = *(call_tmp_chpl25 + INT64(4));
  chpl_macro_tmp_2270.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2270.addr = read_x4_chpl;
  tmp_chpl24 = chpl_macro_tmp_2270;
  init_ASSIGN__chpl21(&tmp_chpl23, tmp_chpl24);
  ret_chpl6 = tmp_chpl23;
  read_x5_chpl = *(call_tmp_chpl25 + INT64(5));
  chpl_macro_tmp_2271.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2271.addr = read_x5_chpl;
  tmp_chpl26 = chpl_macro_tmp_2271;
  init_ASSIGN__chpl21(&tmp_chpl25, tmp_chpl26);
  ret_chpl7 = tmp_chpl25;
  *(ret_chpl + INT64(0)) = ret_chpl2;
  *(ret_chpl + INT64(1)) = ret_chpl3;
  *(ret_chpl + INT64(2)) = ret_chpl4;
  *(ret_chpl + INT64(3)) = ret_chpl5;
  *(ret_chpl + INT64(4)) = ret_chpl6;
  *(ret_chpl + INT64(5)) = ret_chpl7;
  chpl_check_nil((&_arg_to_proto_names_chpl)->addr, INT64(3741), INT32(77));
  chpl_macro_tmp_2272.locale = (&_arg_to_proto_names_chpl)->locale;
  chpl_macro_tmp_2272.addr = &(((&_arg_to_proto_names_chpl)->addr)->value);
  chpl_gen_comm_put(((void*)(&ret_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_2272).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2272).addr, sizeof(_tuple_6_star_string_chpl), COMMID(0), INT64(3741), INT64(77));
  coerce_tmp_chpl3 = ((int32_t)(INT64(0)));
  error_chpl = NULL;
  tmp_chpl27 = IOHINT_NONE_chpl;
  if (error_chpl != nil) {
    chpl_macro_tmp_2273.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2273.addr = error_chpl;
    tmp_chpl28 = chpl_macro_tmp_2273;
    chpl_uncaught_error(tmp_chpl28, INT64(4544), INT32(77));
  }
  chpl_macro_tmp_2274.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2274.addr = nil;
  chpl_macro_tmp_2275.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2275.addr = NULL;
  error_chpl2 = chpl_macro_tmp_2275;
  tmp_chpl29 = &error_chpl2;
  openfd_chpl(coerce_tmp_chpl3, tmp_chpl27, tmp_chpl29, &ret_tmp_chpl2);
  call_tmp_chpl27 = ret_tmp_chpl2;
  if ((&error_chpl2)->addr != nil) {
    chpl_uncaught_error(error_chpl2, INT64(4544), INT32(77));
  }
  error_chpl3 = NULL;
  default_arg_start_chpl = INT64(0);
  if (error_chpl3 != nil) {
    chpl_macro_tmp_2276.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2276.addr = error_chpl3;
    tmp_chpl30 = chpl_macro_tmp_2276;
    chpl_uncaught_error(tmp_chpl30, INT64(4544), INT32(77));
  }
  error_chpl4 = NULL;
  default_arg_end_chpl = INT64(9223372036854775807);
  if (error_chpl4 != nil) {
    chpl_macro_tmp_2277.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2277.addr = error_chpl4;
    tmp_chpl31 = chpl_macro_tmp_2277;
    chpl_uncaught_error(tmp_chpl31, INT64(4544), INT32(77));
  }
  error_chpl5 = NULL;
  tmp_chpl32 = IOHINT_NONE_chpl;
  default_arg_hints_chpl = tmp_chpl32;
  if (error_chpl5 != nil) {
    chpl_macro_tmp_2278.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2278.addr = error_chpl5;
    tmp_chpl33 = chpl_macro_tmp_2278;
    chpl_uncaught_error(tmp_chpl33, INT64(4544), INT32(77));
  }
  chpl_macro_tmp_2279.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2279.addr = nil;
  chpl_macro_tmp_2280.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2280.addr = NULL;
  error_chpl6 = chpl_macro_tmp_2280;
  tmp_chpl34 = &error_chpl6;
  reader_chpl(&call_tmp_chpl27, default_arg_start_chpl, default_arg_end_chpl, default_arg_hints_chpl, tmp_chpl34, &ret_tmp_chpl3);
  call_tmp_chpl26 = ret_tmp_chpl3;
  if ((&error_chpl6)->addr != nil) {
    chpl_uncaught_error(error_chpl6, INT64(4544), INT32(77));
  }
  stdin_chpl = call_tmp_chpl26;
  chpl_comm_broadcast_private(INT64(29), sizeof(channel_F_dynamic_T_chpl));
  call_tmp_chpl28 = chpl_cstdout();
  error_chpl7 = NULL;
  tmp_chpl35 = IOHINT_NONE_chpl;
  if (error_chpl7 != nil) {
    chpl_macro_tmp_2281.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2281.addr = error_chpl7;
    tmp_chpl36 = chpl_macro_tmp_2281;
    chpl_uncaught_error(tmp_chpl36, INT64(4550), INT32(77));
  }
  chpl_macro_tmp_2282.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2282.addr = nil;
  chpl_macro_tmp_2283.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2283.addr = NULL;
  error_chpl8 = chpl_macro_tmp_2283;
  tmp_chpl37 = &error_chpl8;
  openfp_chpl(call_tmp_chpl28, tmp_chpl35, tmp_chpl37, &ret_tmp_chpl4);
  call_tmp_chpl30 = ret_tmp_chpl4;
  if ((&error_chpl8)->addr != nil) {
    chpl_uncaught_error(error_chpl8, INT64(4550), INT32(77));
  }
  error_chpl9 = NULL;
  default_arg_start_chpl2 = INT64(0);
  if (error_chpl9 != nil) {
    chpl_macro_tmp_2284.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2284.addr = error_chpl9;
    tmp_chpl38 = chpl_macro_tmp_2284;
    chpl_uncaught_error(tmp_chpl38, INT64(4550), INT32(77));
  }
  error_chpl10 = NULL;
  default_arg_end_chpl2 = INT64(9223372036854775807);
  if (error_chpl10 != nil) {
    chpl_macro_tmp_2285.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2285.addr = error_chpl10;
    tmp_chpl39 = chpl_macro_tmp_2285;
    chpl_uncaught_error(tmp_chpl39, INT64(4550), INT32(77));
  }
  error_chpl11 = NULL;
  default_arg_hints_chpl2 = INT32(0);
  if (error_chpl11 != nil) {
    chpl_macro_tmp_2286.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2286.addr = error_chpl11;
    tmp_chpl40 = chpl_macro_tmp_2286;
    chpl_uncaught_error(tmp_chpl40, INT64(4550), INT32(77));
  }
  chpl_macro_tmp_2287.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2287.addr = nil;
  chpl_macro_tmp_2288.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2288.addr = NULL;
  error_chpl12 = chpl_macro_tmp_2288;
  tmp_chpl41 = &error_chpl12;
  writer_chpl(&call_tmp_chpl30, default_arg_start_chpl2, default_arg_end_chpl2, default_arg_hints_chpl2, tmp_chpl41, &ret_tmp_chpl5);
  call_tmp_chpl29 = ret_tmp_chpl5;
  if ((&error_chpl12)->addr != nil) {
    chpl_uncaught_error(error_chpl12, INT64(4550), INT32(77));
  }
  stdout_chpl = call_tmp_chpl29;
  chpl_comm_broadcast_private(INT64(30), sizeof(channel_T_dynamic_T_chpl));
  call_tmp_chpl31 = chpl_cstderr();
  error_chpl13 = NULL;
  tmp_chpl42 = IOHINT_NONE_chpl;
  if (error_chpl13 != nil) {
    chpl_macro_tmp_2289.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2289.addr = error_chpl13;
    tmp_chpl43 = chpl_macro_tmp_2289;
    chpl_uncaught_error(tmp_chpl43, INT64(4556), INT32(77));
  }
  chpl_macro_tmp_2290.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2290.addr = nil;
  chpl_macro_tmp_2291.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2291.addr = NULL;
  error_chpl14 = chpl_macro_tmp_2291;
  tmp_chpl44 = &error_chpl14;
  openfp_chpl(call_tmp_chpl31, tmp_chpl42, tmp_chpl44, &ret_tmp_chpl6);
  call_tmp_chpl33 = ret_tmp_chpl6;
  if ((&error_chpl14)->addr != nil) {
    chpl_uncaught_error(error_chpl14, INT64(4556), INT32(77));
  }
  error_chpl15 = NULL;
  default_arg_start_chpl3 = INT64(0);
  if (error_chpl15 != nil) {
    chpl_macro_tmp_2292.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2292.addr = error_chpl15;
    tmp_chpl45 = chpl_macro_tmp_2292;
    chpl_uncaught_error(tmp_chpl45, INT64(4556), INT32(77));
  }
  error_chpl16 = NULL;
  default_arg_end_chpl3 = INT64(9223372036854775807);
  if (error_chpl16 != nil) {
    chpl_macro_tmp_2293.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2293.addr = error_chpl16;
    tmp_chpl46 = chpl_macro_tmp_2293;
    chpl_uncaught_error(tmp_chpl46, INT64(4556), INT32(77));
  }
  error_chpl17 = NULL;
  default_arg_hints_chpl3 = INT32(0);
  if (error_chpl17 != nil) {
    chpl_macro_tmp_2294.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2294.addr = error_chpl17;
    tmp_chpl47 = chpl_macro_tmp_2294;
    chpl_uncaught_error(tmp_chpl47, INT64(4556), INT32(77));
  }
  chpl_macro_tmp_2295.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2295.addr = nil;
  chpl_macro_tmp_2296.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2296.addr = NULL;
  error_chpl18 = chpl_macro_tmp_2296;
  tmp_chpl48 = &error_chpl18;
  writer_chpl(&call_tmp_chpl33, default_arg_start_chpl3, default_arg_end_chpl3, default_arg_hints_chpl3, tmp_chpl48, &ret_tmp_chpl7);
  call_tmp_chpl32 = ret_tmp_chpl7;
  if ((&error_chpl18)->addr != nil) {
    chpl_uncaught_error(error_chpl18, INT64(4556), INT32(77));
  }
  stderr_chpl = call_tmp_chpl32;
  chpl_comm_broadcast_private(INT64(31), sizeof(channel_T_dynamic_T_chpl));
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_IO_chpl:;
  return;
}

/* IO.chpl:387 */
static void chpl__deinit_IO(void) {
  _ref_channel_T_dynamic_T_chpl i_x_chpl = NULL;
  _ref_file_chpl i_x_chpl2 = NULL;
  _ref_channel_T_dynamic_T_chpl i_x_chpl3 = NULL;
  _ref_file_chpl i_x_chpl4 = NULL;
  _ref_channel_F_dynamic_T_chpl i_x_chpl5 = NULL;
  _ref_file_chpl i_x_chpl6 = NULL;
  chpl____wide__ref__tuple_6_star_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_6_star_string chpl_macro_tmp_2297;
  chpl____wide__ref_string chpl_macro_tmp_2298;
  chpl____wide__ref_string chpl_macro_tmp_2299;
  chpl____wide__ref_string chpl_macro_tmp_2300;
  chpl____wide__ref_string chpl_macro_tmp_2301;
  chpl____wide__ref_string chpl_macro_tmp_2302;
  chpl____wide__ref_string chpl_macro_tmp_2303;
  i_x_chpl = &stderr_chpl;
  deinit_chpl46(i_x_chpl);
  i_x_chpl2 = &call_tmp_chpl33;
  deinit_chpl44(i_x_chpl2);
  i_x_chpl3 = &stdout_chpl;
  deinit_chpl46(i_x_chpl3);
  i_x_chpl4 = &call_tmp_chpl30;
  deinit_chpl44(i_x_chpl4);
  i_x_chpl5 = &stdin_chpl;
  deinit_chpl45(i_x_chpl5);
  i_x_chpl6 = &call_tmp_chpl27;
  deinit_chpl44(i_x_chpl6);
  chpl_check_nil((&_arg_to_proto_names_chpl)->addr, INT64(3741), INT32(77));
  chpl_macro_tmp_2297.locale = (&_arg_to_proto_names_chpl)->locale;
  chpl_macro_tmp_2297.addr = &(((&_arg_to_proto_names_chpl)->addr)->value);
  tmp_chpl15 = chpl_macro_tmp_2297;
  chpl_macro_tmp_2298.locale = (tmp_chpl15).locale;
  chpl_macro_tmp_2298.addr = (*((tmp_chpl15).addr) + INT64(5));
  _field_destructor_tmp__chpl = chpl_macro_tmp_2298;
  deinit_chpl42(_field_destructor_tmp__chpl);
  chpl_macro_tmp_2299.locale = (tmp_chpl15).locale;
  chpl_macro_tmp_2299.addr = (*((tmp_chpl15).addr) + INT64(4));
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_2299;
  deinit_chpl42(_field_destructor_tmp__chpl2);
  chpl_macro_tmp_2300.locale = (tmp_chpl15).locale;
  chpl_macro_tmp_2300.addr = (*((tmp_chpl15).addr) + INT64(3));
  _field_destructor_tmp__chpl3 = chpl_macro_tmp_2300;
  deinit_chpl42(_field_destructor_tmp__chpl3);
  chpl_macro_tmp_2301.locale = (tmp_chpl15).locale;
  chpl_macro_tmp_2301.addr = (*((tmp_chpl15).addr) + INT64(2));
  _field_destructor_tmp__chpl4 = chpl_macro_tmp_2301;
  deinit_chpl42(_field_destructor_tmp__chpl4);
  chpl_macro_tmp_2302.locale = (tmp_chpl15).locale;
  chpl_macro_tmp_2302.addr = (*((tmp_chpl15).addr) + INT64(1));
  _field_destructor_tmp__chpl5 = chpl_macro_tmp_2302;
  deinit_chpl42(_field_destructor_tmp__chpl5);
  chpl_macro_tmp_2303.locale = (tmp_chpl15).locale;
  chpl_macro_tmp_2303.addr = (*((tmp_chpl15).addr) + INT64(0));
  _field_destructor_tmp__chpl6 = chpl_macro_tmp_2303;
  deinit_chpl42(_field_destructor_tmp__chpl6);
  return;
}

/* IO.chpl:951 */
static void chpl__auto_destroy_QioPluginFile(chpl____wide_QioPluginFile this_chpl7) {
  return;
}

/* IO.chpl:959 */
static syserr setupChannel_chpl(QioPluginFile_chpl this_chpl7,
                                QioPluginChannel_chpl * pluginChannel_chpl,
                                int64_t start_chpl,
                                int64_t end_chpl,
                                qio_channel_ptr_t qioChannelPtr_chpl) {
  QioPluginChannel_chpl _formal_tmp_pluginChannel_chpl = NULL;
  syserr call_tmp_chpl36;
  _formal_tmp_pluginChannel_chpl = ((QioPluginChannel_chpl)(nil));
  call_tmp_chpl36 = qio_int_to_err(ENOSYS);
  *(pluginChannel_chpl) = _formal_tmp_pluginChannel_chpl;
  return call_tmp_chpl36;
}

/* IO.chpl:966 */
static syserr filelength_chpl(QioPluginFile_chpl this_chpl7,
                              int64_t * length_chpl) {
  syserr call_tmp_chpl36;
  call_tmp_chpl36 = qio_int_to_err(ENOSYS);
  *(length_chpl) = INT64(0);
  return call_tmp_chpl36;
}

/* IO.chpl:974 */
static syserr getpath_chpl(QioPluginFile_chpl this_chpl7,
                           c_string * path_chpl2,
                           int64_t * len_chpl) {
  c_string _formal_tmp_path_chpl;
  syserr call_tmp_chpl36;
  _formal_tmp_path_chpl = ((c_string)(nil));
  call_tmp_chpl36 = qio_int_to_err(ENOSYS);
  *(path_chpl2) = _formal_tmp_path_chpl;
  *(len_chpl) = INT64(0);
  return call_tmp_chpl36;
}

/* IO.chpl:979 */
static syserr fsync_chpl(QioPluginFile_chpl this_chpl7) {
  syserr call_tmp_chpl36;
  call_tmp_chpl36 = qio_int_to_err(ENOSYS);
  return call_tmp_chpl36;
}

/* IO.chpl:983 */
static syserr getChunk_chpl(QioPluginFile_chpl this_chpl7,
                            int64_t * length_chpl) {
  syserr call_tmp_chpl36;
  call_tmp_chpl36 = qio_int_to_err(ENOSYS);
  *(length_chpl) = INT64(0);
  return call_tmp_chpl36;
}

/* IO.chpl:989 */
static syserr getLocalesForRegion_chpl(QioPluginFile_chpl this_chpl7,
                                       int64_t start_chpl,
                                       int64_t end_chpl,
                                       c_ptr_c_string_chpl * localeNames_chpl,
                                       int64_t * nLocales_chpl) {
  c_ptr_c_string_chpl _formal_tmp_localeNames_chpl = NULL;
  syserr call_tmp_chpl36;
  _formal_tmp_localeNames_chpl = ((c_ptr_c_string_chpl)(nil));
  call_tmp_chpl36 = qio_int_to_err(ENOSYS);
  *(localeNames_chpl) = _formal_tmp_localeNames_chpl;
  return call_tmp_chpl36;
}

/* IO.chpl:995 */
static syserr close_chpl(QioPluginFile_chpl this_chpl7) {
  syserr call_tmp_chpl36;
  call_tmp_chpl36 = qio_int_to_err(ENOSYS);
  return call_tmp_chpl36;
}

/* IO.chpl:1003 */
static void chpl__auto_destroy_QioPluginChannel(chpl____wide_QioPluginChannel this_chpl7) {
  return;
}

/* IO.chpl:1005 */
static syserr readAtLeast_chpl(QioPluginChannel_chpl this_chpl7,
                               int64_t amt_chpl) {
  syserr call_tmp_chpl36;
  call_tmp_chpl36 = qio_int_to_err(ENOSYS);
  return call_tmp_chpl36;
}

/* IO.chpl:1009 */
static syserr write_chpl(QioPluginChannel_chpl this_chpl7,
                         int64_t amt_chpl) {
  syserr call_tmp_chpl36;
  call_tmp_chpl36 = qio_int_to_err(ENOSYS);
  return call_tmp_chpl36;
}

/* IO.chpl:1013 */
static syserr close_chpl2(QioPluginChannel_chpl this_chpl7) {
  syserr call_tmp_chpl36;
  call_tmp_chpl36 = qio_int_to_err(ENOSYS);
  return call_tmp_chpl36;
}

/* IO.chpl:1021 */
syserr chpl_qio_setup_plugin_channel(c_void_ptr file,
                                     c_void_ptr * plugin_ch,
                                     int64_t start,
                                     int64_t end,
                                     qio_channel_ptr_t qio_ch) {
  string_chpl local__str_literal_75_chpl;
  QioPluginFile_chpl call_tmp_chpl36 = NULL;
  QioPluginChannel_chpl pluginChannel_chpl = NULL;
  QioPluginChannel_chpl init_coerce_tmp_chpl3 = NULL;
  syserr call_tmp_chpl37;
  QioPluginChannel_chpl _formal_tmp_out_pluginChannel_chpl = NULL;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  call_tmp_chpl36 = ((QioPluginFile_chpl)(file));
  if (((object_chpl)(call_tmp_chpl36)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1022), INT32(77));
  }
  init_coerce_tmp_chpl3 = ((QioPluginChannel_chpl)(nil));
  pluginChannel_chpl = init_coerce_tmp_chpl3;
  chpl_check_nil(call_tmp_chpl36, INT64(1024), INT32(77));
  call_tmp_chpl37 = setupChannel_chpl(call_tmp_chpl36, &_formal_tmp_out_pluginChannel_chpl, start, end, qio_ch);
  pluginChannel_chpl = _formal_tmp_out_pluginChannel_chpl;
  *(plugin_ch) = ((c_void_ptr)(pluginChannel_chpl));
  return call_tmp_chpl37;
}

/* IO.chpl:1030 */
syserr chpl_qio_read_atleast(c_void_ptr ch_plugin,
                             int64_t amt) {
  string_chpl local__str_literal_75_chpl;
  QioPluginChannel_chpl call_tmp_chpl36 = NULL;
  syserr call_tmp_chpl37;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  call_tmp_chpl36 = ((QioPluginChannel_chpl)(ch_plugin));
  if (((object_chpl)(call_tmp_chpl36)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1031), INT32(77));
  }
  chpl_check_nil(call_tmp_chpl36, INT64(1032), INT32(77));
  call_tmp_chpl37 = readAtLeast_chpl(call_tmp_chpl36, amt);
  return call_tmp_chpl37;
}

/* IO.chpl:1035 */
syserr chpl_qio_write(c_void_ptr ch_plugin,
                      int64_t amt) {
  string_chpl local__str_literal_75_chpl;
  QioPluginChannel_chpl call_tmp_chpl36 = NULL;
  syserr call_tmp_chpl37;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  call_tmp_chpl36 = ((QioPluginChannel_chpl)(ch_plugin));
  if (((object_chpl)(call_tmp_chpl36)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1036), INT32(77));
  }
  chpl_check_nil(call_tmp_chpl36, INT64(1037), INT32(77));
  call_tmp_chpl37 = write_chpl(call_tmp_chpl36, amt);
  return call_tmp_chpl37;
}

/* IO.chpl:1040 */
syserr chpl_qio_channel_close(c_void_ptr ch) {
  string_chpl local__str_literal_75_chpl;
  QioPluginChannel_chpl call_tmp_chpl36 = NULL;
  QioPluginChannel_chpl c_chpl = NULL;
  syserr call_tmp_chpl37;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  call_tmp_chpl36 = ((QioPluginChannel_chpl)(ch));
  if (((object_chpl)(call_tmp_chpl36)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1041), INT32(77));
  }
  c_chpl = call_tmp_chpl36;
  chpl_check_nil(call_tmp_chpl36, INT64(1042), INT32(77));
  call_tmp_chpl37 = close_chpl2(call_tmp_chpl36);
  chpl__delete12(c_chpl);
  return call_tmp_chpl37;
}

/* IO.chpl:1048 */
syserr chpl_qio_filelength(c_void_ptr file,
                           int64_t * length) {
  string_chpl local__str_literal_75_chpl;
  QioPluginFile_chpl call_tmp_chpl36 = NULL;
  syserr call_tmp_chpl37;
  int64_t _formal_tmp_out_length_chpl;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  call_tmp_chpl36 = ((QioPluginFile_chpl)(file));
  if (((object_chpl)(call_tmp_chpl36)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1049), INT32(77));
  }
  chpl_check_nil(call_tmp_chpl36, INT64(1050), INT32(77));
  call_tmp_chpl37 = filelength_chpl(call_tmp_chpl36, &_formal_tmp_out_length_chpl);
  *(length) = _formal_tmp_out_length_chpl;
  return call_tmp_chpl37;
}

/* IO.chpl:1053 */
syserr chpl_qio_getpath(c_void_ptr file,
                        c_string * str,
                        int64_t * len) {
  string_chpl local__str_literal_75_chpl;
  QioPluginFile_chpl call_tmp_chpl36 = NULL;
  syserr call_tmp_chpl37;
  c_string _formal_tmp_out_path_chpl;
  int64_t _formal_tmp_out_len_chpl;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  call_tmp_chpl36 = ((QioPluginFile_chpl)(file));
  if (((object_chpl)(call_tmp_chpl36)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1054), INT32(77));
  }
  chpl_check_nil(call_tmp_chpl36, INT64(1055), INT32(77));
  call_tmp_chpl37 = getpath_chpl(call_tmp_chpl36, &_formal_tmp_out_path_chpl, &_formal_tmp_out_len_chpl);
  *(str) = _formal_tmp_out_path_chpl;
  *(len) = _formal_tmp_out_len_chpl;
  return call_tmp_chpl37;
}

/* IO.chpl:1058 */
syserr chpl_qio_fsync(c_void_ptr file) {
  string_chpl local__str_literal_75_chpl;
  QioPluginFile_chpl call_tmp_chpl36 = NULL;
  syserr call_tmp_chpl37;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  call_tmp_chpl36 = ((QioPluginFile_chpl)(file));
  if (((object_chpl)(call_tmp_chpl36)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1059), INT32(77));
  }
  chpl_check_nil(call_tmp_chpl36, INT64(1060), INT32(77));
  call_tmp_chpl37 = fsync_chpl(call_tmp_chpl36);
  return call_tmp_chpl37;
}

/* IO.chpl:1063 */
syserr chpl_qio_get_chunk(c_void_ptr file,
                          int64_t * length) {
  string_chpl local__str_literal_75_chpl;
  QioPluginFile_chpl call_tmp_chpl36 = NULL;
  syserr call_tmp_chpl37;
  int64_t _formal_tmp_out_length_chpl;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  call_tmp_chpl36 = ((QioPluginFile_chpl)(file));
  if (((object_chpl)(call_tmp_chpl36)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1064), INT32(77));
  }
  chpl_check_nil(call_tmp_chpl36, INT64(1065), INT32(77));
  call_tmp_chpl37 = getChunk_chpl(call_tmp_chpl36, &_formal_tmp_out_length_chpl);
  *(length) = _formal_tmp_out_length_chpl;
  return call_tmp_chpl37;
}

/* IO.chpl:1068 */
syserr chpl_qio_get_locales_for_region(c_void_ptr file,
                                       int64_t start,
                                       int64_t end,
                                       c_void_ptr * localeNames,
                                       int64_t * nLocales) {
  string_chpl local__str_literal_75_chpl;
  c_ptr_c_string_chpl strPtr_chpl = NULL;
  QioPluginFile_chpl call_tmp_chpl36 = NULL;
  syserr call_tmp_chpl37;
  c_ptr_c_string_chpl _formal_tmp_out_localeNames_chpl = NULL;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  call_tmp_chpl36 = ((QioPluginFile_chpl)(file));
  if (((object_chpl)(call_tmp_chpl36)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1071), INT32(77));
  }
  chpl_check_nil(call_tmp_chpl36, INT64(1072), INT32(77));
  call_tmp_chpl37 = getLocalesForRegion_chpl(call_tmp_chpl36, start, end, &_formal_tmp_out_localeNames_chpl, nLocales);
  strPtr_chpl = _formal_tmp_out_localeNames_chpl;
  *(localeNames) = ((c_void_ptr)(strPtr_chpl));
  return call_tmp_chpl37;
}

/* IO.chpl:1077 */
syserr chpl_qio_file_close(c_void_ptr file) {
  string_chpl local__str_literal_75_chpl;
  QioPluginFile_chpl call_tmp_chpl36 = NULL;
  QioPluginFile_chpl f_chpl = NULL;
  syserr call_tmp_chpl37;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  call_tmp_chpl36 = ((QioPluginFile_chpl)(file));
  if (((object_chpl)(call_tmp_chpl36)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1078), INT32(77));
  }
  f_chpl = call_tmp_chpl36;
  chpl_check_nil(call_tmp_chpl36, INT64(1079), INT32(77));
  call_tmp_chpl37 = close_chpl(call_tmp_chpl36);
  chpl__delete13(f_chpl);
  return call_tmp_chpl37;
}

/* IO.chpl:1338 */
static iostyleInternal defaultIOStyleInternal_chpl(void) {
  iostyleInternal ret_chpl;
  iostyleInternal ret_chpl2;
  memset(&ret_chpl2, INT32(0), sizeof(iostyleInternal));
  qio_style_init_default(&ret_chpl2);
  ret_chpl = ret_chpl2;
  return ret_chpl;
}

/* IO.chpl:1464 */
static void init_chpl75(file_chpl * this_chpl7) {
  chpl_localeID_t call_tmp_chpl36;
  int32_t call_tmp_chpl37;
  chpl_localeID_t call_tmp_chpl38;
  locale_chpl call_tmp_chpl39;
  locale_chpl ret_tmp_chpl;
  chpl____wide__ref_chpl_localeID_t tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  qio_file_ptr_t _file_internal_chpl;
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_2304;
  call_tmp_chpl37 = get_chpl_nodeID();
  call_tmp_chpl38 = chpl_rt_buildLocaleID(call_tmp_chpl37, c_sublocid_any);
  call_tmp_chpl36 = call_tmp_chpl38;
  chpl_macro_tmp_2304.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2304.addr = &call_tmp_chpl36;
  tmp_chpl15 = chpl_macro_tmp_2304;
  chpl_localeID_to_locale(tmp_chpl15, &ret_tmp_chpl);
  call_tmp_chpl39 = ret_tmp_chpl;
  (this_chpl7)->home = call_tmp_chpl39;
  _file_internal_chpl = QIO_FILE_PTR_NULL;
  (this_chpl7)->_file_internal = _file_internal_chpl;
  return;
}

/* IO.chpl:1500 */
static void checkAssumingLocal_chpl(file_chpl * this_chpl7,
                                    chpl____wide_Error * error_out_chpl) {
  string_chpl local__str_literal_1880_chpl;
  string_chpl local__str_literal_75_chpl;
  string_chpl local__str_literal_1879_chpl;
  qio_file_ptr_t coerce_tmp_chpl3;
  qio_file_ptr_t tmp_chpl15;
  _owned_SystemError_chpl call_tmp_chpl36;
  _owned_SystemError_chpl ret_tmp_chpl;
  chpl____wide_Error call_tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 coerce_tmp_chpl4;
  _owned_Error_chpl2 ret_tmp_chpl2;
  _ref__owned_SystemError_chpl i_x_chpl = NULL;
  _ref__owned_Error_chpl2 i__retArg_chpl = NULL;
  _owned_SystemError_chpl _formal_tmp_x_chpl;
  _owned_Error_chpl2 ret_chpl;
  _ref__owned_SystemError_chpl i_this_chpl = NULL;
  Error_chpl call_tmp_chpl38 = NULL;
  _ref__owned_SystemError_chpl i_this_chpl2 = NULL;
  _owned_Error_chpl2 call_tmp_chpl39;
  _owned_Error_chpl2 initTemp_chpl;
  chpl____wide_Error tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 _formal_tmp_in_err_chpl;
  chpl_bool call_tmp_chpl40;
  qio_file_ptr_t coerce_tmp_chpl5;
  qio_file_ptr_t tmp_chpl17;
  _owned_SystemError_chpl call_tmp_chpl41;
  _owned_SystemError_chpl ret_tmp_chpl3;
  chpl____wide_Error call_tmp_chpl42 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 coerce_tmp_chpl6;
  _owned_Error_chpl2 ret_tmp_chpl4;
  _ref__owned_SystemError_chpl i_x_chpl2 = NULL;
  _ref__owned_Error_chpl2 i__retArg_chpl2 = NULL;
  _owned_SystemError_chpl _formal_tmp_x_chpl2;
  _owned_Error_chpl2 ret_chpl2;
  _ref__owned_SystemError_chpl i_this_chpl3 = NULL;
  Error_chpl call_tmp_chpl43 = NULL;
  _ref__owned_SystemError_chpl i_this_chpl4 = NULL;
  _owned_Error_chpl2 call_tmp_chpl44;
  _owned_Error_chpl2 initTemp_chpl2;
  chpl____wide_Error tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 _formal_tmp_in_err_chpl2;
  chpl____wide_Error chpl_macro_tmp_2305;
  chpl____wide_Error chpl_macro_tmp_2306;
  local__str_literal_1880_chpl = _str_literal_1880_chpl /* "Operation attempted on closed file" */;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  local__str_literal_1879_chpl = _str_literal_1879_chpl /* "Operation attempted on an invalid file" */;
  tmp_chpl15 = (this_chpl7)->_file_internal;
  coerce_tmp_chpl3 = tmp_chpl15;
  if (((c_void_ptr)(coerce_tmp_chpl3)) == nil) {
    fromSyserr_chpl2(((int64_t)(EBADF)), &local__str_literal_1879_chpl, &ret_tmp_chpl, INT64(1502), INT32(77));
    call_tmp_chpl36 = ret_tmp_chpl;
    i_x_chpl = &call_tmp_chpl36;
    i__retArg_chpl = &ret_tmp_chpl2;
    _formal_tmp_x_chpl = *(i_x_chpl);
    i_this_chpl = &_formal_tmp_x_chpl;
    call_tmp_chpl38 = ((Error_chpl)((i_this_chpl)->chpl_p));
    i_this_chpl2 = &_formal_tmp_x_chpl;
    (i_this_chpl2)->chpl_p = ((SystemError_chpl)(nil));
    if (((object_chpl)(call_tmp_chpl38)) == nil) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1502), INT32(77));
    }
    chpl_macro_tmp_2305.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2305.addr = call_tmp_chpl38;
    tmp_chpl16 = chpl_macro_tmp_2305;
    init_chpl68(&initTemp_chpl, tmp_chpl16);
    call_tmp_chpl39 = initTemp_chpl;
    ret_chpl = call_tmp_chpl39;
    chpl__autoDestroy24(&_formal_tmp_x_chpl);
    *(i__retArg_chpl) = ret_chpl;
    coerce_tmp_chpl4 = ret_tmp_chpl2;
    _formal_tmp_in_err_chpl = coerce_tmp_chpl4;
    call_tmp_chpl37 = chpl_fix_thrown_error(&_formal_tmp_in_err_chpl, INT64(1502), INT32(77));
    *(error_out_chpl) = call_tmp_chpl37;
    goto _endcheckAssumingLocal_chpl;
  }
  tmp_chpl17 = (this_chpl7)->_file_internal;
  coerce_tmp_chpl5 = tmp_chpl17;
  call_tmp_chpl40 = qio_file_isopen(coerce_tmp_chpl5);
  if (! call_tmp_chpl40) {
    fromSyserr_chpl2(((int64_t)(EBADF)), &local__str_literal_1880_chpl, &ret_tmp_chpl3, INT64(1504), INT32(77));
    call_tmp_chpl41 = ret_tmp_chpl3;
    i_x_chpl2 = &call_tmp_chpl41;
    i__retArg_chpl2 = &ret_tmp_chpl4;
    _formal_tmp_x_chpl2 = *(i_x_chpl2);
    i_this_chpl3 = &_formal_tmp_x_chpl2;
    call_tmp_chpl43 = ((Error_chpl)((i_this_chpl3)->chpl_p));
    i_this_chpl4 = &_formal_tmp_x_chpl2;
    (i_this_chpl4)->chpl_p = ((SystemError_chpl)(nil));
    if (((object_chpl)(call_tmp_chpl43)) == nil) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1504), INT32(77));
    }
    chpl_macro_tmp_2306.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2306.addr = call_tmp_chpl43;
    tmp_chpl18 = chpl_macro_tmp_2306;
    init_chpl68(&initTemp_chpl2, tmp_chpl18);
    call_tmp_chpl44 = initTemp_chpl2;
    ret_chpl2 = call_tmp_chpl44;
    chpl__autoDestroy24(&_formal_tmp_x_chpl2);
    *(i__retArg_chpl2) = ret_chpl2;
    coerce_tmp_chpl6 = ret_tmp_chpl4;
    _formal_tmp_in_err_chpl2 = coerce_tmp_chpl6;
    call_tmp_chpl42 = chpl_fix_thrown_error(&_formal_tmp_in_err_chpl2, INT64(1504), INT32(77));
    *(error_out_chpl) = call_tmp_chpl42;
    goto _endcheckAssumingLocal_chpl;
  }
  _endcheckAssumingLocal_chpl:;
  return;
}

/* IO.chpl:1518 */
static void deinit_chpl44(file_chpl * this_chpl7) {
  string_chpl local__str_literal_75_chpl;
  _ref_locale_chpl call_tmp_chpl36 = NULL;
  chpl_localeID_t call_tmp_chpl37;
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  chpl____wide__ref_file tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl77 _args_foron_fn_chpl = NULL;
  _ref_file_chpl tmp_chpl17 = NULL;
  chpl____wide__ref_file tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  _ref_locale_chpl _field_destructor_tmp__chpl = NULL;
  chpl____wide__ref_locale tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object chpl_macro_tmp_2307;
  chpl____wide__nilType chpl_macro_tmp_2308;
  chpl____wide_object chpl_macro_tmp_2309;
  chpl____wide__ref_file chpl_macro_tmp_2310;
  chpl__class_localson_fn_chpl77_object chpl_macro_tmp_2311;
  chpl____wide__ref_file chpl_macro_tmp_2312;
  chpl____wide__ref_locale chpl_macro_tmp_2313;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  call_tmp_chpl36 = &((this_chpl7)->home);
  coerce_tmp_chpl3 = (call_tmp_chpl36)->_instance;
  chpl_macro_tmp_2307.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_2307.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_2307;
  chpl_macro_tmp_2308.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2308.addr = nil;
  chpl_macro_tmp_2309.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2309.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_2309;
  if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1519), INT32(77));
  }
  call_tmp_chpl37 = (&coerce_tmp_chpl3)->locale;
  chpl_rmem_consist_release(INT64(1519), INT32(77));
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
  if (isdirect_chpl) {
    chpl_macro_tmp_2310.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2310.addr = this_chpl7;
    tmp_chpl16 = chpl_macro_tmp_2310;
    on_fn_chpl77(tmp_chpl16);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl77)(&chpl_macro_tmp_2311));
    chpl_check_nil(_args_foron_fn_chpl, INT64(1519), INT32(77));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
    tmp_chpl17 = this_chpl7;
    chpl_macro_tmp_2312.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2312.addr = tmp_chpl17;
    tmp_chpl18 = chpl_macro_tmp_2312;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1519), INT32(77));
    (_args_foron_fn_chpl)->_1_this = tmp_chpl18;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl77_object);
    chpl_taskRunningCntDec(INT64(1519), INT32(77));
    /*** wrapon_fn_chpl77 ***/ chpl_executeOn(call_tmp_chpl37, INT32(89), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1519), INT32(77));
    chpl_taskRunningCntInc(INT64(1519), INT32(77));
  }
  chpl_rmem_consist_acquire(INT64(1519), INT32(77));
  _field_destructor_tmp__chpl = &((this_chpl7)->home);
  chpl_macro_tmp_2313.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2313.addr = _field_destructor_tmp__chpl;
  tmp_chpl19 = chpl_macro_tmp_2313;
  deinit_chpl14(tmp_chpl19);
  return;
}

/* IO.chpl:1519 */
static void on_fn_chpl77(chpl____wide__ref_file this_chpl7) {
  qio_file_ptr_t coerce_tmp_chpl3;
  qio_file_ptr_t tmp_chpl15;
  chpl____wide__ref_qio_file_ptr_t chpl_macro_tmp_2314;
  chpl____wide__ref_qio_file_ptr_t chpl_macro_tmp_2315;
  qio_file_ptr_t chpl_macro_tmp_2316;
  chpl_macro_tmp_2314.locale = (this_chpl7).locale;
  chpl_macro_tmp_2314.addr = &(((this_chpl7).addr)->_file_internal);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_2314).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2314).addr, sizeof(qio_file_ptr_t), COMMID(1), INT64(1520), INT64(77));
  coerce_tmp_chpl3 = tmp_chpl15;
  qio_file_release(coerce_tmp_chpl3);
  chpl_macro_tmp_2315.locale = (this_chpl7).locale;
  chpl_macro_tmp_2315.addr = &(((this_chpl7).addr)->_file_internal);
  chpl_macro_tmp_2316 = QIO_FILE_PTR_NULL;
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_2316)), chpl_nodeFromLocaleID((chpl_macro_tmp_2315).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2315).addr, sizeof(qio_file_ptr_t), COMMID(2), INT64(1521), INT64(77));
  return;
}

/* IO.chpl:1519 */
static void wrapon_fn_chpl77(_class_localson_fn_chpl77 c_chpl) {
  chpl____wide__ref_file _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1519), INT32(77));
  chpl_check_nil(c_chpl, INT64(1519), INT32(77));
  _1_this_chpl = (c_chpl)->_1_this;
  chpl_taskRunningCntInc(INT64(1519), INT32(77));
  on_fn_chpl77(_1_this_chpl);
  chpl_taskRunningCntDec(INT64(1519), INT32(77));
  chpl_rmem_consist_release(INT64(1519), INT32(77));
  return;
}

/* IO.chpl:1550 */
static iostyleInternal _style_chpl(file_chpl * this_chpl7,
                                   chpl____wide_Error * error_out_chpl) {
  string_chpl local__str_literal_75_chpl;
  iostyleInternal ret_chpl;
  iostyleInternal ret_chpl2;
  _ref_locale_chpl call_tmp_chpl36 = NULL;
  chpl_localeID_t call_tmp_chpl37;
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  file_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_iostyleInternal tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_Error tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl78 _args_foron_fn_chpl = NULL;
  _ref_iostyleInternal_chpl tmp_chpl18 = NULL;
  chpl____wide__ref_iostyleInternal tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl20 = NULL;
  chpl____wide__ref__wide_Error tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_object chpl_macro_tmp_2317;
  chpl____wide__nilType chpl_macro_tmp_2318;
  chpl____wide_object chpl_macro_tmp_2319;
  chpl____wide__nilType chpl_macro_tmp_2320;
  chpl____wide_Error chpl_macro_tmp_2321;
  chpl____wide__ref_iostyleInternal chpl_macro_tmp_2322;
  chpl____wide__ref__wide_Error chpl_macro_tmp_2323;
  chpl__class_localson_fn_chpl78_object chpl_macro_tmp_2324;
  chpl____wide__ref_iostyleInternal chpl_macro_tmp_2325;
  chpl____wide__ref__wide_Error chpl_macro_tmp_2326;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  memset(&ret_chpl2, INT32(0), sizeof(iostyleInternal));
  call_tmp_chpl36 = &((this_chpl7)->home);
  coerce_tmp_chpl3 = (call_tmp_chpl36)->_instance;
  chpl_macro_tmp_2317.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_2317.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_2317;
  chpl_macro_tmp_2318.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2318.addr = nil;
  chpl_macro_tmp_2319.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2319.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_2319;
  if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1552), INT32(77));
  }
  call_tmp_chpl37 = (&coerce_tmp_chpl3)->locale;
  chpl_rmem_consist_release(INT64(1552), INT32(77));
  chpl_macro_tmp_2320.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2320.addr = nil;
  chpl_macro_tmp_2321.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2321.addr = NULL;
  error_chpl = chpl_macro_tmp_2321;
  rvfDerefTmp_chpl = *(this_chpl7);
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
  if (isdirect_chpl) {
    chpl_macro_tmp_2322.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2322.addr = &ret_chpl2;
    tmp_chpl16 = chpl_macro_tmp_2322;
    chpl_macro_tmp_2323.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2323.addr = &error_chpl;
    tmp_chpl17 = chpl_macro_tmp_2323;
    on_fn_chpl78(&rvfDerefTmp_chpl, tmp_chpl16, tmp_chpl17);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl78)(&chpl_macro_tmp_2324));
    chpl_check_nil(_args_foron_fn_chpl, INT64(1552), INT32(77));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1552), INT32(77));
    (_args_foron_fn_chpl)->_1_rvfDerefTmp = rvfDerefTmp_chpl;
    tmp_chpl18 = &ret_chpl2;
    chpl_macro_tmp_2325.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2325.addr = tmp_chpl18;
    tmp_chpl19 = chpl_macro_tmp_2325;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1552), INT32(77));
    (_args_foron_fn_chpl)->_2_ret = tmp_chpl19;
    tmp_chpl20 = &error_chpl;
    chpl_macro_tmp_2326.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2326.addr = tmp_chpl20;
    tmp_chpl21 = chpl_macro_tmp_2326;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1552), INT32(77));
    (_args_foron_fn_chpl)->_3_error = tmp_chpl21;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl78_object);
    chpl_taskRunningCntDec(INT64(1552), INT32(77));
    /*** wrapon_fn_chpl78 ***/ chpl_executeOn(call_tmp_chpl37, INT32(90), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1552), INT32(77));
    chpl_taskRunningCntInc(INT64(1552), INT32(77));
  }
  if ((&error_chpl)->addr != nil) {
    *(error_out_chpl) = error_chpl;
    goto _end__style_chpl;
  }
  chpl_rmem_consist_acquire(INT64(1552), INT32(77));
  ret_chpl = ret_chpl2;
  _end__style_chpl:;
  return ret_chpl;
}

/* IO.chpl:1552 */
static void on_fn_chpl78(file_chpl * this_chpl7,
                         chpl____wide__ref_iostyleInternal ret_chpl,
                         chpl____wide__ref__wide_Error error_out_chpl) {
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_file_chpl rvfRerefTmp_chpl = NULL;
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  iostyleInternal local_style_chpl;
  qio_file_ptr_t coerce_tmp_chpl3;
  qio_file_ptr_t tmp_chpl16;
  _ref_iostyleInternal_chpl i__arg2_chpl = NULL;
  chpl____wide__nilType chpl_macro_tmp_2327;
  chpl____wide_Error chpl_macro_tmp_2328;
  chpl_macro_tmp_2327.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2327.addr = nil;
  chpl_macro_tmp_2328.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2328.addr = NULL;
  error_chpl = chpl_macro_tmp_2328;
  rvfRerefTmp_chpl = this_chpl7;
  tmp_chpl15 = &error_chpl;
  checkAssumingLocal_chpl(rvfRerefTmp_chpl, tmp_chpl15);
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    chpl_gen_comm_put(((void*)(&error_chpl)), chpl_nodeFromLocaleID((error_out_chpl).locale, INT64(0), INT32(0)), (error_out_chpl).addr, sizeof(chpl____wide_Error), COMMID(3), INT64(1553), INT64(77));
    goto _endon_fn_chpl;
  }
  memset(&local_style_chpl, INT32(0), sizeof(iostyleInternal));
  tmp_chpl16 = (this_chpl7)->_file_internal;
  coerce_tmp_chpl3 = tmp_chpl16;
  qio_file_get_style(coerce_tmp_chpl3, &local_style_chpl);
  i__arg2_chpl = &local_style_chpl;
  chpl_gen_comm_put(((void*)(i__arg2_chpl)), chpl_nodeFromLocaleID((ret_chpl).locale, INT64(0), INT32(0)), (ret_chpl).addr, sizeof(iostyleInternal), COMMID(4), INT64(1556), INT64(77));
  _endon_fn_chpl:;
  return;
}

/* IO.chpl:1552 */
static void wrapon_fn_chpl78(_class_localson_fn_chpl78 c_chpl) {
  file_chpl _1_rvfDerefTmp_chpl;
  file_chpl tmp_chpl15;
  chpl____wide__ref_iostyleInternal _2_ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_Error _3_error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1552), INT32(77));
  chpl_check_nil(c_chpl, INT64(1552), INT32(77));
  tmp_chpl15 = (c_chpl)->_1_rvfDerefTmp;
  _1_rvfDerefTmp_chpl = tmp_chpl15;
  chpl_check_nil(c_chpl, INT64(1552), INT32(77));
  _2_ret_chpl = (c_chpl)->_2_ret;
  chpl_check_nil(c_chpl, INT64(1552), INT32(77));
  _3_error_chpl = (c_chpl)->_3_error;
  chpl_taskRunningCntInc(INT64(1552), INT32(77));
  on_fn_chpl78(&_1_rvfDerefTmp_chpl, _2_ret_chpl, _3_error_chpl);
  chpl_taskRunningCntDec(INT64(1552), INT32(77));
  chpl_rmem_consist_release(INT64(1552), INT32(77));
  return;
}

/* IO.chpl:1628 */
static void path_chpl(file_chpl * this_chpl7,
                      chpl____wide_Error * error_out_chpl,
                      string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_1886_chpl;
  string_chpl local__str_literal_75_chpl;
  string_chpl ret_chpl;
  string_chpl ret_chpl2;
  syserr err_chpl;
  syserr call_tmp_chpl36;
  _ref_locale_chpl call_tmp_chpl37 = NULL;
  chpl_localeID_t call_tmp_chpl38;
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  file_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_syserr tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_Error tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl79 _args_foron_fn_chpl = NULL;
  _ref_string_chpl tmp_chpl19 = NULL;
  chpl____wide__ref_string tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_syserr_chpl tmp_chpl21 = NULL;
  chpl____wide__ref_syserr tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl23 = NULL;
  chpl____wide__ref__wide_Error tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl25 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t call_tmp_chpl39;
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl26 = NULL;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object chpl_macro_tmp_2329;
  chpl____wide__nilType chpl_macro_tmp_2330;
  chpl____wide_object chpl_macro_tmp_2331;
  chpl____wide__nilType chpl_macro_tmp_2332;
  chpl____wide_Error chpl_macro_tmp_2333;
  chpl____wide__ref_string chpl_macro_tmp_2334;
  chpl____wide__ref_syserr chpl_macro_tmp_2335;
  chpl____wide__ref__wide_Error chpl_macro_tmp_2336;
  chpl__class_localson_fn_chpl79_object chpl_macro_tmp_2337;
  chpl____wide__ref_string chpl_macro_tmp_2338;
  chpl____wide__ref_syserr chpl_macro_tmp_2339;
  chpl____wide__ref__wide_Error chpl_macro_tmp_2340;
  chpl____wide__ref_string chpl_macro_tmp_2341;
  chpl____wide__nilType chpl_macro_tmp_2342;
  chpl____wide_Error chpl_macro_tmp_2343;
  chpl____wide__ref_string chpl_macro_tmp_2344;
  local__str_literal_1886_chpl = _str_literal_1886_chpl /* "in file.path" */;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  init_chpl73(&ret_chpl2);
  call_tmp_chpl36 = qio_int_to_err(INT32(0));
  err_chpl = call_tmp_chpl36;
  call_tmp_chpl37 = &((this_chpl7)->home);
  coerce_tmp_chpl3 = (call_tmp_chpl37)->_instance;
  chpl_macro_tmp_2329.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_2329.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_2329;
  chpl_macro_tmp_2330.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2330.addr = nil;
  chpl_macro_tmp_2331.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2331.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_2331;
  if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1631), INT32(77));
  }
  call_tmp_chpl38 = (&coerce_tmp_chpl3)->locale;
  chpl_rmem_consist_release(INT64(1631), INT32(77));
  chpl_macro_tmp_2332.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2332.addr = nil;
  chpl_macro_tmp_2333.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2333.addr = NULL;
  error_chpl = chpl_macro_tmp_2333;
  rvfDerefTmp_chpl = *(this_chpl7);
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl38);
  if (isdirect_chpl) {
    chpl_macro_tmp_2334.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2334.addr = &ret_chpl2;
    tmp_chpl16 = chpl_macro_tmp_2334;
    chpl_macro_tmp_2335.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2335.addr = &err_chpl;
    tmp_chpl17 = chpl_macro_tmp_2335;
    chpl_macro_tmp_2336.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2336.addr = &error_chpl;
    tmp_chpl18 = chpl_macro_tmp_2336;
    on_fn_chpl79(&rvfDerefTmp_chpl, tmp_chpl16, tmp_chpl17, tmp_chpl18);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl79)(&chpl_macro_tmp_2337));
    chpl_check_nil(_args_foron_fn_chpl, INT64(1631), INT32(77));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl38;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1631), INT32(77));
    (_args_foron_fn_chpl)->_1_rvfDerefTmp = rvfDerefTmp_chpl;
    tmp_chpl19 = &ret_chpl2;
    chpl_macro_tmp_2338.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2338.addr = tmp_chpl19;
    tmp_chpl20 = chpl_macro_tmp_2338;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1631), INT32(77));
    (_args_foron_fn_chpl)->_2_ret = tmp_chpl20;
    tmp_chpl21 = &err_chpl;
    chpl_macro_tmp_2339.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2339.addr = tmp_chpl21;
    tmp_chpl22 = chpl_macro_tmp_2339;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1631), INT32(77));
    (_args_foron_fn_chpl)->_3_err = tmp_chpl22;
    tmp_chpl23 = &error_chpl;
    chpl_macro_tmp_2340.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2340.addr = tmp_chpl23;
    tmp_chpl24 = chpl_macro_tmp_2340;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1631), INT32(77));
    (_args_foron_fn_chpl)->_4_error = tmp_chpl24;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl79_object);
    chpl_taskRunningCntDec(INT64(1631), INT32(77));
    /*** wrapon_fn_chpl79 ***/ chpl_executeOn(call_tmp_chpl38, INT32(91), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1631), INT32(77));
    chpl_taskRunningCntInc(INT64(1631), INT32(77));
  }
  if ((&error_chpl)->addr != nil) {
    *(error_out_chpl) = error_chpl;
    i_x_chpl = &ret_chpl2;
    chpl_macro_tmp_2341.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2341.addr = i_x_chpl;
    tmp_chpl25 = chpl_macro_tmp_2341;
    deinit_chpl42(tmp_chpl25);
    goto _end_path_chpl;
  }
  chpl_rmem_consist_acquire(INT64(1631), INT32(77));
  call_tmp_chpl39 = qio_err_iserr(err_chpl);
  if (call_tmp_chpl39 != INT32(0)) {
    chpl_macro_tmp_2342.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2342.addr = nil;
    chpl_macro_tmp_2343.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2343.addr = NULL;
    error_chpl2 = chpl_macro_tmp_2343;
    tmp_chpl26 = &error_chpl2;
    ioerror_chpl3(err_chpl, &local__str_literal_1886_chpl, tmp_chpl26, INT64(1646), INT32(77));
    if ((&error_chpl2)->addr != nil) {
      goto handler_chpl;
    }
    handler_chpl:;
    if ((&error_chpl2)->addr != nil) {
      *(error_out_chpl) = error_chpl2;
      i_x_chpl2 = &ret_chpl2;
      chpl_macro_tmp_2344.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2344.addr = i_x_chpl2;
      tmp_chpl27 = chpl_macro_tmp_2344;
      deinit_chpl42(tmp_chpl27);
      goto _end_path_chpl;
    }
  }
  ret_chpl = ret_chpl2;
  _end_path_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:1631 */
static void on_fn_chpl79(file_chpl * this_chpl7,
                         chpl____wide__ref_string ret_chpl,
                         chpl____wide__ref_syserr err_chpl,
                         chpl____wide__ref__wide_Error error_out_chpl) {
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_file_chpl rvfRerefTmp_chpl = NULL;
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  c_string tmp_chpl16;
  c_string tmp2_chpl;
  syserr call_tmp_chpl36;
  qio_file_ptr_t coerce_tmp_chpl3;
  qio_file_ptr_t tmp_chpl17;
  syserr tmp_chpl18;
  int32_t call_tmp_chpl37;
  syserr call_tmp_chpl38;
  qio_file_ptr_t coerce_tmp_chpl4;
  qio_file_ptr_t tmp_chpl19;
  _ref_c_string_chpl i_cs_chpl = NULL;
  int64_t call_tmp_chpl39;
  syserr tmp_chpl20;
  int32_t call_tmp_chpl40;
  string_chpl call_tmp_chpl41;
  Error_chpl error_chpl2 = NULL;
  int64_t call_tmp_chpl42;
  chpl____wide_Error tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error error_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl2;
  chpl____wide_Error error_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl3;
  string_chpl call_tmp_chpl43;
  chpl____wide_Error error_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_tmp_chpl;
  _ref__wide_Error_chpl tmp_chpl22 = NULL;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_c_string_chpl i_cs_chpl2 = NULL;
  int64_t call_tmp_chpl44;
  chpl____wide__nilType chpl_macro_tmp_2345;
  chpl____wide_Error chpl_macro_tmp_2346;
  chpl____wide_Error chpl_macro_tmp_2347;
  chpl____wide__nilType chpl_macro_tmp_2348;
  chpl____wide_Error chpl_macro_tmp_2349;
  chpl____wide__nilType chpl_macro_tmp_2350;
  chpl____wide_Error chpl_macro_tmp_2351;
  chpl____wide__nilType chpl_macro_tmp_2352;
  chpl____wide_Error chpl_macro_tmp_2353;
  chpl____wide__ref_string chpl_macro_tmp_2354;
  chpl_macro_tmp_2345.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2345.addr = nil;
  chpl_macro_tmp_2346.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2346.addr = NULL;
  error_chpl = chpl_macro_tmp_2346;
  rvfRerefTmp_chpl = this_chpl7;
  tmp_chpl15 = &error_chpl;
  checkAssumingLocal_chpl(rvfRerefTmp_chpl, tmp_chpl15);
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    chpl_gen_comm_put(((void*)(&error_chpl)), chpl_nodeFromLocaleID((error_out_chpl).locale, INT64(0), INT32(0)), (error_out_chpl).addr, sizeof(chpl____wide_Error), COMMID(5), INT64(1632), INT64(77));
    goto _endon_fn_chpl;
  }
  tmp_chpl16 = ((c_string)(nil));
  tmp2_chpl = ((c_string)(nil));
  tmp_chpl17 = (this_chpl7)->_file_internal;
  coerce_tmp_chpl3 = tmp_chpl17;
  call_tmp_chpl36 = qio_file_path(coerce_tmp_chpl3, &tmp_chpl16);
  chpl_gen_comm_put(((void*)(&call_tmp_chpl36)), chpl_nodeFromLocaleID((err_chpl).locale, INT64(0), INT32(0)), (err_chpl).addr, sizeof(syserr), COMMID(6), INT64(1635), INT64(77));
  chpl_gen_comm_get(((void*)(&tmp_chpl18)), chpl_nodeFromLocaleID((err_chpl).locale, INT64(0), INT32(0)), (err_chpl).addr, sizeof(syserr), COMMID(7), INT64(1636), INT64(77));
  call_tmp_chpl37 = qio_err_iserr(tmp_chpl18);
  if (call_tmp_chpl37 == INT32(0)) {
    tmp_chpl19 = (this_chpl7)->_file_internal;
    coerce_tmp_chpl4 = tmp_chpl19;
    call_tmp_chpl38 = qio_shortest_path(coerce_tmp_chpl4, &tmp2_chpl, tmp_chpl16);
    chpl_gen_comm_put(((void*)(&call_tmp_chpl38)), chpl_nodeFromLocaleID((err_chpl).locale, INT64(0), INT32(0)), (err_chpl).addr, sizeof(syserr), COMMID(8), INT64(1637), INT64(77));
  }
  i_cs_chpl = &tmp_chpl16;
  call_tmp_chpl39 = string_compare(tmp_chpl16, ((c_string)(nil)));
  if (call_tmp_chpl39 != INT64(0)) {
    chpl_rt_free_c_string(i_cs_chpl, INT64(1639), INT32(77));
  }
  chpl_gen_comm_get(((void*)(&tmp_chpl20)), chpl_nodeFromLocaleID((err_chpl).locale, INT64(0), INT32(0)), (err_chpl).addr, sizeof(syserr), COMMID(9), INT64(1640), INT64(77));
  call_tmp_chpl40 = qio_err_iserr(tmp_chpl20);
  if (call_tmp_chpl40 == INT32(0)) {
    error_chpl2 = NULL;
    call_tmp_chpl42 = string_length_bytes(tmp2_chpl);
    if (error_chpl2 != nil) {
      chpl_macro_tmp_2347.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2347.addr = error_chpl2;
      tmp_chpl21 = chpl_macro_tmp_2347;
      chpl_gen_comm_put(((void*)(&tmp_chpl21)), chpl_nodeFromLocaleID((error_out_chpl).locale, INT64(0), INT32(0)), (error_out_chpl).addr, sizeof(chpl____wide_Error), COMMID(10), INT64(1641), INT64(77));
      goto _endon_fn_chpl;
    }
    chpl_macro_tmp_2348.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2348.addr = nil;
    chpl_macro_tmp_2349.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2349.addr = NULL;
    error_chpl3 = chpl_macro_tmp_2349;
    chpl_macro_tmp_2350.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2350.addr = nil;
    chpl_macro_tmp_2351.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2351.addr = NULL;
    error_chpl4 = chpl_macro_tmp_2351;
    chpl_macro_tmp_2352.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2352.addr = nil;
    chpl_macro_tmp_2353.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2353.addr = NULL;
    error_chpl5 = chpl_macro_tmp_2353;
    tmp_chpl22 = &error_chpl5;
    decodeByteBuffer_chpl(((c_ptr_uint8_t_chpl)(tmp2_chpl)), call_tmp_chpl42, decodePolicy_chpl_escape_chpl, tmp_chpl22, &ret_tmp_chpl);
    call_tmp_chpl43 = ret_tmp_chpl;
    if ((&error_chpl5)->addr != nil) {
      error_chpl4 = error_chpl5;
      goto _endcreateStringWithNewBuffer_chpl;
    }
    ret_chpl3 = call_tmp_chpl43;
    _endcreateStringWithNewBuffer_chpl:;
    if ((&error_chpl4)->addr != nil) {
      error_chpl3 = error_chpl4;
      goto _endcreateStringWithNewBuffer_chpl2;
    }
    ret_chpl2 = ret_chpl3;
    _endcreateStringWithNewBuffer_chpl2:;
    call_tmp_chpl41 = ret_chpl2;
    if ((&error_chpl3)->addr != nil) {
      chpl_gen_comm_put(((void*)(&error_chpl3)), chpl_nodeFromLocaleID((error_out_chpl).locale, INT64(0), INT32(0)), (error_out_chpl).addr, sizeof(chpl____wide_Error), COMMID(11), INT64(1641), INT64(77));
      goto _endon_fn_chpl;
    }
    chpl___ASSIGN_6(ret_chpl, &call_tmp_chpl41);
    i_x_chpl = &call_tmp_chpl41;
    chpl_macro_tmp_2354.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2354.addr = i_x_chpl;
    tmp_chpl23 = chpl_macro_tmp_2354;
    deinit_chpl42(tmp_chpl23);
  }
  i_cs_chpl2 = &tmp2_chpl;
  call_tmp_chpl44 = string_compare(tmp2_chpl, ((c_string)(nil)));
  if (call_tmp_chpl44 != INT64(0)) {
    chpl_rt_free_c_string(i_cs_chpl2, INT64(1644), INT32(77));
  }
  _endon_fn_chpl:;
  return;
}

/* IO.chpl:1631 */
static void wrapon_fn_chpl79(_class_localson_fn_chpl79 c_chpl) {
  file_chpl _1_rvfDerefTmp_chpl;
  file_chpl tmp_chpl15;
  chpl____wide__ref_string _2_ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_syserr _3_err_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_Error _4_error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1631), INT32(77));
  chpl_check_nil(c_chpl, INT64(1631), INT32(77));
  tmp_chpl15 = (c_chpl)->_1_rvfDerefTmp;
  _1_rvfDerefTmp_chpl = tmp_chpl15;
  chpl_check_nil(c_chpl, INT64(1631), INT32(77));
  _2_ret_chpl = (c_chpl)->_2_ret;
  chpl_check_nil(c_chpl, INT64(1631), INT32(77));
  _3_err_chpl = (c_chpl)->_3_err;
  chpl_check_nil(c_chpl, INT64(1631), INT32(77));
  _4_error_chpl = (c_chpl)->_4_error;
  chpl_taskRunningCntInc(INT64(1631), INT32(77));
  on_fn_chpl79(&_1_rvfDerefTmp_chpl, _2_ret_chpl, _3_err_chpl, _4_error_chpl);
  chpl_taskRunningCntDec(INT64(1631), INT32(77));
  chpl_rmem_consist_release(INT64(1631), INT32(77));
  return;
}

/* IO.chpl:1656 */
static void tryGetPath_chpl(file_chpl * this_chpl7,
                            string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_1888_chpl;
  string_chpl ret_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  chpl____wide_Error call_tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 call_tmp_chpl38;
  _owned_Error_chpl2 initTemp_chpl;
  _owned_Error_chpl2 chpl_anon_error;
  string_chpl inlineImm_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  string_chpl ret_chpl2;
  string_chpl tmp_chpl16;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__nilType chpl_macro_tmp_2355;
  chpl____wide_Error chpl_macro_tmp_2356;
  chpl____wide__ref_string chpl_macro_tmp_2357;
  local__str_literal_1888_chpl = _str_literal_1888_chpl /* "unknown" */;
  chpl_macro_tmp_2355.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2355.addr = nil;
  chpl_macro_tmp_2356.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2356.addr = NULL;
  error_chpl = chpl_macro_tmp_2356;
  tmp_chpl15 = &error_chpl;
  path_chpl(this_chpl7, tmp_chpl15, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  ret_chpl = call_tmp_chpl36;
  goto _end_tryGetPath_chpl;
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    call_tmp_chpl37 = error_chpl;
    init_chpl68(&initTemp_chpl, call_tmp_chpl37);
    call_tmp_chpl38 = initTemp_chpl;
    chpl_anon_error = call_tmp_chpl38;
    inlineImm_chpl = local__str_literal_1888_chpl;
    i_x_chpl = &inlineImm_chpl;
    chpl_macro_tmp_2357.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2357.addr = i_x_chpl;
    tmp_chpl17 = chpl_macro_tmp_2357;
    init_ASSIGN__chpl21(&tmp_chpl16, tmp_chpl17);
    ret_chpl2 = tmp_chpl16;
    ret_chpl = ret_chpl2;
    chpl__autoDestroy19(&chpl_anon_error);
    goto _end_tryGetPath_chpl;
  }
  _end_tryGetPath_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:1838 */
static void openfd_chpl(int32_t fd_chpl,
                        int32_t hints_chpl,
                        chpl____wide_Error * error_out_chpl,
                        file_chpl * _retArg_chpl) {
  file_chpl ret_chpl;
  file_chpl call_tmp_chpl36;
  iostyleInternal default_arg_style_chpl;
  Error_chpl error_chpl = NULL;
  iostyleInternal style_chpl;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  file_chpl ret_tmp_chpl;
  _ref__wide_Error_chpl tmp_chpl16 = NULL;
  chpl____wide_Error chpl_macro_tmp_2358;
  chpl____wide__nilType chpl_macro_tmp_2359;
  chpl____wide_Error chpl_macro_tmp_2360;
  error_chpl = NULL;
  style_chpl = defaultIOStyleInternal_chpl();
  default_arg_style_chpl = style_chpl;
  if (error_chpl != nil) {
    chpl_macro_tmp_2358.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2358.addr = error_chpl;
    tmp_chpl15 = chpl_macro_tmp_2358;
    *(error_out_chpl) = tmp_chpl15;
    goto _endopenfd_chpl;
  }
  chpl_macro_tmp_2359.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2359.addr = nil;
  chpl_macro_tmp_2360.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2360.addr = NULL;
  error_chpl2 = chpl_macro_tmp_2360;
  tmp_chpl16 = &error_chpl2;
  openfdHelper_chpl(fd_chpl, hints_chpl, &default_arg_style_chpl, tmp_chpl16, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  if ((&error_chpl2)->addr != nil) {
    *(error_out_chpl) = error_chpl2;
    goto _endopenfd_chpl;
  }
  ret_chpl = call_tmp_chpl36;
  _endopenfd_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:1842 */
static void openfdHelper_chpl(int32_t fd_chpl,
                              int32_t hints_chpl,
                              iostyleInternal * style_chpl,
                              chpl____wide_Error * error_out_chpl,
                              file_chpl * _retArg_chpl) {
  string_chpl local__str_literal_1904_chpl;
  string_chpl local__str_literal_1888_chpl;
  file_chpl ret_chpl;
  iostyleInternal local_style_chpl;
  file_chpl ret_chpl2;
  _ref_locale_chpl call_tmp_chpl36 = NULL;
  locale_chpl call_tmp_chpl37;
  chpl_localeID_t call_tmp_chpl38;
  int32_t call_tmp_chpl39;
  chpl_localeID_t call_tmp_chpl40;
  locale_chpl call_tmp_chpl41;
  locale_chpl ret_tmp_chpl;
  chpl____wide__ref_chpl_localeID_t tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl i_x_chpl = NULL;
  chpl____wide__ref_locale tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_qio_file_ptr_t_chpl call_tmp_chpl42 = NULL;
  _cfile call_tmp_chpl43;
  syserr call_tmp_chpl44;
  int32_t call_tmp_chpl45;
  c_string path_cs_chpl;
  syserr call_tmp_chpl46;
  string_chpl path_chpl2;
  string_chpl tmp_chpl19;
  int32_t call_tmp_chpl47;
  string_chpl inlineImm_chpl;
  _ref_string_chpl i_x_chpl2 = NULL;
  string_chpl ret_chpl3;
  string_chpl tmp_chpl20;
  chpl____wide__ref_string tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl error_chpl = NULL;
  int64_t call_tmp_chpl48;
  chpl____wide_Error tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_file_chpl i_x_chpl3 = NULL;
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl4;
  chpl____wide_Error error_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl5;
  string_chpl call_tmp_chpl49;
  chpl____wide_Error error_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_tmp_chpl2;
  _ref__wide_Error_chpl tmp_chpl23 = NULL;
  _ref_file_chpl i_x_chpl4 = NULL;
  chpl____wide_Error error_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl24 = NULL;
  _ref_string_chpl i_x_chpl5 = NULL;
  chpl____wide__ref_string tmp_chpl25 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_file_chpl i_x_chpl6 = NULL;
  _ref_string_chpl i_x_chpl7 = NULL;
  chpl____wide__ref_string tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_2361;
  chpl____wide__ref_locale chpl_macro_tmp_2362;
  chpl____wide__ref_locale chpl_macro_tmp_2363;
  chpl____wide__ref_locale chpl_macro_tmp_2364;
  chpl____wide__ref_string chpl_macro_tmp_2365;
  chpl____wide_Error chpl_macro_tmp_2366;
  chpl____wide__nilType chpl_macro_tmp_2367;
  chpl____wide_Error chpl_macro_tmp_2368;
  chpl____wide__nilType chpl_macro_tmp_2369;
  chpl____wide_Error chpl_macro_tmp_2370;
  chpl____wide__nilType chpl_macro_tmp_2371;
  chpl____wide_Error chpl_macro_tmp_2372;
  chpl____wide__nilType chpl_macro_tmp_2373;
  chpl____wide_Error chpl_macro_tmp_2374;
  chpl____wide__ref_string chpl_macro_tmp_2375;
  chpl____wide__ref_string chpl_macro_tmp_2376;
  local__str_literal_1904_chpl = _str_literal_1904_chpl /* "in openfd" */;
  local__str_literal_1888_chpl = _str_literal_1888_chpl /* "unknown" */;
  local_style_chpl = *(style_chpl);
  init_chpl75(&ret_chpl2);
  call_tmp_chpl36 = &((&ret_chpl2)->home);
  call_tmp_chpl39 = get_chpl_nodeID();
  call_tmp_chpl40 = chpl_rt_buildLocaleID(call_tmp_chpl39, c_sublocid_any);
  call_tmp_chpl38 = call_tmp_chpl40;
  chpl_macro_tmp_2361.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2361.addr = &call_tmp_chpl38;
  tmp_chpl15 = chpl_macro_tmp_2361;
  chpl_localeID_to_locale(tmp_chpl15, &ret_tmp_chpl);
  call_tmp_chpl41 = ret_tmp_chpl;
  call_tmp_chpl37 = call_tmp_chpl41;
  chpl_macro_tmp_2362.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2362.addr = call_tmp_chpl36;
  tmp_chpl16 = chpl_macro_tmp_2362;
  chpl_macro_tmp_2363.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2363.addr = &call_tmp_chpl37;
  tmp_chpl17 = chpl_macro_tmp_2363;
  chpl___ASSIGN_2(tmp_chpl16, tmp_chpl17);
  i_x_chpl = &call_tmp_chpl37;
  chpl_macro_tmp_2364.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2364.addr = i_x_chpl;
  tmp_chpl18 = chpl_macro_tmp_2364;
  deinit_chpl14(tmp_chpl18);
  call_tmp_chpl42 = &((&ret_chpl2)->_file_internal);
  call_tmp_chpl43 = chpl_cnullfile();
  call_tmp_chpl44 = qio_file_init(call_tmp_chpl42, call_tmp_chpl43, fd_chpl, hints_chpl, &local_style_chpl, ((int32_t)(INT64(0))));
  call_tmp_chpl45 = qio_err_iserr(call_tmp_chpl44);
  if (call_tmp_chpl45 != INT32(0)) {
    path_cs_chpl = ((c_string)(nil));
    call_tmp_chpl46 = qio_file_path_for_fd(fd_chpl, &path_cs_chpl);
    call_tmp_chpl47 = qio_err_iserr(call_tmp_chpl46);
    if (call_tmp_chpl47 != INT32(0)) {
      inlineImm_chpl = local__str_literal_1888_chpl;
      i_x_chpl2 = &inlineImm_chpl;
      chpl_macro_tmp_2365.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2365.addr = i_x_chpl2;
      tmp_chpl21 = chpl_macro_tmp_2365;
      init_ASSIGN__chpl21(&tmp_chpl20, tmp_chpl21);
      ret_chpl3 = tmp_chpl20;
      tmp_chpl19 = ret_chpl3;
    } else {
      error_chpl = NULL;
      call_tmp_chpl48 = string_length_bytes(path_cs_chpl);
      if (error_chpl != nil) {
        chpl_macro_tmp_2366.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_2366.addr = error_chpl;
        tmp_chpl22 = chpl_macro_tmp_2366;
        *(error_out_chpl) = tmp_chpl22;
        i_x_chpl3 = &ret_chpl2;
        deinit_chpl44(i_x_chpl3);
        goto _end_openfdHelper_chpl;
      }
      chpl_macro_tmp_2367.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2367.addr = nil;
      chpl_macro_tmp_2368.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2368.addr = NULL;
      error_chpl2 = chpl_macro_tmp_2368;
      chpl_macro_tmp_2369.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2369.addr = nil;
      chpl_macro_tmp_2370.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2370.addr = NULL;
      error_chpl3 = chpl_macro_tmp_2370;
      chpl_macro_tmp_2371.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2371.addr = nil;
      chpl_macro_tmp_2372.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2372.addr = NULL;
      error_chpl4 = chpl_macro_tmp_2372;
      tmp_chpl23 = &error_chpl4;
      decodeByteBuffer_chpl(((c_ptr_uint8_t_chpl)(path_cs_chpl)), call_tmp_chpl48, decodePolicy_chpl_replace_chpl, tmp_chpl23, &ret_tmp_chpl2);
      call_tmp_chpl49 = ret_tmp_chpl2;
      if ((&error_chpl4)->addr != nil) {
        error_chpl3 = error_chpl4;
        goto _endcreateStringWithNewBuffer_chpl;
      }
      ret_chpl5 = call_tmp_chpl49;
      _endcreateStringWithNewBuffer_chpl:;
      if ((&error_chpl3)->addr != nil) {
        error_chpl2 = error_chpl3;
        goto _endcreateStringWithNewBuffer_chpl2;
      }
      ret_chpl4 = ret_chpl5;
      _endcreateStringWithNewBuffer_chpl2:;
      if ((&error_chpl2)->addr != nil) {
        *(error_out_chpl) = error_chpl2;
        i_x_chpl4 = &ret_chpl2;
        deinit_chpl44(i_x_chpl4);
        goto _end_openfdHelper_chpl;
      }
      tmp_chpl19 = ret_chpl4;
    }
    path_chpl2 = tmp_chpl19;
    chpl_macro_tmp_2373.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2373.addr = nil;
    chpl_macro_tmp_2374.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2374.addr = NULL;
    error_chpl5 = chpl_macro_tmp_2374;
    tmp_chpl24 = &error_chpl5;
    ioerror_chpl2(call_tmp_chpl44, &local__str_literal_1904_chpl, &path_chpl2, tmp_chpl24, INT64(1858), INT32(77));
    if ((&error_chpl5)->addr != nil) {
      goto handler_chpl;
    }
    handler_chpl:;
    if ((&error_chpl5)->addr != nil) {
      *(error_out_chpl) = error_chpl5;
      i_x_chpl5 = &path_chpl2;
      chpl_macro_tmp_2375.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2375.addr = i_x_chpl5;
      tmp_chpl25 = chpl_macro_tmp_2375;
      deinit_chpl42(tmp_chpl25);
      i_x_chpl6 = &ret_chpl2;
      deinit_chpl44(i_x_chpl6);
      goto _end_openfdHelper_chpl;
    }
    i_x_chpl7 = &path_chpl2;
    chpl_macro_tmp_2376.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2376.addr = i_x_chpl7;
    tmp_chpl26 = chpl_macro_tmp_2376;
    deinit_chpl42(tmp_chpl26);
  }
  ret_chpl = ret_chpl2;
  _end_openfdHelper_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:1887 */
static void openfp_chpl(_cfile fp_chpl,
                        int32_t hints_chpl,
                        chpl____wide_Error * error_out_chpl,
                        file_chpl * _retArg_chpl) {
  file_chpl ret_chpl;
  file_chpl call_tmp_chpl36;
  iostyleInternal default_arg_style_chpl;
  Error_chpl error_chpl = NULL;
  iostyleInternal style_chpl;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  file_chpl ret_tmp_chpl;
  _ref__wide_Error_chpl tmp_chpl16 = NULL;
  chpl____wide_Error chpl_macro_tmp_2377;
  chpl____wide__nilType chpl_macro_tmp_2378;
  chpl____wide_Error chpl_macro_tmp_2379;
  error_chpl = NULL;
  style_chpl = defaultIOStyleInternal_chpl();
  default_arg_style_chpl = style_chpl;
  if (error_chpl != nil) {
    chpl_macro_tmp_2377.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2377.addr = error_chpl;
    tmp_chpl15 = chpl_macro_tmp_2377;
    *(error_out_chpl) = tmp_chpl15;
    goto _endopenfp_chpl;
  }
  chpl_macro_tmp_2378.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2378.addr = nil;
  chpl_macro_tmp_2379.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2379.addr = NULL;
  error_chpl2 = chpl_macro_tmp_2379;
  tmp_chpl16 = &error_chpl2;
  openfpHelper_chpl(fp_chpl, hints_chpl, &default_arg_style_chpl, tmp_chpl16, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  if ((&error_chpl2)->addr != nil) {
    *(error_out_chpl) = error_chpl2;
    goto _endopenfp_chpl;
  }
  ret_chpl = call_tmp_chpl36;
  _endopenfp_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:1891 */
static void openfpHelper_chpl(_cfile fp_chpl,
                              int32_t hints_chpl,
                              iostyleInternal * style_chpl,
                              chpl____wide_Error * error_out_chpl,
                              file_chpl * _retArg_chpl) {
  string_chpl local__str_literal_1905_chpl;
  string_chpl local__str_literal_1888_chpl;
  file_chpl ret_chpl;
  iostyleInternal local_style_chpl;
  file_chpl ret_chpl2;
  _ref_locale_chpl call_tmp_chpl36 = NULL;
  locale_chpl call_tmp_chpl37;
  chpl_localeID_t call_tmp_chpl38;
  int32_t call_tmp_chpl39;
  chpl_localeID_t call_tmp_chpl40;
  locale_chpl call_tmp_chpl41;
  locale_chpl ret_tmp_chpl;
  chpl____wide__ref_chpl_localeID_t tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl i_x_chpl = NULL;
  chpl____wide__ref_locale tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_qio_file_ptr_t_chpl call_tmp_chpl42 = NULL;
  syserr call_tmp_chpl43;
  int32_t call_tmp_chpl44;
  c_string path_cs_chpl;
  syserr call_tmp_chpl45;
  string_chpl path_chpl2;
  string_chpl tmp_chpl19;
  int32_t call_tmp_chpl46;
  string_chpl inlineImm_chpl;
  _ref_string_chpl i_x_chpl2 = NULL;
  string_chpl ret_chpl3;
  string_chpl tmp_chpl20;
  chpl____wide__ref_string tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl error_chpl = NULL;
  int64_t call_tmp_chpl47;
  chpl____wide_Error tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_file_chpl i_x_chpl3 = NULL;
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl4;
  chpl____wide_Error error_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl5;
  string_chpl call_tmp_chpl48;
  chpl____wide_Error error_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_tmp_chpl2;
  _ref__wide_Error_chpl tmp_chpl23 = NULL;
  _ref_file_chpl i_x_chpl4 = NULL;
  _ref_c_string_chpl i_cs_chpl = NULL;
  int64_t call_tmp_chpl49;
  chpl____wide_Error error_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl24 = NULL;
  _ref_string_chpl i_x_chpl5 = NULL;
  chpl____wide__ref_string tmp_chpl25 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_file_chpl i_x_chpl6 = NULL;
  _ref_string_chpl i_x_chpl7 = NULL;
  chpl____wide__ref_string tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_2380;
  chpl____wide__ref_locale chpl_macro_tmp_2381;
  chpl____wide__ref_locale chpl_macro_tmp_2382;
  chpl____wide__ref_locale chpl_macro_tmp_2383;
  chpl____wide__ref_string chpl_macro_tmp_2384;
  chpl____wide_Error chpl_macro_tmp_2385;
  chpl____wide__nilType chpl_macro_tmp_2386;
  chpl____wide_Error chpl_macro_tmp_2387;
  chpl____wide__nilType chpl_macro_tmp_2388;
  chpl____wide_Error chpl_macro_tmp_2389;
  chpl____wide__nilType chpl_macro_tmp_2390;
  chpl____wide_Error chpl_macro_tmp_2391;
  chpl____wide__nilType chpl_macro_tmp_2392;
  chpl____wide_Error chpl_macro_tmp_2393;
  chpl____wide__ref_string chpl_macro_tmp_2394;
  chpl____wide__ref_string chpl_macro_tmp_2395;
  local__str_literal_1905_chpl = _str_literal_1905_chpl /* "in openfp" */;
  local__str_literal_1888_chpl = _str_literal_1888_chpl /* "unknown" */;
  local_style_chpl = *(style_chpl);
  init_chpl75(&ret_chpl2);
  call_tmp_chpl36 = &((&ret_chpl2)->home);
  call_tmp_chpl39 = get_chpl_nodeID();
  call_tmp_chpl40 = chpl_rt_buildLocaleID(call_tmp_chpl39, c_sublocid_any);
  call_tmp_chpl38 = call_tmp_chpl40;
  chpl_macro_tmp_2380.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2380.addr = &call_tmp_chpl38;
  tmp_chpl15 = chpl_macro_tmp_2380;
  chpl_localeID_to_locale(tmp_chpl15, &ret_tmp_chpl);
  call_tmp_chpl41 = ret_tmp_chpl;
  call_tmp_chpl37 = call_tmp_chpl41;
  chpl_macro_tmp_2381.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2381.addr = call_tmp_chpl36;
  tmp_chpl16 = chpl_macro_tmp_2381;
  chpl_macro_tmp_2382.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2382.addr = &call_tmp_chpl37;
  tmp_chpl17 = chpl_macro_tmp_2382;
  chpl___ASSIGN_2(tmp_chpl16, tmp_chpl17);
  i_x_chpl = &call_tmp_chpl37;
  chpl_macro_tmp_2383.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2383.addr = i_x_chpl;
  tmp_chpl18 = chpl_macro_tmp_2383;
  deinit_chpl14(tmp_chpl18);
  call_tmp_chpl42 = &((&ret_chpl2)->_file_internal);
  call_tmp_chpl43 = qio_file_init(call_tmp_chpl42, fp_chpl, ((int32_t)(INT64(-1))), hints_chpl, &local_style_chpl, ((int32_t)(INT64(1))));
  call_tmp_chpl44 = qio_err_iserr(call_tmp_chpl43);
  if (call_tmp_chpl44 != INT32(0)) {
    path_cs_chpl = ((c_string)(nil));
    call_tmp_chpl45 = qio_file_path_for_fp(fp_chpl, &path_cs_chpl);
    call_tmp_chpl46 = qio_err_iserr(call_tmp_chpl45);
    if (call_tmp_chpl46 != INT32(0)) {
      inlineImm_chpl = local__str_literal_1888_chpl;
      i_x_chpl2 = &inlineImm_chpl;
      chpl_macro_tmp_2384.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2384.addr = i_x_chpl2;
      tmp_chpl21 = chpl_macro_tmp_2384;
      init_ASSIGN__chpl21(&tmp_chpl20, tmp_chpl21);
      ret_chpl3 = tmp_chpl20;
      tmp_chpl19 = ret_chpl3;
    } else {
      error_chpl = NULL;
      call_tmp_chpl47 = string_length_bytes(path_cs_chpl);
      if (error_chpl != nil) {
        chpl_macro_tmp_2385.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_2385.addr = error_chpl;
        tmp_chpl22 = chpl_macro_tmp_2385;
        *(error_out_chpl) = tmp_chpl22;
        i_x_chpl3 = &ret_chpl2;
        deinit_chpl44(i_x_chpl3);
        goto _end_openfpHelper_chpl;
      }
      chpl_macro_tmp_2386.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2386.addr = nil;
      chpl_macro_tmp_2387.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2387.addr = NULL;
      error_chpl2 = chpl_macro_tmp_2387;
      chpl_macro_tmp_2388.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2388.addr = nil;
      chpl_macro_tmp_2389.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2389.addr = NULL;
      error_chpl3 = chpl_macro_tmp_2389;
      chpl_macro_tmp_2390.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2390.addr = nil;
      chpl_macro_tmp_2391.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2391.addr = NULL;
      error_chpl4 = chpl_macro_tmp_2391;
      tmp_chpl23 = &error_chpl4;
      decodeByteBuffer_chpl(((c_ptr_uint8_t_chpl)(path_cs_chpl)), call_tmp_chpl47, decodePolicy_chpl_replace_chpl, tmp_chpl23, &ret_tmp_chpl2);
      call_tmp_chpl48 = ret_tmp_chpl2;
      if ((&error_chpl4)->addr != nil) {
        error_chpl3 = error_chpl4;
        goto _endcreateStringWithNewBuffer_chpl;
      }
      ret_chpl5 = call_tmp_chpl48;
      _endcreateStringWithNewBuffer_chpl:;
      if ((&error_chpl3)->addr != nil) {
        error_chpl2 = error_chpl3;
        goto _endcreateStringWithNewBuffer_chpl2;
      }
      ret_chpl4 = ret_chpl5;
      _endcreateStringWithNewBuffer_chpl2:;
      if ((&error_chpl2)->addr != nil) {
        *(error_out_chpl) = error_chpl2;
        i_x_chpl4 = &ret_chpl2;
        deinit_chpl44(i_x_chpl4);
        goto _end_openfpHelper_chpl;
      }
      tmp_chpl19 = ret_chpl4;
    }
    path_chpl2 = tmp_chpl19;
    i_cs_chpl = &path_cs_chpl;
    call_tmp_chpl49 = string_compare(path_cs_chpl, ((c_string)(nil)));
    if (call_tmp_chpl49 != INT64(0)) {
      chpl_rt_free_c_string(i_cs_chpl, INT64(1906), INT32(77));
    }
    chpl_macro_tmp_2392.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2392.addr = nil;
    chpl_macro_tmp_2393.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2393.addr = NULL;
    error_chpl5 = chpl_macro_tmp_2393;
    tmp_chpl24 = &error_chpl5;
    ioerror_chpl2(call_tmp_chpl43, &local__str_literal_1905_chpl, &path_chpl2, tmp_chpl24, INT64(1907), INT32(77));
    if ((&error_chpl5)->addr != nil) {
      goto handler_chpl;
    }
    handler_chpl:;
    if ((&error_chpl5)->addr != nil) {
      *(error_out_chpl) = error_chpl5;
      i_x_chpl5 = &path_chpl2;
      chpl_macro_tmp_2394.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2394.addr = i_x_chpl5;
      tmp_chpl25 = chpl_macro_tmp_2394;
      deinit_chpl42(tmp_chpl25);
      i_x_chpl6 = &ret_chpl2;
      deinit_chpl44(i_x_chpl6);
      goto _end_openfpHelper_chpl;
    }
    i_x_chpl7 = &path_chpl2;
    chpl_macro_tmp_2395.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2395.addr = i_x_chpl7;
    tmp_chpl26 = chpl_macro_tmp_2395;
    deinit_chpl42(tmp_chpl26);
  }
  ret_chpl = ret_chpl2;
  _end_openfpHelper_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:2044 */
static void chpl___ASSIGN_8(chpl____wide__ref_channel_T_dynamic_T lhs_chpl,
                            channel_T_dynamic_T_chpl * rhs_chpl) {
  string_chpl local__str_literal_75_chpl;
  _ref_locale_chpl call_tmp_chpl36 = NULL;
  chpl_localeID_t call_tmp_chpl37;
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_T_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl80 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_locale call_tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl39;
  chpl____wide_BaseLocale coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl2;
  _class_localson_fn_chpl82 _args_foron_fn_chpl2 = NULL;
  chpl____wide__ref_channel_T_dynamic_T tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  int64_t _args_sizeon_fn_chpl2;
  chpl____wide__ref_locale call_tmp_chpl40 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl call_tmp_chpl41 = NULL;
  chpl____wide__ref_locale tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  qio_channel_ptr_t coerce_tmp_chpl7;
  qio_channel_ptr_t tmp_chpl19;
  chpl____wide_object chpl_macro_tmp_2396;
  chpl____wide__nilType chpl_macro_tmp_2397;
  chpl____wide_object chpl_macro_tmp_2398;
  chpl__class_localson_fn_chpl80_object chpl_macro_tmp_2399;
  chpl____wide__ref_locale chpl_macro_tmp_2400;
  chpl____wide__ref__wide_BaseLocale chpl_macro_tmp_2401;
  chpl____wide_object chpl_macro_tmp_2402;
  chpl____wide__nilType chpl_macro_tmp_2403;
  chpl____wide_object chpl_macro_tmp_2404;
  chpl__class_localson_fn_chpl82_object chpl_macro_tmp_2405;
  chpl____wide__ref_locale chpl_macro_tmp_2406;
  chpl____wide__ref_locale chpl_macro_tmp_2407;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_2408;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  call_tmp_chpl36 = &((rhs_chpl)->home);
  coerce_tmp_chpl3 = (call_tmp_chpl36)->_instance;
  chpl_macro_tmp_2396.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_2396.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_2396;
  chpl_macro_tmp_2397.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2397.addr = nil;
  chpl_macro_tmp_2398.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2398.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_2398;
  if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(2052), INT32(77));
  }
  call_tmp_chpl37 = (&coerce_tmp_chpl3)->locale;
  chpl_rmem_consist_release(INT64(2052), INT32(77));
  rvfDerefTmp_chpl = *(rhs_chpl);
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
  if (isdirect_chpl) {
    on_fn_chpl81(&rvfDerefTmp_chpl);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl80)(&chpl_macro_tmp_2399));
    chpl_check_nil(_args_foron_fn_chpl, INT64(2052), INT32(77));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2052), INT32(77));
    (_args_foron_fn_chpl)->_1_rvfDerefTmp = rvfDerefTmp_chpl;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl80_object);
    chpl_taskRunningCntDec(INT64(2052), INT32(77));
    /*** wrapon_fn_chpl80 ***/ chpl_executeOn(call_tmp_chpl37, INT32(92), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(2052), INT32(77));
    chpl_taskRunningCntInc(INT64(2052), INT32(77));
  }
  chpl_rmem_consist_acquire(INT64(2052), INT32(77));
  chpl_macro_tmp_2400.locale = (lhs_chpl).locale;
  chpl_macro_tmp_2400.addr = &(((lhs_chpl).addr)->home);
  call_tmp_chpl38 = chpl_macro_tmp_2400;
  chpl_macro_tmp_2401.locale = (call_tmp_chpl38).locale;
  chpl_macro_tmp_2401.addr = &(((call_tmp_chpl38).addr)->_instance);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID((chpl_macro_tmp_2401).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2401).addr, sizeof(chpl____wide_BaseLocale), COMMID(12), INT64(2056), INT64(77));
  chpl_macro_tmp_2402.locale = (&coerce_tmp_chpl5)->locale;
  chpl_macro_tmp_2402.addr = ((object_chpl)((&coerce_tmp_chpl5)->addr));
  coerce_tmp_chpl6 = chpl_macro_tmp_2402;
  chpl_macro_tmp_2403.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2403.addr = nil;
  chpl_macro_tmp_2404.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2404.addr = NULL;
  tmp_chpl16 = chpl_macro_tmp_2404;
  if (! (((&coerce_tmp_chpl6)->addr != (&tmp_chpl16)->addr) || ((!(! (&coerce_tmp_chpl6)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl6)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl16)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(2056), INT32(77));
  }
  call_tmp_chpl39 = (&coerce_tmp_chpl5)->locale;
  chpl_rmem_consist_release(INT64(2056), INT32(77));
  isdirect_chpl2 = chpl_doDirectExecuteOn(call_tmp_chpl39);
  if (isdirect_chpl2) {
    on_fn_chpl82(lhs_chpl);
  } else {
    _args_foron_fn_chpl2 = ((_class_localson_fn_chpl82)(&chpl_macro_tmp_2405));
    chpl_check_nil(_args_foron_fn_chpl2, INT64(2056), INT32(77));
    (_args_foron_fn_chpl2)->_0_tmp = call_tmp_chpl39;
    tmp_chpl17 = lhs_chpl;
    chpl_check_nil(_args_foron_fn_chpl2, INT64(2056), INT32(77));
    (_args_foron_fn_chpl2)->_1_lhs = tmp_chpl17;
    _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
    _args_sizeon_fn_chpl2 = sizeof(chpl__class_localson_fn_chpl82_object);
    chpl_taskRunningCntDec(INT64(2056), INT32(77));
    /*** wrapon_fn_chpl82 ***/ chpl_executeOn(call_tmp_chpl39, INT32(94), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), _args_sizeon_fn_chpl2, INT64(2056), INT32(77));
    chpl_taskRunningCntInc(INT64(2056), INT32(77));
  }
  chpl_rmem_consist_acquire(INT64(2056), INT32(77));
  chpl_macro_tmp_2406.locale = (lhs_chpl).locale;
  chpl_macro_tmp_2406.addr = &(((lhs_chpl).addr)->home);
  call_tmp_chpl40 = chpl_macro_tmp_2406;
  call_tmp_chpl41 = &((rhs_chpl)->home);
  chpl_macro_tmp_2407.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2407.addr = call_tmp_chpl41;
  tmp_chpl18 = chpl_macro_tmp_2407;
  chpl___ASSIGN_2(call_tmp_chpl40, tmp_chpl18);
  tmp_chpl19 = (rhs_chpl)->_channel_internal;
  coerce_tmp_chpl7 = tmp_chpl19;
  chpl_macro_tmp_2408.locale = (lhs_chpl).locale;
  chpl_macro_tmp_2408.addr = &(((lhs_chpl).addr)->_channel_internal);
  chpl_gen_comm_put(((void*)(&coerce_tmp_chpl7)), chpl_nodeFromLocaleID((chpl_macro_tmp_2408).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2408).addr, sizeof(qio_channel_ptr_t), COMMID(13), INT64(2061), INT64(77));
  return;
}

/* IO.chpl:2044 */
static void chpl___ASSIGN_7(chpl____wide__ref_channel_F_dynamic_T lhs_chpl,
                            channel_F_dynamic_T_chpl * rhs_chpl) {
  string_chpl local__str_literal_75_chpl;
  _ref_locale_chpl call_tmp_chpl36 = NULL;
  chpl_localeID_t call_tmp_chpl37;
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_F_dynamic_T_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl81 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_locale call_tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl39;
  chpl____wide_BaseLocale coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl2;
  _class_localson_fn_chpl83 _args_foron_fn_chpl2 = NULL;
  chpl____wide__ref_channel_F_dynamic_T tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  int64_t _args_sizeon_fn_chpl2;
  chpl____wide__ref_locale call_tmp_chpl40 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl call_tmp_chpl41 = NULL;
  chpl____wide__ref_locale tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  qio_channel_ptr_t coerce_tmp_chpl7;
  qio_channel_ptr_t tmp_chpl19;
  chpl____wide_object chpl_macro_tmp_2409;
  chpl____wide__nilType chpl_macro_tmp_2410;
  chpl____wide_object chpl_macro_tmp_2411;
  chpl__class_localson_fn_chpl81_object chpl_macro_tmp_2412;
  chpl____wide__ref_locale chpl_macro_tmp_2413;
  chpl____wide__ref__wide_BaseLocale chpl_macro_tmp_2414;
  chpl____wide_object chpl_macro_tmp_2415;
  chpl____wide__nilType chpl_macro_tmp_2416;
  chpl____wide_object chpl_macro_tmp_2417;
  chpl__class_localson_fn_chpl83_object chpl_macro_tmp_2418;
  chpl____wide__ref_locale chpl_macro_tmp_2419;
  chpl____wide__ref_locale chpl_macro_tmp_2420;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_2421;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  call_tmp_chpl36 = &((rhs_chpl)->home);
  coerce_tmp_chpl3 = (call_tmp_chpl36)->_instance;
  chpl_macro_tmp_2409.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_2409.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_2409;
  chpl_macro_tmp_2410.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2410.addr = nil;
  chpl_macro_tmp_2411.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2411.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_2411;
  if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(2052), INT32(77));
  }
  call_tmp_chpl37 = (&coerce_tmp_chpl3)->locale;
  chpl_rmem_consist_release(INT64(2052), INT32(77));
  rvfDerefTmp_chpl = *(rhs_chpl);
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
  if (isdirect_chpl) {
    on_fn_chpl80(&rvfDerefTmp_chpl);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl81)(&chpl_macro_tmp_2412));
    chpl_check_nil(_args_foron_fn_chpl, INT64(2052), INT32(77));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2052), INT32(77));
    (_args_foron_fn_chpl)->_1_rvfDerefTmp = rvfDerefTmp_chpl;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl81_object);
    chpl_taskRunningCntDec(INT64(2052), INT32(77));
    /*** wrapon_fn_chpl81 ***/ chpl_executeOn(call_tmp_chpl37, INT32(93), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(2052), INT32(77));
    chpl_taskRunningCntInc(INT64(2052), INT32(77));
  }
  chpl_rmem_consist_acquire(INT64(2052), INT32(77));
  chpl_macro_tmp_2413.locale = (lhs_chpl).locale;
  chpl_macro_tmp_2413.addr = &(((lhs_chpl).addr)->home);
  call_tmp_chpl38 = chpl_macro_tmp_2413;
  chpl_macro_tmp_2414.locale = (call_tmp_chpl38).locale;
  chpl_macro_tmp_2414.addr = &(((call_tmp_chpl38).addr)->_instance);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID((chpl_macro_tmp_2414).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2414).addr, sizeof(chpl____wide_BaseLocale), COMMID(14), INT64(2056), INT64(77));
  chpl_macro_tmp_2415.locale = (&coerce_tmp_chpl5)->locale;
  chpl_macro_tmp_2415.addr = ((object_chpl)((&coerce_tmp_chpl5)->addr));
  coerce_tmp_chpl6 = chpl_macro_tmp_2415;
  chpl_macro_tmp_2416.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2416.addr = nil;
  chpl_macro_tmp_2417.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2417.addr = NULL;
  tmp_chpl16 = chpl_macro_tmp_2417;
  if (! (((&coerce_tmp_chpl6)->addr != (&tmp_chpl16)->addr) || ((!(! (&coerce_tmp_chpl6)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl6)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl16)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(2056), INT32(77));
  }
  call_tmp_chpl39 = (&coerce_tmp_chpl5)->locale;
  chpl_rmem_consist_release(INT64(2056), INT32(77));
  isdirect_chpl2 = chpl_doDirectExecuteOn(call_tmp_chpl39);
  if (isdirect_chpl2) {
    on_fn_chpl83(lhs_chpl);
  } else {
    _args_foron_fn_chpl2 = ((_class_localson_fn_chpl83)(&chpl_macro_tmp_2418));
    chpl_check_nil(_args_foron_fn_chpl2, INT64(2056), INT32(77));
    (_args_foron_fn_chpl2)->_0_tmp = call_tmp_chpl39;
    tmp_chpl17 = lhs_chpl;
    chpl_check_nil(_args_foron_fn_chpl2, INT64(2056), INT32(77));
    (_args_foron_fn_chpl2)->_1_lhs = tmp_chpl17;
    _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
    _args_sizeon_fn_chpl2 = sizeof(chpl__class_localson_fn_chpl83_object);
    chpl_taskRunningCntDec(INT64(2056), INT32(77));
    /*** wrapon_fn_chpl83 ***/ chpl_executeOn(call_tmp_chpl39, INT32(95), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), _args_sizeon_fn_chpl2, INT64(2056), INT32(77));
    chpl_taskRunningCntInc(INT64(2056), INT32(77));
  }
  chpl_rmem_consist_acquire(INT64(2056), INT32(77));
  chpl_macro_tmp_2419.locale = (lhs_chpl).locale;
  chpl_macro_tmp_2419.addr = &(((lhs_chpl).addr)->home);
  call_tmp_chpl40 = chpl_macro_tmp_2419;
  call_tmp_chpl41 = &((rhs_chpl)->home);
  chpl_macro_tmp_2420.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2420.addr = call_tmp_chpl41;
  tmp_chpl18 = chpl_macro_tmp_2420;
  chpl___ASSIGN_2(call_tmp_chpl40, tmp_chpl18);
  tmp_chpl19 = (rhs_chpl)->_channel_internal;
  coerce_tmp_chpl7 = tmp_chpl19;
  chpl_macro_tmp_2421.locale = (lhs_chpl).locale;
  chpl_macro_tmp_2421.addr = &(((lhs_chpl).addr)->_channel_internal);
  chpl_gen_comm_put(((void*)(&coerce_tmp_chpl7)), chpl_nodeFromLocaleID((chpl_macro_tmp_2421).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2421).addr, sizeof(qio_channel_ptr_t), COMMID(15), INT64(2061), INT64(77));
  return;
}

/* IO.chpl:2052 */
static void wrapon_fn_chpl80(_class_localson_fn_chpl80 c_chpl) {
  channel_T_dynamic_T_chpl _1_rvfDerefTmp_chpl;
  channel_T_dynamic_T_chpl tmp_chpl15;
  chpl_rmem_consist_acquire(INT64(2052), INT32(77));
  chpl_check_nil(c_chpl, INT64(2052), INT32(77));
  tmp_chpl15 = (c_chpl)->_1_rvfDerefTmp;
  _1_rvfDerefTmp_chpl = tmp_chpl15;
  chpl_taskRunningCntInc(INT64(2052), INT32(77));
  on_fn_chpl81(&_1_rvfDerefTmp_chpl);
  chpl_taskRunningCntDec(INT64(2052), INT32(77));
  chpl_rmem_consist_release(INT64(2052), INT32(77));
  return;
}

/* IO.chpl:2052 */
static void wrapon_fn_chpl81(_class_localson_fn_chpl81 c_chpl) {
  channel_F_dynamic_T_chpl _1_rvfDerefTmp_chpl;
  channel_F_dynamic_T_chpl tmp_chpl15;
  chpl_rmem_consist_acquire(INT64(2052), INT32(77));
  chpl_check_nil(c_chpl, INT64(2052), INT32(77));
  tmp_chpl15 = (c_chpl)->_1_rvfDerefTmp;
  _1_rvfDerefTmp_chpl = tmp_chpl15;
  chpl_taskRunningCntInc(INT64(2052), INT32(77));
  on_fn_chpl80(&_1_rvfDerefTmp_chpl);
  chpl_taskRunningCntDec(INT64(2052), INT32(77));
  chpl_rmem_consist_release(INT64(2052), INT32(77));
  return;
}

/* IO.chpl:2052 */
static void on_fn_chpl81(channel_T_dynamic_T_chpl * rhs_chpl) {
  qio_channel_ptr_t coerce_tmp_chpl3;
  qio_channel_ptr_t tmp_chpl15;
  tmp_chpl15 = (rhs_chpl)->_channel_internal;
  coerce_tmp_chpl3 = tmp_chpl15;
  qio_channel_retain(coerce_tmp_chpl3);
  return;
}

/* IO.chpl:2052 */
static void on_fn_chpl80(channel_F_dynamic_T_chpl * rhs_chpl) {
  qio_channel_ptr_t coerce_tmp_chpl3;
  qio_channel_ptr_t tmp_chpl15;
  tmp_chpl15 = (rhs_chpl)->_channel_internal;
  coerce_tmp_chpl3 = tmp_chpl15;
  qio_channel_retain(coerce_tmp_chpl3);
  return;
}

/* IO.chpl:2056 */
static void wrapon_fn_chpl82(_class_localson_fn_chpl82 c_chpl) {
  chpl____wide__ref_channel_T_dynamic_T _1_lhs_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(2056), INT32(77));
  chpl_check_nil(c_chpl, INT64(2056), INT32(77));
  _1_lhs_chpl = (c_chpl)->_1_lhs;
  chpl_taskRunningCntInc(INT64(2056), INT32(77));
  on_fn_chpl82(_1_lhs_chpl);
  chpl_taskRunningCntDec(INT64(2056), INT32(77));
  chpl_rmem_consist_release(INT64(2056), INT32(77));
  return;
}

/* IO.chpl:2056 */
static void on_fn_chpl82(chpl____wide__ref_channel_T_dynamic_T lhs_chpl) {
  qio_channel_ptr_t coerce_tmp_chpl3;
  qio_channel_ptr_t tmp_chpl15;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_2422;
  chpl_macro_tmp_2422.locale = (lhs_chpl).locale;
  chpl_macro_tmp_2422.addr = &(((lhs_chpl).addr)->_channel_internal);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_2422).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2422).addr, sizeof(qio_channel_ptr_t), COMMID(16), INT64(2057), INT64(77));
  coerce_tmp_chpl3 = tmp_chpl15;
  qio_channel_release(coerce_tmp_chpl3);
  return;
}

/* IO.chpl:2056 */
static void on_fn_chpl83(chpl____wide__ref_channel_F_dynamic_T lhs_chpl) {
  qio_channel_ptr_t coerce_tmp_chpl3;
  qio_channel_ptr_t tmp_chpl15;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_2423;
  chpl_macro_tmp_2423.locale = (lhs_chpl).locale;
  chpl_macro_tmp_2423.addr = &(((lhs_chpl).addr)->_channel_internal);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_2423).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2423).addr, sizeof(qio_channel_ptr_t), COMMID(17), INT64(2057), INT64(77));
  coerce_tmp_chpl3 = tmp_chpl15;
  qio_channel_release(coerce_tmp_chpl3);
  return;
}

/* IO.chpl:2056 */
static void wrapon_fn_chpl83(_class_localson_fn_chpl83 c_chpl) {
  chpl____wide__ref_channel_F_dynamic_T _1_lhs_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(2056), INT32(77));
  chpl_check_nil(c_chpl, INT64(2056), INT32(77));
  _1_lhs_chpl = (c_chpl)->_1_lhs;
  chpl_taskRunningCntInc(INT64(2056), INT32(77));
  on_fn_chpl83(_1_lhs_chpl);
  chpl_taskRunningCntDec(INT64(2056), INT32(77));
  chpl_rmem_consist_release(INT64(2056), INT32(77));
  return;
}

/* IO.chpl:2065 */
static void init_chpl77(channel_T_dynamic_T_chpl * this_chpl7) {
  locale_chpl local_nilLocale_chpl;
  chpl_localeID_t call_tmp_chpl36;
  int32_t call_tmp_chpl37;
  chpl_localeID_t call_tmp_chpl38;
  locale_chpl call_tmp_chpl39;
  locale_chpl ret_tmp_chpl;
  chpl____wide__ref_chpl_localeID_t tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  qio_channel_ptr_t _channel_internal_chpl;
  locale_chpl _readWriteThisFromLocale_chpl;
  chpl____wide__ref_locale tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_2424;
  chpl____wide__ref_locale chpl_macro_tmp_2425;
  chpl____wide__ref_locale chpl_macro_tmp_2426;
  local_nilLocale_chpl = nilLocale_chpl;
  call_tmp_chpl37 = get_chpl_nodeID();
  call_tmp_chpl38 = chpl_rt_buildLocaleID(call_tmp_chpl37, c_sublocid_any);
  call_tmp_chpl36 = call_tmp_chpl38;
  chpl_macro_tmp_2424.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2424.addr = &call_tmp_chpl36;
  tmp_chpl15 = chpl_macro_tmp_2424;
  chpl_localeID_to_locale(tmp_chpl15, &ret_tmp_chpl);
  call_tmp_chpl39 = ret_tmp_chpl;
  (this_chpl7)->home = call_tmp_chpl39;
  _channel_internal_chpl = QIO_CHANNEL_PTR_NULL;
  (this_chpl7)->_channel_internal = _channel_internal_chpl;
  chpl_macro_tmp_2425.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2425.addr = &_readWriteThisFromLocale_chpl;
  tmp_chpl16 = chpl_macro_tmp_2425;
  chpl_macro_tmp_2426.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2426.addr = &local_nilLocale_chpl;
  tmp_chpl17 = chpl_macro_tmp_2426;
  init_ASSIGN__chpl(tmp_chpl16, tmp_chpl17);
  (this_chpl7)->_readWriteThisFromLocale = _readWriteThisFromLocale_chpl;
  return;
}

/* IO.chpl:2065 */
static void init_chpl76(channel_F_dynamic_T_chpl * this_chpl7) {
  locale_chpl local_nilLocale_chpl;
  chpl_localeID_t call_tmp_chpl36;
  int32_t call_tmp_chpl37;
  chpl_localeID_t call_tmp_chpl38;
  locale_chpl call_tmp_chpl39;
  locale_chpl ret_tmp_chpl;
  chpl____wide__ref_chpl_localeID_t tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  qio_channel_ptr_t _channel_internal_chpl;
  locale_chpl _readWriteThisFromLocale_chpl;
  chpl____wide__ref_locale tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_2427;
  chpl____wide__ref_locale chpl_macro_tmp_2428;
  chpl____wide__ref_locale chpl_macro_tmp_2429;
  local_nilLocale_chpl = nilLocale_chpl;
  call_tmp_chpl37 = get_chpl_nodeID();
  call_tmp_chpl38 = chpl_rt_buildLocaleID(call_tmp_chpl37, c_sublocid_any);
  call_tmp_chpl36 = call_tmp_chpl38;
  chpl_macro_tmp_2427.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2427.addr = &call_tmp_chpl36;
  tmp_chpl15 = chpl_macro_tmp_2427;
  chpl_localeID_to_locale(tmp_chpl15, &ret_tmp_chpl);
  call_tmp_chpl39 = ret_tmp_chpl;
  (this_chpl7)->home = call_tmp_chpl39;
  _channel_internal_chpl = QIO_CHANNEL_PTR_NULL;
  (this_chpl7)->_channel_internal = _channel_internal_chpl;
  chpl_macro_tmp_2428.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2428.addr = &_readWriteThisFromLocale_chpl;
  tmp_chpl16 = chpl_macro_tmp_2428;
  chpl_macro_tmp_2429.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2429.addr = &local_nilLocale_chpl;
  tmp_chpl17 = chpl_macro_tmp_2429;
  init_ASSIGN__chpl(tmp_chpl16, tmp_chpl17);
  (this_chpl7)->_readWriteThisFromLocale = _readWriteThisFromLocale_chpl;
  return;
}

/* IO.chpl:2136 */
static void init_chpl78(channel_F_dynamic_T_chpl * this_chpl7,
                        file_chpl * f_chpl,
                        syserr * error_chpl,
                        int32_t hints_chpl,
                        int64_t start_chpl,
                        int64_t end_chpl,
                        iostyleInternal local_style_chpl) {
  string_chpl local__str_literal_75_chpl;
  syserr _formal_tmp_error_chpl;
  _ref_locale_chpl call_tmp_chpl36 = NULL;
  chpl_localeID_t call_tmp_chpl37;
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  file_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_channel_F_dynamic_T tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_syserr tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl85 _args_foron_fn_chpl = NULL;
  _ref_channel_F_dynamic_T_chpl tmp_chpl18 = NULL;
  chpl____wide__ref_channel_F_dynamic_T tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_syserr_chpl tmp_chpl20 = NULL;
  chpl____wide__ref_syserr tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_object chpl_macro_tmp_2430;
  chpl____wide__nilType chpl_macro_tmp_2431;
  chpl____wide_object chpl_macro_tmp_2432;
  chpl____wide__ref_channel_F_dynamic_T chpl_macro_tmp_2433;
  chpl____wide__ref_syserr chpl_macro_tmp_2434;
  chpl__class_localson_fn_chpl85_object chpl_macro_tmp_2435;
  chpl____wide__ref_channel_F_dynamic_T chpl_macro_tmp_2436;
  chpl____wide__ref_syserr chpl_macro_tmp_2437;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  memset(&_formal_tmp_error_chpl, INT32(0), sizeof(syserr));
  init_chpl76(this_chpl7);
  call_tmp_chpl36 = &((f_chpl)->home);
  coerce_tmp_chpl3 = (call_tmp_chpl36)->_instance;
  chpl_macro_tmp_2430.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_2430.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_2430;
  chpl_macro_tmp_2431.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2431.addr = nil;
  chpl_macro_tmp_2432.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2432.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_2432;
  if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(2138), INT32(77));
  }
  call_tmp_chpl37 = (&coerce_tmp_chpl3)->locale;
  chpl_rmem_consist_release(INT64(2138), INT32(77));
  rvfDerefTmp_chpl = *(f_chpl);
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
  if (isdirect_chpl) {
    chpl_macro_tmp_2433.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2433.addr = this_chpl7;
    tmp_chpl16 = chpl_macro_tmp_2433;
    chpl_macro_tmp_2434.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2434.addr = &_formal_tmp_error_chpl;
    tmp_chpl17 = chpl_macro_tmp_2434;
    on_fn_chpl84(tmp_chpl16, &rvfDerefTmp_chpl, hints_chpl, start_chpl, end_chpl, local_style_chpl, tmp_chpl17);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl85)(&chpl_macro_tmp_2435));
    chpl_check_nil(_args_foron_fn_chpl, INT64(2138), INT32(77));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
    tmp_chpl18 = this_chpl7;
    chpl_macro_tmp_2436.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2436.addr = tmp_chpl18;
    tmp_chpl19 = chpl_macro_tmp_2436;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2138), INT32(77));
    (_args_foron_fn_chpl)->_1_this = tmp_chpl19;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2138), INT32(77));
    (_args_foron_fn_chpl)->_2_rvfDerefTmp = rvfDerefTmp_chpl;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2138), INT32(77));
    (_args_foron_fn_chpl)->_3_hints = hints_chpl;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2138), INT32(77));
    (_args_foron_fn_chpl)->_4_start = start_chpl;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2138), INT32(77));
    (_args_foron_fn_chpl)->_5_end = end_chpl;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2138), INT32(77));
    (_args_foron_fn_chpl)->_6_rvfDerefTmp = local_style_chpl;
    tmp_chpl20 = &_formal_tmp_error_chpl;
    chpl_macro_tmp_2437.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2437.addr = tmp_chpl20;
    tmp_chpl21 = chpl_macro_tmp_2437;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2138), INT32(77));
    (_args_foron_fn_chpl)->_7__formal_tmp_error = tmp_chpl21;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl85_object);
    chpl_taskRunningCntDec(INT64(2138), INT32(77));
    /*** wrapon_fn_chpl85 ***/ chpl_executeOn(call_tmp_chpl37, INT32(97), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(2138), INT32(77));
    chpl_taskRunningCntInc(INT64(2138), INT32(77));
  }
  chpl_rmem_consist_acquire(INT64(2138), INT32(77));
  *(error_chpl) = _formal_tmp_error_chpl;
  return;
}

/* IO.chpl:2136 */
static void init_chpl79(channel_T_dynamic_T_chpl * this_chpl7,
                        file_chpl * f_chpl,
                        syserr * error_chpl,
                        int32_t hints_chpl,
                        int64_t start_chpl,
                        int64_t end_chpl,
                        iostyleInternal local_style_chpl) {
  string_chpl local__str_literal_75_chpl;
  syserr _formal_tmp_error_chpl;
  _ref_locale_chpl call_tmp_chpl36 = NULL;
  chpl_localeID_t call_tmp_chpl37;
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  file_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_channel_T_dynamic_T tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_syserr tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl84 _args_foron_fn_chpl = NULL;
  _ref_channel_T_dynamic_T_chpl tmp_chpl18 = NULL;
  chpl____wide__ref_channel_T_dynamic_T tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_syserr_chpl tmp_chpl20 = NULL;
  chpl____wide__ref_syserr tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_object chpl_macro_tmp_2438;
  chpl____wide__nilType chpl_macro_tmp_2439;
  chpl____wide_object chpl_macro_tmp_2440;
  chpl____wide__ref_channel_T_dynamic_T chpl_macro_tmp_2441;
  chpl____wide__ref_syserr chpl_macro_tmp_2442;
  chpl__class_localson_fn_chpl84_object chpl_macro_tmp_2443;
  chpl____wide__ref_channel_T_dynamic_T chpl_macro_tmp_2444;
  chpl____wide__ref_syserr chpl_macro_tmp_2445;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  memset(&_formal_tmp_error_chpl, INT32(0), sizeof(syserr));
  init_chpl77(this_chpl7);
  call_tmp_chpl36 = &((f_chpl)->home);
  coerce_tmp_chpl3 = (call_tmp_chpl36)->_instance;
  chpl_macro_tmp_2438.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_2438.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_2438;
  chpl_macro_tmp_2439.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2439.addr = nil;
  chpl_macro_tmp_2440.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2440.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_2440;
  if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(2138), INT32(77));
  }
  call_tmp_chpl37 = (&coerce_tmp_chpl3)->locale;
  chpl_rmem_consist_release(INT64(2138), INT32(77));
  rvfDerefTmp_chpl = *(f_chpl);
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
  if (isdirect_chpl) {
    chpl_macro_tmp_2441.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2441.addr = this_chpl7;
    tmp_chpl16 = chpl_macro_tmp_2441;
    chpl_macro_tmp_2442.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2442.addr = &_formal_tmp_error_chpl;
    tmp_chpl17 = chpl_macro_tmp_2442;
    on_fn_chpl85(tmp_chpl16, &rvfDerefTmp_chpl, hints_chpl, start_chpl, end_chpl, local_style_chpl, tmp_chpl17);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl84)(&chpl_macro_tmp_2443));
    chpl_check_nil(_args_foron_fn_chpl, INT64(2138), INT32(77));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
    tmp_chpl18 = this_chpl7;
    chpl_macro_tmp_2444.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2444.addr = tmp_chpl18;
    tmp_chpl19 = chpl_macro_tmp_2444;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2138), INT32(77));
    (_args_foron_fn_chpl)->_1_this = tmp_chpl19;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2138), INT32(77));
    (_args_foron_fn_chpl)->_2_rvfDerefTmp = rvfDerefTmp_chpl;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2138), INT32(77));
    (_args_foron_fn_chpl)->_3_hints = hints_chpl;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2138), INT32(77));
    (_args_foron_fn_chpl)->_4_start = start_chpl;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2138), INT32(77));
    (_args_foron_fn_chpl)->_5_end = end_chpl;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2138), INT32(77));
    (_args_foron_fn_chpl)->_6_rvfDerefTmp = local_style_chpl;
    tmp_chpl20 = &_formal_tmp_error_chpl;
    chpl_macro_tmp_2445.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2445.addr = tmp_chpl20;
    tmp_chpl21 = chpl_macro_tmp_2445;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2138), INT32(77));
    (_args_foron_fn_chpl)->_7__formal_tmp_error = tmp_chpl21;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl84_object);
    chpl_taskRunningCntDec(INT64(2138), INT32(77));
    /*** wrapon_fn_chpl84 ***/ chpl_executeOn(call_tmp_chpl37, INT32(96), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(2138), INT32(77));
    chpl_taskRunningCntInc(INT64(2138), INT32(77));
  }
  chpl_rmem_consist_acquire(INT64(2138), INT32(77));
  *(error_chpl) = _formal_tmp_error_chpl;
  return;
}

/* IO.chpl:2138 */
static void wrapon_fn_chpl84(_class_localson_fn_chpl84 c_chpl) {
  chpl____wide__ref_channel_T_dynamic_T _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  file_chpl _2_rvfDerefTmp_chpl;
  file_chpl tmp_chpl15;
  int32_t _3_hints_chpl;
  int64_t _4_start_chpl;
  int64_t _5_end_chpl;
  iostyleInternal _6_rvfDerefTmp_chpl;
  iostyleInternal tmp_chpl16;
  chpl____wide__ref_syserr _7__formal_tmp_error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(2138), INT32(77));
  chpl_check_nil(c_chpl, INT64(2138), INT32(77));
  _1_this_chpl = (c_chpl)->_1_this;
  chpl_check_nil(c_chpl, INT64(2138), INT32(77));
  tmp_chpl15 = (c_chpl)->_2_rvfDerefTmp;
  _2_rvfDerefTmp_chpl = tmp_chpl15;
  chpl_check_nil(c_chpl, INT64(2138), INT32(77));
  _3_hints_chpl = (c_chpl)->_3_hints;
  chpl_check_nil(c_chpl, INT64(2138), INT32(77));
  _4_start_chpl = (c_chpl)->_4_start;
  chpl_check_nil(c_chpl, INT64(2138), INT32(77));
  _5_end_chpl = (c_chpl)->_5_end;
  chpl_check_nil(c_chpl, INT64(2138), INT32(77));
  tmp_chpl16 = (c_chpl)->_6_rvfDerefTmp;
  _6_rvfDerefTmp_chpl = tmp_chpl16;
  chpl_check_nil(c_chpl, INT64(2138), INT32(77));
  _7__formal_tmp_error_chpl = (c_chpl)->_7__formal_tmp_error;
  chpl_taskRunningCntInc(INT64(2138), INT32(77));
  on_fn_chpl85(_1_this_chpl, &_2_rvfDerefTmp_chpl, _3_hints_chpl, _4_start_chpl, _5_end_chpl, _6_rvfDerefTmp_chpl, _7__formal_tmp_error_chpl);
  chpl_taskRunningCntDec(INT64(2138), INT32(77));
  chpl_rmem_consist_release(INT64(2138), INT32(77));
  return;
}

/* IO.chpl:2138 */
static void wrapon_fn_chpl85(_class_localson_fn_chpl85 c_chpl) {
  chpl____wide__ref_channel_F_dynamic_T _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  file_chpl _2_rvfDerefTmp_chpl;
  file_chpl tmp_chpl15;
  int32_t _3_hints_chpl;
  int64_t _4_start_chpl;
  int64_t _5_end_chpl;
  iostyleInternal _6_rvfDerefTmp_chpl;
  iostyleInternal tmp_chpl16;
  chpl____wide__ref_syserr _7__formal_tmp_error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(2138), INT32(77));
  chpl_check_nil(c_chpl, INT64(2138), INT32(77));
  _1_this_chpl = (c_chpl)->_1_this;
  chpl_check_nil(c_chpl, INT64(2138), INT32(77));
  tmp_chpl15 = (c_chpl)->_2_rvfDerefTmp;
  _2_rvfDerefTmp_chpl = tmp_chpl15;
  chpl_check_nil(c_chpl, INT64(2138), INT32(77));
  _3_hints_chpl = (c_chpl)->_3_hints;
  chpl_check_nil(c_chpl, INT64(2138), INT32(77));
  _4_start_chpl = (c_chpl)->_4_start;
  chpl_check_nil(c_chpl, INT64(2138), INT32(77));
  _5_end_chpl = (c_chpl)->_5_end;
  chpl_check_nil(c_chpl, INT64(2138), INT32(77));
  tmp_chpl16 = (c_chpl)->_6_rvfDerefTmp;
  _6_rvfDerefTmp_chpl = tmp_chpl16;
  chpl_check_nil(c_chpl, INT64(2138), INT32(77));
  _7__formal_tmp_error_chpl = (c_chpl)->_7__formal_tmp_error;
  chpl_taskRunningCntInc(INT64(2138), INT32(77));
  on_fn_chpl84(_1_this_chpl, &_2_rvfDerefTmp_chpl, _3_hints_chpl, _4_start_chpl, _5_end_chpl, _6_rvfDerefTmp_chpl, _7__formal_tmp_error_chpl);
  chpl_taskRunningCntDec(INT64(2138), INT32(77));
  chpl_rmem_consist_release(INT64(2138), INT32(77));
  return;
}

/* IO.chpl:2138 */
static void on_fn_chpl85(chpl____wide__ref_channel_T_dynamic_T this_chpl7,
                         file_chpl * f_chpl,
                         int32_t hints_chpl,
                         int64_t start_chpl,
                         int64_t end_chpl,
                         iostyleInternal local_style_chpl,
                         chpl____wide__ref_syserr _formal_tmp_error_chpl) {
  chpl____wide__ref_locale call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl call_tmp_chpl37 = NULL;
  chpl____wide__ref_locale tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_qio_channel_ptr_t call_tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  syserr call_tmp_chpl39;
  qio_file_ptr_t coerce_tmp_chpl3;
  qio_file_ptr_t tmp_chpl16;
  int32_t coerce_tmp_chpl4;
  int32_t coerce_tmp_chpl5;
  _ref_iostyleInternal_chpl rvfRerefTmp_chpl = NULL;
  _ref_qio_channel_ptr_t_chpl tmp_chpl17 = NULL;
  chpl____wide__ref_locale chpl_macro_tmp_2446;
  chpl____wide__ref_locale chpl_macro_tmp_2447;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_2448;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_2449;
  chpl_macro_tmp_2446.locale = (this_chpl7).locale;
  chpl_macro_tmp_2446.addr = &(((this_chpl7).addr)->home);
  call_tmp_chpl36 = chpl_macro_tmp_2446;
  call_tmp_chpl37 = &((f_chpl)->home);
  chpl_macro_tmp_2447.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2447.addr = call_tmp_chpl37;
  tmp_chpl15 = chpl_macro_tmp_2447;
  chpl___ASSIGN_2(call_tmp_chpl36, tmp_chpl15);
  chpl_macro_tmp_2448.locale = (this_chpl7).locale;
  chpl_macro_tmp_2448.addr = &(((this_chpl7).addr)->_channel_internal);
  call_tmp_chpl38 = chpl_macro_tmp_2448;
  tmp_chpl16 = (f_chpl)->_file_internal;
  coerce_tmp_chpl3 = tmp_chpl16;
  coerce_tmp_chpl4 = ((int32_t)(UINT8(false)));
  coerce_tmp_chpl5 = ((int32_t)(UINT8(true)));
  rvfRerefTmp_chpl = &local_style_chpl;
  chpl_check_local(chpl_nodeFromLocaleID((&call_tmp_chpl38)->locale, INT64(0), INT32(0)), INT64(2144), INT32(77), "references to remote data cannot be passed to external routines like 'qio_channel_create'");
  tmp_chpl17 = (&call_tmp_chpl38)->addr;
  call_tmp_chpl39 = qio_channel_create(tmp_chpl17, coerce_tmp_chpl3, hints_chpl, coerce_tmp_chpl4, coerce_tmp_chpl5, start_chpl, end_chpl, rvfRerefTmp_chpl);
  chpl_macro_tmp_2449.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2449.addr = tmp_chpl17;
  call_tmp_chpl38 = chpl_macro_tmp_2449;
  chpl_gen_comm_put(((void*)(&call_tmp_chpl39)), chpl_nodeFromLocaleID((_formal_tmp_error_chpl).locale, INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), COMMID(18), INT64(2144), INT64(77));
  return;
}

/* IO.chpl:2138 */
static void on_fn_chpl84(chpl____wide__ref_channel_F_dynamic_T this_chpl7,
                         file_chpl * f_chpl,
                         int32_t hints_chpl,
                         int64_t start_chpl,
                         int64_t end_chpl,
                         iostyleInternal local_style_chpl,
                         chpl____wide__ref_syserr _formal_tmp_error_chpl) {
  chpl____wide__ref_locale call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl call_tmp_chpl37 = NULL;
  chpl____wide__ref_locale tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_qio_channel_ptr_t call_tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  syserr call_tmp_chpl39;
  qio_file_ptr_t coerce_tmp_chpl3;
  qio_file_ptr_t tmp_chpl16;
  int32_t coerce_tmp_chpl4;
  int32_t coerce_tmp_chpl5;
  _ref_iostyleInternal_chpl rvfRerefTmp_chpl = NULL;
  _ref_qio_channel_ptr_t_chpl tmp_chpl17 = NULL;
  chpl____wide__ref_locale chpl_macro_tmp_2450;
  chpl____wide__ref_locale chpl_macro_tmp_2451;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_2452;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_2453;
  chpl_macro_tmp_2450.locale = (this_chpl7).locale;
  chpl_macro_tmp_2450.addr = &(((this_chpl7).addr)->home);
  call_tmp_chpl36 = chpl_macro_tmp_2450;
  call_tmp_chpl37 = &((f_chpl)->home);
  chpl_macro_tmp_2451.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2451.addr = call_tmp_chpl37;
  tmp_chpl15 = chpl_macro_tmp_2451;
  chpl___ASSIGN_2(call_tmp_chpl36, tmp_chpl15);
  chpl_macro_tmp_2452.locale = (this_chpl7).locale;
  chpl_macro_tmp_2452.addr = &(((this_chpl7).addr)->_channel_internal);
  call_tmp_chpl38 = chpl_macro_tmp_2452;
  tmp_chpl16 = (f_chpl)->_file_internal;
  coerce_tmp_chpl3 = tmp_chpl16;
  coerce_tmp_chpl4 = ((int32_t)(UINT8(true)));
  coerce_tmp_chpl5 = ((int32_t)(UINT8(false)));
  rvfRerefTmp_chpl = &local_style_chpl;
  chpl_check_local(chpl_nodeFromLocaleID((&call_tmp_chpl38)->locale, INT64(0), INT32(0)), INT64(2144), INT32(77), "references to remote data cannot be passed to external routines like 'qio_channel_create'");
  tmp_chpl17 = (&call_tmp_chpl38)->addr;
  call_tmp_chpl39 = qio_channel_create(tmp_chpl17, coerce_tmp_chpl3, hints_chpl, coerce_tmp_chpl4, coerce_tmp_chpl5, start_chpl, end_chpl, rvfRerefTmp_chpl);
  chpl_macro_tmp_2453.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2453.addr = tmp_chpl17;
  call_tmp_chpl38 = chpl_macro_tmp_2453;
  chpl_gen_comm_put(((void*)(&call_tmp_chpl39)), chpl_nodeFromLocaleID((_formal_tmp_error_chpl).locale, INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), COMMID(19), INT64(2144), INT64(77));
  return;
}

/* IO.chpl:2151 */
static void deinit_chpl45(channel_F_dynamic_T_chpl * this_chpl7) {
  string_chpl local__str_literal_75_chpl;
  _ref_locale_chpl call_tmp_chpl36 = NULL;
  chpl_localeID_t call_tmp_chpl37;
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  chpl____wide__ref_channel_F_dynamic_T tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl87 _args_foron_fn_chpl = NULL;
  _ref_channel_F_dynamic_T_chpl tmp_chpl17 = NULL;
  chpl____wide__ref_channel_F_dynamic_T tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  _ref_locale_chpl _field_destructor_tmp__chpl = NULL;
  chpl____wide__ref_locale tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl _field_destructor_tmp__chpl2 = NULL;
  chpl____wide__ref_locale tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object chpl_macro_tmp_2454;
  chpl____wide__nilType chpl_macro_tmp_2455;
  chpl____wide_object chpl_macro_tmp_2456;
  chpl____wide__ref_channel_F_dynamic_T chpl_macro_tmp_2457;
  chpl__class_localson_fn_chpl87_object chpl_macro_tmp_2458;
  chpl____wide__ref_channel_F_dynamic_T chpl_macro_tmp_2459;
  chpl____wide__ref_locale chpl_macro_tmp_2460;
  chpl____wide__ref_locale chpl_macro_tmp_2461;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  call_tmp_chpl36 = &((this_chpl7)->home);
  coerce_tmp_chpl3 = (call_tmp_chpl36)->_instance;
  chpl_macro_tmp_2454.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_2454.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_2454;
  chpl_macro_tmp_2455.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2455.addr = nil;
  chpl_macro_tmp_2456.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2456.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_2456;
  if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(2152), INT32(77));
  }
  call_tmp_chpl37 = (&coerce_tmp_chpl3)->locale;
  chpl_rmem_consist_release(INT64(2152), INT32(77));
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
  if (isdirect_chpl) {
    chpl_macro_tmp_2457.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2457.addr = this_chpl7;
    tmp_chpl16 = chpl_macro_tmp_2457;
    on_fn_chpl86(tmp_chpl16);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl87)(&chpl_macro_tmp_2458));
    chpl_check_nil(_args_foron_fn_chpl, INT64(2152), INT32(77));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
    tmp_chpl17 = this_chpl7;
    chpl_macro_tmp_2459.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2459.addr = tmp_chpl17;
    tmp_chpl18 = chpl_macro_tmp_2459;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2152), INT32(77));
    (_args_foron_fn_chpl)->_1_this = tmp_chpl18;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl87_object);
    chpl_taskRunningCntDec(INT64(2152), INT32(77));
    /*** wrapon_fn_chpl86 ***/ chpl_executeOn(call_tmp_chpl37, INT32(98), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(2152), INT32(77));
    chpl_taskRunningCntInc(INT64(2152), INT32(77));
  }
  chpl_rmem_consist_acquire(INT64(2152), INT32(77));
  _field_destructor_tmp__chpl = &((this_chpl7)->_readWriteThisFromLocale);
  chpl_macro_tmp_2460.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2460.addr = _field_destructor_tmp__chpl;
  tmp_chpl19 = chpl_macro_tmp_2460;
  deinit_chpl14(tmp_chpl19);
  _field_destructor_tmp__chpl2 = &((this_chpl7)->home);
  chpl_macro_tmp_2461.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2461.addr = _field_destructor_tmp__chpl2;
  tmp_chpl20 = chpl_macro_tmp_2461;
  deinit_chpl14(tmp_chpl20);
  return;
}

/* IO.chpl:2151 */
static void deinit_chpl46(channel_T_dynamic_T_chpl * this_chpl7) {
  string_chpl local__str_literal_75_chpl;
  _ref_locale_chpl call_tmp_chpl36 = NULL;
  chpl_localeID_t call_tmp_chpl37;
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  chpl____wide__ref_channel_T_dynamic_T tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl86 _args_foron_fn_chpl = NULL;
  _ref_channel_T_dynamic_T_chpl tmp_chpl17 = NULL;
  chpl____wide__ref_channel_T_dynamic_T tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  _ref_locale_chpl _field_destructor_tmp__chpl = NULL;
  chpl____wide__ref_locale tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl _field_destructor_tmp__chpl2 = NULL;
  chpl____wide__ref_locale tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object chpl_macro_tmp_2462;
  chpl____wide__nilType chpl_macro_tmp_2463;
  chpl____wide_object chpl_macro_tmp_2464;
  chpl____wide__ref_channel_T_dynamic_T chpl_macro_tmp_2465;
  chpl__class_localson_fn_chpl86_object chpl_macro_tmp_2466;
  chpl____wide__ref_channel_T_dynamic_T chpl_macro_tmp_2467;
  chpl____wide__ref_locale chpl_macro_tmp_2468;
  chpl____wide__ref_locale chpl_macro_tmp_2469;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  call_tmp_chpl36 = &((this_chpl7)->home);
  coerce_tmp_chpl3 = (call_tmp_chpl36)->_instance;
  chpl_macro_tmp_2462.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_2462.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_2462;
  chpl_macro_tmp_2463.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2463.addr = nil;
  chpl_macro_tmp_2464.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2464.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_2464;
  if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(2152), INT32(77));
  }
  call_tmp_chpl37 = (&coerce_tmp_chpl3)->locale;
  chpl_rmem_consist_release(INT64(2152), INT32(77));
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
  if (isdirect_chpl) {
    chpl_macro_tmp_2465.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2465.addr = this_chpl7;
    tmp_chpl16 = chpl_macro_tmp_2465;
    on_fn_chpl87(tmp_chpl16);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl86)(&chpl_macro_tmp_2466));
    chpl_check_nil(_args_foron_fn_chpl, INT64(2152), INT32(77));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
    tmp_chpl17 = this_chpl7;
    chpl_macro_tmp_2467.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2467.addr = tmp_chpl17;
    tmp_chpl18 = chpl_macro_tmp_2467;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2152), INT32(77));
    (_args_foron_fn_chpl)->_1_this = tmp_chpl18;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl86_object);
    chpl_taskRunningCntDec(INT64(2152), INT32(77));
    /*** wrapon_fn_chpl87 ***/ chpl_executeOn(call_tmp_chpl37, INT32(99), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(2152), INT32(77));
    chpl_taskRunningCntInc(INT64(2152), INT32(77));
  }
  chpl_rmem_consist_acquire(INT64(2152), INT32(77));
  _field_destructor_tmp__chpl = &((this_chpl7)->_readWriteThisFromLocale);
  chpl_macro_tmp_2468.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2468.addr = _field_destructor_tmp__chpl;
  tmp_chpl19 = chpl_macro_tmp_2468;
  deinit_chpl14(tmp_chpl19);
  _field_destructor_tmp__chpl2 = &((this_chpl7)->home);
  chpl_macro_tmp_2469.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2469.addr = _field_destructor_tmp__chpl2;
  tmp_chpl20 = chpl_macro_tmp_2469;
  deinit_chpl14(tmp_chpl20);
  return;
}

/* IO.chpl:2152 */
static void wrapon_fn_chpl87(_class_localson_fn_chpl86 c_chpl) {
  chpl____wide__ref_channel_T_dynamic_T _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(2152), INT32(77));
  chpl_check_nil(c_chpl, INT64(2152), INT32(77));
  _1_this_chpl = (c_chpl)->_1_this;
  chpl_taskRunningCntInc(INT64(2152), INT32(77));
  on_fn_chpl87(_1_this_chpl);
  chpl_taskRunningCntDec(INT64(2152), INT32(77));
  chpl_rmem_consist_release(INT64(2152), INT32(77));
  return;
}

/* IO.chpl:2152 */
static void wrapon_fn_chpl86(_class_localson_fn_chpl87 c_chpl) {
  chpl____wide__ref_channel_F_dynamic_T _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(2152), INT32(77));
  chpl_check_nil(c_chpl, INT64(2152), INT32(77));
  _1_this_chpl = (c_chpl)->_1_this;
  chpl_taskRunningCntInc(INT64(2152), INT32(77));
  on_fn_chpl86(_1_this_chpl);
  chpl_taskRunningCntDec(INT64(2152), INT32(77));
  chpl_rmem_consist_release(INT64(2152), INT32(77));
  return;
}

/* IO.chpl:2152 */
static void on_fn_chpl87(chpl____wide__ref_channel_T_dynamic_T this_chpl7) {
  qio_channel_ptr_t coerce_tmp_chpl3;
  qio_channel_ptr_t tmp_chpl15;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_2470;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_2471;
  qio_channel_ptr_t chpl_macro_tmp_2472;
  chpl_macro_tmp_2470.locale = (this_chpl7).locale;
  chpl_macro_tmp_2470.addr = &(((this_chpl7).addr)->_channel_internal);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_2470).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2470).addr, sizeof(qio_channel_ptr_t), COMMID(20), INT64(2153), INT64(77));
  coerce_tmp_chpl3 = tmp_chpl15;
  qio_channel_release(coerce_tmp_chpl3);
  chpl_macro_tmp_2471.locale = (this_chpl7).locale;
  chpl_macro_tmp_2471.addr = &(((this_chpl7).addr)->_channel_internal);
  chpl_macro_tmp_2472 = QIO_CHANNEL_PTR_NULL;
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_2472)), chpl_nodeFromLocaleID((chpl_macro_tmp_2471).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2471).addr, sizeof(qio_channel_ptr_t), COMMID(21), INT64(2154), INT64(77));
  return;
}

/* IO.chpl:2152 */
static void on_fn_chpl86(chpl____wide__ref_channel_F_dynamic_T this_chpl7) {
  qio_channel_ptr_t coerce_tmp_chpl3;
  qio_channel_ptr_t tmp_chpl15;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_2473;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_2474;
  qio_channel_ptr_t chpl_macro_tmp_2475;
  chpl_macro_tmp_2473.locale = (this_chpl7).locale;
  chpl_macro_tmp_2473.addr = &(((this_chpl7).addr)->_channel_internal);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_2473).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2473).addr, sizeof(qio_channel_ptr_t), COMMID(22), INT64(2153), INT64(77));
  coerce_tmp_chpl3 = tmp_chpl15;
  qio_channel_release(coerce_tmp_chpl3);
  chpl_macro_tmp_2474.locale = (this_chpl7).locale;
  chpl_macro_tmp_2474.addr = &(((this_chpl7).addr)->_channel_internal);
  chpl_macro_tmp_2475 = QIO_CHANNEL_PTR_NULL;
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_2475)), chpl_nodeFromLocaleID((chpl_macro_tmp_2474).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2474).addr, sizeof(qio_channel_ptr_t), COMMID(23), INT64(2154), INT64(77));
  return;
}

/* IO.chpl:2199 */
static void init_chpl80(ioNewline_chpl * this_chpl7,
                        chpl_bool skipWhitespaceOnly_chpl) {
  (this_chpl7)->skipWhitespaceOnly = skipWhitespaceOnly_chpl;
  return;
}

/* IO.chpl:2273 */
static void _ch_ioerror_chpl(channel_T_dynamic_T_chpl * this_chpl7,
                             syserr error_chpl,
                             string_chpl * msg_chpl,
                             chpl____wide_Error * error_out_chpl) {
  string_chpl local__str_literal_75_chpl;
  string_chpl local__str_literal_1888_chpl;
  string_chpl path_chpl2;
  int64_t offset_chpl;
  _ref_locale_chpl call_tmp_chpl36 = NULL;
  chpl_localeID_t call_tmp_chpl37;
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_T_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_Error tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl88 _args_foron_fn_chpl = NULL;
  _ref_string_chpl tmp_chpl19 = NULL;
  chpl____wide__ref_string tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t_chpl tmp_chpl21 = NULL;
  chpl____wide__ref_int64_t tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl23 = NULL;
  chpl____wide__ref__wide_Error tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl25 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error error_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl26 = NULL;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl28 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object chpl_macro_tmp_2476;
  chpl____wide__nilType chpl_macro_tmp_2477;
  chpl____wide_object chpl_macro_tmp_2478;
  chpl____wide__nilType chpl_macro_tmp_2479;
  chpl____wide_Error chpl_macro_tmp_2480;
  chpl____wide__ref_string chpl_macro_tmp_2481;
  chpl____wide__ref_int64_t chpl_macro_tmp_2482;
  chpl____wide__ref__wide_Error chpl_macro_tmp_2483;
  chpl__class_localson_fn_chpl88_object chpl_macro_tmp_2484;
  chpl____wide__ref_string chpl_macro_tmp_2485;
  chpl____wide__ref_int64_t chpl_macro_tmp_2486;
  chpl____wide__ref__wide_Error chpl_macro_tmp_2487;
  chpl____wide__ref_string chpl_macro_tmp_2488;
  chpl____wide__nilType chpl_macro_tmp_2489;
  chpl____wide_Error chpl_macro_tmp_2490;
  chpl____wide__ref_string chpl_macro_tmp_2491;
  chpl____wide__ref_string chpl_macro_tmp_2492;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  local__str_literal_1888_chpl = _str_literal_1888_chpl /* "unknown" */;
  path_chpl2 = local__str_literal_1888_chpl;
  offset_chpl = INT64(-1);
  call_tmp_chpl36 = &((this_chpl7)->home);
  coerce_tmp_chpl3 = (call_tmp_chpl36)->_instance;
  chpl_macro_tmp_2476.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_2476.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_2476;
  chpl_macro_tmp_2477.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2477.addr = nil;
  chpl_macro_tmp_2478.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2478.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_2478;
  if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(2276), INT32(77));
  }
  call_tmp_chpl37 = (&coerce_tmp_chpl3)->locale;
  chpl_rmem_consist_release(INT64(2276), INT32(77));
  chpl_macro_tmp_2479.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2479.addr = nil;
  chpl_macro_tmp_2480.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2480.addr = NULL;
  error_chpl2 = chpl_macro_tmp_2480;
  rvfDerefTmp_chpl = *(this_chpl7);
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
  if (isdirect_chpl) {
    chpl_macro_tmp_2481.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2481.addr = &path_chpl2;
    tmp_chpl16 = chpl_macro_tmp_2481;
    chpl_macro_tmp_2482.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2482.addr = &offset_chpl;
    tmp_chpl17 = chpl_macro_tmp_2482;
    chpl_macro_tmp_2483.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2483.addr = &error_chpl2;
    tmp_chpl18 = chpl_macro_tmp_2483;
    on_fn_chpl88(&rvfDerefTmp_chpl, tmp_chpl16, tmp_chpl17, tmp_chpl18);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl88)(&chpl_macro_tmp_2484));
    chpl_check_nil(_args_foron_fn_chpl, INT64(2276), INT32(77));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2276), INT32(77));
    (_args_foron_fn_chpl)->_1_rvfDerefTmp = rvfDerefTmp_chpl;
    tmp_chpl19 = &path_chpl2;
    chpl_macro_tmp_2485.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2485.addr = tmp_chpl19;
    tmp_chpl20 = chpl_macro_tmp_2485;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2276), INT32(77));
    (_args_foron_fn_chpl)->_2_path = tmp_chpl20;
    tmp_chpl21 = &offset_chpl;
    chpl_macro_tmp_2486.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2486.addr = tmp_chpl21;
    tmp_chpl22 = chpl_macro_tmp_2486;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2276), INT32(77));
    (_args_foron_fn_chpl)->_3_offset = tmp_chpl22;
    tmp_chpl23 = &error_chpl2;
    chpl_macro_tmp_2487.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2487.addr = tmp_chpl23;
    tmp_chpl24 = chpl_macro_tmp_2487;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2276), INT32(77));
    (_args_foron_fn_chpl)->_4_error = tmp_chpl24;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl88_object);
    chpl_taskRunningCntDec(INT64(2276), INT32(77));
    /*** wrapon_fn_chpl88 ***/ chpl_executeOn(call_tmp_chpl37, INT32(100), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(2276), INT32(77));
    chpl_taskRunningCntInc(INT64(2276), INT32(77));
  }
  if ((&error_chpl2)->addr != nil) {
    *(error_out_chpl) = error_chpl2;
    i_x_chpl = &path_chpl2;
    chpl_macro_tmp_2488.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2488.addr = i_x_chpl;
    tmp_chpl25 = chpl_macro_tmp_2488;
    deinit_chpl42(tmp_chpl25);
    goto _end_ch_ioerror_chpl;
  }
  chpl_rmem_consist_acquire(INT64(2276), INT32(77));
  chpl_macro_tmp_2489.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2489.addr = nil;
  chpl_macro_tmp_2490.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2490.addr = NULL;
  error_chpl3 = chpl_macro_tmp_2490;
  tmp_chpl26 = &error_chpl3;
  ioerror_chpl(error_chpl, msg_chpl, &path_chpl2, offset_chpl, tmp_chpl26, INT64(2291), INT32(77));
  if ((&error_chpl3)->addr != nil) {
    goto handler_chpl;
  }
  handler_chpl:;
  if ((&error_chpl3)->addr != nil) {
    *(error_out_chpl) = error_chpl3;
    i_x_chpl2 = &path_chpl2;
    chpl_macro_tmp_2491.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2491.addr = i_x_chpl2;
    tmp_chpl27 = chpl_macro_tmp_2491;
    deinit_chpl42(tmp_chpl27);
    goto _end_ch_ioerror_chpl;
  }
  i_x_chpl3 = &path_chpl2;
  chpl_macro_tmp_2492.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2492.addr = i_x_chpl3;
  tmp_chpl28 = chpl_macro_tmp_2492;
  deinit_chpl42(tmp_chpl28);
  _end_ch_ioerror_chpl:;
  return;
}

/* IO.chpl:2276 */
static void wrapon_fn_chpl88(_class_localson_fn_chpl88 c_chpl) {
  channel_T_dynamic_T_chpl _1_rvfDerefTmp_chpl;
  channel_T_dynamic_T_chpl tmp_chpl15;
  chpl____wide__ref_string _2_path_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t _3_offset_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_Error _4_error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(2276), INT32(77));
  chpl_check_nil(c_chpl, INT64(2276), INT32(77));
  tmp_chpl15 = (c_chpl)->_1_rvfDerefTmp;
  _1_rvfDerefTmp_chpl = tmp_chpl15;
  chpl_check_nil(c_chpl, INT64(2276), INT32(77));
  _2_path_chpl = (c_chpl)->_2_path;
  chpl_check_nil(c_chpl, INT64(2276), INT32(77));
  _3_offset_chpl = (c_chpl)->_3_offset;
  chpl_check_nil(c_chpl, INT64(2276), INT32(77));
  _4_error_chpl = (c_chpl)->_4_error;
  chpl_taskRunningCntInc(INT64(2276), INT32(77));
  on_fn_chpl88(&_1_rvfDerefTmp_chpl, _2_path_chpl, _3_offset_chpl, _4_error_chpl);
  chpl_taskRunningCntDec(INT64(2276), INT32(77));
  chpl_rmem_consist_release(INT64(2276), INT32(77));
  return;
}

/* IO.chpl:2276 */
static void on_fn_chpl88(channel_T_dynamic_T_chpl * this_chpl7,
                         chpl____wide__ref_string path_chpl2,
                         chpl____wide__ref_int64_t offset_chpl,
                         chpl____wide__ref__wide_Error error_out_chpl) {
  c_string tmp_path_chpl;
  int64_t tmp_offset_chpl;
  syserr call_tmp_chpl36;
  qio_channel_ptr_t coerce_tmp_chpl3;
  qio_channel_ptr_t tmp_chpl15;
  int32_t call_tmp_chpl37;
  string_chpl call_tmp_chpl38;
  Error_chpl error_chpl = NULL;
  int64_t call_tmp_chpl39;
  chpl____wide_Error tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl;
  chpl____wide_Error error_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl2;
  string_chpl call_tmp_chpl40;
  chpl____wide_Error error_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_tmp_chpl;
  _ref__wide_Error_chpl tmp_chpl17 = NULL;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_c_string_chpl i_cs_chpl = NULL;
  int64_t call_tmp_chpl41;
  int64_t call_tmp_chpl42;
  qio_channel_ptr_t coerce_tmp_chpl4;
  qio_channel_ptr_t tmp_chpl19;
  chpl____wide_Error chpl_macro_tmp_2493;
  chpl____wide__nilType chpl_macro_tmp_2494;
  chpl____wide_Error chpl_macro_tmp_2495;
  chpl____wide__nilType chpl_macro_tmp_2496;
  chpl____wide_Error chpl_macro_tmp_2497;
  chpl____wide__nilType chpl_macro_tmp_2498;
  chpl____wide_Error chpl_macro_tmp_2499;
  chpl____wide__ref_string chpl_macro_tmp_2500;
  tmp_path_chpl = ((c_string)(nil));
  tmp_offset_chpl = INT64(0);
  qio_int_to_err(INT32(0));
  tmp_chpl15 = (this_chpl7)->_channel_internal;
  coerce_tmp_chpl3 = tmp_chpl15;
  call_tmp_chpl36 = qio_channel_path_offset(((int32_t)(UINT8(true))), coerce_tmp_chpl3, &tmp_path_chpl, &tmp_offset_chpl);
  call_tmp_chpl37 = qio_err_iserr(call_tmp_chpl36);
  if (call_tmp_chpl37 == INT32(0)) {
    error_chpl = NULL;
    call_tmp_chpl39 = string_length_bytes(tmp_path_chpl);
    if (error_chpl != nil) {
      chpl_macro_tmp_2493.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2493.addr = error_chpl;
      tmp_chpl16 = chpl_macro_tmp_2493;
      chpl_gen_comm_put(((void*)(&tmp_chpl16)), chpl_nodeFromLocaleID((error_out_chpl).locale, INT64(0), INT32(0)), (error_out_chpl).addr, sizeof(chpl____wide_Error), COMMID(24), INT64(2283), INT64(77));
      goto _endon_fn_chpl;
    }
    chpl_macro_tmp_2494.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2494.addr = nil;
    chpl_macro_tmp_2495.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2495.addr = NULL;
    error_chpl2 = chpl_macro_tmp_2495;
    chpl_macro_tmp_2496.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2496.addr = nil;
    chpl_macro_tmp_2497.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2497.addr = NULL;
    error_chpl3 = chpl_macro_tmp_2497;
    chpl_macro_tmp_2498.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2498.addr = nil;
    chpl_macro_tmp_2499.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2499.addr = NULL;
    error_chpl4 = chpl_macro_tmp_2499;
    tmp_chpl17 = &error_chpl4;
    decodeByteBuffer_chpl(((c_ptr_uint8_t_chpl)(tmp_path_chpl)), call_tmp_chpl39, decodePolicy_chpl_replace_chpl, tmp_chpl17, &ret_tmp_chpl);
    call_tmp_chpl40 = ret_tmp_chpl;
    if ((&error_chpl4)->addr != nil) {
      error_chpl3 = error_chpl4;
      goto _endcreateStringWithNewBuffer_chpl;
    }
    ret_chpl2 = call_tmp_chpl40;
    _endcreateStringWithNewBuffer_chpl:;
    if ((&error_chpl3)->addr != nil) {
      error_chpl2 = error_chpl3;
      goto _endcreateStringWithNewBuffer_chpl2;
    }
    ret_chpl = ret_chpl2;
    _endcreateStringWithNewBuffer_chpl2:;
    call_tmp_chpl38 = ret_chpl;
    if ((&error_chpl2)->addr != nil) {
      chpl_gen_comm_put(((void*)(&error_chpl2)), chpl_nodeFromLocaleID((error_out_chpl).locale, INT64(0), INT32(0)), (error_out_chpl).addr, sizeof(chpl____wide_Error), COMMID(25), INT64(2283), INT64(77));
      goto _endon_fn_chpl;
    }
    chpl___ASSIGN_6(path_chpl2, &call_tmp_chpl38);
    i_x_chpl = &call_tmp_chpl38;
    chpl_macro_tmp_2500.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2500.addr = i_x_chpl;
    tmp_chpl18 = chpl_macro_tmp_2500;
    deinit_chpl42(tmp_chpl18);
    i_cs_chpl = &tmp_path_chpl;
    call_tmp_chpl41 = string_compare(tmp_path_chpl, ((c_string)(nil)));
    if (call_tmp_chpl41 != INT64(0)) {
      chpl_rt_free_c_string(i_cs_chpl, INT64(2285), INT32(77));
    }
  } else {
    tmp_chpl19 = (this_chpl7)->_channel_internal;
    coerce_tmp_chpl4 = tmp_chpl19;
    call_tmp_chpl42 = qio_channel_offset_unlocked(coerce_tmp_chpl4);
    tmp_offset_chpl = call_tmp_chpl42;
  }
  chpl_gen_comm_put(((void*)(&tmp_offset_chpl)), chpl_nodeFromLocaleID((offset_chpl).locale, INT64(0), INT32(0)), (offset_chpl).addr, sizeof(int64_t), COMMID(26), INT64(2289), INT64(77));
  _endon_fn_chpl:;
  return;
}

/* IO.chpl:2328 */
static void wrapon_fn_chpl89(_class_localson_fn_chpl89 c_chpl) {
  channel_T_dynamic_T_chpl _1_rvfDerefTmp_chpl;
  channel_T_dynamic_T_chpl tmp_chpl15;
  chpl____wide__ref_syserr _2_err_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(2328), INT32(77));
  chpl_check_nil(c_chpl, INT64(2328), INT32(77));
  tmp_chpl15 = (c_chpl)->_1_rvfDerefTmp;
  _1_rvfDerefTmp_chpl = tmp_chpl15;
  chpl_check_nil(c_chpl, INT64(2328), INT32(77));
  _2_err_chpl = (c_chpl)->_2_err;
  chpl_taskRunningCntInc(INT64(2328), INT32(77));
  on_fn_chpl89(&_1_rvfDerefTmp_chpl, _2_err_chpl);
  chpl_taskRunningCntDec(INT64(2328), INT32(77));
  chpl_rmem_consist_release(INT64(2328), INT32(77));
  return;
}

/* IO.chpl:2328 */
static void on_fn_chpl89(channel_T_dynamic_T_chpl * this_chpl7,
                         chpl____wide__ref_syserr err_chpl) {
  syserr call_tmp_chpl36;
  qio_channel_ptr_t coerce_tmp_chpl3;
  qio_channel_ptr_t tmp_chpl15;
  tmp_chpl15 = (this_chpl7)->_channel_internal;
  coerce_tmp_chpl3 = tmp_chpl15;
  call_tmp_chpl36 = qio_channel_lock(coerce_tmp_chpl3);
  chpl_gen_comm_put(((void*)(&call_tmp_chpl36)), chpl_nodeFromLocaleID((err_chpl).locale, INT64(0), INT32(0)), (err_chpl).addr, sizeof(syserr), COMMID(27), INT64(2329), INT64(77));
  return;
}

/* IO.chpl:2340 */
static void wrapon_fn_chpl90(_class_localson_fn_chpl90 c_chpl) {
  channel_T_dynamic_T_chpl _1_rvfDerefTmp_chpl;
  channel_T_dynamic_T_chpl tmp_chpl15;
  chpl_rmem_consist_acquire(INT64(2340), INT32(77));
  chpl_check_nil(c_chpl, INT64(2340), INT32(77));
  tmp_chpl15 = (c_chpl)->_1_rvfDerefTmp;
  _1_rvfDerefTmp_chpl = tmp_chpl15;
  chpl_taskRunningCntInc(INT64(2340), INT32(77));
  on_fn_chpl90(&_1_rvfDerefTmp_chpl);
  chpl_taskRunningCntDec(INT64(2340), INT32(77));
  chpl_rmem_consist_release(INT64(2340), INT32(77));
  return;
}

/* IO.chpl:2340 */
static void on_fn_chpl90(channel_T_dynamic_T_chpl * this_chpl7) {
  qio_channel_ptr_t coerce_tmp_chpl3;
  qio_channel_ptr_t tmp_chpl15;
  tmp_chpl15 = (this_chpl7)->_channel_internal;
  coerce_tmp_chpl3 = tmp_chpl15;
  qio_channel_unlock(coerce_tmp_chpl3);
  return;
}

/* IO.chpl:2819 */
static void reader_chpl(file_chpl * this_chpl7,
                        int64_t start_chpl,
                        int64_t end_chpl,
                        int32_t hints_chpl,
                        chpl____wide_Error * error_out_chpl,
                        channel_F_dynamic_T_chpl * _retArg_chpl) {
  channel_F_dynamic_T_chpl ret_chpl;
  channel_F_dynamic_T_chpl call_tmp_chpl36;
  iostyleInternal default_arg_style_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  iostyleInternal ret_chpl2;
  iostyleInternal style_chpl;
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  chpl____wide_Error error_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_F_dynamic_T_chpl ret_tmp_chpl;
  _ref__wide_Error_chpl tmp_chpl16 = NULL;
  chpl____wide__nilType chpl_macro_tmp_2501;
  chpl____wide_Error chpl_macro_tmp_2502;
  chpl____wide__nilType chpl_macro_tmp_2503;
  chpl____wide_Error chpl_macro_tmp_2504;
  chpl____wide__nilType chpl_macro_tmp_2505;
  chpl____wide_Error chpl_macro_tmp_2506;
  chpl_macro_tmp_2501.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2501.addr = nil;
  chpl_macro_tmp_2502.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2502.addr = NULL;
  error_chpl = chpl_macro_tmp_2502;
  chpl_macro_tmp_2503.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2503.addr = nil;
  chpl_macro_tmp_2504.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2504.addr = NULL;
  error_chpl2 = chpl_macro_tmp_2504;
  tmp_chpl15 = &error_chpl2;
  style_chpl = _style_chpl(this_chpl7, tmp_chpl15);
  if ((&error_chpl2)->addr != nil) {
    error_chpl = error_chpl2;
    goto _endreaderHelper_default_style_chpl;
  }
  ret_chpl2 = style_chpl;
  _endreaderHelper_default_style_chpl:;
  default_arg_style_chpl = ret_chpl2;
  if ((&error_chpl)->addr != nil) {
    *(error_out_chpl) = error_chpl;
    goto _endreader_chpl;
  }
  chpl_macro_tmp_2505.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2505.addr = nil;
  chpl_macro_tmp_2506.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2506.addr = NULL;
  error_chpl3 = chpl_macro_tmp_2506;
  tmp_chpl16 = &error_chpl3;
  readerHelper_chpl(this_chpl7, start_chpl, end_chpl, hints_chpl, &default_arg_style_chpl, tmp_chpl16, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  if ((&error_chpl3)->addr != nil) {
    *(error_out_chpl) = error_chpl3;
    goto _endreader_chpl;
  }
  ret_chpl = call_tmp_chpl36;
  _endreader_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:2825 */
static void readerHelper_chpl(file_chpl * this_chpl7,
                              int64_t start_chpl,
                              int64_t end_chpl,
                              int32_t hints_chpl,
                              iostyleInternal * style_chpl,
                              chpl____wide_Error * error_out_chpl,
                              channel_F_dynamic_T_chpl * _retArg_chpl) {
  string_chpl local__str_literal_1932_chpl;
  string_chpl local__str_literal_75_chpl;
  channel_F_dynamic_T_chpl ret_chpl;
  channel_F_dynamic_T_chpl ret_chpl2;
  syserr err_chpl;
  syserr call_tmp_chpl36;
  _ref_locale_chpl call_tmp_chpl37 = NULL;
  chpl_localeID_t call_tmp_chpl38;
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  file_chpl rvfDerefTmp_chpl;
  iostyleInternal rvfDerefTmp_chpl2;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_channel_F_dynamic_T tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_syserr tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_Error tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl91 _args_foron_fn_chpl = NULL;
  _ref_channel_F_dynamic_T_chpl tmp_chpl19 = NULL;
  chpl____wide__ref_channel_F_dynamic_T tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_syserr_chpl tmp_chpl21 = NULL;
  chpl____wide__ref_syserr tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl23 = NULL;
  chpl____wide__ref__wide_Error tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  _ref_channel_F_dynamic_T_chpl i_x_chpl = NULL;
  int32_t call_tmp_chpl39;
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl40;
  string_chpl ret_tmp_chpl;
  _ref__wide_Error_chpl tmp_chpl25 = NULL;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_channel_F_dynamic_T_chpl i_x_chpl4 = NULL;
  chpl____wide_object chpl_macro_tmp_2507;
  chpl____wide__nilType chpl_macro_tmp_2508;
  chpl____wide_object chpl_macro_tmp_2509;
  chpl____wide__nilType chpl_macro_tmp_2510;
  chpl____wide_Error chpl_macro_tmp_2511;
  chpl____wide__ref_channel_F_dynamic_T chpl_macro_tmp_2512;
  chpl____wide__ref_syserr chpl_macro_tmp_2513;
  chpl____wide__ref__wide_Error chpl_macro_tmp_2514;
  chpl__class_localson_fn_chpl91_object chpl_macro_tmp_2515;
  chpl____wide__ref_channel_F_dynamic_T chpl_macro_tmp_2516;
  chpl____wide__ref_syserr chpl_macro_tmp_2517;
  chpl____wide__ref__wide_Error chpl_macro_tmp_2518;
  chpl____wide__nilType chpl_macro_tmp_2519;
  chpl____wide_Error chpl_macro_tmp_2520;
  chpl____wide__ref_string chpl_macro_tmp_2521;
  chpl____wide__ref_string chpl_macro_tmp_2522;
  local__str_literal_1932_chpl = _str_literal_1932_chpl /* "in file.reader" */;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  init_chpl76(&ret_chpl2);
  call_tmp_chpl36 = qio_int_to_err(INT32(0));
  err_chpl = call_tmp_chpl36;
  call_tmp_chpl37 = &((this_chpl7)->home);
  coerce_tmp_chpl3 = (call_tmp_chpl37)->_instance;
  chpl_macro_tmp_2507.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_2507.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_2507;
  chpl_macro_tmp_2508.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2508.addr = nil;
  chpl_macro_tmp_2509.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2509.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_2509;
  if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(2834), INT32(77));
  }
  call_tmp_chpl38 = (&coerce_tmp_chpl3)->locale;
  chpl_rmem_consist_release(INT64(2834), INT32(77));
  chpl_macro_tmp_2510.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2510.addr = nil;
  chpl_macro_tmp_2511.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2511.addr = NULL;
  error_chpl = chpl_macro_tmp_2511;
  rvfDerefTmp_chpl = *(this_chpl7);
  rvfDerefTmp_chpl2 = *(style_chpl);
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl38);
  if (isdirect_chpl) {
    chpl_macro_tmp_2512.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2512.addr = &ret_chpl2;
    tmp_chpl16 = chpl_macro_tmp_2512;
    chpl_macro_tmp_2513.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2513.addr = &err_chpl;
    tmp_chpl17 = chpl_macro_tmp_2513;
    chpl_macro_tmp_2514.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2514.addr = &error_chpl;
    tmp_chpl18 = chpl_macro_tmp_2514;
    on_fn_chpl91(&rvfDerefTmp_chpl, start_chpl, end_chpl, hints_chpl, rvfDerefTmp_chpl2, tmp_chpl16, tmp_chpl17, tmp_chpl18);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl91)(&chpl_macro_tmp_2515));
    chpl_check_nil(_args_foron_fn_chpl, INT64(2834), INT32(77));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl38;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2834), INT32(77));
    (_args_foron_fn_chpl)->_1_rvfDerefTmp = rvfDerefTmp_chpl;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2834), INT32(77));
    (_args_foron_fn_chpl)->_2_start = start_chpl;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2834), INT32(77));
    (_args_foron_fn_chpl)->_3_end = end_chpl;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2834), INT32(77));
    (_args_foron_fn_chpl)->_4_hints = hints_chpl;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2834), INT32(77));
    (_args_foron_fn_chpl)->_5_rvfDerefTmp = rvfDerefTmp_chpl2;
    tmp_chpl19 = &ret_chpl2;
    chpl_macro_tmp_2516.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2516.addr = tmp_chpl19;
    tmp_chpl20 = chpl_macro_tmp_2516;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2834), INT32(77));
    (_args_foron_fn_chpl)->_6_ret = tmp_chpl20;
    tmp_chpl21 = &err_chpl;
    chpl_macro_tmp_2517.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2517.addr = tmp_chpl21;
    tmp_chpl22 = chpl_macro_tmp_2517;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2834), INT32(77));
    (_args_foron_fn_chpl)->_7_err = tmp_chpl22;
    tmp_chpl23 = &error_chpl;
    chpl_macro_tmp_2518.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2518.addr = tmp_chpl23;
    tmp_chpl24 = chpl_macro_tmp_2518;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2834), INT32(77));
    (_args_foron_fn_chpl)->_8_error = tmp_chpl24;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl91_object);
    chpl_taskRunningCntDec(INT64(2834), INT32(77));
    /*** wrapon_fn_chpl91 ***/ chpl_executeOn(call_tmp_chpl38, INT32(103), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(2834), INT32(77));
    chpl_taskRunningCntInc(INT64(2834), INT32(77));
  }
  if ((&error_chpl)->addr != nil) {
    *(error_out_chpl) = error_chpl;
    i_x_chpl = &ret_chpl2;
    deinit_chpl45(i_x_chpl);
    goto _end_readerHelper_chpl;
  }
  chpl_rmem_consist_acquire(INT64(2834), INT32(77));
  call_tmp_chpl39 = qio_err_iserr(err_chpl);
  if (call_tmp_chpl39 != INT32(0)) {
    chpl_macro_tmp_2519.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2519.addr = nil;
    chpl_macro_tmp_2520.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2520.addr = NULL;
    error_chpl2 = chpl_macro_tmp_2520;
    tryGetPath_chpl(this_chpl7, &ret_tmp_chpl);
    call_tmp_chpl40 = ret_tmp_chpl;
    tmp_chpl25 = &error_chpl2;
    ioerror_chpl2(err_chpl, &local__str_literal_1932_chpl, &call_tmp_chpl40, tmp_chpl25, INT64(2838), INT32(77));
    if ((&error_chpl2)->addr != nil) {
      i_x_chpl2 = &call_tmp_chpl40;
      chpl_macro_tmp_2521.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2521.addr = i_x_chpl2;
      tmp_chpl26 = chpl_macro_tmp_2521;
      deinit_chpl42(tmp_chpl26);
      goto handler_chpl;
    }
    i_x_chpl3 = &call_tmp_chpl40;
    chpl_macro_tmp_2522.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2522.addr = i_x_chpl3;
    tmp_chpl27 = chpl_macro_tmp_2522;
    deinit_chpl42(tmp_chpl27);
    handler_chpl:;
    if ((&error_chpl2)->addr != nil) {
      *(error_out_chpl) = error_chpl2;
      i_x_chpl4 = &ret_chpl2;
      deinit_chpl45(i_x_chpl4);
      goto _end_readerHelper_chpl;
    }
  }
  ret_chpl = ret_chpl2;
  _end_readerHelper_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:2834 */
static void wrapon_fn_chpl91(_class_localson_fn_chpl91 c_chpl) {
  file_chpl _1_rvfDerefTmp_chpl;
  file_chpl tmp_chpl15;
  int64_t _2_start_chpl;
  int64_t _3_end_chpl;
  int32_t _4_hints_chpl;
  iostyleInternal _5_rvfDerefTmp_chpl;
  iostyleInternal tmp_chpl16;
  chpl____wide__ref_channel_F_dynamic_T _6_ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_syserr _7_err_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_Error _8_error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(2834), INT32(77));
  chpl_check_nil(c_chpl, INT64(2834), INT32(77));
  tmp_chpl15 = (c_chpl)->_1_rvfDerefTmp;
  _1_rvfDerefTmp_chpl = tmp_chpl15;
  chpl_check_nil(c_chpl, INT64(2834), INT32(77));
  _2_start_chpl = (c_chpl)->_2_start;
  chpl_check_nil(c_chpl, INT64(2834), INT32(77));
  _3_end_chpl = (c_chpl)->_3_end;
  chpl_check_nil(c_chpl, INT64(2834), INT32(77));
  _4_hints_chpl = (c_chpl)->_4_hints;
  chpl_check_nil(c_chpl, INT64(2834), INT32(77));
  tmp_chpl16 = (c_chpl)->_5_rvfDerefTmp;
  _5_rvfDerefTmp_chpl = tmp_chpl16;
  chpl_check_nil(c_chpl, INT64(2834), INT32(77));
  _6_ret_chpl = (c_chpl)->_6_ret;
  chpl_check_nil(c_chpl, INT64(2834), INT32(77));
  _7_err_chpl = (c_chpl)->_7_err;
  chpl_check_nil(c_chpl, INT64(2834), INT32(77));
  _8_error_chpl = (c_chpl)->_8_error;
  chpl_taskRunningCntInc(INT64(2834), INT32(77));
  on_fn_chpl91(&_1_rvfDerefTmp_chpl, _2_start_chpl, _3_end_chpl, _4_hints_chpl, _5_rvfDerefTmp_chpl, _6_ret_chpl, _7_err_chpl, _8_error_chpl);
  chpl_taskRunningCntDec(INT64(2834), INT32(77));
  chpl_rmem_consist_release(INT64(2834), INT32(77));
  return;
}

/* IO.chpl:2834 */
static void on_fn_chpl91(file_chpl * this_chpl7,
                         int64_t start_chpl,
                         int64_t end_chpl,
                         int32_t hints_chpl,
                         iostyleInternal style_chpl,
                         chpl____wide__ref_channel_F_dynamic_T ret_chpl,
                         chpl____wide__ref_syserr err_chpl,
                         chpl____wide__ref__wide_Error error_out_chpl) {
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_file_chpl rvfRerefTmp_chpl = NULL;
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  channel_F_dynamic_T_chpl call_tmp_chpl36;
  channel_F_dynamic_T_chpl initTemp_chpl;
  syserr _formal_tmp_out_error_chpl;
  _ref_file_chpl rvfRerefTmp_chpl2 = NULL;
  _ref_channel_F_dynamic_T_chpl i_x_chpl = NULL;
  chpl____wide__nilType chpl_macro_tmp_2523;
  chpl____wide_Error chpl_macro_tmp_2524;
  chpl_macro_tmp_2523.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2523.addr = nil;
  chpl_macro_tmp_2524.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2524.addr = NULL;
  error_chpl = chpl_macro_tmp_2524;
  rvfRerefTmp_chpl = this_chpl7;
  tmp_chpl15 = &error_chpl;
  checkAssumingLocal_chpl(rvfRerefTmp_chpl, tmp_chpl15);
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    chpl_gen_comm_put(((void*)(&error_chpl)), chpl_nodeFromLocaleID((error_out_chpl).locale, INT64(0), INT32(0)), (error_out_chpl).addr, sizeof(chpl____wide_Error), COMMID(28), INT64(2835), INT64(77));
    goto _endon_fn_chpl;
  }
  rvfRerefTmp_chpl2 = this_chpl7;
  init_chpl78(&initTemp_chpl, rvfRerefTmp_chpl2, &_formal_tmp_out_error_chpl, hints_chpl, start_chpl, end_chpl, style_chpl);
  chpl_gen_comm_put(((void*)(&_formal_tmp_out_error_chpl)), chpl_nodeFromLocaleID((err_chpl).locale, INT64(0), INT32(0)), (err_chpl).addr, sizeof(syserr), COMMID(29), INT64(2836), INT64(77));
  call_tmp_chpl36 = initTemp_chpl;
  chpl___ASSIGN_7(ret_chpl, &call_tmp_chpl36);
  i_x_chpl = &call_tmp_chpl36;
  deinit_chpl45(i_x_chpl);
  _endon_fn_chpl:;
  return;
}

/* IO.chpl:2931 */
static void writer_chpl(file_chpl * this_chpl7,
                        int64_t start_chpl,
                        int64_t end_chpl,
                        int32_t hints_chpl,
                        chpl____wide_Error * error_out_chpl,
                        channel_T_dynamic_T_chpl * _retArg_chpl) {
  channel_T_dynamic_T_chpl ret_chpl;
  channel_T_dynamic_T_chpl call_tmp_chpl36;
  iostyleInternal default_arg_style_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  iostyleInternal ret_chpl2;
  iostyleInternal style_chpl;
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  chpl____wide_Error error_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_T_chpl ret_tmp_chpl;
  _ref__wide_Error_chpl tmp_chpl16 = NULL;
  chpl____wide__nilType chpl_macro_tmp_2525;
  chpl____wide_Error chpl_macro_tmp_2526;
  chpl____wide__nilType chpl_macro_tmp_2527;
  chpl____wide_Error chpl_macro_tmp_2528;
  chpl____wide__nilType chpl_macro_tmp_2529;
  chpl____wide_Error chpl_macro_tmp_2530;
  chpl_macro_tmp_2525.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2525.addr = nil;
  chpl_macro_tmp_2526.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2526.addr = NULL;
  error_chpl = chpl_macro_tmp_2526;
  chpl_macro_tmp_2527.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2527.addr = nil;
  chpl_macro_tmp_2528.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2528.addr = NULL;
  error_chpl2 = chpl_macro_tmp_2528;
  tmp_chpl15 = &error_chpl2;
  style_chpl = _style_chpl(this_chpl7, tmp_chpl15);
  if ((&error_chpl2)->addr != nil) {
    error_chpl = error_chpl2;
    goto _endwriterHelper_default_style_chpl;
  }
  ret_chpl2 = style_chpl;
  _endwriterHelper_default_style_chpl:;
  default_arg_style_chpl = ret_chpl2;
  if ((&error_chpl)->addr != nil) {
    *(error_out_chpl) = error_chpl;
    goto _endwriter_chpl;
  }
  chpl_macro_tmp_2529.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2529.addr = nil;
  chpl_macro_tmp_2530.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2530.addr = NULL;
  error_chpl3 = chpl_macro_tmp_2530;
  tmp_chpl16 = &error_chpl3;
  writerHelper_chpl(this_chpl7, start_chpl, end_chpl, hints_chpl, &default_arg_style_chpl, tmp_chpl16, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  if ((&error_chpl3)->addr != nil) {
    *(error_out_chpl) = error_chpl3;
    goto _endwriter_chpl;
  }
  ret_chpl = call_tmp_chpl36;
  _endwriter_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:2939 */
static void writerHelper_chpl(file_chpl * this_chpl7,
                              int64_t start_chpl,
                              int64_t end_chpl,
                              int32_t hints_chpl,
                              iostyleInternal * style_chpl,
                              chpl____wide_Error * error_out_chpl,
                              channel_T_dynamic_T_chpl * _retArg_chpl) {
  string_chpl local__str_literal_1937_chpl;
  string_chpl local__str_literal_75_chpl;
  channel_T_dynamic_T_chpl ret_chpl;
  channel_T_dynamic_T_chpl ret_chpl2;
  syserr err_chpl;
  syserr call_tmp_chpl36;
  _ref_locale_chpl call_tmp_chpl37 = NULL;
  chpl_localeID_t call_tmp_chpl38;
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  file_chpl rvfDerefTmp_chpl;
  iostyleInternal rvfDerefTmp_chpl2;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_channel_T_dynamic_T tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_syserr tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_Error tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl92 _args_foron_fn_chpl = NULL;
  _ref_channel_T_dynamic_T_chpl tmp_chpl19 = NULL;
  chpl____wide__ref_channel_T_dynamic_T tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_syserr_chpl tmp_chpl21 = NULL;
  chpl____wide__ref_syserr tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl23 = NULL;
  chpl____wide__ref__wide_Error tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  _ref_channel_T_dynamic_T_chpl i_x_chpl = NULL;
  int32_t call_tmp_chpl39;
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl40;
  string_chpl ret_tmp_chpl;
  _ref__wide_Error_chpl tmp_chpl25 = NULL;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_channel_T_dynamic_T_chpl i_x_chpl4 = NULL;
  chpl____wide_object chpl_macro_tmp_2531;
  chpl____wide__nilType chpl_macro_tmp_2532;
  chpl____wide_object chpl_macro_tmp_2533;
  chpl____wide__nilType chpl_macro_tmp_2534;
  chpl____wide_Error chpl_macro_tmp_2535;
  chpl____wide__ref_channel_T_dynamic_T chpl_macro_tmp_2536;
  chpl____wide__ref_syserr chpl_macro_tmp_2537;
  chpl____wide__ref__wide_Error chpl_macro_tmp_2538;
  chpl__class_localson_fn_chpl92_object chpl_macro_tmp_2539;
  chpl____wide__ref_channel_T_dynamic_T chpl_macro_tmp_2540;
  chpl____wide__ref_syserr chpl_macro_tmp_2541;
  chpl____wide__ref__wide_Error chpl_macro_tmp_2542;
  chpl____wide__nilType chpl_macro_tmp_2543;
  chpl____wide_Error chpl_macro_tmp_2544;
  chpl____wide__ref_string chpl_macro_tmp_2545;
  chpl____wide__ref_string chpl_macro_tmp_2546;
  local__str_literal_1937_chpl = _str_literal_1937_chpl /* "in file.writer" */;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  init_chpl77(&ret_chpl2);
  call_tmp_chpl36 = qio_int_to_err(INT32(0));
  err_chpl = call_tmp_chpl36;
  call_tmp_chpl37 = &((this_chpl7)->home);
  coerce_tmp_chpl3 = (call_tmp_chpl37)->_instance;
  chpl_macro_tmp_2531.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_2531.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_2531;
  chpl_macro_tmp_2532.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2532.addr = nil;
  chpl_macro_tmp_2533.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2533.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_2533;
  if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(2949), INT32(77));
  }
  call_tmp_chpl38 = (&coerce_tmp_chpl3)->locale;
  chpl_rmem_consist_release(INT64(2949), INT32(77));
  chpl_macro_tmp_2534.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2534.addr = nil;
  chpl_macro_tmp_2535.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2535.addr = NULL;
  error_chpl = chpl_macro_tmp_2535;
  rvfDerefTmp_chpl = *(this_chpl7);
  rvfDerefTmp_chpl2 = *(style_chpl);
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl38);
  if (isdirect_chpl) {
    chpl_macro_tmp_2536.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2536.addr = &ret_chpl2;
    tmp_chpl16 = chpl_macro_tmp_2536;
    chpl_macro_tmp_2537.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2537.addr = &err_chpl;
    tmp_chpl17 = chpl_macro_tmp_2537;
    chpl_macro_tmp_2538.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2538.addr = &error_chpl;
    tmp_chpl18 = chpl_macro_tmp_2538;
    on_fn_chpl92(&rvfDerefTmp_chpl, start_chpl, end_chpl, hints_chpl, rvfDerefTmp_chpl2, tmp_chpl16, tmp_chpl17, tmp_chpl18);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl92)(&chpl_macro_tmp_2539));
    chpl_check_nil(_args_foron_fn_chpl, INT64(2949), INT32(77));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl38;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2949), INT32(77));
    (_args_foron_fn_chpl)->_1_rvfDerefTmp = rvfDerefTmp_chpl;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2949), INT32(77));
    (_args_foron_fn_chpl)->_2_start = start_chpl;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2949), INT32(77));
    (_args_foron_fn_chpl)->_3_end = end_chpl;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2949), INT32(77));
    (_args_foron_fn_chpl)->_4_hints = hints_chpl;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2949), INT32(77));
    (_args_foron_fn_chpl)->_5_rvfDerefTmp = rvfDerefTmp_chpl2;
    tmp_chpl19 = &ret_chpl2;
    chpl_macro_tmp_2540.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2540.addr = tmp_chpl19;
    tmp_chpl20 = chpl_macro_tmp_2540;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2949), INT32(77));
    (_args_foron_fn_chpl)->_6_ret = tmp_chpl20;
    tmp_chpl21 = &err_chpl;
    chpl_macro_tmp_2541.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2541.addr = tmp_chpl21;
    tmp_chpl22 = chpl_macro_tmp_2541;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2949), INT32(77));
    (_args_foron_fn_chpl)->_7_err = tmp_chpl22;
    tmp_chpl23 = &error_chpl;
    chpl_macro_tmp_2542.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2542.addr = tmp_chpl23;
    tmp_chpl24 = chpl_macro_tmp_2542;
    chpl_check_nil(_args_foron_fn_chpl, INT64(2949), INT32(77));
    (_args_foron_fn_chpl)->_8_error = tmp_chpl24;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl92_object);
    chpl_taskRunningCntDec(INT64(2949), INT32(77));
    /*** wrapon_fn_chpl92 ***/ chpl_executeOn(call_tmp_chpl38, INT32(104), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(2949), INT32(77));
    chpl_taskRunningCntInc(INT64(2949), INT32(77));
  }
  if ((&error_chpl)->addr != nil) {
    *(error_out_chpl) = error_chpl;
    i_x_chpl = &ret_chpl2;
    deinit_chpl46(i_x_chpl);
    goto _end_writerHelper_chpl;
  }
  chpl_rmem_consist_acquire(INT64(2949), INT32(77));
  call_tmp_chpl39 = qio_err_iserr(err_chpl);
  if (call_tmp_chpl39 != INT32(0)) {
    chpl_macro_tmp_2543.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2543.addr = nil;
    chpl_macro_tmp_2544.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2544.addr = NULL;
    error_chpl2 = chpl_macro_tmp_2544;
    tryGetPath_chpl(this_chpl7, &ret_tmp_chpl);
    call_tmp_chpl40 = ret_tmp_chpl;
    tmp_chpl25 = &error_chpl2;
    ioerror_chpl2(err_chpl, &local__str_literal_1937_chpl, &call_tmp_chpl40, tmp_chpl25, INT64(2953), INT32(77));
    if ((&error_chpl2)->addr != nil) {
      i_x_chpl2 = &call_tmp_chpl40;
      chpl_macro_tmp_2545.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2545.addr = i_x_chpl2;
      tmp_chpl26 = chpl_macro_tmp_2545;
      deinit_chpl42(tmp_chpl26);
      goto handler_chpl;
    }
    i_x_chpl3 = &call_tmp_chpl40;
    chpl_macro_tmp_2546.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2546.addr = i_x_chpl3;
    tmp_chpl27 = chpl_macro_tmp_2546;
    deinit_chpl42(tmp_chpl27);
    handler_chpl:;
    if ((&error_chpl2)->addr != nil) {
      *(error_out_chpl) = error_chpl2;
      i_x_chpl4 = &ret_chpl2;
      deinit_chpl46(i_x_chpl4);
      goto _end_writerHelper_chpl;
    }
  }
  ret_chpl = ret_chpl2;
  _end_writerHelper_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:2949 */
static void wrapon_fn_chpl92(_class_localson_fn_chpl92 c_chpl) {
  file_chpl _1_rvfDerefTmp_chpl;
  file_chpl tmp_chpl15;
  int64_t _2_start_chpl;
  int64_t _3_end_chpl;
  int32_t _4_hints_chpl;
  iostyleInternal _5_rvfDerefTmp_chpl;
  iostyleInternal tmp_chpl16;
  chpl____wide__ref_channel_T_dynamic_T _6_ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_syserr _7_err_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_Error _8_error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(2949), INT32(77));
  chpl_check_nil(c_chpl, INT64(2949), INT32(77));
  tmp_chpl15 = (c_chpl)->_1_rvfDerefTmp;
  _1_rvfDerefTmp_chpl = tmp_chpl15;
  chpl_check_nil(c_chpl, INT64(2949), INT32(77));
  _2_start_chpl = (c_chpl)->_2_start;
  chpl_check_nil(c_chpl, INT64(2949), INT32(77));
  _3_end_chpl = (c_chpl)->_3_end;
  chpl_check_nil(c_chpl, INT64(2949), INT32(77));
  _4_hints_chpl = (c_chpl)->_4_hints;
  chpl_check_nil(c_chpl, INT64(2949), INT32(77));
  tmp_chpl16 = (c_chpl)->_5_rvfDerefTmp;
  _5_rvfDerefTmp_chpl = tmp_chpl16;
  chpl_check_nil(c_chpl, INT64(2949), INT32(77));
  _6_ret_chpl = (c_chpl)->_6_ret;
  chpl_check_nil(c_chpl, INT64(2949), INT32(77));
  _7_err_chpl = (c_chpl)->_7_err;
  chpl_check_nil(c_chpl, INT64(2949), INT32(77));
  _8_error_chpl = (c_chpl)->_8_error;
  chpl_taskRunningCntInc(INT64(2949), INT32(77));
  on_fn_chpl92(&_1_rvfDerefTmp_chpl, _2_start_chpl, _3_end_chpl, _4_hints_chpl, _5_rvfDerefTmp_chpl, _6_ret_chpl, _7_err_chpl, _8_error_chpl);
  chpl_taskRunningCntDec(INT64(2949), INT32(77));
  chpl_rmem_consist_release(INT64(2949), INT32(77));
  return;
}

/* IO.chpl:2949 */
static void on_fn_chpl92(file_chpl * this_chpl7,
                         int64_t start_chpl,
                         int64_t end_chpl,
                         int32_t hints_chpl,
                         iostyleInternal style_chpl,
                         chpl____wide__ref_channel_T_dynamic_T ret_chpl,
                         chpl____wide__ref_syserr err_chpl,
                         chpl____wide__ref__wide_Error error_out_chpl) {
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_file_chpl rvfRerefTmp_chpl = NULL;
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  channel_T_dynamic_T_chpl call_tmp_chpl36;
  channel_T_dynamic_T_chpl initTemp_chpl;
  syserr _formal_tmp_out_error_chpl;
  _ref_file_chpl rvfRerefTmp_chpl2 = NULL;
  _ref_channel_T_dynamic_T_chpl i_x_chpl = NULL;
  chpl____wide__nilType chpl_macro_tmp_2547;
  chpl____wide_Error chpl_macro_tmp_2548;
  chpl_macro_tmp_2547.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2547.addr = nil;
  chpl_macro_tmp_2548.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2548.addr = NULL;
  error_chpl = chpl_macro_tmp_2548;
  rvfRerefTmp_chpl = this_chpl7;
  tmp_chpl15 = &error_chpl;
  checkAssumingLocal_chpl(rvfRerefTmp_chpl, tmp_chpl15);
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    chpl_gen_comm_put(((void*)(&error_chpl)), chpl_nodeFromLocaleID((error_out_chpl).locale, INT64(0), INT32(0)), (error_out_chpl).addr, sizeof(chpl____wide_Error), COMMID(30), INT64(2950), INT64(77));
    goto _endon_fn_chpl;
  }
  rvfRerefTmp_chpl2 = this_chpl7;
  init_chpl79(&initTemp_chpl, rvfRerefTmp_chpl2, &_formal_tmp_out_error_chpl, hints_chpl, start_chpl, end_chpl, style_chpl);
  chpl_gen_comm_put(((void*)(&_formal_tmp_out_error_chpl)), chpl_nodeFromLocaleID((err_chpl).locale, INT64(0), INT32(0)), (err_chpl).addr, sizeof(syserr), COMMID(31), INT64(2951), INT64(77));
  call_tmp_chpl36 = initTemp_chpl;
  chpl___ASSIGN_8(ret_chpl, &call_tmp_chpl36);
  i_x_chpl = &call_tmp_chpl36;
  deinit_chpl46(i_x_chpl);
  _endon_fn_chpl:;
  return;
}

/* IO.chpl:3050 */
static syserr _write_text_internal_chpl2(qio_channel_ptr_t _channel_internal_chpl,
                                         chpl____wide__ref_string x_chpl2) {
  string_chpl local__str_literal_3282_chpl;
  syserr ret_chpl;
  string_chpl ret_chpl2;
  int32_t call_tmp_chpl36;
  int32_t tmp_chpl15;
  string_chpl ret_chpl3;
  string_chpl ret_chpl4;
  int64_t tmp_chpl16;
  string_chpl x_chpl3;
  string_chpl local_x_chpl;
  syserr call_tmp_chpl37;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t call_tmp_chpl38;
  c_string call_tmp_chpl39;
  int64_t tmp_chpl18;
  syserr call_tmp_chpl40;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int32_t chpl_macro_tmp_2549;
  chpl____wide__ref_int64_t chpl_macro_tmp_2550;
  chpl____wide__ref_string chpl_macro_tmp_2551;
  chpl____wide__ref_string chpl_macro_tmp_2552;
  local__str_literal_3282_chpl = _str_literal_3282_chpl /* "Cannot call .c_str() on a remote string" */;
  call_tmp_chpl36 = get_chpl_nodeID();
  chpl_macro_tmp_2549.locale = (x_chpl2).locale;
  chpl_macro_tmp_2549.addr = &(((x_chpl2).addr)->locale_id);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_2549).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2549).addr, sizeof(int32_t), COMMID(32), INT64(3073), INT64(77));
  if (tmp_chpl15 == call_tmp_chpl36) {
    init_chpl73(&ret_chpl4);
    chpl_macro_tmp_2550.locale = (x_chpl2).locale;
    chpl_macro_tmp_2550.addr = &(((x_chpl2).addr)->cachedNumCodepoints);
    chpl_gen_comm_get(((void*)(&tmp_chpl16)), chpl_nodeFromLocaleID((chpl_macro_tmp_2550).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2550).addr, sizeof(int64_t), COMMID(33), INT64(3073), INT64(77));
    (&ret_chpl4)->cachedNumCodepoints = tmp_chpl16;
    initWithBorrowedBuffer_chpl(&ret_chpl4, x_chpl2);
    ret_chpl3 = ret_chpl4;
    ret_chpl2 = ret_chpl3;
    goto _end_localize_chpl;
  } else {
    init_ASSIGN__chpl21(&x_chpl3, x_chpl2);
    ret_chpl2 = x_chpl3;
    goto _end_localize_chpl;
  }
  _end_localize_chpl:;
  local_x_chpl = ret_chpl2;
  if ((&local_x_chpl)->hasEscapes) {
    call_tmp_chpl37 = qio_int_to_err(EILSEQ);
    ret_chpl = call_tmp_chpl37;
    i_x_chpl = &local_x_chpl;
    chpl_macro_tmp_2551.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2551.addr = i_x_chpl;
    tmp_chpl17 = chpl_macro_tmp_2551;
    deinit_chpl42(tmp_chpl17);
    goto _end__write_text_internal_chpl;
  }
  call_tmp_chpl38 = get_chpl_nodeID();
  if ((&local_x_chpl)->locale_id != call_tmp_chpl38) {
    halt_chpl(&local__str_literal_3282_chpl, INT64(3078), INT32(77));
  }
  call_tmp_chpl39 = ((c_string)((&local_x_chpl)->buff));
  tmp_chpl18 = (&local_x_chpl)->buffLen;
  call_tmp_chpl40 = qio_channel_print_string(((int32_t)(UINT8(false))), _channel_internal_chpl, call_tmp_chpl39, tmp_chpl18);
  ret_chpl = call_tmp_chpl40;
  i_x_chpl2 = &local_x_chpl;
  chpl_macro_tmp_2552.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2552.addr = i_x_chpl2;
  tmp_chpl19 = chpl_macro_tmp_2552;
  deinit_chpl42(tmp_chpl19);
  _end__write_text_internal_chpl:;
  return ret_chpl;
}

/* IO.chpl:3050 */
static syserr _write_text_internal_chpl(qio_channel_ptr_t _channel_internal_chpl,
                                        int64_t x_chpl2) {
  syserr call_tmp_chpl36;
  call_tmp_chpl36 = qio_channel_print_int(((int32_t)(UINT8(false))), _channel_internal_chpl, &x_chpl2, ((uint64_t)(INT64(8))), ((int32_t)(UINT8(true))));
  return call_tmp_chpl36;
}

/* IO.chpl:3199 */
static syserr _write_binary_internal_chpl6(qio_channel_ptr_t _channel_internal_chpl,
                                           int64_t x_chpl2) {
  syserr call_tmp_chpl36;
  call_tmp_chpl36 = qio_channel_write_int64(((int32_t)(UINT8(false))), INT32(2), _channel_internal_chpl, x_chpl2);
  return call_tmp_chpl36;
}

/* IO.chpl:3199 */
static syserr _write_binary_internal_chpl5(qio_channel_ptr_t _channel_internal_chpl,
                                           chpl____wide__ref_string x_chpl2) {
  string_chpl local__str_literal_3282_chpl;
  syserr ret_chpl;
  string_chpl ret_chpl2;
  int32_t call_tmp_chpl36;
  int32_t tmp_chpl15;
  string_chpl ret_chpl3;
  string_chpl ret_chpl4;
  int64_t tmp_chpl16;
  string_chpl x_chpl3;
  string_chpl local_x_chpl;
  syserr call_tmp_chpl37;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl38;
  int32_t call_tmp_chpl39;
  c_string call_tmp_chpl40;
  int64_t tmp_chpl18;
  syserr call_tmp_chpl41;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int32_t chpl_macro_tmp_2553;
  chpl____wide__ref_int64_t chpl_macro_tmp_2554;
  chpl____wide__ref_string chpl_macro_tmp_2555;
  chpl____wide__ref_string chpl_macro_tmp_2556;
  local__str_literal_3282_chpl = _str_literal_3282_chpl /* "Cannot call .c_str() on a remote string" */;
  call_tmp_chpl36 = get_chpl_nodeID();
  chpl_macro_tmp_2553.locale = (x_chpl2).locale;
  chpl_macro_tmp_2553.addr = &(((x_chpl2).addr)->locale_id);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_2553).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2553).addr, sizeof(int32_t), COMMID(34), INT64(3252), INT64(77));
  if (tmp_chpl15 == call_tmp_chpl36) {
    init_chpl73(&ret_chpl4);
    chpl_macro_tmp_2554.locale = (x_chpl2).locale;
    chpl_macro_tmp_2554.addr = &(((x_chpl2).addr)->cachedNumCodepoints);
    chpl_gen_comm_get(((void*)(&tmp_chpl16)), chpl_nodeFromLocaleID((chpl_macro_tmp_2554).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2554).addr, sizeof(int64_t), COMMID(35), INT64(3252), INT64(77));
    (&ret_chpl4)->cachedNumCodepoints = tmp_chpl16;
    initWithBorrowedBuffer_chpl(&ret_chpl4, x_chpl2);
    ret_chpl3 = ret_chpl4;
    ret_chpl2 = ret_chpl3;
    goto _end_localize_chpl;
  } else {
    init_ASSIGN__chpl21(&x_chpl3, x_chpl2);
    ret_chpl2 = x_chpl3;
    goto _end_localize_chpl;
  }
  _end_localize_chpl:;
  local_x_chpl = ret_chpl2;
  if ((&local_x_chpl)->hasEscapes) {
    call_tmp_chpl37 = qio_int_to_err(EILSEQ);
    ret_chpl = call_tmp_chpl37;
    i_x_chpl = &local_x_chpl;
    chpl_macro_tmp_2555.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2555.addr = i_x_chpl;
    tmp_chpl17 = chpl_macro_tmp_2555;
    deinit_chpl42(tmp_chpl17);
    goto _end__write_binary_internal_chpl;
  }
  call_tmp_chpl38 = qio_channel_str_style(_channel_internal_chpl);
  call_tmp_chpl39 = get_chpl_nodeID();
  if ((&local_x_chpl)->locale_id != call_tmp_chpl39) {
    halt_chpl(&local__str_literal_3282_chpl, INT64(3257), INT32(77));
  }
  call_tmp_chpl40 = ((c_string)((&local_x_chpl)->buff));
  tmp_chpl18 = (&local_x_chpl)->buffLen;
  call_tmp_chpl41 = qio_channel_write_string(((int32_t)(UINT8(false))), INT32(2), call_tmp_chpl38, _channel_internal_chpl, call_tmp_chpl40, tmp_chpl18);
  ret_chpl = call_tmp_chpl41;
  i_x_chpl2 = &local_x_chpl;
  chpl_macro_tmp_2556.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2556.addr = i_x_chpl2;
  tmp_chpl19 = chpl_macro_tmp_2556;
  deinit_chpl42(tmp_chpl19);
  _end__write_binary_internal_chpl:;
  return ret_chpl;
}

/* IO.chpl:3199 */
static syserr _write_binary_internal_chpl3(qio_channel_ptr_t _channel_internal_chpl,
                                           chpl____wide__ref_string x_chpl2) {
  string_chpl local__str_literal_3282_chpl;
  syserr ret_chpl;
  string_chpl ret_chpl2;
  int32_t call_tmp_chpl36;
  int32_t tmp_chpl15;
  string_chpl ret_chpl3;
  string_chpl ret_chpl4;
  int64_t tmp_chpl16;
  string_chpl x_chpl3;
  string_chpl local_x_chpl;
  syserr call_tmp_chpl37;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl38;
  int32_t call_tmp_chpl39;
  c_string call_tmp_chpl40;
  int64_t tmp_chpl18;
  syserr call_tmp_chpl41;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int32_t chpl_macro_tmp_2557;
  chpl____wide__ref_int64_t chpl_macro_tmp_2558;
  chpl____wide__ref_string chpl_macro_tmp_2559;
  chpl____wide__ref_string chpl_macro_tmp_2560;
  local__str_literal_3282_chpl = _str_literal_3282_chpl /* "Cannot call .c_str() on a remote string" */;
  call_tmp_chpl36 = get_chpl_nodeID();
  chpl_macro_tmp_2557.locale = (x_chpl2).locale;
  chpl_macro_tmp_2557.addr = &(((x_chpl2).addr)->locale_id);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_2557).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2557).addr, sizeof(int32_t), COMMID(36), INT64(3252), INT64(77));
  if (tmp_chpl15 == call_tmp_chpl36) {
    init_chpl73(&ret_chpl4);
    chpl_macro_tmp_2558.locale = (x_chpl2).locale;
    chpl_macro_tmp_2558.addr = &(((x_chpl2).addr)->cachedNumCodepoints);
    chpl_gen_comm_get(((void*)(&tmp_chpl16)), chpl_nodeFromLocaleID((chpl_macro_tmp_2558).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2558).addr, sizeof(int64_t), COMMID(37), INT64(3252), INT64(77));
    (&ret_chpl4)->cachedNumCodepoints = tmp_chpl16;
    initWithBorrowedBuffer_chpl(&ret_chpl4, x_chpl2);
    ret_chpl3 = ret_chpl4;
    ret_chpl2 = ret_chpl3;
    goto _end_localize_chpl;
  } else {
    init_ASSIGN__chpl21(&x_chpl3, x_chpl2);
    ret_chpl2 = x_chpl3;
    goto _end_localize_chpl;
  }
  _end_localize_chpl:;
  local_x_chpl = ret_chpl2;
  if ((&local_x_chpl)->hasEscapes) {
    call_tmp_chpl37 = qio_int_to_err(EILSEQ);
    ret_chpl = call_tmp_chpl37;
    i_x_chpl = &local_x_chpl;
    chpl_macro_tmp_2559.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2559.addr = i_x_chpl;
    tmp_chpl17 = chpl_macro_tmp_2559;
    deinit_chpl42(tmp_chpl17);
    goto _end__write_binary_internal_chpl;
  }
  call_tmp_chpl38 = qio_channel_str_style(_channel_internal_chpl);
  call_tmp_chpl39 = get_chpl_nodeID();
  if ((&local_x_chpl)->locale_id != call_tmp_chpl39) {
    halt_chpl(&local__str_literal_3282_chpl, INT64(3257), INT32(77));
  }
  call_tmp_chpl40 = ((c_string)((&local_x_chpl)->buff));
  tmp_chpl18 = (&local_x_chpl)->buffLen;
  call_tmp_chpl41 = qio_channel_write_string(((int32_t)(UINT8(false))), INT32(3), call_tmp_chpl38, _channel_internal_chpl, call_tmp_chpl40, tmp_chpl18);
  ret_chpl = call_tmp_chpl41;
  i_x_chpl2 = &local_x_chpl;
  chpl_macro_tmp_2560.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2560.addr = i_x_chpl2;
  tmp_chpl19 = chpl_macro_tmp_2560;
  deinit_chpl42(tmp_chpl19);
  _end__write_binary_internal_chpl:;
  return ret_chpl;
}

/* IO.chpl:3199 */
static syserr _write_binary_internal_chpl(qio_channel_ptr_t _channel_internal_chpl,
                                          int64_t x_chpl2) {
  syserr call_tmp_chpl36;
  call_tmp_chpl36 = qio_channel_write_int64(((int32_t)(UINT8(false))), INT32(1), _channel_internal_chpl, x_chpl2);
  return call_tmp_chpl36;
}

/* IO.chpl:3199 */
static syserr _write_binary_internal_chpl2(qio_channel_ptr_t _channel_internal_chpl,
                                           int64_t x_chpl2) {
  syserr call_tmp_chpl36;
  call_tmp_chpl36 = qio_channel_write_int64(((int32_t)(UINT8(false))), INT32(3), _channel_internal_chpl, x_chpl2);
  return call_tmp_chpl36;
}

/* IO.chpl:3199 */
static syserr _write_binary_internal_chpl4(qio_channel_ptr_t _channel_internal_chpl,
                                           chpl____wide__ref_string x_chpl2) {
  string_chpl local__str_literal_3282_chpl;
  syserr ret_chpl;
  string_chpl ret_chpl2;
  int32_t call_tmp_chpl36;
  int32_t tmp_chpl15;
  string_chpl ret_chpl3;
  string_chpl ret_chpl4;
  int64_t tmp_chpl16;
  string_chpl x_chpl3;
  string_chpl local_x_chpl;
  syserr call_tmp_chpl37;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl38;
  int32_t call_tmp_chpl39;
  c_string call_tmp_chpl40;
  int64_t tmp_chpl18;
  syserr call_tmp_chpl41;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int32_t chpl_macro_tmp_2561;
  chpl____wide__ref_int64_t chpl_macro_tmp_2562;
  chpl____wide__ref_string chpl_macro_tmp_2563;
  chpl____wide__ref_string chpl_macro_tmp_2564;
  local__str_literal_3282_chpl = _str_literal_3282_chpl /* "Cannot call .c_str() on a remote string" */;
  call_tmp_chpl36 = get_chpl_nodeID();
  chpl_macro_tmp_2561.locale = (x_chpl2).locale;
  chpl_macro_tmp_2561.addr = &(((x_chpl2).addr)->locale_id);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_2561).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2561).addr, sizeof(int32_t), COMMID(38), INT64(3252), INT64(77));
  if (tmp_chpl15 == call_tmp_chpl36) {
    init_chpl73(&ret_chpl4);
    chpl_macro_tmp_2562.locale = (x_chpl2).locale;
    chpl_macro_tmp_2562.addr = &(((x_chpl2).addr)->cachedNumCodepoints);
    chpl_gen_comm_get(((void*)(&tmp_chpl16)), chpl_nodeFromLocaleID((chpl_macro_tmp_2562).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2562).addr, sizeof(int64_t), COMMID(39), INT64(3252), INT64(77));
    (&ret_chpl4)->cachedNumCodepoints = tmp_chpl16;
    initWithBorrowedBuffer_chpl(&ret_chpl4, x_chpl2);
    ret_chpl3 = ret_chpl4;
    ret_chpl2 = ret_chpl3;
    goto _end_localize_chpl;
  } else {
    init_ASSIGN__chpl21(&x_chpl3, x_chpl2);
    ret_chpl2 = x_chpl3;
    goto _end_localize_chpl;
  }
  _end_localize_chpl:;
  local_x_chpl = ret_chpl2;
  if ((&local_x_chpl)->hasEscapes) {
    call_tmp_chpl37 = qio_int_to_err(EILSEQ);
    ret_chpl = call_tmp_chpl37;
    i_x_chpl = &local_x_chpl;
    chpl_macro_tmp_2563.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2563.addr = i_x_chpl;
    tmp_chpl17 = chpl_macro_tmp_2563;
    deinit_chpl42(tmp_chpl17);
    goto _end__write_binary_internal_chpl;
  }
  call_tmp_chpl38 = qio_channel_str_style(_channel_internal_chpl);
  call_tmp_chpl39 = get_chpl_nodeID();
  if ((&local_x_chpl)->locale_id != call_tmp_chpl39) {
    halt_chpl(&local__str_literal_3282_chpl, INT64(3257), INT32(77));
  }
  call_tmp_chpl40 = ((c_string)((&local_x_chpl)->buff));
  tmp_chpl18 = (&local_x_chpl)->buffLen;
  call_tmp_chpl41 = qio_channel_write_string(((int32_t)(UINT8(false))), INT32(1), call_tmp_chpl38, _channel_internal_chpl, call_tmp_chpl40, tmp_chpl18);
  ret_chpl = call_tmp_chpl41;
  i_x_chpl2 = &local_x_chpl;
  chpl_macro_tmp_2564.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2564.addr = i_x_chpl2;
  tmp_chpl19 = chpl_macro_tmp_2564;
  deinit_chpl42(tmp_chpl19);
  _end__write_binary_internal_chpl:;
  return ret_chpl;
}

/* IO.chpl:3272 */
static void _constructIoErrorMsg_chpl(channel_T_dynamic_T_chpl * this_chpl7,
                                      chpl____wide__ref_string x_chpl2,
                                      string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_3281_chpl;
  string_chpl local__str_literal_1951_chpl;
  string_chpl local__str_literal_1950_chpl;
  string_chpl ret_chpl;
  string_chpl result_chpl;
  string_chpl inlineImm_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  string_chpl ret_chpl2;
  string_chpl tmp_chpl15;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_2565;
  local__str_literal_3281_chpl = _str_literal_3281_chpl /* "string" */;
  local__str_literal_1951_chpl = _str_literal_1951_chpl /* "writing " */;
  local__str_literal_1950_chpl = _str_literal_1950_chpl /* "while " */;
  inlineImm_chpl = local__str_literal_1950_chpl;
  i_x_chpl = &inlineImm_chpl;
  chpl_macro_tmp_2565.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2565.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_2565;
  init_ASSIGN__chpl21(&tmp_chpl15, tmp_chpl16);
  ret_chpl2 = tmp_chpl15;
  result_chpl = ret_chpl2;
  chpl___PLUS__ASSIGN_(&result_chpl, &local__str_literal_1951_chpl);
  chpl___PLUS__ASSIGN_(&result_chpl, &local__str_literal_3281_chpl);
  ret_chpl = result_chpl;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:3272 */
static void _constructIoErrorMsg_chpl3(channel_T_dynamic_T_chpl * this_chpl7,
                                       int64_t x_chpl2,
                                       string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_3268_chpl;
  string_chpl local__str_literal_1951_chpl;
  string_chpl local__str_literal_1950_chpl;
  string_chpl ret_chpl;
  string_chpl result_chpl;
  string_chpl inlineImm_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  string_chpl ret_chpl2;
  string_chpl tmp_chpl15;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_2566;
  local__str_literal_3268_chpl = _str_literal_3268_chpl /* "int(64)" */;
  local__str_literal_1951_chpl = _str_literal_1951_chpl /* "writing " */;
  local__str_literal_1950_chpl = _str_literal_1950_chpl /* "while " */;
  inlineImm_chpl = local__str_literal_1950_chpl;
  i_x_chpl = &inlineImm_chpl;
  chpl_macro_tmp_2566.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2566.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_2566;
  init_ASSIGN__chpl21(&tmp_chpl15, tmp_chpl16);
  ret_chpl2 = tmp_chpl15;
  result_chpl = ret_chpl2;
  chpl___PLUS__ASSIGN_(&result_chpl, &local__str_literal_1951_chpl);
  chpl___PLUS__ASSIGN_(&result_chpl, &local__str_literal_3268_chpl);
  ret_chpl = result_chpl;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:3272 */
static void _constructIoErrorMsg_chpl2(channel_T_dynamic_T_chpl * this_chpl7,
                                       chpl____wide__ref_ioNewline x_chpl2,
                                       string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_3403_chpl;
  string_chpl local__str_literal_3402_chpl;
  string_chpl local__str_literal_1951_chpl;
  string_chpl local__str_literal_1950_chpl;
  string_chpl ret_chpl;
  string_chpl result_chpl;
  string_chpl inlineImm_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  string_chpl ret_chpl2;
  string_chpl tmp_chpl15;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_2567;
  local__str_literal_3403_chpl = _str_literal_3403_chpl /* " newline" */;
  local__str_literal_3402_chpl = _str_literal_3402_chpl /* "ioNewline" */;
  local__str_literal_1951_chpl = _str_literal_1951_chpl /* "writing " */;
  local__str_literal_1950_chpl = _str_literal_1950_chpl /* "while " */;
  inlineImm_chpl = local__str_literal_1950_chpl;
  i_x_chpl = &inlineImm_chpl;
  chpl_macro_tmp_2567.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2567.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_2567;
  init_ASSIGN__chpl21(&tmp_chpl15, tmp_chpl16);
  ret_chpl2 = tmp_chpl15;
  result_chpl = ret_chpl2;
  chpl___PLUS__ASSIGN_(&result_chpl, &local__str_literal_1951_chpl);
  chpl___PLUS__ASSIGN_(&result_chpl, &local__str_literal_3402_chpl);
  chpl___PLUS__ASSIGN_(&result_chpl, &local__str_literal_3403_chpl);
  ret_chpl = result_chpl;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:3306 */
static void _writeOne_chpl3(channel_T_dynamic_T_chpl * this_chpl7,
                            chpl____wide__ref_ioNewline x_chpl2,
                            locale_chpl * loc_chpl,
                            chpl____wide_Error * error_out_chpl) {
  string_chpl local__str_literal_3401_chpl;
  syserr call_tmp_chpl36;
  qio_channel_ptr_t coerce_tmp_chpl3;
  qio_channel_ptr_t tmp_chpl15;
  Error_chpl error_chpl = NULL;
  chpl____wide_Error tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t call_tmp_chpl37;
  string_chpl call_tmp_chpl38;
  string_chpl ret_tmp_chpl;
  string_chpl msg_chpl;
  int32_t call_tmp_chpl39;
  string_chpl call_tmp_chpl40;
  string_chpl ret_tmp_chpl2;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl20 = NULL;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_2568;
  chpl____wide__ref_string chpl_macro_tmp_2569;
  chpl____wide__ref_string chpl_macro_tmp_2570;
  chpl____wide__ref_string chpl_macro_tmp_2571;
  chpl____wide__nilType chpl_macro_tmp_2572;
  chpl____wide_Error chpl_macro_tmp_2573;
  chpl____wide__ref_string chpl_macro_tmp_2574;
  chpl____wide__ref_string chpl_macro_tmp_2575;
  local__str_literal_3401_chpl = _str_literal_3401_chpl /* "Strings with escaped non-UTF8 bytes cannot be used with I/O. Try using string.encode(encodePolicy.unescape) first." */;
  tmp_chpl15 = (this_chpl7)->_channel_internal;
  coerce_tmp_chpl3 = tmp_chpl15;
  error_chpl = NULL;
  call_tmp_chpl36 = _write_one_internal_chpl(coerce_tmp_chpl3, x_chpl2, loc_chpl, &error_chpl);
  if (error_chpl != nil) {
    chpl_macro_tmp_2568.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2568.addr = error_chpl;
    tmp_chpl16 = chpl_macro_tmp_2568;
    *(error_out_chpl) = tmp_chpl16;
    goto _end_writeOne_chpl;
  }
  call_tmp_chpl37 = qio_err_to_int(call_tmp_chpl36);
  if (! (call_tmp_chpl37 == INT32(0))) {
    _constructIoErrorMsg_chpl2(this_chpl7, x_chpl2, &ret_tmp_chpl);
    call_tmp_chpl38 = ret_tmp_chpl;
    msg_chpl = call_tmp_chpl38;
    call_tmp_chpl39 = qio_err_to_int(call_tmp_chpl36);
    if (call_tmp_chpl39 == EILSEQ) {
      chpl_macro_tmp_2569.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2569.addr = &msg_chpl;
      tmp_chpl17 = chpl_macro_tmp_2569;
      chpl___PLUS_(&local__str_literal_3401_chpl, tmp_chpl17, &ret_tmp_chpl2);
      call_tmp_chpl40 = ret_tmp_chpl2;
      chpl_macro_tmp_2570.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2570.addr = &msg_chpl;
      tmp_chpl18 = chpl_macro_tmp_2570;
      chpl___ASSIGN_6(tmp_chpl18, &call_tmp_chpl40);
      i_x_chpl = &call_tmp_chpl40;
      chpl_macro_tmp_2571.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2571.addr = i_x_chpl;
      tmp_chpl19 = chpl_macro_tmp_2571;
      deinit_chpl42(tmp_chpl19);
    }
    chpl_macro_tmp_2572.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2572.addr = nil;
    chpl_macro_tmp_2573.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2573.addr = NULL;
    error_chpl2 = chpl_macro_tmp_2573;
    tmp_chpl20 = &error_chpl2;
    _ch_ioerror_chpl(this_chpl7, call_tmp_chpl36, &msg_chpl, tmp_chpl20);
    if ((&error_chpl2)->addr != nil) {
      goto handler_chpl;
    }
    handler_chpl:;
    if ((&error_chpl2)->addr != nil) {
      *(error_out_chpl) = error_chpl2;
      i_x_chpl2 = &msg_chpl;
      chpl_macro_tmp_2574.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2574.addr = i_x_chpl2;
      tmp_chpl21 = chpl_macro_tmp_2574;
      deinit_chpl42(tmp_chpl21);
      goto _end_writeOne_chpl;
    }
    i_x_chpl3 = &msg_chpl;
    chpl_macro_tmp_2575.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2575.addr = i_x_chpl3;
    tmp_chpl22 = chpl_macro_tmp_2575;
    deinit_chpl42(tmp_chpl22);
  }
  _end_writeOne_chpl:;
  return;
}

/* IO.chpl:3306 */
static void _writeOne_chpl2(channel_T_dynamic_T_chpl * this_chpl7,
                            chpl____wide__ref_string x_chpl2,
                            locale_chpl * loc_chpl,
                            chpl____wide_Error * error_out_chpl) {
  string_chpl local__str_literal_3401_chpl;
  syserr call_tmp_chpl36;
  qio_channel_ptr_t coerce_tmp_chpl3;
  qio_channel_ptr_t tmp_chpl15;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl16 = NULL;
  int32_t call_tmp_chpl37;
  string_chpl call_tmp_chpl38;
  string_chpl ret_tmp_chpl;
  string_chpl msg_chpl;
  int32_t call_tmp_chpl39;
  string_chpl call_tmp_chpl40;
  string_chpl ret_tmp_chpl2;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl20 = NULL;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__nilType chpl_macro_tmp_2576;
  chpl____wide_Error chpl_macro_tmp_2577;
  chpl____wide__ref_string chpl_macro_tmp_2578;
  chpl____wide__ref_string chpl_macro_tmp_2579;
  chpl____wide__ref_string chpl_macro_tmp_2580;
  chpl____wide__nilType chpl_macro_tmp_2581;
  chpl____wide_Error chpl_macro_tmp_2582;
  chpl____wide__ref_string chpl_macro_tmp_2583;
  chpl____wide__ref_string chpl_macro_tmp_2584;
  local__str_literal_3401_chpl = _str_literal_3401_chpl /* "Strings with escaped non-UTF8 bytes cannot be used with I/O. Try using string.encode(encodePolicy.unescape) first." */;
  tmp_chpl15 = (this_chpl7)->_channel_internal;
  coerce_tmp_chpl3 = tmp_chpl15;
  chpl_macro_tmp_2576.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2576.addr = nil;
  chpl_macro_tmp_2577.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2577.addr = NULL;
  error_chpl = chpl_macro_tmp_2577;
  tmp_chpl16 = &error_chpl;
  call_tmp_chpl36 = _write_one_internal_chpl2(coerce_tmp_chpl3, x_chpl2, loc_chpl, tmp_chpl16);
  if ((&error_chpl)->addr != nil) {
    *(error_out_chpl) = error_chpl;
    goto _end_writeOne_chpl;
  }
  call_tmp_chpl37 = qio_err_to_int(call_tmp_chpl36);
  if (! (call_tmp_chpl37 == INT32(0))) {
    _constructIoErrorMsg_chpl(this_chpl7, x_chpl2, &ret_tmp_chpl);
    call_tmp_chpl38 = ret_tmp_chpl;
    msg_chpl = call_tmp_chpl38;
    call_tmp_chpl39 = qio_err_to_int(call_tmp_chpl36);
    if (call_tmp_chpl39 == EILSEQ) {
      chpl_macro_tmp_2578.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2578.addr = &msg_chpl;
      tmp_chpl17 = chpl_macro_tmp_2578;
      chpl___PLUS_(&local__str_literal_3401_chpl, tmp_chpl17, &ret_tmp_chpl2);
      call_tmp_chpl40 = ret_tmp_chpl2;
      chpl_macro_tmp_2579.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2579.addr = &msg_chpl;
      tmp_chpl18 = chpl_macro_tmp_2579;
      chpl___ASSIGN_6(tmp_chpl18, &call_tmp_chpl40);
      i_x_chpl = &call_tmp_chpl40;
      chpl_macro_tmp_2580.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2580.addr = i_x_chpl;
      tmp_chpl19 = chpl_macro_tmp_2580;
      deinit_chpl42(tmp_chpl19);
    }
    chpl_macro_tmp_2581.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2581.addr = nil;
    chpl_macro_tmp_2582.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2582.addr = NULL;
    error_chpl2 = chpl_macro_tmp_2582;
    tmp_chpl20 = &error_chpl2;
    _ch_ioerror_chpl(this_chpl7, call_tmp_chpl36, &msg_chpl, tmp_chpl20);
    if ((&error_chpl2)->addr != nil) {
      goto handler_chpl;
    }
    handler_chpl:;
    if ((&error_chpl2)->addr != nil) {
      *(error_out_chpl) = error_chpl2;
      i_x_chpl2 = &msg_chpl;
      chpl_macro_tmp_2583.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2583.addr = i_x_chpl2;
      tmp_chpl21 = chpl_macro_tmp_2583;
      deinit_chpl42(tmp_chpl21);
      goto _end_writeOne_chpl;
    }
    i_x_chpl3 = &msg_chpl;
    chpl_macro_tmp_2584.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2584.addr = i_x_chpl3;
    tmp_chpl22 = chpl_macro_tmp_2584;
    deinit_chpl42(tmp_chpl22);
  }
  _end_writeOne_chpl:;
  return;
}

/* IO.chpl:3306 */
static void _writeOne_chpl(channel_T_dynamic_T_chpl * this_chpl7,
                           int64_t x_chpl2,
                           locale_chpl * loc_chpl,
                           chpl____wide_Error * error_out_chpl) {
  string_chpl local__str_literal_3401_chpl;
  syserr call_tmp_chpl36;
  qio_channel_ptr_t coerce_tmp_chpl3;
  qio_channel_ptr_t tmp_chpl15;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl16 = NULL;
  int32_t call_tmp_chpl37;
  string_chpl call_tmp_chpl38;
  string_chpl ret_tmp_chpl;
  string_chpl msg_chpl;
  int32_t call_tmp_chpl39;
  string_chpl call_tmp_chpl40;
  string_chpl ret_tmp_chpl2;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl20 = NULL;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__nilType chpl_macro_tmp_2585;
  chpl____wide_Error chpl_macro_tmp_2586;
  chpl____wide__ref_string chpl_macro_tmp_2587;
  chpl____wide__ref_string chpl_macro_tmp_2588;
  chpl____wide__ref_string chpl_macro_tmp_2589;
  chpl____wide__nilType chpl_macro_tmp_2590;
  chpl____wide_Error chpl_macro_tmp_2591;
  chpl____wide__ref_string chpl_macro_tmp_2592;
  chpl____wide__ref_string chpl_macro_tmp_2593;
  local__str_literal_3401_chpl = _str_literal_3401_chpl /* "Strings with escaped non-UTF8 bytes cannot be used with I/O. Try using string.encode(encodePolicy.unescape) first." */;
  tmp_chpl15 = (this_chpl7)->_channel_internal;
  coerce_tmp_chpl3 = tmp_chpl15;
  chpl_macro_tmp_2585.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2585.addr = nil;
  chpl_macro_tmp_2586.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2586.addr = NULL;
  error_chpl = chpl_macro_tmp_2586;
  tmp_chpl16 = &error_chpl;
  call_tmp_chpl36 = _write_one_internal_chpl3(coerce_tmp_chpl3, x_chpl2, loc_chpl, tmp_chpl16);
  if ((&error_chpl)->addr != nil) {
    *(error_out_chpl) = error_chpl;
    goto _end_writeOne_chpl;
  }
  call_tmp_chpl37 = qio_err_to_int(call_tmp_chpl36);
  if (! (call_tmp_chpl37 == INT32(0))) {
    _constructIoErrorMsg_chpl3(this_chpl7, x_chpl2, &ret_tmp_chpl);
    call_tmp_chpl38 = ret_tmp_chpl;
    msg_chpl = call_tmp_chpl38;
    call_tmp_chpl39 = qio_err_to_int(call_tmp_chpl36);
    if (call_tmp_chpl39 == EILSEQ) {
      chpl_macro_tmp_2587.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2587.addr = &msg_chpl;
      tmp_chpl17 = chpl_macro_tmp_2587;
      chpl___PLUS_(&local__str_literal_3401_chpl, tmp_chpl17, &ret_tmp_chpl2);
      call_tmp_chpl40 = ret_tmp_chpl2;
      chpl_macro_tmp_2588.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2588.addr = &msg_chpl;
      tmp_chpl18 = chpl_macro_tmp_2588;
      chpl___ASSIGN_6(tmp_chpl18, &call_tmp_chpl40);
      i_x_chpl = &call_tmp_chpl40;
      chpl_macro_tmp_2589.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2589.addr = i_x_chpl;
      tmp_chpl19 = chpl_macro_tmp_2589;
      deinit_chpl42(tmp_chpl19);
    }
    chpl_macro_tmp_2590.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2590.addr = nil;
    chpl_macro_tmp_2591.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2591.addr = NULL;
    error_chpl2 = chpl_macro_tmp_2591;
    tmp_chpl20 = &error_chpl2;
    _ch_ioerror_chpl(this_chpl7, call_tmp_chpl36, &msg_chpl, tmp_chpl20);
    if ((&error_chpl2)->addr != nil) {
      goto handler_chpl;
    }
    handler_chpl:;
    if ((&error_chpl2)->addr != nil) {
      *(error_out_chpl) = error_chpl2;
      i_x_chpl2 = &msg_chpl;
      chpl_macro_tmp_2592.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2592.addr = i_x_chpl2;
      tmp_chpl21 = chpl_macro_tmp_2592;
      deinit_chpl42(tmp_chpl21);
      goto _end_writeOne_chpl;
    }
    i_x_chpl3 = &msg_chpl;
    chpl_macro_tmp_2593.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2593.addr = i_x_chpl3;
    tmp_chpl22 = chpl_macro_tmp_2593;
    deinit_chpl42(tmp_chpl22);
  }
  _end_writeOne_chpl:;
  return;
}

/* IO.chpl:3373 */
static syserr _write_one_internal_chpl(qio_channel_ptr_t _channel_internal_chpl,
                                       chpl____wide__ref_ioNewline x_chpl2,
                                       locale_chpl * loc_chpl,
                                       Error_chpl * error_out_chpl) {
  syserr call_tmp_chpl36;
  qio_int_to_err(INT32(0));
  call_tmp_chpl36 = qio_channel_write_newline(((int32_t)(UINT8(false))), _channel_internal_chpl);
  return call_tmp_chpl36;
}

/* IO.chpl:3373 */
static syserr _write_one_internal_chpl3(qio_channel_ptr_t _channel_internal_chpl,
                                        int64_t x_chpl2,
                                        locale_chpl * loc_chpl,
                                        chpl____wide_Error * error_out_chpl) {
  syserr ret_chpl;
  syserr e_chpl;
  syserr call_tmp_chpl36;
  uint8_t call_tmp_chpl37;
  uint8_t call_tmp_chpl38;
  iokind_chpl tmp_chpl15;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl16 = NULL;
  syserr call_tmp_chpl39;
  syserr call_tmp_chpl40;
  syserr call_tmp_chpl41;
  syserr call_tmp_chpl42;
  chpl____wide__nilType chpl_macro_tmp_2594;
  chpl____wide_Error chpl_macro_tmp_2595;
  call_tmp_chpl36 = qio_int_to_err(INT32(0));
  e_chpl = call_tmp_chpl36;
  call_tmp_chpl37 = qio_channel_binary(_channel_internal_chpl);
  call_tmp_chpl38 = qio_channel_byteorder(_channel_internal_chpl);
  if (((int64_t)(call_tmp_chpl37)) != INT64(0)) {
    chpl_macro_tmp_2594.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2594.addr = nil;
    chpl_macro_tmp_2595.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2595.addr = NULL;
    error_chpl = chpl_macro_tmp_2595;
    tmp_chpl16 = &error_chpl;
    tmp_chpl15 = chpl___COLON_(call_tmp_chpl38, tmp_chpl16);
    if ((&error_chpl)->addr != nil) {
      *(error_out_chpl) = error_chpl;
      goto _end__write_one_internal_chpl;
    }
    if (tmp_chpl15 == iokind_chpl_big_chpl) {
      call_tmp_chpl39 = _write_binary_internal_chpl6(_channel_internal_chpl, x_chpl2);
      e_chpl = call_tmp_chpl39;
    } else {
      if (tmp_chpl15 == iokind_chpl_little_chpl) {
        call_tmp_chpl40 = _write_binary_internal_chpl2(_channel_internal_chpl, x_chpl2);
        e_chpl = call_tmp_chpl40;
      } else {
        call_tmp_chpl41 = _write_binary_internal_chpl(_channel_internal_chpl, x_chpl2);
        e_chpl = call_tmp_chpl41;
      }
    }
  } else {
    call_tmp_chpl42 = _write_text_internal_chpl(_channel_internal_chpl, x_chpl2);
    e_chpl = call_tmp_chpl42;
  }
  ret_chpl = e_chpl;
  _end__write_one_internal_chpl:;
  return ret_chpl;
}

/* IO.chpl:3373 */
static syserr _write_one_internal_chpl2(qio_channel_ptr_t _channel_internal_chpl,
                                        chpl____wide__ref_string x_chpl2,
                                        locale_chpl * loc_chpl,
                                        chpl____wide_Error * error_out_chpl) {
  syserr ret_chpl;
  syserr e_chpl;
  syserr call_tmp_chpl36;
  uint8_t call_tmp_chpl37;
  uint8_t call_tmp_chpl38;
  iokind_chpl tmp_chpl15;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl16 = NULL;
  syserr call_tmp_chpl39;
  syserr call_tmp_chpl40;
  syserr call_tmp_chpl41;
  syserr call_tmp_chpl42;
  chpl____wide__nilType chpl_macro_tmp_2596;
  chpl____wide_Error chpl_macro_tmp_2597;
  call_tmp_chpl36 = qio_int_to_err(INT32(0));
  e_chpl = call_tmp_chpl36;
  call_tmp_chpl37 = qio_channel_binary(_channel_internal_chpl);
  call_tmp_chpl38 = qio_channel_byteorder(_channel_internal_chpl);
  if (((int64_t)(call_tmp_chpl37)) != INT64(0)) {
    chpl_macro_tmp_2596.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2596.addr = nil;
    chpl_macro_tmp_2597.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2597.addr = NULL;
    error_chpl = chpl_macro_tmp_2597;
    tmp_chpl16 = &error_chpl;
    tmp_chpl15 = chpl___COLON_(call_tmp_chpl38, tmp_chpl16);
    if ((&error_chpl)->addr != nil) {
      *(error_out_chpl) = error_chpl;
      goto _end__write_one_internal_chpl;
    }
    if (tmp_chpl15 == iokind_chpl_big_chpl) {
      call_tmp_chpl39 = _write_binary_internal_chpl5(_channel_internal_chpl, x_chpl2);
      e_chpl = call_tmp_chpl39;
    } else {
      if (tmp_chpl15 == iokind_chpl_little_chpl) {
        call_tmp_chpl40 = _write_binary_internal_chpl3(_channel_internal_chpl, x_chpl2);
        e_chpl = call_tmp_chpl40;
      } else {
        call_tmp_chpl41 = _write_binary_internal_chpl4(_channel_internal_chpl, x_chpl2);
        e_chpl = call_tmp_chpl41;
      }
    }
  } else {
    call_tmp_chpl42 = _write_text_internal_chpl2(_channel_internal_chpl, x_chpl2);
    e_chpl = call_tmp_chpl42;
  }
  ret_chpl = e_chpl;
  _end__write_one_internal_chpl:;
  return ret_chpl;
}

/* IO.chpl:3707 */
static void stringify_chpl(string_chpl * _e0_args_chpl,
                           int64_t _e1_args_chpl,
                           string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  stringify_simple_chpl9(_e0_args_chpl, _e1_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* IO.chpl:3707 */
static void stringify_chpl7(string_chpl * _e0_args_chpl,
                            int64_t _e1_args_chpl,
                            string_chpl * _e2_args_chpl,
                            string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  stringify_simple_chpl5(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* IO.chpl:3707 */
static void stringify_chpl12(string_chpl * _e0_args_chpl,
                             string_chpl * _e1_args_chpl,
                             string_chpl * _e2_args_chpl,
                             string_chpl * _e3_args_chpl,
                             string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  stringify_simple_chpl3(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* IO.chpl:3707 */
static void stringify_chpl10(string_chpl * _e0_args_chpl,
                             range_byteIndex_boundedHigh_F_chpl _e1_args_chpl,
                             string_chpl * _e2_args_chpl,
                             int64_t _e3_args_chpl,
                             string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  stringify_simple_chpl(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* IO.chpl:3707 */
static void stringify_chpl5(string_chpl * _e0_args_chpl,
                            range_byteIndex_boundedLow_F_chpl _e1_args_chpl,
                            string_chpl * _e2_args_chpl,
                            int64_t _e3_args_chpl,
                            string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  stringify_simple_chpl11(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* IO.chpl:3707 */
static void stringify_chpl2(string_chpl * _e0_args_chpl,
                            range_int64_t_boundedLow_F_chpl _e1_args_chpl,
                            string_chpl * _e2_args_chpl,
                            int64_t _e3_args_chpl,
                            string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  stringify_simple_chpl7(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* IO.chpl:3707 */
static void stringify_chpl4(string_chpl * _e0_args_chpl,
                            int64_t _e1_args_chpl,
                            string_chpl * _e2_args_chpl,
                            int64_t _e3_args_chpl,
                            string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  stringify_simple_chpl6(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* IO.chpl:3707 */
static void stringify_chpl8(string_chpl * _e0_args_chpl,
                            range_byteIndex_bounded_F_chpl _e1_args_chpl,
                            string_chpl * _e2_args_chpl,
                            int64_t _e3_args_chpl,
                            string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  stringify_simple_chpl4(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* IO.chpl:3707 */
static void stringify_chpl9(string_chpl * _e0_args_chpl,
                            range_int64_t_bounded_F_chpl _e1_args_chpl,
                            string_chpl * _e2_args_chpl,
                            int64_t _e3_args_chpl,
                            string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  stringify_simple_chpl10(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* IO.chpl:3707 */
static void stringify_chpl6(string_chpl * _e0_args_chpl,
                            string_chpl * _e1_args_chpl,
                            int64_t _e2_args_chpl,
                            string_chpl * _e3_args_chpl,
                            range_int64_t_bounded_F_chpl _e4_args_chpl,
                            string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  stringify_simple_chpl12(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, _e4_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* IO.chpl:3707 */
static void stringify_chpl11(string_chpl * _e0_args_chpl,
                             int64_t _e1_args_chpl,
                             string_chpl * _e2_args_chpl,
                             int64_t _e3_args_chpl,
                             string_chpl * _e4_args_chpl,
                             string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  stringify_simple_chpl2(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, _e4_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* IO.chpl:3707 */
static void stringify_chpl3(c_string _e0_args_chpl,
                            string_chpl * _retArg_chpl) {
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  stringify_simple_chpl8(_e0_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* IO.chpl:4309 */
static void on_fn_chpl93(channel_T_dynamic_T_chpl * this_chpl7,
                         chpl____wide__ref__tuple_3__ref_string_int64_t__ref_ioNewline args_chpl,
                         locale_chpl * origLocale_chpl,
                         chpl____wide__ref__wide_Error error_out_chpl) {
  string_chpl local__str_literal_1923_chpl;
  string_chpl local__str_literal_75_chpl;
  string_chpl local__str_literal_1921_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_channel_T_dynamic_T_chpl rvfRerefTmp_chpl = NULL;
  syserr err_chpl;
  syserr call_tmp_chpl36;
  qio_channel_ptr_t coerce_tmp_chpl3;
  qio_channel_ptr_t tmp_chpl15;
  _owned_SystemError_chpl call_tmp_chpl37;
  _owned_SystemError_chpl ret_tmp_chpl;
  chpl____wide_Error call_tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 coerce_tmp_chpl4;
  _owned_Error_chpl2 ret_tmp_chpl2;
  _ref__owned_SystemError_chpl i_x_chpl = NULL;
  _ref__owned_Error_chpl2 i__retArg_chpl = NULL;
  _owned_SystemError_chpl _formal_tmp_x_chpl;
  _owned_Error_chpl2 ret_chpl;
  _ref__owned_SystemError_chpl i_this_chpl = NULL;
  Error_chpl call_tmp_chpl39 = NULL;
  _ref__owned_SystemError_chpl i_this_chpl2 = NULL;
  _owned_Error_chpl2 call_tmp_chpl40;
  _owned_Error_chpl2 initTemp_chpl;
  chpl____wide_Error tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 _formal_tmp_in_err_chpl;
  _ref_locale_chpl call_tmp_chpl41 = NULL;
  chpl_localeID_t call_tmp_chpl42;
  chpl____wide_BaseLocale coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_T_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_syserr tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl89 _args_foron_fn_chpl = NULL;
  _ref_syserr_chpl tmp_chpl19 = NULL;
  chpl____wide__ref_syserr tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  int32_t call_tmp_chpl43;
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl21 = NULL;
  chpl____wide_Error error_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string call_tmp_chpl44 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_channel_T_dynamic_T_chpl rvfRerefTmp_chpl2 = NULL;
  locale_chpl rvfRerefTmp_chpl3;
  _ref__wide_Error_chpl tmp_chpl22 = NULL;
  _ref_locale_chpl call_tmp_chpl45 = NULL;
  chpl_localeID_t call_tmp_chpl46;
  chpl____wide_BaseLocale coerce_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_T_chpl rvfDerefTmp_chpl2;
  chpl_bool isdirect_chpl2;
  _class_localson_fn_chpl90 _args_foron_fn_chpl2 = NULL;
  c_void_ptr _args_vforon_fn_chpl2;
  int64_t _args_sizeon_fn_chpl2;
  chpl____wide_Error error_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl24;
  _ref_channel_T_dynamic_T_chpl rvfRerefTmp_chpl4 = NULL;
  locale_chpl rvfRerefTmp_chpl5;
  _ref__wide_Error_chpl tmp_chpl25 = NULL;
  _ref_locale_chpl call_tmp_chpl47 = NULL;
  chpl_localeID_t call_tmp_chpl48;
  chpl____wide_BaseLocale coerce_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_T_chpl rvfDerefTmp_chpl3;
  chpl_bool isdirect_chpl3;
  _class_localson_fn_chpl90 _args_foron_fn_chpl3 = NULL;
  c_void_ptr _args_vforon_fn_chpl3;
  int64_t _args_sizeon_fn_chpl3;
  chpl____wide_Error error_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_ioNewline call_tmp_chpl49 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_channel_T_dynamic_T_chpl rvfRerefTmp_chpl6 = NULL;
  locale_chpl rvfRerefTmp_chpl7;
  _ref__wide_Error_chpl tmp_chpl27 = NULL;
  _ref_locale_chpl call_tmp_chpl50 = NULL;
  chpl_localeID_t call_tmp_chpl51;
  chpl____wide_BaseLocale coerce_tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl28 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_T_chpl rvfDerefTmp_chpl4;
  chpl_bool isdirect_chpl4;
  _class_localson_fn_chpl90 _args_foron_fn_chpl4 = NULL;
  c_void_ptr _args_vforon_fn_chpl4;
  int64_t _args_sizeon_fn_chpl4;
  _ref_locale_chpl call_tmp_chpl52 = NULL;
  chpl_localeID_t call_tmp_chpl53;
  chpl____wide_BaseLocale coerce_tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl29 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_T_chpl rvfDerefTmp_chpl5;
  chpl_bool isdirect_chpl5;
  _class_localson_fn_chpl90 _args_foron_fn_chpl5 = NULL;
  c_void_ptr _args_vforon_fn_chpl5;
  int64_t _args_sizeon_fn_chpl5;
  chpl____wide__nilType chpl_macro_tmp_2598;
  chpl____wide_Error chpl_macro_tmp_2599;
  chpl____wide_Error chpl_macro_tmp_2600;
  chpl____wide_object chpl_macro_tmp_2601;
  chpl____wide__nilType chpl_macro_tmp_2602;
  chpl____wide_object chpl_macro_tmp_2603;
  chpl____wide__ref_syserr chpl_macro_tmp_2604;
  chpl__class_localson_fn_chpl89_object chpl_macro_tmp_2605;
  chpl____wide__ref_syserr chpl_macro_tmp_2606;
  chpl____wide__nilType chpl_macro_tmp_2607;
  chpl____wide_Error chpl_macro_tmp_2608;
  chpl____wide__nilType chpl_macro_tmp_2609;
  chpl____wide_Error chpl_macro_tmp_2610;
  chpl____wide__ref_chpl____wide__ref_string chpl_macro_tmp_2611;
  chpl____wide_object chpl_macro_tmp_2612;
  chpl____wide__nilType chpl_macro_tmp_2613;
  chpl____wide_object chpl_macro_tmp_2614;
  chpl__class_localson_fn_chpl90_object chpl_macro_tmp_2615;
  chpl____wide__nilType chpl_macro_tmp_2616;
  chpl____wide_Error chpl_macro_tmp_2617;
  chpl____wide__ref_int64_t chpl_macro_tmp_2618;
  chpl____wide_object chpl_macro_tmp_2619;
  chpl____wide__nilType chpl_macro_tmp_2620;
  chpl____wide_object chpl_macro_tmp_2621;
  chpl__class_localson_fn_chpl90_object chpl_macro_tmp_2622;
  chpl____wide__nilType chpl_macro_tmp_2623;
  chpl____wide_Error chpl_macro_tmp_2624;
  chpl____wide__ref_chpl____wide__ref_ioNewline chpl_macro_tmp_2625;
  chpl____wide_object chpl_macro_tmp_2626;
  chpl____wide__nilType chpl_macro_tmp_2627;
  chpl____wide_object chpl_macro_tmp_2628;
  chpl__class_localson_fn_chpl90_object chpl_macro_tmp_2629;
  chpl____wide_object chpl_macro_tmp_2630;
  chpl____wide__nilType chpl_macro_tmp_2631;
  chpl____wide_object chpl_macro_tmp_2632;
  chpl__class_localson_fn_chpl90_object chpl_macro_tmp_2633;
  local__str_literal_1923_chpl = _str_literal_1923_chpl /* "in lock" */;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  local__str_literal_1921_chpl = _str_literal_1921_chpl /* "Operation attempted on an invalid channel" */;
  chpl_macro_tmp_2598.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2598.addr = nil;
  chpl_macro_tmp_2599.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2599.addr = NULL;
  error_chpl = chpl_macro_tmp_2599;
  rvfRerefTmp_chpl = this_chpl7;
  call_tmp_chpl36 = qio_int_to_err(INT32(0));
  err_chpl = call_tmp_chpl36;
  tmp_chpl15 = (this_chpl7)->_channel_internal;
  coerce_tmp_chpl3 = tmp_chpl15;
  if (((c_void_ptr)(coerce_tmp_chpl3)) == nil) {
    fromSyserr_chpl2(((int64_t)(EINVAL)), &local__str_literal_1921_chpl, &ret_tmp_chpl, INT64(4310), INT32(77));
    call_tmp_chpl37 = ret_tmp_chpl;
    i_x_chpl = &call_tmp_chpl37;
    i__retArg_chpl = &ret_tmp_chpl2;
    _formal_tmp_x_chpl = *(i_x_chpl);
    i_this_chpl = &_formal_tmp_x_chpl;
    call_tmp_chpl39 = ((Error_chpl)((i_this_chpl)->chpl_p));
    i_this_chpl2 = &_formal_tmp_x_chpl;
    (i_this_chpl2)->chpl_p = ((SystemError_chpl)(nil));
    if (((object_chpl)(call_tmp_chpl39)) == nil) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(4310), INT32(77));
    }
    chpl_macro_tmp_2600.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2600.addr = call_tmp_chpl39;
    tmp_chpl16 = chpl_macro_tmp_2600;
    init_chpl68(&initTemp_chpl, tmp_chpl16);
    call_tmp_chpl40 = initTemp_chpl;
    ret_chpl = call_tmp_chpl40;
    chpl__autoDestroy24(&_formal_tmp_x_chpl);
    *(i__retArg_chpl) = ret_chpl;
    coerce_tmp_chpl4 = ret_tmp_chpl2;
    _formal_tmp_in_err_chpl = coerce_tmp_chpl4;
    call_tmp_chpl38 = chpl_fix_thrown_error(&_formal_tmp_in_err_chpl, INT64(4310), INT32(77));
    error_chpl = call_tmp_chpl38;
    goto _endlock_chpl;
  }
  call_tmp_chpl41 = &((this_chpl7)->home);
  coerce_tmp_chpl5 = (call_tmp_chpl41)->_instance;
  chpl_macro_tmp_2601.locale = (&coerce_tmp_chpl5)->locale;
  chpl_macro_tmp_2601.addr = ((object_chpl)((&coerce_tmp_chpl5)->addr));
  coerce_tmp_chpl6 = chpl_macro_tmp_2601;
  chpl_macro_tmp_2602.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2602.addr = nil;
  chpl_macro_tmp_2603.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2603.addr = NULL;
  tmp_chpl17 = chpl_macro_tmp_2603;
  if (! (((&coerce_tmp_chpl6)->addr != (&tmp_chpl17)->addr) || ((!(! (&coerce_tmp_chpl6)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl6)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl17)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(4310), INT32(77));
  }
  call_tmp_chpl42 = (&coerce_tmp_chpl5)->locale;
  chpl_rmem_consist_release(INT64(4310), INT32(77));
  rvfDerefTmp_chpl = *(this_chpl7);
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl42);
  if (isdirect_chpl) {
    chpl_macro_tmp_2604.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2604.addr = &err_chpl;
    tmp_chpl18 = chpl_macro_tmp_2604;
    on_fn_chpl89(&rvfDerefTmp_chpl, tmp_chpl18);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl89)(&chpl_macro_tmp_2605));
    chpl_check_nil(_args_foron_fn_chpl, INT64(4310), INT32(77));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl42;
    chpl_check_nil(_args_foron_fn_chpl, INT64(4310), INT32(77));
    (_args_foron_fn_chpl)->_1_rvfDerefTmp = rvfDerefTmp_chpl;
    tmp_chpl19 = &err_chpl;
    chpl_macro_tmp_2606.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2606.addr = tmp_chpl19;
    tmp_chpl20 = chpl_macro_tmp_2606;
    chpl_check_nil(_args_foron_fn_chpl, INT64(4310), INT32(77));
    (_args_foron_fn_chpl)->_2_err = tmp_chpl20;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl89_object);
    chpl_taskRunningCntDec(INT64(4310), INT32(77));
    /*** wrapon_fn_chpl89 ***/ chpl_executeOn(call_tmp_chpl42, INT32(101), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(2328), INT32(77));
    chpl_taskRunningCntInc(INT64(4310), INT32(77));
  }
  chpl_rmem_consist_acquire(INT64(4310), INT32(77));
  call_tmp_chpl43 = qio_err_iserr(err_chpl);
  if (call_tmp_chpl43 != INT32(0)) {
    chpl_macro_tmp_2607.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2607.addr = nil;
    chpl_macro_tmp_2608.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2608.addr = NULL;
    error_chpl2 = chpl_macro_tmp_2608;
    tmp_chpl21 = &error_chpl2;
    _ch_ioerror_chpl(rvfRerefTmp_chpl, err_chpl, &local__str_literal_1923_chpl, tmp_chpl21);
    if ((&error_chpl2)->addr != nil) {
      goto handler_chpl;
    }
    handler_chpl:;
    if ((&error_chpl2)->addr != nil) {
      error_chpl = error_chpl2;
      goto _endlock_chpl;
    }
  }
  _endlock_chpl:;
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl2;
  }
  handler_chpl2:;
  if ((&error_chpl)->addr != nil) {
    chpl_gen_comm_put(((void*)(&error_chpl)), chpl_nodeFromLocaleID((error_out_chpl).locale, INT64(0), INT32(0)), (error_out_chpl).addr, sizeof(chpl____wide_Error), COMMID(40), INT64(4310), INT64(77));
    goto _endon_fn_chpl;
  }
  chpl_macro_tmp_2609.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2609.addr = nil;
  chpl_macro_tmp_2610.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2610.addr = NULL;
  error_chpl3 = chpl_macro_tmp_2610;
  chpl_macro_tmp_2611.locale = (args_chpl).locale;
  chpl_macro_tmp_2611.addr = &(((args_chpl).addr)->x0);
  chpl_gen_comm_get(((void*)(&call_tmp_chpl44)), chpl_nodeFromLocaleID((chpl_macro_tmp_2611).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2611).addr, sizeof(chpl____wide__ref_string), COMMID(41), INT64(4312), INT64(77));
  rvfRerefTmp_chpl2 = this_chpl7;
  rvfRerefTmp_chpl3 = *(origLocale_chpl);
  tmp_chpl22 = &error_chpl3;
  _writeOne_chpl2(rvfRerefTmp_chpl2, call_tmp_chpl44, &rvfRerefTmp_chpl3, tmp_chpl22);
  if ((&error_chpl3)->addr != nil) {
    goto handler_chpl3;
  }
  handler_chpl3:;
  if ((&error_chpl3)->addr != nil) {
    chpl_gen_comm_put(((void*)(&error_chpl3)), chpl_nodeFromLocaleID((error_out_chpl).locale, INT64(0), INT32(0)), (error_out_chpl).addr, sizeof(chpl____wide_Error), COMMID(42), INT64(4312), INT64(77));
    call_tmp_chpl45 = &((this_chpl7)->home);
    coerce_tmp_chpl7 = (call_tmp_chpl45)->_instance;
    chpl_macro_tmp_2612.locale = (&coerce_tmp_chpl7)->locale;
    chpl_macro_tmp_2612.addr = ((object_chpl)((&coerce_tmp_chpl7)->addr));
    coerce_tmp_chpl8 = chpl_macro_tmp_2612;
    chpl_macro_tmp_2613.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2613.addr = nil;
    chpl_macro_tmp_2614.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2614.addr = NULL;
    tmp_chpl23 = chpl_macro_tmp_2614;
    if (! (((&coerce_tmp_chpl8)->addr != (&tmp_chpl23)->addr) || ((!(! (&coerce_tmp_chpl8)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl8)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl23)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(4310), INT32(77));
    }
    call_tmp_chpl46 = (&coerce_tmp_chpl7)->locale;
    chpl_rmem_consist_release(INT64(4310), INT32(77));
    rvfDerefTmp_chpl2 = *(this_chpl7);
    isdirect_chpl2 = chpl_doDirectExecuteOn(call_tmp_chpl46);
    if (isdirect_chpl2) {
      on_fn_chpl90(&rvfDerefTmp_chpl2);
    } else {
      _args_foron_fn_chpl2 = ((_class_localson_fn_chpl90)(&chpl_macro_tmp_2615));
      chpl_check_nil(_args_foron_fn_chpl2, INT64(4310), INT32(77));
      (_args_foron_fn_chpl2)->_0_tmp = call_tmp_chpl46;
      chpl_check_nil(_args_foron_fn_chpl2, INT64(4310), INT32(77));
      (_args_foron_fn_chpl2)->_1_rvfDerefTmp = rvfDerefTmp_chpl2;
      _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
      _args_sizeon_fn_chpl2 = sizeof(chpl__class_localson_fn_chpl90_object);
      chpl_taskRunningCntDec(INT64(4310), INT32(77));
      /*** wrapon_fn_chpl90 ***/ chpl_executeOn(call_tmp_chpl46, INT32(102), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), _args_sizeon_fn_chpl2, INT64(2340), INT32(77));
      chpl_taskRunningCntInc(INT64(4310), INT32(77));
    }
    chpl_rmem_consist_acquire(INT64(4310), INT32(77));
    goto _endon_fn_chpl;
  }
  chpl_macro_tmp_2616.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2616.addr = nil;
  chpl_macro_tmp_2617.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2617.addr = NULL;
  error_chpl4 = chpl_macro_tmp_2617;
  chpl_macro_tmp_2618.locale = (args_chpl).locale;
  chpl_macro_tmp_2618.addr = &(((args_chpl).addr)->x1);
  chpl_gen_comm_get(((void*)(&tmp_chpl24)), chpl_nodeFromLocaleID((chpl_macro_tmp_2618).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2618).addr, sizeof(int64_t), COMMID(43), INT64(4312), INT64(77));
  rvfRerefTmp_chpl4 = this_chpl7;
  rvfRerefTmp_chpl5 = *(origLocale_chpl);
  tmp_chpl25 = &error_chpl4;
  _writeOne_chpl(rvfRerefTmp_chpl4, tmp_chpl24, &rvfRerefTmp_chpl5, tmp_chpl25);
  if ((&error_chpl4)->addr != nil) {
    goto handler_chpl4;
  }
  handler_chpl4:;
  if ((&error_chpl4)->addr != nil) {
    chpl_gen_comm_put(((void*)(&error_chpl4)), chpl_nodeFromLocaleID((error_out_chpl).locale, INT64(0), INT32(0)), (error_out_chpl).addr, sizeof(chpl____wide_Error), COMMID(44), INT64(4312), INT64(77));
    call_tmp_chpl47 = &((this_chpl7)->home);
    coerce_tmp_chpl9 = (call_tmp_chpl47)->_instance;
    chpl_macro_tmp_2619.locale = (&coerce_tmp_chpl9)->locale;
    chpl_macro_tmp_2619.addr = ((object_chpl)((&coerce_tmp_chpl9)->addr));
    coerce_tmp_chpl10 = chpl_macro_tmp_2619;
    chpl_macro_tmp_2620.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2620.addr = nil;
    chpl_macro_tmp_2621.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2621.addr = NULL;
    tmp_chpl26 = chpl_macro_tmp_2621;
    if (! (((&coerce_tmp_chpl10)->addr != (&tmp_chpl26)->addr) || ((!(! (&coerce_tmp_chpl10)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl10)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl26)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(4310), INT32(77));
    }
    call_tmp_chpl48 = (&coerce_tmp_chpl9)->locale;
    chpl_rmem_consist_release(INT64(4310), INT32(77));
    rvfDerefTmp_chpl3 = *(this_chpl7);
    isdirect_chpl3 = chpl_doDirectExecuteOn(call_tmp_chpl48);
    if (isdirect_chpl3) {
      on_fn_chpl90(&rvfDerefTmp_chpl3);
    } else {
      _args_foron_fn_chpl3 = ((_class_localson_fn_chpl90)(&chpl_macro_tmp_2622));
      chpl_check_nil(_args_foron_fn_chpl3, INT64(4310), INT32(77));
      (_args_foron_fn_chpl3)->_0_tmp = call_tmp_chpl48;
      chpl_check_nil(_args_foron_fn_chpl3, INT64(4310), INT32(77));
      (_args_foron_fn_chpl3)->_1_rvfDerefTmp = rvfDerefTmp_chpl3;
      _args_vforon_fn_chpl3 = ((void*)(_args_foron_fn_chpl3));
      _args_sizeon_fn_chpl3 = sizeof(chpl__class_localson_fn_chpl90_object);
      chpl_taskRunningCntDec(INT64(4310), INT32(77));
      /*** wrapon_fn_chpl90 ***/ chpl_executeOn(call_tmp_chpl48, INT32(102), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl3)), _args_sizeon_fn_chpl3, INT64(2340), INT32(77));
      chpl_taskRunningCntInc(INT64(4310), INT32(77));
    }
    chpl_rmem_consist_acquire(INT64(4310), INT32(77));
    goto _endon_fn_chpl;
  }
  chpl_macro_tmp_2623.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2623.addr = nil;
  chpl_macro_tmp_2624.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2624.addr = NULL;
  error_chpl5 = chpl_macro_tmp_2624;
  chpl_macro_tmp_2625.locale = (args_chpl).locale;
  chpl_macro_tmp_2625.addr = &(((args_chpl).addr)->x2);
  chpl_gen_comm_get(((void*)(&call_tmp_chpl49)), chpl_nodeFromLocaleID((chpl_macro_tmp_2625).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2625).addr, sizeof(chpl____wide__ref_ioNewline), COMMID(45), INT64(4312), INT64(77));
  rvfRerefTmp_chpl6 = this_chpl7;
  rvfRerefTmp_chpl7 = *(origLocale_chpl);
  tmp_chpl27 = &error_chpl5;
  _writeOne_chpl3(rvfRerefTmp_chpl6, call_tmp_chpl49, &rvfRerefTmp_chpl7, tmp_chpl27);
  if ((&error_chpl5)->addr != nil) {
    goto handler_chpl5;
  }
  handler_chpl5:;
  if ((&error_chpl5)->addr != nil) {
    chpl_gen_comm_put(((void*)(&error_chpl5)), chpl_nodeFromLocaleID((error_out_chpl).locale, INT64(0), INT32(0)), (error_out_chpl).addr, sizeof(chpl____wide_Error), COMMID(46), INT64(4312), INT64(77));
    call_tmp_chpl50 = &((this_chpl7)->home);
    coerce_tmp_chpl11 = (call_tmp_chpl50)->_instance;
    chpl_macro_tmp_2626.locale = (&coerce_tmp_chpl11)->locale;
    chpl_macro_tmp_2626.addr = ((object_chpl)((&coerce_tmp_chpl11)->addr));
    coerce_tmp_chpl12 = chpl_macro_tmp_2626;
    chpl_macro_tmp_2627.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2627.addr = nil;
    chpl_macro_tmp_2628.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2628.addr = NULL;
    tmp_chpl28 = chpl_macro_tmp_2628;
    if (! (((&coerce_tmp_chpl12)->addr != (&tmp_chpl28)->addr) || ((!(! (&coerce_tmp_chpl12)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl12)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl28)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(4310), INT32(77));
    }
    call_tmp_chpl51 = (&coerce_tmp_chpl11)->locale;
    chpl_rmem_consist_release(INT64(4310), INT32(77));
    rvfDerefTmp_chpl4 = *(this_chpl7);
    isdirect_chpl4 = chpl_doDirectExecuteOn(call_tmp_chpl51);
    if (isdirect_chpl4) {
      on_fn_chpl90(&rvfDerefTmp_chpl4);
    } else {
      _args_foron_fn_chpl4 = ((_class_localson_fn_chpl90)(&chpl_macro_tmp_2629));
      chpl_check_nil(_args_foron_fn_chpl4, INT64(4310), INT32(77));
      (_args_foron_fn_chpl4)->_0_tmp = call_tmp_chpl51;
      chpl_check_nil(_args_foron_fn_chpl4, INT64(4310), INT32(77));
      (_args_foron_fn_chpl4)->_1_rvfDerefTmp = rvfDerefTmp_chpl4;
      _args_vforon_fn_chpl4 = ((void*)(_args_foron_fn_chpl4));
      _args_sizeon_fn_chpl4 = sizeof(chpl__class_localson_fn_chpl90_object);
      chpl_taskRunningCntDec(INT64(4310), INT32(77));
      /*** wrapon_fn_chpl90 ***/ chpl_executeOn(call_tmp_chpl51, INT32(102), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl4)), _args_sizeon_fn_chpl4, INT64(2340), INT32(77));
      chpl_taskRunningCntInc(INT64(4310), INT32(77));
    }
    chpl_rmem_consist_acquire(INT64(4310), INT32(77));
    goto _endon_fn_chpl;
  }
  call_tmp_chpl52 = &((this_chpl7)->home);
  coerce_tmp_chpl13 = (call_tmp_chpl52)->_instance;
  chpl_macro_tmp_2630.locale = (&coerce_tmp_chpl13)->locale;
  chpl_macro_tmp_2630.addr = ((object_chpl)((&coerce_tmp_chpl13)->addr));
  coerce_tmp_chpl14 = chpl_macro_tmp_2630;
  chpl_macro_tmp_2631.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2631.addr = nil;
  chpl_macro_tmp_2632.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2632.addr = NULL;
  tmp_chpl29 = chpl_macro_tmp_2632;
  if (! (((&coerce_tmp_chpl14)->addr != (&tmp_chpl29)->addr) || ((!(! (&coerce_tmp_chpl14)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl14)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl29)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(4310), INT32(77));
  }
  call_tmp_chpl53 = (&coerce_tmp_chpl13)->locale;
  chpl_rmem_consist_release(INT64(4310), INT32(77));
  rvfDerefTmp_chpl5 = *(this_chpl7);
  isdirect_chpl5 = chpl_doDirectExecuteOn(call_tmp_chpl53);
  if (isdirect_chpl5) {
    on_fn_chpl90(&rvfDerefTmp_chpl5);
  } else {
    _args_foron_fn_chpl5 = ((_class_localson_fn_chpl90)(&chpl_macro_tmp_2633));
    chpl_check_nil(_args_foron_fn_chpl5, INT64(4310), INT32(77));
    (_args_foron_fn_chpl5)->_0_tmp = call_tmp_chpl53;
    chpl_check_nil(_args_foron_fn_chpl5, INT64(4310), INT32(77));
    (_args_foron_fn_chpl5)->_1_rvfDerefTmp = rvfDerefTmp_chpl5;
    _args_vforon_fn_chpl5 = ((void*)(_args_foron_fn_chpl5));
    _args_sizeon_fn_chpl5 = sizeof(chpl__class_localson_fn_chpl90_object);
    chpl_taskRunningCntDec(INT64(4310), INT32(77));
    /*** wrapon_fn_chpl90 ***/ chpl_executeOn(call_tmp_chpl53, INT32(102), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl5)), _args_sizeon_fn_chpl5, INT64(2340), INT32(77));
    chpl_taskRunningCntInc(INT64(4310), INT32(77));
  }
  chpl_rmem_consist_acquire(INT64(4310), INT32(77));
  _endon_fn_chpl:;
  return;
}

/* IO.chpl:4309 */
static void wrapon_fn_chpl93(_class_localson_fn_chpl93 c_chpl) {
  channel_T_dynamic_T_chpl _1_rvfDerefTmp_chpl;
  channel_T_dynamic_T_chpl tmp_chpl15;
  chpl____wide__ref__tuple_3__ref_string_int64_t__ref_ioNewline _2_args_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  locale_chpl _3_rvfDerefTmp_chpl;
  locale_chpl tmp_chpl16;
  chpl____wide__ref__wide_Error _4_error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(4309), INT32(77));
  chpl_check_nil(c_chpl, INT64(4309), INT32(77));
  tmp_chpl15 = (c_chpl)->_1_rvfDerefTmp;
  _1_rvfDerefTmp_chpl = tmp_chpl15;
  chpl_check_nil(c_chpl, INT64(4309), INT32(77));
  _2_args_chpl = (c_chpl)->_2_args;
  chpl_check_nil(c_chpl, INT64(4309), INT32(77));
  tmp_chpl16 = (c_chpl)->_3_rvfDerefTmp;
  _3_rvfDerefTmp_chpl = tmp_chpl16;
  chpl_check_nil(c_chpl, INT64(4309), INT32(77));
  _4_error_chpl = (c_chpl)->_4_error;
  chpl_taskRunningCntInc(INT64(4309), INT32(77));
  on_fn_chpl93(&_1_rvfDerefTmp_chpl, _2_args_chpl, &_3_rvfDerefTmp_chpl, _4_error_chpl);
  chpl_taskRunningCntDec(INT64(4309), INT32(77));
  chpl_rmem_consist_release(INT64(4309), INT32(77));
  return;
}

/* IO.chpl:4366 */
static chpl_bool writeln_chpl2(channel_T_dynamic_T_chpl * this_chpl7,
                               string_chpl * _e0_args_chpl,
                               int64_t _e1_args_chpl,
                               chpl____wide_Error * error_out_chpl) {
  string_chpl local__str_literal_75_chpl;
  locale_chpl local_nilLocale_chpl;
  chpl_bool ret_chpl;
  ioNewline_chpl call_tmp_chpl36;
  ioNewline_chpl initTemp_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_ioNewline_chpl i__e2_args_chpl = NULL;
  _tuple_3__ref_string_int64_t__ref_ioNewline_chpl args_chpl;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_ioNewline tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool ret_chpl2;
  locale_chpl ret_chpl3;
  _ref_locale_chpl call_tmp_chpl37 = NULL;
  locale_chpl ret_chpl4;
  locale_chpl tmp_chpl17;
  chpl____wide__ref_locale tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  locale_chpl ret_chpl5;
  chpl_bool call_tmp_chpl38;
  locale_chpl call_tmp_chpl39;
  chpl_localeID_t call_tmp_chpl40;
  int32_t call_tmp_chpl41;
  chpl_localeID_t call_tmp_chpl42;
  locale_chpl call_tmp_chpl43;
  locale_chpl ret_tmp_chpl;
  chpl____wide__ref_chpl_localeID_t tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl i_x_chpl = NULL;
  chpl____wide__ref_locale tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  locale_chpl origLocale_chpl;
  _ref_locale_chpl call_tmp_chpl44 = NULL;
  chpl_localeID_t call_tmp_chpl45;
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_T_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  chpl____wide__ref__tuple_3__ref_string_int64_t__ref_ioNewline tmp_chpl25 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_Error tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl93 _args_foron_fn_chpl = NULL;
  _ref__tuple_3__ref_string_int64_t__ref_ioNewline_chpl tmp_chpl27 = NULL;
  chpl____wide__ref__tuple_3__ref_string_int64_t__ref_ioNewline tmp_chpl28 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl29 = NULL;
  chpl____wide__ref__wide_Error tmp_chpl30 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  _ref_locale_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_locale tmp_chpl31 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_locale tmp_chpl32 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__nilType chpl_macro_tmp_2634;
  chpl____wide_Error chpl_macro_tmp_2635;
  chpl____wide__ref_string chpl_macro_tmp_2636;
  chpl____wide__ref_ioNewline chpl_macro_tmp_2637;
  chpl____wide__ref_locale chpl_macro_tmp_2638;
  chpl____wide__ref_locale chpl_macro_tmp_2639;
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_2640;
  chpl____wide__ref_locale chpl_macro_tmp_2641;
  chpl____wide__ref_locale chpl_macro_tmp_2642;
  chpl____wide__ref_locale chpl_macro_tmp_2643;
  chpl____wide_object chpl_macro_tmp_2644;
  chpl____wide__nilType chpl_macro_tmp_2645;
  chpl____wide_object chpl_macro_tmp_2646;
  chpl____wide__nilType chpl_macro_tmp_2647;
  chpl____wide_Error chpl_macro_tmp_2648;
  chpl____wide__ref__tuple_3__ref_string_int64_t__ref_ioNewline chpl_macro_tmp_2649;
  chpl____wide__ref__wide_Error chpl_macro_tmp_2650;
  chpl__class_localson_fn_chpl93_object chpl_macro_tmp_2651;
  chpl____wide__ref__tuple_3__ref_string_int64_t__ref_ioNewline chpl_macro_tmp_2652;
  chpl____wide__ref__wide_Error chpl_macro_tmp_2653;
  chpl____wide__ref_locale chpl_macro_tmp_2654;
  chpl____wide__ref_locale chpl_macro_tmp_2655;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  local_nilLocale_chpl = nilLocale_chpl;
  init_chpl80(&initTemp_chpl, UINT8(false));
  call_tmp_chpl36 = initTemp_chpl;
  chpl_macro_tmp_2634.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2634.addr = nil;
  chpl_macro_tmp_2635.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2635.addr = NULL;
  error_chpl = chpl_macro_tmp_2635;
  i__e2_args_chpl = &call_tmp_chpl36;
  chpl_macro_tmp_2636.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2636.addr = _e0_args_chpl;
  tmp_chpl15 = chpl_macro_tmp_2636;
  (&args_chpl)->x0 = tmp_chpl15;
  (&args_chpl)->x1 = _e1_args_chpl;
  chpl_macro_tmp_2637.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2637.addr = i__e2_args_chpl;
  tmp_chpl16 = chpl_macro_tmp_2637;
  (&args_chpl)->x2 = tmp_chpl16;
  call_tmp_chpl37 = &((this_chpl7)->_readWriteThisFromLocale);
  chpl_macro_tmp_2638.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2638.addr = &tmp_chpl17;
  tmp_chpl18 = chpl_macro_tmp_2638;
  chpl_macro_tmp_2639.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2639.addr = call_tmp_chpl37;
  tmp_chpl19 = chpl_macro_tmp_2639;
  init_ASSIGN__chpl(tmp_chpl18, tmp_chpl19);
  ret_chpl4 = tmp_chpl17;
  ret_chpl5 = ret_chpl4;
  call_tmp_chpl38 = chpl___EQUALS_(&ret_chpl5, &local_nilLocale_chpl);
  if (call_tmp_chpl38) {
    call_tmp_chpl41 = get_chpl_nodeID();
    call_tmp_chpl42 = chpl_rt_buildLocaleID(call_tmp_chpl41, c_sublocid_any);
    call_tmp_chpl40 = call_tmp_chpl42;
    chpl_macro_tmp_2640.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2640.addr = &call_tmp_chpl40;
    tmp_chpl20 = chpl_macro_tmp_2640;
    chpl_localeID_to_locale(tmp_chpl20, &ret_tmp_chpl);
    call_tmp_chpl43 = ret_tmp_chpl;
    call_tmp_chpl39 = call_tmp_chpl43;
    chpl_macro_tmp_2641.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2641.addr = &ret_chpl5;
    tmp_chpl21 = chpl_macro_tmp_2641;
    chpl_macro_tmp_2642.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2642.addr = &call_tmp_chpl39;
    tmp_chpl22 = chpl_macro_tmp_2642;
    chpl___ASSIGN_2(tmp_chpl21, tmp_chpl22);
    i_x_chpl = &call_tmp_chpl39;
    chpl_macro_tmp_2643.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2643.addr = i_x_chpl;
    tmp_chpl23 = chpl_macro_tmp_2643;
    deinit_chpl14(tmp_chpl23);
  }
  ret_chpl3 = ret_chpl5;
  origLocale_chpl = ret_chpl3;
  call_tmp_chpl44 = &((this_chpl7)->home);
  coerce_tmp_chpl3 = (call_tmp_chpl44)->_instance;
  chpl_macro_tmp_2644.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_2644.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_2644;
  chpl_macro_tmp_2645.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2645.addr = nil;
  chpl_macro_tmp_2646.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2646.addr = NULL;
  tmp_chpl24 = chpl_macro_tmp_2646;
  if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl24)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl24)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(4367), INT32(77));
  }
  call_tmp_chpl45 = (&coerce_tmp_chpl3)->locale;
  chpl_rmem_consist_release(INT64(4367), INT32(77));
  chpl_macro_tmp_2647.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2647.addr = nil;
  chpl_macro_tmp_2648.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2648.addr = NULL;
  error_chpl2 = chpl_macro_tmp_2648;
  rvfDerefTmp_chpl = *(this_chpl7);
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl45);
  if (isdirect_chpl) {
    chpl_macro_tmp_2649.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2649.addr = &args_chpl;
    tmp_chpl25 = chpl_macro_tmp_2649;
    chpl_macro_tmp_2650.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2650.addr = &error_chpl2;
    tmp_chpl26 = chpl_macro_tmp_2650;
    on_fn_chpl93(&rvfDerefTmp_chpl, tmp_chpl25, &ret_chpl3, tmp_chpl26);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl93)(&chpl_macro_tmp_2651));
    chpl_check_nil(_args_foron_fn_chpl, INT64(4367), INT32(77));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl45;
    chpl_check_nil(_args_foron_fn_chpl, INT64(4367), INT32(77));
    (_args_foron_fn_chpl)->_1_rvfDerefTmp = rvfDerefTmp_chpl;
    tmp_chpl27 = &args_chpl;
    chpl_macro_tmp_2652.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2652.addr = tmp_chpl27;
    tmp_chpl28 = chpl_macro_tmp_2652;
    chpl_check_nil(_args_foron_fn_chpl, INT64(4367), INT32(77));
    (_args_foron_fn_chpl)->_2_args = tmp_chpl28;
    chpl_check_nil(_args_foron_fn_chpl, INT64(4367), INT32(77));
    (_args_foron_fn_chpl)->_3_rvfDerefTmp = ret_chpl3;
    tmp_chpl29 = &error_chpl2;
    chpl_macro_tmp_2653.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2653.addr = tmp_chpl29;
    tmp_chpl30 = chpl_macro_tmp_2653;
    chpl_check_nil(_args_foron_fn_chpl, INT64(4367), INT32(77));
    (_args_foron_fn_chpl)->_4_error = tmp_chpl30;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl93_object);
    chpl_taskRunningCntDec(INT64(4367), INT32(77));
    /*** wrapon_fn_chpl93 ***/ chpl_executeOn(call_tmp_chpl45, INT32(105), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(4309), INT32(77));
    chpl_taskRunningCntInc(INT64(4367), INT32(77));
  }
  if ((&error_chpl2)->addr != nil) {
    error_chpl = error_chpl2;
    i_x_chpl2 = &origLocale_chpl;
    chpl_macro_tmp_2654.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2654.addr = i_x_chpl2;
    tmp_chpl31 = chpl_macro_tmp_2654;
    deinit_chpl14(tmp_chpl31);
    goto _endwrite_chpl;
  }
  chpl_rmem_consist_acquire(INT64(4367), INT32(77));
  ret_chpl2 = UINT8(true);
  i_x_chpl3 = &origLocale_chpl;
  chpl_macro_tmp_2655.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2655.addr = i_x_chpl3;
  tmp_chpl32 = chpl_macro_tmp_2655;
  deinit_chpl14(tmp_chpl32);
  _endwrite_chpl:;
  if ((&error_chpl)->addr != nil) {
    *(error_out_chpl) = error_chpl;
    goto _endwriteln_chpl;
  }
  ret_chpl = ret_chpl2;
  _endwriteln_chpl:;
  return ret_chpl;
}

