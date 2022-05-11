/* LocaleModelHelpFlat.chpl:21 */
static void chpl__init_LocaleModelHelpFlat(int64_t _ln_chpl,
                                           int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_LocaleModelHelpFlat_p) {
    goto _exit_chpl__init_LocaleModelHelpFlat_chpl;
  }
  printModuleInit_chpl("%*s\n", "LocaleModelHelpFlat", INT64(19));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_LocaleModelHelpFlat_p = UINT8(true);
  {
    chpl__init_LocaleModelHelpSetup(INT64(21), INT32(52));
    chpl__init_LocaleModelHelpRuntime(INT64(21), INT32(52));
    chpl__init_CTypes(INT64(21), INT32(52));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_LocaleModelHelpFlat_chpl:;
  return;
}

/* LocaleModelHelpFlat.chpl:47 */
chpl_bool _local_chpl_doDirectExecuteOn(chpl_localeID_t loc) {
  int32_t call_tmp_chpl36;
  int32_t call_tmp_chpl37;
  chpl_bool call_tmp_chpl38;
  call_tmp_chpl36 = _local_chpl_nodeFromLocaleID_chpl(loc, INT64(49), INT32(52));
  call_tmp_chpl37 = get_chpl_nodeID();
  call_tmp_chpl38 = (call_tmp_chpl36 == call_tmp_chpl37);
  return call_tmp_chpl38;
}

/* LocaleModelHelpFlat.chpl:47 */
chpl_bool chpl_doDirectExecuteOn(chpl_localeID_t loc) {
  int32_t call_tmp_chpl36;
  int32_t call_tmp_chpl37;
  chpl_bool call_tmp_chpl38;
  call_tmp_chpl36 = chpl_nodeFromLocaleID(loc, INT64(49), INT32(52));
  call_tmp_chpl37 = get_chpl_nodeID();
  call_tmp_chpl38 = (call_tmp_chpl36 == call_tmp_chpl37);
  return call_tmp_chpl38;
}

/* LocaleModelHelpFlat.chpl:58 */
void chpl_executeOn(chpl_localeID_t loc,
                    int64_t fn,
                    chpl_comm_on_bundle_p args,
                    uint64_t args_size,
                    int64_t _ln,
                    int32_t _fn) {
  int32_t call_tmp_chpl36;
  int32_t call_tmp_chpl37;
  c_ptr_chpl_task_infoChapel_t_chpl call_tmp_chpl38 = NULL;
  chpl_task_bundle_p call_tmp_chpl39;
  int32_t call_tmp_chpl40;
  call_tmp_chpl36 = chpl_nodeFromLocaleID(loc, INT64(63), INT32(52));
  call_tmp_chpl37 = get_chpl_nodeID();
  if (call_tmp_chpl36 == call_tmp_chpl37) {
    chpl_ftable_call(fn, args);
  } else {
    call_tmp_chpl38 = chpl_task_getInfoChapel();
    call_tmp_chpl39 = chpl_comm_on_bundle_task_bundle(args);
    chpl_task_data_setup(call_tmp_chpl39, call_tmp_chpl38);
    call_tmp_chpl40 = chpl_sublocFromLocaleID(loc, INT64(73), INT32(52));
    chpl_comm_execute_on(((int64_t)(call_tmp_chpl36)), ((int64_t)(call_tmp_chpl40)), fn, args, args_size, INT64(73), INT32(52));
  }
  return;
}

/* LocaleModelHelpFlat.chpl:84 */
void chpl_executeOnFast(chpl_localeID_t loc,
                        int64_t fn,
                        chpl_comm_on_bundle_p args,
                        uint64_t args_size,
                        int64_t _ln,
                        int32_t _fn) {
  int32_t call_tmp_chpl36;
  int32_t call_tmp_chpl37;
  c_ptr_chpl_task_infoChapel_t_chpl call_tmp_chpl38 = NULL;
  chpl_task_bundle_p call_tmp_chpl39;
  int32_t call_tmp_chpl40;
  call_tmp_chpl36 = chpl_nodeFromLocaleID(loc, INT64(89), INT32(52));
  call_tmp_chpl37 = get_chpl_nodeID();
  if (call_tmp_chpl36 == call_tmp_chpl37) {
    chpl_ftable_call(fn, args);
  } else {
    call_tmp_chpl38 = chpl_task_getInfoChapel();
    call_tmp_chpl39 = chpl_comm_on_bundle_task_bundle(args);
    chpl_task_data_setup(call_tmp_chpl39, call_tmp_chpl38);
    call_tmp_chpl40 = chpl_sublocFromLocaleID(loc, INT64(96), INT32(52));
    chpl_comm_execute_on_fast(((int64_t)(call_tmp_chpl36)), ((int64_t)(call_tmp_chpl40)), fn, args, args_size, INT64(96), INT32(52));
  }
  return;
}

/* LocaleModelHelpFlat.chpl:106 */
void chpl_executeOnNB(chpl_localeID_t loc,
                      int64_t fn,
                      chpl_comm_on_bundle_p args,
                      uint64_t args_size,
                      int64_t _ln,
                      int32_t _fn) {
  int32_t call_tmp_chpl36;
  c_ptr_chpl_task_infoChapel_t_chpl call_tmp_chpl37 = NULL;
  chpl_bool call_tmp_chpl38;
  int32_t call_tmp_chpl39;
  chpl_task_bundle_p call_tmp_chpl40;
  chpl_task_bundle_p call_tmp_chpl41;
  call_tmp_chpl36 = chpl_nodeFromLocaleID(loc, INT64(115), INT32(52));
  call_tmp_chpl37 = chpl_task_getInfoChapel();
  call_tmp_chpl38 = chpl_task_data_getSerial(call_tmp_chpl37);
  call_tmp_chpl39 = get_chpl_nodeID();
  if (call_tmp_chpl36 == call_tmp_chpl39) {
    if (call_tmp_chpl38) {
      chpl_ftable_call(fn, args);
    } else {
      call_tmp_chpl40 = chpl_comm_on_bundle_task_bundle(args);
      chpl_task_data_setup(call_tmp_chpl40, call_tmp_chpl37);
      chpl_comm_taskCallFTable(fn, args, args_size, ((int64_t)(c_sublocid_any)), INT64(124), INT32(52));
    }
  } else {
    call_tmp_chpl41 = chpl_comm_on_bundle_task_bundle(args);
    chpl_task_data_setup(call_tmp_chpl41, call_tmp_chpl37);
    if (call_tmp_chpl38) {
      chpl_comm_execute_on(((int64_t)(call_tmp_chpl36)), ((int64_t)(c_sublocid_any)), fn, args, args_size, INT64(129), INT32(52));
    } else {
      chpl_comm_execute_on_nb(((int64_t)(call_tmp_chpl36)), ((int64_t)(c_sublocid_any)), fn, args, args_size, INT64(131), INT32(52));
    }
  }
  return;
}

