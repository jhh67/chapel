/* DSIUtil.chpl:1 */
static void chpl__init_DSIUtil(int64_t _ln_chpl,
                               int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_DSIUtil_p) {
    goto _exit_chpl__init_DSIUtil_chpl;
  }
  printModuleInit_chpl("%*s\n", "DSIUtil", INT64(7));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_DSIUtil_p = UINT8(true);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_DSIUtil_chpl:;
  return;
}

/* DSIUtil.chpl:38 */
static void createTuple_chpl(int64_t val_chpl,
                             _tuple_1_star_int64_t_chpl * _retArg_chpl) {
  _tuple_1_star_int64_t_chpl ret_chpl;
  *(ret_chpl + INT64(0)) = val_chpl;
  *(*(_retArg_chpl) + INT64(0)) = *(ret_chpl + INT64(0));
  return;
}

/* DSIUtil.chpl:48 */
static void _computeChunkStuff_chpl(int64_t maxTasks_chpl,
                                    chpl_bool ignoreRunning_chpl,
                                    int64_t minSize_chpl,
                                    _tuple_1_star_range_int64_t_bounded_F_chpl * ranges_chpl,
                                    _tuple_2_star_int64_t_chpl * _retArg_chpl) {
  _tuple_2_star_int64_t_chpl ret_chpl;
  uint64_t numElems_chpl;
  uint64_t call_tmp_chpl36;
  range_int64_t_bounded_F_chpl coerce_tmp_chpl3;
  _ref_uint64_t_chpl i_lhs_chpl = NULL;
  int64_t call_tmp_chpl37;
  int64_t numChunks_chpl;
  _tuple_2_star_int64_t_chpl ret_tmp_chpl;
  int64_t parDim_chpl;
  int64_t maxDim_chpl;
  uint64_t maxElems_chpl;
  int64_t _ic__F1_high_chpl;
  int64_t i_chpl;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  uint64_t call_tmp_chpl39;
  range_int64_t_bounded_F_chpl coerce_tmp_chpl4;
  _tuple_2_star_int64_t_chpl ret_tmp_chpl2;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_2255;
  numElems_chpl = UINT64(1);
  coerce_tmp_chpl3 = *(*(ranges_chpl) + INT64(0));
  call_tmp_chpl36 = sizeAs_chpl4(coerce_tmp_chpl3);
  i_lhs_chpl = &numElems_chpl;
  *(i_lhs_chpl) *= call_tmp_chpl36;
  call_tmp_chpl37 = _computeNumChunks_chpl(maxTasks_chpl, ignoreRunning_chpl, minSize_chpl, numElems_chpl);
  numChunks_chpl = call_tmp_chpl37;
  if (call_tmp_chpl37 == INT64(0)) {
    *(ret_tmp_chpl + INT64(0)) = INT64(0);
    *(ret_tmp_chpl + INT64(1)) = INT64(-1);
    *(ret_chpl + INT64(0)) = *(ret_tmp_chpl + INT64(0));
    *(ret_chpl + INT64(1)) = *(ret_tmp_chpl + INT64(1));
    goto _end__computeChunkStuff_chpl;
  }
  assert_chpl((call_tmp_chpl37 > INT64(0)), INT64(61), INT32(76));
  parDim_chpl = INT64(-1);
  maxDim_chpl = INT64(-1);
  maxElems_chpl = UINT64(0);
  _ic__F1_high_chpl = INT64(0);
  i_chpl = INT64(0);
  chpl_checkIfRangeIterWillOverflow(INT64(0), INT64(0), INT64(1), INT64(0), INT64(0), UINT8(true));
  for (i_chpl = INT64(0); ((i_chpl <= _ic__F1_high_chpl)); i_chpl += INT64(1)) {
    chpl_macro_tmp_2255.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2255.addr = ranges_chpl;
    tmp_chpl15 = chpl_macro_tmp_2255;
    call_tmp_chpl38 = this_chpl5(tmp_chpl15, i_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID((call_tmp_chpl38).locale, INT64(0), INT32(0)), (call_tmp_chpl38).addr, sizeof(range_int64_t_bounded_F_chpl), COMMID(0), INT64(69), INT64(76));
    call_tmp_chpl39 = sizeAs_chpl4(coerce_tmp_chpl4);
    if (call_tmp_chpl39 >= ((uint64_t)(numChunks_chpl))) {
      parDim_chpl = i_chpl;
      goto _breakLabel_chpl;
    }
    if (call_tmp_chpl39 > maxElems_chpl) {
      maxElems_chpl = call_tmp_chpl39;
      maxDim_chpl = i_chpl;
    }
  }
  _breakLabel_chpl:;
  if (parDim_chpl == INT64(-1)) {
    parDim_chpl = maxDim_chpl;
    if (maxElems_chpl < ((uint64_t)(numChunks_chpl))) {
      numChunks_chpl = ((int64_t)(maxElems_chpl));
    }
  }
  *(ret_tmp_chpl2 + INT64(0)) = numChunks_chpl;
  *(ret_tmp_chpl2 + INT64(1)) = parDim_chpl;
  *(ret_chpl + INT64(0)) = *(ret_tmp_chpl2 + INT64(0));
  *(ret_chpl + INT64(1)) = *(ret_tmp_chpl2 + INT64(1));
  _end__computeChunkStuff_chpl:;
  *(*(_retArg_chpl) + INT64(0)) = *(ret_chpl + INT64(0));
  *(*(_retArg_chpl) + INT64(1)) = *(ret_chpl + INT64(1));
  return;
}

/* DSIUtil.chpl:93 */
static int64_t _computeNumChunks_chpl2(int64_t maxTasks_chpl,
                                       chpl_bool ignoreRunning_chpl,
                                       int64_t minSize_chpl,
                                       int64_t numElems_chpl) {
  int64_t ret_chpl;
  uint64_t call_tmp_chpl36;
  uint64_t unumElems_chpl;
  int64_t numChunks_chpl;
  locale_chpl call_tmp_chpl37;
  chpl_localeID_t call_tmp_chpl38;
  int32_t call_tmp_chpl39;
  chpl_localeID_t call_tmp_chpl40;
  locale_chpl call_tmp_chpl41;
  locale_chpl ret_tmp_chpl;
  chpl____wide__ref_chpl_localeID_t tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl42;
  int64_t call_tmp_chpl43;
  int64_t tmp_chpl16;
  _ref_locale_chpl i_x_chpl = NULL;
  chpl____wide__ref_locale tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl18;
  chpl_bool tmp_chpl19;
  _ref_int64_t_chpl i_lhs_chpl = NULL;
  chpl_bool tmp_chpl20;
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_2256;
  chpl____wide__ref_locale chpl_macro_tmp_2257;
  if (numElems_chpl <= INT64(0)) {
    ret_chpl = INT64(0);
    goto _end__computeNumChunks_chpl;
  }
  call_tmp_chpl36 = ((uint64_t)(numElems_chpl));
  unumElems_chpl = call_tmp_chpl36;
  numChunks_chpl = maxTasks_chpl;
  if (! ignoreRunning_chpl) {
    call_tmp_chpl39 = get_chpl_nodeID();
    call_tmp_chpl40 = chpl_rt_buildLocaleID(call_tmp_chpl39, c_sublocid_any);
    call_tmp_chpl38 = call_tmp_chpl40;
    chpl_macro_tmp_2256.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2256.addr = &call_tmp_chpl38;
    tmp_chpl15 = chpl_macro_tmp_2256;
    chpl_localeID_to_locale(tmp_chpl15, &ret_tmp_chpl);
    call_tmp_chpl41 = ret_tmp_chpl;
    call_tmp_chpl37 = call_tmp_chpl41;
    call_tmp_chpl42 = runningTasks_chpl(&call_tmp_chpl37);
    call_tmp_chpl43 = (call_tmp_chpl42 - INT64(1));
    if (call_tmp_chpl43 < maxTasks_chpl) {
      tmp_chpl16 = ((int64_t)((maxTasks_chpl - call_tmp_chpl43)));
    } else {
      tmp_chpl16 = INT64(1);
    }
    numChunks_chpl = tmp_chpl16;
    i_x_chpl = &call_tmp_chpl37;
    chpl_macro_tmp_2257.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2257.addr = i_x_chpl;
    tmp_chpl17 = chpl_macro_tmp_2257;
    deinit_chpl14(tmp_chpl17);
  }
  if (minSize_chpl > INT64(0)) {
    if (call_tmp_chpl36 < ((uint64_t)(((int64_t)((minSize_chpl * numChunks_chpl)))))) {
      tmp_chpl19 = (numChunks_chpl > INT64(1));
    } else {
      tmp_chpl19 = UINT8(false);
    }
    tmp_chpl18 = tmp_chpl19;
    while (tmp_chpl18) {
      i_lhs_chpl = &numChunks_chpl;
      *(i_lhs_chpl) -= INT64(1);
      if (unumElems_chpl < ((uint64_t)(((int64_t)((minSize_chpl * numChunks_chpl)))))) {
        tmp_chpl20 = (numChunks_chpl > INT64(1));
      } else {
        tmp_chpl20 = UINT8(false);
      }
      tmp_chpl18 = tmp_chpl20;
    }
  }
  if (((uint64_t)(numChunks_chpl)) > unumElems_chpl) {
    numChunks_chpl = ((int64_t)(unumElems_chpl));
  }
  ret_chpl = numChunks_chpl;
  _end__computeNumChunks_chpl:;
  return ret_chpl;
}

/* DSIUtil.chpl:93 */
static int64_t _computeNumChunks_chpl(int64_t maxTasks_chpl,
                                      chpl_bool ignoreRunning_chpl,
                                      int64_t minSize_chpl,
                                      uint64_t numElems_chpl) {
  int64_t ret_chpl;
  chpl_bool tmp_chpl15;
  uint64_t unumElems_chpl;
  int64_t numChunks_chpl;
  locale_chpl call_tmp_chpl36;
  chpl_localeID_t call_tmp_chpl37;
  int32_t call_tmp_chpl38;
  chpl_localeID_t call_tmp_chpl39;
  locale_chpl call_tmp_chpl40;
  locale_chpl ret_tmp_chpl;
  chpl____wide__ref_chpl_localeID_t tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl41;
  int64_t call_tmp_chpl42;
  int64_t tmp_chpl17;
  _ref_locale_chpl i_x_chpl = NULL;
  chpl____wide__ref_locale tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl19;
  chpl_bool tmp_chpl20;
  _ref_int64_t_chpl i_lhs_chpl = NULL;
  chpl_bool tmp_chpl21;
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_2258;
  chpl____wide__ref_locale chpl_macro_tmp_2259;
  if (! (INT64(0) < INT64(0))) {
    tmp_chpl15 = (numElems_chpl <= ((uint64_t)(INT64(0))));
  } else {
    tmp_chpl15 = UINT8(false);
  }
  if (tmp_chpl15) {
    ret_chpl = INT64(0);
    goto _end__computeNumChunks_chpl;
  }
  unumElems_chpl = numElems_chpl;
  numChunks_chpl = maxTasks_chpl;
  if (! ignoreRunning_chpl) {
    call_tmp_chpl38 = get_chpl_nodeID();
    call_tmp_chpl39 = chpl_rt_buildLocaleID(call_tmp_chpl38, c_sublocid_any);
    call_tmp_chpl37 = call_tmp_chpl39;
    chpl_macro_tmp_2258.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2258.addr = &call_tmp_chpl37;
    tmp_chpl16 = chpl_macro_tmp_2258;
    chpl_localeID_to_locale(tmp_chpl16, &ret_tmp_chpl);
    call_tmp_chpl40 = ret_tmp_chpl;
    call_tmp_chpl36 = call_tmp_chpl40;
    call_tmp_chpl41 = runningTasks_chpl(&call_tmp_chpl36);
    call_tmp_chpl42 = (call_tmp_chpl41 - INT64(1));
    if (call_tmp_chpl42 < maxTasks_chpl) {
      tmp_chpl17 = ((int64_t)((maxTasks_chpl - call_tmp_chpl42)));
    } else {
      tmp_chpl17 = INT64(1);
    }
    numChunks_chpl = tmp_chpl17;
    i_x_chpl = &call_tmp_chpl36;
    chpl_macro_tmp_2259.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2259.addr = i_x_chpl;
    tmp_chpl18 = chpl_macro_tmp_2259;
    deinit_chpl14(tmp_chpl18);
  }
  if (minSize_chpl > INT64(0)) {
    if (numElems_chpl < ((uint64_t)(((int64_t)((minSize_chpl * numChunks_chpl)))))) {
      tmp_chpl20 = (numChunks_chpl > INT64(1));
    } else {
      tmp_chpl20 = UINT8(false);
    }
    tmp_chpl19 = tmp_chpl20;
    while (tmp_chpl19) {
      i_lhs_chpl = &numChunks_chpl;
      *(i_lhs_chpl) -= INT64(1);
      if (unumElems_chpl < ((uint64_t)(((int64_t)((minSize_chpl * numChunks_chpl)))))) {
        tmp_chpl21 = (numChunks_chpl > INT64(1));
      } else {
        tmp_chpl21 = UINT8(false);
      }
      tmp_chpl19 = tmp_chpl21;
    }
  }
  if (((uint64_t)(numChunks_chpl)) > unumElems_chpl) {
    numChunks_chpl = ((int64_t)(unumElems_chpl));
  }
  ret_chpl = numChunks_chpl;
  _end__computeNumChunks_chpl:;
  return ret_chpl;
}

/* DSIUtil.chpl:119 */
static int64_t _computeNumChunks_chpl3(int64_t numElems_chpl) {
  int64_t local_dataParMinGranularity_chpl;
  chpl_bool local_dataParIgnoreRunningTasks_chpl;
  string_chpl local__str_literal_75_chpl;
  int64_t local_dataParTasksPerLocale_chpl;
  int64_t tmp_chpl15;
  locale_chpl call_tmp_chpl36;
  chpl_localeID_t call_tmp_chpl37;
  int32_t call_tmp_chpl38;
  chpl_localeID_t call_tmp_chpl39;
  locale_chpl call_tmp_chpl40;
  locale_chpl ret_tmp_chpl;
  chpl____wide__ref_chpl_localeID_t tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl18;
  _ref_locale_chpl i_x_chpl = NULL;
  chpl____wide__ref_locale tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl41;
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_2260;
  chpl____wide_object chpl_macro_tmp_2261;
  chpl____wide__nilType chpl_macro_tmp_2262;
  chpl____wide_object chpl_macro_tmp_2263;
  chpl____wide__ref_int64_t chpl_macro_tmp_2264;
  chpl____wide__ref_locale chpl_macro_tmp_2265;
  local_dataParMinGranularity_chpl = dataParMinGranularity_chpl;
  local_dataParIgnoreRunningTasks_chpl = dataParIgnoreRunningTasks_chpl;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  local_dataParTasksPerLocale_chpl = dataParTasksPerLocale_chpl;
  if (local_dataParTasksPerLocale_chpl == INT64(0)) {
    call_tmp_chpl38 = get_chpl_nodeID();
    call_tmp_chpl39 = chpl_rt_buildLocaleID(call_tmp_chpl38, c_sublocid_any);
    call_tmp_chpl37 = call_tmp_chpl39;
    chpl_macro_tmp_2260.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2260.addr = &call_tmp_chpl37;
    tmp_chpl16 = chpl_macro_tmp_2260;
    chpl_localeID_to_locale(tmp_chpl16, &ret_tmp_chpl);
    call_tmp_chpl40 = ret_tmp_chpl;
    call_tmp_chpl36 = call_tmp_chpl40;
    coerce_tmp_chpl3 = (&call_tmp_chpl36)->_instance;
    chpl_macro_tmp_2261.locale = (&coerce_tmp_chpl3)->locale;
    chpl_macro_tmp_2261.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
    coerce_tmp_chpl4 = chpl_macro_tmp_2261;
    chpl_macro_tmp_2262.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2262.addr = nil;
    chpl_macro_tmp_2263.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2263.addr = NULL;
    tmp_chpl17 = chpl_macro_tmp_2263;
    if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl17)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl17)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(122), INT32(76));
    }
    coerce_tmp_chpl5 = coerce_tmp_chpl3;
    chpl_check_nil((&coerce_tmp_chpl5)->addr, INT64(122), INT32(76));
    chpl_macro_tmp_2264.locale = (&coerce_tmp_chpl5)->locale;
    chpl_macro_tmp_2264.addr = &(((&coerce_tmp_chpl5)->addr)->maxTaskPar);
    chpl_gen_comm_get(((void*)(&tmp_chpl18)), chpl_nodeFromLocaleID((chpl_macro_tmp_2264).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2264).addr, sizeof(int64_t), COMMID(1), INT64(122), INT64(76));
    tmp_chpl15 = tmp_chpl18;
    i_x_chpl = &call_tmp_chpl36;
    chpl_macro_tmp_2265.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2265.addr = i_x_chpl;
    tmp_chpl19 = chpl_macro_tmp_2265;
    deinit_chpl14(tmp_chpl19);
  } else {
    tmp_chpl15 = local_dataParTasksPerLocale_chpl;
  }
  call_tmp_chpl41 = _computeNumChunks_chpl2(tmp_chpl15, local_dataParIgnoreRunningTasks_chpl, local_dataParMinGranularity_chpl, numElems_chpl);
  return call_tmp_chpl41;
}

/* DSIUtil.chpl:164 */
static uint64_t intCeilXDivByY_chpl(uint64_t x_chpl2,
                                    uint64_t y_chpl) {
  string_chpl local__str_literal_42_chpl;
  uint64_t call_tmp_chpl36;
  chpl_bool tmp_chpl15;
  uint64_t call_tmp_chpl37;
  uint64_t call_tmp_chpl38;
  local__str_literal_42_chpl = _str_literal_42_chpl /* "Attempt to divide by zero" */;
  call_tmp_chpl36 = (x_chpl2 - UINT64(1));
  if (! (INT64(0) < INT64(0))) {
    tmp_chpl15 = (y_chpl == ((uint64_t)(INT64(0))));
  } else {
    tmp_chpl15 = UINT8(false);
  }
  if (tmp_chpl15) {
    halt_chpl(&local__str_literal_42_chpl, INT64(164), INT32(76));
  }
  call_tmp_chpl37 = (call_tmp_chpl36 / y_chpl);
  call_tmp_chpl38 = (UINT64(1) + call_tmp_chpl37);
  return call_tmp_chpl38;
}

/* DSIUtil.chpl:166 */
static void _computeBlock_chpl(int64_t numelems_chpl,
                               int64_t numblocks_chpl,
                               int64_t blocknum_chpl,
                               int64_t wayhi_chpl,
                               int64_t waylo_chpl,
                               int64_t lo_chpl,
                               _tuple_2_star_int64_t_chpl * _retArg_chpl) {
  _tuple_2_star_int64_t_chpl ret_chpl;
  _tuple_2_star_int64_t_chpl ret_tmp_chpl;
  int64_t tmp_chpl15;
  uint64_t call_tmp_chpl36;
  int64_t tmp_chpl16;
  uint64_t call_tmp_chpl37;
  _tuple_2_star_int64_t_chpl ret_tmp_chpl2;
  if (numelems_chpl == INT64(0)) {
    *(ret_tmp_chpl + INT64(0)) = INT64(1);
    *(ret_tmp_chpl + INT64(1)) = INT64(0);
    *(ret_chpl + INT64(0)) = *(ret_tmp_chpl + INT64(0));
    *(ret_chpl + INT64(1)) = *(ret_tmp_chpl + INT64(1));
    goto _end__computeBlock_chpl;
  }
  if (blocknum_chpl == INT64(0)) {
    tmp_chpl15 = waylo_chpl;
  } else {
    call_tmp_chpl36 = intCeilXDivByY_chpl(((uint64_t)((((uint64_t)(numelems_chpl)) * ((uint64_t)(blocknum_chpl))))), ((uint64_t)(numblocks_chpl)));
    tmp_chpl15 = ((int64_t)((lo_chpl + ((int64_t)(call_tmp_chpl36)))));
  }
  if (blocknum_chpl == ((int64_t)((numblocks_chpl - INT64(1))))) {
    tmp_chpl16 = wayhi_chpl;
  } else {
    call_tmp_chpl37 = intCeilXDivByY_chpl(((uint64_t)((((uint64_t)(numelems_chpl)) * ((uint64_t)(((int64_t)((blocknum_chpl + INT64(1))))))))), ((uint64_t)(numblocks_chpl)));
    tmp_chpl16 = ((int64_t)((((int64_t)((lo_chpl + ((int64_t)(call_tmp_chpl37))))) - INT64(1))));
  }
  *(ret_tmp_chpl2 + INT64(0)) = tmp_chpl15;
  *(ret_tmp_chpl2 + INT64(1)) = tmp_chpl16;
  *(ret_chpl + INT64(0)) = *(ret_tmp_chpl2 + INT64(0));
  *(ret_chpl + INT64(1)) = *(ret_tmp_chpl2 + INT64(1));
  _end__computeBlock_chpl:;
  *(*(_retArg_chpl) + INT64(0)) = *(ret_chpl + INT64(0));
  *(*(_retArg_chpl) + INT64(1)) = *(ret_chpl + INT64(1));
  return;
}

