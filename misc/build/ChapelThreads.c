/* ChapelThreads.chpl:30 */
static void chpl__init_ChapelThreads(int64_t _ln_chpl,
                                     int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_ChapelThreads_p) {
    goto _exit_chpl__init_ChapelThreads_chpl;
  }
  printModuleInit_chpl("%*s\n", "ChapelThreads", INT64(13));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_ChapelThreads_p = UINT8(true);
  call_tmp_chpl8 = chpl_task_getenvNumThreadsPerLocale();
  init_coerce_tmp_chpl = ((int64_t)(call_tmp_chpl8));
  numThreadsPerLocale_chpl = init_coerce_tmp_chpl;
  chpl_comm_broadcast_private(INT64(5), sizeof(int64_t));
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_ChapelThreads_chpl:;
  return;
}

