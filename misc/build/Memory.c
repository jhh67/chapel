/* Memory.chpl:23 */
static void chpl__init_Memory(int64_t _ln_chpl,
                              int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_Memory_p) {
    goto _exit_chpl__init_Memory_chpl;
  }
  printModuleInit_chpl("%*s\n", "Memory", INT64(6));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_Memory_p = UINT8(true);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_Memory_chpl:;
  return;
}

