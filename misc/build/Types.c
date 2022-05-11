/* Types.chpl:26 */
static void chpl__init_Types(int64_t _ln_chpl,
                             int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_Types_p) {
    goto _exit_chpl__init_Types_chpl;
  }
  printModuleInit_chpl("%*s\n", "Types", INT64(5));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_Types_p = UINT8(true);
  {
    chpl__init_HaltWrappers(INT64(26), INT32(71));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_Types_chpl:;
  return;
}

/* Types.chpl:820 */
static void checkValue_chpl(int64_t this_chpl7) {
  string_chpl local__str_literal_3272_chpl;
  local__str_literal_3272_chpl = _str_literal_3272_chpl /* "casting int(64) less than 0 to uint(64)" */;
  if (this_chpl7 < INT64(0)) {
    safeCastCheckHalt_chpl(&local__str_literal_3272_chpl, INT64(825), INT32(71));
  }
  return;
}

/* Types.chpl:820 */
static void checkValue_chpl2(uint64_t this_chpl7) {
  string_chpl local__str_literal_3280_chpl;
  local__str_literal_3280_chpl = _str_literal_3280_chpl /* "casting uint(64) with a value greater than the maximum of int(64) to int(64)" */;
  if (this_chpl7 > UINT64(9223372036854775807)) {
    safeCastCheckHalt_chpl(&local__str_literal_3280_chpl, INT64(843), INT32(71));
  }
  return;
}

/* Types.chpl:820 */
static void checkValue_chpl4(void) {
  return;
}

/* Types.chpl:820 */
static void checkValue_chpl5(void) {
  return;
}

/* Types.chpl:820 */
static void checkValue_chpl6(void) {
  return;
}

/* Types.chpl:820 */
static void checkValue_chpl3(void) {
  return;
}

