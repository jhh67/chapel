/* OS.chpl:46 */
static void chpl__init_POSIX(int64_t _ln_chpl,
                             int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_POSIX_p) {
    goto _exit_chpl__init_POSIX_chpl;
  }
  printModuleInit_chpl("%*s\n", "POSIX", INT64(5));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_POSIX_p = UINT8(true);
  {
    chpl__init_OS(INT64(46), INT32(83));
    chpl__init_CTypes(INT64(46), INT32(83));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_POSIX_chpl:;
  return;
}

