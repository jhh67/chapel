/* Sort.chpl:1055 */
static void chpl__init_QuickSort(int64_t _ln_chpl,
                                 int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_QuickSort_p) {
    goto _exit_chpl__init_QuickSort_chpl;
  }
  printModuleInit_chpl("%*s\n", "QuickSort", INT64(9));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_QuickSort_p = UINT8(true);
  {
    chpl__init_Sort(INT64(1055), INT32(80));
    chpl__init_Sort(INT64(1055), INT32(80));
    chpl__init_ShallowCopy(INT64(1055), INT32(80));
    chpl__init_InsertionSort(INT64(1055), INT32(80));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_QuickSort_chpl:;
  return;
}

