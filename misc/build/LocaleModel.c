/* LocaleModel.chpl:30 */
static void chpl__init_LocaleModel(int64_t _ln_chpl,
                                   int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  range_int64_t_bounded_F_chpl ret_tmp_chpl;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl ret_tmp_chpl2;
  chpl___RuntimeTypeInfo call_tmp_chpl36;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl ret_tmp_chpl3;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl tmp_chpl15;
  _array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl ret_tmp_chpl4;
  if (chpl__init_LocaleModel_p) {
    goto _exit_chpl__init_LocaleModel_chpl;
  }
  printModuleInit_chpl("%*s\n", "LocaleModel", INT64(11));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_LocaleModel_p = UINT8(true);
  {
    chpl__init_LocaleModelHelpFlat(INT64(30), INT32(25));
    chpl__init_LocaleModelHelpMem(INT64(30), INT32(25));
    chpl__init_IO(INT64(30), INT32(25));
  }
  chpl_addModule("LocaleModel", ((c_fn_ptr)(deinit_chpl17)));
  chpl_build_bounded_range(INT64(1), INT64(0), &ret_tmp_chpl);
  call_tmp_chpl12 = ret_tmp_chpl;
  chpl__buildDomainExpr(call_tmp_chpl12, UINT8(true), &ret_tmp_chpl2);
  call_tmp_chpl11 = ret_tmp_chpl2;
  call_tmp_chpl36 = chpl__buildDomainRuntimeType(&defaultDist_chpl);
  chpl__coerceMove(&call_tmp_chpl36, &call_tmp_chpl11, UINT8(true), &ret_tmp_chpl3);
  init_coerce_tmp_chpl2 = ret_tmp_chpl3;
  chpl_emptyLocaleSpace = init_coerce_tmp_chpl2;
  chpl_comm_broadcast_private(INT64(6), sizeof(_domain_DefaultRectangularDom_1_int64_t_F_chpl));
  call_tmp_chpl13 = chpl__ensureDomainExpr(&chpl_emptyLocaleSpace);
  call_tmp_chpl14 = chpl__buildArrayRuntimeType(call_tmp_chpl13);
  tmp_chpl15 = (&call_tmp_chpl14)->dom;
  _runtime_type_tmp__chpl = tmp_chpl15;
  chpl__convertRuntimeTypeToValue(&_runtime_type_tmp__chpl, UINT8(true), &ret_tmp_chpl4);
  chpl_emptyLocales = ret_tmp_chpl4;
  chpl_comm_broadcast_private(INT64(7), sizeof(_array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl));
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_LocaleModel_chpl:;
  return;
}

/* LocaleModel.chpl:43 */
int32_t chpl_localeModel_sublocToExecutionSubloc(int32_t full_subloc) {
  return full_subloc;
}

/* LocaleModel.chpl:49 */
int32_t chpl_localeModel_sublocMerge(int32_t full_subloc,
                                     int32_t execution_subloc) {
  return execution_subloc;
}

/* LocaleModel.chpl:62 */
static void chpl__auto_destroy_LocaleModel(chpl____wide_LocaleModel this_chpl7) {
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_AbstractLocaleModel _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl _field_destructor_tmp__chpl2;
  _array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl tmp_chpl15;
  chpl____wide_BaseLocale _parent_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicT_int64_t _field_destructor_tmp__chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale _field_destructor_tmp__chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_870;
  chpl____wide_AbstractLocaleModel chpl_macro_tmp_871;
  chpl____wide__ref__wide__array_DefaultRectangularArr_1_int64_t_F_locale_int64_t chpl_macro_tmp_872;
  chpl____wide_BaseLocale chpl_macro_tmp_873;
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_874;
  chpl____wide__ref_locale chpl_macro_tmp_875;
  chpl_check_nil((&this_chpl7)->addr, INT64(64), INT32(25));
  chpl_macro_tmp_870.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_870.addr = &(((&this_chpl7)->addr)->local_name);
  _field_destructor_tmp__chpl = chpl_macro_tmp_870;
  deinit_chpl42(_field_destructor_tmp__chpl);
  chpl_macro_tmp_871.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_871.addr = ((AbstractLocaleModel_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_871;
  chpl_check_nil((&_parent_destructor_tmp__chpl)->addr, INT64(62), INT32(25));
  chpl_macro_tmp_872.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_872.addr = &(((&_parent_destructor_tmp__chpl)->addr)->chpl_singletonThisLocaleArray);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_872).locale, INT64(0), INT32(0)), (chpl_macro_tmp_872).addr, sizeof(_array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl), COMMID(0), INT64(62), INT64(25));
  _field_destructor_tmp__chpl2 = tmp_chpl15;
  chpl__autoDestroy3(&_field_destructor_tmp__chpl2);
  chpl_macro_tmp_873.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_873.addr = ((BaseLocale_chpl)((&_parent_destructor_tmp__chpl)->addr));
  _parent_destructor_tmp__chpl2 = chpl_macro_tmp_873;
  chpl_check_nil((&_parent_destructor_tmp__chpl2)->addr, INT64(62), INT32(25));
  chpl_macro_tmp_874.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_874.addr = &(((&_parent_destructor_tmp__chpl2)->addr)->runningTaskCounter);
  _field_destructor_tmp__chpl3 = chpl_macro_tmp_874;
  deinit_chpl2(_field_destructor_tmp__chpl3);
  chpl_check_nil((&_parent_destructor_tmp__chpl2)->addr, INT64(62), INT32(25));
  chpl_macro_tmp_875.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_875.addr = &(((&_parent_destructor_tmp__chpl2)->addr)->parent);
  _field_destructor_tmp__chpl4 = chpl_macro_tmp_875;
  deinit_chpl14(_field_destructor_tmp__chpl4);
  return;
}

/* LocaleModel.chpl:81 */
static LocaleModel_chpl _new_chpl10(locale_chpl * parent_loc_chpl,
                                    int64_t _ln_chpl,
                                    int32_t _fn_chpl) {
  string_chpl local__str_literal_701_chpl;
  LocaleModel_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  AbstractLocaleModel_chpl super_tmp_chpl = NULL;
  BaseLocale_chpl super_tmp_chpl2 = NULL;
  locale_chpl parent_chpl;
  chpl____wide__ref_locale tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  AtomicT_int64_t_chpl runningTaskCounter_chpl;
  chpl____wide__ref_AtomicT_int64_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl chpl_singletonThisLocaleArray;
  range_int64_t_bounded_F_chpl call_tmp_chpl36;
  range_int64_t_bounded_F_chpl ret_tmp_chpl;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl call_tmp_chpl37;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl ret_tmp_chpl2;
  chpl___RuntimeTypeInfo2 call_tmp_chpl38;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl _runtime_type_tmp__chpl2;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl tmp_chpl18;
  _array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl ret_tmp_chpl3;
  int32_t call_tmp_chpl39;
  int64_t call_tmp_chpl40;
  string_chpl local_name_chpl;
  LocaleModel_chpl tmp_chpl19 = NULL;
  chpl____wide__ref_locale chpl_macro_tmp_876;
  chpl____wide__ref_locale chpl_macro_tmp_877;
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_878;
  local__str_literal_701_chpl = _str_literal_701_chpl /* "Cannot create additional LocaleModel instances" */;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_LocaleModel_chpl_object), INT16(55), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((LocaleModel_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_LocaleModel_chpl;
  if (rootLocaleInitialized_chpl) {
    halt_chpl(&local__str_literal_701_chpl, _ln_chpl, _fn_chpl);
  }
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl2 = &((super_tmp_chpl)->super);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl2)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl2))))->chpl__cid = chpl__cid_object_chpl;
  chpl_macro_tmp_876.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_876.addr = &parent_chpl;
  tmp_chpl15 = chpl_macro_tmp_876;
  chpl_macro_tmp_877.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_877.addr = parent_loc_chpl;
  tmp_chpl16 = chpl_macro_tmp_877;
  init_ASSIGN__chpl(tmp_chpl15, tmp_chpl16);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->parent = parent_chpl;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->nPUsLogAcc = INT64(0);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->nPUsLogAll = INT64(0);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->nPUsPhysAcc = INT64(0);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->nPUsPhysAll = INT64(0);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->maxTaskPar = INT64(0);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->callStackSize = UINT64(0);
  chpl_macro_tmp_878.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_878.addr = &runningTaskCounter_chpl;
  tmp_chpl17 = chpl_macro_tmp_878;
  init_chpl2(tmp_chpl17);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->runningTaskCounter = runningTaskCounter_chpl;
  ((object_chpl)(super_tmp_chpl2))->chpl__cid = chpl__cid_BaseLocale_chpl;
  ((object_chpl)(((BaseLocale_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_BaseLocale_chpl;
  chpl_build_bounded_range(INT64(0), INT64(0), &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl__ensureDomainExpr2(call_tmp_chpl36, &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  call_tmp_chpl38 = chpl__buildArrayRuntimeType(&call_tmp_chpl37);
  tmp_chpl18 = (&call_tmp_chpl38)->dom;
  _runtime_type_tmp__chpl2 = tmp_chpl18;
  chpl__convertRuntimeTypeToValue(&_runtime_type_tmp__chpl2, UINT8(false), &ret_tmp_chpl3);
  chpl_singletonThisLocaleArray = ret_tmp_chpl3;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  (super_tmp_chpl)->chpl_singletonThisLocaleArray = chpl_singletonThisLocaleArray;
  chpl__autoDestroy2(&call_tmp_chpl37);
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_AbstractLocaleModel_chpl;
  ((object_chpl)(((AbstractLocaleModel_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_AbstractLocaleModel_chpl;
  call_tmp_chpl39 = get_chpl_nodeID();
  call_tmp_chpl40 = ((int64_t)(call_tmp_chpl39));
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  (initTemp_chpl)->_node_id = call_tmp_chpl40;
  init_chpl73(&local_name_chpl);
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  (initTemp_chpl)->local_name = local_name_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_LocaleModel_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  setup_chpl(initTemp_chpl);
  tmp_chpl19 = initTemp_chpl;
  return tmp_chpl19;
}

/* LocaleModel.chpl:127 */
static int64_t getChildCount_chpl3(chpl____wide_LocaleModel this_chpl7) {
  return INT64(0);
}

/* LocaleModel.chpl:135 */
static void getChild_chpl3(chpl____wide_LocaleModel this_chpl7,
                           int64_t idx_chpl,
                           chpl____wide__ref_locale _retArg_chpl) {
  string_chpl local__str_literal_702_chpl;
  locale_chpl ret_chpl;
  locale_chpl tmp_chpl15;
  local__str_literal_702_chpl = _str_literal_702_chpl /* "requesting a child from a flat LocaleModel locale" */;
  halt_chpl(&local__str_literal_702_chpl, INT64(136), INT32(25));
  init_chpl19(&tmp_chpl15);
  ret_chpl = tmp_chpl15;
  chpl_gen_comm_put(((void*)(&ret_chpl)), chpl_nodeFromLocaleID((_retArg_chpl).locale, INT64(0), INT32(0)), (_retArg_chpl).addr, sizeof(locale_chpl), COMMID(1), INT64(135), INT64(25));
  return;
}

/* LocaleModel.chpl:153 */
static void setup_chpl(LocaleModel_chpl this_chpl7) {
  _ref_string_chpl call_tmp_chpl36 = NULL;
  string_chpl _formal_tmp_out_local_name_chpl;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_879;
  chpl____wide__ref_string chpl_macro_tmp_880;
  chpl_check_nil(this_chpl7, INT64(154), INT32(25));
  call_tmp_chpl36 = &((this_chpl7)->local_name);
  helpSetupLocaleFlat_chpl(this_chpl7, &_formal_tmp_out_local_name_chpl);
  chpl_macro_tmp_879.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_879.addr = call_tmp_chpl36;
  tmp_chpl15 = chpl_macro_tmp_879;
  chpl___ASSIGN_6(tmp_chpl15, &_formal_tmp_out_local_name_chpl);
  i_x_chpl = &_formal_tmp_out_local_name_chpl;
  chpl_macro_tmp_880.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_880.addr = i_x_chpl;
  tmp_chpl16 = chpl_macro_tmp_880;
  deinit_chpl42(tmp_chpl16);
  return;
}

/* LocaleModel.chpl:172 */
static RootLocale_chpl _new_chpl11(int64_t _ln_chpl,
                                   int32_t _fn_chpl) {
  int64_t local_numLocales_chpl;
  RootLocale_chpl initTemp_chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  AbstractRootLocale_chpl super_tmp_chpl = NULL;
  _ref_locale_chpl i_parent_loc_chpl = NULL;
  BaseLocale_chpl super_tmp_chpl2 = NULL;
  locale_chpl parent_chpl;
  chpl____wide__ref_locale tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  AtomicT_int64_t_chpl runningTaskCounter_chpl;
  chpl____wide__ref_AtomicT_int64_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl call_tmp_chpl36;
  range_int64_t_bounded_F_chpl ret_tmp_chpl;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl call_tmp_chpl37;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl ret_tmp_chpl2;
  chpl___RuntimeTypeInfo call_tmp_chpl38;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl init_coerce_tmp_chpl3;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl ret_tmp_chpl3;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl myLocaleSpace_chpl;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F _instance_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F_chpl tmp_chpl18;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  _array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl myLocales_chpl;
  _ref__domain_DefaultRectangularDom_1_int64_t_F_chpl call_tmp_chpl39 = NULL;
  _ref__domain_DefaultRectangularDom_1_int64_t_F_chpl call_tmp_chpl40 = NULL;
  chpl___RuntimeTypeInfo2 call_tmp_chpl41;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl _runtime_type_tmp__chpl2;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl tmp_chpl20;
  _array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl ret_tmp_chpl4;
  chpl____wide__ref_locale chpl_macro_tmp_881;
  chpl____wide__ref_locale chpl_macro_tmp_882;
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_883;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_884;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_885;
  chpl_bool chpl_macro_tmp_886;
  local_numLocales_chpl = numLocales_chpl;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_RootLocale_chpl_object), INT16(50), _ln_chpl, _fn_chpl);
  initTemp_chpl = ((RootLocale_chpl)(cast_tmp_chpl));
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_RootLocale_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl = &((initTemp_chpl)->super);
  i_parent_loc_chpl = &nilLocale_chpl;
  chpl_check_nil(super_tmp_chpl, _ln_chpl, _fn_chpl);
  super_tmp_chpl2 = &((super_tmp_chpl)->super);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  ((object_chpl)(&((super_tmp_chpl2)->super)))->chpl__cid = chpl__cid_object_chpl;
  ((object_chpl)(((object_chpl)(super_tmp_chpl2))))->chpl__cid = chpl__cid_object_chpl;
  chpl_macro_tmp_881.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_881.addr = &parent_chpl;
  tmp_chpl15 = chpl_macro_tmp_881;
  chpl_macro_tmp_882.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_882.addr = i_parent_loc_chpl;
  tmp_chpl16 = chpl_macro_tmp_882;
  init_ASSIGN__chpl(tmp_chpl15, tmp_chpl16);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->parent = parent_chpl;
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->nPUsLogAcc = INT64(0);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->nPUsLogAll = INT64(0);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->nPUsPhysAcc = INT64(0);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->nPUsPhysAll = INT64(0);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->maxTaskPar = INT64(0);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->callStackSize = UINT64(0);
  chpl_macro_tmp_883.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_883.addr = &runningTaskCounter_chpl;
  tmp_chpl17 = chpl_macro_tmp_883;
  init_chpl2(tmp_chpl17);
  chpl_check_nil(super_tmp_chpl2, _ln_chpl, _fn_chpl);
  (super_tmp_chpl2)->runningTaskCounter = runningTaskCounter_chpl;
  ((object_chpl)(super_tmp_chpl2))->chpl__cid = chpl__cid_BaseLocale_chpl;
  ((object_chpl)(((BaseLocale_chpl)(super_tmp_chpl))))->chpl__cid = chpl__cid_BaseLocale_chpl;
  ((object_chpl)(super_tmp_chpl))->chpl__cid = chpl__cid_AbstractRootLocale_chpl;
  ((object_chpl)(((AbstractRootLocale_chpl)(initTemp_chpl))))->chpl__cid = chpl__cid_AbstractRootLocale_chpl;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  ((BaseLocale_chpl)(initTemp_chpl))->nPUsPhysAcc = INT64(0);
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  ((BaseLocale_chpl)(initTemp_chpl))->nPUsPhysAll = INT64(0);
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  ((BaseLocale_chpl)(initTemp_chpl))->nPUsLogAcc = INT64(0);
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  ((BaseLocale_chpl)(initTemp_chpl))->nPUsLogAll = INT64(0);
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  ((BaseLocale_chpl)(initTemp_chpl))->maxTaskPar = INT64(0);
  chpl_build_bounded_range(INT64(0), ((int64_t)((local_numLocales_chpl - INT64(1)))), &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  chpl__buildDomainExpr(call_tmp_chpl36, UINT8(true), &ret_tmp_chpl2);
  call_tmp_chpl37 = ret_tmp_chpl2;
  call_tmp_chpl38 = chpl__buildDomainRuntimeType(&defaultDist_chpl);
  chpl__coerceMove(&call_tmp_chpl38, &call_tmp_chpl37, UINT8(false), &ret_tmp_chpl3);
  init_coerce_tmp_chpl3 = ret_tmp_chpl3;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  (initTemp_chpl)->myLocaleSpace = init_coerce_tmp_chpl3;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  tmp_chpl18 = (initTemp_chpl)->myLocaleSpace;
  myLocaleSpace_chpl = tmp_chpl18;
  chpl_macro_tmp_884.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_884.addr = &((&myLocaleSpace_chpl)->_instance);
  _instance_chpl = chpl_macro_tmp_884;
  chpl_gen_comm_get(((void*)(&tmp_chpl19)), chpl_nodeFromLocaleID((_instance_chpl).locale, INT64(0), INT32(0)), (_instance_chpl).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(2), INT64(172), INT64(25));
  chpl_check_nil((&tmp_chpl19)->addr, _ln_chpl, _fn_chpl);
  chpl_macro_tmp_885.locale = (&tmp_chpl19)->locale;
  chpl_macro_tmp_885.addr = &(((BaseDom_chpl)((&tmp_chpl19)->addr))->definedConst);
  chpl_macro_tmp_886 = UINT8(true);
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_886)), chpl_nodeFromLocaleID((chpl_macro_tmp_885).locale, INT64(0), INT32(0)), (chpl_macro_tmp_885).addr, sizeof(chpl_bool), COMMID(3), INT64(172), INT64(25));
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  call_tmp_chpl39 = &((initTemp_chpl)->myLocaleSpace);
  call_tmp_chpl40 = chpl__ensureDomainExpr(call_tmp_chpl39);
  call_tmp_chpl41 = chpl__buildArrayRuntimeType(call_tmp_chpl40);
  tmp_chpl20 = (&call_tmp_chpl41)->dom;
  _runtime_type_tmp__chpl2 = tmp_chpl20;
  chpl__convertRuntimeTypeToValue(&_runtime_type_tmp__chpl2, UINT8(false), &ret_tmp_chpl4);
  myLocales_chpl = ret_tmp_chpl4;
  chpl_check_nil(initTemp_chpl, _ln_chpl, _fn_chpl);
  (initTemp_chpl)->myLocales = myLocales_chpl;
  ((object_chpl)(initTemp_chpl))->chpl__cid = chpl__cid_RootLocale_chpl;
  return initTemp_chpl;
}

/* LocaleModel.chpl:184 */
static void setup_chpl2(chpl____wide_RootLocale this_chpl7) {
  helpSetupRootLocaleFlat_chpl(this_chpl7);
  return;
}

/* LocaleModel.chpl:203 */
static int64_t getChildCount_chpl4(chpl____wide_RootLocale this_chpl7) {
  chpl____wide__ref__wide__domain_DefaultRectangularDom_1_int64_t_F call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl37;
  chpl____wide__ref__wide__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_887;
  chpl_check_nil((&this_chpl7)->addr, INT64(203), INT32(25));
  chpl_macro_tmp_887.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_887.addr = &(((&this_chpl7)->addr)->myLocaleSpace);
  call_tmp_chpl36 = chpl_macro_tmp_887;
  call_tmp_chpl37 = size_chpl(call_tmp_chpl36);
  return call_tmp_chpl37;
}

/* LocaleModel.chpl:212 */
static void getChild_chpl4(chpl____wide_RootLocale this_chpl7,
                           int64_t idx_chpl,
                           chpl____wide__ref_locale _retArg_chpl) {
  chpl____wide__ref__wide__array_DefaultRectangularArr_1_int64_t_F_locale_int64_t call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t_chpl i_chpl;
  _ref__tuple_1_star_int64_t_chpl i_i_chpl = NULL;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t coerce_tmp_chpl4;
  chpl____wide__ddata_locale coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale call_tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  locale_chpl ret_chpl2;
  locale_chpl tmp_chpl15;
  chpl____wide__ref_locale tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_1_int64_t_F_locale_int64_t chpl_macro_tmp_888;
  chpl____wide__ref__wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t chpl_macro_tmp_889;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_890;
  chpl____wide__ref_locale chpl_macro_tmp_891;
  chpl____wide__ref_locale chpl_macro_tmp_892;
  chpl_check_nil((&this_chpl7)->addr, INT64(212), INT32(25));
  chpl_macro_tmp_888.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_888.addr = &(((&this_chpl7)->addr)->myLocales);
  call_tmp_chpl36 = chpl_macro_tmp_888;
  *(i_chpl + INT64(0)) = idx_chpl;
  i_i_chpl = &i_chpl;
  chpl_macro_tmp_889.locale = (call_tmp_chpl36).locale;
  chpl_macro_tmp_889.addr = &(((call_tmp_chpl36).addr)->_instance);
  chpl_gen_comm_get(((void*)(&ret_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_889).locale, INT64(0), INT32(0)), (chpl_macro_tmp_889).addr, sizeof(chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t), COMMID(4), INT64(212), INT64(25));
  checkAccess_chpl(call_tmp_chpl36, i_i_chpl, ret_chpl, INT64(212), INT32(25));
  coerce_tmp_chpl3 = ret_chpl;
  coerce_tmp_chpl4 = *(i_chpl + INT64(0));
  chpl_check_nil((&coerce_tmp_chpl3)->addr, INT64(212), INT32(25));
  chpl_macro_tmp_890.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_890.addr = &(((&coerce_tmp_chpl3)->addr)->shiftedData);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID((chpl_macro_tmp_890).locale, INT64(0), INT32(0)), (chpl_macro_tmp_890).addr, sizeof(chpl____wide__ddata_locale), COMMID(5), INT64(212), INT64(25));
  chpl_macro_tmp_891.locale = (&coerce_tmp_chpl5)->locale;
  chpl_macro_tmp_891.addr = ((&coerce_tmp_chpl5)->addr + coerce_tmp_chpl4);
  call_tmp_chpl37 = chpl_macro_tmp_891;
  chpl_macro_tmp_892.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_892.addr = &tmp_chpl15;
  tmp_chpl16 = chpl_macro_tmp_892;
  init_ASSIGN__chpl(tmp_chpl16, call_tmp_chpl37);
  ret_chpl2 = tmp_chpl15;
  chpl_gen_comm_put(((void*)(&ret_chpl2)), chpl_nodeFromLocaleID((_retArg_chpl).locale, INT64(0), INT32(0)), (_retArg_chpl).addr, sizeof(locale_chpl), COMMID(6), INT64(212), INT64(25));
  return;
}

/* LocaleModel.chpl:220 */
static chpl____wide__ref__wide__array_DefaultRectangularArr_1_int64_t_F_locale_int64_t getDefaultLocaleArray_chpl(chpl____wide_RootLocale this_chpl7) {
  chpl____wide__ref__wide__array_DefaultRectangularArr_1_int64_t_F_locale_int64_t call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_1_int64_t_F_locale_int64_t chpl_macro_tmp_893;
  chpl_check_nil((&this_chpl7)->addr, INT64(220), INT32(25));
  chpl_macro_tmp_893.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_893.addr = &(((&this_chpl7)->addr)->myLocales);
  call_tmp_chpl36 = chpl_macro_tmp_893;
  return call_tmp_chpl36;
}

/* LocaleModel.chpl:222 */
static void localeIDtoLocale_chpl2(chpl____wide_RootLocale this_chpl7,
                                   chpl____wide__ref_chpl_localeID_t id_chpl2,
                                   chpl____wide__ref_locale _retArg_chpl) {
  int32_t call_tmp_chpl36;
  _ref_chpl_localeID_t_chpl tmp_chpl15 = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr_1_int64_t_F_locale_int64_t call_tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t_chpl i_chpl;
  _ref__tuple_1_star_int64_t_chpl i_i_chpl = NULL;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t coerce_tmp_chpl4;
  chpl____wide__ddata_locale coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale call_tmp_chpl38 = {CHPL_LOCALEID_T_INIT, NULL};
  locale_chpl ret_chpl2;
  locale_chpl tmp_chpl16;
  chpl____wide__ref_locale tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_894;
  chpl____wide__ref__wide__array_DefaultRectangularArr_1_int64_t_F_locale_int64_t chpl_macro_tmp_895;
  chpl____wide__ref__wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t chpl_macro_tmp_896;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_897;
  chpl____wide__ref_locale chpl_macro_tmp_898;
  chpl____wide__ref_locale chpl_macro_tmp_899;
  chpl_check_local(chpl_nodeFromLocaleID((&id_chpl2)->locale, INT64(0), INT32(0)), INT64(227), INT32(25), "references to remote data cannot be passed to external routines like 'chpl_rt_nodeFromLocaleID'");
  tmp_chpl15 = (&id_chpl2)->addr;
  call_tmp_chpl36 = chpl_rt_nodeFromLocaleID(*(tmp_chpl15));
  chpl_macro_tmp_894.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_894.addr = tmp_chpl15;
  id_chpl2 = chpl_macro_tmp_894;
  chpl_check_nil((&this_chpl7)->addr, INT64(227), INT32(25));
  chpl_macro_tmp_895.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_895.addr = &(((&this_chpl7)->addr)->myLocales);
  call_tmp_chpl37 = chpl_macro_tmp_895;
  *(i_chpl + INT64(0)) = ((int64_t)(call_tmp_chpl36));
  i_i_chpl = &i_chpl;
  chpl_macro_tmp_896.locale = (call_tmp_chpl37).locale;
  chpl_macro_tmp_896.addr = &(((call_tmp_chpl37).addr)->_instance);
  chpl_gen_comm_get(((void*)(&ret_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_896).locale, INT64(0), INT32(0)), (chpl_macro_tmp_896).addr, sizeof(chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t), COMMID(7), INT64(227), INT64(25));
  checkAccess_chpl(call_tmp_chpl37, i_i_chpl, ret_chpl, INT64(227), INT32(25));
  coerce_tmp_chpl3 = ret_chpl;
  coerce_tmp_chpl4 = *(i_chpl + INT64(0));
  chpl_check_nil((&coerce_tmp_chpl3)->addr, INT64(227), INT32(25));
  chpl_macro_tmp_897.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_897.addr = &(((&coerce_tmp_chpl3)->addr)->shiftedData);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID((chpl_macro_tmp_897).locale, INT64(0), INT32(0)), (chpl_macro_tmp_897).addr, sizeof(chpl____wide__ddata_locale), COMMID(8), INT64(227), INT64(25));
  chpl_macro_tmp_898.locale = (&coerce_tmp_chpl5)->locale;
  chpl_macro_tmp_898.addr = ((&coerce_tmp_chpl5)->addr + coerce_tmp_chpl4);
  call_tmp_chpl38 = chpl_macro_tmp_898;
  chpl_macro_tmp_899.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_899.addr = &tmp_chpl16;
  tmp_chpl17 = chpl_macro_tmp_899;
  init_ASSIGN__chpl(tmp_chpl17, call_tmp_chpl38);
  ret_chpl2 = tmp_chpl16;
  chpl_gen_comm_put(((void*)(&ret_chpl2)), chpl_nodeFromLocaleID((_retArg_chpl).locale, INT64(0), INT32(0)), (_retArg_chpl).addr, sizeof(locale_chpl), COMMID(9), INT64(222), INT64(25));
  return;
}

/* LocaleModel.chpl:230 */
static void deinit_chpl16(chpl____wide_RootLocale this_chpl7) {
  string_chpl local__str_literal_75_chpl;
  string_chpl local__str_literal_579_chpl;
  _array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl _ir_F0_this_chpl;
  _array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl tmp_chpl15;
  _array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl this_chpl8;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t this_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F _ic__F1_viewDom_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t info_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl36;
  int64_t call_tmp_chpl37;
  int64_t call_tmp_chpl38;
  int64_t call_tmp_chpl39;
  chpl____wide_DefaultRectangularDom_1_int64_t_F viewDom_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl40;
  int64_t _ic__F1_high_chpl;
  int64_t _ic__F2_stride_chpl;
  int64_t i_chpl;
  chpl____wide__ddata_locale coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale call_tmp_chpl41 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl42;
  chpl____wide_BaseLocale coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  locale_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl69 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  _array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl _field_destructor_tmp__chpl;
  _array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl tmp_chpl17;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl _field_destructor_tmp__chpl2;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl tmp_chpl18;
  chpl____wide_AbstractRootLocale _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale _parent_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_AtomicT_int64_t _field_destructor_tmp__chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale _field_destructor_tmp__chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_1_int64_t_F_locale_int64_t chpl_macro_tmp_900;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_901;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_902;
  chpl____wide__ref_locale chpl_macro_tmp_903;
  chpl____wide__ref__wide_BaseLocale chpl_macro_tmp_904;
  chpl____wide_object chpl_macro_tmp_905;
  chpl____wide__nilType chpl_macro_tmp_906;
  chpl____wide_object chpl_macro_tmp_907;
  chpl__class_localson_fn_chpl69_object chpl_macro_tmp_908;
  chpl____wide__ref__wide__array_DefaultRectangularArr_1_int64_t_F_locale_int64_t chpl_macro_tmp_909;
  chpl____wide__ref__wide__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_910;
  chpl____wide_AbstractRootLocale chpl_macro_tmp_911;
  chpl____wide_BaseLocale chpl_macro_tmp_912;
  chpl____wide__ref_AtomicT_int64_t chpl_macro_tmp_913;
  chpl____wide__ref_locale chpl_macro_tmp_914;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  local__str_literal_579_chpl = _str_literal_579_chpl /* "the step argument of the 'by' operator is zero" */;
  chpl_check_nil((&this_chpl7)->addr, INT64(231), INT32(25));
  chpl_macro_tmp_900.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_900.addr = &(((&this_chpl7)->addr)->myLocales);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_900).locale, INT64(0), INT32(0)), (chpl_macro_tmp_900).addr, sizeof(_array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl), COMMID(10), INT64(231), INT64(25));
  _ir_F0_this_chpl = tmp_chpl15;
  this_chpl8 = _ir_F0_this_chpl;
  ret_chpl = (&this_chpl8)->_instance;
  this_chpl9 = ret_chpl;
  chpl_check_nil((&this_chpl9)->addr, INT64(231), INT32(25));
  chpl_macro_tmp_901.locale = (&this_chpl9)->locale;
  chpl_macro_tmp_901.addr = &(((&this_chpl9)->addr)->dom);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID((chpl_macro_tmp_901).locale, INT64(0), INT32(0)), (chpl_macro_tmp_901).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(11), INT64(231), INT64(25));
  _ic__F1_viewDom_chpl = coerce_tmp_chpl3;
  info_chpl = ret_chpl;
  chpl_check_nil((&coerce_tmp_chpl3)->addr, INT64(231), INT32(25));
  call_tmp_chpl36 = dsiLow_chpl(coerce_tmp_chpl3);
  chpl_check_nil((&_ic__F1_viewDom_chpl)->addr, INT64(231), INT32(25));
  call_tmp_chpl37 = dsiLow_chpl(_ic__F1_viewDom_chpl);
  call_tmp_chpl38 = (((int64_t)((call_tmp_chpl37 + INT64(1)))) - call_tmp_chpl36);
  viewDom_chpl = _ic__F1_viewDom_chpl;
  chpl_check_nil((&viewDom_chpl)->addr, INT64(231), INT32(25));
  call_tmp_chpl39 = dsiNumIndices_chpl(viewDom_chpl);
  call_tmp_chpl40 = (call_tmp_chpl36 + ((int64_t)((((int64_t)((call_tmp_chpl39 - INT64(1)))) * call_tmp_chpl38))));
  _ic__F1_high_chpl = call_tmp_chpl40;
  _ic__F2_stride_chpl = call_tmp_chpl38;
  if (call_tmp_chpl38 == INT64(0)) {
    boundsCheckHalt_chpl(&local__str_literal_579_chpl, INT64(231), INT32(25));
  }
  chpl_checkIfRangeIterWillOverflow(call_tmp_chpl36, call_tmp_chpl40, call_tmp_chpl38, call_tmp_chpl36, call_tmp_chpl40, UINT8(true));
  i_chpl = INT64(0);
  chpl_check_nil((&info_chpl)->addr, INT64(231), INT32(25));
  chpl_macro_tmp_902.locale = (&info_chpl)->locale;
  chpl_macro_tmp_902.addr = &(((&info_chpl)->addr)->shiftedData);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID((chpl_macro_tmp_902).locale, INT64(0), INT32(0)), (chpl_macro_tmp_902).addr, sizeof(chpl____wide__ddata_locale), COMMID(12), INT64(231), INT64(25));
  for (i_chpl = call_tmp_chpl36; ((i_chpl <= _ic__F1_high_chpl)); i_chpl += _ic__F2_stride_chpl) {
    chpl_macro_tmp_903.locale = (&coerce_tmp_chpl4)->locale;
    chpl_macro_tmp_903.addr = ((&coerce_tmp_chpl4)->addr + i_chpl);
    call_tmp_chpl41 = chpl_macro_tmp_903;
    chpl_macro_tmp_904.locale = (call_tmp_chpl41).locale;
    chpl_macro_tmp_904.addr = &(((call_tmp_chpl41).addr)->_instance);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID((chpl_macro_tmp_904).locale, INT64(0), INT32(0)), (chpl_macro_tmp_904).addr, sizeof(chpl____wide_BaseLocale), COMMID(13), INT64(232), INT64(25));
    chpl_macro_tmp_905.locale = (&coerce_tmp_chpl5)->locale;
    chpl_macro_tmp_905.addr = ((object_chpl)((&coerce_tmp_chpl5)->addr));
    coerce_tmp_chpl6 = chpl_macro_tmp_905;
    chpl_macro_tmp_906.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_906.addr = nil;
    chpl_macro_tmp_907.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_907.addr = NULL;
    tmp_chpl16 = chpl_macro_tmp_907;
    if (! (((&coerce_tmp_chpl6)->addr != (&tmp_chpl16)->addr) || ((!(! (&coerce_tmp_chpl6)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl6)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl16)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(232), INT32(25));
    }
    call_tmp_chpl42 = (&coerce_tmp_chpl5)->locale;
    chpl_rmem_consist_release(INT64(232), INT32(25));
    chpl_gen_comm_get(((void*)(&rvfDerefTmp_chpl)), chpl_nodeFromLocaleID((call_tmp_chpl41).locale, INT64(0), INT32(0)), (call_tmp_chpl41).addr, sizeof(locale_chpl), COMMID(14), INT64(231), INT64(25));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl42);
    if (isdirect_chpl) {
      on_fn_chpl69(&rvfDerefTmp_chpl);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl69)(&chpl_macro_tmp_908));
      chpl_check_nil(_args_foron_fn_chpl, INT64(232), INT32(25));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl42;
      chpl_check_nil(_args_foron_fn_chpl, INT64(232), INT32(25));
      (_args_foron_fn_chpl)->_1_rvfDerefTmp = rvfDerefTmp_chpl;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl69_object);
      chpl_taskRunningCntDec(INT64(232), INT32(25));
      /*** wrapon_fn_chpl69 ***/ chpl_executeOn(call_tmp_chpl42, INT32(83), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(232), INT32(25));
      chpl_taskRunningCntInc(INT64(232), INT32(25));
    }
    chpl_rmem_consist_acquire(INT64(232), INT32(25));
  }
  chpl_check_nil((&this_chpl7)->addr, INT64(170), INT32(25));
  chpl_macro_tmp_909.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_909.addr = &(((&this_chpl7)->addr)->myLocales);
  chpl_gen_comm_get(((void*)(&tmp_chpl17)), chpl_nodeFromLocaleID((chpl_macro_tmp_909).locale, INT64(0), INT32(0)), (chpl_macro_tmp_909).addr, sizeof(_array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl), COMMID(15), INT64(170), INT64(25));
  _field_destructor_tmp__chpl = tmp_chpl17;
  chpl__autoDestroy3(&_field_destructor_tmp__chpl);
  chpl_check_nil((&this_chpl7)->addr, INT64(168), INT32(25));
  chpl_macro_tmp_910.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_910.addr = &(((&this_chpl7)->addr)->myLocaleSpace);
  chpl_gen_comm_get(((void*)(&tmp_chpl18)), chpl_nodeFromLocaleID((chpl_macro_tmp_910).locale, INT64(0), INT32(0)), (chpl_macro_tmp_910).addr, sizeof(_domain_DefaultRectangularDom_1_int64_t_F_chpl), COMMID(16), INT64(168), INT64(25));
  _field_destructor_tmp__chpl2 = tmp_chpl18;
  chpl__autoDestroy2(&_field_destructor_tmp__chpl2);
  chpl_macro_tmp_911.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_911.addr = ((AbstractRootLocale_chpl)((&this_chpl7)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_911;
  chpl_macro_tmp_912.locale = (&_parent_destructor_tmp__chpl)->locale;
  chpl_macro_tmp_912.addr = ((BaseLocale_chpl)((&_parent_destructor_tmp__chpl)->addr));
  _parent_destructor_tmp__chpl2 = chpl_macro_tmp_912;
  chpl_check_nil((&_parent_destructor_tmp__chpl2)->addr, INT64(230), INT32(25));
  chpl_macro_tmp_913.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_913.addr = &(((&_parent_destructor_tmp__chpl2)->addr)->runningTaskCounter);
  _field_destructor_tmp__chpl3 = chpl_macro_tmp_913;
  deinit_chpl2(_field_destructor_tmp__chpl3);
  chpl_check_nil((&_parent_destructor_tmp__chpl2)->addr, INT64(230), INT32(25));
  chpl_macro_tmp_914.locale = (&_parent_destructor_tmp__chpl2)->locale;
  chpl_macro_tmp_914.addr = &(((&_parent_destructor_tmp__chpl2)->addr)->parent);
  _field_destructor_tmp__chpl4 = chpl_macro_tmp_914;
  deinit_chpl14(_field_destructor_tmp__chpl4);
  return;
}

/* LocaleModel.chpl:232 */
static void on_fn_chpl69(locale_chpl * loc_chpl) {
  chpl____wide_BaseLocale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  rootLocaleInitialized_chpl = UINT8(false);
  coerce_tmp_chpl3 = (loc_chpl)->_instance;
  chpl__delete34(coerce_tmp_chpl3);
  return;
}

/* LocaleModel.chpl:232 */
static void wrapon_fn_chpl69(_class_localson_fn_chpl69 c_chpl) {
  locale_chpl _1_rvfDerefTmp_chpl;
  locale_chpl tmp_chpl15;
  chpl_rmem_consist_acquire(INT64(232), INT32(25));
  chpl_check_nil(c_chpl, INT64(232), INT32(25));
  tmp_chpl15 = (c_chpl)->_1_rvfDerefTmp;
  _1_rvfDerefTmp_chpl = tmp_chpl15;
  chpl_taskRunningCntInc(INT64(232), INT32(25));
  on_fn_chpl69(&_1_rvfDerefTmp_chpl);
  chpl_taskRunningCntDec(INT64(232), INT32(25));
  chpl_rmem_consist_release(INT64(232), INT32(25));
  return;
}

/* LocaleModel.chpl:250 */
static void deinit_chpl17(void) {
  _domain_DefaultRectangularDom_1_int64_t_F_chpl local_chpl_emptyLocaleSpace_chpl;
  string_chpl local__str_literal_579_chpl;
  _array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl local_chpl_emptyLocales_chpl;
  _array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl _ir_F0_this_chpl;
  _array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl this_chpl7;
  DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl ret_chpl = NULL;
  chpl____wide_DefaultRectangularArr_1_int64_t_F_locale_int64_t tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl this_chpl8 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F _ic__F1_viewDom_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl info_chpl = NULL;
  int64_t call_tmp_chpl36;
  int64_t call_tmp_chpl37;
  int64_t call_tmp_chpl38;
  int64_t call_tmp_chpl39;
  chpl____wide_DefaultRectangularDom_1_int64_t_F viewDom_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl40;
  int64_t _ic__F1_high_chpl;
  int64_t _ic__F2_stride_chpl;
  int64_t i_chpl;
  _ddata_locale_chpl coerce_tmp_chpl4 = NULL;
  chpl____wide__ddata_locale tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl call_tmp_chpl41 = NULL;
  chpl____wide_BaseLocale coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  local_chpl_emptyLocaleSpace_chpl = chpl_emptyLocaleSpace;
  local__str_literal_579_chpl = _str_literal_579_chpl /* "the step argument of the 'by' operator is zero" */;
  local_chpl_emptyLocales_chpl = chpl_emptyLocales;
  _ir_F0_this_chpl = local_chpl_emptyLocales_chpl;
  this_chpl7 = _ir_F0_this_chpl;
  tmp_chpl15 = (&this_chpl7)->_instance;
  ret_chpl = (&tmp_chpl15)->addr;
  this_chpl8 = ret_chpl;
  chpl_check_nil(this_chpl8, INT64(251), INT32(25));
  coerce_tmp_chpl3 = (this_chpl8)->dom;
  _ic__F1_viewDom_chpl = coerce_tmp_chpl3;
  info_chpl = ret_chpl;
  chpl_check_nil((&coerce_tmp_chpl3)->addr, INT64(251), INT32(25));
  call_tmp_chpl36 = dsiLow_chpl(coerce_tmp_chpl3);
  chpl_check_nil((&_ic__F1_viewDom_chpl)->addr, INT64(251), INT32(25));
  call_tmp_chpl37 = dsiLow_chpl(_ic__F1_viewDom_chpl);
  call_tmp_chpl38 = (((int64_t)((call_tmp_chpl37 + INT64(1)))) - call_tmp_chpl36);
  viewDom_chpl = _ic__F1_viewDom_chpl;
  chpl_check_nil((&viewDom_chpl)->addr, INT64(251), INT32(25));
  call_tmp_chpl39 = dsiNumIndices_chpl(viewDom_chpl);
  call_tmp_chpl40 = (call_tmp_chpl36 + ((int64_t)((((int64_t)((call_tmp_chpl39 - INT64(1)))) * call_tmp_chpl38))));
  _ic__F1_high_chpl = call_tmp_chpl40;
  _ic__F2_stride_chpl = call_tmp_chpl38;
  if (call_tmp_chpl38 == INT64(0)) {
    boundsCheckHalt_chpl(&local__str_literal_579_chpl, INT64(251), INT32(25));
  }
  chpl_checkIfRangeIterWillOverflow(call_tmp_chpl36, call_tmp_chpl40, call_tmp_chpl38, call_tmp_chpl36, call_tmp_chpl40, UINT8(true));
  i_chpl = INT64(0);
  chpl_check_nil(info_chpl, INT64(251), INT32(25));
  tmp_chpl16 = (info_chpl)->shiftedData;
  chpl_check_local(chpl_nodeFromLocaleID((&tmp_chpl16)->locale, INT64(0), INT32(0)), INT64(251), INT32(25), "cannot access remote data in local block");
  coerce_tmp_chpl4 = (&tmp_chpl16)->addr;
  for (i_chpl = call_tmp_chpl36; ((i_chpl <= _ic__F1_high_chpl)); i_chpl += _ic__F2_stride_chpl) {
    call_tmp_chpl41 = (coerce_tmp_chpl4 + i_chpl);
    coerce_tmp_chpl5 = (call_tmp_chpl41)->_instance;
    chpl__delete34(coerce_tmp_chpl5);
  }
  chpl__autoDestroy3(&local_chpl_emptyLocales_chpl);
  chpl__autoDestroy2(&local_chpl_emptyLocaleSpace_chpl);
  return;
}

