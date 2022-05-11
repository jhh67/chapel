/* List.chpl:55 */
static void chpl__init_List(int64_t _ln_chpl,
                            int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_List_p) {
    goto _exit_chpl__init_List_chpl;
  }
  printModuleInit_chpl("%*s\n", "List", INT64(4));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_List_p = UINT8(true);
  {
    chpl__init_ChapelLocks(INT64(55), INT32(86));
    chpl__init_HaltWrappers(INT64(55), INT32(86));
    chpl__init_Sort(INT64(55), INT32(86));
    chpl__init_IO(INT64(55), INT32(86));
  }
  _initialCapacity_chpl = INT64(8);
  chpl_comm_broadcast_private(INT64(37), sizeof(int64_t));
  _initialArrayCapacity_chpl = INT64(16);
  chpl_comm_broadcast_private(INT64(38), sizeof(int64_t));
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_List_chpl:;
  return;
}

