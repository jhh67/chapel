/* LocaleModelHelpRuntime.chpl:30 */
static void chpl__init_LocaleModelHelpRuntime(int64_t _ln_chpl,
                                              int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_LocaleModelHelpRuntime_p) {
    goto _exit_chpl__init_LocaleModelHelpRuntime_chpl;
  }
  printModuleInit_chpl("%*s\n", "LocaleModelHelpRuntime", INT64(22));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_LocaleModelHelpRuntime_p = UINT8(true);
  {
    chpl__init_CTypes(INT64(30), INT32(62));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_LocaleModelHelpRuntime_chpl:;
  return;
}

/* LocaleModelHelpRuntime.chpl:76 */
static chpl_localeID_t chpl_buildLocaleID(int32_t node_chpl,
                                          int32_t subloc_chpl,
                                          int64_t _ln_chpl,
                                          int32_t _fn_chpl) {
  chpl_localeID_t call_tmp_chpl36;
  call_tmp_chpl36 = chpl_rt_buildLocaleID(node_chpl, subloc_chpl);
  return call_tmp_chpl36;
}

/* LocaleModelHelpRuntime.chpl:81 */
static int32_t _local_chpl_nodeFromLocaleID_chpl(chpl_localeID_t loc_chpl,
                                                 int64_t _ln_chpl,
                                                 int32_t _fn_chpl) {
  int32_t call_tmp_chpl36;
  call_tmp_chpl36 = chpl_rt_nodeFromLocaleID(loc_chpl);
  return call_tmp_chpl36;
}

/* LocaleModelHelpRuntime.chpl:81 */
static int32_t chpl_nodeFromLocaleID(chpl_localeID_t loc_chpl,
                                     int64_t _ln_chpl,
                                     int32_t _fn_chpl) {
  int32_t call_tmp_chpl36;
  call_tmp_chpl36 = chpl_rt_nodeFromLocaleID(loc_chpl);
  return call_tmp_chpl36;
}

/* LocaleModelHelpRuntime.chpl:86 */
static int32_t chpl_sublocFromLocaleID(chpl_localeID_t loc_chpl,
                                       int64_t _ln_chpl,
                                       int32_t _fn_chpl) {
  int32_t call_tmp_chpl36;
  call_tmp_chpl36 = chpl_rt_sublocFromLocaleID(loc_chpl);
  return call_tmp_chpl36;
}

/* LocaleModelHelpRuntime.chpl:132 */
static void chpl_taskAddBegin(int64_t subloc_id_chpl,
                              int64_t fn_chpl,
                              chpl_task_bundle_p args_chpl,
                              uint64_t args_size_chpl,
                              int64_t _ln_chpl,
                              int32_t _fn_chpl) {
  c_ptr_chpl_task_infoChapel_t_chpl call_tmp_chpl36 = NULL;
  chpl_bool call_tmp_chpl37;
  call_tmp_chpl36 = chpl_task_getInfoChapel();
  call_tmp_chpl37 = chpl_task_data_getSerial(call_tmp_chpl36);
  if (call_tmp_chpl37) {
    chpl_ftable_call(fn_chpl, args_chpl);
  } else {
    chpl_task_data_setup(args_chpl, call_tmp_chpl36);
    chpl_task_addTask(fn_chpl, args_chpl, args_size_chpl, subloc_id_chpl, INT64(143), INT32(62));
  }
  return;
}

/* LocaleModelHelpRuntime.chpl:152 */
static void chpl_taskAddCoStmt(int64_t subloc_id_chpl,
                               int64_t fn_chpl,
                               chpl_task_bundle_p args_chpl,
                               uint64_t args_size_chpl,
                               int64_t _ln_chpl,
                               int32_t _fn_chpl) {
  c_ptr_chpl_task_infoChapel_t_chpl call_tmp_chpl36 = NULL;
  chpl_bool call_tmp_chpl37;
  chpl_bool isSerial_chpl;
  chpl_bool call_tmp_chpl38;
  call_tmp_chpl36 = chpl_task_getInfoChapel();
  call_tmp_chpl37 = chpl_task_data_getSerial(call_tmp_chpl36);
  isSerial_chpl = call_tmp_chpl37;
  call_tmp_chpl38 = chpl_task_data_getNextCoStmtSerial(call_tmp_chpl36);
  if (call_tmp_chpl38) {
    isSerial_chpl = UINT8(true);
    chpl_task_data_setNextCoStmtSerial(call_tmp_chpl36, UINT8(false));
  }
  if (isSerial_chpl) {
    chpl_ftable_call(fn_chpl, args_chpl);
  } else {
    chpl_task_data_setup(args_chpl, call_tmp_chpl36);
    chpl_task_addTask(fn_chpl, args_chpl, args_size_chpl, subloc_id_chpl, INT64(167), INT32(62));
  }
  return;
}

