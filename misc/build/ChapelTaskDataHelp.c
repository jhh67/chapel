/* ChapelTaskDataHelp.chpl:23 */
static void chpl__init_ChapelTaskDataHelp(int64_t _ln_chpl,
                                          int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_ChapelTaskDataHelp_p) {
    goto _exit_chpl__init_ChapelTaskDataHelp_chpl;
  }
  printModuleInit_chpl("%*s\n", "ChapelTaskDataHelp", INT64(18));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_ChapelTaskDataHelp_p = UINT8(true);
  {
    chpl__init_CTypes(INT64(23), INT32(24));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_ChapelTaskDataHelp_chpl:;
  return;
}

/* ChapelTaskDataHelp.chpl:37 */
static void chpl_task_data_setup(chpl_task_bundle_p args_chpl,
                                 chpl_task_infoChapel_t * infoChapel_chpl) {
  c_ptr_chpl_task_infoChapel_t_chpl call_tmp_chpl36 = NULL;
  uint64_t call_tmp_chpl37;
  c_void_ptr coerce_tmp_chpl3;
  c_void_ptr coerce_tmp_chpl4;
  call_tmp_chpl36 = chpl_task_getInfoChapelInBundle(args_chpl);
  call_tmp_chpl37 = sizeof(chpl_task_infoChapel_t);
  coerce_tmp_chpl3 = ((c_void_ptr)(call_tmp_chpl36));
  coerce_tmp_chpl4 = ((c_void_ptr)(infoChapel_chpl));
  checkValue_chpl4();
  memcpy(coerce_tmp_chpl3, coerce_tmp_chpl4, call_tmp_chpl37);
  return;
}

/* ChapelTaskDataHelp.chpl:45 */
static void chpl_save_task_error(chpl____wide__EndCountBase e_chpl,
                                 Error_chpl err_chpl) {
  chpl____wide__EndCountBase coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_TaskErrors call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_TaskErrors chpl_macro_tmp_869;
  if (((object_chpl)(err_chpl)) != nil) {
    coerce_tmp_chpl3 = e_chpl;
    chpl_check_nil((&coerce_tmp_chpl3)->addr, INT64(47), INT32(24));
    chpl_macro_tmp_869.locale = (&coerce_tmp_chpl3)->locale;
    chpl_macro_tmp_869.addr = &(((&coerce_tmp_chpl3)->addr)->errors);
    call_tmp_chpl36 = chpl_macro_tmp_869;
    append_chpl(call_tmp_chpl36, err_chpl);
  }
  return;
}

