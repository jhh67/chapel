/* ChapelPrivatization.chpl:21 */
static void chpl__init_ChapelPrivatization(int64_t _ln_chpl,
                                           int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_ChapelPrivatization_p) {
    goto _exit_chpl__init_ChapelPrivatization_chpl;
  }
  printModuleInit_chpl("%*s\n", "ChapelPrivatization", INT64(19));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_ChapelPrivatization_p = UINT8(true);
  {
    chpl__init_CTypes(INT64(21), INT32(27));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_ChapelPrivatization_chpl:;
  return;
}

