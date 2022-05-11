/* ExternalArray.chpl:26 */
static void chpl__init_ExternalArray(int64_t _ln_chpl,
                                     int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_ExternalArray_p) {
    goto _exit_chpl__init_ExternalArray_chpl;
  }
  printModuleInit_chpl("%*s\n", "ExternalArray", INT64(13));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_ExternalArray_p = UINT8(true);
  {
    chpl__init_CTypes(INT64(26), INT32(54));
    chpl__init_HaltWrappers(INT64(26), INT32(54));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_ExternalArray_chpl:;
  return;
}

/* ExternalArray.chpl:224 */
void cleanupOpaqueArray(chpl_opaque_array * arr) {
  BaseArr_chpl call_tmp_chpl36 = NULL;
  chpl_localeID_t call_tmp_chpl37;
  chpl_bool isdirect_chpl;
  chpl____wide_BaseArr tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl21 _args_foron_fn_chpl = NULL;
  chpl____wide_BaseArr tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_BaseArr chpl_macro_tmp_2102;
  chpl__class_localson_fn_chpl21_object chpl_macro_tmp_2103;
  chpl____wide_BaseArr chpl_macro_tmp_2104;
  call_tmp_chpl36 = ((BaseArr_chpl)((arr)->_instance));
  if (((object_chpl)(call_tmp_chpl36)) != nil) {
    if (! (arr)->_unowned) {
      call_tmp_chpl37 = chpl_gen_getLocaleID();
      chpl_rmem_consist_release(INT64(227), INT32(54));
      isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
      if (isdirect_chpl) {
        chpl_macro_tmp_2102.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_2102.addr = call_tmp_chpl36;
        tmp_chpl15 = chpl_macro_tmp_2102;
        on_fn_chpl21(tmp_chpl15, UINT8(true));
      } else {
        _args_foron_fn_chpl = ((_class_localson_fn_chpl21)(&chpl_macro_tmp_2103));
        chpl_check_nil(_args_foron_fn_chpl, INT64(227), INT32(54));
        (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
        chpl_macro_tmp_2104.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_2104.addr = call_tmp_chpl36;
        tmp_chpl16 = chpl_macro_tmp_2104;
        chpl_check_nil(_args_foron_fn_chpl, INT64(227), INT32(54));
        (_args_foron_fn_chpl)->_1__instance = tmp_chpl16;
        chpl_check_nil(_args_foron_fn_chpl, INT64(227), INT32(54));
        (_args_foron_fn_chpl)->_2_deinitElts = UINT8(true);
        _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
        _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl21_object);
        chpl_taskRunningCntDec(INT64(227), INT32(54));
        /*** wrapon_fn_chpl20 ***/ chpl_executeOn(call_tmp_chpl37, INT32(24), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1785), INT32(30));
        chpl_taskRunningCntInc(INT64(227), INT32(54));
      }
      chpl_rmem_consist_acquire(INT64(227), INT32(54));
    } else {
    }
  }
  return;
}

