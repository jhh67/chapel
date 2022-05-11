/* CopyAggregation.chpl:87 */
static void chpl__init_CopyAggregation(int64_t _ln_chpl,
                                       int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  string_chpl local__str_literal_2290_chpl;
  string_chpl local__str_literal_2289_chpl;
  string_chpl local__str_literal_2288_chpl;
  if (chpl__init_CopyAggregation_p) {
    goto _exit_chpl__init_CopyAggregation_chpl;
  }
  printModuleInit_chpl("%*s\n", "CopyAggregation", INT64(15));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_CopyAggregation_p = UINT8(true);
  {
    chpl__init_CTypes(INT64(87), INT32(82));
    chpl__init_AggregationPrimitives(INT64(87), INT32(82));
    chpl__init_String(INT64(87), INT32(82));
  }
  local__str_literal_2290_chpl = _str_literal_2290_chpl /* "CHPL_AGGREGATION_SRC_BUFF_SIZE" */;
  local__str_literal_2289_chpl = _str_literal_2289_chpl /* "CHPL_AGGREGATION_DST_BUFF_SIZE" */;
  local__str_literal_2288_chpl = _str_literal_2288_chpl /* "CHPL_AGGREGATION_YIELD_FREQUENCY" */;
  call_tmp_chpl22 = getEnvInt_chpl(&local__str_literal_2288_chpl, INT64(1024));
  yieldFrequency_chpl = call_tmp_chpl22;
  chpl_comm_broadcast_private(INT64(34), sizeof(int64_t));
  call_tmp_chpl23 = getEnvInt_chpl(&local__str_literal_2289_chpl, INT64(8192));
  dstBuffSize_chpl = call_tmp_chpl23;
  chpl_comm_broadcast_private(INT64(35), sizeof(int64_t));
  call_tmp_chpl24 = getEnvInt_chpl(&local__str_literal_2290_chpl, INT64(8192));
  srcBuffSize_chpl = call_tmp_chpl24;
  chpl_comm_broadcast_private(INT64(36), sizeof(int64_t));
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_CopyAggregation_chpl:;
  return;
}

