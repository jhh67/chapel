/* Atomics.chpl:126 */
static void chpl__init_Atomics(int64_t _ln_chpl,
                               int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_Atomics_p) {
    goto _exit_chpl__init_Atomics_chpl;
  }
  printModuleInit_chpl("%*s\n", "Atomics", INT64(7));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_Atomics_p = UINT8(true);
  {
    chpl__init_ChapelBase(INT64(126), INT32(14));
    chpl__init_MemConsistency(INT64(126), INT32(14));
    chpl__init_String(INT64(126), INT32(14));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_Atomics_chpl:;
  return;
}

/* Atomics.chpl:137 */
static void atomic_fence_chpl(memory_order order_chpl) {
  chpl_atomic_thread_fence(order_chpl);
  chpl_rmem_consist_fence(order_chpl, INT64(140), INT32(14));
  return;
}

/* Atomics.chpl:226 */
static void init_helper_chpl(AtomicBool_chpl * this_chpl7,
                             chpl_bool value_chpl) {
  _ref_atomic_bool_chpl call_tmp_chpl36 = NULL;
  call_tmp_chpl36 = &((this_chpl7)->_v);
  atomic_init_bool(call_tmp_chpl36, value_chpl);
  return;
}

/* Atomics.chpl:236 */
static void init_chpl(AtomicBool_chpl * this_chpl7) {
  atomic_bool _v_chpl;
  memset(&_v_chpl, INT32(0), sizeof(atomic_bool));
  (this_chpl7)->_v = _v_chpl;
  init_helper_chpl(this_chpl7, UINT8(false));
  return;
}

/* Atomics.chpl:255 */
static void deinit_chpl(chpl____wide__ref_AtomicBool this_chpl7) {
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl _args_foron_fn_chpl = NULL;
  chpl____wide__ref_AtomicBool tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl__class_localson_fn_chpl_object chpl_macro_tmp_797;
  call_tmp_chpl36 = (&this_chpl7)->locale;
  chpl_rmem_consist_release(INT64(261), INT32(14));
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
  if (isdirect_chpl) {
    on_fn_chpl(this_chpl7);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl)(&chpl_macro_tmp_797));
    chpl_check_nil(_args_foron_fn_chpl, INT64(261), INT32(14));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
    tmp_chpl15 = this_chpl7;
    chpl_check_nil(_args_foron_fn_chpl, INT64(261), INT32(14));
    (_args_foron_fn_chpl)->_1_this = tmp_chpl15;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl ***/ chpl_executeOnFast(call_tmp_chpl36, INT32(0), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl_object), INT64(261), INT32(14));
  }
  chpl_rmem_consist_acquire(INT64(261), INT32(14));
  return;
}

/* Atomics.chpl:261 */
static void on_fn_chpl(chpl____wide__ref_AtomicBool this_chpl7) {
  chpl____wide__ref_atomic_bool call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_bool_chpl tmp_chpl15 = NULL;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_798;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_799;
  chpl_macro_tmp_798.locale = (this_chpl7).locale;
  chpl_macro_tmp_798.addr = &(((this_chpl7).addr)->_v);
  call_tmp_chpl36 = chpl_macro_tmp_798;
  chpl_check_local(chpl_nodeFromLocaleID((&call_tmp_chpl36)->locale, INT64(0), INT32(0)), INT64(261), INT32(14), "references to remote data cannot be passed to external routines like 'atomic_destroy'");
  tmp_chpl15 = (&call_tmp_chpl36)->addr;
  atomic_destroy_bool(tmp_chpl15);
  chpl_macro_tmp_799.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_799.addr = tmp_chpl15;
  call_tmp_chpl36 = chpl_macro_tmp_799;
  return;
}

/* Atomics.chpl:261 */
static void wrapon_fn_chpl(_class_localson_fn_chpl c_chpl) {
  chpl____wide__ref_AtomicBool _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c_chpl, INT64(261), INT32(14));
  _1_this_chpl = (c_chpl)->_1_this;
  on_fn_chpl(_1_this_chpl);
  return;
}

/* Atomics.chpl:273 */
static void _local_on_fn_chpl(chpl____wide__ref_AtomicBool this_chpl7,
                              chpl____wide__ref_chpl_bool ret_chpl) {
  chpl____wide__ref_atomic_bool call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_AtomicBool_chpl local_this_chpl = NULL;
  memory_order ret_chpl2;
  chpl_bool call_tmp_chpl37;
  _ref_atomic_bool_chpl tmp_chpl15 = NULL;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_800;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_801;
  chpl_check_local(chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)), INT64(273), INT32(14), "cannot access remote data in local block");
  local_this_chpl = (&this_chpl7)->addr;
  chpl_macro_tmp_800.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_800.addr = &((local_this_chpl)->_v);
  call_tmp_chpl36 = chpl_macro_tmp_800;
  ret_chpl2 = memory_order_seq_cst;
  chpl_check_local(chpl_nodeFromLocaleID((&call_tmp_chpl36)->locale, INT64(0), INT32(0)), INT64(273), INT32(14), "references to remote data cannot be passed to external routines like 'atomic_load'");
  tmp_chpl15 = (&call_tmp_chpl36)->addr;
  call_tmp_chpl37 = atomic_load_explicit_bool(tmp_chpl15, ret_chpl2);
  chpl_macro_tmp_801.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_801.addr = tmp_chpl15;
  call_tmp_chpl36 = chpl_macro_tmp_801;
  chpl_gen_comm_put(((void*)(&call_tmp_chpl37)), chpl_nodeFromLocaleID((ret_chpl).locale, INT64(0), INT32(0)), (ret_chpl).addr, sizeof(chpl_bool), COMMID(0), INT64(273), INT64(14));
  return;
}

/* Atomics.chpl:273 */
static void on_fn_chpl2(chpl____wide__ref_AtomicBool this_chpl7,
                        chpl____wide__ref_chpl_bool ret_chpl) {
  chpl____wide__ref_atomic_bool call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order ret_chpl2;
  chpl_bool call_tmp_chpl37;
  _ref_atomic_bool_chpl tmp_chpl15 = NULL;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_802;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_803;
  chpl_macro_tmp_802.locale = (this_chpl7).locale;
  chpl_macro_tmp_802.addr = &(((this_chpl7).addr)->_v);
  call_tmp_chpl36 = chpl_macro_tmp_802;
  ret_chpl2 = memory_order_seq_cst;
  chpl_check_local(chpl_nodeFromLocaleID((&call_tmp_chpl36)->locale, INT64(0), INT32(0)), INT64(273), INT32(14), "references to remote data cannot be passed to external routines like 'atomic_load'");
  tmp_chpl15 = (&call_tmp_chpl36)->addr;
  call_tmp_chpl37 = atomic_load_explicit_bool(tmp_chpl15, ret_chpl2);
  chpl_macro_tmp_803.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_803.addr = tmp_chpl15;
  call_tmp_chpl36 = chpl_macro_tmp_803;
  chpl_gen_comm_put(((void*)(&call_tmp_chpl37)), chpl_nodeFromLocaleID((ret_chpl).locale, INT64(0), INT32(0)), (ret_chpl).addr, sizeof(chpl_bool), COMMID(1), INT64(273), INT64(14));
  return;
}

/* Atomics.chpl:273 */
static void wrapon_fn_chpl2(_class_localson_fn_chpl2 c_chpl) {
  chpl____wide__ref_AtomicBool _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_bool _2_ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(273), INT32(14));
  chpl_check_nil(c_chpl, INT64(273), INT32(14));
  _1_this_chpl = (c_chpl)->_1_this;
  chpl_check_nil(c_chpl, INT64(273), INT32(14));
  _2_ret_chpl = (c_chpl)->_2_ret;
  chpl_taskRunningCntInc(INT64(273), INT32(14));
  on_fn_chpl2(_1_this_chpl, _2_ret_chpl);
  chpl_taskRunningCntDec(INT64(273), INT32(14));
  chpl_rmem_consist_release(INT64(273), INT32(14));
  return;
}

/* Atomics.chpl:273 */
static void _local_wrapon_fn_chpl(_class_localson_fn_chpl2 c_chpl) {
  chpl____wide__ref_AtomicBool _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_bool _2_ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c_chpl, INT64(273), INT32(14));
  _1_this_chpl = (c_chpl)->_1_this;
  chpl_check_nil(c_chpl, INT64(273), INT32(14));
  _2_ret_chpl = (c_chpl)->_2_ret;
  _local_on_fn_chpl(_1_this_chpl, _2_ret_chpl);
  return;
}

/* Atomics.chpl:285 */
static void _local_on_fn_chpl2(chpl____wide__ref_AtomicBool this_chpl7,
                               chpl_bool value_chpl) {
  chpl____wide__ref_atomic_bool call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_AtomicBool_chpl local_this_chpl = NULL;
  memory_order ret_chpl;
  _ref_atomic_bool_chpl tmp_chpl15 = NULL;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_804;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_805;
  chpl_check_local(chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)), INT64(285), INT32(14), "cannot access remote data in local block");
  local_this_chpl = (&this_chpl7)->addr;
  chpl_macro_tmp_804.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_804.addr = &((local_this_chpl)->_v);
  call_tmp_chpl36 = chpl_macro_tmp_804;
  ret_chpl = memory_order_release;
  chpl_check_local(chpl_nodeFromLocaleID((&call_tmp_chpl36)->locale, INT64(0), INT32(0)), INT64(285), INT32(14), "references to remote data cannot be passed to external routines like 'atomic_store'");
  tmp_chpl15 = (&call_tmp_chpl36)->addr;
  atomic_store_explicit_bool(tmp_chpl15, value_chpl, ret_chpl);
  chpl_macro_tmp_805.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_805.addr = tmp_chpl15;
  call_tmp_chpl36 = chpl_macro_tmp_805;
  return;
}

/* Atomics.chpl:285 */
static void on_fn_chpl3(chpl____wide__ref_AtomicBool this_chpl7,
                        chpl_bool value_chpl) {
  chpl____wide__ref_atomic_bool call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order ret_chpl;
  _ref_atomic_bool_chpl tmp_chpl15 = NULL;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_806;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_807;
  chpl_macro_tmp_806.locale = (this_chpl7).locale;
  chpl_macro_tmp_806.addr = &(((this_chpl7).addr)->_v);
  call_tmp_chpl36 = chpl_macro_tmp_806;
  ret_chpl = memory_order_release;
  chpl_check_local(chpl_nodeFromLocaleID((&call_tmp_chpl36)->locale, INT64(0), INT32(0)), INT64(285), INT32(14), "references to remote data cannot be passed to external routines like 'atomic_store'");
  tmp_chpl15 = (&call_tmp_chpl36)->addr;
  atomic_store_explicit_bool(tmp_chpl15, value_chpl, ret_chpl);
  chpl_macro_tmp_807.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_807.addr = tmp_chpl15;
  call_tmp_chpl36 = chpl_macro_tmp_807;
  return;
}

/* Atomics.chpl:285 */
static void wrapon_fn_chpl3(_class_localson_fn_chpl3 c_chpl) {
  chpl____wide__ref_AtomicBool _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c_chpl, INT64(285), INT32(14));
  _1_this_chpl = (c_chpl)->_1_this;
  chpl_check_nil(c_chpl, INT64(285), INT32(14));
  on_fn_chpl3(_1_this_chpl, (c_chpl)->_2_value);
  return;
}

/* Atomics.chpl:285 */
static void _local_wrapon_fn_chpl2(_class_localson_fn_chpl3 c_chpl) {
  chpl____wide__ref_AtomicBool _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c_chpl, INT64(285), INT32(14));
  _1_this_chpl = (c_chpl)->_1_this;
  chpl_check_nil(c_chpl, INT64(285), INT32(14));
  _local_on_fn_chpl2(_1_this_chpl, (c_chpl)->_2_value);
  return;
}

/* Atomics.chpl:297 */
static void _local_on_fn_chpl3(chpl____wide__ref_AtomicBool this_chpl7,
                               chpl_bool value_chpl,
                               chpl____wide__ref_chpl_bool ret_chpl) {
  chpl____wide__ref_atomic_bool call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_AtomicBool_chpl local_this_chpl = NULL;
  memory_order ret_chpl2;
  chpl_bool call_tmp_chpl37;
  _ref_atomic_bool_chpl tmp_chpl15 = NULL;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_808;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_809;
  chpl_check_local(chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)), INT64(297), INT32(14), "cannot access remote data in local block");
  local_this_chpl = (&this_chpl7)->addr;
  chpl_macro_tmp_808.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_808.addr = &((local_this_chpl)->_v);
  call_tmp_chpl36 = chpl_macro_tmp_808;
  ret_chpl2 = memory_order_acquire;
  chpl_check_local(chpl_nodeFromLocaleID((&call_tmp_chpl36)->locale, INT64(0), INT32(0)), INT64(297), INT32(14), "references to remote data cannot be passed to external routines like 'atomic_exchange'");
  tmp_chpl15 = (&call_tmp_chpl36)->addr;
  call_tmp_chpl37 = atomic_exchange_explicit_bool(tmp_chpl15, value_chpl, ret_chpl2);
  chpl_macro_tmp_809.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_809.addr = tmp_chpl15;
  call_tmp_chpl36 = chpl_macro_tmp_809;
  chpl_gen_comm_put(((void*)(&call_tmp_chpl37)), chpl_nodeFromLocaleID((ret_chpl).locale, INT64(0), INT32(0)), (ret_chpl).addr, sizeof(chpl_bool), COMMID(2), INT64(297), INT64(14));
  return;
}

/* Atomics.chpl:297 */
static void on_fn_chpl4(chpl____wide__ref_AtomicBool this_chpl7,
                        chpl_bool value_chpl,
                        chpl____wide__ref_chpl_bool ret_chpl) {
  chpl____wide__ref_atomic_bool call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order ret_chpl2;
  chpl_bool call_tmp_chpl37;
  _ref_atomic_bool_chpl tmp_chpl15 = NULL;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_810;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_811;
  chpl_macro_tmp_810.locale = (this_chpl7).locale;
  chpl_macro_tmp_810.addr = &(((this_chpl7).addr)->_v);
  call_tmp_chpl36 = chpl_macro_tmp_810;
  ret_chpl2 = memory_order_acquire;
  chpl_check_local(chpl_nodeFromLocaleID((&call_tmp_chpl36)->locale, INT64(0), INT32(0)), INT64(297), INT32(14), "references to remote data cannot be passed to external routines like 'atomic_exchange'");
  tmp_chpl15 = (&call_tmp_chpl36)->addr;
  call_tmp_chpl37 = atomic_exchange_explicit_bool(tmp_chpl15, value_chpl, ret_chpl2);
  chpl_macro_tmp_811.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_811.addr = tmp_chpl15;
  call_tmp_chpl36 = chpl_macro_tmp_811;
  chpl_gen_comm_put(((void*)(&call_tmp_chpl37)), chpl_nodeFromLocaleID((ret_chpl).locale, INT64(0), INT32(0)), (ret_chpl).addr, sizeof(chpl_bool), COMMID(3), INT64(297), INT64(14));
  return;
}

/* Atomics.chpl:297 */
static void wrapon_fn_chpl4(_class_localson_fn_chpl4 c_chpl) {
  chpl____wide__ref_AtomicBool _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool _2_value_chpl;
  chpl____wide__ref_chpl_bool _3_ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(297), INT32(14));
  chpl_check_nil(c_chpl, INT64(297), INT32(14));
  _1_this_chpl = (c_chpl)->_1_this;
  chpl_check_nil(c_chpl, INT64(297), INT32(14));
  _2_value_chpl = (c_chpl)->_2_value;
  chpl_check_nil(c_chpl, INT64(297), INT32(14));
  _3_ret_chpl = (c_chpl)->_3_ret;
  chpl_taskRunningCntInc(INT64(297), INT32(14));
  on_fn_chpl4(_1_this_chpl, _2_value_chpl, _3_ret_chpl);
  chpl_taskRunningCntDec(INT64(297), INT32(14));
  chpl_rmem_consist_release(INT64(297), INT32(14));
  return;
}

/* Atomics.chpl:297 */
static void _local_wrapon_fn_chpl3(_class_localson_fn_chpl4 c_chpl) {
  chpl____wide__ref_AtomicBool _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool _2_value_chpl;
  chpl____wide__ref_chpl_bool _3_ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c_chpl, INT64(297), INT32(14));
  _1_this_chpl = (c_chpl)->_1_this;
  chpl_check_nil(c_chpl, INT64(297), INT32(14));
  _2_value_chpl = (c_chpl)->_2_value;
  chpl_check_nil(c_chpl, INT64(297), INT32(14));
  _3_ret_chpl = (c_chpl)->_3_ret;
  _local_on_fn_chpl3(_1_this_chpl, _2_value_chpl, _3_ret_chpl);
  return;
}

/* Atomics.chpl:417 */
static void init_helper_chpl2(chpl____wide__ref_AtomicT_int64_t this_chpl7,
                              int64_t value_chpl) {
  chpl____wide__ref_atomic_int_least64_t call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t_chpl tmp_chpl15 = NULL;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_812;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_813;
  chpl_macro_tmp_812.locale = (this_chpl7).locale;
  chpl_macro_tmp_812.addr = &(((this_chpl7).addr)->_v);
  call_tmp_chpl36 = chpl_macro_tmp_812;
  chpl_check_local(chpl_nodeFromLocaleID((&call_tmp_chpl36)->locale, INT64(0), INT32(0)), INT64(423), INT32(14), "references to remote data cannot be passed to external routines like 'atomic_init'");
  tmp_chpl15 = (&call_tmp_chpl36)->addr;
  atomic_init_int_least64_t(tmp_chpl15, value_chpl);
  chpl_macro_tmp_813.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_813.addr = tmp_chpl15;
  call_tmp_chpl36 = chpl_macro_tmp_813;
  return;
}

/* Atomics.chpl:427 */
static void init_chpl2(chpl____wide__ref_AtomicT_int64_t this_chpl7) {
  atomic_int_least64_t _v_chpl;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_814;
  memset(&_v_chpl, INT32(0), sizeof(atomic_int_least64_t));
  chpl_macro_tmp_814.locale = (this_chpl7).locale;
  chpl_macro_tmp_814.addr = &(((this_chpl7).addr)->_v);
  chpl_gen_comm_put(((void*)(&_v_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_814).locale, INT64(0), INT32(0)), (chpl_macro_tmp_814).addr, sizeof(atomic_int_least64_t), COMMID(4), INT64(429), INT64(14));
  init_helper_chpl2(this_chpl7, INT64(0));
  return;
}

/* Atomics.chpl:449 */
static void deinit_chpl2(chpl____wide__ref_AtomicT_int64_t this_chpl7) {
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl5 _args_foron_fn_chpl = NULL;
  chpl____wide__ref_AtomicT_int64_t tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl__class_localson_fn_chpl5_object chpl_macro_tmp_815;
  call_tmp_chpl36 = (&this_chpl7)->locale;
  chpl_rmem_consist_release(INT64(455), INT32(14));
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
  if (isdirect_chpl) {
    on_fn_chpl5(this_chpl7);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl5)(&chpl_macro_tmp_815));
    chpl_check_nil(_args_foron_fn_chpl, INT64(455), INT32(14));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
    tmp_chpl15 = this_chpl7;
    chpl_check_nil(_args_foron_fn_chpl, INT64(455), INT32(14));
    (_args_foron_fn_chpl)->_1_this = tmp_chpl15;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl5 ***/ chpl_executeOnFast(call_tmp_chpl36, INT32(7), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl5_object), INT64(455), INT32(14));
  }
  chpl_rmem_consist_acquire(INT64(455), INT32(14));
  return;
}

/* Atomics.chpl:455 */
static void on_fn_chpl5(chpl____wide__ref_AtomicT_int64_t this_chpl7) {
  chpl____wide__ref_atomic_int_least64_t call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t_chpl tmp_chpl15 = NULL;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_816;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_817;
  chpl_macro_tmp_816.locale = (this_chpl7).locale;
  chpl_macro_tmp_816.addr = &(((this_chpl7).addr)->_v);
  call_tmp_chpl36 = chpl_macro_tmp_816;
  chpl_check_local(chpl_nodeFromLocaleID((&call_tmp_chpl36)->locale, INT64(0), INT32(0)), INT64(455), INT32(14), "references to remote data cannot be passed to external routines like 'atomic_destroy'");
  tmp_chpl15 = (&call_tmp_chpl36)->addr;
  atomic_destroy_int_least64_t(tmp_chpl15);
  chpl_macro_tmp_817.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_817.addr = tmp_chpl15;
  call_tmp_chpl36 = chpl_macro_tmp_817;
  return;
}

/* Atomics.chpl:455 */
static void wrapon_fn_chpl5(_class_localson_fn_chpl5 c_chpl) {
  chpl____wide__ref_AtomicT_int64_t _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c_chpl, INT64(455), INT32(14));
  _1_this_chpl = (c_chpl)->_1_this;
  on_fn_chpl5(_1_this_chpl);
  return;
}

/* Atomics.chpl:467 */
static void on_fn_chpl6(chpl____wide__ref_AtomicT_int64_t this_chpl7,
                        chpl____wide__ref_int64_t ret_chpl) {
  chpl____wide__ref_atomic_int_least64_t call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order ret_chpl2;
  int64_t call_tmp_chpl37;
  _ref_atomic_int_least64_t_chpl tmp_chpl15 = NULL;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_818;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_819;
  chpl_macro_tmp_818.locale = (this_chpl7).locale;
  chpl_macro_tmp_818.addr = &(((this_chpl7).addr)->_v);
  call_tmp_chpl36 = chpl_macro_tmp_818;
  ret_chpl2 = memory_order_relaxed;
  chpl_check_local(chpl_nodeFromLocaleID((&call_tmp_chpl36)->locale, INT64(0), INT32(0)), INT64(467), INT32(14), "references to remote data cannot be passed to external routines like 'atomic_load'");
  tmp_chpl15 = (&call_tmp_chpl36)->addr;
  call_tmp_chpl37 = atomic_load_explicit_int_least64_t(tmp_chpl15, ret_chpl2);
  chpl_macro_tmp_819.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_819.addr = tmp_chpl15;
  call_tmp_chpl36 = chpl_macro_tmp_819;
  chpl_gen_comm_put(((void*)(&call_tmp_chpl37)), chpl_nodeFromLocaleID((ret_chpl).locale, INT64(0), INT32(0)), (ret_chpl).addr, sizeof(int64_t), COMMID(5), INT64(467), INT64(14));
  return;
}

/* Atomics.chpl:467 */
static void wrapon_fn_chpl6(_class_localson_fn_chpl6 c_chpl) {
  chpl____wide__ref_AtomicT_int64_t _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t _2_ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(467), INT32(14));
  chpl_check_nil(c_chpl, INT64(467), INT32(14));
  _1_this_chpl = (c_chpl)->_1_this;
  chpl_check_nil(c_chpl, INT64(467), INT32(14));
  _2_ret_chpl = (c_chpl)->_2_ret;
  chpl_taskRunningCntInc(INT64(467), INT32(14));
  on_fn_chpl6(_1_this_chpl, _2_ret_chpl);
  chpl_taskRunningCntDec(INT64(467), INT32(14));
  chpl_rmem_consist_release(INT64(467), INT32(14));
  return;
}

/* Atomics.chpl:479 */
static void on_fn_chpl7(chpl____wide__ref_AtomicT_int64_t this_chpl7,
                        int64_t value_chpl) {
  chpl____wide__ref_atomic_int_least64_t call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order ret_chpl;
  _ref_atomic_int_least64_t_chpl tmp_chpl15 = NULL;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_820;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_821;
  chpl_macro_tmp_820.locale = (this_chpl7).locale;
  chpl_macro_tmp_820.addr = &(((this_chpl7).addr)->_v);
  call_tmp_chpl36 = chpl_macro_tmp_820;
  ret_chpl = memory_order_relaxed;
  chpl_check_local(chpl_nodeFromLocaleID((&call_tmp_chpl36)->locale, INT64(0), INT32(0)), INT64(479), INT32(14), "references to remote data cannot be passed to external routines like 'atomic_store'");
  tmp_chpl15 = (&call_tmp_chpl36)->addr;
  atomic_store_explicit_int_least64_t(tmp_chpl15, value_chpl, ret_chpl);
  chpl_macro_tmp_821.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_821.addr = tmp_chpl15;
  call_tmp_chpl36 = chpl_macro_tmp_821;
  return;
}

/* Atomics.chpl:479 */
static void wrapon_fn_chpl7(_class_localson_fn_chpl7 c_chpl) {
  chpl____wide__ref_AtomicT_int64_t _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c_chpl, INT64(479), INT32(14));
  _1_this_chpl = (c_chpl)->_1_this;
  chpl_check_nil(c_chpl, INT64(479), INT32(14));
  on_fn_chpl7(_1_this_chpl, (c_chpl)->_2_value);
  return;
}

/* Atomics.chpl:585 */
static void on_fn_chpl9(chpl____wide__ref_AtomicT_int64_t this_chpl7,
                        int64_t value_chpl) {
  chpl____wide__ref_atomic_int_least64_t call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order ret_chpl;
  _ref_atomic_int_least64_t_chpl tmp_chpl15 = NULL;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_822;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_823;
  chpl_macro_tmp_822.locale = (this_chpl7).locale;
  chpl_macro_tmp_822.addr = &(((this_chpl7).addr)->_v);
  call_tmp_chpl36 = chpl_macro_tmp_822;
  ret_chpl = memory_order_relaxed;
  chpl_check_local(chpl_nodeFromLocaleID((&call_tmp_chpl36)->locale, INT64(0), INT32(0)), INT64(585), INT32(14), "references to remote data cannot be passed to external routines like 'atomic_fetch_add'");
  tmp_chpl15 = (&call_tmp_chpl36)->addr;
  atomic_fetch_add_explicit_int_least64_t(tmp_chpl15, value_chpl, ret_chpl);
  chpl_macro_tmp_823.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_823.addr = tmp_chpl15;
  call_tmp_chpl36 = chpl_macro_tmp_823;
  return;
}

/* Atomics.chpl:585 */
static void on_fn_chpl8(chpl____wide__ref_AtomicT_int64_t this_chpl7,
                        int64_t value_chpl) {
  chpl____wide__ref_atomic_int_least64_t call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order ret_chpl;
  _ref_atomic_int_least64_t_chpl tmp_chpl15 = NULL;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_824;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_825;
  chpl_macro_tmp_824.locale = (this_chpl7).locale;
  chpl_macro_tmp_824.addr = &(((this_chpl7).addr)->_v);
  call_tmp_chpl36 = chpl_macro_tmp_824;
  ret_chpl = memory_order_release;
  chpl_check_local(chpl_nodeFromLocaleID((&call_tmp_chpl36)->locale, INT64(0), INT32(0)), INT64(585), INT32(14), "references to remote data cannot be passed to external routines like 'atomic_fetch_add'");
  tmp_chpl15 = (&call_tmp_chpl36)->addr;
  atomic_fetch_add_explicit_int_least64_t(tmp_chpl15, value_chpl, ret_chpl);
  chpl_macro_tmp_825.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_825.addr = tmp_chpl15;
  call_tmp_chpl36 = chpl_macro_tmp_825;
  return;
}

/* Atomics.chpl:585 */
static void wrapon_fn_chpl8(_class_localson_fn_chpl8 c_chpl) {
  chpl____wide__ref_AtomicT_int64_t _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c_chpl, INT64(585), INT32(14));
  _1_this_chpl = (c_chpl)->_1_this;
  chpl_check_nil(c_chpl, INT64(585), INT32(14));
  on_fn_chpl8(_1_this_chpl, (c_chpl)->_2_value);
  return;
}

/* Atomics.chpl:585 */
static void wrapon_fn_chpl9(_class_localson_fn_chpl9 c_chpl) {
  chpl____wide__ref_AtomicT_int64_t _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c_chpl, INT64(585), INT32(14));
  _1_this_chpl = (c_chpl)->_1_this;
  chpl_check_nil(c_chpl, INT64(585), INT32(14));
  on_fn_chpl9(_1_this_chpl, (c_chpl)->_2_value);
  return;
}

/* Atomics.chpl:613 */
static void on_fn_chpl11(chpl____wide__ref_AtomicT_int64_t this_chpl7,
                         int64_t value_chpl) {
  chpl____wide__ref_atomic_int_least64_t call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order ret_chpl;
  _ref_atomic_int_least64_t_chpl tmp_chpl15 = NULL;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_826;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_827;
  chpl_macro_tmp_826.locale = (this_chpl7).locale;
  chpl_macro_tmp_826.addr = &(((this_chpl7).addr)->_v);
  call_tmp_chpl36 = chpl_macro_tmp_826;
  ret_chpl = memory_order_relaxed;
  chpl_check_local(chpl_nodeFromLocaleID((&call_tmp_chpl36)->locale, INT64(0), INT32(0)), INT64(613), INT32(14), "references to remote data cannot be passed to external routines like 'atomic_fetch_sub'");
  tmp_chpl15 = (&call_tmp_chpl36)->addr;
  atomic_fetch_sub_explicit_int_least64_t(tmp_chpl15, value_chpl, ret_chpl);
  chpl_macro_tmp_827.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_827.addr = tmp_chpl15;
  call_tmp_chpl36 = chpl_macro_tmp_827;
  return;
}

/* Atomics.chpl:613 */
static void on_fn_chpl10(chpl____wide__ref_AtomicT_int64_t this_chpl7,
                         int64_t value_chpl) {
  chpl____wide__ref_atomic_int_least64_t call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order ret_chpl;
  _ref_atomic_int_least64_t_chpl tmp_chpl15 = NULL;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_828;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_829;
  chpl_macro_tmp_828.locale = (this_chpl7).locale;
  chpl_macro_tmp_828.addr = &(((this_chpl7).addr)->_v);
  call_tmp_chpl36 = chpl_macro_tmp_828;
  ret_chpl = memory_order_release;
  chpl_check_local(chpl_nodeFromLocaleID((&call_tmp_chpl36)->locale, INT64(0), INT32(0)), INT64(613), INT32(14), "references to remote data cannot be passed to external routines like 'atomic_fetch_sub'");
  tmp_chpl15 = (&call_tmp_chpl36)->addr;
  atomic_fetch_sub_explicit_int_least64_t(tmp_chpl15, value_chpl, ret_chpl);
  chpl_macro_tmp_829.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_829.addr = tmp_chpl15;
  call_tmp_chpl36 = chpl_macro_tmp_829;
  return;
}

/* Atomics.chpl:613 */
static void wrapon_fn_chpl10(_class_localson_fn_chpl10 c_chpl) {
  chpl____wide__ref_AtomicT_int64_t _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c_chpl, INT64(613), INT32(14));
  _1_this_chpl = (c_chpl)->_1_this;
  chpl_check_nil(c_chpl, INT64(613), INT32(14));
  on_fn_chpl10(_1_this_chpl, (c_chpl)->_2_value);
  return;
}

/* Atomics.chpl:613 */
static void wrapon_fn_chpl11(_class_localson_fn_chpl11 c_chpl) {
  chpl____wide__ref_AtomicT_int64_t _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c_chpl, INT64(613), INT32(14));
  _1_this_chpl = (c_chpl)->_1_this;
  chpl_check_nil(c_chpl, INT64(613), INT32(14));
  on_fn_chpl11(_1_this_chpl, (c_chpl)->_2_value);
  return;
}

/* Atomics.chpl:723 */
static void wrapon_fn_chpl12(_class_localson_fn_chpl12 c_chpl) {
  chpl____wide__ref_AtomicT_int64_t _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t _2_value_chpl;
  chpl_rmem_consist_acquire(INT64(723), INT32(14));
  chpl_check_nil(c_chpl, INT64(723), INT32(14));
  _1_this_chpl = (c_chpl)->_1_this;
  chpl_check_nil(c_chpl, INT64(723), INT32(14));
  _2_value_chpl = (c_chpl)->_2_value;
  chpl_taskRunningCntInc(INT64(723), INT32(14));
  on_fn_chpl12(_1_this_chpl, _2_value_chpl);
  chpl_taskRunningCntDec(INT64(723), INT32(14));
  chpl_rmem_consist_release(INT64(723), INT32(14));
  return;
}

/* Atomics.chpl:723 */
static void on_fn_chpl12(chpl____wide__ref_AtomicT_int64_t this_chpl7,
                         int64_t value_chpl) {
  chpl_bool tmp_chpl15;
  int64_t ret_chpl;
  int64_t ret_chpl2;
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_int64_t tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl6 _args_foron_fn_chpl = NULL;
  chpl____wide__ref_AtomicT_int64_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t_chpl tmp_chpl18 = NULL;
  chpl____wide__ref_int64_t tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  int64_t ret_chpl3;
  int64_t ret_chpl4;
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl2;
  chpl____wide__ref_int64_t tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl6 _args_foron_fn_chpl2 = NULL;
  chpl____wide__ref_AtomicT_int64_t tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t_chpl tmp_chpl22 = NULL;
  chpl____wide__ref_int64_t tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  int64_t _args_sizeon_fn_chpl2;
  memory_order ret_chpl5;
  chpl____wide__ref_int64_t chpl_macro_tmp_830;
  chpl__class_localson_fn_chpl6_object chpl_macro_tmp_831;
  chpl____wide__ref_int64_t chpl_macro_tmp_832;
  chpl____wide__ref_int64_t chpl_macro_tmp_833;
  chpl__class_localson_fn_chpl6_object chpl_macro_tmp_834;
  chpl____wide__ref_int64_t chpl_macro_tmp_835;
  chpl_rmem_consist_maybe_release5();
  ret_chpl2 = INT64(0);
  call_tmp_chpl36 = (&this_chpl7)->locale;
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
  if (isdirect_chpl) {
    chpl_macro_tmp_830.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_830.addr = &ret_chpl2;
    tmp_chpl16 = chpl_macro_tmp_830;
    on_fn_chpl6(this_chpl7, tmp_chpl16);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl6)(&chpl_macro_tmp_831));
    chpl_check_nil(_args_foron_fn_chpl, INT64(724), INT32(14));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
    tmp_chpl17 = this_chpl7;
    chpl_check_nil(_args_foron_fn_chpl, INT64(724), INT32(14));
    (_args_foron_fn_chpl)->_1_this = tmp_chpl17;
    tmp_chpl18 = &ret_chpl2;
    chpl_macro_tmp_832.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_832.addr = tmp_chpl18;
    tmp_chpl19 = chpl_macro_tmp_832;
    chpl_check_nil(_args_foron_fn_chpl, INT64(724), INT32(14));
    (_args_foron_fn_chpl)->_2_ret = tmp_chpl19;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl6_object);
    chpl_taskRunningCntDec(INT64(724), INT32(14));
    /*** wrapon_fn_chpl6 ***/ chpl_executeOn(call_tmp_chpl36, INT32(8), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(467), INT32(14));
    chpl_taskRunningCntInc(INT64(724), INT32(14));
  }
  ret_chpl = ret_chpl2;
  tmp_chpl15 = (ret_chpl != value_chpl);
  while (tmp_chpl15) {
    chpl_task_yield();
    chpl_rmem_consist_maybe_release5();
    ret_chpl4 = INT64(0);
    call_tmp_chpl37 = (&this_chpl7)->locale;
    isdirect_chpl2 = chpl_doDirectExecuteOn(call_tmp_chpl37);
    if (isdirect_chpl2) {
      chpl_macro_tmp_833.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_833.addr = &ret_chpl4;
      tmp_chpl20 = chpl_macro_tmp_833;
      on_fn_chpl6(this_chpl7, tmp_chpl20);
    } else {
      _args_foron_fn_chpl2 = ((_class_localson_fn_chpl6)(&chpl_macro_tmp_834));
      chpl_check_nil(_args_foron_fn_chpl2, INT64(724), INT32(14));
      (_args_foron_fn_chpl2)->_0_tmp = call_tmp_chpl37;
      tmp_chpl21 = this_chpl7;
      chpl_check_nil(_args_foron_fn_chpl2, INT64(724), INT32(14));
      (_args_foron_fn_chpl2)->_1_this = tmp_chpl21;
      tmp_chpl22 = &ret_chpl4;
      chpl_macro_tmp_835.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_835.addr = tmp_chpl22;
      tmp_chpl23 = chpl_macro_tmp_835;
      chpl_check_nil(_args_foron_fn_chpl2, INT64(724), INT32(14));
      (_args_foron_fn_chpl2)->_2_ret = tmp_chpl23;
      _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
      _args_sizeon_fn_chpl2 = sizeof(chpl__class_localson_fn_chpl6_object);
      chpl_taskRunningCntDec(INT64(724), INT32(14));
      /*** wrapon_fn_chpl6 ***/ chpl_executeOn(call_tmp_chpl37, INT32(8), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), _args_sizeon_fn_chpl2, INT64(467), INT32(14));
      chpl_taskRunningCntInc(INT64(724), INT32(14));
    }
    ret_chpl3 = ret_chpl4;
    tmp_chpl15 = (ret_chpl3 != value_chpl);
  }
  ret_chpl5 = memory_order_acquire;
  chpl_atomic_thread_fence(ret_chpl5);
  return;
}

