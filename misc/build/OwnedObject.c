/* OwnedObject.chpl:139 */
static void chpl__init_OwnedObject(int64_t _ln_chpl,
                                   int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_OwnedObject_p) {
    goto _exit_chpl__init_OwnedObject_chpl;
  }
  printModuleInit_chpl("%*s\n", "OwnedObject", INT64(11));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_OwnedObject_p = UINT8(true);
  {
    chpl__init_HaltWrappers(INT64(139), INT32(12));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_OwnedObject_chpl:;
  return;
}

/* OwnedObject.chpl:182 */
static void init_chpl49(_owned_DecodeError_chpl * this_chpl7,
                        DecodeError_chpl p_chpl) {
  (this_chpl7)->chpl_p = p_chpl;
  return;
}

/* OwnedObject.chpl:182 */
static void init_chpl68(_owned_Error_chpl2 * this_chpl7,
                        chpl____wide_Error p_chpl) {
  (this_chpl7)->chpl_p = p_chpl;
  return;
}

/* OwnedObject.chpl:182 */
static void init_chpl52(_owned_BlockingIOError_chpl * this_chpl7,
                        BlockingIOError_chpl p_chpl) {
  (this_chpl7)->chpl_p = p_chpl;
  return;
}

/* OwnedObject.chpl:182 */
static void init_chpl53(_owned_ChildProcessError_chpl * this_chpl7,
                        ChildProcessError_chpl p_chpl) {
  (this_chpl7)->chpl_p = p_chpl;
  return;
}

/* OwnedObject.chpl:182 */
static void init_chpl55(_owned_BrokenPipeError_chpl * this_chpl7,
                        BrokenPipeError_chpl p_chpl) {
  (this_chpl7)->chpl_p = p_chpl;
  return;
}

/* OwnedObject.chpl:182 */
static void init_chpl56(_owned_ConnectionAbortedError_chpl * this_chpl7,
                        ConnectionAbortedError_chpl p_chpl) {
  (this_chpl7)->chpl_p = p_chpl;
  return;
}

/* OwnedObject.chpl:182 */
static void init_chpl57(_owned_ConnectionRefusedError_chpl * this_chpl7,
                        ConnectionRefusedError_chpl p_chpl) {
  (this_chpl7)->chpl_p = p_chpl;
  return;
}

/* OwnedObject.chpl:182 */
static void init_chpl58(_owned_ConnectionResetError_chpl * this_chpl7,
                        ConnectionResetError_chpl p_chpl) {
  (this_chpl7)->chpl_p = p_chpl;
  return;
}

/* OwnedObject.chpl:182 */
static void init_chpl59(_owned_FileExistsError_chpl * this_chpl7,
                        FileExistsError_chpl p_chpl) {
  (this_chpl7)->chpl_p = p_chpl;
  return;
}

/* OwnedObject.chpl:182 */
static void init_chpl60(_owned_FileNotFoundError_chpl * this_chpl7,
                        FileNotFoundError_chpl p_chpl) {
  (this_chpl7)->chpl_p = p_chpl;
  return;
}

/* OwnedObject.chpl:182 */
static void init_chpl61(_owned_InterruptedError_chpl * this_chpl7,
                        InterruptedError_chpl p_chpl) {
  (this_chpl7)->chpl_p = p_chpl;
  return;
}

/* OwnedObject.chpl:182 */
static void init_chpl62(_owned_IsADirectoryError_chpl * this_chpl7,
                        IsADirectoryError_chpl p_chpl) {
  (this_chpl7)->chpl_p = p_chpl;
  return;
}

/* OwnedObject.chpl:182 */
static void init_chpl63(_owned_NotADirectoryError_chpl * this_chpl7,
                        NotADirectoryError_chpl p_chpl) {
  (this_chpl7)->chpl_p = p_chpl;
  return;
}

/* OwnedObject.chpl:182 */
static void init_chpl64(_owned_PermissionError_chpl * this_chpl7,
                        PermissionError_chpl p_chpl) {
  (this_chpl7)->chpl_p = p_chpl;
  return;
}

/* OwnedObject.chpl:182 */
static void init_chpl47(_owned_ProcessLookupError_chpl * this_chpl7,
                        ProcessLookupError_chpl p_chpl) {
  (this_chpl7)->chpl_p = p_chpl;
  return;
}

/* OwnedObject.chpl:182 */
static void init_chpl65(_owned_TimeoutError_chpl * this_chpl7,
                        TimeoutError_chpl p_chpl) {
  (this_chpl7)->chpl_p = p_chpl;
  return;
}

/* OwnedObject.chpl:182 */
static void init_chpl70(_owned_EOFError_chpl * this_chpl7,
                        EOFError_chpl p_chpl) {
  (this_chpl7)->chpl_p = p_chpl;
  return;
}

/* OwnedObject.chpl:182 */
static void init_chpl69(_owned_UnexpectedEOFError_chpl * this_chpl7,
                        UnexpectedEOFError_chpl p_chpl) {
  (this_chpl7)->chpl_p = p_chpl;
  return;
}

/* OwnedObject.chpl:182 */
static void init_chpl48(_owned_BadFormatError_chpl * this_chpl7,
                        BadFormatError_chpl p_chpl) {
  (this_chpl7)->chpl_p = p_chpl;
  return;
}

/* OwnedObject.chpl:182 */
static void init_chpl67(_owned_IOError_chpl * this_chpl7,
                        IOError_chpl p_chpl) {
  (this_chpl7)->chpl_p = p_chpl;
  return;
}

/* OwnedObject.chpl:182 */
static void init_chpl66(_owned_SystemError_chpl * this_chpl7,
                        SystemError_chpl p_chpl) {
  (this_chpl7)->chpl_p = p_chpl;
  return;
}

/* OwnedObject.chpl:182 */
static void init_chpl54(_owned_IllegalArgumentError_chpl * this_chpl7,
                        IllegalArgumentError_chpl p_chpl) {
  (this_chpl7)->chpl_p = p_chpl;
  return;
}

/* OwnedObject.chpl:182 */
static void init_chpl51(_owned_CodepointSplittingError_chpl * this_chpl7,
                        CodepointSplittingError_chpl p_chpl) {
  (this_chpl7)->chpl_p = p_chpl;
  return;
}

/* OwnedObject.chpl:182 */
static void init_chpl50(_owned_TaskErrors_chpl * this_chpl7,
                        TaskErrors_chpl p_chpl) {
  (this_chpl7)->chpl_p = p_chpl;
  return;
}

/* OwnedObject.chpl:201 */
static void init_ASSIGN__chpl2(_owned_SystemError_chpl * this_chpl7,
                               _owned_BlockingIOError_chpl * src_chpl) {
  BlockingIOError_chpl call_tmp_chpl36 = NULL;
  SystemError_chpl init_coerce_tmp_chpl3 = NULL;
  call_tmp_chpl36 = release_chpl20(src_chpl);
  init_coerce_tmp_chpl3 = ((SystemError_chpl)(call_tmp_chpl36));
  (this_chpl7)->chpl_p = init_coerce_tmp_chpl3;
  return;
}

/* OwnedObject.chpl:201 */
static void init_ASSIGN__chpl17(_owned_SystemError_chpl * this_chpl7,
                                _owned_ChildProcessError_chpl * src_chpl) {
  ChildProcessError_chpl call_tmp_chpl36 = NULL;
  SystemError_chpl init_coerce_tmp_chpl3 = NULL;
  call_tmp_chpl36 = release_chpl6(src_chpl);
  init_coerce_tmp_chpl3 = ((SystemError_chpl)(call_tmp_chpl36));
  (this_chpl7)->chpl_p = init_coerce_tmp_chpl3;
  return;
}

/* OwnedObject.chpl:201 */
static void init_ASSIGN__chpl18(_owned_SystemError_chpl * this_chpl7,
                                _owned_BrokenPipeError_chpl * src_chpl) {
  BrokenPipeError_chpl call_tmp_chpl36 = NULL;
  SystemError_chpl init_coerce_tmp_chpl3 = NULL;
  call_tmp_chpl36 = release_chpl19(src_chpl);
  init_coerce_tmp_chpl3 = ((SystemError_chpl)(call_tmp_chpl36));
  (this_chpl7)->chpl_p = init_coerce_tmp_chpl3;
  return;
}

/* OwnedObject.chpl:201 */
static void init_ASSIGN__chpl19(_owned_SystemError_chpl * this_chpl7,
                                _owned_ConnectionAbortedError_chpl * src_chpl) {
  ConnectionAbortedError_chpl call_tmp_chpl36 = NULL;
  SystemError_chpl init_coerce_tmp_chpl3 = NULL;
  call_tmp_chpl36 = release_chpl17(src_chpl);
  init_coerce_tmp_chpl3 = ((SystemError_chpl)(call_tmp_chpl36));
  (this_chpl7)->chpl_p = init_coerce_tmp_chpl3;
  return;
}

/* OwnedObject.chpl:201 */
static void init_ASSIGN__chpl16(_owned_SystemError_chpl * this_chpl7,
                                _owned_ConnectionRefusedError_chpl * src_chpl) {
  ConnectionRefusedError_chpl call_tmp_chpl36 = NULL;
  SystemError_chpl init_coerce_tmp_chpl3 = NULL;
  call_tmp_chpl36 = release_chpl2(src_chpl);
  init_coerce_tmp_chpl3 = ((SystemError_chpl)(call_tmp_chpl36));
  (this_chpl7)->chpl_p = init_coerce_tmp_chpl3;
  return;
}

/* OwnedObject.chpl:201 */
static void init_ASSIGN__chpl15(_owned_SystemError_chpl * this_chpl7,
                                _owned_ConnectionResetError_chpl * src_chpl) {
  ConnectionResetError_chpl call_tmp_chpl36 = NULL;
  SystemError_chpl init_coerce_tmp_chpl3 = NULL;
  call_tmp_chpl36 = release_chpl3(src_chpl);
  init_coerce_tmp_chpl3 = ((SystemError_chpl)(call_tmp_chpl36));
  (this_chpl7)->chpl_p = init_coerce_tmp_chpl3;
  return;
}

/* OwnedObject.chpl:201 */
static void init_ASSIGN__chpl14(_owned_SystemError_chpl * this_chpl7,
                                _owned_FileExistsError_chpl * src_chpl) {
  FileExistsError_chpl call_tmp_chpl36 = NULL;
  SystemError_chpl init_coerce_tmp_chpl3 = NULL;
  call_tmp_chpl36 = release_chpl4(src_chpl);
  init_coerce_tmp_chpl3 = ((SystemError_chpl)(call_tmp_chpl36));
  (this_chpl7)->chpl_p = init_coerce_tmp_chpl3;
  return;
}

/* OwnedObject.chpl:201 */
static void init_ASSIGN__chpl13(_owned_SystemError_chpl * this_chpl7,
                                _owned_FileNotFoundError_chpl * src_chpl) {
  FileNotFoundError_chpl call_tmp_chpl36 = NULL;
  SystemError_chpl init_coerce_tmp_chpl3 = NULL;
  call_tmp_chpl36 = release_chpl5(src_chpl);
  init_coerce_tmp_chpl3 = ((SystemError_chpl)(call_tmp_chpl36));
  (this_chpl7)->chpl_p = init_coerce_tmp_chpl3;
  return;
}

/* OwnedObject.chpl:201 */
static void init_ASSIGN__chpl12(_owned_SystemError_chpl * this_chpl7,
                                _owned_InterruptedError_chpl * src_chpl) {
  InterruptedError_chpl call_tmp_chpl36 = NULL;
  SystemError_chpl init_coerce_tmp_chpl3 = NULL;
  call_tmp_chpl36 = release_chpl7(src_chpl);
  init_coerce_tmp_chpl3 = ((SystemError_chpl)(call_tmp_chpl36));
  (this_chpl7)->chpl_p = init_coerce_tmp_chpl3;
  return;
}

/* OwnedObject.chpl:201 */
static void init_ASSIGN__chpl11(_owned_SystemError_chpl * this_chpl7,
                                _owned_IsADirectoryError_chpl * src_chpl) {
  IsADirectoryError_chpl call_tmp_chpl36 = NULL;
  SystemError_chpl init_coerce_tmp_chpl3 = NULL;
  call_tmp_chpl36 = release_chpl8(src_chpl);
  init_coerce_tmp_chpl3 = ((SystemError_chpl)(call_tmp_chpl36));
  (this_chpl7)->chpl_p = init_coerce_tmp_chpl3;
  return;
}

/* OwnedObject.chpl:201 */
static void init_ASSIGN__chpl10(_owned_SystemError_chpl * this_chpl7,
                                _owned_NotADirectoryError_chpl * src_chpl) {
  NotADirectoryError_chpl call_tmp_chpl36 = NULL;
  SystemError_chpl init_coerce_tmp_chpl3 = NULL;
  call_tmp_chpl36 = release_chpl9(src_chpl);
  init_coerce_tmp_chpl3 = ((SystemError_chpl)(call_tmp_chpl36));
  (this_chpl7)->chpl_p = init_coerce_tmp_chpl3;
  return;
}

/* OwnedObject.chpl:201 */
static void init_ASSIGN__chpl9(_owned_SystemError_chpl * this_chpl7,
                               _owned_PermissionError_chpl * src_chpl) {
  PermissionError_chpl call_tmp_chpl36 = NULL;
  SystemError_chpl init_coerce_tmp_chpl3 = NULL;
  call_tmp_chpl36 = release_chpl10(src_chpl);
  init_coerce_tmp_chpl3 = ((SystemError_chpl)(call_tmp_chpl36));
  (this_chpl7)->chpl_p = init_coerce_tmp_chpl3;
  return;
}

/* OwnedObject.chpl:201 */
static void init_ASSIGN__chpl8(_owned_SystemError_chpl * this_chpl7,
                               _owned_ProcessLookupError_chpl * src_chpl) {
  ProcessLookupError_chpl call_tmp_chpl36 = NULL;
  SystemError_chpl init_coerce_tmp_chpl3 = NULL;
  call_tmp_chpl36 = release_chpl11(src_chpl);
  init_coerce_tmp_chpl3 = ((SystemError_chpl)(call_tmp_chpl36));
  (this_chpl7)->chpl_p = init_coerce_tmp_chpl3;
  return;
}

/* OwnedObject.chpl:201 */
static void init_ASSIGN__chpl7(_owned_SystemError_chpl * this_chpl7,
                               _owned_TimeoutError_chpl * src_chpl) {
  TimeoutError_chpl call_tmp_chpl36 = NULL;
  SystemError_chpl init_coerce_tmp_chpl3 = NULL;
  call_tmp_chpl36 = release_chpl12(src_chpl);
  init_coerce_tmp_chpl3 = ((SystemError_chpl)(call_tmp_chpl36));
  (this_chpl7)->chpl_p = init_coerce_tmp_chpl3;
  return;
}

/* OwnedObject.chpl:201 */
static void init_ASSIGN__chpl6(_owned_SystemError_chpl * this_chpl7,
                               _owned_EOFError_chpl * src_chpl) {
  EOFError_chpl call_tmp_chpl36 = NULL;
  SystemError_chpl init_coerce_tmp_chpl3 = NULL;
  call_tmp_chpl36 = release_chpl13(src_chpl);
  init_coerce_tmp_chpl3 = ((SystemError_chpl)(call_tmp_chpl36));
  (this_chpl7)->chpl_p = init_coerce_tmp_chpl3;
  return;
}

/* OwnedObject.chpl:201 */
static void init_ASSIGN__chpl5(_owned_SystemError_chpl * this_chpl7,
                               _owned_UnexpectedEOFError_chpl * src_chpl) {
  UnexpectedEOFError_chpl call_tmp_chpl36 = NULL;
  SystemError_chpl init_coerce_tmp_chpl3 = NULL;
  call_tmp_chpl36 = release_chpl14(src_chpl);
  init_coerce_tmp_chpl3 = ((SystemError_chpl)(call_tmp_chpl36));
  (this_chpl7)->chpl_p = init_coerce_tmp_chpl3;
  return;
}

/* OwnedObject.chpl:201 */
static void init_ASSIGN__chpl4(_owned_SystemError_chpl * this_chpl7,
                               _owned_BadFormatError_chpl * src_chpl) {
  BadFormatError_chpl call_tmp_chpl36 = NULL;
  SystemError_chpl init_coerce_tmp_chpl3 = NULL;
  call_tmp_chpl36 = release_chpl15(src_chpl);
  init_coerce_tmp_chpl3 = ((SystemError_chpl)(call_tmp_chpl36));
  (this_chpl7)->chpl_p = init_coerce_tmp_chpl3;
  return;
}

/* OwnedObject.chpl:201 */
static void init_ASSIGN__chpl3(_owned_SystemError_chpl * this_chpl7,
                               _owned_IOError_chpl * src_chpl) {
  IOError_chpl call_tmp_chpl36 = NULL;
  SystemError_chpl init_coerce_tmp_chpl3 = NULL;
  call_tmp_chpl36 = release_chpl16(src_chpl);
  init_coerce_tmp_chpl3 = ((SystemError_chpl)(call_tmp_chpl36));
  (this_chpl7)->chpl_p = init_coerce_tmp_chpl3;
  return;
}

/* OwnedObject.chpl:292 */
static void deinit_chpl22(_owned_DecodeError_chpl * this_chpl7) {
  if (((object_chpl)((this_chpl7)->chpl_p)) != nil) {
    chpl__delete14((this_chpl7)->chpl_p);
  }
  return;
}

/* OwnedObject.chpl:292 */
static void deinit_chpl21(_owned_Error_chpl2 * this_chpl7) {
  chpl____wide_Error coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object chpl_macro_tmp_772;
  chpl____wide__nilType chpl_macro_tmp_773;
  chpl____wide_object chpl_macro_tmp_774;
  coerce_tmp_chpl3 = (this_chpl7)->chpl_p;
  chpl_macro_tmp_772.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_772.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_772;
  chpl_macro_tmp_773.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_773.addr = nil;
  chpl_macro_tmp_774.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_774.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_774;
  if (((&coerce_tmp_chpl4)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0))))) {
    coerce_tmp_chpl5 = (this_chpl7)->chpl_p;
    chpl__delete4(coerce_tmp_chpl5);
  }
  return;
}

/* OwnedObject.chpl:292 */
static void deinit_chpl20(_owned_BlockingIOError_chpl * this_chpl7) {
  if (((object_chpl)((this_chpl7)->chpl_p)) != nil) {
    chpl__delete15((this_chpl7)->chpl_p);
  }
  return;
}

/* OwnedObject.chpl:292 */
static void deinit_chpl18(_owned_ChildProcessError_chpl * this_chpl7) {
  if (((object_chpl)((this_chpl7)->chpl_p)) != nil) {
    chpl__delete16((this_chpl7)->chpl_p);
  }
  return;
}

/* OwnedObject.chpl:292 */
static void deinit_chpl23(_owned_BrokenPipeError_chpl * this_chpl7) {
  if (((object_chpl)((this_chpl7)->chpl_p)) != nil) {
    chpl__delete17((this_chpl7)->chpl_p);
  }
  return;
}

/* OwnedObject.chpl:292 */
static void deinit_chpl24(_owned_ConnectionAbortedError_chpl * this_chpl7) {
  if (((object_chpl)((this_chpl7)->chpl_p)) != nil) {
    chpl__delete18((this_chpl7)->chpl_p);
  }
  return;
}

/* OwnedObject.chpl:292 */
static void deinit_chpl25(_owned_ConnectionRefusedError_chpl * this_chpl7) {
  if (((object_chpl)((this_chpl7)->chpl_p)) != nil) {
    chpl__delete19((this_chpl7)->chpl_p);
  }
  return;
}

/* OwnedObject.chpl:292 */
static void deinit_chpl26(_owned_ConnectionResetError_chpl * this_chpl7) {
  if (((object_chpl)((this_chpl7)->chpl_p)) != nil) {
    chpl__delete((this_chpl7)->chpl_p);
  }
  return;
}

/* OwnedObject.chpl:292 */
static void deinit_chpl27(_owned_FileExistsError_chpl * this_chpl7) {
  if (((object_chpl)((this_chpl7)->chpl_p)) != nil) {
    chpl__delete20((this_chpl7)->chpl_p);
  }
  return;
}

/* OwnedObject.chpl:292 */
static void deinit_chpl28(_owned_FileNotFoundError_chpl * this_chpl7) {
  if (((object_chpl)((this_chpl7)->chpl_p)) != nil) {
    chpl__delete21((this_chpl7)->chpl_p);
  }
  return;
}

/* OwnedObject.chpl:292 */
static void deinit_chpl19(_owned_InterruptedError_chpl * this_chpl7) {
  if (((object_chpl)((this_chpl7)->chpl_p)) != nil) {
    chpl__delete22((this_chpl7)->chpl_p);
  }
  return;
}

/* OwnedObject.chpl:292 */
static void deinit_chpl29(_owned_IsADirectoryError_chpl * this_chpl7) {
  if (((object_chpl)((this_chpl7)->chpl_p)) != nil) {
    chpl__delete23((this_chpl7)->chpl_p);
  }
  return;
}

/* OwnedObject.chpl:292 */
static void deinit_chpl30(_owned_NotADirectoryError_chpl * this_chpl7) {
  if (((object_chpl)((this_chpl7)->chpl_p)) != nil) {
    chpl__delete24((this_chpl7)->chpl_p);
  }
  return;
}

/* OwnedObject.chpl:292 */
static void deinit_chpl32(_owned_PermissionError_chpl * this_chpl7) {
  if (((object_chpl)((this_chpl7)->chpl_p)) != nil) {
    chpl__delete25((this_chpl7)->chpl_p);
  }
  return;
}

/* OwnedObject.chpl:292 */
static void deinit_chpl33(_owned_ProcessLookupError_chpl * this_chpl7) {
  if (((object_chpl)((this_chpl7)->chpl_p)) != nil) {
    chpl__delete26((this_chpl7)->chpl_p);
  }
  return;
}

/* OwnedObject.chpl:292 */
static void deinit_chpl35(_owned_TimeoutError_chpl * this_chpl7) {
  if (((object_chpl)((this_chpl7)->chpl_p)) != nil) {
    chpl__delete27((this_chpl7)->chpl_p);
  }
  return;
}

/* OwnedObject.chpl:292 */
static void deinit_chpl36(_owned_EOFError_chpl * this_chpl7) {
  if (((object_chpl)((this_chpl7)->chpl_p)) != nil) {
    chpl__delete28((this_chpl7)->chpl_p);
  }
  return;
}

/* OwnedObject.chpl:292 */
static void deinit_chpl37(_owned_UnexpectedEOFError_chpl * this_chpl7) {
  if (((object_chpl)((this_chpl7)->chpl_p)) != nil) {
    chpl__delete29((this_chpl7)->chpl_p);
  }
  return;
}

/* OwnedObject.chpl:292 */
static void deinit_chpl39(_owned_BadFormatError_chpl * this_chpl7) {
  if (((object_chpl)((this_chpl7)->chpl_p)) != nil) {
    chpl__delete30((this_chpl7)->chpl_p);
  }
  return;
}

/* OwnedObject.chpl:292 */
static void deinit_chpl40(_owned_IOError_chpl * this_chpl7) {
  if (((object_chpl)((this_chpl7)->chpl_p)) != nil) {
    chpl__delete31((this_chpl7)->chpl_p);
  }
  return;
}

/* OwnedObject.chpl:292 */
static void deinit_chpl41(_owned_SystemError_chpl * this_chpl7) {
  if (((object_chpl)((this_chpl7)->chpl_p)) != nil) {
    chpl__delete32((this_chpl7)->chpl_p);
  }
  return;
}

/* OwnedObject.chpl:292 */
static void deinit_chpl38(_owned_IllegalArgumentError_chpl * this_chpl7) {
  if (((object_chpl)((this_chpl7)->chpl_p)) != nil) {
    chpl__delete2((this_chpl7)->chpl_p);
  }
  return;
}

/* OwnedObject.chpl:292 */
static void deinit_chpl31(_owned_CodepointSplittingError_chpl * this_chpl7) {
  if (((object_chpl)((this_chpl7)->chpl_p)) != nil) {
    chpl__delete33((this_chpl7)->chpl_p);
  }
  return;
}

/* OwnedObject.chpl:292 */
static void deinit_chpl34(_owned_TaskErrors_chpl * this_chpl7) {
  TaskErrors_chpl coerce_tmp_chpl3 = NULL;
  chpl____wide_TaskErrors tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_TaskErrors chpl_macro_tmp_775;
  if (((object_chpl)((this_chpl7)->chpl_p)) != nil) {
    coerce_tmp_chpl3 = (this_chpl7)->chpl_p;
    chpl_macro_tmp_775.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_775.addr = coerce_tmp_chpl3;
    tmp_chpl15 = chpl_macro_tmp_775;
    chpl__delete5(tmp_chpl15);
  }
  return;
}

/* OwnedObject.chpl:304 */
static void clear_chpl(_owned_Error_chpl * this_chpl7) {
  chpl____wide_Error coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl tmp_chpl16 = NULL;
  chpl____wide_Error tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object chpl_macro_tmp_776;
  chpl____wide__nilType chpl_macro_tmp_777;
  chpl____wide_object chpl_macro_tmp_778;
  chpl____wide_Error chpl_macro_tmp_779;
  coerce_tmp_chpl3 = (this_chpl7)->chpl_p;
  chpl_macro_tmp_776.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_776.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_776;
  chpl_macro_tmp_777.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_777.addr = nil;
  chpl_macro_tmp_778.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_778.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_778;
  if (((&coerce_tmp_chpl4)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0))))) {
    coerce_tmp_chpl5 = (this_chpl7)->chpl_p;
    chpl__delete4(coerce_tmp_chpl5);
    tmp_chpl16 = ((Error_chpl)(nil));
    chpl_macro_tmp_779.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_779.addr = tmp_chpl16;
    tmp_chpl17 = chpl_macro_tmp_779;
    (this_chpl7)->chpl_p = tmp_chpl17;
  }
  return;
}

/* OwnedObject.chpl:317 */
static void retain_chpl(_owned_Error_chpl * this_chpl7,
                        chpl____wide_Error newPtr_chpl) {
  chpl____wide_Error coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object chpl_macro_tmp_780;
  chpl____wide__nilType chpl_macro_tmp_781;
  chpl____wide_object chpl_macro_tmp_782;
  coerce_tmp_chpl3 = (this_chpl7)->chpl_p;
  (this_chpl7)->chpl_p = newPtr_chpl;
  chpl_macro_tmp_780.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_780.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_780;
  chpl_macro_tmp_781.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_781.addr = nil;
  chpl_macro_tmp_782.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_782.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_782;
  if (((&coerce_tmp_chpl4)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0))))) {
    chpl__delete4(coerce_tmp_chpl3);
  }
  return;
}

/* OwnedObject.chpl:317 */
static void retain_chpl2(_owned_Error_chpl * this_chpl7,
                         chpl____wide_Error newPtr_chpl) {
  chpl____wide_Error coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object chpl_macro_tmp_783;
  chpl____wide__nilType chpl_macro_tmp_784;
  chpl____wide_object chpl_macro_tmp_785;
  coerce_tmp_chpl3 = (this_chpl7)->chpl_p;
  (this_chpl7)->chpl_p = newPtr_chpl;
  chpl_macro_tmp_783.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_783.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_783;
  chpl_macro_tmp_784.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_784.addr = nil;
  chpl_macro_tmp_785.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_785.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_785;
  if (((&coerce_tmp_chpl4)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0))))) {
    chpl__delete4(coerce_tmp_chpl3);
  }
  return;
}

/* OwnedObject.chpl:334 */
static chpl____wide_Error release_chpl18(_owned_Error_chpl2 * this_chpl7) {
  string_chpl local__str_literal_75_chpl;
  chpl____wide_Error coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl tmp_chpl15 = NULL;
  chpl____wide_Error tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_786;
  chpl____wide_object chpl_macro_tmp_787;
  chpl____wide__nilType chpl_macro_tmp_788;
  chpl____wide_object chpl_macro_tmp_789;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = (this_chpl7)->chpl_p;
  tmp_chpl15 = ((Error_chpl)(nil));
  chpl_macro_tmp_786.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_786.addr = tmp_chpl15;
  tmp_chpl16 = chpl_macro_tmp_786;
  (this_chpl7)->chpl_p = tmp_chpl16;
  chpl_macro_tmp_787.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_787.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_787;
  chpl_macro_tmp_788.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_788.addr = nil;
  chpl_macro_tmp_789.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_789.addr = NULL;
  tmp_chpl17 = chpl_macro_tmp_789;
  if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl17)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl17)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(341), INT32(12));
  }
  return coerce_tmp_chpl3;
}

/* OwnedObject.chpl:334 */
static BlockingIOError_chpl release_chpl20(_owned_BlockingIOError_chpl * this_chpl7) {
  string_chpl local__str_literal_75_chpl;
  BlockingIOError_chpl coerce_tmp_chpl3 = NULL;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = (this_chpl7)->chpl_p;
  (this_chpl7)->chpl_p = ((BlockingIOError_chpl)(nil));
  if (((object_chpl)(coerce_tmp_chpl3)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(341), INT32(12));
  }
  return coerce_tmp_chpl3;
}

/* OwnedObject.chpl:334 */
static ChildProcessError_chpl release_chpl6(_owned_ChildProcessError_chpl * this_chpl7) {
  string_chpl local__str_literal_75_chpl;
  ChildProcessError_chpl coerce_tmp_chpl3 = NULL;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = (this_chpl7)->chpl_p;
  (this_chpl7)->chpl_p = ((ChildProcessError_chpl)(nil));
  if (((object_chpl)(coerce_tmp_chpl3)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(341), INT32(12));
  }
  return coerce_tmp_chpl3;
}

/* OwnedObject.chpl:334 */
static BrokenPipeError_chpl release_chpl19(_owned_BrokenPipeError_chpl * this_chpl7) {
  string_chpl local__str_literal_75_chpl;
  BrokenPipeError_chpl coerce_tmp_chpl3 = NULL;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = (this_chpl7)->chpl_p;
  (this_chpl7)->chpl_p = ((BrokenPipeError_chpl)(nil));
  if (((object_chpl)(coerce_tmp_chpl3)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(341), INT32(12));
  }
  return coerce_tmp_chpl3;
}

/* OwnedObject.chpl:334 */
static ConnectionAbortedError_chpl release_chpl17(_owned_ConnectionAbortedError_chpl * this_chpl7) {
  string_chpl local__str_literal_75_chpl;
  ConnectionAbortedError_chpl coerce_tmp_chpl3 = NULL;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = (this_chpl7)->chpl_p;
  (this_chpl7)->chpl_p = ((ConnectionAbortedError_chpl)(nil));
  if (((object_chpl)(coerce_tmp_chpl3)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(341), INT32(12));
  }
  return coerce_tmp_chpl3;
}

/* OwnedObject.chpl:334 */
static ConnectionRefusedError_chpl release_chpl2(_owned_ConnectionRefusedError_chpl * this_chpl7) {
  string_chpl local__str_literal_75_chpl;
  ConnectionRefusedError_chpl coerce_tmp_chpl3 = NULL;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = (this_chpl7)->chpl_p;
  (this_chpl7)->chpl_p = ((ConnectionRefusedError_chpl)(nil));
  if (((object_chpl)(coerce_tmp_chpl3)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(341), INT32(12));
  }
  return coerce_tmp_chpl3;
}

/* OwnedObject.chpl:334 */
static ConnectionResetError_chpl release_chpl3(_owned_ConnectionResetError_chpl * this_chpl7) {
  string_chpl local__str_literal_75_chpl;
  ConnectionResetError_chpl coerce_tmp_chpl3 = NULL;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = (this_chpl7)->chpl_p;
  (this_chpl7)->chpl_p = ((ConnectionResetError_chpl)(nil));
  if (((object_chpl)(coerce_tmp_chpl3)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(341), INT32(12));
  }
  return coerce_tmp_chpl3;
}

/* OwnedObject.chpl:334 */
static FileExistsError_chpl release_chpl4(_owned_FileExistsError_chpl * this_chpl7) {
  string_chpl local__str_literal_75_chpl;
  FileExistsError_chpl coerce_tmp_chpl3 = NULL;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = (this_chpl7)->chpl_p;
  (this_chpl7)->chpl_p = ((FileExistsError_chpl)(nil));
  if (((object_chpl)(coerce_tmp_chpl3)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(341), INT32(12));
  }
  return coerce_tmp_chpl3;
}

/* OwnedObject.chpl:334 */
static FileNotFoundError_chpl release_chpl5(_owned_FileNotFoundError_chpl * this_chpl7) {
  string_chpl local__str_literal_75_chpl;
  FileNotFoundError_chpl coerce_tmp_chpl3 = NULL;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = (this_chpl7)->chpl_p;
  (this_chpl7)->chpl_p = ((FileNotFoundError_chpl)(nil));
  if (((object_chpl)(coerce_tmp_chpl3)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(341), INT32(12));
  }
  return coerce_tmp_chpl3;
}

/* OwnedObject.chpl:334 */
static InterruptedError_chpl release_chpl7(_owned_InterruptedError_chpl * this_chpl7) {
  string_chpl local__str_literal_75_chpl;
  InterruptedError_chpl coerce_tmp_chpl3 = NULL;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = (this_chpl7)->chpl_p;
  (this_chpl7)->chpl_p = ((InterruptedError_chpl)(nil));
  if (((object_chpl)(coerce_tmp_chpl3)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(341), INT32(12));
  }
  return coerce_tmp_chpl3;
}

/* OwnedObject.chpl:334 */
static IsADirectoryError_chpl release_chpl8(_owned_IsADirectoryError_chpl * this_chpl7) {
  string_chpl local__str_literal_75_chpl;
  IsADirectoryError_chpl coerce_tmp_chpl3 = NULL;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = (this_chpl7)->chpl_p;
  (this_chpl7)->chpl_p = ((IsADirectoryError_chpl)(nil));
  if (((object_chpl)(coerce_tmp_chpl3)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(341), INT32(12));
  }
  return coerce_tmp_chpl3;
}

/* OwnedObject.chpl:334 */
static NotADirectoryError_chpl release_chpl9(_owned_NotADirectoryError_chpl * this_chpl7) {
  string_chpl local__str_literal_75_chpl;
  NotADirectoryError_chpl coerce_tmp_chpl3 = NULL;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = (this_chpl7)->chpl_p;
  (this_chpl7)->chpl_p = ((NotADirectoryError_chpl)(nil));
  if (((object_chpl)(coerce_tmp_chpl3)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(341), INT32(12));
  }
  return coerce_tmp_chpl3;
}

/* OwnedObject.chpl:334 */
static PermissionError_chpl release_chpl10(_owned_PermissionError_chpl * this_chpl7) {
  string_chpl local__str_literal_75_chpl;
  PermissionError_chpl coerce_tmp_chpl3 = NULL;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = (this_chpl7)->chpl_p;
  (this_chpl7)->chpl_p = ((PermissionError_chpl)(nil));
  if (((object_chpl)(coerce_tmp_chpl3)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(341), INT32(12));
  }
  return coerce_tmp_chpl3;
}

/* OwnedObject.chpl:334 */
static ProcessLookupError_chpl release_chpl11(_owned_ProcessLookupError_chpl * this_chpl7) {
  string_chpl local__str_literal_75_chpl;
  ProcessLookupError_chpl coerce_tmp_chpl3 = NULL;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = (this_chpl7)->chpl_p;
  (this_chpl7)->chpl_p = ((ProcessLookupError_chpl)(nil));
  if (((object_chpl)(coerce_tmp_chpl3)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(341), INT32(12));
  }
  return coerce_tmp_chpl3;
}

/* OwnedObject.chpl:334 */
static TimeoutError_chpl release_chpl12(_owned_TimeoutError_chpl * this_chpl7) {
  string_chpl local__str_literal_75_chpl;
  TimeoutError_chpl coerce_tmp_chpl3 = NULL;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = (this_chpl7)->chpl_p;
  (this_chpl7)->chpl_p = ((TimeoutError_chpl)(nil));
  if (((object_chpl)(coerce_tmp_chpl3)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(341), INT32(12));
  }
  return coerce_tmp_chpl3;
}

/* OwnedObject.chpl:334 */
static EOFError_chpl release_chpl13(_owned_EOFError_chpl * this_chpl7) {
  string_chpl local__str_literal_75_chpl;
  EOFError_chpl coerce_tmp_chpl3 = NULL;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = (this_chpl7)->chpl_p;
  (this_chpl7)->chpl_p = ((EOFError_chpl)(nil));
  if (((object_chpl)(coerce_tmp_chpl3)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(341), INT32(12));
  }
  return coerce_tmp_chpl3;
}

/* OwnedObject.chpl:334 */
static UnexpectedEOFError_chpl release_chpl14(_owned_UnexpectedEOFError_chpl * this_chpl7) {
  string_chpl local__str_literal_75_chpl;
  UnexpectedEOFError_chpl coerce_tmp_chpl3 = NULL;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = (this_chpl7)->chpl_p;
  (this_chpl7)->chpl_p = ((UnexpectedEOFError_chpl)(nil));
  if (((object_chpl)(coerce_tmp_chpl3)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(341), INT32(12));
  }
  return coerce_tmp_chpl3;
}

/* OwnedObject.chpl:334 */
static BadFormatError_chpl release_chpl15(_owned_BadFormatError_chpl * this_chpl7) {
  string_chpl local__str_literal_75_chpl;
  BadFormatError_chpl coerce_tmp_chpl3 = NULL;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = (this_chpl7)->chpl_p;
  (this_chpl7)->chpl_p = ((BadFormatError_chpl)(nil));
  if (((object_chpl)(coerce_tmp_chpl3)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(341), INT32(12));
  }
  return coerce_tmp_chpl3;
}

/* OwnedObject.chpl:334 */
static IOError_chpl release_chpl16(_owned_IOError_chpl * this_chpl7) {
  string_chpl local__str_literal_75_chpl;
  IOError_chpl coerce_tmp_chpl3 = NULL;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  coerce_tmp_chpl3 = (this_chpl7)->chpl_p;
  (this_chpl7)->chpl_p = ((IOError_chpl)(nil));
  if (((object_chpl)(coerce_tmp_chpl3)) == nil) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(341), INT32(12));
  }
  return coerce_tmp_chpl3;
}

/* OwnedObject.chpl:334 */
static chpl____wide_Error release_chpl(_owned_Error_chpl * this_chpl7) {
  chpl____wide_Error coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  Error_chpl tmp_chpl15 = NULL;
  chpl____wide_Error tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error chpl_macro_tmp_790;
  coerce_tmp_chpl3 = (this_chpl7)->chpl_p;
  tmp_chpl15 = ((Error_chpl)(nil));
  chpl_macro_tmp_790.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_790.addr = tmp_chpl15;
  tmp_chpl16 = chpl_macro_tmp_790;
  (this_chpl7)->chpl_p = tmp_chpl16;
  return coerce_tmp_chpl3;
}

/* OwnedObject.chpl:354 */
static chpl____wide_Error borrow_chpl(_owned_Error_chpl * this_chpl7) {
  chpl____wide_Error ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  ret_chpl = (this_chpl7)->chpl_p;
  return ret_chpl;
}

/* OwnedObject.chpl:376 */
static void chpl___ASSIGN_3(_owned_Error_chpl * lhs_chpl,
                            _owned_Error_chpl * rhs_chpl) {
  chpl____wide_Error coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl16;
  chpl____wide_Error coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Error call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object chpl_macro_tmp_791;
  chpl____wide__nilType chpl_macro_tmp_792;
  chpl____wide_object chpl_macro_tmp_793;
  chpl____wide_object chpl_macro_tmp_794;
  chpl____wide__nilType chpl_macro_tmp_795;
  chpl____wide_object chpl_macro_tmp_796;
  coerce_tmp_chpl3 = (lhs_chpl)->chpl_p;
  chpl_macro_tmp_791.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_791.addr = ((object_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_791;
  chpl_macro_tmp_792.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_792.addr = nil;
  chpl_macro_tmp_793.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_793.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_793;
  if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0)))))) {
    coerce_tmp_chpl5 = (rhs_chpl)->chpl_p;
    chpl_macro_tmp_794.locale = (&coerce_tmp_chpl5)->locale;
    chpl_macro_tmp_794.addr = ((object_chpl)((&coerce_tmp_chpl5)->addr));
    coerce_tmp_chpl6 = chpl_macro_tmp_794;
    chpl_macro_tmp_795.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_795.addr = nil;
    chpl_macro_tmp_796.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_796.addr = NULL;
    tmp_chpl17 = chpl_macro_tmp_796;
    tmp_chpl16 = (! (((&coerce_tmp_chpl6)->addr != (&tmp_chpl17)->addr) || ((!(! (&coerce_tmp_chpl6)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl6)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl17)->locale, INT64(0), INT32(0))))));
  } else {
    tmp_chpl16 = UINT8(false);
  }
  if (tmp_chpl16) {
    goto _end__ASSIGN__chpl;
  }
  call_tmp_chpl36 = release_chpl(rhs_chpl);
  retain_chpl2(lhs_chpl, call_tmp_chpl36);
  _end__ASSIGN__chpl:;
  return;
}

/* OwnedObject.chpl:440 */
static void chpl__autoDestroy8(_owned_DecodeError_chpl * x_chpl2) {
  _owned_DecodeError_chpl call_tmp_chpl36;
  call_tmp_chpl36 = *(x_chpl2);
  deinit_chpl22(&call_tmp_chpl36);
  return;
}

/* OwnedObject.chpl:440 */
static void chpl__autoDestroy19(_owned_Error_chpl2 * x_chpl2) {
  _owned_Error_chpl2 call_tmp_chpl36;
  call_tmp_chpl36 = *(x_chpl2);
  deinit_chpl21(&call_tmp_chpl36);
  return;
}

/* OwnedObject.chpl:440 */
static void chpl__autoDestroy15(_owned_BlockingIOError_chpl * x_chpl2) {
  _owned_BlockingIOError_chpl call_tmp_chpl36;
  call_tmp_chpl36 = *(x_chpl2);
  deinit_chpl20(&call_tmp_chpl36);
  return;
}

/* OwnedObject.chpl:440 */
static void chpl__autoDestroy26(_owned_ChildProcessError_chpl * x_chpl2) {
  _owned_ChildProcessError_chpl call_tmp_chpl36;
  call_tmp_chpl36 = *(x_chpl2);
  deinit_chpl18(&call_tmp_chpl36);
  return;
}

/* OwnedObject.chpl:440 */
static void chpl__autoDestroy12(_owned_BrokenPipeError_chpl * x_chpl2) {
  _owned_BrokenPipeError_chpl call_tmp_chpl36;
  call_tmp_chpl36 = *(x_chpl2);
  deinit_chpl23(&call_tmp_chpl36);
  return;
}

/* OwnedObject.chpl:440 */
static void chpl__autoDestroy17(_owned_ConnectionAbortedError_chpl * x_chpl2) {
  _owned_ConnectionAbortedError_chpl call_tmp_chpl36;
  call_tmp_chpl36 = *(x_chpl2);
  deinit_chpl24(&call_tmp_chpl36);
  return;
}

/* OwnedObject.chpl:440 */
static void chpl__autoDestroy21(_owned_ConnectionRefusedError_chpl * x_chpl2) {
  _owned_ConnectionRefusedError_chpl call_tmp_chpl36;
  call_tmp_chpl36 = *(x_chpl2);
  deinit_chpl25(&call_tmp_chpl36);
  return;
}

/* OwnedObject.chpl:440 */
static void chpl__autoDestroy4(_owned_ConnectionResetError_chpl * x_chpl2) {
  _owned_ConnectionResetError_chpl call_tmp_chpl36;
  call_tmp_chpl36 = *(x_chpl2);
  deinit_chpl26(&call_tmp_chpl36);
  return;
}

/* OwnedObject.chpl:440 */
static void chpl__autoDestroy25(_owned_FileExistsError_chpl * x_chpl2) {
  _owned_FileExistsError_chpl call_tmp_chpl36;
  call_tmp_chpl36 = *(x_chpl2);
  deinit_chpl27(&call_tmp_chpl36);
  return;
}

/* OwnedObject.chpl:440 */
static void chpl__autoDestroy22(_owned_FileNotFoundError_chpl * x_chpl2) {
  _owned_FileNotFoundError_chpl call_tmp_chpl36;
  call_tmp_chpl36 = *(x_chpl2);
  deinit_chpl28(&call_tmp_chpl36);
  return;
}

/* OwnedObject.chpl:440 */
static void chpl__autoDestroy20(_owned_InterruptedError_chpl * x_chpl2) {
  _owned_InterruptedError_chpl call_tmp_chpl36;
  call_tmp_chpl36 = *(x_chpl2);
  deinit_chpl19(&call_tmp_chpl36);
  return;
}

/* OwnedObject.chpl:440 */
static void chpl__autoDestroy13(_owned_IsADirectoryError_chpl * x_chpl2) {
  _owned_IsADirectoryError_chpl call_tmp_chpl36;
  call_tmp_chpl36 = *(x_chpl2);
  deinit_chpl29(&call_tmp_chpl36);
  return;
}

/* OwnedObject.chpl:440 */
static void chpl__autoDestroy9(_owned_NotADirectoryError_chpl * x_chpl2) {
  _owned_NotADirectoryError_chpl call_tmp_chpl36;
  call_tmp_chpl36 = *(x_chpl2);
  deinit_chpl30(&call_tmp_chpl36);
  return;
}

/* OwnedObject.chpl:440 */
static void chpl__autoDestroy6(_owned_PermissionError_chpl * x_chpl2) {
  _owned_PermissionError_chpl call_tmp_chpl36;
  call_tmp_chpl36 = *(x_chpl2);
  deinit_chpl32(&call_tmp_chpl36);
  return;
}

/* OwnedObject.chpl:440 */
static void chpl__autoDestroy14(_owned_ProcessLookupError_chpl * x_chpl2) {
  _owned_ProcessLookupError_chpl call_tmp_chpl36;
  call_tmp_chpl36 = *(x_chpl2);
  deinit_chpl33(&call_tmp_chpl36);
  return;
}

/* OwnedObject.chpl:440 */
static void chpl__autoDestroy10(_owned_TimeoutError_chpl * x_chpl2) {
  _owned_TimeoutError_chpl call_tmp_chpl36;
  call_tmp_chpl36 = *(x_chpl2);
  deinit_chpl35(&call_tmp_chpl36);
  return;
}

/* OwnedObject.chpl:440 */
static void chpl__autoDestroy27(_owned_EOFError_chpl * x_chpl2) {
  _owned_EOFError_chpl call_tmp_chpl36;
  call_tmp_chpl36 = *(x_chpl2);
  deinit_chpl36(&call_tmp_chpl36);
  return;
}

/* OwnedObject.chpl:440 */
static void chpl__autoDestroy16(_owned_UnexpectedEOFError_chpl * x_chpl2) {
  _owned_UnexpectedEOFError_chpl call_tmp_chpl36;
  call_tmp_chpl36 = *(x_chpl2);
  deinit_chpl37(&call_tmp_chpl36);
  return;
}

/* OwnedObject.chpl:440 */
static void chpl__autoDestroy5(_owned_BadFormatError_chpl * x_chpl2) {
  _owned_BadFormatError_chpl call_tmp_chpl36;
  call_tmp_chpl36 = *(x_chpl2);
  deinit_chpl39(&call_tmp_chpl36);
  return;
}

/* OwnedObject.chpl:440 */
static void chpl__autoDestroy18(_owned_IOError_chpl * x_chpl2) {
  _owned_IOError_chpl call_tmp_chpl36;
  call_tmp_chpl36 = *(x_chpl2);
  deinit_chpl40(&call_tmp_chpl36);
  return;
}

/* OwnedObject.chpl:440 */
static void chpl__autoDestroy24(_owned_SystemError_chpl * x_chpl2) {
  _owned_SystemError_chpl call_tmp_chpl36;
  call_tmp_chpl36 = *(x_chpl2);
  deinit_chpl41(&call_tmp_chpl36);
  return;
}

/* OwnedObject.chpl:440 */
static void chpl__autoDestroy11(_owned_IllegalArgumentError_chpl * x_chpl2) {
  _owned_IllegalArgumentError_chpl call_tmp_chpl36;
  call_tmp_chpl36 = *(x_chpl2);
  deinit_chpl38(&call_tmp_chpl36);
  return;
}

/* OwnedObject.chpl:440 */
static void chpl__autoDestroy23(_owned_CodepointSplittingError_chpl * x_chpl2) {
  _owned_CodepointSplittingError_chpl call_tmp_chpl36;
  call_tmp_chpl36 = *(x_chpl2);
  deinit_chpl31(&call_tmp_chpl36);
  return;
}

/* OwnedObject.chpl:440 */
static void chpl__autoDestroy7(_owned_TaskErrors_chpl * x_chpl2) {
  _owned_TaskErrors_chpl call_tmp_chpl36;
  call_tmp_chpl36 = *(x_chpl2);
  deinit_chpl34(&call_tmp_chpl36);
  return;
}

