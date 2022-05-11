/* ChapelDistribution.chpl:21 */
static void chpl__init_ChapelDistribution(int64_t _ln_chpl,
                                          int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_ChapelDistribution_p) {
    goto _exit_chpl__init_ChapelDistribution_chpl;
  }
  printModuleInit_chpl("%*s\n", "ChapelDistribution", INT64(18));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_ChapelDistribution_p = UINT8(true);
  {
    chpl__init_ChapelArray(INT64(21), INT32(31));
    chpl__init_ChapelRange(INT64(21), INT32(31));
    chpl__init_ChapelLocks(INT64(21), INT32(31));
    chpl__init_ChapelHashtable(INT64(21), INT32(31));
    chpl__init_Sort(INT64(21), INT32(31));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_ChapelDistribution_chpl:;
  return;
}

/* ChapelDistribution.chpl:37 */
static void deinit_chpl5(chpl____wide_BaseDist this_chpl7) {
  chpl____wide__ref_chpl_LocalSpinlock _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicBool _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_LocalSpinlock chpl_macro_tmp_1533;
  chpl____wide__ref_AtomicBool chpl_macro_tmp_1534;
  chpl_check_nil((&this_chpl7)->addr, INT64(33), INT32(31));
  chpl_macro_tmp_1533.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1533.addr = &(((&this_chpl7)->addr)->_domsLock);
  _field_destructor_tmp__chpl = chpl_macro_tmp_1533;
  chpl_macro_tmp_1534.locale = (_field_destructor_tmp__chpl).locale;
  chpl_macro_tmp_1534.addr = &(((_field_destructor_tmp__chpl).addr)->l);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_1534;
  deinit_chpl(_field_destructor_tmp__chpl2);
  return;
}

/* ChapelDistribution.chpl:42 */
static chpl____wide_BaseDist remove_chpl(chpl____wide_BaseDist this_chpl7) {
  chpl____wide_BaseDist ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool free_dist_chpl;
  chpl_bool call_tmp_chpl36;
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_chpl_bool tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl60 _args_foron_fn_chpl = NULL;
  _ref_chpl_bool_chpl tmp_chpl16 = NULL;
  chpl____wide__ref_chpl_bool tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_BaseDist ret_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int32_t chpl_macro_tmp_1535;
  int32_t chpl_macro_tmp_1536;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1537;
  chpl__class_localson_fn_chpl60_object chpl_macro_tmp_1538;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1539;
  chpl____wide_BaseDist chpl_macro_tmp_1540;
  free_dist_chpl = UINT8(false);
  chpl_check_nil((&this_chpl7)->addr, INT64(44), INT32(31));
  chpl_macro_tmp_1535.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1535.addr = &(((object_chpl)((&this_chpl7)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1536)), chpl_nodeFromLocaleID((chpl_macro_tmp_1535).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1535).addr, sizeof(int32_t), COMMID(0), INT64(44), INT64(31));
  call_tmp_chpl36 = ((chpl_bool(*)(chpl____wide_BaseDist))chpl_vmtable[((INT64(6) * chpl_macro_tmp_1536) + INT64(1))])(this_chpl7);
  if (call_tmp_chpl36) {
    call_tmp_chpl37 = (&this_chpl7)->locale;
    chpl_rmem_consist_release(INT64(45), INT32(31));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
    if (isdirect_chpl) {
      chpl_macro_tmp_1537.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1537.addr = &free_dist_chpl;
      tmp_chpl15 = chpl_macro_tmp_1537;
      on_fn_chpl60(tmp_chpl15, this_chpl7);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl60)(&chpl_macro_tmp_1538));
      chpl_check_nil(_args_foron_fn_chpl, INT64(45), INT32(31));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
      tmp_chpl16 = &free_dist_chpl;
      chpl_macro_tmp_1539.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1539.addr = tmp_chpl16;
      tmp_chpl17 = chpl_macro_tmp_1539;
      chpl_check_nil(_args_foron_fn_chpl, INT64(45), INT32(31));
      (_args_foron_fn_chpl)->_1_free_dist = tmp_chpl17;
      chpl_check_nil(_args_foron_fn_chpl, INT64(45), INT32(31));
      (_args_foron_fn_chpl)->_2_this = this_chpl7;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl60_object);
      chpl_taskRunningCntDec(INT64(45), INT32(31));
      /*** wrapon_fn_chpl60 ***/ chpl_executeOn(call_tmp_chpl37, INT32(67), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(45), INT32(31));
      chpl_taskRunningCntInc(INT64(45), INT32(31));
    }
    chpl_rmem_consist_acquire(INT64(45), INT32(31));
  } else {
    free_dist_chpl = UINT8(true);
  }
  if (free_dist_chpl) {
    ret_chpl2 = this_chpl7;
    ret_chpl = ret_chpl2;
    goto _end_remove_chpl;
  } else {
    chpl_macro_tmp_1540.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1540.addr = ((BaseDist_chpl)(nil));
    ret_chpl = chpl_macro_tmp_1540;
    goto _end_remove_chpl;
  }
  _end_remove_chpl:;
  return ret_chpl;
}

/* ChapelDistribution.chpl:45 */
static void wrapon_fn_chpl60(_class_localson_fn_chpl60 c_chpl) {
  chpl____wide__ref_chpl_bool _1_free_dist_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist _2_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(45), INT32(31));
  chpl_check_nil(c_chpl, INT64(45), INT32(31));
  _1_free_dist_chpl = (c_chpl)->_1_free_dist;
  chpl_check_nil(c_chpl, INT64(45), INT32(31));
  _2_this_chpl = (c_chpl)->_2_this;
  chpl_taskRunningCntInc(INT64(45), INT32(31));
  on_fn_chpl60(_1_free_dist_chpl, _2_this_chpl);
  chpl_taskRunningCntDec(INT64(45), INT32(31));
  chpl_rmem_consist_release(INT64(45), INT32(31));
  return;
}

/* ChapelDistribution.chpl:45 */
static void on_fn_chpl60(chpl____wide__ref_chpl_bool free_dist_chpl,
                         chpl____wide_BaseDist this_chpl7) {
  chpl____wide__ref_chpl_LocalSpinlock call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist_chpl local_this_chpl = NULL;
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl68 _args_foron_fn_chpl = NULL;
  chpl____wide__ref_chpl_LocalSpinlock tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  BaseDist_chpl local_this_chpl2 = NULL;
  int64_t coerce_tmp_chpl3;
  BaseDist_chpl local_this_chpl3 = NULL;
  chpl____wide__ref_chpl_LocalSpinlock call_tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist_chpl local_this_chpl4 = NULL;
  chpl____wide__ref_AtomicBool call_tmp_chpl39 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_LocalSpinlock_chpl local_call_tmp_chpl = NULL;
  chpl_localeID_t call_tmp_chpl40;
  chpl_bool isdirect_chpl2;
  _class_localson_fn_chpl3 _args_foron_fn_chpl2 = NULL;
  chpl____wide__ref_AtomicBool tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  chpl____wide__ref_chpl_LocalSpinlock chpl_macro_tmp_1541;
  chpl__class_localson_fn_chpl68_object chpl_macro_tmp_1542;
  chpl____wide__ref_chpl_LocalSpinlock chpl_macro_tmp_1543;
  chpl____wide__ref_AtomicBool chpl_macro_tmp_1544;
  chpl__class_localson_fn_chpl3_object chpl_macro_tmp_1545;
  chpl_bool chpl_macro_tmp_1546;
  /* local block */
  {
    chpl_check_local(chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)), INT64(48), INT32(31), "cannot access remote data in local block");
    local_this_chpl = (&this_chpl7)->addr;
    chpl_check_nil(local_this_chpl, INT64(48), INT32(31));
    chpl_macro_tmp_1541.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1541.addr = &((local_this_chpl)->_domsLock);
    call_tmp_chpl36 = chpl_macro_tmp_1541;
    call_tmp_chpl37 = (&call_tmp_chpl36)->locale;
    chpl_rmem_consist_release(INT64(48), INT32(31));
    isdirect_chpl = _local_chpl_doDirectExecuteOn(call_tmp_chpl37);
    if (isdirect_chpl) {
      _local_on_fn_chpl4(call_tmp_chpl36);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl68)(&chpl_macro_tmp_1542));
      chpl_check_nil(_args_foron_fn_chpl, INT64(48), INT32(31));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
      tmp_chpl15 = call_tmp_chpl36;
      chpl_check_nil(_args_foron_fn_chpl, INT64(48), INT32(31));
      (_args_foron_fn_chpl)->_1_this = tmp_chpl15;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl68_object);
      chpl_taskRunningCntDec(INT64(48), INT32(31));
      /*** _local_wrapon_fn_chpl4 ***/ chpl_executeOn(call_tmp_chpl37, INT32(76), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(43), INT32(45));
      chpl_taskRunningCntInc(INT64(48), INT32(31));
    }
    chpl_rmem_consist_acquire(INT64(48), INT32(31));
    chpl_check_local(chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)), INT64(51), INT32(31), "cannot access remote data in local block");
    local_this_chpl2 = (&this_chpl7)->addr;
    chpl_check_nil(local_this_chpl2, INT64(51), INT32(31));
    (local_this_chpl2)->_free_when_no_doms = UINT8(true);
    chpl_check_local(chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)), INT64(52), INT32(31), "cannot access remote data in local block");
    local_this_chpl3 = (&this_chpl7)->addr;
    chpl_check_nil(local_this_chpl3, INT64(52), INT32(31));
    coerce_tmp_chpl3 = (local_this_chpl3)->_doms_containing_dist;
    chpl_check_local(chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)), INT64(53), INT32(31), "cannot access remote data in local block");
    local_this_chpl4 = (&this_chpl7)->addr;
    chpl_check_nil(local_this_chpl4, INT64(53), INT32(31));
    chpl_macro_tmp_1543.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1543.addr = &((local_this_chpl4)->_domsLock);
    call_tmp_chpl38 = chpl_macro_tmp_1543;
    chpl_check_local(chpl_nodeFromLocaleID((&call_tmp_chpl38)->locale, INT64(0), INT32(0)), INT64(53), INT32(31), "cannot access remote data in local block");
    local_call_tmp_chpl = (&call_tmp_chpl38)->addr;
    chpl_macro_tmp_1544.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1544.addr = &((local_call_tmp_chpl)->l);
    call_tmp_chpl39 = chpl_macro_tmp_1544;
    _local_chpl_rmem_consist_maybe_release_chpl();
    _local_chpl_rmem_consist_maybe_release_chpl();
    call_tmp_chpl40 = (&call_tmp_chpl39)->locale;
    isdirect_chpl2 = _local_chpl_doDirectExecuteOn(call_tmp_chpl40);
    if (isdirect_chpl2) {
      _local_on_fn_chpl2(call_tmp_chpl39, UINT8(false));
    } else {
      _args_foron_fn_chpl2 = ((_class_localson_fn_chpl3)(&chpl_macro_tmp_1545));
      chpl_check_nil(_args_foron_fn_chpl2, INT64(53), INT32(31));
      (_args_foron_fn_chpl2)->_0_tmp = call_tmp_chpl40;
      tmp_chpl16 = call_tmp_chpl39;
      chpl_check_nil(_args_foron_fn_chpl2, INT64(53), INT32(31));
      (_args_foron_fn_chpl2)->_1_this = tmp_chpl16;
      chpl_check_nil(_args_foron_fn_chpl2, INT64(53), INT32(31));
      (_args_foron_fn_chpl2)->_2_value = UINT8(false);
      _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
      /*** _local_wrapon_fn_chpl2 ***/ chpl_executeOnFast(call_tmp_chpl40, INT32(3), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn_chpl3_object), INT64(285), INT32(14));
    }
    _local_chpl_rmem_consist_maybe_acquire_chpl();
    _local_chpl_rmem_consist_maybe_acquire_chpl();
  }
  if (coerce_tmp_chpl3 == INT64(0)) {
    chpl_macro_tmp_1546 = UINT8(true);
    chpl_gen_comm_put(((void*)(&chpl_macro_tmp_1546)), chpl_nodeFromLocaleID((free_dist_chpl).locale, INT64(0), INT32(0)), (free_dist_chpl).addr, sizeof(chpl_bool), COMMID(1), INT64(56), INT64(31));
  }
  return;
}

/* ChapelDistribution.chpl:72 */
static void wrapon_fn_chpl61(_class_localson_fn_chpl61 c_chpl) {
  chpl____wide__ref_int64_t _1_count_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist _2_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(72), INT32(31));
  chpl_check_nil(c_chpl, INT64(72), INT32(31));
  _1_count_chpl = (c_chpl)->_1_count;
  chpl_check_nil(c_chpl, INT64(72), INT32(31));
  _2_this_chpl = (c_chpl)->_2_this;
  chpl_taskRunningCntInc(INT64(72), INT32(31));
  on_fn_chpl61(_1_count_chpl, _2_this_chpl);
  chpl_taskRunningCntDec(INT64(72), INT32(31));
  chpl_rmem_consist_release(INT64(72), INT32(31));
  return;
}

/* ChapelDistribution.chpl:72 */
static void on_fn_chpl61(chpl____wide__ref_int64_t count_chpl,
                         chpl____wide_BaseDist this_chpl7) {
  int64_t cnt_chpl;
  chpl____wide__ref_chpl_LocalSpinlock call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist_chpl local_this_chpl = NULL;
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl68 _args_foron_fn_chpl = NULL;
  chpl____wide__ref_chpl_LocalSpinlock tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_int64_t call_tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist_chpl local_this_chpl2 = NULL;
  _ref_int64_t_chpl local_call_tmp_chpl = NULL;
  BaseDist_chpl local_this_chpl3 = NULL;
  BaseDist_chpl local_this_chpl4 = NULL;
  _ref_int64_t_chpl i_lhs_chpl = NULL;
  chpl____wide__ref_chpl_LocalSpinlock call_tmp_chpl39 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist_chpl local_this_chpl5 = NULL;
  chpl____wide__ref_AtomicBool call_tmp_chpl40 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_LocalSpinlock_chpl local_call_tmp_chpl2 = NULL;
  chpl_localeID_t call_tmp_chpl41;
  chpl_bool isdirect_chpl2;
  _class_localson_fn_chpl3 _args_foron_fn_chpl2 = NULL;
  chpl____wide__ref_AtomicBool tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  chpl____wide__ref_chpl_LocalSpinlock chpl_macro_tmp_1547;
  chpl__class_localson_fn_chpl68_object chpl_macro_tmp_1548;
  chpl____wide__ref_int64_t chpl_macro_tmp_1549;
  chpl____wide__ref_chpl_LocalSpinlock chpl_macro_tmp_1550;
  chpl____wide__ref_AtomicBool chpl_macro_tmp_1551;
  chpl__class_localson_fn_chpl3_object chpl_macro_tmp_1552;
  cnt_chpl = INT64(-1);
  /* local block */
  {
    chpl_check_local(chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)), INT64(75), INT32(31), "cannot access remote data in local block");
    local_this_chpl = (&this_chpl7)->addr;
    chpl_check_nil(local_this_chpl, INT64(75), INT32(31));
    chpl_macro_tmp_1547.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1547.addr = &((local_this_chpl)->_domsLock);
    call_tmp_chpl36 = chpl_macro_tmp_1547;
    call_tmp_chpl37 = (&call_tmp_chpl36)->locale;
    chpl_rmem_consist_release(INT64(75), INT32(31));
    isdirect_chpl = _local_chpl_doDirectExecuteOn(call_tmp_chpl37);
    if (isdirect_chpl) {
      _local_on_fn_chpl4(call_tmp_chpl36);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl68)(&chpl_macro_tmp_1548));
      chpl_check_nil(_args_foron_fn_chpl, INT64(75), INT32(31));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
      tmp_chpl15 = call_tmp_chpl36;
      chpl_check_nil(_args_foron_fn_chpl, INT64(75), INT32(31));
      (_args_foron_fn_chpl)->_1_this = tmp_chpl15;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl68_object);
      chpl_taskRunningCntDec(INT64(75), INT32(31));
      /*** _local_wrapon_fn_chpl4 ***/ chpl_executeOn(call_tmp_chpl37, INT32(76), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(43), INT32(45));
      chpl_taskRunningCntInc(INT64(75), INT32(31));
    }
    chpl_rmem_consist_acquire(INT64(75), INT32(31));
    chpl_check_local(chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)), INT64(76), INT32(31), "cannot access remote data in local block");
    local_this_chpl2 = (&this_chpl7)->addr;
    chpl_check_nil(local_this_chpl2, INT64(76), INT32(31));
    chpl_macro_tmp_1549.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1549.addr = &((local_this_chpl2)->_doms_containing_dist);
    call_tmp_chpl38 = chpl_macro_tmp_1549;
    chpl_check_local(chpl_nodeFromLocaleID((&call_tmp_chpl38)->locale, INT64(0), INT32(0)), INT64(76), INT32(31), "cannot access remote data in local block");
    local_call_tmp_chpl = (&call_tmp_chpl38)->addr;
    *(local_call_tmp_chpl) -= INT64(1);
    chpl_check_local(chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)), INT64(77), INT32(31), "cannot access remote data in local block");
    local_this_chpl3 = (&this_chpl7)->addr;
    chpl_check_nil(local_this_chpl3, INT64(77), INT32(31));
    cnt_chpl = (local_this_chpl3)->_doms_containing_dist;
    chpl_check_local(chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)), INT64(80), INT32(31), "cannot access remote data in local block");
    local_this_chpl4 = (&this_chpl7)->addr;
    chpl_check_nil(local_this_chpl4, INT64(80), INT32(31));
    if (! (local_this_chpl4)->_free_when_no_doms) {
      i_lhs_chpl = &cnt_chpl;
      *(i_lhs_chpl) += INT64(1);
    }
    chpl_check_local(chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)), INT64(83), INT32(31), "cannot access remote data in local block");
    local_this_chpl5 = (&this_chpl7)->addr;
    chpl_check_nil(local_this_chpl5, INT64(83), INT32(31));
    chpl_macro_tmp_1550.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1550.addr = &((local_this_chpl5)->_domsLock);
    call_tmp_chpl39 = chpl_macro_tmp_1550;
    chpl_check_local(chpl_nodeFromLocaleID((&call_tmp_chpl39)->locale, INT64(0), INT32(0)), INT64(83), INT32(31), "cannot access remote data in local block");
    local_call_tmp_chpl2 = (&call_tmp_chpl39)->addr;
    chpl_macro_tmp_1551.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1551.addr = &((local_call_tmp_chpl2)->l);
    call_tmp_chpl40 = chpl_macro_tmp_1551;
    _local_chpl_rmem_consist_maybe_release_chpl();
    _local_chpl_rmem_consist_maybe_release_chpl();
    call_tmp_chpl41 = (&call_tmp_chpl40)->locale;
    isdirect_chpl2 = _local_chpl_doDirectExecuteOn(call_tmp_chpl41);
    if (isdirect_chpl2) {
      _local_on_fn_chpl2(call_tmp_chpl40, UINT8(false));
    } else {
      _args_foron_fn_chpl2 = ((_class_localson_fn_chpl3)(&chpl_macro_tmp_1552));
      chpl_check_nil(_args_foron_fn_chpl2, INT64(83), INT32(31));
      (_args_foron_fn_chpl2)->_0_tmp = call_tmp_chpl41;
      tmp_chpl16 = call_tmp_chpl40;
      chpl_check_nil(_args_foron_fn_chpl2, INT64(83), INT32(31));
      (_args_foron_fn_chpl2)->_1_this = tmp_chpl16;
      chpl_check_nil(_args_foron_fn_chpl2, INT64(83), INT32(31));
      (_args_foron_fn_chpl2)->_2_value = UINT8(false);
      _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
      /*** _local_wrapon_fn_chpl2 ***/ chpl_executeOnFast(call_tmp_chpl41, INT32(3), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn_chpl3_object), INT64(285), INT32(14));
    }
    _local_chpl_rmem_consist_maybe_acquire_chpl();
    _local_chpl_rmem_consist_maybe_acquire_chpl();
  }
  chpl_gen_comm_put(((void*)(&cnt_chpl)), chpl_nodeFromLocaleID((count_chpl).locale, INT64(0), INT32(0)), (count_chpl).addr, sizeof(int64_t), COMMID(2), INT64(85), INT64(31));
  return;
}

/* ChapelDistribution.chpl:133 */
static void dsiDestroyDist_chpl(chpl____wide_BaseDist this_chpl7) {
  return;
}

/* ChapelDistribution.chpl:140 */
static chpl_bool dsiTrackDomains_chpl(chpl____wide_BaseDist this_chpl7) {
  return UINT8(true);
}

/* ChapelDistribution.chpl:173 */
static void deinit_chpl6(chpl____wide_BaseDom this_chpl7) {
  chpl____wide__ref_chpl_LocalSpinlock _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicBool _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_LocalSpinlock chpl_macro_tmp_1553;
  chpl____wide__ref_AtomicBool chpl_macro_tmp_1554;
  chpl_check_nil((&this_chpl7)->addr, INT64(164), INT32(31));
  chpl_macro_tmp_1553.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1553.addr = &(((&this_chpl7)->addr)->_arrsLock);
  _field_destructor_tmp__chpl = chpl_macro_tmp_1553;
  chpl_macro_tmp_1554.locale = (_field_destructor_tmp__chpl).locale;
  chpl_macro_tmp_1554.addr = &(((_field_destructor_tmp__chpl).addr)->l);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_1554;
  deinit_chpl(_field_destructor_tmp__chpl2);
  return;
}

/* ChapelDistribution.chpl:184 */
static chpl____wide_BaseDist dsiMyDist_chpl(chpl____wide_BaseDom this_chpl7) {
  string_chpl local__str_literal_1119_chpl;
  chpl____wide_BaseDist ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist_chpl tmp_chpl15 = NULL;
  chpl____wide_BaseDist chpl_macro_tmp_1555;
  local__str_literal_1119_chpl = _str_literal_1119_chpl /* "internal error: dsiMyDist is not implemented" */;
  halt_chpl(&local__str_literal_1119_chpl, INT64(185), INT32(31));
  tmp_chpl15 = ((BaseDist_chpl)(nil));
  chpl_macro_tmp_1555.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1555.addr = tmp_chpl15;
  ret_chpl = chpl_macro_tmp_1555;
  return ret_chpl;
}

/* ChapelDistribution.chpl:239 */
static void remove_chpl2(chpl____wide_BaseDom this_chpl7,
                         _tuple_2_BaseDom_BaseDist_chpl * _retArg_chpl) {
  chpl____wide_BaseDist call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl37;
  chpl_bool call_tmp_chpl38;
  chpl____wide_BaseDom ret_dom_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDom_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_BaseDist ret_dist_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist_chpl init_coerce_tmp_chpl4 = NULL;
  chpl____wide_BaseDist call_tmp_chpl39 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool free_dom_chpl;
  chpl_bool remove_dist_chpl;
  chpl_localeID_t call_tmp_chpl40;
  chpl____wide_BaseDist rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  chpl____wide__ref_chpl_bool tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_bool tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl62 _args_foron_fn_chpl = NULL;
  _ref_chpl_bool_chpl tmp_chpl17 = NULL;
  chpl____wide__ref_chpl_bool tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool_chpl tmp_chpl19 = NULL;
  chpl____wide__ref_chpl_bool tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_BaseDom ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_2_BaseDom_BaseDist_chpl ret_tmp_chpl;
  chpl____wide__ref_int32_t chpl_macro_tmp_1556;
  int32_t chpl_macro_tmp_1557;
  chpl____wide__ref_int32_t chpl_macro_tmp_1558;
  int32_t chpl_macro_tmp_1559;
  chpl____wide__ref_int32_t chpl_macro_tmp_1560;
  int32_t chpl_macro_tmp_1561;
  chpl____wide_BaseDom chpl_macro_tmp_1562;
  chpl____wide_BaseDist chpl_macro_tmp_1563;
  chpl____wide__ref_int32_t chpl_macro_tmp_1564;
  int32_t chpl_macro_tmp_1565;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1566;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1567;
  chpl__class_localson_fn_chpl62_object chpl_macro_tmp_1568;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1569;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1570;
  chpl_check_nil((&this_chpl7)->addr, INT64(243), INT32(31));
  chpl_macro_tmp_1556.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1556.addr = &(((object_chpl)((&this_chpl7)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1557)), chpl_nodeFromLocaleID((chpl_macro_tmp_1556).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1556).addr, sizeof(int32_t), COMMID(3), INT64(243), INT64(31));
  call_tmp_chpl36 = ((chpl____wide_BaseDist(*)(chpl____wide_BaseDom))chpl_vmtable[((INT64(6) * chpl_macro_tmp_1557) + INT64(2))])(this_chpl7);
  chpl_check_nil((&call_tmp_chpl36)->addr, INT64(243), INT32(31));
  chpl_macro_tmp_1558.locale = (&call_tmp_chpl36)->locale;
  chpl_macro_tmp_1558.addr = &(((object_chpl)((&call_tmp_chpl36)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1559)), chpl_nodeFromLocaleID((chpl_macro_tmp_1558).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1558).addr, sizeof(int32_t), COMMID(4), INT64(243), INT64(31));
  call_tmp_chpl37 = ((chpl_bool(*)(chpl____wide_BaseDist))chpl_vmtable[((INT64(6) * chpl_macro_tmp_1559) + INT64(1))])(call_tmp_chpl36);
  chpl_check_nil((&this_chpl7)->addr, INT64(243), INT32(31));
  chpl_macro_tmp_1560.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1560.addr = &(((object_chpl)((&this_chpl7)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1561)), chpl_nodeFromLocaleID((chpl_macro_tmp_1560).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1560).addr, sizeof(int32_t), COMMID(5), INT64(243), INT64(31));
  call_tmp_chpl38 = ((chpl_bool(*)(chpl____wide_BaseDom))chpl_vmtable[((INT64(6) * chpl_macro_tmp_1561) + INT64(1))])(this_chpl7);
  assert_chpl((call_tmp_chpl37 == call_tmp_chpl38), INT64(243), INT32(31));
  init_coerce_tmp_chpl3 = ((BaseDom_chpl)(nil));
  chpl_macro_tmp_1562.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1562.addr = init_coerce_tmp_chpl3;
  ret_dom_chpl = chpl_macro_tmp_1562;
  init_coerce_tmp_chpl4 = ((BaseDist_chpl)(nil));
  chpl_macro_tmp_1563.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1563.addr = init_coerce_tmp_chpl4;
  ret_dist_chpl = chpl_macro_tmp_1563;
  chpl_check_nil((&this_chpl7)->addr, INT64(248), INT32(31));
  chpl_macro_tmp_1564.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1564.addr = &(((object_chpl)((&this_chpl7)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1565)), chpl_nodeFromLocaleID((chpl_macro_tmp_1564).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1564).addr, sizeof(int32_t), COMMID(6), INT64(248), INT64(31));
  call_tmp_chpl39 = ((chpl____wide_BaseDist(*)(chpl____wide_BaseDom))chpl_vmtable[((INT64(6) * chpl_macro_tmp_1565) + INT64(2))])(this_chpl7);
  free_dom_chpl = UINT8(false);
  remove_dist_chpl = UINT8(false);
  call_tmp_chpl40 = (&this_chpl7)->locale;
  chpl_rmem_consist_release(INT64(251), INT32(31));
  rvfDerefTmp_chpl = call_tmp_chpl39;
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl40);
  if (isdirect_chpl) {
    chpl_macro_tmp_1566.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1566.addr = &free_dom_chpl;
    tmp_chpl15 = chpl_macro_tmp_1566;
    chpl_macro_tmp_1567.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1567.addr = &remove_dist_chpl;
    tmp_chpl16 = chpl_macro_tmp_1567;
    on_fn_chpl62(rvfDerefTmp_chpl, tmp_chpl15, tmp_chpl16, this_chpl7);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl62)(&chpl_macro_tmp_1568));
    chpl_check_nil(_args_foron_fn_chpl, INT64(251), INT32(31));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl40;
    chpl_check_nil(_args_foron_fn_chpl, INT64(251), INT32(31));
    (_args_foron_fn_chpl)->_1_rvfDerefTmp = rvfDerefTmp_chpl;
    tmp_chpl17 = &free_dom_chpl;
    chpl_macro_tmp_1569.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1569.addr = tmp_chpl17;
    tmp_chpl18 = chpl_macro_tmp_1569;
    chpl_check_nil(_args_foron_fn_chpl, INT64(251), INT32(31));
    (_args_foron_fn_chpl)->_2_free_dom = tmp_chpl18;
    tmp_chpl19 = &remove_dist_chpl;
    chpl_macro_tmp_1570.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1570.addr = tmp_chpl19;
    tmp_chpl20 = chpl_macro_tmp_1570;
    chpl_check_nil(_args_foron_fn_chpl, INT64(251), INT32(31));
    (_args_foron_fn_chpl)->_3_remove_dist = tmp_chpl20;
    chpl_check_nil(_args_foron_fn_chpl, INT64(251), INT32(31));
    (_args_foron_fn_chpl)->_4_this = this_chpl7;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl62_object);
    chpl_taskRunningCntDec(INT64(251), INT32(31));
    /*** wrapon_fn_chpl62 ***/ chpl_executeOn(call_tmp_chpl40, INT32(69), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(251), INT32(31));
    chpl_taskRunningCntInc(INT64(251), INT32(31));
  }
  chpl_rmem_consist_acquire(INT64(251), INT32(31));
  if (free_dom_chpl) {
    ret_chpl = this_chpl7;
    ret_dom_chpl = ret_chpl;
  }
  if (remove_dist_chpl) {
    ret_dist_chpl = call_tmp_chpl39;
  }
  (&ret_tmp_chpl)->x0 = ret_dom_chpl;
  (&ret_tmp_chpl)->x1 = ret_dist_chpl;
  *(_retArg_chpl) = ret_tmp_chpl;
  return;
}

/* ChapelDistribution.chpl:251 */
static void wrapon_fn_chpl62(_class_localson_fn_chpl62 c_chpl) {
  chpl____wide_BaseDist _1_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_bool _2_free_dom_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_bool _3_remove_dist_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom _4_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(251), INT32(31));
  chpl_check_nil(c_chpl, INT64(251), INT32(31));
  _1_rvfDerefTmp_chpl = (c_chpl)->_1_rvfDerefTmp;
  chpl_check_nil(c_chpl, INT64(251), INT32(31));
  _2_free_dom_chpl = (c_chpl)->_2_free_dom;
  chpl_check_nil(c_chpl, INT64(251), INT32(31));
  _3_remove_dist_chpl = (c_chpl)->_3_remove_dist;
  chpl_check_nil(c_chpl, INT64(251), INT32(31));
  _4_this_chpl = (c_chpl)->_4_this;
  chpl_taskRunningCntInc(INT64(251), INT32(31));
  on_fn_chpl62(_1_rvfDerefTmp_chpl, _2_free_dom_chpl, _3_remove_dist_chpl, _4_this_chpl);
  chpl_taskRunningCntDec(INT64(251), INT32(31));
  chpl_rmem_consist_release(INT64(251), INT32(31));
  return;
}

/* ChapelDistribution.chpl:251 */
static void on_fn_chpl62(chpl____wide_BaseDist dist_chpl2,
                         chpl____wide__ref_chpl_bool free_dom_chpl,
                         chpl____wide__ref_chpl_bool remove_dist_chpl,
                         chpl____wide_BaseDom this_chpl7) {
  chpl____wide__ref_chpl_LocalSpinlock call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDom_chpl local_this_chpl = NULL;
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl68 _args_foron_fn_chpl = NULL;
  chpl____wide__ref_chpl_LocalSpinlock tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  int64_t coerce_tmp_chpl3;
  BaseDom_chpl local_this_chpl2 = NULL;
  BaseDom_chpl local_this_chpl3 = NULL;
  chpl____wide__ref_chpl_LocalSpinlock call_tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDom_chpl local_this_chpl4 = NULL;
  chpl____wide__ref_AtomicBool call_tmp_chpl39 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_LocalSpinlock_chpl local_call_tmp_chpl = NULL;
  chpl_localeID_t call_tmp_chpl40;
  chpl_bool isdirect_chpl2;
  _class_localson_fn_chpl3 _args_foron_fn_chpl2 = NULL;
  chpl____wide__ref_AtomicBool tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  chpl_bool call_tmp_chpl41;
  int64_t count_chpl;
  chpl_localeID_t call_tmp_chpl42;
  chpl_bool isdirect_chpl3;
  chpl____wide__ref_int64_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl61 _args_foron_fn_chpl3 = NULL;
  _ref_int64_t_chpl tmp_chpl18 = NULL;
  chpl____wide__ref_int64_t tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl3;
  int64_t _args_sizeon_fn_chpl2;
  chpl____wide__ref_chpl_LocalSpinlock chpl_macro_tmp_1571;
  chpl__class_localson_fn_chpl68_object chpl_macro_tmp_1572;
  chpl____wide__ref_chpl_LocalSpinlock chpl_macro_tmp_1573;
  chpl____wide__ref_AtomicBool chpl_macro_tmp_1574;
  chpl__class_localson_fn_chpl3_object chpl_macro_tmp_1575;
  chpl_bool chpl_macro_tmp_1576;
  chpl____wide__ref_int32_t chpl_macro_tmp_1577;
  int32_t chpl_macro_tmp_1578;
  chpl____wide__ref_int64_t chpl_macro_tmp_1579;
  chpl__class_localson_fn_chpl61_object chpl_macro_tmp_1580;
  chpl____wide__ref_int64_t chpl_macro_tmp_1581;
  chpl_bool chpl_macro_tmp_1582;
  /* local block */
  {
    chpl_check_local(chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)), INT64(256), INT32(31), "cannot access remote data in local block");
    local_this_chpl = (&this_chpl7)->addr;
    chpl_check_nil(local_this_chpl, INT64(256), INT32(31));
    chpl_macro_tmp_1571.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1571.addr = &((local_this_chpl)->_arrsLock);
    call_tmp_chpl36 = chpl_macro_tmp_1571;
    call_tmp_chpl37 = (&call_tmp_chpl36)->locale;
    chpl_rmem_consist_release(INT64(256), INT32(31));
    isdirect_chpl = _local_chpl_doDirectExecuteOn(call_tmp_chpl37);
    if (isdirect_chpl) {
      _local_on_fn_chpl4(call_tmp_chpl36);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl68)(&chpl_macro_tmp_1572));
      chpl_check_nil(_args_foron_fn_chpl, INT64(256), INT32(31));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
      tmp_chpl15 = call_tmp_chpl36;
      chpl_check_nil(_args_foron_fn_chpl, INT64(256), INT32(31));
      (_args_foron_fn_chpl)->_1_this = tmp_chpl15;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl68_object);
      chpl_taskRunningCntDec(INT64(256), INT32(31));
      /*** _local_wrapon_fn_chpl4 ***/ chpl_executeOn(call_tmp_chpl37, INT32(76), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(43), INT32(45));
      chpl_taskRunningCntInc(INT64(256), INT32(31));
    }
    chpl_rmem_consist_acquire(INT64(256), INT32(31));
    chpl_check_local(chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)), INT64(257), INT32(31), "cannot access remote data in local block");
    local_this_chpl2 = (&this_chpl7)->addr;
    chpl_check_nil(local_this_chpl2, INT64(257), INT32(31));
    coerce_tmp_chpl3 = (local_this_chpl2)->_arrs_containing_dom;
    chpl_check_local(chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)), INT64(258), INT32(31), "cannot access remote data in local block");
    local_this_chpl3 = (&this_chpl7)->addr;
    chpl_check_nil(local_this_chpl3, INT64(258), INT32(31));
    (local_this_chpl3)->_free_when_no_arrs = UINT8(true);
    chpl_check_local(chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)), INT64(259), INT32(31), "cannot access remote data in local block");
    local_this_chpl4 = (&this_chpl7)->addr;
    chpl_check_nil(local_this_chpl4, INT64(259), INT32(31));
    chpl_macro_tmp_1573.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1573.addr = &((local_this_chpl4)->_arrsLock);
    call_tmp_chpl38 = chpl_macro_tmp_1573;
    chpl_check_local(chpl_nodeFromLocaleID((&call_tmp_chpl38)->locale, INT64(0), INT32(0)), INT64(259), INT32(31), "cannot access remote data in local block");
    local_call_tmp_chpl = (&call_tmp_chpl38)->addr;
    chpl_macro_tmp_1574.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1574.addr = &((local_call_tmp_chpl)->l);
    call_tmp_chpl39 = chpl_macro_tmp_1574;
    _local_chpl_rmem_consist_maybe_release_chpl();
    _local_chpl_rmem_consist_maybe_release_chpl();
    call_tmp_chpl40 = (&call_tmp_chpl39)->locale;
    isdirect_chpl2 = _local_chpl_doDirectExecuteOn(call_tmp_chpl40);
    if (isdirect_chpl2) {
      _local_on_fn_chpl2(call_tmp_chpl39, UINT8(false));
    } else {
      _args_foron_fn_chpl2 = ((_class_localson_fn_chpl3)(&chpl_macro_tmp_1575));
      chpl_check_nil(_args_foron_fn_chpl2, INT64(259), INT32(31));
      (_args_foron_fn_chpl2)->_0_tmp = call_tmp_chpl40;
      tmp_chpl16 = call_tmp_chpl39;
      chpl_check_nil(_args_foron_fn_chpl2, INT64(259), INT32(31));
      (_args_foron_fn_chpl2)->_1_this = tmp_chpl16;
      chpl_check_nil(_args_foron_fn_chpl2, INT64(259), INT32(31));
      (_args_foron_fn_chpl2)->_2_value = UINT8(false);
      _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
      /*** _local_wrapon_fn_chpl2 ***/ chpl_executeOnFast(call_tmp_chpl40, INT32(3), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn_chpl3_object), INT64(285), INT32(14));
    }
    _local_chpl_rmem_consist_maybe_acquire_chpl();
    _local_chpl_rmem_consist_maybe_acquire_chpl();
  }
  if (coerce_tmp_chpl3 == INT64(0)) {
    chpl_macro_tmp_1576 = UINT8(true);
    chpl_gen_comm_put(((void*)(&chpl_macro_tmp_1576)), chpl_nodeFromLocaleID((free_dom_chpl).locale, INT64(0), INT32(0)), (free_dom_chpl).addr, sizeof(chpl_bool), COMMID(7), INT64(263), INT64(31));
    chpl_check_nil((&this_chpl7)->addr, INT64(265), INT32(31));
    chpl_macro_tmp_1577.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_1577.addr = &(((object_chpl)((&this_chpl7)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1578)), chpl_nodeFromLocaleID((chpl_macro_tmp_1577).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1577).addr, sizeof(int32_t), COMMID(8), INT64(265), INT64(31));
    call_tmp_chpl41 = ((chpl_bool(*)(chpl____wide_BaseDom))chpl_vmtable[((INT64(6) * chpl_macro_tmp_1578) + INT64(1))])(this_chpl7);
    if (call_tmp_chpl41) {
      count_chpl = INT64(-1);
      call_tmp_chpl42 = (&dist_chpl2)->locale;
      chpl_rmem_consist_release(INT64(268), INT32(31));
      isdirect_chpl3 = chpl_doDirectExecuteOn(call_tmp_chpl42);
      if (isdirect_chpl3) {
        chpl_macro_tmp_1579.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1579.addr = &count_chpl;
        tmp_chpl17 = chpl_macro_tmp_1579;
        on_fn_chpl61(tmp_chpl17, dist_chpl2);
      } else {
        _args_foron_fn_chpl3 = ((_class_localson_fn_chpl61)(&chpl_macro_tmp_1580));
        chpl_check_nil(_args_foron_fn_chpl3, INT64(268), INT32(31));
        (_args_foron_fn_chpl3)->_0_tmp = call_tmp_chpl42;
        tmp_chpl18 = &count_chpl;
        chpl_macro_tmp_1581.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1581.addr = tmp_chpl18;
        tmp_chpl19 = chpl_macro_tmp_1581;
        chpl_check_nil(_args_foron_fn_chpl3, INT64(268), INT32(31));
        (_args_foron_fn_chpl3)->_1_count = tmp_chpl19;
        chpl_check_nil(_args_foron_fn_chpl3, INT64(268), INT32(31));
        (_args_foron_fn_chpl3)->_2_this = dist_chpl2;
        _args_vforon_fn_chpl3 = ((void*)(_args_foron_fn_chpl3));
        _args_sizeon_fn_chpl2 = sizeof(chpl__class_localson_fn_chpl61_object);
        chpl_taskRunningCntDec(INT64(268), INT32(31));
        /*** wrapon_fn_chpl61 ***/ chpl_executeOn(call_tmp_chpl42, INT32(68), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl3)), _args_sizeon_fn_chpl2, INT64(72), INT32(31));
        chpl_taskRunningCntInc(INT64(268), INT32(31));
      }
      chpl_rmem_consist_acquire(INT64(268), INT32(31));
      chpl_macro_tmp_1582 = (count_chpl == INT64(0));
      chpl_gen_comm_put(((void*)(&chpl_macro_tmp_1582)), chpl_nodeFromLocaleID((remove_dist_chpl).locale, INT64(0), INT32(0)), (remove_dist_chpl).addr, sizeof(chpl_bool), COMMID(9), INT64(268), INT64(31));
    }
  }
  return;
}

/* ChapelDistribution.chpl:285 */
static void wrapon_fn_chpl63(_class_localson_fn_chpl63 c_chpl) {
  chpl____wide_BaseDom _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr _2_x_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t _3_count_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(285), INT32(31));
  chpl_check_nil(c_chpl, INT64(285), INT32(31));
  _1_this_chpl = (c_chpl)->_1_this;
  chpl_check_nil(c_chpl, INT64(285), INT32(31));
  _2_x_chpl = (c_chpl)->_2_x;
  chpl_check_nil(c_chpl, INT64(285), INT32(31));
  _3_count_chpl = (c_chpl)->_3_count;
  chpl_taskRunningCntInc(INT64(285), INT32(31));
  on_fn_chpl63(_1_this_chpl, _2_x_chpl, _3_count_chpl);
  chpl_taskRunningCntDec(INT64(285), INT32(31));
  chpl_rmem_consist_release(INT64(285), INT32(31));
  return;
}

/* ChapelDistribution.chpl:285 */
static void on_fn_chpl63(chpl____wide_BaseDom this_chpl7,
                         chpl____wide_BaseArr x_chpl2,
                         chpl____wide__ref_int64_t count_chpl) {
  int64_t cnt_chpl;
  chpl____wide__ref_chpl_LocalSpinlock call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl68 _args_foron_fn_chpl = NULL;
  chpl____wide__ref_chpl_LocalSpinlock tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_int64_t call_tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl16;
  chpl____wide_BaseArr coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl19;
  chpl_bool tmp_chpl20;
  _ref_int64_t_chpl i_lhs_chpl = NULL;
  chpl____wide__ref_chpl_LocalSpinlock call_tmp_chpl39 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicBool call_tmp_chpl40 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl41;
  chpl_bool isdirect_chpl2;
  _class_localson_fn_chpl3 _args_foron_fn_chpl2 = NULL;
  chpl____wide__ref_AtomicBool tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  chpl____wide__ref_chpl_LocalSpinlock chpl_macro_tmp_1583;
  chpl__class_localson_fn_chpl68_object chpl_macro_tmp_1584;
  chpl____wide__ref_int64_t chpl_macro_tmp_1585;
  int64_t chpl_macro_tmp_1586;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1587;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_1588;
  chpl____wide_object chpl_macro_tmp_1589;
  chpl____wide_object chpl_macro_tmp_1590;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_1591;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_1592;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_1593;
  chpl____wide_object chpl_macro_tmp_1594;
  chpl____wide__nilType chpl_macro_tmp_1595;
  chpl____wide_object chpl_macro_tmp_1596;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_1597;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_1598;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_1599;
  chpl____wide_object chpl_macro_tmp_1600;
  chpl____wide__nilType chpl_macro_tmp_1601;
  chpl____wide_object chpl_macro_tmp_1602;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_1603;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_1604;
  chpl____wide__ref_int64_t chpl_macro_tmp_1605;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1606;
  chpl____wide__ref_chpl_LocalSpinlock chpl_macro_tmp_1607;
  chpl____wide__ref_AtomicBool chpl_macro_tmp_1608;
  chpl__class_localson_fn_chpl3_object chpl_macro_tmp_1609;
  cnt_chpl = INT64(-1);
  chpl_check_nil((&this_chpl7)->addr, INT64(287), INT32(31));
  chpl_macro_tmp_1583.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1583.addr = &(((&this_chpl7)->addr)->_arrsLock);
  call_tmp_chpl36 = chpl_macro_tmp_1583;
  call_tmp_chpl37 = (&call_tmp_chpl36)->locale;
  chpl_rmem_consist_release(INT64(287), INT32(31));
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
  if (isdirect_chpl) {
    on_fn_chpl68(call_tmp_chpl36);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl68)(&chpl_macro_tmp_1584));
    chpl_check_nil(_args_foron_fn_chpl, INT64(287), INT32(31));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
    tmp_chpl15 = call_tmp_chpl36;
    chpl_check_nil(_args_foron_fn_chpl, INT64(287), INT32(31));
    (_args_foron_fn_chpl)->_1_this = tmp_chpl15;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl68_object);
    chpl_taskRunningCntDec(INT64(287), INT32(31));
    /*** wrapon_fn_chpl68 ***/ chpl_executeOn(call_tmp_chpl37, INT32(77), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(43), INT32(45));
    chpl_taskRunningCntInc(INT64(287), INT32(31));
  }
  chpl_rmem_consist_acquire(INT64(287), INT32(31));
  chpl_check_nil((&this_chpl7)->addr, INT64(288), INT32(31));
  chpl_macro_tmp_1585.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1585.addr = &(((&this_chpl7)->addr)->_arrs_containing_dom);
  call_tmp_chpl38 = chpl_macro_tmp_1585;
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1586)), chpl_nodeFromLocaleID((call_tmp_chpl38).locale, INT64(0), INT32(0)), (call_tmp_chpl38).addr, sizeof(int64_t), COMMID(10), INT64(288), INT64(31));
  chpl_macro_tmp_1586 -= INT64(1);
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_1586)), chpl_nodeFromLocaleID((call_tmp_chpl38).locale, INT64(0), INT32(0)), (call_tmp_chpl38).addr, sizeof(int64_t), COMMID(11), INT64(288), INT64(31));
  chpl_check_nil((&this_chpl7)->addr, INT64(289), INT32(31));
  chpl_macro_tmp_1587.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1587.addr = &(((&this_chpl7)->addr)->definedConst);
  chpl_gen_comm_get(((void*)(&tmp_chpl16)), chpl_nodeFromLocaleID((chpl_macro_tmp_1587).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1587).addr, sizeof(chpl_bool), COMMID(12), INT64(289), INT64(31));
  if (! tmp_chpl16) {
    chpl_check_nil((&this_chpl7)->addr, INT64(290), INT32(31));
    chpl_macro_tmp_1588.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_1588.addr = &(((&this_chpl7)->addr)->_arrs_head);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID((chpl_macro_tmp_1588).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1588).addr, sizeof(chpl____wide_BaseArr), COMMID(13), INT64(290), INT64(31));
    chpl_macro_tmp_1589.locale = (&coerce_tmp_chpl3)->locale;
    chpl_macro_tmp_1589.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
    coerce_tmp_chpl4 = chpl_macro_tmp_1589;
    chpl_macro_tmp_1590.locale = (&x_chpl2)->locale;
    chpl_macro_tmp_1590.addr = ((object_chpl)((&x_chpl2)->addr));
    coerce_tmp_chpl5 = chpl_macro_tmp_1590;
    if (! (((&coerce_tmp_chpl4)->addr != (&coerce_tmp_chpl5)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&coerce_tmp_chpl5)->locale, INT64(0), INT32(0)))))) {
      coerce_tmp_chpl6 = x_chpl2;
      chpl_check_nil((&coerce_tmp_chpl6)->addr, INT64(290), INT32(31));
      chpl_macro_tmp_1591.locale = (&coerce_tmp_chpl6)->locale;
      chpl_macro_tmp_1591.addr = &(((&coerce_tmp_chpl6)->addr)->next);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl7)), chpl_nodeFromLocaleID((chpl_macro_tmp_1591).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1591).addr, sizeof(chpl____wide_BaseArr), COMMID(14), INT64(290), INT64(31));
      chpl_check_nil((&this_chpl7)->addr, INT64(290), INT32(31));
      chpl_macro_tmp_1592.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1592.addr = &(((&this_chpl7)->addr)->_arrs_head);
      chpl_gen_comm_put(((void*)(&coerce_tmp_chpl7)), chpl_nodeFromLocaleID((chpl_macro_tmp_1592).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1592).addr, sizeof(chpl____wide_BaseArr), COMMID(15), INT64(290), INT64(31));
    }
    coerce_tmp_chpl8 = x_chpl2;
    chpl_check_nil((&coerce_tmp_chpl8)->addr, INT64(291), INT32(31));
    chpl_macro_tmp_1593.locale = (&coerce_tmp_chpl8)->locale;
    chpl_macro_tmp_1593.addr = &(((&coerce_tmp_chpl8)->addr)->next);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl9)), chpl_nodeFromLocaleID((chpl_macro_tmp_1593).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1593).addr, sizeof(chpl____wide_BaseArr), COMMID(16), INT64(291), INT64(31));
    chpl_macro_tmp_1594.locale = (&coerce_tmp_chpl9)->locale;
    chpl_macro_tmp_1594.addr = ((object_chpl)((&coerce_tmp_chpl9)->addr));
    coerce_tmp_chpl10 = chpl_macro_tmp_1594;
    chpl_macro_tmp_1595.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1595.addr = nil;
    chpl_macro_tmp_1596.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1596.addr = NULL;
    tmp_chpl17 = chpl_macro_tmp_1596;
    if (((&coerce_tmp_chpl10)->addr != (&tmp_chpl17)->addr) || ((!(! (&coerce_tmp_chpl10)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl10)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl17)->locale, INT64(0), INT32(0))))) {
      coerce_tmp_chpl11 = coerce_tmp_chpl9;
      coerce_tmp_chpl12 = x_chpl2;
      chpl_check_nil((&coerce_tmp_chpl12)->addr, INT64(291), INT32(31));
      chpl_macro_tmp_1597.locale = (&coerce_tmp_chpl12)->locale;
      chpl_macro_tmp_1597.addr = &(((&coerce_tmp_chpl12)->addr)->prev);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl13)), chpl_nodeFromLocaleID((chpl_macro_tmp_1597).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1597).addr, sizeof(chpl____wide_BaseArr), COMMID(17), INT64(291), INT64(31));
      chpl_check_nil((&coerce_tmp_chpl11)->addr, INT64(291), INT32(31));
      chpl_macro_tmp_1598.locale = (&coerce_tmp_chpl11)->locale;
      chpl_macro_tmp_1598.addr = &(((&coerce_tmp_chpl11)->addr)->prev);
      chpl_gen_comm_put(((void*)(&coerce_tmp_chpl13)), chpl_nodeFromLocaleID((chpl_macro_tmp_1598).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1598).addr, sizeof(chpl____wide_BaseArr), COMMID(18), INT64(291), INT64(31));
    }
    coerce_tmp_chpl14 = x_chpl2;
    chpl_check_nil((&coerce_tmp_chpl14)->addr, INT64(292), INT32(31));
    chpl_macro_tmp_1599.locale = (&coerce_tmp_chpl14)->locale;
    chpl_macro_tmp_1599.addr = &(((&coerce_tmp_chpl14)->addr)->prev);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1599).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1599).addr, sizeof(chpl____wide_BaseArr), COMMID(19), INT64(292), INT64(31));
    chpl_macro_tmp_1600.locale = (&coerce_tmp_chpl15)->locale;
    chpl_macro_tmp_1600.addr = ((object_chpl)((&coerce_tmp_chpl15)->addr));
    coerce_tmp_chpl16 = chpl_macro_tmp_1600;
    chpl_macro_tmp_1601.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1601.addr = nil;
    chpl_macro_tmp_1602.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1602.addr = NULL;
    tmp_chpl18 = chpl_macro_tmp_1602;
    if (((&coerce_tmp_chpl16)->addr != (&tmp_chpl18)->addr) || ((!(! (&coerce_tmp_chpl16)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl16)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl18)->locale, INT64(0), INT32(0))))) {
      coerce_tmp_chpl17 = coerce_tmp_chpl15;
      coerce_tmp_chpl18 = x_chpl2;
      chpl_check_nil((&coerce_tmp_chpl18)->addr, INT64(292), INT32(31));
      chpl_macro_tmp_1603.locale = (&coerce_tmp_chpl18)->locale;
      chpl_macro_tmp_1603.addr = &(((&coerce_tmp_chpl18)->addr)->next);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl19)), chpl_nodeFromLocaleID((chpl_macro_tmp_1603).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1603).addr, sizeof(chpl____wide_BaseArr), COMMID(20), INT64(292), INT64(31));
      chpl_check_nil((&coerce_tmp_chpl17)->addr, INT64(292), INT32(31));
      chpl_macro_tmp_1604.locale = (&coerce_tmp_chpl17)->locale;
      chpl_macro_tmp_1604.addr = &(((&coerce_tmp_chpl17)->addr)->next);
      chpl_gen_comm_put(((void*)(&coerce_tmp_chpl19)), chpl_nodeFromLocaleID((chpl_macro_tmp_1604).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1604).addr, sizeof(chpl____wide_BaseArr), COMMID(21), INT64(292), INT64(31));
    }
  }
  chpl_check_nil((&this_chpl7)->addr, INT64(294), INT32(31));
  chpl_macro_tmp_1605.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1605.addr = &(((&this_chpl7)->addr)->_arrs_containing_dom);
  chpl_gen_comm_get(((void*)(&tmp_chpl19)), chpl_nodeFromLocaleID((chpl_macro_tmp_1605).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1605).addr, sizeof(int64_t), COMMID(22), INT64(294), INT64(31));
  cnt_chpl = tmp_chpl19;
  chpl_check_nil((&this_chpl7)->addr, INT64(296), INT32(31));
  chpl_macro_tmp_1606.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1606.addr = &(((&this_chpl7)->addr)->_free_when_no_arrs);
  chpl_gen_comm_get(((void*)(&tmp_chpl20)), chpl_nodeFromLocaleID((chpl_macro_tmp_1606).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1606).addr, sizeof(chpl_bool), COMMID(23), INT64(296), INT64(31));
  if (! tmp_chpl20) {
    i_lhs_chpl = &cnt_chpl;
    *(i_lhs_chpl) += INT64(1);
  }
  chpl_check_nil((&this_chpl7)->addr, INT64(298), INT32(31));
  chpl_macro_tmp_1607.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1607.addr = &(((&this_chpl7)->addr)->_arrsLock);
  call_tmp_chpl39 = chpl_macro_tmp_1607;
  chpl_macro_tmp_1608.locale = (call_tmp_chpl39).locale;
  chpl_macro_tmp_1608.addr = &(((call_tmp_chpl39).addr)->l);
  call_tmp_chpl40 = chpl_macro_tmp_1608;
  chpl_rmem_consist_maybe_release2();
  chpl_rmem_consist_maybe_release2();
  call_tmp_chpl41 = (&call_tmp_chpl40)->locale;
  isdirect_chpl2 = chpl_doDirectExecuteOn(call_tmp_chpl41);
  if (isdirect_chpl2) {
    on_fn_chpl3(call_tmp_chpl40, UINT8(false));
  } else {
    _args_foron_fn_chpl2 = ((_class_localson_fn_chpl3)(&chpl_macro_tmp_1609));
    chpl_check_nil(_args_foron_fn_chpl2, INT64(298), INT32(31));
    (_args_foron_fn_chpl2)->_0_tmp = call_tmp_chpl41;
    tmp_chpl21 = call_tmp_chpl40;
    chpl_check_nil(_args_foron_fn_chpl2, INT64(298), INT32(31));
    (_args_foron_fn_chpl2)->_1_this = tmp_chpl21;
    chpl_check_nil(_args_foron_fn_chpl2, INT64(298), INT32(31));
    (_args_foron_fn_chpl2)->_2_value = UINT8(false);
    _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
    /*** wrapon_fn_chpl3 ***/ chpl_executeOnFast(call_tmp_chpl41, INT32(4), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn_chpl3_object), INT64(285), INT32(14));
  }
  chpl_rmem_consist_maybe_acquire4();
  chpl_rmem_consist_maybe_acquire4();
  chpl_gen_comm_put(((void*)(&cnt_chpl)), chpl_nodeFromLocaleID((count_chpl).locale, INT64(0), INT32(0)), (count_chpl).addr, sizeof(int64_t), COMMID(24), INT64(299), INT64(31));
  return;
}

/* ChapelDistribution.chpl:310 */
static void wrapon_fn_chpl64(_class_localson_fn_chpl64 c_chpl) {
  chpl____wide_BaseDom _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr _2_x_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(310), INT32(31));
  chpl_check_nil(c_chpl, INT64(310), INT32(31));
  _1_this_chpl = (c_chpl)->_1_this;
  chpl_check_nil(c_chpl, INT64(310), INT32(31));
  _2_x_chpl = (c_chpl)->_2_x;
  chpl_taskRunningCntInc(INT64(310), INT32(31));
  on_fn_chpl64(_1_this_chpl, _2_x_chpl);
  chpl_taskRunningCntDec(INT64(310), INT32(31));
  chpl_rmem_consist_release(INT64(310), INT32(31));
  return;
}

/* ChapelDistribution.chpl:310 */
static void on_fn_chpl64(chpl____wide_BaseDom this_chpl7,
                         chpl____wide_BaseArr x_chpl2) {
  chpl____wide__ref_chpl_LocalSpinlock call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl68 _args_foron_fn_chpl = NULL;
  chpl____wide__ref_chpl_LocalSpinlock tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_int64_t call_tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl16;
  chpl____wide_BaseArr coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl18;
  chpl____wide_BaseArr coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_LocalSpinlock call_tmp_chpl39 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicBool call_tmp_chpl40 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl41;
  chpl_bool isdirect_chpl2;
  _class_localson_fn_chpl3 _args_foron_fn_chpl2 = NULL;
  chpl____wide__ref_AtomicBool tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  chpl____wide__ref_chpl_LocalSpinlock chpl_macro_tmp_1610;
  chpl__class_localson_fn_chpl68_object chpl_macro_tmp_1611;
  chpl____wide__ref_int64_t chpl_macro_tmp_1612;
  int64_t chpl_macro_tmp_1613;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1614;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_1615;
  chpl____wide_object chpl_macro_tmp_1616;
  chpl____wide__nilType chpl_macro_tmp_1617;
  chpl____wide_object chpl_macro_tmp_1618;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_1619;
  chpl____wide_object chpl_macro_tmp_1620;
  chpl____wide__nilType chpl_macro_tmp_1621;
  chpl____wide_object chpl_macro_tmp_1622;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_1623;
  chpl____wide_object chpl_macro_tmp_1624;
  chpl____wide__nilType chpl_macro_tmp_1625;
  chpl____wide_object chpl_macro_tmp_1626;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_1627;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_1628;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_1629;
  chpl____wide__ref_chpl_LocalSpinlock chpl_macro_tmp_1630;
  chpl____wide__ref_AtomicBool chpl_macro_tmp_1631;
  chpl__class_localson_fn_chpl3_object chpl_macro_tmp_1632;
  chpl_check_nil((&this_chpl7)->addr, INT64(312), INT32(31));
  chpl_macro_tmp_1610.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1610.addr = &(((&this_chpl7)->addr)->_arrsLock);
  call_tmp_chpl36 = chpl_macro_tmp_1610;
  call_tmp_chpl37 = (&call_tmp_chpl36)->locale;
  chpl_rmem_consist_release(INT64(312), INT32(31));
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
  if (isdirect_chpl) {
    on_fn_chpl68(call_tmp_chpl36);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl68)(&chpl_macro_tmp_1611));
    chpl_check_nil(_args_foron_fn_chpl, INT64(312), INT32(31));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
    tmp_chpl15 = call_tmp_chpl36;
    chpl_check_nil(_args_foron_fn_chpl, INT64(312), INT32(31));
    (_args_foron_fn_chpl)->_1_this = tmp_chpl15;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl68_object);
    chpl_taskRunningCntDec(INT64(312), INT32(31));
    /*** wrapon_fn_chpl68 ***/ chpl_executeOn(call_tmp_chpl37, INT32(77), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(43), INT32(45));
    chpl_taskRunningCntInc(INT64(312), INT32(31));
  }
  chpl_rmem_consist_acquire(INT64(312), INT32(31));
  chpl_check_nil((&this_chpl7)->addr, INT64(313), INT32(31));
  chpl_macro_tmp_1612.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1612.addr = &(((&this_chpl7)->addr)->_arrs_containing_dom);
  call_tmp_chpl38 = chpl_macro_tmp_1612;
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1613)), chpl_nodeFromLocaleID((call_tmp_chpl38).locale, INT64(0), INT32(0)), (call_tmp_chpl38).addr, sizeof(int64_t), COMMID(25), INT64(313), INT64(31));
  chpl_macro_tmp_1613 += INT64(1);
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_1613)), chpl_nodeFromLocaleID((call_tmp_chpl38).locale, INT64(0), INT32(0)), (call_tmp_chpl38).addr, sizeof(int64_t), COMMID(26), INT64(313), INT64(31));
  chpl_check_nil((&this_chpl7)->addr, INT64(314), INT32(31));
  chpl_macro_tmp_1614.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1614.addr = &(((&this_chpl7)->addr)->definedConst);
  chpl_gen_comm_get(((void*)(&tmp_chpl16)), chpl_nodeFromLocaleID((chpl_macro_tmp_1614).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1614).addr, sizeof(chpl_bool), COMMID(27), INT64(314), INT64(31));
  if (! tmp_chpl16) {
    coerce_tmp_chpl3 = x_chpl2;
    chpl_check_nil((&coerce_tmp_chpl3)->addr, INT64(315), INT32(31));
    chpl_macro_tmp_1615.locale = (&coerce_tmp_chpl3)->locale;
    chpl_macro_tmp_1615.addr = &(((&coerce_tmp_chpl3)->addr)->prev);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID((chpl_macro_tmp_1615).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1615).addr, sizeof(chpl____wide_BaseArr), COMMID(28), INT64(315), INT64(31));
    chpl_macro_tmp_1616.locale = (&coerce_tmp_chpl4)->locale;
    chpl_macro_tmp_1616.addr = ((object_chpl)((&coerce_tmp_chpl4)->addr));
    coerce_tmp_chpl5 = chpl_macro_tmp_1616;
    chpl_macro_tmp_1617.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1617.addr = nil;
    chpl_macro_tmp_1618.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1618.addr = NULL;
    tmp_chpl17 = chpl_macro_tmp_1618;
    if (! (((&coerce_tmp_chpl5)->addr != (&tmp_chpl17)->addr) || ((!(! (&coerce_tmp_chpl5)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl5)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl17)->locale, INT64(0), INT32(0)))))) {
      coerce_tmp_chpl6 = x_chpl2;
      chpl_check_nil((&coerce_tmp_chpl6)->addr, INT64(315), INT32(31));
      chpl_macro_tmp_1619.locale = (&coerce_tmp_chpl6)->locale;
      chpl_macro_tmp_1619.addr = &(((&coerce_tmp_chpl6)->addr)->next);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl7)), chpl_nodeFromLocaleID((chpl_macro_tmp_1619).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1619).addr, sizeof(chpl____wide_BaseArr), COMMID(29), INT64(315), INT64(31));
      chpl_macro_tmp_1620.locale = (&coerce_tmp_chpl7)->locale;
      chpl_macro_tmp_1620.addr = ((object_chpl)((&coerce_tmp_chpl7)->addr));
      coerce_tmp_chpl8 = chpl_macro_tmp_1620;
      chpl_macro_tmp_1621.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1621.addr = nil;
      chpl_macro_tmp_1622.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1622.addr = NULL;
      tmp_chpl19 = chpl_macro_tmp_1622;
      tmp_chpl18 = (! (((&coerce_tmp_chpl8)->addr != (&tmp_chpl19)->addr) || ((!(! (&coerce_tmp_chpl8)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl8)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl19)->locale, INT64(0), INT32(0))))));
    } else {
      tmp_chpl18 = UINT8(false);
    }
    assert_chpl(tmp_chpl18, INT64(315), INT32(31));
    chpl_check_nil((&this_chpl7)->addr, INT64(316), INT32(31));
    chpl_macro_tmp_1623.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_1623.addr = &(((&this_chpl7)->addr)->_arrs_head);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl9)), chpl_nodeFromLocaleID((chpl_macro_tmp_1623).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1623).addr, sizeof(chpl____wide_BaseArr), COMMID(30), INT64(316), INT64(31));
    chpl_macro_tmp_1624.locale = (&coerce_tmp_chpl9)->locale;
    chpl_macro_tmp_1624.addr = ((object_chpl)((&coerce_tmp_chpl9)->addr));
    coerce_tmp_chpl10 = chpl_macro_tmp_1624;
    chpl_macro_tmp_1625.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1625.addr = nil;
    chpl_macro_tmp_1626.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1626.addr = NULL;
    tmp_chpl20 = chpl_macro_tmp_1626;
    if (((&coerce_tmp_chpl10)->addr != (&tmp_chpl20)->addr) || ((!(! (&coerce_tmp_chpl10)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl10)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl20)->locale, INT64(0), INT32(0))))) {
      coerce_tmp_chpl11 = x_chpl2;
      chpl_check_nil((&coerce_tmp_chpl11)->addr, INT64(317), INT32(31));
      chpl_macro_tmp_1627.locale = (&coerce_tmp_chpl11)->locale;
      chpl_macro_tmp_1627.addr = &(((&coerce_tmp_chpl11)->addr)->next);
      chpl_gen_comm_put(((void*)(&coerce_tmp_chpl9)), chpl_nodeFromLocaleID((chpl_macro_tmp_1627).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1627).addr, sizeof(chpl____wide_BaseArr), COMMID(31), INT64(317), INT64(31));
      coerce_tmp_chpl12 = coerce_tmp_chpl9;
      chpl_check_nil((&coerce_tmp_chpl12)->addr, INT64(318), INT32(31));
      chpl_macro_tmp_1628.locale = (&coerce_tmp_chpl12)->locale;
      chpl_macro_tmp_1628.addr = &(((&coerce_tmp_chpl12)->addr)->prev);
      chpl_gen_comm_put(((void*)(&x_chpl2)), chpl_nodeFromLocaleID((chpl_macro_tmp_1628).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1628).addr, sizeof(chpl____wide_BaseArr), COMMID(32), INT64(318), INT64(31));
    }
    chpl_check_nil((&this_chpl7)->addr, INT64(320), INT32(31));
    chpl_macro_tmp_1629.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_1629.addr = &(((&this_chpl7)->addr)->_arrs_head);
    chpl_gen_comm_put(((void*)(&x_chpl2)), chpl_nodeFromLocaleID((chpl_macro_tmp_1629).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1629).addr, sizeof(chpl____wide_BaseArr), COMMID(33), INT64(320), INT64(31));
  }
  chpl_check_nil((&this_chpl7)->addr, INT64(323), INT32(31));
  chpl_macro_tmp_1630.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1630.addr = &(((&this_chpl7)->addr)->_arrsLock);
  call_tmp_chpl39 = chpl_macro_tmp_1630;
  chpl_macro_tmp_1631.locale = (call_tmp_chpl39).locale;
  chpl_macro_tmp_1631.addr = &(((call_tmp_chpl39).addr)->l);
  call_tmp_chpl40 = chpl_macro_tmp_1631;
  chpl_rmem_consist_maybe_release2();
  chpl_rmem_consist_maybe_release2();
  call_tmp_chpl41 = (&call_tmp_chpl40)->locale;
  isdirect_chpl2 = chpl_doDirectExecuteOn(call_tmp_chpl41);
  if (isdirect_chpl2) {
    on_fn_chpl3(call_tmp_chpl40, UINT8(false));
  } else {
    _args_foron_fn_chpl2 = ((_class_localson_fn_chpl3)(&chpl_macro_tmp_1632));
    chpl_check_nil(_args_foron_fn_chpl2, INT64(323), INT32(31));
    (_args_foron_fn_chpl2)->_0_tmp = call_tmp_chpl41;
    tmp_chpl21 = call_tmp_chpl40;
    chpl_check_nil(_args_foron_fn_chpl2, INT64(323), INT32(31));
    (_args_foron_fn_chpl2)->_1_this = tmp_chpl21;
    chpl_check_nil(_args_foron_fn_chpl2, INT64(323), INT32(31));
    (_args_foron_fn_chpl2)->_2_value = UINT8(false);
    _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
    /*** wrapon_fn_chpl3 ***/ chpl_executeOnFast(call_tmp_chpl41, INT32(4), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn_chpl3_object), INT64(285), INT32(14));
  }
  chpl_rmem_consist_maybe_acquire4();
  chpl_rmem_consist_maybe_acquire4();
  return;
}

/* ChapelDistribution.chpl:362 */
static chpl_bool dsiLinksDistribution_chpl(chpl____wide_BaseDom this_chpl7) {
  return UINT8(true);
}

/* ChapelDistribution.chpl:365 */
static void dsiDestroyDom_chpl(chpl____wide_BaseDom this_chpl7) {
  return;
}

/* ChapelDistribution.chpl:414 */
static void init_chpl10(BaseRectangularDom_1_int64_t_F_chpl this_chpl7) {
  BaseDom_chpl super_tmp_chpl = NULL;
  BaseArr_chpl _arrs_head_chpl = NULL;
  chpl____wide_BaseArr tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_LocalSpinlock _arrsLock_chpl;
  chpl____wide_BaseArr chpl_macro_tmp_1633;
  chpl_check_nil(this_chpl7, INT64(414), INT32(31));
  super_tmp_chpl = &((this_chpl7)->super);
  chpl_check_nil(super_tmp_chpl, INT64(414), INT32(31));
  ((object_chpl)(&((super_tmp_chpl)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_object_chpl;
  _arrs_head_chpl = ((BaseArr_chpl)(nil));
  chpl_macro_tmp_1633.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1633.addr = _arrs_head_chpl;
  tmp_chpl15 = chpl_macro_tmp_1633;
  chpl_check_nil(super_tmp_chpl, INT64(414), INT32(31));
  (super_tmp_chpl)->_arrs_head = tmp_chpl15;
  chpl_check_nil(super_tmp_chpl, INT64(414), INT32(31));
  (super_tmp_chpl)->_arrs_containing_dom = INT64(0);
  init_chpl25(&_arrsLock_chpl);
  chpl_check_nil(super_tmp_chpl, INT64(414), INT32(31));
  (super_tmp_chpl)->_arrsLock = _arrsLock_chpl;
  chpl_check_nil(super_tmp_chpl, INT64(414), INT32(31));
  (super_tmp_chpl)->_free_when_no_arrs = UINT8(false);
  chpl_check_nil(super_tmp_chpl, INT64(414), INT32(31));
  (super_tmp_chpl)->pid = INT64(-1);
  chpl_check_nil(super_tmp_chpl, INT64(414), INT32(31));
  (super_tmp_chpl)->definedConst = UINT8(false);
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_BaseDom_chpl;
  ((object_chpl)(((BaseDom_chpl)(this_chpl7))))->chpl__cid = chpl__cid_BaseDom_chpl;
  ((object_chpl)(this_chpl7))->chpl__cid = chpl__cid_BaseRectangularDom_1_int64_t_F_chpl;
  return;
}

/* ChapelDistribution.chpl:426 */
static void deinit_chpl7(chpl____wide_BaseRectangularDom_1_int64_t_F this_chpl7) {
  chpl____wide_BaseDom _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom chpl_macro_tmp_1634;
  chpl_macro_tmp_1634.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1634.addr = ((BaseDom_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_1634;
  deinit_chpl6(_parent_destructor_tmp__chpl);
  return;
}

/* ChapelDistribution.chpl:768 */
static void deinit_chpl8(chpl____wide_BaseArr this_chpl7) {
  return;
}

/* ChapelDistribution.chpl:773 */
static chpl____wide_BaseDom dsiGetBaseDom_chpl(chpl____wide_BaseArr this_chpl7) {
  string_chpl local__str_literal_1152_chpl;
  chpl____wide_BaseDom ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDom_chpl tmp_chpl15 = NULL;
  chpl____wide_BaseDom chpl_macro_tmp_1635;
  local__str_literal_1152_chpl = _str_literal_1152_chpl /* "internal error: dsiGetBaseDom is not implemented" */;
  halt_chpl(&local__str_literal_1152_chpl, INT64(774), INT32(31));
  tmp_chpl15 = ((BaseDom_chpl)(nil));
  chpl_macro_tmp_1635.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1635.addr = tmp_chpl15;
  ret_chpl = chpl_macro_tmp_1635;
  return ret_chpl;
}

/* ChapelDistribution.chpl:787 */
static void remove_chpl3(chpl____wide_BaseArr this_chpl7,
                         _tuple_2_BaseArr_BaseDom_chpl * _retArg_chpl) {
  chpl____wide_BaseArr ret_arr_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom ret_dom_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDom_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_BaseDom call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t count_chpl;
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_int64_t tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl63 _args_foron_fn_chpl = NULL;
  _ref_int64_t_chpl tmp_chpl16 = NULL;
  chpl____wide__ref_int64_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  _tuple_2_BaseArr_BaseDom_chpl ret_tmp_chpl;
  chpl____wide_BaseDom chpl_macro_tmp_1636;
  chpl____wide__ref_int32_t chpl_macro_tmp_1637;
  int32_t chpl_macro_tmp_1638;
  chpl____wide__ref_int64_t chpl_macro_tmp_1639;
  chpl__class_localson_fn_chpl63_object chpl_macro_tmp_1640;
  chpl____wide__ref_int64_t chpl_macro_tmp_1641;
  ret_arr_chpl = this_chpl7;
  init_coerce_tmp_chpl3 = ((BaseDom_chpl)(nil));
  chpl_macro_tmp_1636.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1636.addr = init_coerce_tmp_chpl3;
  ret_dom_chpl = chpl_macro_tmp_1636;
  chpl_check_nil((&this_chpl7)->addr, INT64(792), INT32(31));
  chpl_macro_tmp_1637.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1637.addr = &(((object_chpl)((&this_chpl7)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1638)), chpl_nodeFromLocaleID((chpl_macro_tmp_1637).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1637).addr, sizeof(int32_t), COMMID(34), INT64(792), INT64(31));
  call_tmp_chpl36 = ((chpl____wide_BaseDom(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(6) * chpl_macro_tmp_1638) + INT64(3))])(this_chpl7);
  ret_chpl = this_chpl7;
  count_chpl = INT64(-1);
  call_tmp_chpl37 = (&call_tmp_chpl36)->locale;
  chpl_rmem_consist_release(INT64(795), INT32(31));
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
  if (isdirect_chpl) {
    chpl_macro_tmp_1639.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1639.addr = &count_chpl;
    tmp_chpl15 = chpl_macro_tmp_1639;
    on_fn_chpl63(call_tmp_chpl36, ret_chpl, tmp_chpl15);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl63)(&chpl_macro_tmp_1640));
    chpl_check_nil(_args_foron_fn_chpl, INT64(795), INT32(31));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
    chpl_check_nil(_args_foron_fn_chpl, INT64(795), INT32(31));
    (_args_foron_fn_chpl)->_1_this = call_tmp_chpl36;
    chpl_check_nil(_args_foron_fn_chpl, INT64(795), INT32(31));
    (_args_foron_fn_chpl)->_2_x = ret_chpl;
    tmp_chpl16 = &count_chpl;
    chpl_macro_tmp_1641.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1641.addr = tmp_chpl16;
    tmp_chpl17 = chpl_macro_tmp_1641;
    chpl_check_nil(_args_foron_fn_chpl, INT64(795), INT32(31));
    (_args_foron_fn_chpl)->_3_count = tmp_chpl17;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl63_object);
    chpl_taskRunningCntDec(INT64(795), INT32(31));
    /*** wrapon_fn_chpl63 ***/ chpl_executeOn(call_tmp_chpl37, INT32(70), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(285), INT32(31));
    chpl_taskRunningCntInc(INT64(795), INT32(31));
  }
  chpl_rmem_consist_acquire(INT64(795), INT32(31));
  if (count_chpl == INT64(0)) {
    ret_dom_chpl = call_tmp_chpl36;
  }
  (&ret_tmp_chpl)->x0 = ret_arr_chpl;
  (&ret_tmp_chpl)->x1 = ret_dom_chpl;
  *(_retArg_chpl) = ret_tmp_chpl;
  return;
}

/* ChapelDistribution.chpl:834 */
static void dsiDestroyArr_chpl(chpl____wide_BaseArr this_chpl7,
                               chpl_bool deinitElts_chpl) {
  string_chpl local__str_literal_1160_chpl;
  local__str_literal_1160_chpl = _str_literal_1160_chpl /* "dsiDestroyArr must be defined" */;
  halt_chpl(&local__str_literal_1160_chpl, INT64(835), INT32(31));
  return;
}

/* ChapelDistribution.chpl:914 */
static void decEltCountsIfNeeded_chpl(chpl____wide_BaseArr this_chpl7) {
  return;
}

/* ChapelDistribution.chpl:955 */
static void init_chpl11(BaseArrOverRectangularDom_1_int64_t_F_chpl this_chpl7,
                        BaseArr_chpl prev_chpl,
                        BaseArr_chpl next_chpl,
                        int64_t pid_chpl,
                        chpl_bool _decEltRefCounts_chpl,
                        chpl_ddataResizePolicy _resizePolicy_chpl) {
  BaseArr_chpl super_tmp_chpl = NULL;
  chpl____wide_BaseArr tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr chpl_macro_tmp_1642;
  chpl____wide_BaseArr chpl_macro_tmp_1643;
  chpl_check_nil(this_chpl7, INT64(955), INT32(31));
  super_tmp_chpl = &((this_chpl7)->super);
  chpl_check_nil(super_tmp_chpl, INT64(955), INT32(31));
  ((object_chpl)(&((super_tmp_chpl)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_object_chpl;
  chpl_macro_tmp_1642.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1642.addr = prev_chpl;
  tmp_chpl15 = chpl_macro_tmp_1642;
  chpl_check_nil(super_tmp_chpl, INT64(955), INT32(31));
  (super_tmp_chpl)->prev = tmp_chpl15;
  chpl_macro_tmp_1643.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1643.addr = next_chpl;
  tmp_chpl16 = chpl_macro_tmp_1643;
  chpl_check_nil(super_tmp_chpl, INT64(955), INT32(31));
  (super_tmp_chpl)->next = tmp_chpl16;
  chpl_check_nil(super_tmp_chpl, INT64(955), INT32(31));
  (super_tmp_chpl)->pid = pid_chpl;
  chpl_check_nil(super_tmp_chpl, INT64(955), INT32(31));
  (super_tmp_chpl)->_decEltRefCounts = _decEltRefCounts_chpl;
  chpl_check_nil(super_tmp_chpl, INT64(955), INT32(31));
  (super_tmp_chpl)->_resizePolicy = _resizePolicy_chpl;
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_BaseArr_chpl;
  ((object_chpl)(((BaseArr_chpl)(this_chpl7))))->chpl__cid = chpl__cid_BaseArr_chpl;
  ((object_chpl)(this_chpl7))->chpl__cid = chpl__cid_BaseArrOverRectangularDom_1_int64_t_F_chpl;
  return;
}

/* ChapelDistribution.chpl:964 */
static void dsiReallocate_chpl(chpl____wide_BaseArrOverRectangularDom_1_int64_t_F this_chpl7,
                               chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F bounds_chpl) {
  string_chpl local__str_literal_1161_chpl;
  local__str_literal_1161_chpl = _str_literal_1161_chpl /* "reallocating not supported for this array type" */;
  halt_chpl(&local__str_literal_1161_chpl, INT64(965), INT32(31));
  return;
}

/* ChapelDistribution.chpl:968 */
static void dsiPostReallocate_chpl(chpl____wide_BaseArrOverRectangularDom_1_int64_t_F this_chpl7) {
  return;
}

/* ChapelDistribution.chpl:971 */
static void deinit_chpl9(chpl____wide_BaseArrOverRectangularDom_1_int64_t_F this_chpl7) {
  chpl____wide_BaseArr _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr chpl_macro_tmp_1644;
  chpl_macro_tmp_1644.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1644.addr = ((BaseArr_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_1644;
  deinit_chpl8(_parent_destructor_tmp__chpl);
  return;
}

/* ChapelDistribution.chpl:979 */
static void init_chpl12(BaseRectangularArr_1_int64_t_F_locale_chpl this_chpl7,
                        BaseArr_chpl prev_chpl,
                        BaseArr_chpl next_chpl,
                        int64_t pid_chpl,
                        chpl_bool _decEltRefCounts_chpl,
                        chpl_ddataResizePolicy _resizePolicy_chpl) {
  BaseArrOverRectangularDom_1_int64_t_F_chpl super_tmp_chpl = NULL;
  chpl_check_nil(this_chpl7, INT64(979), INT32(31));
  super_tmp_chpl = &((this_chpl7)->super);
  chpl_check_nil(super_tmp_chpl, INT64(979), INT32(31));
  init_chpl11(super_tmp_chpl, prev_chpl, next_chpl, pid_chpl, _decEltRefCounts_chpl, _resizePolicy_chpl);
  ((object_chpl)(((BaseArrOverRectangularDom_1_int64_t_F_chpl)(this_chpl7))))->chpl__cid = chpl__cid_BaseArrOverRectangularDom_1_int64_t_F_chpl;
  ((object_chpl)(this_chpl7))->chpl__cid = chpl__cid_BaseRectangularArr_1_int64_t_F_locale_chpl;
  return;
}

/* ChapelDistribution.chpl:979 */
static void init_chpl13(BaseRectangularArr_1_int64_t_F_int64_t_chpl this_chpl7,
                        BaseArr_chpl prev_chpl,
                        BaseArr_chpl next_chpl,
                        int64_t pid_chpl,
                        chpl_bool _decEltRefCounts_chpl,
                        chpl_ddataResizePolicy _resizePolicy_chpl) {
  BaseArrOverRectangularDom_1_int64_t_F_chpl super_tmp_chpl = NULL;
  chpl_check_nil(this_chpl7, INT64(979), INT32(31));
  super_tmp_chpl = &((this_chpl7)->super);
  chpl_check_nil(super_tmp_chpl, INT64(979), INT32(31));
  init_chpl11(super_tmp_chpl, prev_chpl, next_chpl, pid_chpl, _decEltRefCounts_chpl, _resizePolicy_chpl);
  ((object_chpl)(((BaseArrOverRectangularDom_1_int64_t_F_chpl)(this_chpl7))))->chpl__cid = chpl__cid_BaseArrOverRectangularDom_1_int64_t_F_chpl;
  ((object_chpl)(this_chpl7))->chpl__cid = chpl__cid_BaseRectangularArr_1_int64_t_F_int64_t_chpl;
  return;
}

/* ChapelDistribution.chpl:979 */
static void init_chpl14(BaseRectangularArr_1_int64_t_F_uint64_t_chpl this_chpl7,
                        BaseArr_chpl prev_chpl,
                        BaseArr_chpl next_chpl,
                        int64_t pid_chpl,
                        chpl_bool _decEltRefCounts_chpl,
                        chpl_ddataResizePolicy _resizePolicy_chpl) {
  BaseArrOverRectangularDom_1_int64_t_F_chpl super_tmp_chpl = NULL;
  chpl_check_nil(this_chpl7, INT64(979), INT32(31));
  super_tmp_chpl = &((this_chpl7)->super);
  chpl_check_nil(super_tmp_chpl, INT64(979), INT32(31));
  init_chpl11(super_tmp_chpl, prev_chpl, next_chpl, pid_chpl, _decEltRefCounts_chpl, _resizePolicy_chpl);
  ((object_chpl)(((BaseArrOverRectangularDom_1_int64_t_F_chpl)(this_chpl7))))->chpl__cid = chpl__cid_BaseArrOverRectangularDom_1_int64_t_F_chpl;
  ((object_chpl)(this_chpl7))->chpl__cid = chpl__cid_BaseRectangularArr_1_int64_t_F_uint64_t_chpl;
  return;
}

/* ChapelDistribution.chpl:983 */
static void deinit_chpl12(chpl____wide_BaseRectangularArr_1_int64_t_F_locale this_chpl7) {
  chpl____wide_BaseArrOverRectangularDom_1_int64_t_F _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArrOverRectangularDom_1_int64_t_F chpl_macro_tmp_1645;
  chpl_macro_tmp_1645.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1645.addr = ((BaseArrOverRectangularDom_1_int64_t_F_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_1645;
  deinit_chpl9(_parent_destructor_tmp__chpl);
  return;
}

/* ChapelDistribution.chpl:983 */
static void deinit_chpl11(chpl____wide_BaseRectangularArr_1_int64_t_F_int64_t this_chpl7) {
  chpl____wide_BaseArrOverRectangularDom_1_int64_t_F _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArrOverRectangularDom_1_int64_t_F chpl_macro_tmp_1646;
  chpl_macro_tmp_1646.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1646.addr = ((BaseArrOverRectangularDom_1_int64_t_F_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_1646;
  deinit_chpl9(_parent_destructor_tmp__chpl);
  return;
}

/* ChapelDistribution.chpl:983 */
static void deinit_chpl10(chpl____wide_BaseRectangularArr_1_int64_t_F_uint64_t this_chpl7) {
  chpl____wide_BaseArrOverRectangularDom_1_int64_t_F _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArrOverRectangularDom_1_int64_t_F chpl_macro_tmp_1647;
  chpl_macro_tmp_1647.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1647.addr = ((BaseArrOverRectangularDom_1_int64_t_F_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_1647;
  deinit_chpl9(_parent_destructor_tmp__chpl);
  return;
}

/* ChapelDistribution.chpl:1003 */
static void decEltCountsIfNeeded_chpl3(chpl____wide_BaseRectangularArr_1_int64_t_F_locale this_chpl7) {
  chpl____wide_BaseArr coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl15;
  chpl____wide_BaseArr coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr chpl_macro_tmp_1648;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1649;
  chpl____wide_BaseArr chpl_macro_tmp_1650;
  chpl_macro_tmp_1648.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1648.addr = ((BaseArr_chpl)((&this_chpl7)->addr));
  coerce_tmp_chpl3 = chpl_macro_tmp_1648;
  chpl_check_nil((&coerce_tmp_chpl3)->addr, INT64(1004), INT32(31));
  chpl_macro_tmp_1649.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_1649.addr = &(((&coerce_tmp_chpl3)->addr)->_decEltRefCounts);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1649).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1649).addr, sizeof(chpl_bool), COMMID(35), INT64(1004), INT64(31));
  if (tmp_chpl15) {
    chpl_macro_tmp_1650.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_1650.addr = ((BaseArr_chpl)((&this_chpl7)->addr));
    coerce_tmp_chpl4 = chpl_macro_tmp_1650;
    chpl_decRefCountsForDomainsInArrayEltTypes3(coerce_tmp_chpl4);
  }
  return;
}

/* ChapelDistribution.chpl:1003 */
static void decEltCountsIfNeeded_chpl2(chpl____wide_BaseRectangularArr_1_int64_t_F_uint64_t this_chpl7) {
  chpl____wide_BaseArr coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl15;
  chpl____wide_BaseArr coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr chpl_macro_tmp_1651;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1652;
  chpl____wide_BaseArr chpl_macro_tmp_1653;
  chpl_macro_tmp_1651.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1651.addr = ((BaseArr_chpl)((&this_chpl7)->addr));
  coerce_tmp_chpl3 = chpl_macro_tmp_1651;
  chpl_check_nil((&coerce_tmp_chpl3)->addr, INT64(1004), INT32(31));
  chpl_macro_tmp_1652.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_1652.addr = &(((&coerce_tmp_chpl3)->addr)->_decEltRefCounts);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1652).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1652).addr, sizeof(chpl_bool), COMMID(36), INT64(1004), INT64(31));
  if (tmp_chpl15) {
    chpl_macro_tmp_1653.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_1653.addr = ((BaseArr_chpl)((&this_chpl7)->addr));
    coerce_tmp_chpl4 = chpl_macro_tmp_1653;
    chpl_decRefCountsForDomainsInArrayEltTypes(coerce_tmp_chpl4);
  }
  return;
}

/* ChapelDistribution.chpl:1003 */
static void decEltCountsIfNeeded_chpl4(chpl____wide_BaseRectangularArr_1_int64_t_F_int64_t this_chpl7) {
  chpl____wide_BaseArr coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl15;
  chpl____wide_BaseArr coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr chpl_macro_tmp_1654;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1655;
  chpl____wide_BaseArr chpl_macro_tmp_1656;
  chpl_macro_tmp_1654.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1654.addr = ((BaseArr_chpl)((&this_chpl7)->addr));
  coerce_tmp_chpl3 = chpl_macro_tmp_1654;
  chpl_check_nil((&coerce_tmp_chpl3)->addr, INT64(1004), INT32(31));
  chpl_macro_tmp_1655.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_1655.addr = &(((&coerce_tmp_chpl3)->addr)->_decEltRefCounts);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1655).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1655).addr, sizeof(chpl_bool), COMMID(37), INT64(1004), INT64(31));
  if (tmp_chpl15) {
    chpl_macro_tmp_1656.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_1656.addr = ((BaseArr_chpl)((&this_chpl7)->addr));
    coerce_tmp_chpl4 = chpl_macro_tmp_1656;
    chpl_decRefCountsForDomainsInArrayEltTypes2(coerce_tmp_chpl4);
  }
  return;
}

/* ChapelDistribution.chpl:1124 */
static void _delete_dist_chpl(chpl____wide_BaseDist dist_chpl2,
                              chpl_bool privatized_chpl) {
  chpl____wide_BaseDist coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl15;
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t chpl_macro_tmp_1657;
  chpl____wide_object chpl_macro_tmp_1658;
  chpl_check_nil((&dist_chpl2)->addr, INT64(1125), INT32(31));
  dsiDestroyDist_chpl(dist_chpl2);
  if (privatized_chpl) {
    coerce_tmp_chpl3 = dist_chpl2;
    chpl_check_nil((&coerce_tmp_chpl3)->addr, INT64(1128), INT32(31));
    chpl_macro_tmp_1657.locale = (&coerce_tmp_chpl3)->locale;
    chpl_macro_tmp_1657.addr = &(((&coerce_tmp_chpl3)->addr)->pid);
    chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1657).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1657).addr, sizeof(int64_t), COMMID(38), INT64(1128), INT64(31));
    chpl_macro_tmp_1658.locale = (&dist_chpl2)->locale;
    chpl_macro_tmp_1658.addr = ((object_chpl)((&dist_chpl2)->addr));
    coerce_tmp_chpl4 = chpl_macro_tmp_1658;
    _freePrivatizedClass_chpl(tmp_chpl15, coerce_tmp_chpl4);
  }
  chpl__delete11(dist_chpl2);
  return;
}

/* ChapelDistribution.chpl:1134 */
static void _delete_dom_chpl2(chpl____wide_BaseDom dom_chpl,
                              chpl_bool privatized_chpl) {
  chpl____wide_BaseDom coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl15;
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t chpl_macro_tmp_1659;
  chpl____wide_object chpl_macro_tmp_1660;
  chpl_check_nil((&dom_chpl)->addr, INT64(1136), INT32(31));
  dsiDestroyDom_chpl(dom_chpl);
  if (privatized_chpl) {
    coerce_tmp_chpl3 = dom_chpl;
    chpl_check_nil((&coerce_tmp_chpl3)->addr, INT64(1139), INT32(31));
    chpl_macro_tmp_1659.locale = (&coerce_tmp_chpl3)->locale;
    chpl_macro_tmp_1659.addr = &(((&coerce_tmp_chpl3)->addr)->pid);
    chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1659).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1659).addr, sizeof(int64_t), COMMID(39), INT64(1139), INT64(31));
    chpl_macro_tmp_1660.locale = (&dom_chpl)->locale;
    chpl_macro_tmp_1660.addr = ((object_chpl)((&dom_chpl)->addr));
    coerce_tmp_chpl4 = chpl_macro_tmp_1660;
    _freePrivatizedClass_chpl(tmp_chpl15, coerce_tmp_chpl4);
  }
  chpl__delete10(dom_chpl);
  return;
}

/* ChapelDistribution.chpl:1134 */
static void _delete_dom_chpl(chpl____wide_DefaultRectangularDom_1_int64_t_F dom_chpl,
                             chpl_bool privatized_chpl) {
  chpl____wide_BaseDom coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl15;
  chpl____wide_object coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom chpl_macro_tmp_1661;
  chpl____wide_BaseDom chpl_macro_tmp_1662;
  chpl____wide__ref_int64_t chpl_macro_tmp_1663;
  chpl____wide_object chpl_macro_tmp_1664;
  chpl_macro_tmp_1661.locale = (&dom_chpl)->locale;
  chpl_macro_tmp_1661.addr = ((BaseDom_chpl)((&dom_chpl)->addr));
  coerce_tmp_chpl3 = chpl_macro_tmp_1661;
  chpl_check_nil((&coerce_tmp_chpl3)->addr, INT64(1136), INT32(31));
  dsiDestroyDom_chpl(coerce_tmp_chpl3);
  if (privatized_chpl) {
    chpl_macro_tmp_1662.locale = (&dom_chpl)->locale;
    chpl_macro_tmp_1662.addr = ((BaseDom_chpl)((&dom_chpl)->addr));
    coerce_tmp_chpl4 = chpl_macro_tmp_1662;
    chpl_check_nil((&coerce_tmp_chpl4)->addr, INT64(1139), INT32(31));
    chpl_macro_tmp_1663.locale = (&coerce_tmp_chpl4)->locale;
    chpl_macro_tmp_1663.addr = &(((&coerce_tmp_chpl4)->addr)->pid);
    chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1663).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1663).addr, sizeof(int64_t), COMMID(40), INT64(1139), INT64(31));
    chpl_macro_tmp_1664.locale = (&dom_chpl)->locale;
    chpl_macro_tmp_1664.addr = ((object_chpl)((&dom_chpl)->addr));
    coerce_tmp_chpl5 = chpl_macro_tmp_1664;
    _freePrivatizedClass_chpl(tmp_chpl15, coerce_tmp_chpl5);
  }
  chpl__delete35(dom_chpl);
  return;
}

/* ChapelDistribution.chpl:1145 */
static void _delete_arr_chpl(chpl____wide_BaseArr arr_chpl,
                             chpl_bool deinitElts_chpl) {
  chpl____wide_BaseArr coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int32_t chpl_macro_tmp_1665;
  int32_t chpl_macro_tmp_1666;
  chpl____wide__ref_int32_t chpl_macro_tmp_1667;
  int32_t chpl_macro_tmp_1668;
  chpl_check_nil((&arr_chpl)->addr, INT64(1148), INT32(31));
  chpl_macro_tmp_1665.locale = (&arr_chpl)->locale;
  chpl_macro_tmp_1665.addr = &(((object_chpl)((&arr_chpl)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1666)), chpl_nodeFromLocaleID((chpl_macro_tmp_1665).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1665).addr, sizeof(int32_t), COMMID(41), INT64(1148), INT64(31));
  ((void(*)(chpl____wide_BaseArr,
     chpl_bool))chpl_vmtable[((INT64(6) * chpl_macro_tmp_1666) + INT64(2))])(arr_chpl, deinitElts_chpl);
  coerce_tmp_chpl3 = arr_chpl;
  chpl_check_nil((&coerce_tmp_chpl3)->addr, INT64(1155), INT32(31));
  chpl_macro_tmp_1667.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_1667.addr = &(((object_chpl)((&coerce_tmp_chpl3)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1668)), chpl_nodeFromLocaleID((chpl_macro_tmp_1667).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1667).addr, sizeof(int32_t), COMMID(42), INT64(1155), INT64(31));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(6) * chpl_macro_tmp_1668) + INT64(1))])(coerce_tmp_chpl3);
  chpl__delete8(arr_chpl);
  return;
}

/* ChapelDistribution.chpl:1172 */
static void chpl_assignDomainWithGetSetIndices(DefaultRectangularDom_1_int64_t_F_chpl lhs_chpl,
                                               _domain_DefaultRectangularDom_1_int64_t_F_chpl * rhs_chpl) {
  string_chpl local__str_literal_75_chpl;
  BaseArrOverRectangularDom_1_int64_t_F_chpl arrType_chpl = NULL;
  int64_t idxType_chpl;
  BaseDom_chpl this_chpl7 = NULL;
  chpl____wide_BaseArr tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl16;
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr e_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  _serialized_domain_1_int64_t_F__tuple_1_star_range_int64_t_bounded_F_T_chpl rhs_data_chpl;
  BaseArrOverRectangularDom_1_int64_t_F_chpl rvfDerefTmp_chpl = NULL;
  chpl_bool isdirect_chpl;
  chpl____wide_BaseArrOverRectangularDom_1_int64_t_F tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl65 _args_foron_fn_chpl = NULL;
  chpl____wide_BaseArrOverRectangularDom_1_int64_t_F tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t_chpl tmp_chpl22 = NULL;
  chpl____wide__ref_int64_t tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_BaseArr call_tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl25 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl38;
  _tuple_1_star_range_int64_t_bounded_F_chpl ret_tmp_chpl;
  BaseDom_chpl this_chpl8 = NULL;
  chpl____wide_BaseArr tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl27;
  chpl____wide_object coerce_tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl28 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl29 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseArrOverRectangularDom_1_int64_t_F_chpl _formal_type_tmp__chpl = NULL;
  chpl____wide_BaseArrOverRectangularDom_1_int64_t_F ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl30 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArrOverRectangularDom_1_int64_t_F call_tmp_chpl39 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl31 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl40;
  chpl____wide_BaseArrOverRectangularDom_1_int64_t_F rvfDerefTmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl2;
  _class_localson_fn_chpl66 _args_foron_fn_chpl2 = NULL;
  c_void_ptr _args_vforon_fn_chpl2;
  int64_t _args_sizeon_fn_chpl2;
  chpl____wide_BaseArr call_tmp_chpl41 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl32 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl33 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object chpl_macro_tmp_1669;
  chpl____wide__nilType chpl_macro_tmp_1670;
  chpl____wide_object chpl_macro_tmp_1671;
  chpl____wide_object chpl_macro_tmp_1672;
  chpl____wide__nilType chpl_macro_tmp_1673;
  chpl____wide_object chpl_macro_tmp_1674;
  chpl____wide_BaseArrOverRectangularDom_1_int64_t_F chpl_macro_tmp_1675;
  chpl____wide__ref_int64_t chpl_macro_tmp_1676;
  chpl__class_localson_fn_chpl65_object chpl_macro_tmp_1677;
  chpl____wide_BaseArrOverRectangularDom_1_int64_t_F chpl_macro_tmp_1678;
  chpl____wide__ref_int64_t chpl_macro_tmp_1679;
  chpl____wide_object chpl_macro_tmp_1680;
  chpl____wide__nilType chpl_macro_tmp_1681;
  chpl____wide_object chpl_macro_tmp_1682;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_1683;
  chpl____wide_object chpl_macro_tmp_1684;
  chpl____wide__nilType chpl_macro_tmp_1685;
  chpl____wide_object chpl_macro_tmp_1686;
  chpl____wide_object chpl_macro_tmp_1687;
  chpl____wide__nilType chpl_macro_tmp_1688;
  chpl____wide_object chpl_macro_tmp_1689;
  chpl____wide_object chpl_macro_tmp_1690;
  chpl____wide__nilType chpl_macro_tmp_1691;
  chpl____wide_object chpl_macro_tmp_1692;
  chpl____wide_object chpl_macro_tmp_1693;
  chpl____wide__nilType chpl_macro_tmp_1694;
  chpl____wide_object chpl_macro_tmp_1695;
  chpl____wide_BaseArrOverRectangularDom_1_int64_t_F chpl_macro_tmp_1696;
  chpl____wide__ref_int32_t chpl_macro_tmp_1697;
  int32_t chpl_macro_tmp_1698;
  int32_t chpl_macro_tmp_1699;
  chpl____wide_BaseArrOverRectangularDom_1_int64_t_F chpl_macro_tmp_1700;
  chpl____wide_object chpl_macro_tmp_1701;
  chpl____wide__nilType chpl_macro_tmp_1702;
  chpl____wide_object chpl_macro_tmp_1703;
  chpl__class_localson_fn_chpl66_object chpl_macro_tmp_1704;
  chpl____wide_object chpl_macro_tmp_1705;
  chpl____wide__nilType chpl_macro_tmp_1706;
  chpl____wide_object chpl_macro_tmp_1707;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_1708;
  chpl____wide_object chpl_macro_tmp_1709;
  chpl____wide__nilType chpl_macro_tmp_1710;
  chpl____wide_object chpl_macro_tmp_1711;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  this_chpl7 = ((BaseDom_chpl)(lhs_chpl));
  chpl_check_nil(this_chpl7, INT64(1180), INT32(31));
  coerce_tmp_chpl3 = (this_chpl7)->_arrs_head;
  tmp_chpl15 = coerce_tmp_chpl3;
  chpl_macro_tmp_1669.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_1669.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_1669;
  chpl_macro_tmp_1670.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1670.addr = nil;
  chpl_macro_tmp_1671.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1671.addr = NULL;
  tmp_chpl17 = chpl_macro_tmp_1671;
  tmp_chpl16 = (((&coerce_tmp_chpl4)->addr != (&tmp_chpl17)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl17)->locale, INT64(0), INT32(0)))));
  while (tmp_chpl16) {
    chpl_macro_tmp_1672.locale = (&tmp_chpl15)->locale;
    chpl_macro_tmp_1672.addr = ((object_chpl)((&tmp_chpl15)->addr));
    coerce_tmp_chpl5 = chpl_macro_tmp_1672;
    chpl_macro_tmp_1673.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1673.addr = nil;
    chpl_macro_tmp_1674.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1674.addr = NULL;
    tmp_chpl18 = chpl_macro_tmp_1674;
    if (! (((&coerce_tmp_chpl5)->addr != (&tmp_chpl18)->addr) || ((!(! (&coerce_tmp_chpl5)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl5)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl18)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1180), INT32(31));
    }
    e_chpl = tmp_chpl15;
    call_tmp_chpl36 = (&e_chpl)->locale;
    chpl_rmem_consist_release(INT64(1181), INT32(31));
    chpl__serialize(rhs_chpl, &rhs_data_chpl);
    rvfDerefTmp_chpl = arrType_chpl;
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_1675.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1675.addr = rvfDerefTmp_chpl;
      tmp_chpl19 = chpl_macro_tmp_1675;
      chpl_macro_tmp_1676.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1676.addr = &idxType_chpl;
      tmp_chpl20 = chpl_macro_tmp_1676;
      on_fn_chpl65(&rhs_data_chpl, tmp_chpl19, tmp_chpl20, e_chpl);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl65)(&chpl_macro_tmp_1677));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1181), INT32(31));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1181), INT32(31));
      (_args_foron_fn_chpl)->_1_rhs_data = rhs_data_chpl;
      chpl_macro_tmp_1678.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1678.addr = rvfDerefTmp_chpl;
      tmp_chpl21 = chpl_macro_tmp_1678;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1181), INT32(31));
      (_args_foron_fn_chpl)->_2_rvfDerefTmp = tmp_chpl21;
      tmp_chpl22 = &idxType_chpl;
      chpl_macro_tmp_1679.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1679.addr = tmp_chpl22;
      tmp_chpl23 = chpl_macro_tmp_1679;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1181), INT32(31));
      (_args_foron_fn_chpl)->_3_idxType = tmp_chpl23;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1181), INT32(31));
      (_args_foron_fn_chpl)->_4_e = e_chpl;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl65_object);
      chpl_taskRunningCntDec(INT64(1181), INT32(31));
      /*** wrapon_fn_chpl65 ***/ chpl_executeOn(call_tmp_chpl36, INT32(72), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1181), INT32(31));
      chpl_taskRunningCntInc(INT64(1181), INT32(31));
    }
    chpl_rmem_consist_acquire(INT64(1181), INT32(31));
    chpl_macro_tmp_1680.locale = (&tmp_chpl15)->locale;
    chpl_macro_tmp_1680.addr = ((object_chpl)((&tmp_chpl15)->addr));
    coerce_tmp_chpl6 = chpl_macro_tmp_1680;
    chpl_macro_tmp_1681.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1681.addr = nil;
    chpl_macro_tmp_1682.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1682.addr = NULL;
    tmp_chpl24 = chpl_macro_tmp_1682;
    if (! (((&coerce_tmp_chpl6)->addr != (&tmp_chpl24)->addr) || ((!(! (&coerce_tmp_chpl6)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl6)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl24)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1180), INT32(31));
    }
    call_tmp_chpl37 = tmp_chpl15;
    chpl_check_nil((&call_tmp_chpl37)->addr, INT64(1180), INT32(31));
    chpl_macro_tmp_1683.locale = (&call_tmp_chpl37)->locale;
    chpl_macro_tmp_1683.addr = &(((&call_tmp_chpl37)->addr)->next);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl7)), chpl_nodeFromLocaleID((chpl_macro_tmp_1683).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1683).addr, sizeof(chpl____wide_BaseArr), COMMID(43), INT64(1180), INT64(31));
    tmp_chpl15 = coerce_tmp_chpl7;
    chpl_macro_tmp_1684.locale = (&coerce_tmp_chpl7)->locale;
    chpl_macro_tmp_1684.addr = ((object_chpl)((&coerce_tmp_chpl7)->addr));
    coerce_tmp_chpl8 = chpl_macro_tmp_1684;
    chpl_macro_tmp_1685.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1685.addr = nil;
    chpl_macro_tmp_1686.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1686.addr = NULL;
    tmp_chpl25 = chpl_macro_tmp_1686;
    tmp_chpl16 = (((&coerce_tmp_chpl8)->addr != (&tmp_chpl25)->addr) || ((!(! (&coerce_tmp_chpl8)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl8)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl25)->locale, INT64(0), INT32(0)))));
  }
  getIndices_chpl(rhs_chpl, &ret_tmp_chpl);
  *(call_tmp_chpl38 + INT64(0)) = *(ret_tmp_chpl + INT64(0));
  chpl_check_nil(lhs_chpl, INT64(1202), INT32(31));
  dsiSetIndices_chpl(lhs_chpl, &call_tmp_chpl38);
  this_chpl8 = ((BaseDom_chpl)(lhs_chpl));
  chpl_check_nil(this_chpl8, INT64(1203), INT32(31));
  coerce_tmp_chpl9 = (this_chpl8)->_arrs_head;
  tmp_chpl26 = coerce_tmp_chpl9;
  chpl_macro_tmp_1687.locale = (&coerce_tmp_chpl9)->locale;
  chpl_macro_tmp_1687.addr = ((object_chpl)((&coerce_tmp_chpl9)->addr));
  coerce_tmp_chpl10 = chpl_macro_tmp_1687;
  chpl_macro_tmp_1688.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1688.addr = nil;
  chpl_macro_tmp_1689.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1689.addr = NULL;
  tmp_chpl28 = chpl_macro_tmp_1689;
  tmp_chpl27 = (((&coerce_tmp_chpl10)->addr != (&tmp_chpl28)->addr) || ((!(! (&coerce_tmp_chpl10)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl10)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl28)->locale, INT64(0), INT32(0)))));
  while (tmp_chpl27) {
    chpl_macro_tmp_1690.locale = (&tmp_chpl26)->locale;
    chpl_macro_tmp_1690.addr = ((object_chpl)((&tmp_chpl26)->addr));
    coerce_tmp_chpl11 = chpl_macro_tmp_1690;
    chpl_macro_tmp_1691.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1691.addr = nil;
    chpl_macro_tmp_1692.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1692.addr = NULL;
    tmp_chpl29 = chpl_macro_tmp_1692;
    if (! (((&coerce_tmp_chpl11)->addr != (&tmp_chpl29)->addr) || ((!(! (&coerce_tmp_chpl11)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl11)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl29)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1203), INT32(31));
    }
    chpl_macro_tmp_1693.locale = (&tmp_chpl26)->locale;
    chpl_macro_tmp_1693.addr = ((object_chpl)((&tmp_chpl26)->addr));
    coerce_tmp_chpl12 = chpl_macro_tmp_1693;
    chpl_macro_tmp_1694.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1694.addr = nil;
    chpl_macro_tmp_1695.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1695.addr = NULL;
    tmp_chpl30 = chpl_macro_tmp_1695;
    if (! (((&coerce_tmp_chpl12)->addr != (&tmp_chpl30)->addr) || ((!(! (&coerce_tmp_chpl12)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl12)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl30)->locale, INT64(0), INT32(0)))))) {
      chpl_macro_tmp_1696.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1696.addr = ((BaseArrOverRectangularDom_1_int64_t_F_chpl)(nil));
      ret_chpl = chpl_macro_tmp_1696;
      goto _end__COLON__chpl;
    }
    chpl_macro_tmp_1697.locale = (tmp_chpl26).locale;
    chpl_macro_tmp_1697.addr = &(((object_chpl)((tmp_chpl26).addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1698)), chpl_nodeFromLocaleID((chpl_macro_tmp_1697).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1697).addr, sizeof(int32_t), COMMID(44), INT64(1204), INT64(31));
    chpl_macro_tmp_1699 = chpl_macro_tmp_1698;
    chpl_macro_tmp_1700.locale = (tmp_chpl26).locale;
    chpl_macro_tmp_1700.addr = ( (((chpl__cid_BaseArrOverRectangularDom_1_int64_t_F_chpl <= chpl_macro_tmp_1699) && (chpl_macro_tmp_1699 <= chpl_subclass_max_id[chpl__cid_BaseArrOverRectangularDom_1_int64_t_F_chpl])))?(((BaseArrOverRectangularDom_1_int64_t_F_chpl)((tmp_chpl26).addr))):(((BaseArrOverRectangularDom_1_int64_t_F_chpl)(NULL))) );
    call_tmp_chpl39 = chpl_macro_tmp_1700;
    ret_chpl = call_tmp_chpl39;
    _end__COLON__chpl:;
    chpl_macro_tmp_1701.locale = (&ret_chpl)->locale;
    chpl_macro_tmp_1701.addr = ((object_chpl)((&ret_chpl)->addr));
    coerce_tmp_chpl13 = chpl_macro_tmp_1701;
    chpl_macro_tmp_1702.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1702.addr = nil;
    chpl_macro_tmp_1703.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1703.addr = NULL;
    tmp_chpl31 = chpl_macro_tmp_1703;
    if (! (((&coerce_tmp_chpl13)->addr != (&tmp_chpl31)->addr) || ((!(! (&coerce_tmp_chpl13)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl13)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl31)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1205), INT32(31));
    }
    call_tmp_chpl40 = (&tmp_chpl26)->locale;
    chpl_rmem_consist_release(INT64(1206), INT32(31));
    rvfDerefTmp_chpl2 = ret_chpl;
    isdirect_chpl2 = chpl_doDirectExecuteOn(call_tmp_chpl40);
    if (isdirect_chpl2) {
      on_fn_chpl66(rvfDerefTmp_chpl2);
    } else {
      _args_foron_fn_chpl2 = ((_class_localson_fn_chpl66)(&chpl_macro_tmp_1704));
      chpl_check_nil(_args_foron_fn_chpl2, INT64(1206), INT32(31));
      (_args_foron_fn_chpl2)->_0_tmp = call_tmp_chpl40;
      chpl_check_nil(_args_foron_fn_chpl2, INT64(1206), INT32(31));
      (_args_foron_fn_chpl2)->_1_rvfDerefTmp = rvfDerefTmp_chpl2;
      _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
      _args_sizeon_fn_chpl2 = sizeof(chpl__class_localson_fn_chpl66_object);
      chpl_taskRunningCntDec(INT64(1206), INT32(31));
      /*** wrapon_fn_chpl66 ***/ chpl_executeOn(call_tmp_chpl40, INT32(73), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), _args_sizeon_fn_chpl2, INT64(1206), INT32(31));
      chpl_taskRunningCntInc(INT64(1206), INT32(31));
    }
    chpl_rmem_consist_acquire(INT64(1206), INT32(31));
    chpl_macro_tmp_1705.locale = (&tmp_chpl26)->locale;
    chpl_macro_tmp_1705.addr = ((object_chpl)((&tmp_chpl26)->addr));
    coerce_tmp_chpl14 = chpl_macro_tmp_1705;
    chpl_macro_tmp_1706.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1706.addr = nil;
    chpl_macro_tmp_1707.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1707.addr = NULL;
    tmp_chpl32 = chpl_macro_tmp_1707;
    if (! (((&coerce_tmp_chpl14)->addr != (&tmp_chpl32)->addr) || ((!(! (&coerce_tmp_chpl14)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl14)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl32)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1203), INT32(31));
    }
    call_tmp_chpl41 = tmp_chpl26;
    chpl_check_nil((&call_tmp_chpl41)->addr, INT64(1203), INT32(31));
    chpl_macro_tmp_1708.locale = (&call_tmp_chpl41)->locale;
    chpl_macro_tmp_1708.addr = &(((&call_tmp_chpl41)->addr)->next);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1708).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1708).addr, sizeof(chpl____wide_BaseArr), COMMID(45), INT64(1203), INT64(31));
    tmp_chpl26 = coerce_tmp_chpl15;
    chpl_macro_tmp_1709.locale = (&coerce_tmp_chpl15)->locale;
    chpl_macro_tmp_1709.addr = ((object_chpl)((&coerce_tmp_chpl15)->addr));
    coerce_tmp_chpl16 = chpl_macro_tmp_1709;
    chpl_macro_tmp_1710.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1710.addr = nil;
    chpl_macro_tmp_1711.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1711.addr = NULL;
    tmp_chpl33 = chpl_macro_tmp_1711;
    tmp_chpl27 = (((&coerce_tmp_chpl16)->addr != (&tmp_chpl33)->addr) || ((!(! (&coerce_tmp_chpl16)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl16)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl33)->locale, INT64(0), INT32(0)))));
  }
  return;
}

/* ChapelDistribution.chpl:1181 */
static void on_fn_chpl65(_serialized_domain_1_int64_t_F__tuple_1_star_range_int64_t_bounded_F_T_chpl * rhs_chpl,
                         chpl____wide_BaseArrOverRectangularDom_1_int64_t_F arrType_chpl,
                         chpl____wide__ref_int64_t idxType_chpl,
                         chpl____wide_BaseArr e_chpl) {
  string_chpl local__str_literal_75_chpl;
  string_chpl local__str_literal_3365_chpl;
  string_chpl local__str_literal_1183_chpl;
  string_chpl local__str_literal_3364_chpl;
  string_chpl local__str_literal_1182_chpl;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl rhs_chpl2;
  _ref__domain_DefaultRectangularDom_1_int64_t_F_chpl rhs_chpl3 = NULL;
  chpl___RuntimeTypeInfo ds_info_chpl;
  _ref__domain_DefaultRectangularDom_1_int64_t_F_chpl tmp_chpl15 = NULL;
  BaseArrOverRectangularDom_1_int64_t_F_chpl _formal_type_tmp__chpl = NULL;
  chpl____wide_BaseArrOverRectangularDom_1_int64_t_F ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArrOverRectangularDom_1_int64_t_F call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl37;
  _tuple_1_star_range_int64_t_bounded_F_chpl ret_tmp_chpl;
  range_int64_t_bounded_F_chpl inds_x0_chpl;
  _tuple_1_star_range_int64_t_bounded_F_chpl tmp_chpl19;
  _tuple_1_star_range_int64_t_bounded_F_chpl ret_tmp_chpl2;
  range_int64_t_bounded_F_chpl tup_x0_chpl;
  range_int64_t_bounded_F_chpl elt_x0_chpl;
  range_int64_t_bounded_F_chpl call_tmp_chpl38;
  range_int64_t_bounded_F_chpl ret_tmp_chpl3;
  _ref__tuple_1_star_range_int64_t_bounded_F_chpl tmp_chpl20 = NULL;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object chpl_macro_tmp_1712;
  chpl____wide__nilType chpl_macro_tmp_1713;
  chpl____wide_object chpl_macro_tmp_1714;
  chpl____wide_BaseArrOverRectangularDom_1_int64_t_F chpl_macro_tmp_1715;
  chpl____wide__ref_int32_t chpl_macro_tmp_1716;
  int32_t chpl_macro_tmp_1717;
  int32_t chpl_macro_tmp_1718;
  chpl____wide_BaseArrOverRectangularDom_1_int64_t_F chpl_macro_tmp_1719;
  chpl____wide_object chpl_macro_tmp_1720;
  chpl____wide__nilType chpl_macro_tmp_1721;
  chpl____wide_object chpl_macro_tmp_1722;
  chpl____wide_object chpl_macro_tmp_1723;
  chpl____wide__nilType chpl_macro_tmp_1724;
  chpl____wide_object chpl_macro_tmp_1725;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1726;
  chpl____wide__ref_int32_t chpl_macro_tmp_1727;
  int32_t chpl_macro_tmp_1728;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  local__str_literal_3365_chpl = _str_literal_3365_chpl /* "unmanaged BaseArrOverRectangularDom(1,int(64),false)" */;
  local__str_literal_1183_chpl = _str_literal_1183_chpl /* " contains an bad array type " */;
  local__str_literal_3364_chpl = _str_literal_3364_chpl /* "domain(1,int(64),false)" */;
  local__str_literal_1182_chpl = _str_literal_1182_chpl /* "internal error: " */;
  tmp_chpl15 = &rhs_chpl2;
  chpl__deserialize(&ds_info_chpl, rhs_chpl, tmp_chpl15);
  rhs_chpl3 = &rhs_chpl2;
  chpl_macro_tmp_1712.locale = (&e_chpl)->locale;
  chpl_macro_tmp_1712.addr = ((object_chpl)((&e_chpl)->addr));
  coerce_tmp_chpl3 = chpl_macro_tmp_1712;
  chpl_macro_tmp_1713.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1713.addr = nil;
  chpl_macro_tmp_1714.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1714.addr = NULL;
  tmp_chpl16 = chpl_macro_tmp_1714;
  if (! (((&coerce_tmp_chpl3)->addr != (&tmp_chpl16)->addr) || ((!(! (&coerce_tmp_chpl3)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl3)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl16)->locale, INT64(0), INT32(0)))))) {
    chpl_macro_tmp_1715.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1715.addr = ((BaseArrOverRectangularDom_1_int64_t_F_chpl)(nil));
    ret_chpl = chpl_macro_tmp_1715;
    goto _end__COLON__chpl;
  }
  chpl_macro_tmp_1716.locale = (e_chpl).locale;
  chpl_macro_tmp_1716.addr = &(((object_chpl)((e_chpl).addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1717)), chpl_nodeFromLocaleID((chpl_macro_tmp_1716).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1716).addr, sizeof(int32_t), COMMID(46), INT64(1182), INT64(31));
  chpl_macro_tmp_1718 = chpl_macro_tmp_1717;
  chpl_macro_tmp_1719.locale = (e_chpl).locale;
  chpl_macro_tmp_1719.addr = ( (((chpl__cid_BaseArrOverRectangularDom_1_int64_t_F_chpl <= chpl_macro_tmp_1718) && (chpl_macro_tmp_1718 <= chpl_subclass_max_id[chpl__cid_BaseArrOverRectangularDom_1_int64_t_F_chpl])))?(((BaseArrOverRectangularDom_1_int64_t_F_chpl)((e_chpl).addr))):(((BaseArrOverRectangularDom_1_int64_t_F_chpl)(NULL))) );
  call_tmp_chpl36 = chpl_macro_tmp_1719;
  ret_chpl = call_tmp_chpl36;
  _end__COLON__chpl:;
  chpl_macro_tmp_1720.locale = (&ret_chpl)->locale;
  chpl_macro_tmp_1720.addr = ((object_chpl)((&ret_chpl)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_1720;
  chpl_macro_tmp_1721.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1721.addr = nil;
  chpl_macro_tmp_1722.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1722.addr = NULL;
  tmp_chpl17 = chpl_macro_tmp_1722;
  if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl17)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl17)->locale, INT64(0), INT32(0)))))) {
    halt_chpl3(&local__str_literal_1182_chpl, &local__str_literal_3364_chpl, &local__str_literal_1183_chpl, &local__str_literal_3365_chpl, INT64(1184), INT32(31));
  }
  chpl_macro_tmp_1723.locale = (&ret_chpl)->locale;
  chpl_macro_tmp_1723.addr = ((object_chpl)((&ret_chpl)->addr));
  coerce_tmp_chpl5 = chpl_macro_tmp_1723;
  chpl_macro_tmp_1724.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1724.addr = nil;
  chpl_macro_tmp_1725.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1725.addr = NULL;
  tmp_chpl18 = chpl_macro_tmp_1725;
  if (! (((&coerce_tmp_chpl5)->addr != (&tmp_chpl18)->addr) || ((!(! (&coerce_tmp_chpl5)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl5)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl18)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1187), INT32(31));
  }
  getIndices_chpl(rhs_chpl3, &ret_tmp_chpl);
  *(call_tmp_chpl37 + INT64(0)) = *(ret_tmp_chpl + INT64(0));
  inds_x0_chpl = *(call_tmp_chpl37 + INT64(0));
  init_chpl32(&elt_x0_chpl);
  tup_x0_chpl = elt_x0_chpl;
  *(ret_tmp_chpl2 + INT64(0)) = tup_x0_chpl;
  *(tmp_chpl19 + INT64(0)) = *(ret_tmp_chpl2 + INT64(0));
  safeCast_chpl(inds_x0_chpl, &ret_tmp_chpl3);
  call_tmp_chpl38 = ret_tmp_chpl3;
  *(tmp_chpl19 + INT64(0)) = call_tmp_chpl38;
  chpl_check_nil((&ret_chpl)->addr, INT64(1199), INT32(31));
  tmp_chpl20 = &tmp_chpl19;
  chpl_macro_tmp_1726.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1726.addr = tmp_chpl20;
  tmp_chpl21 = chpl_macro_tmp_1726;
  chpl_macro_tmp_1727.locale = (&ret_chpl)->locale;
  chpl_macro_tmp_1727.addr = &(((object_chpl)((&ret_chpl)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1728)), chpl_nodeFromLocaleID((chpl_macro_tmp_1727).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1727).addr, sizeof(int32_t), COMMID(47), INT64(1199), INT64(31));
  ((void(*)(chpl____wide_BaseArrOverRectangularDom_1_int64_t_F,
     chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F))chpl_vmtable[((INT64(6) * chpl_macro_tmp_1728) + INT64(5))])(ret_chpl, tmp_chpl21);
  chpl__autoDestroy2(&rhs_chpl2);
  return;
}

/* ChapelDistribution.chpl:1181 */
static void wrapon_fn_chpl65(_class_localson_fn_chpl65 c_chpl) {
  _serialized_domain_1_int64_t_F__tuple_1_star_range_int64_t_bounded_F_T_chpl _1_rhs_data_chpl;
  _serialized_domain_1_int64_t_F__tuple_1_star_range_int64_t_bounded_F_T_chpl tmp_chpl15;
  chpl____wide_BaseArrOverRectangularDom_1_int64_t_F _2_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t _3_idxType_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr _4_e_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1181), INT32(31));
  chpl_check_nil(c_chpl, INT64(1181), INT32(31));
  tmp_chpl15 = (c_chpl)->_1_rhs_data;
  _1_rhs_data_chpl = tmp_chpl15;
  chpl_check_nil(c_chpl, INT64(1181), INT32(31));
  _2_rvfDerefTmp_chpl = (c_chpl)->_2_rvfDerefTmp;
  chpl_check_nil(c_chpl, INT64(1181), INT32(31));
  _3_idxType_chpl = (c_chpl)->_3_idxType;
  chpl_check_nil(c_chpl, INT64(1181), INT32(31));
  _4_e_chpl = (c_chpl)->_4_e;
  chpl_taskRunningCntInc(INT64(1181), INT32(31));
  on_fn_chpl65(&_1_rhs_data_chpl, _2_rvfDerefTmp_chpl, _3_idxType_chpl, _4_e_chpl);
  chpl_taskRunningCntDec(INT64(1181), INT32(31));
  chpl_rmem_consist_release(INT64(1181), INT32(31));
  return;
}

/* ChapelDistribution.chpl:1206 */
static void on_fn_chpl66(chpl____wide_BaseArrOverRectangularDom_1_int64_t_F eCast_chpl) {
  chpl____wide__ref_int32_t chpl_macro_tmp_1729;
  int32_t chpl_macro_tmp_1730;
  chpl_check_nil((&eCast_chpl)->addr, INT64(1206), INT32(31));
  chpl_macro_tmp_1729.locale = (&eCast_chpl)->locale;
  chpl_macro_tmp_1729.addr = &(((object_chpl)((&eCast_chpl)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1730)), chpl_nodeFromLocaleID((chpl_macro_tmp_1729).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1729).addr, sizeof(int32_t), COMMID(48), INT64(1206), INT64(31));
  ((void(*)(chpl____wide_BaseArrOverRectangularDom_1_int64_t_F))chpl_vmtable[((INT64(6) * chpl_macro_tmp_1730) + INT64(4))])(eCast_chpl);
  return;
}

/* ChapelDistribution.chpl:1206 */
static void wrapon_fn_chpl66(_class_localson_fn_chpl66 c_chpl) {
  chpl____wide_BaseArrOverRectangularDom_1_int64_t_F _1_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1206), INT32(31));
  chpl_check_nil(c_chpl, INT64(1206), INT32(31));
  _1_rvfDerefTmp_chpl = (c_chpl)->_1_rvfDerefTmp;
  chpl_taskRunningCntInc(INT64(1206), INT32(31));
  on_fn_chpl66(_1_rvfDerefTmp_chpl);
  chpl_taskRunningCntDec(INT64(1206), INT32(31));
  chpl_rmem_consist_release(INT64(1206), INT32(31));
  return;
}

