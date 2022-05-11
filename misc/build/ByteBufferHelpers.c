/* ByteBufferHelpers.chpl:21 */
static void chpl__init_ByteBufferHelpers(int64_t _ln_chpl,
                                         int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_ByteBufferHelpers_p) {
    goto _exit_chpl__init_ByteBufferHelpers_chpl;
  }
  printModuleInit_chpl("%*s\n", "ByteBufferHelpers", INT64(17));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_ByteBufferHelpers_p = UINT8(true);
  {
    chpl__init_CTypes(INT64(21), INT32(46));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_ByteBufferHelpers_chpl:;
  return;
}

/* ByteBufferHelpers.chpl:47 */
static int16_t offset_STR_COPY_DATA_chpl(void) {
  int16_t call_tmp_chpl36;
  int16_t call_tmp_chpl37;
  call_tmp_chpl36 = chpl_memhook_md_num();
  call_tmp_chpl37 = (CHPL_RT_MD_STR_COPY_DATA - call_tmp_chpl36);
  return call_tmp_chpl37;
}

/* ByteBufferHelpers.chpl:73 */
static void bufferRealloc_chpl(uint8_t * buf_chpl,
                               int64_t requestedSize_chpl,
                               _tuple_2_c_ptr_uint8_t_int64_t_chpl * _retArg_chpl) {
  int64_t call_tmp_chpl36;
  int64_t tmp_chpl15;
  int16_t call_tmp_chpl37;
  c_void_ptr call_tmp_chpl38;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl ret_tmp_chpl;
  call_tmp_chpl36 = chpl_here_good_alloc_size(((int64_t)((requestedSize_chpl + INT64(1)))), INT64(74), INT32(46));
  if (call_tmp_chpl36 > INT64(0)) {
    tmp_chpl15 = call_tmp_chpl36;
  } else {
    tmp_chpl15 = INT64(0);
  }
  call_tmp_chpl37 = offset_STR_COPY_DATA_chpl();
  call_tmp_chpl38 = chpl_here_realloc(((c_void_ptr)(buf_chpl)), tmp_chpl15, call_tmp_chpl37, INT64(75), INT32(46));
  (&ret_tmp_chpl)->x0 = ((c_ptr_uint8_t_chpl)(call_tmp_chpl38));
  (&ret_tmp_chpl)->x1 = tmp_chpl15;
  *(_retArg_chpl) = ret_tmp_chpl;
  return;
}

/* ByteBufferHelpers.chpl:80 */
static void bufferEnsureSize_chpl(uint8_t * buf_chpl,
                                  int64_t currentSize_chpl,
                                  int64_t requestedSize_chpl,
                                  _tuple_2_c_ptr_uint8_t_int64_t_chpl * _retArg_chpl) {
  _tuple_2_c_ptr_uint8_t_int64_t_chpl ret_chpl;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl call_tmp_chpl36;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl ret_tmp_chpl;
  _tuple_2_c_ptr_uint8_t_int64_t_chpl ret_tmp_chpl2;
  if (currentSize_chpl < requestedSize_chpl) {
    bufferRealloc_chpl(buf_chpl, requestedSize_chpl, &ret_tmp_chpl);
    call_tmp_chpl36 = ret_tmp_chpl;
    ret_chpl = call_tmp_chpl36;
    goto _end_bufferEnsureSize_chpl;
  } else {
    (&ret_tmp_chpl2)->x0 = buf_chpl;
    (&ret_tmp_chpl2)->x1 = currentSize_chpl;
    ret_chpl = ret_tmp_chpl2;
    goto _end_bufferEnsureSize_chpl;
  }
  _end_bufferEnsureSize_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ByteBufferHelpers.chpl:87 */
static uint8_t * bufferCopyRemote_chpl(int64_t src_loc_id_chpl,
                                       uint8_t * src_addr_chpl,
                                       int64_t len_chpl) {
  int64_t call_tmp_chpl36;
  int64_t tmp_chpl15;
  int16_t call_tmp_chpl37;
  c_void_ptr cast_tmp_chpl;
  c_ptr_uint8_t_chpl call_tmp_chpl38 = NULL;
  c_ptr_uint8_t_chpl dst_chpl = NULL;
  _ref_uint8_t_chpl call_tmp_chpl39 = NULL;
  call_tmp_chpl36 = chpl_here_good_alloc_size(((int64_t)((len_chpl + INT64(1)))), INT64(89), INT32(46));
  if (call_tmp_chpl36 > INT64(0)) {
    tmp_chpl15 = call_tmp_chpl36;
  } else {
    tmp_chpl15 = INT64(0);
  }
  call_tmp_chpl37 = offset_STR_COPY_DATA_chpl();
  cast_tmp_chpl = chpl_here_alloc(tmp_chpl15, call_tmp_chpl37, INT64(89), INT32(46));
  call_tmp_chpl38 = ((c_ptr_uint8_t_chpl)(cast_tmp_chpl));
  dst_chpl = call_tmp_chpl38;
  checkValue_chpl(len_chpl);
  chpl_gen_comm_get(((void*)(dst_chpl)), src_loc_id_chpl, src_addr_chpl, ((uint64_t)(len_chpl)), COMMID(0), INT64(90), INT32(46));
  call_tmp_chpl39 = (dst_chpl + len_chpl);
  *(call_tmp_chpl39) = ((uint8_t)(INT64(0)));
  return call_tmp_chpl38;
}

