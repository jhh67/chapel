/* Sort.chpl:1841 */
static void chpl__init_ShallowCopy(int64_t _ln_chpl,
                                   int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_ShallowCopy_p) {
    goto _exit_chpl__init_ShallowCopy_chpl;
  }
  printModuleInit_chpl("%*s\n", "ShallowCopy", INT64(11));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_ShallowCopy_p = UINT8(true);
  {
    chpl__init_Sort(INT64(1841), INT32(80));
    chpl__init_CTypes(INT64(1841), INT32(80));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_ShallowCopy_chpl:;
  return;
}

