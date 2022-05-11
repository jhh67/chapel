/* String.chpl:778 */
static void chpl__init_NVStringFactory(int64_t _ln_chpl,
                                       int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_NVStringFactory_p) {
    goto _exit_chpl__init_NVStringFactory_chpl;
  }
  printModuleInit_chpl("%*s\n", "NVStringFactory", INT64(15));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_NVStringFactory_p = UINT8(true);
  {
    chpl__init_String(INT64(778), INT32(11));
    chpl__init_BytesStringCommon(INT64(778), INT32(11));
    chpl__init_ByteBufferHelpers(INT64(778), INT32(11));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_NVStringFactory_chpl:;
  return;
}

