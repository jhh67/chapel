/* OS.chpl:36 */
static void chpl__init_OS(int64_t _ln_chpl,
                          int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_OS_p) {
    goto _exit_chpl__init_OS_chpl;
  }
  printModuleInit_chpl("%*s\n", "OS", INT64(2));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_OS_p = UINT8(true);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_OS_chpl:;
  return;
}

