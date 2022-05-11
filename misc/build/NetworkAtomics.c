/* NetworkAtomics.chpl:22 */
static void chpl__init_NetworkAtomics(int64_t _ln_chpl,
                                      int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_NetworkAtomics_p) {
    goto _exit_chpl__init_NetworkAtomics_chpl;
  }
  printModuleInit_chpl("%*s\n", "NetworkAtomics", INT64(14));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_NetworkAtomics_p = UINT8(true);
  {
    chpl__init_MemConsistency(INT64(22), INT32(15));
    chpl__init_CTypes(INT64(22), INT32(15));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_NetworkAtomics_chpl:;
  return;
}

/* NetworkAtomics.chpl:144 */
static void init_chpl46(RAtomicT_int64_t_chpl * this_chpl7,
                        int64_t _v_chpl) {
  (this_chpl7)->_v = _v_chpl;
  return;
}

/* NetworkAtomics.chpl:323 */
static void on_fn_chpl73(chpl____wide__ref_RAtomicT_int64_t this_chpl7,
                         int64_t value_chpl) {
  chpl_bool tmp_chpl15;
  int64_t ret_chpl;
  int64_t ret_chpl2;
  chpl____wide__ref_int64_t call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t call_tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order ret_chpl3;
  int64_t ret_chpl4;
  int64_t ret_chpl5;
  chpl____wide__ref_int64_t call_tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t call_tmp_chpl39 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order ret_chpl6;
  memory_order ret_chpl7;
  chpl____wide__ref_int64_t chpl_macro_tmp_836;
  chpl____wide__ref_int64_t chpl_macro_tmp_837;
  chpl____wide__ref_int64_t chpl_macro_tmp_838;
  chpl____wide__ref_int64_t chpl_macro_tmp_839;
  chpl_rmem_consist_maybe_release5();
  ret_chpl2 = INT64(0);
  chpl_macro_tmp_836.locale = (this_chpl7).locale;
  chpl_macro_tmp_836.addr = &(((this_chpl7).addr)->_v);
  call_tmp_chpl36 = chpl_macro_tmp_836;
  chpl_macro_tmp_837.locale = (this_chpl7).locale;
  chpl_macro_tmp_837.addr = &(((this_chpl7).addr)->_v);
  call_tmp_chpl37 = chpl_macro_tmp_837;
  ret_chpl3 = memory_order_relaxed;
  chpl_comm_atomic_read_int64(&ret_chpl2, chpl_nodeFromLocaleID((&call_tmp_chpl36)->locale, INT64(0), INT32(0)), ((c_void_ptr)((&call_tmp_chpl37)->addr)), ret_chpl3, INT64(324), INT32(15));
  ret_chpl = ret_chpl2;
  tmp_chpl15 = (ret_chpl != value_chpl);
  while (tmp_chpl15) {
    chpl_task_yield();
    chpl_rmem_consist_maybe_release5();
    ret_chpl5 = INT64(0);
    chpl_macro_tmp_838.locale = (this_chpl7).locale;
    chpl_macro_tmp_838.addr = &(((this_chpl7).addr)->_v);
    call_tmp_chpl38 = chpl_macro_tmp_838;
    chpl_macro_tmp_839.locale = (this_chpl7).locale;
    chpl_macro_tmp_839.addr = &(((this_chpl7).addr)->_v);
    call_tmp_chpl39 = chpl_macro_tmp_839;
    ret_chpl6 = memory_order_relaxed;
    chpl_comm_atomic_read_int64(&ret_chpl5, chpl_nodeFromLocaleID((&call_tmp_chpl38)->locale, INT64(0), INT32(0)), ((c_void_ptr)((&call_tmp_chpl39)->addr)), ret_chpl6, INT64(324), INT32(15));
    ret_chpl4 = ret_chpl5;
    tmp_chpl15 = (ret_chpl4 != value_chpl);
  }
  ret_chpl7 = memory_order_acquire;
  chpl_atomic_thread_fence(ret_chpl7);
  return;
}

/* NetworkAtomics.chpl:323 */
static void wrapon_fn_chpl73(_class_localson_fn_chpl73 c_chpl) {
  chpl____wide__ref_RAtomicT_int64_t _1_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t _2_value_chpl;
  chpl_rmem_consist_acquire(INT64(323), INT32(15));
  chpl_check_nil(c_chpl, INT64(323), INT32(15));
  _1_this_chpl = (c_chpl)->_1_this;
  chpl_check_nil(c_chpl, INT64(323), INT32(15));
  _2_value_chpl = (c_chpl)->_2_value;
  chpl_taskRunningCntInc(INT64(323), INT32(15));
  on_fn_chpl73(_1_this_chpl, _2_value_chpl);
  chpl_taskRunningCntDec(INT64(323), INT32(15));
  chpl_rmem_consist_release(INT64(323), INT32(15));
  return;
}

