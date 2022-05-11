/* MemConsistency.chpl:21 */
static void chpl__init_MemConsistency(int64_t _ln_chpl,
                                      int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_MemConsistency_p) {
    goto _exit_chpl__init_MemConsistency_chpl;
  }
  printModuleInit_chpl("%*s\n", "MemConsistency", INT64(14));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_MemConsistency_p = UINT8(true);
  {
    chpl__init_HaltWrappers(INT64(21), INT32(50));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_MemConsistency_chpl:;
  return;
}

/* MemConsistency.chpl:118 */
static void _local_chpl_rmem_consist_maybe_release_chpl2(void) {
  memory_order ret_chpl;
  ret_chpl = memory_order_seq_cst;
  chpl_rmem_consist_maybe_release(ret_chpl, INT64(119), INT32(50));
  return;
}

/* MemConsistency.chpl:118 */
static void chpl_rmem_consist_maybe_release4(void) {
  memory_order ret_chpl;
  ret_chpl = memory_order_seq_cst;
  chpl_rmem_consist_maybe_release(ret_chpl, INT64(119), INT32(50));
  return;
}

/* MemConsistency.chpl:118 */
static void _local_chpl_rmem_consist_maybe_release_chpl3(void) {
  memory_order ret_chpl;
  ret_chpl = memory_order_acquire;
  chpl_rmem_consist_maybe_release(ret_chpl, INT64(119), INT32(50));
  return;
}

/* MemConsistency.chpl:118 */
static void chpl_rmem_consist_maybe_release3(void) {
  memory_order ret_chpl;
  ret_chpl = memory_order_acquire;
  chpl_rmem_consist_maybe_release(ret_chpl, INT64(119), INT32(50));
  return;
}

/* MemConsistency.chpl:118 */
static void _local_chpl_rmem_consist_maybe_release_chpl(void) {
  memory_order ret_chpl;
  ret_chpl = memory_order_release;
  chpl_rmem_consist_maybe_release(ret_chpl, INT64(119), INT32(50));
  return;
}

/* MemConsistency.chpl:118 */
static void chpl_rmem_consist_maybe_release2(void) {
  memory_order ret_chpl;
  ret_chpl = memory_order_release;
  chpl_rmem_consist_maybe_release(ret_chpl, INT64(119), INT32(50));
  return;
}

/* MemConsistency.chpl:118 */
static void chpl_rmem_consist_maybe_release5(void) {
  memory_order ret_chpl;
  ret_chpl = memory_order_relaxed;
  chpl_rmem_consist_maybe_release(ret_chpl, INT64(119), INT32(50));
  return;
}

/* MemConsistency.chpl:126 */
static void chpl_rmem_consist_maybe_acquire3(void) {
  memory_order ret_chpl;
  ret_chpl = memory_order_seq_cst;
  chpl_rmem_consist_maybe_acquire(ret_chpl, INT64(127), INT32(50));
  return;
}

/* MemConsistency.chpl:126 */
static void _local_chpl_rmem_consist_maybe_acquire_chpl2(void) {
  memory_order ret_chpl;
  ret_chpl = memory_order_acquire;
  chpl_rmem_consist_maybe_acquire(ret_chpl, INT64(127), INT32(50));
  return;
}

/* MemConsistency.chpl:126 */
static void chpl_rmem_consist_maybe_acquire2(void) {
  memory_order ret_chpl;
  ret_chpl = memory_order_acquire;
  chpl_rmem_consist_maybe_acquire(ret_chpl, INT64(127), INT32(50));
  return;
}

/* MemConsistency.chpl:126 */
static void _local_chpl_rmem_consist_maybe_acquire_chpl(void) {
  memory_order ret_chpl;
  ret_chpl = memory_order_release;
  chpl_rmem_consist_maybe_acquire(ret_chpl, INT64(127), INT32(50));
  return;
}

/* MemConsistency.chpl:126 */
static void chpl_rmem_consist_maybe_acquire4(void) {
  memory_order ret_chpl;
  ret_chpl = memory_order_release;
  chpl_rmem_consist_maybe_acquire(ret_chpl, INT64(127), INT32(50));
  return;
}

/* MemConsistency.chpl:126 */
static void chpl_rmem_consist_maybe_acquire5(void) {
  memory_order ret_chpl;
  ret_chpl = memory_order_relaxed;
  chpl_rmem_consist_maybe_acquire(ret_chpl, INT64(127), INT32(50));
  return;
}

