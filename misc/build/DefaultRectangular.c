/* DefaultRectangular.chpl:23 */
static void chpl__init_DefaultRectangular(int64_t _ln_chpl,
                                          int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  string_chpl local__str_literal_748_chpl;
  string_chpl local__str_literal_747_chpl;
  chpl_bool call_tmp_chpl36;
  c_string call_tmp_chpl37;
  chpl_bool call_tmp_chpl38;
  c_string call_tmp_chpl39;
  chpl_bool call_tmp_chpl40;
  c_string call_tmp_chpl41;
  DefaultDist_chpl new_temp_chpl = NULL;
  chpl_LocalSpinlock default_arg__domsLock_chpl;
  chpl_LocalSpinlock ret_chpl;
  chpl_LocalSpinlock _domsLock_chpl;
  _distribution_DefaultDist_chpl ret_tmp_chpl;
  if (chpl__init_DefaultRectangular_p) {
    goto _exit_chpl__init_DefaultRectangular_chpl;
  }
  printModuleInit_chpl("%*s\n", "DefaultRectangular", INT64(18));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_DefaultRectangular_p = UINT8(true);
  {
    chpl__init_HaltWrappers(INT64(23), INT32(28));
    chpl__init_DSIUtil(INT64(23), INT32(28));
    chpl__init_ChapelArray(INT64(23), INT32(28));
    chpl__init_ChapelDistribution(INT64(23), INT32(28));
    chpl__init_ChapelRange(INT64(23), INT32(28));
    chpl__init_SysBasic(INT64(23), INT32(28));
    chpl__init_SysError(INT64(23), INT32(28));
    chpl__init_CTypes(INT64(23), INT32(28));
    chpl__init_ChapelDebugPrint(INT64(23), INT32(28));
    chpl__init_ChapelLocks(INT64(23), INT32(28));
    chpl__init_OwnedObject(INT64(23), INT32(28));
    chpl__init_IO(INT64(23), INT32(28));
    chpl__init_ExternalArray(INT64(23), INT32(28));
    chpl__init_RangeChunk(INT64(23), INT32(28));
    chpl__init_ChapelBase(INT64(23), INT32(28));
    chpl__init_ChapelHashtable(INT64(23), INT32(28));
    chpl__init_Sort(INT64(23), INT32(28));
  }
  chpl_addModule("DefaultRectangular", ((c_fn_ptr)(chpl__deinit_DefaultRectangular)));
  local__str_literal_748_chpl = _str_literal_748_chpl /* "dataParMinGranularity must be > 0" */;
  local__str_literal_747_chpl = _str_literal_747_chpl /* "dataParTasksPerLocale must be >= 0" */;
  call_tmp_chpl36 = chpl_config_has_value("dataParTasksPerLocale", "Built-in");
  if (! call_tmp_chpl36) {
    tmp_chpl2 = INT64(0);
  } else {
    call_tmp_chpl37 = chpl_config_get_value("dataParTasksPerLocale", "Built-in");
    tmp_chpl2 = _command_line_cast_chpl14(call_tmp_chpl37);
  }
  dataParTasksPerLocale_chpl = tmp_chpl2;
  chpl_comm_broadcast_private(INT64(8), sizeof(int64_t));
  call_tmp_chpl38 = chpl_config_has_value("dataParIgnoreRunningTasks", "Built-in");
  if (! call_tmp_chpl38) {
    tmp_chpl3 = UINT8(false);
  } else {
    call_tmp_chpl39 = chpl_config_get_value("dataParIgnoreRunningTasks", "Built-in");
    tmp_chpl3 = _command_line_cast_chpl13(call_tmp_chpl39);
  }
  dataParIgnoreRunningTasks_chpl = tmp_chpl3;
  chpl_comm_broadcast_private(INT64(9), sizeof(chpl_bool));
  call_tmp_chpl40 = chpl_config_has_value("dataParMinGranularity", "Built-in");
  if (! call_tmp_chpl40) {
    tmp_chpl4 = INT64(1);
  } else {
    call_tmp_chpl41 = chpl_config_get_value("dataParMinGranularity", "Built-in");
    tmp_chpl4 = _command_line_cast_chpl4(call_tmp_chpl41);
  }
  dataParMinGranularity_chpl = tmp_chpl4;
  chpl_comm_broadcast_private(INT64(10), sizeof(int64_t));
  if (dataParTasksPerLocale_chpl < INT64(0)) {
    halt_chpl(&local__str_literal_747_chpl, INT64(30), INT32(28));
  }
  if (dataParMinGranularity_chpl <= INT64(0)) {
    halt_chpl(&local__str_literal_748_chpl, INT64(31), INT32(28));
  }
  init_chpl25(&_domsLock_chpl);
  ret_chpl = _domsLock_chpl;
  default_arg__domsLock_chpl = ret_chpl;
  new_temp_chpl = _new_chpl5(INT64(0), &default_arg__domsLock_chpl, UINT8(false), INT64(-1), INT64(139), INT32(28));
  call_tmp_chpl9 = new_temp_chpl;
  chpl__buildDistValue(call_tmp_chpl9, &ret_tmp_chpl);
  call_tmp_chpl10 = ret_tmp_chpl;
  defaultDist_chpl = call_tmp_chpl10;
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_DefaultRectangular_chpl:;
  return;
}

/* DefaultRectangular.chpl:23 */
static void chpl__deinit_DefaultRectangular(void) {
  chpl__autoDestroy(&defaultDist_chpl);
  return;
}

/* DefaultRectangular.chpl:97 */
static void chpl__auto_destroy_DefaultDist(chpl____wide_DefaultDist this_chpl7) {
  chpl____wide_BaseDist _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist chpl_macro_tmp_1149;
  chpl_macro_tmp_1149.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1149.addr = ((BaseDist_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_1149;
  deinit_chpl5(_parent_destructor_tmp__chpl);
  return;
}

/* DefaultRectangular.chpl:97 */
static DefaultDist_chpl _new_chpl5(int64_t _doms_containing_dist_chpl,
                                   chpl_LocalSpinlock * _domsLock_chpl,
                                   chpl_bool _free_when_no_doms_chpl,
                                   int64_t pid_chpl,
                                   int64_t _ln_chpl,
                                   int32_t _fn_chpl) {
  chpl_LocalSpinlock _formal_tmp__domsLock_chpl;
  DefaultDist_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  BaseDist_chpl super_tmp_chpl = NULL;
  _formal_tmp__domsLock_chpl = *(_domsLock_chpl);
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_DefaultDist_chpl_object), INT16(37), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((DefaultDist_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_DefaultDist_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_object_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_doms_containing_dist = _doms_containing_dist_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_domsLock = _formal_tmp__domsLock_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->_free_when_no_doms = _free_when_no_doms_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->pid = pid_chpl;
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_BaseDist_chpl;
  ((object_chpl)(((BaseDist_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_BaseDist_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_DefaultDist_chpl;
  return initTemp_chpl;
}

/* DefaultRectangular.chpl:98 */
static DefaultRectangularDom_1_int64_t_F_chpl dsiNewRectangularDom_chpl(chpl____wide_DefaultDist this_chpl7,
                                                                        _tuple_1_star_range_int64_t_bounded_F_chpl * inds_chpl) {
  DefaultRectangularDom_1_int64_t_F_chpl new_temp_chpl = NULL;
  DefaultRectangularDom_1_int64_t_F_chpl dom_chpl = NULL;
  new_temp_chpl = _new_chpl6(this_chpl7, INT64(100), INT32(28));
  dom_chpl = new_temp_chpl;
  chpl_check_nil(new_temp_chpl, INT64(102), INT32(28));
  dsiSetIndices_chpl(new_temp_chpl, inds_chpl);
  return dom_chpl;
}

/* DefaultRectangular.chpl:119 */
static DefaultDist_chpl dsiClone_chpl(DefaultDist_chpl this_chpl7) {
  return this_chpl7;
}

/* DefaultRectangular.chpl:127 */
static chpl_bool dsiTrackDomains_chpl2(chpl____wide_DefaultDist this_chpl7) {
  return UINT8(false);
}

/* DefaultRectangular.chpl:141 */
static void chpl_defaultDistInitPrivate(void) {
  DefaultDist_chpl ret_chpl = NULL;
  chpl____wide_DefaultDist tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultDist_chpl new_temp_chpl = NULL;
  chpl_LocalSpinlock default_arg__domsLock_chpl;
  chpl_LocalSpinlock ret_chpl2;
  chpl_LocalSpinlock _domsLock_chpl;
  _distribution_DefaultDist_chpl call_tmp_chpl36;
  _distribution_DefaultDist_chpl ret_tmp_chpl;
  _distribution_DefaultDist_chpl nd_chpl;
  _distribution_DefaultDist_chpl call_tmp_chpl37;
  _distribution_DefaultDist_chpl ret_tmp_chpl2;
  tmp_chpl15 = (&defaultDist_chpl)->_instance;
  ret_chpl = (&tmp_chpl15)->addr;
  if (((object_chpl)(ret_chpl)) == nil) {
    init_chpl25(&_domsLock_chpl);
    ret_chpl2 = _domsLock_chpl;
    default_arg__domsLock_chpl = ret_chpl2;
    new_temp_chpl = _new_chpl5(INT64(0), &default_arg__domsLock_chpl, UINT8(false), INT64(-1), INT64(149), INT32(28));
    chpl__buildDistValue(new_temp_chpl, &ret_tmp_chpl);
    call_tmp_chpl36 = ret_tmp_chpl;
    nd_chpl = call_tmp_chpl36;
    clone_chpl(&nd_chpl, &ret_tmp_chpl2);
    call_tmp_chpl37 = ret_tmp_chpl2;
    defaultDist_chpl = call_tmp_chpl37;
    chpl__autoDestroy(&nd_chpl);
  }
  return;
}

/* DefaultRectangular.chpl:155 */
static void chpl__auto_destroy_DefaultRectangularDom(chpl____wide_DefaultRectangularDom_1_int64_t_F this_chpl7) {
  chpl____wide_BaseRectangularDom_1_int64_t_F _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseRectangularDom_1_int64_t_F chpl_macro_tmp_1150;
  chpl_macro_tmp_1150.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1150.addr = ((BaseRectangularDom_1_int64_t_F_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_1150;
  deinit_chpl7(_parent_destructor_tmp__chpl);
  return;
}

/* DefaultRectangular.chpl:160 */
static chpl_bool dsiLinksDistribution_chpl2(chpl____wide_DefaultRectangularDom_1_int64_t_F this_chpl7) {
  return UINT8(false);
}

/* DefaultRectangular.chpl:165 */
static void init_chpl39(DefaultRectangularDom_1_int64_t_F_chpl this_chpl7,
                        chpl____wide_DefaultDist dist_chpl2) {
  BaseRectangularDom_1_int64_t_F_chpl super_tmp_chpl = NULL;
  _tuple_1_star_range_int64_t_bounded_F_chpl ret_tmp_chpl;
  range_int64_t_bounded_F_chpl tup_x0_chpl;
  range_int64_t_bounded_F_chpl elt_x0_chpl;
  chpl_check_nil(this_chpl7, INT64(165), INT32(28));
  super_tmp_chpl = &((this_chpl7)->super);
  chpl_check_nil(super_tmp_chpl, INT64(166), INT32(28));
  init_chpl10(super_tmp_chpl);
  ((object_chpl)(((BaseRectangularDom_1_int64_t_F_chpl)(this_chpl7))))->chpl__cid = chpl__cid_BaseRectangularDom_1_int64_t_F_chpl;
  chpl_check_nil(this_chpl7, INT64(167), INT32(28));
  (this_chpl7)->dist = dist_chpl2;
  init_chpl32(&elt_x0_chpl);
  tup_x0_chpl = elt_x0_chpl;
  *(ret_tmp_chpl + INT64(0)) = tup_x0_chpl;
  chpl_check_nil(this_chpl7, INT64(165), INT32(28));
  *((this_chpl7)->ranges + INT64(0)) = *(ret_tmp_chpl + INT64(0));
  ((object_chpl)(this_chpl7))->chpl__cid = chpl__cid_DefaultRectangularDom_1_int64_t_F_chpl;
  return;
}

/* DefaultRectangular.chpl:165 */
static DefaultRectangularDom_1_int64_t_F_chpl _new_chpl6(chpl____wide_DefaultDist dist_chpl2,
                                                         int64_t _ln_chpl,
                                                         int32_t _fn_chpl) {
  DefaultRectangularDom_1_int64_t_F_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  DefaultRectangularDom_1_int64_t_F_chpl tmp_chpl15 = NULL;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_DefaultRectangularDom_1_int64_t_F_chpl_object), INT16(38), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((DefaultRectangularDom_1_int64_t_F_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_DefaultRectangularDom_1_int64_t_F_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  init_chpl39(initTemp_chpl, dist_chpl2);
  tmp_chpl15 = initTemp_chpl;
  return tmp_chpl15;
}

/* DefaultRectangular.chpl:174 */
static chpl____wide_DefaultDist dsiMyDist_chpl2(chpl____wide_DefaultRectangularDom_1_int64_t_F this_chpl7) {
  chpl____wide_DefaultDist ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_DefaultDist chpl_macro_tmp_1151;
  chpl_check_nil((&this_chpl7)->addr, INT64(175), INT32(28));
  chpl_macro_tmp_1151.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1151.addr = &(((&this_chpl7)->addr)->dist);
  chpl_gen_comm_get(((void*)(&ret_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_1151).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1151).addr, sizeof(chpl____wide_DefaultDist), COMMID(0), INT64(175), INT64(28));
  return ret_chpl;
}

/* DefaultRectangular.chpl:179 */
static void init_chpl40(_serialized_domain_1_int64_t_F__tuple_1_star_range_int64_t_bounded_F_T_chpl * this_chpl7,
                        _tuple_1_star_range_int64_t_bounded_F_chpl * dims_chpl2) {
  _tuple_1_star_range_int64_t_bounded_F_chpl _formal_tmp_dims_chpl;
  *(_formal_tmp_dims_chpl + INT64(0)) = *(*(dims_chpl2) + INT64(0));
  *((this_chpl7)->dims + INT64(0)) = *(_formal_tmp_dims_chpl + INT64(0));
  return;
}

/* DefaultRectangular.chpl:187 */
static void chpl__serialize2(DefaultRectangularDom_1_int64_t_F_chpl this_chpl7,
                             _serialized_domain_1_int64_t_F__tuple_1_star_range_int64_t_bounded_F_T_chpl * _retArg_chpl) {
  _tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl36;
  _tuple_1_star_range_int64_t_bounded_F_chpl ret_tmp_chpl;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _serialized_domain_1_int64_t_F__tuple_1_star_range_int64_t_bounded_F_T_chpl call_tmp_chpl37;
  _serialized_domain_1_int64_t_F__tuple_1_star_range_int64_t_bounded_F_T_chpl initTemp_chpl;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1152;
  chpl_macro_tmp_1152.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1152.addr = this_chpl7;
  tmp_chpl15 = chpl_macro_tmp_1152;
  chpl_check_nil((&tmp_chpl15)->addr, INT64(188), INT32(28));
  dsiDims_chpl(tmp_chpl15, &ret_tmp_chpl);
  *(call_tmp_chpl36 + INT64(0)) = *(ret_tmp_chpl + INT64(0));
  init_chpl40(&initTemp_chpl, &call_tmp_chpl36);
  call_tmp_chpl37 = initTemp_chpl;
  *(_retArg_chpl) = call_tmp_chpl37;
  return;
}

/* DefaultRectangular.chpl:191 */
static DefaultRectangularDom_1_int64_t_F_chpl chpl__deserialize2(_serialized_domain_1_int64_t_F__tuple_1_star_range_int64_t_bounded_F_T_chpl * data_chpl) {
  _ref__tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl36 = NULL;
  DefaultRectangularDom_1_int64_t_F_chpl call_tmp_chpl37 = NULL;
  call_tmp_chpl36 = &((data_chpl)->dims);
  call_tmp_chpl37 = newRectangularDom_chpl(&defaultDist_chpl, call_tmp_chpl36, UINT8(false));
  return call_tmp_chpl37;
}

/* DefaultRectangular.chpl:204 */
static void dsiGetIndices_chpl(DefaultRectangularDom_1_int64_t_F_chpl this_chpl7,
                               _tuple_1_star_range_int64_t_bounded_F_chpl * _retArg_chpl) {
  _tuple_1_star_range_int64_t_bounded_F_chpl ret_chpl;
  _tuple_1_star_range_int64_t_bounded_F_chpl tmp_chpl15;
  chpl_check_nil(this_chpl7, INT64(204), INT32(28));
  *(tmp_chpl15 + INT64(0)) = *((this_chpl7)->ranges + INT64(0));
  *(ret_chpl + INT64(0)) = *(tmp_chpl15 + INT64(0));
  *(*(_retArg_chpl) + INT64(0)) = *(ret_chpl + INT64(0));
  return;
}

/* DefaultRectangular.chpl:206 */
static void dsiSetIndices_chpl(DefaultRectangularDom_1_int64_t_F_chpl this_chpl7,
                               _tuple_1_star_range_int64_t_bounded_F_chpl * x_chpl2) {
  _ref__tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl36 = NULL;
  chpl_check_nil(this_chpl7, INT64(207), INT32(28));
  call_tmp_chpl36 = &((this_chpl7)->ranges);
  *(*(call_tmp_chpl36) + INT64(0)) = *(*(x_chpl2) + INT64(0));
  return;
}

/* DefaultRectangular.chpl:210 */
static void dsiAssignDomain_chpl(DefaultRectangularDom_1_int64_t_F_chpl this_chpl7,
                                 _domain_DefaultRectangularDom_1_int64_t_F_chpl * rhs_chpl,
                                 chpl_bool lhsPrivate_chpl) {
  chpl_assignDomainWithGetSetIndices(this_chpl7, rhs_chpl);
  return;
}

/* DefaultRectangular.chpl:549 */
static chpl_bool dsiMember_chpl(chpl____wide_DefaultRectangularDom_1_int64_t_F this_chpl7,
                                _tuple_1_star_int64_t_chpl * ind_chpl) {
  chpl_bool ret_chpl;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl coerce_tmp_chpl3;
  int64_t coerce_tmp_chpl4;
  chpl_bool ret_chpl2;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1153;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_1154;
  chpl_check_nil((&this_chpl7)->addr, INT64(551), INT32(28));
  chpl_macro_tmp_1153.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1153.addr = &(((&this_chpl7)->addr)->ranges);
  call_tmp_chpl36 = chpl_macro_tmp_1153;
  chpl_macro_tmp_1154.locale = (call_tmp_chpl36).locale;
  chpl_macro_tmp_1154.addr = (*((call_tmp_chpl36).addr) + INT64(0));
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID((chpl_macro_tmp_1154).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1154).addr, sizeof(range_int64_t_bounded_F_chpl), COMMID(1), INT64(551), INT64(28));
  coerce_tmp_chpl4 = *(*(ind_chpl) + INT64(0));
  if (coerce_tmp_chpl4 > (&coerce_tmp_chpl3)->_high) {
    ret_chpl2 = UINT8(false);
    goto _end_contains_chpl;
  }
  if (coerce_tmp_chpl4 < (&coerce_tmp_chpl3)->_low) {
    ret_chpl2 = UINT8(false);
    goto _end_contains_chpl;
  }
  ret_chpl2 = UINT8(true);
  _end_contains_chpl:;
  if (! ret_chpl2) {
    ret_chpl = UINT8(false);
    goto _end_dsiMember_chpl;
  }
  ret_chpl = UINT8(true);
  _end_dsiMember_chpl:;
  return ret_chpl;
}

/* DefaultRectangular.chpl:569 */
static void dsiDims_chpl(chpl____wide_DefaultRectangularDom_1_int64_t_F this_chpl7,
                         _tuple_1_star_range_int64_t_bounded_F_chpl * _retArg_chpl) {
  _tuple_1_star_range_int64_t_bounded_F_chpl ret_chpl;
  _tuple_1_star_range_int64_t_bounded_F_chpl tmp_chpl15;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1155;
  chpl_check_nil((&this_chpl7)->addr, INT64(570), INT32(28));
  chpl_macro_tmp_1155.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1155.addr = &(((&this_chpl7)->addr)->ranges);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1155).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1155).addr, sizeof(_tuple_1_star_range_int64_t_bounded_F_chpl), COMMID(2), INT64(570), INT64(28));
  *(ret_chpl + INT64(0)) = *(tmp_chpl15 + INT64(0));
  *(*(_retArg_chpl) + INT64(0)) = *(ret_chpl + INT64(0));
  return;
}

/* DefaultRectangular.chpl:572 */
static void dsiDim_chpl(chpl____wide_DefaultRectangularDom_1_int64_t_F this_chpl7,
                        int64_t d_chpl,
                        range_int64_t_bounded_F_chpl * _retArg_chpl) {
  range_int64_t_bounded_F_chpl ret_chpl;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F call_tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1156;
  chpl_check_nil((&this_chpl7)->addr, INT64(573), INT32(28));
  chpl_macro_tmp_1156.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1156.addr = &(((&this_chpl7)->addr)->ranges);
  call_tmp_chpl37 = chpl_macro_tmp_1156;
  call_tmp_chpl36 = this_chpl5(call_tmp_chpl37, d_chpl);
  chpl_gen_comm_get(((void*)(&ret_chpl)), chpl_nodeFromLocaleID((call_tmp_chpl36).locale, INT64(0), INT32(0)), (call_tmp_chpl36).addr, sizeof(range_int64_t_bounded_F_chpl), COMMID(3), INT64(573), INT64(28));
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* DefaultRectangular.chpl:577 */
static void dsiDim_chpl2(chpl____wide_DefaultRectangularDom_1_int64_t_F this_chpl7,
                         range_int64_t_bounded_F_chpl * _retArg_chpl) {
  range_int64_t_bounded_F_chpl ret_chpl;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1157;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_1158;
  chpl_check_nil((&this_chpl7)->addr, INT64(578), INT32(28));
  chpl_macro_tmp_1157.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1157.addr = &(((&this_chpl7)->addr)->ranges);
  call_tmp_chpl36 = chpl_macro_tmp_1157;
  chpl_macro_tmp_1158.locale = (call_tmp_chpl36).locale;
  chpl_macro_tmp_1158.addr = (*((call_tmp_chpl36).addr) + INT64(0));
  chpl_gen_comm_get(((void*)(&ret_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_1158).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1158).addr, sizeof(range_int64_t_bounded_F_chpl), COMMID(4), INT64(578), INT64(28));
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* DefaultRectangular.chpl:580 */
static int64_t dsiNumIndices_chpl(chpl____wide_DefaultRectangularDom_1_int64_t_F this_chpl7) {
  int64_t ret_chpl;
  int64_t sum_chpl;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl37;
  range_int64_t_bounded_F_chpl coerce_tmp_chpl3;
  _ref_int64_t_chpl i_lhs_chpl = NULL;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1159;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_1160;
  sum_chpl = INT64(1);
  chpl_check_nil((&this_chpl7)->addr, INT64(583), INT32(28));
  chpl_macro_tmp_1159.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1159.addr = &(((&this_chpl7)->addr)->ranges);
  call_tmp_chpl36 = chpl_macro_tmp_1159;
  chpl_macro_tmp_1160.locale = (call_tmp_chpl36).locale;
  chpl_macro_tmp_1160.addr = (*((call_tmp_chpl36).addr) + INT64(0));
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID((chpl_macro_tmp_1160).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1160).addr, sizeof(range_int64_t_bounded_F_chpl), COMMID(5), INT64(583), INT64(28));
  call_tmp_chpl37 = sizeAs_chpl3(coerce_tmp_chpl3);
  i_lhs_chpl = &sum_chpl;
  *(i_lhs_chpl) *= call_tmp_chpl37;
  ret_chpl = sum_chpl;
  return ret_chpl;
}

/* DefaultRectangular.chpl:588 */
static int64_t dsiLow_chpl(chpl____wide_DefaultRectangularDom_1_int64_t_F this_chpl7) {
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl coerce_tmp_chpl3;
  int64_t coerce_tmp_chpl4;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1161;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_1162;
  chpl_check_nil((&this_chpl7)->addr, INT64(590), INT32(28));
  chpl_macro_tmp_1161.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1161.addr = &(((&this_chpl7)->addr)->ranges);
  call_tmp_chpl36 = chpl_macro_tmp_1161;
  chpl_macro_tmp_1162.locale = (call_tmp_chpl36).locale;
  chpl_macro_tmp_1162.addr = (*((call_tmp_chpl36).addr) + INT64(0));
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID((chpl_macro_tmp_1162).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1162).addr, sizeof(range_int64_t_bounded_F_chpl), COMMID(6), INT64(590), INT64(28));
  coerce_tmp_chpl4 = (&coerce_tmp_chpl3)->_low;
  return coerce_tmp_chpl4;
}

/* DefaultRectangular.chpl:632 */
static int64_t dsiStride_chpl(chpl____wide_DefaultRectangularDom_1_int64_t_F this_chpl7) {
  return INT64(1);
}

/* DefaultRectangular.chpl:676 */
static DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl dsiBuildArray_chpl(chpl____wide_DefaultRectangularDom_1_int64_t_F this_chpl7) {
  DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl new_temp_chpl = NULL;
  _ddata_locale_chpl tmp_chpl15 = NULL;
  c_void_ptr tmp_chpl16;
  tmp_chpl15 = ((_ddata_locale_chpl)(nil));
  tmp_chpl16 = ((c_void_ptr)(nil));
  new_temp_chpl = _new_chpl8(this_chpl7, tmp_chpl15, UINT8(false), UINT8(false), tmp_chpl16, INT64(677), INT32(28));
  return new_temp_chpl;
}

/* DefaultRectangular.chpl:994 */
static void chpl__auto_destroy_DefaultRectangularArr2(chpl____wide_DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t this_chpl7) {
  chpl____wide_BaseRectangularArr_1_int64_t_F_uint64_t _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseRectangularArr_1_int64_t_F_uint64_t chpl_macro_tmp_1163;
  chpl_macro_tmp_1163.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1163.addr = ((BaseRectangularArr_1_int64_t_F_uint64_t_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_1163;
  deinit_chpl10(_parent_destructor_tmp__chpl);
  return;
}

/* DefaultRectangular.chpl:994 */
static void chpl__auto_destroy_DefaultRectangularArr(chpl____wide_DefaultRectangularArr_1_int64_t_F_int64_t_int64_t this_chpl7) {
  chpl____wide_BaseRectangularArr_1_int64_t_F_int64_t _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseRectangularArr_1_int64_t_F_int64_t chpl_macro_tmp_1164;
  chpl_macro_tmp_1164.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1164.addr = ((BaseRectangularArr_1_int64_t_F_int64_t_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_1164;
  deinit_chpl11(_parent_destructor_tmp__chpl);
  return;
}

/* DefaultRectangular.chpl:994 */
static void chpl__auto_destroy_DefaultRectangularArr3(chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t this_chpl7) {
  chpl____wide_BaseRectangularArr_1_int64_t_F_locale _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseRectangularArr_1_int64_t_F_locale chpl_macro_tmp_1165;
  chpl_macro_tmp_1165.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1165.addr = ((BaseRectangularArr_1_int64_t_F_locale_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_1165;
  deinit_chpl12(_parent_destructor_tmp__chpl);
  return;
}

/* DefaultRectangular.chpl:1030 */
static void init_chpl42(DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl this_chpl7,
                        chpl____wide_DefaultRectangularDom_1_int64_t_F dom_chpl,
                        _ddata_locale_chpl data_chpl,
                        chpl_bool externArr_chpl,
                        chpl_bool _borrowed_chpl,
                        c_void_ptr externFreeFunc_chpl) {
  BaseRectangularArr_1_int64_t_F_locale_chpl super_tmp_chpl = NULL;
  BaseArr_chpl prev_chpl = NULL;
  BaseArr_chpl next_chpl = NULL;
  chpl_ddataResizePolicy _resizePolicy_chpl;
  _tuple_1_star_int64_t_chpl ret_tmp_chpl;
  _tuple_1_star_int64_t_chpl ret_tmp_chpl2;
  _tuple_1_star_int64_t_chpl ret_tmp_chpl3;
  _tuple_1_star_int64_t_chpl ret_tmp_chpl4;
  chpl____wide__ddata_locale tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _ddata_locale_chpl shiftedData_chpl = NULL;
  chpl____wide__ddata_locale tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_locale chpl_macro_tmp_1166;
  chpl____wide__ddata_locale chpl_macro_tmp_1167;
  chpl_check_nil(this_chpl7, INT64(1030), INT32(28));
  super_tmp_chpl = &((this_chpl7)->super);
  prev_chpl = ((BaseArr_chpl)(nil));
  next_chpl = ((BaseArr_chpl)(nil));
  _resizePolicy_chpl = chpl_ddataResizePolicy_normalInit_chpl;
  chpl_check_nil(super_tmp_chpl, INT64(1039), INT32(28));
  init_chpl12(super_tmp_chpl, prev_chpl, next_chpl, INT64(-1), UINT8(false), _resizePolicy_chpl);
  ((object_chpl)(((BaseRectangularArr_1_int64_t_F_locale_chpl)(this_chpl7))))->chpl__cid = chpl__cid_BaseRectangularArr_1_int64_t_F_locale_chpl;
  chpl_check_nil(this_chpl7, INT64(1041), INT32(28));
  (this_chpl7)->dom = dom_chpl;
  *(ret_tmp_chpl + INT64(0)) = INT64(0);
  chpl_check_nil(this_chpl7, INT64(1042), INT32(28));
  *((this_chpl7)->off + INT64(0)) = *(ret_tmp_chpl + INT64(0));
  *(ret_tmp_chpl2 + INT64(0)) = INT64(0);
  chpl_check_nil(this_chpl7, INT64(1042), INT32(28));
  *((this_chpl7)->blk + INT64(0)) = *(ret_tmp_chpl2 + INT64(0));
  *(ret_tmp_chpl3 + INT64(0)) = INT64(0);
  chpl_check_nil(this_chpl7, INT64(1042), INT32(28));
  *((this_chpl7)->sizesPerDim + INT64(0)) = *(ret_tmp_chpl3 + INT64(0));
  *(ret_tmp_chpl4 + INT64(0)) = INT64(0);
  chpl_check_nil(this_chpl7, INT64(1042), INT32(28));
  *((this_chpl7)->str + INT64(0)) = *(ret_tmp_chpl4 + INT64(0));
  chpl_check_nil(this_chpl7, INT64(1042), INT32(28));
  (this_chpl7)->factoredOffs = INT64(0);
  chpl_macro_tmp_1166.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1166.addr = data_chpl;
  tmp_chpl15 = chpl_macro_tmp_1166;
  chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0)), INT64(1042), INT32(28), "cannot access remote data in local block");
  chpl_check_nil(this_chpl7, INT64(1042), INT32(28));
  (this_chpl7)->data = tmp_chpl15;
  shiftedData_chpl = ((_ddata_locale_chpl)(nil));
  chpl_macro_tmp_1167.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1167.addr = shiftedData_chpl;
  tmp_chpl16 = chpl_macro_tmp_1167;
  chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl16)->locale, INT64(0), INT32(0)), INT64(1043), INT32(28), "cannot access remote data in local block");
  chpl_check_nil(this_chpl7, INT64(1043), INT32(28));
  (this_chpl7)->shiftedData = tmp_chpl16;
  chpl_check_nil(this_chpl7, INT64(1043), INT32(28));
  (this_chpl7)->externFreeFunc = externFreeFunc_chpl;
  chpl_check_nil(this_chpl7, INT64(1044), INT32(28));
  (this_chpl7)->externArr = externArr_chpl;
  chpl_check_nil(this_chpl7, INT64(1045), INT32(28));
  (this_chpl7)->_borrowed = _borrowed_chpl;
  chpl_check_nil(this_chpl7, INT64(1046), INT32(28));
  (this_chpl7)->callPostAlloc = UINT8(false);
  chpl_check_nil(this_chpl7, INT64(1047), INT32(28));
  (this_chpl7)->deinitElts = UINT8(true);
  ((object_chpl)(this_chpl7))->chpl__cid = chpl__cid_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl;
  chpl_check_nil(this_chpl7, INT64(1050), INT32(28));
  setupFieldsAndAllocate_chpl2(this_chpl7);
  return;
}

/* DefaultRectangular.chpl:1030 */
static void init_chpl41(DefaultRectangularArr_1_int64_t_F_int64_t_int64_t_chpl this_chpl7,
                        DefaultRectangularDom_1_int64_t_F_chpl dom_chpl,
                        _ddata_int64_t_chpl data_chpl,
                        chpl_bool externArr_chpl,
                        chpl_bool _borrowed_chpl,
                        c_void_ptr externFreeFunc_chpl) {
  BaseRectangularArr_1_int64_t_F_int64_t_chpl super_tmp_chpl = NULL;
  BaseArr_chpl prev_chpl = NULL;
  BaseArr_chpl next_chpl = NULL;
  chpl_ddataResizePolicy _resizePolicy_chpl;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t_chpl ret_tmp_chpl;
  _tuple_1_star_int64_t_chpl ret_tmp_chpl2;
  _tuple_1_star_int64_t_chpl ret_tmp_chpl3;
  _tuple_1_star_int64_t_chpl ret_tmp_chpl4;
  chpl____wide__ddata_int64_t tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ddata_int64_t_chpl shiftedData_chpl = NULL;
  chpl____wide__ddata_int64_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1168;
  chpl____wide__ddata_int64_t chpl_macro_tmp_1169;
  chpl____wide__ddata_int64_t chpl_macro_tmp_1170;
  chpl_check_nil(this_chpl7, INT64(1030), INT32(28));
  super_tmp_chpl = &((this_chpl7)->super);
  prev_chpl = ((BaseArr_chpl)(nil));
  next_chpl = ((BaseArr_chpl)(nil));
  _resizePolicy_chpl = chpl_ddataResizePolicy_normalInit_chpl;
  chpl_check_nil(super_tmp_chpl, INT64(1039), INT32(28));
  init_chpl13(super_tmp_chpl, prev_chpl, next_chpl, INT64(-1), UINT8(false), _resizePolicy_chpl);
  ((object_chpl)(((BaseRectangularArr_1_int64_t_F_int64_t_chpl)(this_chpl7))))->chpl__cid = chpl__cid_BaseRectangularArr_1_int64_t_F_int64_t_chpl;
  chpl_macro_tmp_1168.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1168.addr = dom_chpl;
  tmp_chpl15 = chpl_macro_tmp_1168;
  chpl_check_nil(this_chpl7, INT64(1041), INT32(28));
  (this_chpl7)->dom = tmp_chpl15;
  *(ret_tmp_chpl + INT64(0)) = INT64(0);
  chpl_check_nil(this_chpl7, INT64(1042), INT32(28));
  *((this_chpl7)->off + INT64(0)) = *(ret_tmp_chpl + INT64(0));
  *(ret_tmp_chpl2 + INT64(0)) = INT64(0);
  chpl_check_nil(this_chpl7, INT64(1042), INT32(28));
  *((this_chpl7)->blk + INT64(0)) = *(ret_tmp_chpl2 + INT64(0));
  *(ret_tmp_chpl3 + INT64(0)) = INT64(0);
  chpl_check_nil(this_chpl7, INT64(1042), INT32(28));
  *((this_chpl7)->sizesPerDim + INT64(0)) = *(ret_tmp_chpl3 + INT64(0));
  *(ret_tmp_chpl4 + INT64(0)) = INT64(0);
  chpl_check_nil(this_chpl7, INT64(1042), INT32(28));
  *((this_chpl7)->str + INT64(0)) = *(ret_tmp_chpl4 + INT64(0));
  chpl_check_nil(this_chpl7, INT64(1042), INT32(28));
  (this_chpl7)->factoredOffs = INT64(0);
  chpl_macro_tmp_1169.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1169.addr = data_chpl;
  tmp_chpl16 = chpl_macro_tmp_1169;
  chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl16)->locale, INT64(0), INT32(0)), INT64(1042), INT32(28), "cannot access remote data in local block");
  chpl_check_nil(this_chpl7, INT64(1042), INT32(28));
  (this_chpl7)->data = tmp_chpl16;
  shiftedData_chpl = ((_ddata_int64_t_chpl)(nil));
  chpl_macro_tmp_1170.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1170.addr = shiftedData_chpl;
  tmp_chpl17 = chpl_macro_tmp_1170;
  chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl17)->locale, INT64(0), INT32(0)), INT64(1043), INT32(28), "cannot access remote data in local block");
  chpl_check_nil(this_chpl7, INT64(1043), INT32(28));
  (this_chpl7)->shiftedData = tmp_chpl17;
  chpl_check_nil(this_chpl7, INT64(1043), INT32(28));
  (this_chpl7)->externFreeFunc = externFreeFunc_chpl;
  chpl_check_nil(this_chpl7, INT64(1044), INT32(28));
  (this_chpl7)->externArr = externArr_chpl;
  chpl_check_nil(this_chpl7, INT64(1045), INT32(28));
  (this_chpl7)->_borrowed = _borrowed_chpl;
  chpl_check_nil(this_chpl7, INT64(1046), INT32(28));
  (this_chpl7)->callPostAlloc = UINT8(false);
  chpl_check_nil(this_chpl7, INT64(1047), INT32(28));
  (this_chpl7)->deinitElts = UINT8(true);
  ((object_chpl)(this_chpl7))->chpl__cid = chpl__cid_DefaultRectangularArr_1_int64_t_F_int64_t_int64_t_chpl;
  chpl_check_nil(this_chpl7, INT64(1050), INT32(28));
  setupFieldsAndAllocate_chpl(this_chpl7);
  return;
}

/* DefaultRectangular.chpl:1030 */
static void init_chpl43(DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t_chpl this_chpl7,
                        DefaultRectangularDom_1_int64_t_F_chpl dom_chpl,
                        _ddata_uint64_t_chpl data_chpl,
                        chpl_bool externArr_chpl,
                        chpl_bool _borrowed_chpl,
                        c_void_ptr externFreeFunc_chpl) {
  BaseRectangularArr_1_int64_t_F_uint64_t_chpl super_tmp_chpl = NULL;
  BaseArr_chpl prev_chpl = NULL;
  BaseArr_chpl next_chpl = NULL;
  chpl_ddataResizePolicy _resizePolicy_chpl;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t_chpl ret_tmp_chpl;
  _tuple_1_star_int64_t_chpl ret_tmp_chpl2;
  _tuple_1_star_int64_t_chpl ret_tmp_chpl3;
  _tuple_1_star_int64_t_chpl ret_tmp_chpl4;
  chpl____wide__ddata_uint64_t tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ddata_uint64_t_chpl shiftedData_chpl = NULL;
  chpl____wide__ddata_uint64_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1171;
  chpl____wide__ddata_uint64_t chpl_macro_tmp_1172;
  chpl____wide__ddata_uint64_t chpl_macro_tmp_1173;
  chpl_check_nil(this_chpl7, INT64(1030), INT32(28));
  super_tmp_chpl = &((this_chpl7)->super);
  prev_chpl = ((BaseArr_chpl)(nil));
  next_chpl = ((BaseArr_chpl)(nil));
  _resizePolicy_chpl = chpl_ddataResizePolicy_normalInit_chpl;
  chpl_check_nil(super_tmp_chpl, INT64(1039), INT32(28));
  init_chpl14(super_tmp_chpl, prev_chpl, next_chpl, INT64(-1), UINT8(false), _resizePolicy_chpl);
  ((object_chpl)(((BaseRectangularArr_1_int64_t_F_uint64_t_chpl)(this_chpl7))))->chpl__cid = chpl__cid_BaseRectangularArr_1_int64_t_F_uint64_t_chpl;
  chpl_macro_tmp_1171.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1171.addr = dom_chpl;
  tmp_chpl15 = chpl_macro_tmp_1171;
  chpl_check_nil(this_chpl7, INT64(1041), INT32(28));
  (this_chpl7)->dom = tmp_chpl15;
  *(ret_tmp_chpl + INT64(0)) = INT64(0);
  chpl_check_nil(this_chpl7, INT64(1042), INT32(28));
  *((this_chpl7)->off + INT64(0)) = *(ret_tmp_chpl + INT64(0));
  *(ret_tmp_chpl2 + INT64(0)) = INT64(0);
  chpl_check_nil(this_chpl7, INT64(1042), INT32(28));
  *((this_chpl7)->blk + INT64(0)) = *(ret_tmp_chpl2 + INT64(0));
  *(ret_tmp_chpl3 + INT64(0)) = INT64(0);
  chpl_check_nil(this_chpl7, INT64(1042), INT32(28));
  *((this_chpl7)->sizesPerDim + INT64(0)) = *(ret_tmp_chpl3 + INT64(0));
  *(ret_tmp_chpl4 + INT64(0)) = INT64(0);
  chpl_check_nil(this_chpl7, INT64(1042), INT32(28));
  *((this_chpl7)->str + INT64(0)) = *(ret_tmp_chpl4 + INT64(0));
  chpl_check_nil(this_chpl7, INT64(1042), INT32(28));
  (this_chpl7)->factoredOffs = INT64(0);
  chpl_macro_tmp_1172.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1172.addr = data_chpl;
  tmp_chpl16 = chpl_macro_tmp_1172;
  chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl16)->locale, INT64(0), INT32(0)), INT64(1042), INT32(28), "cannot access remote data in local block");
  chpl_check_nil(this_chpl7, INT64(1042), INT32(28));
  (this_chpl7)->data = tmp_chpl16;
  shiftedData_chpl = ((_ddata_uint64_t_chpl)(nil));
  chpl_macro_tmp_1173.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1173.addr = shiftedData_chpl;
  tmp_chpl17 = chpl_macro_tmp_1173;
  chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl17)->locale, INT64(0), INT32(0)), INT64(1043), INT32(28), "cannot access remote data in local block");
  chpl_check_nil(this_chpl7, INT64(1043), INT32(28));
  (this_chpl7)->shiftedData = tmp_chpl17;
  chpl_check_nil(this_chpl7, INT64(1043), INT32(28));
  (this_chpl7)->externFreeFunc = externFreeFunc_chpl;
  chpl_check_nil(this_chpl7, INT64(1044), INT32(28));
  (this_chpl7)->externArr = externArr_chpl;
  chpl_check_nil(this_chpl7, INT64(1045), INT32(28));
  (this_chpl7)->_borrowed = _borrowed_chpl;
  chpl_check_nil(this_chpl7, INT64(1046), INT32(28));
  (this_chpl7)->callPostAlloc = UINT8(false);
  chpl_check_nil(this_chpl7, INT64(1047), INT32(28));
  (this_chpl7)->deinitElts = UINT8(true);
  ((object_chpl)(this_chpl7))->chpl__cid = chpl__cid_DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t_chpl;
  chpl_check_nil(this_chpl7, INT64(1050), INT32(28));
  setupFieldsAndAllocate_chpl3(this_chpl7);
  return;
}

/* DefaultRectangular.chpl:1030 */
static DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t_chpl _new_chpl9(DefaultRectangularDom_1_int64_t_F_chpl dom_chpl,
                                                                          _ddata_uint64_t_chpl data_chpl,
                                                                          chpl_bool externArr_chpl,
                                                                          chpl_bool _borrowed_chpl,
                                                                          c_void_ptr externFreeFunc_chpl,
                                                                          int64_t _ln_chpl,
                                                                          int32_t _fn_chpl) {
  DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t_chpl tmp_chpl15 = NULL;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t_chpl_object), INT16(60), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  init_chpl43(initTemp_chpl, dom_chpl, data_chpl, externArr_chpl, _borrowed_chpl, externFreeFunc_chpl);
  tmp_chpl15 = initTemp_chpl;
  return tmp_chpl15;
}

/* DefaultRectangular.chpl:1030 */
static DefaultRectangularArr_1_int64_t_F_int64_t_int64_t_chpl _new_chpl7(DefaultRectangularDom_1_int64_t_F_chpl dom_chpl,
                                                                         _ddata_int64_t_chpl data_chpl,
                                                                         chpl_bool externArr_chpl,
                                                                         chpl_bool _borrowed_chpl,
                                                                         c_void_ptr externFreeFunc_chpl,
                                                                         int64_t _ln_chpl,
                                                                         int32_t _fn_chpl) {
  DefaultRectangularArr_1_int64_t_F_int64_t_int64_t_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  DefaultRectangularArr_1_int64_t_F_int64_t_int64_t_chpl tmp_chpl15 = NULL;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_DefaultRectangularArr_1_int64_t_F_int64_t_int64_t_chpl_object), INT16(57), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((DefaultRectangularArr_1_int64_t_F_int64_t_int64_t_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_DefaultRectangularArr_1_int64_t_F_int64_t_int64_t_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  init_chpl41(initTemp_chpl, dom_chpl, data_chpl, externArr_chpl, _borrowed_chpl, externFreeFunc_chpl);
  tmp_chpl15 = initTemp_chpl;
  return tmp_chpl15;
}

/* DefaultRectangular.chpl:1030 */
static DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl _new_chpl8(chpl____wide_DefaultRectangularDom_1_int64_t_F dom_chpl,
                                                                        _ddata_locale_chpl data_chpl,
                                                                        chpl_bool externArr_chpl,
                                                                        chpl_bool _borrowed_chpl,
                                                                        c_void_ptr externFreeFunc_chpl,
                                                                        int64_t _ln_chpl,
                                                                        int32_t _fn_chpl) {
  DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl tmp_chpl15 = NULL;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl_object), INT16(39), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  init_chpl42(initTemp_chpl, dom_chpl, data_chpl, externArr_chpl, _borrowed_chpl, externFreeFunc_chpl);
  tmp_chpl15 = initTemp_chpl;
  return tmp_chpl15;
}

/* DefaultRectangular.chpl:1065 */
static chpl____wide_DefaultRectangularDom_1_int64_t_F dsiGetBaseDom_chpl2(chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t this_chpl7) {
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1174;
  chpl_check_nil((&this_chpl7)->addr, INT64(1065), INT32(28));
  chpl_macro_tmp_1174.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1174.addr = &(((&this_chpl7)->addr)->dom);
  chpl_gen_comm_get(((void*)(&ret_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_1174).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1174).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(7), INT64(1065), INT64(28));
  return ret_chpl;
}

/* DefaultRectangular.chpl:1065 */
static chpl____wide_DefaultRectangularDom_1_int64_t_F dsiGetBaseDom_chpl3(chpl____wide_DefaultRectangularArr_1_int64_t_F_int64_t_int64_t this_chpl7) {
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1175;
  chpl_check_nil((&this_chpl7)->addr, INT64(1065), INT32(28));
  chpl_macro_tmp_1175.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1175.addr = &(((&this_chpl7)->addr)->dom);
  chpl_gen_comm_get(((void*)(&ret_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_1175).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1175).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(8), INT64(1065), INT64(28));
  return ret_chpl;
}

/* DefaultRectangular.chpl:1065 */
static chpl____wide_DefaultRectangularDom_1_int64_t_F dsiGetBaseDom_chpl4(chpl____wide_DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t this_chpl7) {
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1176;
  chpl_check_nil((&this_chpl7)->addr, INT64(1065), INT32(28));
  chpl_macro_tmp_1176.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1176.addr = &(((&this_chpl7)->addr)->dom);
  chpl_gen_comm_get(((void*)(&ret_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_1176).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1176).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(9), INT64(1065), INT64(28));
  return ret_chpl;
}

/* DefaultRectangular.chpl:1067 */
static void dsiElementInitializationComplete_chpl(DefaultRectangularArr_1_int64_t_F_int64_t_int64_t_chpl this_chpl7) {
  _ref__tuple_1_star_int64_t_chpl call_tmp_chpl36 = NULL;
  range_int64_t_bounded_F_chpl call_tmp_chpl37;
  DefaultRectangularDom_1_int64_t_F_chpl coerce_tmp_chpl3 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl ret_tmp_chpl;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl38;
  int64_t call_tmp_chpl39;
  _ddata_int64_t_chpl coerce_tmp_chpl4 = NULL;
  chpl____wide__ddata_int64_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1177;
  chpl_check_nil(this_chpl7, INT64(1069), INT32(28));
  call_tmp_chpl36 = &((this_chpl7)->blk);
  chpl_check_nil(this_chpl7, INT64(1069), INT32(28));
  tmp_chpl15 = (this_chpl7)->dom;
  coerce_tmp_chpl3 = (&tmp_chpl15)->addr;
  chpl_macro_tmp_1177.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1177.addr = coerce_tmp_chpl3;
  tmp_chpl16 = chpl_macro_tmp_1177;
  chpl_check_nil((&tmp_chpl16)->addr, INT64(1069), INT32(28));
  dsiDim_chpl2(tmp_chpl16, &ret_tmp_chpl);
  call_tmp_chpl37 = ret_tmp_chpl;
  call_tmp_chpl38 = sizeAs_chpl3(call_tmp_chpl37);
  call_tmp_chpl39 = (*(*(call_tmp_chpl36) + INT64(0)) * call_tmp_chpl38);
  chpl_check_nil(this_chpl7, INT64(1077), INT32(28));
  if ((this_chpl7)->callPostAlloc) {
    chpl_check_nil(this_chpl7, INT64(1078), INT32(28));
    tmp_chpl17 = (this_chpl7)->data;
    chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl17)->locale, INT64(0), INT32(0)), INT64(1078), INT32(28), "cannot access remote data in local block");
    coerce_tmp_chpl4 = (&tmp_chpl17)->addr;
    chpl_mem_array_postAlloc(((c_void_ptr)(coerce_tmp_chpl4)), ((uint64_t)(call_tmp_chpl39)), ((uint64_t)(sizeof(int64_t))), INT64(1078), INT32(28));
    chpl_check_nil(this_chpl7, INT64(1079), INT32(28));
    (this_chpl7)->callPostAlloc = UINT8(false);
  }
  chpl_check_nil(this_chpl7, INT64(1082), INT32(28));
  (this_chpl7)->deinitElts = UINT8(true);
  return;
}

/* DefaultRectangular.chpl:1067 */
static void dsiElementInitializationComplete_chpl3(DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t_chpl this_chpl7) {
  _ref__tuple_1_star_int64_t_chpl call_tmp_chpl36 = NULL;
  range_int64_t_bounded_F_chpl call_tmp_chpl37;
  DefaultRectangularDom_1_int64_t_F_chpl coerce_tmp_chpl3 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl ret_tmp_chpl;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl38;
  int64_t call_tmp_chpl39;
  _ddata_uint64_t_chpl coerce_tmp_chpl4 = NULL;
  chpl____wide__ddata_uint64_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1178;
  chpl_check_nil(this_chpl7, INT64(1069), INT32(28));
  call_tmp_chpl36 = &((this_chpl7)->blk);
  chpl_check_nil(this_chpl7, INT64(1069), INT32(28));
  tmp_chpl15 = (this_chpl7)->dom;
  coerce_tmp_chpl3 = (&tmp_chpl15)->addr;
  chpl_macro_tmp_1178.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1178.addr = coerce_tmp_chpl3;
  tmp_chpl16 = chpl_macro_tmp_1178;
  chpl_check_nil((&tmp_chpl16)->addr, INT64(1069), INT32(28));
  dsiDim_chpl2(tmp_chpl16, &ret_tmp_chpl);
  call_tmp_chpl37 = ret_tmp_chpl;
  call_tmp_chpl38 = sizeAs_chpl3(call_tmp_chpl37);
  call_tmp_chpl39 = (*(*(call_tmp_chpl36) + INT64(0)) * call_tmp_chpl38);
  chpl_check_nil(this_chpl7, INT64(1077), INT32(28));
  if ((this_chpl7)->callPostAlloc) {
    chpl_check_nil(this_chpl7, INT64(1078), INT32(28));
    tmp_chpl17 = (this_chpl7)->data;
    chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl17)->locale, INT64(0), INT32(0)), INT64(1078), INT32(28), "cannot access remote data in local block");
    coerce_tmp_chpl4 = (&tmp_chpl17)->addr;
    chpl_mem_array_postAlloc(((c_void_ptr)(coerce_tmp_chpl4)), ((uint64_t)(call_tmp_chpl39)), ((uint64_t)(sizeof(uint64_t))), INT64(1078), INT32(28));
    chpl_check_nil(this_chpl7, INT64(1079), INT32(28));
    (this_chpl7)->callPostAlloc = UINT8(false);
  }
  chpl_check_nil(this_chpl7, INT64(1082), INT32(28));
  (this_chpl7)->deinitElts = UINT8(true);
  return;
}

/* DefaultRectangular.chpl:1067 */
static void dsiElementInitializationComplete_chpl2(DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl this_chpl7) {
  _ref__tuple_1_star_int64_t_chpl call_tmp_chpl36 = NULL;
  range_int64_t_bounded_F_chpl call_tmp_chpl37;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl ret_tmp_chpl;
  int64_t call_tmp_chpl38;
  int64_t call_tmp_chpl39;
  _ddata_locale_chpl coerce_tmp_chpl4 = NULL;
  chpl____wide__ddata_locale tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(this_chpl7, INT64(1069), INT32(28));
  call_tmp_chpl36 = &((this_chpl7)->blk);
  chpl_check_nil(this_chpl7, INT64(1069), INT32(28));
  coerce_tmp_chpl3 = (this_chpl7)->dom;
  chpl_check_nil((&coerce_tmp_chpl3)->addr, INT64(1069), INT32(28));
  dsiDim_chpl2(coerce_tmp_chpl3, &ret_tmp_chpl);
  call_tmp_chpl37 = ret_tmp_chpl;
  call_tmp_chpl38 = sizeAs_chpl3(call_tmp_chpl37);
  call_tmp_chpl39 = (*(*(call_tmp_chpl36) + INT64(0)) * call_tmp_chpl38);
  chpl_check_nil(this_chpl7, INT64(1077), INT32(28));
  if ((this_chpl7)->callPostAlloc) {
    chpl_check_nil(this_chpl7, INT64(1078), INT32(28));
    tmp_chpl15 = (this_chpl7)->data;
    chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0)), INT64(1078), INT32(28), "cannot access remote data in local block");
    coerce_tmp_chpl4 = (&tmp_chpl15)->addr;
    chpl_mem_array_postAlloc(((c_void_ptr)(coerce_tmp_chpl4)), ((uint64_t)(call_tmp_chpl39)), ((uint64_t)(sizeof(locale_chpl))), INT64(1078), INT32(28));
    chpl_check_nil(this_chpl7, INT64(1079), INT32(28));
    (this_chpl7)->callPostAlloc = UINT8(false);
  }
  chpl_check_nil(this_chpl7, INT64(1082), INT32(28));
  (this_chpl7)->deinitElts = UINT8(true);
  return;
}

/* DefaultRectangular.chpl:1104 */
static void dsiDestroyArr_chpl4(chpl____wide_DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t this_chpl7,
                                chpl_bool deinitElts_chpl) {
  chpl_bool tmp_chpl15;
  chpl_bool tmp_chpl16;
  chpl____wide__ref__wide__ddata_uint64_t call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  c_ptr__ddata_uint64_t_chpl call_tmp_chpl37 = NULL;
  _ref__wide__ddata_uint64_t_chpl tmp_chpl17 = NULL;
  c_void_ptr tmp_chpl18;
  int64_t call_tmp_chpl38;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl19;
  chpl_bool tmp_chpl20;
  chpl_bool tmp_chpl21;
  chpl____wide__ddata_uint64_t coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl39;
  int32_t call_tmp_chpl40;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1179;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1180;
  chpl____wide__ref__wide__ddata_uint64_t chpl_macro_tmp_1181;
  chpl____wide__ref__wide__ddata_uint64_t chpl_macro_tmp_1182;
  chpl____wide__ref_c_void_ptr chpl_macro_tmp_1183;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1184;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1185;
  chpl____wide__ref__wide__ddata_uint64_t chpl_macro_tmp_1186;
  chpl_check_nil((&this_chpl7)->addr, INT64(1109), INT32(28));
  chpl_macro_tmp_1179.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1179.addr = &(((&this_chpl7)->addr)->externArr);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1179).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1179).addr, sizeof(chpl_bool), COMMID(10), INT64(1109), INT64(28));
  if (tmp_chpl15) {
    chpl_check_nil((&this_chpl7)->addr, INT64(1110), INT32(28));
    chpl_macro_tmp_1180.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_1180.addr = &(((&this_chpl7)->addr)->_borrowed);
    chpl_gen_comm_get(((void*)(&tmp_chpl16)), chpl_nodeFromLocaleID((chpl_macro_tmp_1180).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1180).addr, sizeof(chpl_bool), COMMID(11), INT64(1110), INT64(28));
    if (! tmp_chpl16) {
      chpl_check_nil((&this_chpl7)->addr, INT64(1111), INT32(28));
      chpl_macro_tmp_1181.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1181.addr = &(((&this_chpl7)->addr)->data);
      call_tmp_chpl36 = chpl_macro_tmp_1181;
      chpl_check_local(chpl_nodeFromLocaleID((&call_tmp_chpl36)->locale, INT64(0), INT32(0)), INT64(1111), INT32(28), "references to remote data cannot be passed to external routines like 'c_pointer_return'");
      tmp_chpl17 = (&call_tmp_chpl36)->addr;
      call_tmp_chpl37 = c_pointer_return(tmp_chpl17);
      chpl_macro_tmp_1182.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1182.addr = tmp_chpl17;
      call_tmp_chpl36 = chpl_macro_tmp_1182;
      chpl_check_nil((&this_chpl7)->addr, INT64(1111), INT32(28));
      chpl_macro_tmp_1183.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1183.addr = &(((&this_chpl7)->addr)->externFreeFunc);
      chpl_gen_comm_get(((void*)(&tmp_chpl18)), chpl_nodeFromLocaleID((chpl_macro_tmp_1183).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1183).addr, sizeof(c_void_ptr), COMMID(12), INT64(1111), INT64(28));
      chpl_call_free_func(tmp_chpl18, ((c_void_ptr)(call_tmp_chpl37)));
    }
  } else {
    chpl_check_nil((&this_chpl7)->addr, INT64(1114), INT32(28));
    chpl_macro_tmp_1184.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_1184.addr = &(((&this_chpl7)->addr)->dom);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID((chpl_macro_tmp_1184).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1184).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(13), INT64(1114), INT64(28));
    chpl_check_nil((&coerce_tmp_chpl3)->addr, INT64(1114), INT32(28));
    call_tmp_chpl38 = dsiNumIndices_chpl(coerce_tmp_chpl3);
    if (deinitElts_chpl) {
      chpl_check_nil((&this_chpl7)->addr, INT64(1116), INT32(28));
      chpl_macro_tmp_1185.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1185.addr = &(((&this_chpl7)->addr)->deinitElts);
      chpl_gen_comm_get(((void*)(&tmp_chpl20)), chpl_nodeFromLocaleID((chpl_macro_tmp_1185).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1185).addr, sizeof(chpl_bool), COMMID(14), INT64(1116), INT64(28));
      tmp_chpl19 = tmp_chpl20;
    } else {
      tmp_chpl19 = UINT8(false);
    }
    if (tmp_chpl19) {
      tmp_chpl21 = (call_tmp_chpl38 > INT64(0));
    } else {
      tmp_chpl21 = UINT8(false);
    }
    if (tmp_chpl21) {
    }
    chpl_check_nil((&this_chpl7)->addr, INT64(1132), INT32(28));
    chpl_macro_tmp_1186.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_1186.addr = &(((&this_chpl7)->addr)->data);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID((chpl_macro_tmp_1186).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1186).addr, sizeof(chpl____wide__ddata_uint64_t), COMMID(15), INT64(1132), INT64(28));
    call_tmp_chpl39 = (&coerce_tmp_chpl4)->locale;
    call_tmp_chpl40 = chpl_sublocFromLocaleID(call_tmp_chpl39, INT64(1132), INT32(28));
    chpl_mem_array_free(((c_void_ptr)((&coerce_tmp_chpl4)->addr)), ((uint64_t)(call_tmp_chpl38)), ((uint64_t)(sizeof(uint64_t))), call_tmp_chpl40, INT64(1132), INT32(28));
  }
  return;
}

/* DefaultRectangular.chpl:1104 */
static void dsiDestroyArr_chpl3(chpl____wide_DefaultRectangularArr_1_int64_t_F_int64_t_int64_t this_chpl7,
                                chpl_bool deinitElts_chpl) {
  chpl_bool tmp_chpl15;
  chpl_bool tmp_chpl16;
  chpl____wide__ref__wide__ddata_int64_t call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  c_ptr__ddata_int64_t_chpl call_tmp_chpl37 = NULL;
  _ref__wide__ddata_int64_t_chpl tmp_chpl17 = NULL;
  c_void_ptr tmp_chpl18;
  int64_t call_tmp_chpl38;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl19;
  chpl_bool tmp_chpl20;
  chpl_bool tmp_chpl21;
  chpl____wide__ddata_int64_t coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl39;
  int32_t call_tmp_chpl40;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1187;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1188;
  chpl____wide__ref__wide__ddata_int64_t chpl_macro_tmp_1189;
  chpl____wide__ref__wide__ddata_int64_t chpl_macro_tmp_1190;
  chpl____wide__ref_c_void_ptr chpl_macro_tmp_1191;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1192;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1193;
  chpl____wide__ref__wide__ddata_int64_t chpl_macro_tmp_1194;
  chpl_check_nil((&this_chpl7)->addr, INT64(1109), INT32(28));
  chpl_macro_tmp_1187.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1187.addr = &(((&this_chpl7)->addr)->externArr);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1187).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1187).addr, sizeof(chpl_bool), COMMID(16), INT64(1109), INT64(28));
  if (tmp_chpl15) {
    chpl_check_nil((&this_chpl7)->addr, INT64(1110), INT32(28));
    chpl_macro_tmp_1188.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_1188.addr = &(((&this_chpl7)->addr)->_borrowed);
    chpl_gen_comm_get(((void*)(&tmp_chpl16)), chpl_nodeFromLocaleID((chpl_macro_tmp_1188).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1188).addr, sizeof(chpl_bool), COMMID(17), INT64(1110), INT64(28));
    if (! tmp_chpl16) {
      chpl_check_nil((&this_chpl7)->addr, INT64(1111), INT32(28));
      chpl_macro_tmp_1189.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1189.addr = &(((&this_chpl7)->addr)->data);
      call_tmp_chpl36 = chpl_macro_tmp_1189;
      chpl_check_local(chpl_nodeFromLocaleID((&call_tmp_chpl36)->locale, INT64(0), INT32(0)), INT64(1111), INT32(28), "references to remote data cannot be passed to external routines like 'c_pointer_return'");
      tmp_chpl17 = (&call_tmp_chpl36)->addr;
      call_tmp_chpl37 = c_pointer_return(tmp_chpl17);
      chpl_macro_tmp_1190.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1190.addr = tmp_chpl17;
      call_tmp_chpl36 = chpl_macro_tmp_1190;
      chpl_check_nil((&this_chpl7)->addr, INT64(1111), INT32(28));
      chpl_macro_tmp_1191.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1191.addr = &(((&this_chpl7)->addr)->externFreeFunc);
      chpl_gen_comm_get(((void*)(&tmp_chpl18)), chpl_nodeFromLocaleID((chpl_macro_tmp_1191).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1191).addr, sizeof(c_void_ptr), COMMID(18), INT64(1111), INT64(28));
      chpl_call_free_func(tmp_chpl18, ((c_void_ptr)(call_tmp_chpl37)));
    }
  } else {
    chpl_check_nil((&this_chpl7)->addr, INT64(1114), INT32(28));
    chpl_macro_tmp_1192.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_1192.addr = &(((&this_chpl7)->addr)->dom);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID((chpl_macro_tmp_1192).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1192).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(19), INT64(1114), INT64(28));
    chpl_check_nil((&coerce_tmp_chpl3)->addr, INT64(1114), INT32(28));
    call_tmp_chpl38 = dsiNumIndices_chpl(coerce_tmp_chpl3);
    if (deinitElts_chpl) {
      chpl_check_nil((&this_chpl7)->addr, INT64(1116), INT32(28));
      chpl_macro_tmp_1193.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1193.addr = &(((&this_chpl7)->addr)->deinitElts);
      chpl_gen_comm_get(((void*)(&tmp_chpl20)), chpl_nodeFromLocaleID((chpl_macro_tmp_1193).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1193).addr, sizeof(chpl_bool), COMMID(20), INT64(1116), INT64(28));
      tmp_chpl19 = tmp_chpl20;
    } else {
      tmp_chpl19 = UINT8(false);
    }
    if (tmp_chpl19) {
      tmp_chpl21 = (call_tmp_chpl38 > INT64(0));
    } else {
      tmp_chpl21 = UINT8(false);
    }
    if (tmp_chpl21) {
    }
    chpl_check_nil((&this_chpl7)->addr, INT64(1132), INT32(28));
    chpl_macro_tmp_1194.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_1194.addr = &(((&this_chpl7)->addr)->data);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID((chpl_macro_tmp_1194).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1194).addr, sizeof(chpl____wide__ddata_int64_t), COMMID(21), INT64(1132), INT64(28));
    call_tmp_chpl39 = (&coerce_tmp_chpl4)->locale;
    call_tmp_chpl40 = chpl_sublocFromLocaleID(call_tmp_chpl39, INT64(1132), INT32(28));
    chpl_mem_array_free(((c_void_ptr)((&coerce_tmp_chpl4)->addr)), ((uint64_t)(call_tmp_chpl38)), ((uint64_t)(sizeof(int64_t))), call_tmp_chpl40, INT64(1132), INT32(28));
  }
  return;
}

/* DefaultRectangular.chpl:1104 */
static void dsiDestroyArr_chpl2(chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t this_chpl7,
                                chpl_bool deinitElts_chpl) {
  string_chpl local__str_literal_596_chpl;
  chpl_bool tmp_chpl15;
  chpl_bool tmp_chpl16;
  chpl____wide__ref__wide__ddata_locale call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  c_ptr__ddata_locale_chpl call_tmp_chpl37 = NULL;
  _ref__wide__ddata_locale_chpl tmp_chpl17 = NULL;
  c_void_ptr tmp_chpl18;
  int64_t call_tmp_chpl38;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t numInd_chpl;
  chpl_bool tmp_chpl19;
  chpl_bool tmp_chpl20;
  chpl_bool tmp_chpl21;
  int64_t tmp_x0_chpl;
  int64_t tmp_x1_chpl;
  int64_t _ic__F1_high_chpl;
  int64_t i_chpl;
  chpl____wide__ddata_locale coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale call_tmp_chpl39 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_locale coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl40;
  int32_t call_tmp_chpl41;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1195;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1196;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_1197;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_1198;
  chpl____wide__ref_c_void_ptr chpl_macro_tmp_1199;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1200;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_1201;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_1202;
  chpl____wide__ref_locale chpl_macro_tmp_1203;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_1204;
  local__str_literal_596_chpl = _str_literal_596_chpl /* "With a negative count, the range must have a last index." */;
  chpl_check_nil((&this_chpl7)->addr, INT64(1109), INT32(28));
  chpl_macro_tmp_1195.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1195.addr = &(((&this_chpl7)->addr)->externArr);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1195).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1195).addr, sizeof(chpl_bool), COMMID(22), INT64(1109), INT64(28));
  if (tmp_chpl15) {
    chpl_check_nil((&this_chpl7)->addr, INT64(1110), INT32(28));
    chpl_macro_tmp_1196.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_1196.addr = &(((&this_chpl7)->addr)->_borrowed);
    chpl_gen_comm_get(((void*)(&tmp_chpl16)), chpl_nodeFromLocaleID((chpl_macro_tmp_1196).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1196).addr, sizeof(chpl_bool), COMMID(23), INT64(1110), INT64(28));
    if (! tmp_chpl16) {
      chpl_check_nil((&this_chpl7)->addr, INT64(1111), INT32(28));
      chpl_macro_tmp_1197.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1197.addr = &(((&this_chpl7)->addr)->data);
      call_tmp_chpl36 = chpl_macro_tmp_1197;
      chpl_check_local(chpl_nodeFromLocaleID((&call_tmp_chpl36)->locale, INT64(0), INT32(0)), INT64(1111), INT32(28), "references to remote data cannot be passed to external routines like 'c_pointer_return'");
      tmp_chpl17 = (&call_tmp_chpl36)->addr;
      call_tmp_chpl37 = c_pointer_return(tmp_chpl17);
      chpl_macro_tmp_1198.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1198.addr = tmp_chpl17;
      call_tmp_chpl36 = chpl_macro_tmp_1198;
      chpl_check_nil((&this_chpl7)->addr, INT64(1111), INT32(28));
      chpl_macro_tmp_1199.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1199.addr = &(((&this_chpl7)->addr)->externFreeFunc);
      chpl_gen_comm_get(((void*)(&tmp_chpl18)), chpl_nodeFromLocaleID((chpl_macro_tmp_1199).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1199).addr, sizeof(c_void_ptr), COMMID(24), INT64(1111), INT64(28));
      chpl_call_free_func(tmp_chpl18, ((c_void_ptr)(call_tmp_chpl37)));
    }
  } else {
    chpl_check_nil((&this_chpl7)->addr, INT64(1114), INT32(28));
    chpl_macro_tmp_1200.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_1200.addr = &(((&this_chpl7)->addr)->dom);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID((chpl_macro_tmp_1200).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1200).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(25), INT64(1114), INT64(28));
    chpl_check_nil((&coerce_tmp_chpl3)->addr, INT64(1114), INT32(28));
    call_tmp_chpl38 = dsiNumIndices_chpl(coerce_tmp_chpl3);
    numInd_chpl = call_tmp_chpl38;
    if (deinitElts_chpl) {
      chpl_check_nil((&this_chpl7)->addr, INT64(1116), INT32(28));
      chpl_macro_tmp_1201.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1201.addr = &(((&this_chpl7)->addr)->deinitElts);
      chpl_gen_comm_get(((void*)(&tmp_chpl20)), chpl_nodeFromLocaleID((chpl_macro_tmp_1201).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1201).addr, sizeof(chpl_bool), COMMID(26), INT64(1116), INT64(28));
      tmp_chpl19 = tmp_chpl20;
    } else {
      tmp_chpl19 = UINT8(false);
    }
    if (tmp_chpl19) {
      tmp_chpl21 = (call_tmp_chpl38 > INT64(0));
    } else {
      tmp_chpl21 = UINT8(false);
    }
    if (tmp_chpl21) {
      if (call_tmp_chpl38 < INT64(0)) {
        boundsCheckHalt_chpl(&local__str_literal_596_chpl, INT64(1126), INT32(28));
      }
      if (call_tmp_chpl38 == INT64(0)) {
        tmp_x0_chpl = INT64(0);
        tmp_x1_chpl = ((int64_t)(((uint64_t)((((uint64_t)(INT64(0))) - UINT64(1))))));
      } else {
        tmp_x0_chpl = INT64(0);
        tmp_x1_chpl = ((int64_t)((INT64(0) + ((int64_t)((call_tmp_chpl38 - INT64(1)))))));
      }
      _ic__F1_high_chpl = tmp_x1_chpl;
      i_chpl = INT64(0);
      chpl_checkIfRangeIterWillOverflow(tmp_x0_chpl, tmp_x1_chpl, INT64(1), tmp_x0_chpl, tmp_x1_chpl, UINT8(true));
      for (i_chpl = tmp_x0_chpl; ((i_chpl <= _ic__F1_high_chpl)); i_chpl += INT64(1)) {
        chpl_check_nil((&this_chpl7)->addr, INT64(1127), INT32(28));
        chpl_macro_tmp_1202.locale = (&this_chpl7)->locale;
        chpl_macro_tmp_1202.addr = &(((&this_chpl7)->addr)->data);
        chpl_gen_comm_get(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID((chpl_macro_tmp_1202).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1202).addr, sizeof(chpl____wide__ddata_locale), COMMID(27), INT64(1127), INT64(28));
        chpl_macro_tmp_1203.locale = (&coerce_tmp_chpl4)->locale;
        chpl_macro_tmp_1203.addr = ((&coerce_tmp_chpl4)->addr + i_chpl);
        call_tmp_chpl39 = chpl_macro_tmp_1203;
        deinit_chpl14(call_tmp_chpl39);
      }
    }
    chpl_check_nil((&this_chpl7)->addr, INT64(1132), INT32(28));
    chpl_macro_tmp_1204.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_1204.addr = &(((&this_chpl7)->addr)->data);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID((chpl_macro_tmp_1204).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1204).addr, sizeof(chpl____wide__ddata_locale), COMMID(28), INT64(1132), INT64(28));
    call_tmp_chpl40 = (&coerce_tmp_chpl5)->locale;
    call_tmp_chpl41 = chpl_sublocFromLocaleID(call_tmp_chpl40, INT64(1132), INT32(28));
    chpl_mem_array_free(((c_void_ptr)((&coerce_tmp_chpl5)->addr)), ((uint64_t)(numInd_chpl)), ((uint64_t)(sizeof(locale_chpl))), call_tmp_chpl41, INT64(1132), INT32(28));
  }
  return;
}

/* DefaultRectangular.chpl:1206 */
static void computeFactoredOffs_chpl(DefaultRectangularArr_1_int64_t_F_int64_t_int64_t_chpl this_chpl7) {
  _ref__tuple_1_star_int64_t_chpl call_tmp_chpl36 = NULL;
  _ref__tuple_1_star_int64_t_chpl call_tmp_chpl37 = NULL;
  int64_t call_tmp_chpl38;
  int64_t call_tmp_chpl39;
  chpl_check_nil(this_chpl7, INT64(1207), INT32(28));
  (this_chpl7)->factoredOffs = INT64(0);
  chpl_check_nil(this_chpl7, INT64(1209), INT32(28));
  call_tmp_chpl36 = &((this_chpl7)->blk);
  chpl_check_nil(this_chpl7, INT64(1209), INT32(28));
  call_tmp_chpl37 = &((this_chpl7)->off);
  call_tmp_chpl38 = (*(*(call_tmp_chpl36) + INT64(0)) * *(*(call_tmp_chpl37) + INT64(0)));
  chpl_check_nil(this_chpl7, INT64(1209), INT32(28));
  call_tmp_chpl39 = ((this_chpl7)->factoredOffs + call_tmp_chpl38);
  chpl_check_nil(this_chpl7, INT64(1209), INT32(28));
  (this_chpl7)->factoredOffs = call_tmp_chpl39;
  return;
}

/* DefaultRectangular.chpl:1206 */
static void computeFactoredOffs_chpl3(DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl this_chpl7) {
  _ref__tuple_1_star_int64_t_chpl call_tmp_chpl36 = NULL;
  _ref__tuple_1_star_int64_t_chpl call_tmp_chpl37 = NULL;
  int64_t call_tmp_chpl38;
  int64_t call_tmp_chpl39;
  chpl_check_nil(this_chpl7, INT64(1207), INT32(28));
  (this_chpl7)->factoredOffs = INT64(0);
  chpl_check_nil(this_chpl7, INT64(1209), INT32(28));
  call_tmp_chpl36 = &((this_chpl7)->blk);
  chpl_check_nil(this_chpl7, INT64(1209), INT32(28));
  call_tmp_chpl37 = &((this_chpl7)->off);
  call_tmp_chpl38 = (*(*(call_tmp_chpl36) + INT64(0)) * *(*(call_tmp_chpl37) + INT64(0)));
  chpl_check_nil(this_chpl7, INT64(1209), INT32(28));
  call_tmp_chpl39 = ((this_chpl7)->factoredOffs + call_tmp_chpl38);
  chpl_check_nil(this_chpl7, INT64(1209), INT32(28));
  (this_chpl7)->factoredOffs = call_tmp_chpl39;
  return;
}

/* DefaultRectangular.chpl:1206 */
static void computeFactoredOffs_chpl2(DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t_chpl this_chpl7) {
  _ref__tuple_1_star_int64_t_chpl call_tmp_chpl36 = NULL;
  _ref__tuple_1_star_int64_t_chpl call_tmp_chpl37 = NULL;
  int64_t call_tmp_chpl38;
  int64_t call_tmp_chpl39;
  chpl_check_nil(this_chpl7, INT64(1207), INT32(28));
  (this_chpl7)->factoredOffs = INT64(0);
  chpl_check_nil(this_chpl7, INT64(1209), INT32(28));
  call_tmp_chpl36 = &((this_chpl7)->blk);
  chpl_check_nil(this_chpl7, INT64(1209), INT32(28));
  call_tmp_chpl37 = &((this_chpl7)->off);
  call_tmp_chpl38 = (*(*(call_tmp_chpl36) + INT64(0)) * *(*(call_tmp_chpl37) + INT64(0)));
  chpl_check_nil(this_chpl7, INT64(1209), INT32(28));
  call_tmp_chpl39 = ((this_chpl7)->factoredOffs + call_tmp_chpl38);
  chpl_check_nil(this_chpl7, INT64(1209), INT32(28));
  (this_chpl7)->factoredOffs = call_tmp_chpl39;
  return;
}

/* DefaultRectangular.chpl:1231 */
static void setupFieldsAndAllocate_chpl2(DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl this_chpl7) {
  _ref__tuple_1_star_int64_t_chpl call_tmp_chpl36 = NULL;
  range_int64_t_bounded_F_chpl call_tmp_chpl37;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl ret_tmp_chpl;
  _ref__tuple_1_star_int64_t_chpl call_tmp_chpl38 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl ret_tmp_chpl2;
  _ref__tuple_1_star_int64_t_chpl call_tmp_chpl39 = NULL;
  _ref__tuple_1_star_int64_t_chpl call_tmp_chpl40 = NULL;
  range_int64_t_bounded_F_chpl call_tmp_chpl41;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl ret_tmp_chpl3;
  int64_t call_tmp_chpl42;
  int64_t call_tmp_chpl43;
  _ddata_locale_chpl coerce_tmp_chpl6 = NULL;
  chpl____wide__ddata_locale tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _ddata_locale_chpl call_tmp_chpl44 = NULL;
  chpl_bool _formal_tmp_out_callPostAlloc_chpl;
  chpl____wide__ddata_locale tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ddata_locale_chpl coerce_tmp_chpl7 = NULL;
  chpl____wide__ddata_locale tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl45;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl46;
  _ddata_locale_chpl coerce_tmp_chpl9 = NULL;
  chpl____wide__ddata_locale tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _ddata_locale_chpl ret_chpl = NULL;
  chpl____wide__ddata_locale tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_locale chpl_macro_tmp_1205;
  chpl____wide__ddata_locale chpl_macro_tmp_1206;
  chpl_check_nil(this_chpl7, INT64(1233), INT32(28));
  call_tmp_chpl36 = &((this_chpl7)->off);
  chpl_check_nil(this_chpl7, INT64(1233), INT32(28));
  coerce_tmp_chpl3 = (this_chpl7)->dom;
  chpl_check_nil((&coerce_tmp_chpl3)->addr, INT64(1233), INT32(28));
  dsiDim_chpl2(coerce_tmp_chpl3, &ret_tmp_chpl);
  call_tmp_chpl37 = ret_tmp_chpl;
  *(*(call_tmp_chpl36) + INT64(0)) = (&call_tmp_chpl37)->_low;
  chpl_check_nil(this_chpl7, INT64(1234), INT32(28));
  call_tmp_chpl38 = &((this_chpl7)->str);
  chpl_check_nil(this_chpl7, INT64(1234), INT32(28));
  coerce_tmp_chpl4 = (this_chpl7)->dom;
  chpl_check_nil((&coerce_tmp_chpl4)->addr, INT64(1234), INT32(28));
  dsiDim_chpl2(coerce_tmp_chpl4, &ret_tmp_chpl2);
  *(*(call_tmp_chpl38) + INT64(0)) = INT64(1);
  chpl_check_nil(this_chpl7, INT64(1237), INT32(28));
  call_tmp_chpl39 = &((this_chpl7)->blk);
  *(*(call_tmp_chpl39) + INT64(0)) = INT64(1);
  chpl_check_nil(this_chpl7, INT64(1248), INT32(28));
  computeFactoredOffs_chpl3(this_chpl7);
  chpl_check_nil(this_chpl7, INT64(1250), INT32(28));
  call_tmp_chpl40 = &((this_chpl7)->blk);
  chpl_check_nil(this_chpl7, INT64(1250), INT32(28));
  coerce_tmp_chpl5 = (this_chpl7)->dom;
  chpl_check_nil((&coerce_tmp_chpl5)->addr, INT64(1250), INT32(28));
  dsiDim_chpl2(coerce_tmp_chpl5, &ret_tmp_chpl3);
  call_tmp_chpl41 = ret_tmp_chpl3;
  call_tmp_chpl42 = sizeAs_chpl3(call_tmp_chpl41);
  call_tmp_chpl43 = (*(*(call_tmp_chpl40) + INT64(0)) * call_tmp_chpl42);
  chpl_check_nil(this_chpl7, INT64(1260), INT32(28));
  tmp_chpl15 = (this_chpl7)->data;
  chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0)), INT64(1260), INT32(28), "cannot access remote data in local block");
  coerce_tmp_chpl6 = (&tmp_chpl15)->addr;
  if (coerce_tmp_chpl6 == nil) {
    call_tmp_chpl44 = _ddata_allocate_noinit_chpl3(call_tmp_chpl43, &_formal_tmp_out_callPostAlloc_chpl, c_sublocid_none);
    chpl_check_nil(this_chpl7, INT64(1266), INT32(28));
    (this_chpl7)->callPostAlloc = _formal_tmp_out_callPostAlloc_chpl;
    chpl_macro_tmp_1205.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1205.addr = call_tmp_chpl44;
    tmp_chpl16 = chpl_macro_tmp_1205;
    chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl16)->locale, INT64(0), INT32(0)), INT64(1266), INT32(28), "cannot access remote data in local block");
    chpl_check_nil(this_chpl7, INT64(1266), INT32(28));
    (this_chpl7)->data = tmp_chpl16;
    chpl_check_nil(this_chpl7, INT64(1276), INT32(28));
    tmp_chpl17 = (this_chpl7)->data;
    chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl17)->locale, INT64(0), INT32(0)), INT64(1276), INT32(28), "cannot access remote data in local block");
    coerce_tmp_chpl7 = (&tmp_chpl17)->addr;
    init_elts_chpl(coerce_tmp_chpl7, call_tmp_chpl43, INT64(0));
    chpl_check_nil(this_chpl7, INT64(1277), INT32(28));
    dsiElementInitializationComplete_chpl2(this_chpl7);
  }
  chpl_check_nil(this_chpl7, INT64(1281), INT32(28));
  coerce_tmp_chpl8 = (this_chpl7)->dom;
  chpl_check_nil((&coerce_tmp_chpl8)->addr, INT64(1281), INT32(28));
  call_tmp_chpl45 = dsiNumIndices_chpl(coerce_tmp_chpl8);
  if (call_tmp_chpl45 > INT64(0)) {
    chpl_check_nil(this_chpl7, INT64(1281), INT32(28));
    call_tmp_chpl46 = (INT64(0) - (this_chpl7)->factoredOffs);
    chpl_check_nil(this_chpl7, INT64(1281), INT32(28));
    tmp_chpl18 = (this_chpl7)->data;
    chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl18)->locale, INT64(0), INT32(0)), INT64(1281), INT32(28), "cannot access remote data in local block");
    coerce_tmp_chpl9 = (&tmp_chpl18)->addr;
    ret_chpl = ((_ddata_locale_chpl)(nil));
    ret_chpl = (coerce_tmp_chpl9 + call_tmp_chpl46);
    chpl_macro_tmp_1206.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1206.addr = ret_chpl;
    tmp_chpl19 = chpl_macro_tmp_1206;
    chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl19)->locale, INT64(0), INT32(0)), INT64(1281), INT32(28), "cannot access remote data in local block");
    chpl_check_nil(this_chpl7, INT64(1281), INT32(28));
    (this_chpl7)->shiftedData = tmp_chpl19;
  }
  return;
}

/* DefaultRectangular.chpl:1231 */
static void setupFieldsAndAllocate_chpl(DefaultRectangularArr_1_int64_t_F_int64_t_int64_t_chpl this_chpl7) {
  _ref__tuple_1_star_int64_t_chpl call_tmp_chpl36 = NULL;
  range_int64_t_bounded_F_chpl call_tmp_chpl37;
  DefaultRectangularDom_1_int64_t_F_chpl coerce_tmp_chpl3 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl ret_tmp_chpl;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_int64_t_chpl call_tmp_chpl38 = NULL;
  DefaultRectangularDom_1_int64_t_F_chpl coerce_tmp_chpl4 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl ret_tmp_chpl2;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_int64_t_chpl call_tmp_chpl39 = NULL;
  _ref__tuple_1_star_int64_t_chpl call_tmp_chpl40 = NULL;
  range_int64_t_bounded_F_chpl call_tmp_chpl41;
  DefaultRectangularDom_1_int64_t_F_chpl coerce_tmp_chpl5 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl ret_tmp_chpl3;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl42;
  int64_t call_tmp_chpl43;
  _ddata_int64_t_chpl coerce_tmp_chpl6 = NULL;
  chpl____wide__ddata_int64_t tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  _ddata_int64_t_chpl call_tmp_chpl44 = NULL;
  chpl_bool _formal_tmp_out_callPostAlloc_chpl;
  chpl____wide__ddata_int64_t tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _ddata_int64_t_chpl coerce_tmp_chpl7 = NULL;
  chpl____wide__ddata_int64_t tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl45;
  DefaultRectangularDom_1_int64_t_F_chpl coerce_tmp_chpl8 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl25 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl46;
  _ddata_int64_t_chpl coerce_tmp_chpl9 = NULL;
  chpl____wide__ddata_int64_t tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  _ddata_int64_t_chpl ret_chpl = NULL;
  chpl____wide__ddata_int64_t tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1207;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1208;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1209;
  chpl____wide__ddata_int64_t chpl_macro_tmp_1210;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1211;
  chpl____wide__ddata_int64_t chpl_macro_tmp_1212;
  chpl_check_nil(this_chpl7, INT64(1233), INT32(28));
  call_tmp_chpl36 = &((this_chpl7)->off);
  chpl_check_nil(this_chpl7, INT64(1233), INT32(28));
  tmp_chpl15 = (this_chpl7)->dom;
  coerce_tmp_chpl3 = (&tmp_chpl15)->addr;
  chpl_macro_tmp_1207.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1207.addr = coerce_tmp_chpl3;
  tmp_chpl16 = chpl_macro_tmp_1207;
  chpl_check_nil((&tmp_chpl16)->addr, INT64(1233), INT32(28));
  dsiDim_chpl2(tmp_chpl16, &ret_tmp_chpl);
  call_tmp_chpl37 = ret_tmp_chpl;
  *(*(call_tmp_chpl36) + INT64(0)) = (&call_tmp_chpl37)->_low;
  chpl_check_nil(this_chpl7, INT64(1234), INT32(28));
  call_tmp_chpl38 = &((this_chpl7)->str);
  chpl_check_nil(this_chpl7, INT64(1234), INT32(28));
  tmp_chpl17 = (this_chpl7)->dom;
  coerce_tmp_chpl4 = (&tmp_chpl17)->addr;
  chpl_macro_tmp_1208.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1208.addr = coerce_tmp_chpl4;
  tmp_chpl18 = chpl_macro_tmp_1208;
  chpl_check_nil((&tmp_chpl18)->addr, INT64(1234), INT32(28));
  dsiDim_chpl2(tmp_chpl18, &ret_tmp_chpl2);
  *(*(call_tmp_chpl38) + INT64(0)) = INT64(1);
  chpl_check_nil(this_chpl7, INT64(1237), INT32(28));
  call_tmp_chpl39 = &((this_chpl7)->blk);
  *(*(call_tmp_chpl39) + INT64(0)) = INT64(1);
  chpl_check_nil(this_chpl7, INT64(1248), INT32(28));
  computeFactoredOffs_chpl(this_chpl7);
  chpl_check_nil(this_chpl7, INT64(1250), INT32(28));
  call_tmp_chpl40 = &((this_chpl7)->blk);
  chpl_check_nil(this_chpl7, INT64(1250), INT32(28));
  tmp_chpl19 = (this_chpl7)->dom;
  coerce_tmp_chpl5 = (&tmp_chpl19)->addr;
  chpl_macro_tmp_1209.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1209.addr = coerce_tmp_chpl5;
  tmp_chpl20 = chpl_macro_tmp_1209;
  chpl_check_nil((&tmp_chpl20)->addr, INT64(1250), INT32(28));
  dsiDim_chpl2(tmp_chpl20, &ret_tmp_chpl3);
  call_tmp_chpl41 = ret_tmp_chpl3;
  call_tmp_chpl42 = sizeAs_chpl3(call_tmp_chpl41);
  call_tmp_chpl43 = (*(*(call_tmp_chpl40) + INT64(0)) * call_tmp_chpl42);
  chpl_check_nil(this_chpl7, INT64(1260), INT32(28));
  tmp_chpl21 = (this_chpl7)->data;
  chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl21)->locale, INT64(0), INT32(0)), INT64(1260), INT32(28), "cannot access remote data in local block");
  coerce_tmp_chpl6 = (&tmp_chpl21)->addr;
  if (coerce_tmp_chpl6 == nil) {
    call_tmp_chpl44 = _ddata_allocate_noinit_chpl(call_tmp_chpl43, &_formal_tmp_out_callPostAlloc_chpl, c_sublocid_none);
    chpl_check_nil(this_chpl7, INT64(1266), INT32(28));
    (this_chpl7)->callPostAlloc = _formal_tmp_out_callPostAlloc_chpl;
    chpl_macro_tmp_1210.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1210.addr = call_tmp_chpl44;
    tmp_chpl22 = chpl_macro_tmp_1210;
    chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl22)->locale, INT64(0), INT32(0)), INT64(1266), INT32(28), "cannot access remote data in local block");
    chpl_check_nil(this_chpl7, INT64(1266), INT32(28));
    (this_chpl7)->data = tmp_chpl22;
    chpl_check_nil(this_chpl7, INT64(1276), INT32(28));
    tmp_chpl23 = (this_chpl7)->data;
    chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl23)->locale, INT64(0), INT32(0)), INT64(1276), INT32(28), "cannot access remote data in local block");
    coerce_tmp_chpl7 = (&tmp_chpl23)->addr;
    init_elts_chpl2(coerce_tmp_chpl7, call_tmp_chpl43, INT64(0));
    chpl_check_nil(this_chpl7, INT64(1277), INT32(28));
    dsiElementInitializationComplete_chpl(this_chpl7);
  }
  chpl_check_nil(this_chpl7, INT64(1281), INT32(28));
  tmp_chpl24 = (this_chpl7)->dom;
  coerce_tmp_chpl8 = (&tmp_chpl24)->addr;
  chpl_macro_tmp_1211.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1211.addr = coerce_tmp_chpl8;
  tmp_chpl25 = chpl_macro_tmp_1211;
  chpl_check_nil((&tmp_chpl25)->addr, INT64(1281), INT32(28));
  call_tmp_chpl45 = dsiNumIndices_chpl(tmp_chpl25);
  if (call_tmp_chpl45 > INT64(0)) {
    chpl_check_nil(this_chpl7, INT64(1281), INT32(28));
    call_tmp_chpl46 = (INT64(0) - (this_chpl7)->factoredOffs);
    chpl_check_nil(this_chpl7, INT64(1281), INT32(28));
    tmp_chpl26 = (this_chpl7)->data;
    chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl26)->locale, INT64(0), INT32(0)), INT64(1281), INT32(28), "cannot access remote data in local block");
    coerce_tmp_chpl9 = (&tmp_chpl26)->addr;
    ret_chpl = ((_ddata_int64_t_chpl)(nil));
    ret_chpl = (coerce_tmp_chpl9 + call_tmp_chpl46);
    chpl_macro_tmp_1212.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1212.addr = ret_chpl;
    tmp_chpl27 = chpl_macro_tmp_1212;
    chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl27)->locale, INT64(0), INT32(0)), INT64(1281), INT32(28), "cannot access remote data in local block");
    chpl_check_nil(this_chpl7, INT64(1281), INT32(28));
    (this_chpl7)->shiftedData = tmp_chpl27;
  }
  return;
}

/* DefaultRectangular.chpl:1231 */
static void setupFieldsAndAllocate_chpl3(DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t_chpl this_chpl7) {
  _ref__tuple_1_star_int64_t_chpl call_tmp_chpl36 = NULL;
  range_int64_t_bounded_F_chpl call_tmp_chpl37;
  DefaultRectangularDom_1_int64_t_F_chpl coerce_tmp_chpl3 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl ret_tmp_chpl;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_int64_t_chpl call_tmp_chpl38 = NULL;
  DefaultRectangularDom_1_int64_t_F_chpl coerce_tmp_chpl4 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl ret_tmp_chpl2;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_int64_t_chpl call_tmp_chpl39 = NULL;
  _ref__tuple_1_star_int64_t_chpl call_tmp_chpl40 = NULL;
  range_int64_t_bounded_F_chpl call_tmp_chpl41;
  DefaultRectangularDom_1_int64_t_F_chpl coerce_tmp_chpl5 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl ret_tmp_chpl3;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl42;
  int64_t call_tmp_chpl43;
  _ddata_uint64_t_chpl coerce_tmp_chpl6 = NULL;
  chpl____wide__ddata_uint64_t tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  _ddata_uint64_t_chpl call_tmp_chpl44 = NULL;
  chpl_bool _formal_tmp_out_callPostAlloc_chpl;
  chpl____wide__ddata_uint64_t tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _ddata_uint64_t_chpl coerce_tmp_chpl7 = NULL;
  chpl____wide__ddata_uint64_t tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl45;
  DefaultRectangularDom_1_int64_t_F_chpl coerce_tmp_chpl8 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl25 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl46;
  _ddata_uint64_t_chpl coerce_tmp_chpl9 = NULL;
  chpl____wide__ddata_uint64_t tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  _ddata_uint64_t_chpl ret_chpl = NULL;
  chpl____wide__ddata_uint64_t tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1213;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1214;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1215;
  chpl____wide__ddata_uint64_t chpl_macro_tmp_1216;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1217;
  chpl____wide__ddata_uint64_t chpl_macro_tmp_1218;
  chpl_check_nil(this_chpl7, INT64(1233), INT32(28));
  call_tmp_chpl36 = &((this_chpl7)->off);
  chpl_check_nil(this_chpl7, INT64(1233), INT32(28));
  tmp_chpl15 = (this_chpl7)->dom;
  coerce_tmp_chpl3 = (&tmp_chpl15)->addr;
  chpl_macro_tmp_1213.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1213.addr = coerce_tmp_chpl3;
  tmp_chpl16 = chpl_macro_tmp_1213;
  chpl_check_nil((&tmp_chpl16)->addr, INT64(1233), INT32(28));
  dsiDim_chpl2(tmp_chpl16, &ret_tmp_chpl);
  call_tmp_chpl37 = ret_tmp_chpl;
  *(*(call_tmp_chpl36) + INT64(0)) = (&call_tmp_chpl37)->_low;
  chpl_check_nil(this_chpl7, INT64(1234), INT32(28));
  call_tmp_chpl38 = &((this_chpl7)->str);
  chpl_check_nil(this_chpl7, INT64(1234), INT32(28));
  tmp_chpl17 = (this_chpl7)->dom;
  coerce_tmp_chpl4 = (&tmp_chpl17)->addr;
  chpl_macro_tmp_1214.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1214.addr = coerce_tmp_chpl4;
  tmp_chpl18 = chpl_macro_tmp_1214;
  chpl_check_nil((&tmp_chpl18)->addr, INT64(1234), INT32(28));
  dsiDim_chpl2(tmp_chpl18, &ret_tmp_chpl2);
  *(*(call_tmp_chpl38) + INT64(0)) = INT64(1);
  chpl_check_nil(this_chpl7, INT64(1237), INT32(28));
  call_tmp_chpl39 = &((this_chpl7)->blk);
  *(*(call_tmp_chpl39) + INT64(0)) = INT64(1);
  chpl_check_nil(this_chpl7, INT64(1248), INT32(28));
  computeFactoredOffs_chpl2(this_chpl7);
  chpl_check_nil(this_chpl7, INT64(1250), INT32(28));
  call_tmp_chpl40 = &((this_chpl7)->blk);
  chpl_check_nil(this_chpl7, INT64(1250), INT32(28));
  tmp_chpl19 = (this_chpl7)->dom;
  coerce_tmp_chpl5 = (&tmp_chpl19)->addr;
  chpl_macro_tmp_1215.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1215.addr = coerce_tmp_chpl5;
  tmp_chpl20 = chpl_macro_tmp_1215;
  chpl_check_nil((&tmp_chpl20)->addr, INT64(1250), INT32(28));
  dsiDim_chpl2(tmp_chpl20, &ret_tmp_chpl3);
  call_tmp_chpl41 = ret_tmp_chpl3;
  call_tmp_chpl42 = sizeAs_chpl3(call_tmp_chpl41);
  call_tmp_chpl43 = (*(*(call_tmp_chpl40) + INT64(0)) * call_tmp_chpl42);
  chpl_check_nil(this_chpl7, INT64(1260), INT32(28));
  tmp_chpl21 = (this_chpl7)->data;
  chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl21)->locale, INT64(0), INT32(0)), INT64(1260), INT32(28), "cannot access remote data in local block");
  coerce_tmp_chpl6 = (&tmp_chpl21)->addr;
  if (coerce_tmp_chpl6 == nil) {
    call_tmp_chpl44 = _ddata_allocate_noinit_chpl2(call_tmp_chpl43, &_formal_tmp_out_callPostAlloc_chpl, c_sublocid_none);
    chpl_check_nil(this_chpl7, INT64(1266), INT32(28));
    (this_chpl7)->callPostAlloc = _formal_tmp_out_callPostAlloc_chpl;
    chpl_macro_tmp_1216.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1216.addr = call_tmp_chpl44;
    tmp_chpl22 = chpl_macro_tmp_1216;
    chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl22)->locale, INT64(0), INT32(0)), INT64(1266), INT32(28), "cannot access remote data in local block");
    chpl_check_nil(this_chpl7, INT64(1266), INT32(28));
    (this_chpl7)->data = tmp_chpl22;
    chpl_check_nil(this_chpl7, INT64(1276), INT32(28));
    tmp_chpl23 = (this_chpl7)->data;
    chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl23)->locale, INT64(0), INT32(0)), INT64(1276), INT32(28), "cannot access remote data in local block");
    coerce_tmp_chpl7 = (&tmp_chpl23)->addr;
    init_elts_chpl3(coerce_tmp_chpl7, call_tmp_chpl43, INT64(0));
    chpl_check_nil(this_chpl7, INT64(1277), INT32(28));
    dsiElementInitializationComplete_chpl3(this_chpl7);
  }
  chpl_check_nil(this_chpl7, INT64(1281), INT32(28));
  tmp_chpl24 = (this_chpl7)->dom;
  coerce_tmp_chpl8 = (&tmp_chpl24)->addr;
  chpl_macro_tmp_1217.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1217.addr = coerce_tmp_chpl8;
  tmp_chpl25 = chpl_macro_tmp_1217;
  chpl_check_nil((&tmp_chpl25)->addr, INT64(1281), INT32(28));
  call_tmp_chpl45 = dsiNumIndices_chpl(tmp_chpl25);
  if (call_tmp_chpl45 > INT64(0)) {
    chpl_check_nil(this_chpl7, INT64(1281), INT32(28));
    call_tmp_chpl46 = (INT64(0) - (this_chpl7)->factoredOffs);
    chpl_check_nil(this_chpl7, INT64(1281), INT32(28));
    tmp_chpl26 = (this_chpl7)->data;
    chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl26)->locale, INT64(0), INT32(0)), INT64(1281), INT32(28), "cannot access remote data in local block");
    coerce_tmp_chpl9 = (&tmp_chpl26)->addr;
    ret_chpl = ((_ddata_uint64_t_chpl)(nil));
    ret_chpl = (coerce_tmp_chpl9 + call_tmp_chpl46);
    chpl_macro_tmp_1218.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1218.addr = ret_chpl;
    tmp_chpl27 = chpl_macro_tmp_1218;
    chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl27)->locale, INT64(0), INT32(0)), INT64(1281), INT32(28), "cannot access remote data in local block");
    chpl_check_nil(this_chpl7, INT64(1281), INT32(28));
    (this_chpl7)->shiftedData = tmp_chpl27;
  }
  return;
}

/* DefaultRectangular.chpl:1407 */
static void dsiReallocate_chpl4(chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t this_chpl7,
                                chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F bounds_chpl) {
  string_chpl local__str_literal_75_chpl;
  int64_t local_dataParMinGranularity_chpl;
  chpl_bool local_dataParIgnoreRunningTasks_chpl;
  int64_t local_dataParTasksPerLocale_chpl;
  string_chpl local__str_literal_3454_chpl;
  string_chpl local__str_literal_3449_chpl;
  chpl_bool actuallyResizing_chpl;
  range_int64_t_bounded_F_chpl call_tmp_chpl36;
  range_int64_t_bounded_F_chpl ret_tmp_chpl;
  range_int64_t_bounded_F_chpl _ic__F0_this_chpl;
  int64_t i_chpl;
  range_int64_t_bounded_F_chpl this_chpl8;
  int64_t coerce_tmp_chpl3;
  range_int64_t_bounded_F_chpl this_chpl9;
  int64_t end_chpl;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl call_tmp_chpl38;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl ret_tmp_chpl2;
  chpl_bool call_tmp_chpl39;
  range_int64_t_bounded_F_chpl coerce_tmp_chpl5;
  chpl____wide_BaseArr coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_ddataResizePolicy tmp_chpl15;
  chpl_localeID_t call_tmp_chpl40;
  locale_chpl call_tmp_chpl41;
  locale_chpl ret_tmp_chpl3;
  chpl____wide__ref_chpl_localeID_t tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  locale_chpl call_tmp_chpl42;
  chpl_localeID_t call_tmp_chpl43;
  int32_t call_tmp_chpl44;
  chpl_localeID_t call_tmp_chpl45;
  locale_chpl call_tmp_chpl46;
  locale_chpl ret_tmp_chpl4;
  chpl____wide__ref_chpl_localeID_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl47;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl call_tmp_chpl48;
  range_int64_t_bounded_F_chpl coerce_tmp_chpl7;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl ret_tmp_chpl5;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl reallocD_chpl;
  _ref_DefaultRectangularDom_1_int64_t_F_chpl _instance_chpl = NULL;
  int64_t call_tmp_chpl49;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t oldSize_chpl;
  int64_t call_tmp_chpl50;
  chpl____wide__ref__wide__domain_DefaultRectangularDom_1_int64_t_F tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t newSize_chpl;
  int64_t call_tmp_chpl51;
  int64_t call_tmp_chpl52;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl19;
  int64_t call_tmp_chpl53;
  int64_t call_tmp_chpl54;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl20;
  int64_t call_tmp_chpl55;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl21;
  int64_t call_tmp_chpl56;
  chpl____wide__ref__wide__domain_DefaultRectangularDom_1_int64_t_F tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl23;
  chpl____wide__ddata_locale coerce_tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr call_tmp_chpl57;
  uint64_t call_tmp_chpl58;
  chpl_bool call_tmp_chpl59;
  chpl____wide__ref__tuple_1_star_int64_t call_tmp_chpl60 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl call_tmp_chpl61;
  DefaultRectangularDom_1_int64_t_F_chpl ret_chpl = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl ret_tmp_chpl6;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl25 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl62;
  chpl____wide_BaseArr coerce_tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_locale coerce_tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_ddataResizePolicy coerce_tmp_chpl15;
  chpl_ddataResizePolicy tmp_chpl26;
  chpl_bool callPostAlloc_chpl;
  int64_t call_tmp_chpl63;
  int64_t _ic__F1_high_chpl;
  int64_t i_chpl2;
  chpl____wide__ref_locale call_tmp_chpl64 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr call_tmp_chpl65;
  uint64_t call_tmp_chpl66;
  c_void_ptr call_tmp_chpl67;
  _ddata_locale_chpl call_tmp_chpl68 = NULL;
  uint64_t call_tmp_chpl69;
  int64_t call_tmp_chpl70;
  int64_t call_tmp_chpl71;
  uint64_t call_tmp_chpl72;
  chpl_bool call_tmp_chpl73;
  uint64_t call_tmp_chpl74;
  _ddata_locale_chpl ret_chpl2 = NULL;
  c_void_ptr call_tmp_chpl75;
  int32_t call_tmp_chpl76;
  c_void_ptr call_tmp_chpl77;
  uint64_t call_tmp_chpl78;
  c_void_ptr call_tmp_chpl79;
  chpl____wide__ddata_locale tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl80;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl28;
  int64_t call_tmp_chpl81;
  chpl____wide__ddata_locale coerce_tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_locale ret_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ddata_locale_chpl tmp_chpl29 = NULL;
  DefaultRectangularDom_1_int64_t_F_chpl ret_chpl4 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl30 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl new_temp_chpl = NULL;
  _ddata_locale_chpl tmp_chpl31 = NULL;
  c_void_ptr tmp_chpl32;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl33 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl copy_chpl = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F call_tmp_chpl82 = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F_chpl call_tmp_chpl83;
  range_int64_t_bounded_F_chpl coerce_tmp_chpl20;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl ret_tmp_chpl7;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl keep_chpl;
  _ref_DefaultRectangularDom_1_int64_t_F_chpl _instance_chpl2 = NULL;
  DefaultRectangularDom_1_int64_t_F_chpl ret_chpl5 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl34 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularDom_1_int64_t_F_chpl coerce_tmp_chpl21 = NULL;
  int64_t tasksPerLocale_chpl;
  chpl_bool ignoreRunning_chpl;
  int64_t minIndicesPerTask_chpl;
  _tuple_1_star_int64_t_chpl ret_tmp_chpl8;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl copy_chpl2 = NULL;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t this_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl35;
  locale_chpl call_tmp_chpl84;
  chpl_localeID_t call_tmp_chpl85;
  int32_t call_tmp_chpl86;
  chpl_localeID_t call_tmp_chpl87;
  locale_chpl call_tmp_chpl88;
  locale_chpl ret_tmp_chpl9;
  chpl____wide__ref_chpl_localeID_t tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl38;
  _ref_locale_chpl i_x_chpl = NULL;
  chpl____wide__ref_locale tmp_chpl39 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_x0_chpl;
  int64_t tmp_x1_chpl;
  _ref__tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl89 = NULL;
  _tuple_2_star_int64_t_chpl ret_tmp_chpl10;
  int64_t numChunks_chpl;
  int64_t parDim_chpl;
  range_int64_t_bounded_F_chpl tmpIter_chpl;
  range_int64_t_boundedLow_F_chpl call_tmp_chpl90;
  range_int64_t_boundedLow_F_chpl ret_tmp_chpl11;
  range_int64_t_bounded_F_chpl ret_tmp_chpl12;
  chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount_chpl = NULL;
  chpl___EndCount_AtomicT_int64_t_int64_t new_temp_chpl2 = NULL;
  int64_t numTasks_chpl;
  range_int64_t_bounded_F_chpl _ic__F0_this_chpl2;
  int64_t i_chpl3;
  range_int64_t_bounded_F_chpl this_chpl11;
  int64_t coerce_tmp_chpl25;
  range_int64_t_bounded_F_chpl this_chpl12;
  int64_t end_chpl2;
  _class_localscoforall_fn_chpl7 _args_forcoforall_fn_chpl = NULL;
  c_void_ptr _args_vforcoforall_fn_chpl;
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl40 = NULL;
  int64_t call_tmp_chpl91;
  chpl____wide__ref__wide__domain_DefaultRectangularDom_1_int64_t_F tmp_chpl41 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl92;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t_chpl ret_tmp_chpl13;
  chpl____wide_DefaultRectangularDom_1_int64_t_F this_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F call_tmp_chpl93 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl coerce_tmp_chpl28;
  range_int64_t_bounded_F_chpl _ic__F0_this_chpl3;
  int64_t i_chpl4;
  range_int64_t_bounded_F_chpl this_chpl14;
  int64_t coerce_tmp_chpl29;
  range_int64_t_bounded_F_chpl this_chpl15;
  int64_t end_chpl3;
  _ref__domain_DefaultRectangularDom_1_int64_t_F_chpl i_this_chpl = NULL;
  _tuple_1_star_int64_t_chpl idx_chpl;
  chpl_bool call_tmp_chpl94;
  chpl____wide__ddata_locale coerce_tmp_chpl30 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale call_tmp_chpl95 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_1_star_int64_t call_tmp_chpl96 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl coerce_tmp_chpl31 = NULL;
  chpl____wide__ref__tuple_1_star_int64_t call_tmp_chpl97 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl coerce_tmp_chpl32 = NULL;
  chpl____wide__ref__tuple_1_star_int64_t call_tmp_chpl98 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl coerce_tmp_chpl33 = NULL;
  DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl coerce_tmp_chpl34 = NULL;
  int64_t coerce_tmp_chpl35;
  DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl coerce_tmp_chpl36 = NULL;
  _ddata_locale_chpl coerce_tmp_chpl37 = NULL;
  chpl____wide__ddata_locale tmp_chpl42 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_locale tmp_chpl43 = {CHPL_LOCALEID_T_INIT, NULL};
  uint64_t call_tmp_chpl99;
  chpl_bool tmp_chpl44;
  DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl coerce_tmp_chpl38 = NULL;
  _ddata_locale_chpl coerce_tmp_chpl39 = NULL;
  chpl____wide__ddata_locale tmp_chpl45 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_locale tmp_chpl46 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_locale tmp_chpl47 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_locale tmp_chpl48 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1219;
  chpl____wide_BaseArr chpl_macro_tmp_1220;
  chpl____wide__ref_chpl_ddataResizePolicy chpl_macro_tmp_1221;
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_1222;
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_1223;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_1224;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1225;
  chpl____wide__ref__wide__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1226;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1227;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1228;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1229;
  chpl____wide__ref__wide__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1230;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_1231;
  chpl____wide__ref__tuple_1_star_int64_t chpl_macro_tmp_1232;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1233;
  chpl____wide__ref_int64_t chpl_macro_tmp_1234;
  chpl____wide_BaseArr chpl_macro_tmp_1235;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_1236;
  chpl____wide__ref_chpl_ddataResizePolicy chpl_macro_tmp_1237;
  chpl____wide__ref_locale chpl_macro_tmp_1238;
  chpl____wide__ddata_locale chpl_macro_tmp_1239;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_1240;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1241;
  chpl____wide__ref_int64_t chpl_macro_tmp_1242;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_1243;
  chpl____wide__ddata_locale chpl_macro_tmp_1244;
  chpl____wide__ddata_locale chpl_macro_tmp_1245;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_1246;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1247;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1248;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1249;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_1250;
  chpl____wide__nilType chpl_macro_tmp_1251;
  chpl____wide_Error chpl_macro_tmp_1252;
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_1253;
  chpl____wide_object chpl_macro_tmp_1254;
  chpl____wide__nilType chpl_macro_tmp_1255;
  chpl____wide_object chpl_macro_tmp_1256;
  chpl____wide__ref_int64_t chpl_macro_tmp_1257;
  chpl____wide__ref_locale chpl_macro_tmp_1258;
  chpl__class_localscoforall_fn_chpl7_object chpl_macro_tmp_1259;
  chpl____wide__nilType chpl_macro_tmp_1260;
  chpl____wide_Error chpl_macro_tmp_1261;
  chpl____wide__ref__wide__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1262;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1263;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1264;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1265;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_1266;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_1267;
  chpl____wide__ref_locale chpl_macro_tmp_1268;
  chpl____wide__ref__tuple_1_star_int64_t chpl_macro_tmp_1269;
  chpl____wide__ref__tuple_1_star_int64_t chpl_macro_tmp_1270;
  chpl____wide__ref__tuple_1_star_int64_t chpl_macro_tmp_1271;
  chpl____wide__ref_int64_t chpl_macro_tmp_1272;
  chpl____wide__ddata_locale chpl_macro_tmp_1273;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_1274;
  chpl____wide__ddata_locale chpl_macro_tmp_1275;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_1276;
  chpl____wide__ref_locale chpl_macro_tmp_1277;
  chpl____wide__ref_locale chpl_macro_tmp_1278;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  local_dataParMinGranularity_chpl = dataParMinGranularity_chpl;
  local_dataParIgnoreRunningTasks_chpl = dataParIgnoreRunningTasks_chpl;
  local_dataParTasksPerLocale_chpl = dataParTasksPerLocale_chpl;
  local__str_literal_3454_chpl = _str_literal_3454_chpl /* "internal error: Unsigned integer overflow during memset of dynamic block" */;
  local__str_literal_3449_chpl = _str_literal_3449_chpl /* "internal error: dsiReallocate() can only be called from an array's home locale" */;
  actuallyResizing_chpl = UINT8(false);
  indices_chpl(bounds_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  _ic__F0_this_chpl = call_tmp_chpl36;
  checkIfIterWillOverflow_chpl(call_tmp_chpl36, UINT8(true));
  i_chpl = INT64(0);
  this_chpl8 = _ic__F0_this_chpl;
  coerce_tmp_chpl3 = (&this_chpl8)->_low;
  this_chpl9 = _ic__F0_this_chpl;
  end_chpl = (&this_chpl9)->_high;
  for (i_chpl = coerce_tmp_chpl3; ((i_chpl <= end_chpl)); i_chpl += INT64(1)) {
    call_tmp_chpl37 = this_chpl5(bounds_chpl, i_chpl);
    chpl_check_nil((&this_chpl7)->addr, INT64(1415), INT32(28));
    chpl_macro_tmp_1219.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_1219.addr = &(((&this_chpl7)->addr)->dom);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID((chpl_macro_tmp_1219).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1219).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(29), INT64(1415), INT64(28));
    chpl_check_nil((&coerce_tmp_chpl4)->addr, INT64(1415), INT32(28));
    dsiDim_chpl(coerce_tmp_chpl4, i_chpl, &ret_tmp_chpl2);
    call_tmp_chpl38 = ret_tmp_chpl2;
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID((call_tmp_chpl37).locale, INT64(0), INT32(0)), (call_tmp_chpl37).addr, sizeof(range_int64_t_bounded_F_chpl), COMMID(30), INT64(1415), INT64(28));
    call_tmp_chpl39 = chpl___EXCLAMATION__ASSIGN_2(coerce_tmp_chpl5, call_tmp_chpl38);
    if (call_tmp_chpl39) {
      actuallyResizing_chpl = UINT8(true);
      goto _breakLabel_chpl;
    }
  }
  _breakLabel_chpl:;
  if (! actuallyResizing_chpl) {
    goto _end_dsiReallocate_chpl;
  }
  chpl_macro_tmp_1220.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1220.addr = ((BaseArr_chpl)((&this_chpl7)->addr));
  coerce_tmp_chpl6 = chpl_macro_tmp_1220;
  chpl_check_nil((&coerce_tmp_chpl6)->addr, INT64(1424), INT32(28));
  chpl_macro_tmp_1221.locale = (&coerce_tmp_chpl6)->locale;
  chpl_macro_tmp_1221.addr = &(((&coerce_tmp_chpl6)->addr)->_resizePolicy);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1221).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1221).addr, sizeof(chpl_ddataResizePolicy), COMMID(31), INT64(1424), INT64(28));
  if (tmp_chpl15 == chpl_ddataResizePolicy_normalInit_chpl) {
  }
  call_tmp_chpl40 = (&this_chpl7)->locale;
  chpl_macro_tmp_1222.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1222.addr = &call_tmp_chpl40;
  tmp_chpl16 = chpl_macro_tmp_1222;
  chpl_localeID_to_locale(tmp_chpl16, &ret_tmp_chpl3);
  call_tmp_chpl41 = ret_tmp_chpl3;
  call_tmp_chpl44 = get_chpl_nodeID();
  call_tmp_chpl45 = chpl_rt_buildLocaleID(call_tmp_chpl44, c_sublocid_any);
  call_tmp_chpl43 = call_tmp_chpl45;
  chpl_macro_tmp_1223.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1223.addr = &call_tmp_chpl43;
  tmp_chpl17 = chpl_macro_tmp_1223;
  chpl_localeID_to_locale(tmp_chpl17, &ret_tmp_chpl4);
  call_tmp_chpl46 = ret_tmp_chpl4;
  call_tmp_chpl42 = call_tmp_chpl46;
  call_tmp_chpl47 = chpl___EXCLAMATION__ASSIGN_(&call_tmp_chpl41, &call_tmp_chpl42);
  if (call_tmp_chpl47) {
    halt_chpl(&local__str_literal_3449_chpl, INT64(1430), INT32(28));
  } else {
    chpl_macro_tmp_1224.locale = (bounds_chpl).locale;
    chpl_macro_tmp_1224.addr = (*((bounds_chpl).addr) + INT64(0));
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl7)), chpl_nodeFromLocaleID((chpl_macro_tmp_1224).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1224).addr, sizeof(range_int64_t_bounded_F_chpl), COMMID(32), INT64(1433), INT64(28));
    chpl__buildDomainExpr(coerce_tmp_chpl7, UINT8(true), &ret_tmp_chpl5);
    call_tmp_chpl48 = ret_tmp_chpl5;
    reallocD_chpl = call_tmp_chpl48;
    _instance_chpl = &((&((&reallocD_chpl)->_instance))->addr);
    chpl_check_nil(_instance_chpl, INT64(1433), INT32(28));
    ((BaseDom_chpl)(*(_instance_chpl)))->definedConst = UINT8(true);
    chpl_check_nil((&this_chpl7)->addr, INT64(1439), INT32(28));
    chpl_macro_tmp_1225.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_1225.addr = &(((&this_chpl7)->addr)->dom);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl8)), chpl_nodeFromLocaleID((chpl_macro_tmp_1225).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1225).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(33), INT64(1439), INT64(28));
    chpl_check_nil((&coerce_tmp_chpl8)->addr, INT64(1439), INT32(28));
    call_tmp_chpl49 = dsiNumIndices_chpl(coerce_tmp_chpl8);
    oldSize_chpl = call_tmp_chpl49;
    chpl_macro_tmp_1226.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1226.addr = &reallocD_chpl;
    tmp_chpl18 = chpl_macro_tmp_1226;
    call_tmp_chpl50 = sizeAs_chpl(tmp_chpl18);
    newSize_chpl = call_tmp_chpl50;
    call_tmp_chpl51 = low_chpl(&reallocD_chpl);
    chpl_check_nil((&this_chpl7)->addr, INT64(1442), INT32(28));
    chpl_macro_tmp_1227.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_1227.addr = &(((&this_chpl7)->addr)->dom);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl9)), chpl_nodeFromLocaleID((chpl_macro_tmp_1227).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1227).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(34), INT64(1442), INT64(28));
    chpl_check_nil((&coerce_tmp_chpl9)->addr, INT64(1442), INT32(28));
    call_tmp_chpl52 = dsiLow_chpl(coerce_tmp_chpl9);
    if (call_tmp_chpl51 == call_tmp_chpl52) {
      call_tmp_chpl53 = stride_chpl(&reallocD_chpl);
      chpl_check_nil((&this_chpl7)->addr, INT64(1442), INT32(28));
      chpl_macro_tmp_1228.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1228.addr = &(((&this_chpl7)->addr)->dom);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl10)), chpl_nodeFromLocaleID((chpl_macro_tmp_1228).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1228).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(35), INT64(1442), INT64(28));
      chpl_check_nil((&coerce_tmp_chpl10)->addr, INT64(1442), INT32(28));
      call_tmp_chpl54 = dsiStride_chpl(coerce_tmp_chpl10);
      tmp_chpl19 = (call_tmp_chpl53 == call_tmp_chpl54);
    } else {
      tmp_chpl19 = UINT8(false);
    }
    if (tmp_chpl19) {
      chpl_check_nil((&this_chpl7)->addr, INT64(1443), INT32(28));
      chpl_macro_tmp_1229.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1229.addr = &(((&this_chpl7)->addr)->dom);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl11)), chpl_nodeFromLocaleID((chpl_macro_tmp_1229).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1229).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(36), INT64(1443), INT64(28));
      chpl_check_nil((&coerce_tmp_chpl11)->addr, INT64(1443), INT32(28));
      call_tmp_chpl55 = dsiNumIndices_chpl(coerce_tmp_chpl11);
      tmp_chpl20 = (call_tmp_chpl55 > INT64(0));
    } else {
      tmp_chpl20 = UINT8(false);
    }
    if (tmp_chpl20) {
      chpl_macro_tmp_1230.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1230.addr = &reallocD_chpl;
      tmp_chpl22 = chpl_macro_tmp_1230;
      call_tmp_chpl56 = size_chpl(tmp_chpl22);
      tmp_chpl21 = (call_tmp_chpl56 > INT64(0));
    } else {
      tmp_chpl21 = UINT8(false);
    }
    if (tmp_chpl21) {
      chpl_check_nil((&this_chpl7)->addr, INT64(1444), INT32(28));
      chpl_macro_tmp_1231.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1231.addr = &(((&this_chpl7)->addr)->data);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl12)), chpl_nodeFromLocaleID((chpl_macro_tmp_1231).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1231).addr, sizeof(chpl____wide__ddata_locale), COMMID(37), INT64(1444), INT64(28));
      call_tmp_chpl57 = ((c_void_ptr)((&coerce_tmp_chpl12)->addr));
      checkValue_chpl(call_tmp_chpl49);
      call_tmp_chpl58 = ((uint64_t)(oldSize_chpl));
      checkValue_chpl(call_tmp_chpl50);
      call_tmp_chpl59 = chpl_mem_array_supports_realloc(call_tmp_chpl57, call_tmp_chpl58, ((uint64_t)(newSize_chpl)), ((uint64_t)(sizeof(locale_chpl))), INT64(1444), INT32(28));
      tmp_chpl23 = call_tmp_chpl59;
    } else {
      tmp_chpl23 = UINT8(false);
    }
    if (tmp_chpl23) {
      chpl_check_nil((&this_chpl7)->addr, INT64(1449), INT32(28));
      chpl_macro_tmp_1232.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1232.addr = &(((&this_chpl7)->addr)->sizesPerDim);
      call_tmp_chpl60 = chpl_macro_tmp_1232;
      tmp_chpl24 = (&reallocD_chpl)->_instance;
      ret_chpl = (&tmp_chpl24)->addr;
      chpl_macro_tmp_1233.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1233.addr = ret_chpl;
      tmp_chpl25 = chpl_macro_tmp_1233;
      chpl_check_nil((&tmp_chpl25)->addr, INT64(1449), INT32(28));
      dsiDim_chpl2(tmp_chpl25, &ret_tmp_chpl6);
      call_tmp_chpl61 = ret_tmp_chpl6;
      call_tmp_chpl62 = sizeAs_chpl3(call_tmp_chpl61);
      chpl_macro_tmp_1234.locale = (call_tmp_chpl60).locale;
      chpl_macro_tmp_1234.addr = (*((call_tmp_chpl60).addr) + INT64(0));
      chpl_gen_comm_put(((void*)(&call_tmp_chpl62)), chpl_nodeFromLocaleID((chpl_macro_tmp_1234).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1234).addr, sizeof(int64_t), COMMID(38), INT64(1449), INT64(28));
      chpl_macro_tmp_1235.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1235.addr = ((BaseArr_chpl)((&this_chpl7)->addr));
      coerce_tmp_chpl13 = chpl_macro_tmp_1235;
      chpl_check_nil((&this_chpl7)->addr, INT64(1450), INT32(28));
      chpl_macro_tmp_1236.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1236.addr = &(((&this_chpl7)->addr)->data);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl14)), chpl_nodeFromLocaleID((chpl_macro_tmp_1236).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1236).addr, sizeof(chpl____wide__ddata_locale), COMMID(39), INT64(1450), INT64(28));
      chpl_check_nil((&coerce_tmp_chpl13)->addr, INT64(1455), INT32(28));
      chpl_macro_tmp_1237.locale = (&coerce_tmp_chpl13)->locale;
      chpl_macro_tmp_1237.addr = &(((&coerce_tmp_chpl13)->addr)->_resizePolicy);
      chpl_gen_comm_get(((void*)(&tmp_chpl26)), chpl_nodeFromLocaleID((chpl_macro_tmp_1237).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1237).addr, sizeof(chpl_ddataResizePolicy), COMMID(40), INT64(1455), INT64(28));
      coerce_tmp_chpl15 = tmp_chpl26;
      callPostAlloc_chpl = UINT8(false);
      if (oldSize_chpl > newSize_chpl) {
        call_tmp_chpl63 = (oldSize_chpl - INT64(1));
        _ic__F1_high_chpl = call_tmp_chpl63;
        i_chpl2 = INT64(0);
        chpl_checkIfRangeIterWillOverflow(newSize_chpl, call_tmp_chpl63, INT64(1), newSize_chpl, call_tmp_chpl63, UINT8(true));
        for (i_chpl2 = newSize_chpl; ((i_chpl2 <= _ic__F1_high_chpl)); i_chpl2 += INT64(1)) {
          chpl_macro_tmp_1238.locale = (&coerce_tmp_chpl14)->locale;
          chpl_macro_tmp_1238.addr = ((&coerce_tmp_chpl14)->addr + i_chpl2);
          call_tmp_chpl64 = chpl_macro_tmp_1238;
          deinit_chpl14(call_tmp_chpl64);
        }
      }
      call_tmp_chpl65 = ((c_void_ptr)((&coerce_tmp_chpl14)->addr));
      checkValue_chpl(oldSize_chpl);
      call_tmp_chpl66 = ((uint64_t)(oldSize_chpl));
      checkValue_chpl(newSize_chpl);
      call_tmp_chpl67 = chpl_mem_array_realloc(call_tmp_chpl65, call_tmp_chpl66, ((uint64_t)(newSize_chpl)), ((uint64_t)(sizeof(locale_chpl))), c_sublocid_none, &callPostAlloc_chpl, INT64(1450), INT32(28));
      call_tmp_chpl68 = ((_ddata_locale_chpl)(call_tmp_chpl67));
      if (coerce_tmp_chpl15 == chpl_ddataResizePolicy_normalInit_chpl) {
        init_elts_chpl(call_tmp_chpl68, newSize_chpl, oldSize_chpl);
      } else {
        if (coerce_tmp_chpl15 == chpl_ddataResizePolicy_skipInit_chpl) {
        } else {
          if (coerce_tmp_chpl15 == chpl_ddataResizePolicy_skipInitButClearMem_chpl) {
            if (newSize_chpl > oldSize_chpl) {
              call_tmp_chpl69 = ((uint64_t)(sizeof(locale_chpl)));
              call_tmp_chpl71 = (newSize_chpl - oldSize_chpl);
              call_tmp_chpl70 = call_tmp_chpl71;
              checkValue_chpl(call_tmp_chpl71);
              call_tmp_chpl72 = ((uint64_t)(call_tmp_chpl70));
              call_tmp_chpl73 = safeMul_chpl(call_tmp_chpl72, call_tmp_chpl69);
              if (call_tmp_chpl73) {
                call_tmp_chpl74 = (call_tmp_chpl72 * call_tmp_chpl69);
                ret_chpl2 = ((_ddata_locale_chpl)(nil));
                ret_chpl2 = (call_tmp_chpl68 + oldSize_chpl);
                call_tmp_chpl75 = ((c_void_ptr)(ret_chpl2));
                checkValue_chpl3();
                call_tmp_chpl76 = ((int32_t)(INT8(0)));
                checkValue_chpl4();
                memset(call_tmp_chpl75, call_tmp_chpl76, call_tmp_chpl74);
              } else {
                halt_chpl(&local__str_literal_3454_chpl, INT64(1450), INT32(28));
              }
            }
          }
        }
      }
      if (callPostAlloc_chpl) {
        call_tmp_chpl77 = ((c_void_ptr)((&coerce_tmp_chpl14)->addr));
        checkValue_chpl(oldSize_chpl);
        call_tmp_chpl78 = ((uint64_t)(oldSize_chpl));
        call_tmp_chpl79 = ((c_void_ptr)(call_tmp_chpl68));
        checkValue_chpl(newSize_chpl);
        chpl_mem_array_postRealloc(call_tmp_chpl77, call_tmp_chpl78, call_tmp_chpl79, ((uint64_t)(newSize_chpl)), ((uint64_t)(sizeof(locale_chpl))), INT64(1450), INT32(28));
      }
      chpl_macro_tmp_1239.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1239.addr = call_tmp_chpl68;
      tmp_chpl27 = chpl_macro_tmp_1239;
      if (chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl27)->locale, INT64(0), INT32(0))) {
        chpl_error("Attempted to assign to local class field with remote class", INT64(1450), INT32(28));
      }
      chpl_check_nil((&this_chpl7)->addr, INT64(1450), INT32(28));
      chpl_macro_tmp_1240.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1240.addr = &(((&this_chpl7)->addr)->data);
      chpl_gen_comm_put(((void*)(&tmp_chpl27)), chpl_nodeFromLocaleID((chpl_macro_tmp_1240).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1240).addr, sizeof(chpl____wide__ddata_locale), COMMID(41), INT64(1450), INT64(28));
      chpl_check_nil((&this_chpl7)->addr, INT64(1456), INT32(28));
      chpl_macro_tmp_1241.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1241.addr = &(((&this_chpl7)->addr)->dom);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl16)), chpl_nodeFromLocaleID((chpl_macro_tmp_1241).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1241).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(42), INT64(1456), INT64(28));
      chpl_check_nil((&coerce_tmp_chpl16)->addr, INT64(1456), INT32(28));
      call_tmp_chpl80 = dsiNumIndices_chpl(coerce_tmp_chpl16);
      if (call_tmp_chpl80 > INT64(0)) {
        chpl_check_nil((&this_chpl7)->addr, INT64(1456), INT32(28));
        chpl_macro_tmp_1242.locale = (&this_chpl7)->locale;
        chpl_macro_tmp_1242.addr = &(((&this_chpl7)->addr)->factoredOffs);
        chpl_gen_comm_get(((void*)(&tmp_chpl28)), chpl_nodeFromLocaleID((chpl_macro_tmp_1242).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1242).addr, sizeof(int64_t), COMMID(43), INT64(1456), INT64(28));
        call_tmp_chpl81 = (INT64(0) - tmp_chpl28);
        chpl_check_nil((&this_chpl7)->addr, INT64(1456), INT32(28));
        chpl_macro_tmp_1243.locale = (&this_chpl7)->locale;
        chpl_macro_tmp_1243.addr = &(((&this_chpl7)->addr)->data);
        chpl_gen_comm_get(((void*)(&coerce_tmp_chpl17)), chpl_nodeFromLocaleID((chpl_macro_tmp_1243).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1243).addr, sizeof(chpl____wide__ddata_locale), COMMID(44), INT64(1456), INT64(28));
        tmp_chpl29 = ((_ddata_locale_chpl)(nil));
        chpl_macro_tmp_1244.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1244.addr = tmp_chpl29;
        ret_chpl3 = chpl_macro_tmp_1244;
        chpl_macro_tmp_1245.locale = (&coerce_tmp_chpl17)->locale;
        chpl_macro_tmp_1245.addr = ((&coerce_tmp_chpl17)->addr + call_tmp_chpl81);
        ret_chpl3 = chpl_macro_tmp_1245;
        if (chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&ret_chpl3)->locale, INT64(0), INT32(0))) {
          chpl_error("Attempted to assign to local class field with remote class", INT64(1456), INT32(28));
        }
        chpl_check_nil((&this_chpl7)->addr, INT64(1456), INT32(28));
        chpl_macro_tmp_1246.locale = (&this_chpl7)->locale;
        chpl_macro_tmp_1246.addr = &(((&this_chpl7)->addr)->shiftedData);
        chpl_gen_comm_put(((void*)(&ret_chpl3)), chpl_nodeFromLocaleID((chpl_macro_tmp_1246).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1246).addr, sizeof(chpl____wide__ddata_locale), COMMID(45), INT64(1456), INT64(28));
      }
    } else {
      tmp_chpl30 = (&reallocD_chpl)->_instance;
      ret_chpl4 = (&tmp_chpl30)->addr;
      tmp_chpl31 = ((_ddata_locale_chpl)(nil));
      tmp_chpl32 = ((c_void_ptr)(nil));
      chpl_macro_tmp_1247.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1247.addr = ret_chpl4;
      tmp_chpl33 = chpl_macro_tmp_1247;
      new_temp_chpl = _new_chpl8(tmp_chpl33, tmp_chpl31, UINT8(false), UINT8(false), tmp_chpl32, INT64(1462), INT32(28));
      copy_chpl = new_temp_chpl;
      chpl_check_nil((&this_chpl7)->addr, INT64(1489), INT32(28));
      chpl_macro_tmp_1248.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1248.addr = &(((&this_chpl7)->addr)->dom);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl18)), chpl_nodeFromLocaleID((chpl_macro_tmp_1248).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1248).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(46), INT64(1489), INT64(28));
      coerce_tmp_chpl19 = coerce_tmp_chpl18;
      chpl_check_nil((&coerce_tmp_chpl19)->addr, INT64(1489), INT32(28));
      chpl_macro_tmp_1249.locale = (&coerce_tmp_chpl19)->locale;
      chpl_macro_tmp_1249.addr = &(((&coerce_tmp_chpl19)->addr)->ranges);
      call_tmp_chpl82 = chpl_macro_tmp_1249;
      chpl_macro_tmp_1250.locale = (call_tmp_chpl82).locale;
      chpl_macro_tmp_1250.addr = (*((call_tmp_chpl82).addr) + INT64(0));
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl20)), chpl_nodeFromLocaleID((chpl_macro_tmp_1250).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1250).addr, sizeof(range_int64_t_bounded_F_chpl), COMMID(47), INT64(1489), INT64(28));
      this_chpl(&reallocD_chpl, coerce_tmp_chpl20, &ret_tmp_chpl7);
      call_tmp_chpl83 = ret_tmp_chpl7;
      keep_chpl = call_tmp_chpl83;
      _instance_chpl2 = &((&((&keep_chpl)->_instance))->addr);
      chpl_check_nil(_instance_chpl2, INT64(1489), INT32(28));
      ((BaseDom_chpl)(*(_instance_chpl2)))->definedConst = UINT8(false);
      tmp_chpl34 = (&keep_chpl)->_instance;
      ret_chpl5 = (&tmp_chpl34)->addr;
      coerce_tmp_chpl21 = ret_chpl5;
      tasksPerLocale_chpl = local_dataParTasksPerLocale_chpl;
      ignoreRunning_chpl = local_dataParIgnoreRunningTasks_chpl;
      minIndicesPerTask_chpl = local_dataParMinGranularity_chpl;
      createTuple_chpl(INT64(0), &ret_tmp_chpl8);
      chpl_macro_tmp_1251.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1251.addr = nil;
      chpl_macro_tmp_1252.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1252.addr = NULL;
      error_chpl = chpl_macro_tmp_1252;
      copy_chpl2 = new_temp_chpl;
      this_chpl10 = this_chpl7;
      if (tasksPerLocale_chpl == INT64(0)) {
        call_tmp_chpl86 = get_chpl_nodeID();
        call_tmp_chpl87 = chpl_rt_buildLocaleID(call_tmp_chpl86, c_sublocid_any);
        call_tmp_chpl85 = call_tmp_chpl87;
        chpl_macro_tmp_1253.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1253.addr = &call_tmp_chpl85;
        tmp_chpl36 = chpl_macro_tmp_1253;
        chpl_localeID_to_locale(tmp_chpl36, &ret_tmp_chpl9);
        call_tmp_chpl88 = ret_tmp_chpl9;
        call_tmp_chpl84 = call_tmp_chpl88;
        coerce_tmp_chpl22 = (&call_tmp_chpl84)->_instance;
        chpl_macro_tmp_1254.locale = (&coerce_tmp_chpl22)->locale;
        chpl_macro_tmp_1254.addr = ((object_chpl)((&coerce_tmp_chpl22)->addr));
        coerce_tmp_chpl23 = chpl_macro_tmp_1254;
        chpl_macro_tmp_1255.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1255.addr = nil;
        chpl_macro_tmp_1256.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1256.addr = NULL;
        tmp_chpl37 = chpl_macro_tmp_1256;
        if (! (((&coerce_tmp_chpl23)->addr != (&tmp_chpl37)->addr) || ((!(! (&coerce_tmp_chpl23)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl23)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl37)->locale, INT64(0), INT32(0)))))) {
          nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1492), INT32(28));
        }
        coerce_tmp_chpl24 = coerce_tmp_chpl22;
        chpl_check_nil((&coerce_tmp_chpl24)->addr, INT64(1492), INT32(28));
        chpl_macro_tmp_1257.locale = (&coerce_tmp_chpl24)->locale;
        chpl_macro_tmp_1257.addr = &(((&coerce_tmp_chpl24)->addr)->maxTaskPar);
        chpl_gen_comm_get(((void*)(&tmp_chpl38)), chpl_nodeFromLocaleID((chpl_macro_tmp_1257).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1257).addr, sizeof(int64_t), COMMID(48), INT64(1492), INT64(28));
        tmp_chpl35 = tmp_chpl38;
        i_x_chpl = &call_tmp_chpl84;
        chpl_macro_tmp_1258.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1258.addr = i_x_chpl;
        tmp_chpl39 = chpl_macro_tmp_1258;
        deinit_chpl14(tmp_chpl39);
      } else {
        tmp_chpl35 = tasksPerLocale_chpl;
      }
      if (chpl_task_getSerial()) {
        tmp_x0_chpl = INT64(1);
        tmp_x1_chpl = INT64(0);
      } else {
        chpl_check_nil(coerce_tmp_chpl21, INT64(1492), INT32(28));
        call_tmp_chpl89 = &((coerce_tmp_chpl21)->ranges);
        _computeChunkStuff_chpl(tmp_chpl35, ignoreRunning_chpl, minIndicesPerTask_chpl, call_tmp_chpl89, &ret_tmp_chpl10);
        tmp_x0_chpl = *(ret_tmp_chpl10 + INT64(0));
        tmp_x1_chpl = *(ret_tmp_chpl10 + INT64(1));
      }
      numChunks_chpl = tmp_x0_chpl;
      parDim_chpl = tmp_x1_chpl;
      chpl_build_low_bounded_range(INT64(0), &ret_tmp_chpl11);
      call_tmp_chpl90 = ret_tmp_chpl11;
      chpl___POUND_(call_tmp_chpl90, tmp_x0_chpl, &ret_tmp_chpl12);
      tmpIter_chpl = ret_tmp_chpl12;
      new_temp_chpl2 = _new_chpl(INT64(1492), INT32(28));
      _coforallCount_chpl = new_temp_chpl2;
      numTasks_chpl = chpl_boundedCoforallSize(tmpIter_chpl);
      _upEndCount_chpl(_coforallCount_chpl, numTasks_chpl);
      chpl_resetTaskSpawn(numTasks_chpl);
      _ic__F0_this_chpl2 = tmpIter_chpl;
      checkIfIterWillOverflow_chpl(tmpIter_chpl, UINT8(true));
      i_chpl3 = INT64(0);
      this_chpl11 = _ic__F0_this_chpl2;
      coerce_tmp_chpl25 = (&this_chpl11)->_low;
      this_chpl12 = _ic__F0_this_chpl2;
      end_chpl2 = (&this_chpl12)->_high;
      for (i_chpl3 = coerce_tmp_chpl25; ((i_chpl3 <= end_chpl2)); i_chpl3 += INT64(1)) {
        _args_forcoforall_fn_chpl = ((_class_localscoforall_fn_chpl7)(&chpl_macro_tmp_1259));
        chpl_check_nil(_args_forcoforall_fn_chpl, INT64(1492), INT32(28));
        (_args_forcoforall_fn_chpl)->_0_numChunks = numChunks_chpl;
        chpl_check_nil(_args_forcoforall_fn_chpl, INT64(1492), INT32(28));
        (_args_forcoforall_fn_chpl)->_1_parDim = parDim_chpl;
        chpl_check_nil(_args_forcoforall_fn_chpl, INT64(1492), INT32(28));
        (_args_forcoforall_fn_chpl)->_2_coerce_tmp = coerce_tmp_chpl21;
        chpl_check_nil(_args_forcoforall_fn_chpl, INT64(1492), INT32(28));
        (_args_forcoforall_fn_chpl)->_3__coforallCount = _coforallCount_chpl;
        chpl_check_nil(_args_forcoforall_fn_chpl, INT64(1492), INT32(28));
        (_args_forcoforall_fn_chpl)->_4_chunk = i_chpl3;
        chpl_check_nil(_args_forcoforall_fn_chpl, INT64(1492), INT32(28));
        (_args_forcoforall_fn_chpl)->_5_copy = copy_chpl2;
        chpl_check_nil(_args_forcoforall_fn_chpl, INT64(1492), INT32(28));
        (_args_forcoforall_fn_chpl)->_6_this = this_chpl10;
        _args_vforcoforall_fn_chpl = ((void*)(_args_forcoforall_fn_chpl));
        /*** wrapcoforall_fn_chpl5 ***/ chpl_taskAddCoStmt(chpl_task_getRequestedSubloc(), INT64(78), ((chpl_task_bundle_p)(_args_vforcoforall_fn_chpl)), sizeof(chpl__class_localscoforall_fn_chpl7_object), INT64(1492), INT32(28));
      }
      chpl_macro_tmp_1260.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1260.addr = nil;
      chpl_macro_tmp_1261.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1261.addr = NULL;
      error_chpl2 = chpl_macro_tmp_1261;
      tmp_chpl40 = &error_chpl2;
      _waitEndCount_chpl3(_coforallCount_chpl, numTasks_chpl, tmp_chpl40);
      if ((&error_chpl2)->addr != nil) {
        chpl__delete3(_coforallCount_chpl);
        error_chpl = error_chpl2;
        goto forall_IBB_break_label_chpl;
      }
      chpl__delete3(_coforallCount_chpl);
      chpl_after_forall_fence();
      forall_IBB_break_label_chpl:;
      if ((&error_chpl)->addr != nil) {
        chpl_propagate_error(error_chpl, INT64(1492), INT32(28));
      }
      chpl_after_forall_fence();
      chpl_macro_tmp_1262.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1262.addr = &reallocD_chpl;
      tmp_chpl41 = chpl_macro_tmp_1262;
      call_tmp_chpl91 = size_chpl(tmp_chpl41);
      chpl_check_nil((&this_chpl7)->addr, INT64(1504), INT32(28));
      chpl_macro_tmp_1263.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1263.addr = &(((&this_chpl7)->addr)->dom);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl26)), chpl_nodeFromLocaleID((chpl_macro_tmp_1263).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1263).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(49), INT64(1504), INT64(28));
      chpl_check_nil((&coerce_tmp_chpl26)->addr, INT64(1504), INT32(28));
      call_tmp_chpl92 = dsiNumIndices_chpl(coerce_tmp_chpl26);
      if (call_tmp_chpl91 < call_tmp_chpl92) {
        chpl_check_nil((&this_chpl7)->addr, INT64(1512), INT32(28));
        chpl_macro_tmp_1264.locale = (&this_chpl7)->locale;
        chpl_macro_tmp_1264.addr = &(((&this_chpl7)->addr)->dom);
        chpl_gen_comm_get(((void*)(&coerce_tmp_chpl27)), chpl_nodeFromLocaleID((chpl_macro_tmp_1264).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1264).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(50), INT64(1512), INT64(28));
        createTuple_chpl(INT64(0), &ret_tmp_chpl13);
        this_chpl13 = coerce_tmp_chpl27;
        chpl_check_nil((&this_chpl13)->addr, INT64(1512), INT32(28));
        chpl_macro_tmp_1265.locale = (&this_chpl13)->locale;
        chpl_macro_tmp_1265.addr = &(((&this_chpl13)->addr)->ranges);
        call_tmp_chpl93 = chpl_macro_tmp_1265;
        chpl_macro_tmp_1266.locale = (call_tmp_chpl93).locale;
        chpl_macro_tmp_1266.addr = (*((call_tmp_chpl93).addr) + INT64(0));
        chpl_gen_comm_get(((void*)(&coerce_tmp_chpl28)), chpl_nodeFromLocaleID((chpl_macro_tmp_1266).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1266).addr, sizeof(range_int64_t_bounded_F_chpl), COMMID(51), INT64(1512), INT64(28));
        _ic__F0_this_chpl3 = coerce_tmp_chpl28;
        checkIfIterWillOverflow_chpl(coerce_tmp_chpl28, UINT8(true));
        i_chpl4 = INT64(0);
        this_chpl14 = _ic__F0_this_chpl3;
        coerce_tmp_chpl29 = (&this_chpl14)->_low;
        this_chpl15 = _ic__F0_this_chpl3;
        end_chpl3 = (&this_chpl15)->_high;
        for (i_chpl4 = coerce_tmp_chpl29; ((i_chpl4 <= end_chpl3)); i_chpl4 += INT64(1)) {
          i_this_chpl = &keep_chpl;
          *(idx_chpl + INT64(0)) = i_chpl4;
          call_tmp_chpl94 = contains_chpl(i_this_chpl, &idx_chpl);
          if (! call_tmp_chpl94) {
            chpl_check_nil((&this_chpl7)->addr, INT64(1514), INT32(28));
            chpl_macro_tmp_1267.locale = (&this_chpl7)->locale;
            chpl_macro_tmp_1267.addr = &(((&this_chpl7)->addr)->shiftedData);
            chpl_gen_comm_get(((void*)(&coerce_tmp_chpl30)), chpl_nodeFromLocaleID((chpl_macro_tmp_1267).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1267).addr, sizeof(chpl____wide__ddata_locale), COMMID(52), INT64(1514), INT64(28));
            chpl_macro_tmp_1268.locale = (&coerce_tmp_chpl30)->locale;
            chpl_macro_tmp_1268.addr = ((&coerce_tmp_chpl30)->addr + i_chpl4);
            call_tmp_chpl95 = chpl_macro_tmp_1268;
            deinit_chpl14(call_tmp_chpl95);
          }
        }
      }
      chpl_check_nil((&this_chpl7)->addr, INT64(1521), INT32(28));
      chpl_macro_tmp_1269.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1269.addr = &(((&this_chpl7)->addr)->off);
      call_tmp_chpl96 = chpl_macro_tmp_1269;
      coerce_tmp_chpl31 = copy_chpl;
      chpl_check_nil(coerce_tmp_chpl31, INT64(1521), INT32(28));
      chpl_gen_comm_put(((void*)(&((coerce_tmp_chpl31)->off))), chpl_nodeFromLocaleID((call_tmp_chpl96).locale, INT64(0), INT32(0)), (call_tmp_chpl96).addr, sizeof(_tuple_1_star_int64_t_chpl), COMMID(53), INT64(1521), INT64(28));
      chpl_check_nil((&this_chpl7)->addr, INT64(1522), INT32(28));
      chpl_macro_tmp_1270.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1270.addr = &(((&this_chpl7)->addr)->blk);
      call_tmp_chpl97 = chpl_macro_tmp_1270;
      coerce_tmp_chpl32 = copy_chpl;
      chpl_check_nil(coerce_tmp_chpl32, INT64(1522), INT32(28));
      chpl_gen_comm_put(((void*)(&((coerce_tmp_chpl32)->blk))), chpl_nodeFromLocaleID((call_tmp_chpl97).locale, INT64(0), INT32(0)), (call_tmp_chpl97).addr, sizeof(_tuple_1_star_int64_t_chpl), COMMID(54), INT64(1522), INT64(28));
      chpl_check_nil((&this_chpl7)->addr, INT64(1523), INT32(28));
      chpl_macro_tmp_1271.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1271.addr = &(((&this_chpl7)->addr)->str);
      call_tmp_chpl98 = chpl_macro_tmp_1271;
      coerce_tmp_chpl33 = copy_chpl;
      chpl_check_nil(coerce_tmp_chpl33, INT64(1523), INT32(28));
      chpl_gen_comm_put(((void*)(&((coerce_tmp_chpl33)->str))), chpl_nodeFromLocaleID((call_tmp_chpl98).locale, INT64(0), INT32(0)), (call_tmp_chpl98).addr, sizeof(_tuple_1_star_int64_t_chpl), COMMID(55), INT64(1523), INT64(28));
      coerce_tmp_chpl34 = copy_chpl;
      chpl_check_nil(coerce_tmp_chpl34, INT64(1524), INT32(28));
      coerce_tmp_chpl35 = (coerce_tmp_chpl34)->factoredOffs;
      chpl_check_nil((&this_chpl7)->addr, INT64(1524), INT32(28));
      chpl_macro_tmp_1272.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1272.addr = &(((&this_chpl7)->addr)->factoredOffs);
      chpl_gen_comm_put(((void*)(&coerce_tmp_chpl35)), chpl_nodeFromLocaleID((chpl_macro_tmp_1272).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1272).addr, sizeof(int64_t), COMMID(56), INT64(1524), INT64(28));
      chpl_check_nil((&this_chpl7)->addr, INT64(1526), INT32(28));
      dsiDestroyArr_chpl2(this_chpl7, UINT8(false));
      coerce_tmp_chpl36 = copy_chpl;
      chpl_check_nil(coerce_tmp_chpl36, INT64(1527), INT32(28));
      tmp_chpl42 = (coerce_tmp_chpl36)->data;
      chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl42)->locale, INT64(0), INT32(0)), INT64(1527), INT32(28), "cannot access remote data in local block");
      coerce_tmp_chpl37 = (&tmp_chpl42)->addr;
      chpl_macro_tmp_1273.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1273.addr = coerce_tmp_chpl37;
      tmp_chpl43 = chpl_macro_tmp_1273;
      if (chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl43)->locale, INT64(0), INT32(0))) {
        chpl_error("Attempted to assign to local class field with remote class", INT64(1527), INT32(28));
      }
      chpl_check_nil((&this_chpl7)->addr, INT64(1527), INT32(28));
      chpl_macro_tmp_1274.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1274.addr = &(((&this_chpl7)->addr)->data);
      chpl_gen_comm_put(((void*)(&tmp_chpl43)), chpl_nodeFromLocaleID((chpl_macro_tmp_1274).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1274).addr, sizeof(chpl____wide__ddata_locale), COMMID(57), INT64(1527), INT64(28));
      call_tmp_chpl99 = sizeAs_chpl2(&reallocD_chpl);
      if (INT64(0) < INT64(0)) {
        tmp_chpl44 = UINT8(true);
      } else {
        tmp_chpl44 = (call_tmp_chpl99 > ((uint64_t)(INT64(0))));
      }
      if (tmp_chpl44) {
        coerce_tmp_chpl38 = copy_chpl;
        chpl_check_nil(coerce_tmp_chpl38, INT64(1538), INT32(28));
        tmp_chpl45 = (coerce_tmp_chpl38)->shiftedData;
        chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl45)->locale, INT64(0), INT32(0)), INT64(1538), INT32(28), "cannot access remote data in local block");
        coerce_tmp_chpl39 = (&tmp_chpl45)->addr;
        chpl_macro_tmp_1275.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1275.addr = coerce_tmp_chpl39;
        tmp_chpl46 = chpl_macro_tmp_1275;
        if (chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl46)->locale, INT64(0), INT32(0))) {
          chpl_error("Attempted to assign to local class field with remote class", INT64(1538), INT32(28));
        }
        chpl_check_nil((&this_chpl7)->addr, INT64(1538), INT32(28));
        chpl_macro_tmp_1276.locale = (&this_chpl7)->locale;
        chpl_macro_tmp_1276.addr = &(((&this_chpl7)->addr)->shiftedData);
        chpl_gen_comm_put(((void*)(&tmp_chpl46)), chpl_nodeFromLocaleID((chpl_macro_tmp_1276).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1276).addr, sizeof(chpl____wide__ddata_locale), COMMID(58), INT64(1538), INT64(28));
      }
      chpl__delete36(copy_chpl);
      chpl__autoDestroy2(&keep_chpl);
    }
    chpl__autoDestroy2(&reallocD_chpl);
  }
  i_x_chpl2 = &call_tmp_chpl42;
  chpl_macro_tmp_1277.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1277.addr = i_x_chpl2;
  tmp_chpl47 = chpl_macro_tmp_1277;
  deinit_chpl14(tmp_chpl47);
  i_x_chpl3 = &call_tmp_chpl41;
  chpl_macro_tmp_1278.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1278.addr = i_x_chpl3;
  tmp_chpl48 = chpl_macro_tmp_1278;
  deinit_chpl14(tmp_chpl48);
  _end_dsiReallocate_chpl:;
  return;
}

/* DefaultRectangular.chpl:1407 */
static void dsiReallocate_chpl3(chpl____wide_DefaultRectangularArr_1_int64_t_F_int64_t_int64_t this_chpl7,
                                chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F bounds_chpl) {
  string_chpl local__str_literal_75_chpl;
  int64_t local_dataParMinGranularity_chpl;
  chpl_bool local_dataParIgnoreRunningTasks_chpl;
  int64_t local_dataParTasksPerLocale_chpl;
  string_chpl local__str_literal_3454_chpl;
  string_chpl local__str_literal_3449_chpl;
  chpl_bool actuallyResizing_chpl;
  range_int64_t_bounded_F_chpl call_tmp_chpl36;
  range_int64_t_bounded_F_chpl ret_tmp_chpl;
  range_int64_t_bounded_F_chpl _ic__F0_this_chpl;
  int64_t i_chpl;
  range_int64_t_bounded_F_chpl this_chpl8;
  int64_t coerce_tmp_chpl3;
  range_int64_t_bounded_F_chpl this_chpl9;
  int64_t end_chpl;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl call_tmp_chpl38;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl ret_tmp_chpl2;
  chpl_bool call_tmp_chpl39;
  range_int64_t_bounded_F_chpl coerce_tmp_chpl5;
  chpl____wide_BaseArr coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_ddataResizePolicy tmp_chpl15;
  chpl_localeID_t call_tmp_chpl40;
  locale_chpl call_tmp_chpl41;
  locale_chpl ret_tmp_chpl3;
  chpl____wide__ref_chpl_localeID_t tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  locale_chpl call_tmp_chpl42;
  chpl_localeID_t call_tmp_chpl43;
  int32_t call_tmp_chpl44;
  chpl_localeID_t call_tmp_chpl45;
  locale_chpl call_tmp_chpl46;
  locale_chpl ret_tmp_chpl4;
  chpl____wide__ref_chpl_localeID_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl47;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl call_tmp_chpl48;
  range_int64_t_bounded_F_chpl coerce_tmp_chpl7;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl ret_tmp_chpl5;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl reallocD_chpl;
  _ref_DefaultRectangularDom_1_int64_t_F_chpl _instance_chpl = NULL;
  int64_t call_tmp_chpl49;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t oldSize_chpl;
  int64_t call_tmp_chpl50;
  chpl____wide__ref__wide__domain_DefaultRectangularDom_1_int64_t_F tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t newSize_chpl;
  int64_t call_tmp_chpl51;
  int64_t call_tmp_chpl52;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl19;
  int64_t call_tmp_chpl53;
  int64_t call_tmp_chpl54;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl20;
  int64_t call_tmp_chpl55;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl21;
  int64_t call_tmp_chpl56;
  chpl____wide__ref__wide__domain_DefaultRectangularDom_1_int64_t_F tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl23;
  chpl____wide__ddata_int64_t coerce_tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr call_tmp_chpl57;
  uint64_t call_tmp_chpl58;
  chpl_bool call_tmp_chpl59;
  chpl____wide__ref__tuple_1_star_int64_t call_tmp_chpl60 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl call_tmp_chpl61;
  DefaultRectangularDom_1_int64_t_F_chpl ret_chpl = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl ret_tmp_chpl6;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl25 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl62;
  chpl____wide_BaseArr coerce_tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_int64_t coerce_tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_ddataResizePolicy coerce_tmp_chpl15;
  chpl_ddataResizePolicy tmp_chpl26;
  chpl_bool callPostAlloc_chpl;
  c_void_ptr call_tmp_chpl63;
  uint64_t call_tmp_chpl64;
  c_void_ptr call_tmp_chpl65;
  _ddata_int64_t_chpl call_tmp_chpl66 = NULL;
  uint64_t call_tmp_chpl67;
  int64_t call_tmp_chpl68;
  int64_t call_tmp_chpl69;
  uint64_t call_tmp_chpl70;
  chpl_bool call_tmp_chpl71;
  uint64_t call_tmp_chpl72;
  _ddata_int64_t_chpl ret_chpl2 = NULL;
  c_void_ptr call_tmp_chpl73;
  int32_t call_tmp_chpl74;
  c_void_ptr call_tmp_chpl75;
  uint64_t call_tmp_chpl76;
  c_void_ptr call_tmp_chpl77;
  chpl____wide__ddata_int64_t tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl78;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl28;
  int64_t call_tmp_chpl79;
  chpl____wide__ddata_int64_t coerce_tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_int64_t ret_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ddata_int64_t_chpl tmp_chpl29 = NULL;
  DefaultRectangularDom_1_int64_t_F_chpl ret_chpl4 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl30 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularArr_1_int64_t_F_int64_t_int64_t_chpl new_temp_chpl = NULL;
  _ddata_int64_t_chpl tmp_chpl31 = NULL;
  c_void_ptr tmp_chpl32;
  DefaultRectangularArr_1_int64_t_F_int64_t_int64_t_chpl copy_chpl = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F call_tmp_chpl80 = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F_chpl call_tmp_chpl81;
  range_int64_t_bounded_F_chpl coerce_tmp_chpl20;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl ret_tmp_chpl7;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl keep_chpl;
  _ref_DefaultRectangularDom_1_int64_t_F_chpl _instance_chpl2 = NULL;
  DefaultRectangularArr_1_int64_t_F_int64_t_int64_t_chpl copy_chpl2 = NULL;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_int64_t_int64_t this_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularDom_1_int64_t_F_chpl ret_chpl5 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl33 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularDom_1_int64_t_F_chpl coerce_tmp_chpl21 = NULL;
  int64_t tasksPerLocale_chpl;
  chpl_bool ignoreRunning_chpl;
  int64_t minIndicesPerTask_chpl;
  _tuple_1_star_int64_t_chpl ret_tmp_chpl8;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl34;
  locale_chpl call_tmp_chpl82;
  chpl_localeID_t call_tmp_chpl83;
  int32_t call_tmp_chpl84;
  chpl_localeID_t call_tmp_chpl85;
  locale_chpl call_tmp_chpl86;
  locale_chpl ret_tmp_chpl9;
  chpl____wide__ref_chpl_localeID_t tmp_chpl35 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl37;
  _ref_locale_chpl i_x_chpl = NULL;
  chpl____wide__ref_locale tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_x0_chpl;
  int64_t tmp_x1_chpl;
  _ref__tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl87 = NULL;
  _tuple_2_star_int64_t_chpl ret_tmp_chpl10;
  int64_t numChunks_chpl;
  int64_t parDim_chpl;
  range_int64_t_bounded_F_chpl tmpIter_chpl;
  range_int64_t_boundedLow_F_chpl call_tmp_chpl88;
  range_int64_t_boundedLow_F_chpl ret_tmp_chpl11;
  range_int64_t_bounded_F_chpl ret_tmp_chpl12;
  chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount_chpl = NULL;
  chpl___EndCount_AtomicT_int64_t_int64_t new_temp_chpl2 = NULL;
  int64_t numTasks_chpl;
  range_int64_t_bounded_F_chpl _ic__F0_this_chpl2;
  int64_t i_chpl2;
  range_int64_t_bounded_F_chpl this_chpl11;
  int64_t coerce_tmp_chpl25;
  range_int64_t_bounded_F_chpl this_chpl12;
  int64_t end_chpl2;
  _class_localscoforall_fn_chpl5 _args_forcoforall_fn_chpl = NULL;
  c_void_ptr _args_vforcoforall_fn_chpl;
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl39 = NULL;
  chpl____wide__ref__tuple_1_star_int64_t call_tmp_chpl89 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularArr_1_int64_t_F_int64_t_int64_t_chpl coerce_tmp_chpl26 = NULL;
  chpl____wide__ref__tuple_1_star_int64_t call_tmp_chpl90 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularArr_1_int64_t_F_int64_t_int64_t_chpl coerce_tmp_chpl27 = NULL;
  chpl____wide__ref__tuple_1_star_int64_t call_tmp_chpl91 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularArr_1_int64_t_F_int64_t_int64_t_chpl coerce_tmp_chpl28 = NULL;
  DefaultRectangularArr_1_int64_t_F_int64_t_int64_t_chpl coerce_tmp_chpl29 = NULL;
  int64_t coerce_tmp_chpl30;
  DefaultRectangularArr_1_int64_t_F_int64_t_int64_t_chpl coerce_tmp_chpl31 = NULL;
  _ddata_int64_t_chpl coerce_tmp_chpl32 = NULL;
  chpl____wide__ddata_int64_t tmp_chpl40 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_int64_t tmp_chpl41 = {CHPL_LOCALEID_T_INIT, NULL};
  uint64_t call_tmp_chpl92;
  chpl_bool tmp_chpl42;
  DefaultRectangularArr_1_int64_t_F_int64_t_int64_t_chpl coerce_tmp_chpl33 = NULL;
  _ddata_int64_t_chpl coerce_tmp_chpl34 = NULL;
  chpl____wide__ddata_int64_t tmp_chpl43 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_int64_t tmp_chpl44 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_locale tmp_chpl45 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_locale tmp_chpl46 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1279;
  chpl____wide_BaseArr chpl_macro_tmp_1280;
  chpl____wide__ref_chpl_ddataResizePolicy chpl_macro_tmp_1281;
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_1282;
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_1283;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_1284;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1285;
  chpl____wide__ref__wide__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1286;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1287;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1288;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1289;
  chpl____wide__ref__wide__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1290;
  chpl____wide__ref__wide__ddata_int64_t chpl_macro_tmp_1291;
  chpl____wide__ref__tuple_1_star_int64_t chpl_macro_tmp_1292;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1293;
  chpl____wide__ref_int64_t chpl_macro_tmp_1294;
  chpl____wide_BaseArr chpl_macro_tmp_1295;
  chpl____wide__ref__wide__ddata_int64_t chpl_macro_tmp_1296;
  chpl____wide__ref_chpl_ddataResizePolicy chpl_macro_tmp_1297;
  chpl____wide__ddata_int64_t chpl_macro_tmp_1298;
  chpl____wide__ref__wide__ddata_int64_t chpl_macro_tmp_1299;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1300;
  chpl____wide__ref_int64_t chpl_macro_tmp_1301;
  chpl____wide__ref__wide__ddata_int64_t chpl_macro_tmp_1302;
  chpl____wide__ddata_int64_t chpl_macro_tmp_1303;
  chpl____wide__ddata_int64_t chpl_macro_tmp_1304;
  chpl____wide__ref__wide__ddata_int64_t chpl_macro_tmp_1305;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1306;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1307;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_1308;
  chpl____wide__nilType chpl_macro_tmp_1309;
  chpl____wide_Error chpl_macro_tmp_1310;
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_1311;
  chpl____wide_object chpl_macro_tmp_1312;
  chpl____wide__nilType chpl_macro_tmp_1313;
  chpl____wide_object chpl_macro_tmp_1314;
  chpl____wide__ref_int64_t chpl_macro_tmp_1315;
  chpl____wide__ref_locale chpl_macro_tmp_1316;
  chpl__class_localscoforall_fn_chpl5_object chpl_macro_tmp_1317;
  chpl____wide__nilType chpl_macro_tmp_1318;
  chpl____wide_Error chpl_macro_tmp_1319;
  chpl____wide__ref__tuple_1_star_int64_t chpl_macro_tmp_1320;
  chpl____wide__ref__tuple_1_star_int64_t chpl_macro_tmp_1321;
  chpl____wide__ref__tuple_1_star_int64_t chpl_macro_tmp_1322;
  chpl____wide__ref_int64_t chpl_macro_tmp_1323;
  chpl____wide__ddata_int64_t chpl_macro_tmp_1324;
  chpl____wide__ref__wide__ddata_int64_t chpl_macro_tmp_1325;
  chpl____wide__ddata_int64_t chpl_macro_tmp_1326;
  chpl____wide__ref__wide__ddata_int64_t chpl_macro_tmp_1327;
  chpl____wide__ref_locale chpl_macro_tmp_1328;
  chpl____wide__ref_locale chpl_macro_tmp_1329;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  local_dataParMinGranularity_chpl = dataParMinGranularity_chpl;
  local_dataParIgnoreRunningTasks_chpl = dataParIgnoreRunningTasks_chpl;
  local_dataParTasksPerLocale_chpl = dataParTasksPerLocale_chpl;
  local__str_literal_3454_chpl = _str_literal_3454_chpl /* "internal error: Unsigned integer overflow during memset of dynamic block" */;
  local__str_literal_3449_chpl = _str_literal_3449_chpl /* "internal error: dsiReallocate() can only be called from an array's home locale" */;
  actuallyResizing_chpl = UINT8(false);
  indices_chpl(bounds_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  _ic__F0_this_chpl = call_tmp_chpl36;
  checkIfIterWillOverflow_chpl(call_tmp_chpl36, UINT8(true));
  i_chpl = INT64(0);
  this_chpl8 = _ic__F0_this_chpl;
  coerce_tmp_chpl3 = (&this_chpl8)->_low;
  this_chpl9 = _ic__F0_this_chpl;
  end_chpl = (&this_chpl9)->_high;
  for (i_chpl = coerce_tmp_chpl3; ((i_chpl <= end_chpl)); i_chpl += INT64(1)) {
    call_tmp_chpl37 = this_chpl5(bounds_chpl, i_chpl);
    chpl_check_nil((&this_chpl7)->addr, INT64(1415), INT32(28));
    chpl_macro_tmp_1279.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_1279.addr = &(((&this_chpl7)->addr)->dom);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID((chpl_macro_tmp_1279).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1279).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(59), INT64(1415), INT64(28));
    chpl_check_nil((&coerce_tmp_chpl4)->addr, INT64(1415), INT32(28));
    dsiDim_chpl(coerce_tmp_chpl4, i_chpl, &ret_tmp_chpl2);
    call_tmp_chpl38 = ret_tmp_chpl2;
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID((call_tmp_chpl37).locale, INT64(0), INT32(0)), (call_tmp_chpl37).addr, sizeof(range_int64_t_bounded_F_chpl), COMMID(60), INT64(1415), INT64(28));
    call_tmp_chpl39 = chpl___EXCLAMATION__ASSIGN_2(coerce_tmp_chpl5, call_tmp_chpl38);
    if (call_tmp_chpl39) {
      actuallyResizing_chpl = UINT8(true);
      goto _breakLabel_chpl;
    }
  }
  _breakLabel_chpl:;
  if (! actuallyResizing_chpl) {
    goto _end_dsiReallocate_chpl;
  }
  chpl_macro_tmp_1280.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1280.addr = ((BaseArr_chpl)((&this_chpl7)->addr));
  coerce_tmp_chpl6 = chpl_macro_tmp_1280;
  chpl_check_nil((&coerce_tmp_chpl6)->addr, INT64(1424), INT32(28));
  chpl_macro_tmp_1281.locale = (&coerce_tmp_chpl6)->locale;
  chpl_macro_tmp_1281.addr = &(((&coerce_tmp_chpl6)->addr)->_resizePolicy);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1281).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1281).addr, sizeof(chpl_ddataResizePolicy), COMMID(61), INT64(1424), INT64(28));
  if (tmp_chpl15 == chpl_ddataResizePolicy_normalInit_chpl) {
  }
  call_tmp_chpl40 = (&this_chpl7)->locale;
  chpl_macro_tmp_1282.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1282.addr = &call_tmp_chpl40;
  tmp_chpl16 = chpl_macro_tmp_1282;
  chpl_localeID_to_locale(tmp_chpl16, &ret_tmp_chpl3);
  call_tmp_chpl41 = ret_tmp_chpl3;
  call_tmp_chpl44 = get_chpl_nodeID();
  call_tmp_chpl45 = chpl_rt_buildLocaleID(call_tmp_chpl44, c_sublocid_any);
  call_tmp_chpl43 = call_tmp_chpl45;
  chpl_macro_tmp_1283.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1283.addr = &call_tmp_chpl43;
  tmp_chpl17 = chpl_macro_tmp_1283;
  chpl_localeID_to_locale(tmp_chpl17, &ret_tmp_chpl4);
  call_tmp_chpl46 = ret_tmp_chpl4;
  call_tmp_chpl42 = call_tmp_chpl46;
  call_tmp_chpl47 = chpl___EXCLAMATION__ASSIGN_(&call_tmp_chpl41, &call_tmp_chpl42);
  if (call_tmp_chpl47) {
    halt_chpl(&local__str_literal_3449_chpl, INT64(1430), INT32(28));
  } else {
    chpl_macro_tmp_1284.locale = (bounds_chpl).locale;
    chpl_macro_tmp_1284.addr = (*((bounds_chpl).addr) + INT64(0));
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl7)), chpl_nodeFromLocaleID((chpl_macro_tmp_1284).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1284).addr, sizeof(range_int64_t_bounded_F_chpl), COMMID(62), INT64(1433), INT64(28));
    chpl__buildDomainExpr(coerce_tmp_chpl7, UINT8(true), &ret_tmp_chpl5);
    call_tmp_chpl48 = ret_tmp_chpl5;
    reallocD_chpl = call_tmp_chpl48;
    _instance_chpl = &((&((&reallocD_chpl)->_instance))->addr);
    chpl_check_nil(_instance_chpl, INT64(1433), INT32(28));
    ((BaseDom_chpl)(*(_instance_chpl)))->definedConst = UINT8(true);
    chpl_check_nil((&this_chpl7)->addr, INT64(1439), INT32(28));
    chpl_macro_tmp_1285.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_1285.addr = &(((&this_chpl7)->addr)->dom);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl8)), chpl_nodeFromLocaleID((chpl_macro_tmp_1285).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1285).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(63), INT64(1439), INT64(28));
    chpl_check_nil((&coerce_tmp_chpl8)->addr, INT64(1439), INT32(28));
    call_tmp_chpl49 = dsiNumIndices_chpl(coerce_tmp_chpl8);
    oldSize_chpl = call_tmp_chpl49;
    chpl_macro_tmp_1286.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1286.addr = &reallocD_chpl;
    tmp_chpl18 = chpl_macro_tmp_1286;
    call_tmp_chpl50 = sizeAs_chpl(tmp_chpl18);
    newSize_chpl = call_tmp_chpl50;
    call_tmp_chpl51 = low_chpl(&reallocD_chpl);
    chpl_check_nil((&this_chpl7)->addr, INT64(1442), INT32(28));
    chpl_macro_tmp_1287.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_1287.addr = &(((&this_chpl7)->addr)->dom);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl9)), chpl_nodeFromLocaleID((chpl_macro_tmp_1287).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1287).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(64), INT64(1442), INT64(28));
    chpl_check_nil((&coerce_tmp_chpl9)->addr, INT64(1442), INT32(28));
    call_tmp_chpl52 = dsiLow_chpl(coerce_tmp_chpl9);
    if (call_tmp_chpl51 == call_tmp_chpl52) {
      call_tmp_chpl53 = stride_chpl(&reallocD_chpl);
      chpl_check_nil((&this_chpl7)->addr, INT64(1442), INT32(28));
      chpl_macro_tmp_1288.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1288.addr = &(((&this_chpl7)->addr)->dom);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl10)), chpl_nodeFromLocaleID((chpl_macro_tmp_1288).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1288).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(65), INT64(1442), INT64(28));
      chpl_check_nil((&coerce_tmp_chpl10)->addr, INT64(1442), INT32(28));
      call_tmp_chpl54 = dsiStride_chpl(coerce_tmp_chpl10);
      tmp_chpl19 = (call_tmp_chpl53 == call_tmp_chpl54);
    } else {
      tmp_chpl19 = UINT8(false);
    }
    if (tmp_chpl19) {
      chpl_check_nil((&this_chpl7)->addr, INT64(1443), INT32(28));
      chpl_macro_tmp_1289.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1289.addr = &(((&this_chpl7)->addr)->dom);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl11)), chpl_nodeFromLocaleID((chpl_macro_tmp_1289).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1289).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(66), INT64(1443), INT64(28));
      chpl_check_nil((&coerce_tmp_chpl11)->addr, INT64(1443), INT32(28));
      call_tmp_chpl55 = dsiNumIndices_chpl(coerce_tmp_chpl11);
      tmp_chpl20 = (call_tmp_chpl55 > INT64(0));
    } else {
      tmp_chpl20 = UINT8(false);
    }
    if (tmp_chpl20) {
      chpl_macro_tmp_1290.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1290.addr = &reallocD_chpl;
      tmp_chpl22 = chpl_macro_tmp_1290;
      call_tmp_chpl56 = size_chpl(tmp_chpl22);
      tmp_chpl21 = (call_tmp_chpl56 > INT64(0));
    } else {
      tmp_chpl21 = UINT8(false);
    }
    if (tmp_chpl21) {
      chpl_check_nil((&this_chpl7)->addr, INT64(1444), INT32(28));
      chpl_macro_tmp_1291.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1291.addr = &(((&this_chpl7)->addr)->data);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl12)), chpl_nodeFromLocaleID((chpl_macro_tmp_1291).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1291).addr, sizeof(chpl____wide__ddata_int64_t), COMMID(67), INT64(1444), INT64(28));
      call_tmp_chpl57 = ((c_void_ptr)((&coerce_tmp_chpl12)->addr));
      checkValue_chpl(call_tmp_chpl49);
      call_tmp_chpl58 = ((uint64_t)(oldSize_chpl));
      checkValue_chpl(call_tmp_chpl50);
      call_tmp_chpl59 = chpl_mem_array_supports_realloc(call_tmp_chpl57, call_tmp_chpl58, ((uint64_t)(newSize_chpl)), ((uint64_t)(sizeof(int64_t))), INT64(1444), INT32(28));
      tmp_chpl23 = call_tmp_chpl59;
    } else {
      tmp_chpl23 = UINT8(false);
    }
    if (tmp_chpl23) {
      chpl_check_nil((&this_chpl7)->addr, INT64(1449), INT32(28));
      chpl_macro_tmp_1292.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1292.addr = &(((&this_chpl7)->addr)->sizesPerDim);
      call_tmp_chpl60 = chpl_macro_tmp_1292;
      tmp_chpl24 = (&reallocD_chpl)->_instance;
      ret_chpl = (&tmp_chpl24)->addr;
      chpl_macro_tmp_1293.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1293.addr = ret_chpl;
      tmp_chpl25 = chpl_macro_tmp_1293;
      chpl_check_nil((&tmp_chpl25)->addr, INT64(1449), INT32(28));
      dsiDim_chpl2(tmp_chpl25, &ret_tmp_chpl6);
      call_tmp_chpl61 = ret_tmp_chpl6;
      call_tmp_chpl62 = sizeAs_chpl3(call_tmp_chpl61);
      chpl_macro_tmp_1294.locale = (call_tmp_chpl60).locale;
      chpl_macro_tmp_1294.addr = (*((call_tmp_chpl60).addr) + INT64(0));
      chpl_gen_comm_put(((void*)(&call_tmp_chpl62)), chpl_nodeFromLocaleID((chpl_macro_tmp_1294).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1294).addr, sizeof(int64_t), COMMID(68), INT64(1449), INT64(28));
      chpl_macro_tmp_1295.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1295.addr = ((BaseArr_chpl)((&this_chpl7)->addr));
      coerce_tmp_chpl13 = chpl_macro_tmp_1295;
      chpl_check_nil((&this_chpl7)->addr, INT64(1450), INT32(28));
      chpl_macro_tmp_1296.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1296.addr = &(((&this_chpl7)->addr)->data);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl14)), chpl_nodeFromLocaleID((chpl_macro_tmp_1296).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1296).addr, sizeof(chpl____wide__ddata_int64_t), COMMID(69), INT64(1450), INT64(28));
      chpl_check_nil((&coerce_tmp_chpl13)->addr, INT64(1455), INT32(28));
      chpl_macro_tmp_1297.locale = (&coerce_tmp_chpl13)->locale;
      chpl_macro_tmp_1297.addr = &(((&coerce_tmp_chpl13)->addr)->_resizePolicy);
      chpl_gen_comm_get(((void*)(&tmp_chpl26)), chpl_nodeFromLocaleID((chpl_macro_tmp_1297).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1297).addr, sizeof(chpl_ddataResizePolicy), COMMID(70), INT64(1455), INT64(28));
      coerce_tmp_chpl15 = tmp_chpl26;
      callPostAlloc_chpl = UINT8(false);
      call_tmp_chpl63 = ((c_void_ptr)((&coerce_tmp_chpl14)->addr));
      checkValue_chpl(oldSize_chpl);
      call_tmp_chpl64 = ((uint64_t)(oldSize_chpl));
      checkValue_chpl(newSize_chpl);
      call_tmp_chpl65 = chpl_mem_array_realloc(call_tmp_chpl63, call_tmp_chpl64, ((uint64_t)(newSize_chpl)), ((uint64_t)(sizeof(int64_t))), c_sublocid_none, &callPostAlloc_chpl, INT64(1450), INT32(28));
      call_tmp_chpl66 = ((_ddata_int64_t_chpl)(call_tmp_chpl65));
      if (coerce_tmp_chpl15 == chpl_ddataResizePolicy_normalInit_chpl) {
        init_elts_chpl2(call_tmp_chpl66, newSize_chpl, oldSize_chpl);
      } else {
        if (coerce_tmp_chpl15 == chpl_ddataResizePolicy_skipInit_chpl) {
        } else {
          if (coerce_tmp_chpl15 == chpl_ddataResizePolicy_skipInitButClearMem_chpl) {
            if (newSize_chpl > oldSize_chpl) {
              call_tmp_chpl67 = ((uint64_t)(sizeof(int64_t)));
              call_tmp_chpl69 = (newSize_chpl - oldSize_chpl);
              call_tmp_chpl68 = call_tmp_chpl69;
              checkValue_chpl(call_tmp_chpl69);
              call_tmp_chpl70 = ((uint64_t)(call_tmp_chpl68));
              call_tmp_chpl71 = safeMul_chpl(call_tmp_chpl70, call_tmp_chpl67);
              if (call_tmp_chpl71) {
                call_tmp_chpl72 = (call_tmp_chpl70 * call_tmp_chpl67);
                ret_chpl2 = ((_ddata_int64_t_chpl)(nil));
                ret_chpl2 = (call_tmp_chpl66 + oldSize_chpl);
                call_tmp_chpl73 = ((c_void_ptr)(ret_chpl2));
                checkValue_chpl3();
                call_tmp_chpl74 = ((int32_t)(INT8(0)));
                checkValue_chpl4();
                memset(call_tmp_chpl73, call_tmp_chpl74, call_tmp_chpl72);
              } else {
                halt_chpl(&local__str_literal_3454_chpl, INT64(1450), INT32(28));
              }
            }
          }
        }
      }
      if (callPostAlloc_chpl) {
        call_tmp_chpl75 = ((c_void_ptr)((&coerce_tmp_chpl14)->addr));
        checkValue_chpl(oldSize_chpl);
        call_tmp_chpl76 = ((uint64_t)(oldSize_chpl));
        call_tmp_chpl77 = ((c_void_ptr)(call_tmp_chpl66));
        checkValue_chpl(newSize_chpl);
        chpl_mem_array_postRealloc(call_tmp_chpl75, call_tmp_chpl76, call_tmp_chpl77, ((uint64_t)(newSize_chpl)), ((uint64_t)(sizeof(int64_t))), INT64(1450), INT32(28));
      }
      chpl_macro_tmp_1298.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1298.addr = call_tmp_chpl66;
      tmp_chpl27 = chpl_macro_tmp_1298;
      if (chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl27)->locale, INT64(0), INT32(0))) {
        chpl_error("Attempted to assign to local class field with remote class", INT64(1450), INT32(28));
      }
      chpl_check_nil((&this_chpl7)->addr, INT64(1450), INT32(28));
      chpl_macro_tmp_1299.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1299.addr = &(((&this_chpl7)->addr)->data);
      chpl_gen_comm_put(((void*)(&tmp_chpl27)), chpl_nodeFromLocaleID((chpl_macro_tmp_1299).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1299).addr, sizeof(chpl____wide__ddata_int64_t), COMMID(71), INT64(1450), INT64(28));
      chpl_check_nil((&this_chpl7)->addr, INT64(1456), INT32(28));
      chpl_macro_tmp_1300.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1300.addr = &(((&this_chpl7)->addr)->dom);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl16)), chpl_nodeFromLocaleID((chpl_macro_tmp_1300).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1300).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(72), INT64(1456), INT64(28));
      chpl_check_nil((&coerce_tmp_chpl16)->addr, INT64(1456), INT32(28));
      call_tmp_chpl78 = dsiNumIndices_chpl(coerce_tmp_chpl16);
      if (call_tmp_chpl78 > INT64(0)) {
        chpl_check_nil((&this_chpl7)->addr, INT64(1456), INT32(28));
        chpl_macro_tmp_1301.locale = (&this_chpl7)->locale;
        chpl_macro_tmp_1301.addr = &(((&this_chpl7)->addr)->factoredOffs);
        chpl_gen_comm_get(((void*)(&tmp_chpl28)), chpl_nodeFromLocaleID((chpl_macro_tmp_1301).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1301).addr, sizeof(int64_t), COMMID(73), INT64(1456), INT64(28));
        call_tmp_chpl79 = (INT64(0) - tmp_chpl28);
        chpl_check_nil((&this_chpl7)->addr, INT64(1456), INT32(28));
        chpl_macro_tmp_1302.locale = (&this_chpl7)->locale;
        chpl_macro_tmp_1302.addr = &(((&this_chpl7)->addr)->data);
        chpl_gen_comm_get(((void*)(&coerce_tmp_chpl17)), chpl_nodeFromLocaleID((chpl_macro_tmp_1302).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1302).addr, sizeof(chpl____wide__ddata_int64_t), COMMID(74), INT64(1456), INT64(28));
        tmp_chpl29 = ((_ddata_int64_t_chpl)(nil));
        chpl_macro_tmp_1303.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1303.addr = tmp_chpl29;
        ret_chpl3 = chpl_macro_tmp_1303;
        chpl_macro_tmp_1304.locale = (&coerce_tmp_chpl17)->locale;
        chpl_macro_tmp_1304.addr = ((&coerce_tmp_chpl17)->addr + call_tmp_chpl79);
        ret_chpl3 = chpl_macro_tmp_1304;
        if (chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&ret_chpl3)->locale, INT64(0), INT32(0))) {
          chpl_error("Attempted to assign to local class field with remote class", INT64(1456), INT32(28));
        }
        chpl_check_nil((&this_chpl7)->addr, INT64(1456), INT32(28));
        chpl_macro_tmp_1305.locale = (&this_chpl7)->locale;
        chpl_macro_tmp_1305.addr = &(((&this_chpl7)->addr)->shiftedData);
        chpl_gen_comm_put(((void*)(&ret_chpl3)), chpl_nodeFromLocaleID((chpl_macro_tmp_1305).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1305).addr, sizeof(chpl____wide__ddata_int64_t), COMMID(75), INT64(1456), INT64(28));
      }
    } else {
      tmp_chpl30 = (&reallocD_chpl)->_instance;
      ret_chpl4 = (&tmp_chpl30)->addr;
      tmp_chpl31 = ((_ddata_int64_t_chpl)(nil));
      tmp_chpl32 = ((c_void_ptr)(nil));
      new_temp_chpl = _new_chpl7(ret_chpl4, tmp_chpl31, UINT8(false), UINT8(false), tmp_chpl32, INT64(1462), INT32(28));
      copy_chpl = new_temp_chpl;
      chpl_check_nil((&this_chpl7)->addr, INT64(1489), INT32(28));
      chpl_macro_tmp_1306.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1306.addr = &(((&this_chpl7)->addr)->dom);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl18)), chpl_nodeFromLocaleID((chpl_macro_tmp_1306).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1306).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(76), INT64(1489), INT64(28));
      coerce_tmp_chpl19 = coerce_tmp_chpl18;
      chpl_check_nil((&coerce_tmp_chpl19)->addr, INT64(1489), INT32(28));
      chpl_macro_tmp_1307.locale = (&coerce_tmp_chpl19)->locale;
      chpl_macro_tmp_1307.addr = &(((&coerce_tmp_chpl19)->addr)->ranges);
      call_tmp_chpl80 = chpl_macro_tmp_1307;
      chpl_macro_tmp_1308.locale = (call_tmp_chpl80).locale;
      chpl_macro_tmp_1308.addr = (*((call_tmp_chpl80).addr) + INT64(0));
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl20)), chpl_nodeFromLocaleID((chpl_macro_tmp_1308).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1308).addr, sizeof(range_int64_t_bounded_F_chpl), COMMID(77), INT64(1489), INT64(28));
      this_chpl(&reallocD_chpl, coerce_tmp_chpl20, &ret_tmp_chpl7);
      call_tmp_chpl81 = ret_tmp_chpl7;
      keep_chpl = call_tmp_chpl81;
      _instance_chpl2 = &((&((&keep_chpl)->_instance))->addr);
      chpl_check_nil(_instance_chpl2, INT64(1489), INT32(28));
      ((BaseDom_chpl)(*(_instance_chpl2)))->definedConst = UINT8(false);
      copy_chpl2 = new_temp_chpl;
      this_chpl10 = this_chpl7;
      tmp_chpl33 = (&keep_chpl)->_instance;
      ret_chpl5 = (&tmp_chpl33)->addr;
      coerce_tmp_chpl21 = ret_chpl5;
      tasksPerLocale_chpl = local_dataParTasksPerLocale_chpl;
      ignoreRunning_chpl = local_dataParIgnoreRunningTasks_chpl;
      minIndicesPerTask_chpl = local_dataParMinGranularity_chpl;
      createTuple_chpl(INT64(0), &ret_tmp_chpl8);
      chpl_macro_tmp_1309.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1309.addr = nil;
      chpl_macro_tmp_1310.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1310.addr = NULL;
      error_chpl = chpl_macro_tmp_1310;
      if (tasksPerLocale_chpl == INT64(0)) {
        call_tmp_chpl84 = get_chpl_nodeID();
        call_tmp_chpl85 = chpl_rt_buildLocaleID(call_tmp_chpl84, c_sublocid_any);
        call_tmp_chpl83 = call_tmp_chpl85;
        chpl_macro_tmp_1311.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1311.addr = &call_tmp_chpl83;
        tmp_chpl35 = chpl_macro_tmp_1311;
        chpl_localeID_to_locale(tmp_chpl35, &ret_tmp_chpl9);
        call_tmp_chpl86 = ret_tmp_chpl9;
        call_tmp_chpl82 = call_tmp_chpl86;
        coerce_tmp_chpl22 = (&call_tmp_chpl82)->_instance;
        chpl_macro_tmp_1312.locale = (&coerce_tmp_chpl22)->locale;
        chpl_macro_tmp_1312.addr = ((object_chpl)((&coerce_tmp_chpl22)->addr));
        coerce_tmp_chpl23 = chpl_macro_tmp_1312;
        chpl_macro_tmp_1313.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1313.addr = nil;
        chpl_macro_tmp_1314.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1314.addr = NULL;
        tmp_chpl36 = chpl_macro_tmp_1314;
        if (! (((&coerce_tmp_chpl23)->addr != (&tmp_chpl36)->addr) || ((!(! (&coerce_tmp_chpl23)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl23)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl36)->locale, INT64(0), INT32(0)))))) {
          nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1492), INT32(28));
        }
        coerce_tmp_chpl24 = coerce_tmp_chpl22;
        chpl_check_nil((&coerce_tmp_chpl24)->addr, INT64(1492), INT32(28));
        chpl_macro_tmp_1315.locale = (&coerce_tmp_chpl24)->locale;
        chpl_macro_tmp_1315.addr = &(((&coerce_tmp_chpl24)->addr)->maxTaskPar);
        chpl_gen_comm_get(((void*)(&tmp_chpl37)), chpl_nodeFromLocaleID((chpl_macro_tmp_1315).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1315).addr, sizeof(int64_t), COMMID(78), INT64(1492), INT64(28));
        tmp_chpl34 = tmp_chpl37;
        i_x_chpl = &call_tmp_chpl82;
        chpl_macro_tmp_1316.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1316.addr = i_x_chpl;
        tmp_chpl38 = chpl_macro_tmp_1316;
        deinit_chpl14(tmp_chpl38);
      } else {
        tmp_chpl34 = tasksPerLocale_chpl;
      }
      if (chpl_task_getSerial()) {
        tmp_x0_chpl = INT64(1);
        tmp_x1_chpl = INT64(0);
      } else {
        chpl_check_nil(coerce_tmp_chpl21, INT64(1492), INT32(28));
        call_tmp_chpl87 = &((coerce_tmp_chpl21)->ranges);
        _computeChunkStuff_chpl(tmp_chpl34, ignoreRunning_chpl, minIndicesPerTask_chpl, call_tmp_chpl87, &ret_tmp_chpl10);
        tmp_x0_chpl = *(ret_tmp_chpl10 + INT64(0));
        tmp_x1_chpl = *(ret_tmp_chpl10 + INT64(1));
      }
      numChunks_chpl = tmp_x0_chpl;
      parDim_chpl = tmp_x1_chpl;
      chpl_build_low_bounded_range(INT64(0), &ret_tmp_chpl11);
      call_tmp_chpl88 = ret_tmp_chpl11;
      chpl___POUND_(call_tmp_chpl88, tmp_x0_chpl, &ret_tmp_chpl12);
      tmpIter_chpl = ret_tmp_chpl12;
      new_temp_chpl2 = _new_chpl(INT64(1492), INT32(28));
      _coforallCount_chpl = new_temp_chpl2;
      numTasks_chpl = chpl_boundedCoforallSize(tmpIter_chpl);
      _upEndCount_chpl(_coforallCount_chpl, numTasks_chpl);
      chpl_resetTaskSpawn(numTasks_chpl);
      _ic__F0_this_chpl2 = tmpIter_chpl;
      checkIfIterWillOverflow_chpl(tmpIter_chpl, UINT8(true));
      i_chpl2 = INT64(0);
      this_chpl11 = _ic__F0_this_chpl2;
      coerce_tmp_chpl25 = (&this_chpl11)->_low;
      this_chpl12 = _ic__F0_this_chpl2;
      end_chpl2 = (&this_chpl12)->_high;
      for (i_chpl2 = coerce_tmp_chpl25; ((i_chpl2 <= end_chpl2)); i_chpl2 += INT64(1)) {
        _args_forcoforall_fn_chpl = ((_class_localscoforall_fn_chpl5)(&chpl_macro_tmp_1317));
        chpl_check_nil(_args_forcoforall_fn_chpl, INT64(1492), INT32(28));
        (_args_forcoforall_fn_chpl)->_0_numChunks = numChunks_chpl;
        chpl_check_nil(_args_forcoforall_fn_chpl, INT64(1492), INT32(28));
        (_args_forcoforall_fn_chpl)->_1_parDim = parDim_chpl;
        chpl_check_nil(_args_forcoforall_fn_chpl, INT64(1492), INT32(28));
        (_args_forcoforall_fn_chpl)->_2_coerce_tmp = coerce_tmp_chpl21;
        chpl_check_nil(_args_forcoforall_fn_chpl, INT64(1492), INT32(28));
        (_args_forcoforall_fn_chpl)->_3__coforallCount = _coforallCount_chpl;
        chpl_check_nil(_args_forcoforall_fn_chpl, INT64(1492), INT32(28));
        (_args_forcoforall_fn_chpl)->_4_chunk = i_chpl2;
        chpl_check_nil(_args_forcoforall_fn_chpl, INT64(1492), INT32(28));
        (_args_forcoforall_fn_chpl)->_6_copy = copy_chpl2;
        chpl_check_nil(_args_forcoforall_fn_chpl, INT64(1492), INT32(28));
        (_args_forcoforall_fn_chpl)->_7_this = this_chpl10;
        _args_vforcoforall_fn_chpl = ((void*)(_args_forcoforall_fn_chpl));
        /*** wrapcoforall_fn_chpl6 ***/ chpl_taskAddCoStmt(chpl_task_getRequestedSubloc(), INT64(79), ((chpl_task_bundle_p)(_args_vforcoforall_fn_chpl)), sizeof(chpl__class_localscoforall_fn_chpl5_object), INT64(1492), INT32(28));
      }
      chpl_macro_tmp_1318.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1318.addr = nil;
      chpl_macro_tmp_1319.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1319.addr = NULL;
      error_chpl2 = chpl_macro_tmp_1319;
      tmp_chpl39 = &error_chpl2;
      _waitEndCount_chpl3(_coforallCount_chpl, numTasks_chpl, tmp_chpl39);
      if ((&error_chpl2)->addr != nil) {
        chpl__delete3(_coforallCount_chpl);
        error_chpl = error_chpl2;
        goto forall_IBB_break_label_chpl;
      }
      chpl__delete3(_coforallCount_chpl);
      chpl_after_forall_fence();
      forall_IBB_break_label_chpl:;
      if ((&error_chpl)->addr != nil) {
        chpl_propagate_error(error_chpl, INT64(1492), INT32(28));
      }
      chpl_after_forall_fence();
      chpl_check_nil((&this_chpl7)->addr, INT64(1521), INT32(28));
      chpl_macro_tmp_1320.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1320.addr = &(((&this_chpl7)->addr)->off);
      call_tmp_chpl89 = chpl_macro_tmp_1320;
      coerce_tmp_chpl26 = copy_chpl;
      chpl_check_nil(coerce_tmp_chpl26, INT64(1521), INT32(28));
      chpl_gen_comm_put(((void*)(&((coerce_tmp_chpl26)->off))), chpl_nodeFromLocaleID((call_tmp_chpl89).locale, INT64(0), INT32(0)), (call_tmp_chpl89).addr, sizeof(_tuple_1_star_int64_t_chpl), COMMID(79), INT64(1521), INT64(28));
      chpl_check_nil((&this_chpl7)->addr, INT64(1522), INT32(28));
      chpl_macro_tmp_1321.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1321.addr = &(((&this_chpl7)->addr)->blk);
      call_tmp_chpl90 = chpl_macro_tmp_1321;
      coerce_tmp_chpl27 = copy_chpl;
      chpl_check_nil(coerce_tmp_chpl27, INT64(1522), INT32(28));
      chpl_gen_comm_put(((void*)(&((coerce_tmp_chpl27)->blk))), chpl_nodeFromLocaleID((call_tmp_chpl90).locale, INT64(0), INT32(0)), (call_tmp_chpl90).addr, sizeof(_tuple_1_star_int64_t_chpl), COMMID(80), INT64(1522), INT64(28));
      chpl_check_nil((&this_chpl7)->addr, INT64(1523), INT32(28));
      chpl_macro_tmp_1322.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1322.addr = &(((&this_chpl7)->addr)->str);
      call_tmp_chpl91 = chpl_macro_tmp_1322;
      coerce_tmp_chpl28 = copy_chpl;
      chpl_check_nil(coerce_tmp_chpl28, INT64(1523), INT32(28));
      chpl_gen_comm_put(((void*)(&((coerce_tmp_chpl28)->str))), chpl_nodeFromLocaleID((call_tmp_chpl91).locale, INT64(0), INT32(0)), (call_tmp_chpl91).addr, sizeof(_tuple_1_star_int64_t_chpl), COMMID(81), INT64(1523), INT64(28));
      coerce_tmp_chpl29 = copy_chpl;
      chpl_check_nil(coerce_tmp_chpl29, INT64(1524), INT32(28));
      coerce_tmp_chpl30 = (coerce_tmp_chpl29)->factoredOffs;
      chpl_check_nil((&this_chpl7)->addr, INT64(1524), INT32(28));
      chpl_macro_tmp_1323.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1323.addr = &(((&this_chpl7)->addr)->factoredOffs);
      chpl_gen_comm_put(((void*)(&coerce_tmp_chpl30)), chpl_nodeFromLocaleID((chpl_macro_tmp_1323).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1323).addr, sizeof(int64_t), COMMID(82), INT64(1524), INT64(28));
      chpl_check_nil((&this_chpl7)->addr, INT64(1526), INT32(28));
      dsiDestroyArr_chpl3(this_chpl7, UINT8(false));
      coerce_tmp_chpl31 = copy_chpl;
      chpl_check_nil(coerce_tmp_chpl31, INT64(1527), INT32(28));
      tmp_chpl40 = (coerce_tmp_chpl31)->data;
      chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl40)->locale, INT64(0), INT32(0)), INT64(1527), INT32(28), "cannot access remote data in local block");
      coerce_tmp_chpl32 = (&tmp_chpl40)->addr;
      chpl_macro_tmp_1324.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1324.addr = coerce_tmp_chpl32;
      tmp_chpl41 = chpl_macro_tmp_1324;
      if (chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl41)->locale, INT64(0), INT32(0))) {
        chpl_error("Attempted to assign to local class field with remote class", INT64(1527), INT32(28));
      }
      chpl_check_nil((&this_chpl7)->addr, INT64(1527), INT32(28));
      chpl_macro_tmp_1325.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1325.addr = &(((&this_chpl7)->addr)->data);
      chpl_gen_comm_put(((void*)(&tmp_chpl41)), chpl_nodeFromLocaleID((chpl_macro_tmp_1325).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1325).addr, sizeof(chpl____wide__ddata_int64_t), COMMID(83), INT64(1527), INT64(28));
      call_tmp_chpl92 = sizeAs_chpl2(&reallocD_chpl);
      if (INT64(0) < INT64(0)) {
        tmp_chpl42 = UINT8(true);
      } else {
        tmp_chpl42 = (call_tmp_chpl92 > ((uint64_t)(INT64(0))));
      }
      if (tmp_chpl42) {
        coerce_tmp_chpl33 = copy_chpl;
        chpl_check_nil(coerce_tmp_chpl33, INT64(1538), INT32(28));
        tmp_chpl43 = (coerce_tmp_chpl33)->shiftedData;
        chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl43)->locale, INT64(0), INT32(0)), INT64(1538), INT32(28), "cannot access remote data in local block");
        coerce_tmp_chpl34 = (&tmp_chpl43)->addr;
        chpl_macro_tmp_1326.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1326.addr = coerce_tmp_chpl34;
        tmp_chpl44 = chpl_macro_tmp_1326;
        if (chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl44)->locale, INT64(0), INT32(0))) {
          chpl_error("Attempted to assign to local class field with remote class", INT64(1538), INT32(28));
        }
        chpl_check_nil((&this_chpl7)->addr, INT64(1538), INT32(28));
        chpl_macro_tmp_1327.locale = (&this_chpl7)->locale;
        chpl_macro_tmp_1327.addr = &(((&this_chpl7)->addr)->shiftedData);
        chpl_gen_comm_put(((void*)(&tmp_chpl44)), chpl_nodeFromLocaleID((chpl_macro_tmp_1327).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1327).addr, sizeof(chpl____wide__ddata_int64_t), COMMID(84), INT64(1538), INT64(28));
      }
      chpl__delete37(copy_chpl);
      chpl__autoDestroy2(&keep_chpl);
    }
    chpl__autoDestroy2(&reallocD_chpl);
  }
  i_x_chpl2 = &call_tmp_chpl42;
  chpl_macro_tmp_1328.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1328.addr = i_x_chpl2;
  tmp_chpl45 = chpl_macro_tmp_1328;
  deinit_chpl14(tmp_chpl45);
  i_x_chpl3 = &call_tmp_chpl41;
  chpl_macro_tmp_1329.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1329.addr = i_x_chpl3;
  tmp_chpl46 = chpl_macro_tmp_1329;
  deinit_chpl14(tmp_chpl46);
  _end_dsiReallocate_chpl:;
  return;
}

/* DefaultRectangular.chpl:1407 */
static void dsiReallocate_chpl2(chpl____wide_DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t this_chpl7,
                                chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F bounds_chpl) {
  string_chpl local__str_literal_75_chpl;
  int64_t local_dataParMinGranularity_chpl;
  chpl_bool local_dataParIgnoreRunningTasks_chpl;
  int64_t local_dataParTasksPerLocale_chpl;
  string_chpl local__str_literal_3454_chpl;
  string_chpl local__str_literal_3449_chpl;
  chpl_bool actuallyResizing_chpl;
  range_int64_t_bounded_F_chpl call_tmp_chpl36;
  range_int64_t_bounded_F_chpl ret_tmp_chpl;
  range_int64_t_bounded_F_chpl _ic__F0_this_chpl;
  int64_t i_chpl;
  range_int64_t_bounded_F_chpl this_chpl8;
  int64_t coerce_tmp_chpl3;
  range_int64_t_bounded_F_chpl this_chpl9;
  int64_t end_chpl;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl call_tmp_chpl38;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl ret_tmp_chpl2;
  chpl_bool call_tmp_chpl39;
  range_int64_t_bounded_F_chpl coerce_tmp_chpl5;
  chpl____wide_BaseArr coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_ddataResizePolicy tmp_chpl15;
  chpl_localeID_t call_tmp_chpl40;
  locale_chpl call_tmp_chpl41;
  locale_chpl ret_tmp_chpl3;
  chpl____wide__ref_chpl_localeID_t tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  locale_chpl call_tmp_chpl42;
  chpl_localeID_t call_tmp_chpl43;
  int32_t call_tmp_chpl44;
  chpl_localeID_t call_tmp_chpl45;
  locale_chpl call_tmp_chpl46;
  locale_chpl ret_tmp_chpl4;
  chpl____wide__ref_chpl_localeID_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl47;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl call_tmp_chpl48;
  range_int64_t_bounded_F_chpl coerce_tmp_chpl7;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl ret_tmp_chpl5;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl reallocD_chpl;
  _ref_DefaultRectangularDom_1_int64_t_F_chpl _instance_chpl = NULL;
  int64_t call_tmp_chpl49;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t oldSize_chpl;
  int64_t call_tmp_chpl50;
  chpl____wide__ref__wide__domain_DefaultRectangularDom_1_int64_t_F tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t newSize_chpl;
  int64_t call_tmp_chpl51;
  int64_t call_tmp_chpl52;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl19;
  int64_t call_tmp_chpl53;
  int64_t call_tmp_chpl54;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl20;
  int64_t call_tmp_chpl55;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl21;
  int64_t call_tmp_chpl56;
  chpl____wide__ref__wide__domain_DefaultRectangularDom_1_int64_t_F tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl23;
  chpl____wide__ddata_uint64_t coerce_tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr call_tmp_chpl57;
  uint64_t call_tmp_chpl58;
  chpl_bool call_tmp_chpl59;
  chpl____wide__ref__tuple_1_star_int64_t call_tmp_chpl60 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl call_tmp_chpl61;
  DefaultRectangularDom_1_int64_t_F_chpl ret_chpl = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl ret_tmp_chpl6;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl25 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl62;
  chpl____wide_BaseArr coerce_tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_uint64_t coerce_tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_ddataResizePolicy coerce_tmp_chpl15;
  chpl_ddataResizePolicy tmp_chpl26;
  chpl_bool callPostAlloc_chpl;
  c_void_ptr call_tmp_chpl63;
  uint64_t call_tmp_chpl64;
  c_void_ptr call_tmp_chpl65;
  _ddata_uint64_t_chpl call_tmp_chpl66 = NULL;
  uint64_t call_tmp_chpl67;
  int64_t call_tmp_chpl68;
  int64_t call_tmp_chpl69;
  uint64_t call_tmp_chpl70;
  chpl_bool call_tmp_chpl71;
  uint64_t call_tmp_chpl72;
  _ddata_uint64_t_chpl ret_chpl2 = NULL;
  c_void_ptr call_tmp_chpl73;
  int32_t call_tmp_chpl74;
  c_void_ptr call_tmp_chpl75;
  uint64_t call_tmp_chpl76;
  c_void_ptr call_tmp_chpl77;
  chpl____wide__ddata_uint64_t tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl78;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl28;
  int64_t call_tmp_chpl79;
  chpl____wide__ddata_uint64_t coerce_tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_uint64_t ret_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ddata_uint64_t_chpl tmp_chpl29 = NULL;
  DefaultRectangularDom_1_int64_t_F_chpl ret_chpl4 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl30 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t_chpl new_temp_chpl = NULL;
  _ddata_uint64_t_chpl tmp_chpl31 = NULL;
  c_void_ptr tmp_chpl32;
  DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t_chpl copy_chpl = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F call_tmp_chpl80 = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F_chpl call_tmp_chpl81;
  range_int64_t_bounded_F_chpl coerce_tmp_chpl20;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl ret_tmp_chpl7;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl keep_chpl;
  _ref_DefaultRectangularDom_1_int64_t_F_chpl _instance_chpl2 = NULL;
  DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t_chpl copy_chpl2 = NULL;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t this_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularDom_1_int64_t_F_chpl ret_chpl5 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl33 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularDom_1_int64_t_F_chpl coerce_tmp_chpl21 = NULL;
  int64_t tasksPerLocale_chpl;
  chpl_bool ignoreRunning_chpl;
  int64_t minIndicesPerTask_chpl;
  _tuple_1_star_int64_t_chpl ret_tmp_chpl8;
  chpl____wide_Error error_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl34;
  locale_chpl call_tmp_chpl82;
  chpl_localeID_t call_tmp_chpl83;
  int32_t call_tmp_chpl84;
  chpl_localeID_t call_tmp_chpl85;
  locale_chpl call_tmp_chpl86;
  locale_chpl ret_tmp_chpl9;
  chpl____wide__ref_chpl_localeID_t tmp_chpl35 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl37;
  _ref_locale_chpl i_x_chpl = NULL;
  chpl____wide__ref_locale tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_x0_chpl;
  int64_t tmp_x1_chpl;
  _ref__tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl87 = NULL;
  _tuple_2_star_int64_t_chpl ret_tmp_chpl10;
  int64_t numChunks_chpl;
  int64_t parDim_chpl;
  range_int64_t_bounded_F_chpl tmpIter_chpl;
  range_int64_t_boundedLow_F_chpl call_tmp_chpl88;
  range_int64_t_boundedLow_F_chpl ret_tmp_chpl11;
  range_int64_t_bounded_F_chpl ret_tmp_chpl12;
  chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount_chpl = NULL;
  chpl___EndCount_AtomicT_int64_t_int64_t new_temp_chpl2 = NULL;
  int64_t numTasks_chpl;
  range_int64_t_bounded_F_chpl _ic__F0_this_chpl2;
  int64_t i_chpl2;
  range_int64_t_bounded_F_chpl this_chpl11;
  int64_t coerce_tmp_chpl25;
  range_int64_t_bounded_F_chpl this_chpl12;
  int64_t end_chpl2;
  _class_localscoforall_fn_chpl6 _args_forcoforall_fn_chpl = NULL;
  c_void_ptr _args_vforcoforall_fn_chpl;
  chpl____wide_Error error_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_Error_chpl tmp_chpl39 = NULL;
  chpl____wide__ref__tuple_1_star_int64_t call_tmp_chpl89 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t_chpl coerce_tmp_chpl26 = NULL;
  chpl____wide__ref__tuple_1_star_int64_t call_tmp_chpl90 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t_chpl coerce_tmp_chpl27 = NULL;
  chpl____wide__ref__tuple_1_star_int64_t call_tmp_chpl91 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t_chpl coerce_tmp_chpl28 = NULL;
  DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t_chpl coerce_tmp_chpl29 = NULL;
  int64_t coerce_tmp_chpl30;
  DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t_chpl coerce_tmp_chpl31 = NULL;
  _ddata_uint64_t_chpl coerce_tmp_chpl32 = NULL;
  chpl____wide__ddata_uint64_t tmp_chpl40 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_uint64_t tmp_chpl41 = {CHPL_LOCALEID_T_INIT, NULL};
  uint64_t call_tmp_chpl92;
  chpl_bool tmp_chpl42;
  DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t_chpl coerce_tmp_chpl33 = NULL;
  _ddata_uint64_t_chpl coerce_tmp_chpl34 = NULL;
  chpl____wide__ddata_uint64_t tmp_chpl43 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_uint64_t tmp_chpl44 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_locale tmp_chpl45 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_locale tmp_chpl46 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1330;
  chpl____wide_BaseArr chpl_macro_tmp_1331;
  chpl____wide__ref_chpl_ddataResizePolicy chpl_macro_tmp_1332;
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_1333;
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_1334;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_1335;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1336;
  chpl____wide__ref__wide__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1337;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1338;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1339;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1340;
  chpl____wide__ref__wide__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1341;
  chpl____wide__ref__wide__ddata_uint64_t chpl_macro_tmp_1342;
  chpl____wide__ref__tuple_1_star_int64_t chpl_macro_tmp_1343;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1344;
  chpl____wide__ref_int64_t chpl_macro_tmp_1345;
  chpl____wide_BaseArr chpl_macro_tmp_1346;
  chpl____wide__ref__wide__ddata_uint64_t chpl_macro_tmp_1347;
  chpl____wide__ref_chpl_ddataResizePolicy chpl_macro_tmp_1348;
  chpl____wide__ddata_uint64_t chpl_macro_tmp_1349;
  chpl____wide__ref__wide__ddata_uint64_t chpl_macro_tmp_1350;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1351;
  chpl____wide__ref_int64_t chpl_macro_tmp_1352;
  chpl____wide__ref__wide__ddata_uint64_t chpl_macro_tmp_1353;
  chpl____wide__ddata_uint64_t chpl_macro_tmp_1354;
  chpl____wide__ddata_uint64_t chpl_macro_tmp_1355;
  chpl____wide__ref__wide__ddata_uint64_t chpl_macro_tmp_1356;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_1357;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1358;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_1359;
  chpl____wide__nilType chpl_macro_tmp_1360;
  chpl____wide_Error chpl_macro_tmp_1361;
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_1362;
  chpl____wide_object chpl_macro_tmp_1363;
  chpl____wide__nilType chpl_macro_tmp_1364;
  chpl____wide_object chpl_macro_tmp_1365;
  chpl____wide__ref_int64_t chpl_macro_tmp_1366;
  chpl____wide__ref_locale chpl_macro_tmp_1367;
  chpl__class_localscoforall_fn_chpl6_object chpl_macro_tmp_1368;
  chpl____wide__nilType chpl_macro_tmp_1369;
  chpl____wide_Error chpl_macro_tmp_1370;
  chpl____wide__ref__tuple_1_star_int64_t chpl_macro_tmp_1371;
  chpl____wide__ref__tuple_1_star_int64_t chpl_macro_tmp_1372;
  chpl____wide__ref__tuple_1_star_int64_t chpl_macro_tmp_1373;
  chpl____wide__ref_int64_t chpl_macro_tmp_1374;
  chpl____wide__ddata_uint64_t chpl_macro_tmp_1375;
  chpl____wide__ref__wide__ddata_uint64_t chpl_macro_tmp_1376;
  chpl____wide__ddata_uint64_t chpl_macro_tmp_1377;
  chpl____wide__ref__wide__ddata_uint64_t chpl_macro_tmp_1378;
  chpl____wide__ref_locale chpl_macro_tmp_1379;
  chpl____wide__ref_locale chpl_macro_tmp_1380;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  local_dataParMinGranularity_chpl = dataParMinGranularity_chpl;
  local_dataParIgnoreRunningTasks_chpl = dataParIgnoreRunningTasks_chpl;
  local_dataParTasksPerLocale_chpl = dataParTasksPerLocale_chpl;
  local__str_literal_3454_chpl = _str_literal_3454_chpl /* "internal error: Unsigned integer overflow during memset of dynamic block" */;
  local__str_literal_3449_chpl = _str_literal_3449_chpl /* "internal error: dsiReallocate() can only be called from an array's home locale" */;
  actuallyResizing_chpl = UINT8(false);
  indices_chpl(bounds_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  _ic__F0_this_chpl = call_tmp_chpl36;
  checkIfIterWillOverflow_chpl(call_tmp_chpl36, UINT8(true));
  i_chpl = INT64(0);
  this_chpl8 = _ic__F0_this_chpl;
  coerce_tmp_chpl3 = (&this_chpl8)->_low;
  this_chpl9 = _ic__F0_this_chpl;
  end_chpl = (&this_chpl9)->_high;
  for (i_chpl = coerce_tmp_chpl3; ((i_chpl <= end_chpl)); i_chpl += INT64(1)) {
    call_tmp_chpl37 = this_chpl5(bounds_chpl, i_chpl);
    chpl_check_nil((&this_chpl7)->addr, INT64(1415), INT32(28));
    chpl_macro_tmp_1330.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_1330.addr = &(((&this_chpl7)->addr)->dom);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID((chpl_macro_tmp_1330).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1330).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(85), INT64(1415), INT64(28));
    chpl_check_nil((&coerce_tmp_chpl4)->addr, INT64(1415), INT32(28));
    dsiDim_chpl(coerce_tmp_chpl4, i_chpl, &ret_tmp_chpl2);
    call_tmp_chpl38 = ret_tmp_chpl2;
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID((call_tmp_chpl37).locale, INT64(0), INT32(0)), (call_tmp_chpl37).addr, sizeof(range_int64_t_bounded_F_chpl), COMMID(86), INT64(1415), INT64(28));
    call_tmp_chpl39 = chpl___EXCLAMATION__ASSIGN_2(coerce_tmp_chpl5, call_tmp_chpl38);
    if (call_tmp_chpl39) {
      actuallyResizing_chpl = UINT8(true);
      goto _breakLabel_chpl;
    }
  }
  _breakLabel_chpl:;
  if (! actuallyResizing_chpl) {
    goto _end_dsiReallocate_chpl;
  }
  chpl_macro_tmp_1331.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1331.addr = ((BaseArr_chpl)((&this_chpl7)->addr));
  coerce_tmp_chpl6 = chpl_macro_tmp_1331;
  chpl_check_nil((&coerce_tmp_chpl6)->addr, INT64(1424), INT32(28));
  chpl_macro_tmp_1332.locale = (&coerce_tmp_chpl6)->locale;
  chpl_macro_tmp_1332.addr = &(((&coerce_tmp_chpl6)->addr)->_resizePolicy);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1332).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1332).addr, sizeof(chpl_ddataResizePolicy), COMMID(87), INT64(1424), INT64(28));
  if (tmp_chpl15 == chpl_ddataResizePolicy_normalInit_chpl) {
  }
  call_tmp_chpl40 = (&this_chpl7)->locale;
  chpl_macro_tmp_1333.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1333.addr = &call_tmp_chpl40;
  tmp_chpl16 = chpl_macro_tmp_1333;
  chpl_localeID_to_locale(tmp_chpl16, &ret_tmp_chpl3);
  call_tmp_chpl41 = ret_tmp_chpl3;
  call_tmp_chpl44 = get_chpl_nodeID();
  call_tmp_chpl45 = chpl_rt_buildLocaleID(call_tmp_chpl44, c_sublocid_any);
  call_tmp_chpl43 = call_tmp_chpl45;
  chpl_macro_tmp_1334.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1334.addr = &call_tmp_chpl43;
  tmp_chpl17 = chpl_macro_tmp_1334;
  chpl_localeID_to_locale(tmp_chpl17, &ret_tmp_chpl4);
  call_tmp_chpl46 = ret_tmp_chpl4;
  call_tmp_chpl42 = call_tmp_chpl46;
  call_tmp_chpl47 = chpl___EXCLAMATION__ASSIGN_(&call_tmp_chpl41, &call_tmp_chpl42);
  if (call_tmp_chpl47) {
    halt_chpl(&local__str_literal_3449_chpl, INT64(1430), INT32(28));
  } else {
    chpl_macro_tmp_1335.locale = (bounds_chpl).locale;
    chpl_macro_tmp_1335.addr = (*((bounds_chpl).addr) + INT64(0));
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl7)), chpl_nodeFromLocaleID((chpl_macro_tmp_1335).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1335).addr, sizeof(range_int64_t_bounded_F_chpl), COMMID(88), INT64(1433), INT64(28));
    chpl__buildDomainExpr(coerce_tmp_chpl7, UINT8(true), &ret_tmp_chpl5);
    call_tmp_chpl48 = ret_tmp_chpl5;
    reallocD_chpl = call_tmp_chpl48;
    _instance_chpl = &((&((&reallocD_chpl)->_instance))->addr);
    chpl_check_nil(_instance_chpl, INT64(1433), INT32(28));
    ((BaseDom_chpl)(*(_instance_chpl)))->definedConst = UINT8(true);
    chpl_check_nil((&this_chpl7)->addr, INT64(1439), INT32(28));
    chpl_macro_tmp_1336.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_1336.addr = &(((&this_chpl7)->addr)->dom);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl8)), chpl_nodeFromLocaleID((chpl_macro_tmp_1336).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1336).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(89), INT64(1439), INT64(28));
    chpl_check_nil((&coerce_tmp_chpl8)->addr, INT64(1439), INT32(28));
    call_tmp_chpl49 = dsiNumIndices_chpl(coerce_tmp_chpl8);
    oldSize_chpl = call_tmp_chpl49;
    chpl_macro_tmp_1337.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1337.addr = &reallocD_chpl;
    tmp_chpl18 = chpl_macro_tmp_1337;
    call_tmp_chpl50 = sizeAs_chpl(tmp_chpl18);
    newSize_chpl = call_tmp_chpl50;
    call_tmp_chpl51 = low_chpl(&reallocD_chpl);
    chpl_check_nil((&this_chpl7)->addr, INT64(1442), INT32(28));
    chpl_macro_tmp_1338.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_1338.addr = &(((&this_chpl7)->addr)->dom);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl9)), chpl_nodeFromLocaleID((chpl_macro_tmp_1338).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1338).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(90), INT64(1442), INT64(28));
    chpl_check_nil((&coerce_tmp_chpl9)->addr, INT64(1442), INT32(28));
    call_tmp_chpl52 = dsiLow_chpl(coerce_tmp_chpl9);
    if (call_tmp_chpl51 == call_tmp_chpl52) {
      call_tmp_chpl53 = stride_chpl(&reallocD_chpl);
      chpl_check_nil((&this_chpl7)->addr, INT64(1442), INT32(28));
      chpl_macro_tmp_1339.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1339.addr = &(((&this_chpl7)->addr)->dom);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl10)), chpl_nodeFromLocaleID((chpl_macro_tmp_1339).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1339).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(91), INT64(1442), INT64(28));
      chpl_check_nil((&coerce_tmp_chpl10)->addr, INT64(1442), INT32(28));
      call_tmp_chpl54 = dsiStride_chpl(coerce_tmp_chpl10);
      tmp_chpl19 = (call_tmp_chpl53 == call_tmp_chpl54);
    } else {
      tmp_chpl19 = UINT8(false);
    }
    if (tmp_chpl19) {
      chpl_check_nil((&this_chpl7)->addr, INT64(1443), INT32(28));
      chpl_macro_tmp_1340.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1340.addr = &(((&this_chpl7)->addr)->dom);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl11)), chpl_nodeFromLocaleID((chpl_macro_tmp_1340).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1340).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(92), INT64(1443), INT64(28));
      chpl_check_nil((&coerce_tmp_chpl11)->addr, INT64(1443), INT32(28));
      call_tmp_chpl55 = dsiNumIndices_chpl(coerce_tmp_chpl11);
      tmp_chpl20 = (call_tmp_chpl55 > INT64(0));
    } else {
      tmp_chpl20 = UINT8(false);
    }
    if (tmp_chpl20) {
      chpl_macro_tmp_1341.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1341.addr = &reallocD_chpl;
      tmp_chpl22 = chpl_macro_tmp_1341;
      call_tmp_chpl56 = size_chpl(tmp_chpl22);
      tmp_chpl21 = (call_tmp_chpl56 > INT64(0));
    } else {
      tmp_chpl21 = UINT8(false);
    }
    if (tmp_chpl21) {
      chpl_check_nil((&this_chpl7)->addr, INT64(1444), INT32(28));
      chpl_macro_tmp_1342.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1342.addr = &(((&this_chpl7)->addr)->data);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl12)), chpl_nodeFromLocaleID((chpl_macro_tmp_1342).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1342).addr, sizeof(chpl____wide__ddata_uint64_t), COMMID(93), INT64(1444), INT64(28));
      call_tmp_chpl57 = ((c_void_ptr)((&coerce_tmp_chpl12)->addr));
      checkValue_chpl(call_tmp_chpl49);
      call_tmp_chpl58 = ((uint64_t)(oldSize_chpl));
      checkValue_chpl(call_tmp_chpl50);
      call_tmp_chpl59 = chpl_mem_array_supports_realloc(call_tmp_chpl57, call_tmp_chpl58, ((uint64_t)(newSize_chpl)), ((uint64_t)(sizeof(uint64_t))), INT64(1444), INT32(28));
      tmp_chpl23 = call_tmp_chpl59;
    } else {
      tmp_chpl23 = UINT8(false);
    }
    if (tmp_chpl23) {
      chpl_check_nil((&this_chpl7)->addr, INT64(1449), INT32(28));
      chpl_macro_tmp_1343.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1343.addr = &(((&this_chpl7)->addr)->sizesPerDim);
      call_tmp_chpl60 = chpl_macro_tmp_1343;
      tmp_chpl24 = (&reallocD_chpl)->_instance;
      ret_chpl = (&tmp_chpl24)->addr;
      chpl_macro_tmp_1344.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1344.addr = ret_chpl;
      tmp_chpl25 = chpl_macro_tmp_1344;
      chpl_check_nil((&tmp_chpl25)->addr, INT64(1449), INT32(28));
      dsiDim_chpl2(tmp_chpl25, &ret_tmp_chpl6);
      call_tmp_chpl61 = ret_tmp_chpl6;
      call_tmp_chpl62 = sizeAs_chpl3(call_tmp_chpl61);
      chpl_macro_tmp_1345.locale = (call_tmp_chpl60).locale;
      chpl_macro_tmp_1345.addr = (*((call_tmp_chpl60).addr) + INT64(0));
      chpl_gen_comm_put(((void*)(&call_tmp_chpl62)), chpl_nodeFromLocaleID((chpl_macro_tmp_1345).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1345).addr, sizeof(int64_t), COMMID(94), INT64(1449), INT64(28));
      chpl_macro_tmp_1346.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1346.addr = ((BaseArr_chpl)((&this_chpl7)->addr));
      coerce_tmp_chpl13 = chpl_macro_tmp_1346;
      chpl_check_nil((&this_chpl7)->addr, INT64(1450), INT32(28));
      chpl_macro_tmp_1347.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1347.addr = &(((&this_chpl7)->addr)->data);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl14)), chpl_nodeFromLocaleID((chpl_macro_tmp_1347).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1347).addr, sizeof(chpl____wide__ddata_uint64_t), COMMID(95), INT64(1450), INT64(28));
      chpl_check_nil((&coerce_tmp_chpl13)->addr, INT64(1455), INT32(28));
      chpl_macro_tmp_1348.locale = (&coerce_tmp_chpl13)->locale;
      chpl_macro_tmp_1348.addr = &(((&coerce_tmp_chpl13)->addr)->_resizePolicy);
      chpl_gen_comm_get(((void*)(&tmp_chpl26)), chpl_nodeFromLocaleID((chpl_macro_tmp_1348).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1348).addr, sizeof(chpl_ddataResizePolicy), COMMID(96), INT64(1455), INT64(28));
      coerce_tmp_chpl15 = tmp_chpl26;
      callPostAlloc_chpl = UINT8(false);
      call_tmp_chpl63 = ((c_void_ptr)((&coerce_tmp_chpl14)->addr));
      checkValue_chpl(oldSize_chpl);
      call_tmp_chpl64 = ((uint64_t)(oldSize_chpl));
      checkValue_chpl(newSize_chpl);
      call_tmp_chpl65 = chpl_mem_array_realloc(call_tmp_chpl63, call_tmp_chpl64, ((uint64_t)(newSize_chpl)), ((uint64_t)(sizeof(uint64_t))), c_sublocid_none, &callPostAlloc_chpl, INT64(1450), INT32(28));
      call_tmp_chpl66 = ((_ddata_uint64_t_chpl)(call_tmp_chpl65));
      if (coerce_tmp_chpl15 == chpl_ddataResizePolicy_normalInit_chpl) {
        init_elts_chpl3(call_tmp_chpl66, newSize_chpl, oldSize_chpl);
      } else {
        if (coerce_tmp_chpl15 == chpl_ddataResizePolicy_skipInit_chpl) {
        } else {
          if (coerce_tmp_chpl15 == chpl_ddataResizePolicy_skipInitButClearMem_chpl) {
            if (newSize_chpl > oldSize_chpl) {
              call_tmp_chpl67 = ((uint64_t)(sizeof(uint64_t)));
              call_tmp_chpl69 = (newSize_chpl - oldSize_chpl);
              call_tmp_chpl68 = call_tmp_chpl69;
              checkValue_chpl(call_tmp_chpl69);
              call_tmp_chpl70 = ((uint64_t)(call_tmp_chpl68));
              call_tmp_chpl71 = safeMul_chpl(call_tmp_chpl70, call_tmp_chpl67);
              if (call_tmp_chpl71) {
                call_tmp_chpl72 = (call_tmp_chpl70 * call_tmp_chpl67);
                ret_chpl2 = ((_ddata_uint64_t_chpl)(nil));
                ret_chpl2 = (call_tmp_chpl66 + oldSize_chpl);
                call_tmp_chpl73 = ((c_void_ptr)(ret_chpl2));
                checkValue_chpl3();
                call_tmp_chpl74 = ((int32_t)(INT8(0)));
                checkValue_chpl4();
                memset(call_tmp_chpl73, call_tmp_chpl74, call_tmp_chpl72);
              } else {
                halt_chpl(&local__str_literal_3454_chpl, INT64(1450), INT32(28));
              }
            }
          }
        }
      }
      if (callPostAlloc_chpl) {
        call_tmp_chpl75 = ((c_void_ptr)((&coerce_tmp_chpl14)->addr));
        checkValue_chpl(oldSize_chpl);
        call_tmp_chpl76 = ((uint64_t)(oldSize_chpl));
        call_tmp_chpl77 = ((c_void_ptr)(call_tmp_chpl66));
        checkValue_chpl(newSize_chpl);
        chpl_mem_array_postRealloc(call_tmp_chpl75, call_tmp_chpl76, call_tmp_chpl77, ((uint64_t)(newSize_chpl)), ((uint64_t)(sizeof(uint64_t))), INT64(1450), INT32(28));
      }
      chpl_macro_tmp_1349.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1349.addr = call_tmp_chpl66;
      tmp_chpl27 = chpl_macro_tmp_1349;
      if (chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl27)->locale, INT64(0), INT32(0))) {
        chpl_error("Attempted to assign to local class field with remote class", INT64(1450), INT32(28));
      }
      chpl_check_nil((&this_chpl7)->addr, INT64(1450), INT32(28));
      chpl_macro_tmp_1350.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1350.addr = &(((&this_chpl7)->addr)->data);
      chpl_gen_comm_put(((void*)(&tmp_chpl27)), chpl_nodeFromLocaleID((chpl_macro_tmp_1350).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1350).addr, sizeof(chpl____wide__ddata_uint64_t), COMMID(97), INT64(1450), INT64(28));
      chpl_check_nil((&this_chpl7)->addr, INT64(1456), INT32(28));
      chpl_macro_tmp_1351.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1351.addr = &(((&this_chpl7)->addr)->dom);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl16)), chpl_nodeFromLocaleID((chpl_macro_tmp_1351).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1351).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(98), INT64(1456), INT64(28));
      chpl_check_nil((&coerce_tmp_chpl16)->addr, INT64(1456), INT32(28));
      call_tmp_chpl78 = dsiNumIndices_chpl(coerce_tmp_chpl16);
      if (call_tmp_chpl78 > INT64(0)) {
        chpl_check_nil((&this_chpl7)->addr, INT64(1456), INT32(28));
        chpl_macro_tmp_1352.locale = (&this_chpl7)->locale;
        chpl_macro_tmp_1352.addr = &(((&this_chpl7)->addr)->factoredOffs);
        chpl_gen_comm_get(((void*)(&tmp_chpl28)), chpl_nodeFromLocaleID((chpl_macro_tmp_1352).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1352).addr, sizeof(int64_t), COMMID(99), INT64(1456), INT64(28));
        call_tmp_chpl79 = (INT64(0) - tmp_chpl28);
        chpl_check_nil((&this_chpl7)->addr, INT64(1456), INT32(28));
        chpl_macro_tmp_1353.locale = (&this_chpl7)->locale;
        chpl_macro_tmp_1353.addr = &(((&this_chpl7)->addr)->data);
        chpl_gen_comm_get(((void*)(&coerce_tmp_chpl17)), chpl_nodeFromLocaleID((chpl_macro_tmp_1353).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1353).addr, sizeof(chpl____wide__ddata_uint64_t), COMMID(100), INT64(1456), INT64(28));
        tmp_chpl29 = ((_ddata_uint64_t_chpl)(nil));
        chpl_macro_tmp_1354.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1354.addr = tmp_chpl29;
        ret_chpl3 = chpl_macro_tmp_1354;
        chpl_macro_tmp_1355.locale = (&coerce_tmp_chpl17)->locale;
        chpl_macro_tmp_1355.addr = ((&coerce_tmp_chpl17)->addr + call_tmp_chpl79);
        ret_chpl3 = chpl_macro_tmp_1355;
        if (chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&ret_chpl3)->locale, INT64(0), INT32(0))) {
          chpl_error("Attempted to assign to local class field with remote class", INT64(1456), INT32(28));
        }
        chpl_check_nil((&this_chpl7)->addr, INT64(1456), INT32(28));
        chpl_macro_tmp_1356.locale = (&this_chpl7)->locale;
        chpl_macro_tmp_1356.addr = &(((&this_chpl7)->addr)->shiftedData);
        chpl_gen_comm_put(((void*)(&ret_chpl3)), chpl_nodeFromLocaleID((chpl_macro_tmp_1356).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1356).addr, sizeof(chpl____wide__ddata_uint64_t), COMMID(101), INT64(1456), INT64(28));
      }
    } else {
      tmp_chpl30 = (&reallocD_chpl)->_instance;
      ret_chpl4 = (&tmp_chpl30)->addr;
      tmp_chpl31 = ((_ddata_uint64_t_chpl)(nil));
      tmp_chpl32 = ((c_void_ptr)(nil));
      new_temp_chpl = _new_chpl9(ret_chpl4, tmp_chpl31, UINT8(false), UINT8(false), tmp_chpl32, INT64(1462), INT32(28));
      copy_chpl = new_temp_chpl;
      chpl_check_nil((&this_chpl7)->addr, INT64(1489), INT32(28));
      chpl_macro_tmp_1357.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1357.addr = &(((&this_chpl7)->addr)->dom);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl18)), chpl_nodeFromLocaleID((chpl_macro_tmp_1357).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1357).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(102), INT64(1489), INT64(28));
      coerce_tmp_chpl19 = coerce_tmp_chpl18;
      chpl_check_nil((&coerce_tmp_chpl19)->addr, INT64(1489), INT32(28));
      chpl_macro_tmp_1358.locale = (&coerce_tmp_chpl19)->locale;
      chpl_macro_tmp_1358.addr = &(((&coerce_tmp_chpl19)->addr)->ranges);
      call_tmp_chpl80 = chpl_macro_tmp_1358;
      chpl_macro_tmp_1359.locale = (call_tmp_chpl80).locale;
      chpl_macro_tmp_1359.addr = (*((call_tmp_chpl80).addr) + INT64(0));
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl20)), chpl_nodeFromLocaleID((chpl_macro_tmp_1359).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1359).addr, sizeof(range_int64_t_bounded_F_chpl), COMMID(103), INT64(1489), INT64(28));
      this_chpl(&reallocD_chpl, coerce_tmp_chpl20, &ret_tmp_chpl7);
      call_tmp_chpl81 = ret_tmp_chpl7;
      keep_chpl = call_tmp_chpl81;
      _instance_chpl2 = &((&((&keep_chpl)->_instance))->addr);
      chpl_check_nil(_instance_chpl2, INT64(1489), INT32(28));
      ((BaseDom_chpl)(*(_instance_chpl2)))->definedConst = UINT8(false);
      copy_chpl2 = new_temp_chpl;
      this_chpl10 = this_chpl7;
      tmp_chpl33 = (&keep_chpl)->_instance;
      ret_chpl5 = (&tmp_chpl33)->addr;
      coerce_tmp_chpl21 = ret_chpl5;
      tasksPerLocale_chpl = local_dataParTasksPerLocale_chpl;
      ignoreRunning_chpl = local_dataParIgnoreRunningTasks_chpl;
      minIndicesPerTask_chpl = local_dataParMinGranularity_chpl;
      createTuple_chpl(INT64(0), &ret_tmp_chpl8);
      chpl_macro_tmp_1360.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1360.addr = nil;
      chpl_macro_tmp_1361.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1361.addr = NULL;
      error_chpl = chpl_macro_tmp_1361;
      if (tasksPerLocale_chpl == INT64(0)) {
        call_tmp_chpl84 = get_chpl_nodeID();
        call_tmp_chpl85 = chpl_rt_buildLocaleID(call_tmp_chpl84, c_sublocid_any);
        call_tmp_chpl83 = call_tmp_chpl85;
        chpl_macro_tmp_1362.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1362.addr = &call_tmp_chpl83;
        tmp_chpl35 = chpl_macro_tmp_1362;
        chpl_localeID_to_locale(tmp_chpl35, &ret_tmp_chpl9);
        call_tmp_chpl86 = ret_tmp_chpl9;
        call_tmp_chpl82 = call_tmp_chpl86;
        coerce_tmp_chpl22 = (&call_tmp_chpl82)->_instance;
        chpl_macro_tmp_1363.locale = (&coerce_tmp_chpl22)->locale;
        chpl_macro_tmp_1363.addr = ((object_chpl)((&coerce_tmp_chpl22)->addr));
        coerce_tmp_chpl23 = chpl_macro_tmp_1363;
        chpl_macro_tmp_1364.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1364.addr = nil;
        chpl_macro_tmp_1365.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1365.addr = NULL;
        tmp_chpl36 = chpl_macro_tmp_1365;
        if (! (((&coerce_tmp_chpl23)->addr != (&tmp_chpl36)->addr) || ((!(! (&coerce_tmp_chpl23)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl23)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl36)->locale, INT64(0), INT32(0)))))) {
          nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(1492), INT32(28));
        }
        coerce_tmp_chpl24 = coerce_tmp_chpl22;
        chpl_check_nil((&coerce_tmp_chpl24)->addr, INT64(1492), INT32(28));
        chpl_macro_tmp_1366.locale = (&coerce_tmp_chpl24)->locale;
        chpl_macro_tmp_1366.addr = &(((&coerce_tmp_chpl24)->addr)->maxTaskPar);
        chpl_gen_comm_get(((void*)(&tmp_chpl37)), chpl_nodeFromLocaleID((chpl_macro_tmp_1366).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1366).addr, sizeof(int64_t), COMMID(104), INT64(1492), INT64(28));
        tmp_chpl34 = tmp_chpl37;
        i_x_chpl = &call_tmp_chpl82;
        chpl_macro_tmp_1367.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1367.addr = i_x_chpl;
        tmp_chpl38 = chpl_macro_tmp_1367;
        deinit_chpl14(tmp_chpl38);
      } else {
        tmp_chpl34 = tasksPerLocale_chpl;
      }
      if (chpl_task_getSerial()) {
        tmp_x0_chpl = INT64(1);
        tmp_x1_chpl = INT64(0);
      } else {
        chpl_check_nil(coerce_tmp_chpl21, INT64(1492), INT32(28));
        call_tmp_chpl87 = &((coerce_tmp_chpl21)->ranges);
        _computeChunkStuff_chpl(tmp_chpl34, ignoreRunning_chpl, minIndicesPerTask_chpl, call_tmp_chpl87, &ret_tmp_chpl10);
        tmp_x0_chpl = *(ret_tmp_chpl10 + INT64(0));
        tmp_x1_chpl = *(ret_tmp_chpl10 + INT64(1));
      }
      numChunks_chpl = tmp_x0_chpl;
      parDim_chpl = tmp_x1_chpl;
      chpl_build_low_bounded_range(INT64(0), &ret_tmp_chpl11);
      call_tmp_chpl88 = ret_tmp_chpl11;
      chpl___POUND_(call_tmp_chpl88, tmp_x0_chpl, &ret_tmp_chpl12);
      tmpIter_chpl = ret_tmp_chpl12;
      new_temp_chpl2 = _new_chpl(INT64(1492), INT32(28));
      _coforallCount_chpl = new_temp_chpl2;
      numTasks_chpl = chpl_boundedCoforallSize(tmpIter_chpl);
      _upEndCount_chpl(_coforallCount_chpl, numTasks_chpl);
      chpl_resetTaskSpawn(numTasks_chpl);
      _ic__F0_this_chpl2 = tmpIter_chpl;
      checkIfIterWillOverflow_chpl(tmpIter_chpl, UINT8(true));
      i_chpl2 = INT64(0);
      this_chpl11 = _ic__F0_this_chpl2;
      coerce_tmp_chpl25 = (&this_chpl11)->_low;
      this_chpl12 = _ic__F0_this_chpl2;
      end_chpl2 = (&this_chpl12)->_high;
      for (i_chpl2 = coerce_tmp_chpl25; ((i_chpl2 <= end_chpl2)); i_chpl2 += INT64(1)) {
        _args_forcoforall_fn_chpl = ((_class_localscoforall_fn_chpl6)(&chpl_macro_tmp_1368));
        chpl_check_nil(_args_forcoforall_fn_chpl, INT64(1492), INT32(28));
        (_args_forcoforall_fn_chpl)->_0_numChunks = numChunks_chpl;
        chpl_check_nil(_args_forcoforall_fn_chpl, INT64(1492), INT32(28));
        (_args_forcoforall_fn_chpl)->_1_parDim = parDim_chpl;
        chpl_check_nil(_args_forcoforall_fn_chpl, INT64(1492), INT32(28));
        (_args_forcoforall_fn_chpl)->_2_coerce_tmp = coerce_tmp_chpl21;
        chpl_check_nil(_args_forcoforall_fn_chpl, INT64(1492), INT32(28));
        (_args_forcoforall_fn_chpl)->_3__coforallCount = _coforallCount_chpl;
        chpl_check_nil(_args_forcoforall_fn_chpl, INT64(1492), INT32(28));
        (_args_forcoforall_fn_chpl)->_4_chunk = i_chpl2;
        chpl_check_nil(_args_forcoforall_fn_chpl, INT64(1492), INT32(28));
        (_args_forcoforall_fn_chpl)->_6_copy = copy_chpl2;
        chpl_check_nil(_args_forcoforall_fn_chpl, INT64(1492), INT32(28));
        (_args_forcoforall_fn_chpl)->_7_this = this_chpl10;
        _args_vforcoforall_fn_chpl = ((void*)(_args_forcoforall_fn_chpl));
        /*** wrapcoforall_fn_chpl7 ***/ chpl_taskAddCoStmt(chpl_task_getRequestedSubloc(), INT64(80), ((chpl_task_bundle_p)(_args_vforcoforall_fn_chpl)), sizeof(chpl__class_localscoforall_fn_chpl6_object), INT64(1492), INT32(28));
      }
      chpl_macro_tmp_1369.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1369.addr = nil;
      chpl_macro_tmp_1370.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1370.addr = NULL;
      error_chpl2 = chpl_macro_tmp_1370;
      tmp_chpl39 = &error_chpl2;
      _waitEndCount_chpl3(_coforallCount_chpl, numTasks_chpl, tmp_chpl39);
      if ((&error_chpl2)->addr != nil) {
        chpl__delete3(_coforallCount_chpl);
        error_chpl = error_chpl2;
        goto forall_IBB_break_label_chpl;
      }
      chpl__delete3(_coforallCount_chpl);
      chpl_after_forall_fence();
      forall_IBB_break_label_chpl:;
      if ((&error_chpl)->addr != nil) {
        chpl_propagate_error(error_chpl, INT64(1492), INT32(28));
      }
      chpl_after_forall_fence();
      chpl_check_nil((&this_chpl7)->addr, INT64(1521), INT32(28));
      chpl_macro_tmp_1371.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1371.addr = &(((&this_chpl7)->addr)->off);
      call_tmp_chpl89 = chpl_macro_tmp_1371;
      coerce_tmp_chpl26 = copy_chpl;
      chpl_check_nil(coerce_tmp_chpl26, INT64(1521), INT32(28));
      chpl_gen_comm_put(((void*)(&((coerce_tmp_chpl26)->off))), chpl_nodeFromLocaleID((call_tmp_chpl89).locale, INT64(0), INT32(0)), (call_tmp_chpl89).addr, sizeof(_tuple_1_star_int64_t_chpl), COMMID(105), INT64(1521), INT64(28));
      chpl_check_nil((&this_chpl7)->addr, INT64(1522), INT32(28));
      chpl_macro_tmp_1372.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1372.addr = &(((&this_chpl7)->addr)->blk);
      call_tmp_chpl90 = chpl_macro_tmp_1372;
      coerce_tmp_chpl27 = copy_chpl;
      chpl_check_nil(coerce_tmp_chpl27, INT64(1522), INT32(28));
      chpl_gen_comm_put(((void*)(&((coerce_tmp_chpl27)->blk))), chpl_nodeFromLocaleID((call_tmp_chpl90).locale, INT64(0), INT32(0)), (call_tmp_chpl90).addr, sizeof(_tuple_1_star_int64_t_chpl), COMMID(106), INT64(1522), INT64(28));
      chpl_check_nil((&this_chpl7)->addr, INT64(1523), INT32(28));
      chpl_macro_tmp_1373.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1373.addr = &(((&this_chpl7)->addr)->str);
      call_tmp_chpl91 = chpl_macro_tmp_1373;
      coerce_tmp_chpl28 = copy_chpl;
      chpl_check_nil(coerce_tmp_chpl28, INT64(1523), INT32(28));
      chpl_gen_comm_put(((void*)(&((coerce_tmp_chpl28)->str))), chpl_nodeFromLocaleID((call_tmp_chpl91).locale, INT64(0), INT32(0)), (call_tmp_chpl91).addr, sizeof(_tuple_1_star_int64_t_chpl), COMMID(107), INT64(1523), INT64(28));
      coerce_tmp_chpl29 = copy_chpl;
      chpl_check_nil(coerce_tmp_chpl29, INT64(1524), INT32(28));
      coerce_tmp_chpl30 = (coerce_tmp_chpl29)->factoredOffs;
      chpl_check_nil((&this_chpl7)->addr, INT64(1524), INT32(28));
      chpl_macro_tmp_1374.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1374.addr = &(((&this_chpl7)->addr)->factoredOffs);
      chpl_gen_comm_put(((void*)(&coerce_tmp_chpl30)), chpl_nodeFromLocaleID((chpl_macro_tmp_1374).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1374).addr, sizeof(int64_t), COMMID(108), INT64(1524), INT64(28));
      chpl_check_nil((&this_chpl7)->addr, INT64(1526), INT32(28));
      dsiDestroyArr_chpl4(this_chpl7, UINT8(false));
      coerce_tmp_chpl31 = copy_chpl;
      chpl_check_nil(coerce_tmp_chpl31, INT64(1527), INT32(28));
      tmp_chpl40 = (coerce_tmp_chpl31)->data;
      chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl40)->locale, INT64(0), INT32(0)), INT64(1527), INT32(28), "cannot access remote data in local block");
      coerce_tmp_chpl32 = (&tmp_chpl40)->addr;
      chpl_macro_tmp_1375.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1375.addr = coerce_tmp_chpl32;
      tmp_chpl41 = chpl_macro_tmp_1375;
      if (chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl41)->locale, INT64(0), INT32(0))) {
        chpl_error("Attempted to assign to local class field with remote class", INT64(1527), INT32(28));
      }
      chpl_check_nil((&this_chpl7)->addr, INT64(1527), INT32(28));
      chpl_macro_tmp_1376.locale = (&this_chpl7)->locale;
      chpl_macro_tmp_1376.addr = &(((&this_chpl7)->addr)->data);
      chpl_gen_comm_put(((void*)(&tmp_chpl41)), chpl_nodeFromLocaleID((chpl_macro_tmp_1376).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1376).addr, sizeof(chpl____wide__ddata_uint64_t), COMMID(109), INT64(1527), INT64(28));
      call_tmp_chpl92 = sizeAs_chpl2(&reallocD_chpl);
      if (INT64(0) < INT64(0)) {
        tmp_chpl42 = UINT8(true);
      } else {
        tmp_chpl42 = (call_tmp_chpl92 > ((uint64_t)(INT64(0))));
      }
      if (tmp_chpl42) {
        coerce_tmp_chpl33 = copy_chpl;
        chpl_check_nil(coerce_tmp_chpl33, INT64(1538), INT32(28));
        tmp_chpl43 = (coerce_tmp_chpl33)->shiftedData;
        chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl43)->locale, INT64(0), INT32(0)), INT64(1538), INT32(28), "cannot access remote data in local block");
        coerce_tmp_chpl34 = (&tmp_chpl43)->addr;
        chpl_macro_tmp_1377.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1377.addr = coerce_tmp_chpl34;
        tmp_chpl44 = chpl_macro_tmp_1377;
        if (chpl_nodeFromLocaleID((&this_chpl7)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl44)->locale, INT64(0), INT32(0))) {
          chpl_error("Attempted to assign to local class field with remote class", INT64(1538), INT32(28));
        }
        chpl_check_nil((&this_chpl7)->addr, INT64(1538), INT32(28));
        chpl_macro_tmp_1378.locale = (&this_chpl7)->locale;
        chpl_macro_tmp_1378.addr = &(((&this_chpl7)->addr)->shiftedData);
        chpl_gen_comm_put(((void*)(&tmp_chpl44)), chpl_nodeFromLocaleID((chpl_macro_tmp_1378).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1378).addr, sizeof(chpl____wide__ddata_uint64_t), COMMID(110), INT64(1538), INT64(28));
      }
      chpl__delete38(copy_chpl);
      chpl__autoDestroy2(&keep_chpl);
    }
    chpl__autoDestroy2(&reallocD_chpl);
  }
  i_x_chpl2 = &call_tmp_chpl42;
  chpl_macro_tmp_1379.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1379.addr = i_x_chpl2;
  tmp_chpl45 = chpl_macro_tmp_1379;
  deinit_chpl14(tmp_chpl45);
  i_x_chpl3 = &call_tmp_chpl41;
  chpl_macro_tmp_1380.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1380.addr = i_x_chpl3;
  tmp_chpl46 = chpl_macro_tmp_1380;
  deinit_chpl14(tmp_chpl46);
  _end_dsiReallocate_chpl:;
  return;
}

/* DefaultRectangular.chpl:1492 */
static void coforall_fn_chpl6(int64_t numChunks_chpl,
                              int64_t parDim_chpl,
                              DefaultRectangularDom_1_int64_t_F_chpl this_chpl7,
                              chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount_chpl,
                              int64_t chunk_chpl,
                              Error_chpl * error_out_chpl,
                              DefaultRectangularArr_1_int64_t_F_int64_t_int64_t_chpl copy_chpl,
                              chpl____wide_DefaultRectangularArr_1_int64_t_F_int64_t_int64_t this_chpl8) {
  _tuple_1_star_range_int64_t_bounded_F_chpl block_chpl;
  _tuple_1_star_range_int64_t_bounded_F_chpl tmp_chpl15;
  _ref__tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl36 = NULL;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl17;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl38 = NULL;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl39 = NULL;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl coerce_tmp_chpl3;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl40 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl41 = NULL;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl42 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl43 = NULL;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl44 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl45 = NULL;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_2_star_int64_t_chpl call_tmp_chpl46;
  int64_t tmp_chpl23;
  int64_t tmp_chpl24;
  int64_t tmp_chpl25;
  _tuple_2_star_int64_t_chpl ret_tmp_chpl;
  int64_t tmp_x0_chpl;
  int64_t tmp_x1_chpl;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl47 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl call_tmp_chpl48;
  range_int64_t_bounded_F_chpl ret_tmp_chpl2;
  range_int64_t_bounded_F_chpl coerce_tmp_chpl4;
  range_int64_t_bounded_F_chpl _ic__F0_this_chpl;
  int64_t i_chpl;
  range_int64_t_bounded_F_chpl this_chpl9;
  int64_t coerce_tmp_chpl5;
  range_int64_t_bounded_F_chpl this_chpl10;
  int64_t end_chpl;
  DefaultRectangularArr_1_int64_t_F_int64_t_int64_t_chpl coerce_tmp_chpl6 = NULL;
  _ddata_int64_t_chpl coerce_tmp_chpl7 = NULL;
  chpl____wide__ddata_int64_t tmp_chpl28 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_int64_t coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t_chpl dst_chpl = NULL;
  _ref_int64_t_chpl call_tmp_chpl49 = NULL;
  chpl____wide__ref_int64_t call_tmp_chpl50 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t optinfo_chpl;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1381;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1382;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1383;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1384;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1385;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1386;
  chpl____wide__ref_int64_t chpl_macro_tmp_1387;
  chpl____wide__ref_int64_t chpl_macro_tmp_1388;
  chpl____wide__ref_int64_t chpl_macro_tmp_1389;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1390;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1391;
  chpl____wide__ref__wide__ddata_int64_t chpl_macro_tmp_1392;
  chpl____wide__ref_int64_t chpl_macro_tmp_1393;
  chpl_check_nil(this_chpl7, INT64(1492), INT32(28));
  *(tmp_chpl15 + INT64(0)) = *((this_chpl7)->ranges + INT64(0));
  *(block_chpl + INT64(0)) = *(tmp_chpl15 + INT64(0));
  chpl_check_nil(this_chpl7, INT64(1492), INT32(28));
  call_tmp_chpl36 = &((this_chpl7)->ranges);
  chpl_macro_tmp_1381.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1381.addr = call_tmp_chpl36;
  tmp_chpl16 = chpl_macro_tmp_1381;
  this_chpl5(tmp_chpl16, parDim_chpl);
  chpl_check_nil(this_chpl7, INT64(1492), INT32(28));
  call_tmp_chpl38 = &((this_chpl7)->ranges);
  chpl_macro_tmp_1382.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1382.addr = call_tmp_chpl38;
  tmp_chpl18 = chpl_macro_tmp_1382;
  call_tmp_chpl37 = this_chpl5(tmp_chpl18, parDim_chpl);
  chpl_check_nil(this_chpl7, INT64(1492), INT32(28));
  call_tmp_chpl39 = &((this_chpl7)->ranges);
  chpl_macro_tmp_1383.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1383.addr = call_tmp_chpl39;
  tmp_chpl19 = chpl_macro_tmp_1383;
  this_chpl5(tmp_chpl19, parDim_chpl);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID((call_tmp_chpl37).locale, INT64(0), INT32(0)), (call_tmp_chpl37).addr, sizeof(range_int64_t_bounded_F_chpl), COMMID(111), INT64(1492), INT64(28));
  tmp_chpl17 = sizeAs_chpl3(coerce_tmp_chpl3);
  chpl_check_nil(this_chpl7, INT64(1492), INT32(28));
  call_tmp_chpl41 = &((this_chpl7)->ranges);
  chpl_macro_tmp_1384.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1384.addr = call_tmp_chpl41;
  tmp_chpl20 = chpl_macro_tmp_1384;
  call_tmp_chpl40 = this_chpl5(tmp_chpl20, parDim_chpl);
  chpl_check_nil(this_chpl7, INT64(1492), INT32(28));
  call_tmp_chpl43 = &((this_chpl7)->ranges);
  chpl_macro_tmp_1385.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1385.addr = call_tmp_chpl43;
  tmp_chpl21 = chpl_macro_tmp_1385;
  call_tmp_chpl42 = this_chpl5(tmp_chpl21, parDim_chpl);
  chpl_check_nil(this_chpl7, INT64(1492), INT32(28));
  call_tmp_chpl45 = &((this_chpl7)->ranges);
  chpl_macro_tmp_1386.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1386.addr = call_tmp_chpl45;
  tmp_chpl22 = chpl_macro_tmp_1386;
  call_tmp_chpl44 = this_chpl5(tmp_chpl22, parDim_chpl);
  chpl_macro_tmp_1387.locale = (call_tmp_chpl40).locale;
  chpl_macro_tmp_1387.addr = &(((call_tmp_chpl40).addr)->_high);
  chpl_gen_comm_get(((void*)(&tmp_chpl23)), chpl_nodeFromLocaleID((chpl_macro_tmp_1387).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1387).addr, sizeof(int64_t), COMMID(112), INT64(1492), INT64(28));
  chpl_macro_tmp_1388.locale = (call_tmp_chpl42).locale;
  chpl_macro_tmp_1388.addr = &(((call_tmp_chpl42).addr)->_low);
  chpl_gen_comm_get(((void*)(&tmp_chpl24)), chpl_nodeFromLocaleID((chpl_macro_tmp_1388).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1388).addr, sizeof(int64_t), COMMID(113), INT64(1492), INT64(28));
  chpl_macro_tmp_1389.locale = (call_tmp_chpl44).locale;
  chpl_macro_tmp_1389.addr = &(((call_tmp_chpl44).addr)->_low);
  chpl_gen_comm_get(((void*)(&tmp_chpl25)), chpl_nodeFromLocaleID((chpl_macro_tmp_1389).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1389).addr, sizeof(int64_t), COMMID(114), INT64(1492), INT64(28));
  _computeBlock_chpl(tmp_chpl17, numChunks_chpl, chunk_chpl, tmp_chpl23, tmp_chpl24, tmp_chpl25, &ret_tmp_chpl);
  *(call_tmp_chpl46 + INT64(0)) = *(ret_tmp_chpl + INT64(0));
  *(call_tmp_chpl46 + INT64(1)) = *(ret_tmp_chpl + INT64(1));
  tmp_x0_chpl = *(call_tmp_chpl46 + INT64(0));
  tmp_x1_chpl = *(call_tmp_chpl46 + INT64(1));
  chpl_macro_tmp_1390.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1390.addr = &block_chpl;
  tmp_chpl26 = chpl_macro_tmp_1390;
  this_chpl5(tmp_chpl26, parDim_chpl);
  chpl_macro_tmp_1391.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1391.addr = &block_chpl;
  tmp_chpl27 = chpl_macro_tmp_1391;
  call_tmp_chpl47 = this_chpl5(tmp_chpl27, parDim_chpl);
  chpl_build_bounded_range(tmp_x0_chpl, tmp_x1_chpl, &ret_tmp_chpl2);
  call_tmp_chpl48 = ret_tmp_chpl2;
  chpl_gen_comm_put(((void*)(&call_tmp_chpl48)), chpl_nodeFromLocaleID((call_tmp_chpl47).locale, INT64(0), INT32(0)), (call_tmp_chpl47).addr, sizeof(range_int64_t_bounded_F_chpl), COMMID(115), INT64(1492), INT64(28));
  coerce_tmp_chpl4 = *(block_chpl + INT64(0));
  _ic__F0_this_chpl = coerce_tmp_chpl4;
  checkIfIterWillOverflow_chpl(coerce_tmp_chpl4, UINT8(true));
  i_chpl = INT64(0);
  this_chpl9 = _ic__F0_this_chpl;
  coerce_tmp_chpl5 = (&this_chpl9)->_low;
  this_chpl10 = _ic__F0_this_chpl;
  end_chpl = (&this_chpl10)->_high;
  coerce_tmp_chpl6 = copy_chpl;
  chpl_check_nil(coerce_tmp_chpl6, INT64(1494), INT32(28));
  tmp_chpl28 = (coerce_tmp_chpl6)->shiftedData;
  chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl28)->locale, INT64(0), INT32(0)), INT64(1494), INT32(28), "cannot access remote data in local block");
  coerce_tmp_chpl7 = (&tmp_chpl28)->addr;
  chpl_check_nil((&this_chpl8)->addr, INT64(1495), INT32(28));
  chpl_macro_tmp_1392.locale = (&this_chpl8)->locale;
  chpl_macro_tmp_1392.addr = &(((&this_chpl8)->addr)->shiftedData);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl8)), chpl_nodeFromLocaleID((chpl_macro_tmp_1392).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1392).addr, sizeof(chpl____wide__ddata_int64_t), COMMID(116), INT64(1495), INT64(28));
  for (i_chpl = coerce_tmp_chpl5; ((i_chpl <= end_chpl)); i_chpl += INT64(1)) {
    call_tmp_chpl49 = (coerce_tmp_chpl7 + i_chpl);
    dst_chpl = call_tmp_chpl49;
    chpl_macro_tmp_1393.locale = (&coerce_tmp_chpl8)->locale;
    chpl_macro_tmp_1393.addr = ((&coerce_tmp_chpl8)->addr + i_chpl);
    call_tmp_chpl50 = chpl_macro_tmp_1393;
    chpl_gen_comm_get(((void*)(dst_chpl)), chpl_nodeFromLocaleID((call_tmp_chpl50).locale, INT64(0), INT32(0)), (call_tmp_chpl50).addr, sizeof(int64_t), COMMID(117), INT64(1496), INT64(28));
  }
  return;
}

/* DefaultRectangular.chpl:1492 */
static void coforall_fn_chpl5(int64_t numChunks_chpl,
                              int64_t parDim_chpl,
                              DefaultRectangularDom_1_int64_t_F_chpl this_chpl7,
                              chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount_chpl,
                              int64_t chunk_chpl,
                              Error_chpl * error_out_chpl,
                              DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t_chpl copy_chpl,
                              chpl____wide_DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t this_chpl8) {
  _tuple_1_star_range_int64_t_bounded_F_chpl block_chpl;
  _tuple_1_star_range_int64_t_bounded_F_chpl tmp_chpl15;
  _ref__tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl36 = NULL;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl17;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl38 = NULL;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl39 = NULL;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl coerce_tmp_chpl3;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl40 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl41 = NULL;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl42 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl43 = NULL;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl44 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl45 = NULL;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_2_star_int64_t_chpl call_tmp_chpl46;
  int64_t tmp_chpl23;
  int64_t tmp_chpl24;
  int64_t tmp_chpl25;
  _tuple_2_star_int64_t_chpl ret_tmp_chpl;
  int64_t tmp_x0_chpl;
  int64_t tmp_x1_chpl;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl47 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl call_tmp_chpl48;
  range_int64_t_bounded_F_chpl ret_tmp_chpl2;
  range_int64_t_bounded_F_chpl coerce_tmp_chpl4;
  range_int64_t_bounded_F_chpl _ic__F0_this_chpl;
  int64_t i_chpl;
  range_int64_t_bounded_F_chpl this_chpl9;
  int64_t coerce_tmp_chpl5;
  range_int64_t_bounded_F_chpl this_chpl10;
  int64_t end_chpl;
  DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t_chpl coerce_tmp_chpl6 = NULL;
  _ddata_uint64_t_chpl coerce_tmp_chpl7 = NULL;
  chpl____wide__ddata_uint64_t tmp_chpl28 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_uint64_t coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_uint64_t_chpl dst_chpl = NULL;
  _ref_uint64_t_chpl call_tmp_chpl49 = NULL;
  chpl____wide__ref_uint64_t call_tmp_chpl50 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t optinfo_chpl;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1394;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1395;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1396;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1397;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1398;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1399;
  chpl____wide__ref_int64_t chpl_macro_tmp_1400;
  chpl____wide__ref_int64_t chpl_macro_tmp_1401;
  chpl____wide__ref_int64_t chpl_macro_tmp_1402;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1403;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1404;
  chpl____wide__ref__wide__ddata_uint64_t chpl_macro_tmp_1405;
  chpl____wide__ref_uint64_t chpl_macro_tmp_1406;
  chpl_check_nil(this_chpl7, INT64(1492), INT32(28));
  *(tmp_chpl15 + INT64(0)) = *((this_chpl7)->ranges + INT64(0));
  *(block_chpl + INT64(0)) = *(tmp_chpl15 + INT64(0));
  chpl_check_nil(this_chpl7, INT64(1492), INT32(28));
  call_tmp_chpl36 = &((this_chpl7)->ranges);
  chpl_macro_tmp_1394.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1394.addr = call_tmp_chpl36;
  tmp_chpl16 = chpl_macro_tmp_1394;
  this_chpl5(tmp_chpl16, parDim_chpl);
  chpl_check_nil(this_chpl7, INT64(1492), INT32(28));
  call_tmp_chpl38 = &((this_chpl7)->ranges);
  chpl_macro_tmp_1395.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1395.addr = call_tmp_chpl38;
  tmp_chpl18 = chpl_macro_tmp_1395;
  call_tmp_chpl37 = this_chpl5(tmp_chpl18, parDim_chpl);
  chpl_check_nil(this_chpl7, INT64(1492), INT32(28));
  call_tmp_chpl39 = &((this_chpl7)->ranges);
  chpl_macro_tmp_1396.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1396.addr = call_tmp_chpl39;
  tmp_chpl19 = chpl_macro_tmp_1396;
  this_chpl5(tmp_chpl19, parDim_chpl);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID((call_tmp_chpl37).locale, INT64(0), INT32(0)), (call_tmp_chpl37).addr, sizeof(range_int64_t_bounded_F_chpl), COMMID(118), INT64(1492), INT64(28));
  tmp_chpl17 = sizeAs_chpl3(coerce_tmp_chpl3);
  chpl_check_nil(this_chpl7, INT64(1492), INT32(28));
  call_tmp_chpl41 = &((this_chpl7)->ranges);
  chpl_macro_tmp_1397.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1397.addr = call_tmp_chpl41;
  tmp_chpl20 = chpl_macro_tmp_1397;
  call_tmp_chpl40 = this_chpl5(tmp_chpl20, parDim_chpl);
  chpl_check_nil(this_chpl7, INT64(1492), INT32(28));
  call_tmp_chpl43 = &((this_chpl7)->ranges);
  chpl_macro_tmp_1398.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1398.addr = call_tmp_chpl43;
  tmp_chpl21 = chpl_macro_tmp_1398;
  call_tmp_chpl42 = this_chpl5(tmp_chpl21, parDim_chpl);
  chpl_check_nil(this_chpl7, INT64(1492), INT32(28));
  call_tmp_chpl45 = &((this_chpl7)->ranges);
  chpl_macro_tmp_1399.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1399.addr = call_tmp_chpl45;
  tmp_chpl22 = chpl_macro_tmp_1399;
  call_tmp_chpl44 = this_chpl5(tmp_chpl22, parDim_chpl);
  chpl_macro_tmp_1400.locale = (call_tmp_chpl40).locale;
  chpl_macro_tmp_1400.addr = &(((call_tmp_chpl40).addr)->_high);
  chpl_gen_comm_get(((void*)(&tmp_chpl23)), chpl_nodeFromLocaleID((chpl_macro_tmp_1400).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1400).addr, sizeof(int64_t), COMMID(119), INT64(1492), INT64(28));
  chpl_macro_tmp_1401.locale = (call_tmp_chpl42).locale;
  chpl_macro_tmp_1401.addr = &(((call_tmp_chpl42).addr)->_low);
  chpl_gen_comm_get(((void*)(&tmp_chpl24)), chpl_nodeFromLocaleID((chpl_macro_tmp_1401).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1401).addr, sizeof(int64_t), COMMID(120), INT64(1492), INT64(28));
  chpl_macro_tmp_1402.locale = (call_tmp_chpl44).locale;
  chpl_macro_tmp_1402.addr = &(((call_tmp_chpl44).addr)->_low);
  chpl_gen_comm_get(((void*)(&tmp_chpl25)), chpl_nodeFromLocaleID((chpl_macro_tmp_1402).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1402).addr, sizeof(int64_t), COMMID(121), INT64(1492), INT64(28));
  _computeBlock_chpl(tmp_chpl17, numChunks_chpl, chunk_chpl, tmp_chpl23, tmp_chpl24, tmp_chpl25, &ret_tmp_chpl);
  *(call_tmp_chpl46 + INT64(0)) = *(ret_tmp_chpl + INT64(0));
  *(call_tmp_chpl46 + INT64(1)) = *(ret_tmp_chpl + INT64(1));
  tmp_x0_chpl = *(call_tmp_chpl46 + INT64(0));
  tmp_x1_chpl = *(call_tmp_chpl46 + INT64(1));
  chpl_macro_tmp_1403.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1403.addr = &block_chpl;
  tmp_chpl26 = chpl_macro_tmp_1403;
  this_chpl5(tmp_chpl26, parDim_chpl);
  chpl_macro_tmp_1404.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1404.addr = &block_chpl;
  tmp_chpl27 = chpl_macro_tmp_1404;
  call_tmp_chpl47 = this_chpl5(tmp_chpl27, parDim_chpl);
  chpl_build_bounded_range(tmp_x0_chpl, tmp_x1_chpl, &ret_tmp_chpl2);
  call_tmp_chpl48 = ret_tmp_chpl2;
  chpl_gen_comm_put(((void*)(&call_tmp_chpl48)), chpl_nodeFromLocaleID((call_tmp_chpl47).locale, INT64(0), INT32(0)), (call_tmp_chpl47).addr, sizeof(range_int64_t_bounded_F_chpl), COMMID(122), INT64(1492), INT64(28));
  coerce_tmp_chpl4 = *(block_chpl + INT64(0));
  _ic__F0_this_chpl = coerce_tmp_chpl4;
  checkIfIterWillOverflow_chpl(coerce_tmp_chpl4, UINT8(true));
  i_chpl = INT64(0);
  this_chpl9 = _ic__F0_this_chpl;
  coerce_tmp_chpl5 = (&this_chpl9)->_low;
  this_chpl10 = _ic__F0_this_chpl;
  end_chpl = (&this_chpl10)->_high;
  coerce_tmp_chpl6 = copy_chpl;
  chpl_check_nil(coerce_tmp_chpl6, INT64(1494), INT32(28));
  tmp_chpl28 = (coerce_tmp_chpl6)->shiftedData;
  chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl28)->locale, INT64(0), INT32(0)), INT64(1494), INT32(28), "cannot access remote data in local block");
  coerce_tmp_chpl7 = (&tmp_chpl28)->addr;
  chpl_check_nil((&this_chpl8)->addr, INT64(1495), INT32(28));
  chpl_macro_tmp_1405.locale = (&this_chpl8)->locale;
  chpl_macro_tmp_1405.addr = &(((&this_chpl8)->addr)->shiftedData);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl8)), chpl_nodeFromLocaleID((chpl_macro_tmp_1405).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1405).addr, sizeof(chpl____wide__ddata_uint64_t), COMMID(123), INT64(1495), INT64(28));
  for (i_chpl = coerce_tmp_chpl5; ((i_chpl <= end_chpl)); i_chpl += INT64(1)) {
    call_tmp_chpl49 = (coerce_tmp_chpl7 + i_chpl);
    dst_chpl = call_tmp_chpl49;
    chpl_macro_tmp_1406.locale = (&coerce_tmp_chpl8)->locale;
    chpl_macro_tmp_1406.addr = ((&coerce_tmp_chpl8)->addr + i_chpl);
    call_tmp_chpl50 = chpl_macro_tmp_1406;
    chpl_gen_comm_get(((void*)(dst_chpl)), chpl_nodeFromLocaleID((call_tmp_chpl50).locale, INT64(0), INT32(0)), (call_tmp_chpl50).addr, sizeof(uint64_t), COMMID(124), INT64(1496), INT64(28));
  }
  return;
}

/* DefaultRectangular.chpl:1492 */
static void coforall_fn_chpl7(int64_t numChunks_chpl,
                              int64_t parDim_chpl,
                              DefaultRectangularDom_1_int64_t_F_chpl this_chpl7,
                              chpl___EndCount_AtomicT_int64_t_int64_t _coforallCount_chpl,
                              int64_t chunk_chpl,
                              DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl copy_chpl,
                              chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t this_chpl8) {
  _tuple_1_star_range_int64_t_bounded_F_chpl block_chpl;
  _tuple_1_star_range_int64_t_bounded_F_chpl tmp_chpl15;
  _ref__tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl36 = NULL;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl17;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl38 = NULL;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl39 = NULL;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl coerce_tmp_chpl3;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl40 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl41 = NULL;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl42 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl43 = NULL;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl44 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl45 = NULL;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_2_star_int64_t_chpl call_tmp_chpl46;
  int64_t tmp_chpl23;
  int64_t tmp_chpl24;
  int64_t tmp_chpl25;
  _tuple_2_star_int64_t_chpl ret_tmp_chpl;
  int64_t tmp_x0_chpl;
  int64_t tmp_x1_chpl;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl47 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl call_tmp_chpl48;
  range_int64_t_bounded_F_chpl ret_tmp_chpl2;
  range_int64_t_bounded_F_chpl coerce_tmp_chpl4;
  range_int64_t_bounded_F_chpl _ic__F0_this_chpl;
  int64_t i_chpl;
  range_int64_t_bounded_F_chpl this_chpl9;
  int64_t coerce_tmp_chpl5;
  range_int64_t_bounded_F_chpl this_chpl10;
  int64_t end_chpl;
  DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl coerce_tmp_chpl6 = NULL;
  _ddata_locale_chpl coerce_tmp_chpl7 = NULL;
  chpl____wide__ddata_locale tmp_chpl28 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_locale coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl dst_chpl = NULL;
  _ref_locale_chpl call_tmp_chpl49 = NULL;
  chpl____wide__ref_locale call_tmp_chpl50 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t optinfo_chpl;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1407;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1408;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1409;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1410;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1411;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1412;
  chpl____wide__ref_int64_t chpl_macro_tmp_1413;
  chpl____wide__ref_int64_t chpl_macro_tmp_1414;
  chpl____wide__ref_int64_t chpl_macro_tmp_1415;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1416;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1417;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_1418;
  chpl____wide__ref_locale chpl_macro_tmp_1419;
  chpl_check_nil(this_chpl7, INT64(1492), INT32(28));
  *(tmp_chpl15 + INT64(0)) = *((this_chpl7)->ranges + INT64(0));
  *(block_chpl + INT64(0)) = *(tmp_chpl15 + INT64(0));
  chpl_check_nil(this_chpl7, INT64(1492), INT32(28));
  call_tmp_chpl36 = &((this_chpl7)->ranges);
  chpl_macro_tmp_1407.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1407.addr = call_tmp_chpl36;
  tmp_chpl16 = chpl_macro_tmp_1407;
  this_chpl5(tmp_chpl16, parDim_chpl);
  chpl_check_nil(this_chpl7, INT64(1492), INT32(28));
  call_tmp_chpl38 = &((this_chpl7)->ranges);
  chpl_macro_tmp_1408.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1408.addr = call_tmp_chpl38;
  tmp_chpl18 = chpl_macro_tmp_1408;
  call_tmp_chpl37 = this_chpl5(tmp_chpl18, parDim_chpl);
  chpl_check_nil(this_chpl7, INT64(1492), INT32(28));
  call_tmp_chpl39 = &((this_chpl7)->ranges);
  chpl_macro_tmp_1409.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1409.addr = call_tmp_chpl39;
  tmp_chpl19 = chpl_macro_tmp_1409;
  this_chpl5(tmp_chpl19, parDim_chpl);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID((call_tmp_chpl37).locale, INT64(0), INT32(0)), (call_tmp_chpl37).addr, sizeof(range_int64_t_bounded_F_chpl), COMMID(125), INT64(1492), INT64(28));
  tmp_chpl17 = sizeAs_chpl3(coerce_tmp_chpl3);
  chpl_check_nil(this_chpl7, INT64(1492), INT32(28));
  call_tmp_chpl41 = &((this_chpl7)->ranges);
  chpl_macro_tmp_1410.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1410.addr = call_tmp_chpl41;
  tmp_chpl20 = chpl_macro_tmp_1410;
  call_tmp_chpl40 = this_chpl5(tmp_chpl20, parDim_chpl);
  chpl_check_nil(this_chpl7, INT64(1492), INT32(28));
  call_tmp_chpl43 = &((this_chpl7)->ranges);
  chpl_macro_tmp_1411.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1411.addr = call_tmp_chpl43;
  tmp_chpl21 = chpl_macro_tmp_1411;
  call_tmp_chpl42 = this_chpl5(tmp_chpl21, parDim_chpl);
  chpl_check_nil(this_chpl7, INT64(1492), INT32(28));
  call_tmp_chpl45 = &((this_chpl7)->ranges);
  chpl_macro_tmp_1412.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1412.addr = call_tmp_chpl45;
  tmp_chpl22 = chpl_macro_tmp_1412;
  call_tmp_chpl44 = this_chpl5(tmp_chpl22, parDim_chpl);
  chpl_macro_tmp_1413.locale = (call_tmp_chpl40).locale;
  chpl_macro_tmp_1413.addr = &(((call_tmp_chpl40).addr)->_high);
  chpl_gen_comm_get(((void*)(&tmp_chpl23)), chpl_nodeFromLocaleID((chpl_macro_tmp_1413).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1413).addr, sizeof(int64_t), COMMID(126), INT64(1492), INT64(28));
  chpl_macro_tmp_1414.locale = (call_tmp_chpl42).locale;
  chpl_macro_tmp_1414.addr = &(((call_tmp_chpl42).addr)->_low);
  chpl_gen_comm_get(((void*)(&tmp_chpl24)), chpl_nodeFromLocaleID((chpl_macro_tmp_1414).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1414).addr, sizeof(int64_t), COMMID(127), INT64(1492), INT64(28));
  chpl_macro_tmp_1415.locale = (call_tmp_chpl44).locale;
  chpl_macro_tmp_1415.addr = &(((call_tmp_chpl44).addr)->_low);
  chpl_gen_comm_get(((void*)(&tmp_chpl25)), chpl_nodeFromLocaleID((chpl_macro_tmp_1415).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1415).addr, sizeof(int64_t), COMMID(128), INT64(1492), INT64(28));
  _computeBlock_chpl(tmp_chpl17, numChunks_chpl, chunk_chpl, tmp_chpl23, tmp_chpl24, tmp_chpl25, &ret_tmp_chpl);
  *(call_tmp_chpl46 + INT64(0)) = *(ret_tmp_chpl + INT64(0));
  *(call_tmp_chpl46 + INT64(1)) = *(ret_tmp_chpl + INT64(1));
  tmp_x0_chpl = *(call_tmp_chpl46 + INT64(0));
  tmp_x1_chpl = *(call_tmp_chpl46 + INT64(1));
  chpl_macro_tmp_1416.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1416.addr = &block_chpl;
  tmp_chpl26 = chpl_macro_tmp_1416;
  this_chpl5(tmp_chpl26, parDim_chpl);
  chpl_macro_tmp_1417.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1417.addr = &block_chpl;
  tmp_chpl27 = chpl_macro_tmp_1417;
  call_tmp_chpl47 = this_chpl5(tmp_chpl27, parDim_chpl);
  chpl_build_bounded_range(tmp_x0_chpl, tmp_x1_chpl, &ret_tmp_chpl2);
  call_tmp_chpl48 = ret_tmp_chpl2;
  chpl_gen_comm_put(((void*)(&call_tmp_chpl48)), chpl_nodeFromLocaleID((call_tmp_chpl47).locale, INT64(0), INT32(0)), (call_tmp_chpl47).addr, sizeof(range_int64_t_bounded_F_chpl), COMMID(129), INT64(1492), INT64(28));
  coerce_tmp_chpl4 = *(block_chpl + INT64(0));
  _ic__F0_this_chpl = coerce_tmp_chpl4;
  checkIfIterWillOverflow_chpl(coerce_tmp_chpl4, UINT8(true));
  i_chpl = INT64(0);
  this_chpl9 = _ic__F0_this_chpl;
  coerce_tmp_chpl5 = (&this_chpl9)->_low;
  this_chpl10 = _ic__F0_this_chpl;
  end_chpl = (&this_chpl10)->_high;
  coerce_tmp_chpl6 = copy_chpl;
  chpl_check_nil(coerce_tmp_chpl6, INT64(1494), INT32(28));
  tmp_chpl28 = (coerce_tmp_chpl6)->shiftedData;
  chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl28)->locale, INT64(0), INT32(0)), INT64(1494), INT32(28), "cannot access remote data in local block");
  coerce_tmp_chpl7 = (&tmp_chpl28)->addr;
  chpl_check_nil((&this_chpl8)->addr, INT64(1495), INT32(28));
  chpl_macro_tmp_1418.locale = (&this_chpl8)->locale;
  chpl_macro_tmp_1418.addr = &(((&this_chpl8)->addr)->shiftedData);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl8)), chpl_nodeFromLocaleID((chpl_macro_tmp_1418).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1418).addr, sizeof(chpl____wide__ddata_locale), COMMID(130), INT64(1495), INT64(28));
  for (i_chpl = coerce_tmp_chpl5; ((i_chpl <= end_chpl)); i_chpl += INT64(1)) {
    call_tmp_chpl49 = (coerce_tmp_chpl7 + i_chpl);
    dst_chpl = call_tmp_chpl49;
    chpl_macro_tmp_1419.locale = (&coerce_tmp_chpl8)->locale;
    chpl_macro_tmp_1419.addr = ((&coerce_tmp_chpl8)->addr + i_chpl);
    call_tmp_chpl50 = chpl_macro_tmp_1419;
    chpl_gen_comm_get(((void*)(dst_chpl)), chpl_nodeFromLocaleID((call_tmp_chpl50).locale, INT64(0), INT32(0)), (call_tmp_chpl50).addr, sizeof(locale_chpl), COMMID(131), INT64(1496), INT64(28));
  }
  return;
}

/* DefaultRectangular.chpl:1492 */
static void wrapcoforall_fn_chpl6(_class_localscoforall_fn_chpl5 c_chpl) {
  Error_chpl error_chpl = NULL;
  int64_t _0_numChunks_chpl;
  int64_t _1_parDim_chpl;
  DefaultRectangularDom_1_int64_t_F_chpl _2_coerce_tmp_chpl = NULL;
  chpl___EndCount_AtomicT_int64_t_int64_t _3__coforallCount_chpl = NULL;
  int64_t _4_chunk_chpl;
  DefaultRectangularArr_1_int64_t_F_int64_t_int64_t_chpl _6_copy_chpl = NULL;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_int64_t_int64_t _7_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1492), INT32(28));
  chpl_check_nil(c_chpl, INT64(1492), INT32(28));
  _0_numChunks_chpl = (c_chpl)->_0_numChunks;
  chpl_check_nil(c_chpl, INT64(1492), INT32(28));
  _1_parDim_chpl = (c_chpl)->_1_parDim;
  chpl_check_nil(c_chpl, INT64(1492), INT32(28));
  _2_coerce_tmp_chpl = (c_chpl)->_2_coerce_tmp;
  chpl_check_nil(c_chpl, INT64(1492), INT32(28));
  _3__coforallCount_chpl = (c_chpl)->_3__coforallCount;
  chpl_check_nil(c_chpl, INT64(1492), INT32(28));
  _4_chunk_chpl = (c_chpl)->_4_chunk;
  chpl_check_nil(c_chpl, INT64(1492), INT32(28));
  _6_copy_chpl = (c_chpl)->_6_copy;
  chpl_check_nil(c_chpl, INT64(1492), INT32(28));
  _7_this_chpl = (c_chpl)->_7_this;
  coforall_fn_chpl6(_0_numChunks_chpl, _1_parDim_chpl, _2_coerce_tmp_chpl, _3__coforallCount_chpl, _4_chunk_chpl, &error_chpl, _6_copy_chpl, _7_this_chpl);
  chpl_check_nil(c_chpl, INT64(1492), INT32(28));
  _downEndCount_chpl((c_chpl)->_3__coforallCount, error_chpl);
  return;
}

/* DefaultRectangular.chpl:1492 */
static void wrapcoforall_fn_chpl7(_class_localscoforall_fn_chpl6 c_chpl) {
  Error_chpl error_chpl = NULL;
  int64_t _0_numChunks_chpl;
  int64_t _1_parDim_chpl;
  DefaultRectangularDom_1_int64_t_F_chpl _2_coerce_tmp_chpl = NULL;
  chpl___EndCount_AtomicT_int64_t_int64_t _3__coforallCount_chpl = NULL;
  int64_t _4_chunk_chpl;
  DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t_chpl _6_copy_chpl = NULL;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t _7_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1492), INT32(28));
  chpl_check_nil(c_chpl, INT64(1492), INT32(28));
  _0_numChunks_chpl = (c_chpl)->_0_numChunks;
  chpl_check_nil(c_chpl, INT64(1492), INT32(28));
  _1_parDim_chpl = (c_chpl)->_1_parDim;
  chpl_check_nil(c_chpl, INT64(1492), INT32(28));
  _2_coerce_tmp_chpl = (c_chpl)->_2_coerce_tmp;
  chpl_check_nil(c_chpl, INT64(1492), INT32(28));
  _3__coforallCount_chpl = (c_chpl)->_3__coforallCount;
  chpl_check_nil(c_chpl, INT64(1492), INT32(28));
  _4_chunk_chpl = (c_chpl)->_4_chunk;
  chpl_check_nil(c_chpl, INT64(1492), INT32(28));
  _6_copy_chpl = (c_chpl)->_6_copy;
  chpl_check_nil(c_chpl, INT64(1492), INT32(28));
  _7_this_chpl = (c_chpl)->_7_this;
  coforall_fn_chpl5(_0_numChunks_chpl, _1_parDim_chpl, _2_coerce_tmp_chpl, _3__coforallCount_chpl, _4_chunk_chpl, &error_chpl, _6_copy_chpl, _7_this_chpl);
  chpl_check_nil(c_chpl, INT64(1492), INT32(28));
  _downEndCount_chpl((c_chpl)->_3__coforallCount, error_chpl);
  return;
}

/* DefaultRectangular.chpl:1492 */
static void wrapcoforall_fn_chpl5(_class_localscoforall_fn_chpl7 c_chpl) {
  int64_t _0_numChunks_chpl;
  int64_t _1_parDim_chpl;
  DefaultRectangularDom_1_int64_t_F_chpl _2_coerce_tmp_chpl = NULL;
  chpl___EndCount_AtomicT_int64_t_int64_t _3__coforallCount_chpl = NULL;
  int64_t _4_chunk_chpl;
  DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl _5_copy_chpl = NULL;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t _6_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_rmem_consist_acquire(INT64(1492), INT32(28));
  chpl_check_nil(c_chpl, INT64(1492), INT32(28));
  _0_numChunks_chpl = (c_chpl)->_0_numChunks;
  chpl_check_nil(c_chpl, INT64(1492), INT32(28));
  _1_parDim_chpl = (c_chpl)->_1_parDim;
  chpl_check_nil(c_chpl, INT64(1492), INT32(28));
  _2_coerce_tmp_chpl = (c_chpl)->_2_coerce_tmp;
  chpl_check_nil(c_chpl, INT64(1492), INT32(28));
  _3__coforallCount_chpl = (c_chpl)->_3__coforallCount;
  chpl_check_nil(c_chpl, INT64(1492), INT32(28));
  _4_chunk_chpl = (c_chpl)->_4_chunk;
  chpl_check_nil(c_chpl, INT64(1492), INT32(28));
  _5_copy_chpl = (c_chpl)->_5_copy;
  chpl_check_nil(c_chpl, INT64(1492), INT32(28));
  _6_this_chpl = (c_chpl)->_6_this;
  coforall_fn_chpl7(_0_numChunks_chpl, _1_parDim_chpl, _2_coerce_tmp_chpl, _3__coforallCount_chpl, _4_chunk_chpl, _5_copy_chpl, _6_this_chpl);
  chpl_check_nil(c_chpl, INT64(1492), INT32(28));
  _downEndCount_chpl((c_chpl)->_3__coforallCount, nil);
  return;
}

/* DefaultRectangular.chpl:1546 */
static void dsiPostReallocate_chpl2(chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t this_chpl7) {
  return;
}

/* DefaultRectangular.chpl:1546 */
static void dsiPostReallocate_chpl3(chpl____wide_DefaultRectangularArr_1_int64_t_F_int64_t_int64_t this_chpl7) {
  return;
}

/* DefaultRectangular.chpl:1546 */
static void dsiPostReallocate_chpl4(chpl____wide_DefaultRectangularArr_1_int64_t_F_uint64_t_int64_t this_chpl7) {
  return;
}

/* DefaultRectangular.chpl:1666 */
static void doiToString_chpl(chpl____wide_DefaultRectangularDom_1_int64_t_F this_chpl7,
                             string_chpl * _retArg_chpl) {
  string_chpl local__str_literal_846_chpl;
  string_chpl local__str_literal_845_chpl;
  string_chpl local__str_literal_844_chpl;
  string_chpl ret_chpl;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl37;
  range_int64_t_bounded_F_chpl coerce_tmp_chpl3;
  string_chpl ret_tmp_chpl;
  string_chpl call_tmp_chpl38;
  string_chpl ret_tmp_chpl2;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl str_chpl;
  int64_t _ic__F1_high_chpl;
  int64_t i_chpl;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl39 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F call_tmp_chpl40 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl41;
  range_int64_t_bounded_F_chpl coerce_tmp_chpl4;
  string_chpl ret_tmp_chpl3;
  string_chpl call_tmp_chpl42;
  string_chpl ret_tmp_chpl4;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1420;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_1421;
  chpl____wide__ref_string chpl_macro_tmp_1422;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_1423;
  chpl____wide__ref_string chpl_macro_tmp_1424;
  chpl____wide__ref_string chpl_macro_tmp_1425;
  chpl____wide__ref_string chpl_macro_tmp_1426;
  chpl____wide__ref_string chpl_macro_tmp_1427;
  local__str_literal_846_chpl = _str_literal_846_chpl /* "}" */;
  local__str_literal_845_chpl = _str_literal_845_chpl /* ", " */;
  local__str_literal_844_chpl = _str_literal_844_chpl /* "{" */;
  chpl_check_nil((&this_chpl7)->addr, INT64(1667), INT32(28));
  chpl_macro_tmp_1420.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_1420.addr = &(((&this_chpl7)->addr)->ranges);
  call_tmp_chpl36 = chpl_macro_tmp_1420;
  chpl_macro_tmp_1421.locale = (call_tmp_chpl36).locale;
  chpl_macro_tmp_1421.addr = (*((call_tmp_chpl36).addr) + INT64(0));
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID((chpl_macro_tmp_1421).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1421).addr, sizeof(range_int64_t_bounded_F_chpl), COMMID(132), INT64(1667), INT64(28));
  chpl___COLON_7(coerce_tmp_chpl3, &ret_tmp_chpl);
  call_tmp_chpl37 = ret_tmp_chpl;
  chpl_macro_tmp_1422.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1422.addr = &call_tmp_chpl37;
  tmp_chpl15 = chpl_macro_tmp_1422;
  chpl___PLUS_(&local__str_literal_844_chpl, tmp_chpl15, &ret_tmp_chpl2);
  call_tmp_chpl38 = ret_tmp_chpl2;
  str_chpl = call_tmp_chpl38;
  _ic__F1_high_chpl = INT64(0);
  i_chpl = INT64(0);
  chpl_checkIfRangeIterWillOverflow(INT64(1), INT64(0), INT64(1), INT64(1), INT64(0), UINT8(true));
  for (i_chpl = INT64(1); ((i_chpl <= _ic__F1_high_chpl)); i_chpl += INT64(1)) {
    chpl_check_nil((&this_chpl7)->addr, INT64(1669), INT32(28));
    chpl_macro_tmp_1423.locale = (&this_chpl7)->locale;
    chpl_macro_tmp_1423.addr = &(((&this_chpl7)->addr)->ranges);
    call_tmp_chpl40 = chpl_macro_tmp_1423;
    call_tmp_chpl39 = this_chpl5(call_tmp_chpl40, i_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID((call_tmp_chpl39).locale, INT64(0), INT32(0)), (call_tmp_chpl39).addr, sizeof(range_int64_t_bounded_F_chpl), COMMID(133), INT64(1669), INT64(28));
    chpl___COLON_7(coerce_tmp_chpl4, &ret_tmp_chpl3);
    call_tmp_chpl41 = ret_tmp_chpl3;
    chpl_macro_tmp_1424.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1424.addr = &call_tmp_chpl41;
    tmp_chpl16 = chpl_macro_tmp_1424;
    chpl___PLUS_(&local__str_literal_845_chpl, tmp_chpl16, &ret_tmp_chpl4);
    call_tmp_chpl42 = ret_tmp_chpl4;
    chpl___PLUS__ASSIGN_(&str_chpl, &call_tmp_chpl42);
    i_x_chpl = &call_tmp_chpl42;
    chpl_macro_tmp_1425.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1425.addr = i_x_chpl;
    tmp_chpl17 = chpl_macro_tmp_1425;
    deinit_chpl42(tmp_chpl17);
    i_x_chpl2 = &call_tmp_chpl41;
    chpl_macro_tmp_1426.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1426.addr = i_x_chpl2;
    tmp_chpl18 = chpl_macro_tmp_1426;
    deinit_chpl42(tmp_chpl18);
  }
  chpl___PLUS__ASSIGN_(&str_chpl, &local__str_literal_846_chpl);
  ret_chpl = str_chpl;
  i_x_chpl3 = &call_tmp_chpl37;
  chpl_macro_tmp_1427.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1427.addr = i_x_chpl3;
  tmp_chpl19 = chpl_macro_tmp_1427;
  deinit_chpl42(tmp_chpl19);
  *(_retArg_chpl) = ret_chpl;
  return;
}

