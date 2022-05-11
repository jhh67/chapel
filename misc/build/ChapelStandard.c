/* ChapelStandard.chpl:24 */
void chpl__init_ChapelStandard(int64_t _ln,
                               int32_t _fn) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_ChapelStandard_p) {
    goto _exit_chpl__init_ChapelStandard_chpl;
  }
  printModuleInit_chpl("%*s\n", "ChapelStandard", INT64(14));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_ChapelStandard_p = UINT8(true);
  {
    chpl__init_CString(INT64(24), INT32(3));
    chpl__init_Bytes(INT64(24), INT32(3));
    chpl__init_String(INT64(24), INT32(3));
    chpl__init_OwnedObject(INT64(24), INT32(3));
    chpl__init_ChapelBase(INT64(24), INT32(3));
    chpl__init_Atomics(INT64(24), INT32(3));
    chpl__init_NetworkAtomics(INT64(24), INT32(3));
    chpl__init_ChapelThreads(INT64(24), INT32(3));
    chpl__init_ChapelTuple(INT64(24), INT32(3));
    chpl__init_ChapelRange(INT64(24), INT32(3));
    chpl__init_ChapelTaskDataHelp(INT64(24), INT32(3));
    chpl__init_LocaleModel(INT64(24), INT32(3));
    chpl__init_ChapelLocale(INT64(24), INT32(3));
    chpl__init_ChapelPrivatization(INT64(24), INT32(3));
    chpl__init_DefaultRectangular(INT64(24), INT32(3));
    chpl__init_LocalesArray(INT64(24), INT32(3));
    chpl__init_ChapelArray(INT64(24), INT32(3));
    chpl__init_ChapelDistribution(INT64(24), INT32(3));
    chpl__init_ChapelIO(INT64(24), INT32(3));
    chpl__init_LocaleTree(INT64(24), INT32(3));
    chpl__init_ChapelTaskTable(INT64(24), INT32(3));
    chpl__init_MemTracking(INT64(24), INT32(3));
    chpl__init_ChapelUtil(INT64(24), INT32(3));
    chpl__init_Errors(INT64(24), INT32(3));
    chpl__init_ChapelTaskData(INT64(24), INT32(3));
    chpl__init_ExportWrappers(INT64(24), INT32(3));
    chpl__init_Types(INT64(24), INT32(3));
    chpl__init_HaltWrappers(INT64(24), INT32(3));
    chpl__init_ChapelLocks(INT64(24), INT32(3));
    chpl__init_AlignedTSupport(INT64(24), INT32(3));
    chpl__init_MemConsistency(INT64(24), INT32(3));
    chpl__init_CTypes(INT64(24), INT32(3));
    chpl__init_DSIUtil(INT64(24), INT32(3));
    chpl__init_SysBasic(INT64(24), INT32(3));
    chpl__init_IO(INT64(24), INT32(3));
    chpl__init_ChapelHashtable(INT64(24), INT32(3));
    chpl__init_SysError(INT64(24), INT32(3));
    chpl__init_Sort(INT64(24), INT32(3));
    chpl__init_RangeChunk(INT64(24), INT32(3));
    chpl__init_CopyAggregation(INT64(24), INT32(3));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_ChapelStandard_chpl:;
  return;
}

