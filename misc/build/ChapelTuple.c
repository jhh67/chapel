/* ChapelTuple.chpl:44 */
static void chpl__init_ChapelTuple(int64_t _ln_chpl,
                                   int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_ChapelTuple_p) {
    goto _exit_chpl__init_ChapelTuple_chpl;
  }
  printModuleInit_chpl("%*s\n", "ChapelTuple", INT64(11));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_ChapelTuple_p = UINT8(true);
  {
    chpl__init_DSIUtil(INT64(44), INT32(20));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_ChapelTuple_chpl:;
  return;
}

/* ChapelTuple.chpl:212 */
static chpl____wide__ref_range_int64_t_bounded_F this_chpl5(chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F this_chpl7,
                                                            int64_t i_chpl) {
  string_chpl local__str_literal_480_chpl;
  chpl_bool tmp_chpl15;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_840;
  local__str_literal_480_chpl = _str_literal_480_chpl /* "tuple access out of bounds: " */;
  if (i_chpl < INT64(0)) {
    tmp_chpl15 = UINT8(true);
  } else {
    tmp_chpl15 = (i_chpl > INT64(0));
  }
  if (tmp_chpl15) {
    halt_chpl7(&local__str_literal_480_chpl, i_chpl, INT64(217), INT32(20));
  }
  chpl_macro_tmp_840.locale = (this_chpl7).locale;
  chpl_macro_tmp_840.addr = (*((this_chpl7).addr) + i_chpl);
  call_tmp_chpl36 = chpl_macro_tmp_840;
  return call_tmp_chpl36;
}

/* ChapelTuple.chpl:311 */
static void indices_chpl(chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F this_chpl7,
                         range_int64_t_bounded_F_chpl * _retArg_chpl) {
  range_int64_t_bounded_F_chpl call_tmp_chpl36;
  range_int64_t_bounded_F_chpl ret_tmp_chpl;
  chpl_build_bounded_range(INT64(0), INT64(0), &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

