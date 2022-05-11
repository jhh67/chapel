/* RangeChunk.chpl:38 */
static void chpl__init_RangeChunk(int64_t _ln_chpl,
                                  int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_RangeChunk_p) {
    goto _exit_chpl__init_RangeChunk_chpl;
  }
  printModuleInit_chpl("%*s\n", "RangeChunk", INT64(10));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_RangeChunk_p = UINT8(true);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_RangeChunk_chpl:;
  return;
}

