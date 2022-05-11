/* ChapelTaskData.chpl:23 */
static void chpl__init_ChapelTaskData(int64_t _ln_chpl,
                                      int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  uint64_t call_tmp_chpl36;
  if (chpl__init_ChapelTaskData_p) {
    goto _exit_chpl__init_ChapelTaskData_chpl;
  }
  printModuleInit_chpl("%*s\n", "ChapelTaskData", INT64(14));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_ChapelTaskData_p = UINT8(true);
  {
    chpl__init_CTypes(INT64(23), INT32(7));
  }
  chpl_offset_endCount = UINT64(0);
  chpl_comm_broadcast_private(INT64(1), sizeof(uint64_t));
  call_tmp_chpl5 = sizeof_endcount_ptr_chpl();
  chpl_offset_serial = call_tmp_chpl5;
  chpl_comm_broadcast_private(INT64(2), sizeof(uint64_t));
  call_tmp_chpl6 = ((uint64_t)((chpl_offset_serial + UINT64(1))));
  chpl_offset_nextCoStmtSerial = call_tmp_chpl6;
  chpl_comm_broadcast_private(INT64(3), sizeof(uint64_t));
  call_tmp_chpl7 = ((uint64_t)((chpl_offset_nextCoStmtSerial + UINT64(1))));
  chpl_offset_end = call_tmp_chpl7;
  chpl_comm_broadcast_private(INT64(4), sizeof(uint64_t));
  call_tmp_chpl36 = sizeof(chpl_task_infoChapel_t);
  assert_chpl((chpl_offset_end <= call_tmp_chpl36), INT64(148), INT32(7));
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_ChapelTaskData_chpl:;
  return;
}

/* ChapelTaskData.chpl:38 */
static uint64_t sizeof_endcount_ptr_chpl(void) {
  uint64_t call_tmp_chpl36;
  uint64_t call_tmp_chpl37;
  uint64_t call_tmp_chpl38;
  call_tmp_chpl36 = sizeof(chpl_localeID_t);
  call_tmp_chpl37 = sizeof(c_void_ptr);
  call_tmp_chpl38 = (call_tmp_chpl36 + call_tmp_chpl37);
  return call_tmp_chpl38;
}

/* ChapelTaskData.chpl:44 */
static void chpl_task_data_setDynamicEndCount(chpl_task_infoChapel_t * tls_chpl,
                                              chpl___EndCount_RAtomicT_int64_t_RAtomicT_int64_t end_chpl) {
  c_ptr_uint8_t_chpl prv_chpl = NULL;
  uint64_t i_chpl;
  chpl_localeID_t call_tmp_chpl36;
  chpl_localeID_t loc_chpl;
  c_void_ptr adr_chpl;
  _ref_uint8_t_chpl call_tmp_chpl37 = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl38 = NULL;
  _ref_chpl_localeID_t_chpl i_x_chpl = NULL;
  c_ptr_chpl_localeID_t_chpl call_tmp_chpl39 = NULL;
  uint64_t call_tmp_chpl40;
  c_void_ptr coerce_tmp_chpl3;
  c_void_ptr coerce_tmp_chpl4;
  uint64_t call_tmp_chpl41;
  _ref_uint64_t_chpl i_lhs_chpl = NULL;
  _ref_uint8_t_chpl call_tmp_chpl42 = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl43 = NULL;
  _ref_c_void_ptr_chpl i_x_chpl2 = NULL;
  c_ptr_c_void_ptr_chpl call_tmp_chpl44 = NULL;
  uint64_t call_tmp_chpl45;
  c_void_ptr coerce_tmp_chpl5;
  c_void_ptr coerce_tmp_chpl6;
  prv_chpl = ((c_ptr_uint8_t_chpl)(tls_chpl));
  call_tmp_chpl36 = chpl_gen_getLocaleID();
  loc_chpl = call_tmp_chpl36;
  adr_chpl = ((c_void_ptr)(end_chpl));
  i_chpl = chpl_offset_endCount;
  call_tmp_chpl37 = (prv_chpl + i_chpl);
  call_tmp_chpl38 = c_pointer_return(call_tmp_chpl37);
  i_x_chpl = &loc_chpl;
  call_tmp_chpl39 = c_pointer_return(i_x_chpl);
  call_tmp_chpl40 = sizeof(chpl_localeID_t);
  coerce_tmp_chpl3 = ((c_void_ptr)(call_tmp_chpl38));
  coerce_tmp_chpl4 = ((c_void_ptr)(call_tmp_chpl39));
  checkValue_chpl4();
  memcpy(coerce_tmp_chpl3, coerce_tmp_chpl4, call_tmp_chpl40);
  call_tmp_chpl41 = sizeof(chpl_localeID_t);
  i_lhs_chpl = &i_chpl;
  *(i_lhs_chpl) += call_tmp_chpl41;
  call_tmp_chpl42 = (prv_chpl + i_chpl);
  call_tmp_chpl43 = c_pointer_return(call_tmp_chpl42);
  i_x_chpl2 = &adr_chpl;
  call_tmp_chpl44 = c_pointer_return(i_x_chpl2);
  call_tmp_chpl45 = sizeof(c_void_ptr);
  coerce_tmp_chpl5 = ((c_void_ptr)(call_tmp_chpl43));
  coerce_tmp_chpl6 = ((c_void_ptr)(call_tmp_chpl44));
  checkValue_chpl4();
  memcpy(coerce_tmp_chpl5, coerce_tmp_chpl6, call_tmp_chpl45);
  return;
}

/* ChapelTaskData.chpl:61 */
static chpl____wide__EndCount_RAtomicT_int64_t_RAtomicT_int64_t chpl_task_data_getDynamicEndCount(chpl_task_infoChapel_t * tls_chpl) {
  uint64_t local_chpl_offset_endCount_chpl;
  c_ptr_uint8_t_chpl prv_chpl = NULL;
  uint64_t i_chpl;
  chpl_localeID_t loc_chpl;
  c_void_ptr adr_chpl;
  _ref_chpl_localeID_t_chpl i_x_chpl = NULL;
  c_ptr_chpl_localeID_t_chpl call_tmp_chpl36 = NULL;
  _ref_uint8_t_chpl call_tmp_chpl37 = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl38 = NULL;
  uint64_t call_tmp_chpl39;
  c_void_ptr coerce_tmp_chpl3;
  c_void_ptr coerce_tmp_chpl4;
  uint64_t call_tmp_chpl40;
  _ref_uint64_t_chpl i_lhs_chpl = NULL;
  _ref_c_void_ptr_chpl i_x_chpl2 = NULL;
  c_ptr_c_void_ptr_chpl call_tmp_chpl41 = NULL;
  _ref_uint8_t_chpl call_tmp_chpl42 = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl43 = NULL;
  uint64_t call_tmp_chpl44;
  c_void_ptr coerce_tmp_chpl5;
  c_void_ptr coerce_tmp_chpl6;
  chpl____wide__EndCount_RAtomicT_int64_t_RAtomicT_int64_t call_tmp_chpl45 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_RAtomicT_int64_t_RAtomicT_int64_t chpl_macro_tmp_700;
  local_chpl_offset_endCount_chpl = chpl_offset_endCount;
  prv_chpl = ((c_ptr_uint8_t_chpl)(tls_chpl));
  memset(&loc_chpl, INT32(0), sizeof(chpl_localeID_t));
  adr_chpl = ((c_void_ptr)(nil));
  i_chpl = local_chpl_offset_endCount_chpl;
  i_x_chpl = &loc_chpl;
  call_tmp_chpl36 = c_pointer_return(i_x_chpl);
  call_tmp_chpl37 = (prv_chpl + i_chpl);
  call_tmp_chpl38 = c_pointer_return(call_tmp_chpl37);
  call_tmp_chpl39 = sizeof(chpl_localeID_t);
  coerce_tmp_chpl3 = ((c_void_ptr)(call_tmp_chpl36));
  coerce_tmp_chpl4 = ((c_void_ptr)(call_tmp_chpl38));
  checkValue_chpl4();
  memcpy(coerce_tmp_chpl3, coerce_tmp_chpl4, call_tmp_chpl39);
  call_tmp_chpl40 = sizeof(chpl_localeID_t);
  i_lhs_chpl = &i_chpl;
  *(i_lhs_chpl) += call_tmp_chpl40;
  i_x_chpl2 = &adr_chpl;
  call_tmp_chpl41 = c_pointer_return(i_x_chpl2);
  call_tmp_chpl42 = (prv_chpl + i_chpl);
  call_tmp_chpl43 = c_pointer_return(call_tmp_chpl42);
  call_tmp_chpl44 = sizeof(c_void_ptr);
  coerce_tmp_chpl5 = ((c_void_ptr)(call_tmp_chpl41));
  coerce_tmp_chpl6 = ((c_void_ptr)(call_tmp_chpl43));
  checkValue_chpl4();
  memcpy(coerce_tmp_chpl5, coerce_tmp_chpl6, call_tmp_chpl44);
  chpl_macro_tmp_700.locale = loc_chpl;
  chpl_macro_tmp_700.addr = ((chpl___EndCount_RAtomicT_int64_t_RAtomicT_int64_t)(adr_chpl));
  call_tmp_chpl45 = chpl_macro_tmp_700;
  return call_tmp_chpl45;
}

/* ChapelTaskData.chpl:82 */
static void chpl_task_data_setSerial(chpl_task_infoChapel_t * tls_chpl,
                                     chpl_bool makeSerial_chpl) {
  c_ptr_uint8_t_chpl prv_chpl = NULL;
  uint64_t i_chpl;
  uint8_t v_chpl;
  _ref_uint8_t_chpl call_tmp_chpl36 = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl37 = NULL;
  _ref_uint8_t_chpl i_x_chpl = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl38 = NULL;
  uint64_t call_tmp_chpl39;
  c_void_ptr coerce_tmp_chpl3;
  c_void_ptr coerce_tmp_chpl4;
  prv_chpl = ((c_ptr_uint8_t_chpl)(tls_chpl));
  i_chpl = chpl_offset_serial;
  v_chpl = UINT8(0);
  if (makeSerial_chpl) {
    v_chpl = ((uint8_t)(INT64(1)));
  }
  call_tmp_chpl36 = (prv_chpl + i_chpl);
  call_tmp_chpl37 = c_pointer_return(call_tmp_chpl36);
  i_x_chpl = &v_chpl;
  call_tmp_chpl38 = c_pointer_return(i_x_chpl);
  call_tmp_chpl39 = sizeof(uint8_t);
  coerce_tmp_chpl3 = ((c_void_ptr)(call_tmp_chpl37));
  coerce_tmp_chpl4 = ((c_void_ptr)(call_tmp_chpl38));
  checkValue_chpl4();
  memcpy(coerce_tmp_chpl3, coerce_tmp_chpl4, call_tmp_chpl39);
  return;
}

/* ChapelTaskData.chpl:91 */
static chpl_bool chpl_task_data_getSerial(chpl_task_infoChapel_t * tls_chpl) {
  c_ptr_uint8_t_chpl prv_chpl = NULL;
  uint64_t i_chpl;
  uint8_t v_chpl;
  _ref_uint8_t_chpl i_x_chpl = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl36 = NULL;
  _ref_uint8_t_chpl call_tmp_chpl37 = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl38 = NULL;
  uint64_t call_tmp_chpl39;
  c_void_ptr coerce_tmp_chpl3;
  c_void_ptr coerce_tmp_chpl4;
  chpl_bool tmp_chpl15;
  chpl_bool call_tmp_chpl40;
  prv_chpl = ((c_ptr_uint8_t_chpl)(tls_chpl));
  i_chpl = chpl_offset_serial;
  v_chpl = UINT8(0);
  i_x_chpl = &v_chpl;
  call_tmp_chpl36 = c_pointer_return(i_x_chpl);
  call_tmp_chpl37 = (prv_chpl + i_chpl);
  call_tmp_chpl38 = c_pointer_return(call_tmp_chpl37);
  call_tmp_chpl39 = sizeof(uint8_t);
  coerce_tmp_chpl3 = ((c_void_ptr)(call_tmp_chpl36));
  coerce_tmp_chpl4 = ((c_void_ptr)(call_tmp_chpl38));
  checkValue_chpl4();
  memcpy(coerce_tmp_chpl3, coerce_tmp_chpl4, call_tmp_chpl39);
  if (v_chpl == ((uint8_t)(INT64(0)))) {
    tmp_chpl15 = UINT8(true);
  } else {
    tmp_chpl15 = (v_chpl == ((uint8_t)(INT64(1))));
  }
  assert_chpl(tmp_chpl15, INT64(102), INT32(7));
  call_tmp_chpl40 = (v_chpl == ((uint8_t)(INT64(1))));
  return call_tmp_chpl40;
}

/* ChapelTaskData.chpl:106 */
static void chpl_task_data_setNextCoStmtSerial(chpl_task_infoChapel_t * tls_chpl,
                                               chpl_bool makeSerial_chpl) {
  c_ptr_uint8_t_chpl prv_chpl = NULL;
  uint64_t i_chpl;
  uint8_t v_chpl;
  _ref_uint8_t_chpl call_tmp_chpl36 = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl37 = NULL;
  _ref_uint8_t_chpl i_x_chpl = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl38 = NULL;
  uint64_t call_tmp_chpl39;
  c_void_ptr coerce_tmp_chpl3;
  c_void_ptr coerce_tmp_chpl4;
  prv_chpl = ((c_ptr_uint8_t_chpl)(tls_chpl));
  i_chpl = chpl_offset_nextCoStmtSerial;
  v_chpl = UINT8(0);
  if (makeSerial_chpl) {
    v_chpl = ((uint8_t)(INT64(1)));
  }
  call_tmp_chpl36 = (prv_chpl + i_chpl);
  call_tmp_chpl37 = c_pointer_return(call_tmp_chpl36);
  i_x_chpl = &v_chpl;
  call_tmp_chpl38 = c_pointer_return(i_x_chpl);
  call_tmp_chpl39 = sizeof(uint8_t);
  coerce_tmp_chpl3 = ((c_void_ptr)(call_tmp_chpl37));
  coerce_tmp_chpl4 = ((c_void_ptr)(call_tmp_chpl38));
  checkValue_chpl4();
  memcpy(coerce_tmp_chpl3, coerce_tmp_chpl4, call_tmp_chpl39);
  return;
}

/* ChapelTaskData.chpl:115 */
static chpl_bool chpl_task_data_getNextCoStmtSerial(chpl_task_infoChapel_t * tls_chpl) {
  c_ptr_uint8_t_chpl prv_chpl = NULL;
  uint64_t i_chpl;
  uint8_t v_chpl;
  _ref_uint8_t_chpl i_x_chpl = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl36 = NULL;
  _ref_uint8_t_chpl call_tmp_chpl37 = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl38 = NULL;
  uint64_t call_tmp_chpl39;
  c_void_ptr coerce_tmp_chpl3;
  c_void_ptr coerce_tmp_chpl4;
  chpl_bool tmp_chpl15;
  chpl_bool call_tmp_chpl40;
  prv_chpl = ((c_ptr_uint8_t_chpl)(tls_chpl));
  i_chpl = chpl_offset_nextCoStmtSerial;
  v_chpl = UINT8(0);
  i_x_chpl = &v_chpl;
  call_tmp_chpl36 = c_pointer_return(i_x_chpl);
  call_tmp_chpl37 = (prv_chpl + i_chpl);
  call_tmp_chpl38 = c_pointer_return(call_tmp_chpl37);
  call_tmp_chpl39 = sizeof(uint8_t);
  coerce_tmp_chpl3 = ((c_void_ptr)(call_tmp_chpl36));
  coerce_tmp_chpl4 = ((c_void_ptr)(call_tmp_chpl38));
  checkValue_chpl4();
  memcpy(coerce_tmp_chpl3, coerce_tmp_chpl4, call_tmp_chpl39);
  if (v_chpl == ((uint8_t)(INT64(0)))) {
    tmp_chpl15 = UINT8(true);
  } else {
    tmp_chpl15 = (v_chpl == ((uint8_t)(INT64(1))));
  }
  assert_chpl(tmp_chpl15, INT64(122), INT32(7));
  call_tmp_chpl40 = (v_chpl == ((uint8_t)(INT64(1))));
  return call_tmp_chpl40;
}

/* ChapelTaskData.chpl:131 */
static void chpl_task_setDynamicEndCount(chpl___EndCount_RAtomicT_int64_t_RAtomicT_int64_t end_chpl) {
  c_ptr_chpl_task_infoChapel_t_chpl call_tmp_chpl36 = NULL;
  call_tmp_chpl36 = chpl_task_getInfoChapel();
  chpl_task_data_setDynamicEndCount(call_tmp_chpl36, end_chpl);
  return;
}

/* ChapelTaskData.chpl:134 */
static chpl____wide__EndCount_RAtomicT_int64_t_RAtomicT_int64_t chpl_task_getDynamicEndCount(void) {
  c_ptr_chpl_task_infoChapel_t_chpl call_tmp_chpl36 = NULL;
  chpl____wide__EndCount_RAtomicT_int64_t_RAtomicT_int64_t call_tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  call_tmp_chpl36 = chpl_task_getInfoChapel();
  call_tmp_chpl37 = chpl_task_data_getDynamicEndCount(call_tmp_chpl36);
  return call_tmp_chpl37;
}

/* ChapelTaskData.chpl:138 */
void chpl_task_setSerial(chpl_bool makeSerial) {
  c_ptr_chpl_task_infoChapel_t_chpl call_tmp_chpl36 = NULL;
  call_tmp_chpl36 = chpl_task_getInfoChapel();
  chpl_task_data_setSerial(call_tmp_chpl36, makeSerial);
  return;
}

/* ChapelTaskData.chpl:141 */
chpl_bool chpl_task_getSerial(void) {
  c_ptr_chpl_task_infoChapel_t_chpl call_tmp_chpl36 = NULL;
  chpl_bool call_tmp_chpl37;
  call_tmp_chpl36 = chpl_task_getInfoChapel();
  call_tmp_chpl37 = chpl_task_data_getSerial(call_tmp_chpl36);
  return call_tmp_chpl37;
}

