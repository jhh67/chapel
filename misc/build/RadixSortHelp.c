/* Sort.chpl:1633 */
static void chpl__init_RadixSortHelp(int64_t _ln_chpl,
                                     int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_RadixSortHelp_p) {
    goto _exit_chpl__init_RadixSortHelp_chpl;
  }
  printModuleInit_chpl("%*s\n", "RadixSortHelp", INT64(13));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_RadixSortHelp_p = UINT8(true);
  {
    chpl__init_Sort(INT64(1633), INT32(80));
    chpl__init_Sort(INT64(1633), INT32(80));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_RadixSortHelp_chpl:;
  return;
}

