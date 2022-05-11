/* IO.chpl:5512 */
static void chpl__init_FormattedIO(int64_t _ln_chpl,
                                   int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_FormattedIO_p) {
    goto _exit_chpl__init_FormattedIO_chpl;
  }
  printModuleInit_chpl("%*s\n", "FormattedIO", INT64(11));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_FormattedIO_p = UINT8(true);
  {
    chpl__init_IO(INT64(5512), INT32(77));
    chpl__init_IO(INT64(5512), INT32(77));
    chpl__init_CTypes(INT64(5512), INT32(77));
    chpl__init_SysBasic(INT64(5512), INT32(77));
    chpl__init_SysError(INT64(5512), INT32(77));
    chpl__init_Regex(INT64(5512), INT32(77));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_FormattedIO_chpl:;
  return;
}

