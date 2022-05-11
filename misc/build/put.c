/* put.chpl:1 */
static void chpl__init_put(int64_t _ln_chpl,
                           int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  string_chpl local__str_literal_1646_chpl;
  string_chpl local__str_literal_75_chpl;
  chpl____wide__ref__wide__array_DefaultRectangularArr_1_int64_t_F_locale_int64_t local_Locales_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t local_numLocales_chpl;
  _tuple_1_star_int64_t_chpl i_chpl;
  _ref__tuple_1_star_int64_t_chpl i_i_chpl = NULL;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t coerce_tmp_chpl4;
  chpl____wide__ddata_locale coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl37;
  chpl____wide_BaseLocale coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl94 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  int64_t tmp_chpl16;
  chpl____wide__ref_int64_t chpl_macro_tmp_2237;
  int64_t chpl_macro_tmp_2238;
  chpl____wide__ref__wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t chpl_macro_tmp_2239;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_2240;
  chpl____wide__ref_locale chpl_macro_tmp_2241;
  chpl____wide__ref__wide_BaseLocale chpl_macro_tmp_2242;
  chpl____wide_object chpl_macro_tmp_2243;
  chpl____wide__nilType chpl_macro_tmp_2244;
  chpl____wide_object chpl_macro_tmp_2245;
  chpl__class_localson_fn_chpl94_object chpl_macro_tmp_2246;
  chpl____wide__ref_int64_t chpl_macro_tmp_2247;
  if (chpl__init_put_p) {
    goto _exit_chpl__init_put_chpl;
  }
  printModuleInit_chpl("%*s\n", "put", INT64(3));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_put_p = UINT8(true);
  local__str_literal_1646_chpl = _str_literal_1646_chpl /* "x = " */;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  local_Locales_chpl = Locales_chpl;
  local_numLocales_chpl = numLocales_chpl;
  chpl_check_nil((&x_chpl)->addr, INT64(1), INT32(64));
  chpl_macro_tmp_2237.locale = (&x_chpl)->locale;
  chpl_macro_tmp_2237.addr = &(((&x_chpl)->addr)->value);
  chpl_macro_tmp_2238 = INT64(4242);
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_2238)), chpl_nodeFromLocaleID((chpl_macro_tmp_2237).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2237).addr, sizeof(int64_t), COMMID(0), INT64(1), INT64(64));
  *(i_chpl + INT64(0)) = ((int64_t)((local_numLocales_chpl - INT64(1))));
  i_i_chpl = &i_chpl;
  chpl_macro_tmp_2239.locale = (local_Locales_chpl).locale;
  chpl_macro_tmp_2239.addr = &(((local_Locales_chpl).addr)->_instance);
  chpl_gen_comm_get(((void*)(&ret_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_2239).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2239).addr, sizeof(chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t), COMMID(1), INT64(3), INT64(64));
  checkAccess_chpl(local_Locales_chpl, i_i_chpl, ret_chpl, INT64(3), INT32(64));
  coerce_tmp_chpl3 = ret_chpl;
  coerce_tmp_chpl4 = *(i_chpl + INT64(0));
  chpl_check_nil((&coerce_tmp_chpl3)->addr, INT64(3), INT32(64));
  chpl_macro_tmp_2240.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_2240.addr = &(((&coerce_tmp_chpl3)->addr)->shiftedData);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID((chpl_macro_tmp_2240).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2240).addr, sizeof(chpl____wide__ddata_locale), COMMID(2), INT64(3), INT64(64));
  chpl_macro_tmp_2241.locale = (&coerce_tmp_chpl5)->locale;
  chpl_macro_tmp_2241.addr = ((&coerce_tmp_chpl5)->addr + coerce_tmp_chpl4);
  call_tmp_chpl36 = chpl_macro_tmp_2241;
  chpl_macro_tmp_2242.locale = (call_tmp_chpl36).locale;
  chpl_macro_tmp_2242.addr = &(((call_tmp_chpl36).addr)->_instance);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl6)), chpl_nodeFromLocaleID((chpl_macro_tmp_2242).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2242).addr, sizeof(chpl____wide_BaseLocale), COMMID(3), INT64(3), INT64(64));
  chpl_macro_tmp_2243.locale = (&coerce_tmp_chpl6)->locale;
  chpl_macro_tmp_2243.addr = ((object_chpl)((&coerce_tmp_chpl6)->addr));
  coerce_tmp_chpl7 = chpl_macro_tmp_2243;
  chpl_macro_tmp_2244.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2244.addr = nil;
  chpl_macro_tmp_2245.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2245.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_2245;
  if (! (((&coerce_tmp_chpl7)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl7)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl7)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(3), INT32(64));
  }
  call_tmp_chpl37 = (&coerce_tmp_chpl6)->locale;
  chpl_rmem_consist_release(INT64(3), INT32(64));
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
  if (isdirect_chpl) {
    on_fn_chpl94();
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl94)(&chpl_macro_tmp_2246));
    chpl_check_nil(_args_foron_fn_chpl, INT64(3), INT32(64));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl94_object);
    chpl_taskRunningCntDec(INT64(3), INT32(64));
    /*** wrapon_fn_chpl94 ***/ chpl_executeOn(call_tmp_chpl37, INT32(106), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(3), INT32(64));
    chpl_taskRunningCntInc(INT64(3), INT32(64));
  }
  chpl_rmem_consist_acquire(INT64(3), INT32(64));
  chpl_check_nil((&x_chpl)->addr, INT64(1), INT32(64));
  chpl_macro_tmp_2247.locale = (&x_chpl)->locale;
  chpl_macro_tmp_2247.addr = &(((&x_chpl)->addr)->value);
  chpl_gen_comm_get(((void*)(&tmp_chpl16)), chpl_nodeFromLocaleID((chpl_macro_tmp_2247).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2247).addr, sizeof(int64_t), COMMID(4), INT64(1), INT64(64));
  writeln_chpl(&local__str_literal_1646_chpl, tmp_chpl16);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_put_chpl:;
  return;
}

/* put.chpl:1 */
static void chpl_user_main(void) {
  return;
}

/* put.chpl:1 */
int64_t chpl_gen_main(chpl_main_argument * _arg) {
  chpl___EndCount_RAtomicT_int64_t_RAtomicT_int64_t new_temp_chpl = NULL;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_RAtomicT_int64_t_RAtomicT_int64_t tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl16 = NULL;
  chpl____wide__nilType chpl_macro_tmp_2248;
  chpl____wide_Error chpl_macro_tmp_2249;
  chpl____wide__EndCount_RAtomicT_int64_t_RAtomicT_int64_t chpl_macro_tmp_2250;
  new_temp_chpl = _new_chpl2(INT64(1), INT32(64));
  chpl_task_setDynamicEndCount(new_temp_chpl);
  chpl_rt_preUserCodeHook();
  chpl__init_put(INT64(1), INT32(64));
  chpl_user_main();
  chpl_rt_postUserCodeHook();
  chpl_macro_tmp_2248.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2248.addr = nil;
  chpl_macro_tmp_2249.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2249.addr = NULL;
  error_chpl = chpl_macro_tmp_2249;
  chpl_macro_tmp_2250.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2250.addr = new_temp_chpl;
  tmp_chpl15 = chpl_macro_tmp_2250;
  tmp_chpl16 = &error_chpl;
  _waitEndCount_chpl(tmp_chpl15, tmp_chpl16);
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, INT64(1), INT32(64));
  }
  chpl_deinitModules();
  return INT64(0);
}

/* put.chpl:3 */
static void on_fn_chpl94(void) {
  chpl____wide__ref_int64_t chpl_macro_tmp_2251;
  int64_t chpl_macro_tmp_2252;
  chpl_check_nil((&x_chpl)->addr, INT64(4), INT32(64));
  chpl_macro_tmp_2251.locale = (&x_chpl)->locale;
  chpl_macro_tmp_2251.addr = &(((&x_chpl)->addr)->value);
  chpl_macro_tmp_2252 = INT64(4343);
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_2252)), chpl_nodeFromLocaleID((chpl_macro_tmp_2251).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2251).addr, sizeof(int64_t), COMMID(5), INT64(4), INT64(64));
  return;
}

/* put.chpl:3 */
static void wrapon_fn_chpl94(_class_localson_fn_chpl94 c_chpl) {
  chpl_rmem_consist_acquire(INT64(3), INT32(64));
  chpl_taskRunningCntInc(INT64(3), INT32(64));
  on_fn_chpl94();
  chpl_taskRunningCntDec(INT64(3), INT32(64));
  chpl_rmem_consist_release(INT64(3), INT32(64));
  return;
}

