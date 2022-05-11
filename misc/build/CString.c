/* CString.chpl:26 */
static void chpl__init_CString(int64_t _ln_chpl,
                               int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_CString_p) {
    goto _exit_chpl__init_CString_chpl;
  }
  printModuleInit_chpl("%*s\n", "CString", INT64(7));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_CString_p = UINT8(true);
  {
    chpl__init_CTypes(INT64(26), INT32(9));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_CString_chpl:;
  return;
}

