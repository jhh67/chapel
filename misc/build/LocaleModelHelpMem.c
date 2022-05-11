/* LocaleModelHelpMem.chpl:30 */
static void chpl__init_LocaleModelHelpMem(int64_t _ln_chpl,
                                          int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_LocaleModelHelpMem_p) {
    goto _exit_chpl__init_LocaleModelHelpMem_chpl;
  }
  printModuleInit_chpl("%*s\n", "LocaleModelHelpMem", INT64(18));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_LocaleModelHelpMem_p = UINT8(true);
  {
    chpl__init_CTypes(INT64(30), INT32(53));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_LocaleModelHelpMem_chpl:;
  return;
}

/* LocaleModelHelpMem.chpl:53 */
static c_void_ptr chpl_here_alloc(int64_t size_chpl3,
                                  int16_t md_chpl,
                                  int64_t _ln_chpl,
                                  int32_t _fn_chpl) {
  uint64_t call_tmp_chpl36;
  int16_t call_tmp_chpl37;
  c_void_ptr call_tmp_chpl38;
  checkValue_chpl(size_chpl3);
  call_tmp_chpl36 = ((uint64_t)(size_chpl3));
  call_tmp_chpl37 = chpl_memhook_md_num();
  call_tmp_chpl38 = chpl_mem_alloc(call_tmp_chpl36, ((int16_t)((md_chpl + call_tmp_chpl37))), _ln_chpl, _fn_chpl);
  return call_tmp_chpl38;
}

/* LocaleModelHelpMem.chpl:63 */
static c_void_ptr chpl_here_alloc2(uint64_t size_chpl3,
                                   int16_t md_chpl,
                                   int64_t _ln_chpl,
                                   int32_t _fn_chpl) {
  int16_t call_tmp_chpl36;
  c_void_ptr call_tmp_chpl37;
  checkValue_chpl4();
  call_tmp_chpl36 = chpl_memhook_md_num();
  call_tmp_chpl37 = chpl_mem_alloc(size_chpl3, ((int16_t)((md_chpl + call_tmp_chpl36))), _ln_chpl, _fn_chpl);
  return call_tmp_chpl37;
}

/* LocaleModelHelpMem.chpl:86 */
static c_void_ptr chpl_here_calloc(uint64_t size_chpl3,
                                   int64_t number_chpl,
                                   int16_t md_chpl,
                                   int64_t _ln_chpl,
                                   int32_t _fn_chpl) {
  uint64_t call_tmp_chpl36;
  int16_t call_tmp_chpl37;
  c_void_ptr call_tmp_chpl38;
  checkValue_chpl(number_chpl);
  call_tmp_chpl36 = ((uint64_t)(number_chpl));
  checkValue_chpl4();
  call_tmp_chpl37 = chpl_memhook_md_num();
  call_tmp_chpl38 = chpl_mem_calloc(call_tmp_chpl36, size_chpl3, ((int16_t)((md_chpl + call_tmp_chpl37))), _ln_chpl, _fn_chpl);
  return call_tmp_chpl38;
}

/* LocaleModelHelpMem.chpl:95 */
static c_void_ptr chpl_here_realloc(c_void_ptr ptr_chpl,
                                    int64_t size_chpl3,
                                    int16_t md_chpl,
                                    int64_t _ln_chpl,
                                    int32_t _fn_chpl) {
  uint64_t call_tmp_chpl36;
  int16_t call_tmp_chpl37;
  c_void_ptr call_tmp_chpl38;
  checkValue_chpl(size_chpl3);
  call_tmp_chpl36 = ((uint64_t)(size_chpl3));
  call_tmp_chpl37 = chpl_memhook_md_num();
  call_tmp_chpl38 = chpl_mem_realloc(ptr_chpl, call_tmp_chpl36, ((int16_t)((md_chpl + call_tmp_chpl37))), _ln_chpl, _fn_chpl);
  return call_tmp_chpl38;
}

/* LocaleModelHelpMem.chpl:104 */
static int64_t chpl_here_good_alloc_size(int64_t min_size_chpl,
                                         int64_t _ln_chpl,
                                         int32_t _fn_chpl) {
  uint64_t call_tmp_chpl36;
  int64_t call_tmp_chpl37;
  checkValue_chpl(min_size_chpl);
  call_tmp_chpl36 = chpl_mem_good_alloc_size(((uint64_t)(min_size_chpl)), _ln_chpl, _fn_chpl);
  checkValue_chpl2(call_tmp_chpl36);
  call_tmp_chpl37 = ((int64_t)(call_tmp_chpl36));
  return call_tmp_chpl37;
}

/* LocaleModelHelpMem.chpl:113 */
static void chpl_here_free(c_void_ptr ptr_chpl,
                           int64_t _ln_chpl,
                           int32_t _fn_chpl) {
  chpl_mem_free(ptr_chpl, _ln_chpl, _fn_chpl);
  return;
}

