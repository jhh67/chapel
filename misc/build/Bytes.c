/* Bytes.chpl:102 */
static void chpl__init_Bytes(int64_t _ln_chpl,
                             int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_Bytes_p) {
    goto _exit_chpl__init_Bytes_chpl;
  }
  printModuleInit_chpl("%*s\n", "Bytes", INT64(5));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_Bytes_p = UINT8(true);
  {
    chpl__init_ByteBufferHelpers(INT64(102), INT32(10));
    chpl__init_BytesStringCommon(INT64(102), INT32(10));
    chpl__init_CTypes(INT64(102), INT32(10));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_Bytes_chpl:;
  return;
}

/* Bytes.chpl:153 */
static bytes_chpl chpl_createBytesWithLiteral(c_string buffer_chpl,
                                              int64_t offset_chpl,
                                              c_string x_chpl2,
                                              int64_t length_chpl) {
  c_ptr_uint8_t_chpl call_tmp_chpl36 = NULL;
  c_ptr_uint8_t_chpl buf_chpl = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl37 = NULL;
  c_void_ptr call_tmp_chpl38;
  c_void_ptr call_tmp_chpl39;
  _ref_uint8_t_chpl call_tmp_chpl40 = NULL;
  c_ptr_uint8_t_chpl call_tmp_chpl41 = NULL;
  int64_t call_tmp_chpl42;
  bytes_chpl ret_chpl;
  bytes_chpl ret_chpl2;
  call_tmp_chpl36 = ((c_ptr_uint8_t_chpl)(((c_void_ptr)(buffer_chpl))));
  buf_chpl = call_tmp_chpl36;
  call_tmp_chpl37 = (call_tmp_chpl36 + offset_chpl);
  buf_chpl = call_tmp_chpl37;
  call_tmp_chpl38 = ((c_void_ptr)(call_tmp_chpl37));
  call_tmp_chpl39 = ((c_void_ptr)(x_chpl2));
  checkValue_chpl(length_chpl);
  memcpy(call_tmp_chpl38, call_tmp_chpl39, ((uint64_t)(length_chpl)));
  call_tmp_chpl40 = (buf_chpl + length_chpl);
  *(call_tmp_chpl40) = ((uint8_t)(INT64(0)));
  call_tmp_chpl41 = ((c_ptr_uint8_t_chpl)(((c_string)(call_tmp_chpl37))));
  call_tmp_chpl42 = (length_chpl + INT64(1));
  init_chpl3(&ret_chpl2);
  initWithBorrowedBuffer_chpl3(&ret_chpl2, call_tmp_chpl41, length_chpl, call_tmp_chpl42);
  ret_chpl = ret_chpl2;
  return ret_chpl;
}

/* Bytes.chpl:303 */
static void init_chpl3(bytes_chpl * this_chpl7) {
  c_ptr_uint8_t_chpl init_coerce_tmp_chpl3 = NULL;
  int32_t call_tmp_chpl36;
  (this_chpl7)->buffLen = INT64(0);
  (this_chpl7)->buffSize = INT64(0);
  init_coerce_tmp_chpl3 = ((c_ptr_uint8_t_chpl)(nil));
  (this_chpl7)->buff = init_coerce_tmp_chpl3;
  (this_chpl7)->isOwned = UINT8(true);
  call_tmp_chpl36 = get_chpl_nodeID();
  (this_chpl7)->locale_id = call_tmp_chpl36;
  return;
}

