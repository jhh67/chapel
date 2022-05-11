/* ChapelTaskTable.chpl:23 */
static void chpl__init_ChapelTaskTable(int64_t _ln_chpl,
                                       int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_ChapelTaskTable_p) {
    goto _exit_chpl__init_ChapelTaskTable_chpl;
  }
  printModuleInit_chpl("%*s\n", "ChapelTaskTable", INT64(15));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_ChapelTaskTable_p = UINT8(true);
  {
    chpl__init_Errors(INT64(23), INT32(38));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_ChapelTaskTable_chpl:;
  return;
}

/* ChapelTaskTable.chpl:34 */
void chpldev_taskTable_add(chpl_taskID_t taskID,
                           uint32_t lineno,
                           int32_t filename,
                           uint64_t tl_info) {
  return;
}

/* ChapelTaskTable.chpl:41 */
void chpldev_taskTable_remove(chpl_taskID_t taskID) {
  return;
}

/* ChapelTaskTable.chpl:45 */
void chpldev_taskTable_set_active(chpl_taskID_t taskID) {
  return;
}

/* ChapelTaskTable.chpl:49 */
void chpldev_taskTable_set_suspended(chpl_taskID_t taskID) {
  return;
}

/* ChapelTaskTable.chpl:53 */
void chpldev_taskTable_get_tl_info(chpl_taskID_t taskID) {
  return;
}

/* ChapelTaskTable.chpl:57 */
void chpldev_taskTable_print(void) {
  string_chpl local__str_literal_1274_chpl;
  local__str_literal_1274_chpl = _str_literal_1274_chpl /* "To use task tracking, you must recompile with --task-tracking" */;
  halt_chpl(&local__str_literal_1274_chpl, INT64(60), INT32(38));
  return;
}

