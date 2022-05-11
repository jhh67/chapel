/* <internal>:0 */
static void chpl__auto_destroy_object(chpl____wide_object this_chpl7) {
  return;
}

/* ChapelBase.chpl:24 */
static void chpl__init_ChapelBase(int64_t _ln_chpl,
                                  int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  ArrayInit_chpl tmp_chpl15;
  chpl_ModuleDeinit tmp_chpl16 = NULL;
  chpl____wide_chpl_ModuleDeinit tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_ArrayInit_chpl chpl_macro_tmp_9;
  chpl____wide_chpl_ModuleDeinit chpl_macro_tmp_10;
  chpl____wide__ref__wide_chpl_ModuleDeinit chpl_macro_tmp_11;
  if (chpl__init_ChapelBase_p) {
    goto _exit_chpl__init_ChapelBase_chpl;
  }
  printModuleInit_chpl("%*s\n", "ChapelBase", INT64(10));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_ChapelBase_p = UINT8(true);
  {
    chpl__init_CTypes(INT64(24), INT32(2));
    chpl__init_HaltWrappers(INT64(24), INT32(2));
    chpl__init_ChapelTaskData(INT64(24), INT32(2));
    chpl__init_String(INT64(24), INT32(2));
  }
  rootLocaleInitialized_chpl = UINT8(false);
  tmp_chpl15 = ArrayInit_chpl_heuristicInit_chpl;
  chpl_check_nil((&chpl_arrayInitMethod)->addr, INT64(824), INT32(2));
  chpl_macro_tmp_9.locale = (&chpl_arrayInitMethod)->locale;
  chpl_macro_tmp_9.addr = &(((&chpl_arrayInitMethod)->addr)->value);
  chpl_gen_comm_put(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_9).locale, INT64(0), INT32(0)), (chpl_macro_tmp_9).addr, sizeof(ArrayInit_chpl), COMMID(0), INT64(824), INT64(2));
  call_tmp_chpl = ((chpl_ModuleDeinit)(nil));
  tmp_chpl16 = call_tmp_chpl;
  chpl_macro_tmp_10.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_10.addr = tmp_chpl16;
  tmp_chpl17 = chpl_macro_tmp_10;
  chpl_check_nil((&chpl_moduleDeinitFuns)->addr, INT64(2337), INT32(2));
  chpl_macro_tmp_11.locale = (&chpl_moduleDeinitFuns)->locale;
  chpl_macro_tmp_11.addr = &(((&chpl_moduleDeinitFuns)->addr)->value);
  chpl_gen_comm_put(((void*)(&tmp_chpl17)), chpl_nodeFromLocaleID((chpl_macro_tmp_11).locale, INT64(0), INT32(0)), (chpl_macro_tmp_11).addr, sizeof(chpl____wide_chpl_ModuleDeinit), COMMID(1), INT64(2337), INT64(2));
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_ChapelBase_chpl:;
  return;
}

/* IO.chpl:517 */
static iokind_chpl chpl___COLON_(uint8_t from_chpl,
                                 chpl____wide_Error * error_out_chpl) {
  string_chpl local__str_literal_3103_chpl;
  iokind_chpl ret_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  chpl____wide__nilType chpl_macro_tmp_12;
  chpl____wide_Error chpl_macro_tmp_13;
  local__str_literal_3103_chpl = _str_literal_3103_chpl /* "iokind" */;
  if (from_chpl == ((uint8_t)(INT64(0)))) {
    ret_chpl = ((iokind_chpl)(from_chpl));
    goto _end__COLON__chpl;
  } else {
    if (from_chpl == ((uint8_t)(INT64(1)))) {
      ret_chpl = ((iokind_chpl)(from_chpl));
      goto _end__COLON__chpl;
    } else {
      if (from_chpl == ((uint8_t)(INT64(2)))) {
        ret_chpl = ((iokind_chpl)(from_chpl));
        goto _end__COLON__chpl;
      } else {
        if (from_chpl == ((uint8_t)(INT64(3)))) {
          ret_chpl = ((iokind_chpl)(from_chpl));
          goto _end__COLON__chpl;
        }
      }
    }
  }
  chpl_macro_tmp_12.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_12.addr = nil;
  chpl_macro_tmp_13.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_13.addr = NULL;
  error_chpl = chpl_macro_tmp_13;
  tmp_chpl15 = &error_chpl;
  chpl_enum_cast_error(from_chpl, &local__str_literal_3103_chpl, tmp_chpl15, INT64(517), INT32(77));
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    *(error_out_chpl) = error_chpl;
    goto _end__COLON__chpl;
  }
  ret_chpl = iokind_chpl_dynamic_chpl;
  _end__COLON__chpl:;
  return ret_chpl;
}

/* ChapelBase.chpl:845 */
static ArrayInit_chpl init_elts_method_chpl2(int64_t s_chpl) {
  ArrayInit_chpl ret_chpl;
  ArrayInit_chpl initMethod_chpl;
  uint64_t call_tmp_chpl36;
  uint64_t call_tmp_chpl37;
  int64_t call_tmp_chpl38;
  ret_chpl = ArrayInit_chpl_heuristicInit_chpl;
  initMethod_chpl = ret_chpl;
  if (s_chpl == INT64(0)) {
    initMethod_chpl = ArrayInit_chpl_noInit_chpl;
  } else {
    if (! rootLocaleInitialized_chpl) {
      initMethod_chpl = ArrayInit_chpl_serialInit_chpl;
    } else {
      if (ret_chpl == ArrayInit_chpl_heuristicInit_chpl) {
        call_tmp_chpl37 = sizeof(locale_chpl);
        call_tmp_chpl36 = call_tmp_chpl37;
        checkValue_chpl2(call_tmp_chpl37);
        call_tmp_chpl38 = ((int64_t)(call_tmp_chpl36));
        checkValue_chpl6();
        if (((int64_t)((s_chpl * call_tmp_chpl38))) > INT64(2097152)) {
          initMethod_chpl = ArrayInit_chpl_parallelInit_chpl;
        } else {
          initMethod_chpl = ArrayInit_chpl_serialInit_chpl;
        }
      }
    }
  }
  return initMethod_chpl;
}

/* ChapelBase.chpl:845 */
static ArrayInit_chpl init_elts_method_chpl3(int64_t s_chpl) {
  ArrayInit_chpl ret_chpl;
  ArrayInit_chpl initMethod_chpl;
  ret_chpl = ArrayInit_chpl_heuristicInit_chpl;
  initMethod_chpl = ret_chpl;
  if (s_chpl == INT64(0)) {
    initMethod_chpl = ArrayInit_chpl_noInit_chpl;
  } else {
    if (! rootLocaleInitialized_chpl) {
      initMethod_chpl = ArrayInit_chpl_serialInit_chpl;
    } else {
      if (ret_chpl == ArrayInit_chpl_heuristicInit_chpl) {
        checkValue_chpl6();
        if (((int64_t)((s_chpl * INT64(8)))) > INT64(2097152)) {
          initMethod_chpl = ArrayInit_chpl_parallelInit_chpl;
        } else {
          initMethod_chpl = ArrayInit_chpl_serialInit_chpl;
        }
      }
    }
  }
  return initMethod_chpl;
}

/* ChapelBase.chpl:845 */
static ArrayInit_chpl init_elts_method_chpl(int64_t s_chpl) {
  ArrayInit_chpl ret_chpl;
  ArrayInit_chpl initMethod_chpl;
  ret_chpl = ArrayInit_chpl_heuristicInit_chpl;
  initMethod_chpl = ret_chpl;
  if (s_chpl == INT64(0)) {
    initMethod_chpl = ArrayInit_chpl_noInit_chpl;
  } else {
    if (! rootLocaleInitialized_chpl) {
      initMethod_chpl = ArrayInit_chpl_serialInit_chpl;
    } else {
      if (ret_chpl == ArrayInit_chpl_heuristicInit_chpl) {
        checkValue_chpl6();
        if (((int64_t)((s_chpl * INT64(8)))) > INT64(2097152)) {
          initMethod_chpl = ArrayInit_chpl_parallelInit_chpl;
        } else {
          initMethod_chpl = ArrayInit_chpl_serialInit_chpl;
        }
      }
    }
  }
  return initMethod_chpl;
}

/* ChapelBase.chpl:880 */
static void init_elts_chpl(_ddata_locale_chpl x_chpl2,
                           int64_t s_chpl,
                           int64_t lo_chpl) {
  string_chpl local__str_literal_101_chpl;
  ArrayInit_chpl call_tmp_chpl36;
  int64_t call_tmp_chpl37;
  int64_t _ic__F1_high_chpl;
  int64_t i_chpl;
  locale_chpl y_chpl;
  range_int64_t_bounded_F_chpl call_tmp_chpl38;
  range_int64_t_bounded_F_chpl ret_tmp_chpl;
  _ddata_locale_chpl x_chpl3 = NULL;
  int64_t call_tmp_chpl39;
  int64_t len_chpl;
  int64_t numChunks_chpl;
  int64_t tmp_chpl15;
  int64_t tmp_chpl16;
  range_int64_t_bounded_F_chpl tmpIter_chpl;
  range_int64_t_boundedLow_F_chpl call_tmp_chpl40;
  range_int64_t_boundedLow_F_chpl ret_tmp_chpl2;
  range_int64_t_bounded_F_chpl ret_tmp_chpl3;
  chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount_chpl = NULL;
  chpl___EndCount_AtomicT_int64_t_int64_t new_temp_chpl = NULL;
  int64_t numTasks_chpl;
  range_int64_t_bounded_F_chpl _ic__F0_this_chpl;
  int64_t i_chpl2;
  range_int64_t_bounded_F_chpl this_chpl7;
  int64_t coerce_tmp_chpl3;
  range_int64_t_bounded_F_chpl this_chpl8;
  int64_t end_chpl;
  _class_localscoforall_fn_chpl _args_forcoforall_fn_chpl = NULL;
  c_void_ptr _args_vforcoforall_fn_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl17 = NULL;
  chpl__class_localscoforall_fn_chpl_object chpl_macro_tmp_14;
  chpl____wide__nilType chpl_macro_tmp_15;
  chpl____wide_Error chpl_macro_tmp_16;
  local__str_literal_101_chpl = _str_literal_101_chpl /* "ArrayInit.heuristicInit should have been made concrete" */;
  call_tmp_chpl36 = init_elts_method_chpl2(s_chpl);
  if (call_tmp_chpl36 == ArrayInit_chpl_noInit_chpl) {
    goto _end_init_elts_chpl;
  } else {
    if (call_tmp_chpl36 == ArrayInit_chpl_serialInit_chpl) {
      call_tmp_chpl37 = (s_chpl - INT64(1));
      _ic__F1_high_chpl = call_tmp_chpl37;
      i_chpl = INT64(0);
      chpl_checkIfRangeIterWillOverflow(lo_chpl, call_tmp_chpl37, INT64(1), lo_chpl, call_tmp_chpl37, UINT8(true));
      for (i_chpl = lo_chpl; ((i_chpl <= _ic__F1_high_chpl)); i_chpl += INT64(1)) {
        init_chpl19(&y_chpl);
        *(x_chpl2 + i_chpl) = y_chpl;
      }
    } else {
      if (call_tmp_chpl36 == ArrayInit_chpl_parallelInit_chpl) {
        chpl_build_bounded_range(lo_chpl, ((int64_t)((s_chpl - INT64(1)))), &ret_tmp_chpl);
        call_tmp_chpl38 = ret_tmp_chpl;
        x_chpl3 = x_chpl2;
        call_tmp_chpl39 = sizeAs_chpl3(call_tmp_chpl38);
        len_chpl = call_tmp_chpl39;
        if (chpl_task_getSerial()) {
          tmp_chpl15 = INT64(1);
        } else {
          tmp_chpl16 = _computeNumChunks_chpl3(call_tmp_chpl39);
          tmp_chpl15 = tmp_chpl16;
        }
        numChunks_chpl = tmp_chpl15;
        chpl_build_low_bounded_range(INT64(0), &ret_tmp_chpl2);
        call_tmp_chpl40 = ret_tmp_chpl2;
        chpl___POUND_(call_tmp_chpl40, tmp_chpl15, &ret_tmp_chpl3);
        tmpIter_chpl = ret_tmp_chpl3;
        new_temp_chpl = _new_chpl(INT64(902), INT32(2));
        _coforallCount_chpl = new_temp_chpl;
        numTasks_chpl = chpl_boundedCoforallSize(tmpIter_chpl);
        _upEndCount_chpl(_coforallCount_chpl, numTasks_chpl);
        chpl_resetTaskSpawn(numTasks_chpl);
        _ic__F0_this_chpl = tmpIter_chpl;
        checkIfIterWillOverflow_chpl(tmpIter_chpl, UINT8(true));
        i_chpl2 = INT64(0);
        this_chpl7 = _ic__F0_this_chpl;
        coerce_tmp_chpl3 = (&this_chpl7)->_low;
        this_chpl8 = _ic__F0_this_chpl;
        end_chpl = (&this_chpl8)->_high;
        for (i_chpl2 = coerce_tmp_chpl3; ((i_chpl2 <= end_chpl)); i_chpl2 += INT64(1)) {
          _args_forcoforall_fn_chpl = ((_class_localscoforall_fn_chpl)(&chpl_macro_tmp_14));
          chpl_check_nil(_args_forcoforall_fn_chpl, INT64(902), INT32(2));
          (_args_forcoforall_fn_chpl)->_0_len = len_chpl;
          chpl_check_nil(_args_forcoforall_fn_chpl, INT64(902), INT32(2));
          (_args_forcoforall_fn_chpl)->_1_numChunks = numChunks_chpl;
          chpl_check_nil(_args_forcoforall_fn_chpl, INT64(902), INT32(2));
          (_args_forcoforall_fn_chpl)->_2_call_tmp = call_tmp_chpl38;
          chpl_check_nil(_args_forcoforall_fn_chpl, INT64(902), INT32(2));
          (_args_forcoforall_fn_chpl)->_3__coforallCount = _coforallCount_chpl;
          chpl_check_nil(_args_forcoforall_fn_chpl, INT64(902), INT32(2));
          (_args_forcoforall_fn_chpl)->_4_chunk = i_chpl2;
          chpl_check_nil(_args_forcoforall_fn_chpl, INT64(902), INT32(2));
          (_args_forcoforall_fn_chpl)->_5_x = x_chpl3;
          _args_vforcoforall_fn_chpl = ((void*)(_args_forcoforall_fn_chpl));
          /*** wrapcoforall_fn_chpl2 ***/ chpl_taskAddCoStmt(chpl_task_getRequestedSubloc(), INT64(27), ((chpl_task_bundle_p)(_args_vforcoforall_fn_chpl)), sizeof(chpl__class_localscoforall_fn_chpl_object), INT64(902), INT32(2));
        }
        chpl_macro_tmp_15.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_15.addr = nil;
        chpl_macro_tmp_16.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_16.addr = NULL;
        error_chpl = chpl_macro_tmp_16;
        tmp_chpl17 = &error_chpl;
        _waitEndCount_chpl3(_coforallCount_chpl, numTasks_chpl, tmp_chpl17);
        if ((&error_chpl)->addr != nil) {
          chpl_propagate_error(error_chpl, INT64(902), INT32(2));
        }
        chpl__delete3(_coforallCount_chpl);
        chpl_after_forall_fence();
      } else {
        halt_chpl(&local__str_literal_101_chpl, INT64(908), INT32(2));
      }
    }
  }
  _end_init_elts_chpl:;
  return;
}

/* ChapelBase.chpl:880 */
static void init_elts_chpl2(_ddata_int64_t_chpl x_chpl2,
                            int64_t s_chpl,
                            int64_t lo_chpl) {
  string_chpl local__str_literal_101_chpl;
  ArrayInit_chpl call_tmp_chpl36;
  int64_t call_tmp_chpl37;
  int64_t _ic__F1_high_chpl;
  int64_t i_chpl;
  range_int64_t_bounded_F_chpl call_tmp_chpl38;
  range_int64_t_bounded_F_chpl ret_tmp_chpl;
  _ddata_int64_t_chpl x_chpl3 = NULL;
  int64_t call_tmp_chpl39;
  int64_t len_chpl;
  int64_t numChunks_chpl;
  int64_t tmp_chpl15;
  int64_t tmp_chpl16;
  range_int64_t_bounded_F_chpl tmpIter_chpl;
  range_int64_t_boundedLow_F_chpl call_tmp_chpl40;
  range_int64_t_boundedLow_F_chpl ret_tmp_chpl2;
  range_int64_t_bounded_F_chpl ret_tmp_chpl3;
  chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount_chpl = NULL;
  chpl___EndCount_AtomicT_int64_t_int64_t new_temp_chpl = NULL;
  int64_t numTasks_chpl;
  range_int64_t_bounded_F_chpl _ic__F0_this_chpl;
  int64_t i_chpl2;
  range_int64_t_bounded_F_chpl this_chpl7;
  int64_t coerce_tmp_chpl3;
  range_int64_t_bounded_F_chpl this_chpl8;
  int64_t end_chpl;
  _class_localscoforall_fn_chpl2 _args_forcoforall_fn_chpl = NULL;
  c_void_ptr _args_vforcoforall_fn_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl17 = NULL;
  chpl__class_localscoforall_fn_chpl2_object chpl_macro_tmp_17;
  chpl____wide__nilType chpl_macro_tmp_18;
  chpl____wide_Error chpl_macro_tmp_19;
  local__str_literal_101_chpl = _str_literal_101_chpl /* "ArrayInit.heuristicInit should have been made concrete" */;
  call_tmp_chpl36 = init_elts_method_chpl3(s_chpl);
  if (call_tmp_chpl36 == ArrayInit_chpl_noInit_chpl) {
    goto _end_init_elts_chpl;
  } else {
    if (call_tmp_chpl36 == ArrayInit_chpl_serialInit_chpl) {
      call_tmp_chpl37 = (s_chpl - INT64(1));
      _ic__F1_high_chpl = call_tmp_chpl37;
      i_chpl = INT64(0);
      chpl_checkIfRangeIterWillOverflow(lo_chpl, call_tmp_chpl37, INT64(1), lo_chpl, call_tmp_chpl37, UINT8(true));
      for (i_chpl = lo_chpl; ((i_chpl <= _ic__F1_high_chpl)); i_chpl += INT64(1)) {
        *(x_chpl2 + i_chpl) = INT64(0);
      }
    } else {
      if (call_tmp_chpl36 == ArrayInit_chpl_parallelInit_chpl) {
        chpl_build_bounded_range(lo_chpl, ((int64_t)((s_chpl - INT64(1)))), &ret_tmp_chpl);
        call_tmp_chpl38 = ret_tmp_chpl;
        x_chpl3 = x_chpl2;
        call_tmp_chpl39 = sizeAs_chpl3(call_tmp_chpl38);
        len_chpl = call_tmp_chpl39;
        if (chpl_task_getSerial()) {
          tmp_chpl15 = INT64(1);
        } else {
          tmp_chpl16 = _computeNumChunks_chpl3(call_tmp_chpl39);
          tmp_chpl15 = tmp_chpl16;
        }
        numChunks_chpl = tmp_chpl15;
        chpl_build_low_bounded_range(INT64(0), &ret_tmp_chpl2);
        call_tmp_chpl40 = ret_tmp_chpl2;
        chpl___POUND_(call_tmp_chpl40, tmp_chpl15, &ret_tmp_chpl3);
        tmpIter_chpl = ret_tmp_chpl3;
        new_temp_chpl = _new_chpl(INT64(902), INT32(2));
        _coforallCount_chpl = new_temp_chpl;
        numTasks_chpl = chpl_boundedCoforallSize(tmpIter_chpl);
        _upEndCount_chpl(_coforallCount_chpl, numTasks_chpl);
        chpl_resetTaskSpawn(numTasks_chpl);
        _ic__F0_this_chpl = tmpIter_chpl;
        checkIfIterWillOverflow_chpl(tmpIter_chpl, UINT8(true));
        i_chpl2 = INT64(0);
        this_chpl7 = _ic__F0_this_chpl;
        coerce_tmp_chpl3 = (&this_chpl7)->_low;
        this_chpl8 = _ic__F0_this_chpl;
        end_chpl = (&this_chpl8)->_high;
        for (i_chpl2 = coerce_tmp_chpl3; ((i_chpl2 <= end_chpl)); i_chpl2 += INT64(1)) {
          _args_forcoforall_fn_chpl = ((_class_localscoforall_fn_chpl2)(&chpl_macro_tmp_17));
          chpl_check_nil(_args_forcoforall_fn_chpl, INT64(902), INT32(2));
          (_args_forcoforall_fn_chpl)->_0_len = len_chpl;
          chpl_check_nil(_args_forcoforall_fn_chpl, INT64(902), INT32(2));
          (_args_forcoforall_fn_chpl)->_1_numChunks = numChunks_chpl;
          chpl_check_nil(_args_forcoforall_fn_chpl, INT64(902), INT32(2));
          (_args_forcoforall_fn_chpl)->_2_call_tmp = call_tmp_chpl38;
          chpl_check_nil(_args_forcoforall_fn_chpl, INT64(902), INT32(2));
          (_args_forcoforall_fn_chpl)->_3__coforallCount = _coforallCount_chpl;
          chpl_check_nil(_args_forcoforall_fn_chpl, INT64(902), INT32(2));
          (_args_forcoforall_fn_chpl)->_4_chunk = i_chpl2;
          chpl_check_nil(_args_forcoforall_fn_chpl, INT64(902), INT32(2));
          (_args_forcoforall_fn_chpl)->_5_x = x_chpl3;
          _args_vforcoforall_fn_chpl = ((void*)(_args_forcoforall_fn_chpl));
          /*** wrapcoforall_fn_chpl3 ***/ chpl_taskAddCoStmt(chpl_task_getRequestedSubloc(), INT64(28), ((chpl_task_bundle_p)(_args_vforcoforall_fn_chpl)), sizeof(chpl__class_localscoforall_fn_chpl2_object), INT64(902), INT32(2));
        }
        chpl_macro_tmp_18.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_18.addr = nil;
        chpl_macro_tmp_19.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_19.addr = NULL;
        error_chpl = chpl_macro_tmp_19;
        tmp_chpl17 = &error_chpl;
        _waitEndCount_chpl3(_coforallCount_chpl, numTasks_chpl, tmp_chpl17);
        if ((&error_chpl)->addr != nil) {
          chpl_propagate_error(error_chpl, INT64(902), INT32(2));
        }
        chpl__delete3(_coforallCount_chpl);
        chpl_after_forall_fence();
      } else {
        halt_chpl(&local__str_literal_101_chpl, INT64(908), INT32(2));
      }
    }
  }
  _end_init_elts_chpl:;
  return;
}

/* ChapelBase.chpl:880 */
static void init_elts_chpl3(_ddata_uint64_t_chpl x_chpl2,
                            int64_t s_chpl,
                            int64_t lo_chpl) {
  string_chpl local__str_literal_101_chpl;
  ArrayInit_chpl call_tmp_chpl36;
  int64_t call_tmp_chpl37;
  int64_t _ic__F1_high_chpl;
  int64_t i_chpl;
  range_int64_t_bounded_F_chpl call_tmp_chpl38;
  range_int64_t_bounded_F_chpl ret_tmp_chpl;
  _ddata_uint64_t_chpl x_chpl3 = NULL;
  int64_t call_tmp_chpl39;
  int64_t len_chpl;
  int64_t numChunks_chpl;
  int64_t tmp_chpl15;
  int64_t tmp_chpl16;
  range_int64_t_bounded_F_chpl tmpIter_chpl;
  range_int64_t_boundedLow_F_chpl call_tmp_chpl40;
  range_int64_t_boundedLow_F_chpl ret_tmp_chpl2;
  range_int64_t_bounded_F_chpl ret_tmp_chpl3;
  chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount_chpl = NULL;
  chpl___EndCount_AtomicT_int64_t_int64_t new_temp_chpl = NULL;
  int64_t numTasks_chpl;
  range_int64_t_bounded_F_chpl _ic__F0_this_chpl;
  int64_t i_chpl2;
  range_int64_t_bounded_F_chpl this_chpl7;
  int64_t coerce_tmp_chpl3;
  range_int64_t_bounded_F_chpl this_chpl8;
  int64_t end_chpl;
  _class_localscoforall_fn_chpl3 _args_forcoforall_fn_chpl = NULL;
  c_void_ptr _args_vforcoforall_fn_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl17 = NULL;
  chpl__class_localscoforall_fn_chpl3_object chpl_macro_tmp_20;
  chpl____wide__nilType chpl_macro_tmp_21;
  chpl____wide_Error chpl_macro_tmp_22;
  local__str_literal_101_chpl = _str_literal_101_chpl /* "ArrayInit.heuristicInit should have been made concrete" */;
  call_tmp_chpl36 = init_elts_method_chpl(s_chpl);
  if (call_tmp_chpl36 == ArrayInit_chpl_noInit_chpl) {
    goto _end_init_elts_chpl;
  } else {
    if (call_tmp_chpl36 == ArrayInit_chpl_serialInit_chpl) {
      call_tmp_chpl37 = (s_chpl - INT64(1));
      _ic__F1_high_chpl = call_tmp_chpl37;
      i_chpl = INT64(0);
      chpl_checkIfRangeIterWillOverflow(lo_chpl, call_tmp_chpl37, INT64(1), lo_chpl, call_tmp_chpl37, UINT8(true));
      for (i_chpl = lo_chpl; ((i_chpl <= _ic__F1_high_chpl)); i_chpl += INT64(1)) {
        *(x_chpl2 + i_chpl) = UINT64(0);
      }
    } else {
      if (call_tmp_chpl36 == ArrayInit_chpl_parallelInit_chpl) {
        chpl_build_bounded_range(lo_chpl, ((int64_t)((s_chpl - INT64(1)))), &ret_tmp_chpl);
        call_tmp_chpl38 = ret_tmp_chpl;
        x_chpl3 = x_chpl2;
        call_tmp_chpl39 = sizeAs_chpl3(call_tmp_chpl38);
        len_chpl = call_tmp_chpl39;
        if (chpl_task_getSerial()) {
          tmp_chpl15 = INT64(1);
        } else {
          tmp_chpl16 = _computeNumChunks_chpl3(call_tmp_chpl39);
          tmp_chpl15 = tmp_chpl16;
        }
        numChunks_chpl = tmp_chpl15;
        chpl_build_low_bounded_range(INT64(0), &ret_tmp_chpl2);
        call_tmp_chpl40 = ret_tmp_chpl2;
        chpl___POUND_(call_tmp_chpl40, tmp_chpl15, &ret_tmp_chpl3);
        tmpIter_chpl = ret_tmp_chpl3;
        new_temp_chpl = _new_chpl(INT64(902), INT32(2));
        _coforallCount_chpl = new_temp_chpl;
        numTasks_chpl = chpl_boundedCoforallSize(tmpIter_chpl);
        _upEndCount_chpl(_coforallCount_chpl, numTasks_chpl);
        chpl_resetTaskSpawn(numTasks_chpl);
        _ic__F0_this_chpl = tmpIter_chpl;
        checkIfIterWillOverflow_chpl(tmpIter_chpl, UINT8(true));
        i_chpl2 = INT64(0);
        this_chpl7 = _ic__F0_this_chpl;
        coerce_tmp_chpl3 = (&this_chpl7)->_low;
        this_chpl8 = _ic__F0_this_chpl;
        end_chpl = (&this_chpl8)->_high;
        for (i_chpl2 = coerce_tmp_chpl3; ((i_chpl2 <= end_chpl)); i_chpl2 += INT64(1)) {
          _args_forcoforall_fn_chpl = ((_class_localscoforall_fn_chpl3)(&chpl_macro_tmp_20));
          chpl_check_nil(_args_forcoforall_fn_chpl, INT64(902), INT32(2));
          (_args_forcoforall_fn_chpl)->_0_len = len_chpl;
          chpl_check_nil(_args_forcoforall_fn_chpl, INT64(902), INT32(2));
          (_args_forcoforall_fn_chpl)->_1_numChunks = numChunks_chpl;
          chpl_check_nil(_args_forcoforall_fn_chpl, INT64(902), INT32(2));
          (_args_forcoforall_fn_chpl)->_2_call_tmp = call_tmp_chpl38;
          chpl_check_nil(_args_forcoforall_fn_chpl, INT64(902), INT32(2));
          (_args_forcoforall_fn_chpl)->_3__coforallCount = _coforallCount_chpl;
          chpl_check_nil(_args_forcoforall_fn_chpl, INT64(902), INT32(2));
          (_args_forcoforall_fn_chpl)->_4_chunk = i_chpl2;
          chpl_check_nil(_args_forcoforall_fn_chpl, INT64(902), INT32(2));
          (_args_forcoforall_fn_chpl)->_5_x = x_chpl3;
          _args_vforcoforall_fn_chpl = ((void*)(_args_forcoforall_fn_chpl));
          /*** wrapcoforall_fn_chpl ***/ chpl_taskAddCoStmt(chpl_task_getRequestedSubloc(), INT64(26), ((chpl_task_bundle_p)(_args_vforcoforall_fn_chpl)), sizeof(chpl__class_localscoforall_fn_chpl3_object), INT64(902), INT32(2));
        }
        chpl_macro_tmp_21.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_21.addr = nil;
        chpl_macro_tmp_22.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_22.addr = NULL;
        error_chpl = chpl_macro_tmp_22;
        tmp_chpl17 = &error_chpl;
        _waitEndCount_chpl3(_coforallCount_chpl, numTasks_chpl, tmp_chpl17);
        if ((&error_chpl)->addr != nil) {
          chpl_propagate_error(error_chpl, INT64(902), INT32(2));
        }
        chpl__delete3(_coforallCount_chpl);
        chpl_after_forall_fence();
      } else {
        halt_chpl(&local__str_literal_101_chpl, INT64(908), INT32(2));
      }
    }
  }
  _end_init_elts_chpl:;
  return;
}

/* ChapelBase.chpl:902 */
static void wrapcoforall_fn_chpl(_class_localscoforall_fn_chpl3 c_chpl) {
  int64_t _0_len_chpl;
  int64_t _1_numChunks_chpl;
  range_int64_t_bounded_F_chpl _2_call_tmp_chpl;
  range_int64_t_bounded_F_chpl tmp_chpl15;
  chpl___EndCount_AtomicT_int64_t_int64_t _3__coforallCount_chpl = NULL;
  int64_t _4_chunk_chpl;
  chpl_rmem_consist_acquire(INT64(902), INT32(2));
  chpl_check_nil(c_chpl, INT64(902), INT32(2));
  _0_len_chpl = (c_chpl)->_0_len;
  chpl_check_nil(c_chpl, INT64(902), INT32(2));
  _1_numChunks_chpl = (c_chpl)->_1_numChunks;
  chpl_check_nil(c_chpl, INT64(902), INT32(2));
  tmp_chpl15 = (c_chpl)->_2_call_tmp;
  _2_call_tmp_chpl = tmp_chpl15;
  chpl_check_nil(c_chpl, INT64(902), INT32(2));
  _3__coforallCount_chpl = (c_chpl)->_3__coforallCount;
  chpl_check_nil(c_chpl, INT64(902), INT32(2));
  _4_chunk_chpl = (c_chpl)->_4_chunk;
  chpl_check_nil(c_chpl, INT64(902), INT32(2));
  coforall_fn_chpl3(_0_len_chpl, _1_numChunks_chpl, _2_call_tmp_chpl, _3__coforallCount_chpl, _4_chunk_chpl, (c_chpl)->_5_x);
  chpl_check_nil(c_chpl, INT64(902), INT32(2));
  _downEndCount_chpl((c_chpl)->_3__coforallCount, nil);
  return;
}

/* ChapelBase.chpl:902 */
static void coforall_fn_chpl(int64_t len_chpl,
                             int64_t numChunks_chpl,
                             range_int64_t_bounded_F_chpl this_chpl7,
                             chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount_chpl,
                             int64_t chunk_chpl,
                             _ddata_locale_chpl x_chpl2) {
  _tuple_2_star_int64_t_chpl call_tmp_chpl36;
  _tuple_2_star_int64_t_chpl ret_tmp_chpl;
  int64_t tmp_x0_chpl;
  int64_t tmp_x1_chpl;
  int64_t _ic__F1_high_chpl;
  int64_t i_chpl;
  locale_chpl y_chpl;
  _computeBlock_chpl(len_chpl, numChunks_chpl, chunk_chpl, (&this_chpl7)->_high, (&this_chpl7)->_low, (&this_chpl7)->_low, &ret_tmp_chpl);
  *(call_tmp_chpl36 + INT64(0)) = *(ret_tmp_chpl + INT64(0));
  *(call_tmp_chpl36 + INT64(1)) = *(ret_tmp_chpl + INT64(1));
  tmp_x0_chpl = *(call_tmp_chpl36 + INT64(0));
  tmp_x1_chpl = *(call_tmp_chpl36 + INT64(1));
  _ic__F1_high_chpl = tmp_x1_chpl;
  i_chpl = INT64(0);
  chpl_checkIfRangeIterWillOverflow(tmp_x0_chpl, tmp_x1_chpl, INT64(1), tmp_x0_chpl, tmp_x1_chpl, UINT8(true));
  for (i_chpl = tmp_x0_chpl; ((i_chpl <= _ic__F1_high_chpl)); i_chpl += INT64(1)) {
    init_chpl19(&y_chpl);
    *(x_chpl2 + i_chpl) = y_chpl;
  }
  return;
}

/* ChapelBase.chpl:902 */
static void coforall_fn_chpl2(int64_t len_chpl,
                              int64_t numChunks_chpl,
                              range_int64_t_bounded_F_chpl this_chpl7,
                              chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount_chpl,
                              int64_t chunk_chpl,
                              _ddata_int64_t_chpl x_chpl2) {
  _tuple_2_star_int64_t_chpl call_tmp_chpl36;
  _tuple_2_star_int64_t_chpl ret_tmp_chpl;
  int64_t tmp_x0_chpl;
  int64_t tmp_x1_chpl;
  int64_t _ic__F1_high_chpl;
  int64_t i_chpl;
  _computeBlock_chpl(len_chpl, numChunks_chpl, chunk_chpl, (&this_chpl7)->_high, (&this_chpl7)->_low, (&this_chpl7)->_low, &ret_tmp_chpl);
  *(call_tmp_chpl36 + INT64(0)) = *(ret_tmp_chpl + INT64(0));
  *(call_tmp_chpl36 + INT64(1)) = *(ret_tmp_chpl + INT64(1));
  tmp_x0_chpl = *(call_tmp_chpl36 + INT64(0));
  tmp_x1_chpl = *(call_tmp_chpl36 + INT64(1));
  _ic__F1_high_chpl = tmp_x1_chpl;
  i_chpl = INT64(0);
  chpl_checkIfRangeIterWillOverflow(tmp_x0_chpl, tmp_x1_chpl, INT64(1), tmp_x0_chpl, tmp_x1_chpl, UINT8(true));
  for (i_chpl = tmp_x0_chpl; ((i_chpl <= _ic__F1_high_chpl)); i_chpl += INT64(1)) {
    *(x_chpl2 + i_chpl) = INT64(0);
  }
  return;
}

/* ChapelBase.chpl:902 */
static void coforall_fn_chpl3(int64_t len_chpl,
                              int64_t numChunks_chpl,
                              range_int64_t_bounded_F_chpl this_chpl7,
                              chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount_chpl,
                              int64_t chunk_chpl,
                              _ddata_uint64_t_chpl x_chpl2) {
  _tuple_2_star_int64_t_chpl call_tmp_chpl36;
  _tuple_2_star_int64_t_chpl ret_tmp_chpl;
  int64_t tmp_x0_chpl;
  int64_t tmp_x1_chpl;
  int64_t _ic__F1_high_chpl;
  int64_t i_chpl;
  _computeBlock_chpl(len_chpl, numChunks_chpl, chunk_chpl, (&this_chpl7)->_high, (&this_chpl7)->_low, (&this_chpl7)->_low, &ret_tmp_chpl);
  *(call_tmp_chpl36 + INT64(0)) = *(ret_tmp_chpl + INT64(0));
  *(call_tmp_chpl36 + INT64(1)) = *(ret_tmp_chpl + INT64(1));
  tmp_x0_chpl = *(call_tmp_chpl36 + INT64(0));
  tmp_x1_chpl = *(call_tmp_chpl36 + INT64(1));
  _ic__F1_high_chpl = tmp_x1_chpl;
  i_chpl = INT64(0);
  chpl_checkIfRangeIterWillOverflow(tmp_x0_chpl, tmp_x1_chpl, INT64(1), tmp_x0_chpl, tmp_x1_chpl, UINT8(true));
  for (i_chpl = tmp_x0_chpl; ((i_chpl <= _ic__F1_high_chpl)); i_chpl += INT64(1)) {
    *(x_chpl2 + i_chpl) = UINT64(0);
  }
  return;
}

/* ChapelBase.chpl:902 */
static void wrapcoforall_fn_chpl2(_class_localscoforall_fn_chpl c_chpl) {
  int64_t _0_len_chpl;
  int64_t _1_numChunks_chpl;
  range_int64_t_bounded_F_chpl _2_call_tmp_chpl;
  range_int64_t_bounded_F_chpl tmp_chpl15;
  chpl___EndCount_AtomicT_int64_t_int64_t _3__coforallCount_chpl = NULL;
  int64_t _4_chunk_chpl;
  chpl_rmem_consist_acquire(INT64(902), INT32(2));
  chpl_check_nil(c_chpl, INT64(902), INT32(2));
  _0_len_chpl = (c_chpl)->_0_len;
  chpl_check_nil(c_chpl, INT64(902), INT32(2));
  _1_numChunks_chpl = (c_chpl)->_1_numChunks;
  chpl_check_nil(c_chpl, INT64(902), INT32(2));
  tmp_chpl15 = (c_chpl)->_2_call_tmp;
  _2_call_tmp_chpl = tmp_chpl15;
  chpl_check_nil(c_chpl, INT64(902), INT32(2));
  _3__coforallCount_chpl = (c_chpl)->_3__coforallCount;
  chpl_check_nil(c_chpl, INT64(902), INT32(2));
  _4_chunk_chpl = (c_chpl)->_4_chunk;
  chpl_check_nil(c_chpl, INT64(902), INT32(2));
  coforall_fn_chpl(_0_len_chpl, _1_numChunks_chpl, _2_call_tmp_chpl, _3__coforallCount_chpl, _4_chunk_chpl, (c_chpl)->_5_x);
  chpl_check_nil(c_chpl, INT64(902), INT32(2));
  _downEndCount_chpl((c_chpl)->_3__coforallCount, nil);
  return;
}

/* ChapelBase.chpl:902 */
static void wrapcoforall_fn_chpl3(_class_localscoforall_fn_chpl2 c_chpl) {
  int64_t _0_len_chpl;
  int64_t _1_numChunks_chpl;
  range_int64_t_bounded_F_chpl _2_call_tmp_chpl;
  range_int64_t_bounded_F_chpl tmp_chpl15;
  chpl___EndCount_AtomicT_int64_t_int64_t _3__coforallCount_chpl = NULL;
  int64_t _4_chunk_chpl;
  chpl_rmem_consist_acquire(INT64(902), INT32(2));
  chpl_check_nil(c_chpl, INT64(902), INT32(2));
  _0_len_chpl = (c_chpl)->_0_len;
  chpl_check_nil(c_chpl, INT64(902), INT32(2));
  _1_numChunks_chpl = (c_chpl)->_1_numChunks;
  chpl_check_nil(c_chpl, INT64(902), INT32(2));
  tmp_chpl15 = (c_chpl)->_2_call_tmp;
  _2_call_tmp_chpl = tmp_chpl15;
  chpl_check_nil(c_chpl, INT64(902), INT32(2));
  _3__coforallCount_chpl = (c_chpl)->_3__coforallCount;
  chpl_check_nil(c_chpl, INT64(902), INT32(2));
  _4_chunk_chpl = (c_chpl)->_4_chunk;
  chpl_check_nil(c_chpl, INT64(902), INT32(2));
  coforall_fn_chpl2(_0_len_chpl, _1_numChunks_chpl, _2_call_tmp_chpl, _3__coforallCount_chpl, _4_chunk_chpl, (c_chpl)->_5_x);
  chpl_check_nil(c_chpl, INT64(902), INT32(2));
  _downEndCount_chpl((c_chpl)->_3__coforallCount, nil);
  return;
}

/* ChapelBase.chpl:977 */
static _ddata_uint64_t_chpl _ddata_allocate_noinit_chpl2(int64_t size_chpl3,
                                                         chpl_bool * callPostAlloc_chpl,
                                                         int32_t subloc_chpl) {
  chpl_bool _formal_tmp_callPostAlloc_chpl;
  c_void_ptr call_tmp_chpl36;
  _ddata_uint64_t_chpl call_tmp_chpl37 = NULL;
  _formal_tmp_callPostAlloc_chpl = UINT8(false);
  call_tmp_chpl36 = chpl_mem_array_alloc(((uint64_t)(size_chpl3)), ((uint64_t)(sizeof(uint64_t))), subloc_chpl, &_formal_tmp_callPostAlloc_chpl, INT64(986), INT32(2));
  call_tmp_chpl37 = ((_ddata_uint64_t_chpl)(call_tmp_chpl36));
  *(callPostAlloc_chpl) = _formal_tmp_callPostAlloc_chpl;
  return call_tmp_chpl37;
}

/* ChapelBase.chpl:977 */
static _ddata_int64_t_chpl _ddata_allocate_noinit_chpl(int64_t size_chpl3,
                                                       chpl_bool * callPostAlloc_chpl,
                                                       int32_t subloc_chpl) {
  chpl_bool _formal_tmp_callPostAlloc_chpl;
  c_void_ptr call_tmp_chpl36;
  _ddata_int64_t_chpl call_tmp_chpl37 = NULL;
  _formal_tmp_callPostAlloc_chpl = UINT8(false);
  call_tmp_chpl36 = chpl_mem_array_alloc(((uint64_t)(size_chpl3)), ((uint64_t)(sizeof(int64_t))), subloc_chpl, &_formal_tmp_callPostAlloc_chpl, INT64(986), INT32(2));
  call_tmp_chpl37 = ((_ddata_int64_t_chpl)(call_tmp_chpl36));
  *(callPostAlloc_chpl) = _formal_tmp_callPostAlloc_chpl;
  return call_tmp_chpl37;
}

/* ChapelBase.chpl:977 */
static _ddata_locale_chpl _ddata_allocate_noinit_chpl3(int64_t size_chpl3,
                                                       chpl_bool * callPostAlloc_chpl,
                                                       int32_t subloc_chpl) {
  chpl_bool _formal_tmp_callPostAlloc_chpl;
  c_void_ptr call_tmp_chpl36;
  _ddata_locale_chpl call_tmp_chpl37 = NULL;
  _formal_tmp_callPostAlloc_chpl = UINT8(false);
  call_tmp_chpl36 = chpl_mem_array_alloc(((uint64_t)(size_chpl3)), ((uint64_t)(sizeof(locale_chpl))), subloc_chpl, &_formal_tmp_callPostAlloc_chpl, INT64(986), INT32(2));
  call_tmp_chpl37 = ((_ddata_locale_chpl)(call_tmp_chpl36));
  *(callPostAlloc_chpl) = _formal_tmp_callPostAlloc_chpl;
  return call_tmp_chpl37;
}

/* ChapelBase.chpl:1175 */
static void chpl_resetTaskSpawn(int64_t numTasks_chpl) {
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
  c_ptr_chpl_task_infoChapel_t_chpl call_tmp_chpl41 = NULL;
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_23;
  chpl____wide_object chpl_macro_tmp_24;
  chpl____wide__nilType chpl_macro_tmp_25;
  chpl____wide_object chpl_macro_tmp_26;
  chpl____wide__ref_int64_t chpl_macro_tmp_27;
  chpl____wide__ref_locale chpl_macro_tmp_28;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  local_dataParTasksPerLocale_chpl = dataParTasksPerLocale_chpl;
  if (local_dataParTasksPerLocale_chpl == INT64(0)) {
    call_tmp_chpl38 = get_chpl_nodeID();
    call_tmp_chpl39 = chpl_rt_buildLocaleID(call_tmp_chpl38, c_sublocid_any);
    call_tmp_chpl37 = call_tmp_chpl39;
    chpl_macro_tmp_23.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_23.addr = &call_tmp_chpl37;
    tmp_chpl16 = chpl_macro_tmp_23;
    chpl_localeID_to_locale(tmp_chpl16, &ret_tmp_chpl);
    call_tmp_chpl40 = ret_tmp_chpl;
    call_tmp_chpl36 = call_tmp_chpl40;
    coerce_tmp_chpl3 = (&call_tmp_chpl36)->_instance;
    chpl_macro_tmp_24.locale = (&coerce_tmp_chpl3)->locale;
    chpl_macro_tmp_24.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
    coerce_tmp_chpl4 = chpl_macro_tmp_24;
    chpl_macro_tmp_25.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_25.addr = nil;
    chpl_macro_tmp_26.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_26.addr = NULL;
    tmp_chpl17 = chpl_macro_tmp_26;
    if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl17)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl17)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1176), INT32(2));
    }
    coerce_tmp_chpl5 = coerce_tmp_chpl3;
    chpl_check_nil((&coerce_tmp_chpl5)->addr, INT64(1176), INT32(2));
    chpl_macro_tmp_27.locale = (&coerce_tmp_chpl5)->locale;
    chpl_macro_tmp_27.addr = &(((&coerce_tmp_chpl5)->addr)->maxTaskPar);
    chpl_gen_comm_get(((void*)(&tmp_chpl18)), chpl_nodeFromLocaleID((chpl_macro_tmp_27).locale, INT64(0), INT32(0)), (chpl_macro_tmp_27).addr, sizeof(int64_t), COMMID(2), INT64(1176), INT64(2));
    tmp_chpl15 = tmp_chpl18;
    i_x_chpl = &call_tmp_chpl36;
    chpl_macro_tmp_28.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_28.addr = i_x_chpl;
    tmp_chpl19 = chpl_macro_tmp_28;
    deinit_chpl14(tmp_chpl19);
  } else {
    tmp_chpl15 = local_dataParTasksPerLocale_chpl;
  }
  if (numTasks_chpl >= tmp_chpl15) {
    chpl_task_reset_spawn_order();
  } else {
    if (numTasks_chpl == INT64(1)) {
      call_tmp_chpl41 = chpl_task_getInfoChapel();
      chpl_task_data_setNextCoStmtSerial(call_tmp_chpl41, UINT8(true));
    }
  }
  return;
}

/* ChapelBase.chpl:1200 */
static void chpl__auto_destroy__EndCountBase(chpl____wide__EndCountBase this_chpl7) {
  chpl____wide__ref_chpl_TaskErrors _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_LocalSpinlock _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicBool _field_destructor_tmp__chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_TaskErrors chpl_macro_tmp_29;
  chpl____wide__ref_chpl_LocalSpinlock chpl_macro_tmp_30;
  chpl____wide__ref_AtomicBool chpl_macro_tmp_31;
  chpl_check_nil((&this_chpl7)->addr, INT64(1201), INT32(2));
  chpl_macro_tmp_29.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_29.addr = &(((&this_chpl7)->addr)->errors);
  _field_destructor_tmp__chpl = chpl_macro_tmp_29;
  chpl_macro_tmp_30.locale = (_field_destructor_tmp__chpl).locale;
  chpl_macro_tmp_30.addr = &(((_field_destructor_tmp__chpl).addr)->_errorsLock);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_30;
  chpl_macro_tmp_31.locale = (_field_destructor_tmp__chpl2).locale;
  chpl_macro_tmp_31.addr = &(((_field_destructor_tmp__chpl2).addr)->l);
  _field_destructor_tmp__chpl3 = chpl_macro_tmp_31;
  deinit_chpl(_field_destructor_tmp__chpl3);
  return;
}

/* ChapelBase.chpl:1206 */
static void chpl__auto_destroy__EndCount(chpl____wide__EndCount_RAtomicT_int64_t_RAtomicT_int64_t this_chpl7) {
  chpl____wide__EndCountBase _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_TaskErrors _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_LocalSpinlock _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicBool _field_destructor_tmp__chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCountBase chpl_macro_tmp_32;
  chpl____wide__ref_chpl_TaskErrors chpl_macro_tmp_33;
  chpl____wide__ref_chpl_LocalSpinlock chpl_macro_tmp_34;
  chpl____wide__ref_AtomicBool chpl_macro_tmp_35;
  chpl_macro_tmp_32.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_32.addr = ((chpl___EndCountBase)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_32;
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(1206), INT32(2));
  chpl_macro_tmp_33.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_33.addr = &(((&_parent_destructor_tmp__chpl)->addr)->errors);
  _field_destructor_tmp__chpl = chpl_macro_tmp_33;
  chpl_macro_tmp_34.locale = (_field_destructor_tmp__chpl).locale;
  chpl_macro_tmp_34.addr = &(((_field_destructor_tmp__chpl).addr)->_errorsLock);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_34;
  chpl_macro_tmp_35.locale = (_field_destructor_tmp__chpl2).locale;
  chpl_macro_tmp_35.addr = &(((_field_destructor_tmp__chpl2).addr)->l);
  _field_destructor_tmp__chpl3 = chpl_macro_tmp_35;
  deinit_chpl(_field_destructor_tmp__chpl3);
  return;
}

/* ChapelBase.chpl:1206 */
static void chpl__auto_destroy__EndCount2(chpl____wide__EndCount_AtomicT_int64_t_int64_t this_chpl7) {
  chpl____wide__ref_AtomicT_int64_t _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCountBase _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_TaskErrors _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_LocalSpinlock _field_destructor_tmp__chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicBool _field_destructor_tmp__chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_36;
  chpl____wide__EndCountBase chpl_macro_tmp_37;
  chpl____wide__ref_chpl_TaskErrors chpl_macro_tmp_38;
  chpl____wide__ref_chpl_LocalSpinlock chpl_macro_tmp_39;
  chpl____wide__ref_AtomicBool chpl_macro_tmp_40;
  chpl_check_nil((&this_chpl7)->addr, INT64(1209), INT32(2));
  chpl_macro_tmp_36.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_36.addr = &(((&this_chpl7)->addr)->i);
  _field_destructor_tmp__chpl = chpl_macro_tmp_36;
  deinit_chpl2(_field_destructor_tmp__chpl);
  chpl_macro_tmp_37.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_37.addr = ((chpl___EndCountBase)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_37;
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(1206), INT32(2));
  chpl_macro_tmp_38.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_38.addr = &(((&_parent_destructor_tmp__chpl)->addr)->errors);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_38;
  chpl_macro_tmp_39.locale = (_field_destructor_tmp__chpl2).locale;
  chpl_macro_tmp_39.addr = &(((_field_destructor_tmp__chpl2).addr)->_errorsLock);
  _field_destructor_tmp__chpl3 = chpl_macro_tmp_39;
  chpl_macro_tmp_40.locale = (_field_destructor_tmp__chpl3).locale;
  chpl_macro_tmp_40.addr = &(((_field_destructor_tmp__chpl3).addr)->l);
  _field_destructor_tmp__chpl4 = chpl_macro_tmp_40;
  deinit_chpl(_field_destructor_tmp__chpl4);
  return;
}

/* ChapelBase.chpl:1211 */
static void init_chpl8(chpl___EndCount_AtomicT_int64_t_int64_t this_chpl7) {
  chpl___EndCountBase super_tmp_chpl = NULL;
  chpl_TaskErrors ret_chpl;
  chpl_TaskErrors errors_chpl;
  Error_chpl tmp_chpl15 = NULL;
  chpl_LocalSpinlock default_arg__errorsLock_chpl;
  chpl_LocalSpinlock ret_chpl2;
  chpl_LocalSpinlock _errorsLock_chpl;
  AtomicT_int64_t_chpl i_chpl;
  chpl____wide__ref_AtomicT_int64_t tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_41;
  chpl_check_nil(this_chpl7, INT64(1211), INT32(2));
  super_tmp_chpl = &((this_chpl7)->super);
  tmp_chpl15 = ((Error_chpl)(nil));
  init_chpl25(&_errorsLock_chpl);
  ret_chpl2 = _errorsLock_chpl;
  default_arg__errorsLock_chpl = ret_chpl2;
  init_chpl74(&errors_chpl, tmp_chpl15, &default_arg__errorsLock_chpl);
  ret_chpl = errors_chpl;
  chpl_check_nil(super_tmp_chpl, INT64(1211), INT32(2));
  ((object_chpl)(&((super_tmp_chpl)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_object_chpl;
  chpl_check_nil(super_tmp_chpl, INT64(1211), INT32(2));
  (super_tmp_chpl)->errors = ret_chpl;
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_chpl___EndCountBase;
  ((object_chpl)(((chpl___EndCountBase)(this_chpl7))))->chpl__cid = chpl__cid_chpl___EndCountBase;
  chpl_macro_tmp_41.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_41.addr = &i_chpl;
  tmp_chpl16 = chpl_macro_tmp_41;
  init_chpl2(tmp_chpl16);
  chpl_check_nil(this_chpl7, INT64(1211), INT32(2));
  (this_chpl7)->i = i_chpl;
  chpl_check_nil(this_chpl7, INT64(1211), INT32(2));
  (this_chpl7)->taskCnt = INT64(0);
  ((object_chpl)(this_chpl7))->chpl__cid = chpl__cid_chpl___EndCount_AtomicT_int64_t_int64_t;
  return;
}

/* ChapelBase.chpl:1211 */
static void init_chpl9(chpl___EndCount_RAtomicT_int64_t_RAtomicT_int64_t this_chpl7) {
  chpl___EndCountBase super_tmp_chpl = NULL;
  chpl_TaskErrors ret_chpl;
  chpl_TaskErrors errors_chpl;
  Error_chpl tmp_chpl15 = NULL;
  chpl_LocalSpinlock default_arg__errorsLock_chpl;
  chpl_LocalSpinlock ret_chpl2;
  chpl_LocalSpinlock _errorsLock_chpl;
  RAtomicT_int64_t_chpl i_chpl;
  RAtomicT_int64_t_chpl taskCnt_chpl;
  chpl_check_nil(this_chpl7, INT64(1211), INT32(2));
  super_tmp_chpl = &((this_chpl7)->super);
  tmp_chpl15 = ((Error_chpl)(nil));
  init_chpl25(&_errorsLock_chpl);
  ret_chpl2 = _errorsLock_chpl;
  default_arg__errorsLock_chpl = ret_chpl2;
  init_chpl74(&errors_chpl, tmp_chpl15, &default_arg__errorsLock_chpl);
  ret_chpl = errors_chpl;
  chpl_check_nil(super_tmp_chpl, INT64(1211), INT32(2));
  ((object_chpl)(&((super_tmp_chpl)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_object_chpl;
  chpl_check_nil(super_tmp_chpl, INT64(1211), INT32(2));
  (super_tmp_chpl)->errors = ret_chpl;
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_chpl___EndCountBase;
  ((object_chpl)(((chpl___EndCountBase)(this_chpl7))))->chpl__cid = chpl__cid_chpl___EndCountBase;
  init_chpl46(&i_chpl, INT64(0));
  chpl_check_nil(this_chpl7, INT64(1211), INT32(2));
  (this_chpl7)->i = i_chpl;
  init_chpl46(&taskCnt_chpl, INT64(0));
  chpl_check_nil(this_chpl7, INT64(1211), INT32(2));
  (this_chpl7)->taskCnt = taskCnt_chpl;
  ((object_chpl)(this_chpl7))->chpl__cid = chpl__cid_chpl___EndCount_RAtomicT_int64_t_RAtomicT_int64_t;
  return;
}

/* ChapelBase.chpl:1211 */
static chpl___EndCount_RAtomicT_int64_t_RAtomicT_int64_t _new_chpl2(int64_t _ln_chpl,
                                                                    int32_t _fn_chpl) {
  chpl___EndCount_RAtomicT_int64_t_RAtomicT_int64_t initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  chpl___EndCount_RAtomicT_int64_t_RAtomicT_int64_t tmp_chpl15 = NULL;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_chpl___EndCount_RAtomicT_int64_t_RAtomicT_int64_t_object), INT16(0), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((chpl___EndCount_RAtomicT_int64_t_RAtomicT_int64_t)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_chpl___EndCount_RAtomicT_int64_t_RAtomicT_int64_t;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  init_chpl9(initTemp_chpl);
  tmp_chpl15 = initTemp_chpl;
  return tmp_chpl15;
}

/* ChapelBase.chpl:1211 */
static chpl___EndCount_AtomicT_int64_t_int64_t _new_chpl(int64_t _ln_chpl,
                                                         int32_t _fn_chpl) {
  chpl___EndCount_AtomicT_int64_t_int64_t initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  chpl___EndCount_AtomicT_int64_t_int64_t tmp_chpl15 = NULL;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_chpl___EndCount_AtomicT_int64_t_int64_t_object), INT16(42), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((chpl___EndCount_AtomicT_int64_t_int64_t)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_chpl___EndCount_AtomicT_int64_t_int64_t;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  init_chpl8(initTemp_chpl);
  tmp_chpl15 = initTemp_chpl;
  return tmp_chpl15;
}

/* ChapelBase.chpl:1281 */
static void _upEndCount_chpl2(chpl___EndCount_RAtomicT_int64_t_RAtomicT_int64_t e_chpl,
                              int64_t numTasks_chpl) {
  string_chpl local__str_literal_75_chpl;
  chpl___EndCount_RAtomicT_int64_t_RAtomicT_int64_t coerce_tmp_chpl3 = NULL;
  _ref_RAtomicT_int64_t_chpl call_tmp_chpl36 = NULL;
  int64_t v_chpl;
  _ref_int64_t_chpl call_tmp_chpl37 = NULL;
  _ref_int64_t_chpl call_tmp_chpl38 = NULL;
  memory_order ret_chpl;
  locale_chpl call_tmp_chpl39;
  chpl_localeID_t call_tmp_chpl40;
  int32_t call_tmp_chpl41;
  chpl_localeID_t call_tmp_chpl42;
  locale_chpl call_tmp_chpl43;
  locale_chpl ret_tmp_chpl;
  chpl____wide__ref_chpl_localeID_t tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicT_int64_t call_tmp_chpl44 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl45;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl11 _args_foron_fn_chpl = NULL;
  chpl____wide__ref_AtomicT_int64_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  _ref_locale_chpl i_x_chpl = NULL;
  chpl____wide__ref_locale tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_42;
  chpl____wide_object chpl_macro_tmp_43;
  chpl____wide__nilType chpl_macro_tmp_44;
  chpl____wide_object chpl_macro_tmp_45;
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_46;
  chpl__class_localson_fn_chpl11_object chpl_macro_tmp_47;
  chpl____wide__ref_locale chpl_macro_tmp_48;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = e_chpl;
  chpl_check_nil(coerce_tmp_chpl3, INT64(1282), INT32(2));
  call_tmp_chpl36 = &((coerce_tmp_chpl3)->i);
  chpl_rmem_consist_maybe_release2();
  v_chpl = numTasks_chpl;
  call_tmp_chpl37 = &((call_tmp_chpl36)->_v);
  call_tmp_chpl38 = &((call_tmp_chpl36)->_v);
  ret_chpl = memory_order_release;
  chpl_comm_atomic_add_int64(&v_chpl, chpl_nodeID, ((c_void_ptr)(call_tmp_chpl38)), ret_chpl, INT64(1282), INT32(2));
  chpl_rmem_consist_maybe_acquire4();
  call_tmp_chpl41 = get_chpl_nodeID();
  call_tmp_chpl42 = chpl_rt_buildLocaleID(call_tmp_chpl41, c_sublocid_any);
  call_tmp_chpl40 = call_tmp_chpl42;
  chpl_macro_tmp_42.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_42.addr = &call_tmp_chpl40;
  tmp_chpl15 = chpl_macro_tmp_42;
  chpl_localeID_to_locale(tmp_chpl15, &ret_tmp_chpl);
  call_tmp_chpl43 = ret_tmp_chpl;
  call_tmp_chpl39 = call_tmp_chpl43;
  coerce_tmp_chpl4 = (&call_tmp_chpl39)->_instance;
  chpl_macro_tmp_43.locale = (&coerce_tmp_chpl4)->locale;
  chpl_macro_tmp_43.addr = ((object_chpl)((&coerce_tmp_chpl4)->addr));
  coerce_tmp_chpl5 = chpl_macro_tmp_43;
  chpl_macro_tmp_44.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_44.addr = nil;
  chpl_macro_tmp_45.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_45.addr = NULL;
  tmp_chpl16 = chpl_macro_tmp_45;
  if (! (((&coerce_tmp_chpl5)->addr != (&tmp_chpl16)->addr) || ((!(! (&coerce_tmp_chpl5)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl5)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl16)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(95), INT32(26));
  }
  coerce_tmp_chpl6 = coerce_tmp_chpl4;
  chpl_check_nil((&coerce_tmp_chpl6)->addr, INT64(1292), INT32(2));
  chpl_macro_tmp_46.locale = (&coerce_tmp_chpl6)->locale;
  chpl_macro_tmp_46.addr = &(((&coerce_tmp_chpl6)->addr)->runningTaskCounter);
  call_tmp_chpl44 = chpl_macro_tmp_46;
  chpl_rmem_consist_maybe_release5();
  call_tmp_chpl45 = (&call_tmp_chpl44)->locale;
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl45);
  if (isdirect_chpl) {
    on_fn_chpl11(call_tmp_chpl44, INT64(1));
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl11)(&chpl_macro_tmp_47));
    chpl_check_nil(_args_foron_fn_chpl, INT64(1292), INT32(2));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl45;
    tmp_chpl17 = call_tmp_chpl44;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1292), INT32(2));
    (_args_foron_fn_chpl)->_1_this = tmp_chpl17;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1292), INT32(2));
    (_args_foron_fn_chpl)->_2_value = INT64(1);
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl11 ***/ chpl_executeOnFast(call_tmp_chpl45, INT32(13), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl11_object), INT64(613), INT32(14));
  }
  chpl_rmem_consist_maybe_acquire5();
  i_x_chpl = &call_tmp_chpl39;
  chpl_macro_tmp_48.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_48.addr = i_x_chpl;
  tmp_chpl18 = chpl_macro_tmp_48;
  deinit_chpl14(tmp_chpl18);
  return;
}

/* ChapelBase.chpl:1281 */
static void _upEndCount_chpl(chpl___EndCount_AtomicT_int64_t_int64_t e_chpl,
                             int64_t numTasks_chpl) {
  string_chpl local__str_literal_75_chpl;
  chpl___EndCount_AtomicT_int64_t_int64_t coerce_tmp_chpl3 = NULL;
  _ref_AtomicT_int64_t_chpl call_tmp_chpl36 = NULL;
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_AtomicT_int64_t tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl8 _args_foron_fn_chpl = NULL;
  _ref_AtomicT_int64_t_chpl tmp_chpl16 = NULL;
  chpl____wide__ref_AtomicT_int64_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  locale_chpl call_tmp_chpl38;
  chpl_localeID_t call_tmp_chpl39;
  int32_t call_tmp_chpl40;
  chpl_localeID_t call_tmp_chpl41;
  locale_chpl call_tmp_chpl42;
  locale_chpl ret_tmp_chpl;
  chpl____wide__ref_chpl_localeID_t tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl43;
  chpl____wide_BaseLocale coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicT_int64_t call_tmp_chpl44 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl45;
  chpl_bool isdirect_chpl2;
  _class_localson_fn_chpl9 _args_foron_fn_chpl2 = NULL;
  chpl____wide__ref_AtomicT_int64_t tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  _ref_locale_chpl i_x_chpl = NULL;
  chpl____wide__ref_locale tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_49;
  chpl__class_localson_fn_chpl8_object chpl_macro_tmp_50;
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_51;
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_52;
  chpl____wide_object chpl_macro_tmp_53;
  chpl____wide__nilType chpl_macro_tmp_54;
  chpl____wide_object chpl_macro_tmp_55;
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_56;
  chpl__class_localson_fn_chpl9_object chpl_macro_tmp_57;
  chpl____wide__ref_locale chpl_macro_tmp_58;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = e_chpl;
  chpl_check_nil(coerce_tmp_chpl3, INT64(1282), INT32(2));
  call_tmp_chpl36 = &((coerce_tmp_chpl3)->i);
  chpl_rmem_consist_maybe_release2();
  call_tmp_chpl37 = chpl_gen_getLocaleID();
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
  if (isdirect_chpl) {
    chpl_macro_tmp_49.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_49.addr = call_tmp_chpl36;
    tmp_chpl15 = chpl_macro_tmp_49;
    on_fn_chpl8(tmp_chpl15, numTasks_chpl);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl8)(&chpl_macro_tmp_50));
    chpl_check_nil(_args_foron_fn_chpl, INT64(1282), INT32(2));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
    tmp_chpl16 = call_tmp_chpl36;
    chpl_macro_tmp_51.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_51.addr = tmp_chpl16;
    tmp_chpl17 = chpl_macro_tmp_51;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1282), INT32(2));
    (_args_foron_fn_chpl)->_1_this = tmp_chpl17;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1282), INT32(2));
    (_args_foron_fn_chpl)->_2_value = numTasks_chpl;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl8 ***/ chpl_executeOnFast(call_tmp_chpl37, INT32(10), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl8_object), INT64(585), INT32(14));
  }
  chpl_rmem_consist_maybe_acquire4();
  if (numTasks_chpl > INT64(1)) {
    call_tmp_chpl40 = get_chpl_nodeID();
    call_tmp_chpl41 = chpl_rt_buildLocaleID(call_tmp_chpl40, c_sublocid_any);
    call_tmp_chpl39 = call_tmp_chpl41;
    chpl_macro_tmp_52.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_52.addr = &call_tmp_chpl39;
    tmp_chpl18 = chpl_macro_tmp_52;
    chpl_localeID_to_locale(tmp_chpl18, &ret_tmp_chpl);
    call_tmp_chpl42 = ret_tmp_chpl;
    call_tmp_chpl38 = call_tmp_chpl42;
    call_tmp_chpl43 = (numTasks_chpl - INT64(1));
    coerce_tmp_chpl4 = (&call_tmp_chpl38)->_instance;
    chpl_macro_tmp_53.locale = (&coerce_tmp_chpl4)->locale;
    chpl_macro_tmp_53.addr = ((object_chpl)((&coerce_tmp_chpl4)->addr));
    coerce_tmp_chpl5 = chpl_macro_tmp_53;
    chpl_macro_tmp_54.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_54.addr = nil;
    chpl_macro_tmp_55.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_55.addr = NULL;
    tmp_chpl19 = chpl_macro_tmp_55;
    if (! (((&coerce_tmp_chpl5)->addr != (&tmp_chpl19)->addr) || ((!(! (&coerce_tmp_chpl5)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl5)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl19)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(95), INT32(26));
    }
    coerce_tmp_chpl6 = coerce_tmp_chpl4;
    chpl_check_nil((&coerce_tmp_chpl6)->addr, INT64(1286), INT32(2));
    chpl_macro_tmp_56.locale = (&coerce_tmp_chpl6)->locale;
    chpl_macro_tmp_56.addr = &(((&coerce_tmp_chpl6)->addr)->runningTaskCounter);
    call_tmp_chpl44 = chpl_macro_tmp_56;
    chpl_rmem_consist_maybe_release5();
    call_tmp_chpl45 = (&call_tmp_chpl44)->locale;
    isdirect_chpl2 = chpl_doDirectExecuteOn(call_tmp_chpl45);
    if (isdirect_chpl2) {
      on_fn_chpl9(call_tmp_chpl44, call_tmp_chpl43);
    } else {
      _args_foron_fn_chpl2 = ((_class_localson_fn_chpl9)(&chpl_macro_tmp_57));
      chpl_check_nil(_args_foron_fn_chpl2, INT64(1286), INT32(2));
      (_args_foron_fn_chpl2)->_0_tmp = call_tmp_chpl45;
      tmp_chpl20 = call_tmp_chpl44;
      chpl_check_nil(_args_foron_fn_chpl2, INT64(1286), INT32(2));
      (_args_foron_fn_chpl2)->_1_this = tmp_chpl20;
      chpl_check_nil(_args_foron_fn_chpl2, INT64(1286), INT32(2));
      (_args_foron_fn_chpl2)->_2_value = call_tmp_chpl43;
      _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
      /*** wrapon_fn_chpl9 ***/ chpl_executeOnFast(call_tmp_chpl45, INT32(11), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn_chpl9_object), INT64(585), INT32(14));
    }
    chpl_rmem_consist_maybe_acquire5();
    i_x_chpl = &call_tmp_chpl38;
    chpl_macro_tmp_58.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_58.addr = i_x_chpl;
    tmp_chpl21 = chpl_macro_tmp_58;
    deinit_chpl14(tmp_chpl21);
  }
  chpl_comm_task_create();
  return;
}

/* ChapelBase.chpl:1304 */
static void chpl_after_forall_fence(void) {
  chpl_comm_unordered_task_fence();
  return;
}

/* ChapelBase.chpl:1314 */
static void _downEndCount_chpl(chpl___EndCount_AtomicT_int64_t_int64_t e_chpl,
                               Error_chpl err_chpl) {
  chpl___EndCountBase coerce_tmp_chpl3 = NULL;
  chpl____wide__EndCountBase tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___EndCount_AtomicT_int64_t_int64_t coerce_tmp_chpl4 = NULL;
  _ref_AtomicT_int64_t_chpl call_tmp_chpl36 = NULL;
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_AtomicT_int64_t tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl10 _args_foron_fn_chpl = NULL;
  _ref_AtomicT_int64_t_chpl tmp_chpl17 = NULL;
  chpl____wide__ref_AtomicT_int64_t tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__EndCountBase chpl_macro_tmp_59;
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_60;
  chpl__class_localson_fn_chpl10_object chpl_macro_tmp_61;
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_62;
  coerce_tmp_chpl3 = ((chpl___EndCountBase)(e_chpl));
  chpl_macro_tmp_59.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_59.addr = coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_59;
  chpl_save_task_error(tmp_chpl15, err_chpl);
  chpl_comm_task_end();
  coerce_tmp_chpl4 = e_chpl;
  chpl_check_nil(coerce_tmp_chpl4, INT64(1318), INT32(2));
  call_tmp_chpl36 = &((coerce_tmp_chpl4)->i);
  chpl_rmem_consist_maybe_release2();
  call_tmp_chpl37 = chpl_gen_getLocaleID();
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
  if (isdirect_chpl) {
    chpl_macro_tmp_60.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_60.addr = call_tmp_chpl36;
    tmp_chpl16 = chpl_macro_tmp_60;
    on_fn_chpl10(tmp_chpl16, INT64(1));
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl10)(&chpl_macro_tmp_61));
    chpl_check_nil(_args_foron_fn_chpl, INT64(1318), INT32(2));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
    tmp_chpl17 = call_tmp_chpl36;
    chpl_macro_tmp_62.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_62.addr = tmp_chpl17;
    tmp_chpl18 = chpl_macro_tmp_62;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1318), INT32(2));
    (_args_foron_fn_chpl)->_1_this = tmp_chpl18;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1318), INT32(2));
    (_args_foron_fn_chpl)->_2_value = INT64(1);
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl10 ***/ chpl_executeOnFast(call_tmp_chpl37, INT32(12), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl10_object), INT64(613), INT32(14));
  }
  chpl_rmem_consist_maybe_acquire4();
  return;
}

/* ChapelBase.chpl:1314 */
static void _downEndCount_chpl2(chpl____wide__EndCount_RAtomicT_int64_t_RAtomicT_int64_t e_chpl,
                                Error_chpl err_chpl) {
  chpl____wide__EndCountBase coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_RAtomicT_int64_t_RAtomicT_int64_t coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_RAtomicT_int64_t call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t v_chpl;
  chpl____wide__ref_int64_t call_tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t call_tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order ret_chpl;
  chpl____wide__EndCountBase chpl_macro_tmp_63;
  chpl____wide__ref_RAtomicT_int64_t chpl_macro_tmp_64;
  chpl____wide__ref_int64_t chpl_macro_tmp_65;
  chpl____wide__ref_int64_t chpl_macro_tmp_66;
  chpl_macro_tmp_63.locale = (&e_chpl)->locale;
  chpl_macro_tmp_63.addr = ((chpl___EndCountBase)((&e_chpl)->addr));
  coerce_tmp_chpl3 = chpl_macro_tmp_63;
  chpl_save_task_error(coerce_tmp_chpl3, err_chpl);
  chpl_comm_task_end();
  coerce_tmp_chpl4 = e_chpl;
  chpl_check_nil((&coerce_tmp_chpl4)->addr, INT64(1318), INT32(2));
  chpl_macro_tmp_64.locale = (&coerce_tmp_chpl4)->locale;
  chpl_macro_tmp_64.addr = &(((&coerce_tmp_chpl4)->addr)->i);
  call_tmp_chpl36 = chpl_macro_tmp_64;
  chpl_rmem_consist_maybe_release2();
  v_chpl = INT64(1);
  chpl_macro_tmp_65.locale = (call_tmp_chpl36).locale;
  chpl_macro_tmp_65.addr = &(((call_tmp_chpl36).addr)->_v);
  call_tmp_chpl37 = chpl_macro_tmp_65;
  chpl_macro_tmp_66.locale = (call_tmp_chpl36).locale;
  chpl_macro_tmp_66.addr = &(((call_tmp_chpl36).addr)->_v);
  call_tmp_chpl38 = chpl_macro_tmp_66;
  ret_chpl = memory_order_release;
  chpl_comm_atomic_sub_int64(&v_chpl, chpl_nodeFromLocaleID((&call_tmp_chpl37)->locale, INT64(0), INT32(0)), ((c_void_ptr)((&call_tmp_chpl38)->addr)), ret_chpl, INT64(1318), INT32(2));
  chpl_rmem_consist_maybe_acquire4();
  return;
}

/* ChapelBase.chpl:1327 */
static void _waitEndCount_chpl(chpl____wide__EndCount_RAtomicT_int64_t_RAtomicT_int64_t e_chpl,
                               chpl____wide_Error * error_out_chpl) {
  string_chpl local__str_literal_75_chpl;
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
  chpl____wide_BaseLocale coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicT_int64_t call_tmp_chpl41 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl42;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl11 _args_foron_fn_chpl = NULL;
  chpl____wide__ref_AtomicT_int64_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  _ref_locale_chpl i_x_chpl = NULL;
  chpl____wide__ref_locale tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_RAtomicT_int64_t_RAtomicT_int64_t coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_RAtomicT_int64_t call_tmp_chpl43 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl44;
  chpl_bool isdirect_chpl2;
  _class_localson_fn_chpl73 _args_foron_fn_chpl2 = NULL;
  chpl____wide__ref_RAtomicT_int64_t tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__EndCount_RAtomicT_int64_t_RAtomicT_int64_t coerce_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_RAtomicT_int64_t call_tmp_chpl45 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret_chpl;
  int64_t ret_chpl2;
  chpl____wide__ref_int64_t call_tmp_chpl46 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t call_tmp_chpl47 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order ret_chpl3;
  locale_chpl call_tmp_chpl48;
  chpl_localeID_t call_tmp_chpl49;
  int32_t call_tmp_chpl50;
  chpl_localeID_t call_tmp_chpl51;
  locale_chpl call_tmp_chpl52;
  locale_chpl ret_tmp_chpl2;
  chpl____wide__ref_chpl_localeID_t tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl53;
  chpl____wide_BaseLocale coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicT_int64_t call_tmp_chpl54 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl55;
  chpl_bool isdirect_chpl3;
  _class_localson_fn_chpl11 _args_foron_fn_chpl3 = NULL;
  chpl____wide__ref_AtomicT_int64_t tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl3;
  _ref_locale_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_locale tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCountBase coerce_tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_TaskErrors call_tmp_chpl56 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl57;
  chpl____wide__EndCountBase coerce_tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_TaskErrors call_tmp_chpl58 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_TaskErrors_chpl call_tmp_chpl59;
  TaskErrors_chpl new_temp_chpl = NULL;
  _owned_TaskErrors_chpl initTemp_chpl;
  chpl____wide_Error call_tmp_chpl60 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 coerce_tmp_chpl13;
  _owned_Error_chpl2 ret_tmp_chpl3;
  _ref__owned_TaskErrors_chpl i_x_chpl3 = NULL;
  _ref__owned_Error_chpl2 i__retArg_chpl = NULL;
  _owned_TaskErrors_chpl _formal_tmp_x_chpl;
  _owned_Error_chpl2 ret_chpl4;
  _ref__owned_TaskErrors_chpl i_this_chpl = NULL;
  Error_chpl call_tmp_chpl61 = NULL;
  _ref__owned_TaskErrors_chpl i_this_chpl2 = NULL;
  _owned_Error_chpl2 call_tmp_chpl62;
  _owned_Error_chpl2 initTemp_chpl2;
  chpl____wide_Error tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 _formal_tmp_in_err_chpl;
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_67;
  chpl____wide_object chpl_macro_tmp_68;
  chpl____wide__nilType chpl_macro_tmp_69;
  chpl____wide_object chpl_macro_tmp_70;
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_71;
  chpl__class_localson_fn_chpl11_object chpl_macro_tmp_72;
  chpl____wide__ref_locale chpl_macro_tmp_73;
  chpl____wide__ref_RAtomicT_int64_t chpl_macro_tmp_74;
  chpl__class_localson_fn_chpl73_object chpl_macro_tmp_75;
  chpl____wide__ref_RAtomicT_int64_t chpl_macro_tmp_76;
  chpl____wide__ref_int64_t chpl_macro_tmp_77;
  chpl____wide__ref_int64_t chpl_macro_tmp_78;
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_79;
  chpl____wide_object chpl_macro_tmp_80;
  chpl____wide__nilType chpl_macro_tmp_81;
  chpl____wide_object chpl_macro_tmp_82;
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_83;
  chpl__class_localson_fn_chpl11_object chpl_macro_tmp_84;
  chpl____wide__ref_locale chpl_macro_tmp_85;
  chpl____wide__EndCountBase chpl_macro_tmp_86;
  chpl____wide__ref_chpl_TaskErrors chpl_macro_tmp_87;
  chpl____wide__EndCountBase chpl_macro_tmp_88;
  chpl____wide__ref_chpl_TaskErrors chpl_macro_tmp_89;
  chpl____wide_Error chpl_macro_tmp_90;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  call_tmp_chpl38 = get_chpl_nodeID();
  call_tmp_chpl39 = chpl_rt_buildLocaleID(call_tmp_chpl38, c_sublocid_any);
  call_tmp_chpl37 = call_tmp_chpl39;
  chpl_macro_tmp_67.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_67.addr = &call_tmp_chpl37;
  tmp_chpl15 = chpl_macro_tmp_67;
  chpl_localeID_to_locale(tmp_chpl15, &ret_tmp_chpl);
  call_tmp_chpl40 = ret_tmp_chpl;
  call_tmp_chpl36 = call_tmp_chpl40;
  coerce_tmp_chpl3 = (&call_tmp_chpl36)->_instance;
  chpl_macro_tmp_68.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_68.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_68;
  chpl_macro_tmp_69.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_69.addr = nil;
  chpl_macro_tmp_70.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_70.addr = NULL;
  tmp_chpl16 = chpl_macro_tmp_70;
  if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl16)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl16)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(95), INT32(26));
  }
  coerce_tmp_chpl5 = coerce_tmp_chpl3;
  chpl_check_nil((&coerce_tmp_chpl5)->addr, INT64(1331), INT32(2));
  chpl_macro_tmp_71.locale = (&coerce_tmp_chpl5)->locale;
  chpl_macro_tmp_71.addr = &(((&coerce_tmp_chpl5)->addr)->runningTaskCounter);
  call_tmp_chpl41 = chpl_macro_tmp_71;
  chpl_rmem_consist_maybe_release5();
  call_tmp_chpl42 = (&call_tmp_chpl41)->locale;
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl42);
  if (isdirect_chpl) {
    on_fn_chpl11(call_tmp_chpl41, INT64(1));
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl11)(&chpl_macro_tmp_72));
    chpl_check_nil(_args_foron_fn_chpl, INT64(1331), INT32(2));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl42;
    tmp_chpl17 = call_tmp_chpl41;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1331), INT32(2));
    (_args_foron_fn_chpl)->_1_this = tmp_chpl17;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1331), INT32(2));
    (_args_foron_fn_chpl)->_2_value = INT64(1);
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl11 ***/ chpl_executeOnFast(call_tmp_chpl42, INT32(13), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl11_object), INT64(613), INT32(14));
  }
  chpl_rmem_consist_maybe_acquire5();
  i_x_chpl = &call_tmp_chpl36;
  chpl_macro_tmp_73.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_73.addr = i_x_chpl;
  tmp_chpl18 = chpl_macro_tmp_73;
  deinit_chpl14(tmp_chpl18);
  coerce_tmp_chpl6 = e_chpl;
  chpl_check_nil((&coerce_tmp_chpl6)->addr, INT64(1334), INT32(2));
  chpl_macro_tmp_74.locale = (&coerce_tmp_chpl6)->locale;
  chpl_macro_tmp_74.addr = &(((&coerce_tmp_chpl6)->addr)->i);
  call_tmp_chpl43 = chpl_macro_tmp_74;
  chpl_rmem_consist_maybe_release3();
  call_tmp_chpl44 = (&call_tmp_chpl43)->locale;
  isdirect_chpl2 = chpl_doDirectExecuteOn(call_tmp_chpl44);
  if (isdirect_chpl2) {
    on_fn_chpl73(call_tmp_chpl43, INT64(0));
  } else {
    _args_foron_fn_chpl2 = ((_class_localson_fn_chpl73)(&chpl_macro_tmp_75));
    chpl_check_nil(_args_foron_fn_chpl2, INT64(1334), INT32(2));
    (_args_foron_fn_chpl2)->_0_tmp = call_tmp_chpl44;
    tmp_chpl19 = call_tmp_chpl43;
    chpl_check_nil(_args_foron_fn_chpl2, INT64(1334), INT32(2));
    (_args_foron_fn_chpl2)->_1_this = tmp_chpl19;
    chpl_check_nil(_args_foron_fn_chpl2, INT64(1334), INT32(2));
    (_args_foron_fn_chpl2)->_2_value = INT64(0);
    _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl73_object);
    chpl_taskRunningCntDec(INT64(1334), INT32(2));
    /*** wrapon_fn_chpl73 ***/ chpl_executeOn(call_tmp_chpl44, INT32(85), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), _args_sizeon_fn_chpl, INT64(323), INT32(15));
    chpl_taskRunningCntInc(INT64(1334), INT32(2));
  }
  chpl_rmem_consist_maybe_acquire2();
  coerce_tmp_chpl7 = e_chpl;
  chpl_check_nil((&coerce_tmp_chpl7)->addr, INT64(1337), INT32(2));
  chpl_macro_tmp_76.locale = (&coerce_tmp_chpl7)->locale;
  chpl_macro_tmp_76.addr = &(((&coerce_tmp_chpl7)->addr)->taskCnt);
  call_tmp_chpl45 = chpl_macro_tmp_76;
  chpl_rmem_consist_maybe_release4();
  ret_chpl2 = INT64(0);
  chpl_macro_tmp_77.locale = (call_tmp_chpl45).locale;
  chpl_macro_tmp_77.addr = &(((call_tmp_chpl45).addr)->_v);
  call_tmp_chpl46 = chpl_macro_tmp_77;
  chpl_macro_tmp_78.locale = (call_tmp_chpl45).locale;
  chpl_macro_tmp_78.addr = &(((call_tmp_chpl45).addr)->_v);
  call_tmp_chpl47 = chpl_macro_tmp_78;
  ret_chpl3 = memory_order_seq_cst;
  chpl_comm_atomic_read_int64(&ret_chpl2, chpl_nodeFromLocaleID((&call_tmp_chpl46)->locale, INT64(0), INT32(0)), ((c_void_ptr)((&call_tmp_chpl47)->addr)), ret_chpl3, INT64(1337), INT32(2));
  ret_chpl = ret_chpl2;
  call_tmp_chpl50 = get_chpl_nodeID();
  call_tmp_chpl51 = chpl_rt_buildLocaleID(call_tmp_chpl50, c_sublocid_any);
  call_tmp_chpl49 = call_tmp_chpl51;
  chpl_macro_tmp_79.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_79.addr = &call_tmp_chpl49;
  tmp_chpl20 = chpl_macro_tmp_79;
  chpl_localeID_to_locale(tmp_chpl20, &ret_tmp_chpl2);
  call_tmp_chpl52 = ret_tmp_chpl2;
  call_tmp_chpl48 = call_tmp_chpl52;
  call_tmp_chpl53 = (ret_chpl - INT64(1));
  coerce_tmp_chpl8 = (&call_tmp_chpl48)->_instance;
  chpl_macro_tmp_80.locale = (&coerce_tmp_chpl8)->locale;
  chpl_macro_tmp_80.addr = ((object_chpl)((&coerce_tmp_chpl8)->addr));
  coerce_tmp_chpl9 = chpl_macro_tmp_80;
  chpl_macro_tmp_81.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_81.addr = nil;
  chpl_macro_tmp_82.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_82.addr = NULL;
  tmp_chpl21 = chpl_macro_tmp_82;
  if (! (((&coerce_tmp_chpl9)->addr != (&tmp_chpl21)->addr) || ((!(! (&coerce_tmp_chpl9)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl9)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl21)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(95), INT32(26));
  }
  coerce_tmp_chpl10 = coerce_tmp_chpl8;
  chpl_check_nil((&coerce_tmp_chpl10)->addr, INT64(1339), INT32(2));
  chpl_macro_tmp_83.locale = (&coerce_tmp_chpl10)->locale;
  chpl_macro_tmp_83.addr = &(((&coerce_tmp_chpl10)->addr)->runningTaskCounter);
  call_tmp_chpl54 = chpl_macro_tmp_83;
  chpl_rmem_consist_maybe_release5();
  call_tmp_chpl55 = (&call_tmp_chpl54)->locale;
  isdirect_chpl3 = chpl_doDirectExecuteOn(call_tmp_chpl55);
  if (isdirect_chpl3) {
    on_fn_chpl11(call_tmp_chpl54, call_tmp_chpl53);
  } else {
    _args_foron_fn_chpl3 = ((_class_localson_fn_chpl11)(&chpl_macro_tmp_84));
    chpl_check_nil(_args_foron_fn_chpl3, INT64(1339), INT32(2));
    (_args_foron_fn_chpl3)->_0_tmp = call_tmp_chpl55;
    tmp_chpl22 = call_tmp_chpl54;
    chpl_check_nil(_args_foron_fn_chpl3, INT64(1339), INT32(2));
    (_args_foron_fn_chpl3)->_1_this = tmp_chpl22;
    chpl_check_nil(_args_foron_fn_chpl3, INT64(1339), INT32(2));
    (_args_foron_fn_chpl3)->_2_value = call_tmp_chpl53;
    _args_vforon_fn_chpl3 = ((void*)(_args_foron_fn_chpl3));
    /*** wrapon_fn_chpl11 ***/ chpl_executeOnFast(call_tmp_chpl55, INT32(13), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl3)), sizeof(chpl__class_localson_fn_chpl11_object), INT64(613), INT32(14));
  }
  chpl_rmem_consist_maybe_acquire5();
  i_x_chpl2 = &call_tmp_chpl48;
  chpl_macro_tmp_85.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_85.addr = i_x_chpl2;
  tmp_chpl23 = chpl_macro_tmp_85;
  deinit_chpl14(tmp_chpl23);
  chpl_macro_tmp_86.locale = (&e_chpl)->locale;
  chpl_macro_tmp_86.addr = ((chpl___EndCountBase)((&e_chpl)->addr));
  coerce_tmp_chpl11 = chpl_macro_tmp_86;
  chpl_check_nil((&coerce_tmp_chpl11)->addr, INT64(1346), INT32(2));
  chpl_macro_tmp_87.locale = (&coerce_tmp_chpl11)->locale;
  chpl_macro_tmp_87.addr = &(((&coerce_tmp_chpl11)->addr)->errors);
  call_tmp_chpl56 = chpl_macro_tmp_87;
  call_tmp_chpl57 = empty_chpl(call_tmp_chpl56);
  if (! call_tmp_chpl57) {
    chpl_macro_tmp_88.locale = (&e_chpl)->locale;
    chpl_macro_tmp_88.addr = ((chpl___EndCountBase)((&e_chpl)->addr));
    coerce_tmp_chpl12 = chpl_macro_tmp_88;
    chpl_check_nil((&coerce_tmp_chpl12)->addr, INT64(1347), INT32(2));
    chpl_macro_tmp_89.locale = (&coerce_tmp_chpl12)->locale;
    chpl_macro_tmp_89.addr = &(((&coerce_tmp_chpl12)->addr)->errors);
    call_tmp_chpl58 = chpl_macro_tmp_89;
    new_temp_chpl = _new_chpl17(call_tmp_chpl58, INT64(1347), INT32(2));
    init_chpl50(&initTemp_chpl, new_temp_chpl);
    call_tmp_chpl59 = initTemp_chpl;
    i_x_chpl3 = &call_tmp_chpl59;
    i__retArg_chpl = &ret_tmp_chpl3;
    _formal_tmp_x_chpl = *(i_x_chpl3);
    i_this_chpl = &_formal_tmp_x_chpl;
    call_tmp_chpl61 = ((Error_chpl)((i_this_chpl)->chpl_p));
    i_this_chpl2 = &_formal_tmp_x_chpl;
    (i_this_chpl2)->chpl_p = ((TaskErrors_chpl)(nil));
    if (((object_chpl)(call_tmp_chpl61)) == nil) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1347), INT32(2));
    }
    chpl_macro_tmp_90.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_90.addr = call_tmp_chpl61;
    tmp_chpl24 = chpl_macro_tmp_90;
    init_chpl68(&initTemp_chpl2, tmp_chpl24);
    call_tmp_chpl62 = initTemp_chpl2;
    ret_chpl4 = call_tmp_chpl62;
    chpl__autoDestroy7(&_formal_tmp_x_chpl);
    *(i__retArg_chpl) = ret_chpl4;
    coerce_tmp_chpl13 = ret_tmp_chpl3;
    _formal_tmp_in_err_chpl = coerce_tmp_chpl13;
    call_tmp_chpl60 = chpl_fix_thrown_error(&_formal_tmp_in_err_chpl, INT64(1347), INT32(2));
    *(error_out_chpl) = call_tmp_chpl60;
    goto _end_waitEndCount_chpl;
  }
  _end_waitEndCount_chpl:;
  return;
}

/* ChapelBase.chpl:1354 */
static void _waitEndCount_chpl3(chpl___EndCount_AtomicT_int64_t_int64_t e_chpl,
                                int64_t numTasks_chpl,
                                chpl____wide_Error * error_out_chpl) {
  string_chpl local__str_literal_75_chpl;
  chpl___EndCount_AtomicT_int64_t_int64_t coerce_tmp_chpl3 = NULL;
  _ref_AtomicT_int64_t_chpl call_tmp_chpl36 = NULL;
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_AtomicT_int64_t tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl12 _args_foron_fn_chpl = NULL;
  _ref_AtomicT_int64_t_chpl tmp_chpl16 = NULL;
  chpl____wide__ref_AtomicT_int64_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  locale_chpl call_tmp_chpl38;
  chpl_localeID_t call_tmp_chpl39;
  int32_t call_tmp_chpl40;
  chpl_localeID_t call_tmp_chpl41;
  locale_chpl call_tmp_chpl42;
  locale_chpl ret_tmp_chpl;
  chpl____wide__ref_chpl_localeID_t tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl43;
  chpl____wide_BaseLocale coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicT_int64_t call_tmp_chpl44 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl45;
  chpl_bool isdirect_chpl2;
  _class_localson_fn_chpl11 _args_foron_fn_chpl2 = NULL;
  chpl____wide__ref_AtomicT_int64_t tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  _ref_locale_chpl i_x_chpl = NULL;
  chpl____wide__ref_locale tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___EndCountBase coerce_tmp_chpl7 = NULL;
  _ref_chpl_TaskErrors_chpl call_tmp_chpl46 = NULL;
  chpl_bool call_tmp_chpl47;
  chpl____wide__ref_chpl_TaskErrors tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___EndCountBase coerce_tmp_chpl8 = NULL;
  _ref_chpl_TaskErrors_chpl call_tmp_chpl48 = NULL;
  _owned_TaskErrors_chpl call_tmp_chpl49;
  TaskErrors_chpl new_temp_chpl = NULL;
  chpl____wide__ref_chpl_TaskErrors tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_TaskErrors_chpl initTemp_chpl;
  chpl____wide_Error call_tmp_chpl50 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 coerce_tmp_chpl9;
  _owned_Error_chpl2 ret_tmp_chpl2;
  _ref__owned_TaskErrors_chpl i_x_chpl2 = NULL;
  _ref__owned_Error_chpl2 i__retArg_chpl = NULL;
  _owned_TaskErrors_chpl _formal_tmp_x_chpl;
  _owned_Error_chpl2 ret_chpl;
  _ref__owned_TaskErrors_chpl i_this_chpl = NULL;
  Error_chpl call_tmp_chpl51 = NULL;
  _ref__owned_TaskErrors_chpl i_this_chpl2 = NULL;
  _owned_Error_chpl2 call_tmp_chpl52;
  _owned_Error_chpl2 initTemp_chpl2;
  chpl____wide_Error tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 _formal_tmp_in_err_chpl;
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_91;
  chpl__class_localson_fn_chpl12_object chpl_macro_tmp_92;
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_93;
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_94;
  chpl____wide_object chpl_macro_tmp_95;
  chpl____wide__nilType chpl_macro_tmp_96;
  chpl____wide_object chpl_macro_tmp_97;
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_98;
  chpl__class_localson_fn_chpl11_object chpl_macro_tmp_99;
  chpl____wide__ref_locale chpl_macro_tmp_100;
  chpl____wide__ref_chpl_TaskErrors chpl_macro_tmp_101;
  chpl____wide__ref_chpl_TaskErrors chpl_macro_tmp_102;
  chpl____wide_Error chpl_macro_tmp_103;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = e_chpl;
  chpl_check_nil(coerce_tmp_chpl3, INT64(1356), INT32(2));
  call_tmp_chpl36 = &((coerce_tmp_chpl3)->i);
  chpl_rmem_consist_maybe_release3();
  call_tmp_chpl37 = chpl_gen_getLocaleID();
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
  if (isdirect_chpl) {
    chpl_macro_tmp_91.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_91.addr = call_tmp_chpl36;
    tmp_chpl15 = chpl_macro_tmp_91;
    on_fn_chpl12(tmp_chpl15, INT64(0));
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl12)(&chpl_macro_tmp_92));
    chpl_check_nil(_args_foron_fn_chpl, INT64(1356), INT32(2));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
    tmp_chpl16 = call_tmp_chpl36;
    chpl_macro_tmp_93.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_93.addr = tmp_chpl16;
    tmp_chpl17 = chpl_macro_tmp_93;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1356), INT32(2));
    (_args_foron_fn_chpl)->_1_this = tmp_chpl17;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1356), INT32(2));
    (_args_foron_fn_chpl)->_2_value = INT64(0);
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl12_object);
    chpl_taskRunningCntDec(INT64(1356), INT32(2));
    /*** wrapon_fn_chpl12 ***/ chpl_executeOn(call_tmp_chpl37, INT32(14), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(723), INT32(14));
    chpl_taskRunningCntInc(INT64(1356), INT32(2));
  }
  chpl_rmem_consist_maybe_acquire2();
  if (numTasks_chpl > INT64(1)) {
    call_tmp_chpl40 = get_chpl_nodeID();
    call_tmp_chpl41 = chpl_rt_buildLocaleID(call_tmp_chpl40, c_sublocid_any);
    call_tmp_chpl39 = call_tmp_chpl41;
    chpl_macro_tmp_94.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_94.addr = &call_tmp_chpl39;
    tmp_chpl18 = chpl_macro_tmp_94;
    chpl_localeID_to_locale(tmp_chpl18, &ret_tmp_chpl);
    call_tmp_chpl42 = ret_tmp_chpl;
    call_tmp_chpl38 = call_tmp_chpl42;
    call_tmp_chpl43 = (numTasks_chpl - INT64(1));
    coerce_tmp_chpl4 = (&call_tmp_chpl38)->_instance;
    chpl_macro_tmp_95.locale = (&coerce_tmp_chpl4)->locale;
    chpl_macro_tmp_95.addr = ((object_chpl)((&coerce_tmp_chpl4)->addr));
    coerce_tmp_chpl5 = chpl_macro_tmp_95;
    chpl_macro_tmp_96.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_96.addr = nil;
    chpl_macro_tmp_97.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_97.addr = NULL;
    tmp_chpl19 = chpl_macro_tmp_97;
    if (! (((&coerce_tmp_chpl5)->addr != (&tmp_chpl19)->addr) || ((!(! (&coerce_tmp_chpl5)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl5)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl19)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(95), INT32(26));
    }
    coerce_tmp_chpl6 = coerce_tmp_chpl4;
    chpl_check_nil((&coerce_tmp_chpl6)->addr, INT64(1360), INT32(2));
    chpl_macro_tmp_98.locale = (&coerce_tmp_chpl6)->locale;
    chpl_macro_tmp_98.addr = &(((&coerce_tmp_chpl6)->addr)->runningTaskCounter);
    call_tmp_chpl44 = chpl_macro_tmp_98;
    chpl_rmem_consist_maybe_release5();
    call_tmp_chpl45 = (&call_tmp_chpl44)->locale;
    isdirect_chpl2 = chpl_doDirectExecuteOn(call_tmp_chpl45);
    if (isdirect_chpl2) {
      on_fn_chpl11(call_tmp_chpl44, call_tmp_chpl43);
    } else {
      _args_foron_fn_chpl2 = ((_class_localson_fn_chpl11)(&chpl_macro_tmp_99));
      chpl_check_nil(_args_foron_fn_chpl2, INT64(1360), INT32(2));
      (_args_foron_fn_chpl2)->_0_tmp = call_tmp_chpl45;
      tmp_chpl20 = call_tmp_chpl44;
      chpl_check_nil(_args_foron_fn_chpl2, INT64(1360), INT32(2));
      (_args_foron_fn_chpl2)->_1_this = tmp_chpl20;
      chpl_check_nil(_args_foron_fn_chpl2, INT64(1360), INT32(2));
      (_args_foron_fn_chpl2)->_2_value = call_tmp_chpl43;
      _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
      /*** wrapon_fn_chpl11 ***/ chpl_executeOnFast(call_tmp_chpl45, INT32(13), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn_chpl11_object), INT64(613), INT32(14));
    }
    chpl_rmem_consist_maybe_acquire5();
    i_x_chpl = &call_tmp_chpl38;
    chpl_macro_tmp_100.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_100.addr = i_x_chpl;
    tmp_chpl21 = chpl_macro_tmp_100;
    deinit_chpl14(tmp_chpl21);
  }
  coerce_tmp_chpl7 = ((chpl___EndCountBase)(e_chpl));
  chpl_check_nil(coerce_tmp_chpl7, INT64(1367), INT32(2));
  call_tmp_chpl46 = &((coerce_tmp_chpl7)->errors);
  chpl_macro_tmp_101.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_101.addr = call_tmp_chpl46;
  tmp_chpl22 = chpl_macro_tmp_101;
  call_tmp_chpl47 = empty_chpl(tmp_chpl22);
  if (! call_tmp_chpl47) {
    coerce_tmp_chpl8 = ((chpl___EndCountBase)(e_chpl));
    chpl_check_nil(coerce_tmp_chpl8, INT64(1368), INT32(2));
    call_tmp_chpl48 = &((coerce_tmp_chpl8)->errors);
    chpl_macro_tmp_102.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_102.addr = call_tmp_chpl48;
    tmp_chpl23 = chpl_macro_tmp_102;
    new_temp_chpl = _new_chpl17(tmp_chpl23, INT64(1368), INT32(2));
    init_chpl50(&initTemp_chpl, new_temp_chpl);
    call_tmp_chpl49 = initTemp_chpl;
    i_x_chpl2 = &call_tmp_chpl49;
    i__retArg_chpl = &ret_tmp_chpl2;
    _formal_tmp_x_chpl = *(i_x_chpl2);
    i_this_chpl = &_formal_tmp_x_chpl;
    call_tmp_chpl51 = ((Error_chpl)((i_this_chpl)->chpl_p));
    i_this_chpl2 = &_formal_tmp_x_chpl;
    (i_this_chpl2)->chpl_p = ((TaskErrors_chpl)(nil));
    if (((object_chpl)(call_tmp_chpl51)) == nil) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1368), INT32(2));
    }
    chpl_macro_tmp_103.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_103.addr = call_tmp_chpl51;
    tmp_chpl24 = chpl_macro_tmp_103;
    init_chpl68(&initTemp_chpl2, tmp_chpl24);
    call_tmp_chpl52 = initTemp_chpl2;
    ret_chpl = call_tmp_chpl52;
    chpl__autoDestroy7(&_formal_tmp_x_chpl);
    *(i__retArg_chpl) = ret_chpl;
    coerce_tmp_chpl9 = ret_tmp_chpl2;
    _formal_tmp_in_err_chpl = coerce_tmp_chpl9;
    call_tmp_chpl50 = chpl_fix_thrown_error(&_formal_tmp_in_err_chpl, INT64(1368), INT32(2));
    *(error_out_chpl) = call_tmp_chpl50;
    goto _end_waitEndCount_chpl;
  }
  _end_waitEndCount_chpl:;
  return;
}

/* ChapelBase.chpl:1354 */
static void _waitEndCount_chpl2(chpl___EndCount_RAtomicT_int64_t_RAtomicT_int64_t e_chpl,
                                int64_t numTasks_chpl,
                                chpl____wide_Error * error_out_chpl) {
  string_chpl local__str_literal_75_chpl;
  chpl___EndCount_RAtomicT_int64_t_RAtomicT_int64_t coerce_tmp_chpl3 = NULL;
  _ref_RAtomicT_int64_t_chpl call_tmp_chpl36 = NULL;
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_RAtomicT_int64_t tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl73 _args_foron_fn_chpl = NULL;
  _ref_RAtomicT_int64_t_chpl tmp_chpl16 = NULL;
  chpl____wide__ref_RAtomicT_int64_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  locale_chpl call_tmp_chpl38;
  chpl_localeID_t call_tmp_chpl39;
  int32_t call_tmp_chpl40;
  chpl_localeID_t call_tmp_chpl41;
  locale_chpl call_tmp_chpl42;
  locale_chpl ret_tmp_chpl;
  chpl____wide__ref_chpl_localeID_t tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicT_int64_t call_tmp_chpl43 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl44;
  chpl_bool isdirect_chpl2;
  _class_localson_fn_chpl9 _args_foron_fn_chpl2 = NULL;
  chpl____wide__ref_AtomicT_int64_t tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  _ref_locale_chpl i_x_chpl = NULL;
  chpl____wide__ref_locale tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___EndCountBase coerce_tmp_chpl7 = NULL;
  _ref_chpl_TaskErrors_chpl call_tmp_chpl45 = NULL;
  chpl_bool call_tmp_chpl46;
  chpl____wide__ref_chpl_TaskErrors tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___EndCountBase coerce_tmp_chpl8 = NULL;
  _ref_chpl_TaskErrors_chpl call_tmp_chpl47 = NULL;
  _owned_TaskErrors_chpl call_tmp_chpl48;
  TaskErrors_chpl new_temp_chpl = NULL;
  chpl____wide__ref_chpl_TaskErrors tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_TaskErrors_chpl initTemp_chpl;
  chpl____wide_Error call_tmp_chpl49 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 coerce_tmp_chpl9;
  _owned_Error_chpl2 ret_tmp_chpl2;
  _ref__owned_TaskErrors_chpl i_x_chpl2 = NULL;
  _ref__owned_Error_chpl2 i__retArg_chpl = NULL;
  _owned_TaskErrors_chpl _formal_tmp_x_chpl;
  _owned_Error_chpl2 ret_chpl;
  _ref__owned_TaskErrors_chpl i_this_chpl = NULL;
  Error_chpl call_tmp_chpl50 = NULL;
  _ref__owned_TaskErrors_chpl i_this_chpl2 = NULL;
  _owned_Error_chpl2 call_tmp_chpl51;
  _owned_Error_chpl2 initTemp_chpl2;
  chpl____wide_Error tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 _formal_tmp_in_err_chpl;
  chpl____wide__ref_RAtomicT_int64_t chpl_macro_tmp_104;
  chpl__class_localson_fn_chpl73_object chpl_macro_tmp_105;
  chpl____wide__ref_RAtomicT_int64_t chpl_macro_tmp_106;
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_107;
  chpl____wide_object chpl_macro_tmp_108;
  chpl____wide__nilType chpl_macro_tmp_109;
  chpl____wide_object chpl_macro_tmp_110;
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_111;
  chpl__class_localson_fn_chpl9_object chpl_macro_tmp_112;
  chpl____wide__ref_locale chpl_macro_tmp_113;
  chpl____wide__ref_chpl_TaskErrors chpl_macro_tmp_114;
  chpl____wide__ref_chpl_TaskErrors chpl_macro_tmp_115;
  chpl____wide_Error chpl_macro_tmp_116;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = e_chpl;
  chpl_check_nil(coerce_tmp_chpl3, INT64(1356), INT32(2));
  call_tmp_chpl36 = &((coerce_tmp_chpl3)->i);
  chpl_rmem_consist_maybe_release3();
  call_tmp_chpl37 = chpl_gen_getLocaleID();
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
  if (isdirect_chpl) {
    chpl_macro_tmp_104.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_104.addr = call_tmp_chpl36;
    tmp_chpl15 = chpl_macro_tmp_104;
    on_fn_chpl73(tmp_chpl15, INT64(0));
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl73)(&chpl_macro_tmp_105));
    chpl_check_nil(_args_foron_fn_chpl, INT64(1356), INT32(2));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
    tmp_chpl16 = call_tmp_chpl36;
    chpl_macro_tmp_106.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_106.addr = tmp_chpl16;
    tmp_chpl17 = chpl_macro_tmp_106;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1356), INT32(2));
    (_args_foron_fn_chpl)->_1_this = tmp_chpl17;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1356), INT32(2));
    (_args_foron_fn_chpl)->_2_value = INT64(0);
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl73_object);
    chpl_taskRunningCntDec(INT64(1356), INT32(2));
    /*** wrapon_fn_chpl73 ***/ chpl_executeOn(call_tmp_chpl37, INT32(85), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(323), INT32(15));
    chpl_taskRunningCntInc(INT64(1356), INT32(2));
  }
  chpl_rmem_consist_maybe_acquire2();
  call_tmp_chpl40 = get_chpl_nodeID();
  call_tmp_chpl41 = chpl_rt_buildLocaleID(call_tmp_chpl40, c_sublocid_any);
  call_tmp_chpl39 = call_tmp_chpl41;
  chpl_macro_tmp_107.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_107.addr = &call_tmp_chpl39;
  tmp_chpl18 = chpl_macro_tmp_107;
  chpl_localeID_to_locale(tmp_chpl18, &ret_tmp_chpl);
  call_tmp_chpl42 = ret_tmp_chpl;
  call_tmp_chpl38 = call_tmp_chpl42;
  coerce_tmp_chpl4 = (&call_tmp_chpl38)->_instance;
  chpl_macro_tmp_108.locale = (&coerce_tmp_chpl4)->locale;
  chpl_macro_tmp_108.addr = ((object_chpl)((&coerce_tmp_chpl4)->addr));
  coerce_tmp_chpl5 = chpl_macro_tmp_108;
  chpl_macro_tmp_109.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_109.addr = nil;
  chpl_macro_tmp_110.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_110.addr = NULL;
  tmp_chpl19 = chpl_macro_tmp_110;
  if (! (((&coerce_tmp_chpl5)->addr != (&tmp_chpl19)->addr) || ((!(! (&coerce_tmp_chpl5)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl5)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl19)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(95), INT32(26));
  }
  coerce_tmp_chpl6 = coerce_tmp_chpl4;
  chpl_check_nil((&coerce_tmp_chpl6)->addr, INT64(1363), INT32(2));
  chpl_macro_tmp_111.locale = (&coerce_tmp_chpl6)->locale;
  chpl_macro_tmp_111.addr = &(((&coerce_tmp_chpl6)->addr)->runningTaskCounter);
  call_tmp_chpl43 = chpl_macro_tmp_111;
  chpl_rmem_consist_maybe_release5();
  call_tmp_chpl44 = (&call_tmp_chpl43)->locale;
  isdirect_chpl2 = chpl_doDirectExecuteOn(call_tmp_chpl44);
  if (isdirect_chpl2) {
    on_fn_chpl9(call_tmp_chpl43, INT64(1));
  } else {
    _args_foron_fn_chpl2 = ((_class_localson_fn_chpl9)(&chpl_macro_tmp_112));
    chpl_check_nil(_args_foron_fn_chpl2, INT64(1363), INT32(2));
    (_args_foron_fn_chpl2)->_0_tmp = call_tmp_chpl44;
    tmp_chpl20 = call_tmp_chpl43;
    chpl_check_nil(_args_foron_fn_chpl2, INT64(1363), INT32(2));
    (_args_foron_fn_chpl2)->_1_this = tmp_chpl20;
    chpl_check_nil(_args_foron_fn_chpl2, INT64(1363), INT32(2));
    (_args_foron_fn_chpl2)->_2_value = INT64(1);
    _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
    /*** wrapon_fn_chpl9 ***/ chpl_executeOnFast(call_tmp_chpl44, INT32(11), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn_chpl9_object), INT64(585), INT32(14));
  }
  chpl_rmem_consist_maybe_acquire5();
  i_x_chpl = &call_tmp_chpl38;
  chpl_macro_tmp_113.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_113.addr = i_x_chpl;
  tmp_chpl21 = chpl_macro_tmp_113;
  deinit_chpl14(tmp_chpl21);
  coerce_tmp_chpl7 = ((chpl___EndCountBase)(e_chpl));
  chpl_check_nil(coerce_tmp_chpl7, INT64(1367), INT32(2));
  call_tmp_chpl45 = &((coerce_tmp_chpl7)->errors);
  chpl_macro_tmp_114.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_114.addr = call_tmp_chpl45;
  tmp_chpl22 = chpl_macro_tmp_114;
  call_tmp_chpl46 = empty_chpl(tmp_chpl22);
  if (! call_tmp_chpl46) {
    coerce_tmp_chpl8 = ((chpl___EndCountBase)(e_chpl));
    chpl_check_nil(coerce_tmp_chpl8, INT64(1368), INT32(2));
    call_tmp_chpl47 = &((coerce_tmp_chpl8)->errors);
    chpl_macro_tmp_115.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_115.addr = call_tmp_chpl47;
    tmp_chpl23 = chpl_macro_tmp_115;
    new_temp_chpl = _new_chpl17(tmp_chpl23, INT64(1368), INT32(2));
    init_chpl50(&initTemp_chpl, new_temp_chpl);
    call_tmp_chpl48 = initTemp_chpl;
    i_x_chpl2 = &call_tmp_chpl48;
    i__retArg_chpl = &ret_tmp_chpl2;
    _formal_tmp_x_chpl = *(i_x_chpl2);
    i_this_chpl = &_formal_tmp_x_chpl;
    call_tmp_chpl50 = ((Error_chpl)((i_this_chpl)->chpl_p));
    i_this_chpl2 = &_formal_tmp_x_chpl;
    (i_this_chpl2)->chpl_p = ((TaskErrors_chpl)(nil));
    if (((object_chpl)(call_tmp_chpl50)) == nil) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1368), INT32(2));
    }
    chpl_macro_tmp_116.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_116.addr = call_tmp_chpl50;
    tmp_chpl24 = chpl_macro_tmp_116;
    init_chpl68(&initTemp_chpl2, tmp_chpl24);
    call_tmp_chpl51 = initTemp_chpl2;
    ret_chpl = call_tmp_chpl51;
    chpl__autoDestroy7(&_formal_tmp_x_chpl);
    *(i__retArg_chpl) = ret_chpl;
    coerce_tmp_chpl9 = ret_tmp_chpl2;
    _formal_tmp_in_err_chpl = coerce_tmp_chpl9;
    call_tmp_chpl49 = chpl_fix_thrown_error(&_formal_tmp_in_err_chpl, INT64(1368), INT32(2));
    *(error_out_chpl) = call_tmp_chpl49;
    goto _end_waitEndCount_chpl;
  }
  _end_waitEndCount_chpl:;
  return;
}

/* ChapelBase.chpl:1397 */
static int64_t _do_command_line_cast_chpl3(c_string x_chpl2,
                                           chpl____wide_Error * error_out_chpl) {
  int64_t ret_chpl;
  string_chpl str_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl2;
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl3;
  string_chpl call_tmp_chpl36;
  chpl____wide_Error error_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_tmp_chpl;
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  range_int64_t_bounded_F_chpl call_tmp_chpl37;
  range_int64_t_bounded_F_chpl ret_tmp_chpl2;
  range_int64_t_bounded_F_chpl _ic__F0_this_chpl;
  int64_t i_chpl;
  range_int64_t_bounded_F_chpl this_chpl7;
  int64_t coerce_tmp_chpl3;
  range_int64_t_bounded_F_chpl this_chpl8;
  int64_t end_chpl;
  int64_t call_tmp_chpl38;
  chpl____wide_Error error_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl16 = NULL;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__nilType chpl_macro_tmp_117;
  chpl____wide_Error chpl_macro_tmp_118;
  chpl____wide__nilType chpl_macro_tmp_119;
  chpl____wide_Error chpl_macro_tmp_120;
  chpl____wide__nilType chpl_macro_tmp_121;
  chpl____wide_Error chpl_macro_tmp_122;
  chpl____wide__nilType chpl_macro_tmp_123;
  chpl____wide_Error chpl_macro_tmp_124;
  chpl____wide__ref_string chpl_macro_tmp_125;
  chpl____wide__ref_string chpl_macro_tmp_126;
  chpl_macro_tmp_117.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_117.addr = nil;
  chpl_macro_tmp_118.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_118.addr = NULL;
  error_chpl = chpl_macro_tmp_118;
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  chpl_macro_tmp_119.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_119.addr = nil;
  chpl_macro_tmp_120.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_120.addr = NULL;
  error_chpl2 = chpl_macro_tmp_120;
  chpl_macro_tmp_121.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_121.addr = nil;
  chpl_macro_tmp_122.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_122.addr = NULL;
  error_chpl3 = chpl_macro_tmp_122;
  tmp_chpl15 = &error_chpl3;
  decodeByteBuffer_chpl(((c_ptr_uint8_t_chpl)(x_chpl2)), string_length_bytes(x_chpl2), decodePolicy_chpl_strict_chpl, tmp_chpl15, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  if ((&error_chpl3)->addr != nil) {
    error_chpl2 = error_chpl3;
    goto _endcreateStringWithNewBuffer_chpl;
  }
  ret_chpl3 = call_tmp_chpl36;
  _endcreateStringWithNewBuffer_chpl:;
  if ((&error_chpl2)->addr != nil) {
    error_chpl = error_chpl2;
    goto _endcreateStringWithNewBuffer_chpl2;
  }
  ret_chpl2 = ret_chpl3;
  _endcreateStringWithNewBuffer_chpl2:;
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  str_chpl = ret_chpl2;
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, INT64(1406), INT32(2));
  }
  chpl_build_bounded_range(INT64(1), INT64(0), &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  _ic__F0_this_chpl = call_tmp_chpl37;
  checkIfIterWillOverflow_chpl(call_tmp_chpl37, UINT8(true));
  i_chpl = INT64(0);
  this_chpl7 = _ic__F0_this_chpl;
  coerce_tmp_chpl3 = (&this_chpl7)->_low;
  this_chpl8 = _ic__F0_this_chpl;
  end_chpl = (&this_chpl8)->_high;
  for (i_chpl = coerce_tmp_chpl3; ((i_chpl <= end_chpl)); i_chpl += INT64(1)) {
  }
  chpl_macro_tmp_123.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_123.addr = nil;
  chpl_macro_tmp_124.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_124.addr = NULL;
  error_chpl4 = chpl_macro_tmp_124;
  tmp_chpl16 = &error_chpl4;
  call_tmp_chpl38 = chpl___COLON_18(&str_chpl, tmp_chpl16);
  if ((&error_chpl4)->addr != nil) {
    *(error_out_chpl) = error_chpl4;
    i_x_chpl = &str_chpl;
    chpl_macro_tmp_125.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_125.addr = i_x_chpl;
    tmp_chpl17 = chpl_macro_tmp_125;
    deinit_chpl42(tmp_chpl17);
    goto _end__do_command_line_cast_chpl;
  }
  ret_chpl = call_tmp_chpl38;
  i_x_chpl2 = &str_chpl;
  chpl_macro_tmp_126.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_126.addr = i_x_chpl2;
  tmp_chpl18 = chpl_macro_tmp_126;
  deinit_chpl42(tmp_chpl18);
  _end__do_command_line_cast_chpl:;
  return ret_chpl;
}

/* ChapelBase.chpl:1397 */
static chpl_bool _do_command_line_cast_chpl2(c_string x_chpl2,
                                             chpl____wide_Error * error_out_chpl) {
  chpl_bool ret_chpl;
  string_chpl str_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl2;
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl3;
  string_chpl call_tmp_chpl36;
  chpl____wide_Error error_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_tmp_chpl;
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  range_int64_t_bounded_F_chpl call_tmp_chpl37;
  range_int64_t_bounded_F_chpl ret_tmp_chpl2;
  range_int64_t_bounded_F_chpl _ic__F0_this_chpl;
  int64_t i_chpl;
  range_int64_t_bounded_F_chpl this_chpl7;
  int64_t coerce_tmp_chpl3;
  range_int64_t_bounded_F_chpl this_chpl8;
  int64_t end_chpl;
  chpl_bool call_tmp_chpl38;
  chpl____wide_Error error_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl16 = NULL;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__nilType chpl_macro_tmp_127;
  chpl____wide_Error chpl_macro_tmp_128;
  chpl____wide__nilType chpl_macro_tmp_129;
  chpl____wide_Error chpl_macro_tmp_130;
  chpl____wide__nilType chpl_macro_tmp_131;
  chpl____wide_Error chpl_macro_tmp_132;
  chpl____wide__nilType chpl_macro_tmp_133;
  chpl____wide_Error chpl_macro_tmp_134;
  chpl____wide__ref_string chpl_macro_tmp_135;
  chpl____wide__ref_string chpl_macro_tmp_136;
  chpl_macro_tmp_127.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_127.addr = nil;
  chpl_macro_tmp_128.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_128.addr = NULL;
  error_chpl = chpl_macro_tmp_128;
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  chpl_macro_tmp_129.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_129.addr = nil;
  chpl_macro_tmp_130.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_130.addr = NULL;
  error_chpl2 = chpl_macro_tmp_130;
  chpl_macro_tmp_131.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_131.addr = nil;
  chpl_macro_tmp_132.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_132.addr = NULL;
  error_chpl3 = chpl_macro_tmp_132;
  tmp_chpl15 = &error_chpl3;
  decodeByteBuffer_chpl(((c_ptr_uint8_t_chpl)(x_chpl2)), string_length_bytes(x_chpl2), decodePolicy_chpl_strict_chpl, tmp_chpl15, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  if ((&error_chpl3)->addr != nil) {
    error_chpl2 = error_chpl3;
    goto _endcreateStringWithNewBuffer_chpl;
  }
  ret_chpl3 = call_tmp_chpl36;
  _endcreateStringWithNewBuffer_chpl:;
  if ((&error_chpl2)->addr != nil) {
    error_chpl = error_chpl2;
    goto _endcreateStringWithNewBuffer_chpl2;
  }
  ret_chpl2 = ret_chpl3;
  _endcreateStringWithNewBuffer_chpl2:;
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  str_chpl = ret_chpl2;
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, INT64(1406), INT32(2));
  }
  chpl_build_bounded_range(INT64(1), INT64(0), &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  _ic__F0_this_chpl = call_tmp_chpl37;
  checkIfIterWillOverflow_chpl(call_tmp_chpl37, UINT8(true));
  i_chpl = INT64(0);
  this_chpl7 = _ic__F0_this_chpl;
  coerce_tmp_chpl3 = (&this_chpl7)->_low;
  this_chpl8 = _ic__F0_this_chpl;
  end_chpl = (&this_chpl8)->_high;
  for (i_chpl = coerce_tmp_chpl3; ((i_chpl <= end_chpl)); i_chpl += INT64(1)) {
  }
  chpl_macro_tmp_133.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_133.addr = nil;
  chpl_macro_tmp_134.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_134.addr = NULL;
  error_chpl4 = chpl_macro_tmp_134;
  tmp_chpl16 = &error_chpl4;
  call_tmp_chpl38 = chpl___COLON_13(&str_chpl, tmp_chpl16);
  if ((&error_chpl4)->addr != nil) {
    *(error_out_chpl) = error_chpl4;
    i_x_chpl = &str_chpl;
    chpl_macro_tmp_135.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_135.addr = i_x_chpl;
    tmp_chpl17 = chpl_macro_tmp_135;
    deinit_chpl42(tmp_chpl17);
    goto _end__do_command_line_cast_chpl;
  }
  ret_chpl = call_tmp_chpl38;
  i_x_chpl2 = &str_chpl;
  chpl_macro_tmp_136.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_136.addr = i_x_chpl2;
  tmp_chpl18 = chpl_macro_tmp_136;
  deinit_chpl42(tmp_chpl18);
  _end__do_command_line_cast_chpl:;
  return ret_chpl;
}

/* ChapelBase.chpl:1397 */
static uint64_t _do_command_line_cast_chpl(c_string x_chpl2,
                                           chpl____wide_Error * error_out_chpl) {
  uint64_t ret_chpl;
  string_chpl str_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl2;
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl3;
  string_chpl call_tmp_chpl36;
  chpl____wide_Error error_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_tmp_chpl;
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  range_int64_t_bounded_F_chpl call_tmp_chpl37;
  range_int64_t_bounded_F_chpl ret_tmp_chpl2;
  range_int64_t_bounded_F_chpl _ic__F0_this_chpl;
  int64_t i_chpl;
  range_int64_t_bounded_F_chpl this_chpl7;
  int64_t coerce_tmp_chpl3;
  range_int64_t_bounded_F_chpl this_chpl8;
  int64_t end_chpl;
  uint64_t call_tmp_chpl38;
  chpl____wide_Error error_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl16 = NULL;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__nilType chpl_macro_tmp_137;
  chpl____wide_Error chpl_macro_tmp_138;
  chpl____wide__nilType chpl_macro_tmp_139;
  chpl____wide_Error chpl_macro_tmp_140;
  chpl____wide__nilType chpl_macro_tmp_141;
  chpl____wide_Error chpl_macro_tmp_142;
  chpl____wide__nilType chpl_macro_tmp_143;
  chpl____wide_Error chpl_macro_tmp_144;
  chpl____wide__ref_string chpl_macro_tmp_145;
  chpl____wide__ref_string chpl_macro_tmp_146;
  chpl_macro_tmp_137.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_137.addr = nil;
  chpl_macro_tmp_138.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_138.addr = NULL;
  error_chpl = chpl_macro_tmp_138;
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  chpl_macro_tmp_139.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_139.addr = nil;
  chpl_macro_tmp_140.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_140.addr = NULL;
  error_chpl2 = chpl_macro_tmp_140;
  chpl_macro_tmp_141.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_141.addr = nil;
  chpl_macro_tmp_142.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_142.addr = NULL;
  error_chpl3 = chpl_macro_tmp_142;
  tmp_chpl15 = &error_chpl3;
  decodeByteBuffer_chpl(((c_ptr_uint8_t_chpl)(x_chpl2)), string_length_bytes(x_chpl2), decodePolicy_chpl_strict_chpl, tmp_chpl15, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  if ((&error_chpl3)->addr != nil) {
    error_chpl2 = error_chpl3;
    goto _endcreateStringWithNewBuffer_chpl;
  }
  ret_chpl3 = call_tmp_chpl36;
  _endcreateStringWithNewBuffer_chpl:;
  if ((&error_chpl2)->addr != nil) {
    error_chpl = error_chpl2;
    goto _endcreateStringWithNewBuffer_chpl2;
  }
  ret_chpl2 = ret_chpl3;
  _endcreateStringWithNewBuffer_chpl2:;
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  str_chpl = ret_chpl2;
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, INT64(1406), INT32(2));
  }
  chpl_build_bounded_range(INT64(1), INT64(0), &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  _ic__F0_this_chpl = call_tmp_chpl37;
  checkIfIterWillOverflow_chpl(call_tmp_chpl37, UINT8(true));
  i_chpl = INT64(0);
  this_chpl7 = _ic__F0_this_chpl;
  coerce_tmp_chpl3 = (&this_chpl7)->_low;
  this_chpl8 = _ic__F0_this_chpl;
  end_chpl = (&this_chpl8)->_high;
  for (i_chpl = coerce_tmp_chpl3; ((i_chpl <= end_chpl)); i_chpl += INT64(1)) {
  }
  chpl_macro_tmp_143.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_143.addr = nil;
  chpl_macro_tmp_144.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_144.addr = NULL;
  error_chpl4 = chpl_macro_tmp_144;
  tmp_chpl16 = &error_chpl4;
  call_tmp_chpl38 = chpl___COLON_17(&str_chpl, tmp_chpl16);
  if ((&error_chpl4)->addr != nil) {
    *(error_out_chpl) = error_chpl4;
    i_x_chpl = &str_chpl;
    chpl_macro_tmp_145.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_145.addr = i_x_chpl;
    tmp_chpl17 = chpl_macro_tmp_145;
    deinit_chpl42(tmp_chpl17);
    goto _end__do_command_line_cast_chpl;
  }
  ret_chpl = call_tmp_chpl38;
  i_x_chpl2 = &str_chpl;
  chpl_macro_tmp_146.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_146.addr = i_x_chpl2;
  tmp_chpl18 = chpl_macro_tmp_146;
  deinit_chpl42(tmp_chpl18);
  _end__do_command_line_cast_chpl:;
  return ret_chpl;
}

/* ChapelBase.chpl:1397 */
static void _do_command_line_cast_chpl4(c_string x_chpl2,
                                        Error_chpl * error_out_chpl,
                                        string_chpl * _retArg_chpl) {
  string_chpl ret_chpl;
  string_chpl str_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl2;
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl3;
  string_chpl call_tmp_chpl36;
  chpl____wide_Error error_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_tmp_chpl;
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  chpl____wide__nilType chpl_macro_tmp_147;
  chpl____wide_Error chpl_macro_tmp_148;
  chpl____wide__nilType chpl_macro_tmp_149;
  chpl____wide_Error chpl_macro_tmp_150;
  chpl____wide__nilType chpl_macro_tmp_151;
  chpl____wide_Error chpl_macro_tmp_152;
  chpl_macro_tmp_147.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_147.addr = nil;
  chpl_macro_tmp_148.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_148.addr = NULL;
  error_chpl = chpl_macro_tmp_148;
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  chpl_macro_tmp_149.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_149.addr = nil;
  chpl_macro_tmp_150.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_150.addr = NULL;
  error_chpl2 = chpl_macro_tmp_150;
  chpl_macro_tmp_151.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_151.addr = nil;
  chpl_macro_tmp_152.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_152.addr = NULL;
  error_chpl3 = chpl_macro_tmp_152;
  tmp_chpl15 = &error_chpl3;
  decodeByteBuffer_chpl(((c_ptr_uint8_t_chpl)(x_chpl2)), string_length_bytes(x_chpl2), decodePolicy_chpl_strict_chpl, tmp_chpl15, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  if ((&error_chpl3)->addr != nil) {
    error_chpl2 = error_chpl3;
    goto _endcreateStringWithNewBuffer_chpl;
  }
  ret_chpl3 = call_tmp_chpl36;
  _endcreateStringWithNewBuffer_chpl:;
  if ((&error_chpl2)->addr != nil) {
    error_chpl = error_chpl2;
    goto _endcreateStringWithNewBuffer_chpl2;
  }
  ret_chpl2 = ret_chpl3;
  _endcreateStringWithNewBuffer_chpl2:;
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  str_chpl = ret_chpl2;
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, INT64(1406), INT32(2));
  }
  ret_chpl = str_chpl;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelBase.chpl:1421 */
static chpl_bool _command_line_cast_chpl5(c_string x_chpl2) {
  chpl_bool ret_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl36;
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  chpl____wide__nilType chpl_macro_tmp_153;
  chpl____wide_Error chpl_macro_tmp_154;
  chpl_macro_tmp_153.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_153.addr = nil;
  chpl_macro_tmp_154.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_154.addr = NULL;
  error_chpl = chpl_macro_tmp_154;
  tmp_chpl15 = &error_chpl;
  call_tmp_chpl36 = _do_command_line_cast_chpl2(x_chpl2, tmp_chpl15);
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  ret_chpl = call_tmp_chpl36;
  goto _end__command_line_cast_chpl;
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, INT64(1422), INT32(2));
  }
  _end__command_line_cast_chpl:;
  return ret_chpl;
}

/* ChapelBase.chpl:1421 */
static uint64_t _command_line_cast_chpl6(c_string x_chpl2) {
  uint64_t ret_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  uint64_t call_tmp_chpl36;
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  chpl____wide__nilType chpl_macro_tmp_155;
  chpl____wide_Error chpl_macro_tmp_156;
  chpl_macro_tmp_155.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_155.addr = nil;
  chpl_macro_tmp_156.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_156.addr = NULL;
  error_chpl = chpl_macro_tmp_156;
  tmp_chpl15 = &error_chpl;
  call_tmp_chpl36 = _do_command_line_cast_chpl(x_chpl2, tmp_chpl15);
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  ret_chpl = call_tmp_chpl36;
  goto _end__command_line_cast_chpl;
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, INT64(1422), INT32(2));
  }
  _end__command_line_cast_chpl:;
  return ret_chpl;
}

/* ChapelBase.chpl:1421 */
static uint64_t _command_line_cast_chpl7(c_string x_chpl2) {
  uint64_t ret_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  uint64_t call_tmp_chpl36;
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  chpl____wide__nilType chpl_macro_tmp_157;
  chpl____wide_Error chpl_macro_tmp_158;
  chpl_macro_tmp_157.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_157.addr = nil;
  chpl_macro_tmp_158.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_158.addr = NULL;
  error_chpl = chpl_macro_tmp_158;
  tmp_chpl15 = &error_chpl;
  call_tmp_chpl36 = _do_command_line_cast_chpl(x_chpl2, tmp_chpl15);
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  ret_chpl = call_tmp_chpl36;
  goto _end__command_line_cast_chpl;
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, INT64(1422), INT32(2));
  }
  _end__command_line_cast_chpl:;
  return ret_chpl;
}

/* ChapelBase.chpl:1421 */
static void _command_line_cast_chpl9(c_string x_chpl2,
                                     string_chpl * _retArg_chpl) {
  string_chpl ret_chpl;
  Error_chpl error_chpl = NULL;
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_159;
  error_chpl = NULL;
  _do_command_line_cast_chpl4(x_chpl2, &error_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  if (error_chpl != nil) {
    goto handler_chpl;
  }
  ret_chpl = call_tmp_chpl36;
  goto _end__command_line_cast_chpl;
  handler_chpl:;
  if (error_chpl != nil) {
    chpl_macro_tmp_159.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_159.addr = error_chpl;
    tmp_chpl15 = chpl_macro_tmp_159;
    chpl_uncaught_error(tmp_chpl15, INT64(1422), INT32(2));
  }
  _end__command_line_cast_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelBase.chpl:1421 */
static void _command_line_cast_chpl12(c_string x_chpl2,
                                      string_chpl * _retArg_chpl) {
  string_chpl ret_chpl;
  Error_chpl error_chpl = NULL;
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_160;
  error_chpl = NULL;
  _do_command_line_cast_chpl4(x_chpl2, &error_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  if (error_chpl != nil) {
    goto handler_chpl;
  }
  ret_chpl = call_tmp_chpl36;
  goto _end__command_line_cast_chpl;
  handler_chpl:;
  if (error_chpl != nil) {
    chpl_macro_tmp_160.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_160.addr = error_chpl;
    tmp_chpl15 = chpl_macro_tmp_160;
    chpl_uncaught_error(tmp_chpl15, INT64(1422), INT32(2));
  }
  _end__command_line_cast_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelBase.chpl:1421 */
static void _command_line_cast_chpl11(c_string x_chpl2,
                                      string_chpl * _retArg_chpl) {
  string_chpl ret_chpl;
  Error_chpl error_chpl = NULL;
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_161;
  error_chpl = NULL;
  _do_command_line_cast_chpl4(x_chpl2, &error_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  if (error_chpl != nil) {
    goto handler_chpl;
  }
  ret_chpl = call_tmp_chpl36;
  goto _end__command_line_cast_chpl;
  handler_chpl:;
  if (error_chpl != nil) {
    chpl_macro_tmp_161.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_161.addr = error_chpl;
    tmp_chpl15 = chpl_macro_tmp_161;
    chpl_uncaught_error(tmp_chpl15, INT64(1422), INT32(2));
  }
  _end__command_line_cast_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelBase.chpl:1421 */
static chpl_bool _command_line_cast_chpl10(c_string x_chpl2) {
  chpl_bool ret_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl36;
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  chpl____wide__nilType chpl_macro_tmp_162;
  chpl____wide_Error chpl_macro_tmp_163;
  chpl_macro_tmp_162.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_162.addr = nil;
  chpl_macro_tmp_163.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_163.addr = NULL;
  error_chpl = chpl_macro_tmp_163;
  tmp_chpl15 = &error_chpl;
  call_tmp_chpl36 = _do_command_line_cast_chpl2(x_chpl2, tmp_chpl15);
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  ret_chpl = call_tmp_chpl36;
  goto _end__command_line_cast_chpl;
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, INT64(1422), INT32(2));
  }
  _end__command_line_cast_chpl:;
  return ret_chpl;
}

/* ChapelBase.chpl:1421 */
static chpl_bool _command_line_cast_chpl3(c_string x_chpl2) {
  chpl_bool ret_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl36;
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  chpl____wide__nilType chpl_macro_tmp_164;
  chpl____wide_Error chpl_macro_tmp_165;
  chpl_macro_tmp_164.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_164.addr = nil;
  chpl_macro_tmp_165.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_165.addr = NULL;
  error_chpl = chpl_macro_tmp_165;
  tmp_chpl15 = &error_chpl;
  call_tmp_chpl36 = _do_command_line_cast_chpl2(x_chpl2, tmp_chpl15);
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  ret_chpl = call_tmp_chpl36;
  goto _end__command_line_cast_chpl;
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, INT64(1422), INT32(2));
  }
  _end__command_line_cast_chpl:;
  return ret_chpl;
}

/* ChapelBase.chpl:1421 */
static chpl_bool _command_line_cast_chpl2(c_string x_chpl2) {
  chpl_bool ret_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl36;
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  chpl____wide__nilType chpl_macro_tmp_166;
  chpl____wide_Error chpl_macro_tmp_167;
  chpl_macro_tmp_166.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_166.addr = nil;
  chpl_macro_tmp_167.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_167.addr = NULL;
  error_chpl = chpl_macro_tmp_167;
  tmp_chpl15 = &error_chpl;
  call_tmp_chpl36 = _do_command_line_cast_chpl2(x_chpl2, tmp_chpl15);
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  ret_chpl = call_tmp_chpl36;
  goto _end__command_line_cast_chpl;
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, INT64(1422), INT32(2));
  }
  _end__command_line_cast_chpl:;
  return ret_chpl;
}

/* ChapelBase.chpl:1421 */
static int64_t _command_line_cast_chpl8(c_string x_chpl2) {
  int64_t ret_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl36;
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  chpl____wide__nilType chpl_macro_tmp_168;
  chpl____wide_Error chpl_macro_tmp_169;
  chpl_macro_tmp_168.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_168.addr = nil;
  chpl_macro_tmp_169.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_169.addr = NULL;
  error_chpl = chpl_macro_tmp_169;
  tmp_chpl15 = &error_chpl;
  call_tmp_chpl36 = _do_command_line_cast_chpl3(x_chpl2, tmp_chpl15);
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  ret_chpl = call_tmp_chpl36;
  goto _end__command_line_cast_chpl;
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, INT64(1422), INT32(2));
  }
  _end__command_line_cast_chpl:;
  return ret_chpl;
}

/* ChapelBase.chpl:1421 */
static int64_t _command_line_cast_chpl4(c_string x_chpl2) {
  int64_t ret_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl36;
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  chpl____wide__nilType chpl_macro_tmp_170;
  chpl____wide_Error chpl_macro_tmp_171;
  chpl_macro_tmp_170.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_170.addr = nil;
  chpl_macro_tmp_171.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_171.addr = NULL;
  error_chpl = chpl_macro_tmp_171;
  tmp_chpl15 = &error_chpl;
  call_tmp_chpl36 = _do_command_line_cast_chpl3(x_chpl2, tmp_chpl15);
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  ret_chpl = call_tmp_chpl36;
  goto _end__command_line_cast_chpl;
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, INT64(1422), INT32(2));
  }
  _end__command_line_cast_chpl:;
  return ret_chpl;
}

/* ChapelBase.chpl:1421 */
static chpl_bool _command_line_cast_chpl13(c_string x_chpl2) {
  chpl_bool ret_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl36;
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  chpl____wide__nilType chpl_macro_tmp_172;
  chpl____wide_Error chpl_macro_tmp_173;
  chpl_macro_tmp_172.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_172.addr = nil;
  chpl_macro_tmp_173.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_173.addr = NULL;
  error_chpl = chpl_macro_tmp_173;
  tmp_chpl15 = &error_chpl;
  call_tmp_chpl36 = _do_command_line_cast_chpl2(x_chpl2, tmp_chpl15);
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  ret_chpl = call_tmp_chpl36;
  goto _end__command_line_cast_chpl;
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, INT64(1422), INT32(2));
  }
  _end__command_line_cast_chpl:;
  return ret_chpl;
}

/* ChapelBase.chpl:1421 */
static int64_t _command_line_cast_chpl14(c_string x_chpl2) {
  int64_t ret_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl36;
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  chpl____wide__nilType chpl_macro_tmp_174;
  chpl____wide_Error chpl_macro_tmp_175;
  chpl_macro_tmp_174.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_174.addr = nil;
  chpl_macro_tmp_175.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_175.addr = NULL;
  error_chpl = chpl_macro_tmp_175;
  tmp_chpl15 = &error_chpl;
  call_tmp_chpl36 = _do_command_line_cast_chpl3(x_chpl2, tmp_chpl15);
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  ret_chpl = call_tmp_chpl36;
  goto _end__command_line_cast_chpl;
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, INT64(1422), INT32(2));
  }
  _end__command_line_cast_chpl:;
  return ret_chpl;
}

/* ChapelBase.chpl:1421 */
static chpl_bool _command_line_cast_chpl(c_string x_chpl2) {
  chpl_bool ret_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl36;
  _ref__wide_Error_chpl tmp_chpl15 = NULL;
  chpl____wide__nilType chpl_macro_tmp_176;
  chpl____wide_Error chpl_macro_tmp_177;
  chpl_macro_tmp_176.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_176.addr = nil;
  chpl_macro_tmp_177.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_177.addr = NULL;
  error_chpl = chpl_macro_tmp_177;
  tmp_chpl15 = &error_chpl;
  call_tmp_chpl36 = _do_command_line_cast_chpl2(x_chpl2, tmp_chpl15);
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  ret_chpl = call_tmp_chpl36;
  goto _end__command_line_cast_chpl;
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, INT64(1422), INT32(2));
  }
  _end__command_line_cast_chpl:;
  return ret_chpl;
}

/* ChapelBase.chpl:1747 */
static void chpl__autoDestroy(_distribution_DefaultDist_chpl * x_chpl2) {
  chpl____wide__ref__wide__distribution_DefaultDist tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__distribution_DefaultDist chpl_macro_tmp_178;
  chpl_macro_tmp_178.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_178.addr = x_chpl2;
  tmp_chpl15 = chpl_macro_tmp_178;
  deinit_chpl3(tmp_chpl15);
  return;
}

/* ChapelBase.chpl:1753 */
static void chpl__autoDestroy2(_domain_DefaultRectangularDom_1_int64_t_F_chpl * x_chpl2) {
  deinit_chpl13(x_chpl2);
  return;
}

/* ChapelBase.chpl:1759 */
static void chpl__autoDestroy3(_array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl * x_chpl2) {
  deinit_chpl4(x_chpl2);
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete9(object_chpl arg_chpl) {
  object_chpl call_tmp_chpl36 = NULL;
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  chpl____wide_object tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl31 _args_foron_fn_chpl = NULL;
  chpl____wide_object tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_object chpl_macro_tmp_179;
  chpl____wide_object chpl_macro_tmp_180;
  chpl__class_localson_fn_chpl31_object chpl_macro_tmp_181;
  chpl____wide_object chpl_macro_tmp_182;
  if (arg_chpl != nil) {
    call_tmp_chpl36 = arg_chpl;
    chpl_check_nil(call_tmp_chpl36, INT64(1794), INT32(2));
    chpl_macro_tmp_179.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_179.addr = call_tmp_chpl36;
    tmp_chpl15 = chpl_macro_tmp_179;
    ((void(*)(chpl____wide_object))chpl_vmtable[((INT64(6) * ((object_chpl)(call_tmp_chpl36))->chpl__cid) + INT64(0))])(tmp_chpl15);
    call_tmp_chpl37 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
    if (isdirect_chpl) {
      chpl_macro_tmp_180.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_180.addr = arg_chpl;
      tmp_chpl16 = chpl_macro_tmp_180;
      on_fn_chpl30(tmp_chpl16);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl31)(&chpl_macro_tmp_181));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
      chpl_macro_tmp_182.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_182.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_182;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl17;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl31_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl56 ***/ chpl_executeOn(call_tmp_chpl37, INT32(63), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete10(chpl____wide_BaseDom arg_chpl) {
  chpl____wide_object coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl33 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_object chpl_macro_tmp_183;
  chpl____wide__nilType chpl_macro_tmp_184;
  chpl____wide_object chpl_macro_tmp_185;
  chpl____wide__ref_int32_t chpl_macro_tmp_186;
  int32_t chpl_macro_tmp_187;
  chpl__class_localson_fn_chpl33_object chpl_macro_tmp_188;
  chpl_macro_tmp_183.locale = (&arg_chpl)->locale;
  chpl_macro_tmp_183.addr = ((object_chpl)((&arg_chpl)->addr));
  coerce_tmp_chpl3 = chpl_macro_tmp_183;
  chpl_macro_tmp_184.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_184.addr = nil;
  chpl_macro_tmp_185.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_185.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_185;
  if (((&coerce_tmp_chpl3)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl3)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl3)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0))))) {
    call_tmp_chpl36 = arg_chpl;
    chpl_check_nil((&call_tmp_chpl36)->addr, INT64(1794), INT32(2));
    chpl_macro_tmp_186.locale = (&call_tmp_chpl36)->locale;
    chpl_macro_tmp_186.addr = &(((object_chpl)((&call_tmp_chpl36)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_187)), chpl_nodeFromLocaleID((chpl_macro_tmp_186).locale, INT64(0), INT32(0)), (chpl_macro_tmp_186).addr, sizeof(int32_t), COMMID(3), INT64(1794), INT64(2));
    ((void(*)(chpl____wide_BaseDom))chpl_vmtable[((INT64(6) * chpl_macro_tmp_187) + INT64(0))])(call_tmp_chpl36);
    call_tmp_chpl37 = (&arg_chpl)->locale;
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
    if (isdirect_chpl) {
      on_fn_chpl31(arg_chpl);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl33)(&chpl_macro_tmp_188));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = arg_chpl;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl33_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl57 ***/ chpl_executeOn(call_tmp_chpl37, INT32(64), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete11(chpl____wide_BaseDist arg_chpl) {
  chpl____wide_object coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl34 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_object chpl_macro_tmp_189;
  chpl____wide__nilType chpl_macro_tmp_190;
  chpl____wide_object chpl_macro_tmp_191;
  chpl____wide__ref_int32_t chpl_macro_tmp_192;
  int32_t chpl_macro_tmp_193;
  chpl__class_localson_fn_chpl34_object chpl_macro_tmp_194;
  chpl_macro_tmp_189.locale = (&arg_chpl)->locale;
  chpl_macro_tmp_189.addr = ((object_chpl)((&arg_chpl)->addr));
  coerce_tmp_chpl3 = chpl_macro_tmp_189;
  chpl_macro_tmp_190.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_190.addr = nil;
  chpl_macro_tmp_191.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_191.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_191;
  if (((&coerce_tmp_chpl3)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl3)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl3)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0))))) {
    call_tmp_chpl36 = arg_chpl;
    chpl_check_nil((&call_tmp_chpl36)->addr, INT64(1794), INT32(2));
    chpl_macro_tmp_192.locale = (&call_tmp_chpl36)->locale;
    chpl_macro_tmp_192.addr = &(((object_chpl)((&call_tmp_chpl36)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_193)), chpl_nodeFromLocaleID((chpl_macro_tmp_192).locale, INT64(0), INT32(0)), (chpl_macro_tmp_192).addr, sizeof(int32_t), COMMID(4), INT64(1794), INT64(2));
    ((void(*)(chpl____wide_BaseDist))chpl_vmtable[((INT64(6) * chpl_macro_tmp_193) + INT64(0))])(call_tmp_chpl36);
    call_tmp_chpl37 = (&arg_chpl)->locale;
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
    if (isdirect_chpl) {
      on_fn_chpl32(arg_chpl);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl34)(&chpl_macro_tmp_194));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = arg_chpl;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl34_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl23 ***/ chpl_executeOn(call_tmp_chpl37, INT32(30), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete12(QioPluginChannel_chpl arg_chpl) {
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_QioPluginChannel tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl35 _args_foron_fn_chpl = NULL;
  chpl____wide_QioPluginChannel tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_QioPluginChannel chpl_macro_tmp_195;
  chpl__class_localson_fn_chpl35_object chpl_macro_tmp_196;
  chpl____wide_QioPluginChannel chpl_macro_tmp_197;
  if (((object_chpl)(arg_chpl)) != nil) {
    call_tmp_chpl36 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_195.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_195.addr = arg_chpl;
      tmp_chpl15 = chpl_macro_tmp_195;
      on_fn_chpl33(tmp_chpl15);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl35)(&chpl_macro_tmp_196));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_macro_tmp_197.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_197.addr = arg_chpl;
      tmp_chpl16 = chpl_macro_tmp_197;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl16;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl35_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl58 ***/ chpl_executeOn(call_tmp_chpl36, INT32(65), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete13(QioPluginFile_chpl arg_chpl) {
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_QioPluginFile tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl36 _args_foron_fn_chpl = NULL;
  chpl____wide_QioPluginFile tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_QioPluginFile chpl_macro_tmp_198;
  chpl__class_localson_fn_chpl36_object chpl_macro_tmp_199;
  chpl____wide_QioPluginFile chpl_macro_tmp_200;
  if (((object_chpl)(arg_chpl)) != nil) {
    call_tmp_chpl36 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_198.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_198.addr = arg_chpl;
      tmp_chpl15 = chpl_macro_tmp_198;
      on_fn_chpl34(tmp_chpl15);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl36)(&chpl_macro_tmp_199));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_macro_tmp_200.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_200.addr = arg_chpl;
      tmp_chpl16 = chpl_macro_tmp_200;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl16;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl36_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl59 ***/ chpl_executeOn(call_tmp_chpl36, INT32(66), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete14(DecodeError_chpl arg_chpl) {
  Error_chpl _parent_destructor_tmp__chpl = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_DecodeError tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl37 _args_foron_fn_chpl = NULL;
  chpl____wide_DecodeError tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_string chpl_macro_tmp_201;
  chpl____wide_DecodeError chpl_macro_tmp_202;
  chpl__class_localson_fn_chpl37_object chpl_macro_tmp_203;
  chpl____wide_DecodeError chpl_macro_tmp_204;
  if (((object_chpl)(arg_chpl)) != nil) {
    _parent_destructor_tmp__chpl = ((Error_chpl)(arg_chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl = &((_parent_destructor_tmp__chpl)->_msg);
    chpl_macro_tmp_201.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_201.addr = _field_destructor_tmp__chpl;
    tmp_chpl15 = chpl_macro_tmp_201;
    deinit_chpl42(tmp_chpl15);
    call_tmp_chpl36 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_202.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_202.addr = arg_chpl;
      tmp_chpl16 = chpl_macro_tmp_202;
      on_fn_chpl35(tmp_chpl16);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl37)(&chpl_macro_tmp_203));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_macro_tmp_204.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_204.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_204;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl17;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl37_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl48 ***/ chpl_executeOn(call_tmp_chpl36, INT32(55), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete15(BlockingIOError_chpl arg_chpl) {
  SystemError_chpl _parent_destructor_tmp__chpl = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl _parent_destructor_tmp__chpl2 = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_BlockingIOError tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl38 _args_foron_fn_chpl = NULL;
  chpl____wide_BlockingIOError tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_string chpl_macro_tmp_205;
  chpl____wide__ref_string chpl_macro_tmp_206;
  chpl____wide_BlockingIOError chpl_macro_tmp_207;
  chpl__class_localson_fn_chpl38_object chpl_macro_tmp_208;
  chpl____wide_BlockingIOError chpl_macro_tmp_209;
  if (((object_chpl)(arg_chpl)) != nil) {
    _parent_destructor_tmp__chpl = ((SystemError_chpl)(arg_chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl = &((_parent_destructor_tmp__chpl)->details);
    chpl_macro_tmp_205.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_205.addr = _field_destructor_tmp__chpl;
    tmp_chpl15 = chpl_macro_tmp_205;
    deinit_chpl42(tmp_chpl15);
    _parent_destructor_tmp__chpl2 = ((Error_chpl)(_parent_destructor_tmp__chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl2, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl2 = &((_parent_destructor_tmp__chpl2)->_msg);
    chpl_macro_tmp_206.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_206.addr = _field_destructor_tmp__chpl2;
    tmp_chpl16 = chpl_macro_tmp_206;
    deinit_chpl42(tmp_chpl16);
    call_tmp_chpl36 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_207.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_207.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_207;
      on_fn_chpl36(tmp_chpl17);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl38)(&chpl_macro_tmp_208));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_macro_tmp_209.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_209.addr = arg_chpl;
      tmp_chpl18 = chpl_macro_tmp_209;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl18;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl38_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl42 ***/ chpl_executeOn(call_tmp_chpl36, INT32(49), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete16(ChildProcessError_chpl arg_chpl) {
  SystemError_chpl _parent_destructor_tmp__chpl = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl _parent_destructor_tmp__chpl2 = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_ChildProcessError tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl39 _args_foron_fn_chpl = NULL;
  chpl____wide_ChildProcessError tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_string chpl_macro_tmp_210;
  chpl____wide__ref_string chpl_macro_tmp_211;
  chpl____wide_ChildProcessError chpl_macro_tmp_212;
  chpl__class_localson_fn_chpl39_object chpl_macro_tmp_213;
  chpl____wide_ChildProcessError chpl_macro_tmp_214;
  if (((object_chpl)(arg_chpl)) != nil) {
    _parent_destructor_tmp__chpl = ((SystemError_chpl)(arg_chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl = &((_parent_destructor_tmp__chpl)->details);
    chpl_macro_tmp_210.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_210.addr = _field_destructor_tmp__chpl;
    tmp_chpl15 = chpl_macro_tmp_210;
    deinit_chpl42(tmp_chpl15);
    _parent_destructor_tmp__chpl2 = ((Error_chpl)(_parent_destructor_tmp__chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl2, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl2 = &((_parent_destructor_tmp__chpl2)->_msg);
    chpl_macro_tmp_211.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_211.addr = _field_destructor_tmp__chpl2;
    tmp_chpl16 = chpl_macro_tmp_211;
    deinit_chpl42(tmp_chpl16);
    call_tmp_chpl36 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_212.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_212.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_212;
      on_fn_chpl37(tmp_chpl17);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl39)(&chpl_macro_tmp_213));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_macro_tmp_214.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_214.addr = arg_chpl;
      tmp_chpl18 = chpl_macro_tmp_214;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl18;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl39_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl41 ***/ chpl_executeOn(call_tmp_chpl36, INT32(48), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete17(BrokenPipeError_chpl arg_chpl) {
  SystemError_chpl _parent_destructor_tmp__chpl = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl _parent_destructor_tmp__chpl2 = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_BrokenPipeError tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl40 _args_foron_fn_chpl = NULL;
  chpl____wide_BrokenPipeError tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_string chpl_macro_tmp_215;
  chpl____wide__ref_string chpl_macro_tmp_216;
  chpl____wide_BrokenPipeError chpl_macro_tmp_217;
  chpl__class_localson_fn_chpl40_object chpl_macro_tmp_218;
  chpl____wide_BrokenPipeError chpl_macro_tmp_219;
  if (((object_chpl)(arg_chpl)) != nil) {
    _parent_destructor_tmp__chpl = ((SystemError_chpl)(((ConnectionError_chpl)(arg_chpl))));
    chpl_check_nil(_parent_destructor_tmp__chpl, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl = &((_parent_destructor_tmp__chpl)->details);
    chpl_macro_tmp_215.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_215.addr = _field_destructor_tmp__chpl;
    tmp_chpl15 = chpl_macro_tmp_215;
    deinit_chpl42(tmp_chpl15);
    _parent_destructor_tmp__chpl2 = ((Error_chpl)(_parent_destructor_tmp__chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl2, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl2 = &((_parent_destructor_tmp__chpl2)->_msg);
    chpl_macro_tmp_216.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_216.addr = _field_destructor_tmp__chpl2;
    tmp_chpl16 = chpl_macro_tmp_216;
    deinit_chpl42(tmp_chpl16);
    call_tmp_chpl36 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_217.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_217.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_217;
      on_fn_chpl23(tmp_chpl17);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl40)(&chpl_macro_tmp_218));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_macro_tmp_219.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_219.addr = arg_chpl;
      tmp_chpl18 = chpl_macro_tmp_219;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl18;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl40_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl40 ***/ chpl_executeOn(call_tmp_chpl36, INT32(47), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete18(ConnectionAbortedError_chpl arg_chpl) {
  SystemError_chpl _parent_destructor_tmp__chpl = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl _parent_destructor_tmp__chpl2 = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_ConnectionAbortedError tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl41 _args_foron_fn_chpl = NULL;
  chpl____wide_ConnectionAbortedError tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_string chpl_macro_tmp_220;
  chpl____wide__ref_string chpl_macro_tmp_221;
  chpl____wide_ConnectionAbortedError chpl_macro_tmp_222;
  chpl__class_localson_fn_chpl41_object chpl_macro_tmp_223;
  chpl____wide_ConnectionAbortedError chpl_macro_tmp_224;
  if (((object_chpl)(arg_chpl)) != nil) {
    _parent_destructor_tmp__chpl = ((SystemError_chpl)(((ConnectionError_chpl)(arg_chpl))));
    chpl_check_nil(_parent_destructor_tmp__chpl, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl = &((_parent_destructor_tmp__chpl)->details);
    chpl_macro_tmp_220.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_220.addr = _field_destructor_tmp__chpl;
    tmp_chpl15 = chpl_macro_tmp_220;
    deinit_chpl42(tmp_chpl15);
    _parent_destructor_tmp__chpl2 = ((Error_chpl)(_parent_destructor_tmp__chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl2, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl2 = &((_parent_destructor_tmp__chpl2)->_msg);
    chpl_macro_tmp_221.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_221.addr = _field_destructor_tmp__chpl2;
    tmp_chpl16 = chpl_macro_tmp_221;
    deinit_chpl42(tmp_chpl16);
    call_tmp_chpl36 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_222.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_222.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_222;
      on_fn_chpl38(tmp_chpl17);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl41)(&chpl_macro_tmp_223));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_macro_tmp_224.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_224.addr = arg_chpl;
      tmp_chpl18 = chpl_macro_tmp_224;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl18;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl41_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl22 ***/ chpl_executeOn(call_tmp_chpl36, INT32(29), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete19(ConnectionRefusedError_chpl arg_chpl) {
  SystemError_chpl _parent_destructor_tmp__chpl = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl _parent_destructor_tmp__chpl2 = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_ConnectionRefusedError tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl42 _args_foron_fn_chpl = NULL;
  chpl____wide_ConnectionRefusedError tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_string chpl_macro_tmp_225;
  chpl____wide__ref_string chpl_macro_tmp_226;
  chpl____wide_ConnectionRefusedError chpl_macro_tmp_227;
  chpl__class_localson_fn_chpl42_object chpl_macro_tmp_228;
  chpl____wide_ConnectionRefusedError chpl_macro_tmp_229;
  if (((object_chpl)(arg_chpl)) != nil) {
    _parent_destructor_tmp__chpl = ((SystemError_chpl)(((ConnectionError_chpl)(arg_chpl))));
    chpl_check_nil(_parent_destructor_tmp__chpl, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl = &((_parent_destructor_tmp__chpl)->details);
    chpl_macro_tmp_225.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_225.addr = _field_destructor_tmp__chpl;
    tmp_chpl15 = chpl_macro_tmp_225;
    deinit_chpl42(tmp_chpl15);
    _parent_destructor_tmp__chpl2 = ((Error_chpl)(_parent_destructor_tmp__chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl2, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl2 = &((_parent_destructor_tmp__chpl2)->_msg);
    chpl_macro_tmp_226.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_226.addr = _field_destructor_tmp__chpl2;
    tmp_chpl16 = chpl_macro_tmp_226;
    deinit_chpl42(tmp_chpl16);
    call_tmp_chpl36 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_227.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_227.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_227;
      on_fn_chpl39(tmp_chpl17);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl42)(&chpl_macro_tmp_228));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_macro_tmp_229.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_229.addr = arg_chpl;
      tmp_chpl18 = chpl_macro_tmp_229;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl18;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl42_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl34 ***/ chpl_executeOn(call_tmp_chpl36, INT32(41), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete(ConnectionResetError_chpl arg_chpl) {
  SystemError_chpl _parent_destructor_tmp__chpl = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl _parent_destructor_tmp__chpl2 = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_ConnectionResetError tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl22 _args_foron_fn_chpl = NULL;
  chpl____wide_ConnectionResetError tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_string chpl_macro_tmp_230;
  chpl____wide__ref_string chpl_macro_tmp_231;
  chpl____wide_ConnectionResetError chpl_macro_tmp_232;
  chpl__class_localson_fn_chpl22_object chpl_macro_tmp_233;
  chpl____wide_ConnectionResetError chpl_macro_tmp_234;
  if (((object_chpl)(arg_chpl)) != nil) {
    _parent_destructor_tmp__chpl = ((SystemError_chpl)(((ConnectionError_chpl)(arg_chpl))));
    chpl_check_nil(_parent_destructor_tmp__chpl, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl = &((_parent_destructor_tmp__chpl)->details);
    chpl_macro_tmp_230.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_230.addr = _field_destructor_tmp__chpl;
    tmp_chpl15 = chpl_macro_tmp_230;
    deinit_chpl42(tmp_chpl15);
    _parent_destructor_tmp__chpl2 = ((Error_chpl)(_parent_destructor_tmp__chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl2, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl2 = &((_parent_destructor_tmp__chpl2)->_msg);
    chpl_macro_tmp_231.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_231.addr = _field_destructor_tmp__chpl2;
    tmp_chpl16 = chpl_macro_tmp_231;
    deinit_chpl42(tmp_chpl16);
    call_tmp_chpl36 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_232.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_232.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_232;
      on_fn_chpl40(tmp_chpl17);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl22)(&chpl_macro_tmp_233));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_macro_tmp_234.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_234.addr = arg_chpl;
      tmp_chpl18 = chpl_macro_tmp_234;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl18;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl22_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl52 ***/ chpl_executeOn(call_tmp_chpl36, INT32(59), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete20(FileExistsError_chpl arg_chpl) {
  SystemError_chpl _parent_destructor_tmp__chpl = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl _parent_destructor_tmp__chpl2 = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_FileExistsError tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl44 _args_foron_fn_chpl = NULL;
  chpl____wide_FileExistsError tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_string chpl_macro_tmp_235;
  chpl____wide__ref_string chpl_macro_tmp_236;
  chpl____wide_FileExistsError chpl_macro_tmp_237;
  chpl__class_localson_fn_chpl44_object chpl_macro_tmp_238;
  chpl____wide_FileExistsError chpl_macro_tmp_239;
  if (((object_chpl)(arg_chpl)) != nil) {
    _parent_destructor_tmp__chpl = ((SystemError_chpl)(arg_chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl = &((_parent_destructor_tmp__chpl)->details);
    chpl_macro_tmp_235.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_235.addr = _field_destructor_tmp__chpl;
    tmp_chpl15 = chpl_macro_tmp_235;
    deinit_chpl42(tmp_chpl15);
    _parent_destructor_tmp__chpl2 = ((Error_chpl)(_parent_destructor_tmp__chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl2, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl2 = &((_parent_destructor_tmp__chpl2)->_msg);
    chpl_macro_tmp_236.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_236.addr = _field_destructor_tmp__chpl2;
    tmp_chpl16 = chpl_macro_tmp_236;
    deinit_chpl42(tmp_chpl16);
    call_tmp_chpl36 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_237.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_237.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_237;
      on_fn_chpl41(tmp_chpl17);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl44)(&chpl_macro_tmp_238));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_macro_tmp_239.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_239.addr = arg_chpl;
      tmp_chpl18 = chpl_macro_tmp_239;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl18;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl44_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl49 ***/ chpl_executeOn(call_tmp_chpl36, INT32(56), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete21(FileNotFoundError_chpl arg_chpl) {
  SystemError_chpl _parent_destructor_tmp__chpl = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl _parent_destructor_tmp__chpl2 = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_FileNotFoundError tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl45 _args_foron_fn_chpl = NULL;
  chpl____wide_FileNotFoundError tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_string chpl_macro_tmp_240;
  chpl____wide__ref_string chpl_macro_tmp_241;
  chpl____wide_FileNotFoundError chpl_macro_tmp_242;
  chpl__class_localson_fn_chpl45_object chpl_macro_tmp_243;
  chpl____wide_FileNotFoundError chpl_macro_tmp_244;
  if (((object_chpl)(arg_chpl)) != nil) {
    _parent_destructor_tmp__chpl = ((SystemError_chpl)(arg_chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl = &((_parent_destructor_tmp__chpl)->details);
    chpl_macro_tmp_240.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_240.addr = _field_destructor_tmp__chpl;
    tmp_chpl15 = chpl_macro_tmp_240;
    deinit_chpl42(tmp_chpl15);
    _parent_destructor_tmp__chpl2 = ((Error_chpl)(_parent_destructor_tmp__chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl2, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl2 = &((_parent_destructor_tmp__chpl2)->_msg);
    chpl_macro_tmp_241.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_241.addr = _field_destructor_tmp__chpl2;
    tmp_chpl16 = chpl_macro_tmp_241;
    deinit_chpl42(tmp_chpl16);
    call_tmp_chpl36 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_242.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_242.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_242;
      on_fn_chpl42(tmp_chpl17);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl45)(&chpl_macro_tmp_243));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_macro_tmp_244.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_244.addr = arg_chpl;
      tmp_chpl18 = chpl_macro_tmp_244;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl18;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl45_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl45 ***/ chpl_executeOn(call_tmp_chpl36, INT32(52), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete22(InterruptedError_chpl arg_chpl) {
  SystemError_chpl _parent_destructor_tmp__chpl = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl _parent_destructor_tmp__chpl2 = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_InterruptedError tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl46 _args_foron_fn_chpl = NULL;
  chpl____wide_InterruptedError tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_string chpl_macro_tmp_245;
  chpl____wide__ref_string chpl_macro_tmp_246;
  chpl____wide_InterruptedError chpl_macro_tmp_247;
  chpl__class_localson_fn_chpl46_object chpl_macro_tmp_248;
  chpl____wide_InterruptedError chpl_macro_tmp_249;
  if (((object_chpl)(arg_chpl)) != nil) {
    _parent_destructor_tmp__chpl = ((SystemError_chpl)(arg_chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl = &((_parent_destructor_tmp__chpl)->details);
    chpl_macro_tmp_245.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_245.addr = _field_destructor_tmp__chpl;
    tmp_chpl15 = chpl_macro_tmp_245;
    deinit_chpl42(tmp_chpl15);
    _parent_destructor_tmp__chpl2 = ((Error_chpl)(_parent_destructor_tmp__chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl2, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl2 = &((_parent_destructor_tmp__chpl2)->_msg);
    chpl_macro_tmp_246.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_246.addr = _field_destructor_tmp__chpl2;
    tmp_chpl16 = chpl_macro_tmp_246;
    deinit_chpl42(tmp_chpl16);
    call_tmp_chpl36 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_247.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_247.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_247;
      on_fn_chpl43(tmp_chpl17);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl46)(&chpl_macro_tmp_248));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_macro_tmp_249.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_249.addr = arg_chpl;
      tmp_chpl18 = chpl_macro_tmp_249;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl18;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl46_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl24 ***/ chpl_executeOn(call_tmp_chpl36, INT32(31), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete23(IsADirectoryError_chpl arg_chpl) {
  SystemError_chpl _parent_destructor_tmp__chpl = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl _parent_destructor_tmp__chpl2 = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_IsADirectoryError tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl48 _args_foron_fn_chpl = NULL;
  chpl____wide_IsADirectoryError tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_string chpl_macro_tmp_250;
  chpl____wide__ref_string chpl_macro_tmp_251;
  chpl____wide_IsADirectoryError chpl_macro_tmp_252;
  chpl__class_localson_fn_chpl48_object chpl_macro_tmp_253;
  chpl____wide_IsADirectoryError chpl_macro_tmp_254;
  if (((object_chpl)(arg_chpl)) != nil) {
    _parent_destructor_tmp__chpl = ((SystemError_chpl)(arg_chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl = &((_parent_destructor_tmp__chpl)->details);
    chpl_macro_tmp_250.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_250.addr = _field_destructor_tmp__chpl;
    tmp_chpl15 = chpl_macro_tmp_250;
    deinit_chpl42(tmp_chpl15);
    _parent_destructor_tmp__chpl2 = ((Error_chpl)(_parent_destructor_tmp__chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl2, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl2 = &((_parent_destructor_tmp__chpl2)->_msg);
    chpl_macro_tmp_251.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_251.addr = _field_destructor_tmp__chpl2;
    tmp_chpl16 = chpl_macro_tmp_251;
    deinit_chpl42(tmp_chpl16);
    call_tmp_chpl36 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_252.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_252.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_252;
      on_fn_chpl44(tmp_chpl17);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl48)(&chpl_macro_tmp_253));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_macro_tmp_254.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_254.addr = arg_chpl;
      tmp_chpl18 = chpl_macro_tmp_254;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl18;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl48_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl25 ***/ chpl_executeOn(call_tmp_chpl36, INT32(32), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete24(NotADirectoryError_chpl arg_chpl) {
  SystemError_chpl _parent_destructor_tmp__chpl = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl _parent_destructor_tmp__chpl2 = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_NotADirectoryError tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl51 _args_foron_fn_chpl = NULL;
  chpl____wide_NotADirectoryError tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_string chpl_macro_tmp_255;
  chpl____wide__ref_string chpl_macro_tmp_256;
  chpl____wide_NotADirectoryError chpl_macro_tmp_257;
  chpl__class_localson_fn_chpl51_object chpl_macro_tmp_258;
  chpl____wide_NotADirectoryError chpl_macro_tmp_259;
  if (((object_chpl)(arg_chpl)) != nil) {
    _parent_destructor_tmp__chpl = ((SystemError_chpl)(arg_chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl = &((_parent_destructor_tmp__chpl)->details);
    chpl_macro_tmp_255.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_255.addr = _field_destructor_tmp__chpl;
    tmp_chpl15 = chpl_macro_tmp_255;
    deinit_chpl42(tmp_chpl15);
    _parent_destructor_tmp__chpl2 = ((Error_chpl)(_parent_destructor_tmp__chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl2, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl2 = &((_parent_destructor_tmp__chpl2)->_msg);
    chpl_macro_tmp_256.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_256.addr = _field_destructor_tmp__chpl2;
    tmp_chpl16 = chpl_macro_tmp_256;
    deinit_chpl42(tmp_chpl16);
    call_tmp_chpl36 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_257.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_257.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_257;
      on_fn_chpl45(tmp_chpl17);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl51)(&chpl_macro_tmp_258));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_macro_tmp_259.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_259.addr = arg_chpl;
      tmp_chpl18 = chpl_macro_tmp_259;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl18;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl51_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl26 ***/ chpl_executeOn(call_tmp_chpl36, INT32(33), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete25(PermissionError_chpl arg_chpl) {
  SystemError_chpl _parent_destructor_tmp__chpl = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl _parent_destructor_tmp__chpl2 = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_PermissionError tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl29 _args_foron_fn_chpl = NULL;
  chpl____wide_PermissionError tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_string chpl_macro_tmp_260;
  chpl____wide__ref_string chpl_macro_tmp_261;
  chpl____wide_PermissionError chpl_macro_tmp_262;
  chpl__class_localson_fn_chpl29_object chpl_macro_tmp_263;
  chpl____wide_PermissionError chpl_macro_tmp_264;
  if (((object_chpl)(arg_chpl)) != nil) {
    _parent_destructor_tmp__chpl = ((SystemError_chpl)(arg_chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl = &((_parent_destructor_tmp__chpl)->details);
    chpl_macro_tmp_260.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_260.addr = _field_destructor_tmp__chpl;
    tmp_chpl15 = chpl_macro_tmp_260;
    deinit_chpl42(tmp_chpl15);
    _parent_destructor_tmp__chpl2 = ((Error_chpl)(_parent_destructor_tmp__chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl2, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl2 = &((_parent_destructor_tmp__chpl2)->_msg);
    chpl_macro_tmp_261.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_261.addr = _field_destructor_tmp__chpl2;
    tmp_chpl16 = chpl_macro_tmp_261;
    deinit_chpl42(tmp_chpl16);
    call_tmp_chpl36 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_262.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_262.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_262;
      on_fn_chpl22(tmp_chpl17);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl29)(&chpl_macro_tmp_263));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_macro_tmp_264.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_264.addr = arg_chpl;
      tmp_chpl18 = chpl_macro_tmp_264;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl18;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl29_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl27 ***/ chpl_executeOn(call_tmp_chpl36, INT32(34), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete26(ProcessLookupError_chpl arg_chpl) {
  SystemError_chpl _parent_destructor_tmp__chpl = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl _parent_destructor_tmp__chpl2 = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_ProcessLookupError tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl23 _args_foron_fn_chpl = NULL;
  chpl____wide_ProcessLookupError tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_string chpl_macro_tmp_265;
  chpl____wide__ref_string chpl_macro_tmp_266;
  chpl____wide_ProcessLookupError chpl_macro_tmp_267;
  chpl__class_localson_fn_chpl23_object chpl_macro_tmp_268;
  chpl____wide_ProcessLookupError chpl_macro_tmp_269;
  if (((object_chpl)(arg_chpl)) != nil) {
    _parent_destructor_tmp__chpl = ((SystemError_chpl)(arg_chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl = &((_parent_destructor_tmp__chpl)->details);
    chpl_macro_tmp_265.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_265.addr = _field_destructor_tmp__chpl;
    tmp_chpl15 = chpl_macro_tmp_265;
    deinit_chpl42(tmp_chpl15);
    _parent_destructor_tmp__chpl2 = ((Error_chpl)(_parent_destructor_tmp__chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl2, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl2 = &((_parent_destructor_tmp__chpl2)->_msg);
    chpl_macro_tmp_266.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_266.addr = _field_destructor_tmp__chpl2;
    tmp_chpl16 = chpl_macro_tmp_266;
    deinit_chpl42(tmp_chpl16);
    call_tmp_chpl36 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_267.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_267.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_267;
      on_fn_chpl46(tmp_chpl17);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl23)(&chpl_macro_tmp_268));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_macro_tmp_269.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_269.addr = arg_chpl;
      tmp_chpl18 = chpl_macro_tmp_269;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl18;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl23_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl28 ***/ chpl_executeOn(call_tmp_chpl36, INT32(35), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete27(TimeoutError_chpl arg_chpl) {
  SystemError_chpl _parent_destructor_tmp__chpl = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl _parent_destructor_tmp__chpl2 = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_TimeoutError tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl56 _args_foron_fn_chpl = NULL;
  chpl____wide_TimeoutError tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_string chpl_macro_tmp_270;
  chpl____wide__ref_string chpl_macro_tmp_271;
  chpl____wide_TimeoutError chpl_macro_tmp_272;
  chpl__class_localson_fn_chpl56_object chpl_macro_tmp_273;
  chpl____wide_TimeoutError chpl_macro_tmp_274;
  if (((object_chpl)(arg_chpl)) != nil) {
    _parent_destructor_tmp__chpl = ((SystemError_chpl)(arg_chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl = &((_parent_destructor_tmp__chpl)->details);
    chpl_macro_tmp_270.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_270.addr = _field_destructor_tmp__chpl;
    tmp_chpl15 = chpl_macro_tmp_270;
    deinit_chpl42(tmp_chpl15);
    _parent_destructor_tmp__chpl2 = ((Error_chpl)(_parent_destructor_tmp__chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl2, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl2 = &((_parent_destructor_tmp__chpl2)->_msg);
    chpl_macro_tmp_271.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_271.addr = _field_destructor_tmp__chpl2;
    tmp_chpl16 = chpl_macro_tmp_271;
    deinit_chpl42(tmp_chpl16);
    call_tmp_chpl36 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_272.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_272.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_272;
      on_fn_chpl47(tmp_chpl17);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl56)(&chpl_macro_tmp_273));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_macro_tmp_274.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_274.addr = arg_chpl;
      tmp_chpl18 = chpl_macro_tmp_274;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl18;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl56_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl29 ***/ chpl_executeOn(call_tmp_chpl36, INT32(36), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete28(EOFError_chpl arg_chpl) {
  SystemError_chpl _parent_destructor_tmp__chpl = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl _parent_destructor_tmp__chpl2 = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_EOFError tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl59 _args_foron_fn_chpl = NULL;
  chpl____wide_EOFError tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_string chpl_macro_tmp_275;
  chpl____wide__ref_string chpl_macro_tmp_276;
  chpl____wide_EOFError chpl_macro_tmp_277;
  chpl__class_localson_fn_chpl59_object chpl_macro_tmp_278;
  chpl____wide_EOFError chpl_macro_tmp_279;
  if (((object_chpl)(arg_chpl)) != nil) {
    _parent_destructor_tmp__chpl = ((SystemError_chpl)(((IOError_chpl)(arg_chpl))));
    chpl_check_nil(_parent_destructor_tmp__chpl, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl = &((_parent_destructor_tmp__chpl)->details);
    chpl_macro_tmp_275.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_275.addr = _field_destructor_tmp__chpl;
    tmp_chpl15 = chpl_macro_tmp_275;
    deinit_chpl42(tmp_chpl15);
    _parent_destructor_tmp__chpl2 = ((Error_chpl)(_parent_destructor_tmp__chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl2, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl2 = &((_parent_destructor_tmp__chpl2)->_msg);
    chpl_macro_tmp_276.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_276.addr = _field_destructor_tmp__chpl2;
    tmp_chpl16 = chpl_macro_tmp_276;
    deinit_chpl42(tmp_chpl16);
    call_tmp_chpl36 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_277.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_277.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_277;
      on_fn_chpl48(tmp_chpl17);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl59)(&chpl_macro_tmp_278));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_macro_tmp_279.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_279.addr = arg_chpl;
      tmp_chpl18 = chpl_macro_tmp_279;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl18;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl59_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl30 ***/ chpl_executeOn(call_tmp_chpl36, INT32(37), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete29(UnexpectedEOFError_chpl arg_chpl) {
  SystemError_chpl _parent_destructor_tmp__chpl = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl _parent_destructor_tmp__chpl2 = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_UnexpectedEOFError tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl50 _args_foron_fn_chpl = NULL;
  chpl____wide_UnexpectedEOFError tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_string chpl_macro_tmp_280;
  chpl____wide__ref_string chpl_macro_tmp_281;
  chpl____wide_UnexpectedEOFError chpl_macro_tmp_282;
  chpl__class_localson_fn_chpl50_object chpl_macro_tmp_283;
  chpl____wide_UnexpectedEOFError chpl_macro_tmp_284;
  if (((object_chpl)(arg_chpl)) != nil) {
    _parent_destructor_tmp__chpl = ((SystemError_chpl)(((IOError_chpl)(arg_chpl))));
    chpl_check_nil(_parent_destructor_tmp__chpl, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl = &((_parent_destructor_tmp__chpl)->details);
    chpl_macro_tmp_280.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_280.addr = _field_destructor_tmp__chpl;
    tmp_chpl15 = chpl_macro_tmp_280;
    deinit_chpl42(tmp_chpl15);
    _parent_destructor_tmp__chpl2 = ((Error_chpl)(_parent_destructor_tmp__chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl2, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl2 = &((_parent_destructor_tmp__chpl2)->_msg);
    chpl_macro_tmp_281.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_281.addr = _field_destructor_tmp__chpl2;
    tmp_chpl16 = chpl_macro_tmp_281;
    deinit_chpl42(tmp_chpl16);
    call_tmp_chpl36 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_282.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_282.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_282;
      on_fn_chpl49(tmp_chpl17);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl50)(&chpl_macro_tmp_283));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_macro_tmp_284.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_284.addr = arg_chpl;
      tmp_chpl18 = chpl_macro_tmp_284;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl18;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl50_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl31 ***/ chpl_executeOn(call_tmp_chpl36, INT32(38), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete30(BadFormatError_chpl arg_chpl) {
  SystemError_chpl _parent_destructor_tmp__chpl = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl _parent_destructor_tmp__chpl2 = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_BadFormatError tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl32 _args_foron_fn_chpl = NULL;
  chpl____wide_BadFormatError tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_string chpl_macro_tmp_285;
  chpl____wide__ref_string chpl_macro_tmp_286;
  chpl____wide_BadFormatError chpl_macro_tmp_287;
  chpl__class_localson_fn_chpl32_object chpl_macro_tmp_288;
  chpl____wide_BadFormatError chpl_macro_tmp_289;
  if (((object_chpl)(arg_chpl)) != nil) {
    _parent_destructor_tmp__chpl = ((SystemError_chpl)(((IOError_chpl)(arg_chpl))));
    chpl_check_nil(_parent_destructor_tmp__chpl, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl = &((_parent_destructor_tmp__chpl)->details);
    chpl_macro_tmp_285.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_285.addr = _field_destructor_tmp__chpl;
    tmp_chpl15 = chpl_macro_tmp_285;
    deinit_chpl42(tmp_chpl15);
    _parent_destructor_tmp__chpl2 = ((Error_chpl)(_parent_destructor_tmp__chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl2, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl2 = &((_parent_destructor_tmp__chpl2)->_msg);
    chpl_macro_tmp_286.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_286.addr = _field_destructor_tmp__chpl2;
    tmp_chpl16 = chpl_macro_tmp_286;
    deinit_chpl42(tmp_chpl16);
    call_tmp_chpl36 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_287.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_287.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_287;
      on_fn_chpl50(tmp_chpl17);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl32)(&chpl_macro_tmp_288));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_macro_tmp_289.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_289.addr = arg_chpl;
      tmp_chpl18 = chpl_macro_tmp_289;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl18;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl32_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl32 ***/ chpl_executeOn(call_tmp_chpl36, INT32(39), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete31(IOError_chpl arg_chpl) {
  IOError_chpl call_tmp_chpl36 = NULL;
  chpl____wide_IOError tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  chpl____wide_IOError tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl58 _args_foron_fn_chpl = NULL;
  chpl____wide_IOError tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_IOError chpl_macro_tmp_290;
  chpl____wide_IOError chpl_macro_tmp_291;
  chpl__class_localson_fn_chpl58_object chpl_macro_tmp_292;
  chpl____wide_IOError chpl_macro_tmp_293;
  if (((object_chpl)(arg_chpl)) != nil) {
    call_tmp_chpl36 = arg_chpl;
    chpl_check_nil(call_tmp_chpl36, INT64(1794), INT32(2));
    chpl_macro_tmp_290.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_290.addr = call_tmp_chpl36;
    tmp_chpl15 = chpl_macro_tmp_290;
    ((void(*)(chpl____wide_IOError))chpl_vmtable[((INT64(6) * ((object_chpl)(call_tmp_chpl36))->chpl__cid) + INT64(0))])(tmp_chpl15);
    call_tmp_chpl37 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
    if (isdirect_chpl) {
      chpl_macro_tmp_291.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_291.addr = arg_chpl;
      tmp_chpl16 = chpl_macro_tmp_291;
      on_fn_chpl51(tmp_chpl16);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl58)(&chpl_macro_tmp_292));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
      chpl_macro_tmp_293.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_293.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_293;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl17;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl58_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl33 ***/ chpl_executeOn(call_tmp_chpl37, INT32(40), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete32(SystemError_chpl arg_chpl) {
  SystemError_chpl call_tmp_chpl36 = NULL;
  chpl____wide_SystemError tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  chpl____wide_SystemError tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl57 _args_foron_fn_chpl = NULL;
  chpl____wide_SystemError tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_SystemError chpl_macro_tmp_294;
  chpl____wide_SystemError chpl_macro_tmp_295;
  chpl__class_localson_fn_chpl57_object chpl_macro_tmp_296;
  chpl____wide_SystemError chpl_macro_tmp_297;
  if (((object_chpl)(arg_chpl)) != nil) {
    call_tmp_chpl36 = arg_chpl;
    chpl_check_nil(call_tmp_chpl36, INT64(1794), INT32(2));
    chpl_macro_tmp_294.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_294.addr = call_tmp_chpl36;
    tmp_chpl15 = chpl_macro_tmp_294;
    ((void(*)(chpl____wide_SystemError))chpl_vmtable[((INT64(6) * ((object_chpl)(call_tmp_chpl36))->chpl__cid) + INT64(0))])(tmp_chpl15);
    call_tmp_chpl37 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
    if (isdirect_chpl) {
      chpl_macro_tmp_295.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_295.addr = arg_chpl;
      tmp_chpl16 = chpl_macro_tmp_295;
      on_fn_chpl52(tmp_chpl16);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl57)(&chpl_macro_tmp_296));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
      chpl_macro_tmp_297.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_297.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_297;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl17;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl57_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl35 ***/ chpl_executeOn(call_tmp_chpl37, INT32(42), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete2(IllegalArgumentError_chpl arg_chpl) {
  Error_chpl _parent_destructor_tmp__chpl = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_IllegalArgumentError tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl55 _args_foron_fn_chpl = NULL;
  chpl____wide_IllegalArgumentError tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_string chpl_macro_tmp_298;
  chpl____wide_IllegalArgumentError chpl_macro_tmp_299;
  chpl__class_localson_fn_chpl55_object chpl_macro_tmp_300;
  chpl____wide_IllegalArgumentError chpl_macro_tmp_301;
  if (((object_chpl)(arg_chpl)) != nil) {
    _parent_destructor_tmp__chpl = ((Error_chpl)(arg_chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl = &((_parent_destructor_tmp__chpl)->_msg);
    chpl_macro_tmp_298.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_298.addr = _field_destructor_tmp__chpl;
    tmp_chpl15 = chpl_macro_tmp_298;
    deinit_chpl42(tmp_chpl15);
    call_tmp_chpl36 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_299.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_299.addr = arg_chpl;
      tmp_chpl16 = chpl_macro_tmp_299;
      on_fn_chpl53(tmp_chpl16);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl55)(&chpl_macro_tmp_300));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_macro_tmp_301.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_301.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_301;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl17;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl55_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl36 ***/ chpl_executeOn(call_tmp_chpl36, INT32(43), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete33(CodepointSplittingError_chpl arg_chpl) {
  Error_chpl _parent_destructor_tmp__chpl = NULL;
  _ref_string_chpl _field_destructor_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_CodepointSplittingError tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl54 _args_foron_fn_chpl = NULL;
  chpl____wide_CodepointSplittingError tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_string chpl_macro_tmp_302;
  chpl____wide_CodepointSplittingError chpl_macro_tmp_303;
  chpl__class_localson_fn_chpl54_object chpl_macro_tmp_304;
  chpl____wide_CodepointSplittingError chpl_macro_tmp_305;
  if (((object_chpl)(arg_chpl)) != nil) {
    _parent_destructor_tmp__chpl = ((Error_chpl)(arg_chpl));
    chpl_check_nil(_parent_destructor_tmp__chpl, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl = &((_parent_destructor_tmp__chpl)->_msg);
    chpl_macro_tmp_302.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_302.addr = _field_destructor_tmp__chpl;
    tmp_chpl15 = chpl_macro_tmp_302;
    deinit_chpl42(tmp_chpl15);
    call_tmp_chpl36 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_303.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_303.addr = arg_chpl;
      tmp_chpl16 = chpl_macro_tmp_303;
      on_fn_chpl54(tmp_chpl16);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl54)(&chpl_macro_tmp_304));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_macro_tmp_305.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_305.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_305;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl17;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl54_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl37 ***/ chpl_executeOn(call_tmp_chpl36, INT32(44), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete35(chpl____wide_DefaultRectangularDom_1_int64_t_F arg_chpl) {
  chpl____wide_object coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseRectangularDom_1_int64_t_F _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl53 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_object chpl_macro_tmp_306;
  chpl____wide__nilType chpl_macro_tmp_307;
  chpl____wide_object chpl_macro_tmp_308;
  chpl____wide_BaseRectangularDom_1_int64_t_F chpl_macro_tmp_309;
  chpl__class_localson_fn_chpl53_object chpl_macro_tmp_310;
  chpl_macro_tmp_306.locale = (&arg_chpl)->locale;
  chpl_macro_tmp_306.addr = ((object_chpl)((&arg_chpl)->addr));
  coerce_tmp_chpl3 = chpl_macro_tmp_306;
  chpl_macro_tmp_307.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_307.addr = nil;
  chpl_macro_tmp_308.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_308.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_308;
  if (((&coerce_tmp_chpl3)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl3)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl3)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0))))) {
    call_tmp_chpl36 = arg_chpl;
    chpl_macro_tmp_309.locale = (&call_tmp_chpl36)->locale;
    chpl_macro_tmp_309.addr = ((BaseRectangularDom_1_int64_t_F_chpl)((&call_tmp_chpl36)->addr));
    _parent_destructor_tmp__chpl = chpl_macro_tmp_309;
    deinit_chpl7(_parent_destructor_tmp__chpl);
    call_tmp_chpl37 = (&arg_chpl)->locale;
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
    if (isdirect_chpl) {
      on_fn_chpl56(arg_chpl);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl53)(&chpl_macro_tmp_310));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = arg_chpl;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl53_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl39 ***/ chpl_executeOn(call_tmp_chpl37, INT32(46), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete36(DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl arg_chpl) {
  BaseRectangularArr_1_int64_t_F_locale_chpl _parent_destructor_tmp__chpl = NULL;
  chpl____wide_BaseRectangularArr_1_int64_t_F_locale tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl52 _args_foron_fn_chpl = NULL;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_BaseRectangularArr_1_int64_t_F_locale chpl_macro_tmp_311;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t chpl_macro_tmp_312;
  chpl__class_localson_fn_chpl52_object chpl_macro_tmp_313;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t chpl_macro_tmp_314;
  if (((object_chpl)(arg_chpl)) != nil) {
    _parent_destructor_tmp__chpl = ((BaseRectangularArr_1_int64_t_F_locale_chpl)(arg_chpl));
    chpl_macro_tmp_311.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_311.addr = _parent_destructor_tmp__chpl;
    tmp_chpl15 = chpl_macro_tmp_311;
    deinit_chpl12(tmp_chpl15);
    call_tmp_chpl36 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_312.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_312.addr = arg_chpl;
      tmp_chpl16 = chpl_macro_tmp_312;
      on_fn_chpl57(tmp_chpl16);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl52)(&chpl_macro_tmp_313));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_macro_tmp_314.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_314.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_314;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl17;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl52_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl44 ***/ chpl_executeOn(call_tmp_chpl36, INT32(51), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete37(DefaultRectangularArr_1_int64_t_F_int64_t_int64_t_chpl arg_chpl) {
  BaseRectangularArr_1_int64_t_F_int64_t_chpl _parent_destructor_tmp__chpl = NULL;
  chpl____wide_BaseRectangularArr_1_int64_t_F_int64_t tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_int64_t_int64_t tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl49 _args_foron_fn_chpl = NULL;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_int64_t_int64_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_BaseRectangularArr_1_int64_t_F_int64_t chpl_macro_tmp_315;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_int64_t_int64_t chpl_macro_tmp_316;
  chpl__class_localson_fn_chpl49_object chpl_macro_tmp_317;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_int64_t_int64_t chpl_macro_tmp_318;
  if (((object_chpl)(arg_chpl)) != nil) {
    _parent_destructor_tmp__chpl = ((BaseRectangularArr_1_int64_t_F_int64_t_chpl)(arg_chpl));
    chpl_macro_tmp_315.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_315.addr = _parent_destructor_tmp__chpl;
    tmp_chpl15 = chpl_macro_tmp_315;
    deinit_chpl11(tmp_chpl15);
    call_tmp_chpl36 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_316.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_316.addr = arg_chpl;
      tmp_chpl16 = chpl_macro_tmp_316;
      on_fn_chpl58(tmp_chpl16);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl49)(&chpl_macro_tmp_317));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_macro_tmp_318.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_318.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_318;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl17;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl49_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl50 ***/ chpl_executeOn(call_tmp_chpl36, INT32(57), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete38(DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t_chpl arg_chpl) {
  BaseRectangularArr_1_int64_t_F_uint64_t_chpl _parent_destructor_tmp__chpl = NULL;
  chpl____wide_BaseRectangularArr_1_int64_t_F_uint64_t tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl47 _args_foron_fn_chpl = NULL;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_BaseRectangularArr_1_int64_t_F_uint64_t chpl_macro_tmp_319;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t chpl_macro_tmp_320;
  chpl__class_localson_fn_chpl47_object chpl_macro_tmp_321;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t chpl_macro_tmp_322;
  if (((object_chpl)(arg_chpl)) != nil) {
    _parent_destructor_tmp__chpl = ((BaseRectangularArr_1_int64_t_F_uint64_t_chpl)(arg_chpl));
    chpl_macro_tmp_319.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_319.addr = _parent_destructor_tmp__chpl;
    tmp_chpl15 = chpl_macro_tmp_319;
    deinit_chpl10(tmp_chpl15);
    call_tmp_chpl36 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_320.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_320.addr = arg_chpl;
      tmp_chpl16 = chpl_macro_tmp_320;
      on_fn_chpl59(tmp_chpl16);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl47)(&chpl_macro_tmp_321));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_macro_tmp_322.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_322.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_322;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl17;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl47_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl53 ***/ chpl_executeOn(call_tmp_chpl36, INT32(60), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete8(chpl____wide_BaseArr arg_chpl) {
  chpl____wide_object coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl30 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_object chpl_macro_tmp_323;
  chpl____wide__nilType chpl_macro_tmp_324;
  chpl____wide_object chpl_macro_tmp_325;
  chpl____wide__ref_int32_t chpl_macro_tmp_326;
  int32_t chpl_macro_tmp_327;
  chpl__class_localson_fn_chpl30_object chpl_macro_tmp_328;
  chpl_macro_tmp_323.locale = (&arg_chpl)->locale;
  chpl_macro_tmp_323.addr = ((object_chpl)((&arg_chpl)->addr));
  coerce_tmp_chpl3 = chpl_macro_tmp_323;
  chpl_macro_tmp_324.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_324.addr = nil;
  chpl_macro_tmp_325.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_325.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_325;
  if (((&coerce_tmp_chpl3)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl3)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl3)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0))))) {
    call_tmp_chpl36 = arg_chpl;
    chpl_check_nil((&call_tmp_chpl36)->addr, INT64(1794), INT32(2));
    chpl_macro_tmp_326.locale = (&call_tmp_chpl36)->locale;
    chpl_macro_tmp_326.addr = &(((object_chpl)((&call_tmp_chpl36)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_327)), chpl_nodeFromLocaleID((chpl_macro_tmp_326).locale, INT64(0), INT32(0)), (chpl_macro_tmp_326).addr, sizeof(int32_t), COMMID(5), INT64(1794), INT64(2));
    ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(6) * chpl_macro_tmp_327) + INT64(0))])(call_tmp_chpl36);
    call_tmp_chpl37 = (&arg_chpl)->locale;
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
    if (isdirect_chpl) {
      on_fn_chpl29(arg_chpl);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl30)(&chpl_macro_tmp_328));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = arg_chpl;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl30_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl55 ***/ chpl_executeOn(call_tmp_chpl37, INT32(62), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete7(chpl____wide_chpl_ModuleDeinit arg_chpl) {
  chpl____wide_object coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl28 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_object chpl_macro_tmp_329;
  chpl____wide__nilType chpl_macro_tmp_330;
  chpl____wide_object chpl_macro_tmp_331;
  chpl__class_localson_fn_chpl28_object chpl_macro_tmp_332;
  chpl_macro_tmp_329.locale = (&arg_chpl)->locale;
  chpl_macro_tmp_329.addr = ((object_chpl)((&arg_chpl)->addr));
  coerce_tmp_chpl3 = chpl_macro_tmp_329;
  chpl_macro_tmp_330.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_330.addr = nil;
  chpl_macro_tmp_331.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_331.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_331;
  if (((&coerce_tmp_chpl3)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl3)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl3)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0))))) {
    call_tmp_chpl36 = (&arg_chpl)->locale;
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      on_fn_chpl28(arg_chpl);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl28)(&chpl_macro_tmp_332));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = arg_chpl;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl28_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl54 ***/ chpl_executeOn(call_tmp_chpl36, INT32(61), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete6(chpl____wide__EndCount_RAtomicT_int64_t_RAtomicT_int64_t arg_chpl) {
  chpl____wide_object coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_RAtomicT_int64_t_RAtomicT_int64_t call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCountBase _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_TaskErrors _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_LocalSpinlock _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicBool _field_destructor_tmp__chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl27 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_object chpl_macro_tmp_333;
  chpl____wide__nilType chpl_macro_tmp_334;
  chpl____wide_object chpl_macro_tmp_335;
  chpl____wide__EndCountBase chpl_macro_tmp_336;
  chpl____wide__ref_chpl_TaskErrors chpl_macro_tmp_337;
  chpl____wide__ref_chpl_LocalSpinlock chpl_macro_tmp_338;
  chpl____wide__ref_AtomicBool chpl_macro_tmp_339;
  chpl__class_localson_fn_chpl27_object chpl_macro_tmp_340;
  chpl_macro_tmp_333.locale = (&arg_chpl)->locale;
  chpl_macro_tmp_333.addr = ((object_chpl)((&arg_chpl)->addr));
  coerce_tmp_chpl3 = chpl_macro_tmp_333;
  chpl_macro_tmp_334.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_334.addr = nil;
  chpl_macro_tmp_335.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_335.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_335;
  if (((&coerce_tmp_chpl3)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl3)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl3)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0))))) {
    call_tmp_chpl36 = arg_chpl;
    chpl_macro_tmp_336.locale = (&call_tmp_chpl36)->locale;
    chpl_macro_tmp_336.addr = ((chpl___EndCountBase)((&call_tmp_chpl36)->addr));
    _parent_destructor_tmp__chpl = chpl_macro_tmp_336;
    chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(1794), INT32(2));
    chpl_macro_tmp_337.locale = (&_parent_destructor_tmp__chpl)->locale;
    chpl_macro_tmp_337.addr = &(((&_parent_destructor_tmp__chpl)->addr)->errors);
    _field_destructor_tmp__chpl = chpl_macro_tmp_337;
    chpl_macro_tmp_338.locale = (_field_destructor_tmp__chpl).locale;
    chpl_macro_tmp_338.addr = &(((_field_destructor_tmp__chpl).addr)->_errorsLock);
    _field_destructor_tmp__chpl2 = chpl_macro_tmp_338;
    chpl_macro_tmp_339.locale = (_field_destructor_tmp__chpl2).locale;
    chpl_macro_tmp_339.addr = &(((_field_destructor_tmp__chpl2).addr)->l);
    _field_destructor_tmp__chpl3 = chpl_macro_tmp_339;
    deinit_chpl(_field_destructor_tmp__chpl3);
    call_tmp_chpl37 = (&arg_chpl)->locale;
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
    if (isdirect_chpl) {
      on_fn_chpl27(arg_chpl);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl27)(&chpl_macro_tmp_340));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = arg_chpl;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl27_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl51 ***/ chpl_executeOn(call_tmp_chpl37, INT32(58), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete4(chpl____wide_Error arg_chpl) {
  chpl____wide_object coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl25 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_object chpl_macro_tmp_341;
  chpl____wide__nilType chpl_macro_tmp_342;
  chpl____wide_object chpl_macro_tmp_343;
  chpl____wide__ref_int32_t chpl_macro_tmp_344;
  int32_t chpl_macro_tmp_345;
  chpl__class_localson_fn_chpl25_object chpl_macro_tmp_346;
  chpl_macro_tmp_341.locale = (&arg_chpl)->locale;
  chpl_macro_tmp_341.addr = ((object_chpl)((&arg_chpl)->addr));
  coerce_tmp_chpl3 = chpl_macro_tmp_341;
  chpl_macro_tmp_342.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_342.addr = nil;
  chpl_macro_tmp_343.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_343.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_343;
  if (((&coerce_tmp_chpl3)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl3)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl3)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0))))) {
    call_tmp_chpl36 = arg_chpl;
    chpl_check_nil((&call_tmp_chpl36)->addr, INT64(1794), INT32(2));
    chpl_macro_tmp_344.locale = (&call_tmp_chpl36)->locale;
    chpl_macro_tmp_344.addr = &(((object_chpl)((&call_tmp_chpl36)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_345)), chpl_nodeFromLocaleID((chpl_macro_tmp_344).locale, INT64(0), INT32(0)), (chpl_macro_tmp_344).addr, sizeof(int32_t), COMMID(6), INT64(1794), INT64(2));
    ((void(*)(chpl____wide_Error))chpl_vmtable[((INT64(6) * chpl_macro_tmp_345) + INT64(0))])(call_tmp_chpl36);
    call_tmp_chpl37 = (&arg_chpl)->locale;
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
    if (isdirect_chpl) {
      on_fn_chpl25(arg_chpl);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl25)(&chpl_macro_tmp_346));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = arg_chpl;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl25_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl43 ***/ chpl_executeOn(call_tmp_chpl37, INT32(50), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete3(chpl___EndCount_AtomicT_int64_t_int64_t arg_chpl) {
  chpl___EndCount_AtomicT_int64_t_int64_t coerce_tmp_chpl3 = NULL;
  _ref_AtomicT_int64_t_chpl _field_destructor_tmp__chpl = NULL;
  chpl____wide__ref_AtomicT_int64_t tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___EndCountBase _parent_destructor_tmp__chpl = NULL;
  _ref_chpl_TaskErrors_chpl _field_destructor_tmp__chpl2 = NULL;
  _ref_chpl_LocalSpinlock_chpl _field_destructor_tmp__chpl3 = NULL;
  _ref_AtomicBool_chpl _field_destructor_tmp__chpl4 = NULL;
  chpl____wide__ref_AtomicBool tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide__EndCount_AtomicT_int64_t_int64_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl24 _args_foron_fn_chpl = NULL;
  chpl____wide__EndCount_AtomicT_int64_t_int64_t tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_347;
  chpl____wide__ref_AtomicBool chpl_macro_tmp_348;
  chpl____wide__EndCount_AtomicT_int64_t_int64_t chpl_macro_tmp_349;
  chpl__class_localson_fn_chpl24_object chpl_macro_tmp_350;
  chpl____wide__EndCount_AtomicT_int64_t_int64_t chpl_macro_tmp_351;
  if (((object_chpl)(arg_chpl)) != nil) {
    coerce_tmp_chpl3 = arg_chpl;
    chpl_check_nil(coerce_tmp_chpl3, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl = &((coerce_tmp_chpl3)->i);
    chpl_macro_tmp_347.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_347.addr = _field_destructor_tmp__chpl;
    tmp_chpl15 = chpl_macro_tmp_347;
    deinit_chpl2(tmp_chpl15);
    _parent_destructor_tmp__chpl = ((chpl___EndCountBase)(coerce_tmp_chpl3));
    chpl_check_nil(_parent_destructor_tmp__chpl, INT64(1794), INT32(2));
    _field_destructor_tmp__chpl2 = &((_parent_destructor_tmp__chpl)->errors);
    _field_destructor_tmp__chpl3 = &((_field_destructor_tmp__chpl2)->_errorsLock);
    _field_destructor_tmp__chpl4 = &((_field_destructor_tmp__chpl3)->l);
    chpl_macro_tmp_348.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_348.addr = _field_destructor_tmp__chpl4;
    tmp_chpl16 = chpl_macro_tmp_348;
    deinit_chpl(tmp_chpl16);
    call_tmp_chpl36 = chpl_gen_getLocaleID();
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
    if (isdirect_chpl) {
      chpl_macro_tmp_349.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_349.addr = arg_chpl;
      tmp_chpl17 = chpl_macro_tmp_349;
      on_fn_chpl24(tmp_chpl17);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl24)(&chpl_macro_tmp_350));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
      chpl_macro_tmp_351.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_351.addr = arg_chpl;
      tmp_chpl18 = chpl_macro_tmp_351;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = tmp_chpl18;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl24_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl38 ***/ chpl_executeOn(call_tmp_chpl36, INT32(45), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete34(chpl____wide_BaseLocale arg_chpl) {
  chpl____wide_object coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl43 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_object chpl_macro_tmp_352;
  chpl____wide__nilType chpl_macro_tmp_353;
  chpl____wide_object chpl_macro_tmp_354;
  chpl____wide__ref_int32_t chpl_macro_tmp_355;
  int32_t chpl_macro_tmp_356;
  chpl__class_localson_fn_chpl43_object chpl_macro_tmp_357;
  chpl_macro_tmp_352.locale = (&arg_chpl)->locale;
  chpl_macro_tmp_352.addr = ((object_chpl)((&arg_chpl)->addr));
  coerce_tmp_chpl3 = chpl_macro_tmp_352;
  chpl_macro_tmp_353.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_353.addr = nil;
  chpl_macro_tmp_354.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_354.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_354;
  if (((&coerce_tmp_chpl3)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl3)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl3)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0))))) {
    call_tmp_chpl36 = arg_chpl;
    chpl_check_nil((&call_tmp_chpl36)->addr, INT64(1794), INT32(2));
    chpl_macro_tmp_355.locale = (&call_tmp_chpl36)->locale;
    chpl_macro_tmp_355.addr = &(((object_chpl)((&call_tmp_chpl36)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_356)), chpl_nodeFromLocaleID((chpl_macro_tmp_355).locale, INT64(0), INT32(0)), (chpl_macro_tmp_355).addr, sizeof(int32_t), COMMID(7), INT64(1794), INT64(2));
    ((void(*)(chpl____wide_BaseLocale))chpl_vmtable[((INT64(6) * chpl_macro_tmp_356) + INT64(0))])(call_tmp_chpl36);
    call_tmp_chpl37 = (&arg_chpl)->locale;
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
    if (isdirect_chpl) {
      on_fn_chpl55(arg_chpl);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl43)(&chpl_macro_tmp_357));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = arg_chpl;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl43_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl46 ***/ chpl_executeOn(call_tmp_chpl37, INT32(53), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1774 */
static void chpl__delete5(chpl____wide_TaskErrors arg_chpl) {
  chpl____wide_object coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_TaskErrors call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl26 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_object chpl_macro_tmp_358;
  chpl____wide__nilType chpl_macro_tmp_359;
  chpl____wide_object chpl_macro_tmp_360;
  chpl__class_localson_fn_chpl26_object chpl_macro_tmp_361;
  chpl_macro_tmp_358.locale = (&arg_chpl)->locale;
  chpl_macro_tmp_358.addr = ((object_chpl)((&arg_chpl)->addr));
  coerce_tmp_chpl3 = chpl_macro_tmp_358;
  chpl_macro_tmp_359.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_359.addr = nil;
  chpl_macro_tmp_360.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_360.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_360;
  if (((&coerce_tmp_chpl3)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl3)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl3)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0))))) {
    call_tmp_chpl36 = arg_chpl;
    deinit_chpl43(call_tmp_chpl36);
    call_tmp_chpl37 = (&arg_chpl)->locale;
    chpl_rmem_consist_release(INT64(1796), INT32(2));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
    if (isdirect_chpl) {
      on_fn_chpl26(arg_chpl);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl26)(&chpl_macro_tmp_361));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1796), INT32(2));
      (_args_foron_fn_chpl)->_1_arg = arg_chpl;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl26_object);
      chpl_taskRunningCntDec(INT64(1796), INT32(2));
      /*** wrapon_fn_chpl47 ***/ chpl_executeOn(call_tmp_chpl37, INT32(54), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1796), INT32(2));
      chpl_taskRunningCntInc(INT64(1796), INT32(2));
    }
    chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl26(chpl____wide_TaskErrors arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl27(chpl____wide__EndCount_RAtomicT_int64_t_RAtomicT_int64_t arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl28(chpl____wide_chpl_ModuleDeinit arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl29(chpl____wide_BaseArr arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl30(chpl____wide_object arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl31(chpl____wide_BaseDom arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl32(chpl____wide_BaseDist arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl33(chpl____wide_QioPluginChannel arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl34(chpl____wide_QioPluginFile arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl35(chpl____wide_DecodeError arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl36(chpl____wide_BlockingIOError arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl37(chpl____wide_ChildProcessError arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl23(chpl____wide_BrokenPipeError arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl38(chpl____wide_ConnectionAbortedError arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl39(chpl____wide_ConnectionRefusedError arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl40(chpl____wide_ConnectionResetError arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl41(chpl____wide_FileExistsError arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl42(chpl____wide_FileNotFoundError arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl43(chpl____wide_InterruptedError arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl44(chpl____wide_IsADirectoryError arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl45(chpl____wide_NotADirectoryError arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl22(chpl____wide_PermissionError arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl46(chpl____wide_ProcessLookupError arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl47(chpl____wide_TimeoutError arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl48(chpl____wide_EOFError arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl49(chpl____wide_UnexpectedEOFError arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl50(chpl____wide_BadFormatError arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl51(chpl____wide_IOError arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl52(chpl____wide_SystemError arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl53(chpl____wide_IllegalArgumentError arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl54(chpl____wide_CodepointSplittingError arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl56(chpl____wide_DefaultRectangularDom_1_int64_t_F arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl57(chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl58(chpl____wide_DefaultRectangularArr_1_int64_t_F_int64_t_int64_t arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl59(chpl____wide_DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl25(chpl____wide_Error arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl24(chpl____wide__EndCount_AtomicT_int64_t_int64_t arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void on_fn_chpl55(chpl____wide_BaseLocale arg_chpl) {
  chpl_here_free(((c_void_ptr)((&arg_chpl)->addr)), INT64(1797), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl46(_class_localson_fn_chpl43 c_chpl) {
  chpl____wide_BaseLocale _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl55(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl38(_class_localson_fn_chpl24 c_chpl) {
  chpl____wide__EndCount_AtomicT_int64_t_int64_t _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl24(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl43(_class_localson_fn_chpl25 c_chpl) {
  chpl____wide_Error _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl25(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl47(_class_localson_fn_chpl26 c_chpl) {
  chpl____wide_TaskErrors _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl26(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl51(_class_localson_fn_chpl27 c_chpl) {
  chpl____wide__EndCount_RAtomicT_int64_t_RAtomicT_int64_t _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl27(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl54(_class_localson_fn_chpl28 c_chpl) {
  chpl____wide_chpl_ModuleDeinit _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl28(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl55(_class_localson_fn_chpl30 c_chpl) {
  chpl____wide_BaseArr _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl29(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl56(_class_localson_fn_chpl31 c_chpl) {
  chpl____wide_object _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl30(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl57(_class_localson_fn_chpl33 c_chpl) {
  chpl____wide_BaseDom _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl31(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl23(_class_localson_fn_chpl34 c_chpl) {
  chpl____wide_BaseDist _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl32(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl58(_class_localson_fn_chpl35 c_chpl) {
  chpl____wide_QioPluginChannel _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl33(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl59(_class_localson_fn_chpl36 c_chpl) {
  chpl____wide_QioPluginFile _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl34(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl48(_class_localson_fn_chpl37 c_chpl) {
  chpl____wide_DecodeError _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl35(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl42(_class_localson_fn_chpl38 c_chpl) {
  chpl____wide_BlockingIOError _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl36(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl41(_class_localson_fn_chpl39 c_chpl) {
  chpl____wide_ChildProcessError _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl37(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl40(_class_localson_fn_chpl40 c_chpl) {
  chpl____wide_BrokenPipeError _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl23(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl22(_class_localson_fn_chpl41 c_chpl) {
  chpl____wide_ConnectionAbortedError _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl38(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl34(_class_localson_fn_chpl42 c_chpl) {
  chpl____wide_ConnectionRefusedError _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl39(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl52(_class_localson_fn_chpl22 c_chpl) {
  chpl____wide_ConnectionResetError _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl40(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl49(_class_localson_fn_chpl44 c_chpl) {
  chpl____wide_FileExistsError _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl41(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl45(_class_localson_fn_chpl45 c_chpl) {
  chpl____wide_FileNotFoundError _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl42(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl24(_class_localson_fn_chpl46 c_chpl) {
  chpl____wide_InterruptedError _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl43(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl25(_class_localson_fn_chpl48 c_chpl) {
  chpl____wide_IsADirectoryError _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl44(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl26(_class_localson_fn_chpl51 c_chpl) {
  chpl____wide_NotADirectoryError _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl45(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl27(_class_localson_fn_chpl29 c_chpl) {
  chpl____wide_PermissionError _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl22(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl28(_class_localson_fn_chpl23 c_chpl) {
  chpl____wide_ProcessLookupError _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl46(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl29(_class_localson_fn_chpl56 c_chpl) {
  chpl____wide_TimeoutError _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl47(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl30(_class_localson_fn_chpl59 c_chpl) {
  chpl____wide_EOFError _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl48(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl31(_class_localson_fn_chpl50 c_chpl) {
  chpl____wide_UnexpectedEOFError _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl49(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl32(_class_localson_fn_chpl32 c_chpl) {
  chpl____wide_BadFormatError _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl50(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl33(_class_localson_fn_chpl58 c_chpl) {
  chpl____wide_IOError _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl51(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl35(_class_localson_fn_chpl57 c_chpl) {
  chpl____wide_SystemError _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl52(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl36(_class_localson_fn_chpl55 c_chpl) {
  chpl____wide_IllegalArgumentError _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl53(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl37(_class_localson_fn_chpl54 c_chpl) {
  chpl____wide_CodepointSplittingError _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl54(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl39(_class_localson_fn_chpl53 c_chpl) {
  chpl____wide_DefaultRectangularDom_1_int64_t_F _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl56(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl44(_class_localson_fn_chpl52 c_chpl) {
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl57(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl50(_class_localson_fn_chpl49 c_chpl) {
  chpl____wide_DefaultRectangularArr_1_int64_t_F_int64_t_int64_t _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl58(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:1796 */
static void wrapon_fn_chpl53(_class_localson_fn_chpl47 c_chpl) {
  chpl____wide_DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t _1_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1796), INT32(2));
  chpl_check_nil(c_chpl, INT64(1796), INT32(2));
  _1_arg_chpl = (c_chpl)->_1_arg;
  chpl_taskRunningCntInc(INT64(1796), INT32(2));
  on_fn_chpl59(_1_arg_chpl);
  chpl_taskRunningCntDec(INT64(1796), INT32(2));
  chpl_rmem_consist_release(INT64(1796), INT32(2));
  return;
}

/* ChapelBase.chpl:2324 */
static chpl_ModuleDeinit _new_chpl3(c_string moduleName_chpl,
                                    c_fn_ptr deinitFun_chpl,
                                    chpl____wide_chpl_ModuleDeinit prevModule_chpl,
                                    int64_t _ln_chpl,
                                    int32_t _fn_chpl) {
  chpl_ModuleDeinit initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_chpl_ModuleDeinit_object), INT16(56), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((chpl_ModuleDeinit)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_chpl_ModuleDeinit;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((initTemp_chpl)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_object_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  (initTemp_chpl)->moduleName = moduleName_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  (initTemp_chpl)->deinitFun = deinitFun_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  (initTemp_chpl)->prevModule = prevModule_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_chpl_ModuleDeinit;
  return initTemp_chpl;
}

/* ChapelBase.chpl:2324 */
static void chpl__auto_destroy_chpl_ModuleDeinit(chpl____wide_chpl_ModuleDeinit this_chpl7) {
  return;
}

/* ChapelBase.chpl:2442 */
static int64_t chpl_boundedCoforallSize(range_int64_t_bounded_F_chpl iterable_chpl) {
  int64_t call_tmp_chpl36;
  call_tmp_chpl36 = sizeAs_chpl3(iterable_chpl);
  return call_tmp_chpl36;
}

