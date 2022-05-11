/* HaltWrappers.chpl:25 */
static void chpl__init_HaltWrappers(int64_t _ln_chpl,
                                    int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_HaltWrappers_p) {
    goto _exit_chpl__init_HaltWrappers_chpl;
  }
  printModuleInit_chpl("%*s\n", "HaltWrappers", INT64(12));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_HaltWrappers_p = UINT8(true);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_HaltWrappers_chpl:;
  return;
}

/* HaltWrappers.chpl:66 */
static void pureVirtualMethodHalt_chpl(int64_t _ln_chpl,
                                       int32_t _fn_chpl) {
  string_chpl local__str_literal_1673_chpl;
  local__str_literal_1673_chpl = _str_literal_1673_chpl /* "pure virtual method called" */;
  halt_chpl(&local__str_literal_1673_chpl, _ln_chpl, _fn_chpl);
  return;
}

/* HaltWrappers.chpl:110 */
static void nilCheckHalt_chpl(string_chpl * s_chpl,
                              int64_t _ln_chpl,
                              int32_t _fn_chpl) {
  halt_chpl(s_chpl, _ln_chpl, _fn_chpl);
  return;
}

/* HaltWrappers.chpl:117 */
static void boundsCheckHalt_chpl(string_chpl * s_chpl,
                                 int64_t _ln_chpl,
                                 int32_t _fn_chpl) {
  halt_chpl(s_chpl, _ln_chpl, _fn_chpl);
  return;
}

/* HaltWrappers.chpl:138 */
static void safeCastCheckHalt_chpl(string_chpl * s_chpl,
                                   int64_t _ln_chpl,
                                   int32_t _fn_chpl) {
  halt_chpl(s_chpl, _ln_chpl, _fn_chpl);
  return;
}

