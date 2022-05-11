/* <internal>:0 */
static chpl_bool chpl___EQUALS_(locale_chpl * _arg1_chpl,
                                locale_chpl * _arg2_chpl) {
  chpl_bool ret_chpl;
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object chpl_macro_tmp_915;
  chpl____wide_object chpl_macro_tmp_916;
  coerce_tmp_chpl3 = (_arg1_chpl)->_instance;
  coerce_tmp_chpl4 = (_arg2_chpl)->_instance;
  chpl_macro_tmp_915.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_915.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl5 = chpl_macro_tmp_915;
  chpl_macro_tmp_916.locale = (&coerce_tmp_chpl4)->locale;
  chpl_macro_tmp_916.addr = ((object_chpl)((&coerce_tmp_chpl4)->addr));
  coerce_tmp_chpl6 = chpl_macro_tmp_916;
  if (((&coerce_tmp_chpl5)->addr != (&coerce_tmp_chpl6)->addr) || ((!(! (&coerce_tmp_chpl5)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl5)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&coerce_tmp_chpl6)->locale, INT64(0), INT32(0))))) {
    ret_chpl = UINT8(false);
    goto _end__EQUALS__chpl;
  }
  ret_chpl = UINT8(true);
  _end__EQUALS__chpl:;
  return ret_chpl;
}

/* <internal>:0 */
static chpl_bool chpl___EXCLAMATION__ASSIGN_(locale_chpl * _arg1_chpl,
                                             locale_chpl * _arg2_chpl) {
  chpl_bool ret_chpl;
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object chpl_macro_tmp_917;
  chpl____wide_object chpl_macro_tmp_918;
  coerce_tmp_chpl3 = (_arg1_chpl)->_instance;
  coerce_tmp_chpl4 = (_arg2_chpl)->_instance;
  chpl_macro_tmp_917.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_917.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl5 = chpl_macro_tmp_917;
  chpl_macro_tmp_918.locale = (&coerce_tmp_chpl4)->locale;
  chpl_macro_tmp_918.addr = ((object_chpl)((&coerce_tmp_chpl4)->addr));
  coerce_tmp_chpl6 = chpl_macro_tmp_918;
  if (((&coerce_tmp_chpl5)->addr != (&coerce_tmp_chpl6)->addr) || ((!(! (&coerce_tmp_chpl5)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl5)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&coerce_tmp_chpl6)->locale, INT64(0), INT32(0))))) {
    ret_chpl = UINT8(true);
    goto _end__EXCLAMATION__ASSIGN__chpl;
  }
  ret_chpl = UINT8(false);
  _end__EXCLAMATION__ASSIGN__chpl:;
  return ret_chpl;
}

/* ChapelLocale.chpl:27 */
static void chpl__init_ChapelLocale(int64_t _ln_chpl,
                                    int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  locale_chpl initTemp_chpl;
  locale_chpl initTemp_chpl2;
  locale_chpl initTemp_chpl3;
  locale_chpl tmp_chpl15;
  chpl____wide__ref_locale tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale chpl_macro_tmp_919;
  chpl____wide__ref_locale chpl_macro_tmp_920;
  chpl____wide__ref_locale chpl_macro_tmp_921;
  chpl____wide__ref_locale chpl_macro_tmp_922;
  chpl____wide__ref_locale chpl_macro_tmp_923;
  if (chpl__init_ChapelLocale_p) {
    goto _exit_chpl__init_ChapelLocale_chpl;
  }
  printModuleInit_chpl("%*s\n", "ChapelLocale", INT64(12));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_ChapelLocale_p = UINT8(true);
  {
    chpl__init_LocaleModel(INT64(27), INT32(26));
    chpl__init_HaltWrappers(INT64(27), INT32(26));
    chpl__init_CTypes(INT64(27), INT32(26));
  }
  chpl_addModule("ChapelLocale", ((c_fn_ptr)(deinit_chpl15)));
  compilerAssert_chpl();
  init_chpl24(&initTemp_chpl);
  call_tmp_chpl2 = initTemp_chpl;
  nilLocale_chpl = call_tmp_chpl2;
  init_chpl23(&initTemp_chpl2);
  call_tmp_chpl3 = initTemp_chpl2;
  defaultLocale_chpl = call_tmp_chpl3;
  init_chpl22(&initTemp_chpl3);
  call_tmp_chpl4 = initTemp_chpl3;
  tmp_chpl15 = call_tmp_chpl4;
  chpl_check_nil((&dummyLocale_chpl)->addr, INT64(82), INT32(26));
  chpl_macro_tmp_919.locale = (&dummyLocale_chpl)->locale;
  chpl_macro_tmp_919.addr = &(((&dummyLocale_chpl)->addr)->value);
  chpl_gen_comm_put(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_919).locale, INT64(0), INT32(0)), (chpl_macro_tmp_919).addr, sizeof(locale_chpl), COMMID(0), INT64(82), INT64(26));
  chpl_macro_tmp_920.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_920.addr = &rootLocale_chpl;
  tmp_chpl16 = chpl_macro_tmp_920;
  chpl_macro_tmp_921.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_921.addr = &nilLocale_chpl;
  tmp_chpl17 = chpl_macro_tmp_921;
  init_ASSIGN__chpl(tmp_chpl16, tmp_chpl17);
  chpl_check_nil((&origRootLocale_chpl)->addr, INT64(594), INT32(26));
  chpl_macro_tmp_922.locale = (&origRootLocale_chpl)->locale;
  chpl_macro_tmp_922.addr = &(((&origRootLocale_chpl)->addr)->value);
  tmp_chpl18 = chpl_macro_tmp_922;
  chpl_macro_tmp_923.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_923.addr = &nilLocale_chpl;
  tmp_chpl19 = chpl_macro_tmp_923;
  init_ASSIGN__chpl(tmp_chpl18, tmp_chpl19);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_ChapelLocale_chpl:;
  return;
}

/* ChapelLocale.chpl:98 */
static void init_chpl19(locale_chpl * this_chpl7) {
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseLocale_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_BaseLocale tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale chpl_macro_tmp_924;
  if (rootLocaleInitialized_chpl) {
    coerce_tmp_chpl3 = (&defaultLocale_chpl)->_instance;
    (this_chpl7)->_instance = coerce_tmp_chpl3;
  } else {
    init_coerce_tmp_chpl3 = ((BaseLocale_chpl)(nil));
    chpl_macro_tmp_924.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_924.addr = init_coerce_tmp_chpl3;
    tmp_chpl15 = chpl_macro_tmp_924;
    (this_chpl7)->_instance = tmp_chpl15;
  }
  return;
}

/* ChapelLocale.chpl:109 */
static void init_chpl20(locale_chpl * this_chpl7,
                        chpl____wide_BaseLocale _instance_chpl) {
  (this_chpl7)->_instance = _instance_chpl;
  return;
}

/* ChapelLocale.chpl:109 */
static void init_chpl21(locale_chpl * this_chpl7,
                        BaseLocale_chpl _instance_chpl) {
  chpl____wide_BaseLocale tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale chpl_macro_tmp_925;
  chpl_macro_tmp_925.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_925.addr = _instance_chpl;
  tmp_chpl15 = chpl_macro_tmp_925;
  (this_chpl7)->_instance = tmp_chpl15;
  return;
}

/* ChapelLocale.chpl:113 */
static void init_chpl24(locale_chpl * this_chpl7) {
  BaseLocale_chpl _instance_chpl = NULL;
  chpl____wide_BaseLocale tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale chpl_macro_tmp_926;
  _instance_chpl = ((BaseLocale_chpl)(nil));
  chpl_macro_tmp_926.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_926.addr = _instance_chpl;
  tmp_chpl15 = chpl_macro_tmp_926;
  (this_chpl7)->_instance = tmp_chpl15;
  return;
}

/* ChapelLocale.chpl:113 */
static void init_chpl23(locale_chpl * this_chpl7) {
  BaseLocale_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_BaseLocale tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale chpl_macro_tmp_927;
  init_coerce_tmp_chpl3 = ((BaseLocale_chpl)(nil));
  chpl_macro_tmp_927.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_927.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_927;
  (this_chpl7)->_instance = tmp_chpl15;
  return;
}

/* ChapelLocale.chpl:113 */
static void init_chpl22(locale_chpl * this_chpl7) {
  DummyLocale_chpl new_temp_chpl = NULL;
  BaseLocale_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_BaseLocale tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale chpl_macro_tmp_928;
  new_temp_chpl = _new_chpl4(INT64(118), INT32(26));
  init_coerce_tmp_chpl3 = ((BaseLocale_chpl)(new_temp_chpl));
  chpl_macro_tmp_928.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_928.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_928;
  (this_chpl7)->_instance = tmp_chpl15;
  return;
}

/* ChapelLocale.chpl:123 */
static void init_ASSIGN__chpl(chpl____wide__ref_locale this_chpl7,
                              chpl____wide__ref_locale other_chpl) {
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_BaseLocale chpl_macro_tmp_929;
  chpl____wide__ref__wide_BaseLocale chpl_macro_tmp_930;
  chpl_macro_tmp_929.locale = (other_chpl).locale;
  chpl_macro_tmp_929.addr = &(((other_chpl).addr)->_instance);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID((chpl_macro_tmp_929).locale, INT64(0), INT32(0)), (chpl_macro_tmp_929).addr, sizeof(chpl____wide_BaseLocale), COMMID(1), INT64(124), INT64(26));
  chpl_macro_tmp_930.locale = (this_chpl7).locale;
  chpl_macro_tmp_930.addr = &(((this_chpl7).addr)->_instance);
  chpl_gen_comm_put(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID((chpl_macro_tmp_930).locale, INT64(0), INT32(0)), (chpl_macro_tmp_930).addr, sizeof(chpl____wide_BaseLocale), COMMID(2), INT64(124), INT64(26));
  return;
}

/* ChapelLocale.chpl:127 */
static void deinit_chpl14(chpl____wide__ref_locale this_chpl7) {
  return;
}

/* ChapelLocale.chpl:292 */
static int64_t runningTasks_chpl(locale_chpl * this_chpl7) {
  string_chpl local__str_literal_75_chpl;
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicT_int64_t call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret_chpl;
  int64_t ret_chpl2;
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_int64_t tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl6 _args_foron_fn_chpl = NULL;
  chpl____wide__ref_AtomicT_int64_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t_chpl tmp_chpl18 = NULL;
  chpl____wide__ref_int64_t tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  int64_t tmp_chpl20;
  chpl____wide_object chpl_macro_tmp_931;
  chpl____wide__nilType chpl_macro_tmp_932;
  chpl____wide_object chpl_macro_tmp_933;
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_934;
  chpl____wide__ref_int64_t chpl_macro_tmp_935;
  chpl__class_localson_fn_chpl6_object chpl_macro_tmp_936;
  chpl____wide__ref_int64_t chpl_macro_tmp_937;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = (this_chpl7)->_instance;
  chpl_macro_tmp_931.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_931.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_931;
  chpl_macro_tmp_932.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_932.addr = nil;
  chpl_macro_tmp_933.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_933.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_933;
  if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(95), INT32(26));
  }
  coerce_tmp_chpl5 = coerce_tmp_chpl3;
  chpl_check_nil((&coerce_tmp_chpl5)->addr, INT64(293), INT32(26));
  chpl_macro_tmp_934.locale = (&coerce_tmp_chpl5)->locale;
  chpl_macro_tmp_934.addr = &(((&coerce_tmp_chpl5)->addr)->runningTaskCounter);
  call_tmp_chpl36 = chpl_macro_tmp_934;
  chpl_rmem_consist_maybe_release5();
  ret_chpl2 = INT64(0);
  call_tmp_chpl37 = (&call_tmp_chpl36)->locale;
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
  if (isdirect_chpl) {
    chpl_macro_tmp_935.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_935.addr = &ret_chpl2;
    tmp_chpl16 = chpl_macro_tmp_935;
    on_fn_chpl6(call_tmp_chpl36, tmp_chpl16);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl6)(&chpl_macro_tmp_936));
    chpl_check_nil(_args_foron_fn_chpl, INT64(293), INT32(26));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
    tmp_chpl17 = call_tmp_chpl36;
    chpl_check_nil(_args_foron_fn_chpl, INT64(293), INT32(26));
    (_args_foron_fn_chpl)->_1_this = tmp_chpl17;
    tmp_chpl18 = &ret_chpl2;
    chpl_macro_tmp_937.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_937.addr = tmp_chpl18;
    tmp_chpl19 = chpl_macro_tmp_937;
    chpl_check_nil(_args_foron_fn_chpl, INT64(293), INT32(26));
    (_args_foron_fn_chpl)->_2_ret = tmp_chpl19;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl6_object);
    chpl_taskRunningCntDec(INT64(293), INT32(26));
    /*** wrapon_fn_chpl6 ***/ chpl_executeOn(call_tmp_chpl37, INT32(8), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(467), INT32(14));
    chpl_taskRunningCntInc(INT64(293), INT32(26));
  }
  ret_chpl = ret_chpl2;
  if (ret_chpl <= INT64(0)) {
    tmp_chpl20 = INT64(1);
  } else {
    tmp_chpl20 = ret_chpl;
  }
  return tmp_chpl20;
}

/* ChapelLocale.chpl:297 */
static void chpl___ASSIGN_2(chpl____wide__ref_locale l1_chpl,
                            chpl____wide__ref_locale l2_chpl) {
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_BaseLocale chpl_macro_tmp_938;
  chpl____wide__ref__wide_BaseLocale chpl_macro_tmp_939;
  chpl_macro_tmp_938.locale = (l2_chpl).locale;
  chpl_macro_tmp_938.addr = &(((l2_chpl).addr)->_instance);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID((chpl_macro_tmp_938).locale, INT64(0), INT32(0)), (chpl_macro_tmp_938).addr, sizeof(chpl____wide_BaseLocale), COMMID(3), INT64(298), INT64(26));
  chpl_macro_tmp_939.locale = (l1_chpl).locale;
  chpl_macro_tmp_939.addr = &(((l1_chpl).addr)->_instance);
  chpl_gen_comm_put(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID((chpl_macro_tmp_939).locale, INT64(0), INT32(0)), (chpl_macro_tmp_939).addr, sizeof(chpl____wide_BaseLocale), COMMID(4), INT64(298), INT64(26));
  return;
}

/* ChapelLocale.chpl:308 */
static void chpl__auto_destroy_BaseLocale(chpl____wide_BaseLocale this_chpl7) {
  chpl____wide__ref_AtomicT_int64_t _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_940;
  chpl____wide__ref_locale chpl_macro_tmp_941;
  chpl_check_nil((&this_chpl7)->addr, INT64(382), INT32(26));
  chpl_macro_tmp_940.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_940.addr = &(((&this_chpl7)->addr)->runningTaskCounter);
  _field_destructor_tmp__chpl = chpl_macro_tmp_940;
  deinit_chpl2(_field_destructor_tmp__chpl);
  chpl_check_nil((&this_chpl7)->addr, INT64(325), INT32(26));
  chpl_macro_tmp_941.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_941.addr = &(((&this_chpl7)->addr)->parent);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_941;
  deinit_chpl14(_field_destructor_tmp__chpl2);
  return;
}

/* ChapelLocale.chpl:342 */
static int64_t id_chpl(chpl____wide_BaseLocale this_chpl7) {
  int64_t ret_chpl;
  chpl_localeID_t call_tmp_chpl36;
  int32_t call_tmp_chpl37;
  call_tmp_chpl36 = (&this_chpl7)->locale;
  call_tmp_chpl37 = chpl_nodeFromLocaleID(call_tmp_chpl36, INT64(342), INT32(26));
  ret_chpl = ((int64_t)(call_tmp_chpl37));
  return ret_chpl;
}

/* ChapelLocale.chpl:455 */
static int64_t getChildCount_chpl(chpl____wide_BaseLocale this_chpl7) {
  pureVirtualMethodHalt_chpl(INT64(456), INT32(26));
  return INT64(0);
}

/* ChapelLocale.chpl:474 */
static void getChild_chpl(chpl____wide_BaseLocale this_chpl7,
                          int64_t idx_chpl,
                          chpl____wide__ref_locale _retArg_chpl) {
  locale_chpl ret_chpl;
  pureVirtualMethodHalt_chpl(INT64(475), INT32(26));
  chpl_gen_comm_put(((void*)(&ret_chpl)), chpl_nodeFromLocaleID((_retArg_chpl).locale, INT64(0), INT32(0)), (_retArg_chpl).addr, sizeof(locale_chpl), COMMID(5), INT64(474), INT64(26));
  return;
}

/* ChapelLocale.chpl:508 */
static void chpl__auto_destroy_DummyLocale(chpl____wide_DummyLocale this_chpl7) {
  chpl____wide_BaseLocale _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicT_int64_t _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale chpl_macro_tmp_942;
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_943;
  chpl____wide__ref_locale chpl_macro_tmp_944;
  chpl_macro_tmp_942.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_942.addr = ((BaseLocale_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_942;
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(508), INT32(26));
  chpl_macro_tmp_943.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_943.addr = &(((&_parent_destructor_tmp__chpl)->addr)->runningTaskCounter);
  _field_destructor_tmp__chpl = chpl_macro_tmp_943;
  deinit_chpl2(_field_destructor_tmp__chpl);
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(508), INT32(26));
  chpl_macro_tmp_944.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_944.addr = &(((&_parent_destructor_tmp__chpl)->addr)->parent);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_944;
  deinit_chpl14(_field_destructor_tmp__chpl2);
  return;
}

/* ChapelLocale.chpl:509 */
static DummyLocale_chpl _new_chpl4(int64_t _ln_chpl,
                                   int32_t _fn_chpl) {
  DummyLocale_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  BaseLocale_chpl super_tmp_chpl = NULL;
  _ref_locale_chpl i_parent_chpl = NULL;
  locale_chpl parent_chpl;
  chpl____wide__ref_locale tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  AtomicT_int64_t_chpl runningTaskCounter_chpl;
  chpl____wide__ref_AtomicT_int64_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale chpl_macro_tmp_945;
  chpl____wide__ref_locale chpl_macro_tmp_946;
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_947;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_DummyLocale_chpl_object), INT16(6), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((DummyLocale_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_DummyLocale_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  i_parent_chpl = &nilLocale_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_object_chpl;
  chpl_macro_tmp_945.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_945.addr = &parent_chpl;
  tmp_chpl15 = chpl_macro_tmp_945;
  chpl_macro_tmp_946.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_946.addr = i_parent_chpl;
  tmp_chpl16 = chpl_macro_tmp_946;
  init_ASSIGN__chpl(tmp_chpl15, tmp_chpl16);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->parent = parent_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->nPUsLogAcc = INT64(0);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->nPUsLogAll = INT64(0);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->nPUsPhysAcc = INT64(0);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->nPUsPhysAll = INT64(0);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->maxTaskPar = INT64(0);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->callStackSize = UINT64(0);
  chpl_macro_tmp_947.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_947.addr = &runningTaskCounter_chpl;
  tmp_chpl17 = chpl_macro_tmp_947;
  init_chpl2(tmp_chpl17);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->runningTaskCounter = runningTaskCounter_chpl;
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_BaseLocale_chpl;
  ((object_chpl)(((BaseLocale_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_BaseLocale_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_DummyLocale_chpl;
  return initTemp_chpl;
}

/* ChapelLocale.chpl:522 */
static int64_t getChildCount_chpl2(chpl____wide_DummyLocale this_chpl7) {
  return INT64(0);
}

/* ChapelLocale.chpl:525 */
static void getChild_chpl2(chpl____wide_DummyLocale this_chpl7,
                           int64_t idx_chpl,
                           chpl____wide__ref_locale _retArg_chpl) {
  locale_chpl call_tmp_chpl36;
  locale_chpl initTemp_chpl;
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale chpl_macro_tmp_948;
  chpl_macro_tmp_948.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_948.addr = ((BaseLocale_chpl)((&this_chpl7)->addr));
  coerce_tmp_chpl3 = chpl_macro_tmp_948;
  init_chpl20(&initTemp_chpl, coerce_tmp_chpl3);
  call_tmp_chpl36 = initTemp_chpl;
  chpl_gen_comm_put(((void*)(&call_tmp_chpl36)), chpl_nodeFromLocaleID((_retArg_chpl).locale, INT64(0), INT32(0)), (_retArg_chpl).addr, sizeof(locale_chpl), COMMID(6), INT64(525), INT64(26));
  return;
}

/* ChapelLocale.chpl:554 */
static void chpl__auto_destroy_AbstractLocaleModel(chpl____wide_AbstractLocaleModel this_chpl7) {
  _array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl _field_destructor_tmp__chpl;
  _array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl tmp_chpl15;
  chpl____wide_BaseLocale _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicT_int64_t _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale _field_destructor_tmp__chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_1_int64_t_F_locale_int64_t chpl_macro_tmp_949;
  chpl____wide_BaseLocale chpl_macro_tmp_950;
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_951;
  chpl____wide__ref_locale chpl_macro_tmp_952;
  chpl_check_nil((&this_chpl7)->addr, INT64(556), INT32(26));
  chpl_macro_tmp_949.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_949.addr = &(((&this_chpl7)->addr)->chpl_singletonThisLocaleArray);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_949).locale, INT64(0), INT32(0)), (chpl_macro_tmp_949).addr, sizeof(_array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl), COMMID(7), INT64(556), INT64(26));
  _field_destructor_tmp__chpl = tmp_chpl15;
  chpl__autoDestroy3(&_field_destructor_tmp__chpl);
  chpl_macro_tmp_950.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_950.addr = ((BaseLocale_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_950;
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(554), INT32(26));
  chpl_macro_tmp_951.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_951.addr = &(((&_parent_destructor_tmp__chpl)->addr)->runningTaskCounter);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_951;
  deinit_chpl2(_field_destructor_tmp__chpl2);
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(554), INT32(26));
  chpl_macro_tmp_952.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_952.addr = &(((&_parent_destructor_tmp__chpl)->addr)->parent);
  _field_destructor_tmp__chpl3 = chpl_macro_tmp_952;
  deinit_chpl14(_field_destructor_tmp__chpl3);
  return;
}

/* ChapelLocale.chpl:597 */
static void chpl__auto_destroy_AbstractRootLocale(chpl____wide_AbstractRootLocale this_chpl7) {
  chpl____wide_BaseLocale _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicT_int64_t _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale chpl_macro_tmp_953;
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_954;
  chpl____wide__ref_locale chpl_macro_tmp_955;
  chpl_macro_tmp_953.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_953.addr = ((BaseLocale_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_953;
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(597), INT32(26));
  chpl_macro_tmp_954.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_954.addr = &(((&_parent_destructor_tmp__chpl)->addr)->runningTaskCounter);
  _field_destructor_tmp__chpl = chpl_macro_tmp_954;
  deinit_chpl2(_field_destructor_tmp__chpl);
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(597), INT32(26));
  chpl_macro_tmp_955.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_955.addr = &(((&_parent_destructor_tmp__chpl)->addr)->parent);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_955;
  deinit_chpl14(_field_destructor_tmp__chpl2);
  return;
}

/* ChapelLocale.chpl:618 */
static void localeIDtoLocale_chpl(chpl____wide_AbstractRootLocale this_chpl7,
                                  chpl____wide__ref_chpl_localeID_t id_chpl2,
                                  chpl____wide__ref_locale _retArg_chpl) {
  locale_chpl ret_chpl;
  pureVirtualMethodHalt_chpl(INT64(619), INT32(26));
  chpl_gen_comm_put(((void*)(&ret_chpl)), chpl_nodeFromLocaleID((_retArg_chpl).locale, INT64(0), INT32(0)), (_retArg_chpl).addr, sizeof(locale_chpl), COMMID(8), INT64(618), INT64(26));
  return;
}

/* ChapelLocale.chpl:670 */
static void warmupRuntime_chpl(void) {
  range_int64_t_bounded_F_chpl tmpIter_chpl;
  range_int64_t_boundedLow_F_chpl call_tmp_chpl36;
  range_int64_t_boundedLow_F_chpl ret_tmp_chpl;
  uint32_t call_tmp_chpl37;
  range_int64_t_bounded_F_chpl ret_tmp_chpl2;
  chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount_chpl = NULL;
  chpl___EndCount_AtomicT_int64_t_int64_t new_temp_chpl = NULL;
  int64_t numTasks_chpl;
  range_int64_t_bounded_F_chpl _ic__F0_this_chpl;
  int64_t i_chpl;
  range_int64_t_bounded_F_chpl this_chpl7;
  int64_t coerce_tmp_chpl3;
  range_int64_t_bounded_F_chpl this_chpl8;
  int64_t end_chpl;
  _class_localscoforall_fn_chpl4 _args_forcoforall_fn_chpl = NULL;
  c_void_ptr _args_vforcoforall_fn_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  chpl__class_localscoforall_fn_chpl4_object chpl_macro_tmp_956;
  chpl____wide__nilType chpl_macro_tmp_957;
  chpl____wide_Error chpl_macro_tmp_958;
  chpl_build_low_bounded_range(INT64(0), &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  call_tmp_chpl37 = chpl_task_getFixedNumThreads();
  chpl___POUND_(call_tmp_chpl36, ((int64_t)(call_tmp_chpl37)), &ret_tmp_chpl2);
  tmpIter_chpl = ret_tmp_chpl2;
  new_temp_chpl = _new_chpl(INT64(672), INT32(26));
  _coforallCount_chpl = new_temp_chpl;
  numTasks_chpl = chpl_boundedCoforallSize(tmpIter_chpl);
  _upEndCount_chpl(_coforallCount_chpl, numTasks_chpl);
  chpl_resetTaskSpawn(numTasks_chpl);
  _ic__F0_this_chpl = tmpIter_chpl;
  checkIfIterWillOverflow_chpl(tmpIter_chpl, UINT8(true));
  i_chpl = INT64(0);
  this_chpl7 = _ic__F0_this_chpl;
  coerce_tmp_chpl3 = (&this_chpl7)->_low;
  this_chpl8 = _ic__F0_this_chpl;
  end_chpl = (&this_chpl8)->_high;
  for (i_chpl = coerce_tmp_chpl3; ((i_chpl <= end_chpl)); i_chpl += INT64(1)) {
    _args_forcoforall_fn_chpl = ((_class_localscoforall_fn_chpl4)(&chpl_macro_tmp_956));
    chpl_check_nil(_args_forcoforall_fn_chpl, INT64(672), INT32(26));
    (_args_forcoforall_fn_chpl)->_0__coforallCount = _coforallCount_chpl;
    chpl_check_nil(_args_forcoforall_fn_chpl, INT64(672), INT32(26));
    (_args_forcoforall_fn_chpl)->_1_i = i_chpl;
    _args_vforcoforall_fn_chpl = ((void*)(_args_forcoforall_fn_chpl));
    /*** wrapcoforall_fn_chpl4 ***/ chpl_taskAddCoStmt(chpl_task_getRequestedSubloc(), INT64(75), ((chpl_task_bundle_p)(_args_vforcoforall_fn_chpl)), sizeof(chpl__class_localscoforall_fn_chpl4_object), INT64(672), INT32(26));
  }
  chpl_macro_tmp_957.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_957.addr = nil;
  chpl_macro_tmp_958.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_958.addr = NULL;
  error_chpl = chpl_macro_tmp_958;
  tmp_chpl15 = &error_chpl;
  _waitEndCount_chpl3(_coforallCount_chpl, numTasks_chpl, tmp_chpl15);
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, INT64(672), INT32(26));
  }
  chpl__delete3(_coforallCount_chpl);
  return;
}

/* ChapelLocale.chpl:672 */
static void coforall_fn_chpl4(chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount_chpl,
                              int64_t i_chpl) {
  int64_t inlineImm_chpl;
  uint64_t call_tmp_chpl36;
  uint64_t call_tmp_chpl37;
  uint64_t call_tmp_chpl38;
  int16_t call_tmp_chpl39;
  c_void_ptr call_tmp_chpl40;
  c_ptr_int64_t_chpl call_tmp_chpl41 = NULL;
  c_ptr_int64_t_chpl p_chpl = NULL;
  _ref_int64_t_chpl call_tmp_chpl42 = NULL;
  inlineImm_chpl = INT64(1);
  checkValue_chpl(INT64(1));
  call_tmp_chpl36 = ((uint64_t)(inlineImm_chpl));
  call_tmp_chpl37 = sizeof(int64_t);
  call_tmp_chpl38 = (call_tmp_chpl36 * call_tmp_chpl37);
  call_tmp_chpl39 = offset_ARRAY_ELEMENTS_chpl();
  call_tmp_chpl40 = chpl_here_alloc2(call_tmp_chpl38, call_tmp_chpl39, INT64(673), INT32(26));
  call_tmp_chpl41 = ((c_ptr_int64_t_chpl)(call_tmp_chpl40));
  p_chpl = call_tmp_chpl41;
  call_tmp_chpl42 = (p_chpl + INT64(0));
  *(call_tmp_chpl42) = i_chpl;
  chpl_here_free(((c_void_ptr)(call_tmp_chpl41)), INT64(675), INT32(26));
  return;
}

/* ChapelLocale.chpl:672 */
static void wrapcoforall_fn_chpl4(_class_localscoforall_fn_chpl4 c_chpl) {
  chpl___EndCount_AtomicT_int64_t_int64_t _0__coforallCount_chpl = NULL;
  chpl_rmem_consist_acquire(INT64(672), INT32(26));
  chpl_check_nil(c_chpl, INT64(672), INT32(26));
  _0__coforallCount_chpl = (c_chpl)->_0__coforallCount;
  chpl_check_nil(c_chpl, INT64(672), INT32(26));
  coforall_fn_chpl4(_0__coforallCount_chpl, (c_chpl)->_1_i);
  chpl_check_nil(c_chpl, INT64(672), INT32(26));
  _downEndCount_chpl((c_chpl)->_0__coforallCount, nil);
  return;
}

/* ChapelLocale.chpl:687 */
static void chpl_init_rootLocale(void) {
  string_chpl local__str_literal_75_chpl;
  string_chpl local__str_literal_737_chpl;
  chpl_bool tmp_chpl15;
  chpl____wide__ref_locale tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  RootLocale_chpl new_temp_chpl = NULL;
  BaseLocale_chpl tmp_chpl17 = NULL;
  chpl____wide_BaseLocale tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  RootLocale_chpl _formal_type_tmp__chpl = NULL;
  chpl____wide_RootLocale ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_RootLocale call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale chpl_macro_tmp_959;
  chpl____wide_BaseLocale chpl_macro_tmp_960;
  chpl____wide__ref__wide_BaseLocale chpl_macro_tmp_961;
  chpl____wide__ref_locale chpl_macro_tmp_962;
  chpl____wide__ref__wide_BaseLocale chpl_macro_tmp_963;
  chpl____wide_object chpl_macro_tmp_964;
  chpl____wide__nilType chpl_macro_tmp_965;
  chpl____wide_object chpl_macro_tmp_966;
  chpl____wide_RootLocale chpl_macro_tmp_967;
  chpl____wide__ref_int32_t chpl_macro_tmp_968;
  int32_t chpl_macro_tmp_969;
  int32_t chpl_macro_tmp_970;
  chpl____wide_RootLocale chpl_macro_tmp_971;
  chpl____wide_object chpl_macro_tmp_972;
  chpl____wide__nilType chpl_macro_tmp_973;
  chpl____wide_object chpl_macro_tmp_974;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  local__str_literal_737_chpl = _str_literal_737_chpl /* "Cannot run a program compiled with --local in more than 1 locale" */;
  if (numLocales_chpl > INT64(1)) {
    tmp_chpl15 = UINT8(false);
  } else {
    tmp_chpl15 = UINT8(false);
  }
  if (tmp_chpl15) {
    halt_chpl(&local__str_literal_737_chpl, INT64(689), INT32(26));
  }
  chpl_check_nil((&origRootLocale_chpl)->addr, INT64(691), INT32(26));
  chpl_macro_tmp_959.locale = (&origRootLocale_chpl)->locale;
  chpl_macro_tmp_959.addr = &(((&origRootLocale_chpl)->addr)->value);
  tmp_chpl16 = chpl_macro_tmp_959;
  new_temp_chpl = _new_chpl11(INT64(691), INT32(26));
  tmp_chpl17 = ((BaseLocale_chpl)(new_temp_chpl));
  chpl_macro_tmp_960.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_960.addr = tmp_chpl17;
  tmp_chpl18 = chpl_macro_tmp_960;
  chpl_macro_tmp_961.locale = (tmp_chpl16).locale;
  chpl_macro_tmp_961.addr = &(((tmp_chpl16).addr)->_instance);
  chpl_gen_comm_put(((void*)(&tmp_chpl18)), chpl_nodeFromLocaleID((chpl_macro_tmp_961).locale, INT64(0), INT32(0)), (chpl_macro_tmp_961).addr, sizeof(chpl____wide_BaseLocale), COMMID(9), INT64(691), INT64(26));
  chpl_check_nil((&origRootLocale_chpl)->addr, INT64(692), INT32(26));
  chpl_macro_tmp_962.locale = (&origRootLocale_chpl)->locale;
  chpl_macro_tmp_962.addr = &(((&origRootLocale_chpl)->addr)->value);
  tmp_chpl19 = chpl_macro_tmp_962;
  chpl_macro_tmp_963.locale = (tmp_chpl19).locale;
  chpl_macro_tmp_963.addr = &(((tmp_chpl19).addr)->_instance);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID((chpl_macro_tmp_963).locale, INT64(0), INT32(0)), (chpl_macro_tmp_963).addr, sizeof(chpl____wide_BaseLocale), COMMID(10), INT64(692), INT64(26));
  chpl_macro_tmp_964.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_964.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_964;
  chpl_macro_tmp_965.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_965.addr = nil;
  chpl_macro_tmp_966.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_966.addr = NULL;
  tmp_chpl20 = chpl_macro_tmp_966;
  if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl20)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl20)->locale, INT64(0), INT32(0)))))) {
    chpl_macro_tmp_967.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_967.addr = ((RootLocale_chpl)(nil));
    ret_chpl = chpl_macro_tmp_967;
    goto _end__COLON__chpl;
  }
  chpl_macro_tmp_968.locale = (coerce_tmp_chpl3).locale;
  chpl_macro_tmp_968.addr = &(((object_chpl)((coerce_tmp_chpl3).addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_969)), chpl_nodeFromLocaleID((chpl_macro_tmp_968).locale, INT64(0), INT32(0)), (chpl_macro_tmp_968).addr, sizeof(int32_t), COMMID(11), INT64(692), INT64(26));
  chpl_macro_tmp_970 = chpl_macro_tmp_969;
  chpl_macro_tmp_971.locale = (coerce_tmp_chpl3).locale;
  chpl_macro_tmp_971.addr = ( (((chpl__cid_RootLocale_chpl <= chpl_macro_tmp_970) && (chpl_macro_tmp_970 <= chpl_subclass_max_id[chpl__cid_RootLocale_chpl])))?(((RootLocale_chpl)((coerce_tmp_chpl3).addr))):(((RootLocale_chpl)(NULL))) );
  call_tmp_chpl36 = chpl_macro_tmp_971;
  ret_chpl = call_tmp_chpl36;
  _end__COLON__chpl:;
  chpl_macro_tmp_972.locale = (&ret_chpl)->locale;
  chpl_macro_tmp_972.addr = ((object_chpl)((&ret_chpl)->addr));
  coerce_tmp_chpl5 = chpl_macro_tmp_972;
  chpl_macro_tmp_973.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_973.addr = nil;
  chpl_macro_tmp_974.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_974.addr = NULL;
  tmp_chpl21 = chpl_macro_tmp_974;
  if (! (((&coerce_tmp_chpl5)->addr != (&tmp_chpl21)->addr) || ((!(! (&coerce_tmp_chpl5)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl5)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl21)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(692), INT32(26));
  }
  chpl_check_nil((&ret_chpl)->addr, INT64(692), INT32(26));
  setup_chpl2(ret_chpl);
  return;
}

/* ChapelLocale.chpl:700 */
static void chpl_rootLocaleInitPrivate(int64_t locIdx_chpl) {
  int64_t local_numLocales_chpl;
  string_chpl local__str_literal_75_chpl;
  chpl____wide__ref_locale tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  RootLocale_chpl new_temp_chpl = NULL;
  RootLocale_chpl newRootLocale_chpl = NULL;
  chpl____wide__ref_locale tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  RootLocale_chpl _formal_type_tmp__chpl = NULL;
  chpl____wide_RootLocale ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_RootLocale call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_1_int64_t_F_locale_int64_t call_tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t ret_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_locale origRL_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_locale coerce_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_1_int64_t_F_locale_int64_t call_tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_RootLocale tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t ret_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_locale newRL_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_locale coerce_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale call_tmp_chpl39 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale call_tmp_chpl40 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseLocale_chpl tmp_chpl21 = NULL;
  chpl____wide_BaseLocale tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  RootLocale_chpl _formal_type_tmp__chpl2 = NULL;
  chpl____wide_RootLocale ret_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_RootLocale call_tmp_chpl41 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_1_int64_t_F_locale_int64_t call_tmp_chpl42 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale chpl_macro_tmp_975;
  chpl____wide__ref_locale chpl_macro_tmp_976;
  chpl____wide__ref_locale chpl_macro_tmp_977;
  chpl____wide__ref__wide_BaseLocale chpl_macro_tmp_978;
  chpl____wide_object chpl_macro_tmp_979;
  chpl____wide__nilType chpl_macro_tmp_980;
  chpl____wide_object chpl_macro_tmp_981;
  chpl____wide_RootLocale chpl_macro_tmp_982;
  chpl____wide__ref_int32_t chpl_macro_tmp_983;
  int32_t chpl_macro_tmp_984;
  int32_t chpl_macro_tmp_985;
  chpl____wide_RootLocale chpl_macro_tmp_986;
  chpl____wide_object chpl_macro_tmp_987;
  chpl____wide__nilType chpl_macro_tmp_988;
  chpl____wide_object chpl_macro_tmp_989;
  chpl____wide__ref__wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t chpl_macro_tmp_990;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_991;
  chpl____wide_RootLocale chpl_macro_tmp_992;
  chpl____wide__ref__wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t chpl_macro_tmp_993;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_994;
  chpl____wide__ref_locale chpl_macro_tmp_995;
  chpl____wide__ref_locale chpl_macro_tmp_996;
  chpl____wide_BaseLocale chpl_macro_tmp_997;
  chpl____wide_object chpl_macro_tmp_998;
  chpl____wide__nilType chpl_macro_tmp_999;
  chpl____wide_object chpl_macro_tmp_1000;
  chpl____wide_RootLocale chpl_macro_tmp_1001;
  chpl____wide__ref_int32_t chpl_macro_tmp_1002;
  int32_t chpl_macro_tmp_1003;
  int32_t chpl_macro_tmp_1004;
  chpl____wide_RootLocale chpl_macro_tmp_1005;
  chpl____wide_object chpl_macro_tmp_1006;
  chpl____wide__nilType chpl_macro_tmp_1007;
  chpl____wide_object chpl_macro_tmp_1008;
  local_numLocales_chpl = numLocales_chpl;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  chpl_check_nil((&origRootLocale_chpl)->addr, INT64(594), INT32(26));
  chpl_macro_tmp_975.locale = (&origRootLocale_chpl)->locale;
  chpl_macro_tmp_975.addr = &(((&origRootLocale_chpl)->addr)->value);
  tmp_chpl15 = chpl_macro_tmp_975;
  chpl_macro_tmp_976.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_976.addr = &rootLocale_chpl;
  tmp_chpl16 = chpl_macro_tmp_976;
  chpl___ASSIGN_2(tmp_chpl16, tmp_chpl15);
  if (locIdx_chpl != INT64(0)) {
    new_temp_chpl = _new_chpl11(INT64(707), INT32(26));
    newRootLocale_chpl = new_temp_chpl;
    chpl_check_nil((&origRootLocale_chpl)->addr, INT64(712), INT32(26));
    chpl_macro_tmp_977.locale = (&origRootLocale_chpl)->locale;
    chpl_macro_tmp_977.addr = &(((&origRootLocale_chpl)->addr)->value);
    tmp_chpl17 = chpl_macro_tmp_977;
    chpl_macro_tmp_978.locale = (tmp_chpl17).locale;
    chpl_macro_tmp_978.addr = &(((tmp_chpl17).addr)->_instance);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID((chpl_macro_tmp_978).locale, INT64(0), INT32(0)), (chpl_macro_tmp_978).addr, sizeof(chpl____wide_BaseLocale), COMMID(12), INT64(712), INT64(26));
    chpl_macro_tmp_979.locale = (&coerce_tmp_chpl3)->locale;
    chpl_macro_tmp_979.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
    coerce_tmp_chpl4 = chpl_macro_tmp_979;
    chpl_macro_tmp_980.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_980.addr = nil;
    chpl_macro_tmp_981.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_981.addr = NULL;
    tmp_chpl18 = chpl_macro_tmp_981;
    if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl18)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl18)->locale, INT64(0), INT32(0)))))) {
      chpl_macro_tmp_982.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_982.addr = ((RootLocale_chpl)(nil));
      ret_chpl = chpl_macro_tmp_982;
      goto _end__COLON__chpl;
    }
    chpl_macro_tmp_983.locale = (coerce_tmp_chpl3).locale;
    chpl_macro_tmp_983.addr = &(((object_chpl)((coerce_tmp_chpl3).addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_984)), chpl_nodeFromLocaleID((chpl_macro_tmp_983).locale, INT64(0), INT32(0)), (chpl_macro_tmp_983).addr, sizeof(int32_t), COMMID(13), INT64(712), INT64(26));
    chpl_macro_tmp_985 = chpl_macro_tmp_984;
    chpl_macro_tmp_986.locale = (coerce_tmp_chpl3).locale;
    chpl_macro_tmp_986.addr = ( (((chpl__cid_RootLocale_chpl <= chpl_macro_tmp_985) && (chpl_macro_tmp_985 <= chpl_subclass_max_id[chpl__cid_RootLocale_chpl])))?(((RootLocale_chpl)((coerce_tmp_chpl3).addr))):(((RootLocale_chpl)(NULL))) );
    call_tmp_chpl36 = chpl_macro_tmp_986;
    ret_chpl = call_tmp_chpl36;
    _end__COLON__chpl:;
    chpl_macro_tmp_987.locale = (&ret_chpl)->locale;
    chpl_macro_tmp_987.addr = ((object_chpl)((&ret_chpl)->addr));
    coerce_tmp_chpl5 = chpl_macro_tmp_987;
    chpl_macro_tmp_988.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_988.addr = nil;
    chpl_macro_tmp_989.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_989.addr = NULL;
    tmp_chpl19 = chpl_macro_tmp_989;
    if (! (((&coerce_tmp_chpl5)->addr != (&tmp_chpl19)->addr) || ((!(! (&coerce_tmp_chpl5)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl5)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl19)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(712), INT32(26));
    }
    chpl_check_nil((&ret_chpl)->addr, INT64(712), INT32(26));
    call_tmp_chpl37 = getDefaultLocaleArray_chpl(ret_chpl);
    chpl_macro_tmp_990.locale = (call_tmp_chpl37).locale;
    chpl_macro_tmp_990.addr = &(((call_tmp_chpl37).addr)->_instance);
    chpl_gen_comm_get(((void*)(&ret_chpl2)), chpl_nodeFromLocaleID((chpl_macro_tmp_990).locale, INT64(0), INT32(0)), (chpl_macro_tmp_990).addr, sizeof(chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t), COMMID(14), INT64(713), INT64(26));
    coerce_tmp_chpl6 = ret_chpl2;
    chpl_check_nil((&coerce_tmp_chpl6)->addr, INT64(713), INT32(26));
    chpl_macro_tmp_991.locale = (&coerce_tmp_chpl6)->locale;
    chpl_macro_tmp_991.addr = &(((&coerce_tmp_chpl6)->addr)->shiftedData);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl7)), chpl_nodeFromLocaleID((chpl_macro_tmp_991).locale, INT64(0), INT32(0)), (chpl_macro_tmp_991).addr, sizeof(chpl____wide__ddata_locale), COMMID(15), INT64(713), INT64(26));
    origRL_chpl = coerce_tmp_chpl7;
    chpl_macro_tmp_992.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_992.addr = new_temp_chpl;
    tmp_chpl20 = chpl_macro_tmp_992;
    chpl_check_nil((&tmp_chpl20)->addr, INT64(714), INT32(26));
    call_tmp_chpl38 = getDefaultLocaleArray_chpl(tmp_chpl20);
    chpl_macro_tmp_993.locale = (call_tmp_chpl38).locale;
    chpl_macro_tmp_993.addr = &(((call_tmp_chpl38).addr)->_instance);
    chpl_gen_comm_get(((void*)(&ret_chpl3)), chpl_nodeFromLocaleID((chpl_macro_tmp_993).locale, INT64(0), INT32(0)), (chpl_macro_tmp_993).addr, sizeof(chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t), COMMID(16), INT64(714), INT64(26));
    coerce_tmp_chpl8 = ret_chpl3;
    chpl_check_nil((&coerce_tmp_chpl8)->addr, INT64(714), INT32(26));
    chpl_macro_tmp_994.locale = (&coerce_tmp_chpl8)->locale;
    chpl_macro_tmp_994.addr = &(((&coerce_tmp_chpl8)->addr)->shiftedData);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl9)), chpl_nodeFromLocaleID((chpl_macro_tmp_994).locale, INT64(0), INT32(0)), (chpl_macro_tmp_994).addr, sizeof(chpl____wide__ddata_locale), COMMID(17), INT64(714), INT64(26));
    newRL_chpl = coerce_tmp_chpl9;
    chpl_macro_tmp_995.locale = (&newRL_chpl)->locale;
    chpl_macro_tmp_995.addr = ((&newRL_chpl)->addr + INT64(0));
    call_tmp_chpl39 = chpl_macro_tmp_995;
    chpl_macro_tmp_996.locale = (&origRL_chpl)->locale;
    chpl_macro_tmp_996.addr = ((&origRL_chpl)->addr + INT64(0));
    call_tmp_chpl40 = chpl_macro_tmp_996;
    chpl_gen_comm_get(((void*)((&call_tmp_chpl39)->addr)), INT64(0), (&call_tmp_chpl40)->addr, (sizeof(locale_chpl) * ((uint64_t)(local_numLocales_chpl))), COMMID(18), INT64(718), INT32(26));
    tmp_chpl21 = ((BaseLocale_chpl)(newRootLocale_chpl));
    chpl_macro_tmp_997.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_997.addr = tmp_chpl21;
    tmp_chpl22 = chpl_macro_tmp_997;
    (&rootLocale_chpl)->_instance = tmp_chpl22;
  }
  if (locIdx_chpl != INT64(0)) {
    coerce_tmp_chpl10 = (&rootLocale_chpl)->_instance;
    chpl_macro_tmp_998.locale = (&coerce_tmp_chpl10)->locale;
    chpl_macro_tmp_998.addr = ((object_chpl)((&coerce_tmp_chpl10)->addr));
    coerce_tmp_chpl11 = chpl_macro_tmp_998;
    chpl_macro_tmp_999.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_999.addr = nil;
    chpl_macro_tmp_1000.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1000.addr = NULL;
    tmp_chpl23 = chpl_macro_tmp_1000;
    if (! (((&coerce_tmp_chpl11)->addr != (&tmp_chpl23)->addr) || ((!(! (&coerce_tmp_chpl11)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl11)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl23)->locale, INT64(0), INT32(0)))))) {
      chpl_macro_tmp_1001.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1001.addr = ((RootLocale_chpl)(nil));
      ret_chpl4 = chpl_macro_tmp_1001;
      goto _end__COLON__chpl2;
    }
    chpl_macro_tmp_1002.locale = (coerce_tmp_chpl10).locale;
    chpl_macro_tmp_1002.addr = &(((object_chpl)((coerce_tmp_chpl10).addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1003)), chpl_nodeFromLocaleID((chpl_macro_tmp_1002).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1002).addr, sizeof(int32_t), COMMID(19), INT64(730), INT64(26));
    chpl_macro_tmp_1004 = chpl_macro_tmp_1003;
    chpl_macro_tmp_1005.locale = (coerce_tmp_chpl10).locale;
    chpl_macro_tmp_1005.addr = ( (((chpl__cid_RootLocale_chpl <= chpl_macro_tmp_1004) && (chpl_macro_tmp_1004 <= chpl_subclass_max_id[chpl__cid_RootLocale_chpl])))?(((RootLocale_chpl)((coerce_tmp_chpl10).addr))):(((RootLocale_chpl)(NULL))) );
    call_tmp_chpl41 = chpl_macro_tmp_1005;
    ret_chpl4 = call_tmp_chpl41;
    _end__COLON__chpl2:;
    chpl_macro_tmp_1006.locale = (&ret_chpl4)->locale;
    chpl_macro_tmp_1006.addr = ((object_chpl)((&ret_chpl4)->addr));
    coerce_tmp_chpl12 = chpl_macro_tmp_1006;
    chpl_macro_tmp_1007.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1007.addr = nil;
    chpl_macro_tmp_1008.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1008.addr = NULL;
    tmp_chpl24 = chpl_macro_tmp_1008;
    if (! (((&coerce_tmp_chpl12)->addr != (&tmp_chpl24)->addr) || ((!(! (&coerce_tmp_chpl12)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl12)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl24)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(730), INT32(26));
    }
    chpl_check_nil((&ret_chpl4)->addr, INT64(730), INT32(26));
    call_tmp_chpl42 = getDefaultLocaleArray_chpl(ret_chpl4);
    Locales_chpl = call_tmp_chpl42;
  }
  rootLocaleInitialized_chpl = UINT8(true);
  return;
}

/* ChapelLocale.chpl:737 */
static void chpl_defaultLocaleInitPrivate(void) {
  string_chpl local__str_literal_75_chpl;
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  RootLocale_chpl _formal_type_tmp__chpl = NULL;
  chpl____wide_RootLocale ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_RootLocale call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_1_int64_t_F_locale_int64_t call_tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t_chpl i_chpl;
  _ref__tuple_1_star_int64_t_chpl i_i_chpl = NULL;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t ret_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t coerce_tmp_chpl7;
  chpl____wide__ddata_locale coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale call_tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object chpl_macro_tmp_1009;
  chpl____wide__nilType chpl_macro_tmp_1010;
  chpl____wide_object chpl_macro_tmp_1011;
  chpl____wide_RootLocale chpl_macro_tmp_1012;
  chpl____wide__ref_int32_t chpl_macro_tmp_1013;
  int32_t chpl_macro_tmp_1014;
  int32_t chpl_macro_tmp_1015;
  chpl____wide_RootLocale chpl_macro_tmp_1016;
  chpl____wide_object chpl_macro_tmp_1017;
  chpl____wide__nilType chpl_macro_tmp_1018;
  chpl____wide_object chpl_macro_tmp_1019;
  chpl____wide__ref__wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t chpl_macro_tmp_1020;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_1021;
  chpl____wide__ref_locale chpl_macro_tmp_1022;
  chpl____wide__ref__wide_BaseLocale chpl_macro_tmp_1023;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = (&rootLocale_chpl)->_instance;
  chpl_macro_tmp_1009.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_1009.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_1009;
  chpl_macro_tmp_1010.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1010.addr = nil;
  chpl_macro_tmp_1011.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1011.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_1011;
  if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0)))))) {
    chpl_macro_tmp_1012.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1012.addr = ((RootLocale_chpl)(nil));
    ret_chpl = chpl_macro_tmp_1012;
    goto _end__COLON__chpl;
  }
  chpl_macro_tmp_1013.locale = (coerce_tmp_chpl3).locale;
  chpl_macro_tmp_1013.addr = &(((object_chpl)((coerce_tmp_chpl3).addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1014)), chpl_nodeFromLocaleID((chpl_macro_tmp_1013).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1013).addr, sizeof(int32_t), COMMID(20), INT64(739), INT64(26));
  chpl_macro_tmp_1015 = chpl_macro_tmp_1014;
  chpl_macro_tmp_1016.locale = (coerce_tmp_chpl3).locale;
  chpl_macro_tmp_1016.addr = ( (((chpl__cid_RootLocale_chpl <= chpl_macro_tmp_1015) && (chpl_macro_tmp_1015 <= chpl_subclass_max_id[chpl__cid_RootLocale_chpl])))?(((RootLocale_chpl)((coerce_tmp_chpl3).addr))):(((RootLocale_chpl)(NULL))) );
  call_tmp_chpl36 = chpl_macro_tmp_1016;
  ret_chpl = call_tmp_chpl36;
  _end__COLON__chpl:;
  chpl_macro_tmp_1017.locale = (&ret_chpl)->locale;
  chpl_macro_tmp_1017.addr = ((object_chpl)((&ret_chpl)->addr));
  coerce_tmp_chpl5 = chpl_macro_tmp_1017;
  chpl_macro_tmp_1018.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1018.addr = nil;
  chpl_macro_tmp_1019.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1019.addr = NULL;
  tmp_chpl16 = chpl_macro_tmp_1019;
  if (! (((&coerce_tmp_chpl5)->addr != (&tmp_chpl16)->addr) || ((!(! (&coerce_tmp_chpl5)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl5)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl16)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(739), INT32(26));
  }
  chpl_check_nil((&ret_chpl)->addr, INT64(739), INT32(26));
  call_tmp_chpl37 = getDefaultLocaleArray_chpl(ret_chpl);
  *(i_chpl + INT64(0)) = INT64(0);
  i_i_chpl = &i_chpl;
  chpl_macro_tmp_1020.locale = (call_tmp_chpl37).locale;
  chpl_macro_tmp_1020.addr = &(((call_tmp_chpl37).addr)->_instance);
  chpl_gen_comm_get(((void*)(&ret_chpl2)), chpl_nodeFromLocaleID((chpl_macro_tmp_1020).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1020).addr, sizeof(chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t), COMMID(21), INT64(740), INT64(26));
  checkAccess_chpl(call_tmp_chpl37, i_i_chpl, ret_chpl2, INT64(740), INT32(26));
  coerce_tmp_chpl6 = ret_chpl2;
  coerce_tmp_chpl7 = *(i_chpl + INT64(0));
  chpl_check_nil((&coerce_tmp_chpl6)->addr, INT64(740), INT32(26));
  chpl_macro_tmp_1021.locale = (&coerce_tmp_chpl6)->locale;
  chpl_macro_tmp_1021.addr = &(((&coerce_tmp_chpl6)->addr)->shiftedData);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl8)), chpl_nodeFromLocaleID((chpl_macro_tmp_1021).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1021).addr, sizeof(chpl____wide__ddata_locale), COMMID(22), INT64(740), INT64(26));
  chpl_macro_tmp_1022.locale = (&coerce_tmp_chpl8)->locale;
  chpl_macro_tmp_1022.addr = ((&coerce_tmp_chpl8)->addr + coerce_tmp_chpl7);
  call_tmp_chpl38 = chpl_macro_tmp_1022;
  chpl_macro_tmp_1023.locale = (call_tmp_chpl38).locale;
  chpl_macro_tmp_1023.addr = &(((call_tmp_chpl38).addr)->_instance);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl9)), chpl_nodeFromLocaleID((chpl_macro_tmp_1023).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1023).addr, sizeof(chpl____wide_BaseLocale), COMMID(23), INT64(740), INT64(26));
  (&defaultLocale_chpl)->_instance = coerce_tmp_chpl9;
  return;
}

/* ChapelLocale.chpl:744 */
static void chpl_singletonCurrentLocaleInitPrivateSublocs(locale_chpl * arg_chpl) {
  string_chpl local__str_literal_743_chpl;
  string_chpl local__str_literal_596_chpl;
  string_chpl local__str_literal_75_chpl;
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl36;
  int64_t tmp_x0_chpl;
  int64_t tmp_x1_chpl;
  int64_t _ic__F1_high_chpl;
  int64_t i_chpl;
  locale_chpl call_tmp_chpl37;
  chpl____wide_BaseLocale coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  locale_chpl ret_tmp_chpl;
  _ref_locale_chpl tmp_chpl17 = NULL;
  chpl____wide__ref_locale tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  locale_chpl subloc_chpl;
  chpl____wide_BaseLocale coerce_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  AbstractLocaleModel_chpl _formal_type_tmp__chpl = NULL;
  chpl____wide_AbstractLocaleModel ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_AbstractLocaleModel call_tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_AbstractLocaleModel coerce_tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_1_int64_t_F_locale_int64_t call_tmp_chpl39 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t_chpl i_chpl2;
  _ref__tuple_1_star_int64_t_chpl i_i_chpl = NULL;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t ret_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t coerce_tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t coerce_tmp_chpl13;
  chpl____wide__ddata_locale coerce_tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale call_tmp_chpl40 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl i_x_chpl = NULL;
  chpl____wide__ref_locale tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object chpl_macro_tmp_1024;
  chpl____wide__nilType chpl_macro_tmp_1025;
  chpl____wide_object chpl_macro_tmp_1026;
  chpl____wide__ref_int32_t chpl_macro_tmp_1027;
  int32_t chpl_macro_tmp_1028;
  chpl____wide_object chpl_macro_tmp_1029;
  chpl____wide__nilType chpl_macro_tmp_1030;
  chpl____wide_object chpl_macro_tmp_1031;
  chpl____wide__ref_locale chpl_macro_tmp_1032;
  chpl____wide__ref_int32_t chpl_macro_tmp_1033;
  int32_t chpl_macro_tmp_1034;
  chpl____wide_object chpl_macro_tmp_1035;
  chpl____wide__nilType chpl_macro_tmp_1036;
  chpl____wide_object chpl_macro_tmp_1037;
  chpl____wide_AbstractLocaleModel chpl_macro_tmp_1038;
  chpl____wide__ref_int32_t chpl_macro_tmp_1039;
  int32_t chpl_macro_tmp_1040;
  int32_t chpl_macro_tmp_1041;
  chpl____wide_AbstractLocaleModel chpl_macro_tmp_1042;
  chpl____wide_object chpl_macro_tmp_1043;
  chpl____wide__nilType chpl_macro_tmp_1044;
  chpl____wide_object chpl_macro_tmp_1045;
  chpl____wide_object chpl_macro_tmp_1046;
  chpl____wide__nilType chpl_macro_tmp_1047;
  chpl____wide_object chpl_macro_tmp_1048;
  chpl____wide__ref__wide__array_DefaultRectangularArr_1_int64_t_F_locale_int64_t chpl_macro_tmp_1049;
  chpl____wide__ref__wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t chpl_macro_tmp_1050;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_1051;
  chpl____wide__ref_locale chpl_macro_tmp_1052;
  chpl____wide_BaseLocale chpl_macro_tmp_1053;
  chpl____wide__ref__wide_BaseLocale chpl_macro_tmp_1054;
  chpl____wide__ref_locale chpl_macro_tmp_1055;
  local__str_literal_743_chpl = _str_literal_743_chpl /* "error in locale initialization" */;
  local__str_literal_596_chpl = _str_literal_596_chpl /* "With a negative count, the range must have a last index." */;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = (arg_chpl)->_instance;
  chpl_macro_tmp_1024.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_1024.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_1024;
  chpl_macro_tmp_1025.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1025.addr = nil;
  chpl_macro_tmp_1026.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1026.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_1026;
  if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(745), INT32(26));
  }
  chpl_check_nil((&coerce_tmp_chpl3)->addr, INT64(745), INT32(26));
  chpl_macro_tmp_1027.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_1027.addr = &(((object_chpl)((&coerce_tmp_chpl3)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1028)), chpl_nodeFromLocaleID((chpl_macro_tmp_1027).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1027).addr, sizeof(int32_t), COMMID(24), INT64(745), INT64(26));
  call_tmp_chpl36 = ((int64_t(*)(chpl____wide_BaseLocale))chpl_vmtable[((INT64(6) * chpl_macro_tmp_1028) + INT64(1))])(coerce_tmp_chpl3);
  if (call_tmp_chpl36 < INT64(0)) {
    boundsCheckHalt_chpl(&local__str_literal_596_chpl, INT64(745), INT32(26));
  }
  if (call_tmp_chpl36 == INT64(0)) {
    tmp_x0_chpl = INT64(0);
    tmp_x1_chpl = ((int64_t)(((uint64_t)((((uint64_t)(INT64(0))) - UINT64(1))))));
  } else {
    tmp_x0_chpl = INT64(0);
    tmp_x1_chpl = ((int64_t)((INT64(0) + ((int64_t)((call_tmp_chpl36 - INT64(1)))))));
  }
  _ic__F1_high_chpl = tmp_x1_chpl;
  i_chpl = INT64(0);
  chpl_checkIfRangeIterWillOverflow(tmp_x0_chpl, tmp_x1_chpl, INT64(1), tmp_x0_chpl, tmp_x1_chpl, UINT8(true));
  for (i_chpl = tmp_x0_chpl; ((i_chpl <= _ic__F1_high_chpl)); i_chpl += INT64(1)) {
    coerce_tmp_chpl5 = (arg_chpl)->_instance;
    chpl_macro_tmp_1029.locale = (&coerce_tmp_chpl5)->locale;
    chpl_macro_tmp_1029.addr = ((object_chpl)((&coerce_tmp_chpl5)->addr));
    coerce_tmp_chpl6 = chpl_macro_tmp_1029;
    chpl_macro_tmp_1030.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1030.addr = nil;
    chpl_macro_tmp_1031.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1031.addr = NULL;
    tmp_chpl16 = chpl_macro_tmp_1031;
    if (! (((&coerce_tmp_chpl6)->addr != (&tmp_chpl16)->addr) || ((!(! (&coerce_tmp_chpl6)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl6)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl16)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(95), INT32(26));
    }
    chpl_check_nil((&coerce_tmp_chpl5)->addr, INT64(746), INT32(26));
    tmp_chpl17 = &ret_tmp_chpl;
    chpl_macro_tmp_1032.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1032.addr = tmp_chpl17;
    tmp_chpl18 = chpl_macro_tmp_1032;
    chpl_macro_tmp_1033.locale = (&coerce_tmp_chpl5)->locale;
    chpl_macro_tmp_1033.addr = &(((object_chpl)((&coerce_tmp_chpl5)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1034)), chpl_nodeFromLocaleID((chpl_macro_tmp_1033).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1033).addr, sizeof(int32_t), COMMID(25), INT64(746), INT64(26));
    ((void(*)(chpl____wide_BaseLocale,
       int64_t,
       chpl____wide__ref_locale))chpl_vmtable[((INT64(6) * chpl_macro_tmp_1034) + INT64(2))])(coerce_tmp_chpl5, i_chpl, tmp_chpl18);
    call_tmp_chpl37 = ret_tmp_chpl;
    subloc_chpl = call_tmp_chpl37;
    coerce_tmp_chpl7 = (&subloc_chpl)->_instance;
    chpl_macro_tmp_1035.locale = (&coerce_tmp_chpl7)->locale;
    chpl_macro_tmp_1035.addr = ((object_chpl)((&coerce_tmp_chpl7)->addr));
    coerce_tmp_chpl8 = chpl_macro_tmp_1035;
    chpl_macro_tmp_1036.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1036.addr = nil;
    chpl_macro_tmp_1037.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1037.addr = NULL;
    tmp_chpl19 = chpl_macro_tmp_1037;
    if (! (((&coerce_tmp_chpl8)->addr != (&tmp_chpl19)->addr) || ((!(! (&coerce_tmp_chpl8)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl8)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl19)->locale, INT64(0), INT32(0)))))) {
      chpl_macro_tmp_1038.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1038.addr = ((AbstractLocaleModel_chpl)(nil));
      ret_chpl = chpl_macro_tmp_1038;
      goto _end__COLON__chpl;
    }
    chpl_macro_tmp_1039.locale = (coerce_tmp_chpl7).locale;
    chpl_macro_tmp_1039.addr = &(((object_chpl)((coerce_tmp_chpl7).addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1040)), chpl_nodeFromLocaleID((chpl_macro_tmp_1039).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1039).addr, sizeof(int32_t), COMMID(26), INT64(748), INT64(26));
    chpl_macro_tmp_1041 = chpl_macro_tmp_1040;
    chpl_macro_tmp_1042.locale = (coerce_tmp_chpl7).locale;
    chpl_macro_tmp_1042.addr = ( (((chpl__cid_AbstractLocaleModel_chpl <= chpl_macro_tmp_1041) && (chpl_macro_tmp_1041 <= chpl_subclass_max_id[chpl__cid_AbstractLocaleModel_chpl])))?(((AbstractLocaleModel_chpl)((coerce_tmp_chpl7).addr))):(((AbstractLocaleModel_chpl)(NULL))) );
    call_tmp_chpl38 = chpl_macro_tmp_1042;
    ret_chpl = call_tmp_chpl38;
    _end__COLON__chpl:;
    chpl_macro_tmp_1043.locale = (&ret_chpl)->locale;
    chpl_macro_tmp_1043.addr = ((object_chpl)((&ret_chpl)->addr));
    coerce_tmp_chpl9 = chpl_macro_tmp_1043;
    chpl_macro_tmp_1044.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1044.addr = nil;
    chpl_macro_tmp_1045.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1045.addr = NULL;
    tmp_chpl20 = chpl_macro_tmp_1045;
    if (! (((&coerce_tmp_chpl9)->addr != (&tmp_chpl20)->addr) || ((!(! (&coerce_tmp_chpl9)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl9)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl20)->locale, INT64(0), INT32(0)))))) {
      halt_chpl(&local__str_literal_743_chpl, INT64(750), INT32(26));
    }
    chpl_macro_tmp_1046.locale = (&ret_chpl)->locale;
    chpl_macro_tmp_1046.addr = ((object_chpl)((&ret_chpl)->addr));
    coerce_tmp_chpl10 = chpl_macro_tmp_1046;
    chpl_macro_tmp_1047.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1047.addr = nil;
    chpl_macro_tmp_1048.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1048.addr = NULL;
    tmp_chpl21 = chpl_macro_tmp_1048;
    if (! (((&coerce_tmp_chpl10)->addr != (&tmp_chpl21)->addr) || ((!(! (&coerce_tmp_chpl10)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl10)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl21)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(752), INT32(26));
    }
    coerce_tmp_chpl11 = ret_chpl;
    chpl_check_nil((&coerce_tmp_chpl11)->addr, INT64(752), INT32(26));
    chpl_macro_tmp_1049.locale = (&coerce_tmp_chpl11)->locale;
    chpl_macro_tmp_1049.addr = &(((&coerce_tmp_chpl11)->addr)->chpl_singletonThisLocaleArray);
    call_tmp_chpl39 = chpl_macro_tmp_1049;
    *(i_chpl2 + INT64(0)) = INT64(0);
    i_i_chpl = &i_chpl2;
    chpl_macro_tmp_1050.locale = (call_tmp_chpl39).locale;
    chpl_macro_tmp_1050.addr = &(((call_tmp_chpl39).addr)->_instance);
    chpl_gen_comm_get(((void*)(&ret_chpl2)), chpl_nodeFromLocaleID((chpl_macro_tmp_1050).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1050).addr, sizeof(chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t), COMMID(27), INT64(752), INT64(26));
    checkAccess_chpl(call_tmp_chpl39, i_i_chpl, ret_chpl2, INT64(752), INT32(26));
    coerce_tmp_chpl12 = ret_chpl2;
    coerce_tmp_chpl13 = *(i_chpl2 + INT64(0));
    chpl_check_nil((&coerce_tmp_chpl12)->addr, INT64(752), INT32(26));
    chpl_macro_tmp_1051.locale = (&coerce_tmp_chpl12)->locale;
    chpl_macro_tmp_1051.addr = &(((&coerce_tmp_chpl12)->addr)->shiftedData);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl14)), chpl_nodeFromLocaleID((chpl_macro_tmp_1051).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1051).addr, sizeof(chpl____wide__ddata_locale), COMMID(28), INT64(752), INT64(26));
    chpl_macro_tmp_1052.locale = (&coerce_tmp_chpl14)->locale;
    chpl_macro_tmp_1052.addr = ((&coerce_tmp_chpl14)->addr + coerce_tmp_chpl13);
    call_tmp_chpl40 = chpl_macro_tmp_1052;
    chpl_macro_tmp_1053.locale = (&ret_chpl)->locale;
    chpl_macro_tmp_1053.addr = ((BaseLocale_chpl)((&ret_chpl)->addr));
    tmp_chpl22 = chpl_macro_tmp_1053;
    chpl_macro_tmp_1054.locale = (call_tmp_chpl40).locale;
    chpl_macro_tmp_1054.addr = &(((call_tmp_chpl40).addr)->_instance);
    chpl_gen_comm_put(((void*)(&tmp_chpl22)), chpl_nodeFromLocaleID((chpl_macro_tmp_1054).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1054).addr, sizeof(chpl____wide_BaseLocale), COMMID(29), INT64(752), INT64(26));
    chpl_singletonCurrentLocaleInitPrivateSublocs(&subloc_chpl);
    i_x_chpl = &subloc_chpl;
    chpl_macro_tmp_1055.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1055.addr = i_x_chpl;
    tmp_chpl23 = chpl_macro_tmp_1055;
    deinit_chpl14(tmp_chpl23);
  }
  return;
}

/* ChapelLocale.chpl:758 */
static void chpl_singletonCurrentLocaleInitPrivate(int64_t locIdx_chpl) {
  string_chpl local__str_literal_743_chpl;
  string_chpl local__str_literal_75_chpl;
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  RootLocale_chpl _formal_type_tmp__chpl = NULL;
  chpl____wide_RootLocale ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_RootLocale call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_1_int64_t_F_locale_int64_t call_tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t_chpl i_chpl;
  _ref__tuple_1_star_int64_t_chpl i_i_chpl = NULL;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t ret_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t coerce_tmp_chpl7;
  chpl____wide__ddata_locale coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale call_tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  locale_chpl loc_chpl;
  chpl____wide__ref_locale tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  AbstractLocaleModel_chpl _formal_type_tmp__chpl2 = NULL;
  chpl____wide_AbstractLocaleModel ret_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_AbstractLocaleModel call_tmp_chpl39 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_AbstractLocaleModel coerce_tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_1_int64_t_F_locale_int64_t call_tmp_chpl40 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t_chpl i_chpl2;
  _ref__tuple_1_star_int64_t_chpl i_i_chpl2 = NULL;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t ret_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t coerce_tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t coerce_tmp_chpl15;
  chpl____wide__ddata_locale coerce_tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale call_tmp_chpl41 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl i_x_chpl = NULL;
  chpl____wide__ref_locale tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object chpl_macro_tmp_1056;
  chpl____wide__nilType chpl_macro_tmp_1057;
  chpl____wide_object chpl_macro_tmp_1058;
  chpl____wide_RootLocale chpl_macro_tmp_1059;
  chpl____wide__ref_int32_t chpl_macro_tmp_1060;
  int32_t chpl_macro_tmp_1061;
  int32_t chpl_macro_tmp_1062;
  chpl____wide_RootLocale chpl_macro_tmp_1063;
  chpl____wide_object chpl_macro_tmp_1064;
  chpl____wide__nilType chpl_macro_tmp_1065;
  chpl____wide_object chpl_macro_tmp_1066;
  chpl____wide__ref__wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t chpl_macro_tmp_1067;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_1068;
  chpl____wide__ref_locale chpl_macro_tmp_1069;
  chpl____wide__ref_locale chpl_macro_tmp_1070;
  chpl____wide_object chpl_macro_tmp_1071;
  chpl____wide__nilType chpl_macro_tmp_1072;
  chpl____wide_object chpl_macro_tmp_1073;
  chpl____wide_AbstractLocaleModel chpl_macro_tmp_1074;
  chpl____wide__ref_int32_t chpl_macro_tmp_1075;
  int32_t chpl_macro_tmp_1076;
  int32_t chpl_macro_tmp_1077;
  chpl____wide_AbstractLocaleModel chpl_macro_tmp_1078;
  chpl____wide_object chpl_macro_tmp_1079;
  chpl____wide__nilType chpl_macro_tmp_1080;
  chpl____wide_object chpl_macro_tmp_1081;
  chpl____wide_object chpl_macro_tmp_1082;
  chpl____wide__nilType chpl_macro_tmp_1083;
  chpl____wide_object chpl_macro_tmp_1084;
  chpl____wide__ref__wide__array_DefaultRectangularArr_1_int64_t_F_locale_int64_t chpl_macro_tmp_1085;
  chpl____wide__ref__wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t chpl_macro_tmp_1086;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_1087;
  chpl____wide__ref_locale chpl_macro_tmp_1088;
  chpl____wide_BaseLocale chpl_macro_tmp_1089;
  chpl____wide__ref__wide_BaseLocale chpl_macro_tmp_1090;
  chpl____wide__ref_locale chpl_macro_tmp_1091;
  local__str_literal_743_chpl = _str_literal_743_chpl /* "error in locale initialization" */;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = (&rootLocale_chpl)->_instance;
  chpl_macro_tmp_1056.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_1056.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_1056;
  chpl_macro_tmp_1057.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1057.addr = nil;
  chpl_macro_tmp_1058.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1058.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_1058;
  if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0)))))) {
    chpl_macro_tmp_1059.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1059.addr = ((RootLocale_chpl)(nil));
    ret_chpl = chpl_macro_tmp_1059;
    goto _end__COLON__chpl;
  }
  chpl_macro_tmp_1060.locale = (coerce_tmp_chpl3).locale;
  chpl_macro_tmp_1060.addr = &(((object_chpl)((coerce_tmp_chpl3).addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1061)), chpl_nodeFromLocaleID((chpl_macro_tmp_1060).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1060).addr, sizeof(int32_t), COMMID(30), INT64(760), INT64(26));
  chpl_macro_tmp_1062 = chpl_macro_tmp_1061;
  chpl_macro_tmp_1063.locale = (coerce_tmp_chpl3).locale;
  chpl_macro_tmp_1063.addr = ( (((chpl__cid_RootLocale_chpl <= chpl_macro_tmp_1062) && (chpl_macro_tmp_1062 <= chpl_subclass_max_id[chpl__cid_RootLocale_chpl])))?(((RootLocale_chpl)((coerce_tmp_chpl3).addr))):(((RootLocale_chpl)(NULL))) );
  call_tmp_chpl36 = chpl_macro_tmp_1063;
  ret_chpl = call_tmp_chpl36;
  _end__COLON__chpl:;
  chpl_macro_tmp_1064.locale = (&ret_chpl)->locale;
  chpl_macro_tmp_1064.addr = ((object_chpl)((&ret_chpl)->addr));
  coerce_tmp_chpl5 = chpl_macro_tmp_1064;
  chpl_macro_tmp_1065.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1065.addr = nil;
  chpl_macro_tmp_1066.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1066.addr = NULL;
  tmp_chpl16 = chpl_macro_tmp_1066;
  if (! (((&coerce_tmp_chpl5)->addr != (&tmp_chpl16)->addr) || ((!(! (&coerce_tmp_chpl5)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl5)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl16)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(760), INT32(26));
  }
  chpl_check_nil((&ret_chpl)->addr, INT64(760), INT32(26));
  call_tmp_chpl37 = getDefaultLocaleArray_chpl(ret_chpl);
  *(i_chpl + INT64(0)) = locIdx_chpl;
  i_i_chpl = &i_chpl;
  chpl_macro_tmp_1067.locale = (call_tmp_chpl37).locale;
  chpl_macro_tmp_1067.addr = &(((call_tmp_chpl37).addr)->_instance);
  chpl_gen_comm_get(((void*)(&ret_chpl2)), chpl_nodeFromLocaleID((chpl_macro_tmp_1067).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1067).addr, sizeof(chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t), COMMID(31), INT64(761), INT64(26));
  checkAccess_chpl(call_tmp_chpl37, i_i_chpl, ret_chpl2, INT64(761), INT32(26));
  coerce_tmp_chpl6 = ret_chpl2;
  coerce_tmp_chpl7 = *(i_chpl + INT64(0));
  chpl_check_nil((&coerce_tmp_chpl6)->addr, INT64(761), INT32(26));
  chpl_macro_tmp_1068.locale = (&coerce_tmp_chpl6)->locale;
  chpl_macro_tmp_1068.addr = &(((&coerce_tmp_chpl6)->addr)->shiftedData);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl8)), chpl_nodeFromLocaleID((chpl_macro_tmp_1068).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1068).addr, sizeof(chpl____wide__ddata_locale), COMMID(32), INT64(761), INT64(26));
  chpl_macro_tmp_1069.locale = (&coerce_tmp_chpl8)->locale;
  chpl_macro_tmp_1069.addr = ((&coerce_tmp_chpl8)->addr + coerce_tmp_chpl7);
  call_tmp_chpl38 = chpl_macro_tmp_1069;
  chpl_macro_tmp_1070.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1070.addr = &loc_chpl;
  tmp_chpl17 = chpl_macro_tmp_1070;
  init_ASSIGN__chpl(tmp_chpl17, call_tmp_chpl38);
  coerce_tmp_chpl9 = (&loc_chpl)->_instance;
  chpl_macro_tmp_1071.locale = (&coerce_tmp_chpl9)->locale;
  chpl_macro_tmp_1071.addr = ((object_chpl)((&coerce_tmp_chpl9)->addr));
  coerce_tmp_chpl10 = chpl_macro_tmp_1071;
  chpl_macro_tmp_1072.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1072.addr = nil;
  chpl_macro_tmp_1073.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1073.addr = NULL;
  tmp_chpl18 = chpl_macro_tmp_1073;
  if (! (((&coerce_tmp_chpl10)->addr != (&tmp_chpl18)->addr) || ((!(! (&coerce_tmp_chpl10)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl10)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl18)->locale, INT64(0), INT32(0)))))) {
    chpl_macro_tmp_1074.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1074.addr = ((AbstractLocaleModel_chpl)(nil));
    ret_chpl3 = chpl_macro_tmp_1074;
    goto _end__COLON__chpl2;
  }
  chpl_macro_tmp_1075.locale = (coerce_tmp_chpl9).locale;
  chpl_macro_tmp_1075.addr = &(((object_chpl)((coerce_tmp_chpl9).addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1076)), chpl_nodeFromLocaleID((chpl_macro_tmp_1075).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1075).addr, sizeof(int32_t), COMMID(33), INT64(762), INT64(26));
  chpl_macro_tmp_1077 = chpl_macro_tmp_1076;
  chpl_macro_tmp_1078.locale = (coerce_tmp_chpl9).locale;
  chpl_macro_tmp_1078.addr = ( (((chpl__cid_AbstractLocaleModel_chpl <= chpl_macro_tmp_1077) && (chpl_macro_tmp_1077 <= chpl_subclass_max_id[chpl__cid_AbstractLocaleModel_chpl])))?(((AbstractLocaleModel_chpl)((coerce_tmp_chpl9).addr))):(((AbstractLocaleModel_chpl)(NULL))) );
  call_tmp_chpl39 = chpl_macro_tmp_1078;
  ret_chpl3 = call_tmp_chpl39;
  _end__COLON__chpl2:;
  chpl_macro_tmp_1079.locale = (&ret_chpl3)->locale;
  chpl_macro_tmp_1079.addr = ((object_chpl)((&ret_chpl3)->addr));
  coerce_tmp_chpl11 = chpl_macro_tmp_1079;
  chpl_macro_tmp_1080.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1080.addr = nil;
  chpl_macro_tmp_1081.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1081.addr = NULL;
  tmp_chpl19 = chpl_macro_tmp_1081;
  if (! (((&coerce_tmp_chpl11)->addr != (&tmp_chpl19)->addr) || ((!(! (&coerce_tmp_chpl11)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl11)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl19)->locale, INT64(0), INT32(0)))))) {
    halt_chpl(&local__str_literal_743_chpl, INT64(764), INT32(26));
  }
  chpl_macro_tmp_1082.locale = (&ret_chpl3)->locale;
  chpl_macro_tmp_1082.addr = ((object_chpl)((&ret_chpl3)->addr));
  coerce_tmp_chpl12 = chpl_macro_tmp_1082;
  chpl_macro_tmp_1083.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1083.addr = nil;
  chpl_macro_tmp_1084.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1084.addr = NULL;
  tmp_chpl20 = chpl_macro_tmp_1084;
  if (! (((&coerce_tmp_chpl12)->addr != (&tmp_chpl20)->addr) || ((!(! (&coerce_tmp_chpl12)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl12)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl20)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(766), INT32(26));
  }
  coerce_tmp_chpl13 = ret_chpl3;
  chpl_check_nil((&coerce_tmp_chpl13)->addr, INT64(766), INT32(26));
  chpl_macro_tmp_1085.locale = (&coerce_tmp_chpl13)->locale;
  chpl_macro_tmp_1085.addr = &(((&coerce_tmp_chpl13)->addr)->chpl_singletonThisLocaleArray);
  call_tmp_chpl40 = chpl_macro_tmp_1085;
  *(i_chpl2 + INT64(0)) = INT64(0);
  i_i_chpl2 = &i_chpl2;
  chpl_macro_tmp_1086.locale = (call_tmp_chpl40).locale;
  chpl_macro_tmp_1086.addr = &(((call_tmp_chpl40).addr)->_instance);
  chpl_gen_comm_get(((void*)(&ret_chpl4)), chpl_nodeFromLocaleID((chpl_macro_tmp_1086).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1086).addr, sizeof(chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t), COMMID(34), INT64(766), INT64(26));
  checkAccess_chpl(call_tmp_chpl40, i_i_chpl2, ret_chpl4, INT64(766), INT32(26));
  coerce_tmp_chpl14 = ret_chpl4;
  coerce_tmp_chpl15 = *(i_chpl2 + INT64(0));
  chpl_check_nil((&coerce_tmp_chpl14)->addr, INT64(766), INT32(26));
  chpl_macro_tmp_1087.locale = (&coerce_tmp_chpl14)->locale;
  chpl_macro_tmp_1087.addr = &(((&coerce_tmp_chpl14)->addr)->shiftedData);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl16)), chpl_nodeFromLocaleID((chpl_macro_tmp_1087).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1087).addr, sizeof(chpl____wide__ddata_locale), COMMID(35), INT64(766), INT64(26));
  chpl_macro_tmp_1088.locale = (&coerce_tmp_chpl16)->locale;
  chpl_macro_tmp_1088.addr = ((&coerce_tmp_chpl16)->addr + coerce_tmp_chpl15);
  call_tmp_chpl41 = chpl_macro_tmp_1088;
  chpl_macro_tmp_1089.locale = (&ret_chpl3)->locale;
  chpl_macro_tmp_1089.addr = ((BaseLocale_chpl)((&ret_chpl3)->addr));
  tmp_chpl21 = chpl_macro_tmp_1089;
  chpl_macro_tmp_1090.locale = (call_tmp_chpl41).locale;
  chpl_macro_tmp_1090.addr = &(((call_tmp_chpl41).addr)->_instance);
  chpl_gen_comm_put(((void*)(&tmp_chpl21)), chpl_nodeFromLocaleID((chpl_macro_tmp_1090).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1090).addr, sizeof(chpl____wide_BaseLocale), COMMID(36), INT64(766), INT64(26));
  chpl_singletonCurrentLocaleInitPrivateSublocs(&loc_chpl);
  i_x_chpl = &loc_chpl;
  chpl_macro_tmp_1091.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1091.addr = i_x_chpl;
  tmp_chpl22 = chpl_macro_tmp_1091;
  deinit_chpl14(tmp_chpl22);
  return;
}

/* ChapelLocale.chpl:777 */
void chpl_getLocaleID(chpl_localeID_t * localeID,
                      int64_t _ln,
                      int32_t _fn) {
  chpl_localeID_t call_tmp_chpl36;
  int32_t call_tmp_chpl37;
  chpl_localeID_t call_tmp_chpl38;
  _ref_chpl_localeID_t_chpl i__arg2_chpl = NULL;
  call_tmp_chpl37 = get_chpl_nodeID();
  call_tmp_chpl38 = chpl_rt_buildLocaleID(call_tmp_chpl37, c_sublocid_any);
  call_tmp_chpl36 = call_tmp_chpl38;
  i__arg2_chpl = &call_tmp_chpl36;
  *(localeID) = *(i__arg2_chpl);
  return;
}

/* ChapelLocale.chpl:793 */
static void chpl_localeID_to_locale(chpl____wide__ref_chpl_localeID_t id_chpl2,
                                    locale_chpl * _retArg_chpl) {
  string_chpl local__str_literal_75_chpl;
  locale_chpl ret_chpl;
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  AbstractRootLocale_chpl _formal_type_tmp__chpl = NULL;
  chpl____wide_AbstractRootLocale ret_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_AbstractRootLocale call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  locale_chpl call_tmp_chpl37;
  locale_chpl ret_tmp_chpl;
  _ref_locale_chpl tmp_chpl18 = NULL;
  chpl____wide__ref_locale tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  DummyLocale_chpl new_temp_chpl = NULL;
  BaseLocale_chpl tmp_chpl23 = NULL;
  chpl____wide_BaseLocale tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale tmp_chpl25 = {CHPL_LOCALEID_T_INIT, NULL};
  locale_chpl ret_chpl3;
  locale_chpl tmp_chpl26;
  chpl____wide__ref_locale tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object chpl_macro_tmp_1092;
  chpl____wide__nilType chpl_macro_tmp_1093;
  chpl____wide_object chpl_macro_tmp_1094;
  chpl____wide_object chpl_macro_tmp_1095;
  chpl____wide__nilType chpl_macro_tmp_1096;
  chpl____wide_object chpl_macro_tmp_1097;
  chpl____wide_AbstractRootLocale chpl_macro_tmp_1098;
  chpl____wide__ref_int32_t chpl_macro_tmp_1099;
  int32_t chpl_macro_tmp_1100;
  int32_t chpl_macro_tmp_1101;
  chpl____wide_AbstractRootLocale chpl_macro_tmp_1102;
  chpl____wide_object chpl_macro_tmp_1103;
  chpl____wide__nilType chpl_macro_tmp_1104;
  chpl____wide_object chpl_macro_tmp_1105;
  chpl____wide__ref_locale chpl_macro_tmp_1106;
  chpl____wide__ref_int32_t chpl_macro_tmp_1107;
  int32_t chpl_macro_tmp_1108;
  chpl____wide__ref_locale chpl_macro_tmp_1109;
  chpl____wide__ref__wide_BaseLocale chpl_macro_tmp_1110;
  chpl____wide_object chpl_macro_tmp_1111;
  chpl____wide__nilType chpl_macro_tmp_1112;
  chpl____wide_object chpl_macro_tmp_1113;
  chpl____wide__ref_locale chpl_macro_tmp_1114;
  chpl____wide_BaseLocale chpl_macro_tmp_1115;
  chpl____wide__ref__wide_BaseLocale chpl_macro_tmp_1116;
  chpl____wide__ref_locale chpl_macro_tmp_1117;
  chpl____wide__ref_locale chpl_macro_tmp_1118;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = (&rootLocale_chpl)->_instance;
  chpl_macro_tmp_1092.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_1092.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_1092;
  chpl_macro_tmp_1093.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1093.addr = nil;
  chpl_macro_tmp_1094.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1094.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_1094;
  if (((&coerce_tmp_chpl4)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0))))) {
    coerce_tmp_chpl5 = (&rootLocale_chpl)->_instance;
    chpl_macro_tmp_1095.locale = (&coerce_tmp_chpl5)->locale;
    chpl_macro_tmp_1095.addr = ((object_chpl)((&coerce_tmp_chpl5)->addr));
    coerce_tmp_chpl6 = chpl_macro_tmp_1095;
    chpl_macro_tmp_1096.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1096.addr = nil;
    chpl_macro_tmp_1097.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1097.addr = NULL;
    tmp_chpl16 = chpl_macro_tmp_1097;
    if (! (((&coerce_tmp_chpl6)->addr != (&tmp_chpl16)->addr) || ((!(! (&coerce_tmp_chpl6)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl6)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl16)->locale, INT64(0), INT32(0)))))) {
      chpl_macro_tmp_1098.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1098.addr = ((AbstractRootLocale_chpl)(nil));
      ret_chpl2 = chpl_macro_tmp_1098;
      goto _end__COLON__chpl;
    }
    chpl_macro_tmp_1099.locale = (coerce_tmp_chpl5).locale;
    chpl_macro_tmp_1099.addr = &(((object_chpl)((coerce_tmp_chpl5).addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1100)), chpl_nodeFromLocaleID((chpl_macro_tmp_1099).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1099).addr, sizeof(int32_t), COMMID(37), INT64(795), INT64(26));
    chpl_macro_tmp_1101 = chpl_macro_tmp_1100;
    chpl_macro_tmp_1102.locale = (coerce_tmp_chpl5).locale;
    chpl_macro_tmp_1102.addr = ( (((chpl__cid_AbstractRootLocale_chpl <= chpl_macro_tmp_1101) && (chpl_macro_tmp_1101 <= chpl_subclass_max_id[chpl__cid_AbstractRootLocale_chpl])))?(((AbstractRootLocale_chpl)((coerce_tmp_chpl5).addr))):(((AbstractRootLocale_chpl)(NULL))) );
    call_tmp_chpl36 = chpl_macro_tmp_1102;
    ret_chpl2 = call_tmp_chpl36;
    _end__COLON__chpl:;
    chpl_macro_tmp_1103.locale = (&ret_chpl2)->locale;
    chpl_macro_tmp_1103.addr = ((object_chpl)((&ret_chpl2)->addr));
    coerce_tmp_chpl7 = chpl_macro_tmp_1103;
    chpl_macro_tmp_1104.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1104.addr = nil;
    chpl_macro_tmp_1105.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1105.addr = NULL;
    tmp_chpl17 = chpl_macro_tmp_1105;
    if (! (((&coerce_tmp_chpl7)->addr != (&tmp_chpl17)->addr) || ((!(! (&coerce_tmp_chpl7)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl7)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl17)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(795), INT32(26));
    }
    chpl_check_nil((&ret_chpl2)->addr, INT64(795), INT32(26));
    tmp_chpl18 = &ret_tmp_chpl;
    chpl_macro_tmp_1106.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1106.addr = tmp_chpl18;
    tmp_chpl19 = chpl_macro_tmp_1106;
    chpl_macro_tmp_1107.locale = (&ret_chpl2)->locale;
    chpl_macro_tmp_1107.addr = &(((object_chpl)((&ret_chpl2)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1108)), chpl_nodeFromLocaleID((chpl_macro_tmp_1107).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1107).addr, sizeof(int32_t), COMMID(38), INT64(795), INT64(26));
    ((void(*)(chpl____wide_AbstractRootLocale,
       chpl____wide__ref_chpl_localeID_t,
       chpl____wide__ref_locale))chpl_vmtable[((INT64(6) * chpl_macro_tmp_1108) + INT64(3))])(ret_chpl2, id_chpl2, tmp_chpl19);
    call_tmp_chpl37 = ret_tmp_chpl;
    ret_chpl = call_tmp_chpl37;
    goto _end_chpl_localeID_to_locale_chpl;
  } else {
    chpl_check_nil((&dummyLocale_chpl)->addr, INT64(802), INT32(26));
    chpl_macro_tmp_1109.locale = (&dummyLocale_chpl)->locale;
    chpl_macro_tmp_1109.addr = &(((&dummyLocale_chpl)->addr)->value);
    tmp_chpl20 = chpl_macro_tmp_1109;
    chpl_macro_tmp_1110.locale = (tmp_chpl20).locale;
    chpl_macro_tmp_1110.addr = &(((tmp_chpl20).addr)->_instance);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl8)), chpl_nodeFromLocaleID((chpl_macro_tmp_1110).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1110).addr, sizeof(chpl____wide_BaseLocale), COMMID(39), INT64(802), INT64(26));
    chpl_macro_tmp_1111.locale = (&coerce_tmp_chpl8)->locale;
    chpl_macro_tmp_1111.addr = ((object_chpl)((&coerce_tmp_chpl8)->addr));
    coerce_tmp_chpl9 = chpl_macro_tmp_1111;
    chpl_macro_tmp_1112.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1112.addr = nil;
    chpl_macro_tmp_1113.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1113.addr = NULL;
    tmp_chpl21 = chpl_macro_tmp_1113;
    if (! (((&coerce_tmp_chpl9)->addr != (&tmp_chpl21)->addr) || ((!(! (&coerce_tmp_chpl9)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl9)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl21)->locale, INT64(0), INT32(0)))))) {
      chpl_check_nil((&dummyLocale_chpl)->addr, INT64(803), INT32(26));
      chpl_macro_tmp_1114.locale = (&dummyLocale_chpl)->locale;
      chpl_macro_tmp_1114.addr = &(((&dummyLocale_chpl)->addr)->value);
      tmp_chpl22 = chpl_macro_tmp_1114;
      new_temp_chpl = _new_chpl4(INT64(803), INT32(26));
      tmp_chpl23 = ((BaseLocale_chpl)(new_temp_chpl));
      chpl_macro_tmp_1115.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1115.addr = tmp_chpl23;
      tmp_chpl24 = chpl_macro_tmp_1115;
      chpl_macro_tmp_1116.locale = (tmp_chpl22).locale;
      chpl_macro_tmp_1116.addr = &(((tmp_chpl22).addr)->_instance);
      chpl_gen_comm_put(((void*)(&tmp_chpl24)), chpl_nodeFromLocaleID((chpl_macro_tmp_1116).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1116).addr, sizeof(chpl____wide_BaseLocale), COMMID(40), INT64(803), INT64(26));
    }
    chpl_check_nil((&dummyLocale_chpl)->addr, INT64(82), INT32(26));
    chpl_macro_tmp_1117.locale = (&dummyLocale_chpl)->locale;
    chpl_macro_tmp_1117.addr = &(((&dummyLocale_chpl)->addr)->value);
    tmp_chpl25 = chpl_macro_tmp_1117;
    chpl_macro_tmp_1118.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1118.addr = &tmp_chpl26;
    tmp_chpl27 = chpl_macro_tmp_1118;
    init_ASSIGN__chpl(tmp_chpl27, tmp_chpl25);
    ret_chpl3 = tmp_chpl26;
    ret_chpl = ret_chpl3;
    goto _end_chpl_localeID_to_locale_chpl;
  }
  _end_chpl_localeID_to_locale_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelLocale.chpl:822 */
void chpl_taskRunningCntInc(int64_t _ln,
                            int32_t _fn) {
  string_chpl local__str_literal_75_chpl;
  locale_chpl call_tmp_chpl36;
  chpl_localeID_t call_tmp_chpl37;
  int32_t call_tmp_chpl38;
  chpl_localeID_t call_tmp_chpl39;
  locale_chpl call_tmp_chpl40;
  locale_chpl ret_tmp_chpl;
  chpl____wide__ref_chpl_localeID_t tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicT_int64_t call_tmp_chpl41 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl42;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl9 _args_foron_fn_chpl = NULL;
  chpl____wide__ref_AtomicT_int64_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  _ref_locale_chpl i_x_chpl = NULL;
  chpl____wide__ref_locale tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_1119;
  chpl____wide_object chpl_macro_tmp_1120;
  chpl____wide__nilType chpl_macro_tmp_1121;
  chpl____wide_object chpl_macro_tmp_1122;
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_1123;
  chpl__class_localson_fn_chpl9_object chpl_macro_tmp_1124;
  chpl____wide__ref_locale chpl_macro_tmp_1125;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  if (rootLocaleInitialized_chpl) {
    call_tmp_chpl38 = get_chpl_nodeID();
    call_tmp_chpl39 = chpl_rt_buildLocaleID(call_tmp_chpl38, c_sublocid_any);
    call_tmp_chpl37 = call_tmp_chpl39;
    chpl_macro_tmp_1119.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1119.addr = &call_tmp_chpl37;
    tmp_chpl15 = chpl_macro_tmp_1119;
    chpl_localeID_to_locale(tmp_chpl15, &ret_tmp_chpl);
    call_tmp_chpl40 = ret_tmp_chpl;
    call_tmp_chpl36 = call_tmp_chpl40;
    coerce_tmp_chpl3 = (&call_tmp_chpl36)->_instance;
    chpl_macro_tmp_1120.locale = (&coerce_tmp_chpl3)->locale;
    chpl_macro_tmp_1120.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
    coerce_tmp_chpl4 = chpl_macro_tmp_1120;
    chpl_macro_tmp_1121.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1121.addr = nil;
    chpl_macro_tmp_1122.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1122.addr = NULL;
    tmp_chpl16 = chpl_macro_tmp_1122;
    if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl16)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl16)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(95), INT32(26));
    }
    coerce_tmp_chpl5 = coerce_tmp_chpl3;
    chpl_check_nil((&coerce_tmp_chpl5)->addr, INT64(824), INT32(26));
    chpl_macro_tmp_1123.locale = (&coerce_tmp_chpl5)->locale;
    chpl_macro_tmp_1123.addr = &(((&coerce_tmp_chpl5)->addr)->runningTaskCounter);
    call_tmp_chpl41 = chpl_macro_tmp_1123;
    chpl_rmem_consist_maybe_release5();
    call_tmp_chpl42 = (&call_tmp_chpl41)->locale;
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl42);
    if (isdirect_chpl) {
      on_fn_chpl9(call_tmp_chpl41, INT64(1));
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl9)(&chpl_macro_tmp_1124));
      chpl_check_nil(_args_foron_fn_chpl, INT64(824), INT32(26));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl42;
      tmp_chpl17 = call_tmp_chpl41;
      chpl_check_nil(_args_foron_fn_chpl, INT64(824), INT32(26));
      (_args_foron_fn_chpl)->_1_this = tmp_chpl17;
      chpl_check_nil(_args_foron_fn_chpl, INT64(824), INT32(26));
      (_args_foron_fn_chpl)->_2_value = INT64(1);
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      /*** wrapon_fn_chpl9 ***/ chpl_executeOnFast(call_tmp_chpl42, INT32(11), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl9_object), INT64(585), INT32(14));
    }
    chpl_rmem_consist_maybe_acquire5();
    i_x_chpl = &call_tmp_chpl36;
    chpl_macro_tmp_1125.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1125.addr = i_x_chpl;
    tmp_chpl18 = chpl_macro_tmp_1125;
    deinit_chpl14(tmp_chpl18);
  }
  return;
}

/* ChapelLocale.chpl:832 */
void chpl_taskRunningCntDec(int64_t _ln,
                            int32_t _fn) {
  string_chpl local__str_literal_75_chpl;
  locale_chpl call_tmp_chpl36;
  chpl_localeID_t call_tmp_chpl37;
  int32_t call_tmp_chpl38;
  chpl_localeID_t call_tmp_chpl39;
  locale_chpl call_tmp_chpl40;
  locale_chpl ret_tmp_chpl;
  chpl____wide__ref_chpl_localeID_t tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicT_int64_t call_tmp_chpl41 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl42;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl11 _args_foron_fn_chpl = NULL;
  chpl____wide__ref_AtomicT_int64_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  _ref_locale_chpl i_x_chpl = NULL;
  chpl____wide__ref_locale tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_1126;
  chpl____wide_object chpl_macro_tmp_1127;
  chpl____wide__nilType chpl_macro_tmp_1128;
  chpl____wide_object chpl_macro_tmp_1129;
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_1130;
  chpl__class_localson_fn_chpl11_object chpl_macro_tmp_1131;
  chpl____wide__ref_locale chpl_macro_tmp_1132;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  if (rootLocaleInitialized_chpl) {
    call_tmp_chpl38 = get_chpl_nodeID();
    call_tmp_chpl39 = chpl_rt_buildLocaleID(call_tmp_chpl38, c_sublocid_any);
    call_tmp_chpl37 = call_tmp_chpl39;
    chpl_macro_tmp_1126.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1126.addr = &call_tmp_chpl37;
    tmp_chpl15 = chpl_macro_tmp_1126;
    chpl_localeID_to_locale(tmp_chpl15, &ret_tmp_chpl);
    call_tmp_chpl40 = ret_tmp_chpl;
    call_tmp_chpl36 = call_tmp_chpl40;
    coerce_tmp_chpl3 = (&call_tmp_chpl36)->_instance;
    chpl_macro_tmp_1127.locale = (&coerce_tmp_chpl3)->locale;
    chpl_macro_tmp_1127.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
    coerce_tmp_chpl4 = chpl_macro_tmp_1127;
    chpl_macro_tmp_1128.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1128.addr = nil;
    chpl_macro_tmp_1129.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1129.addr = NULL;
    tmp_chpl16 = chpl_macro_tmp_1129;
    if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl16)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl16)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(95), INT32(26));
    }
    coerce_tmp_chpl5 = coerce_tmp_chpl3;
    chpl_check_nil((&coerce_tmp_chpl5)->addr, INT64(834), INT32(26));
    chpl_macro_tmp_1130.locale = (&coerce_tmp_chpl5)->locale;
    chpl_macro_tmp_1130.addr = &(((&coerce_tmp_chpl5)->addr)->runningTaskCounter);
    call_tmp_chpl41 = chpl_macro_tmp_1130;
    chpl_rmem_consist_maybe_release5();
    call_tmp_chpl42 = (&call_tmp_chpl41)->locale;
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl42);
    if (isdirect_chpl) {
      on_fn_chpl11(call_tmp_chpl41, INT64(1));
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl11)(&chpl_macro_tmp_1131));
      chpl_check_nil(_args_foron_fn_chpl, INT64(834), INT32(26));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl42;
      tmp_chpl17 = call_tmp_chpl41;
      chpl_check_nil(_args_foron_fn_chpl, INT64(834), INT32(26));
      (_args_foron_fn_chpl)->_1_this = tmp_chpl17;
      chpl_check_nil(_args_foron_fn_chpl, INT64(834), INT32(26));
      (_args_foron_fn_chpl)->_2_value = INT64(1);
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      /*** wrapon_fn_chpl11 ***/ chpl_executeOnFast(call_tmp_chpl42, INT32(13), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl11_object), INT64(613), INT32(14));
    }
    chpl_rmem_consist_maybe_acquire5();
    i_x_chpl = &call_tmp_chpl36;
    chpl_macro_tmp_1132.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1132.addr = i_x_chpl;
    tmp_chpl18 = chpl_macro_tmp_1132;
    deinit_chpl14(tmp_chpl18);
  }
  return;
}

/* ChapelLocale.chpl:841 */
void chpl_taskRunningCntReset(int64_t _ln,
                              int32_t _fn) {
  string_chpl local__str_literal_75_chpl;
  locale_chpl call_tmp_chpl36;
  chpl_localeID_t call_tmp_chpl37;
  int32_t call_tmp_chpl38;
  chpl_localeID_t call_tmp_chpl39;
  locale_chpl call_tmp_chpl40;
  locale_chpl ret_tmp_chpl;
  chpl____wide__ref_chpl_localeID_t tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicT_int64_t call_tmp_chpl41 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl42;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl7 _args_foron_fn_chpl = NULL;
  chpl____wide__ref_AtomicT_int64_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  _ref_locale_chpl i_x_chpl = NULL;
  chpl____wide__ref_locale tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_1133;
  chpl____wide_object chpl_macro_tmp_1134;
  chpl____wide__nilType chpl_macro_tmp_1135;
  chpl____wide_object chpl_macro_tmp_1136;
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_1137;
  chpl__class_localson_fn_chpl7_object chpl_macro_tmp_1138;
  chpl____wide__ref_locale chpl_macro_tmp_1139;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  call_tmp_chpl38 = get_chpl_nodeID();
  call_tmp_chpl39 = chpl_rt_buildLocaleID(call_tmp_chpl38, c_sublocid_any);
  call_tmp_chpl37 = call_tmp_chpl39;
  chpl_macro_tmp_1133.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1133.addr = &call_tmp_chpl37;
  tmp_chpl15 = chpl_macro_tmp_1133;
  chpl_localeID_to_locale(tmp_chpl15, &ret_tmp_chpl);
  call_tmp_chpl40 = ret_tmp_chpl;
  call_tmp_chpl36 = call_tmp_chpl40;
  coerce_tmp_chpl3 = (&call_tmp_chpl36)->_instance;
  chpl_macro_tmp_1134.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_1134.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_1134;
  chpl_macro_tmp_1135.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1135.addr = nil;
  chpl_macro_tmp_1136.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1136.addr = NULL;
  tmp_chpl16 = chpl_macro_tmp_1136;
  if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl16)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl16)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(95), INT32(26));
  }
  coerce_tmp_chpl5 = coerce_tmp_chpl3;
  chpl_check_nil((&coerce_tmp_chpl5)->addr, INT64(842), INT32(26));
  chpl_macro_tmp_1137.locale = (&coerce_tmp_chpl5)->locale;
  chpl_macro_tmp_1137.addr = &(((&coerce_tmp_chpl5)->addr)->runningTaskCounter);
  call_tmp_chpl41 = chpl_macro_tmp_1137;
  chpl_rmem_consist_maybe_release5();
  call_tmp_chpl42 = (&call_tmp_chpl41)->locale;
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl42);
  if (isdirect_chpl) {
    on_fn_chpl7(call_tmp_chpl41, INT64(0));
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl7)(&chpl_macro_tmp_1138));
    chpl_check_nil(_args_foron_fn_chpl, INT64(842), INT32(26));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl42;
    tmp_chpl17 = call_tmp_chpl41;
    chpl_check_nil(_args_foron_fn_chpl, INT64(842), INT32(26));
    (_args_foron_fn_chpl)->_1_this = tmp_chpl17;
    chpl_check_nil(_args_foron_fn_chpl, INT64(842), INT32(26));
    (_args_foron_fn_chpl)->_2_value = INT64(0);
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl7 ***/ chpl_executeOnFast(call_tmp_chpl42, INT32(9), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl7_object), INT64(479), INT32(14));
  }
  chpl_rmem_consist_maybe_acquire5();
  i_x_chpl = &call_tmp_chpl36;
  chpl_macro_tmp_1139.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1139.addr = i_x_chpl;
  tmp_chpl18 = chpl_macro_tmp_1139;
  deinit_chpl14(tmp_chpl18);
  return;
}

/* ChapelLocale.chpl:846 */
static void deinit_chpl15(void) {
  chpl____wide__ref_locale tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl i_x_chpl = NULL;
  chpl____wide__ref_locale tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_locale tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_locale tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale chpl_macro_tmp_1140;
  chpl____wide__ref__wide_BaseLocale chpl_macro_tmp_1141;
  chpl____wide__ref_locale chpl_macro_tmp_1142;
  chpl____wide__ref__wide_BaseLocale chpl_macro_tmp_1143;
  chpl____wide__ref_locale chpl_macro_tmp_1144;
  chpl____wide__ref_locale chpl_macro_tmp_1145;
  chpl____wide__ref_locale chpl_macro_tmp_1146;
  chpl____wide__ref_locale chpl_macro_tmp_1147;
  chpl____wide__ref_locale chpl_macro_tmp_1148;
  chpl_check_nil((&origRootLocale_chpl)->addr, INT64(847), INT32(26));
  chpl_macro_tmp_1140.locale = (&origRootLocale_chpl)->locale;
  chpl_macro_tmp_1140.addr = &(((&origRootLocale_chpl)->addr)->value);
  tmp_chpl15 = chpl_macro_tmp_1140;
  chpl_macro_tmp_1141.locale = (tmp_chpl15).locale;
  chpl_macro_tmp_1141.addr = &(((tmp_chpl15).addr)->_instance);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID((chpl_macro_tmp_1141).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1141).addr, sizeof(chpl____wide_BaseLocale), COMMID(41), INT64(847), INT64(26));
  chpl__delete34(coerce_tmp_chpl3);
  chpl_check_nil((&dummyLocale_chpl)->addr, INT64(848), INT32(26));
  chpl_macro_tmp_1142.locale = (&dummyLocale_chpl)->locale;
  chpl_macro_tmp_1142.addr = &(((&dummyLocale_chpl)->addr)->value);
  tmp_chpl16 = chpl_macro_tmp_1142;
  chpl_macro_tmp_1143.locale = (tmp_chpl16).locale;
  chpl_macro_tmp_1143.addr = &(((tmp_chpl16).addr)->_instance);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID((chpl_macro_tmp_1143).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1143).addr, sizeof(chpl____wide_BaseLocale), COMMID(42), INT64(848), INT64(26));
  chpl__delete34(coerce_tmp_chpl4);
  chpl_check_nil((&origRootLocale_chpl)->addr, INT64(594), INT32(26));
  chpl_macro_tmp_1144.locale = (&origRootLocale_chpl)->locale;
  chpl_macro_tmp_1144.addr = &(((&origRootLocale_chpl)->addr)->value);
  tmp_chpl17 = chpl_macro_tmp_1144;
  deinit_chpl14(tmp_chpl17);
  i_x_chpl = &rootLocale_chpl;
  chpl_macro_tmp_1145.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1145.addr = i_x_chpl;
  tmp_chpl18 = chpl_macro_tmp_1145;
  deinit_chpl14(tmp_chpl18);
  chpl_check_nil((&dummyLocale_chpl)->addr, INT64(82), INT32(26));
  chpl_macro_tmp_1146.locale = (&dummyLocale_chpl)->locale;
  chpl_macro_tmp_1146.addr = &(((&dummyLocale_chpl)->addr)->value);
  tmp_chpl19 = chpl_macro_tmp_1146;
  deinit_chpl14(tmp_chpl19);
  i_x_chpl2 = &defaultLocale_chpl;
  chpl_macro_tmp_1147.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1147.addr = i_x_chpl2;
  tmp_chpl20 = chpl_macro_tmp_1147;
  deinit_chpl14(tmp_chpl20);
  i_x_chpl3 = &nilLocale_chpl;
  chpl_macro_tmp_1148.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1148.addr = i_x_chpl3;
  tmp_chpl21 = chpl_macro_tmp_1148;
  deinit_chpl14(tmp_chpl21);
  return;
}

