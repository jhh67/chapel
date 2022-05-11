/* CTypes.chpl:41 */
static void chpl__init_CTypes(int64_t _ln_chpl,
                              int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_CTypes_p) {
    goto _exit_chpl__init_CTypes_chpl;
  }
  printModuleInit_chpl("%*s\n", "CTypes", INT64(6));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_CTypes_p = UINT8(true);
  {
    chpl__init_HaltWrappers(INT64(41), INT32(66));
    chpl__init_ChapelSysCTypes(INT64(41), INT32(66));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_CTypes_chpl:;
  return;
}

/* CTypes.chpl:525 */
static int16_t offset_ARRAY_ELEMENTS_chpl(void) {
  int16_t call_tmp_chpl36;
  int16_t call_tmp_chpl37;
  call_tmp_chpl36 = chpl_memhook_md_num();
  call_tmp_chpl37 = (CHPL_RT_MD_ARRAY_ELEMENTS - call_tmp_chpl36);
  return call_tmp_chpl37;
}

