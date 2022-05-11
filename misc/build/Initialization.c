/* Initialization.chpl:37 */
static void chpl__init_Initialization(int64_t _ln_chpl,
                                      int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_Initialization_p) {
    goto _exit_chpl__init_Initialization_chpl;
  }
  printModuleInit_chpl("%*s\n", "Initialization", INT64(14));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_Initialization_p = UINT8(true);
  {
    chpl__init_Memory(INT64(37), INT32(96));
    chpl__init_HaltWrappers(INT64(37), INT32(96));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_Initialization_chpl:;
  return;
}

