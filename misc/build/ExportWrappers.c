/* ExportWrappers.chpl:22 */
static void chpl__init_ExportWrappers(int64_t _ln_chpl,
                                      int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_ExportWrappers_p) {
    goto _exit_chpl__init_ExportWrappers_chpl;
  }
  printModuleInit_chpl("%*s\n", "ExportWrappers", INT64(14));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_ExportWrappers_p = UINT8(true);
  {
    chpl__init_CTypes(INT64(22), INT32(42));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_ExportWrappers_chpl:;
  return;
}

/* ExportWrappers.chpl:26 */
static void _initDynamicEndCount_chpl(void) {
  chpl___EndCount_RAtomicT_int64_t_RAtomicT_int64_t new_temp_chpl = NULL;
  new_temp_chpl = _new_chpl2(INT64(27), INT32(42));
  chpl_task_setDynamicEndCount(new_temp_chpl);
  return;
}

/* ExportWrappers.chpl:31 */
static void _destroyDynamicEndCount_chpl(void) {
  chpl____wide__EndCount_RAtomicT_int64_t_RAtomicT_int64_t call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  chpl____wide__nilType chpl_macro_tmp_1789;
  chpl____wide_Error chpl_macro_tmp_1790;
  call_tmp_chpl36 = chpl_task_getDynamicEndCount();
  chpl_macro_tmp_1789.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1789.addr = nil;
  chpl_macro_tmp_1790.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1790.addr = NULL;
  error_chpl = chpl_macro_tmp_1790;
  tmp_chpl15 = &error_chpl;
  _waitEndCount_chpl(call_tmp_chpl36, tmp_chpl15);
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, INT64(33), INT32(42));
  }
  chpl__delete6(call_tmp_chpl36);
  return;
}

/* ExportWrappers.chpl:38 */
void chpl_libraryModuleLevelSetup(void) {
  _initDynamicEndCount_chpl();
  return;
}

/* ExportWrappers.chpl:43 */
void chpl_libraryModuleLevelCleanup(void) {
  _destroyDynamicEndCount_chpl();
  return;
}

