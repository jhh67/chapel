/* ChapelArray.chpl:24 */
static void chpl__init_ChapelArray(int64_t _ln_chpl,
                                   int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  chpl____wide__ref_AtomicT_int64_t tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_1439;
  if (chpl__init_ChapelArray_p) {
    goto _exit_chpl__init_ChapelArray_chpl;
  }
  printModuleInit_chpl("%*s\n", "ChapelArray", INT64(11));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_ChapelArray_p = UINT8(true);
  {
    chpl__init_ChapelBase(INT64(24), INT32(30));
    chpl__init_ChapelTuple(INT64(24), INT32(30));
    chpl__init_ChapelLocale(INT64(24), INT32(30));
    chpl__init_ChapelDebugPrint(INT64(24), INT32(30));
    chpl__init_CTypes(INT64(24), INT32(30));
    chpl__init_ChapelPrivatization(INT64(24), INT32(30));
    chpl__init_ChapelDomain(INT64(24), INT32(30));
    chpl__init_Sort(INT64(24), INT32(30));
    chpl__init_HaltWrappers(INT64(24), INT32(30));
    chpl__init_IO(INT64(24), INT32(30));
  }
  chpl_addModule("ChapelArray", ((c_fn_ptr)(chpl__deinit_ChapelArray)));
  chpl_check_nil((&numPrivateObjects_chpl)->addr, INT64(41), INT32(30));
  chpl_macro_tmp_1439.locale = (&numPrivateObjects_chpl)->locale;
  chpl_macro_tmp_1439.addr = &(((&numPrivateObjects_chpl)->addr)->value);
  tmp_chpl15 = chpl_macro_tmp_1439;
  init_chpl2(tmp_chpl15);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_ChapelArray_chpl:;
  return;
}

/* ChapelArray.chpl:24 */
static void chpl__deinit_ChapelArray(void) {
  return;
}

/* ChapelArray.chpl:141 */
static void _freePrivatizedClass_chpl(int64_t pid_chpl,
                                      chpl____wide_object original_chpl) {
  string_chpl local__str_literal_75_chpl;
  chpl____wide__ref__wide__array_DefaultRectangularArr_1_int64_t_F_locale_int64_t local_Locales_chpl = {CHPL_LOCALEID_T_INIT, NULL};
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
  _class_localson_fn_chpl16 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref__wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t chpl_macro_tmp_1440;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_1441;
  chpl____wide__ref_locale chpl_macro_tmp_1442;
  chpl____wide__ref__wide_BaseLocale chpl_macro_tmp_1443;
  chpl____wide_object chpl_macro_tmp_1444;
  chpl____wide__nilType chpl_macro_tmp_1445;
  chpl____wide_object chpl_macro_tmp_1446;
  chpl__class_localson_fn_chpl16_object chpl_macro_tmp_1447;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  local_Locales_chpl = Locales_chpl;
  if (pid_chpl == INT64(-1)) {
    goto _end__freePrivatizedClass_chpl;
  }
  *(i_chpl + INT64(0)) = INT64(0);
  i_i_chpl = &i_chpl;
  chpl_macro_tmp_1440.locale = (local_Locales_chpl).locale;
  chpl_macro_tmp_1440.addr = &(((local_Locales_chpl).addr)->_instance);
  chpl_gen_comm_get(((void*)(&ret_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_1440).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1440).addr, sizeof(chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t), COMMID(0), INT64(146), INT64(30));
  checkAccess_chpl(local_Locales_chpl, i_i_chpl, ret_chpl, INT64(146), INT32(30));
  coerce_tmp_chpl3 = ret_chpl;
  coerce_tmp_chpl4 = *(i_chpl + INT64(0));
  chpl_check_nil((&coerce_tmp_chpl3)->addr, INT64(146), INT32(30));
  chpl_macro_tmp_1441.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_1441.addr = &(((&coerce_tmp_chpl3)->addr)->shiftedData);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID((chpl_macro_tmp_1441).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1441).addr, sizeof(chpl____wide__ddata_locale), COMMID(1), INT64(146), INT64(30));
  chpl_macro_tmp_1442.locale = (&coerce_tmp_chpl5)->locale;
  chpl_macro_tmp_1442.addr = ((&coerce_tmp_chpl5)->addr + coerce_tmp_chpl4);
  call_tmp_chpl36 = chpl_macro_tmp_1442;
  chpl_macro_tmp_1443.locale = (call_tmp_chpl36).locale;
  chpl_macro_tmp_1443.addr = &(((call_tmp_chpl36).addr)->_instance);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl6)), chpl_nodeFromLocaleID((chpl_macro_tmp_1443).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1443).addr, sizeof(chpl____wide_BaseLocale), COMMID(2), INT64(146), INT64(30));
  chpl_macro_tmp_1444.locale = (&coerce_tmp_chpl6)->locale;
  chpl_macro_tmp_1444.addr = ((object_chpl)((&coerce_tmp_chpl6)->addr));
  coerce_tmp_chpl7 = chpl_macro_tmp_1444;
  chpl_macro_tmp_1445.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1445.addr = nil;
  chpl_macro_tmp_1446.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1446.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_1446;
  if (! (((&coerce_tmp_chpl7)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl7)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl7)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(146), INT32(30));
  }
  call_tmp_chpl37 = (&coerce_tmp_chpl6)->locale;
  chpl_rmem_consist_release(INT64(146), INT32(30));
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
  if (isdirect_chpl) {
    on_fn_chpl16(pid_chpl, original_chpl);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl16)(&chpl_macro_tmp_1447));
    chpl_check_nil(_args_foron_fn_chpl, INT64(146), INT32(30));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
    chpl_check_nil(_args_foron_fn_chpl, INT64(146), INT32(30));
    (_args_foron_fn_chpl)->_1_pid = pid_chpl;
    chpl_check_nil(_args_foron_fn_chpl, INT64(146), INT32(30));
    (_args_foron_fn_chpl)->_2_original = original_chpl;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl16_object);
    chpl_taskRunningCntDec(INT64(146), INT32(30));
    /*** wrapon_fn_chpl16 ***/ chpl_executeOn(call_tmp_chpl37, INT32(18), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(146), INT32(30));
    chpl_taskRunningCntInc(INT64(146), INT32(30));
  }
  chpl_rmem_consist_acquire(INT64(146), INT32(30));
  _end__freePrivatizedClass_chpl:;
  return;
}

/* ChapelArray.chpl:146 */
static void wrapon_fn_chpl16(_class_localson_fn_chpl16 c_chpl) {
  int64_t _1_pid_chpl;
  chpl____wide_object _2_original_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(146), INT32(30));
  chpl_check_nil(c_chpl, INT64(146), INT32(30));
  _1_pid_chpl = (c_chpl)->_1_pid;
  chpl_check_nil(c_chpl, INT64(146), INT32(30));
  _2_original_chpl = (c_chpl)->_2_original;
  chpl_taskRunningCntInc(INT64(146), INT32(30));
  on_fn_chpl16(_1_pid_chpl, _2_original_chpl);
  chpl_taskRunningCntDec(INT64(146), INT32(30));
  chpl_rmem_consist_release(INT64(146), INT32(30));
  return;
}

/* ChapelArray.chpl:146 */
static void on_fn_chpl16(int64_t pid_chpl,
                         chpl____wide_object original_chpl) {
  _freePrivatizedClassHelp_chpl(pid_chpl, original_chpl);
  return;
}

/* ChapelArray.chpl:150 */
static void _freePrivatizedClassHelp_chpl(int64_t pid_chpl,
                                          chpl____wide_object original_chpl) {
  _ref_chpl_privateObject_t_chpl call_tmp_chpl36 = NULL;
  _ref_c_void_ptr_chpl call_tmp_chpl37 = NULL;
  object_chpl call_tmp_chpl38 = NULL;
  chpl____wide_object coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___EndCount_AtomicT_int64_t_int64_t _cobeginCount_chpl = NULL;
  chpl___EndCount_AtomicT_int64_t_int64_t new_temp_chpl = NULL;
  _class_localscobegin_fn_chpl _args_forcobegin_fn_chpl = NULL;
  c_void_ptr _args_vforcobegin_fn_chpl;
  _class_localscobegin_fn_chpl2 _args_forcobegin_fn_chpl2 = NULL;
  c_void_ptr _args_vforcobegin_fn_chpl2;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl16 = NULL;
  chpl____wide_object chpl_macro_tmp_1448;
  chpl__class_localscobegin_fn_chpl_object chpl_macro_tmp_1449;
  chpl__class_localscobegin_fn_chpl2_object chpl_macro_tmp_1450;
  chpl____wide__nilType chpl_macro_tmp_1451;
  chpl____wide_Error chpl_macro_tmp_1452;
  call_tmp_chpl36 = (chpl_privateObjects + pid_chpl);
  call_tmp_chpl37 = &((call_tmp_chpl36)->obj);
  call_tmp_chpl38 = ((object_chpl)(*(call_tmp_chpl37)));
  coerce_tmp_chpl3 = original_chpl;
  chpl_macro_tmp_1448.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1448.addr = call_tmp_chpl38;
  tmp_chpl15 = chpl_macro_tmp_1448;
  if (((&tmp_chpl15)->addr != (&coerce_tmp_chpl3)->addr) || ((!(! (&tmp_chpl15)->addr)) && (chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&coerce_tmp_chpl3)->locale, INT64(0), INT32(0))))) {
    chpl__delete9(call_tmp_chpl38);
  }
  chpl_clearPrivatizedClass(pid_chpl);
  new_temp_chpl = _new_chpl(INT64(158), INT32(30));
  _cobeginCount_chpl = new_temp_chpl;
  _upEndCount_chpl(_cobeginCount_chpl, INT64(2));
  _args_forcobegin_fn_chpl = ((_class_localscobegin_fn_chpl)(&chpl_macro_tmp_1449));
  chpl_check_nil(_args_forcobegin_fn_chpl, INT64(159), INT32(30));
  (_args_forcobegin_fn_chpl)->_0_pid = pid_chpl;
  chpl_check_nil(_args_forcobegin_fn_chpl, INT64(159), INT32(30));
  (_args_forcobegin_fn_chpl)->_1_original = original_chpl;
  chpl_check_nil(_args_forcobegin_fn_chpl, INT64(159), INT32(30));
  (_args_forcobegin_fn_chpl)->_2__cobeginCount = _cobeginCount_chpl;
  _args_vforcobegin_fn_chpl = ((void*)(_args_forcobegin_fn_chpl));
  /*** wrapcobegin_fn_chpl ***/ chpl_taskAddCoStmt(chpl_task_getRequestedSubloc(), INT64(19), ((chpl_task_bundle_p)(_args_vforcobegin_fn_chpl)), sizeof(chpl__class_localscobegin_fn_chpl_object), INT64(159), INT32(30));
  _args_forcobegin_fn_chpl2 = ((_class_localscobegin_fn_chpl2)(&chpl_macro_tmp_1450));
  chpl_check_nil(_args_forcobegin_fn_chpl2, INT64(162), INT32(30));
  (_args_forcobegin_fn_chpl2)->_0_pid = pid_chpl;
  chpl_check_nil(_args_forcobegin_fn_chpl2, INT64(162), INT32(30));
  (_args_forcobegin_fn_chpl2)->_1_original = original_chpl;
  chpl_check_nil(_args_forcobegin_fn_chpl2, INT64(162), INT32(30));
  (_args_forcobegin_fn_chpl2)->_2__cobeginCount = _cobeginCount_chpl;
  _args_vforcobegin_fn_chpl2 = ((void*)(_args_forcobegin_fn_chpl2));
  /*** wrapcobegin_fn_chpl2 ***/ chpl_taskAddCoStmt(chpl_task_getRequestedSubloc(), INT64(21), ((chpl_task_bundle_p)(_args_vforcobegin_fn_chpl2)), sizeof(chpl__class_localscobegin_fn_chpl2_object), INT64(162), INT32(30));
  chpl_macro_tmp_1451.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1451.addr = nil;
  chpl_macro_tmp_1452.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1452.addr = NULL;
  error_chpl = chpl_macro_tmp_1452;
  tmp_chpl16 = &error_chpl;
  _waitEndCount_chpl3(_cobeginCount_chpl, INT64(2), tmp_chpl16);
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, INT64(158), INT32(30));
  }
  chpl__delete3(_cobeginCount_chpl);
  return;
}

/* ChapelArray.chpl:159 */
static void wrapcobegin_fn_chpl(_class_localscobegin_fn_chpl c_chpl) {
  int64_t _0_pid_chpl;
  chpl____wide_object _1_original_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(159), INT32(30));
  chpl_check_nil(c_chpl, INT64(159), INT32(30));
  _0_pid_chpl = (c_chpl)->_0_pid;
  chpl_check_nil(c_chpl, INT64(159), INT32(30));
  _1_original_chpl = (c_chpl)->_1_original;
  chpl_check_nil(c_chpl, INT64(159), INT32(30));
  cobegin_fn_chpl(_0_pid_chpl, _1_original_chpl, (c_chpl)->_2__cobeginCount);
  chpl_check_nil(c_chpl, INT64(159), INT32(30));
  _downEndCount_chpl((c_chpl)->_2__cobeginCount, nil);
  return;
}

/* ChapelArray.chpl:159 */
static void cobegin_fn_chpl(int64_t pid_chpl,
                            chpl____wide_object original_chpl,
                            chpl___EndCount_AtomicT_int64_t_int64_t _cobeginCount_chpl) {
  string_chpl local__str_literal_75_chpl;
  _ref_locale_chpl call_tmp_chpl36 = NULL;
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl call_tmp_chpl37 = NULL;
  chpl_localeID_t call_tmp_chpl38;
  chpl____wide_BaseLocale coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl17 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_object chpl_macro_tmp_1453;
  chpl____wide__nilType chpl_macro_tmp_1454;
  chpl____wide_object chpl_macro_tmp_1455;
  chpl____wide_object chpl_macro_tmp_1456;
  chpl____wide__nilType chpl_macro_tmp_1457;
  chpl____wide_object chpl_macro_tmp_1458;
  chpl__class_localson_fn_chpl17_object chpl_macro_tmp_1459;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  call_tmp_chpl36 = &((&chpl_localeTree)->left);
  coerce_tmp_chpl3 = (call_tmp_chpl36)->_instance;
  chpl_macro_tmp_1453.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_1453.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_1453;
  chpl_macro_tmp_1454.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1454.addr = nil;
  chpl_macro_tmp_1455.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1455.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_1455;
  if (((&coerce_tmp_chpl4)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0))))) {
    call_tmp_chpl37 = &((&chpl_localeTree)->left);
    coerce_tmp_chpl5 = (call_tmp_chpl37)->_instance;
    chpl_macro_tmp_1456.locale = (&coerce_tmp_chpl5)->locale;
    chpl_macro_tmp_1456.addr = ((object_chpl)((&coerce_tmp_chpl5)->addr));
    coerce_tmp_chpl6 = chpl_macro_tmp_1456;
    chpl_macro_tmp_1457.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1457.addr = nil;
    chpl_macro_tmp_1458.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1458.addr = NULL;
    tmp_chpl16 = chpl_macro_tmp_1458;
    if (! (((&coerce_tmp_chpl6)->addr != (&tmp_chpl16)->addr) || ((!(! (&coerce_tmp_chpl6)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl6)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl16)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(160), INT32(30));
    }
    call_tmp_chpl38 = (&coerce_tmp_chpl5)->locale;
    chpl_rmem_consist_release(INT64(160), INT32(30));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl38);
    if (isdirect_chpl) {
      on_fn_chpl17(pid_chpl, original_chpl);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl17)(&chpl_macro_tmp_1459));
      chpl_check_nil(_args_foron_fn_chpl, INT64(160), INT32(30));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl38;
      chpl_check_nil(_args_foron_fn_chpl, INT64(160), INT32(30));
      (_args_foron_fn_chpl)->_1_pid = pid_chpl;
      chpl_check_nil(_args_foron_fn_chpl, INT64(160), INT32(30));
      (_args_foron_fn_chpl)->_2_original = original_chpl;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl17_object);
      chpl_taskRunningCntDec(INT64(160), INT32(30));
      /*** wrapon_fn_chpl17 ***/ chpl_executeOn(call_tmp_chpl38, INT32(20), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(160), INT32(30));
      chpl_taskRunningCntInc(INT64(160), INT32(30));
    }
    chpl_rmem_consist_acquire(INT64(160), INT32(30));
  }
  return;
}

/* ChapelArray.chpl:160 */
static void wrapon_fn_chpl17(_class_localson_fn_chpl17 c_chpl) {
  int64_t _1_pid_chpl;
  chpl____wide_object _2_original_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(160), INT32(30));
  chpl_check_nil(c_chpl, INT64(160), INT32(30));
  _1_pid_chpl = (c_chpl)->_1_pid;
  chpl_check_nil(c_chpl, INT64(160), INT32(30));
  _2_original_chpl = (c_chpl)->_2_original;
  chpl_taskRunningCntInc(INT64(160), INT32(30));
  on_fn_chpl17(_1_pid_chpl, _2_original_chpl);
  chpl_taskRunningCntDec(INT64(160), INT32(30));
  chpl_rmem_consist_release(INT64(160), INT32(30));
  return;
}

/* ChapelArray.chpl:160 */
static void on_fn_chpl17(int64_t pid_chpl,
                         chpl____wide_object original_chpl) {
  _freePrivatizedClassHelp_chpl(pid_chpl, original_chpl);
  return;
}

/* ChapelArray.chpl:162 */
static void wrapcobegin_fn_chpl2(_class_localscobegin_fn_chpl2 c_chpl) {
  int64_t _0_pid_chpl;
  chpl____wide_object _1_original_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(162), INT32(30));
  chpl_check_nil(c_chpl, INT64(162), INT32(30));
  _0_pid_chpl = (c_chpl)->_0_pid;
  chpl_check_nil(c_chpl, INT64(162), INT32(30));
  _1_original_chpl = (c_chpl)->_1_original;
  chpl_check_nil(c_chpl, INT64(162), INT32(30));
  cobegin_fn_chpl2(_0_pid_chpl, _1_original_chpl, (c_chpl)->_2__cobeginCount);
  chpl_check_nil(c_chpl, INT64(162), INT32(30));
  _downEndCount_chpl((c_chpl)->_2__cobeginCount, nil);
  return;
}

/* ChapelArray.chpl:162 */
static void cobegin_fn_chpl2(int64_t pid_chpl,
                             chpl____wide_object original_chpl,
                             chpl___EndCount_AtomicT_int64_t_int64_t _cobeginCount_chpl) {
  string_chpl local__str_literal_75_chpl;
  _ref_locale_chpl call_tmp_chpl36 = NULL;
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl call_tmp_chpl37 = NULL;
  chpl_localeID_t call_tmp_chpl38;
  chpl____wide_BaseLocale coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl18 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_object chpl_macro_tmp_1460;
  chpl____wide__nilType chpl_macro_tmp_1461;
  chpl____wide_object chpl_macro_tmp_1462;
  chpl____wide_object chpl_macro_tmp_1463;
  chpl____wide__nilType chpl_macro_tmp_1464;
  chpl____wide_object chpl_macro_tmp_1465;
  chpl__class_localson_fn_chpl18_object chpl_macro_tmp_1466;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  call_tmp_chpl36 = &((&chpl_localeTree)->right);
  coerce_tmp_chpl3 = (call_tmp_chpl36)->_instance;
  chpl_macro_tmp_1460.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_1460.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_1460;
  chpl_macro_tmp_1461.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1461.addr = nil;
  chpl_macro_tmp_1462.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1462.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_1462;
  if (((&coerce_tmp_chpl4)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0))))) {
    call_tmp_chpl37 = &((&chpl_localeTree)->right);
    coerce_tmp_chpl5 = (call_tmp_chpl37)->_instance;
    chpl_macro_tmp_1463.locale = (&coerce_tmp_chpl5)->locale;
    chpl_macro_tmp_1463.addr = ((object_chpl)((&coerce_tmp_chpl5)->addr));
    coerce_tmp_chpl6 = chpl_macro_tmp_1463;
    chpl_macro_tmp_1464.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1464.addr = nil;
    chpl_macro_tmp_1465.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1465.addr = NULL;
    tmp_chpl16 = chpl_macro_tmp_1465;
    if (! (((&coerce_tmp_chpl6)->addr != (&tmp_chpl16)->addr) || ((!(! (&coerce_tmp_chpl6)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl6)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl16)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(163), INT32(30));
    }
    call_tmp_chpl38 = (&coerce_tmp_chpl5)->locale;
    chpl_rmem_consist_release(INT64(163), INT32(30));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl38);
    if (isdirect_chpl) {
      on_fn_chpl18(pid_chpl, original_chpl);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl18)(&chpl_macro_tmp_1466));
      chpl_check_nil(_args_foron_fn_chpl, INT64(163), INT32(30));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl38;
      chpl_check_nil(_args_foron_fn_chpl, INT64(163), INT32(30));
      (_args_foron_fn_chpl)->_1_pid = pid_chpl;
      chpl_check_nil(_args_foron_fn_chpl, INT64(163), INT32(30));
      (_args_foron_fn_chpl)->_2_original = original_chpl;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl18_object);
      chpl_taskRunningCntDec(INT64(163), INT32(30));
      /*** wrapon_fn_chpl18 ***/ chpl_executeOn(call_tmp_chpl38, INT32(22), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(163), INT32(30));
      chpl_taskRunningCntInc(INT64(163), INT32(30));
    }
    chpl_rmem_consist_acquire(INT64(163), INT32(30));
  }
  return;
}

/* ChapelArray.chpl:163 */
static void wrapon_fn_chpl18(_class_localson_fn_chpl18 c_chpl) {
  int64_t _1_pid_chpl;
  chpl____wide_object _2_original_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(163), INT32(30));
  chpl_check_nil(c_chpl, INT64(163), INT32(30));
  _1_pid_chpl = (c_chpl)->_1_pid;
  chpl_check_nil(c_chpl, INT64(163), INT32(30));
  _2_original_chpl = (c_chpl)->_2_original;
  chpl_taskRunningCntInc(INT64(163), INT32(30));
  on_fn_chpl18(_1_pid_chpl, _2_original_chpl);
  chpl_taskRunningCntDec(INT64(163), INT32(30));
  chpl_rmem_consist_release(INT64(163), INT32(30));
  return;
}

/* ChapelArray.chpl:163 */
static void on_fn_chpl18(int64_t pid_chpl,
                         chpl____wide_object original_chpl) {
  _freePrivatizedClassHelp_chpl(pid_chpl, original_chpl);
  return;
}

/* ChapelArray.chpl:198 */
static void _makeIndexTuple_chpl(_tuple_1_star_int64_t_chpl * t_chpl,
                                 _tuple_1_star_int64_t_chpl * _retArg_chpl) {
  _tuple_1_star_int64_t_chpl ret_chpl;
  *(ret_chpl + INT64(0)) = *(*(t_chpl) + INT64(0));
  *(*(_retArg_chpl) + INT64(0)) = *(ret_chpl + INT64(0));
  return;
}

/* ChapelArray.chpl:227 */
static void _newArray_chpl(DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl value_chpl,
                           _array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl * _retArg_chpl) {
  _array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl call_tmp_chpl36;
  _array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl initTemp_chpl;
  init_chpl7(&initTemp_chpl, INT64(-1), value_chpl, UINT8(false));
  call_tmp_chpl36 = initTemp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelArray.chpl:238 */
static void _getDistribution_chpl(chpl____wide_DefaultDist value_chpl,
                                  _distribution_DefaultDist_chpl * _retArg_chpl) {
  _distribution_DefaultDist_chpl call_tmp_chpl36;
  _distribution_DefaultDist_chpl initTemp_chpl;
  chpl____wide__ref__wide__distribution_DefaultDist tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__distribution_DefaultDist chpl_macro_tmp_1467;
  chpl_macro_tmp_1467.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1467.addr = &initTemp_chpl;
  tmp_chpl15 = chpl_macro_tmp_1467;
  init_chpl5(tmp_chpl15, INT64(-1), value_chpl, UINT8(true));
  call_tmp_chpl36 = initTemp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelArray.chpl:258 */
static chpl___RuntimeTypeInfo2 chpl__buildArrayRuntimeType(_domain_DefaultRectangularDom_1_int64_t_F_chpl * dom_chpl) {
  chpl___RuntimeTypeInfo2 _return_tmp__chpl;
  (&_return_tmp__chpl)->dom = *(dom_chpl);
  return _return_tmp__chpl;
}

/* ChapelArray.chpl:263 */
static void chpl__convertRuntimeTypeToValue(_domain_DefaultRectangularDom_1_int64_t_F_chpl * dom_chpl,
                                            chpl_bool definedConst_chpl,
                                            _array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl * _retArg_chpl) {
  _array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl call_tmp_chpl36;
  _array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl ret_tmp_chpl;
  buildArray_chpl(dom_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelArray.chpl:389 */
static void chpl_incRefCountsForDomainsInArrayEltTypes(BaseArr_chpl arr_chpl) {
  return;
}

/* ChapelArray.chpl:401 */
static void chpl_decRefCountsForDomainsInArrayEltTypes3(chpl____wide_BaseArr arr_chpl) {
  return;
}

/* ChapelArray.chpl:401 */
static void chpl_decRefCountsForDomainsInArrayEltTypes2(chpl____wide_BaseArr arr_chpl) {
  return;
}

/* ChapelArray.chpl:401 */
static void chpl_decRefCountsForDomainsInArrayEltTypes(chpl____wide_BaseArr arr_chpl) {
  return;
}

/* ChapelArray.chpl:675 */
static void chpl__buildDistValue(DefaultDist_chpl x_chpl2,
                                 _distribution_DefaultDist_chpl * _retArg_chpl) {
  _distribution_DefaultDist_chpl call_tmp_chpl36;
  _distribution_DefaultDist_chpl initTemp_chpl;
  init_chpl6(&initTemp_chpl, x_chpl2);
  call_tmp_chpl36 = initTemp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelArray.chpl:700 */
static void init_chpl5(chpl____wide__ref__wide__distribution_DefaultDist this_chpl7,
                       int64_t _pid_chpl,
                       chpl____wide_DefaultDist _instance_chpl,
                       chpl_bool _unowned_chpl) {
  chpl____wide__ref_int64_t chpl_macro_tmp_1468;
  chpl____wide__ref__wide_DefaultDist chpl_macro_tmp_1469;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1470;
  chpl_macro_tmp_1468.locale = (this_chpl7).locale;
  chpl_macro_tmp_1468.addr = &(((this_chpl7).addr)->_pid);
  chpl_gen_comm_put(((void*)(&_pid_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_1468).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1468).addr, sizeof(int64_t), COMMID(3), INT64(701), INT64(30));
  chpl_macro_tmp_1469.locale = (this_chpl7).locale;
  chpl_macro_tmp_1469.addr = &(((this_chpl7).addr)->_instance);
  chpl_gen_comm_put(((void*)(&_instance_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_1469).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1469).addr, sizeof(chpl____wide_DefaultDist), COMMID(4), INT64(702), INT64(30));
  chpl_macro_tmp_1470.locale = (this_chpl7).locale;
  chpl_macro_tmp_1470.addr = &(((this_chpl7).addr)->_unowned);
  chpl_gen_comm_put(((void*)(&_unowned_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_1470).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1470).addr, sizeof(chpl_bool), COMMID(5), INT64(703), INT64(30));
  return;
}

/* ChapelArray.chpl:706 */
static void init_chpl6(_distribution_DefaultDist_chpl * this_chpl7,
                       DefaultDist_chpl value_chpl) {
  chpl____wide_DefaultDist tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultDist chpl_macro_tmp_1471;
  (this_chpl7)->_pid = INT64(-1);
  chpl_macro_tmp_1471.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1471.addr = value_chpl;
  tmp_chpl15 = chpl_macro_tmp_1471;
  (this_chpl7)->_instance = tmp_chpl15;
  (this_chpl7)->_unowned = UINT8(false);
  return;
}

/* ChapelArray.chpl:731 */
static void wrapon_fn_chpl19(_class_localson_fn_chpl19 c_chpl) {
  _distribution_DefaultDist_chpl _1_rvfDerefTmp_chpl;
  _distribution_DefaultDist_chpl tmp_chpl15;
  chpl_rmem_consist_acquire(INT64(731), INT32(30));
  chpl_check_nil(c_chpl, INT64(731), INT32(30));
  tmp_chpl15 = (c_chpl)->_1_rvfDerefTmp;
  _1_rvfDerefTmp_chpl = tmp_chpl15;
  chpl_taskRunningCntInc(INT64(731), INT32(30));
  on_fn_chpl19(&_1_rvfDerefTmp_chpl);
  chpl_taskRunningCntDec(INT64(731), INT32(30));
  chpl_rmem_consist_release(INT64(731), INT32(30));
  return;
}

/* ChapelArray.chpl:731 */
static void on_fn_chpl19(_distribution_DefaultDist_chpl * this_chpl7) {
  chpl____wide_BaseDist call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultDist coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist chpl_macro_tmp_1472;
  chpl____wide_object chpl_macro_tmp_1473;
  chpl____wide__nilType chpl_macro_tmp_1474;
  chpl____wide_object chpl_macro_tmp_1475;
  coerce_tmp_chpl3 = (this_chpl7)->_instance;
  chpl_macro_tmp_1472.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_1472.addr = ((BaseDist_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_1472;
  chpl_check_nil((&coerce_tmp_chpl4)->addr, INT64(736), INT32(30));
  call_tmp_chpl36 = remove_chpl(coerce_tmp_chpl4);
  chpl_macro_tmp_1473.locale = (&call_tmp_chpl36)->locale;
  chpl_macro_tmp_1473.addr = ((object_chpl)((&call_tmp_chpl36)->addr));
  coerce_tmp_chpl5 = chpl_macro_tmp_1473;
  chpl_macro_tmp_1474.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1474.addr = nil;
  chpl_macro_tmp_1475.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1475.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_1475;
  if (((&coerce_tmp_chpl5)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl5)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl5)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0))))) {
    _delete_dist_chpl(call_tmp_chpl36, UINT8(false));
  }
  return;
}

/* ChapelArray.chpl:744 */
static void deinit_chpl3(chpl____wide__ref__wide__distribution_DefaultDist this_chpl7) {
  chpl_bool tmp_chpl15;
  chpl_bool tmp_chpl16;
  chpl____wide__ref__wide_DefaultDist call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl37;
  chpl____wide_DefaultDist tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _distribution_DefaultDist_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl19 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1476;
  chpl____wide__ref__wide_DefaultDist chpl_macro_tmp_1477;
  chpl__class_localson_fn_chpl19_object chpl_macro_tmp_1478;
  chpl_macro_tmp_1476.locale = (this_chpl7).locale;
  chpl_macro_tmp_1476.addr = &(((this_chpl7).addr)->_unowned);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1476).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1476).addr, sizeof(chpl_bool), COMMID(6), INT64(745), INT64(30));
  if (! tmp_chpl15) {
    tmp_chpl16 = UINT8(false);
  } else {
    tmp_chpl16 = UINT8(false);
  }
  if (tmp_chpl16) {
    chpl_macro_tmp_1477.locale = (this_chpl7).locale;
    chpl_macro_tmp_1477.addr = &(((this_chpl7).addr)->_instance);
    call_tmp_chpl36 = chpl_macro_tmp_1477;
    chpl_gen_comm_get(((void*)(&tmp_chpl17)), chpl_nodeFromLocaleID((call_tmp_chpl36).locale, INT64(0), INT32(0)), (call_tmp_chpl36).addr, sizeof(chpl____wide_DefaultDist), COMMID(7), INT64(745), INT64(30));
    call_tmp_chpl37 = (&tmp_chpl17)->locale;
    chpl_rmem_consist_release(INT64(745), INT32(30));
    chpl_gen_comm_get(((void*)(&rvfDerefTmp_chpl)), chpl_nodeFromLocaleID((this_chpl7).locale, INT64(0), INT32(0)), (this_chpl7).addr, sizeof(_distribution_DefaultDist_chpl), COMMID(8), INT64(745), INT64(30));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
    if (isdirect_chpl) {
      on_fn_chpl19(&rvfDerefTmp_chpl);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl19)(&chpl_macro_tmp_1478));
      chpl_check_nil(_args_foron_fn_chpl, INT64(745), INT32(30));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
      chpl_check_nil(_args_foron_fn_chpl, INT64(745), INT32(30));
      (_args_foron_fn_chpl)->_1_rvfDerefTmp = rvfDerefTmp_chpl;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl19_object);
      chpl_taskRunningCntDec(INT64(745), INT32(30));
      /*** wrapon_fn_chpl19 ***/ chpl_executeOn(call_tmp_chpl37, INT32(23), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(731), INT32(30));
      chpl_taskRunningCntInc(INT64(745), INT32(30));
    }
    chpl_rmem_consist_acquire(INT64(745), INT32(30));
  }
  return;
}

/* ChapelArray.chpl:748 */
static void clone_chpl(_distribution_DefaultDist_chpl * this_chpl7,
                       _distribution_DefaultDist_chpl * _retArg_chpl) {
  DefaultDist_chpl ret_chpl = NULL;
  chpl____wide_DefaultDist tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultDist_chpl call_tmp_chpl36 = NULL;
  _distribution_DefaultDist_chpl call_tmp_chpl37;
  _distribution_DefaultDist_chpl initTemp_chpl;
  tmp_chpl15 = (this_chpl7)->_instance;
  ret_chpl = (&tmp_chpl15)->addr;
  chpl_check_nil(ret_chpl, INT64(749), INT32(30));
  call_tmp_chpl36 = dsiClone_chpl(ret_chpl);
  init_chpl6(&initTemp_chpl, call_tmp_chpl36);
  call_tmp_chpl37 = initTemp_chpl;
  *(_retArg_chpl) = call_tmp_chpl37;
  return;
}

/* ChapelArray.chpl:752 */
static DefaultRectangularDom_1_int64_t_F_chpl newRectangularDom_chpl(_distribution_DefaultDist_chpl * this_chpl7,
                                                                     _tuple_1_star_range_int64_t_bounded_F_chpl * ranges_chpl,
                                                                     chpl_bool definedConst_chpl) {
  chpl____wide_DefaultDist ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularDom_1_int64_t_F_chpl call_tmp_chpl36 = NULL;
  BaseDom_chpl coerce_tmp_chpl3 = NULL;
  ret_chpl = (this_chpl7)->_instance;
  chpl_check_nil((&ret_chpl)->addr, INT64(755), INT32(30));
  call_tmp_chpl36 = dsiNewRectangularDom_chpl(ret_chpl, ranges_chpl);
  coerce_tmp_chpl3 = ((BaseDom_chpl)(call_tmp_chpl36));
  chpl_check_nil(coerce_tmp_chpl3, INT64(757), INT32(30));
  (coerce_tmp_chpl3)->definedConst = definedConst_chpl;
  return call_tmp_chpl36;
}

/* ChapelArray.chpl:765 */
static DefaultRectangularDom_1_int64_t_F_chpl newRectangularDom_chpl2(_distribution_DefaultDist_chpl * this_chpl7,
                                                                      chpl_bool definedConst_chpl) {
  _tuple_1_star_range_int64_t_bounded_F_chpl ranges_chpl;
  _tuple_1_star_range_int64_t_bounded_F_chpl ret_tmp_chpl;
  range_int64_t_bounded_F_chpl tup_x0_chpl;
  range_int64_t_bounded_F_chpl elt_x0_chpl;
  DefaultRectangularDom_1_int64_t_F_chpl call_tmp_chpl36 = NULL;
  init_chpl32(&elt_x0_chpl);
  tup_x0_chpl = elt_x0_chpl;
  *(ret_tmp_chpl + INT64(0)) = tup_x0_chpl;
  *(ranges_chpl + INT64(0)) = *(ret_tmp_chpl + INT64(0));
  call_tmp_chpl36 = newRectangularDom_chpl(this_chpl7, &ranges_chpl, definedConst_chpl);
  return call_tmp_chpl36;
}

/* ChapelArray.chpl:837 */
static void init_chpl7(_array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl * this_chpl7,
                       int64_t _pid_chpl,
                       DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl _instance_chpl,
                       chpl_bool _unowned_chpl) {
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t chpl_macro_tmp_1479;
  (this_chpl7)->_pid = _pid_chpl;
  chpl_macro_tmp_1479.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1479.addr = _instance_chpl;
  tmp_chpl15 = chpl_macro_tmp_1479;
  (this_chpl7)->_instance = tmp_chpl15;
  (this_chpl7)->_unowned = _unowned_chpl;
  return;
}

/* ChapelArray.chpl:873 */
static void deinit_chpl4(_array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl * this_chpl7) {
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl20 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl__class_localson_fn_chpl20_object chpl_macro_tmp_1480;
  coerce_tmp_chpl3 = (this_chpl7)->_instance;
  if (! (this_chpl7)->_unowned) {
    call_tmp_chpl36 = (&coerce_tmp_chpl3)->locale;
    chpl_rmem_consist_release(INT64(874), INT32(30));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      on_fn_chpl20(coerce_tmp_chpl3, UINT8(true));
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl20)(&chpl_macro_tmp_1480));
      chpl_check_nil(_args_foron_fn_chpl, INT64(874), INT32(30));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_check_nil(_args_foron_fn_chpl, INT64(874), INT32(30));
      (_args_foron_fn_chpl)->_1__instance = coerce_tmp_chpl3;
      chpl_check_nil(_args_foron_fn_chpl, INT64(874), INT32(30));
      (_args_foron_fn_chpl)->_2_deinitElts = UINT8(true);
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl20_object);
      chpl_taskRunningCntDec(INT64(874), INT32(30));
      /*** wrapon_fn_chpl21 ***/ chpl_executeOn(call_tmp_chpl36, INT32(25), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1785), INT32(30));
      chpl_taskRunningCntInc(INT64(874), INT32(30));
    }
    chpl_rmem_consist_acquire(INT64(874), INT32(30));
  } else {
  }
  return;
}

/* ChapelArray.chpl:886 */
static void _dom_chpl(chpl____wide__ref__wide__array_DefaultRectangularArr_1_int64_t_F_locale_int64_t this_chpl7,
                      _domain_DefaultRectangularDom_1_int64_t_F_chpl * _retArg_chpl) {
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F_chpl call_tmp_chpl36;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F_chpl ret_tmp_chpl;
  chpl____wide__ref__wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t chpl_macro_tmp_1481;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1482;
  chpl_macro_tmp_1481.locale = (this_chpl7).locale;
  chpl_macro_tmp_1481.addr = &(((this_chpl7).addr)->_instance);
  chpl_gen_comm_get(((void*)(&ret_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_1481).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1481).addr, sizeof(chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t), COMMID(9), INT64(886), INT64(30));
  coerce_tmp_chpl3 = ret_chpl;
  chpl_check_nil((&coerce_tmp_chpl3)->addr, INT64(886), INT32(30));
  chpl_macro_tmp_1482.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_1482.addr = &(((&coerce_tmp_chpl3)->addr)->dom);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID((chpl_macro_tmp_1482).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1482).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(10), INT64(886), INT64(30));
  _getDomain_chpl(coerce_tmp_chpl4, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelArray.chpl:910 */
static void checkAccess_chpl(chpl____wide__ref__wide__array_DefaultRectangularArr_1_int64_t_F_locale_int64_t this_chpl7,
                             _tuple_1_star_int64_t_chpl * indices_chpl2,
                             chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t value_chpl,
                             int64_t _ln_chpl,
                             int32_t _fn_chpl) {
  string_chpl local__str_literal_995_chpl;
  string_chpl local__str_literal_994_chpl;
  string_chpl local__str_literal_993_chpl;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl36;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl call_tmp_chpl37;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl ret_tmp_chpl;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1483;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1484;
  local__str_literal_995_chpl = _str_literal_995_chpl /* " but array bounds are " */;
  local__str_literal_994_chpl = _str_literal_994_chpl /* "note: index was " */;
  local__str_literal_993_chpl = _str_literal_993_chpl /* "array index out of bounds\n" */;
  coerce_tmp_chpl3 = value_chpl;
  chpl_check_nil((&coerce_tmp_chpl3)->addr, _ln_chpl, _fn_chpl);
  chpl_macro_tmp_1483.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_1483.addr = &(((&coerce_tmp_chpl3)->addr)->dom);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID((chpl_macro_tmp_1483).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1483).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(11), INT64(912), INT64(30));
  chpl_check_nil((&coerce_tmp_chpl4)->addr, _ln_chpl, _fn_chpl);
  call_tmp_chpl36 = dsiMember_chpl(coerce_tmp_chpl4, indices_chpl2);
  if (! call_tmp_chpl36) {
    coerce_tmp_chpl5 = value_chpl;
    chpl_check_nil((&coerce_tmp_chpl5)->addr, _ln_chpl, _fn_chpl);
    chpl_macro_tmp_1484.locale = (&coerce_tmp_chpl5)->locale;
    chpl_macro_tmp_1484.addr = &(((&coerce_tmp_chpl5)->addr)->dom);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl6)), chpl_nodeFromLocaleID((chpl_macro_tmp_1484).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1484).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(12), INT64(916), INT64(30));
    chpl_check_nil((&coerce_tmp_chpl6)->addr, _ln_chpl, _fn_chpl);
    dsiDim_chpl2(coerce_tmp_chpl6, &ret_tmp_chpl);
    call_tmp_chpl37 = ret_tmp_chpl;
    halt_chpl11(&local__str_literal_993_chpl, &local__str_literal_994_chpl, *(*(indices_chpl2) + INT64(0)), &local__str_literal_995_chpl, call_tmp_chpl37, _ln_chpl, _fn_chpl);
  }
  return;
}

/* ChapelArray.chpl:1785 */
static void on_fn_chpl20(chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t _instance_chpl,
                         chpl_bool deinitElts_chpl) {
  string_chpl local__str_literal_75_chpl;
  _tuple_2_BaseArr_BaseDom_chpl call_tmp_chpl36;
  chpl____wide_BaseArr coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_2_BaseArr_BaseDom_chpl ret_tmp_chpl;
  chpl____wide_BaseArr tmp_x0_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom tmp_x1_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom domToRemove_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom domToFree_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDom_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_BaseDist distToRemove_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist_chpl init_coerce_tmp_chpl4 = NULL;
  chpl____wide_BaseDist distToFree_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist_chpl init_coerce_tmp_chpl5 = NULL;
  chpl_bool domIsPrivatized_chpl;
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom tmp_x0_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist tmp_x1_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_2_BaseDom_BaseDist_chpl ret_tmp_chpl2;
  chpl____wide_BaseDom coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl16;
  chpl_bool distIsPrivatized_chpl;
  chpl____wide_object coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist call_tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist call_tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist coerce_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl18;
  chpl____wide_object coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr chpl_macro_tmp_1485;
  chpl____wide_BaseDom chpl_macro_tmp_1486;
  chpl____wide_BaseDist chpl_macro_tmp_1487;
  chpl____wide_BaseDist chpl_macro_tmp_1488;
  chpl____wide_object chpl_macro_tmp_1489;
  chpl____wide__nilType chpl_macro_tmp_1490;
  chpl____wide_object chpl_macro_tmp_1491;
  chpl____wide__ref_int64_t chpl_macro_tmp_1492;
  chpl____wide_object chpl_macro_tmp_1493;
  chpl____wide__nilType chpl_macro_tmp_1494;
  chpl____wide_object chpl_macro_tmp_1495;
  chpl____wide__ref_int64_t chpl_macro_tmp_1496;
  chpl____wide_object chpl_macro_tmp_1497;
  chpl____wide__nilType chpl_macro_tmp_1498;
  chpl____wide_object chpl_macro_tmp_1499;
  chpl____wide_BaseArr chpl_macro_tmp_1500;
  chpl____wide_object chpl_macro_tmp_1501;
  chpl____wide__nilType chpl_macro_tmp_1502;
  chpl____wide_object chpl_macro_tmp_1503;
  chpl____wide_object chpl_macro_tmp_1504;
  chpl____wide__nilType chpl_macro_tmp_1505;
  chpl____wide_object chpl_macro_tmp_1506;
  chpl____wide_object chpl_macro_tmp_1507;
  chpl____wide__nilType chpl_macro_tmp_1508;
  chpl____wide_object chpl_macro_tmp_1509;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  chpl_macro_tmp_1485.locale = (&_instance_chpl)->locale;
  chpl_macro_tmp_1485.addr = ((BaseArr_chpl)((&_instance_chpl)->addr));
  coerce_tmp_chpl3 = chpl_macro_tmp_1485;
  chpl_check_nil((&coerce_tmp_chpl3)->addr, INT64(1787), INT32(30));
  remove_chpl3(coerce_tmp_chpl3, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  tmp_x0_chpl = (&call_tmp_chpl36)->x0;
  tmp_x1_chpl = (&call_tmp_chpl36)->x1;
  domToRemove_chpl = tmp_x1_chpl;
  init_coerce_tmp_chpl3 = ((BaseDom_chpl)(nil));
  chpl_macro_tmp_1486.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1486.addr = init_coerce_tmp_chpl3;
  domToFree_chpl = chpl_macro_tmp_1486;
  init_coerce_tmp_chpl4 = ((BaseDist_chpl)(nil));
  chpl_macro_tmp_1487.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1487.addr = init_coerce_tmp_chpl4;
  distToRemove_chpl = chpl_macro_tmp_1487;
  init_coerce_tmp_chpl5 = ((BaseDist_chpl)(nil));
  chpl_macro_tmp_1488.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1488.addr = init_coerce_tmp_chpl5;
  distToFree_chpl = chpl_macro_tmp_1488;
  domIsPrivatized_chpl = UINT8(false);
  chpl_macro_tmp_1489.locale = (&tmp_x1_chpl)->locale;
  chpl_macro_tmp_1489.addr = ((object_chpl)((&tmp_x1_chpl)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_1489;
  chpl_macro_tmp_1490.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1490.addr = nil;
  chpl_macro_tmp_1491.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1491.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_1491;
  if (((&coerce_tmp_chpl4)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0))))) {
    chpl_check_nil((&tmp_x1_chpl)->addr, INT64(1799), INT32(30));
    remove_chpl2(tmp_x1_chpl, &ret_tmp_chpl2);
    tmp_x0_chpl2 = (&ret_tmp_chpl2)->x0;
    tmp_x1_chpl2 = (&ret_tmp_chpl2)->x1;
    domToFree_chpl = tmp_x0_chpl2;
    distToRemove_chpl = tmp_x1_chpl2;
    coerce_tmp_chpl5 = domToRemove_chpl;
    chpl_check_nil((&coerce_tmp_chpl5)->addr, INT64(1800), INT32(30));
    chpl_macro_tmp_1492.locale = (&coerce_tmp_chpl5)->locale;
    chpl_macro_tmp_1492.addr = &(((&coerce_tmp_chpl5)->addr)->pid);
    chpl_gen_comm_get(((void*)(&tmp_chpl16)), chpl_nodeFromLocaleID((chpl_macro_tmp_1492).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1492).addr, sizeof(int64_t), COMMID(13), INT64(1800), INT64(30));
    domIsPrivatized_chpl = (tmp_chpl16 != INT64(-1));
  }
  distIsPrivatized_chpl = UINT8(false);
  chpl_macro_tmp_1493.locale = (&distToRemove_chpl)->locale;
  chpl_macro_tmp_1493.addr = ((object_chpl)((&distToRemove_chpl)->addr));
  coerce_tmp_chpl6 = chpl_macro_tmp_1493;
  chpl_macro_tmp_1494.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1494.addr = nil;
  chpl_macro_tmp_1495.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1495.addr = NULL;
  tmp_chpl17 = chpl_macro_tmp_1495;
  if (((&coerce_tmp_chpl6)->addr != (&tmp_chpl17)->addr) || ((!(! (&coerce_tmp_chpl6)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl6)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl17)->locale, INT64(0), INT32(0))))) {
    chpl_check_nil((&distToRemove_chpl)->addr, INT64(1804), INT32(30));
    call_tmp_chpl37 = remove_chpl(distToRemove_chpl);
    distToFree_chpl = call_tmp_chpl37;
    call_tmp_chpl38 = distToRemove_chpl;
    coerce_tmp_chpl7 = call_tmp_chpl38;
    chpl_check_nil((&coerce_tmp_chpl7)->addr, INT64(1805), INT32(30));
    chpl_macro_tmp_1496.locale = (&coerce_tmp_chpl7)->locale;
    chpl_macro_tmp_1496.addr = &(((&coerce_tmp_chpl7)->addr)->pid);
    chpl_gen_comm_get(((void*)(&tmp_chpl18)), chpl_nodeFromLocaleID((chpl_macro_tmp_1496).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1496).addr, sizeof(int64_t), COMMID(14), INT64(1805), INT64(30));
    distIsPrivatized_chpl = (tmp_chpl18 != INT64(-1));
  }
  chpl_macro_tmp_1497.locale = (&tmp_x0_chpl)->locale;
  chpl_macro_tmp_1497.addr = ((object_chpl)((&tmp_x0_chpl)->addr));
  coerce_tmp_chpl8 = chpl_macro_tmp_1497;
  chpl_macro_tmp_1498.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1498.addr = nil;
  chpl_macro_tmp_1499.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1499.addr = NULL;
  tmp_chpl19 = chpl_macro_tmp_1499;
  if (((&coerce_tmp_chpl8)->addr != (&tmp_chpl19)->addr) || ((!(! (&coerce_tmp_chpl8)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl8)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl19)->locale, INT64(0), INT32(0))))) {
    chpl_macro_tmp_1500.locale = (&_instance_chpl)->locale;
    chpl_macro_tmp_1500.addr = ((BaseArr_chpl)((&_instance_chpl)->addr));
    coerce_tmp_chpl9 = chpl_macro_tmp_1500;
    _delete_arr_chpl(coerce_tmp_chpl9, deinitElts_chpl);
  }
  chpl_macro_tmp_1501.locale = (&domToFree_chpl)->locale;
  chpl_macro_tmp_1501.addr = ((object_chpl)((&domToFree_chpl)->addr));
  coerce_tmp_chpl10 = chpl_macro_tmp_1501;
  chpl_macro_tmp_1502.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1502.addr = nil;
  chpl_macro_tmp_1503.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1503.addr = NULL;
  tmp_chpl20 = chpl_macro_tmp_1503;
  if (((&coerce_tmp_chpl10)->addr != (&tmp_chpl20)->addr) || ((!(! (&coerce_tmp_chpl10)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl10)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl20)->locale, INT64(0), INT32(0))))) {
    chpl_macro_tmp_1504.locale = (&tmp_x1_chpl)->locale;
    chpl_macro_tmp_1504.addr = ((object_chpl)((&tmp_x1_chpl)->addr));
    coerce_tmp_chpl11 = chpl_macro_tmp_1504;
    chpl_macro_tmp_1505.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1505.addr = nil;
    chpl_macro_tmp_1506.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1506.addr = NULL;
    tmp_chpl21 = chpl_macro_tmp_1506;
    if (! (((&coerce_tmp_chpl11)->addr != (&tmp_chpl21)->addr) || ((!(! (&coerce_tmp_chpl11)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl11)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl21)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1811), INT32(30));
    }
    _delete_dom_chpl2(tmp_x1_chpl, domIsPrivatized_chpl);
  }
  chpl_macro_tmp_1507.locale = (&distToFree_chpl)->locale;
  chpl_macro_tmp_1507.addr = ((object_chpl)((&distToFree_chpl)->addr));
  coerce_tmp_chpl12 = chpl_macro_tmp_1507;
  chpl_macro_tmp_1508.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1508.addr = nil;
  chpl_macro_tmp_1509.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1509.addr = NULL;
  tmp_chpl22 = chpl_macro_tmp_1509;
  if (((&coerce_tmp_chpl12)->addr != (&tmp_chpl22)->addr) || ((!(! (&coerce_tmp_chpl12)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl12)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl22)->locale, INT64(0), INT32(0))))) {
    _delete_dist_chpl(distToFree_chpl, distIsPrivatized_chpl);
  }
  return;
}

/* ChapelArray.chpl:1785 */
static void on_fn_chpl21(chpl____wide_BaseArr _instance_chpl,
                         chpl_bool deinitElts_chpl) {
  string_chpl local__str_literal_75_chpl;
  _tuple_2_BaseArr_BaseDom_chpl call_tmp_chpl36;
  _tuple_2_BaseArr_BaseDom_chpl ret_tmp_chpl;
  chpl____wide_BaseArr tmp_x0_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom tmp_x1_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom domToRemove_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom domToFree_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDom_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_BaseDist distToRemove_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist_chpl init_coerce_tmp_chpl4 = NULL;
  chpl____wide_BaseDist distToFree_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist_chpl init_coerce_tmp_chpl5 = NULL;
  chpl_bool domIsPrivatized_chpl;
  chpl____wide_object coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom tmp_x0_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist tmp_x1_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_2_BaseDom_BaseDist_chpl ret_tmp_chpl2;
  chpl____wide_BaseDom coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl16;
  chpl_bool distIsPrivatized_chpl;
  chpl____wide_object coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist call_tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist call_tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl18;
  chpl____wide_object coerce_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom chpl_macro_tmp_1510;
  chpl____wide_BaseDist chpl_macro_tmp_1511;
  chpl____wide_BaseDist chpl_macro_tmp_1512;
  chpl____wide_object chpl_macro_tmp_1513;
  chpl____wide__nilType chpl_macro_tmp_1514;
  chpl____wide_object chpl_macro_tmp_1515;
  chpl____wide__ref_int64_t chpl_macro_tmp_1516;
  chpl____wide_object chpl_macro_tmp_1517;
  chpl____wide__nilType chpl_macro_tmp_1518;
  chpl____wide_object chpl_macro_tmp_1519;
  chpl____wide__ref_int64_t chpl_macro_tmp_1520;
  chpl____wide_object chpl_macro_tmp_1521;
  chpl____wide__nilType chpl_macro_tmp_1522;
  chpl____wide_object chpl_macro_tmp_1523;
  chpl____wide_object chpl_macro_tmp_1524;
  chpl____wide__nilType chpl_macro_tmp_1525;
  chpl____wide_object chpl_macro_tmp_1526;
  chpl____wide_object chpl_macro_tmp_1527;
  chpl____wide__nilType chpl_macro_tmp_1528;
  chpl____wide_object chpl_macro_tmp_1529;
  chpl____wide_object chpl_macro_tmp_1530;
  chpl____wide__nilType chpl_macro_tmp_1531;
  chpl____wide_object chpl_macro_tmp_1532;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  chpl_check_nil((&_instance_chpl)->addr, INT64(1787), INT32(30));
  remove_chpl3(_instance_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  tmp_x0_chpl = (&call_tmp_chpl36)->x0;
  tmp_x1_chpl = (&call_tmp_chpl36)->x1;
  domToRemove_chpl = tmp_x1_chpl;
  init_coerce_tmp_chpl3 = ((BaseDom_chpl)(nil));
  chpl_macro_tmp_1510.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1510.addr = init_coerce_tmp_chpl3;
  domToFree_chpl = chpl_macro_tmp_1510;
  init_coerce_tmp_chpl4 = ((BaseDist_chpl)(nil));
  chpl_macro_tmp_1511.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1511.addr = init_coerce_tmp_chpl4;
  distToRemove_chpl = chpl_macro_tmp_1511;
  init_coerce_tmp_chpl5 = ((BaseDist_chpl)(nil));
  chpl_macro_tmp_1512.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1512.addr = init_coerce_tmp_chpl5;
  distToFree_chpl = chpl_macro_tmp_1512;
  domIsPrivatized_chpl = UINT8(false);
  chpl_macro_tmp_1513.locale = (&tmp_x1_chpl)->locale;
  chpl_macro_tmp_1513.addr = ((object_chpl)((&tmp_x1_chpl)->addr));
  coerce_tmp_chpl3 = chpl_macro_tmp_1513;
  chpl_macro_tmp_1514.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1514.addr = nil;
  chpl_macro_tmp_1515.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1515.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_1515;
  if (((&coerce_tmp_chpl3)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl3)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl3)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0))))) {
    chpl_check_nil((&tmp_x1_chpl)->addr, INT64(1799), INT32(30));
    remove_chpl2(tmp_x1_chpl, &ret_tmp_chpl2);
    tmp_x0_chpl2 = (&ret_tmp_chpl2)->x0;
    tmp_x1_chpl2 = (&ret_tmp_chpl2)->x1;
    domToFree_chpl = tmp_x0_chpl2;
    distToRemove_chpl = tmp_x1_chpl2;
    coerce_tmp_chpl4 = domToRemove_chpl;
    chpl_check_nil((&coerce_tmp_chpl4)->addr, INT64(1800), INT32(30));
    chpl_macro_tmp_1516.locale = (&coerce_tmp_chpl4)->locale;
    chpl_macro_tmp_1516.addr = &(((&coerce_tmp_chpl4)->addr)->pid);
    chpl_gen_comm_get(((void*)(&tmp_chpl16)), chpl_nodeFromLocaleID((chpl_macro_tmp_1516).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1516).addr, sizeof(int64_t), COMMID(15), INT64(1800), INT64(30));
    domIsPrivatized_chpl = (tmp_chpl16 != INT64(-1));
  }
  distIsPrivatized_chpl = UINT8(false);
  chpl_macro_tmp_1517.locale = (&distToRemove_chpl)->locale;
  chpl_macro_tmp_1517.addr = ((object_chpl)((&distToRemove_chpl)->addr));
  coerce_tmp_chpl5 = chpl_macro_tmp_1517;
  chpl_macro_tmp_1518.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1518.addr = nil;
  chpl_macro_tmp_1519.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1519.addr = NULL;
  tmp_chpl17 = chpl_macro_tmp_1519;
  if (((&coerce_tmp_chpl5)->addr != (&tmp_chpl17)->addr) || ((!(! (&coerce_tmp_chpl5)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl5)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl17)->locale, INT64(0), INT32(0))))) {
    chpl_check_nil((&distToRemove_chpl)->addr, INT64(1804), INT32(30));
    call_tmp_chpl37 = remove_chpl(distToRemove_chpl);
    distToFree_chpl = call_tmp_chpl37;
    call_tmp_chpl38 = distToRemove_chpl;
    coerce_tmp_chpl6 = call_tmp_chpl38;
    chpl_check_nil((&coerce_tmp_chpl6)->addr, INT64(1805), INT32(30));
    chpl_macro_tmp_1520.locale = (&coerce_tmp_chpl6)->locale;
    chpl_macro_tmp_1520.addr = &(((&coerce_tmp_chpl6)->addr)->pid);
    chpl_gen_comm_get(((void*)(&tmp_chpl18)), chpl_nodeFromLocaleID((chpl_macro_tmp_1520).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1520).addr, sizeof(int64_t), COMMID(16), INT64(1805), INT64(30));
    distIsPrivatized_chpl = (tmp_chpl18 != INT64(-1));
  }
  chpl_macro_tmp_1521.locale = (&tmp_x0_chpl)->locale;
  chpl_macro_tmp_1521.addr = ((object_chpl)((&tmp_x0_chpl)->addr));
  coerce_tmp_chpl7 = chpl_macro_tmp_1521;
  chpl_macro_tmp_1522.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1522.addr = nil;
  chpl_macro_tmp_1523.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1523.addr = NULL;
  tmp_chpl19 = chpl_macro_tmp_1523;
  if (((&coerce_tmp_chpl7)->addr != (&tmp_chpl19)->addr) || ((!(! (&coerce_tmp_chpl7)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl7)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl19)->locale, INT64(0), INT32(0))))) {
    _delete_arr_chpl(_instance_chpl, deinitElts_chpl);
  }
  chpl_macro_tmp_1524.locale = (&domToFree_chpl)->locale;
  chpl_macro_tmp_1524.addr = ((object_chpl)((&domToFree_chpl)->addr));
  coerce_tmp_chpl8 = chpl_macro_tmp_1524;
  chpl_macro_tmp_1525.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1525.addr = nil;
  chpl_macro_tmp_1526.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1526.addr = NULL;
  tmp_chpl20 = chpl_macro_tmp_1526;
  if (((&coerce_tmp_chpl8)->addr != (&tmp_chpl20)->addr) || ((!(! (&coerce_tmp_chpl8)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl8)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl20)->locale, INT64(0), INT32(0))))) {
    chpl_macro_tmp_1527.locale = (&tmp_x1_chpl)->locale;
    chpl_macro_tmp_1527.addr = ((object_chpl)((&tmp_x1_chpl)->addr));
    coerce_tmp_chpl9 = chpl_macro_tmp_1527;
    chpl_macro_tmp_1528.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1528.addr = nil;
    chpl_macro_tmp_1529.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1529.addr = NULL;
    tmp_chpl21 = chpl_macro_tmp_1529;
    if (! (((&coerce_tmp_chpl9)->addr != (&tmp_chpl21)->addr) || ((!(! (&coerce_tmp_chpl9)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl9)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl21)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1811), INT32(30));
    }
    _delete_dom_chpl2(tmp_x1_chpl, domIsPrivatized_chpl);
  }
  chpl_macro_tmp_1530.locale = (&distToFree_chpl)->locale;
  chpl_macro_tmp_1530.addr = ((object_chpl)((&distToFree_chpl)->addr));
  coerce_tmp_chpl10 = chpl_macro_tmp_1530;
  chpl_macro_tmp_1531.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1531.addr = nil;
  chpl_macro_tmp_1532.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1532.addr = NULL;
  tmp_chpl22 = chpl_macro_tmp_1532;
  if (((&coerce_tmp_chpl10)->addr != (&tmp_chpl22)->addr) || ((!(! (&coerce_tmp_chpl10)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl10)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl22)->locale, INT64(0), INT32(0))))) {
    _delete_dist_chpl(distToFree_chpl, distIsPrivatized_chpl);
  }
  return;
}

/* ChapelArray.chpl:1785 */
static void wrapon_fn_chpl20(_class_localson_fn_chpl21 c_chpl) {
  chpl____wide_BaseArr _1__instance_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool _2_deinitElts_chpl;
  chpl_rmem_consist_acquire(INT64(1785), INT32(30));
  chpl_check_nil(c_chpl, INT64(1785), INT32(30));
  _1__instance_chpl = (c_chpl)->_1__instance;
  chpl_check_nil(c_chpl, INT64(1785), INT32(30));
  _2_deinitElts_chpl = (c_chpl)->_2_deinitElts;
  chpl_taskRunningCntInc(INT64(1785), INT32(30));
  on_fn_chpl21(_1__instance_chpl, _2_deinitElts_chpl);
  chpl_taskRunningCntDec(INT64(1785), INT32(30));
  chpl_rmem_consist_release(INT64(1785), INT32(30));
  return;
}

/* ChapelArray.chpl:1785 */
static void wrapon_fn_chpl21(_class_localson_fn_chpl20 c_chpl) {
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t _1__instance_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool _2_deinitElts_chpl;
  chpl_rmem_consist_acquire(INT64(1785), INT32(30));
  chpl_check_nil(c_chpl, INT64(1785), INT32(30));
  _1__instance_chpl = (c_chpl)->_1__instance;
  chpl_check_nil(c_chpl, INT64(1785), INT32(30));
  _2_deinitElts_chpl = (c_chpl)->_2_deinitElts;
  chpl_taskRunningCntInc(INT64(1785), INT32(30));
  on_fn_chpl20(_1__instance_chpl, _2_deinitElts_chpl);
  chpl_taskRunningCntDec(INT64(1785), INT32(30));
  chpl_rmem_consist_release(INT64(1785), INT32(30));
  return;
}

/* ChapelArray.chpl:2754 */
static _domain_DefaultRectangularDom_1_int64_t_F_chpl chpl__initCopy(_domain_DefaultRectangularDom_1_int64_t_F_chpl * rhs_chpl,
                                                                     chpl_bool definedConst_chpl) {
  _distribution_DefaultDist_chpl call_tmp_chpl36;
  _distribution_DefaultDist_chpl ret_tmp_chpl;
  _tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl37;
  _tuple_1_star_range_int64_t_bounded_F_chpl ret_tmp_chpl2;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl call_tmp_chpl38;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl initTemp_chpl;
  dist_chpl(rhs_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  dims_chpl(rhs_chpl, &ret_tmp_chpl2);
  *(call_tmp_chpl37 + INT64(0)) = *(ret_tmp_chpl2 + INT64(0));
  init_chpl18(&initTemp_chpl, &call_tmp_chpl36, &call_tmp_chpl37, definedConst_chpl);
  call_tmp_chpl38 = initTemp_chpl;
  chpl__autoDestroy(&call_tmp_chpl36);
  return call_tmp_chpl38;
}

