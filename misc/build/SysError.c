/* SysError.chpl:35 */
static void chpl__init_SysError(int64_t _ln_chpl,
                                int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_SysError_p) {
    goto _exit_chpl__init_SysError_chpl;
  }
  printModuleInit_chpl("%*s\n", "SysError", INT64(8));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_SysError_p = UINT8(true);
  {
    chpl__init_SysBasic(INT64(35), INT32(78));
    chpl__init_CTypes(INT64(35), INT32(78));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_SysError_chpl:;
  return;
}

/* SysError.chpl:47 */
static void chpl__auto_destroy_SystemError(chpl____wide_SystemError this_chpl7) {
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_2656;
  chpl____wide_Error chpl_macro_tmp_2657;
  chpl____wide__ref_string chpl_macro_tmp_2658;
  chpl_check_nil((&this_chpl7)->addr, INT64(49), INT32(78));
  chpl_macro_tmp_2656.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_2656.addr = &(((&this_chpl7)->addr)->details);
  _field_destructor_tmp__chpl = chpl_macro_tmp_2656;
  deinit_chpl42(_field_destructor_tmp__chpl);
  chpl_macro_tmp_2657.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_2657.addr = ((Error_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_2657;
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(47), INT32(78));
  chpl_macro_tmp_2658.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2658.addr = &(((&_parent_destructor_tmp__chpl)->addr)->_msg);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_2658;
  deinit_chpl42(_field_destructor_tmp__chpl2);
  return;
}

/* SysError.chpl:51 */
static SystemError_chpl _new_chpl19(syserr err_chpl,
                                    string_chpl * details_chpl,
                                    int64_t _ln_chpl,
                                    int32_t _fn_chpl) {
  SystemError_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  Error_chpl super_tmp_chpl = NULL;
  Error_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl _msg_chpl;
  string_chpl details_chpl2;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_2659;
  chpl____wide__ref_string chpl_macro_tmp_2660;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_SystemError_chpl_object), INT16(25), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((SystemError_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_SystemError_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_object_chpl;
  init_coerce_tmp_chpl3 = ((Error_chpl)(nil));
  chpl_macro_tmp_2659.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2659.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_2659;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_next = tmp_chpl15;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->thrownLine = INT64(0);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->thrownFileId = INT32(0);
  init_chpl73(&_msg_chpl);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_msg = _msg_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_hasThrowInfo = UINT8(false);
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(((Error_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_Error_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  (initTemp_chpl)->err = err_chpl;
  chpl_macro_tmp_2660.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2660.addr = details_chpl;
  tmp_chpl16 = chpl_macro_tmp_2660;
  init_ASSIGN__chpl21(&details_chpl2, tmp_chpl16);
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  (initTemp_chpl)->details = details_chpl2;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_SystemError_chpl;
  return initTemp_chpl;
}

/* SysError.chpl:60 */
static void message_chpl7(chpl____wide_SystemError this_chpl7,
                          chpl____wide__ref_string _retArg_chpl) {
  string_chpl local__str_literal_476_chpl;
  string_chpl local__str_literal_759_chpl;
  string_chpl ret_chpl;
  c_string call_tmp_chpl36;
  syserr coerce_tmp_chpl3;
  syserr tmp_chpl15;
  int32_t _formal_tmp_out_err_in_strerror_chpl;
  string_chpl err_msg_chpl;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl37;
  string_chpl ret_chpl2;
  c_ptr_uint8_t_chpl call_tmp_chpl38 = NULL;
  int64_t call_tmp_chpl39;
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl3;
  string_chpl ret_chpl4;
  int64_t call_tmp_chpl40;
  chpl____wide_Error error_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl16 = NULL;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string call_tmp_chpl41 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl18;
  chpl____wide__ref_string call_tmp_chpl42 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl43;
  string_chpl ret_tmp_chpl;
  string_chpl call_tmp_chpl44;
  string_chpl ret_tmp_chpl2;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_syserr chpl_macro_tmp_2661;
  chpl____wide__nilType chpl_macro_tmp_2662;
  chpl____wide_Error chpl_macro_tmp_2663;
  chpl____wide__nilType chpl_macro_tmp_2664;
  chpl____wide_Error chpl_macro_tmp_2665;
  chpl____wide__nilType chpl_macro_tmp_2666;
  chpl____wide_Error chpl_macro_tmp_2667;
  chpl____wide__ref_string chpl_macro_tmp_2668;
  chpl____wide__ref_string chpl_macro_tmp_2669;
  chpl____wide__ref_int64_t chpl_macro_tmp_2670;
  chpl____wide__ref_string chpl_macro_tmp_2671;
  chpl____wide__ref_string chpl_macro_tmp_2672;
  chpl____wide__ref_string chpl_macro_tmp_2673;
  chpl____wide__ref_string chpl_macro_tmp_2674;
  local__str_literal_476_chpl = _str_literal_476_chpl /* ")" */;
  local__str_literal_759_chpl = _str_literal_759_chpl /* " (" */;
  chpl_check_nil((&this_chpl7)->addr, INT64(62), INT32(78));
  chpl_macro_tmp_2661.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_2661.addr = &(((&this_chpl7)->addr)->err);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_2661).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2661).addr, sizeof(syserr), COMMID(0), INT64(62), INT64(78));
  coerce_tmp_chpl3 = tmp_chpl15;
  call_tmp_chpl36 = sys_strerror_syserr_str(coerce_tmp_chpl3, &_formal_tmp_out_err_in_strerror_chpl);
  chpl_macro_tmp_2662.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2662.addr = nil;
  chpl_macro_tmp_2663.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2663.addr = NULL;
  error_chpl = chpl_macro_tmp_2663;
  call_tmp_chpl37 = string_length_bytes(call_tmp_chpl36);
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  call_tmp_chpl38 = ((c_ptr_uint8_t_chpl)(call_tmp_chpl36));
  call_tmp_chpl39 = (call_tmp_chpl37 + INT64(1));
  chpl_macro_tmp_2664.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2664.addr = nil;
  chpl_macro_tmp_2665.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2665.addr = NULL;
  error_chpl2 = chpl_macro_tmp_2665;
  init_chpl73(&ret_chpl4);
  chpl_macro_tmp_2666.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2666.addr = nil;
  chpl_macro_tmp_2667.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2667.addr = NULL;
  error_chpl3 = chpl_macro_tmp_2667;
  tmp_chpl16 = &error_chpl3;
  call_tmp_chpl40 = validateEncoding_chpl(call_tmp_chpl38, call_tmp_chpl37, tmp_chpl16);
  if ((&error_chpl3)->addr != nil) {
    error_chpl2 = error_chpl3;
    i_x_chpl = &ret_chpl4;
    chpl_macro_tmp_2668.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2668.addr = i_x_chpl;
    tmp_chpl17 = chpl_macro_tmp_2668;
    deinit_chpl42(tmp_chpl17);
    goto _end_createStringWithOwnedBuffer_chpl;
  }
  (&ret_chpl4)->cachedNumCodepoints = call_tmp_chpl40;
  i_x_chpl2 = &ret_chpl4;
  (i_x_chpl2)->isOwned = UINT8(true);
  (i_x_chpl2)->buff = call_tmp_chpl38;
  (i_x_chpl2)->buffSize = call_tmp_chpl39;
  (i_x_chpl2)->buffLen = call_tmp_chpl37;
  ret_chpl3 = ret_chpl4;
  _end_createStringWithOwnedBuffer_chpl:;
  if ((&error_chpl2)->addr != nil) {
    error_chpl = error_chpl2;
    goto _endcreateStringWithOwnedBuffer_chpl;
  }
  ret_chpl2 = ret_chpl3;
  _endcreateStringWithOwnedBuffer_chpl:;
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  err_msg_chpl = ret_chpl2;
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, INT64(64), INT32(78));
  }
  chpl_check_nil((&this_chpl7)->addr, INT64(68), INT32(78));
  chpl_macro_tmp_2669.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_2669.addr = &(((&this_chpl7)->addr)->details);
  call_tmp_chpl41 = chpl_macro_tmp_2669;
  chpl_macro_tmp_2670.locale = (call_tmp_chpl41).locale;
  chpl_macro_tmp_2670.addr = &(((call_tmp_chpl41).addr)->buffLen);
  chpl_gen_comm_get(((void*)(&tmp_chpl18)), chpl_nodeFromLocaleID((chpl_macro_tmp_2670).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2670).addr, sizeof(int64_t), COMMID(1), INT64(68), INT64(78));
  if (! (tmp_chpl18 == INT64(0))) {
    chpl_check_nil((&this_chpl7)->addr, INT64(69), INT32(78));
    chpl_macro_tmp_2671.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_2671.addr = &(((&this_chpl7)->addr)->details);
    call_tmp_chpl42 = chpl_macro_tmp_2671;
    chpl___PLUS_(&local__str_literal_759_chpl, call_tmp_chpl42, &ret_tmp_chpl);
    call_tmp_chpl43 = ret_tmp_chpl;
    chpl_macro_tmp_2672.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2672.addr = &local__str_literal_476_chpl;
    tmp_chpl19 = chpl_macro_tmp_2672;
    chpl___PLUS_(&call_tmp_chpl43, tmp_chpl19, &ret_tmp_chpl2);
    call_tmp_chpl44 = ret_tmp_chpl2;
    chpl___PLUS__ASSIGN_(&err_msg_chpl, &call_tmp_chpl44);
    i_x_chpl3 = &call_tmp_chpl44;
    chpl_macro_tmp_2673.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2673.addr = i_x_chpl3;
    tmp_chpl20 = chpl_macro_tmp_2673;
    deinit_chpl42(tmp_chpl20);
    i_x_chpl4 = &call_tmp_chpl43;
    chpl_macro_tmp_2674.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2674.addr = i_x_chpl4;
    tmp_chpl21 = chpl_macro_tmp_2674;
    deinit_chpl42(tmp_chpl21);
  }
  ret_chpl = err_msg_chpl;
  chpl_gen_comm_put(((void*)(&ret_chpl)), chpl_nodeFromLocaleID((_retArg_chpl).locale, INT64(0), INT32(0)), (_retArg_chpl).addr, sizeof(string_chpl), COMMID(2), INT64(60), INT64(78));
  return;
}

/* SysError.chpl:83 */
static void fromSyserr_chpl(syserr err_chpl,
                            string_chpl * details_chpl,
                            _owned_SystemError_chpl * _retArg_chpl,
                            int64_t _ln_chpl,
                            int32_t _fn_chpl) {
  _owned_SystemError_chpl ret_chpl;
  int32_t call_tmp_chpl36;
  chpl_bool tmp_chpl15;
  int32_t call_tmp_chpl37;
  chpl_bool tmp_chpl16;
  int32_t call_tmp_chpl38;
  chpl_bool tmp_chpl17;
  int32_t call_tmp_chpl39;
  _owned_BlockingIOError_chpl call_tmp_chpl40;
  BlockingIOError_chpl new_temp_chpl = NULL;
  _owned_BlockingIOError_chpl initTemp_chpl;
  int32_t call_tmp_chpl41;
  _owned_ChildProcessError_chpl call_tmp_chpl42;
  ChildProcessError_chpl new_temp_chpl2 = NULL;
  _owned_ChildProcessError_chpl initTemp_chpl2;
  int32_t call_tmp_chpl43;
  chpl_bool tmp_chpl18;
  int32_t call_tmp_chpl44;
  _owned_BrokenPipeError_chpl call_tmp_chpl45;
  BrokenPipeError_chpl new_temp_chpl3 = NULL;
  _owned_BrokenPipeError_chpl initTemp_chpl3;
  int32_t call_tmp_chpl46;
  _owned_ConnectionAbortedError_chpl call_tmp_chpl47;
  ConnectionAbortedError_chpl new_temp_chpl4 = NULL;
  _owned_ConnectionAbortedError_chpl initTemp_chpl4;
  int32_t call_tmp_chpl48;
  _owned_ConnectionRefusedError_chpl call_tmp_chpl49;
  ConnectionRefusedError_chpl new_temp_chpl5 = NULL;
  _owned_ConnectionRefusedError_chpl initTemp_chpl5;
  int32_t call_tmp_chpl50;
  _owned_ConnectionResetError_chpl call_tmp_chpl51;
  ConnectionResetError_chpl new_temp_chpl6 = NULL;
  _owned_ConnectionResetError_chpl initTemp_chpl6;
  int32_t call_tmp_chpl52;
  _owned_FileExistsError_chpl call_tmp_chpl53;
  FileExistsError_chpl new_temp_chpl7 = NULL;
  _owned_FileExistsError_chpl initTemp_chpl7;
  int32_t call_tmp_chpl54;
  _owned_FileNotFoundError_chpl call_tmp_chpl55;
  FileNotFoundError_chpl new_temp_chpl8 = NULL;
  _owned_FileNotFoundError_chpl initTemp_chpl8;
  int32_t call_tmp_chpl56;
  _owned_InterruptedError_chpl call_tmp_chpl57;
  InterruptedError_chpl new_temp_chpl9 = NULL;
  _owned_InterruptedError_chpl initTemp_chpl9;
  int32_t call_tmp_chpl58;
  _owned_IsADirectoryError_chpl call_tmp_chpl59;
  IsADirectoryError_chpl new_temp_chpl10 = NULL;
  _owned_IsADirectoryError_chpl initTemp_chpl10;
  int32_t call_tmp_chpl60;
  _owned_NotADirectoryError_chpl call_tmp_chpl61;
  NotADirectoryError_chpl new_temp_chpl11 = NULL;
  _owned_NotADirectoryError_chpl initTemp_chpl11;
  int32_t call_tmp_chpl62;
  chpl_bool tmp_chpl19;
  int32_t call_tmp_chpl63;
  _owned_PermissionError_chpl call_tmp_chpl64;
  PermissionError_chpl new_temp_chpl12 = NULL;
  _owned_PermissionError_chpl initTemp_chpl12;
  int32_t call_tmp_chpl65;
  _owned_ProcessLookupError_chpl call_tmp_chpl66;
  ProcessLookupError_chpl new_temp_chpl13 = NULL;
  _owned_ProcessLookupError_chpl initTemp_chpl13;
  int32_t call_tmp_chpl67;
  _owned_TimeoutError_chpl call_tmp_chpl68;
  TimeoutError_chpl new_temp_chpl14 = NULL;
  _owned_TimeoutError_chpl initTemp_chpl14;
  int32_t call_tmp_chpl69;
  int32_t call_tmp_chpl70;
  _owned_EOFError_chpl call_tmp_chpl71;
  EOFError_chpl new_temp_chpl15 = NULL;
  _owned_EOFError_chpl initTemp_chpl15;
  int32_t call_tmp_chpl72;
  int32_t call_tmp_chpl73;
  _owned_UnexpectedEOFError_chpl call_tmp_chpl74;
  UnexpectedEOFError_chpl new_temp_chpl16 = NULL;
  _owned_UnexpectedEOFError_chpl initTemp_chpl16;
  int32_t call_tmp_chpl75;
  int32_t call_tmp_chpl76;
  _owned_BadFormatError_chpl call_tmp_chpl77;
  BadFormatError_chpl new_temp_chpl17 = NULL;
  _owned_BadFormatError_chpl initTemp_chpl17;
  int32_t call_tmp_chpl78;
  _owned_IOError_chpl call_tmp_chpl79;
  IOError_chpl new_temp_chpl18 = NULL;
  _owned_IOError_chpl initTemp_chpl18;
  _owned_SystemError_chpl call_tmp_chpl80;
  SystemError_chpl new_temp_chpl19 = NULL;
  _owned_SystemError_chpl initTemp_chpl19;
  call_tmp_chpl36 = qio_err_to_int(err_chpl);
  if (call_tmp_chpl36 == EAGAIN) {
    tmp_chpl15 = UINT8(true);
  } else {
    call_tmp_chpl37 = qio_err_to_int(err_chpl);
    tmp_chpl15 = (call_tmp_chpl37 == EALREADY);
  }
  if (tmp_chpl15) {
    tmp_chpl16 = UINT8(true);
  } else {
    call_tmp_chpl38 = qio_err_to_int(err_chpl);
    tmp_chpl16 = (call_tmp_chpl38 == EWOULDBLOCK);
  }
  if (tmp_chpl16) {
    tmp_chpl17 = UINT8(true);
  } else {
    call_tmp_chpl39 = qio_err_to_int(err_chpl);
    tmp_chpl17 = (call_tmp_chpl39 == EINPROGRESS);
  }
  if (tmp_chpl17) {
    new_temp_chpl = _new_chpl20(details_chpl, err_chpl, _ln_chpl, _fn_chpl);
    init_chpl52(&initTemp_chpl, new_temp_chpl);
    call_tmp_chpl40 = initTemp_chpl;
    init_ASSIGN__chpl2(&ret_chpl, &call_tmp_chpl40);
    chpl__autoDestroy15(&call_tmp_chpl40);
    goto _end_fromSyserr_chpl;
  } else {
    call_tmp_chpl41 = qio_err_to_int(err_chpl);
    if (call_tmp_chpl41 == ECHILD) {
      new_temp_chpl2 = _new_chpl21(details_chpl, err_chpl, _ln_chpl, _fn_chpl);
      init_chpl53(&initTemp_chpl2, new_temp_chpl2);
      call_tmp_chpl42 = initTemp_chpl2;
      init_ASSIGN__chpl17(&ret_chpl, &call_tmp_chpl42);
      chpl__autoDestroy26(&call_tmp_chpl42);
      goto _end_fromSyserr_chpl;
    } else {
      call_tmp_chpl43 = qio_err_to_int(err_chpl);
      if (call_tmp_chpl43 == EPIPE) {
        tmp_chpl18 = UINT8(true);
      } else {
        call_tmp_chpl44 = qio_err_to_int(err_chpl);
        tmp_chpl18 = (call_tmp_chpl44 == ESHUTDOWN);
      }
      if (tmp_chpl18) {
        new_temp_chpl3 = _new_chpl22(details_chpl, err_chpl, _ln_chpl, _fn_chpl);
        init_chpl55(&initTemp_chpl3, new_temp_chpl3);
        call_tmp_chpl45 = initTemp_chpl3;
        init_ASSIGN__chpl18(&ret_chpl, &call_tmp_chpl45);
        chpl__autoDestroy12(&call_tmp_chpl45);
        goto _end_fromSyserr_chpl;
      } else {
        call_tmp_chpl46 = qio_err_to_int(err_chpl);
        if (call_tmp_chpl46 == ECONNABORTED) {
          new_temp_chpl4 = _new_chpl23(details_chpl, err_chpl, _ln_chpl, _fn_chpl);
          init_chpl56(&initTemp_chpl4, new_temp_chpl4);
          call_tmp_chpl47 = initTemp_chpl4;
          init_ASSIGN__chpl19(&ret_chpl, &call_tmp_chpl47);
          chpl__autoDestroy17(&call_tmp_chpl47);
          goto _end_fromSyserr_chpl;
        } else {
          call_tmp_chpl48 = qio_err_to_int(err_chpl);
          if (call_tmp_chpl48 == ECONNREFUSED) {
            new_temp_chpl5 = _new_chpl24(details_chpl, err_chpl, _ln_chpl, _fn_chpl);
            init_chpl57(&initTemp_chpl5, new_temp_chpl5);
            call_tmp_chpl49 = initTemp_chpl5;
            init_ASSIGN__chpl16(&ret_chpl, &call_tmp_chpl49);
            chpl__autoDestroy21(&call_tmp_chpl49);
            goto _end_fromSyserr_chpl;
          } else {
            call_tmp_chpl50 = qio_err_to_int(err_chpl);
            if (call_tmp_chpl50 == ECONNRESET) {
              new_temp_chpl6 = _new_chpl25(details_chpl, err_chpl, _ln_chpl, _fn_chpl);
              init_chpl58(&initTemp_chpl6, new_temp_chpl6);
              call_tmp_chpl51 = initTemp_chpl6;
              init_ASSIGN__chpl15(&ret_chpl, &call_tmp_chpl51);
              chpl__autoDestroy4(&call_tmp_chpl51);
              goto _end_fromSyserr_chpl;
            } else {
              call_tmp_chpl52 = qio_err_to_int(err_chpl);
              if (call_tmp_chpl52 == EEXIST) {
                new_temp_chpl7 = _new_chpl26(details_chpl, err_chpl, _ln_chpl, _fn_chpl);
                init_chpl59(&initTemp_chpl7, new_temp_chpl7);
                call_tmp_chpl53 = initTemp_chpl7;
                init_ASSIGN__chpl14(&ret_chpl, &call_tmp_chpl53);
                chpl__autoDestroy25(&call_tmp_chpl53);
                goto _end_fromSyserr_chpl;
              } else {
                call_tmp_chpl54 = qio_err_to_int(err_chpl);
                if (call_tmp_chpl54 == ENOENT) {
                  new_temp_chpl8 = _new_chpl27(details_chpl, err_chpl, _ln_chpl, _fn_chpl);
                  init_chpl60(&initTemp_chpl8, new_temp_chpl8);
                  call_tmp_chpl55 = initTemp_chpl8;
                  init_ASSIGN__chpl13(&ret_chpl, &call_tmp_chpl55);
                  chpl__autoDestroy22(&call_tmp_chpl55);
                  goto _end_fromSyserr_chpl;
                } else {
                  call_tmp_chpl56 = qio_err_to_int(err_chpl);
                  if (call_tmp_chpl56 == EINTR) {
                    new_temp_chpl9 = _new_chpl28(details_chpl, err_chpl, _ln_chpl, _fn_chpl);
                    init_chpl61(&initTemp_chpl9, new_temp_chpl9);
                    call_tmp_chpl57 = initTemp_chpl9;
                    init_ASSIGN__chpl12(&ret_chpl, &call_tmp_chpl57);
                    chpl__autoDestroy20(&call_tmp_chpl57);
                    goto _end_fromSyserr_chpl;
                  } else {
                    call_tmp_chpl58 = qio_err_to_int(err_chpl);
                    if (call_tmp_chpl58 == EISDIR) {
                      new_temp_chpl10 = _new_chpl29(details_chpl, err_chpl, _ln_chpl, _fn_chpl);
                      init_chpl62(&initTemp_chpl10, new_temp_chpl10);
                      call_tmp_chpl59 = initTemp_chpl10;
                      init_ASSIGN__chpl11(&ret_chpl, &call_tmp_chpl59);
                      chpl__autoDestroy13(&call_tmp_chpl59);
                      goto _end_fromSyserr_chpl;
                    } else {
                      call_tmp_chpl60 = qio_err_to_int(err_chpl);
                      if (call_tmp_chpl60 == ENOTDIR) {
                        new_temp_chpl11 = _new_chpl30(details_chpl, err_chpl, _ln_chpl, _fn_chpl);
                        init_chpl63(&initTemp_chpl11, new_temp_chpl11);
                        call_tmp_chpl61 = initTemp_chpl11;
                        init_ASSIGN__chpl10(&ret_chpl, &call_tmp_chpl61);
                        chpl__autoDestroy9(&call_tmp_chpl61);
                        goto _end_fromSyserr_chpl;
                      } else {
                        call_tmp_chpl62 = qio_err_to_int(err_chpl);
                        if (call_tmp_chpl62 == EACCES) {
                          tmp_chpl19 = UINT8(true);
                        } else {
                          call_tmp_chpl63 = qio_err_to_int(err_chpl);
                          tmp_chpl19 = (call_tmp_chpl63 == EPERM);
                        }
                        if (tmp_chpl19) {
                          new_temp_chpl12 = _new_chpl31(details_chpl, err_chpl, _ln_chpl, _fn_chpl);
                          init_chpl64(&initTemp_chpl12, new_temp_chpl12);
                          call_tmp_chpl64 = initTemp_chpl12;
                          init_ASSIGN__chpl9(&ret_chpl, &call_tmp_chpl64);
                          chpl__autoDestroy6(&call_tmp_chpl64);
                          goto _end_fromSyserr_chpl;
                        } else {
                          call_tmp_chpl65 = qio_err_to_int(err_chpl);
                          if (call_tmp_chpl65 == ESRCH) {
                            new_temp_chpl13 = _new_chpl32(details_chpl, err_chpl, _ln_chpl, _fn_chpl);
                            init_chpl47(&initTemp_chpl13, new_temp_chpl13);
                            call_tmp_chpl66 = initTemp_chpl13;
                            init_ASSIGN__chpl8(&ret_chpl, &call_tmp_chpl66);
                            chpl__autoDestroy14(&call_tmp_chpl66);
                            goto _end_fromSyserr_chpl;
                          } else {
                            call_tmp_chpl67 = qio_err_to_int(err_chpl);
                            if (call_tmp_chpl67 == ETIMEDOUT) {
                              new_temp_chpl14 = _new_chpl33(details_chpl, err_chpl, _ln_chpl, _fn_chpl);
                              init_chpl65(&initTemp_chpl14, new_temp_chpl14);
                              call_tmp_chpl68 = initTemp_chpl14;
                              init_ASSIGN__chpl7(&ret_chpl, &call_tmp_chpl68);
                              chpl__autoDestroy10(&call_tmp_chpl68);
                              goto _end_fromSyserr_chpl;
                            } else {
                              call_tmp_chpl69 = chpl_macro_int_EEOF();
                              call_tmp_chpl70 = qio_err_to_int(err_chpl);
                              if (call_tmp_chpl70 == call_tmp_chpl69) {
                                new_temp_chpl15 = _new_chpl35(details_chpl, err_chpl, _ln_chpl, _fn_chpl);
                                init_chpl70(&initTemp_chpl15, new_temp_chpl15);
                                call_tmp_chpl71 = initTemp_chpl15;
                                init_ASSIGN__chpl6(&ret_chpl, &call_tmp_chpl71);
                                chpl__autoDestroy27(&call_tmp_chpl71);
                                goto _end_fromSyserr_chpl;
                              } else {
                                call_tmp_chpl72 = chpl_macro_int_ESHORT();
                                call_tmp_chpl73 = qio_err_to_int(err_chpl);
                                if (call_tmp_chpl73 == call_tmp_chpl72) {
                                  new_temp_chpl16 = _new_chpl36(details_chpl, err_chpl, _ln_chpl, _fn_chpl);
                                  init_chpl69(&initTemp_chpl16, new_temp_chpl16);
                                  call_tmp_chpl74 = initTemp_chpl16;
                                  init_ASSIGN__chpl5(&ret_chpl, &call_tmp_chpl74);
                                  chpl__autoDestroy16(&call_tmp_chpl74);
                                  goto _end_fromSyserr_chpl;
                                } else {
                                  call_tmp_chpl75 = chpl_macro_int_EFORMAT();
                                  call_tmp_chpl76 = qio_err_to_int(err_chpl);
                                  if (call_tmp_chpl76 == call_tmp_chpl75) {
                                    new_temp_chpl17 = _new_chpl37(details_chpl, err_chpl, _ln_chpl, _fn_chpl);
                                    init_chpl48(&initTemp_chpl17, new_temp_chpl17);
                                    call_tmp_chpl77 = initTemp_chpl17;
                                    init_ASSIGN__chpl4(&ret_chpl, &call_tmp_chpl77);
                                    chpl__autoDestroy5(&call_tmp_chpl77);
                                    goto _end_fromSyserr_chpl;
                                  } else {
                                    call_tmp_chpl78 = qio_err_to_int(err_chpl);
                                    if (call_tmp_chpl78 == EIO) {
                                      new_temp_chpl18 = _new_chpl34(err_chpl, details_chpl, _ln_chpl, _fn_chpl);
                                      init_chpl67(&initTemp_chpl18, new_temp_chpl18);
                                      call_tmp_chpl79 = initTemp_chpl18;
                                      init_ASSIGN__chpl3(&ret_chpl, &call_tmp_chpl79);
                                      chpl__autoDestroy18(&call_tmp_chpl79);
                                      goto _end_fromSyserr_chpl;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  new_temp_chpl19 = _new_chpl19(err_chpl, details_chpl, _ln_chpl, _fn_chpl);
  init_chpl66(&initTemp_chpl19, new_temp_chpl19);
  call_tmp_chpl80 = initTemp_chpl19;
  ret_chpl = call_tmp_chpl80;
  _end_fromSyserr_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* SysError.chpl:134 */
static void fromSyserr_chpl2(int64_t err_chpl,
                             string_chpl * details_chpl,
                             _owned_SystemError_chpl * _retArg_chpl,
                             int64_t _ln_chpl,
                             int32_t _fn_chpl) {
  _owned_SystemError_chpl ret_chpl;
  syserr call_tmp_chpl36;
  _owned_SystemError_chpl call_tmp_chpl37;
  _owned_SystemError_chpl ret_tmp_chpl;
  call_tmp_chpl36 = qio_int_to_err(((int32_t)(err_chpl)));
  fromSyserr_chpl(call_tmp_chpl36, details_chpl, &ret_tmp_chpl, _ln_chpl, _fn_chpl);
  call_tmp_chpl37 = ret_tmp_chpl;
  ret_chpl = call_tmp_chpl37;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* SysError.chpl:146 */
static void chpl__auto_destroy_BlockingIOError(chpl____wide_BlockingIOError this_chpl7) {
  chpl____wide_SystemError _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error _parent_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_SystemError chpl_macro_tmp_2675;
  chpl____wide__ref_string chpl_macro_tmp_2676;
  chpl____wide_Error chpl_macro_tmp_2677;
  chpl____wide__ref_string chpl_macro_tmp_2678;
  chpl_macro_tmp_2675.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_2675.addr = ((SystemError_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_2675;
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(146), INT32(78));
  chpl_macro_tmp_2676.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2676.addr = &(((&_parent_destructor_tmp__chpl)->addr)->details);
  _field_destructor_tmp__chpl = chpl_macro_tmp_2676;
  deinit_chpl42(_field_destructor_tmp__chpl);
  chpl_macro_tmp_2677.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2677.addr = ((Error_chpl)((&_parent_destructor_tmp__chpl)->addr));
  _parent_destructor_tmp__chpl2 = chpl_macro_tmp_2677;
  chpl_check_nil((&_parent_destructor_tmp__chpl2)->addr, INT64(146), INT32(78));
  chpl_macro_tmp_2678.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_2678.addr = &(((&_parent_destructor_tmp__chpl2)->addr)->_msg);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_2678;
  deinit_chpl42(_field_destructor_tmp__chpl2);
  return;
}

/* SysError.chpl:147 */
static BlockingIOError_chpl _new_chpl20(string_chpl * details_chpl,
                                        syserr err_chpl,
                                        int64_t _ln_chpl,
                                        int32_t _fn_chpl) {
  BlockingIOError_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  SystemError_chpl super_tmp_chpl = NULL;
  Error_chpl super_tmp_chpl2 = NULL;
  Error_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl _msg_chpl;
  string_chpl details_chpl2;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_2679;
  chpl____wide__ref_string chpl_macro_tmp_2680;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_BlockingIOError_chpl_object), INT16(7), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((BlockingIOError_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_BlockingIOError_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl2 = &((super_tmp_chpl)->super);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl2)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl2))))->chpl__cid = chpl__cid_object_chpl;
  init_coerce_tmp_chpl3 = ((Error_chpl)(nil));
  chpl_macro_tmp_2679.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2679.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_2679;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_next = tmp_chpl15;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->thrownLine = INT64(0);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->thrownFileId = INT32(0);
  init_chpl73(&_msg_chpl);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_msg = _msg_chpl;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_hasThrowInfo = UINT8(false);
  ((object_chpl)(super_tmp_chpl2))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(((Error_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_Error_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->err = err_chpl;
  chpl_macro_tmp_2680.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2680.addr = details_chpl;
  tmp_chpl16 = chpl_macro_tmp_2680;
  init_ASSIGN__chpl21(&details_chpl2, tmp_chpl16);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->details = details_chpl2;
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(((SystemError_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_BlockingIOError_chpl;
  return initTemp_chpl;
}

/* SysError.chpl:158 */
static void chpl__auto_destroy_ChildProcessError(chpl____wide_ChildProcessError this_chpl7) {
  chpl____wide_SystemError _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error _parent_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_SystemError chpl_macro_tmp_2681;
  chpl____wide__ref_string chpl_macro_tmp_2682;
  chpl____wide_Error chpl_macro_tmp_2683;
  chpl____wide__ref_string chpl_macro_tmp_2684;
  chpl_macro_tmp_2681.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_2681.addr = ((SystemError_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_2681;
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(158), INT32(78));
  chpl_macro_tmp_2682.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2682.addr = &(((&_parent_destructor_tmp__chpl)->addr)->details);
  _field_destructor_tmp__chpl = chpl_macro_tmp_2682;
  deinit_chpl42(_field_destructor_tmp__chpl);
  chpl_macro_tmp_2683.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2683.addr = ((Error_chpl)((&_parent_destructor_tmp__chpl)->addr));
  _parent_destructor_tmp__chpl2 = chpl_macro_tmp_2683;
  chpl_check_nil((&_parent_destructor_tmp__chpl2)->addr, INT64(158), INT32(78));
  chpl_macro_tmp_2684.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_2684.addr = &(((&_parent_destructor_tmp__chpl2)->addr)->_msg);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_2684;
  deinit_chpl42(_field_destructor_tmp__chpl2);
  return;
}

/* SysError.chpl:159 */
static ChildProcessError_chpl _new_chpl21(string_chpl * details_chpl,
                                          syserr err_chpl,
                                          int64_t _ln_chpl,
                                          int32_t _fn_chpl) {
  ChildProcessError_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  SystemError_chpl super_tmp_chpl = NULL;
  Error_chpl super_tmp_chpl2 = NULL;
  Error_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl _msg_chpl;
  string_chpl details_chpl2;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_2685;
  chpl____wide__ref_string chpl_macro_tmp_2686;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_ChildProcessError_chpl_object), INT16(8), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((ChildProcessError_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_ChildProcessError_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl2 = &((super_tmp_chpl)->super);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl2)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl2))))->chpl__cid = chpl__cid_object_chpl;
  init_coerce_tmp_chpl3 = ((Error_chpl)(nil));
  chpl_macro_tmp_2685.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2685.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_2685;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_next = tmp_chpl15;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->thrownLine = INT64(0);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->thrownFileId = INT32(0);
  init_chpl73(&_msg_chpl);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_msg = _msg_chpl;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_hasThrowInfo = UINT8(false);
  ((object_chpl)(super_tmp_chpl2))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(((Error_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_Error_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->err = err_chpl;
  chpl_macro_tmp_2686.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2686.addr = details_chpl;
  tmp_chpl16 = chpl_macro_tmp_2686;
  init_ASSIGN__chpl21(&details_chpl2, tmp_chpl16);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->details = details_chpl2;
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(((SystemError_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_ChildProcessError_chpl;
  return initTemp_chpl;
}

/* SysError.chpl:170 */
static void chpl__auto_destroy_ConnectionError(chpl____wide_ConnectionError this_chpl7) {
  chpl____wide_SystemError _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error _parent_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_SystemError chpl_macro_tmp_2687;
  chpl____wide__ref_string chpl_macro_tmp_2688;
  chpl____wide_Error chpl_macro_tmp_2689;
  chpl____wide__ref_string chpl_macro_tmp_2690;
  chpl_macro_tmp_2687.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_2687.addr = ((SystemError_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_2687;
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(170), INT32(78));
  chpl_macro_tmp_2688.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2688.addr = &(((&_parent_destructor_tmp__chpl)->addr)->details);
  _field_destructor_tmp__chpl = chpl_macro_tmp_2688;
  deinit_chpl42(_field_destructor_tmp__chpl);
  chpl_macro_tmp_2689.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2689.addr = ((Error_chpl)((&_parent_destructor_tmp__chpl)->addr));
  _parent_destructor_tmp__chpl2 = chpl_macro_tmp_2689;
  chpl_check_nil((&_parent_destructor_tmp__chpl2)->addr, INT64(170), INT32(78));
  chpl_macro_tmp_2690.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_2690.addr = &(((&_parent_destructor_tmp__chpl2)->addr)->_msg);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_2690;
  deinit_chpl42(_field_destructor_tmp__chpl2);
  return;
}

/* SysError.chpl:182 */
static void chpl__auto_destroy_BrokenPipeError(chpl____wide_BrokenPipeError this_chpl7) {
  chpl____wide_ConnectionError _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_SystemError _parent_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error _parent_destructor_tmp__chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_ConnectionError chpl_macro_tmp_2691;
  chpl____wide_SystemError chpl_macro_tmp_2692;
  chpl____wide__ref_string chpl_macro_tmp_2693;
  chpl____wide_Error chpl_macro_tmp_2694;
  chpl____wide__ref_string chpl_macro_tmp_2695;
  chpl_macro_tmp_2691.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_2691.addr = ((ConnectionError_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_2691;
  chpl_macro_tmp_2692.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2692.addr = ((SystemError_chpl)((&_parent_destructor_tmp__chpl)->addr));
  _parent_destructor_tmp__chpl2 = chpl_macro_tmp_2692;
  chpl_check_nil((&_parent_destructor_tmp__chpl2)->addr, INT64(182), INT32(78));
  chpl_macro_tmp_2693.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_2693.addr = &(((&_parent_destructor_tmp__chpl2)->addr)->details);
  _field_destructor_tmp__chpl = chpl_macro_tmp_2693;
  deinit_chpl42(_field_destructor_tmp__chpl);
  chpl_macro_tmp_2694.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_2694.addr = ((Error_chpl)((&_parent_destructor_tmp__chpl2)->addr));
  _parent_destructor_tmp__chpl3 = chpl_macro_tmp_2694;
  chpl_check_nil((&_parent_destructor_tmp__chpl3)->addr, INT64(182), INT32(78));
  chpl_macro_tmp_2695.locale = (&_parent_destructor_tmp__chpl3)->locale;
  chpl_macro_tmp_2695.addr = &(((&_parent_destructor_tmp__chpl3)->addr)->_msg);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_2695;
  deinit_chpl42(_field_destructor_tmp__chpl2);
  return;
}

/* SysError.chpl:183 */
static BrokenPipeError_chpl _new_chpl22(string_chpl * details_chpl,
                                        syserr err_chpl,
                                        int64_t _ln_chpl,
                                        int32_t _fn_chpl) {
  BrokenPipeError_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  ConnectionError_chpl super_tmp_chpl = NULL;
  SystemError_chpl super_tmp_chpl2 = NULL;
  Error_chpl super_tmp_chpl3 = NULL;
  Error_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl _msg_chpl;
  string_chpl details_chpl2;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_2696;
  chpl____wide__ref_string chpl_macro_tmp_2697;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_BrokenPipeError_chpl_object), INT16(9), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((BrokenPipeError_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_BrokenPipeError_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl2 = &((super_tmp_chpl)->super);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  super_tmp_chpl3 = &((super_tmp_chpl2)->super);
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl3)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl3))))->chpl__cid = chpl__cid_object_chpl;
  init_coerce_tmp_chpl3 = ((Error_chpl)(nil));
  chpl_macro_tmp_2696.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2696.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_2696;
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->_next = tmp_chpl15;
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->thrownLine = INT64(0);
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->thrownFileId = INT32(0);
  init_chpl73(&_msg_chpl);
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->_msg = _msg_chpl;
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->_hasThrowInfo = UINT8(false);
  ((object_chpl)(super_tmp_chpl3))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(((Error_chpl)(super_tmp_chpl2))))->chpl__cid = chpl__cid_Error_chpl;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->err = err_chpl;
  chpl_macro_tmp_2697.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2697.addr = details_chpl;
  tmp_chpl16 = chpl_macro_tmp_2697;
  init_ASSIGN__chpl21(&details_chpl2, tmp_chpl16);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->details = details_chpl2;
  ((object_chpl)(super_tmp_chpl2))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(((SystemError_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_ConnectionError_chpl;
  ((object_chpl)(((ConnectionError_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_ConnectionError_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_BrokenPipeError_chpl;
  return initTemp_chpl;
}

/* SysError.chpl:194 */
static void chpl__auto_destroy_ConnectionAbortedError(chpl____wide_ConnectionAbortedError this_chpl7) {
  chpl____wide_ConnectionError _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_SystemError _parent_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error _parent_destructor_tmp__chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_ConnectionError chpl_macro_tmp_2698;
  chpl____wide_SystemError chpl_macro_tmp_2699;
  chpl____wide__ref_string chpl_macro_tmp_2700;
  chpl____wide_Error chpl_macro_tmp_2701;
  chpl____wide__ref_string chpl_macro_tmp_2702;
  chpl_macro_tmp_2698.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_2698.addr = ((ConnectionError_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_2698;
  chpl_macro_tmp_2699.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2699.addr = ((SystemError_chpl)((&_parent_destructor_tmp__chpl)->addr));
  _parent_destructor_tmp__chpl2 = chpl_macro_tmp_2699;
  chpl_check_nil((&_parent_destructor_tmp__chpl2)->addr, INT64(194), INT32(78));
  chpl_macro_tmp_2700.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_2700.addr = &(((&_parent_destructor_tmp__chpl2)->addr)->details);
  _field_destructor_tmp__chpl = chpl_macro_tmp_2700;
  deinit_chpl42(_field_destructor_tmp__chpl);
  chpl_macro_tmp_2701.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_2701.addr = ((Error_chpl)((&_parent_destructor_tmp__chpl2)->addr));
  _parent_destructor_tmp__chpl3 = chpl_macro_tmp_2701;
  chpl_check_nil((&_parent_destructor_tmp__chpl3)->addr, INT64(194), INT32(78));
  chpl_macro_tmp_2702.locale = (&_parent_destructor_tmp__chpl3)->locale;
  chpl_macro_tmp_2702.addr = &(((&_parent_destructor_tmp__chpl3)->addr)->_msg);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_2702;
  deinit_chpl42(_field_destructor_tmp__chpl2);
  return;
}

/* SysError.chpl:195 */
static ConnectionAbortedError_chpl _new_chpl23(string_chpl * details_chpl,
                                               syserr err_chpl,
                                               int64_t _ln_chpl,
                                               int32_t _fn_chpl) {
  ConnectionAbortedError_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  ConnectionError_chpl super_tmp_chpl = NULL;
  SystemError_chpl super_tmp_chpl2 = NULL;
  Error_chpl super_tmp_chpl3 = NULL;
  Error_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl _msg_chpl;
  string_chpl details_chpl2;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_2703;
  chpl____wide__ref_string chpl_macro_tmp_2704;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_ConnectionAbortedError_chpl_object), INT16(10), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((ConnectionAbortedError_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_ConnectionAbortedError_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl2 = &((super_tmp_chpl)->super);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  super_tmp_chpl3 = &((super_tmp_chpl2)->super);
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl3)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl3))))->chpl__cid = chpl__cid_object_chpl;
  init_coerce_tmp_chpl3 = ((Error_chpl)(nil));
  chpl_macro_tmp_2703.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2703.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_2703;
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->_next = tmp_chpl15;
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->thrownLine = INT64(0);
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->thrownFileId = INT32(0);
  init_chpl73(&_msg_chpl);
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->_msg = _msg_chpl;
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->_hasThrowInfo = UINT8(false);
  ((object_chpl)(super_tmp_chpl3))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(((Error_chpl)(super_tmp_chpl2))))->chpl__cid = chpl__cid_Error_chpl;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->err = err_chpl;
  chpl_macro_tmp_2704.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2704.addr = details_chpl;
  tmp_chpl16 = chpl_macro_tmp_2704;
  init_ASSIGN__chpl21(&details_chpl2, tmp_chpl16);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->details = details_chpl2;
  ((object_chpl)(super_tmp_chpl2))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(((SystemError_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_ConnectionError_chpl;
  ((object_chpl)(((ConnectionError_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_ConnectionError_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_ConnectionAbortedError_chpl;
  return initTemp_chpl;
}

/* SysError.chpl:206 */
static void chpl__auto_destroy_ConnectionRefusedError(chpl____wide_ConnectionRefusedError this_chpl7) {
  chpl____wide_ConnectionError _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_SystemError _parent_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error _parent_destructor_tmp__chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_ConnectionError chpl_macro_tmp_2705;
  chpl____wide_SystemError chpl_macro_tmp_2706;
  chpl____wide__ref_string chpl_macro_tmp_2707;
  chpl____wide_Error chpl_macro_tmp_2708;
  chpl____wide__ref_string chpl_macro_tmp_2709;
  chpl_macro_tmp_2705.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_2705.addr = ((ConnectionError_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_2705;
  chpl_macro_tmp_2706.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2706.addr = ((SystemError_chpl)((&_parent_destructor_tmp__chpl)->addr));
  _parent_destructor_tmp__chpl2 = chpl_macro_tmp_2706;
  chpl_check_nil((&_parent_destructor_tmp__chpl2)->addr, INT64(206), INT32(78));
  chpl_macro_tmp_2707.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_2707.addr = &(((&_parent_destructor_tmp__chpl2)->addr)->details);
  _field_destructor_tmp__chpl = chpl_macro_tmp_2707;
  deinit_chpl42(_field_destructor_tmp__chpl);
  chpl_macro_tmp_2708.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_2708.addr = ((Error_chpl)((&_parent_destructor_tmp__chpl2)->addr));
  _parent_destructor_tmp__chpl3 = chpl_macro_tmp_2708;
  chpl_check_nil((&_parent_destructor_tmp__chpl3)->addr, INT64(206), INT32(78));
  chpl_macro_tmp_2709.locale = (&_parent_destructor_tmp__chpl3)->locale;
  chpl_macro_tmp_2709.addr = &(((&_parent_destructor_tmp__chpl3)->addr)->_msg);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_2709;
  deinit_chpl42(_field_destructor_tmp__chpl2);
  return;
}

/* SysError.chpl:207 */
static ConnectionRefusedError_chpl _new_chpl24(string_chpl * details_chpl,
                                               syserr err_chpl,
                                               int64_t _ln_chpl,
                                               int32_t _fn_chpl) {
  ConnectionRefusedError_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  ConnectionError_chpl super_tmp_chpl = NULL;
  SystemError_chpl super_tmp_chpl2 = NULL;
  Error_chpl super_tmp_chpl3 = NULL;
  Error_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl _msg_chpl;
  string_chpl details_chpl2;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_2710;
  chpl____wide__ref_string chpl_macro_tmp_2711;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_ConnectionRefusedError_chpl_object), INT16(11), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((ConnectionRefusedError_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_ConnectionRefusedError_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl2 = &((super_tmp_chpl)->super);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  super_tmp_chpl3 = &((super_tmp_chpl2)->super);
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl3)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl3))))->chpl__cid = chpl__cid_object_chpl;
  init_coerce_tmp_chpl3 = ((Error_chpl)(nil));
  chpl_macro_tmp_2710.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2710.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_2710;
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->_next = tmp_chpl15;
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->thrownLine = INT64(0);
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->thrownFileId = INT32(0);
  init_chpl73(&_msg_chpl);
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->_msg = _msg_chpl;
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->_hasThrowInfo = UINT8(false);
  ((object_chpl)(super_tmp_chpl3))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(((Error_chpl)(super_tmp_chpl2))))->chpl__cid = chpl__cid_Error_chpl;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->err = err_chpl;
  chpl_macro_tmp_2711.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2711.addr = details_chpl;
  tmp_chpl16 = chpl_macro_tmp_2711;
  init_ASSIGN__chpl21(&details_chpl2, tmp_chpl16);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->details = details_chpl2;
  ((object_chpl)(super_tmp_chpl2))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(((SystemError_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_ConnectionError_chpl;
  ((object_chpl)(((ConnectionError_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_ConnectionError_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_ConnectionRefusedError_chpl;
  return initTemp_chpl;
}

/* SysError.chpl:218 */
static void chpl__auto_destroy_ConnectionResetError(chpl____wide_ConnectionResetError this_chpl7) {
  chpl____wide_ConnectionError _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_SystemError _parent_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error _parent_destructor_tmp__chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_ConnectionError chpl_macro_tmp_2712;
  chpl____wide_SystemError chpl_macro_tmp_2713;
  chpl____wide__ref_string chpl_macro_tmp_2714;
  chpl____wide_Error chpl_macro_tmp_2715;
  chpl____wide__ref_string chpl_macro_tmp_2716;
  chpl_macro_tmp_2712.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_2712.addr = ((ConnectionError_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_2712;
  chpl_macro_tmp_2713.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2713.addr = ((SystemError_chpl)((&_parent_destructor_tmp__chpl)->addr));
  _parent_destructor_tmp__chpl2 = chpl_macro_tmp_2713;
  chpl_check_nil((&_parent_destructor_tmp__chpl2)->addr, INT64(218), INT32(78));
  chpl_macro_tmp_2714.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_2714.addr = &(((&_parent_destructor_tmp__chpl2)->addr)->details);
  _field_destructor_tmp__chpl = chpl_macro_tmp_2714;
  deinit_chpl42(_field_destructor_tmp__chpl);
  chpl_macro_tmp_2715.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_2715.addr = ((Error_chpl)((&_parent_destructor_tmp__chpl2)->addr));
  _parent_destructor_tmp__chpl3 = chpl_macro_tmp_2715;
  chpl_check_nil((&_parent_destructor_tmp__chpl3)->addr, INT64(218), INT32(78));
  chpl_macro_tmp_2716.locale = (&_parent_destructor_tmp__chpl3)->locale;
  chpl_macro_tmp_2716.addr = &(((&_parent_destructor_tmp__chpl3)->addr)->_msg);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_2716;
  deinit_chpl42(_field_destructor_tmp__chpl2);
  return;
}

/* SysError.chpl:219 */
static ConnectionResetError_chpl _new_chpl25(string_chpl * details_chpl,
                                             syserr err_chpl,
                                             int64_t _ln_chpl,
                                             int32_t _fn_chpl) {
  ConnectionResetError_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  ConnectionError_chpl super_tmp_chpl = NULL;
  SystemError_chpl super_tmp_chpl2 = NULL;
  Error_chpl super_tmp_chpl3 = NULL;
  Error_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl _msg_chpl;
  string_chpl details_chpl2;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_2717;
  chpl____wide__ref_string chpl_macro_tmp_2718;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_ConnectionResetError_chpl_object), INT16(12), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((ConnectionResetError_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_ConnectionResetError_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl2 = &((super_tmp_chpl)->super);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  super_tmp_chpl3 = &((super_tmp_chpl2)->super);
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl3)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl3))))->chpl__cid = chpl__cid_object_chpl;
  init_coerce_tmp_chpl3 = ((Error_chpl)(nil));
  chpl_macro_tmp_2717.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2717.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_2717;
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->_next = tmp_chpl15;
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->thrownLine = INT64(0);
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->thrownFileId = INT32(0);
  init_chpl73(&_msg_chpl);
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->_msg = _msg_chpl;
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->_hasThrowInfo = UINT8(false);
  ((object_chpl)(super_tmp_chpl3))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(((Error_chpl)(super_tmp_chpl2))))->chpl__cid = chpl__cid_Error_chpl;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->err = err_chpl;
  chpl_macro_tmp_2718.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2718.addr = details_chpl;
  tmp_chpl16 = chpl_macro_tmp_2718;
  init_ASSIGN__chpl21(&details_chpl2, tmp_chpl16);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->details = details_chpl2;
  ((object_chpl)(super_tmp_chpl2))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(((SystemError_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_ConnectionError_chpl;
  ((object_chpl)(((ConnectionError_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_ConnectionError_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_ConnectionResetError_chpl;
  return initTemp_chpl;
}

/* SysError.chpl:230 */
static void chpl__auto_destroy_FileExistsError(chpl____wide_FileExistsError this_chpl7) {
  chpl____wide_SystemError _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error _parent_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_SystemError chpl_macro_tmp_2719;
  chpl____wide__ref_string chpl_macro_tmp_2720;
  chpl____wide_Error chpl_macro_tmp_2721;
  chpl____wide__ref_string chpl_macro_tmp_2722;
  chpl_macro_tmp_2719.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_2719.addr = ((SystemError_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_2719;
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(230), INT32(78));
  chpl_macro_tmp_2720.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2720.addr = &(((&_parent_destructor_tmp__chpl)->addr)->details);
  _field_destructor_tmp__chpl = chpl_macro_tmp_2720;
  deinit_chpl42(_field_destructor_tmp__chpl);
  chpl_macro_tmp_2721.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2721.addr = ((Error_chpl)((&_parent_destructor_tmp__chpl)->addr));
  _parent_destructor_tmp__chpl2 = chpl_macro_tmp_2721;
  chpl_check_nil((&_parent_destructor_tmp__chpl2)->addr, INT64(230), INT32(78));
  chpl_macro_tmp_2722.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_2722.addr = &(((&_parent_destructor_tmp__chpl2)->addr)->_msg);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_2722;
  deinit_chpl42(_field_destructor_tmp__chpl2);
  return;
}

/* SysError.chpl:231 */
static FileExistsError_chpl _new_chpl26(string_chpl * details_chpl,
                                        syserr err_chpl,
                                        int64_t _ln_chpl,
                                        int32_t _fn_chpl) {
  FileExistsError_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  SystemError_chpl super_tmp_chpl = NULL;
  Error_chpl super_tmp_chpl2 = NULL;
  Error_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl _msg_chpl;
  string_chpl details_chpl2;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_2723;
  chpl____wide__ref_string chpl_macro_tmp_2724;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_FileExistsError_chpl_object), INT16(13), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((FileExistsError_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_FileExistsError_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl2 = &((super_tmp_chpl)->super);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl2)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl2))))->chpl__cid = chpl__cid_object_chpl;
  init_coerce_tmp_chpl3 = ((Error_chpl)(nil));
  chpl_macro_tmp_2723.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2723.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_2723;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_next = tmp_chpl15;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->thrownLine = INT64(0);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->thrownFileId = INT32(0);
  init_chpl73(&_msg_chpl);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_msg = _msg_chpl;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_hasThrowInfo = UINT8(false);
  ((object_chpl)(super_tmp_chpl2))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(((Error_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_Error_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->err = err_chpl;
  chpl_macro_tmp_2724.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2724.addr = details_chpl;
  tmp_chpl16 = chpl_macro_tmp_2724;
  init_ASSIGN__chpl21(&details_chpl2, tmp_chpl16);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->details = details_chpl2;
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(((SystemError_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_FileExistsError_chpl;
  return initTemp_chpl;
}

/* SysError.chpl:242 */
static void chpl__auto_destroy_FileNotFoundError(chpl____wide_FileNotFoundError this_chpl7) {
  chpl____wide_SystemError _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error _parent_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_SystemError chpl_macro_tmp_2725;
  chpl____wide__ref_string chpl_macro_tmp_2726;
  chpl____wide_Error chpl_macro_tmp_2727;
  chpl____wide__ref_string chpl_macro_tmp_2728;
  chpl_macro_tmp_2725.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_2725.addr = ((SystemError_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_2725;
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(242), INT32(78));
  chpl_macro_tmp_2726.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2726.addr = &(((&_parent_destructor_tmp__chpl)->addr)->details);
  _field_destructor_tmp__chpl = chpl_macro_tmp_2726;
  deinit_chpl42(_field_destructor_tmp__chpl);
  chpl_macro_tmp_2727.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2727.addr = ((Error_chpl)((&_parent_destructor_tmp__chpl)->addr));
  _parent_destructor_tmp__chpl2 = chpl_macro_tmp_2727;
  chpl_check_nil((&_parent_destructor_tmp__chpl2)->addr, INT64(242), INT32(78));
  chpl_macro_tmp_2728.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_2728.addr = &(((&_parent_destructor_tmp__chpl2)->addr)->_msg);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_2728;
  deinit_chpl42(_field_destructor_tmp__chpl2);
  return;
}

/* SysError.chpl:243 */
static FileNotFoundError_chpl _new_chpl27(string_chpl * details_chpl,
                                          syserr err_chpl,
                                          int64_t _ln_chpl,
                                          int32_t _fn_chpl) {
  FileNotFoundError_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  SystemError_chpl super_tmp_chpl = NULL;
  Error_chpl super_tmp_chpl2 = NULL;
  Error_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl _msg_chpl;
  string_chpl details_chpl2;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_2729;
  chpl____wide__ref_string chpl_macro_tmp_2730;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_FileNotFoundError_chpl_object), INT16(14), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((FileNotFoundError_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_FileNotFoundError_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl2 = &((super_tmp_chpl)->super);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl2)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl2))))->chpl__cid = chpl__cid_object_chpl;
  init_coerce_tmp_chpl3 = ((Error_chpl)(nil));
  chpl_macro_tmp_2729.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2729.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_2729;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_next = tmp_chpl15;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->thrownLine = INT64(0);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->thrownFileId = INT32(0);
  init_chpl73(&_msg_chpl);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_msg = _msg_chpl;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_hasThrowInfo = UINT8(false);
  ((object_chpl)(super_tmp_chpl2))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(((Error_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_Error_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->err = err_chpl;
  chpl_macro_tmp_2730.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2730.addr = details_chpl;
  tmp_chpl16 = chpl_macro_tmp_2730;
  init_ASSIGN__chpl21(&details_chpl2, tmp_chpl16);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->details = details_chpl2;
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(((SystemError_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_FileNotFoundError_chpl;
  return initTemp_chpl;
}

/* SysError.chpl:254 */
static void chpl__auto_destroy_InterruptedError(chpl____wide_InterruptedError this_chpl7) {
  chpl____wide_SystemError _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error _parent_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_SystemError chpl_macro_tmp_2731;
  chpl____wide__ref_string chpl_macro_tmp_2732;
  chpl____wide_Error chpl_macro_tmp_2733;
  chpl____wide__ref_string chpl_macro_tmp_2734;
  chpl_macro_tmp_2731.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_2731.addr = ((SystemError_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_2731;
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(254), INT32(78));
  chpl_macro_tmp_2732.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2732.addr = &(((&_parent_destructor_tmp__chpl)->addr)->details);
  _field_destructor_tmp__chpl = chpl_macro_tmp_2732;
  deinit_chpl42(_field_destructor_tmp__chpl);
  chpl_macro_tmp_2733.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2733.addr = ((Error_chpl)((&_parent_destructor_tmp__chpl)->addr));
  _parent_destructor_tmp__chpl2 = chpl_macro_tmp_2733;
  chpl_check_nil((&_parent_destructor_tmp__chpl2)->addr, INT64(254), INT32(78));
  chpl_macro_tmp_2734.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_2734.addr = &(((&_parent_destructor_tmp__chpl2)->addr)->_msg);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_2734;
  deinit_chpl42(_field_destructor_tmp__chpl2);
  return;
}

/* SysError.chpl:255 */
static InterruptedError_chpl _new_chpl28(string_chpl * details_chpl,
                                         syserr err_chpl,
                                         int64_t _ln_chpl,
                                         int32_t _fn_chpl) {
  InterruptedError_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  SystemError_chpl super_tmp_chpl = NULL;
  Error_chpl super_tmp_chpl2 = NULL;
  Error_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl _msg_chpl;
  string_chpl details_chpl2;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_2735;
  chpl____wide__ref_string chpl_macro_tmp_2736;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_InterruptedError_chpl_object), INT16(15), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((InterruptedError_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_InterruptedError_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl2 = &((super_tmp_chpl)->super);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl2)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl2))))->chpl__cid = chpl__cid_object_chpl;
  init_coerce_tmp_chpl3 = ((Error_chpl)(nil));
  chpl_macro_tmp_2735.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2735.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_2735;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_next = tmp_chpl15;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->thrownLine = INT64(0);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->thrownFileId = INT32(0);
  init_chpl73(&_msg_chpl);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_msg = _msg_chpl;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_hasThrowInfo = UINT8(false);
  ((object_chpl)(super_tmp_chpl2))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(((Error_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_Error_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->err = err_chpl;
  chpl_macro_tmp_2736.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2736.addr = details_chpl;
  tmp_chpl16 = chpl_macro_tmp_2736;
  init_ASSIGN__chpl21(&details_chpl2, tmp_chpl16);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->details = details_chpl2;
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(((SystemError_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_InterruptedError_chpl;
  return initTemp_chpl;
}

/* SysError.chpl:266 */
static void chpl__auto_destroy_IsADirectoryError(chpl____wide_IsADirectoryError this_chpl7) {
  chpl____wide_SystemError _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error _parent_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_SystemError chpl_macro_tmp_2737;
  chpl____wide__ref_string chpl_macro_tmp_2738;
  chpl____wide_Error chpl_macro_tmp_2739;
  chpl____wide__ref_string chpl_macro_tmp_2740;
  chpl_macro_tmp_2737.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_2737.addr = ((SystemError_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_2737;
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(266), INT32(78));
  chpl_macro_tmp_2738.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2738.addr = &(((&_parent_destructor_tmp__chpl)->addr)->details);
  _field_destructor_tmp__chpl = chpl_macro_tmp_2738;
  deinit_chpl42(_field_destructor_tmp__chpl);
  chpl_macro_tmp_2739.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2739.addr = ((Error_chpl)((&_parent_destructor_tmp__chpl)->addr));
  _parent_destructor_tmp__chpl2 = chpl_macro_tmp_2739;
  chpl_check_nil((&_parent_destructor_tmp__chpl2)->addr, INT64(266), INT32(78));
  chpl_macro_tmp_2740.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_2740.addr = &(((&_parent_destructor_tmp__chpl2)->addr)->_msg);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_2740;
  deinit_chpl42(_field_destructor_tmp__chpl2);
  return;
}

/* SysError.chpl:267 */
static IsADirectoryError_chpl _new_chpl29(string_chpl * details_chpl,
                                          syserr err_chpl,
                                          int64_t _ln_chpl,
                                          int32_t _fn_chpl) {
  IsADirectoryError_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  SystemError_chpl super_tmp_chpl = NULL;
  Error_chpl super_tmp_chpl2 = NULL;
  Error_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl _msg_chpl;
  string_chpl details_chpl2;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_2741;
  chpl____wide__ref_string chpl_macro_tmp_2742;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_IsADirectoryError_chpl_object), INT16(16), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((IsADirectoryError_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_IsADirectoryError_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl2 = &((super_tmp_chpl)->super);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl2)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl2))))->chpl__cid = chpl__cid_object_chpl;
  init_coerce_tmp_chpl3 = ((Error_chpl)(nil));
  chpl_macro_tmp_2741.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2741.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_2741;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_next = tmp_chpl15;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->thrownLine = INT64(0);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->thrownFileId = INT32(0);
  init_chpl73(&_msg_chpl);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_msg = _msg_chpl;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_hasThrowInfo = UINT8(false);
  ((object_chpl)(super_tmp_chpl2))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(((Error_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_Error_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->err = err_chpl;
  chpl_macro_tmp_2742.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2742.addr = details_chpl;
  tmp_chpl16 = chpl_macro_tmp_2742;
  init_ASSIGN__chpl21(&details_chpl2, tmp_chpl16);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->details = details_chpl2;
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(((SystemError_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_IsADirectoryError_chpl;
  return initTemp_chpl;
}

/* SysError.chpl:278 */
static void chpl__auto_destroy_NotADirectoryError(chpl____wide_NotADirectoryError this_chpl7) {
  chpl____wide_SystemError _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error _parent_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_SystemError chpl_macro_tmp_2743;
  chpl____wide__ref_string chpl_macro_tmp_2744;
  chpl____wide_Error chpl_macro_tmp_2745;
  chpl____wide__ref_string chpl_macro_tmp_2746;
  chpl_macro_tmp_2743.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_2743.addr = ((SystemError_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_2743;
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(278), INT32(78));
  chpl_macro_tmp_2744.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2744.addr = &(((&_parent_destructor_tmp__chpl)->addr)->details);
  _field_destructor_tmp__chpl = chpl_macro_tmp_2744;
  deinit_chpl42(_field_destructor_tmp__chpl);
  chpl_macro_tmp_2745.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2745.addr = ((Error_chpl)((&_parent_destructor_tmp__chpl)->addr));
  _parent_destructor_tmp__chpl2 = chpl_macro_tmp_2745;
  chpl_check_nil((&_parent_destructor_tmp__chpl2)->addr, INT64(278), INT32(78));
  chpl_macro_tmp_2746.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_2746.addr = &(((&_parent_destructor_tmp__chpl2)->addr)->_msg);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_2746;
  deinit_chpl42(_field_destructor_tmp__chpl2);
  return;
}

/* SysError.chpl:279 */
static NotADirectoryError_chpl _new_chpl30(string_chpl * details_chpl,
                                           syserr err_chpl,
                                           int64_t _ln_chpl,
                                           int32_t _fn_chpl) {
  NotADirectoryError_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  SystemError_chpl super_tmp_chpl = NULL;
  Error_chpl super_tmp_chpl2 = NULL;
  Error_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl _msg_chpl;
  string_chpl details_chpl2;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_2747;
  chpl____wide__ref_string chpl_macro_tmp_2748;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_NotADirectoryError_chpl_object), INT16(17), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((NotADirectoryError_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_NotADirectoryError_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl2 = &((super_tmp_chpl)->super);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl2)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl2))))->chpl__cid = chpl__cid_object_chpl;
  init_coerce_tmp_chpl3 = ((Error_chpl)(nil));
  chpl_macro_tmp_2747.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2747.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_2747;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_next = tmp_chpl15;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->thrownLine = INT64(0);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->thrownFileId = INT32(0);
  init_chpl73(&_msg_chpl);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_msg = _msg_chpl;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_hasThrowInfo = UINT8(false);
  ((object_chpl)(super_tmp_chpl2))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(((Error_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_Error_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->err = err_chpl;
  chpl_macro_tmp_2748.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2748.addr = details_chpl;
  tmp_chpl16 = chpl_macro_tmp_2748;
  init_ASSIGN__chpl21(&details_chpl2, tmp_chpl16);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->details = details_chpl2;
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(((SystemError_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_NotADirectoryError_chpl;
  return initTemp_chpl;
}

/* SysError.chpl:290 */
static void chpl__auto_destroy_PermissionError(chpl____wide_PermissionError this_chpl7) {
  chpl____wide_SystemError _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error _parent_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_SystemError chpl_macro_tmp_2749;
  chpl____wide__ref_string chpl_macro_tmp_2750;
  chpl____wide_Error chpl_macro_tmp_2751;
  chpl____wide__ref_string chpl_macro_tmp_2752;
  chpl_macro_tmp_2749.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_2749.addr = ((SystemError_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_2749;
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(290), INT32(78));
  chpl_macro_tmp_2750.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2750.addr = &(((&_parent_destructor_tmp__chpl)->addr)->details);
  _field_destructor_tmp__chpl = chpl_macro_tmp_2750;
  deinit_chpl42(_field_destructor_tmp__chpl);
  chpl_macro_tmp_2751.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2751.addr = ((Error_chpl)((&_parent_destructor_tmp__chpl)->addr));
  _parent_destructor_tmp__chpl2 = chpl_macro_tmp_2751;
  chpl_check_nil((&_parent_destructor_tmp__chpl2)->addr, INT64(290), INT32(78));
  chpl_macro_tmp_2752.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_2752.addr = &(((&_parent_destructor_tmp__chpl2)->addr)->_msg);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_2752;
  deinit_chpl42(_field_destructor_tmp__chpl2);
  return;
}

/* SysError.chpl:291 */
static PermissionError_chpl _new_chpl31(string_chpl * details_chpl,
                                        syserr err_chpl,
                                        int64_t _ln_chpl,
                                        int32_t _fn_chpl) {
  PermissionError_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  SystemError_chpl super_tmp_chpl = NULL;
  Error_chpl super_tmp_chpl2 = NULL;
  Error_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl _msg_chpl;
  string_chpl details_chpl2;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_2753;
  chpl____wide__ref_string chpl_macro_tmp_2754;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_PermissionError_chpl_object), INT16(18), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((PermissionError_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_PermissionError_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl2 = &((super_tmp_chpl)->super);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl2)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl2))))->chpl__cid = chpl__cid_object_chpl;
  init_coerce_tmp_chpl3 = ((Error_chpl)(nil));
  chpl_macro_tmp_2753.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2753.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_2753;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_next = tmp_chpl15;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->thrownLine = INT64(0);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->thrownFileId = INT32(0);
  init_chpl73(&_msg_chpl);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_msg = _msg_chpl;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_hasThrowInfo = UINT8(false);
  ((object_chpl)(super_tmp_chpl2))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(((Error_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_Error_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->err = err_chpl;
  chpl_macro_tmp_2754.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2754.addr = details_chpl;
  tmp_chpl16 = chpl_macro_tmp_2754;
  init_ASSIGN__chpl21(&details_chpl2, tmp_chpl16);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->details = details_chpl2;
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(((SystemError_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_PermissionError_chpl;
  return initTemp_chpl;
}

/* SysError.chpl:302 */
static void chpl__auto_destroy_ProcessLookupError(chpl____wide_ProcessLookupError this_chpl7) {
  chpl____wide_SystemError _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error _parent_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_SystemError chpl_macro_tmp_2755;
  chpl____wide__ref_string chpl_macro_tmp_2756;
  chpl____wide_Error chpl_macro_tmp_2757;
  chpl____wide__ref_string chpl_macro_tmp_2758;
  chpl_macro_tmp_2755.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_2755.addr = ((SystemError_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_2755;
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(302), INT32(78));
  chpl_macro_tmp_2756.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2756.addr = &(((&_parent_destructor_tmp__chpl)->addr)->details);
  _field_destructor_tmp__chpl = chpl_macro_tmp_2756;
  deinit_chpl42(_field_destructor_tmp__chpl);
  chpl_macro_tmp_2757.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2757.addr = ((Error_chpl)((&_parent_destructor_tmp__chpl)->addr));
  _parent_destructor_tmp__chpl2 = chpl_macro_tmp_2757;
  chpl_check_nil((&_parent_destructor_tmp__chpl2)->addr, INT64(302), INT32(78));
  chpl_macro_tmp_2758.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_2758.addr = &(((&_parent_destructor_tmp__chpl2)->addr)->_msg);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_2758;
  deinit_chpl42(_field_destructor_tmp__chpl2);
  return;
}

/* SysError.chpl:303 */
static ProcessLookupError_chpl _new_chpl32(string_chpl * details_chpl,
                                           syserr err_chpl,
                                           int64_t _ln_chpl,
                                           int32_t _fn_chpl) {
  ProcessLookupError_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  SystemError_chpl super_tmp_chpl = NULL;
  Error_chpl super_tmp_chpl2 = NULL;
  Error_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl _msg_chpl;
  string_chpl details_chpl2;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_2759;
  chpl____wide__ref_string chpl_macro_tmp_2760;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_ProcessLookupError_chpl_object), INT16(19), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((ProcessLookupError_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_ProcessLookupError_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl2 = &((super_tmp_chpl)->super);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl2)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl2))))->chpl__cid = chpl__cid_object_chpl;
  init_coerce_tmp_chpl3 = ((Error_chpl)(nil));
  chpl_macro_tmp_2759.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2759.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_2759;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_next = tmp_chpl15;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->thrownLine = INT64(0);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->thrownFileId = INT32(0);
  init_chpl73(&_msg_chpl);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_msg = _msg_chpl;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_hasThrowInfo = UINT8(false);
  ((object_chpl)(super_tmp_chpl2))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(((Error_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_Error_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->err = err_chpl;
  chpl_macro_tmp_2760.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2760.addr = details_chpl;
  tmp_chpl16 = chpl_macro_tmp_2760;
  init_ASSIGN__chpl21(&details_chpl2, tmp_chpl16);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->details = details_chpl2;
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(((SystemError_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_ProcessLookupError_chpl;
  return initTemp_chpl;
}

/* SysError.chpl:314 */
static void chpl__auto_destroy_TimeoutError(chpl____wide_TimeoutError this_chpl7) {
  chpl____wide_SystemError _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error _parent_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_SystemError chpl_macro_tmp_2761;
  chpl____wide__ref_string chpl_macro_tmp_2762;
  chpl____wide_Error chpl_macro_tmp_2763;
  chpl____wide__ref_string chpl_macro_tmp_2764;
  chpl_macro_tmp_2761.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_2761.addr = ((SystemError_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_2761;
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(314), INT32(78));
  chpl_macro_tmp_2762.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2762.addr = &(((&_parent_destructor_tmp__chpl)->addr)->details);
  _field_destructor_tmp__chpl = chpl_macro_tmp_2762;
  deinit_chpl42(_field_destructor_tmp__chpl);
  chpl_macro_tmp_2763.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2763.addr = ((Error_chpl)((&_parent_destructor_tmp__chpl)->addr));
  _parent_destructor_tmp__chpl2 = chpl_macro_tmp_2763;
  chpl_check_nil((&_parent_destructor_tmp__chpl2)->addr, INT64(314), INT32(78));
  chpl_macro_tmp_2764.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_2764.addr = &(((&_parent_destructor_tmp__chpl2)->addr)->_msg);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_2764;
  deinit_chpl42(_field_destructor_tmp__chpl2);
  return;
}

/* SysError.chpl:315 */
static TimeoutError_chpl _new_chpl33(string_chpl * details_chpl,
                                     syserr err_chpl,
                                     int64_t _ln_chpl,
                                     int32_t _fn_chpl) {
  TimeoutError_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  SystemError_chpl super_tmp_chpl = NULL;
  Error_chpl super_tmp_chpl2 = NULL;
  Error_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl _msg_chpl;
  string_chpl details_chpl2;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_2765;
  chpl____wide__ref_string chpl_macro_tmp_2766;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_TimeoutError_chpl_object), INT16(20), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((TimeoutError_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_TimeoutError_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl2 = &((super_tmp_chpl)->super);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl2)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl2))))->chpl__cid = chpl__cid_object_chpl;
  init_coerce_tmp_chpl3 = ((Error_chpl)(nil));
  chpl_macro_tmp_2765.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2765.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_2765;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_next = tmp_chpl15;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->thrownLine = INT64(0);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->thrownFileId = INT32(0);
  init_chpl73(&_msg_chpl);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_msg = _msg_chpl;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_hasThrowInfo = UINT8(false);
  ((object_chpl)(super_tmp_chpl2))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(((Error_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_Error_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->err = err_chpl;
  chpl_macro_tmp_2766.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2766.addr = details_chpl;
  tmp_chpl16 = chpl_macro_tmp_2766;
  init_ASSIGN__chpl21(&details_chpl2, tmp_chpl16);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->details = details_chpl2;
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(((SystemError_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_TimeoutError_chpl;
  return initTemp_chpl;
}

/* SysError.chpl:328 */
static void chpl__auto_destroy_IOError(chpl____wide_IOError this_chpl7) {
  chpl____wide_SystemError _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error _parent_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_SystemError chpl_macro_tmp_2767;
  chpl____wide__ref_string chpl_macro_tmp_2768;
  chpl____wide_Error chpl_macro_tmp_2769;
  chpl____wide__ref_string chpl_macro_tmp_2770;
  chpl_macro_tmp_2767.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_2767.addr = ((SystemError_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_2767;
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(328), INT32(78));
  chpl_macro_tmp_2768.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2768.addr = &(((&_parent_destructor_tmp__chpl)->addr)->details);
  _field_destructor_tmp__chpl = chpl_macro_tmp_2768;
  deinit_chpl42(_field_destructor_tmp__chpl);
  chpl_macro_tmp_2769.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2769.addr = ((Error_chpl)((&_parent_destructor_tmp__chpl)->addr));
  _parent_destructor_tmp__chpl2 = chpl_macro_tmp_2769;
  chpl_check_nil((&_parent_destructor_tmp__chpl2)->addr, INT64(328), INT32(78));
  chpl_macro_tmp_2770.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_2770.addr = &(((&_parent_destructor_tmp__chpl2)->addr)->_msg);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_2770;
  deinit_chpl42(_field_destructor_tmp__chpl2);
  return;
}

/* SysError.chpl:329 */
static IOError_chpl _new_chpl34(syserr err_chpl,
                                string_chpl * details_chpl,
                                int64_t _ln_chpl,
                                int32_t _fn_chpl) {
  IOError_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  SystemError_chpl super_tmp_chpl = NULL;
  Error_chpl super_tmp_chpl2 = NULL;
  Error_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl _msg_chpl;
  string_chpl details_chpl2;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_2771;
  chpl____wide__ref_string chpl_macro_tmp_2772;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_IOError_chpl_object), INT16(24), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((IOError_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_IOError_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl2 = &((super_tmp_chpl)->super);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl2)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl2))))->chpl__cid = chpl__cid_object_chpl;
  init_coerce_tmp_chpl3 = ((Error_chpl)(nil));
  chpl_macro_tmp_2771.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2771.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_2771;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_next = tmp_chpl15;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->thrownLine = INT64(0);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->thrownFileId = INT32(0);
  init_chpl73(&_msg_chpl);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_msg = _msg_chpl;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->_hasThrowInfo = UINT8(false);
  ((object_chpl)(super_tmp_chpl2))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(((Error_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_Error_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->err = err_chpl;
  chpl_macro_tmp_2772.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2772.addr = details_chpl;
  tmp_chpl16 = chpl_macro_tmp_2772;
  init_ASSIGN__chpl21(&details_chpl2, tmp_chpl16);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->details = details_chpl2;
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(((SystemError_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_IOError_chpl;
  return initTemp_chpl;
}

/* SysError.chpl:340 */
static void chpl__auto_destroy_EOFError(chpl____wide_EOFError this_chpl7) {
  chpl____wide_IOError _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_SystemError _parent_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error _parent_destructor_tmp__chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_IOError chpl_macro_tmp_2773;
  chpl____wide_SystemError chpl_macro_tmp_2774;
  chpl____wide__ref_string chpl_macro_tmp_2775;
  chpl____wide_Error chpl_macro_tmp_2776;
  chpl____wide__ref_string chpl_macro_tmp_2777;
  chpl_macro_tmp_2773.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_2773.addr = ((IOError_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_2773;
  chpl_macro_tmp_2774.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2774.addr = ((SystemError_chpl)((&_parent_destructor_tmp__chpl)->addr));
  _parent_destructor_tmp__chpl2 = chpl_macro_tmp_2774;
  chpl_check_nil((&_parent_destructor_tmp__chpl2)->addr, INT64(340), INT32(78));
  chpl_macro_tmp_2775.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_2775.addr = &(((&_parent_destructor_tmp__chpl2)->addr)->details);
  _field_destructor_tmp__chpl = chpl_macro_tmp_2775;
  deinit_chpl42(_field_destructor_tmp__chpl);
  chpl_macro_tmp_2776.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_2776.addr = ((Error_chpl)((&_parent_destructor_tmp__chpl2)->addr));
  _parent_destructor_tmp__chpl3 = chpl_macro_tmp_2776;
  chpl_check_nil((&_parent_destructor_tmp__chpl3)->addr, INT64(340), INT32(78));
  chpl_macro_tmp_2777.locale = (&_parent_destructor_tmp__chpl3)->locale;
  chpl_macro_tmp_2777.addr = &(((&_parent_destructor_tmp__chpl3)->addr)->_msg);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_2777;
  deinit_chpl42(_field_destructor_tmp__chpl2);
  return;
}

/* SysError.chpl:341 */
static EOFError_chpl _new_chpl35(string_chpl * details_chpl,
                                 syserr err_chpl,
                                 int64_t _ln_chpl,
                                 int32_t _fn_chpl) {
  EOFError_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  IOError_chpl super_tmp_chpl = NULL;
  SystemError_chpl super_tmp_chpl2 = NULL;
  Error_chpl super_tmp_chpl3 = NULL;
  Error_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl _msg_chpl;
  string_chpl details_chpl2;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_2778;
  chpl____wide__ref_string chpl_macro_tmp_2779;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_EOFError_chpl_object), INT16(21), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((EOFError_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_EOFError_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl2 = &((super_tmp_chpl)->super);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  super_tmp_chpl3 = &((super_tmp_chpl2)->super);
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl3)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl3))))->chpl__cid = chpl__cid_object_chpl;
  init_coerce_tmp_chpl3 = ((Error_chpl)(nil));
  chpl_macro_tmp_2778.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2778.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_2778;
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->_next = tmp_chpl15;
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->thrownLine = INT64(0);
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->thrownFileId = INT32(0);
  init_chpl73(&_msg_chpl);
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->_msg = _msg_chpl;
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->_hasThrowInfo = UINT8(false);
  ((object_chpl)(super_tmp_chpl3))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(((Error_chpl)(super_tmp_chpl2))))->chpl__cid = chpl__cid_Error_chpl;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->err = err_chpl;
  chpl_macro_tmp_2779.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2779.addr = details_chpl;
  tmp_chpl16 = chpl_macro_tmp_2779;
  init_ASSIGN__chpl21(&details_chpl2, tmp_chpl16);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->details = details_chpl2;
  ((object_chpl)(super_tmp_chpl2))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(((SystemError_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_IOError_chpl;
  ((object_chpl)(((IOError_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_IOError_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_EOFError_chpl;
  return initTemp_chpl;
}

/* SysError.chpl:352 */
static void chpl__auto_destroy_UnexpectedEOFError(chpl____wide_UnexpectedEOFError this_chpl7) {
  chpl____wide_IOError _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_SystemError _parent_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error _parent_destructor_tmp__chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_IOError chpl_macro_tmp_2780;
  chpl____wide_SystemError chpl_macro_tmp_2781;
  chpl____wide__ref_string chpl_macro_tmp_2782;
  chpl____wide_Error chpl_macro_tmp_2783;
  chpl____wide__ref_string chpl_macro_tmp_2784;
  chpl_macro_tmp_2780.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_2780.addr = ((IOError_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_2780;
  chpl_macro_tmp_2781.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2781.addr = ((SystemError_chpl)((&_parent_destructor_tmp__chpl)->addr));
  _parent_destructor_tmp__chpl2 = chpl_macro_tmp_2781;
  chpl_check_nil((&_parent_destructor_tmp__chpl2)->addr, INT64(352), INT32(78));
  chpl_macro_tmp_2782.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_2782.addr = &(((&_parent_destructor_tmp__chpl2)->addr)->details);
  _field_destructor_tmp__chpl = chpl_macro_tmp_2782;
  deinit_chpl42(_field_destructor_tmp__chpl);
  chpl_macro_tmp_2783.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_2783.addr = ((Error_chpl)((&_parent_destructor_tmp__chpl2)->addr));
  _parent_destructor_tmp__chpl3 = chpl_macro_tmp_2783;
  chpl_check_nil((&_parent_destructor_tmp__chpl3)->addr, INT64(352), INT32(78));
  chpl_macro_tmp_2784.locale = (&_parent_destructor_tmp__chpl3)->locale;
  chpl_macro_tmp_2784.addr = &(((&_parent_destructor_tmp__chpl3)->addr)->_msg);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_2784;
  deinit_chpl42(_field_destructor_tmp__chpl2);
  return;
}

/* SysError.chpl:353 */
static UnexpectedEOFError_chpl _new_chpl36(string_chpl * details_chpl,
                                           syserr err_chpl,
                                           int64_t _ln_chpl,
                                           int32_t _fn_chpl) {
  UnexpectedEOFError_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  IOError_chpl super_tmp_chpl = NULL;
  SystemError_chpl super_tmp_chpl2 = NULL;
  Error_chpl super_tmp_chpl3 = NULL;
  Error_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl _msg_chpl;
  string_chpl details_chpl2;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_2785;
  chpl____wide__ref_string chpl_macro_tmp_2786;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_UnexpectedEOFError_chpl_object), INT16(22), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((UnexpectedEOFError_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_UnexpectedEOFError_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl2 = &((super_tmp_chpl)->super);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  super_tmp_chpl3 = &((super_tmp_chpl2)->super);
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl3)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl3))))->chpl__cid = chpl__cid_object_chpl;
  init_coerce_tmp_chpl3 = ((Error_chpl)(nil));
  chpl_macro_tmp_2785.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2785.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_2785;
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->_next = tmp_chpl15;
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->thrownLine = INT64(0);
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->thrownFileId = INT32(0);
  init_chpl73(&_msg_chpl);
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->_msg = _msg_chpl;
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->_hasThrowInfo = UINT8(false);
  ((object_chpl)(super_tmp_chpl3))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(((Error_chpl)(super_tmp_chpl2))))->chpl__cid = chpl__cid_Error_chpl;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->err = err_chpl;
  chpl_macro_tmp_2786.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2786.addr = details_chpl;
  tmp_chpl16 = chpl_macro_tmp_2786;
  init_ASSIGN__chpl21(&details_chpl2, tmp_chpl16);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->details = details_chpl2;
  ((object_chpl)(super_tmp_chpl2))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(((SystemError_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_IOError_chpl;
  ((object_chpl)(((IOError_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_IOError_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_UnexpectedEOFError_chpl;
  return initTemp_chpl;
}

/* SysError.chpl:364 */
static void chpl__auto_destroy_BadFormatError(chpl____wide_BadFormatError this_chpl7) {
  chpl____wide_IOError _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_SystemError _parent_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error _parent_destructor_tmp__chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_IOError chpl_macro_tmp_2787;
  chpl____wide_SystemError chpl_macro_tmp_2788;
  chpl____wide__ref_string chpl_macro_tmp_2789;
  chpl____wide_Error chpl_macro_tmp_2790;
  chpl____wide__ref_string chpl_macro_tmp_2791;
  chpl_macro_tmp_2787.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_2787.addr = ((IOError_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_2787;
  chpl_macro_tmp_2788.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_2788.addr = ((SystemError_chpl)((&_parent_destructor_tmp__chpl)->addr));
  _parent_destructor_tmp__chpl2 = chpl_macro_tmp_2788;
  chpl_check_nil((&_parent_destructor_tmp__chpl2)->addr, INT64(364), INT32(78));
  chpl_macro_tmp_2789.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_2789.addr = &(((&_parent_destructor_tmp__chpl2)->addr)->details);
  _field_destructor_tmp__chpl = chpl_macro_tmp_2789;
  deinit_chpl42(_field_destructor_tmp__chpl);
  chpl_macro_tmp_2790.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_2790.addr = ((Error_chpl)((&_parent_destructor_tmp__chpl2)->addr));
  _parent_destructor_tmp__chpl3 = chpl_macro_tmp_2790;
  chpl_check_nil((&_parent_destructor_tmp__chpl3)->addr, INT64(364), INT32(78));
  chpl_macro_tmp_2791.locale = (&_parent_destructor_tmp__chpl3)->locale;
  chpl_macro_tmp_2791.addr = &(((&_parent_destructor_tmp__chpl3)->addr)->_msg);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_2791;
  deinit_chpl42(_field_destructor_tmp__chpl2);
  return;
}

/* SysError.chpl:365 */
static BadFormatError_chpl _new_chpl37(string_chpl * details_chpl,
                                       syserr err_chpl,
                                       int64_t _ln_chpl,
                                       int32_t _fn_chpl) {
  BadFormatError_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  IOError_chpl super_tmp_chpl = NULL;
  SystemError_chpl super_tmp_chpl2 = NULL;
  Error_chpl super_tmp_chpl3 = NULL;
  Error_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl _msg_chpl;
  string_chpl details_chpl2;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_2792;
  chpl____wide__ref_string chpl_macro_tmp_2793;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_BadFormatError_chpl_object), INT16(23), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((BadFormatError_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_BadFormatError_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl2 = &((super_tmp_chpl)->super);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  super_tmp_chpl3 = &((super_tmp_chpl2)->super);
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl3)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl3))))->chpl__cid = chpl__cid_object_chpl;
  init_coerce_tmp_chpl3 = ((Error_chpl)(nil));
  chpl_macro_tmp_2792.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2792.addr = init_coerce_tmp_chpl3;
  tmp_chpl15 = chpl_macro_tmp_2792;
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->_next = tmp_chpl15;
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->thrownLine = INT64(0);
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->thrownFileId = INT32(0);
  init_chpl73(&_msg_chpl);
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->_msg = _msg_chpl;
  chpl_check_nil(super_tmp_chpl3, _ln_chpl, _fn_chpl);
  (super_tmp_chpl3)->_hasThrowInfo = UINT8(false);
  ((object_chpl)(super_tmp_chpl3))->chpl__cid = chpl__cid_Error_chpl;
  ((object_chpl)(((Error_chpl)(super_tmp_chpl2))))->chpl__cid = chpl__cid_Error_chpl;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->err = err_chpl;
  chpl_macro_tmp_2793.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2793.addr = details_chpl;
  tmp_chpl16 = chpl_macro_tmp_2793;
  init_ASSIGN__chpl21(&details_chpl2, tmp_chpl16);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->details = details_chpl2;
  ((object_chpl)(super_tmp_chpl2))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(((SystemError_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_SystemError_chpl;
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_IOError_chpl;
  ((object_chpl)(((IOError_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_IOError_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_BadFormatError_chpl;
  return initTemp_chpl;
}

/* SysError.chpl:376 */
static void quote_string_chpl(string_chpl * s_chpl,
                              int64_t len_chpl,
                              string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_3282_chpl;
  string_chpl ret_chpl;
  c_string ret_chpl2;
  string_chpl call_tmp_chpl36;
  string_chpl ret_chpl3;
  int32_t call_tmp_chpl37;
  string_chpl ret_chpl4;
  string_chpl ret_chpl5;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl x_chpl2;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t call_tmp_chpl38;
  syserr call_tmp_chpl39;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t call_tmp_chpl40;
  c_string call_tmp_chpl41;
  int64_t call_tmp_chpl42;
  string_chpl ret_chpl6;
  c_ptr_uint8_t_chpl call_tmp_chpl43 = NULL;
  int64_t call_tmp_chpl44;
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl7;
  string_chpl ret_chpl8;
  int64_t call_tmp_chpl45;
  chpl____wide_Error error_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl17 = NULL;
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl46;
  string_chpl ret_chpl9;
  c_ptr_uint8_t_chpl call_tmp_chpl47 = NULL;
  int64_t call_tmp_chpl48;
  chpl____wide_Error error_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl ret_chpl10;
  string_chpl ret_chpl11;
  int64_t call_tmp_chpl49;
  chpl____wide_Error error_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl20 = NULL;
  _ref_string_chpl i_x_chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl5 = NULL;
  _ref_string_chpl i_x_chpl6 = NULL;
  chpl____wide__ref_string tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl7 = NULL;
  chpl____wide__ref_string tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_2794;
  chpl____wide__ref_string chpl_macro_tmp_2795;
  chpl____wide__nilType chpl_macro_tmp_2796;
  chpl____wide_Error chpl_macro_tmp_2797;
  chpl____wide__nilType chpl_macro_tmp_2798;
  chpl____wide_Error chpl_macro_tmp_2799;
  chpl____wide__nilType chpl_macro_tmp_2800;
  chpl____wide_Error chpl_macro_tmp_2801;
  chpl____wide__ref_string chpl_macro_tmp_2802;
  chpl____wide__ref_string chpl_macro_tmp_2803;
  chpl____wide__nilType chpl_macro_tmp_2804;
  chpl____wide_Error chpl_macro_tmp_2805;
  chpl____wide__nilType chpl_macro_tmp_2806;
  chpl____wide_Error chpl_macro_tmp_2807;
  chpl____wide__ref_string chpl_macro_tmp_2808;
  chpl____wide__ref_string chpl_macro_tmp_2809;
  chpl____wide__ref_string chpl_macro_tmp_2810;
  local__str_literal_3282_chpl = _str_literal_3282_chpl /* "Cannot call .c_str() on a remote string" */;
  ret_chpl2 = ((c_string)(nil));
  call_tmp_chpl37 = get_chpl_nodeID();
  if ((s_chpl)->locale_id == call_tmp_chpl37) {
    init_chpl73(&ret_chpl5);
    (&ret_chpl5)->cachedNumCodepoints = (s_chpl)->cachedNumCodepoints;
    chpl_macro_tmp_2794.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2794.addr = s_chpl;
    tmp_chpl15 = chpl_macro_tmp_2794;
    initWithBorrowedBuffer_chpl(&ret_chpl5, tmp_chpl15);
    ret_chpl4 = ret_chpl5;
    ret_chpl3 = ret_chpl4;
    goto _end_localize_chpl;
  } else {
    chpl_macro_tmp_2795.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2795.addr = s_chpl;
    tmp_chpl16 = chpl_macro_tmp_2795;
    init_ASSIGN__chpl21(&x_chpl2, tmp_chpl16);
    ret_chpl3 = x_chpl2;
    goto _end_localize_chpl;
  }
  _end_localize_chpl:;
  call_tmp_chpl36 = ret_chpl3;
  call_tmp_chpl38 = get_chpl_nodeID();
  if ((&call_tmp_chpl36)->locale_id != call_tmp_chpl38) {
    halt_chpl(&local__str_literal_3282_chpl, INT64(387), INT32(78));
  }
  call_tmp_chpl39 = qio_quote_string(UINT8(34), UINT8(34), QIO_STRING_FORMAT_CHPL, ((c_string)((&call_tmp_chpl36)->buff)), len_chpl, &ret_chpl2, nil);
  chpl_macro_tmp_2796.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2796.addr = nil;
  chpl_macro_tmp_2797.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2797.addr = NULL;
  error_chpl = chpl_macro_tmp_2797;
  call_tmp_chpl40 = qio_err_iserr(call_tmp_chpl39);
  if (call_tmp_chpl40 != INT32(0)) {
    call_tmp_chpl41 = qio_strdup("<error>");
    call_tmp_chpl42 = string_length_bytes(call_tmp_chpl41);
    if ((&error_chpl)->addr != nil) {
      goto handler_chpl;
    }
    call_tmp_chpl43 = ((c_ptr_uint8_t_chpl)(call_tmp_chpl41));
    call_tmp_chpl44 = (call_tmp_chpl42 + INT64(1));
    chpl_macro_tmp_2798.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2798.addr = nil;
    chpl_macro_tmp_2799.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2799.addr = NULL;
    error_chpl2 = chpl_macro_tmp_2799;
    init_chpl73(&ret_chpl8);
    chpl_macro_tmp_2800.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2800.addr = nil;
    chpl_macro_tmp_2801.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2801.addr = NULL;
    error_chpl3 = chpl_macro_tmp_2801;
    tmp_chpl17 = &error_chpl3;
    call_tmp_chpl45 = validateEncoding_chpl(call_tmp_chpl43, call_tmp_chpl42, tmp_chpl17);
    if ((&error_chpl3)->addr != nil) {
      error_chpl2 = error_chpl3;
      i_x_chpl = &ret_chpl8;
      chpl_macro_tmp_2802.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_2802.addr = i_x_chpl;
      tmp_chpl18 = chpl_macro_tmp_2802;
      deinit_chpl42(tmp_chpl18);
      goto _end_createStringWithOwnedBuffer_chpl;
    }
    (&ret_chpl8)->cachedNumCodepoints = call_tmp_chpl45;
    i_x_chpl2 = &ret_chpl8;
    (i_x_chpl2)->isOwned = UINT8(true);
    (i_x_chpl2)->buff = call_tmp_chpl43;
    (i_x_chpl2)->buffSize = call_tmp_chpl44;
    (i_x_chpl2)->buffLen = call_tmp_chpl42;
    ret_chpl7 = ret_chpl8;
    _end_createStringWithOwnedBuffer_chpl:;
    if ((&error_chpl2)->addr != nil) {
      error_chpl = error_chpl2;
      goto _endcreateStringWithOwnedBuffer_chpl;
    }
    ret_chpl6 = ret_chpl7;
    _endcreateStringWithOwnedBuffer_chpl:;
    if ((&error_chpl)->addr != nil) {
      goto handler_chpl;
    }
    ret_chpl = ret_chpl6;
    i_x_chpl3 = &call_tmp_chpl36;
    chpl_macro_tmp_2803.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2803.addr = i_x_chpl3;
    tmp_chpl19 = chpl_macro_tmp_2803;
    deinit_chpl42(tmp_chpl19);
    goto _end_quote_string_chpl;
  }
  call_tmp_chpl46 = string_length_bytes(ret_chpl2);
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  call_tmp_chpl47 = ((c_ptr_uint8_t_chpl)(ret_chpl2));
  call_tmp_chpl48 = (call_tmp_chpl46 + INT64(1));
  chpl_macro_tmp_2804.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2804.addr = nil;
  chpl_macro_tmp_2805.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2805.addr = NULL;
  error_chpl4 = chpl_macro_tmp_2805;
  init_chpl73(&ret_chpl11);
  chpl_macro_tmp_2806.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2806.addr = nil;
  chpl_macro_tmp_2807.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2807.addr = NULL;
  error_chpl5 = chpl_macro_tmp_2807;
  tmp_chpl20 = &error_chpl5;
  call_tmp_chpl49 = validateEncoding_chpl(call_tmp_chpl47, call_tmp_chpl46, tmp_chpl20);
  if ((&error_chpl5)->addr != nil) {
    error_chpl4 = error_chpl5;
    i_x_chpl4 = &ret_chpl11;
    chpl_macro_tmp_2808.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2808.addr = i_x_chpl4;
    tmp_chpl21 = chpl_macro_tmp_2808;
    deinit_chpl42(tmp_chpl21);
    goto _end_createStringWithOwnedBuffer_chpl2;
  }
  (&ret_chpl11)->cachedNumCodepoints = call_tmp_chpl49;
  i_x_chpl5 = &ret_chpl11;
  (i_x_chpl5)->isOwned = UINT8(true);
  (i_x_chpl5)->buff = call_tmp_chpl47;
  (i_x_chpl5)->buffSize = call_tmp_chpl48;
  (i_x_chpl5)->buffLen = call_tmp_chpl46;
  ret_chpl10 = ret_chpl11;
  _end_createStringWithOwnedBuffer_chpl2:;
  if ((&error_chpl4)->addr != nil) {
    error_chpl = error_chpl4;
    goto _endcreateStringWithOwnedBuffer_chpl2;
  }
  ret_chpl9 = ret_chpl10;
  _endcreateStringWithOwnedBuffer_chpl2:;
  if ((&error_chpl)->addr != nil) {
    goto handler_chpl;
  }
  ret_chpl = ret_chpl9;
  i_x_chpl6 = &call_tmp_chpl36;
  chpl_macro_tmp_2809.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2809.addr = i_x_chpl6;
  tmp_chpl22 = chpl_macro_tmp_2809;
  deinit_chpl42(tmp_chpl22);
  goto _end_quote_string_chpl;
  handler_chpl:;
  if ((&error_chpl)->addr != nil) {
    chpl_uncaught_error(error_chpl, INT64(392), INT32(78));
  }
  i_x_chpl7 = &call_tmp_chpl36;
  chpl_macro_tmp_2810.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2810.addr = i_x_chpl7;
  tmp_chpl23 = chpl_macro_tmp_2810;
  deinit_chpl42(tmp_chpl23);
  _end_quote_string_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* SysError.chpl:412 */
static void ioerror_chpl(syserr error_chpl,
                         string_chpl * msg_chpl,
                         string_chpl * path_chpl2,
                         int64_t offset_chpl,
                         chpl____wide_Error * error_out_chpl,
                         int64_t _ln_chpl,
                         int32_t _fn_chpl) {
  string_chpl local__str_literal_75_chpl;
  string_chpl local__str_literal_2078_chpl;
  string_chpl local__str_literal_2077_chpl;
  int32_t call_tmp_chpl36;
  int64_t tmp_chpl15;
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl;
  string_chpl quotedpath_chpl;
  string_chpl call_tmp_chpl38;
  string_chpl ret_tmp_chpl2;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl39;
  string_chpl ret_tmp_chpl3;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl40;
  string_chpl ret_tmp_chpl4;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl41;
  string_chpl ret_tmp_chpl5;
  string_chpl call_tmp_chpl42;
  string_chpl ret_tmp_chpl6;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl details_chpl;
  _owned_SystemError_chpl call_tmp_chpl43;
  _owned_SystemError_chpl ret_tmp_chpl7;
  chpl____wide_Error call_tmp_chpl44 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 coerce_tmp_chpl3;
  _owned_Error_chpl2 ret_tmp_chpl8;
  _ref__owned_SystemError_chpl i_x_chpl = NULL;
  _ref__owned_Error_chpl2 i__retArg_chpl = NULL;
  _owned_SystemError_chpl _formal_tmp_x_chpl;
  _owned_Error_chpl2 ret_chpl;
  _ref__owned_SystemError_chpl i_this_chpl = NULL;
  Error_chpl call_tmp_chpl45 = NULL;
  _ref__owned_SystemError_chpl i_this_chpl2 = NULL;
  _owned_Error_chpl2 call_tmp_chpl46;
  _owned_Error_chpl2 initTemp_chpl;
  chpl____wide_Error tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 _formal_tmp_in_err_chpl;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl5 = NULL;
  chpl____wide__ref_string tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl6 = NULL;
  chpl____wide__ref_string tmp_chpl25 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl7 = NULL;
  chpl____wide__ref_string tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_2811;
  chpl____wide__ref_string chpl_macro_tmp_2812;
  chpl____wide__ref_string chpl_macro_tmp_2813;
  chpl____wide__ref_string chpl_macro_tmp_2814;
  chpl____wide_Error chpl_macro_tmp_2815;
  chpl____wide__ref_string chpl_macro_tmp_2816;
  chpl____wide__ref_string chpl_macro_tmp_2817;
  chpl____wide__ref_string chpl_macro_tmp_2818;
  chpl____wide__ref_string chpl_macro_tmp_2819;
  chpl____wide__ref_string chpl_macro_tmp_2820;
  chpl____wide__ref_string chpl_macro_tmp_2821;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  local__str_literal_2078_chpl = _str_literal_2078_chpl /* " offset " */;
  local__str_literal_2077_chpl = _str_literal_2077_chpl /* " with path " */;
  call_tmp_chpl36 = qio_err_iserr(error_chpl);
  if (call_tmp_chpl36 != INT32(0)) {
    tmp_chpl15 = (path_chpl2)->buffLen;
    quote_string_chpl(path_chpl2, tmp_chpl15, &ret_tmp_chpl);
    call_tmp_chpl37 = ret_tmp_chpl;
    quotedpath_chpl = call_tmp_chpl37;
    chpl_macro_tmp_2811.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2811.addr = &local__str_literal_2077_chpl;
    tmp_chpl16 = chpl_macro_tmp_2811;
    chpl___PLUS_(msg_chpl, tmp_chpl16, &ret_tmp_chpl2);
    call_tmp_chpl38 = ret_tmp_chpl2;
    chpl_macro_tmp_2812.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2812.addr = &quotedpath_chpl;
    tmp_chpl17 = chpl_macro_tmp_2812;
    chpl___PLUS_(&call_tmp_chpl38, tmp_chpl17, &ret_tmp_chpl3);
    call_tmp_chpl39 = ret_tmp_chpl3;
    chpl_macro_tmp_2813.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2813.addr = &local__str_literal_2078_chpl;
    tmp_chpl18 = chpl_macro_tmp_2813;
    chpl___PLUS_(&call_tmp_chpl39, tmp_chpl18, &ret_tmp_chpl4);
    call_tmp_chpl40 = ret_tmp_chpl4;
    chpl___COLON_16(offset_chpl, &ret_tmp_chpl5);
    call_tmp_chpl41 = ret_tmp_chpl5;
    chpl_macro_tmp_2814.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2814.addr = &call_tmp_chpl41;
    tmp_chpl19 = chpl_macro_tmp_2814;
    chpl___PLUS_(&call_tmp_chpl40, tmp_chpl19, &ret_tmp_chpl6);
    call_tmp_chpl42 = ret_tmp_chpl6;
    details_chpl = call_tmp_chpl42;
    fromSyserr_chpl(error_chpl, &details_chpl, &ret_tmp_chpl7, _ln_chpl, _fn_chpl);
    call_tmp_chpl43 = ret_tmp_chpl7;
    i_x_chpl = &call_tmp_chpl43;
    i__retArg_chpl = &ret_tmp_chpl8;
    _formal_tmp_x_chpl = *(i_x_chpl);
    i_this_chpl = &_formal_tmp_x_chpl;
    call_tmp_chpl45 = ((Error_chpl)((i_this_chpl)->chpl_p));
    i_this_chpl2 = &_formal_tmp_x_chpl;
    (i_this_chpl2)->chpl_p = ((SystemError_chpl)(nil));
    if (((object_chpl)(call_tmp_chpl45)) == nil) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, _ln_chpl, _fn_chpl);
    }
    chpl_macro_tmp_2815.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2815.addr = call_tmp_chpl45;
    tmp_chpl20 = chpl_macro_tmp_2815;
    init_chpl68(&initTemp_chpl, tmp_chpl20);
    call_tmp_chpl46 = initTemp_chpl;
    ret_chpl = call_tmp_chpl46;
    chpl__autoDestroy24(&_formal_tmp_x_chpl);
    *(i__retArg_chpl) = ret_chpl;
    coerce_tmp_chpl3 = ret_tmp_chpl8;
    _formal_tmp_in_err_chpl = coerce_tmp_chpl3;
    call_tmp_chpl44 = chpl_fix_thrown_error(&_formal_tmp_in_err_chpl, _ln_chpl, _fn_chpl);
    *(error_out_chpl) = call_tmp_chpl44;
    i_x_chpl2 = &details_chpl;
    chpl_macro_tmp_2816.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2816.addr = i_x_chpl2;
    tmp_chpl21 = chpl_macro_tmp_2816;
    deinit_chpl42(tmp_chpl21);
    i_x_chpl3 = &call_tmp_chpl41;
    chpl_macro_tmp_2817.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2817.addr = i_x_chpl3;
    tmp_chpl22 = chpl_macro_tmp_2817;
    deinit_chpl42(tmp_chpl22);
    i_x_chpl4 = &call_tmp_chpl40;
    chpl_macro_tmp_2818.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2818.addr = i_x_chpl4;
    tmp_chpl23 = chpl_macro_tmp_2818;
    deinit_chpl42(tmp_chpl23);
    i_x_chpl5 = &call_tmp_chpl39;
    chpl_macro_tmp_2819.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2819.addr = i_x_chpl5;
    tmp_chpl24 = chpl_macro_tmp_2819;
    deinit_chpl42(tmp_chpl24);
    i_x_chpl6 = &call_tmp_chpl38;
    chpl_macro_tmp_2820.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2820.addr = i_x_chpl6;
    tmp_chpl25 = chpl_macro_tmp_2820;
    deinit_chpl42(tmp_chpl25);
    i_x_chpl7 = &quotedpath_chpl;
    chpl_macro_tmp_2821.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2821.addr = i_x_chpl7;
    tmp_chpl26 = chpl_macro_tmp_2821;
    deinit_chpl42(tmp_chpl26);
    goto _endioerror_chpl;
  }
  _endioerror_chpl:;
  return;
}

/* SysError.chpl:425 */
static void ioerror_chpl2(syserr error_chpl,
                          string_chpl * msg_chpl,
                          string_chpl * path_chpl2,
                          chpl____wide_Error * error_out_chpl,
                          int64_t _ln_chpl,
                          int32_t _fn_chpl) {
  string_chpl local__str_literal_75_chpl;
  string_chpl local__str_literal_2077_chpl;
  int32_t call_tmp_chpl36;
  int64_t tmp_chpl15;
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl;
  string_chpl quotedpath_chpl;
  string_chpl call_tmp_chpl38;
  string_chpl ret_tmp_chpl2;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl39;
  string_chpl ret_tmp_chpl3;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl details_chpl;
  _owned_SystemError_chpl call_tmp_chpl40;
  _owned_SystemError_chpl ret_tmp_chpl4;
  chpl____wide_Error call_tmp_chpl41 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 coerce_tmp_chpl3;
  _owned_Error_chpl2 ret_tmp_chpl5;
  _ref__owned_SystemError_chpl i_x_chpl = NULL;
  _ref__owned_Error_chpl2 i__retArg_chpl = NULL;
  _owned_SystemError_chpl _formal_tmp_x_chpl;
  _owned_Error_chpl2 ret_chpl;
  _ref__owned_SystemError_chpl i_this_chpl = NULL;
  Error_chpl call_tmp_chpl42 = NULL;
  _ref__owned_SystemError_chpl i_this_chpl2 = NULL;
  _owned_Error_chpl2 call_tmp_chpl43;
  _owned_Error_chpl2 initTemp_chpl;
  chpl____wide_Error tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 _formal_tmp_in_err_chpl;
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_2822;
  chpl____wide__ref_string chpl_macro_tmp_2823;
  chpl____wide_Error chpl_macro_tmp_2824;
  chpl____wide__ref_string chpl_macro_tmp_2825;
  chpl____wide__ref_string chpl_macro_tmp_2826;
  chpl____wide__ref_string chpl_macro_tmp_2827;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  local__str_literal_2077_chpl = _str_literal_2077_chpl /* " with path " */;
  call_tmp_chpl36 = qio_err_iserr(error_chpl);
  if (call_tmp_chpl36 != INT32(0)) {
    tmp_chpl15 = (path_chpl2)->buffLen;
    quote_string_chpl(path_chpl2, tmp_chpl15, &ret_tmp_chpl);
    call_tmp_chpl37 = ret_tmp_chpl;
    quotedpath_chpl = call_tmp_chpl37;
    chpl_macro_tmp_2822.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2822.addr = &local__str_literal_2077_chpl;
    tmp_chpl16 = chpl_macro_tmp_2822;
    chpl___PLUS_(msg_chpl, tmp_chpl16, &ret_tmp_chpl2);
    call_tmp_chpl38 = ret_tmp_chpl2;
    chpl_macro_tmp_2823.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2823.addr = &quotedpath_chpl;
    tmp_chpl17 = chpl_macro_tmp_2823;
    chpl___PLUS_(&call_tmp_chpl38, tmp_chpl17, &ret_tmp_chpl3);
    call_tmp_chpl39 = ret_tmp_chpl3;
    details_chpl = call_tmp_chpl39;
    fromSyserr_chpl(error_chpl, &details_chpl, &ret_tmp_chpl4, _ln_chpl, _fn_chpl);
    call_tmp_chpl40 = ret_tmp_chpl4;
    i_x_chpl = &call_tmp_chpl40;
    i__retArg_chpl = &ret_tmp_chpl5;
    _formal_tmp_x_chpl = *(i_x_chpl);
    i_this_chpl = &_formal_tmp_x_chpl;
    call_tmp_chpl42 = ((Error_chpl)((i_this_chpl)->chpl_p));
    i_this_chpl2 = &_formal_tmp_x_chpl;
    (i_this_chpl2)->chpl_p = ((SystemError_chpl)(nil));
    if (((object_chpl)(call_tmp_chpl42)) == nil) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, _ln_chpl, _fn_chpl);
    }
    chpl_macro_tmp_2824.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2824.addr = call_tmp_chpl42;
    tmp_chpl18 = chpl_macro_tmp_2824;
    init_chpl68(&initTemp_chpl, tmp_chpl18);
    call_tmp_chpl43 = initTemp_chpl;
    ret_chpl = call_tmp_chpl43;
    chpl__autoDestroy24(&_formal_tmp_x_chpl);
    *(i__retArg_chpl) = ret_chpl;
    coerce_tmp_chpl3 = ret_tmp_chpl5;
    _formal_tmp_in_err_chpl = coerce_tmp_chpl3;
    call_tmp_chpl41 = chpl_fix_thrown_error(&_formal_tmp_in_err_chpl, _ln_chpl, _fn_chpl);
    *(error_out_chpl) = call_tmp_chpl41;
    i_x_chpl2 = &details_chpl;
    chpl_macro_tmp_2825.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2825.addr = i_x_chpl2;
    tmp_chpl19 = chpl_macro_tmp_2825;
    deinit_chpl42(tmp_chpl19);
    i_x_chpl3 = &call_tmp_chpl38;
    chpl_macro_tmp_2826.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2826.addr = i_x_chpl3;
    tmp_chpl20 = chpl_macro_tmp_2826;
    deinit_chpl42(tmp_chpl20);
    i_x_chpl4 = &quotedpath_chpl;
    chpl_macro_tmp_2827.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2827.addr = i_x_chpl4;
    tmp_chpl21 = chpl_macro_tmp_2827;
    deinit_chpl42(tmp_chpl21);
    goto _endioerror_chpl;
  }
  _endioerror_chpl:;
  return;
}

/* SysError.chpl:437 */
static void ioerror_chpl3(syserr error_chpl,
                          string_chpl * msg_chpl,
                          chpl____wide_Error * error_out_chpl,
                          int64_t _ln_chpl,
                          int32_t _fn_chpl) {
  string_chpl local__str_literal_75_chpl;
  int32_t call_tmp_chpl36;
  _owned_SystemError_chpl call_tmp_chpl37;
  _owned_SystemError_chpl ret_tmp_chpl;
  chpl____wide_Error call_tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 coerce_tmp_chpl3;
  _owned_Error_chpl2 ret_tmp_chpl2;
  _ref__owned_SystemError_chpl i_x_chpl = NULL;
  _ref__owned_Error_chpl2 i__retArg_chpl = NULL;
  _owned_SystemError_chpl _formal_tmp_x_chpl;
  _owned_Error_chpl2 ret_chpl;
  _ref__owned_SystemError_chpl i_this_chpl = NULL;
  Error_chpl call_tmp_chpl39 = NULL;
  _ref__owned_SystemError_chpl i_this_chpl2 = NULL;
  _owned_Error_chpl2 call_tmp_chpl40;
  _owned_Error_chpl2 initTemp_chpl;
  chpl____wide_Error tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _owned_Error_chpl2 _formal_tmp_in_err_chpl;
  chpl____wide_Error chpl_macro_tmp_2828;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  call_tmp_chpl36 = qio_err_iserr(error_chpl);
  if (call_tmp_chpl36 != INT32(0)) {
    fromSyserr_chpl(error_chpl, msg_chpl, &ret_tmp_chpl, _ln_chpl, _fn_chpl);
    call_tmp_chpl37 = ret_tmp_chpl;
    i_x_chpl = &call_tmp_chpl37;
    i__retArg_chpl = &ret_tmp_chpl2;
    _formal_tmp_x_chpl = *(i_x_chpl);
    i_this_chpl = &_formal_tmp_x_chpl;
    call_tmp_chpl39 = ((Error_chpl)((i_this_chpl)->chpl_p));
    i_this_chpl2 = &_formal_tmp_x_chpl;
    (i_this_chpl2)->chpl_p = ((SystemError_chpl)(nil));
    if (((object_chpl)(call_tmp_chpl39)) == nil) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, _ln_chpl, _fn_chpl);
    }
    chpl_macro_tmp_2828.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2828.addr = call_tmp_chpl39;
    tmp_chpl15 = chpl_macro_tmp_2828;
    init_chpl68(&initTemp_chpl, tmp_chpl15);
    call_tmp_chpl40 = initTemp_chpl;
    ret_chpl = call_tmp_chpl40;
    chpl__autoDestroy24(&_formal_tmp_x_chpl);
    *(i__retArg_chpl) = ret_chpl;
    coerce_tmp_chpl3 = ret_tmp_chpl2;
    _formal_tmp_in_err_chpl = coerce_tmp_chpl3;
    call_tmp_chpl38 = chpl_fix_thrown_error(&_formal_tmp_in_err_chpl, _ln_chpl, _fn_chpl);
    *(error_out_chpl) = call_tmp_chpl38;
    goto _endioerror_chpl;
  }
  _endioerror_chpl:;
  return;
}

