/* Sort.chpl:253 */
static void chpl__init_Sort(int64_t _ln_chpl,
                            int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  DefaultComparator_chpl initTemp_chpl;
  ReverseComparator_DefaultComparator_chpl initTemp_chpl2;
  if (chpl__init_Sort_p) {
    goto _exit_chpl__init_Sort_chpl;
  }
  printModuleInit_chpl("%*s\n", "Sort", INT64(4));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_Sort_p = UINT8(true);
  {
    chpl__init_List(INT64(253), INT32(80));
    chpl__init_CTypes(INT64(253), INT32(80));
    chpl__init_MSBRadixSort(INT64(253), INT32(80));
    chpl__init_QuickSort(INT64(253), INT32(80));
  }
  chpl_addModule("Sort", ((c_fn_ptr)(chpl__deinit_Sort)));
  init_chpl81(&initTemp_chpl);
  call_tmp_chpl34 = initTemp_chpl;
  defaultComparator_chpl = call_tmp_chpl34;
  chpl_comm_broadcast_private(INT64(32), sizeof(DefaultComparator_chpl));
  init_chpl82(&initTemp_chpl2);
  call_tmp_chpl35 = initTemp_chpl2;
  reverseComparator_chpl = call_tmp_chpl35;
  chpl_comm_broadcast_private(INT64(33), sizeof(ReverseComparator_DefaultComparator_chpl));
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_Sort_chpl:;
  return;
}

/* Sort.chpl:253 */
static void chpl__deinit_Sort(void) {
  return;
}

/* Sort.chpl:3498 */
static void init_chpl81(DefaultComparator_chpl * this_chpl7) {
  return;
}

/* Sort.chpl:3498 */
static void init_ASSIGN__chpl22(DefaultComparator_chpl * this_chpl7,
                                DefaultComparator_chpl * other_chpl) {
  return;
}

/* Sort.chpl:3658 */
static void init_chpl82(ReverseComparator_DefaultComparator_chpl * this_chpl7) {
  DefaultComparator_chpl local_defaultComparator_chpl;
  DefaultComparator_chpl comparator_chpl;
  local_defaultComparator_chpl = defaultComparator_chpl;
  init_ASSIGN__chpl22(&comparator_chpl, &local_defaultComparator_chpl);
  (this_chpl7)->comparator = comparator_chpl;
  return;
}

