/* Errors.chpl:34 */
static void chpl__init_Errors(int64_t _ln_chpl,
                              int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_Errors_p) {
    goto _exit_chpl__init_Errors_chpl;
  }
  printModuleInit_chpl("%*s\n", "Errors", INT64(6));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_Errors_p = UINT8(true);
  {
    chpl__init_ChapelLocks(INT64(34), INT32(6));
    chpl__init_CTypes(INT64(34), INT32(6));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_Errors_chpl:;
  return;
}

/* Errors.chpl:42 */
static void chpl__auto_destroy_Error(chpl____wide_Error this_chpl7) {
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_362;
  chpl_check_nil((&this_chpl7)->addr, INT64(53), INT32(6));
  chpl_macro_tmp_362.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_362.addr = &(((&this_chpl7)->addr)->_msg);
  _field_destructor_tmp__chpl = chpl_macro_tmp_362;
  deinit_chpl42(_field_destructor_tmp__chpl);
  return;
}

/* Errors.chpl:73 */
static void message_chpl(chpl____wide_Error this_chpl7,
                         chpl____wide__ref_string _retArg_chpl) {
  chpl____wide__ref_string call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl;
  string_chpl tmp_chpl15;
  chpl____wide__ref_string chpl_macro_tmp_363;
  chpl_check_nil((&this_chpl7)->addr, INT64(74), INT32(6));
  chpl_macro_tmp_363.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_363.addr = &(((&this_chpl7)->addr)->_msg);
  call_tmp_chpl36 = chpl_macro_tmp_363;
  init_ASSIGN__chpl21(&tmp_chpl15, call_tmp_chpl36);
  ret_chpl = tmp_chpl15;
  chpl_gen_comm_put(((void*)(&ret_chpl)), chpl_nodeFromLocaleID((_retArg_chpl).locale, INT64(0), INT32(0)), (_retArg_chpl).addr, sizeof(string_chpl), COMMID(0), INT64(73), INT64(6));
  return;
}

/* Errors.chpl:82 */
static void chpl__auto_destroy_NilThrownError(chpl____wide_NilThrownError this_chpl7) {
  chpl____wide_Error _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_364;
  chpl____wide__ref_string chpl_macro_tmp_365;
  chpl_macro_tmp_364.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_364.addr = ((Error_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_364;
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(82), INT32(6));
  chpl_macro_tmp_365.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_365.addr = &(((&_parent_destructor_tmp__chpl)->addr)->_msg);
  _field_destructor_tmp__chpl = chpl_macro_tmp_365;
  deinit_chpl42(_field_destructor_tmp__chpl);
  return;
}

/* Errors.chpl:82 */
static NilThrownError_chpl _new_chpl12(int64_t _ln_chpl,
                                       int32_t _fn_chpl) {
  NilThrownError_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  Error_chpl super_tmp_chpl = NULL;
  Error_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl _msg_chpl;
  chpl____wide_Error chpl_macro_tmp_366;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_NilThrownError_chpl_object), INT16(2), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((NilThrownError_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_NilThrownError_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_object_chpl;
  init_coerce_tmp_chpl3 = ((Error_chpl)(nil));
  chpl_macro_tmp_366.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_366.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_366;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_next = tmp_chpl15;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->thrownLine = INT64(0);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->thrownFileId = INT32(0);
  init_chpl73(&_msg_chpl);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_msg = _msg_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_hasThrowInfo = UINT8(false);
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(((Error_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_NilThrownError_chpl;
  return initTemp_chpl;
}

/* Errors.chpl:84 */
static void message_chpl2(chpl____wide_NilThrownError this_chpl7,
                          chpl____wide__ref_string _retArg_chpl) {
  string_chpl local__str_literal_199_chpl;
  string_chpl inlineImm_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  string_chpl ret_chpl;
  string_chpl tmp_chpl15;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_367;
  local__str_literal_199_chpl = _str_literal_199_chpl /* "thrown error was nil" */;
  inlineImm_chpl = local__str_literal_199_chpl;
  i_x_chpl = &inlineImm_chpl;
  chpl_macro_tmp_367.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_367.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_367;
  init_ASSIGN__chpl21(&tmp_chpl15, tmp_chpl16);
  ret_chpl = tmp_chpl15;
  chpl_gen_comm_put(((void*)(&ret_chpl)), chpl_nodeFromLocaleID((_retArg_chpl).locale, INT64(0), INT32(0)), (_retArg_chpl).addr, sizeof(string_chpl), COMMID(1), INT64(84), INT64(6));
  return;
}

/* Errors.chpl:109 */
static void chpl__auto_destroy_DecodeError(chpl____wide_DecodeError this_chpl7) {
  chpl____wide_Error _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_368;
  chpl____wide__ref_string chpl_macro_tmp_369;
  chpl_macro_tmp_368.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_368.addr = ((Error_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_368;
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(109), INT32(6));
  chpl_macro_tmp_369.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_369.addr = &(((&_parent_destructor_tmp__chpl)->addr)->_msg);
  _field_destructor_tmp__chpl = chpl_macro_tmp_369;
  deinit_chpl42(_field_destructor_tmp__chpl);
  return;
}

/* Errors.chpl:109 */
static DecodeError_chpl _new_chpl13(int64_t _ln_chpl,
                                    int32_t _fn_chpl) {
  DecodeError_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  Error_chpl super_tmp_chpl = NULL;
  Error_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl _msg_chpl;
  chpl____wide_Error chpl_macro_tmp_370;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_DecodeError_chpl_object), INT16(1), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((DecodeError_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_DecodeError_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_object_chpl;
  init_coerce_tmp_chpl3 = ((Error_chpl)(nil));
  chpl_macro_tmp_370.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_370.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_370;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_next = tmp_chpl15;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->thrownLine = INT64(0);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->thrownFileId = INT32(0);
  init_chpl73(&_msg_chpl);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_msg = _msg_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_hasThrowInfo = UINT8(false);
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(((Error_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_DecodeError_chpl;
  return initTemp_chpl;
}

/* Errors.chpl:112 */
static void message_chpl3(chpl____wide_DecodeError this_chpl7,
                          chpl____wide__ref_string _retArg_chpl) {
  string_chpl local__str_literal_202_chpl;
  string_chpl inlineImm_chpl;
  _ref_string_chpl i_x_chpl = NULL;
  string_chpl ret_chpl;
  string_chpl tmp_chpl15;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_371;
  local__str_literal_202_chpl = _str_literal_202_chpl /* "Invalid UTF-8 character encountered." */;
  inlineImm_chpl = local__str_literal_202_chpl;
  i_x_chpl = &inlineImm_chpl;
  chpl_macro_tmp_371.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_371.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_371;
  init_ASSIGN__chpl21(&tmp_chpl15, tmp_chpl16);
  ret_chpl = tmp_chpl15;
  chpl_gen_comm_put(((void*)(&ret_chpl)), chpl_nodeFromLocaleID((_retArg_chpl).locale, INT64(0), INT32(0)), (_retArg_chpl).addr, sizeof(string_chpl), COMMID(2), INT64(112), INT64(6));
  return;
}

/* Errors.chpl:117 */
static void chpl__auto_destroy_IllegalArgumentError(chpl____wide_IllegalArgumentError this_chpl7) {
  chpl____wide_Error _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_372;
  chpl____wide__ref_string chpl_macro_tmp_373;
  chpl_macro_tmp_372.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_372.addr = ((Error_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_372;
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(117), INT32(6));
  chpl_macro_tmp_373.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_373.addr = &(((&_parent_destructor_tmp__chpl)->addr)->_msg);
  _field_destructor_tmp__chpl = chpl_macro_tmp_373;
  deinit_chpl42(_field_destructor_tmp__chpl);
  return;
}

/* Errors.chpl:120 */
static IllegalArgumentError_chpl _new_chpl14(string_chpl * info_chpl,
                                             int64_t _ln_chpl,
                                             int32_t _fn_chpl) {
  IllegalArgumentError_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  Error_chpl super_tmp_chpl = NULL;
  Error_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl _msg_chpl;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_374;
  chpl____wide__ref_string chpl_macro_tmp_375;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_IllegalArgumentError_chpl_object), INT16(27), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((IllegalArgumentError_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_IllegalArgumentError_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_object_chpl;
  init_coerce_tmp_chpl3 = ((Error_chpl)(nil));
  chpl_macro_tmp_374.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_374.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_374;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_next = tmp_chpl15;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->thrownLine = INT64(0);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->thrownFileId = INT32(0);
  chpl_macro_tmp_375.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_375.addr = info_chpl;
  tmp_chpl16 = chpl_macro_tmp_375;
  init_ASSIGN__chpl21(&_msg_chpl, tmp_chpl16);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_msg = _msg_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_hasThrowInfo = UINT8(false);
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(((Error_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_IllegalArgumentError_chpl;
  return initTemp_chpl;
}

/* Errors.chpl:124 */
static IllegalArgumentError_chpl _new_chpl15(string_chpl * formal_chpl,
                                             string_chpl * info_chpl,
                                             int64_t _ln_chpl,
                                             int32_t _fn_chpl) {
  string_chpl local__str_literal_205_chpl;
  string_chpl local__str_literal_204_chpl;
  IllegalArgumentError_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl2;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl38;
  string_chpl ret_tmp_chpl3;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl msg_chpl;
  Error_chpl super_tmp_chpl = NULL;
  _ref_string_chpl i_msg_chpl = NULL;
  Error_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_Error tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl _msg_chpl;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_376;
  chpl____wide__ref_string chpl_macro_tmp_377;
  chpl____wide__ref_string chpl_macro_tmp_378;
  chpl____wide_Error chpl_macro_tmp_379;
  chpl____wide__ref_string chpl_macro_tmp_380;
  chpl____wide__ref_string chpl_macro_tmp_381;
  chpl____wide__ref_string chpl_macro_tmp_382;
  chpl____wide__ref_string chpl_macro_tmp_383;
  local__str_literal_205_chpl = _str_literal_205_chpl /* "': " */;
  local__str_literal_204_chpl = _str_literal_204_chpl /* "illegal argument '" */;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_IllegalArgumentError_chpl_object), INT16(27), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((IllegalArgumentError_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_IllegalArgumentError_chpl;
  chpl_macro_tmp_376.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_376.addr = formal_chpl;
  tmp_chpl15 = chpl_macro_tmp_376;
  chpl___PLUS_(&local__str_literal_204_chpl, tmp_chpl15, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl_macro_tmp_377.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_377.addr = &local__str_literal_205_chpl;
  tmp_chpl16 = chpl_macro_tmp_377;
  chpl___PLUS_(&call_tmp_chpl36, tmp_chpl16, &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  chpl_macro_tmp_378.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_378.addr = info_chpl;
  tmp_chpl17 = chpl_macro_tmp_378;
  chpl___PLUS_(&call_tmp_chpl37, tmp_chpl17, &ret_tmp_chpl3);
  call_tmp_chpl38 = ret_tmp_chpl3;
  msg_chpl = call_tmp_chpl38;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  i_msg_chpl = &msg_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_object_chpl;
  init_coerce_tmp_chpl3 = ((Error_chpl)(nil));
  chpl_macro_tmp_379.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_379.addr = init_coerce_tmp_chpl3;
  tmp_chpl18 = chpl_macro_tmp_379;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_next = tmp_chpl18;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->thrownLine = INT64(0);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->thrownFileId = INT32(0);
  chpl_macro_tmp_380.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_380.addr = i_msg_chpl;
  tmp_chpl19 = chpl_macro_tmp_380;
  init_ASSIGN__chpl21(&_msg_chpl, tmp_chpl19);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_msg = _msg_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_hasThrowInfo = UINT8(false);
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(((Error_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_IllegalArgumentError_chpl;
  i_x_chpl = &msg_chpl;
  chpl_macro_tmp_381.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_381.addr = i_x_chpl;
  tmp_chpl20 = chpl_macro_tmp_381;
  deinit_chpl42(tmp_chpl20);
  i_x_chpl2 = &call_tmp_chpl37;
  chpl_macro_tmp_382.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_382.addr = i_x_chpl2;
  tmp_chpl21 = chpl_macro_tmp_382;
  deinit_chpl42(tmp_chpl21);
  i_x_chpl3 = &call_tmp_chpl36;
  chpl_macro_tmp_383.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_383.addr = i_x_chpl3;
  tmp_chpl22 = chpl_macro_tmp_383;
  deinit_chpl42(tmp_chpl22);
  return initTemp_chpl;
}

/* Errors.chpl:135 */
static void chpl__auto_destroy_CodepointSplittingError(chpl____wide_CodepointSplittingError this_chpl7) {
  chpl____wide_Error _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_384;
  chpl____wide__ref_string chpl_macro_tmp_385;
  chpl_macro_tmp_384.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_384.addr = ((Error_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_384;
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(135), INT32(6));
  chpl_macro_tmp_385.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_385.addr = &(((&_parent_destructor_tmp__chpl)->addr)->_msg);
  _field_destructor_tmp__chpl = chpl_macro_tmp_385;
  deinit_chpl42(_field_destructor_tmp__chpl);
  return;
}

/* Errors.chpl:136 */
static CodepointSplittingError_chpl _new_chpl16(string_chpl * info_chpl,
                                                int64_t _ln_chpl,
                                                int32_t _fn_chpl) {
  CodepointSplittingError_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  Error_chpl super_tmp_chpl = NULL;
  Error_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl _msg_chpl;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_386;
  chpl____wide__ref_string chpl_macro_tmp_387;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_CodepointSplittingError_chpl_object), INT16(36), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((CodepointSplittingError_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_CodepointSplittingError_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_object_chpl;
  init_coerce_tmp_chpl3 = ((Error_chpl)(nil));
  chpl_macro_tmp_386.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_386.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_386;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_next = tmp_chpl15;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->thrownLine = INT64(0);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->thrownFileId = INT32(0);
  chpl_macro_tmp_387.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_387.addr = info_chpl;
  tmp_chpl16 = chpl_macro_tmp_387;
  init_ASSIGN__chpl21(&_msg_chpl, tmp_chpl16);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_msg = _msg_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_hasThrowInfo = UINT8(false);
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(((Error_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_CodepointSplittingError_chpl;
  return initTemp_chpl;
}

/* Errors.chpl:140 */
static void message_chpl4(chpl____wide_CodepointSplittingError this_chpl7,
                          chpl____wide__ref_string _retArg_chpl) {
  string_chpl local__str_literal_206_chpl;
  chpl____wide_Error coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl;
  chpl____wide_Error chpl_macro_tmp_388;
  chpl____wide__ref_string chpl_macro_tmp_389;
  local__str_literal_206_chpl = _str_literal_206_chpl /* "Attempting to split a multi-byte codepoint. " */;
  chpl_macro_tmp_388.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_388.addr = ((Error_chpl)((&this_chpl7)->addr));
  coerce_tmp_chpl3 = chpl_macro_tmp_388;
  chpl_check_nil((&coerce_tmp_chpl3)->addr, INT64(141), INT32(6));
  chpl_macro_tmp_389.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_389.addr = &(((&coerce_tmp_chpl3)->addr)->_msg);
  call_tmp_chpl36 = chpl_macro_tmp_389;
  chpl___PLUS_(&local__str_literal_206_chpl, call_tmp_chpl36, &ret_tmp_chpl);
  call_tmp_chpl37 = ret_tmp_chpl;
  chpl_gen_comm_put(((void*)(&call_tmp_chpl37)), chpl_nodeFromLocaleID((_retArg_chpl).locale, INT64(0), INT32(0)), (_retArg_chpl).addr, sizeof(string_chpl), COMMID(3), INT64(140), INT64(6));
  return;
}

/* Errors.chpl:152 */
static void init_chpl74(chpl_TaskErrors * this_chpl7,
                        Error_chpl _head_chpl,
                        chpl_LocalSpinlock * _errorsLock_chpl) {
  chpl_LocalSpinlock _formal_tmp__errorsLock_chpl;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_390;
  _formal_tmp__errorsLock_chpl = *(_errorsLock_chpl);
  chpl_macro_tmp_390.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_390.addr = _head_chpl;
  tmp_chpl15 = chpl_macro_tmp_390;
  (this_chpl7)->_head = tmp_chpl15;
  (this_chpl7)->_errorsLock = _formal_tmp__errorsLock_chpl;
  return;
}

/* Errors.chpl:156 */
static void append_chpl(chpl____wide__ref_chpl_TaskErrors this_chpl7,
                        Error_chpl err_chpl) {
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl76 _args_foron_fn_chpl = NULL;
  chpl____wide_Error tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_TaskErrors tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_Error chpl_macro_tmp_391;
  chpl__class_localson_fn_chpl76_object chpl_macro_tmp_392;
  chpl____wide_Error chpl_macro_tmp_393;
  call_tmp_chpl36 = (&this_chpl7)->locale;
  chpl_rmem_consist_release(INT64(157), INT32(6));
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
  if (isdirect_chpl) {
    chpl_macro_tmp_391.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_391.addr = err_chpl;
    tmp_chpl15 = chpl_macro_tmp_391;
    on_fn_chpl76(tmp_chpl15, this_chpl7);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl76)(&chpl_macro_tmp_392));
    chpl_check_nil(_args_foron_fn_chpl, INT64(157), INT32(6));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
    chpl_macro_tmp_393.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_393.addr = err_chpl;
    tmp_chpl16 = chpl_macro_tmp_393;
    chpl_check_nil(_args_foron_fn_chpl, INT64(157), INT32(6));
    (_args_foron_fn_chpl)->_1_err = tmp_chpl16;
    tmp_chpl17 = this_chpl7;
    chpl_check_nil(_args_foron_fn_chpl, INT64(157), INT32(6));
    (_args_foron_fn_chpl)->_2_this = tmp_chpl17;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl76_object);
    chpl_taskRunningCntDec(INT64(157), INT32(6));
    /*** wrapon_fn_chpl76 ***/ chpl_executeOn(call_tmp_chpl36, INT32(88), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(157), INT32(6));
    chpl_taskRunningCntInc(INT64(157), INT32(6));
  }
  chpl_rmem_consist_acquire(INT64(157), INT32(6));
  return;
}

/* Errors.chpl:157 */
static void wrapon_fn_chpl76(_class_localson_fn_chpl76 c_chpl) {
  chpl____wide_Error _1_err_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_TaskErrors _2_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(157), INT32(6));
  chpl_check_nil(c_chpl, INT64(157), INT32(6));
  _1_err_chpl = (c_chpl)->_1_err;
  chpl_check_nil(c_chpl, INT64(157), INT32(6));
  _2_this_chpl = (c_chpl)->_2_this;
  chpl_taskRunningCntInc(INT64(157), INT32(6));
  on_fn_chpl76(_1_err_chpl, _2_this_chpl);
  chpl_taskRunningCntDec(INT64(157), INT32(6));
  chpl_rmem_consist_release(INT64(157), INT32(6));
  return;
}

/* Errors.chpl:157 */
static void on_fn_chpl76(chpl____wide_Error err_chpl,
                         chpl____wide__ref_chpl_TaskErrors this_chpl7) {
  chpl____wide__ref_chpl_LocalSpinlock call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl68 _args_foron_fn_chpl = NULL;
  chpl____wide__ref_chpl_LocalSpinlock tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_Error coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_LocalSpinlock call_tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicBool call_tmp_chpl39 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl40;
  chpl_bool isdirect_chpl2;
  _class_localson_fn_chpl3 _args_foron_fn_chpl2 = NULL;
  chpl____wide__ref_AtomicBool tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  chpl____wide__ref_chpl_LocalSpinlock chpl_macro_tmp_394;
  chpl__class_localson_fn_chpl68_object chpl_macro_tmp_395;
  chpl____wide__ref__wide_Error chpl_macro_tmp_396;
  chpl____wide__ref__wide_Error chpl_macro_tmp_397;
  chpl____wide__ref__wide_Error chpl_macro_tmp_398;
  chpl____wide__ref_chpl_LocalSpinlock chpl_macro_tmp_399;
  chpl____wide__ref_AtomicBool chpl_macro_tmp_400;
  chpl__class_localson_fn_chpl3_object chpl_macro_tmp_401;
  chpl_macro_tmp_394.locale = (this_chpl7).locale;
  chpl_macro_tmp_394.addr = &(((this_chpl7).addr)->_errorsLock);
  call_tmp_chpl36 = chpl_macro_tmp_394;
  call_tmp_chpl37 = (&call_tmp_chpl36)->locale;
  chpl_rmem_consist_release(INT64(158), INT32(6));
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
  if (isdirect_chpl) {
    on_fn_chpl68(call_tmp_chpl36);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl68)(&chpl_macro_tmp_395));
    chpl_check_nil(_args_foron_fn_chpl, INT64(158), INT32(6));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
    tmp_chpl15 = call_tmp_chpl36;
    chpl_check_nil(_args_foron_fn_chpl, INT64(158), INT32(6));
    (_args_foron_fn_chpl)->_1_this = tmp_chpl15;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl68_object);
    chpl_taskRunningCntDec(INT64(158), INT32(6));
    /*** wrapon_fn_chpl68 ***/ chpl_executeOn(call_tmp_chpl37, INT32(77), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(43), INT32(45));
    chpl_taskRunningCntInc(INT64(158), INT32(6));
  }
  chpl_rmem_consist_acquire(INT64(158), INT32(6));
  chpl_macro_tmp_396.locale = (this_chpl7).locale;
  chpl_macro_tmp_396.addr = &(((this_chpl7).addr)->_head);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID((chpl_macro_tmp_396).locale, INT64(0), INT32(0)), (chpl_macro_tmp_396).addr, sizeof(chpl____wide_Error), COMMID(4), INT64(159), INT64(6));
  coerce_tmp_chpl4 = err_chpl;
  chpl_check_nil((&coerce_tmp_chpl4)->addr, INT64(160), INT32(6));
  chpl_macro_tmp_397.locale = (&coerce_tmp_chpl4)->locale;
  chpl_macro_tmp_397.addr = &(((&coerce_tmp_chpl4)->addr)->_next);
  chpl_gen_comm_put(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID((chpl_macro_tmp_397).locale, INT64(0), INT32(0)), (chpl_macro_tmp_397).addr, sizeof(chpl____wide_Error), COMMID(5), INT64(160), INT64(6));
  chpl_macro_tmp_398.locale = (this_chpl7).locale;
  chpl_macro_tmp_398.addr = &(((this_chpl7).addr)->_head);
  chpl_gen_comm_put(((void*)(&err_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_398).locale, INT64(0), INT32(0)), (chpl_macro_tmp_398).addr, sizeof(chpl____wide_Error), COMMID(6), INT64(161), INT64(6));
  chpl_macro_tmp_399.locale = (this_chpl7).locale;
  chpl_macro_tmp_399.addr = &(((this_chpl7).addr)->_errorsLock);
  call_tmp_chpl38 = chpl_macro_tmp_399;
  chpl_macro_tmp_400.locale = (call_tmp_chpl38).locale;
  chpl_macro_tmp_400.addr = &(((call_tmp_chpl38).addr)->l);
  call_tmp_chpl39 = chpl_macro_tmp_400;
  chpl_rmem_consist_maybe_release2();
  chpl_rmem_consist_maybe_release2();
  call_tmp_chpl40 = (&call_tmp_chpl39)->locale;
  isdirect_chpl2 = chpl_doDirectExecuteOn(call_tmp_chpl40);
  if (isdirect_chpl2) {
    on_fn_chpl3(call_tmp_chpl39, UINT8(false));
  } else {
    _args_foron_fn_chpl2 = ((_class_localson_fn_chpl3)(&chpl_macro_tmp_401));
    chpl_check_nil(_args_foron_fn_chpl2, INT64(162), INT32(6));
    (_args_foron_fn_chpl2)->_0_tmp = call_tmp_chpl40;
    tmp_chpl16 = call_tmp_chpl39;
    chpl_check_nil(_args_foron_fn_chpl2, INT64(162), INT32(6));
    (_args_foron_fn_chpl2)->_1_this = tmp_chpl16;
    chpl_check_nil(_args_foron_fn_chpl2, INT64(162), INT32(6));
    (_args_foron_fn_chpl2)->_2_value = UINT8(false);
    _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
    /*** wrapon_fn_chpl3 ***/ chpl_executeOnFast(call_tmp_chpl40, INT32(4), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn_chpl3_object), INT64(285), INT32(14));
  }
  chpl_rmem_consist_maybe_acquire4();
  chpl_rmem_consist_maybe_acquire4();
  return;
}

/* Errors.chpl:166 */
static chpl_bool empty_chpl(chpl____wide__ref_chpl_TaskErrors this_chpl7) {
  chpl____wide_Error coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl36;
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_Error chpl_macro_tmp_402;
  chpl____wide_object chpl_macro_tmp_403;
  chpl____wide__nilType chpl_macro_tmp_404;
  chpl____wide_object chpl_macro_tmp_405;
  chpl_macro_tmp_402.locale = (this_chpl7).locale;
  chpl_macro_tmp_402.addr = &(((this_chpl7).addr)->_head);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID((chpl_macro_tmp_402).locale, INT64(0), INT32(0)), (chpl_macro_tmp_402).addr, sizeof(chpl____wide_Error), COMMID(7), INT64(167), INT64(6));
  chpl_macro_tmp_403.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_403.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_403;
  chpl_macro_tmp_404.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_404.addr = nil;
  chpl_macro_tmp_405.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_405.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_405;
  call_tmp_chpl36 = (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0))))));
  return call_tmp_chpl36;
}

/* Errors.chpl:199 */
static TaskErrors_chpl _new_chpl17(chpl____wide__ref_chpl_TaskErrors group_chpl,
                                   int64_t _ln_chpl,
                                   int32_t _fn_chpl) {
  string_chpl local__str_literal_596_chpl;
  string_chpl local__str_literal_75_chpl;
  TaskErrors_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  Error_chpl super_tmp_chpl = NULL;
  Error_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl _msg_chpl;
  chpl____wide_Error head_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl tmp_chpl16 = NULL;
  chpl____wide_Error tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  c_ptr__owned_Error_chpl errorsArray_chpl = NULL;
  chpl____wide_Error cur_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t n_chpl;
  chpl_bool tmp_chpl18;
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error curnext_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error coerce_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  TaskErrors_chpl _formal_type_tmp__chpl = NULL;
  chpl____wide_TaskErrors ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_TaskErrors call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t_chpl i_lhs_chpl = NULL;
  chpl____wide_TaskErrors _ic__F0_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_TaskErrors this_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t coerce_tmp_chpl10;
  int64_t tmp_chpl23;
  int64_t tmp_x0_chpl;
  int64_t tmp_x1_chpl;
  int64_t _ic__F1_high_chpl;
  int64_t i_chpl;
  chpl____wide_TaskErrors this_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  c_ptr__owned_Error_chpl coerce_tmp_chpl11 = NULL;
  c_ptr__owned_Error_chpl tmp_chpl24 = NULL;
  _ref__owned_Error_chpl call_tmp_chpl37 = NULL;
  chpl____wide_Error coerce_tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl25 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_TaskErrors this_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  c_ptr__owned_Error_chpl coerce_tmp_chpl14 = NULL;
  c_ptr__owned_Error_chpl tmp_chpl26 = NULL;
  _ref__owned_Error_chpl call_tmp_chpl38 = NULL;
  chpl____wide_Error coerce_tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t_chpl i_lhs_chpl2 = NULL;
  chpl____wide_object coerce_tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl28 = {CHPL_LOCALEID_T_INIT, NULL};
  uint64_t call_tmp_chpl39;
  uint64_t call_tmp_chpl40;
  uint64_t call_tmp_chpl41;
  int16_t call_tmp_chpl42;
  c_void_ptr call_tmp_chpl43;
  c_ptr__owned_Error_chpl call_tmp_chpl44 = NULL;
  int64_t idx_chpl;
  chpl_bool tmp_chpl29;
  chpl____wide_object coerce_tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl30 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl31 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error coerce_tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error curnext_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error coerce_tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl32 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error coerce_tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl tmp_chpl33 = NULL;
  chpl____wide_Error tmp_chpl34 = {CHPL_LOCALEID_T_INIT, NULL};
  TaskErrors_chpl _formal_type_tmp__chpl2 = NULL;
  chpl____wide_TaskErrors ret_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl35 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_TaskErrors call_tmp_chpl45 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_TaskErrors asTaskErr_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl25 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  c_ptr__owned_Error_chpl coerce_tmp_chpl26 = NULL;
  _ref__owned_Error_chpl call_tmp_chpl46 = NULL;
  chpl____wide_object coerce_tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t_chpl i_lhs_chpl3 = NULL;
  chpl____wide_TaskErrors _ic__F0_this_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_TaskErrors this_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t coerce_tmp_chpl28;
  int64_t tmp_chpl38;
  int64_t tmp_x0_chpl2;
  int64_t tmp_x1_chpl2;
  int64_t _ic__F1_high_chpl2;
  int64_t i_chpl2;
  chpl____wide_TaskErrors this_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  c_ptr__owned_Error_chpl coerce_tmp_chpl29 = NULL;
  c_ptr__owned_Error_chpl tmp_chpl39 = NULL;
  _ref__owned_Error_chpl call_tmp_chpl47 = NULL;
  chpl____wide_Error coerce_tmp_chpl30 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl31 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl40 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_TaskErrors this_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  c_ptr__owned_Error_chpl coerce_tmp_chpl32 = NULL;
  c_ptr__owned_Error_chpl tmp_chpl41 = NULL;
  _ref__owned_Error_chpl call_tmp_chpl48 = NULL;
  chpl____wide_Error coerce_tmp_chpl33 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl34 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl42 = {CHPL_LOCALEID_T_INIT, NULL};
  c_ptr__owned_Error_chpl coerce_tmp_chpl35 = NULL;
  _ref__owned_Error_chpl call_tmp_chpl49 = NULL;
  _ref_int64_t_chpl i_lhs_chpl4 = NULL;
  chpl____wide_object coerce_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl43 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_406;
  chpl____wide__ref__wide_Error chpl_macro_tmp_407;
  chpl____wide_Error chpl_macro_tmp_408;
  chpl____wide__ref__wide_Error chpl_macro_tmp_409;
  chpl____wide_object chpl_macro_tmp_410;
  chpl____wide__nilType chpl_macro_tmp_411;
  chpl____wide_object chpl_macro_tmp_412;
  chpl____wide_object chpl_macro_tmp_413;
  chpl____wide__nilType chpl_macro_tmp_414;
  chpl____wide_object chpl_macro_tmp_415;
  chpl____wide__ref__wide_Error chpl_macro_tmp_416;
  chpl____wide_object chpl_macro_tmp_417;
  chpl____wide__nilType chpl_macro_tmp_418;
  chpl____wide_object chpl_macro_tmp_419;
  chpl____wide_TaskErrors chpl_macro_tmp_420;
  chpl____wide__ref_int32_t chpl_macro_tmp_421;
  int32_t chpl_macro_tmp_422;
  int32_t chpl_macro_tmp_423;
  chpl____wide_TaskErrors chpl_macro_tmp_424;
  chpl____wide_object chpl_macro_tmp_425;
  chpl____wide__nilType chpl_macro_tmp_426;
  chpl____wide_object chpl_macro_tmp_427;
  chpl____wide__ref_int64_t chpl_macro_tmp_428;
  chpl____wide__ref_c_ptr__owned_Error chpl_macro_tmp_429;
  chpl____wide_object chpl_macro_tmp_430;
  chpl____wide__nilType chpl_macro_tmp_431;
  chpl____wide_object chpl_macro_tmp_432;
  chpl____wide__ref_c_ptr__owned_Error chpl_macro_tmp_433;
  chpl____wide_object chpl_macro_tmp_434;
  chpl____wide__nilType chpl_macro_tmp_435;
  chpl____wide_object chpl_macro_tmp_436;
  chpl____wide_object chpl_macro_tmp_437;
  chpl____wide__nilType chpl_macro_tmp_438;
  chpl____wide_object chpl_macro_tmp_439;
  chpl____wide_object chpl_macro_tmp_440;
  chpl____wide__nilType chpl_macro_tmp_441;
  chpl____wide_object chpl_macro_tmp_442;
  chpl____wide_object chpl_macro_tmp_443;
  chpl____wide__nilType chpl_macro_tmp_444;
  chpl____wide_object chpl_macro_tmp_445;
  chpl____wide__ref__wide_Error chpl_macro_tmp_446;
  chpl____wide_object chpl_macro_tmp_447;
  chpl____wide__nilType chpl_macro_tmp_448;
  chpl____wide_object chpl_macro_tmp_449;
  chpl____wide_Error chpl_macro_tmp_450;
  chpl____wide__ref__wide_Error chpl_macro_tmp_451;
  chpl____wide_object chpl_macro_tmp_452;
  chpl____wide__nilType chpl_macro_tmp_453;
  chpl____wide_object chpl_macro_tmp_454;
  chpl____wide_TaskErrors chpl_macro_tmp_455;
  chpl____wide__ref_int32_t chpl_macro_tmp_456;
  int32_t chpl_macro_tmp_457;
  int32_t chpl_macro_tmp_458;
  chpl____wide_TaskErrors chpl_macro_tmp_459;
  chpl____wide_object chpl_macro_tmp_460;
  chpl____wide__nilType chpl_macro_tmp_461;
  chpl____wide_object chpl_macro_tmp_462;
  chpl____wide_object chpl_macro_tmp_463;
  chpl____wide__nilType chpl_macro_tmp_464;
  chpl____wide_object chpl_macro_tmp_465;
  chpl____wide__ref_int64_t chpl_macro_tmp_466;
  chpl____wide__ref_c_ptr__owned_Error chpl_macro_tmp_467;
  chpl____wide_object chpl_macro_tmp_468;
  chpl____wide__nilType chpl_macro_tmp_469;
  chpl____wide_object chpl_macro_tmp_470;
  chpl____wide__ref_c_ptr__owned_Error chpl_macro_tmp_471;
  chpl____wide_object chpl_macro_tmp_472;
  chpl____wide__nilType chpl_macro_tmp_473;
  chpl____wide_object chpl_macro_tmp_474;
  chpl____wide_object chpl_macro_tmp_475;
  chpl____wide__nilType chpl_macro_tmp_476;
  chpl____wide_object chpl_macro_tmp_477;
  local__str_literal_596_chpl = _str_literal_596_chpl /* "With a negative count, the range must have a last index." */;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_TaskErrors_chpl_object), INT16(44), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((TaskErrors_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_TaskErrors_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_object_chpl;
  init_coerce_tmp_chpl3 = ((Error_chpl)(nil));
  chpl_macro_tmp_406.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_406.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_406;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_next = tmp_chpl15;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->thrownLine = INT64(0);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->thrownFileId = INT32(0);
  init_chpl73(&_msg_chpl);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_msg = _msg_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_hasThrowInfo = UINT8(false);
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(((Error_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_Error_chpl;
  chpl_macro_tmp_407.locale = (group_chpl).locale;
  chpl_macro_tmp_407.addr = &(((group_chpl).addr)->_head);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID((chpl_macro_tmp_407).locale, INT64(0), INT32(0)), (chpl_macro_tmp_407).addr, sizeof(chpl____wide_Error), COMMID(8), INT64(199), INT64(6));
  head_chpl = coerce_tmp_chpl3;
  tmp_chpl16 = ((Error_chpl)(nil));
  chpl_macro_tmp_408.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_408.addr = tmp_chpl16;
  tmp_chpl17 = chpl_macro_tmp_408;
  chpl_macro_tmp_409.locale = (group_chpl).locale;
  chpl_macro_tmp_409.addr = &(((group_chpl).addr)->_head);
  chpl_gen_comm_put(((void*)(&tmp_chpl17)), chpl_nodeFromLocaleID((chpl_macro_tmp_409).locale, INT64(0), INT32(0)), (chpl_macro_tmp_409).addr, sizeof(chpl____wide_Error), COMMID(9), INT64(199), INT64(6));
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  (initTemp_chpl)->nErrors = INT64(0);
  errorsArray_chpl = ((c_ptr__owned_Error_chpl)(nil));
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  (initTemp_chpl)->errorsArray = errorsArray_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_TaskErrors_chpl;
  n_chpl = INT64(0);
  cur_chpl = coerce_tmp_chpl3;
  chpl_macro_tmp_410.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_410.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_410;
  chpl_macro_tmp_411.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_411.addr = nil;
  chpl_macro_tmp_412.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_412.addr = NULL;
  tmp_chpl19 = chpl_macro_tmp_412;
  tmp_chpl18 = (((&coerce_tmp_chpl4)->addr != (&tmp_chpl19)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl19)->locale, INT64(0), INT32(0)))));
  while (tmp_chpl18) {
    chpl_macro_tmp_413.locale = (&cur_chpl)->locale;
    chpl_macro_tmp_413.addr = ((object_chpl)((&cur_chpl)->addr));
    coerce_tmp_chpl5 = chpl_macro_tmp_413;
    chpl_macro_tmp_414.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_414.addr = nil;
    chpl_macro_tmp_415.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_415.addr = NULL;
    tmp_chpl20 = chpl_macro_tmp_415;
    if (! (((&coerce_tmp_chpl5)->addr != (&tmp_chpl20)->addr) || ((!(! (&coerce_tmp_chpl5)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl5)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl20)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, _ln_chpl, _fn_chpl);
    }
    coerce_tmp_chpl6 = cur_chpl;
    chpl_check_nil((&coerce_tmp_chpl6)->addr, _ln_chpl, _fn_chpl);
    chpl_macro_tmp_416.locale = (&coerce_tmp_chpl6)->locale;
    chpl_macro_tmp_416.addr = &(((&coerce_tmp_chpl6)->addr)->_next);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl7)), chpl_nodeFromLocaleID((chpl_macro_tmp_416).locale, INT64(0), INT32(0)), (chpl_macro_tmp_416).addr, sizeof(chpl____wide_Error), COMMID(10), INT64(199), INT64(6));
    curnext_chpl = coerce_tmp_chpl7;
    chpl_macro_tmp_417.locale = (&cur_chpl)->locale;
    chpl_macro_tmp_417.addr = ((object_chpl)((&cur_chpl)->addr));
    coerce_tmp_chpl8 = chpl_macro_tmp_417;
    chpl_macro_tmp_418.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_418.addr = nil;
    chpl_macro_tmp_419.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_419.addr = NULL;
    tmp_chpl21 = chpl_macro_tmp_419;
    if (! (((&coerce_tmp_chpl8)->addr != (&tmp_chpl21)->addr) || ((!(! (&coerce_tmp_chpl8)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl8)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl21)->locale, INT64(0), INT32(0)))))) {
      chpl_macro_tmp_420.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_420.addr = ((TaskErrors_chpl)(nil));
      ret_chpl = chpl_macro_tmp_420;
      goto _end__COLON__chpl;
    }
    chpl_macro_tmp_421.locale = (cur_chpl).locale;
    chpl_macro_tmp_421.addr = &(((object_chpl)((cur_chpl).addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_422)), chpl_nodeFromLocaleID((chpl_macro_tmp_421).locale, INT64(0), INT32(0)), (chpl_macro_tmp_421).addr, sizeof(int32_t), COMMID(11), INT64(199), INT64(6));
    chpl_macro_tmp_423 = chpl_macro_tmp_422;
    chpl_macro_tmp_424.locale = (cur_chpl).locale;
    chpl_macro_tmp_424.addr = ( (((chpl__cid_TaskErrors_chpl <= chpl_macro_tmp_423) && (chpl_macro_tmp_423 <= chpl_subclass_max_id[chpl__cid_TaskErrors_chpl])))?(((TaskErrors_chpl)((cur_chpl).addr))):(((TaskErrors_chpl)(NULL))) );
    call_tmp_chpl36 = chpl_macro_tmp_424;
    ret_chpl = call_tmp_chpl36;
    _end__COLON__chpl:;
    chpl_macro_tmp_425.locale = (&ret_chpl)->locale;
    chpl_macro_tmp_425.addr = ((object_chpl)((&ret_chpl)->addr));
    coerce_tmp_chpl9 = chpl_macro_tmp_425;
    chpl_macro_tmp_426.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_426.addr = nil;
    chpl_macro_tmp_427.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_427.addr = NULL;
    tmp_chpl22 = chpl_macro_tmp_427;
    if (! (((&coerce_tmp_chpl9)->addr != (&tmp_chpl22)->addr) || ((!(! (&coerce_tmp_chpl9)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl9)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl22)->locale, INT64(0), INT32(0)))))) {
      i_lhs_chpl = &n_chpl;
      *(i_lhs_chpl) += INT64(1);
    } else {
      _ic__F0_this_chpl = ret_chpl;
      this_chpl7 = ret_chpl;
      chpl_check_nil((&this_chpl7)->addr, _ln_chpl, _fn_chpl);
      chpl_macro_tmp_428.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_428.addr = &(((&this_chpl7)->addr)->nErrors);
      chpl_gen_comm_get(((void*)(&tmp_chpl23)), chpl_nodeFromLocaleID((chpl_macro_tmp_428).locale, INT64(0), INT32(0)), (chpl_macro_tmp_428).addr, sizeof(int64_t), COMMID(12), INT64(199), INT64(6));
      coerce_tmp_chpl10 = tmp_chpl23;
      if (coerce_tmp_chpl10 < INT64(0)) {
        boundsCheckHalt_chpl(&local__str_literal_596_chpl, _ln_chpl, _fn_chpl);
      }
      if (coerce_tmp_chpl10 == INT64(0)) {
        tmp_x0_chpl = INT64(0);
        tmp_x1_chpl = ((int64_t)(((uint64_t)((((uint64_t)(INT64(0))) - UINT64(1))))));
      } else {
        tmp_x0_chpl = INT64(0);
        tmp_x1_chpl = ((int64_t)((INT64(0) + ((int64_t)((coerce_tmp_chpl10 - INT64(1)))))));
      }
      _ic__F1_high_chpl = tmp_x1_chpl;
      i_chpl = INT64(0);
      chpl_checkIfRangeIterWillOverflow(tmp_x0_chpl, tmp_x1_chpl, INT64(1), tmp_x0_chpl, tmp_x1_chpl, UINT8(true));
      this_chpl8 = _ic__F0_this_chpl;
      chpl_check_nil((&this_chpl8)->addr, _ln_chpl, _fn_chpl);
      chpl_macro_tmp_429.locale = (&this_chpl8)->locale;
      chpl_macro_tmp_429.addr = &(((&this_chpl8)->addr)->errorsArray);
      chpl_gen_comm_get(((void*)(&tmp_chpl24)), chpl_nodeFromLocaleID((chpl_macro_tmp_429).locale, INT64(0), INT32(0)), (chpl_macro_tmp_429).addr, sizeof(c_ptr__owned_Error_chpl), COMMID(13), INT64(199), INT64(6));
      coerce_tmp_chpl11 = tmp_chpl24;
      for (i_chpl = tmp_x0_chpl; ((i_chpl <= _ic__F1_high_chpl)); i_chpl += INT64(1)) {
        call_tmp_chpl37 = (coerce_tmp_chpl11 + i_chpl);
        coerce_tmp_chpl12 = borrow_chpl(call_tmp_chpl37);
        chpl_macro_tmp_430.locale = (&coerce_tmp_chpl12)->locale;
        chpl_macro_tmp_430.addr = ((object_chpl)((&coerce_tmp_chpl12)->addr));
        coerce_tmp_chpl13 = chpl_macro_tmp_430;
        chpl_macro_tmp_431.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_431.addr = nil;
        chpl_macro_tmp_432.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_432.addr = NULL;
        tmp_chpl25 = chpl_macro_tmp_432;
        if (((&coerce_tmp_chpl13)->addr != (&tmp_chpl25)->addr) || ((!(! (&coerce_tmp_chpl13)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl13)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl25)->locale, INT64(0), INT32(0))))) {
          this_chpl9 = _ic__F0_this_chpl;
          chpl_check_nil((&this_chpl9)->addr, _ln_chpl, _fn_chpl);
          chpl_macro_tmp_433.locale = (&this_chpl9)->locale;
          chpl_macro_tmp_433.addr = &(((&this_chpl9)->addr)->errorsArray);
          chpl_gen_comm_get(((void*)(&tmp_chpl26)), chpl_nodeFromLocaleID((chpl_macro_tmp_433).locale, INT64(0), INT32(0)), (chpl_macro_tmp_433).addr, sizeof(c_ptr__owned_Error_chpl), COMMID(14), INT64(199), INT64(6));
          coerce_tmp_chpl14 = tmp_chpl26;
          call_tmp_chpl38 = (coerce_tmp_chpl14 + i_chpl);
          coerce_tmp_chpl15 = borrow_chpl(call_tmp_chpl38);
          chpl_macro_tmp_434.locale = (&coerce_tmp_chpl15)->locale;
          chpl_macro_tmp_434.addr = ((object_chpl)((&coerce_tmp_chpl15)->addr));
          coerce_tmp_chpl16 = chpl_macro_tmp_434;
          chpl_macro_tmp_435.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_435.addr = nil;
          chpl_macro_tmp_436.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_436.addr = NULL;
          tmp_chpl27 = chpl_macro_tmp_436;
          if (((&coerce_tmp_chpl16)->addr != (&tmp_chpl27)->addr) || ((!(! (&coerce_tmp_chpl16)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl16)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl27)->locale, INT64(0), INT32(0))))) {
            i_lhs_chpl2 = &n_chpl;
            *(i_lhs_chpl2) += INT64(1);
          }
        }
      }
    }
    cur_chpl = curnext_chpl;
    chpl_macro_tmp_437.locale = (&curnext_chpl)->locale;
    chpl_macro_tmp_437.addr = ((object_chpl)((&curnext_chpl)->addr));
    coerce_tmp_chpl17 = chpl_macro_tmp_437;
    chpl_macro_tmp_438.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_438.addr = nil;
    chpl_macro_tmp_439.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_439.addr = NULL;
    tmp_chpl28 = chpl_macro_tmp_439;
    tmp_chpl18 = (((&coerce_tmp_chpl17)->addr != (&tmp_chpl28)->addr) || ((!(! (&coerce_tmp_chpl17)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl17)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl28)->locale, INT64(0), INT32(0)))));
  }
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  (initTemp_chpl)->nErrors = n_chpl;
  checkValue_chpl(n_chpl);
  call_tmp_chpl39 = ((uint64_t)(n_chpl));
  call_tmp_chpl40 = sizeof(_owned_Error_chpl);
  call_tmp_chpl41 = (call_tmp_chpl39 * call_tmp_chpl40);
  call_tmp_chpl42 = offset_ARRAY_ELEMENTS_chpl();
  call_tmp_chpl43 = chpl_here_calloc(call_tmp_chpl41, INT64(1), call_tmp_chpl42, _ln_chpl, _fn_chpl);
  call_tmp_chpl44 = ((c_ptr__owned_Error_chpl)(call_tmp_chpl43));
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  (initTemp_chpl)->errorsArray = call_tmp_chpl44;
  idx_chpl = INT64(0);
  cur_chpl = head_chpl;
  chpl_macro_tmp_440.locale = (&head_chpl)->locale;
  chpl_macro_tmp_440.addr = ((object_chpl)((&head_chpl)->addr));
  coerce_tmp_chpl18 = chpl_macro_tmp_440;
  chpl_macro_tmp_441.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_441.addr = nil;
  chpl_macro_tmp_442.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_442.addr = NULL;
  tmp_chpl30 = chpl_macro_tmp_442;
  tmp_chpl29 = (((&coerce_tmp_chpl18)->addr != (&tmp_chpl30)->addr) || ((!(! (&coerce_tmp_chpl18)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl18)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl30)->locale, INT64(0), INT32(0)))));
  while (tmp_chpl29) {
    chpl_macro_tmp_443.locale = (&cur_chpl)->locale;
    chpl_macro_tmp_443.addr = ((object_chpl)((&cur_chpl)->addr));
    coerce_tmp_chpl19 = chpl_macro_tmp_443;
    chpl_macro_tmp_444.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_444.addr = nil;
    chpl_macro_tmp_445.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_445.addr = NULL;
    tmp_chpl31 = chpl_macro_tmp_445;
    if (! (((&coerce_tmp_chpl19)->addr != (&tmp_chpl31)->addr) || ((!(! (&coerce_tmp_chpl19)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl19)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl31)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, _ln_chpl, _fn_chpl);
    }
    coerce_tmp_chpl20 = cur_chpl;
    chpl_check_nil((&coerce_tmp_chpl20)->addr, _ln_chpl, _fn_chpl);
    chpl_macro_tmp_446.locale = (&coerce_tmp_chpl20)->locale;
    chpl_macro_tmp_446.addr = &(((&coerce_tmp_chpl20)->addr)->_next);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl21)), chpl_nodeFromLocaleID((chpl_macro_tmp_446).locale, INT64(0), INT32(0)), (chpl_macro_tmp_446).addr, sizeof(chpl____wide_Error), COMMID(15), INT64(199), INT64(6));
    curnext_chpl2 = coerce_tmp_chpl21;
    chpl_macro_tmp_447.locale = (&cur_chpl)->locale;
    chpl_macro_tmp_447.addr = ((object_chpl)((&cur_chpl)->addr));
    coerce_tmp_chpl22 = chpl_macro_tmp_447;
    chpl_macro_tmp_448.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_448.addr = nil;
    chpl_macro_tmp_449.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_449.addr = NULL;
    tmp_chpl32 = chpl_macro_tmp_449;
    if (! (((&coerce_tmp_chpl22)->addr != (&tmp_chpl32)->addr) || ((!(! (&coerce_tmp_chpl22)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl22)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl32)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, _ln_chpl, _fn_chpl);
    }
    coerce_tmp_chpl23 = cur_chpl;
    tmp_chpl33 = ((Error_chpl)(nil));
    chpl_macro_tmp_450.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_450.addr = tmp_chpl33;
    tmp_chpl34 = chpl_macro_tmp_450;
    chpl_check_nil((&coerce_tmp_chpl23)->addr, _ln_chpl, _fn_chpl);
    chpl_macro_tmp_451.locale = (&coerce_tmp_chpl23)->locale;
    chpl_macro_tmp_451.addr = &(((&coerce_tmp_chpl23)->addr)->_next);
    chpl_gen_comm_put(((void*)(&tmp_chpl34)), chpl_nodeFromLocaleID((chpl_macro_tmp_451).locale, INT64(0), INT32(0)), (chpl_macro_tmp_451).addr, sizeof(chpl____wide_Error), COMMID(16), INT64(199), INT64(6));
    chpl_macro_tmp_452.locale = (&cur_chpl)->locale;
    chpl_macro_tmp_452.addr = ((object_chpl)((&cur_chpl)->addr));
    coerce_tmp_chpl24 = chpl_macro_tmp_452;
    chpl_macro_tmp_453.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_453.addr = nil;
    chpl_macro_tmp_454.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_454.addr = NULL;
    tmp_chpl35 = chpl_macro_tmp_454;
    if (! (((&coerce_tmp_chpl24)->addr != (&tmp_chpl35)->addr) || ((!(! (&coerce_tmp_chpl24)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl24)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl35)->locale, INT64(0), INT32(0)))))) {
      chpl_macro_tmp_455.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_455.addr = ((TaskErrors_chpl)(nil));
      ret_chpl2 = chpl_macro_tmp_455;
      goto _end__COLON__chpl2;
    }
    chpl_macro_tmp_456.locale = (cur_chpl).locale;
    chpl_macro_tmp_456.addr = &(((object_chpl)((cur_chpl).addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_457)), chpl_nodeFromLocaleID((chpl_macro_tmp_456).locale, INT64(0), INT32(0)), (chpl_macro_tmp_456).addr, sizeof(int32_t), COMMID(17), INT64(199), INT64(6));
    chpl_macro_tmp_458 = chpl_macro_tmp_457;
    chpl_macro_tmp_459.locale = (cur_chpl).locale;
    chpl_macro_tmp_459.addr = ( (((chpl__cid_TaskErrors_chpl <= chpl_macro_tmp_458) && (chpl_macro_tmp_458 <= chpl_subclass_max_id[chpl__cid_TaskErrors_chpl])))?(((TaskErrors_chpl)((cur_chpl).addr))):(((TaskErrors_chpl)(NULL))) );
    call_tmp_chpl45 = chpl_macro_tmp_459;
    ret_chpl2 = call_tmp_chpl45;
    _end__COLON__chpl2:;
    asTaskErr_chpl = ret_chpl2;
    chpl_macro_tmp_460.locale = (&ret_chpl2)->locale;
    chpl_macro_tmp_460.addr = ((object_chpl)((&ret_chpl2)->addr));
    coerce_tmp_chpl25 = chpl_macro_tmp_460;
    chpl_macro_tmp_461.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_461.addr = nil;
    chpl_macro_tmp_462.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_462.addr = NULL;
    tmp_chpl36 = chpl_macro_tmp_462;
    if (! (((&coerce_tmp_chpl25)->addr != (&tmp_chpl36)->addr) || ((!(! (&coerce_tmp_chpl25)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl25)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl36)->locale, INT64(0), INT32(0)))))) {
      chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
      coerce_tmp_chpl26 = (initTemp_chpl)->errorsArray;
      call_tmp_chpl46 = (coerce_tmp_chpl26 + idx_chpl);
      chpl_macro_tmp_463.locale = (&cur_chpl)->locale;
      chpl_macro_tmp_463.addr = ((object_chpl)((&cur_chpl)->addr));
      coerce_tmp_chpl27 = chpl_macro_tmp_463;
      chpl_macro_tmp_464.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_464.addr = nil;
      chpl_macro_tmp_465.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_465.addr = NULL;
      tmp_chpl37 = chpl_macro_tmp_465;
      if (! (((&coerce_tmp_chpl27)->addr != (&tmp_chpl37)->addr) || ((!(! (&coerce_tmp_chpl27)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl27)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl37)->locale, INT64(0), INT32(0)))))) {
        nilCheckHalt_chpl(&local__str_literal_75_chpl, _ln_chpl, _fn_chpl);
      }
      retain_chpl(call_tmp_chpl46, cur_chpl);
      i_lhs_chpl3 = &idx_chpl;
      *(i_lhs_chpl3) += INT64(1);
    } else {
      _ic__F0_this_chpl2 = ret_chpl2;
      this_chpl10 = ret_chpl2;
      chpl_check_nil((&this_chpl10)->addr, _ln_chpl, _fn_chpl);
      chpl_macro_tmp_466.locale = (&this_chpl10)->locale;
      chpl_macro_tmp_466.addr = &(((&this_chpl10)->addr)->nErrors);
      chpl_gen_comm_get(((void*)(&tmp_chpl38)), chpl_nodeFromLocaleID((chpl_macro_tmp_466).locale, INT64(0), INT32(0)), (chpl_macro_tmp_466).addr, sizeof(int64_t), COMMID(18), INT64(199), INT64(6));
      coerce_tmp_chpl28 = tmp_chpl38;
      if (coerce_tmp_chpl28 < INT64(0)) {
        boundsCheckHalt_chpl(&local__str_literal_596_chpl, _ln_chpl, _fn_chpl);
      }
      if (coerce_tmp_chpl28 == INT64(0)) {
        tmp_x0_chpl2 = INT64(0);
        tmp_x1_chpl2 = ((int64_t)(((uint64_t)((((uint64_t)(INT64(0))) - UINT64(1))))));
      } else {
        tmp_x0_chpl2 = INT64(0);
        tmp_x1_chpl2 = ((int64_t)((INT64(0) + ((int64_t)((coerce_tmp_chpl28 - INT64(1)))))));
      }
      _ic__F1_high_chpl2 = tmp_x1_chpl2;
      i_chpl2 = INT64(0);
      chpl_checkIfRangeIterWillOverflow(tmp_x0_chpl2, tmp_x1_chpl2, INT64(1), tmp_x0_chpl2, tmp_x1_chpl2, UINT8(true));
      this_chpl11 = _ic__F0_this_chpl2;
      chpl_check_nil((&this_chpl11)->addr, _ln_chpl, _fn_chpl);
      chpl_macro_tmp_467.locale = (&this_chpl11)->locale;
      chpl_macro_tmp_467.addr = &(((&this_chpl11)->addr)->errorsArray);
      chpl_gen_comm_get(((void*)(&tmp_chpl39)), chpl_nodeFromLocaleID((chpl_macro_tmp_467).locale, INT64(0), INT32(0)), (chpl_macro_tmp_467).addr, sizeof(c_ptr__owned_Error_chpl), COMMID(19), INT64(199), INT64(6));
      coerce_tmp_chpl29 = tmp_chpl39;
      for (i_chpl2 = tmp_x0_chpl2; ((i_chpl2 <= _ic__F1_high_chpl2)); i_chpl2 += INT64(1)) {
        call_tmp_chpl47 = (coerce_tmp_chpl29 + i_chpl2);
        coerce_tmp_chpl30 = borrow_chpl(call_tmp_chpl47);
        chpl_macro_tmp_468.locale = (&coerce_tmp_chpl30)->locale;
        chpl_macro_tmp_468.addr = ((object_chpl)((&coerce_tmp_chpl30)->addr));
        coerce_tmp_chpl31 = chpl_macro_tmp_468;
        chpl_macro_tmp_469.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_469.addr = nil;
        chpl_macro_tmp_470.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_470.addr = NULL;
        tmp_chpl40 = chpl_macro_tmp_470;
        if (((&coerce_tmp_chpl31)->addr != (&tmp_chpl40)->addr) || ((!(! (&coerce_tmp_chpl31)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl31)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl40)->locale, INT64(0), INT32(0))))) {
          this_chpl12 = _ic__F0_this_chpl2;
          chpl_check_nil((&this_chpl12)->addr, _ln_chpl, _fn_chpl);
          chpl_macro_tmp_471.locale = (&this_chpl12)->locale;
          chpl_macro_tmp_471.addr = &(((&this_chpl12)->addr)->errorsArray);
          chpl_gen_comm_get(((void*)(&tmp_chpl41)), chpl_nodeFromLocaleID((chpl_macro_tmp_471).locale, INT64(0), INT32(0)), (chpl_macro_tmp_471).addr, sizeof(c_ptr__owned_Error_chpl), COMMID(20), INT64(199), INT64(6));
          coerce_tmp_chpl32 = tmp_chpl41;
          call_tmp_chpl48 = (coerce_tmp_chpl32 + i_chpl2);
          coerce_tmp_chpl33 = borrow_chpl(call_tmp_chpl48);
          chpl_macro_tmp_472.locale = (&coerce_tmp_chpl33)->locale;
          chpl_macro_tmp_472.addr = ((object_chpl)((&coerce_tmp_chpl33)->addr));
          coerce_tmp_chpl34 = chpl_macro_tmp_472;
          chpl_macro_tmp_473.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_473.addr = nil;
          chpl_macro_tmp_474.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_474.addr = NULL;
          tmp_chpl42 = chpl_macro_tmp_474;
          if (((&coerce_tmp_chpl34)->addr != (&tmp_chpl42)->addr) || ((!(! (&coerce_tmp_chpl34)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl34)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl42)->locale, INT64(0), INT32(0))))) {
            chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
            coerce_tmp_chpl35 = (initTemp_chpl)->errorsArray;
            call_tmp_chpl49 = (coerce_tmp_chpl35 + idx_chpl);
            chpl___ASSIGN_3(call_tmp_chpl49, call_tmp_chpl48);
            i_lhs_chpl4 = &idx_chpl;
            *(i_lhs_chpl4) += INT64(1);
          }
        }
      }
      chpl__delete5(asTaskErr_chpl);
    }
    cur_chpl = curnext_chpl2;
    chpl_macro_tmp_475.locale = (&curnext_chpl2)->locale;
    chpl_macro_tmp_475.addr = ((object_chpl)((&curnext_chpl2)->addr));
    coerce_tmp_chpl36 = chpl_macro_tmp_475;
    chpl_macro_tmp_476.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_476.addr = nil;
    chpl_macro_tmp_477.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_477.addr = NULL;
    tmp_chpl43 = chpl_macro_tmp_477;
    tmp_chpl29 = (((&coerce_tmp_chpl36)->addr != (&tmp_chpl43)->addr) || ((!(! (&coerce_tmp_chpl36)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl36)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl43)->locale, INT64(0), INT32(0)))));
  }
  return initTemp_chpl;
}

/* Errors.chpl:254 */
static TaskErrors_chpl _new_chpl18(Error_chpl err_chpl,
                                   int64_t _ln_chpl,
                                   int32_t _fn_chpl) {
  TaskErrors_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  Error_chpl super_tmp_chpl = NULL;
  Error_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl _msg_chpl;
  int64_t inlineImm_chpl;
  uint64_t call_tmp_chpl36;
  uint64_t call_tmp_chpl37;
  uint64_t call_tmp_chpl38;
  int16_t call_tmp_chpl39;
  c_void_ptr call_tmp_chpl40;
  c_ptr__owned_Error_chpl call_tmp_chpl41 = NULL;
  Error_chpl coerce_tmp_chpl3 = NULL;
  Error_chpl tmp_chpl16 = NULL;
  chpl____wide_Error tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  c_ptr__owned_Error_chpl coerce_tmp_chpl4 = NULL;
  _ref__owned_Error_chpl call_tmp_chpl42 = NULL;
  chpl____wide_Error tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_478;
  chpl____wide_Error chpl_macro_tmp_479;
  chpl____wide_Error chpl_macro_tmp_480;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_TaskErrors_chpl_object), INT16(44), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((TaskErrors_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_TaskErrors_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_object_chpl;
  init_coerce_tmp_chpl3 = ((Error_chpl)(nil));
  chpl_macro_tmp_478.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_478.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_478;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_next = tmp_chpl15;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->thrownLine = INT64(0);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->thrownFileId = INT32(0);
  init_chpl73(&_msg_chpl);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_msg = _msg_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_hasThrowInfo = UINT8(false);
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(((Error_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_Error_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  (initTemp_chpl)->nErrors = INT64(1);
  inlineImm_chpl = INT64(1);
  checkValue_chpl(INT64(1));
  call_tmp_chpl36 = ((uint64_t)(inlineImm_chpl));
  call_tmp_chpl37 = sizeof(_owned_Error_chpl);
  call_tmp_chpl38 = (call_tmp_chpl36 * call_tmp_chpl37);
  call_tmp_chpl39 = offset_ARRAY_ELEMENTS_chpl();
  call_tmp_chpl40 = chpl_here_calloc(call_tmp_chpl38, INT64(1), call_tmp_chpl39, _ln_chpl, _fn_chpl);
  call_tmp_chpl41 = ((c_ptr__owned_Error_chpl)(call_tmp_chpl40));
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  (initTemp_chpl)->errorsArray = call_tmp_chpl41;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_TaskErrors_chpl;
  coerce_tmp_chpl3 = err_chpl;
  tmp_chpl16 = ((Error_chpl)(nil));
  chpl_macro_tmp_479.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_479.addr = tmp_chpl16;
  tmp_chpl17 = chpl_macro_tmp_479;
  chpl_check_nil(coerce_tmp_chpl3, _ln_chpl, _fn_chpl);
  (coerce_tmp_chpl3)->_next = tmp_chpl17;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  coerce_tmp_chpl4 = (initTemp_chpl)->errorsArray;
  call_tmp_chpl42 = (coerce_tmp_chpl4 + INT64(0));
  chpl_macro_tmp_480.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_480.addr = err_chpl;
  tmp_chpl18 = chpl_macro_tmp_480;
  retain_chpl(call_tmp_chpl42, tmp_chpl18);
  return initTemp_chpl;
}

/* Errors.chpl:268 */
static void deinit_chpl43(chpl____wide_TaskErrors this_chpl7) {
  string_chpl local__str_literal_596_chpl;
  c_ptr__owned_Error_chpl tmp_chpl15 = NULL;
  int64_t coerce_tmp_chpl3;
  int64_t tmp_chpl16;
  int64_t tmp_x0_chpl;
  int64_t tmp_x1_chpl;
  int64_t _ic__F1_high_chpl;
  int64_t i_chpl;
  c_ptr__owned_Error_chpl coerce_tmp_chpl4 = NULL;
  c_ptr__owned_Error_chpl tmp_chpl17 = NULL;
  _ref__owned_Error_chpl call_tmp_chpl36 = NULL;
  c_ptr__owned_Error_chpl tmp_chpl18 = NULL;
  chpl____wide_Error _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_c_ptr__owned_Error chpl_macro_tmp_481;
  chpl____wide__ref_int64_t chpl_macro_tmp_482;
  chpl____wide__ref_c_ptr__owned_Error chpl_macro_tmp_483;
  chpl____wide__ref_c_ptr__owned_Error chpl_macro_tmp_484;
  chpl____wide_Error chpl_macro_tmp_485;
  chpl____wide__ref_string chpl_macro_tmp_486;
  local__str_literal_596_chpl = _str_literal_596_chpl /* "With a negative count, the range must have a last index." */;
  chpl_check_nil((&this_chpl7)->addr, INT64(269), INT32(6));
  chpl_macro_tmp_481.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_481.addr = &(((&this_chpl7)->addr)->errorsArray);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_481).locale, INT64(0), INT32(0)), (chpl_macro_tmp_481).addr, sizeof(c_ptr__owned_Error_chpl), COMMID(21), INT64(269), INT64(6));
  if (tmp_chpl15 != nil) {
    chpl_check_nil((&this_chpl7)->addr, INT64(270), INT32(6));
    chpl_macro_tmp_482.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_482.addr = &(((&this_chpl7)->addr)->nErrors);
    chpl_gen_comm_get(((void*)(&tmp_chpl16)), chpl_nodeFromLocaleID((chpl_macro_tmp_482).locale, INT64(0), INT32(0)), (chpl_macro_tmp_482).addr, sizeof(int64_t), COMMID(22), INT64(270), INT64(6));
    coerce_tmp_chpl3 = tmp_chpl16;
    if (coerce_tmp_chpl3 < INT64(0)) {
      boundsCheckHalt_chpl(&local__str_literal_596_chpl, INT64(270), INT32(6));
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
    chpl_check_nil((&this_chpl7)->addr, INT64(271), INT32(6));
    chpl_macro_tmp_483.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_483.addr = &(((&this_chpl7)->addr)->errorsArray);
    chpl_gen_comm_get(((void*)(&tmp_chpl17)), chpl_nodeFromLocaleID((chpl_macro_tmp_483).locale, INT64(0), INT32(0)), (chpl_macro_tmp_483).addr, sizeof(c_ptr__owned_Error_chpl), COMMID(23), INT64(271), INT64(6));
    coerce_tmp_chpl4 = tmp_chpl17;
    for (i_chpl = tmp_x0_chpl; ((i_chpl <= _ic__F1_high_chpl)); i_chpl += INT64(1)) {
      call_tmp_chpl36 = (coerce_tmp_chpl4 + i_chpl);
      clear_chpl(call_tmp_chpl36);
    }
    chpl_check_nil((&this_chpl7)->addr, INT64(273), INT32(6));
    chpl_macro_tmp_484.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_484.addr = &(((&this_chpl7)->addr)->errorsArray);
    chpl_gen_comm_get(((void*)(&tmp_chpl18)), chpl_nodeFromLocaleID((chpl_macro_tmp_484).locale, INT64(0), INT32(0)), (chpl_macro_tmp_484).addr, sizeof(c_ptr__owned_Error_chpl), COMMID(24), INT64(273), INT64(6));
    chpl_here_free(((c_void_ptr)(tmp_chpl18)), INT64(273), INT32(6));
  }
  chpl_macro_tmp_485.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_485.addr = ((Error_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_485;
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(268), INT32(6));
  chpl_macro_tmp_486.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_486.addr = &(((&_parent_destructor_tmp__chpl)->addr)->_msg);
  _field_destructor_tmp__chpl = chpl_macro_tmp_486;
  deinit_chpl42(_field_destructor_tmp__chpl);
  return;
}

/* Errors.chpl:318 */
static void message_chpl5(chpl____wide_TaskErrors this_chpl7,
                          chpl____wide__ref_string _retArg_chpl) {
  string_chpl local__str_literal_218_chpl;
  string_chpl local__str_literal_217_chpl;
  string_chpl local__str_literal_215_chpl;
  string_chpl local__str_literal_75_chpl;
  string_chpl local__str_literal_596_chpl;
  string_chpl ret_chpl;
  int64_t n_chpl;
  string_chpl minMsg_chpl;
  string_chpl maxMsg_chpl;
  chpl____wide_Error first_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl tmp_chpl15 = NULL;
  chpl____wide_Error last_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl tmp_chpl16 = NULL;
  chpl____wide_TaskErrors _ic__F0_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_TaskErrors this_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t coerce_tmp_chpl3;
  int64_t tmp_chpl17;
  int64_t tmp_x0_chpl;
  int64_t tmp_x1_chpl;
  int64_t _ic__F1_high_chpl;
  int64_t i_chpl;
  chpl____wide_TaskErrors this_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  c_ptr__owned_Error_chpl coerce_tmp_chpl4 = NULL;
  c_ptr__owned_Error_chpl tmp_chpl18 = NULL;
  _ref__owned_Error_chpl call_tmp_chpl36 = NULL;
  chpl____wide_Error coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_TaskErrors this_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  c_ptr__owned_Error_chpl coerce_tmp_chpl7 = NULL;
  c_ptr__owned_Error_chpl tmp_chpl20 = NULL;
  _ref__owned_Error_chpl call_tmp_chpl37 = NULL;
  chpl____wide_Error coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error coerce_tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error e_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl22;
  chpl_bool tmp_chpl23;
  string_chpl call_tmp_chpl38;
  string_chpl ret_tmp_chpl;
  _ref_string_chpl tmp_chpl24 = NULL;
  chpl____wide__ref_string tmp_chpl25 = {CHPL_LOCALEID_T_INIT, NULL};
  c_ptr_uint8_t_chpl coerce_tmp_chpl11 = NULL;
  int64_t coerce_tmp_chpl12;
  int32_t coerce_tmp_chpl13;
  c_ptr_uint8_t_chpl coerce_tmp_chpl14 = NULL;
  int64_t coerce_tmp_chpl15;
  int32_t coerce_tmp_chpl16;
  int64_t ret_chpl2;
  int32_t call_tmp_chpl39;
  chpl_bool tmp_chpl26;
  int32_t call_tmp_chpl40;
  int64_t ret_chpl3;
  int64_t tmp_chpl27;
  int64_t size_chpl3;
  c_void_ptr coerce_tmp_chpl17;
  c_void_ptr coerce_tmp_chpl18;
  int32_t call_tmp_chpl41;
  int64_t call_tmp_chpl42;
  int32_t call_tmp_chpl43;
  chpl_bool tmp_chpl28;
  int32_t call_tmp_chpl44;
  c_ptr_uint8_t_chpl call_tmp_chpl45 = NULL;
  int64_t ret_chpl4;
  int64_t tmp_chpl29;
  int64_t size_chpl4;
  c_void_ptr coerce_tmp_chpl19;
  c_void_ptr coerce_tmp_chpl20;
  int32_t call_tmp_chpl46;
  int64_t call_tmp_chpl47;
  int32_t call_tmp_chpl48;
  chpl_bool tmp_chpl30;
  int32_t call_tmp_chpl49;
  c_ptr_uint8_t_chpl call_tmp_chpl50 = NULL;
  int64_t ret_chpl5;
  int64_t tmp_chpl31;
  int64_t size_chpl5;
  c_void_ptr coerce_tmp_chpl21;
  c_void_ptr coerce_tmp_chpl22;
  int32_t call_tmp_chpl51;
  int64_t call_tmp_chpl52;
  c_ptr_uint8_t_chpl call_tmp_chpl53 = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl54 = NULL;
  int64_t ret_chpl6;
  int64_t tmp_chpl32;
  int64_t size_chpl6;
  c_void_ptr coerce_tmp_chpl23;
  c_void_ptr coerce_tmp_chpl24;
  int32_t call_tmp_chpl55;
  int64_t call_tmp_chpl56;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl33 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl57;
  string_chpl ret_tmp_chpl2;
  _ref_string_chpl tmp_chpl34 = NULL;
  chpl____wide__ref_string tmp_chpl35 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl38;
  chpl_bool tmp_chpl39;
  string_chpl call_tmp_chpl58;
  string_chpl ret_tmp_chpl3;
  _ref_string_chpl tmp_chpl40 = NULL;
  chpl____wide__ref_string tmp_chpl41 = {CHPL_LOCALEID_T_INIT, NULL};
  c_ptr_uint8_t_chpl coerce_tmp_chpl25 = NULL;
  int64_t coerce_tmp_chpl26;
  int32_t coerce_tmp_chpl27;
  c_ptr_uint8_t_chpl coerce_tmp_chpl28 = NULL;
  int64_t coerce_tmp_chpl29;
  int32_t coerce_tmp_chpl30;
  int64_t ret_chpl7;
  int32_t call_tmp_chpl59;
  chpl_bool tmp_chpl42;
  int32_t call_tmp_chpl60;
  int64_t ret_chpl8;
  int64_t tmp_chpl43;
  int64_t size_chpl7;
  c_void_ptr coerce_tmp_chpl31;
  c_void_ptr coerce_tmp_chpl32;
  int32_t call_tmp_chpl61;
  int64_t call_tmp_chpl62;
  int32_t call_tmp_chpl63;
  chpl_bool tmp_chpl44;
  int32_t call_tmp_chpl64;
  c_ptr_uint8_t_chpl call_tmp_chpl65 = NULL;
  int64_t ret_chpl9;
  int64_t tmp_chpl45;
  int64_t size_chpl8;
  c_void_ptr coerce_tmp_chpl33;
  c_void_ptr coerce_tmp_chpl34;
  int32_t call_tmp_chpl66;
  int64_t call_tmp_chpl67;
  int32_t call_tmp_chpl68;
  chpl_bool tmp_chpl46;
  int32_t call_tmp_chpl69;
  c_ptr_uint8_t_chpl call_tmp_chpl70 = NULL;
  int64_t ret_chpl10;
  int64_t tmp_chpl47;
  int64_t size_chpl9;
  c_void_ptr coerce_tmp_chpl35;
  c_void_ptr coerce_tmp_chpl36;
  int32_t call_tmp_chpl71;
  int64_t call_tmp_chpl72;
  c_ptr_uint8_t_chpl call_tmp_chpl73 = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl74 = NULL;
  int64_t ret_chpl11;
  int64_t tmp_chpl48;
  int64_t size_chpl10;
  c_void_ptr coerce_tmp_chpl37;
  c_void_ptr coerce_tmp_chpl38;
  int32_t call_tmp_chpl75;
  int64_t call_tmp_chpl76;
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl49 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl77;
  string_chpl ret_tmp_chpl4;
  _ref_string_chpl tmp_chpl50 = NULL;
  chpl____wide__ref_string tmp_chpl51 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl52 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl53 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t_chpl i_lhs_chpl = NULL;
  chpl____wide_TaskErrors _ic__F0_this_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_TaskErrors this_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t coerce_tmp_chpl39;
  int64_t tmp_chpl54;
  int64_t tmp_x0_chpl2;
  int64_t tmp_x1_chpl2;
  int64_t _ic__F1_high_chpl2;
  int64_t i_chpl2;
  chpl____wide_TaskErrors this_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  c_ptr__owned_Error_chpl coerce_tmp_chpl40 = NULL;
  c_ptr__owned_Error_chpl tmp_chpl55 = NULL;
  _ref__owned_Error_chpl call_tmp_chpl78 = NULL;
  chpl____wide_Error coerce_tmp_chpl41 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl42 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl56 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_TaskErrors this_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  c_ptr__owned_Error_chpl coerce_tmp_chpl43 = NULL;
  c_ptr__owned_Error_chpl tmp_chpl57 = NULL;
  _ref__owned_Error_chpl call_tmp_chpl79 = NULL;
  chpl____wide_Error coerce_tmp_chpl44 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl45 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl58 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error coerce_tmp_chpl46 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error e_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl80;
  string_chpl ret_tmp_chpl5;
  _ref_string_chpl tmp_chpl59 = NULL;
  chpl____wide__ref_string tmp_chpl60 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl81;
  chpl____wide_object coerce_tmp_chpl47 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl61 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl5 = NULL;
  chpl____wide__ref_string tmp_chpl62 = {CHPL_LOCALEID_T_INIT, NULL};
  c_ptr_uint8_t_chpl coerce_tmp_chpl48 = NULL;
  int64_t coerce_tmp_chpl49;
  int32_t coerce_tmp_chpl50;
  c_ptr_uint8_t_chpl coerce_tmp_chpl51 = NULL;
  int64_t coerce_tmp_chpl52;
  int32_t coerce_tmp_chpl53;
  int64_t ret_chpl12;
  int32_t call_tmp_chpl82;
  chpl_bool tmp_chpl63;
  int32_t call_tmp_chpl83;
  int64_t ret_chpl13;
  int64_t tmp_chpl64;
  int64_t size_chpl11;
  c_void_ptr coerce_tmp_chpl54;
  c_void_ptr coerce_tmp_chpl55;
  int32_t call_tmp_chpl84;
  int64_t call_tmp_chpl85;
  int32_t call_tmp_chpl86;
  chpl_bool tmp_chpl65;
  int32_t call_tmp_chpl87;
  c_ptr_uint8_t_chpl call_tmp_chpl88 = NULL;
  int64_t ret_chpl14;
  int64_t tmp_chpl66;
  int64_t size_chpl12;
  c_void_ptr coerce_tmp_chpl56;
  c_void_ptr coerce_tmp_chpl57;
  int32_t call_tmp_chpl89;
  int64_t call_tmp_chpl90;
  int32_t call_tmp_chpl91;
  chpl_bool tmp_chpl67;
  int32_t call_tmp_chpl92;
  c_ptr_uint8_t_chpl call_tmp_chpl93 = NULL;
  int64_t ret_chpl15;
  int64_t tmp_chpl68;
  int64_t size_chpl13;
  c_void_ptr coerce_tmp_chpl58;
  c_void_ptr coerce_tmp_chpl59;
  int32_t call_tmp_chpl94;
  int64_t call_tmp_chpl95;
  c_ptr_uint8_t_chpl call_tmp_chpl96 = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl97 = NULL;
  int64_t ret_chpl16;
  int64_t tmp_chpl69;
  int64_t size_chpl14;
  c_void_ptr coerce_tmp_chpl60;
  c_void_ptr coerce_tmp_chpl61;
  int32_t call_tmp_chpl98;
  int64_t call_tmp_chpl99;
  chpl____wide_TaskErrors _ic__F0_this_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_TaskErrors this_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t coerce_tmp_chpl62;
  int64_t tmp_chpl70;
  int64_t tmp_x0_chpl3;
  int64_t tmp_x1_chpl3;
  int64_t _ic__F1_high_chpl3;
  int64_t i_chpl3;
  chpl____wide_TaskErrors this_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  c_ptr__owned_Error_chpl coerce_tmp_chpl63 = NULL;
  c_ptr__owned_Error_chpl tmp_chpl71 = NULL;
  _ref__owned_Error_chpl call_tmp_chpl100 = NULL;
  chpl____wide_Error coerce_tmp_chpl64 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl65 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl72 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_TaskErrors this_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  c_ptr__owned_Error_chpl coerce_tmp_chpl66 = NULL;
  c_ptr__owned_Error_chpl tmp_chpl73 = NULL;
  _ref__owned_Error_chpl call_tmp_chpl101 = NULL;
  chpl____wide_Error coerce_tmp_chpl67 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl68 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl74 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error coerce_tmp_chpl69 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error e_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl102;
  string_chpl ret_tmp_chpl6;
  _ref_string_chpl tmp_chpl75 = NULL;
  chpl____wide__ref_string tmp_chpl76 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl103;
  _ref_string_chpl i_x_chpl6 = NULL;
  chpl____wide__ref_string tmp_chpl77 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl104;
  string_chpl ret_tmp_chpl7;
  string_chpl call_tmp_chpl105;
  string_chpl ret_tmp_chpl8;
  chpl____wide__ref_string tmp_chpl78 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl17;
  chpl____wide_object coerce_tmp_chpl70 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl79 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl80;
  chpl____wide_object coerce_tmp_chpl71 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl81 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl82;
  chpl____wide_object coerce_tmp_chpl72 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl73 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl74 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl83 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl106;
  string_chpl ret_tmp_chpl9;
  string_chpl call_tmp_chpl107;
  string_chpl ret_tmp_chpl10;
  chpl____wide__ref_string tmp_chpl84 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl75 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl85 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl108;
  string_chpl ret_tmp_chpl11;
  string_chpl call_tmp_chpl109;
  string_chpl ret_tmp_chpl12;
  chpl____wide__ref_string tmp_chpl86 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl7 = NULL;
  chpl____wide__ref_string tmp_chpl87 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl8 = NULL;
  chpl____wide__ref_string tmp_chpl88 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl9 = NULL;
  chpl____wide__ref_string tmp_chpl89 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl10 = NULL;
  chpl____wide__ref_string tmp_chpl90 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl76 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl91 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl110;
  string_chpl ret_tmp_chpl13;
  _ref_string_chpl i_x_chpl11 = NULL;
  chpl____wide__ref_string tmp_chpl92 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl12 = NULL;
  chpl____wide__ref_string tmp_chpl93 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl13 = NULL;
  chpl____wide__ref_string tmp_chpl94 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl14 = NULL;
  chpl____wide__ref_string tmp_chpl95 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_487;
  chpl____wide_Error chpl_macro_tmp_488;
  chpl____wide__ref_int64_t chpl_macro_tmp_489;
  chpl____wide__ref_c_ptr__owned_Error chpl_macro_tmp_490;
  chpl____wide_object chpl_macro_tmp_491;
  chpl____wide__nilType chpl_macro_tmp_492;
  chpl____wide_object chpl_macro_tmp_493;
  chpl____wide__ref_c_ptr__owned_Error chpl_macro_tmp_494;
  chpl____wide_object chpl_macro_tmp_495;
  chpl____wide__nilType chpl_macro_tmp_496;
  chpl____wide_object chpl_macro_tmp_497;
  chpl____wide__ref_string chpl_macro_tmp_498;
  chpl____wide__ref_int32_t chpl_macro_tmp_499;
  int32_t chpl_macro_tmp_500;
  chpl____wide__ref_string chpl_macro_tmp_501;
  chpl____wide__ref_string chpl_macro_tmp_502;
  chpl____wide__ref_int32_t chpl_macro_tmp_503;
  int32_t chpl_macro_tmp_504;
  chpl____wide__ref_string chpl_macro_tmp_505;
  chpl____wide__ref_string chpl_macro_tmp_506;
  chpl____wide__ref_string chpl_macro_tmp_507;
  chpl____wide__ref_int32_t chpl_macro_tmp_508;
  int32_t chpl_macro_tmp_509;
  chpl____wide__ref_string chpl_macro_tmp_510;
  chpl____wide__ref_string chpl_macro_tmp_511;
  chpl____wide__ref_int32_t chpl_macro_tmp_512;
  int32_t chpl_macro_tmp_513;
  chpl____wide__ref_string chpl_macro_tmp_514;
  chpl____wide__ref_string chpl_macro_tmp_515;
  chpl____wide__ref_int64_t chpl_macro_tmp_516;
  chpl____wide__ref_c_ptr__owned_Error chpl_macro_tmp_517;
  chpl____wide_object chpl_macro_tmp_518;
  chpl____wide__nilType chpl_macro_tmp_519;
  chpl____wide_object chpl_macro_tmp_520;
  chpl____wide__ref_c_ptr__owned_Error chpl_macro_tmp_521;
  chpl____wide_object chpl_macro_tmp_522;
  chpl____wide__nilType chpl_macro_tmp_523;
  chpl____wide_object chpl_macro_tmp_524;
  chpl____wide__ref_string chpl_macro_tmp_525;
  chpl____wide__ref_int32_t chpl_macro_tmp_526;
  int32_t chpl_macro_tmp_527;
  chpl____wide_object chpl_macro_tmp_528;
  chpl____wide__nilType chpl_macro_tmp_529;
  chpl____wide_object chpl_macro_tmp_530;
  chpl____wide__ref_string chpl_macro_tmp_531;
  chpl____wide__ref_int64_t chpl_macro_tmp_532;
  chpl____wide__ref_c_ptr__owned_Error chpl_macro_tmp_533;
  chpl____wide_object chpl_macro_tmp_534;
  chpl____wide__nilType chpl_macro_tmp_535;
  chpl____wide_object chpl_macro_tmp_536;
  chpl____wide__ref_c_ptr__owned_Error chpl_macro_tmp_537;
  chpl____wide_object chpl_macro_tmp_538;
  chpl____wide__nilType chpl_macro_tmp_539;
  chpl____wide_object chpl_macro_tmp_540;
  chpl____wide__ref_string chpl_macro_tmp_541;
  chpl____wide__ref_int32_t chpl_macro_tmp_542;
  int32_t chpl_macro_tmp_543;
  chpl____wide__ref_string chpl_macro_tmp_544;
  chpl____wide__ref_string chpl_macro_tmp_545;
  chpl____wide_object chpl_macro_tmp_546;
  chpl____wide__nilType chpl_macro_tmp_547;
  chpl____wide_object chpl_macro_tmp_548;
  chpl____wide_object chpl_macro_tmp_549;
  chpl____wide__nilType chpl_macro_tmp_550;
  chpl____wide_object chpl_macro_tmp_551;
  chpl____wide_object chpl_macro_tmp_552;
  chpl____wide_object chpl_macro_tmp_553;
  chpl____wide_object chpl_macro_tmp_554;
  chpl____wide__nilType chpl_macro_tmp_555;
  chpl____wide_object chpl_macro_tmp_556;
  chpl____wide__ref_string chpl_macro_tmp_557;
  chpl____wide_object chpl_macro_tmp_558;
  chpl____wide__nilType chpl_macro_tmp_559;
  chpl____wide_object chpl_macro_tmp_560;
  chpl____wide__ref_string chpl_macro_tmp_561;
  chpl____wide__ref_string chpl_macro_tmp_562;
  chpl____wide__ref_string chpl_macro_tmp_563;
  chpl____wide__ref_string chpl_macro_tmp_564;
  chpl____wide__ref_string chpl_macro_tmp_565;
  chpl____wide_object chpl_macro_tmp_566;
  chpl____wide__nilType chpl_macro_tmp_567;
  chpl____wide_object chpl_macro_tmp_568;
  chpl____wide__ref_string chpl_macro_tmp_569;
  chpl____wide__ref_string chpl_macro_tmp_570;
  chpl____wide__ref_string chpl_macro_tmp_571;
  chpl____wide__ref_string chpl_macro_tmp_572;
  local__str_literal_218_chpl = _str_literal_218_chpl /* " ... " */;
  local__str_literal_217_chpl = _str_literal_217_chpl /* " errors: " */;
  local__str_literal_215_chpl = _str_literal_215_chpl /* "" */;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  local__str_literal_596_chpl = _str_literal_596_chpl /* "With a negative count, the range must have a last index." */;
  n_chpl = INT64(0);
  init_chpl73(&minMsg_chpl);
  init_chpl73(&maxMsg_chpl);
  tmp_chpl15 = ((Error_chpl)(nil));
  chpl_macro_tmp_487.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_487.addr = tmp_chpl15;
  first_chpl = chpl_macro_tmp_487;
  tmp_chpl16 = ((Error_chpl)(nil));
  chpl_macro_tmp_488.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_488.addr = tmp_chpl16;
  last_chpl = chpl_macro_tmp_488;
  _ic__F0_this_chpl = this_chpl7;
  this_chpl8 = this_chpl7;
  chpl_check_nil((&this_chpl8)->addr, INT64(326), INT32(6));
  chpl_macro_tmp_489.locale = (&this_chpl8)->locale;
  chpl_macro_tmp_489.addr = &(((&this_chpl8)->addr)->nErrors);
  chpl_gen_comm_get(((void*)(&tmp_chpl17)), chpl_nodeFromLocaleID((chpl_macro_tmp_489).locale, INT64(0), INT32(0)), (chpl_macro_tmp_489).addr, sizeof(int64_t), COMMID(25), INT64(326), INT64(6));
  coerce_tmp_chpl3 = tmp_chpl17;
  if (coerce_tmp_chpl3 < INT64(0)) {
    boundsCheckHalt_chpl(&local__str_literal_596_chpl, INT64(326), INT32(6));
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
  this_chpl9 = _ic__F0_this_chpl;
  chpl_check_nil((&this_chpl9)->addr, INT64(326), INT32(6));
  chpl_macro_tmp_490.locale = (&this_chpl9)->locale;
  chpl_macro_tmp_490.addr = &(((&this_chpl9)->addr)->errorsArray);
  chpl_gen_comm_get(((void*)(&tmp_chpl18)), chpl_nodeFromLocaleID((chpl_macro_tmp_490).locale, INT64(0), INT32(0)), (chpl_macro_tmp_490).addr, sizeof(c_ptr__owned_Error_chpl), COMMID(26), INT64(326), INT64(6));
  coerce_tmp_chpl4 = tmp_chpl18;
  for (i_chpl = tmp_x0_chpl; ((i_chpl <= _ic__F1_high_chpl)); i_chpl += INT64(1)) {
    call_tmp_chpl36 = (coerce_tmp_chpl4 + i_chpl);
    coerce_tmp_chpl5 = borrow_chpl(call_tmp_chpl36);
    chpl_macro_tmp_491.locale = (&coerce_tmp_chpl5)->locale;
    chpl_macro_tmp_491.addr = ((object_chpl)((&coerce_tmp_chpl5)->addr));
    coerce_tmp_chpl6 = chpl_macro_tmp_491;
    chpl_macro_tmp_492.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_492.addr = nil;
    chpl_macro_tmp_493.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_493.addr = NULL;
    tmp_chpl19 = chpl_macro_tmp_493;
    if (((&coerce_tmp_chpl6)->addr != (&tmp_chpl19)->addr) || ((!(! (&coerce_tmp_chpl6)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl6)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl19)->locale, INT64(0), INT32(0))))) {
      this_chpl10 = _ic__F0_this_chpl;
      chpl_check_nil((&this_chpl10)->addr, INT64(326), INT32(6));
      chpl_macro_tmp_494.locale = (&this_chpl10)->locale;
      chpl_macro_tmp_494.addr = &(((&this_chpl10)->addr)->errorsArray);
      chpl_gen_comm_get(((void*)(&tmp_chpl20)), chpl_nodeFromLocaleID((chpl_macro_tmp_494).locale, INT64(0), INT32(0)), (chpl_macro_tmp_494).addr, sizeof(c_ptr__owned_Error_chpl), COMMID(27), INT64(326), INT64(6));
      coerce_tmp_chpl7 = tmp_chpl20;
      call_tmp_chpl37 = (coerce_tmp_chpl7 + i_chpl);
      coerce_tmp_chpl8 = (call_tmp_chpl37)->chpl_p;
      chpl_macro_tmp_495.locale = (&coerce_tmp_chpl8)->locale;
      chpl_macro_tmp_495.addr = ((object_chpl)((&coerce_tmp_chpl8)->addr));
      coerce_tmp_chpl9 = chpl_macro_tmp_495;
      chpl_macro_tmp_496.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_496.addr = nil;
      chpl_macro_tmp_497.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_497.addr = NULL;
      tmp_chpl21 = chpl_macro_tmp_497;
      if (! (((&coerce_tmp_chpl9)->addr != (&tmp_chpl21)->addr) || ((!(! (&coerce_tmp_chpl9)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl9)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl21)->locale, INT64(0), INT32(0)))))) {
        nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(327), INT32(6));
      }
      coerce_tmp_chpl10 = (call_tmp_chpl37)->chpl_p;
      e_chpl = coerce_tmp_chpl10;
      tmp_chpl22 = chpl___EQUALS_3(&minMsg_chpl, &local__str_literal_215_chpl);
      if (tmp_chpl22) {
        tmp_chpl23 = UINT8(true);
      } else {
        chpl_check_nil((&coerce_tmp_chpl10)->addr, INT64(328), INT32(6));
        tmp_chpl24 = &ret_tmp_chpl;
        chpl_macro_tmp_498.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_498.addr = tmp_chpl24;
        tmp_chpl25 = chpl_macro_tmp_498;
        chpl_macro_tmp_499.locale = (&coerce_tmp_chpl10)->locale;
        chpl_macro_tmp_499.addr = &(((object_chpl)((&coerce_tmp_chpl10)->addr))->chpl__cid);
        chpl_gen_comm_get(((void*)(&chpl_macro_tmp_500)), chpl_nodeFromLocaleID((chpl_macro_tmp_499).locale, INT64(0), INT32(0)), (chpl_macro_tmp_499).addr, sizeof(int32_t), COMMID(28), INT64(328), INT64(6));
        ((void(*)(chpl____wide_Error,
           chpl____wide__ref_string))chpl_vmtable[((INT64(6) * chpl_macro_tmp_500) + INT64(1))])(coerce_tmp_chpl10, tmp_chpl25);
        call_tmp_chpl38 = ret_tmp_chpl;
        coerce_tmp_chpl11 = (&call_tmp_chpl38)->buff;
        coerce_tmp_chpl12 = (&call_tmp_chpl38)->buffLen;
        coerce_tmp_chpl13 = (&call_tmp_chpl38)->locale_id;
        coerce_tmp_chpl14 = (&minMsg_chpl)->buff;
        coerce_tmp_chpl15 = (&minMsg_chpl)->buffLen;
        coerce_tmp_chpl16 = (&minMsg_chpl)->locale_id;
        call_tmp_chpl39 = get_chpl_nodeID();
        if (coerce_tmp_chpl13 == call_tmp_chpl39) {
          call_tmp_chpl40 = get_chpl_nodeID();
          tmp_chpl26 = (coerce_tmp_chpl16 == call_tmp_chpl40);
        } else {
          tmp_chpl26 = UINT8(false);
        }
        if (tmp_chpl26) {
          if (coerce_tmp_chpl12 < coerce_tmp_chpl15) {
            tmp_chpl27 = coerce_tmp_chpl12;
          } else {
            tmp_chpl27 = coerce_tmp_chpl15;
          }
          size_chpl3 = tmp_chpl27;
          coerce_tmp_chpl17 = ((c_void_ptr)(coerce_tmp_chpl11));
          coerce_tmp_chpl18 = ((c_void_ptr)(coerce_tmp_chpl14));
          checkValue_chpl(tmp_chpl27);
          call_tmp_chpl41 = memcmp(coerce_tmp_chpl17, coerce_tmp_chpl18, ((uint64_t)(size_chpl3)));
          checkValue_chpl5();
          call_tmp_chpl42 = ((int64_t)(call_tmp_chpl41));
          if (call_tmp_chpl42 == INT64(0)) {
            if (size_chpl3 < coerce_tmp_chpl12) {
              ret_chpl3 = INT64(1);
              goto _end__strcmp_local_chpl;
            }
            if (size_chpl3 < coerce_tmp_chpl15) {
              ret_chpl3 = INT64(-1);
              goto _end__strcmp_local_chpl;
            }
          }
          ret_chpl3 = call_tmp_chpl42;
          _end__strcmp_local_chpl:;
          ret_chpl2 = ret_chpl3;
          goto _end__strcmp_chpl;
        } else {
          call_tmp_chpl43 = get_chpl_nodeID();
          if (coerce_tmp_chpl13 != call_tmp_chpl43) {
            call_tmp_chpl44 = get_chpl_nodeID();
            tmp_chpl28 = (coerce_tmp_chpl16 == call_tmp_chpl44);
          } else {
            tmp_chpl28 = UINT8(false);
          }
          if (tmp_chpl28) {
            call_tmp_chpl45 = bufferCopyRemote_chpl(((int64_t)(coerce_tmp_chpl13)), coerce_tmp_chpl11, coerce_tmp_chpl12);
            if (coerce_tmp_chpl12 < coerce_tmp_chpl15) {
              tmp_chpl29 = coerce_tmp_chpl12;
            } else {
              tmp_chpl29 = coerce_tmp_chpl15;
            }
            size_chpl4 = tmp_chpl29;
            coerce_tmp_chpl19 = ((c_void_ptr)(call_tmp_chpl45));
            coerce_tmp_chpl20 = ((c_void_ptr)(coerce_tmp_chpl14));
            checkValue_chpl(tmp_chpl29);
            call_tmp_chpl46 = memcmp(coerce_tmp_chpl19, coerce_tmp_chpl20, ((uint64_t)(size_chpl4)));
            checkValue_chpl5();
            call_tmp_chpl47 = ((int64_t)(call_tmp_chpl46));
            if (call_tmp_chpl47 == INT64(0)) {
              if (size_chpl4 < coerce_tmp_chpl12) {
                ret_chpl4 = INT64(1);
                goto _end__strcmp_local_chpl2;
              }
              if (size_chpl4 < coerce_tmp_chpl15) {
                ret_chpl4 = INT64(-1);
                goto _end__strcmp_local_chpl2;
              }
            }
            ret_chpl4 = call_tmp_chpl47;
            _end__strcmp_local_chpl2:;
            chpl_here_free(((c_void_ptr)(call_tmp_chpl45)), INT64(328), INT32(6));
            ret_chpl2 = ret_chpl4;
            goto _end__strcmp_chpl;
          } else {
            call_tmp_chpl48 = get_chpl_nodeID();
            if (coerce_tmp_chpl13 == call_tmp_chpl48) {
              call_tmp_chpl49 = get_chpl_nodeID();
              tmp_chpl30 = (coerce_tmp_chpl16 != call_tmp_chpl49);
            } else {
              tmp_chpl30 = UINT8(false);
            }
            if (tmp_chpl30) {
              call_tmp_chpl50 = bufferCopyRemote_chpl(((int64_t)(coerce_tmp_chpl16)), coerce_tmp_chpl14, coerce_tmp_chpl15);
              if (coerce_tmp_chpl12 < coerce_tmp_chpl15) {
                tmp_chpl31 = coerce_tmp_chpl12;
              } else {
                tmp_chpl31 = coerce_tmp_chpl15;
              }
              size_chpl5 = tmp_chpl31;
              coerce_tmp_chpl21 = ((c_void_ptr)(coerce_tmp_chpl11));
              coerce_tmp_chpl22 = ((c_void_ptr)(call_tmp_chpl50));
              checkValue_chpl(tmp_chpl31);
              call_tmp_chpl51 = memcmp(coerce_tmp_chpl21, coerce_tmp_chpl22, ((uint64_t)(size_chpl5)));
              checkValue_chpl5();
              call_tmp_chpl52 = ((int64_t)(call_tmp_chpl51));
              if (call_tmp_chpl52 == INT64(0)) {
                if (size_chpl5 < coerce_tmp_chpl12) {
                  ret_chpl5 = INT64(1);
                  goto _end__strcmp_local_chpl3;
                }
                if (size_chpl5 < coerce_tmp_chpl15) {
                  ret_chpl5 = INT64(-1);
                  goto _end__strcmp_local_chpl3;
                }
              }
              ret_chpl5 = call_tmp_chpl52;
              _end__strcmp_local_chpl3:;
              chpl_here_free(((c_void_ptr)(call_tmp_chpl50)), INT64(328), INT32(6));
              ret_chpl2 = ret_chpl5;
              goto _end__strcmp_chpl;
            } else {
              call_tmp_chpl53 = bufferCopyRemote_chpl(((int64_t)(coerce_tmp_chpl13)), coerce_tmp_chpl11, coerce_tmp_chpl12);
              call_tmp_chpl54 = bufferCopyRemote_chpl(((int64_t)(coerce_tmp_chpl16)), coerce_tmp_chpl14, coerce_tmp_chpl15);
              if (coerce_tmp_chpl12 < coerce_tmp_chpl15) {
                tmp_chpl32 = coerce_tmp_chpl12;
              } else {
                tmp_chpl32 = coerce_tmp_chpl15;
              }
              size_chpl6 = tmp_chpl32;
              coerce_tmp_chpl23 = ((c_void_ptr)(call_tmp_chpl53));
              coerce_tmp_chpl24 = ((c_void_ptr)(call_tmp_chpl54));
              checkValue_chpl(tmp_chpl32);
              call_tmp_chpl55 = memcmp(coerce_tmp_chpl23, coerce_tmp_chpl24, ((uint64_t)(size_chpl6)));
              checkValue_chpl5();
              call_tmp_chpl56 = ((int64_t)(call_tmp_chpl55));
              if (call_tmp_chpl56 == INT64(0)) {
                if (size_chpl6 < coerce_tmp_chpl12) {
                  ret_chpl6 = INT64(1);
                  goto _end__strcmp_local_chpl4;
                }
                if (size_chpl6 < coerce_tmp_chpl15) {
                  ret_chpl6 = INT64(-1);
                  goto _end__strcmp_local_chpl4;
                }
              }
              ret_chpl6 = call_tmp_chpl56;
              _end__strcmp_local_chpl4:;
              chpl_here_free(((c_void_ptr)(call_tmp_chpl53)), INT64(328), INT32(6));
              chpl_here_free(((c_void_ptr)(call_tmp_chpl54)), INT64(328), INT32(6));
              ret_chpl2 = ret_chpl6;
              goto _end__strcmp_chpl;
            }
          }
        }
        _end__strcmp_chpl:;
        tmp_chpl23 = (ret_chpl2 < INT64(0));
        i_x_chpl = &call_tmp_chpl38;
        chpl_macro_tmp_501.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_501.addr = i_x_chpl;
        tmp_chpl33 = chpl_macro_tmp_501;
        deinit_chpl42(tmp_chpl33);
      }
      if (tmp_chpl23) {
        chpl_check_nil((&e_chpl)->addr, INT64(329), INT32(6));
        tmp_chpl34 = &ret_tmp_chpl2;
        chpl_macro_tmp_502.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_502.addr = tmp_chpl34;
        tmp_chpl35 = chpl_macro_tmp_502;
        chpl_macro_tmp_503.locale = (&e_chpl)->locale;
        chpl_macro_tmp_503.addr = &(((object_chpl)((&e_chpl)->addr))->chpl__cid);
        chpl_gen_comm_get(((void*)(&chpl_macro_tmp_504)), chpl_nodeFromLocaleID((chpl_macro_tmp_503).locale, INT64(0), INT32(0)), (chpl_macro_tmp_503).addr, sizeof(int32_t), COMMID(29), INT64(329), INT64(6));
        ((void(*)(chpl____wide_Error,
           chpl____wide__ref_string))chpl_vmtable[((INT64(6) * chpl_macro_tmp_504) + INT64(1))])(e_chpl, tmp_chpl35);
        call_tmp_chpl57 = ret_tmp_chpl2;
        chpl_macro_tmp_505.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_505.addr = &minMsg_chpl;
        tmp_chpl36 = chpl_macro_tmp_505;
        chpl___ASSIGN_6(tmp_chpl36, &call_tmp_chpl57);
        i_x_chpl2 = &call_tmp_chpl57;
        chpl_macro_tmp_506.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_506.addr = i_x_chpl2;
        tmp_chpl37 = chpl_macro_tmp_506;
        deinit_chpl42(tmp_chpl37);
      }
      tmp_chpl38 = chpl___EQUALS_3(&maxMsg_chpl, &local__str_literal_215_chpl);
      if (tmp_chpl38) {
        tmp_chpl39 = UINT8(true);
      } else {
        chpl_check_nil((&e_chpl)->addr, INT64(330), INT32(6));
        tmp_chpl40 = &ret_tmp_chpl3;
        chpl_macro_tmp_507.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_507.addr = tmp_chpl40;
        tmp_chpl41 = chpl_macro_tmp_507;
        chpl_macro_tmp_508.locale = (&e_chpl)->locale;
        chpl_macro_tmp_508.addr = &(((object_chpl)((&e_chpl)->addr))->chpl__cid);
        chpl_gen_comm_get(((void*)(&chpl_macro_tmp_509)), chpl_nodeFromLocaleID((chpl_macro_tmp_508).locale, INT64(0), INT32(0)), (chpl_macro_tmp_508).addr, sizeof(int32_t), COMMID(30), INT64(330), INT64(6));
        ((void(*)(chpl____wide_Error,
           chpl____wide__ref_string))chpl_vmtable[((INT64(6) * chpl_macro_tmp_509) + INT64(1))])(e_chpl, tmp_chpl41);
        call_tmp_chpl58 = ret_tmp_chpl3;
        coerce_tmp_chpl25 = (&call_tmp_chpl58)->buff;
        coerce_tmp_chpl26 = (&call_tmp_chpl58)->buffLen;
        coerce_tmp_chpl27 = (&call_tmp_chpl58)->locale_id;
        coerce_tmp_chpl28 = (&maxMsg_chpl)->buff;
        coerce_tmp_chpl29 = (&maxMsg_chpl)->buffLen;
        coerce_tmp_chpl30 = (&maxMsg_chpl)->locale_id;
        call_tmp_chpl59 = get_chpl_nodeID();
        if (coerce_tmp_chpl27 == call_tmp_chpl59) {
          call_tmp_chpl60 = get_chpl_nodeID();
          tmp_chpl42 = (coerce_tmp_chpl30 == call_tmp_chpl60);
        } else {
          tmp_chpl42 = UINT8(false);
        }
        if (tmp_chpl42) {
          if (coerce_tmp_chpl26 < coerce_tmp_chpl29) {
            tmp_chpl43 = coerce_tmp_chpl26;
          } else {
            tmp_chpl43 = coerce_tmp_chpl29;
          }
          size_chpl7 = tmp_chpl43;
          coerce_tmp_chpl31 = ((c_void_ptr)(coerce_tmp_chpl25));
          coerce_tmp_chpl32 = ((c_void_ptr)(coerce_tmp_chpl28));
          checkValue_chpl(tmp_chpl43);
          call_tmp_chpl61 = memcmp(coerce_tmp_chpl31, coerce_tmp_chpl32, ((uint64_t)(size_chpl7)));
          checkValue_chpl5();
          call_tmp_chpl62 = ((int64_t)(call_tmp_chpl61));
          if (call_tmp_chpl62 == INT64(0)) {
            if (size_chpl7 < coerce_tmp_chpl26) {
              ret_chpl8 = INT64(1);
              goto _end__strcmp_local_chpl5;
            }
            if (size_chpl7 < coerce_tmp_chpl29) {
              ret_chpl8 = INT64(-1);
              goto _end__strcmp_local_chpl5;
            }
          }
          ret_chpl8 = call_tmp_chpl62;
          _end__strcmp_local_chpl5:;
          ret_chpl7 = ret_chpl8;
          goto _end__strcmp_chpl2;
        } else {
          call_tmp_chpl63 = get_chpl_nodeID();
          if (coerce_tmp_chpl27 != call_tmp_chpl63) {
            call_tmp_chpl64 = get_chpl_nodeID();
            tmp_chpl44 = (coerce_tmp_chpl30 == call_tmp_chpl64);
          } else {
            tmp_chpl44 = UINT8(false);
          }
          if (tmp_chpl44) {
            call_tmp_chpl65 = bufferCopyRemote_chpl(((int64_t)(coerce_tmp_chpl27)), coerce_tmp_chpl25, coerce_tmp_chpl26);
            if (coerce_tmp_chpl26 < coerce_tmp_chpl29) {
              tmp_chpl45 = coerce_tmp_chpl26;
            } else {
              tmp_chpl45 = coerce_tmp_chpl29;
            }
            size_chpl8 = tmp_chpl45;
            coerce_tmp_chpl33 = ((c_void_ptr)(call_tmp_chpl65));
            coerce_tmp_chpl34 = ((c_void_ptr)(coerce_tmp_chpl28));
            checkValue_chpl(tmp_chpl45);
            call_tmp_chpl66 = memcmp(coerce_tmp_chpl33, coerce_tmp_chpl34, ((uint64_t)(size_chpl8)));
            checkValue_chpl5();
            call_tmp_chpl67 = ((int64_t)(call_tmp_chpl66));
            if (call_tmp_chpl67 == INT64(0)) {
              if (size_chpl8 < coerce_tmp_chpl26) {
                ret_chpl9 = INT64(1);
                goto _end__strcmp_local_chpl6;
              }
              if (size_chpl8 < coerce_tmp_chpl29) {
                ret_chpl9 = INT64(-1);
                goto _end__strcmp_local_chpl6;
              }
            }
            ret_chpl9 = call_tmp_chpl67;
            _end__strcmp_local_chpl6:;
            chpl_here_free(((c_void_ptr)(call_tmp_chpl65)), INT64(330), INT32(6));
            ret_chpl7 = ret_chpl9;
            goto _end__strcmp_chpl2;
          } else {
            call_tmp_chpl68 = get_chpl_nodeID();
            if (coerce_tmp_chpl27 == call_tmp_chpl68) {
              call_tmp_chpl69 = get_chpl_nodeID();
              tmp_chpl46 = (coerce_tmp_chpl30 != call_tmp_chpl69);
            } else {
              tmp_chpl46 = UINT8(false);
            }
            if (tmp_chpl46) {
              call_tmp_chpl70 = bufferCopyRemote_chpl(((int64_t)(coerce_tmp_chpl30)), coerce_tmp_chpl28, coerce_tmp_chpl29);
              if (coerce_tmp_chpl26 < coerce_tmp_chpl29) {
                tmp_chpl47 = coerce_tmp_chpl26;
              } else {
                tmp_chpl47 = coerce_tmp_chpl29;
              }
              size_chpl9 = tmp_chpl47;
              coerce_tmp_chpl35 = ((c_void_ptr)(coerce_tmp_chpl25));
              coerce_tmp_chpl36 = ((c_void_ptr)(call_tmp_chpl70));
              checkValue_chpl(tmp_chpl47);
              call_tmp_chpl71 = memcmp(coerce_tmp_chpl35, coerce_tmp_chpl36, ((uint64_t)(size_chpl9)));
              checkValue_chpl5();
              call_tmp_chpl72 = ((int64_t)(call_tmp_chpl71));
              if (call_tmp_chpl72 == INT64(0)) {
                if (size_chpl9 < coerce_tmp_chpl26) {
                  ret_chpl10 = INT64(1);
                  goto _end__strcmp_local_chpl7;
                }
                if (size_chpl9 < coerce_tmp_chpl29) {
                  ret_chpl10 = INT64(-1);
                  goto _end__strcmp_local_chpl7;
                }
              }
              ret_chpl10 = call_tmp_chpl72;
              _end__strcmp_local_chpl7:;
              chpl_here_free(((c_void_ptr)(call_tmp_chpl70)), INT64(330), INT32(6));
              ret_chpl7 = ret_chpl10;
              goto _end__strcmp_chpl2;
            } else {
              call_tmp_chpl73 = bufferCopyRemote_chpl(((int64_t)(coerce_tmp_chpl27)), coerce_tmp_chpl25, coerce_tmp_chpl26);
              call_tmp_chpl74 = bufferCopyRemote_chpl(((int64_t)(coerce_tmp_chpl30)), coerce_tmp_chpl28, coerce_tmp_chpl29);
              if (coerce_tmp_chpl26 < coerce_tmp_chpl29) {
                tmp_chpl48 = coerce_tmp_chpl26;
              } else {
                tmp_chpl48 = coerce_tmp_chpl29;
              }
              size_chpl10 = tmp_chpl48;
              coerce_tmp_chpl37 = ((c_void_ptr)(call_tmp_chpl73));
              coerce_tmp_chpl38 = ((c_void_ptr)(call_tmp_chpl74));
              checkValue_chpl(tmp_chpl48);
              call_tmp_chpl75 = memcmp(coerce_tmp_chpl37, coerce_tmp_chpl38, ((uint64_t)(size_chpl10)));
              checkValue_chpl5();
              call_tmp_chpl76 = ((int64_t)(call_tmp_chpl75));
              if (call_tmp_chpl76 == INT64(0)) {
                if (size_chpl10 < coerce_tmp_chpl26) {
                  ret_chpl11 = INT64(1);
                  goto _end__strcmp_local_chpl8;
                }
                if (size_chpl10 < coerce_tmp_chpl29) {
                  ret_chpl11 = INT64(-1);
                  goto _end__strcmp_local_chpl8;
                }
              }
              ret_chpl11 = call_tmp_chpl76;
              _end__strcmp_local_chpl8:;
              chpl_here_free(((c_void_ptr)(call_tmp_chpl73)), INT64(330), INT32(6));
              chpl_here_free(((c_void_ptr)(call_tmp_chpl74)), INT64(330), INT32(6));
              ret_chpl7 = ret_chpl11;
              goto _end__strcmp_chpl2;
            }
          }
        }
        _end__strcmp_chpl2:;
        tmp_chpl39 = (ret_chpl7 > INT64(0));
        i_x_chpl3 = &call_tmp_chpl58;
        chpl_macro_tmp_510.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_510.addr = i_x_chpl3;
        tmp_chpl49 = chpl_macro_tmp_510;
        deinit_chpl42(tmp_chpl49);
      }
      if (tmp_chpl39) {
        chpl_check_nil((&e_chpl)->addr, INT64(331), INT32(6));
        tmp_chpl50 = &ret_tmp_chpl4;
        chpl_macro_tmp_511.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_511.addr = tmp_chpl50;
        tmp_chpl51 = chpl_macro_tmp_511;
        chpl_macro_tmp_512.locale = (&e_chpl)->locale;
        chpl_macro_tmp_512.addr = &(((object_chpl)((&e_chpl)->addr))->chpl__cid);
        chpl_gen_comm_get(((void*)(&chpl_macro_tmp_513)), chpl_nodeFromLocaleID((chpl_macro_tmp_512).locale, INT64(0), INT32(0)), (chpl_macro_tmp_512).addr, sizeof(int32_t), COMMID(31), INT64(331), INT64(6));
        ((void(*)(chpl____wide_Error,
           chpl____wide__ref_string))chpl_vmtable[((INT64(6) * chpl_macro_tmp_513) + INT64(1))])(e_chpl, tmp_chpl51);
        call_tmp_chpl77 = ret_tmp_chpl4;
        chpl_macro_tmp_514.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_514.addr = &maxMsg_chpl;
        tmp_chpl52 = chpl_macro_tmp_514;
        chpl___ASSIGN_6(tmp_chpl52, &call_tmp_chpl77);
        i_x_chpl4 = &call_tmp_chpl77;
        chpl_macro_tmp_515.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_515.addr = i_x_chpl4;
        tmp_chpl53 = chpl_macro_tmp_515;
        deinit_chpl42(tmp_chpl53);
      }
      i_lhs_chpl = &n_chpl;
      *(i_lhs_chpl) += INT64(1);
    }
  }
  _ic__F0_this_chpl2 = this_chpl7;
  this_chpl11 = this_chpl7;
  chpl_check_nil((&this_chpl11)->addr, INT64(338), INT32(6));
  chpl_macro_tmp_516.locale = (&this_chpl11)->locale;
  chpl_macro_tmp_516.addr = &(((&this_chpl11)->addr)->nErrors);
  chpl_gen_comm_get(((void*)(&tmp_chpl54)), chpl_nodeFromLocaleID((chpl_macro_tmp_516).locale, INT64(0), INT32(0)), (chpl_macro_tmp_516).addr, sizeof(int64_t), COMMID(32), INT64(338), INT64(6));
  coerce_tmp_chpl39 = tmp_chpl54;
  if (coerce_tmp_chpl39 < INT64(0)) {
    boundsCheckHalt_chpl(&local__str_literal_596_chpl, INT64(338), INT32(6));
  }
  if (coerce_tmp_chpl39 == INT64(0)) {
    tmp_x0_chpl2 = INT64(0);
    tmp_x1_chpl2 = ((int64_t)(((uint64_t)((((uint64_t)(INT64(0))) - UINT64(1))))));
  } else {
    tmp_x0_chpl2 = INT64(0);
    tmp_x1_chpl2 = ((int64_t)((INT64(0) + ((int64_t)((coerce_tmp_chpl39 - INT64(1)))))));
  }
  _ic__F1_high_chpl2 = tmp_x1_chpl2;
  i_chpl2 = INT64(0);
  chpl_checkIfRangeIterWillOverflow(tmp_x0_chpl2, tmp_x1_chpl2, INT64(1), tmp_x0_chpl2, tmp_x1_chpl2, UINT8(true));
  this_chpl12 = _ic__F0_this_chpl2;
  chpl_check_nil((&this_chpl12)->addr, INT64(338), INT32(6));
  chpl_macro_tmp_517.locale = (&this_chpl12)->locale;
  chpl_macro_tmp_517.addr = &(((&this_chpl12)->addr)->errorsArray);
  chpl_gen_comm_get(((void*)(&tmp_chpl55)), chpl_nodeFromLocaleID((chpl_macro_tmp_517).locale, INT64(0), INT32(0)), (chpl_macro_tmp_517).addr, sizeof(c_ptr__owned_Error_chpl), COMMID(33), INT64(338), INT64(6));
  coerce_tmp_chpl40 = tmp_chpl55;
  for (i_chpl2 = tmp_x0_chpl2; ((i_chpl2 <= _ic__F1_high_chpl2)); i_chpl2 += INT64(1)) {
    call_tmp_chpl78 = (coerce_tmp_chpl40 + i_chpl2);
    coerce_tmp_chpl41 = borrow_chpl(call_tmp_chpl78);
    chpl_macro_tmp_518.locale = (&coerce_tmp_chpl41)->locale;
    chpl_macro_tmp_518.addr = ((object_chpl)((&coerce_tmp_chpl41)->addr));
    coerce_tmp_chpl42 = chpl_macro_tmp_518;
    chpl_macro_tmp_519.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_519.addr = nil;
    chpl_macro_tmp_520.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_520.addr = NULL;
    tmp_chpl56 = chpl_macro_tmp_520;
    if (((&coerce_tmp_chpl42)->addr != (&tmp_chpl56)->addr) || ((!(! (&coerce_tmp_chpl42)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl42)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl56)->locale, INT64(0), INT32(0))))) {
      this_chpl13 = _ic__F0_this_chpl2;
      chpl_check_nil((&this_chpl13)->addr, INT64(338), INT32(6));
      chpl_macro_tmp_521.locale = (&this_chpl13)->locale;
      chpl_macro_tmp_521.addr = &(((&this_chpl13)->addr)->errorsArray);
      chpl_gen_comm_get(((void*)(&tmp_chpl57)), chpl_nodeFromLocaleID((chpl_macro_tmp_521).locale, INT64(0), INT32(0)), (chpl_macro_tmp_521).addr, sizeof(c_ptr__owned_Error_chpl), COMMID(34), INT64(338), INT64(6));
      coerce_tmp_chpl43 = tmp_chpl57;
      call_tmp_chpl79 = (coerce_tmp_chpl43 + i_chpl2);
      coerce_tmp_chpl44 = (call_tmp_chpl79)->chpl_p;
      chpl_macro_tmp_522.locale = (&coerce_tmp_chpl44)->locale;
      chpl_macro_tmp_522.addr = ((object_chpl)((&coerce_tmp_chpl44)->addr));
      coerce_tmp_chpl45 = chpl_macro_tmp_522;
      chpl_macro_tmp_523.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_523.addr = nil;
      chpl_macro_tmp_524.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_524.addr = NULL;
      tmp_chpl58 = chpl_macro_tmp_524;
      if (! (((&coerce_tmp_chpl45)->addr != (&tmp_chpl58)->addr) || ((!(! (&coerce_tmp_chpl45)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl45)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl58)->locale, INT64(0), INT32(0)))))) {
        nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(339), INT32(6));
      }
      coerce_tmp_chpl46 = (call_tmp_chpl79)->chpl_p;
      e_chpl2 = coerce_tmp_chpl46;
      chpl_check_nil((&coerce_tmp_chpl46)->addr, INT64(340), INT32(6));
      tmp_chpl59 = &ret_tmp_chpl5;
      chpl_macro_tmp_525.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_525.addr = tmp_chpl59;
      tmp_chpl60 = chpl_macro_tmp_525;
      chpl_macro_tmp_526.locale = (&coerce_tmp_chpl46)->locale;
      chpl_macro_tmp_526.addr = &(((object_chpl)((&coerce_tmp_chpl46)->addr))->chpl__cid);
      chpl_gen_comm_get(((void*)(&chpl_macro_tmp_527)), chpl_nodeFromLocaleID((chpl_macro_tmp_526).locale, INT64(0), INT32(0)), (chpl_macro_tmp_526).addr, sizeof(int32_t), COMMID(35), INT64(340), INT64(6));
      ((void(*)(chpl____wide_Error,
         chpl____wide__ref_string))chpl_vmtable[((INT64(6) * chpl_macro_tmp_527) + INT64(1))])(coerce_tmp_chpl46, tmp_chpl60);
      call_tmp_chpl80 = ret_tmp_chpl5;
      call_tmp_chpl81 = chpl___EQUALS_3(&call_tmp_chpl80, &minMsg_chpl);
      if (call_tmp_chpl81) {
        chpl_macro_tmp_528.locale = (&first_chpl)->locale;
        chpl_macro_tmp_528.addr = ((object_chpl)((&first_chpl)->addr));
        coerce_tmp_chpl47 = chpl_macro_tmp_528;
        chpl_macro_tmp_529.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_529.addr = nil;
        chpl_macro_tmp_530.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_530.addr = NULL;
        tmp_chpl61 = chpl_macro_tmp_530;
        if (! (((&coerce_tmp_chpl47)->addr != (&tmp_chpl61)->addr) || ((!(! (&coerce_tmp_chpl47)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl47)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl61)->locale, INT64(0), INT32(0)))))) {
          first_chpl = e_chpl2;
        }
        last_chpl = e_chpl2;
      }
      i_x_chpl5 = &call_tmp_chpl80;
      chpl_macro_tmp_531.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_531.addr = i_x_chpl5;
      tmp_chpl62 = chpl_macro_tmp_531;
      deinit_chpl42(tmp_chpl62);
    }
  }
  coerce_tmp_chpl48 = (&minMsg_chpl)->buff;
  coerce_tmp_chpl49 = (&minMsg_chpl)->buffLen;
  coerce_tmp_chpl50 = (&minMsg_chpl)->locale_id;
  coerce_tmp_chpl51 = (&maxMsg_chpl)->buff;
  coerce_tmp_chpl52 = (&maxMsg_chpl)->buffLen;
  coerce_tmp_chpl53 = (&maxMsg_chpl)->locale_id;
  call_tmp_chpl82 = get_chpl_nodeID();
  if (coerce_tmp_chpl50 == call_tmp_chpl82) {
    call_tmp_chpl83 = get_chpl_nodeID();
    tmp_chpl63 = (coerce_tmp_chpl53 == call_tmp_chpl83);
  } else {
    tmp_chpl63 = UINT8(false);
  }
  if (tmp_chpl63) {
    if (coerce_tmp_chpl49 < coerce_tmp_chpl52) {
      tmp_chpl64 = coerce_tmp_chpl49;
    } else {
      tmp_chpl64 = coerce_tmp_chpl52;
    }
    size_chpl11 = tmp_chpl64;
    coerce_tmp_chpl54 = ((c_void_ptr)(coerce_tmp_chpl48));
    coerce_tmp_chpl55 = ((c_void_ptr)(coerce_tmp_chpl51));
    checkValue_chpl(tmp_chpl64);
    call_tmp_chpl84 = memcmp(coerce_tmp_chpl54, coerce_tmp_chpl55, ((uint64_t)(size_chpl11)));
    checkValue_chpl5();
    call_tmp_chpl85 = ((int64_t)(call_tmp_chpl84));
    if (call_tmp_chpl85 == INT64(0)) {
      if (size_chpl11 < coerce_tmp_chpl49) {
        ret_chpl13 = INT64(1);
        goto _end__strcmp_local_chpl9;
      }
      if (size_chpl11 < coerce_tmp_chpl52) {
        ret_chpl13 = INT64(-1);
        goto _end__strcmp_local_chpl9;
      }
    }
    ret_chpl13 = call_tmp_chpl85;
    _end__strcmp_local_chpl9:;
    ret_chpl12 = ret_chpl13;
    goto _end__strcmp_chpl3;
  } else {
    call_tmp_chpl86 = get_chpl_nodeID();
    if (coerce_tmp_chpl50 != call_tmp_chpl86) {
      call_tmp_chpl87 = get_chpl_nodeID();
      tmp_chpl65 = (coerce_tmp_chpl53 == call_tmp_chpl87);
    } else {
      tmp_chpl65 = UINT8(false);
    }
    if (tmp_chpl65) {
      call_tmp_chpl88 = bufferCopyRemote_chpl(((int64_t)(coerce_tmp_chpl50)), coerce_tmp_chpl48, coerce_tmp_chpl49);
      if (coerce_tmp_chpl49 < coerce_tmp_chpl52) {
        tmp_chpl66 = coerce_tmp_chpl49;
      } else {
        tmp_chpl66 = coerce_tmp_chpl52;
      }
      size_chpl12 = tmp_chpl66;
      coerce_tmp_chpl56 = ((c_void_ptr)(call_tmp_chpl88));
      coerce_tmp_chpl57 = ((c_void_ptr)(coerce_tmp_chpl51));
      checkValue_chpl(tmp_chpl66);
      call_tmp_chpl89 = memcmp(coerce_tmp_chpl56, coerce_tmp_chpl57, ((uint64_t)(size_chpl12)));
      checkValue_chpl5();
      call_tmp_chpl90 = ((int64_t)(call_tmp_chpl89));
      if (call_tmp_chpl90 == INT64(0)) {
        if (size_chpl12 < coerce_tmp_chpl49) {
          ret_chpl14 = INT64(1);
          goto _end__strcmp_local_chpl10;
        }
        if (size_chpl12 < coerce_tmp_chpl52) {
          ret_chpl14 = INT64(-1);
          goto _end__strcmp_local_chpl10;
        }
      }
      ret_chpl14 = call_tmp_chpl90;
      _end__strcmp_local_chpl10:;
      chpl_here_free(((c_void_ptr)(call_tmp_chpl88)), INT64(346), INT32(6));
      ret_chpl12 = ret_chpl14;
      goto _end__strcmp_chpl3;
    } else {
      call_tmp_chpl91 = get_chpl_nodeID();
      if (coerce_tmp_chpl50 == call_tmp_chpl91) {
        call_tmp_chpl92 = get_chpl_nodeID();
        tmp_chpl67 = (coerce_tmp_chpl53 != call_tmp_chpl92);
      } else {
        tmp_chpl67 = UINT8(false);
      }
      if (tmp_chpl67) {
        call_tmp_chpl93 = bufferCopyRemote_chpl(((int64_t)(coerce_tmp_chpl53)), coerce_tmp_chpl51, coerce_tmp_chpl52);
        if (coerce_tmp_chpl49 < coerce_tmp_chpl52) {
          tmp_chpl68 = coerce_tmp_chpl49;
        } else {
          tmp_chpl68 = coerce_tmp_chpl52;
        }
        size_chpl13 = tmp_chpl68;
        coerce_tmp_chpl58 = ((c_void_ptr)(coerce_tmp_chpl48));
        coerce_tmp_chpl59 = ((c_void_ptr)(call_tmp_chpl93));
        checkValue_chpl(tmp_chpl68);
        call_tmp_chpl94 = memcmp(coerce_tmp_chpl58, coerce_tmp_chpl59, ((uint64_t)(size_chpl13)));
        checkValue_chpl5();
        call_tmp_chpl95 = ((int64_t)(call_tmp_chpl94));
        if (call_tmp_chpl95 == INT64(0)) {
          if (size_chpl13 < coerce_tmp_chpl49) {
            ret_chpl15 = INT64(1);
            goto _end__strcmp_local_chpl11;
          }
          if (size_chpl13 < coerce_tmp_chpl52) {
            ret_chpl15 = INT64(-1);
            goto _end__strcmp_local_chpl11;
          }
        }
        ret_chpl15 = call_tmp_chpl95;
        _end__strcmp_local_chpl11:;
        chpl_here_free(((c_void_ptr)(call_tmp_chpl93)), INT64(346), INT32(6));
        ret_chpl12 = ret_chpl15;
        goto _end__strcmp_chpl3;
      } else {
        call_tmp_chpl96 = bufferCopyRemote_chpl(((int64_t)(coerce_tmp_chpl50)), coerce_tmp_chpl48, coerce_tmp_chpl49);
        call_tmp_chpl97 = bufferCopyRemote_chpl(((int64_t)(coerce_tmp_chpl53)), coerce_tmp_chpl51, coerce_tmp_chpl52);
        if (coerce_tmp_chpl49 < coerce_tmp_chpl52) {
          tmp_chpl69 = coerce_tmp_chpl49;
        } else {
          tmp_chpl69 = coerce_tmp_chpl52;
        }
        size_chpl14 = tmp_chpl69;
        coerce_tmp_chpl60 = ((c_void_ptr)(call_tmp_chpl96));
        coerce_tmp_chpl61 = ((c_void_ptr)(call_tmp_chpl97));
        checkValue_chpl(tmp_chpl69);
        call_tmp_chpl98 = memcmp(coerce_tmp_chpl60, coerce_tmp_chpl61, ((uint64_t)(size_chpl14)));
        checkValue_chpl5();
        call_tmp_chpl99 = ((int64_t)(call_tmp_chpl98));
        if (call_tmp_chpl99 == INT64(0)) {
          if (size_chpl14 < coerce_tmp_chpl49) {
            ret_chpl16 = INT64(1);
            goto _end__strcmp_local_chpl12;
          }
          if (size_chpl14 < coerce_tmp_chpl52) {
            ret_chpl16 = INT64(-1);
            goto _end__strcmp_local_chpl12;
          }
        }
        ret_chpl16 = call_tmp_chpl99;
        _end__strcmp_local_chpl12:;
        chpl_here_free(((c_void_ptr)(call_tmp_chpl96)), INT64(346), INT32(6));
        chpl_here_free(((c_void_ptr)(call_tmp_chpl97)), INT64(346), INT32(6));
        ret_chpl12 = ret_chpl16;
        goto _end__strcmp_chpl3;
      }
    }
  }
  _end__strcmp_chpl3:;
  if (! (ret_chpl12 == INT64(0))) {
    _ic__F0_this_chpl3 = this_chpl7;
    this_chpl14 = this_chpl7;
    chpl_check_nil((&this_chpl14)->addr, INT64(347), INT32(6));
    chpl_macro_tmp_532.locale = (&this_chpl14)->locale;
    chpl_macro_tmp_532.addr = &(((&this_chpl14)->addr)->nErrors);
    chpl_gen_comm_get(((void*)(&tmp_chpl70)), chpl_nodeFromLocaleID((chpl_macro_tmp_532).locale, INT64(0), INT32(0)), (chpl_macro_tmp_532).addr, sizeof(int64_t), COMMID(36), INT64(347), INT64(6));
    coerce_tmp_chpl62 = tmp_chpl70;
    if (coerce_tmp_chpl62 < INT64(0)) {
      boundsCheckHalt_chpl(&local__str_literal_596_chpl, INT64(347), INT32(6));
    }
    if (coerce_tmp_chpl62 == INT64(0)) {
      tmp_x0_chpl3 = INT64(0);
      tmp_x1_chpl3 = ((int64_t)(((uint64_t)((((uint64_t)(INT64(0))) - UINT64(1))))));
    } else {
      tmp_x0_chpl3 = INT64(0);
      tmp_x1_chpl3 = ((int64_t)((INT64(0) + ((int64_t)((coerce_tmp_chpl62 - INT64(1)))))));
    }
    _ic__F1_high_chpl3 = tmp_x1_chpl3;
    i_chpl3 = INT64(0);
    chpl_checkIfRangeIterWillOverflow(tmp_x0_chpl3, tmp_x1_chpl3, INT64(1), tmp_x0_chpl3, tmp_x1_chpl3, UINT8(true));
    this_chpl15 = _ic__F0_this_chpl3;
    chpl_check_nil((&this_chpl15)->addr, INT64(347), INT32(6));
    chpl_macro_tmp_533.locale = (&this_chpl15)->locale;
    chpl_macro_tmp_533.addr = &(((&this_chpl15)->addr)->errorsArray);
    chpl_gen_comm_get(((void*)(&tmp_chpl71)), chpl_nodeFromLocaleID((chpl_macro_tmp_533).locale, INT64(0), INT32(0)), (chpl_macro_tmp_533).addr, sizeof(c_ptr__owned_Error_chpl), COMMID(37), INT64(347), INT64(6));
    coerce_tmp_chpl63 = tmp_chpl71;
    for (i_chpl3 = tmp_x0_chpl3; ((i_chpl3 <= _ic__F1_high_chpl3)); i_chpl3 += INT64(1)) {
      call_tmp_chpl100 = (coerce_tmp_chpl63 + i_chpl3);
      coerce_tmp_chpl64 = borrow_chpl(call_tmp_chpl100);
      chpl_macro_tmp_534.locale = (&coerce_tmp_chpl64)->locale;
      chpl_macro_tmp_534.addr = ((object_chpl)((&coerce_tmp_chpl64)->addr));
      coerce_tmp_chpl65 = chpl_macro_tmp_534;
      chpl_macro_tmp_535.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_535.addr = nil;
      chpl_macro_tmp_536.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_536.addr = NULL;
      tmp_chpl72 = chpl_macro_tmp_536;
      if (((&coerce_tmp_chpl65)->addr != (&tmp_chpl72)->addr) || ((!(! (&coerce_tmp_chpl65)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl65)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl72)->locale, INT64(0), INT32(0))))) {
        this_chpl16 = _ic__F0_this_chpl3;
        chpl_check_nil((&this_chpl16)->addr, INT64(347), INT32(6));
        chpl_macro_tmp_537.locale = (&this_chpl16)->locale;
        chpl_macro_tmp_537.addr = &(((&this_chpl16)->addr)->errorsArray);
        chpl_gen_comm_get(((void*)(&tmp_chpl73)), chpl_nodeFromLocaleID((chpl_macro_tmp_537).locale, INT64(0), INT32(0)), (chpl_macro_tmp_537).addr, sizeof(c_ptr__owned_Error_chpl), COMMID(38), INT64(347), INT64(6));
        coerce_tmp_chpl66 = tmp_chpl73;
        call_tmp_chpl101 = (coerce_tmp_chpl66 + i_chpl3);
        coerce_tmp_chpl67 = (call_tmp_chpl101)->chpl_p;
        chpl_macro_tmp_538.locale = (&coerce_tmp_chpl67)->locale;
        chpl_macro_tmp_538.addr = ((object_chpl)((&coerce_tmp_chpl67)->addr));
        coerce_tmp_chpl68 = chpl_macro_tmp_538;
        chpl_macro_tmp_539.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_539.addr = nil;
        chpl_macro_tmp_540.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_540.addr = NULL;
        tmp_chpl74 = chpl_macro_tmp_540;
        if (! (((&coerce_tmp_chpl68)->addr != (&tmp_chpl74)->addr) || ((!(! (&coerce_tmp_chpl68)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl68)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl74)->locale, INT64(0), INT32(0)))))) {
          nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(348), INT32(6));
        }
        coerce_tmp_chpl69 = (call_tmp_chpl101)->chpl_p;
        e_chpl3 = coerce_tmp_chpl69;
        chpl_check_nil((&coerce_tmp_chpl69)->addr, INT64(349), INT32(6));
        tmp_chpl75 = &ret_tmp_chpl6;
        chpl_macro_tmp_541.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_541.addr = tmp_chpl75;
        tmp_chpl76 = chpl_macro_tmp_541;
        chpl_macro_tmp_542.locale = (&coerce_tmp_chpl69)->locale;
        chpl_macro_tmp_542.addr = &(((object_chpl)((&coerce_tmp_chpl69)->addr))->chpl__cid);
        chpl_gen_comm_get(((void*)(&chpl_macro_tmp_543)), chpl_nodeFromLocaleID((chpl_macro_tmp_542).locale, INT64(0), INT32(0)), (chpl_macro_tmp_542).addr, sizeof(int32_t), COMMID(39), INT64(349), INT64(6));
        ((void(*)(chpl____wide_Error,
           chpl____wide__ref_string))chpl_vmtable[((INT64(6) * chpl_macro_tmp_543) + INT64(1))])(coerce_tmp_chpl69, tmp_chpl76);
        call_tmp_chpl102 = ret_tmp_chpl6;
        call_tmp_chpl103 = chpl___EQUALS_3(&call_tmp_chpl102, &maxMsg_chpl);
        if (call_tmp_chpl103) {
          last_chpl = e_chpl3;
        }
        i_x_chpl6 = &call_tmp_chpl102;
        chpl_macro_tmp_544.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_544.addr = i_x_chpl6;
        tmp_chpl77 = chpl_macro_tmp_544;
        deinit_chpl42(tmp_chpl77);
      }
    }
  }
  chpl___COLON_16(n_chpl, &ret_tmp_chpl7);
  call_tmp_chpl104 = ret_tmp_chpl7;
  chpl_macro_tmp_545.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_545.addr = &local__str_literal_217_chpl;
  tmp_chpl78 = chpl_macro_tmp_545;
  chpl___PLUS_(&call_tmp_chpl104, tmp_chpl78, &ret_tmp_chpl8);
  call_tmp_chpl105 = ret_tmp_chpl8;
  ret_chpl17 = call_tmp_chpl105;
  chpl_macro_tmp_546.locale = (&first_chpl)->locale;
  chpl_macro_tmp_546.addr = ((object_chpl)((&first_chpl)->addr));
  coerce_tmp_chpl70 = chpl_macro_tmp_546;
  chpl_macro_tmp_547.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_547.addr = nil;
  chpl_macro_tmp_548.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_548.addr = NULL;
  tmp_chpl79 = chpl_macro_tmp_548;
  if (((&coerce_tmp_chpl70)->addr != (&tmp_chpl79)->addr) || ((!(! (&coerce_tmp_chpl70)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl70)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl79)->locale, INT64(0), INT32(0))))) {
    chpl_macro_tmp_549.locale = (&last_chpl)->locale;
    chpl_macro_tmp_549.addr = ((object_chpl)((&last_chpl)->addr));
    coerce_tmp_chpl71 = chpl_macro_tmp_549;
    chpl_macro_tmp_550.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_550.addr = nil;
    chpl_macro_tmp_551.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_551.addr = NULL;
    tmp_chpl81 = chpl_macro_tmp_551;
    tmp_chpl80 = (((&coerce_tmp_chpl71)->addr != (&tmp_chpl81)->addr) || ((!(! (&coerce_tmp_chpl71)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl71)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl81)->locale, INT64(0), INT32(0)))));
  } else {
    tmp_chpl80 = UINT8(false);
  }
  if (tmp_chpl80) {
    chpl_macro_tmp_552.locale = (&first_chpl)->locale;
    chpl_macro_tmp_552.addr = ((object_chpl)((&first_chpl)->addr));
    coerce_tmp_chpl72 = chpl_macro_tmp_552;
    chpl_macro_tmp_553.locale = (&last_chpl)->locale;
    chpl_macro_tmp_553.addr = ((object_chpl)((&last_chpl)->addr));
    coerce_tmp_chpl73 = chpl_macro_tmp_553;
    tmp_chpl82 = (((&coerce_tmp_chpl72)->addr != (&coerce_tmp_chpl73)->addr) || ((!(! (&coerce_tmp_chpl72)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl72)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&coerce_tmp_chpl73)->locale, INT64(0), INT32(0)))));
  } else {
    tmp_chpl82 = UINT8(false);
  }
  if (tmp_chpl82) {
    chpl_macro_tmp_554.locale = (&first_chpl)->locale;
    chpl_macro_tmp_554.addr = ((object_chpl)((&first_chpl)->addr));
    coerce_tmp_chpl74 = chpl_macro_tmp_554;
    chpl_macro_tmp_555.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_555.addr = nil;
    chpl_macro_tmp_556.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_556.addr = NULL;
    tmp_chpl83 = chpl_macro_tmp_556;
    if (! (((&coerce_tmp_chpl74)->addr != (&tmp_chpl83)->addr) || ((!(! (&coerce_tmp_chpl74)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl74)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl83)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(359), INT32(6));
    }
    chpl_describe_error(first_chpl, &ret_tmp_chpl9);
    call_tmp_chpl106 = ret_tmp_chpl9;
    chpl_macro_tmp_557.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_557.addr = &local__str_literal_218_chpl;
    tmp_chpl84 = chpl_macro_tmp_557;
    chpl___PLUS_(&call_tmp_chpl106, tmp_chpl84, &ret_tmp_chpl10);
    call_tmp_chpl107 = ret_tmp_chpl10;
    chpl_macro_tmp_558.locale = (&last_chpl)->locale;
    chpl_macro_tmp_558.addr = ((object_chpl)((&last_chpl)->addr));
    coerce_tmp_chpl75 = chpl_macro_tmp_558;
    chpl_macro_tmp_559.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_559.addr = nil;
    chpl_macro_tmp_560.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_560.addr = NULL;
    tmp_chpl85 = chpl_macro_tmp_560;
    if (! (((&coerce_tmp_chpl75)->addr != (&tmp_chpl85)->addr) || ((!(! (&coerce_tmp_chpl75)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl75)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl85)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(359), INT32(6));
    }
    chpl_describe_error(last_chpl, &ret_tmp_chpl11);
    call_tmp_chpl108 = ret_tmp_chpl11;
    chpl_macro_tmp_561.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_561.addr = &call_tmp_chpl108;
    tmp_chpl86 = chpl_macro_tmp_561;
    chpl___PLUS_(&call_tmp_chpl107, tmp_chpl86, &ret_tmp_chpl12);
    call_tmp_chpl109 = ret_tmp_chpl12;
    chpl___PLUS__ASSIGN_(&ret_chpl17, &call_tmp_chpl109);
    i_x_chpl7 = &call_tmp_chpl109;
    chpl_macro_tmp_562.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_562.addr = i_x_chpl7;
    tmp_chpl87 = chpl_macro_tmp_562;
    deinit_chpl42(tmp_chpl87);
    i_x_chpl8 = &call_tmp_chpl108;
    chpl_macro_tmp_563.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_563.addr = i_x_chpl8;
    tmp_chpl88 = chpl_macro_tmp_563;
    deinit_chpl42(tmp_chpl88);
    i_x_chpl9 = &call_tmp_chpl107;
    chpl_macro_tmp_564.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_564.addr = i_x_chpl9;
    tmp_chpl89 = chpl_macro_tmp_564;
    deinit_chpl42(tmp_chpl89);
    i_x_chpl10 = &call_tmp_chpl106;
    chpl_macro_tmp_565.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_565.addr = i_x_chpl10;
    tmp_chpl90 = chpl_macro_tmp_565;
    deinit_chpl42(tmp_chpl90);
  } else {
    chpl_macro_tmp_566.locale = (&first_chpl)->locale;
    chpl_macro_tmp_566.addr = ((object_chpl)((&first_chpl)->addr));
    coerce_tmp_chpl76 = chpl_macro_tmp_566;
    chpl_macro_tmp_567.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_567.addr = nil;
    chpl_macro_tmp_568.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_568.addr = NULL;
    tmp_chpl91 = chpl_macro_tmp_568;
    if (((&coerce_tmp_chpl76)->addr != (&tmp_chpl91)->addr) || ((!(! (&coerce_tmp_chpl76)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl76)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl91)->locale, INT64(0), INT32(0))))) {
      chpl_describe_error(first_chpl, &ret_tmp_chpl13);
      call_tmp_chpl110 = ret_tmp_chpl13;
      chpl___PLUS__ASSIGN_(&ret_chpl17, &call_tmp_chpl110);
      i_x_chpl11 = &call_tmp_chpl110;
      chpl_macro_tmp_569.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_569.addr = i_x_chpl11;
      tmp_chpl92 = chpl_macro_tmp_569;
      deinit_chpl42(tmp_chpl92);
    }
  }
  ret_chpl = ret_chpl17;
  i_x_chpl12 = &call_tmp_chpl104;
  chpl_macro_tmp_570.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_570.addr = i_x_chpl12;
  tmp_chpl93 = chpl_macro_tmp_570;
  deinit_chpl42(tmp_chpl93);
  i_x_chpl13 = &maxMsg_chpl;
  chpl_macro_tmp_571.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_571.addr = i_x_chpl13;
  tmp_chpl94 = chpl_macro_tmp_571;
  deinit_chpl42(tmp_chpl94);
  i_x_chpl14 = &minMsg_chpl;
  chpl_macro_tmp_572.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_572.addr = i_x_chpl14;
  tmp_chpl95 = chpl_macro_tmp_572;
  deinit_chpl42(tmp_chpl95);
  chpl_gen_comm_put(((void*)(&ret_chpl)), chpl_nodeFromLocaleID((_retArg_chpl).locale, INT64(0), INT32(0)), (_retArg_chpl).addr, sizeof(string_chpl), COMMID(40), INT64(318), INT64(6));
  return;
}

/* Errors.chpl:397 */
static void chpl_error_type_name(chpl____wide_Error err_chpl,
                                 string_chpl * _retArg_chpl) {
  c_string call_tmp_chpl36;
  string_chpl nameS_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl;
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl2;
  string_chpl call_tmp_chpl37;
  chpl____wide_Error error_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_tmp_chpl;
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  chpl____wide__ref_int32_t chpl_macro_tmp_573;
  int32_t chpl_macro_tmp_574;
  chpl____wide__nilType chpl_macro_tmp_575;
  chpl____wide_Error chpl_macro_tmp_576;
  chpl____wide__nilType chpl_macro_tmp_577;
  chpl____wide_Error chpl_macro_tmp_578;
  chpl____wide__nilType chpl_macro_tmp_579;
  chpl____wide_Error chpl_macro_tmp_580;
  chpl_check_nil((&err_chpl)->addr, INT64(398), INT32(6));
  chpl_macro_tmp_573.locale = (&err_chpl)->locale;
  chpl_macro_tmp_573.addr = &(((object_chpl)((&err_chpl)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_574)), chpl_nodeFromLocaleID((chpl_macro_tmp_573).locale, INT64(0), INT32(0)), (chpl_macro_tmp_573).addr, sizeof(int32_t), COMMID(41), INT64(399), INT64(6));
  call_tmp_chpl36 = chpl_classNames[chpl_macro_tmp_574];
  chpl_macro_tmp_575.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_575.addr = nil;
  chpl_macro_tmp_576.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_576.addr = NULL;
  error_chpl = chpl_macro_tmp_576;
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  chpl_macro_tmp_577.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_577.addr = nil;
  chpl_macro_tmp_578.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_578.addr = NULL;
  error_chpl2 = chpl_macro_tmp_578;
  chpl_macro_tmp_579.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_579.addr = nil;
  chpl_macro_tmp_580.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_580.addr = NULL;
  error_chpl3 = chpl_macro_tmp_580;
  tmp_chpl15 = &error_chpl3;
  decodeByteBuffer_chpl(((c_ptr_uint8_t_chpl)(call_tmp_chpl36)), string_length_bytes(call_tmp_chpl36), decodePolicy_chpl_strict_chpl, tmp_chpl15, &ret_tmp_chpl);
  call_tmp_chpl37 = ret_tmp_chpl;
  if ((&error_chpl3)->addr != nil) {
    error_chpl2 = error_chpl3;
    goto _endcreateStringWithNewBuffer_chpl;
  }
  ret_chpl2 = call_tmp_chpl37;
  _endcreateStringWithNewBuffer_chpl:;
  if ((&error_chpl2)->addr != nil) {
    error_chpl = error_chpl2;
    goto _endcreateStringWithNewBuffer_chpl2;
  }
  ret_chpl = ret_chpl2;
  _endcreateStringWithNewBuffer_chpl2:;
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  nameS_chpl = ret_chpl;
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, INT64(401), INT32(6));
  }
  *(_retArg_chpl) = nameS_chpl;
  return;
}

/* Errors.chpl:407 */
static void chpl_describe_error(chpl____wide_Error err_chpl,
                                string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_222_chpl;
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  string_chpl nameS_chpl;
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl2;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl38;
  string_chpl ret_tmp_chpl3;
  _ref_string_chpl tmp_chpl16 = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl39;
  string_chpl ret_tmp_chpl4;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_581;
  chpl____wide__ref_string chpl_macro_tmp_582;
  chpl____wide__ref_int32_t chpl_macro_tmp_583;
  int32_t chpl_macro_tmp_584;
  chpl____wide__ref_string chpl_macro_tmp_585;
  chpl____wide__ref_string chpl_macro_tmp_586;
  chpl____wide__ref_string chpl_macro_tmp_587;
  chpl____wide__ref_string chpl_macro_tmp_588;
  local__str_literal_222_chpl = _str_literal_222_chpl /* ": " */;
  chpl_error_type_name(err_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  nameS_chpl = call_tmp_chpl36;
  chpl_macro_tmp_581.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_581.addr = &local__str_literal_222_chpl;
  tmp_chpl15 = chpl_macro_tmp_581;
  chpl___PLUS_(&nameS_chpl, tmp_chpl15, &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  chpl_check_nil((&err_chpl)->addr, INT64(410), INT32(6));
  tmp_chpl16 = &ret_tmp_chpl3;
  chpl_macro_tmp_582.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_582.addr = tmp_chpl16;
  tmp_chpl17 = chpl_macro_tmp_582;
  chpl_macro_tmp_583.locale = (&err_chpl)->locale;
  chpl_macro_tmp_583.addr = &(((object_chpl)((&err_chpl)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_584)), chpl_nodeFromLocaleID((chpl_macro_tmp_583).locale, INT64(0), INT32(0)), (chpl_macro_tmp_583).addr, sizeof(int32_t), COMMID(42), INT64(410), INT64(6));
  ((void(*)(chpl____wide_Error,
     chpl____wide__ref_string))chpl_vmtable[((INT64(6) * chpl_macro_tmp_584) + INT64(1))])(err_chpl, tmp_chpl17);
  call_tmp_chpl38 = ret_tmp_chpl3;
  chpl_macro_tmp_585.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_585.addr = &call_tmp_chpl38;
  tmp_chpl18 = chpl_macro_tmp_585;
  chpl___PLUS_(&call_tmp_chpl37, tmp_chpl18, &ret_tmp_chpl4);
  call_tmp_chpl39 = ret_tmp_chpl4;
  i_x_chpl = &call_tmp_chpl38;
  chpl_macro_tmp_586.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_586.addr = i_x_chpl;
  tmp_chpl19 = chpl_macro_tmp_586;
  deinit_chpl42(tmp_chpl19);
  i_x_chpl2 = &call_tmp_chpl37;
  chpl_macro_tmp_587.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_587.addr = i_x_chpl2;
  tmp_chpl20 = chpl_macro_tmp_587;
  deinit_chpl42(tmp_chpl20);
  i_x_chpl3 = &nameS_chpl;
  chpl_macro_tmp_588.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_588.addr = i_x_chpl3;
  tmp_chpl21 = chpl_macro_tmp_588;
  deinit_chpl42(tmp_chpl21);
  *(_retArg_chpl) = call_tmp_chpl39;
  return;
}

/* Errors.chpl:418 */
static chpl____wide_Error chpl_do_fix_thrown_error(chpl____wide_Error err_chpl,
                                                   int64_t _ln_chpl,
                                                   int32_t _fn_chpl) {
  string_chpl local__str_literal_75_chpl;
  chpl____wide_Error fixErr_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  NilThrownError_chpl new_temp_chpl = NULL;
  int64_t call_tmp_chpl36;
  int32_t call_tmp_chpl37;
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl17;
  chpl____wide_object coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error coerce_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error coerce_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error coerce_tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object chpl_macro_tmp_589;
  chpl____wide__nilType chpl_macro_tmp_590;
  chpl____wide_object chpl_macro_tmp_591;
  chpl____wide_Error chpl_macro_tmp_592;
  chpl____wide_object chpl_macro_tmp_593;
  chpl____wide__nilType chpl_macro_tmp_594;
  chpl____wide_object chpl_macro_tmp_595;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_596;
  chpl____wide_object chpl_macro_tmp_597;
  chpl____wide__nilType chpl_macro_tmp_598;
  chpl____wide_object chpl_macro_tmp_599;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_600;
  chpl_bool chpl_macro_tmp_601;
  chpl____wide_object chpl_macro_tmp_602;
  chpl____wide__nilType chpl_macro_tmp_603;
  chpl____wide_object chpl_macro_tmp_604;
  chpl____wide__ref_int64_t chpl_macro_tmp_605;
  chpl____wide_object chpl_macro_tmp_606;
  chpl____wide__nilType chpl_macro_tmp_607;
  chpl____wide_object chpl_macro_tmp_608;
  chpl____wide__ref_int32_t chpl_macro_tmp_609;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  fixErr_chpl = err_chpl;
  chpl_macro_tmp_589.locale = (&err_chpl)->locale;
  chpl_macro_tmp_589.addr = ((object_chpl)((&err_chpl)->addr));
  coerce_tmp_chpl3 = chpl_macro_tmp_589;
  chpl_macro_tmp_590.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_590.addr = nil;
  chpl_macro_tmp_591.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_591.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_591;
  if (! (((&coerce_tmp_chpl3)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl3)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl3)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0)))))) {
    new_temp_chpl = _new_chpl12(_ln_chpl, _fn_chpl);
    chpl_macro_tmp_592.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_592.addr = ((Error_chpl)(new_temp_chpl));
    fixErr_chpl = chpl_macro_tmp_592;
  }
  call_tmp_chpl36 = _ln_chpl;
  call_tmp_chpl37 = _fn_chpl;
  chpl_macro_tmp_593.locale = (&fixErr_chpl)->locale;
  chpl_macro_tmp_593.addr = ((object_chpl)((&fixErr_chpl)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_593;
  chpl_macro_tmp_594.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_594.addr = nil;
  chpl_macro_tmp_595.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_595.addr = NULL;
  tmp_chpl16 = chpl_macro_tmp_595;
  if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl16)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl16)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, _ln_chpl, _fn_chpl);
  }
  coerce_tmp_chpl5 = fixErr_chpl;
  chpl_check_nil((&coerce_tmp_chpl5)->addr, _ln_chpl, _fn_chpl);
  chpl_macro_tmp_596.locale = (&coerce_tmp_chpl5)->locale;
  chpl_macro_tmp_596.addr = &(((&coerce_tmp_chpl5)->addr)->_hasThrowInfo);
  chpl_gen_comm_get(((void*)(&tmp_chpl17)), chpl_nodeFromLocaleID((chpl_macro_tmp_596).locale, INT64(0), INT32(0)), (chpl_macro_tmp_596).addr, sizeof(chpl_bool), COMMID(43), INT64(431), INT64(6));
  if (! tmp_chpl17) {
    chpl_macro_tmp_597.locale = (&fixErr_chpl)->locale;
    chpl_macro_tmp_597.addr = ((object_chpl)((&fixErr_chpl)->addr));
    coerce_tmp_chpl6 = chpl_macro_tmp_597;
    chpl_macro_tmp_598.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_598.addr = nil;
    chpl_macro_tmp_599.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_599.addr = NULL;
    tmp_chpl18 = chpl_macro_tmp_599;
    if (! (((&coerce_tmp_chpl6)->addr != (&tmp_chpl18)->addr) || ((!(! (&coerce_tmp_chpl6)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl6)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl18)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, _ln_chpl, _fn_chpl);
    }
    coerce_tmp_chpl7 = fixErr_chpl;
    chpl_check_nil((&coerce_tmp_chpl7)->addr, _ln_chpl, _fn_chpl);
    chpl_macro_tmp_600.locale = (&coerce_tmp_chpl7)->locale;
    chpl_macro_tmp_600.addr = &(((&coerce_tmp_chpl7)->addr)->_hasThrowInfo);
    chpl_macro_tmp_601 = UINT8(true);
    chpl_gen_comm_put(((void*)(&chpl_macro_tmp_601)), chpl_nodeFromLocaleID((chpl_macro_tmp_600).locale, INT64(0), INT32(0)), (chpl_macro_tmp_600).addr, sizeof(chpl_bool), COMMID(44), INT64(432), INT64(6));
    chpl_macro_tmp_602.locale = (&fixErr_chpl)->locale;
    chpl_macro_tmp_602.addr = ((object_chpl)((&fixErr_chpl)->addr));
    coerce_tmp_chpl8 = chpl_macro_tmp_602;
    chpl_macro_tmp_603.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_603.addr = nil;
    chpl_macro_tmp_604.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_604.addr = NULL;
    tmp_chpl19 = chpl_macro_tmp_604;
    if (! (((&coerce_tmp_chpl8)->addr != (&tmp_chpl19)->addr) || ((!(! (&coerce_tmp_chpl8)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl8)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl19)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, _ln_chpl, _fn_chpl);
    }
    coerce_tmp_chpl9 = fixErr_chpl;
    chpl_check_nil((&coerce_tmp_chpl9)->addr, _ln_chpl, _fn_chpl);
    chpl_macro_tmp_605.locale = (&coerce_tmp_chpl9)->locale;
    chpl_macro_tmp_605.addr = &(((&coerce_tmp_chpl9)->addr)->thrownLine);
    chpl_gen_comm_put(((void*)(&call_tmp_chpl36)), chpl_nodeFromLocaleID((chpl_macro_tmp_605).locale, INT64(0), INT32(0)), (chpl_macro_tmp_605).addr, sizeof(int64_t), COMMID(45), INT64(433), INT64(6));
    chpl_macro_tmp_606.locale = (&fixErr_chpl)->locale;
    chpl_macro_tmp_606.addr = ((object_chpl)((&fixErr_chpl)->addr));
    coerce_tmp_chpl10 = chpl_macro_tmp_606;
    chpl_macro_tmp_607.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_607.addr = nil;
    chpl_macro_tmp_608.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_608.addr = NULL;
    tmp_chpl20 = chpl_macro_tmp_608;
    if (! (((&coerce_tmp_chpl10)->addr != (&tmp_chpl20)->addr) || ((!(! (&coerce_tmp_chpl10)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl10)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl20)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, _ln_chpl, _fn_chpl);
    }
    coerce_tmp_chpl11 = fixErr_chpl;
    chpl_check_nil((&coerce_tmp_chpl11)->addr, _ln_chpl, _fn_chpl);
    chpl_macro_tmp_609.locale = (&coerce_tmp_chpl11)->locale;
    chpl_macro_tmp_609.addr = &(((&coerce_tmp_chpl11)->addr)->thrownFileId);
    chpl_gen_comm_put(((void*)(&call_tmp_chpl37)), chpl_nodeFromLocaleID((chpl_macro_tmp_609).locale, INT64(0), INT32(0)), (chpl_macro_tmp_609).addr, sizeof(int32_t), COMMID(46), INT64(434), INT64(6));
  }
  return fixErr_chpl;
}

/* Errors.chpl:453 */
static chpl____wide_Error chpl_fix_thrown_error(_owned_Error_chpl2 * err_chpl,
                                                int64_t _ln_chpl,
                                                int32_t _fn_chpl) {
  _owned_Error_chpl2 _formal_tmp_err_chpl;
  chpl____wide_Error call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error call_tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  _formal_tmp_err_chpl = *(err_chpl);
  call_tmp_chpl36 = release_chpl18(&_formal_tmp_err_chpl);
  call_tmp_chpl37 = chpl_do_fix_thrown_error(call_tmp_chpl36, _ln_chpl, _fn_chpl);
  chpl__autoDestroy19(&_formal_tmp_err_chpl);
  return call_tmp_chpl37;
}

/* Errors.chpl:488 */
static void chpl_delete_error(Error_chpl err_chpl) {
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_610;
  if (((object_chpl)(err_chpl)) != nil) {
    chpl_macro_tmp_610.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_610.addr = err_chpl;
    tmp_chpl15 = chpl_macro_tmp_610;
    chpl__delete4(tmp_chpl15);
  }
  return;
}

/* Errors.chpl:495 */
static void chpl_uncaught_error(chpl____wide_Error err_chpl,
                                int64_t _ln_chpl,
                                int32_t _fn_chpl) {
  string_chpl local__str_literal_3282_chpl;
  string_chpl local__str_literal_238_chpl;
  string_chpl local__str_literal_237_chpl;
  string_chpl local__str_literal_236_chpl;
  string_chpl local__str_literal_235_chpl;
  string_chpl local__str_literal_234_chpl;
  c_string call_tmp_chpl36;
  string_chpl myFileS_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl;
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl2;
  string_chpl call_tmp_chpl37;
  chpl____wide_Error error_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_tmp_chpl;
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  int64_t call_tmp_chpl38;
  chpl____wide_Error coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int32_t call_tmp_chpl39 = {CHPL_LOCALEID_T_INIT, NULL};
  c_string call_tmp_chpl40;
  string_chpl thrownFileS_chpl;
  chpl____wide_Error error_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl3;
  chpl____wide_Error error_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl4;
  string_chpl call_tmp_chpl41;
  chpl____wide_Error error_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_tmp_chpl2;
  _ref__wide_Error_chpl tmp_chpl16 = NULL;
  chpl____wide_Error coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t coerce_tmp_chpl5;
  int64_t tmp_chpl17;
  string_chpl call_tmp_chpl42;
  string_chpl ret_tmp_chpl3;
  string_chpl call_tmp_chpl43;
  string_chpl ret_tmp_chpl4;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl44;
  string_chpl ret_tmp_chpl5;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl45;
  string_chpl ret_tmp_chpl6;
  chpl____wide__ref_string tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl46;
  string_chpl ret_tmp_chpl7;
  chpl____wide__ref_string tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl47;
  string_chpl ret_tmp_chpl8;
  string_chpl call_tmp_chpl48;
  string_chpl ret_tmp_chpl9;
  chpl____wide__ref_string tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl49;
  string_chpl ret_tmp_chpl10;
  chpl____wide__ref_string tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl50;
  string_chpl ret_tmp_chpl11;
  chpl____wide__ref_string tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl51;
  string_chpl ret_tmp_chpl12;
  chpl____wide__ref_string tmp_chpl25 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl52;
  string_chpl ret_tmp_chpl13;
  chpl____wide__ref_string tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl53;
  string_chpl ret_tmp_chpl14;
  string_chpl call_tmp_chpl54;
  string_chpl ret_tmp_chpl15;
  chpl____wide__ref_string tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl55;
  string_chpl ret_tmp_chpl16;
  chpl____wide__ref_string tmp_chpl28 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl s_chpl;
  int32_t call_tmp_chpl56;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl29 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl30 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl31 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl32 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl5 = NULL;
  chpl____wide__ref_string tmp_chpl33 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl6 = NULL;
  chpl____wide__ref_string tmp_chpl34 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl7 = NULL;
  chpl____wide__ref_string tmp_chpl35 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl8 = NULL;
  chpl____wide__ref_string tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl9 = NULL;
  chpl____wide__ref_string tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl10 = NULL;
  chpl____wide__ref_string tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl11 = NULL;
  chpl____wide__ref_string tmp_chpl39 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl12 = NULL;
  chpl____wide__ref_string tmp_chpl40 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl13 = NULL;
  chpl____wide__ref_string tmp_chpl41 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl14 = NULL;
  chpl____wide__ref_string tmp_chpl42 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl15 = NULL;
  chpl____wide__ref_string tmp_chpl43 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl16 = NULL;
  chpl____wide__ref_string tmp_chpl44 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__nilType chpl_macro_tmp_611;
  chpl____wide_Error chpl_macro_tmp_612;
  chpl____wide__nilType chpl_macro_tmp_613;
  chpl____wide_Error chpl_macro_tmp_614;
  chpl____wide__nilType chpl_macro_tmp_615;
  chpl____wide_Error chpl_macro_tmp_616;
  chpl____wide__ref_int32_t chpl_macro_tmp_617;
  chpl____wide__nilType chpl_macro_tmp_618;
  chpl____wide_Error chpl_macro_tmp_619;
  chpl____wide__nilType chpl_macro_tmp_620;
  chpl____wide_Error chpl_macro_tmp_621;
  chpl____wide__nilType chpl_macro_tmp_622;
  chpl____wide_Error chpl_macro_tmp_623;
  chpl____wide__ref_int64_t chpl_macro_tmp_624;
  chpl____wide__ref_string chpl_macro_tmp_625;
  chpl____wide__ref_string chpl_macro_tmp_626;
  chpl____wide__ref_string chpl_macro_tmp_627;
  chpl____wide__ref_string chpl_macro_tmp_628;
  chpl____wide__ref_string chpl_macro_tmp_629;
  chpl____wide__ref_string chpl_macro_tmp_630;
  chpl____wide__ref_string chpl_macro_tmp_631;
  chpl____wide__ref_string chpl_macro_tmp_632;
  chpl____wide__ref_string chpl_macro_tmp_633;
  chpl____wide__ref_string chpl_macro_tmp_634;
  chpl____wide__ref_string chpl_macro_tmp_635;
  chpl____wide__ref_string chpl_macro_tmp_636;
  chpl____wide__ref_string chpl_macro_tmp_637;
  chpl____wide__ref_string chpl_macro_tmp_638;
  chpl____wide__ref_string chpl_macro_tmp_639;
  chpl____wide__ref_string chpl_macro_tmp_640;
  chpl____wide__ref_string chpl_macro_tmp_641;
  chpl____wide__ref_string chpl_macro_tmp_642;
  chpl____wide__ref_string chpl_macro_tmp_643;
  chpl____wide__ref_string chpl_macro_tmp_644;
  chpl____wide__ref_string chpl_macro_tmp_645;
  chpl____wide__ref_string chpl_macro_tmp_646;
  chpl____wide__ref_string chpl_macro_tmp_647;
  chpl____wide__ref_string chpl_macro_tmp_648;
  chpl____wide__ref_string chpl_macro_tmp_649;
  chpl____wide__ref_string chpl_macro_tmp_650;
  chpl____wide__ref_string chpl_macro_tmp_651;
  local__str_literal_3282_chpl = _str_literal_3282_chpl /* "Cannot call .c_str() on a remote string" */;
  local__str_literal_238_chpl = _str_literal_238_chpl /* ": uncaught here" */;
  local__str_literal_237_chpl = _str_literal_237_chpl /* ": thrown here" */;
  local__str_literal_236_chpl = _str_literal_236_chpl /* ":" */;
  local__str_literal_235_chpl = _str_literal_235_chpl /* "\n  " */;
  local__str_literal_234_chpl = _str_literal_234_chpl /* "uncaught " */;
  call_tmp_chpl36 = chpl_lookupFilename(_fn_chpl);
  chpl_macro_tmp_611.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_611.addr = nil;
  chpl_macro_tmp_612.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_612.addr = NULL;
  error_chpl = chpl_macro_tmp_612;
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  chpl_macro_tmp_613.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_613.addr = nil;
  chpl_macro_tmp_614.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_614.addr = NULL;
  error_chpl2 = chpl_macro_tmp_614;
  chpl_macro_tmp_615.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_615.addr = nil;
  chpl_macro_tmp_616.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_616.addr = NULL;
  error_chpl3 = chpl_macro_tmp_616;
  tmp_chpl15 = &error_chpl3;
  decodeByteBuffer_chpl(((c_ptr_uint8_t_chpl)(call_tmp_chpl36)), string_length_bytes(call_tmp_chpl36), decodePolicy_chpl_strict_chpl, tmp_chpl15, &ret_tmp_chpl);
  call_tmp_chpl37 = ret_tmp_chpl;
  if ((&error_chpl3)->addr != nil) {
    error_chpl2 = error_chpl3;
    goto _endcreateStringWithNewBuffer_chpl;
  }
  ret_chpl2 = call_tmp_chpl37;
  _endcreateStringWithNewBuffer_chpl:;
  if ((&error_chpl2)->addr != nil) {
    error_chpl = error_chpl2;
    goto _endcreateStringWithNewBuffer_chpl2;
  }
  ret_chpl = ret_chpl2;
  _endcreateStringWithNewBuffer_chpl2:;
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  myFileS_chpl = ret_chpl;
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, _ln_chpl, _fn_chpl);
  }
  call_tmp_chpl38 = _ln_chpl;
  coerce_tmp_chpl3 = err_chpl;
  chpl_check_nil((&coerce_tmp_chpl3)->addr, _ln_chpl, _fn_chpl);
  chpl_macro_tmp_617.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_617.addr = &(((&coerce_tmp_chpl3)->addr)->thrownFileId);
  call_tmp_chpl39 = chpl_macro_tmp_617;
  call_tmp_chpl40 = chpl_lookupFilename(*((&call_tmp_chpl39)->addr));
  chpl_macro_tmp_618.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_618.addr = nil;
  chpl_macro_tmp_619.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_619.addr = NULL;
  error_chpl4 = chpl_macro_tmp_619;
  if ((&error_chpl4)->addr != nil) {
    goto handler_chpl2;
  }
  chpl_macro_tmp_620.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_620.addr = nil;
  chpl_macro_tmp_621.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_621.addr = NULL;
  error_chpl5 = chpl_macro_tmp_621;
  chpl_macro_tmp_622.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_622.addr = nil;
  chpl_macro_tmp_623.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_623.addr = NULL;
  error_chpl6 = chpl_macro_tmp_623;
  tmp_chpl16 = &error_chpl6;
  decodeByteBuffer_chpl(((c_ptr_uint8_t_chpl)(call_tmp_chpl40)), string_length_bytes(call_tmp_chpl40), decodePolicy_chpl_strict_chpl, tmp_chpl16, &ret_tmp_chpl2);
  call_tmp_chpl41 = ret_tmp_chpl2;
  if ((&error_chpl6)->addr != nil) {
    error_chpl5 = error_chpl6;
    goto _endcreateStringWithNewBuffer_chpl3;
  }
  ret_chpl4 = call_tmp_chpl41;
  _endcreateStringWithNewBuffer_chpl3:;
  if ((&error_chpl5)->addr != nil) {
    error_chpl4 = error_chpl5;
    goto _endcreateStringWithNewBuffer_chpl4;
  }
  ret_chpl3 = ret_chpl4;
  _endcreateStringWithNewBuffer_chpl4:;
  if ((&error_chpl4)->addr != nil) {
    goto handler_chpl2;
  }
  thrownFileS_chpl = ret_chpl3;
  handler_chpl2:;
  if ((&error_chpl4)->addr != nil) {
    chpl_uncaught_error(error_chpl4, _ln_chpl, _fn_chpl);
  }
  coerce_tmp_chpl4 = err_chpl;
  chpl_check_nil((&coerce_tmp_chpl4)->addr, _ln_chpl, _fn_chpl);
  chpl_macro_tmp_624.locale = (&coerce_tmp_chpl4)->locale;
  chpl_macro_tmp_624.addr = &(((&coerce_tmp_chpl4)->addr)->thrownLine);
  chpl_gen_comm_get(((void*)(&tmp_chpl17)), chpl_nodeFromLocaleID((chpl_macro_tmp_624).locale, INT64(0), INT32(0)), (chpl_macro_tmp_624).addr, sizeof(int64_t), COMMID(47), INT64(512), INT64(6));
  coerce_tmp_chpl5 = tmp_chpl17;
  chpl_describe_error(err_chpl, &ret_tmp_chpl3);
  call_tmp_chpl42 = ret_tmp_chpl3;
  chpl_macro_tmp_625.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_625.addr = &call_tmp_chpl42;
  tmp_chpl18 = chpl_macro_tmp_625;
  chpl___PLUS_(&local__str_literal_234_chpl, tmp_chpl18, &ret_tmp_chpl4);
  call_tmp_chpl43 = ret_tmp_chpl4;
  chpl_macro_tmp_626.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_626.addr = &local__str_literal_235_chpl;
  tmp_chpl19 = chpl_macro_tmp_626;
  chpl___PLUS_(&call_tmp_chpl43, tmp_chpl19, &ret_tmp_chpl5);
  call_tmp_chpl44 = ret_tmp_chpl5;
  chpl_macro_tmp_627.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_627.addr = &thrownFileS_chpl;
  tmp_chpl20 = chpl_macro_tmp_627;
  chpl___PLUS_(&call_tmp_chpl44, tmp_chpl20, &ret_tmp_chpl6);
  call_tmp_chpl45 = ret_tmp_chpl6;
  chpl_macro_tmp_628.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_628.addr = &local__str_literal_236_chpl;
  tmp_chpl21 = chpl_macro_tmp_628;
  chpl___PLUS_(&call_tmp_chpl45, tmp_chpl21, &ret_tmp_chpl7);
  call_tmp_chpl46 = ret_tmp_chpl7;
  chpl___COLON_16(coerce_tmp_chpl5, &ret_tmp_chpl8);
  call_tmp_chpl47 = ret_tmp_chpl8;
  chpl_macro_tmp_629.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_629.addr = &call_tmp_chpl47;
  tmp_chpl22 = chpl_macro_tmp_629;
  chpl___PLUS_(&call_tmp_chpl46, tmp_chpl22, &ret_tmp_chpl9);
  call_tmp_chpl48 = ret_tmp_chpl9;
  chpl_macro_tmp_630.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_630.addr = &local__str_literal_237_chpl;
  tmp_chpl23 = chpl_macro_tmp_630;
  chpl___PLUS_(&call_tmp_chpl48, tmp_chpl23, &ret_tmp_chpl10);
  call_tmp_chpl49 = ret_tmp_chpl10;
  chpl_macro_tmp_631.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_631.addr = &local__str_literal_235_chpl;
  tmp_chpl24 = chpl_macro_tmp_631;
  chpl___PLUS_(&call_tmp_chpl49, tmp_chpl24, &ret_tmp_chpl11);
  call_tmp_chpl50 = ret_tmp_chpl11;
  chpl_macro_tmp_632.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_632.addr = &myFileS_chpl;
  tmp_chpl25 = chpl_macro_tmp_632;
  chpl___PLUS_(&call_tmp_chpl50, tmp_chpl25, &ret_tmp_chpl12);
  call_tmp_chpl51 = ret_tmp_chpl12;
  chpl_macro_tmp_633.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_633.addr = &local__str_literal_236_chpl;
  tmp_chpl26 = chpl_macro_tmp_633;
  chpl___PLUS_(&call_tmp_chpl51, tmp_chpl26, &ret_tmp_chpl13);
  call_tmp_chpl52 = ret_tmp_chpl13;
  chpl___COLON_16(call_tmp_chpl38, &ret_tmp_chpl14);
  call_tmp_chpl53 = ret_tmp_chpl14;
  chpl_macro_tmp_634.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_634.addr = &call_tmp_chpl53;
  tmp_chpl27 = chpl_macro_tmp_634;
  chpl___PLUS_(&call_tmp_chpl52, tmp_chpl27, &ret_tmp_chpl15);
  call_tmp_chpl54 = ret_tmp_chpl15;
  chpl_macro_tmp_635.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_635.addr = &local__str_literal_238_chpl;
  tmp_chpl28 = chpl_macro_tmp_635;
  chpl___PLUS_(&call_tmp_chpl54, tmp_chpl28, &ret_tmp_chpl16);
  call_tmp_chpl55 = ret_tmp_chpl16;
  s_chpl = call_tmp_chpl55;
  call_tmp_chpl56 = get_chpl_nodeID();
  if ((&s_chpl)->locale_id != call_tmp_chpl56) {
    halt_chpl(&local__str_literal_3282_chpl, _ln_chpl, _fn_chpl);
  }
  chpl_error_preformatted(((c_string)((&s_chpl)->buff)));
  i_x_chpl = &s_chpl;
  chpl_macro_tmp_636.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_636.addr = i_x_chpl;
  tmp_chpl29 = chpl_macro_tmp_636;
  deinit_chpl42(tmp_chpl29);
  i_x_chpl2 = &call_tmp_chpl54;
  chpl_macro_tmp_637.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_637.addr = i_x_chpl2;
  tmp_chpl30 = chpl_macro_tmp_637;
  deinit_chpl42(tmp_chpl30);
  i_x_chpl3 = &call_tmp_chpl53;
  chpl_macro_tmp_638.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_638.addr = i_x_chpl3;
  tmp_chpl31 = chpl_macro_tmp_638;
  deinit_chpl42(tmp_chpl31);
  i_x_chpl4 = &call_tmp_chpl52;
  chpl_macro_tmp_639.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_639.addr = i_x_chpl4;
  tmp_chpl32 = chpl_macro_tmp_639;
  deinit_chpl42(tmp_chpl32);
  i_x_chpl5 = &call_tmp_chpl51;
  chpl_macro_tmp_640.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_640.addr = i_x_chpl5;
  tmp_chpl33 = chpl_macro_tmp_640;
  deinit_chpl42(tmp_chpl33);
  i_x_chpl6 = &call_tmp_chpl50;
  chpl_macro_tmp_641.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_641.addr = i_x_chpl6;
  tmp_chpl34 = chpl_macro_tmp_641;
  deinit_chpl42(tmp_chpl34);
  i_x_chpl7 = &call_tmp_chpl49;
  chpl_macro_tmp_642.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_642.addr = i_x_chpl7;
  tmp_chpl35 = chpl_macro_tmp_642;
  deinit_chpl42(tmp_chpl35);
  i_x_chpl8 = &call_tmp_chpl48;
  chpl_macro_tmp_643.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_643.addr = i_x_chpl8;
  tmp_chpl36 = chpl_macro_tmp_643;
  deinit_chpl42(tmp_chpl36);
  i_x_chpl9 = &call_tmp_chpl47;
  chpl_macro_tmp_644.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_644.addr = i_x_chpl9;
  tmp_chpl37 = chpl_macro_tmp_644;
  deinit_chpl42(tmp_chpl37);
  i_x_chpl10 = &call_tmp_chpl46;
  chpl_macro_tmp_645.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_645.addr = i_x_chpl10;
  tmp_chpl38 = chpl_macro_tmp_645;
  deinit_chpl42(tmp_chpl38);
  i_x_chpl11 = &call_tmp_chpl45;
  chpl_macro_tmp_646.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_646.addr = i_x_chpl11;
  tmp_chpl39 = chpl_macro_tmp_646;
  deinit_chpl42(tmp_chpl39);
  i_x_chpl12 = &call_tmp_chpl44;
  chpl_macro_tmp_647.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_647.addr = i_x_chpl12;
  tmp_chpl40 = chpl_macro_tmp_647;
  deinit_chpl42(tmp_chpl40);
  i_x_chpl13 = &call_tmp_chpl43;
  chpl_macro_tmp_648.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_648.addr = i_x_chpl13;
  tmp_chpl41 = chpl_macro_tmp_648;
  deinit_chpl42(tmp_chpl41);
  i_x_chpl14 = &call_tmp_chpl42;
  chpl_macro_tmp_649.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_649.addr = i_x_chpl14;
  tmp_chpl42 = chpl_macro_tmp_649;
  deinit_chpl42(tmp_chpl42);
  i_x_chpl15 = &thrownFileS_chpl;
  chpl_macro_tmp_650.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_650.addr = i_x_chpl15;
  tmp_chpl43 = chpl_macro_tmp_650;
  deinit_chpl42(tmp_chpl43);
  i_x_chpl16 = &myFileS_chpl;
  chpl_macro_tmp_651.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_651.addr = i_x_chpl16;
  tmp_chpl44 = chpl_macro_tmp_651;
  deinit_chpl42(tmp_chpl44);
  return;
}

/* Errors.chpl:525 */
static void chpl_propagate_error(chpl____wide_Error err_chpl,
                                 int64_t _ln_chpl,
                                 int32_t _fn_chpl) {
  chpl_uncaught_error(err_chpl, _ln_chpl, _fn_chpl);
  return;
}

/* Errors.chpl:533 */
static Error_chpl chpl_forall_error(Error_chpl err_chpl) {
  Error_chpl ret_chpl = NULL;
  TaskErrors_chpl _formal_type_tmp__chpl = NULL;
  TaskErrors_chpl ret_chpl2 = NULL;
  TaskErrors_chpl new_temp_chpl = NULL;
  int32_t chpl_macro_tmp_652;
  if (((object_chpl)(err_chpl)) == nil) {
    ret_chpl2 = ((TaskErrors_chpl)(nil));
    goto _end__COLON__chpl;
  }
  chpl_macro_tmp_652 = ((object_chpl)(err_chpl))->chpl__cid;
  ret_chpl2 = ( (((chpl__cid_TaskErrors_chpl <= chpl_macro_tmp_652) && (chpl_macro_tmp_652 <= chpl_subclass_max_id[chpl__cid_TaskErrors_chpl])))?(((TaskErrors_chpl)(err_chpl))):(((TaskErrors_chpl)(NULL))) );
  _end__COLON__chpl:;
  if (((object_chpl)(ret_chpl2)) != nil) {
    ret_chpl = err_chpl;
    goto _end_chpl_forall_error_chpl;
  }
  new_temp_chpl = _new_chpl18(err_chpl, INT64(537), INT32(6));
  ret_chpl = ((Error_chpl)(new_temp_chpl));
  _end_chpl_forall_error_chpl:;
  return ret_chpl;
}

/* Errors.chpl:555 */
static void chpl_enum_cast_error(uint8_t casted_chpl,
                                 string_chpl * enumName_chpl,
                                 chpl____wide_Error * error_out_chpl,
                                 int64_t _ln_chpl,
                                 int32_t _fn_chpl) {
  string_chpl local__str_literal_75_chpl;
  string_chpl local__str_literal_242_chpl;
  string_chpl local__str_literal_244_chpl;
  string_chpl local__str_literal_245_chpl;
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl2;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl38;
  string_chpl ret_tmp_chpl3;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl39;
  string_chpl ret_tmp_chpl4;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_IllegalArgumentError_chpl call_tmp_chpl40;
  IllegalArgumentError_chpl new_temp_chpl = NULL;
  _owned_IllegalArgumentError_chpl initTemp_chpl;
  chpl____wide_Error call_tmp_chpl41 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 coerce_tmp_chpl3;
  _owned_Error_chpl2 ret_tmp_chpl5;
  _ref__owned_IllegalArgumentError_chpl i_x_chpl = NULL;
  _ref__owned_Error_chpl2 i__retArg_chpl = NULL;
  _owned_IllegalArgumentError_chpl _formal_tmp_x_chpl;
  _owned_Error_chpl2 ret_chpl;
  _ref__owned_IllegalArgumentError_chpl i_this_chpl = NULL;
  Error_chpl call_tmp_chpl42 = NULL;
  _ref__owned_IllegalArgumentError_chpl i_this_chpl2 = NULL;
  _owned_Error_chpl2 call_tmp_chpl43;
  _owned_Error_chpl2 initTemp_chpl2;
  chpl____wide_Error tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 _formal_tmp_in_err_chpl;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl5 = NULL;
  chpl____wide__ref_string tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_653;
  chpl____wide__ref_string chpl_macro_tmp_654;
  chpl____wide__ref_string chpl_macro_tmp_655;
  chpl____wide_Error chpl_macro_tmp_656;
  chpl____wide__ref_string chpl_macro_tmp_657;
  chpl____wide__ref_string chpl_macro_tmp_658;
  chpl____wide__ref_string chpl_macro_tmp_659;
  chpl____wide__ref_string chpl_macro_tmp_660;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  local__str_literal_242_chpl = _str_literal_242_chpl /* "'" */;
  local__str_literal_244_chpl = _str_literal_244_chpl /* "' to enum '" */;
  local__str_literal_245_chpl = _str_literal_245_chpl /* "bad cast from int '" */;
  chpl___COLON_15(casted_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl_macro_tmp_653.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_653.addr = &call_tmp_chpl36;
  tmp_chpl15 = chpl_macro_tmp_653;
  chpl___PLUS_(&local__str_literal_245_chpl, tmp_chpl15, &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  chpl_macro_tmp_654.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_654.addr = &local__str_literal_244_chpl;
  tmp_chpl16 = chpl_macro_tmp_654;
  chpl___PLUS_(&call_tmp_chpl37, tmp_chpl16, &ret_tmp_chpl3);
  call_tmp_chpl38 = ret_tmp_chpl3;
  chpl_macro_tmp_655.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_655.addr = enumName_chpl;
  tmp_chpl17 = chpl_macro_tmp_655;
  chpl___PLUS_(&call_tmp_chpl38, tmp_chpl17, &ret_tmp_chpl4);
  call_tmp_chpl39 = ret_tmp_chpl4;
  new_temp_chpl = _new_chpl15(&call_tmp_chpl39, &local__str_literal_242_chpl, _ln_chpl, _fn_chpl);
  init_chpl54(&initTemp_chpl, new_temp_chpl);
  call_tmp_chpl40 = initTemp_chpl;
  i_x_chpl = &call_tmp_chpl40;
  i__retArg_chpl = &ret_tmp_chpl5;
  _formal_tmp_x_chpl = *(i_x_chpl);
  i_this_chpl = &_formal_tmp_x_chpl;
  call_tmp_chpl42 = ((Error_chpl)((i_this_chpl)->chpl_p));
  i_this_chpl2 = &_formal_tmp_x_chpl;
  (i_this_chpl2)->chpl_p = ((IllegalArgumentError_chpl)(nil));
  if (((object_chpl)(call_tmp_chpl42)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, _ln_chpl, _fn_chpl);
  }
  chpl_macro_tmp_656.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_656.addr = call_tmp_chpl42;
  tmp_chpl18 = chpl_macro_tmp_656;
  init_chpl68(&initTemp_chpl2, tmp_chpl18);
  call_tmp_chpl43 = initTemp_chpl2;
  ret_chpl = call_tmp_chpl43;
  chpl__autoDestroy11(&_formal_tmp_x_chpl);
  *(i__retArg_chpl) = ret_chpl;
  coerce_tmp_chpl3 = ret_tmp_chpl5;
  _formal_tmp_in_err_chpl = coerce_tmp_chpl3;
  call_tmp_chpl41 = chpl_fix_thrown_error(&_formal_tmp_in_err_chpl, _ln_chpl, _fn_chpl);
  *(error_out_chpl) = call_tmp_chpl41;
  i_x_chpl2 = &call_tmp_chpl39;
  chpl_macro_tmp_657.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_657.addr = i_x_chpl2;
  tmp_chpl19 = chpl_macro_tmp_657;
  deinit_chpl42(tmp_chpl19);
  i_x_chpl3 = &call_tmp_chpl38;
  chpl_macro_tmp_658.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_658.addr = i_x_chpl3;
  tmp_chpl20 = chpl_macro_tmp_658;
  deinit_chpl42(tmp_chpl20);
  i_x_chpl4 = &call_tmp_chpl37;
  chpl_macro_tmp_659.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_659.addr = i_x_chpl4;
  tmp_chpl21 = chpl_macro_tmp_659;
  deinit_chpl42(tmp_chpl21);
  i_x_chpl5 = &call_tmp_chpl36;
  chpl_macro_tmp_660.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_660.addr = i_x_chpl5;
  tmp_chpl22 = chpl_macro_tmp_660;
  deinit_chpl42(tmp_chpl22);
  return;
}

/* Errors.chpl:595 */
static void assert_chpl(chpl_bool test_chpl,
                        int64_t _ln_chpl,
                        int32_t _fn_chpl) {
  if (! test_chpl) {
    chpl_error("assert failed", _ln_chpl, _fn_chpl);
  }
  return;
}

/* Errors.chpl:689 */
static void compilerAssert_chpl(void) {
  return;
}

/* Errors.chpl:737 */
static void halt_chpl(string_chpl * msg_chpl,
                      int64_t _ln_chpl,
                      int32_t _fn_chpl) {
  string_chpl local__str_literal_3282_chpl;
  string_chpl call_tmp_chpl36;
  string_chpl ret_chpl;
  int32_t call_tmp_chpl37;
  string_chpl ret_chpl2;
  string_chpl ret_chpl3;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl x_chpl2;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t call_tmp_chpl38;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_661;
  chpl____wide__ref_string chpl_macro_tmp_662;
  chpl____wide__ref_string chpl_macro_tmp_663;
  local__str_literal_3282_chpl = _str_literal_3282_chpl /* "Cannot call .c_str() on a remote string" */;
  call_tmp_chpl37 = get_chpl_nodeID();
  if ((msg_chpl)->locale_id == call_tmp_chpl37) {
    init_chpl73(&ret_chpl3);
    (&ret_chpl3)->cachedNumCodepoints = (msg_chpl)->cachedNumCodepoints;
    chpl_macro_tmp_661.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_661.addr = msg_chpl;
    tmp_chpl15 = chpl_macro_tmp_661;
    initWithBorrowedBuffer_chpl(&ret_chpl3, tmp_chpl15);
    ret_chpl2 = ret_chpl3;
    ret_chpl = ret_chpl2;
    goto _end_localize_chpl;
  } else {
    chpl_macro_tmp_662.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_662.addr = msg_chpl;
    tmp_chpl16 = chpl_macro_tmp_662;
    init_ASSIGN__chpl21(&x_chpl2, tmp_chpl16);
    ret_chpl = x_chpl2;
    goto _end_localize_chpl;
  }
  _end_localize_chpl:;
  call_tmp_chpl36 = ret_chpl;
  call_tmp_chpl38 = get_chpl_nodeID();
  if ((&call_tmp_chpl36)->locale_id != call_tmp_chpl38) {
    halt_chpl(&local__str_literal_3282_chpl, _ln_chpl, _fn_chpl);
  }
  halt_chpl13(((c_string)((&call_tmp_chpl36)->buff)), _ln_chpl, _fn_chpl);
  i_x_chpl = &call_tmp_chpl36;
  chpl_macro_tmp_663.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_663.addr = i_x_chpl;
  tmp_chpl17 = chpl_macro_tmp_663;
  deinit_chpl42(tmp_chpl17);
  return;
}

/* Errors.chpl:748 */
static void halt_chpl13(c_string _e0_args_chpl,
                        int64_t _ln_chpl,
                        int32_t _fn_chpl) {
  string_chpl local__str_literal_3282_chpl;
  string_chpl local__str_literal_262_chpl;
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl2;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl tmpstring_chpl;
  int32_t call_tmp_chpl38;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_664;
  chpl____wide__ref_string chpl_macro_tmp_665;
  chpl____wide__ref_string chpl_macro_tmp_666;
  local__str_literal_3282_chpl = _str_literal_3282_chpl /* "Cannot call .c_str() on a remote string" */;
  local__str_literal_262_chpl = _str_literal_262_chpl /* "halt reached - " */;
  chpl_stringify_wrapper4(_e0_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl_macro_tmp_664.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_664.addr = &call_tmp_chpl36;
  tmp_chpl15 = chpl_macro_tmp_664;
  chpl___PLUS_(&local__str_literal_262_chpl, tmp_chpl15, &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  tmpstring_chpl = call_tmp_chpl37;
  call_tmp_chpl38 = get_chpl_nodeID();
  if ((&tmpstring_chpl)->locale_id != call_tmp_chpl38) {
    halt_chpl(&local__str_literal_3282_chpl, _ln_chpl, _fn_chpl);
  }
  chpl_error(((c_string)((&tmpstring_chpl)->buff)), _ln_chpl, _fn_chpl);
  i_x_chpl = &tmpstring_chpl;
  chpl_macro_tmp_665.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_665.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_665;
  deinit_chpl42(tmp_chpl16);
  i_x_chpl2 = &call_tmp_chpl36;
  chpl_macro_tmp_666.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_666.addr = i_x_chpl2;
  tmp_chpl17 = chpl_macro_tmp_666;
  deinit_chpl42(tmp_chpl17);
  return;
}

/* Errors.chpl:748 */
static void halt_chpl12(string_chpl * _e0_args_chpl,
                        int64_t _e1_args_chpl,
                        string_chpl * _e2_args_chpl,
                        int64_t _e3_args_chpl,
                        string_chpl * _e4_args_chpl,
                        int64_t _ln_chpl,
                        int32_t _fn_chpl) {
  string_chpl local__str_literal_3282_chpl;
  string_chpl local__str_literal_262_chpl;
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl2;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl tmpstring_chpl;
  int32_t call_tmp_chpl38;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_667;
  chpl____wide__ref_string chpl_macro_tmp_668;
  chpl____wide__ref_string chpl_macro_tmp_669;
  local__str_literal_3282_chpl = _str_literal_3282_chpl /* "Cannot call .c_str() on a remote string" */;
  local__str_literal_262_chpl = _str_literal_262_chpl /* "halt reached - " */;
  chpl_stringify_wrapper5(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, _e4_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl_macro_tmp_667.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_667.addr = &call_tmp_chpl36;
  tmp_chpl15 = chpl_macro_tmp_667;
  chpl___PLUS_(&local__str_literal_262_chpl, tmp_chpl15, &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  tmpstring_chpl = call_tmp_chpl37;
  call_tmp_chpl38 = get_chpl_nodeID();
  if ((&tmpstring_chpl)->locale_id != call_tmp_chpl38) {
    halt_chpl(&local__str_literal_3282_chpl, _ln_chpl, _fn_chpl);
  }
  chpl_error(((c_string)((&tmpstring_chpl)->buff)), _ln_chpl, _fn_chpl);
  i_x_chpl = &tmpstring_chpl;
  chpl_macro_tmp_668.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_668.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_668;
  deinit_chpl42(tmp_chpl16);
  i_x_chpl2 = &call_tmp_chpl36;
  chpl_macro_tmp_669.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_669.addr = i_x_chpl2;
  tmp_chpl17 = chpl_macro_tmp_669;
  deinit_chpl42(tmp_chpl17);
  return;
}

/* Errors.chpl:748 */
static void halt_chpl11(string_chpl * _e0_args_chpl,
                        string_chpl * _e1_args_chpl,
                        int64_t _e2_args_chpl,
                        string_chpl * _e3_args_chpl,
                        range_int64_t_bounded_F_chpl _e4_args_chpl,
                        int64_t _ln_chpl,
                        int32_t _fn_chpl) {
  string_chpl local__str_literal_3282_chpl;
  string_chpl local__str_literal_262_chpl;
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl2;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl tmpstring_chpl;
  int32_t call_tmp_chpl38;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_670;
  chpl____wide__ref_string chpl_macro_tmp_671;
  chpl____wide__ref_string chpl_macro_tmp_672;
  local__str_literal_3282_chpl = _str_literal_3282_chpl /* "Cannot call .c_str() on a remote string" */;
  local__str_literal_262_chpl = _str_literal_262_chpl /* "halt reached - " */;
  chpl_stringify_wrapper(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, _e4_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl_macro_tmp_670.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_670.addr = &call_tmp_chpl36;
  tmp_chpl15 = chpl_macro_tmp_670;
  chpl___PLUS_(&local__str_literal_262_chpl, tmp_chpl15, &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  tmpstring_chpl = call_tmp_chpl37;
  call_tmp_chpl38 = get_chpl_nodeID();
  if ((&tmpstring_chpl)->locale_id != call_tmp_chpl38) {
    halt_chpl(&local__str_literal_3282_chpl, _ln_chpl, _fn_chpl);
  }
  chpl_error(((c_string)((&tmpstring_chpl)->buff)), _ln_chpl, _fn_chpl);
  i_x_chpl = &tmpstring_chpl;
  chpl_macro_tmp_671.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_671.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_671;
  deinit_chpl42(tmp_chpl16);
  i_x_chpl2 = &call_tmp_chpl36;
  chpl_macro_tmp_672.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_672.addr = i_x_chpl2;
  tmp_chpl17 = chpl_macro_tmp_672;
  deinit_chpl42(tmp_chpl17);
  return;
}

/* Errors.chpl:748 */
static void halt_chpl8(string_chpl * _e0_args_chpl,
                       range_int64_t_bounded_F_chpl _e1_args_chpl,
                       string_chpl * _e2_args_chpl,
                       int64_t _e3_args_chpl,
                       int64_t _ln_chpl,
                       int32_t _fn_chpl) {
  string_chpl local__str_literal_3282_chpl;
  string_chpl local__str_literal_262_chpl;
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl2;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl tmpstring_chpl;
  int32_t call_tmp_chpl38;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_673;
  chpl____wide__ref_string chpl_macro_tmp_674;
  chpl____wide__ref_string chpl_macro_tmp_675;
  local__str_literal_3282_chpl = _str_literal_3282_chpl /* "Cannot call .c_str() on a remote string" */;
  local__str_literal_262_chpl = _str_literal_262_chpl /* "halt reached - " */;
  chpl_stringify_wrapper3(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl_macro_tmp_673.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_673.addr = &call_tmp_chpl36;
  tmp_chpl15 = chpl_macro_tmp_673;
  chpl___PLUS_(&local__str_literal_262_chpl, tmp_chpl15, &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  tmpstring_chpl = call_tmp_chpl37;
  call_tmp_chpl38 = get_chpl_nodeID();
  if ((&tmpstring_chpl)->locale_id != call_tmp_chpl38) {
    halt_chpl(&local__str_literal_3282_chpl, _ln_chpl, _fn_chpl);
  }
  chpl_error(((c_string)((&tmpstring_chpl)->buff)), _ln_chpl, _fn_chpl);
  i_x_chpl = &tmpstring_chpl;
  chpl_macro_tmp_674.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_674.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_674;
  deinit_chpl42(tmp_chpl16);
  i_x_chpl2 = &call_tmp_chpl36;
  chpl_macro_tmp_675.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_675.addr = i_x_chpl2;
  tmp_chpl17 = chpl_macro_tmp_675;
  deinit_chpl42(tmp_chpl17);
  return;
}

/* Errors.chpl:748 */
static void halt_chpl4(string_chpl * _e0_args_chpl,
                       range_byteIndex_bounded_F_chpl _e1_args_chpl,
                       string_chpl * _e2_args_chpl,
                       int64_t _e3_args_chpl,
                       int64_t _ln_chpl,
                       int32_t _fn_chpl) {
  string_chpl local__str_literal_3282_chpl;
  string_chpl local__str_literal_262_chpl;
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl2;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl tmpstring_chpl;
  int32_t call_tmp_chpl38;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_676;
  chpl____wide__ref_string chpl_macro_tmp_677;
  chpl____wide__ref_string chpl_macro_tmp_678;
  local__str_literal_3282_chpl = _str_literal_3282_chpl /* "Cannot call .c_str() on a remote string" */;
  local__str_literal_262_chpl = _str_literal_262_chpl /* "halt reached - " */;
  chpl_stringify_wrapper10(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl_macro_tmp_676.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_676.addr = &call_tmp_chpl36;
  tmp_chpl15 = chpl_macro_tmp_676;
  chpl___PLUS_(&local__str_literal_262_chpl, tmp_chpl15, &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  tmpstring_chpl = call_tmp_chpl37;
  call_tmp_chpl38 = get_chpl_nodeID();
  if ((&tmpstring_chpl)->locale_id != call_tmp_chpl38) {
    halt_chpl(&local__str_literal_3282_chpl, _ln_chpl, _fn_chpl);
  }
  chpl_error(((c_string)((&tmpstring_chpl)->buff)), _ln_chpl, _fn_chpl);
  i_x_chpl = &tmpstring_chpl;
  chpl_macro_tmp_677.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_677.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_677;
  deinit_chpl42(tmp_chpl16);
  i_x_chpl2 = &call_tmp_chpl36;
  chpl_macro_tmp_678.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_678.addr = i_x_chpl2;
  tmp_chpl17 = chpl_macro_tmp_678;
  deinit_chpl42(tmp_chpl17);
  return;
}

/* Errors.chpl:748 */
static void halt_chpl5(string_chpl * _e0_args_chpl,
                       int64_t _e1_args_chpl,
                       string_chpl * _e2_args_chpl,
                       int64_t _e3_args_chpl,
                       int64_t _ln_chpl,
                       int32_t _fn_chpl) {
  string_chpl local__str_literal_3282_chpl;
  string_chpl local__str_literal_262_chpl;
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl2;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl tmpstring_chpl;
  int32_t call_tmp_chpl38;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_679;
  chpl____wide__ref_string chpl_macro_tmp_680;
  chpl____wide__ref_string chpl_macro_tmp_681;
  local__str_literal_3282_chpl = _str_literal_3282_chpl /* "Cannot call .c_str() on a remote string" */;
  local__str_literal_262_chpl = _str_literal_262_chpl /* "halt reached - " */;
  chpl_stringify_wrapper6(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl_macro_tmp_679.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_679.addr = &call_tmp_chpl36;
  tmp_chpl15 = chpl_macro_tmp_679;
  chpl___PLUS_(&local__str_literal_262_chpl, tmp_chpl15, &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  tmpstring_chpl = call_tmp_chpl37;
  call_tmp_chpl38 = get_chpl_nodeID();
  if ((&tmpstring_chpl)->locale_id != call_tmp_chpl38) {
    halt_chpl(&local__str_literal_3282_chpl, _ln_chpl, _fn_chpl);
  }
  chpl_error(((c_string)((&tmpstring_chpl)->buff)), _ln_chpl, _fn_chpl);
  i_x_chpl = &tmpstring_chpl;
  chpl_macro_tmp_680.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_680.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_680;
  deinit_chpl42(tmp_chpl16);
  i_x_chpl2 = &call_tmp_chpl36;
  chpl_macro_tmp_681.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_681.addr = i_x_chpl2;
  tmp_chpl17 = chpl_macro_tmp_681;
  deinit_chpl42(tmp_chpl17);
  return;
}

/* Errors.chpl:748 */
static void halt_chpl9(string_chpl * _e0_args_chpl,
                       range_int64_t_boundedLow_F_chpl _e1_args_chpl,
                       string_chpl * _e2_args_chpl,
                       int64_t _e3_args_chpl,
                       int64_t _ln_chpl,
                       int32_t _fn_chpl) {
  string_chpl local__str_literal_3282_chpl;
  string_chpl local__str_literal_262_chpl;
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl2;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl tmpstring_chpl;
  int32_t call_tmp_chpl38;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_682;
  chpl____wide__ref_string chpl_macro_tmp_683;
  chpl____wide__ref_string chpl_macro_tmp_684;
  local__str_literal_3282_chpl = _str_literal_3282_chpl /* "Cannot call .c_str() on a remote string" */;
  local__str_literal_262_chpl = _str_literal_262_chpl /* "halt reached - " */;
  chpl_stringify_wrapper8(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl_macro_tmp_682.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_682.addr = &call_tmp_chpl36;
  tmp_chpl15 = chpl_macro_tmp_682;
  chpl___PLUS_(&local__str_literal_262_chpl, tmp_chpl15, &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  tmpstring_chpl = call_tmp_chpl37;
  call_tmp_chpl38 = get_chpl_nodeID();
  if ((&tmpstring_chpl)->locale_id != call_tmp_chpl38) {
    halt_chpl(&local__str_literal_3282_chpl, _ln_chpl, _fn_chpl);
  }
  chpl_error(((c_string)((&tmpstring_chpl)->buff)), _ln_chpl, _fn_chpl);
  i_x_chpl = &tmpstring_chpl;
  chpl_macro_tmp_683.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_683.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_683;
  deinit_chpl42(tmp_chpl16);
  i_x_chpl2 = &call_tmp_chpl36;
  chpl_macro_tmp_684.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_684.addr = i_x_chpl2;
  tmp_chpl17 = chpl_macro_tmp_684;
  deinit_chpl42(tmp_chpl17);
  return;
}

/* Errors.chpl:748 */
static void halt_chpl10(string_chpl * _e0_args_chpl,
                        range_byteIndex_boundedLow_F_chpl _e1_args_chpl,
                        string_chpl * _e2_args_chpl,
                        int64_t _e3_args_chpl,
                        int64_t _ln_chpl,
                        int32_t _fn_chpl) {
  string_chpl local__str_literal_3282_chpl;
  string_chpl local__str_literal_262_chpl;
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl2;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl tmpstring_chpl;
  int32_t call_tmp_chpl38;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_685;
  chpl____wide__ref_string chpl_macro_tmp_686;
  chpl____wide__ref_string chpl_macro_tmp_687;
  local__str_literal_3282_chpl = _str_literal_3282_chpl /* "Cannot call .c_str() on a remote string" */;
  local__str_literal_262_chpl = _str_literal_262_chpl /* "halt reached - " */;
  chpl_stringify_wrapper11(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl_macro_tmp_685.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_685.addr = &call_tmp_chpl36;
  tmp_chpl15 = chpl_macro_tmp_685;
  chpl___PLUS_(&local__str_literal_262_chpl, tmp_chpl15, &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  tmpstring_chpl = call_tmp_chpl37;
  call_tmp_chpl38 = get_chpl_nodeID();
  if ((&tmpstring_chpl)->locale_id != call_tmp_chpl38) {
    halt_chpl(&local__str_literal_3282_chpl, _ln_chpl, _fn_chpl);
  }
  chpl_error(((c_string)((&tmpstring_chpl)->buff)), _ln_chpl, _fn_chpl);
  i_x_chpl = &tmpstring_chpl;
  chpl_macro_tmp_686.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_686.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_686;
  deinit_chpl42(tmp_chpl16);
  i_x_chpl2 = &call_tmp_chpl36;
  chpl_macro_tmp_687.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_687.addr = i_x_chpl2;
  tmp_chpl17 = chpl_macro_tmp_687;
  deinit_chpl42(tmp_chpl17);
  return;
}

/* Errors.chpl:748 */
static void halt_chpl2(string_chpl * _e0_args_chpl,
                       range_byteIndex_boundedHigh_F_chpl _e1_args_chpl,
                       string_chpl * _e2_args_chpl,
                       int64_t _e3_args_chpl,
                       int64_t _ln_chpl,
                       int32_t _fn_chpl) {
  string_chpl local__str_literal_3282_chpl;
  string_chpl local__str_literal_262_chpl;
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl2;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl tmpstring_chpl;
  int32_t call_tmp_chpl38;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_688;
  chpl____wide__ref_string chpl_macro_tmp_689;
  chpl____wide__ref_string chpl_macro_tmp_690;
  local__str_literal_3282_chpl = _str_literal_3282_chpl /* "Cannot call .c_str() on a remote string" */;
  local__str_literal_262_chpl = _str_literal_262_chpl /* "halt reached - " */;
  chpl_stringify_wrapper7(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl_macro_tmp_688.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_688.addr = &call_tmp_chpl36;
  tmp_chpl15 = chpl_macro_tmp_688;
  chpl___PLUS_(&local__str_literal_262_chpl, tmp_chpl15, &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  tmpstring_chpl = call_tmp_chpl37;
  call_tmp_chpl38 = get_chpl_nodeID();
  if ((&tmpstring_chpl)->locale_id != call_tmp_chpl38) {
    halt_chpl(&local__str_literal_3282_chpl, _ln_chpl, _fn_chpl);
  }
  chpl_error(((c_string)((&tmpstring_chpl)->buff)), _ln_chpl, _fn_chpl);
  i_x_chpl = &tmpstring_chpl;
  chpl_macro_tmp_689.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_689.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_689;
  deinit_chpl42(tmp_chpl16);
  i_x_chpl2 = &call_tmp_chpl36;
  chpl_macro_tmp_690.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_690.addr = i_x_chpl2;
  tmp_chpl17 = chpl_macro_tmp_690;
  deinit_chpl42(tmp_chpl17);
  return;
}

/* Errors.chpl:748 */
static void halt_chpl3(string_chpl * _e0_args_chpl,
                       string_chpl * _e1_args_chpl,
                       string_chpl * _e2_args_chpl,
                       string_chpl * _e3_args_chpl,
                       int64_t _ln_chpl,
                       int32_t _fn_chpl) {
  string_chpl local__str_literal_3282_chpl;
  string_chpl local__str_literal_262_chpl;
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl2;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl tmpstring_chpl;
  int32_t call_tmp_chpl38;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_691;
  chpl____wide__ref_string chpl_macro_tmp_692;
  chpl____wide__ref_string chpl_macro_tmp_693;
  local__str_literal_3282_chpl = _str_literal_3282_chpl /* "Cannot call .c_str() on a remote string" */;
  local__str_literal_262_chpl = _str_literal_262_chpl /* "halt reached - " */;
  chpl_stringify_wrapper9(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl_macro_tmp_691.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_691.addr = &call_tmp_chpl36;
  tmp_chpl15 = chpl_macro_tmp_691;
  chpl___PLUS_(&local__str_literal_262_chpl, tmp_chpl15, &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  tmpstring_chpl = call_tmp_chpl37;
  call_tmp_chpl38 = get_chpl_nodeID();
  if ((&tmpstring_chpl)->locale_id != call_tmp_chpl38) {
    halt_chpl(&local__str_literal_3282_chpl, _ln_chpl, _fn_chpl);
  }
  chpl_error(((c_string)((&tmpstring_chpl)->buff)), _ln_chpl, _fn_chpl);
  i_x_chpl = &tmpstring_chpl;
  chpl_macro_tmp_692.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_692.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_692;
  deinit_chpl42(tmp_chpl16);
  i_x_chpl2 = &call_tmp_chpl36;
  chpl_macro_tmp_693.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_693.addr = i_x_chpl2;
  tmp_chpl17 = chpl_macro_tmp_693;
  deinit_chpl42(tmp_chpl17);
  return;
}

/* Errors.chpl:748 */
static void halt_chpl6(string_chpl * _e0_args_chpl,
                       int64_t _e1_args_chpl,
                       string_chpl * _e2_args_chpl,
                       int64_t _ln_chpl,
                       int32_t _fn_chpl) {
  string_chpl local__str_literal_3282_chpl;
  string_chpl local__str_literal_262_chpl;
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl2;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl tmpstring_chpl;
  int32_t call_tmp_chpl38;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_694;
  chpl____wide__ref_string chpl_macro_tmp_695;
  chpl____wide__ref_string chpl_macro_tmp_696;
  local__str_literal_3282_chpl = _str_literal_3282_chpl /* "Cannot call .c_str() on a remote string" */;
  local__str_literal_262_chpl = _str_literal_262_chpl /* "halt reached - " */;
  chpl_stringify_wrapper12(_e0_args_chpl, _e1_args_chpl, _e2_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl_macro_tmp_694.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_694.addr = &call_tmp_chpl36;
  tmp_chpl15 = chpl_macro_tmp_694;
  chpl___PLUS_(&local__str_literal_262_chpl, tmp_chpl15, &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  tmpstring_chpl = call_tmp_chpl37;
  call_tmp_chpl38 = get_chpl_nodeID();
  if ((&tmpstring_chpl)->locale_id != call_tmp_chpl38) {
    halt_chpl(&local__str_literal_3282_chpl, _ln_chpl, _fn_chpl);
  }
  chpl_error(((c_string)((&tmpstring_chpl)->buff)), _ln_chpl, _fn_chpl);
  i_x_chpl = &tmpstring_chpl;
  chpl_macro_tmp_695.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_695.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_695;
  deinit_chpl42(tmp_chpl16);
  i_x_chpl2 = &call_tmp_chpl36;
  chpl_macro_tmp_696.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_696.addr = i_x_chpl2;
  tmp_chpl17 = chpl_macro_tmp_696;
  deinit_chpl42(tmp_chpl17);
  return;
}

/* Errors.chpl:748 */
static void halt_chpl7(string_chpl * _e0_args_chpl,
                       int64_t _e1_args_chpl,
                       int64_t _ln_chpl,
                       int32_t _fn_chpl) {
  string_chpl local__str_literal_3282_chpl;
  string_chpl local__str_literal_262_chpl;
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl2;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl tmpstring_chpl;
  int32_t call_tmp_chpl38;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_697;
  chpl____wide__ref_string chpl_macro_tmp_698;
  chpl____wide__ref_string chpl_macro_tmp_699;
  local__str_literal_3282_chpl = _str_literal_3282_chpl /* "Cannot call .c_str() on a remote string" */;
  local__str_literal_262_chpl = _str_literal_262_chpl /* "halt reached - " */;
  chpl_stringify_wrapper2(_e0_args_chpl, _e1_args_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl_macro_tmp_697.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_697.addr = &call_tmp_chpl36;
  tmp_chpl15 = chpl_macro_tmp_697;
  chpl___PLUS_(&local__str_literal_262_chpl, tmp_chpl15, &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  tmpstring_chpl = call_tmp_chpl37;
  call_tmp_chpl38 = get_chpl_nodeID();
  if ((&tmpstring_chpl)->locale_id != call_tmp_chpl38) {
    halt_chpl(&local__str_literal_3282_chpl, _ln_chpl, _fn_chpl);
  }
  chpl_error(((c_string)((&tmpstring_chpl)->buff)), _ln_chpl, _fn_chpl);
  i_x_chpl = &tmpstring_chpl;
  chpl_macro_tmp_698.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_698.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_698;
  deinit_chpl42(tmp_chpl16);
  i_x_chpl2 = &call_tmp_chpl36;
  chpl_macro_tmp_699.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_699.addr = i_x_chpl2;
  tmp_chpl17 = chpl_macro_tmp_699;
  deinit_chpl42(tmp_chpl17);
  return;
}

