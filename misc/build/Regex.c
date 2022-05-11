/* Regex.chpl:342 */
static void chpl__init_Regex(int64_t _ln_chpl,
                             int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_Regex_p) {
    goto _exit_chpl__init_Regex_chpl;
  }
  printModuleInit_chpl("%*s\n", "Regex", INT64(5));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_Regex_p = UINT8(true);
  {
    chpl__init_SysBasic(INT64(342), INT32(85));
    chpl__init_SysError(INT64(342), INT32(85));
    chpl__init_CTypes(INT64(342), INT32(85));
    chpl__init_IO(INT64(342), INT32(85));
    chpl__init_String(INT64(342), INT32(85));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_Regex_chpl:;
  return;
}

/* Regex.chpl:404 */
static void chpl__auto_destroy_BadRegexError(chpl____wide_BadRegexError this_chpl7) {
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_2837;
  chpl____wide_Error chpl_macro_tmp_2838;
  chpl____wide__ref_string chpl_macro_tmp_2839;
  chpl_check_nil((&this_chpl7)->addr, INT64(405), INT32(85));
  chpl_macro_tmp_2837.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_2837.addr = &(((&this_chpl7)->addr)->msg);
  _field_destructor_tmp__chpl = chpl_macro_tmp_2837;
  deinit_chpl42(_field_destructor_tmp__chpl);
  chpl_macro_tmp_2838.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_2838.addr = ((Error_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_2838;
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(404), INT32(85));
  chpl_macro_tmp_2839.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2839.addr = &(((&_parent_destructor_tmp__chpl)->addr)->_msg);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_2839;
  deinit_chpl42(_field_destructor_tmp__chpl2);
  return;
}

/* Regex.chpl:409 */
static void message_chpl6(chpl____wide_BadRegexError this_chpl7,
                          chpl____wide__ref_string _retArg_chpl) {
  chpl____wide__ref_string call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl;
  string_chpl tmp_chpl15;
  chpl____wide__ref_string chpl_macro_tmp_2840;
  chpl_check_nil((&this_chpl7)->addr, INT64(410), INT32(85));
  chpl_macro_tmp_2840.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_2840.addr = &(((&this_chpl7)->addr)->msg);
  call_tmp_chpl36 = chpl_macro_tmp_2840;
  init_ASSIGN__chpl21(&tmp_chpl15, call_tmp_chpl36);
  ret_chpl = tmp_chpl15;
  chpl_gen_comm_put(((void*)(&ret_chpl)), chpl_nodeFromLocaleID((_retArg_chpl).locale, INT64(0), INT32(0)), (_retArg_chpl).addr, sizeof(string_chpl), COMMID(0), INT64(409), INT64(85));
  return;
}

