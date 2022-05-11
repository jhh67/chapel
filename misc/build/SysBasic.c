/* SysBasic.chpl:39 */
static void chpl__init_SysBasic(int64_t _ln_chpl,
                                int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_SysBasic_p) {
    goto _exit_chpl__init_SysBasic_chpl;
  }
  printModuleInit_chpl("%*s\n", "SysBasic", INT64(8));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_SysBasic_p = UINT8(true);
  {
    chpl__init_CTypes(INT64(39), INT32(75));
    chpl__init_Sys(INT64(39), INT32(75));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_SysBasic_chpl:;
  return;
}

