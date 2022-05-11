/* MemTracking.chpl:23 */
static void chpl__init_MemTracking(int64_t _ln_chpl,
                                   int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  chpl_bool call_tmp_chpl36;
  c_string call_tmp_chpl37;
  chpl_bool call_tmp_chpl38;
  c_string call_tmp_chpl39;
  chpl_bool call_tmp_chpl40;
  c_string call_tmp_chpl41;
  chpl_bool call_tmp_chpl42;
  c_string call_tmp_chpl43;
  chpl_bool call_tmp_chpl44;
  c_string call_tmp_chpl45;
  chpl_bool call_tmp_chpl46;
  c_string call_tmp_chpl47;
  chpl_bool call_tmp_chpl48;
  c_string call_tmp_chpl49;
  string_chpl ret_tmp_chpl;
  chpl_bool call_tmp_chpl50;
  c_string call_tmp_chpl51;
  string_chpl ret_tmp_chpl2;
  chpl_bool call_tmp_chpl52;
  c_string call_tmp_chpl53;
  string_chpl ret_tmp_chpl3;
  uint64_t ret_chpl;
  uint64_t ret_chpl2;
  if (chpl__init_MemTracking_p) {
    goto _exit_chpl__init_MemTracking_chpl;
  }
  printModuleInit_chpl("%*s\n", "MemTracking", INT64(11));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_MemTracking_p = UINT8(true);
  {
    chpl__init_CTypes(INT64(23), INT32(39));
  }
  chpl_addModule("MemTracking", ((c_fn_ptr)(chpl__deinit_MemTracking)));
  call_tmp_chpl36 = chpl_config_has_value("memTrack", "Built-in");
  if (! call_tmp_chpl36) {
    tmp_chpl5 = UINT8(false);
  } else {
    call_tmp_chpl37 = chpl_config_get_value("memTrack", "Built-in");
    tmp_chpl5 = _command_line_cast_chpl(call_tmp_chpl37);
  }
  memTrack_chpl = tmp_chpl5;
  chpl_comm_broadcast_private(INT64(12), sizeof(chpl_bool));
  call_tmp_chpl38 = chpl_config_has_value("memStats", "Built-in");
  if (! call_tmp_chpl38) {
    tmp_chpl6 = UINT8(false);
  } else {
    call_tmp_chpl39 = chpl_config_get_value("memStats", "Built-in");
    tmp_chpl6 = _command_line_cast_chpl2(call_tmp_chpl39);
  }
  memStats_chpl = tmp_chpl6;
  chpl_comm_broadcast_private(INT64(13), sizeof(chpl_bool));
  call_tmp_chpl40 = chpl_config_has_value("memLeaksByType", "Built-in");
  if (! call_tmp_chpl40) {
    tmp_chpl7 = UINT8(false);
  } else {
    call_tmp_chpl41 = chpl_config_get_value("memLeaksByType", "Built-in");
    tmp_chpl7 = _command_line_cast_chpl3(call_tmp_chpl41);
  }
  memLeaksByType_chpl = tmp_chpl7;
  chpl_comm_broadcast_private(INT64(14), sizeof(chpl_bool));
  call_tmp_chpl42 = chpl_config_has_value("memLeaks", "Built-in");
  if (! call_tmp_chpl42) {
    tmp_chpl8 = UINT8(false);
  } else {
    call_tmp_chpl43 = chpl_config_get_value("memLeaks", "Built-in");
    tmp_chpl8 = _command_line_cast_chpl5(call_tmp_chpl43);
  }
  memLeaks_chpl = tmp_chpl8;
  chpl_comm_broadcast_private(INT64(15), sizeof(chpl_bool));
  call_tmp_chpl44 = chpl_config_has_value("memMax", "Built-in");
  if (! call_tmp_chpl44) {
    tmp_chpl9 = UINT64(0);
  } else {
    call_tmp_chpl45 = chpl_config_get_value("memMax", "Built-in");
    tmp_chpl9 = _command_line_cast_chpl6(call_tmp_chpl45);
  }
  memMax_chpl = tmp_chpl9;
  chpl_comm_broadcast_private(INT64(16), sizeof(uint64_t));
  call_tmp_chpl46 = chpl_config_has_value("memThreshold", "Built-in");
  if (! call_tmp_chpl46) {
    tmp_chpl10 = UINT64(0);
  } else {
    call_tmp_chpl47 = chpl_config_get_value("memThreshold", "Built-in");
    tmp_chpl10 = _command_line_cast_chpl7(call_tmp_chpl47);
  }
  memThreshold_chpl = tmp_chpl10;
  chpl_comm_broadcast_private(INT64(17), sizeof(uint64_t));
  call_tmp_chpl48 = chpl_config_has_value("memLog", "Built-in");
  if (! call_tmp_chpl48) {
    init_chpl73(&tmp_chpl11);
  } else {
    call_tmp_chpl49 = chpl_config_get_value("memLog", "Built-in");
    _command_line_cast_chpl9(call_tmp_chpl49, &ret_tmp_chpl);
    tmp_chpl11 = ret_tmp_chpl;
  }
  memLog_chpl = tmp_chpl11;
  chpl_comm_broadcast_private(INT64(18), sizeof(string_chpl));
  call_tmp_chpl50 = chpl_config_has_value("memLeaksLog", "Built-in");
  if (! call_tmp_chpl50) {
    init_chpl73(&tmp_chpl12);
  } else {
    call_tmp_chpl51 = chpl_config_get_value("memLeaksLog", "Built-in");
    _command_line_cast_chpl12(call_tmp_chpl51, &ret_tmp_chpl2);
    tmp_chpl12 = ret_tmp_chpl2;
  }
  memLeaksLog_chpl = tmp_chpl12;
  chpl_comm_broadcast_private(INT64(19), sizeof(string_chpl));
  call_tmp_chpl52 = chpl_config_has_value("memLeaksByDesc", "Built-in");
  if (! call_tmp_chpl52) {
    init_chpl73(&tmp_chpl13);
  } else {
    call_tmp_chpl53 = chpl_config_get_value("memLeaksByDesc", "Built-in");
    _command_line_cast_chpl11(call_tmp_chpl53, &ret_tmp_chpl3);
    tmp_chpl13 = ret_tmp_chpl3;
  }
  memLeaksByDesc_chpl = tmp_chpl13;
  chpl_comm_broadcast_private(INT64(20), sizeof(string_chpl));
  checkValue_chpl4();
  ret_chpl = memMax_chpl;
  call_tmp_chpl20 = ret_chpl;
  cMemMax_chpl = call_tmp_chpl20;
  chpl_comm_broadcast_private(INT64(21), sizeof(uint64_t));
  checkValue_chpl4();
  ret_chpl2 = memThreshold_chpl;
  call_tmp_chpl21 = ret_chpl2;
  cMemThreshold_chpl = call_tmp_chpl21;
  chpl_comm_broadcast_private(INT64(22), sizeof(uint64_t));
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_MemTracking_chpl:;
  return;
}

/* MemTracking.chpl:23 */
static void chpl__deinit_MemTracking(void) {
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_1760;
  i_x_chpl = &memLog_chpl;
  chpl_macro_tmp_1760.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1760.addr = i_x_chpl;
  tmp_chpl15 = chpl_macro_tmp_1760;
  deinit_chpl42(tmp_chpl15);
  return;
}

/* MemTracking.chpl:74 */
void chpl_memTracking_returnConfigVals(chpl_bool * ret_memTrack,
                                       chpl_bool * ret_memStats,
                                       chpl_bool * ret_memLeaksByType,
                                       c_string * ret_memLeaksByDesc,
                                       chpl_bool * ret_memLeaks,
                                       uint64_t * ret_memMax,
                                       uint64_t * ret_memThreshold,
                                       c_string * ret_memLog,
                                       c_string * ret_memLeaksLog) {
  string_chpl local_memLeaksLog_chpl;
  string_chpl local_memLog_chpl;
  string_chpl local__str_literal_3282_chpl;
  string_chpl local_memLeaksByDesc_chpl;
  string_chpl local__str_literal_75_chpl;
  uint64_t local_cMemThreshold_chpl;
  uint64_t local_cMemMax_chpl;
  chpl_bool local_memLeaks_chpl;
  chpl_bool local_memLeaksByType_chpl;
  chpl_bool local_memStats_chpl;
  locale_chpl call_tmp_chpl36;
  chpl_localeID_t call_tmp_chpl37;
  int32_t call_tmp_chpl38;
  chpl_localeID_t call_tmp_chpl39;
  locale_chpl call_tmp_chpl40;
  locale_chpl ret_tmp_chpl;
  chpl____wide__ref_chpl_localeID_t tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl41;
  string_chpl local_memLeaksByDesc_chpl2;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t call_tmp_chpl42;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl local_memLog_chpl2;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t call_tmp_chpl43;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl local_memLeaksLog_chpl2;
  chpl____wide__ref_string tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t call_tmp_chpl44;
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t call_tmp_chpl45;
  int32_t call_tmp_chpl46;
  int32_t call_tmp_chpl47;
  _ref_locale_chpl i_x_chpl4 = NULL;
  chpl____wide__ref_locale tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_1761;
  chpl____wide_object chpl_macro_tmp_1762;
  chpl____wide__nilType chpl_macro_tmp_1763;
  chpl____wide_object chpl_macro_tmp_1764;
  chpl____wide__ref_string chpl_macro_tmp_1765;
  chpl____wide__ref_string chpl_macro_tmp_1766;
  chpl____wide__ref_string chpl_macro_tmp_1767;
  chpl____wide__ref_string chpl_macro_tmp_1768;
  chpl____wide__ref_string chpl_macro_tmp_1769;
  chpl____wide__ref_string chpl_macro_tmp_1770;
  chpl____wide__ref_locale chpl_macro_tmp_1771;
  local_memLeaksLog_chpl = memLeaksLog_chpl;
  local_memLog_chpl = memLog_chpl;
  local__str_literal_3282_chpl = _str_literal_3282_chpl /* "Cannot call .c_str() on a remote string" */;
  local_memLeaksByDesc_chpl = memLeaksByDesc_chpl;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  local_cMemThreshold_chpl = cMemThreshold_chpl;
  local_cMemMax_chpl = cMemMax_chpl;
  local_memLeaks_chpl = memLeaks_chpl;
  local_memLeaksByType_chpl = memLeaksByType_chpl;
  local_memStats_chpl = memStats_chpl;
  *(ret_memTrack) = memTrack_chpl;
  *(ret_memStats) = local_memStats_chpl;
  *(ret_memLeaksByType) = local_memLeaksByType_chpl;
  *(ret_memLeaks) = local_memLeaks_chpl;
  *(ret_memMax) = local_cMemMax_chpl;
  *(ret_memThreshold) = local_cMemThreshold_chpl;
  call_tmp_chpl38 = get_chpl_nodeID();
  call_tmp_chpl39 = chpl_rt_buildLocaleID(call_tmp_chpl38, c_sublocid_any);
  call_tmp_chpl37 = call_tmp_chpl39;
  chpl_macro_tmp_1761.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1761.addr = &call_tmp_chpl37;
  tmp_chpl15 = chpl_macro_tmp_1761;
  chpl_localeID_to_locale(tmp_chpl15, &ret_tmp_chpl);
  call_tmp_chpl40 = ret_tmp_chpl;
  call_tmp_chpl36 = call_tmp_chpl40;
  coerce_tmp_chpl3 = (&call_tmp_chpl36)->_instance;
  chpl_macro_tmp_1762.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_1762.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_1762;
  chpl_macro_tmp_1763.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1763.addr = nil;
  chpl_macro_tmp_1764.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1764.addr = NULL;
  tmp_chpl16 = chpl_macro_tmp_1764;
  if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl16)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl16)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(90), INT32(39));
  }
  chpl_check_nil((&coerce_tmp_chpl3)->addr, INT64(90), INT32(39));
  call_tmp_chpl41 = id_chpl(coerce_tmp_chpl3);
  if (call_tmp_chpl41 != INT64(0)) {
    if (! ((&local_memLeaksByDesc_chpl)->buffLen == INT64(0))) {
      chpl_macro_tmp_1765.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1765.addr = &local_memLeaksByDesc_chpl;
      tmp_chpl17 = chpl_macro_tmp_1765;
      init_ASSIGN__chpl21(&local_memLeaksByDesc_chpl2, tmp_chpl17);
      (&local_memLeaksByDesc_chpl2)->isOwned = UINT8(false);
      call_tmp_chpl42 = get_chpl_nodeID();
      if ((&local_memLeaksByDesc_chpl2)->locale_id != call_tmp_chpl42) {
        halt_chpl(&local__str_literal_3282_chpl, INT64(95), INT32(39));
      }
      *(ret_memLeaksByDesc) = ((c_string)((&local_memLeaksByDesc_chpl2)->buff));
      i_x_chpl = &local_memLeaksByDesc_chpl2;
      chpl_macro_tmp_1766.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1766.addr = i_x_chpl;
      tmp_chpl18 = chpl_macro_tmp_1766;
      deinit_chpl42(tmp_chpl18);
    } else {
      *(ret_memLeaksByDesc) = ((c_string)(nil));
    }
    if (! ((&local_memLog_chpl)->buffLen == INT64(0))) {
      chpl_macro_tmp_1767.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1767.addr = &local_memLog_chpl;
      tmp_chpl19 = chpl_macro_tmp_1767;
      init_ASSIGN__chpl21(&local_memLog_chpl2, tmp_chpl19);
      (&local_memLog_chpl2)->isOwned = UINT8(false);
      call_tmp_chpl43 = get_chpl_nodeID();
      if ((&local_memLog_chpl2)->locale_id != call_tmp_chpl43) {
        halt_chpl(&local__str_literal_3282_chpl, INT64(104), INT32(39));
      }
      *(ret_memLog) = ((c_string)((&local_memLog_chpl2)->buff));
      i_x_chpl2 = &local_memLog_chpl2;
      chpl_macro_tmp_1768.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1768.addr = i_x_chpl2;
      tmp_chpl20 = chpl_macro_tmp_1768;
      deinit_chpl42(tmp_chpl20);
    } else {
      *(ret_memLog) = ((c_string)(nil));
    }
    if (! ((&local_memLeaksLog_chpl)->buffLen == INT64(0))) {
      chpl_macro_tmp_1769.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1769.addr = &local_memLeaksLog_chpl;
      tmp_chpl21 = chpl_macro_tmp_1769;
      init_ASSIGN__chpl21(&local_memLeaksLog_chpl2, tmp_chpl21);
      (&local_memLeaksLog_chpl2)->isOwned = UINT8(false);
      call_tmp_chpl44 = get_chpl_nodeID();
      if ((&local_memLeaksLog_chpl2)->locale_id != call_tmp_chpl44) {
        halt_chpl(&local__str_literal_3282_chpl, INT64(113), INT32(39));
      }
      *(ret_memLeaksLog) = ((c_string)((&local_memLeaksLog_chpl2)->buff));
      i_x_chpl3 = &local_memLeaksLog_chpl2;
      chpl_macro_tmp_1770.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1770.addr = i_x_chpl3;
      tmp_chpl22 = chpl_macro_tmp_1770;
      deinit_chpl42(tmp_chpl22);
    } else {
      *(ret_memLeaksLog) = ((c_string)(nil));
    }
  } else {
    call_tmp_chpl45 = get_chpl_nodeID();
    if ((&local_memLeaksByDesc_chpl)->locale_id != call_tmp_chpl45) {
      halt_chpl(&local__str_literal_3282_chpl, INT64(119), INT32(39));
    }
    *(ret_memLeaksByDesc) = ((c_string)((&local_memLeaksByDesc_chpl)->buff));
    call_tmp_chpl46 = get_chpl_nodeID();
    if ((&local_memLog_chpl)->locale_id != call_tmp_chpl46) {
      halt_chpl(&local__str_literal_3282_chpl, INT64(120), INT32(39));
    }
    *(ret_memLog) = ((c_string)((&local_memLog_chpl)->buff));
    call_tmp_chpl47 = get_chpl_nodeID();
    if ((&local_memLeaksLog_chpl)->locale_id != call_tmp_chpl47) {
      halt_chpl(&local__str_literal_3282_chpl, INT64(121), INT32(39));
    }
    *(ret_memLeaksLog) = ((c_string)((&local_memLeaksLog_chpl)->buff));
  }
  i_x_chpl4 = &call_tmp_chpl36;
  chpl_macro_tmp_1771.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1771.addr = i_x_chpl4;
  tmp_chpl23 = chpl_macro_tmp_1771;
  deinit_chpl14(tmp_chpl23);
  return;
}

