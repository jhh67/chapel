/* ChapelLocks.chpl:24 */
static void chpl__init_ChapelLocks(int64_t _ln_chpl,
                                   int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_ChapelLocks_p) {
    goto _exit_chpl__init_ChapelLocks_chpl;
  }
  printModuleInit_chpl("%*s\n", "ChapelLocks", INT64(11));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_ChapelLocks_p = UINT8(true);
  {
    chpl__init_Atomics(INT64(24), INT32(45));
    chpl__init_ChapelBase(INT64(24), INT32(45));
    chpl__init_MemConsistency(INT64(24), INT32(45));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_ChapelLocks_chpl:;
  return;
}

/* ChapelLocks.chpl:39 */
static void init_chpl25(chpl_LocalSpinlock * this_chpl7) {
  AtomicBool_chpl l_chpl;
  init_chpl(&l_chpl);
  (this_chpl7)->l = l_chpl;
  return;
}

/* ChapelLocks.chpl:43 */
static void _local_on_fn_chpl4(chpl____wide__ref_chpl_LocalSpinlock this_chpl7) {
  chpl_bool tmp_chpl15;
  chpl____wide__ref_AtomicBool call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_LocalSpinlock_chpl local_this_chpl = NULL;
  chpl_bool ret_chpl;
  chpl_bool ret_chpl2;
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_chpl_bool tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl2 _args_foron_fn_chpl = NULL;
  chpl____wide__ref_AtomicBool tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool_chpl tmp_chpl18 = NULL;
  chpl____wide__ref_chpl_bool tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl_bool tmp_chpl20;
  chpl____wide__ref_AtomicBool call_tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_LocalSpinlock_chpl local_this_chpl2 = NULL;
  chpl_bool ret_chpl3;
  chpl_bool ret_chpl4;
  chpl_localeID_t call_tmp_chpl39;
  chpl_bool isdirect_chpl2;
  chpl____wide__ref_chpl_bool tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl4 _args_foron_fn_chpl2 = NULL;
  chpl____wide__ref_AtomicBool tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool_chpl tmp_chpl23 = NULL;
  chpl____wide__ref_chpl_bool tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  chpl____wide__ref_AtomicBool call_tmp_chpl40 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_LocalSpinlock_chpl local_this_chpl3 = NULL;
  chpl_bool ret_chpl5;
  chpl_bool ret_chpl6;
  chpl_localeID_t call_tmp_chpl41;
  chpl_bool isdirect_chpl3;
  chpl____wide__ref_chpl_bool tmp_chpl25 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl2 _args_foron_fn_chpl3 = NULL;
  chpl____wide__ref_AtomicBool tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool_chpl tmp_chpl27 = NULL;
  chpl____wide__ref_chpl_bool tmp_chpl28 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl3;
  chpl_bool tmp_chpl29;
  chpl____wide__ref_AtomicBool call_tmp_chpl42 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_LocalSpinlock_chpl local_this_chpl4 = NULL;
  chpl_bool ret_chpl7;
  chpl_bool ret_chpl8;
  chpl_localeID_t call_tmp_chpl43;
  chpl_bool isdirect_chpl4;
  chpl____wide__ref_chpl_bool tmp_chpl30 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl4 _args_foron_fn_chpl4 = NULL;
  chpl____wide__ref_AtomicBool tmp_chpl31 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool_chpl tmp_chpl32 = NULL;
  chpl____wide__ref_chpl_bool tmp_chpl33 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl4;
  chpl____wide__ref_AtomicBool chpl_macro_tmp_1791;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1792;
  chpl__class_localson_fn_chpl2_object chpl_macro_tmp_1793;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1794;
  chpl____wide__ref_AtomicBool chpl_macro_tmp_1795;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1796;
  chpl__class_localson_fn_chpl4_object chpl_macro_tmp_1797;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1798;
  chpl____wide__ref_AtomicBool chpl_macro_tmp_1799;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1800;
  chpl__class_localson_fn_chpl2_object chpl_macro_tmp_1801;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1802;
  chpl____wide__ref_AtomicBool chpl_macro_tmp_1803;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1804;
  chpl__class_localson_fn_chpl4_object chpl_macro_tmp_1805;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1806;
  chpl_check_local(chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)), INT64(44), INT32(45), "cannot access remote data in local block");
  local_this_chpl = (&this_chpl7)->addr;
  chpl_macro_tmp_1791.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1791.addr = &((local_this_chpl)->l);
  call_tmp_chpl36 = chpl_macro_tmp_1791;
  _local_chpl_rmem_consist_maybe_release_chpl2();
  ret_chpl2 = UINT8(false);
  call_tmp_chpl37 = (&call_tmp_chpl36)->locale;
  isdirect_chpl = _local_chpl_doDirectExecuteOn(call_tmp_chpl37);
  if (isdirect_chpl) {
    chpl_macro_tmp_1792.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1792.addr = &ret_chpl2;
    tmp_chpl16 = chpl_macro_tmp_1792;
    _local_on_fn_chpl(call_tmp_chpl36, tmp_chpl16);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl2)(&chpl_macro_tmp_1793));
    chpl_check_nil(_args_foron_fn_chpl, INT64(44), INT32(45));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
    tmp_chpl17 = call_tmp_chpl36;
    chpl_check_nil(_args_foron_fn_chpl, INT64(44), INT32(45));
    (_args_foron_fn_chpl)->_1_this = tmp_chpl17;
    tmp_chpl18 = &ret_chpl2;
    chpl_macro_tmp_1794.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1794.addr = tmp_chpl18;
    tmp_chpl19 = chpl_macro_tmp_1794;
    chpl_check_nil(_args_foron_fn_chpl, INT64(44), INT32(45));
    (_args_foron_fn_chpl)->_2_ret = tmp_chpl19;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** _local_wrapon_fn_chpl ***/ chpl_executeOnFast(call_tmp_chpl37, INT32(1), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl2_object), INT64(273), INT32(14));
  }
  ret_chpl = ret_chpl2;
  if (ret_chpl) {
    tmp_chpl20 = UINT8(true);
  } else {
    chpl_check_local(chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)), INT64(44), INT32(45), "cannot access remote data in local block");
    local_this_chpl2 = (&this_chpl7)->addr;
    chpl_macro_tmp_1795.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1795.addr = &((local_this_chpl2)->l);
    call_tmp_chpl38 = chpl_macro_tmp_1795;
    _local_chpl_rmem_consist_maybe_release_chpl3();
    _local_chpl_rmem_consist_maybe_release_chpl3();
    ret_chpl4 = UINT8(false);
    call_tmp_chpl39 = (&call_tmp_chpl38)->locale;
    isdirect_chpl2 = _local_chpl_doDirectExecuteOn(call_tmp_chpl39);
    if (isdirect_chpl2) {
      chpl_macro_tmp_1796.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1796.addr = &ret_chpl4;
      tmp_chpl21 = chpl_macro_tmp_1796;
      _local_on_fn_chpl3(call_tmp_chpl38, UINT8(true), tmp_chpl21);
    } else {
      _args_foron_fn_chpl2 = ((_class_localson_fn_chpl4)(&chpl_macro_tmp_1797));
      chpl_check_nil(_args_foron_fn_chpl2, INT64(44), INT32(45));
      (_args_foron_fn_chpl2)->_0_tmp = call_tmp_chpl39;
      tmp_chpl22 = call_tmp_chpl38;
      chpl_check_nil(_args_foron_fn_chpl2, INT64(44), INT32(45));
      (_args_foron_fn_chpl2)->_1_this = tmp_chpl22;
      chpl_check_nil(_args_foron_fn_chpl2, INT64(44), INT32(45));
      (_args_foron_fn_chpl2)->_2_value = UINT8(true);
      tmp_chpl23 = &ret_chpl4;
      chpl_macro_tmp_1798.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1798.addr = tmp_chpl23;
      tmp_chpl24 = chpl_macro_tmp_1798;
      chpl_check_nil(_args_foron_fn_chpl2, INT64(44), INT32(45));
      (_args_foron_fn_chpl2)->_3_ret = tmp_chpl24;
      _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
      /*** _local_wrapon_fn_chpl3 ***/ chpl_executeOnFast(call_tmp_chpl39, INT32(5), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn_chpl4_object), INT64(297), INT32(14));
    }
    ret_chpl3 = ret_chpl4;
    _local_chpl_rmem_consist_maybe_acquire_chpl2();
    tmp_chpl20 = ret_chpl3;
  }
  tmp_chpl15 = tmp_chpl20;
  while (tmp_chpl15) {
    chpl_task_yield();
    chpl_check_local(chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)), INT64(44), INT32(45), "cannot access remote data in local block");
    local_this_chpl3 = (&this_chpl7)->addr;
    chpl_macro_tmp_1799.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1799.addr = &((local_this_chpl3)->l);
    call_tmp_chpl40 = chpl_macro_tmp_1799;
    _local_chpl_rmem_consist_maybe_release_chpl2();
    ret_chpl6 = UINT8(false);
    call_tmp_chpl41 = (&call_tmp_chpl40)->locale;
    isdirect_chpl3 = _local_chpl_doDirectExecuteOn(call_tmp_chpl41);
    if (isdirect_chpl3) {
      chpl_macro_tmp_1800.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1800.addr = &ret_chpl6;
      tmp_chpl25 = chpl_macro_tmp_1800;
      _local_on_fn_chpl(call_tmp_chpl40, tmp_chpl25);
    } else {
      _args_foron_fn_chpl3 = ((_class_localson_fn_chpl2)(&chpl_macro_tmp_1801));
      chpl_check_nil(_args_foron_fn_chpl3, INT64(44), INT32(45));
      (_args_foron_fn_chpl3)->_0_tmp = call_tmp_chpl41;
      tmp_chpl26 = call_tmp_chpl40;
      chpl_check_nil(_args_foron_fn_chpl3, INT64(44), INT32(45));
      (_args_foron_fn_chpl3)->_1_this = tmp_chpl26;
      tmp_chpl27 = &ret_chpl6;
      chpl_macro_tmp_1802.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1802.addr = tmp_chpl27;
      tmp_chpl28 = chpl_macro_tmp_1802;
      chpl_check_nil(_args_foron_fn_chpl3, INT64(44), INT32(45));
      (_args_foron_fn_chpl3)->_2_ret = tmp_chpl28;
      _args_vforon_fn_chpl3 = ((void*)(_args_foron_fn_chpl3));
      /*** _local_wrapon_fn_chpl ***/ chpl_executeOnFast(call_tmp_chpl41, INT32(1), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl3)), sizeof(chpl__class_localson_fn_chpl2_object), INT64(273), INT32(14));
    }
    ret_chpl5 = ret_chpl6;
    if (ret_chpl5) {
      tmp_chpl29 = UINT8(true);
    } else {
      chpl_check_local(chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)), INT64(44), INT32(45), "cannot access remote data in local block");
      local_this_chpl4 = (&this_chpl7)->addr;
      chpl_macro_tmp_1803.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1803.addr = &((local_this_chpl4)->l);
      call_tmp_chpl42 = chpl_macro_tmp_1803;
      _local_chpl_rmem_consist_maybe_release_chpl3();
      _local_chpl_rmem_consist_maybe_release_chpl3();
      ret_chpl8 = UINT8(false);
      call_tmp_chpl43 = (&call_tmp_chpl42)->locale;
      isdirect_chpl4 = _local_chpl_doDirectExecuteOn(call_tmp_chpl43);
      if (isdirect_chpl4) {
        chpl_macro_tmp_1804.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1804.addr = &ret_chpl8;
        tmp_chpl30 = chpl_macro_tmp_1804;
        _local_on_fn_chpl3(call_tmp_chpl42, UINT8(true), tmp_chpl30);
      } else {
        _args_foron_fn_chpl4 = ((_class_localson_fn_chpl4)(&chpl_macro_tmp_1805));
        chpl_check_nil(_args_foron_fn_chpl4, INT64(44), INT32(45));
        (_args_foron_fn_chpl4)->_0_tmp = call_tmp_chpl43;
        tmp_chpl31 = call_tmp_chpl42;
        chpl_check_nil(_args_foron_fn_chpl4, INT64(44), INT32(45));
        (_args_foron_fn_chpl4)->_1_this = tmp_chpl31;
        chpl_check_nil(_args_foron_fn_chpl4, INT64(44), INT32(45));
        (_args_foron_fn_chpl4)->_2_value = UINT8(true);
        tmp_chpl32 = &ret_chpl8;
        chpl_macro_tmp_1806.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1806.addr = tmp_chpl32;
        tmp_chpl33 = chpl_macro_tmp_1806;
        chpl_check_nil(_args_foron_fn_chpl4, INT64(44), INT32(45));
        (_args_foron_fn_chpl4)->_3_ret = tmp_chpl33;
        _args_vforon_fn_chpl4 = ((void*)(_args_foron_fn_chpl4));
        /*** _local_wrapon_fn_chpl3 ***/ chpl_executeOnFast(call_tmp_chpl43, INT32(5), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl4)), sizeof(chpl__class_localson_fn_chpl4_object), INT64(297), INT32(14));
      }
      ret_chpl7 = ret_chpl8;
      _local_chpl_rmem_consist_maybe_acquire_chpl2();
      tmp_chpl29 = ret_chpl7;
    }
    tmp_chpl15 = tmp_chpl29;
  }
  return;
}

/* ChapelLocks.chpl:43 */
static void on_fn_chpl68(chpl____wide__ref_chpl_LocalSpinlock this_chpl7) {
  chpl_bool tmp_chpl15;
  chpl____wide__ref_AtomicBool call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool ret_chpl;
  chpl_bool ret_chpl2;
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_chpl_bool tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl2 _args_foron_fn_chpl = NULL;
  chpl____wide__ref_AtomicBool tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool_chpl tmp_chpl18 = NULL;
  chpl____wide__ref_chpl_bool tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl_bool tmp_chpl20;
  chpl____wide__ref_AtomicBool call_tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool ret_chpl3;
  chpl_bool ret_chpl4;
  chpl_localeID_t call_tmp_chpl39;
  chpl_bool isdirect_chpl2;
  chpl____wide__ref_chpl_bool tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl4 _args_foron_fn_chpl2 = NULL;
  chpl____wide__ref_AtomicBool tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool_chpl tmp_chpl23 = NULL;
  chpl____wide__ref_chpl_bool tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  int64_t _args_sizeon_fn_chpl2;
  chpl____wide__ref_AtomicBool call_tmp_chpl40 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool ret_chpl5;
  chpl_bool ret_chpl6;
  chpl_localeID_t call_tmp_chpl41;
  chpl_bool isdirect_chpl3;
  chpl____wide__ref_chpl_bool tmp_chpl25 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl2 _args_foron_fn_chpl3 = NULL;
  chpl____wide__ref_AtomicBool tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool_chpl tmp_chpl27 = NULL;
  chpl____wide__ref_chpl_bool tmp_chpl28 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl3;
  int64_t _args_sizeon_fn_chpl3;
  chpl_bool tmp_chpl29;
  chpl____wide__ref_AtomicBool call_tmp_chpl42 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool ret_chpl7;
  chpl_bool ret_chpl8;
  chpl_localeID_t call_tmp_chpl43;
  chpl_bool isdirect_chpl4;
  chpl____wide__ref_chpl_bool tmp_chpl30 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl4 _args_foron_fn_chpl4 = NULL;
  chpl____wide__ref_AtomicBool tmp_chpl31 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool_chpl tmp_chpl32 = NULL;
  chpl____wide__ref_chpl_bool tmp_chpl33 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl4;
  int64_t _args_sizeon_fn_chpl4;
  chpl____wide__ref_AtomicBool chpl_macro_tmp_1807;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1808;
  chpl__class_localson_fn_chpl2_object chpl_macro_tmp_1809;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1810;
  chpl____wide__ref_AtomicBool chpl_macro_tmp_1811;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1812;
  chpl__class_localson_fn_chpl4_object chpl_macro_tmp_1813;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1814;
  chpl____wide__ref_AtomicBool chpl_macro_tmp_1815;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1816;
  chpl__class_localson_fn_chpl2_object chpl_macro_tmp_1817;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1818;
  chpl____wide__ref_AtomicBool chpl_macro_tmp_1819;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1820;
  chpl__class_localson_fn_chpl4_object chpl_macro_tmp_1821;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1822;
  chpl_macro_tmp_1807.locale = (this_chpl7).locale;
  chpl_macro_tmp_1807.addr = &(((this_chpl7).addr)->l);
  call_tmp_chpl36 = chpl_macro_tmp_1807;
  chpl_rmem_consist_maybe_release4();
  ret_chpl2 = UINT8(false);
  call_tmp_chpl37 = (&call_tmp_chpl36)->locale;
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
  if (isdirect_chpl) {
    chpl_macro_tmp_1808.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1808.addr = &ret_chpl2;
    tmp_chpl16 = chpl_macro_tmp_1808;
    on_fn_chpl2(call_tmp_chpl36, tmp_chpl16);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl2)(&chpl_macro_tmp_1809));
    chpl_check_nil(_args_foron_fn_chpl, INT64(44), INT32(45));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
    tmp_chpl17 = call_tmp_chpl36;
    chpl_check_nil(_args_foron_fn_chpl, INT64(44), INT32(45));
    (_args_foron_fn_chpl)->_1_this = tmp_chpl17;
    tmp_chpl18 = &ret_chpl2;
    chpl_macro_tmp_1810.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1810.addr = tmp_chpl18;
    tmp_chpl19 = chpl_macro_tmp_1810;
    chpl_check_nil(_args_foron_fn_chpl, INT64(44), INT32(45));
    (_args_foron_fn_chpl)->_2_ret = tmp_chpl19;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl2_object);
    chpl_taskRunningCntDec(INT64(44), INT32(45));
    /*** wrapon_fn_chpl2 ***/ chpl_executeOn(call_tmp_chpl37, INT32(2), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(273), INT32(14));
    chpl_taskRunningCntInc(INT64(44), INT32(45));
  }
  ret_chpl = ret_chpl2;
  if (ret_chpl) {
    tmp_chpl20 = UINT8(true);
  } else {
    chpl_macro_tmp_1811.locale = (this_chpl7).locale;
    chpl_macro_tmp_1811.addr = &(((this_chpl7).addr)->l);
    call_tmp_chpl38 = chpl_macro_tmp_1811;
    chpl_rmem_consist_maybe_release3();
    chpl_rmem_consist_maybe_release3();
    ret_chpl4 = UINT8(false);
    call_tmp_chpl39 = (&call_tmp_chpl38)->locale;
    isdirect_chpl2 = chpl_doDirectExecuteOn(call_tmp_chpl39);
    if (isdirect_chpl2) {
      chpl_macro_tmp_1812.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1812.addr = &ret_chpl4;
      tmp_chpl21 = chpl_macro_tmp_1812;
      on_fn_chpl4(call_tmp_chpl38, UINT8(true), tmp_chpl21);
    } else {
      _args_foron_fn_chpl2 = ((_class_localson_fn_chpl4)(&chpl_macro_tmp_1813));
      chpl_check_nil(_args_foron_fn_chpl2, INT64(44), INT32(45));
      (_args_foron_fn_chpl2)->_0_tmp = call_tmp_chpl39;
      tmp_chpl22 = call_tmp_chpl38;
      chpl_check_nil(_args_foron_fn_chpl2, INT64(44), INT32(45));
      (_args_foron_fn_chpl2)->_1_this = tmp_chpl22;
      chpl_check_nil(_args_foron_fn_chpl2, INT64(44), INT32(45));
      (_args_foron_fn_chpl2)->_2_value = UINT8(true);
      tmp_chpl23 = &ret_chpl4;
      chpl_macro_tmp_1814.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1814.addr = tmp_chpl23;
      tmp_chpl24 = chpl_macro_tmp_1814;
      chpl_check_nil(_args_foron_fn_chpl2, INT64(44), INT32(45));
      (_args_foron_fn_chpl2)->_3_ret = tmp_chpl24;
      _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
      _args_sizeon_fn_chpl2 = sizeof(chpl__class_localson_fn_chpl4_object);
      chpl_taskRunningCntDec(INT64(44), INT32(45));
      /*** wrapon_fn_chpl4 ***/ chpl_executeOn(call_tmp_chpl39, INT32(6), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), _args_sizeon_fn_chpl2, INT64(297), INT32(14));
      chpl_taskRunningCntInc(INT64(44), INT32(45));
    }
    ret_chpl3 = ret_chpl4;
    chpl_rmem_consist_maybe_acquire2();
    tmp_chpl20 = ret_chpl3;
  }
  tmp_chpl15 = tmp_chpl20;
  while (tmp_chpl15) {
    chpl_task_yield();
    chpl_macro_tmp_1815.locale = (this_chpl7).locale;
    chpl_macro_tmp_1815.addr = &(((this_chpl7).addr)->l);
    call_tmp_chpl40 = chpl_macro_tmp_1815;
    chpl_rmem_consist_maybe_release4();
    ret_chpl6 = UINT8(false);
    call_tmp_chpl41 = (&call_tmp_chpl40)->locale;
    isdirect_chpl3 = chpl_doDirectExecuteOn(call_tmp_chpl41);
    if (isdirect_chpl3) {
      chpl_macro_tmp_1816.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1816.addr = &ret_chpl6;
      tmp_chpl25 = chpl_macro_tmp_1816;
      on_fn_chpl2(call_tmp_chpl40, tmp_chpl25);
    } else {
      _args_foron_fn_chpl3 = ((_class_localson_fn_chpl2)(&chpl_macro_tmp_1817));
      chpl_check_nil(_args_foron_fn_chpl3, INT64(44), INT32(45));
      (_args_foron_fn_chpl3)->_0_tmp = call_tmp_chpl41;
      tmp_chpl26 = call_tmp_chpl40;
      chpl_check_nil(_args_foron_fn_chpl3, INT64(44), INT32(45));
      (_args_foron_fn_chpl3)->_1_this = tmp_chpl26;
      tmp_chpl27 = &ret_chpl6;
      chpl_macro_tmp_1818.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1818.addr = tmp_chpl27;
      tmp_chpl28 = chpl_macro_tmp_1818;
      chpl_check_nil(_args_foron_fn_chpl3, INT64(44), INT32(45));
      (_args_foron_fn_chpl3)->_2_ret = tmp_chpl28;
      _args_vforon_fn_chpl3 = ((void*)(_args_foron_fn_chpl3));
      _args_sizeon_fn_chpl3 = sizeof(chpl__class_localson_fn_chpl2_object);
      chpl_taskRunningCntDec(INT64(44), INT32(45));
      /*** wrapon_fn_chpl2 ***/ chpl_executeOn(call_tmp_chpl41, INT32(2), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl3)), _args_sizeon_fn_chpl3, INT64(273), INT32(14));
      chpl_taskRunningCntInc(INT64(44), INT32(45));
    }
    ret_chpl5 = ret_chpl6;
    if (ret_chpl5) {
      tmp_chpl29 = UINT8(true);
    } else {
      chpl_macro_tmp_1819.locale = (this_chpl7).locale;
      chpl_macro_tmp_1819.addr = &(((this_chpl7).addr)->l);
      call_tmp_chpl42 = chpl_macro_tmp_1819;
      chpl_rmem_consist_maybe_release3();
      chpl_rmem_consist_maybe_release3();
      ret_chpl8 = UINT8(false);
      call_tmp_chpl43 = (&call_tmp_chpl42)->locale;
      isdirect_chpl4 = chpl_doDirectExecuteOn(call_tmp_chpl43);
      if (isdirect_chpl4) {
        chpl_macro_tmp_1820.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1820.addr = &ret_chpl8;
        tmp_chpl30 = chpl_macro_tmp_1820;
        on_fn_chpl4(call_tmp_chpl42, UINT8(true), tmp_chpl30);
      } else {
        _args_foron_fn_chpl4 = ((_class_localson_fn_chpl4)(&chpl_macro_tmp_1821));
        chpl_check_nil(_args_foron_fn_chpl4, INT64(44), INT32(45));
        (_args_foron_fn_chpl4)->_0_tmp = call_tmp_chpl43;
        tmp_chpl31 = call_tmp_chpl42;
        chpl_check_nil(_args_foron_fn_chpl4, INT64(44), INT32(45));
        (_args_foron_fn_chpl4)->_1_this = tmp_chpl31;
        chpl_check_nil(_args_foron_fn_chpl4, INT64(44), INT32(45));
        (_args_foron_fn_chpl4)->_2_value = UINT8(true);
        tmp_chpl32 = &ret_chpl8;
        chpl_macro_tmp_1822.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1822.addr = tmp_chpl32;
        tmp_chpl33 = chpl_macro_tmp_1822;
        chpl_check_nil(_args_foron_fn_chpl4, INT64(44), INT32(45));
        (_args_foron_fn_chpl4)->_3_ret = tmp_chpl33;
        _args_vforon_fn_chpl4 = ((void*)(_args_foron_fn_chpl4));
        _args_sizeon_fn_chpl4 = sizeof(chpl__class_localson_fn_chpl4_object);
        chpl_taskRunningCntDec(INT64(44), INT32(45));
        /*** wrapon_fn_chpl4 ***/ chpl_executeOn(call_tmp_chpl43, INT32(6), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl4)), _args_sizeon_fn_chpl4, INT64(297), INT32(14));
        chpl_taskRunningCntInc(INT64(44), INT32(45));
      }
      ret_chpl7 = ret_chpl8;
      chpl_rmem_consist_maybe_acquire2();
      tmp_chpl29 = ret_chpl7;
    }
    tmp_chpl15 = tmp_chpl29;
  }
  return;
}

/* ChapelLocks.chpl:43 */
static void _local_wrapon_fn_chpl4(_class_localson_fn_chpl68 c_chpl) {
  chpl____wide__ref_chpl_LocalSpinlock _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c_chpl, INT64(43), INT32(45));
  _1_this_chpl = (c_chpl)->_1_this;
  chpl_taskRunningCntInc(INT64(43), INT32(45));
  _local_on_fn_chpl4(_1_this_chpl);
  chpl_taskRunningCntDec(INT64(43), INT32(45));
  return;
}

/* ChapelLocks.chpl:43 */
static void wrapon_fn_chpl68(_class_localson_fn_chpl68 c_chpl) {
  chpl____wide__ref_chpl_LocalSpinlock _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(43), INT32(45));
  chpl_check_nil(c_chpl, INT64(43), INT32(45));
  _1_this_chpl = (c_chpl)->_1_this;
  chpl_taskRunningCntInc(INT64(43), INT32(45));
  on_fn_chpl68(_1_this_chpl);
  chpl_taskRunningCntDec(INT64(43), INT32(45));
  chpl_rmem_consist_release(INT64(43), INT32(45));
  return;
}

