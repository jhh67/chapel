/* PrintModuleInitOrder.chpl:30 */
void chpl__init_PrintModuleInitOrder(int64_t _ln,
                                     int32_t _fn) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  chpl_bool call_tmp_chpl36;
  c_string call_tmp_chpl37;
  if (chpl__init_PrintModuleInitOrder_p) {
    goto _exit_chpl__init_PrintModuleInitOrder_chpl;
  }
  printModuleInit_chpl("%*s\n", "PrintModuleInitOrder", INT64(20));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_PrintModuleInitOrder_p = UINT8(true);
  {
    chpl__init_ChapelBase(INT64(30), INT32(4));
  }
  call_tmp_chpl36 = chpl_config_has_value("printModuleInitOrder", "Built-in");
  if (! call_tmp_chpl36) {
    tmp_chpl14 = UINT8(false);
  } else {
    call_tmp_chpl37 = chpl_config_get_value("printModuleInitOrder", "Built-in");
    tmp_chpl14 = _command_line_cast_chpl10(call_tmp_chpl37);
  }
  printModuleInitOrder_chpl = tmp_chpl14;
  chpl_comm_broadcast_private(INT64(0), sizeof(chpl_bool));
  moduleInitLevel_chpl = INT32(2);
  if (printModuleInitOrder_chpl) {
    initPrint_chpl();
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_PrintModuleInitOrder_chpl:;
  return;
}

/* PrintModuleInitOrder.chpl:40 */
static void printModuleInit_chpl(c_string s1_chpl,
                                 c_string s2_chpl,
                                 int64_t len_chpl) {
  if (printModuleInitOrder_chpl) {
    printf(s1_chpl, ((int32_t)((((int32_t)((moduleInitLevel_chpl + ((int32_t)(len_chpl))))) + INT32(2)))), s2_chpl);
  }
  return;
}

/* PrintModuleInitOrder.chpl:46 */
static void initPrint_chpl(void) {
  printf("Initializing Modules:\n");
  return;
}

