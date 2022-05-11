/* ChapelHashtable.chpl:30 */
static void chpl__init_ChapelHashtable(int64_t _ln_chpl,
                                       int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_ChapelHashtable_p) {
    goto _exit_chpl__init_ChapelHashtable_chpl;
  }
  printModuleInit_chpl("%*s\n", "ChapelHashtable", INT64(15));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_ChapelHashtable_p = UINT8(true);
  {
    chpl__init_ChapelBase(INT64(30), INT32(59));
    chpl__init_DSIUtil(INT64(30), INT32(59));
    chpl__init_CTypes(INT64(30), INT32(59));
    chpl__init_Initialization(INT64(30), INT32(59));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_ChapelHashtable_chpl:;
  return;
}

