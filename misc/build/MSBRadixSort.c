/* Sort.chpl:3246 */
static void chpl__init_MSBRadixSort(int64_t _ln_chpl,
                                    int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_MSBRadixSort_p) {
    goto _exit_chpl__init_MSBRadixSort_chpl;
  }
  printModuleInit_chpl("%*s\n", "MSBRadixSort", INT64(12));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_MSBRadixSort_p = UINT8(true);
  {
    chpl__init_Sort(INT64(3246), INT32(80));
    chpl__init_Sort(INT64(3246), INT32(80));
    chpl__init_RadixSortHelp(INT64(3246), INT32(80));
    chpl__init_ShellSort(INT64(3246), INT32(80));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_MSBRadixSort_chpl:;
  return;
}

