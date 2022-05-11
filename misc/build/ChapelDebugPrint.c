/* ChapelDebugPrint.chpl:29 */
static void chpl__init_ChapelDebugPrint(int64_t _ln_chpl,
                                        int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_2100;
  chpl_bool chpl_macro_tmp_2101;
  if (chpl__init_ChapelDebugPrint_p) {
    goto _exit_chpl__init_ChapelDebugPrint_chpl;
  }
  printModuleInit_chpl("%*s\n", "ChapelDebugPrint", INT64(16));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_ChapelDebugPrint_p = UINT8(true);
  {
    chpl__init_CTypes(INT64(29), INT32(51));
    chpl__init_ChapelIOStringifyHelper(INT64(29), INT32(51));
  }
  chpl_check_nil((&chpl__testParOn)->addr, INT64(67), INT32(51));
  chpl_macro_tmp_2100.locale = (&chpl__testParOn)->locale;
  chpl_macro_tmp_2100.addr = &(((&chpl__testParOn)->addr)->value);
  chpl_macro_tmp_2101 = UINT8(false);
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_2101)), chpl_nodeFromLocaleID((chpl_macro_tmp_2100).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2100).addr, sizeof(chpl_bool), COMMID(0), INT64(67), INT64(51));
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_ChapelDebugPrint_chpl:;
  return;
}

