/* ChapelNumLocales.chpl:23 */
static void chpl__init_ChapelNumLocales(int64_t _ln_chpl,
                                        int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  chpl_bool call_tmp_chpl36;
  int64_t call_tmp_chpl37;
  c_string call_tmp_chpl38;
  if (chpl__init_ChapelNumLocales_p) {
    goto _exit_chpl__init_ChapelNumLocales_chpl;
  }
  printModuleInit_chpl("%*s\n", "ChapelNumLocales", INT64(16));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_ChapelNumLocales_p = UINT8(true);
  {
    chpl__init_ChapelBase(INT64(23), INT32(63));
  }
  call_tmp_chpl36 = chpl_config_has_value("numLocales", "Built-in");
  if (! call_tmp_chpl36) {
    call_tmp_chpl37 = chpl_comm_default_num_locales();
    tmp_chpl = call_tmp_chpl37;
  } else {
    call_tmp_chpl38 = chpl_config_get_value("numLocales", "Built-in");
    tmp_chpl = _command_line_cast_chpl8(call_tmp_chpl38);
  }
  numLocales_chpl = tmp_chpl;
  chpl_comm_broadcast_private(INT64(23), sizeof(int64_t));
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_ChapelNumLocales_chpl:;
  return;
}

