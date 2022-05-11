/* LocalesArray.chpl:41 */
static void chpl__init_LocalesArray(int64_t _ln_chpl,
                                    int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  string_chpl local__str_literal_75_chpl;
  RootLocale_chpl _formal_type_tmp__chpl = NULL;
  chpl____wide_RootLocale ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_RootLocale call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F_chpl ret_tmp_chpl;
  chpl____wide_object chpl_macro_tmp_1428;
  chpl____wide__nilType chpl_macro_tmp_1429;
  chpl____wide_object chpl_macro_tmp_1430;
  chpl____wide_RootLocale chpl_macro_tmp_1431;
  chpl____wide__ref_int32_t chpl_macro_tmp_1432;
  int32_t chpl_macro_tmp_1433;
  int32_t chpl_macro_tmp_1434;
  chpl____wide_RootLocale chpl_macro_tmp_1435;
  chpl____wide_object chpl_macro_tmp_1436;
  chpl____wide__nilType chpl_macro_tmp_1437;
  chpl____wide_object chpl_macro_tmp_1438;
  if (chpl__init_LocalesArray_p) {
    goto _exit_chpl__init_LocalesArray_chpl;
  }
  printModuleInit_chpl("%*s\n", "LocalesArray", INT64(12));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_LocalesArray_p = UINT8(true);
  chpl_addModule("LocalesArray", ((c_fn_ptr)(chpl__deinit_LocalesArray)));
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  chpl_init_rootLocale();
  call_tmp_chpl15 = &((&rootLocale_chpl)->_instance);
  coerce_tmp_chpl = *(call_tmp_chpl15);
  coerce_tmp_chpl2 = coerce_tmp_chpl;
  chpl_macro_tmp_1428.locale = (&coerce_tmp_chpl2)->locale;
  chpl_macro_tmp_1428.addr = ((object_chpl)((&coerce_tmp_chpl2)->addr));
  coerce_tmp_chpl3 = chpl_macro_tmp_1428;
  chpl_macro_tmp_1429.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1429.addr = nil;
  chpl_macro_tmp_1430.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1430.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_1430;
  if (! (((&coerce_tmp_chpl3)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl3)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl3)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0)))))) {
    chpl_macro_tmp_1431.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1431.addr = ((RootLocale_chpl)(nil));
    ret_chpl = chpl_macro_tmp_1431;
    goto _end__COLON__chpl;
  }
  chpl_macro_tmp_1432.locale = (coerce_tmp_chpl2).locale;
  chpl_macro_tmp_1432.addr = &(((object_chpl)((coerce_tmp_chpl2).addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1433)), chpl_nodeFromLocaleID((chpl_macro_tmp_1432).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1432).addr, sizeof(int32_t), COMMID(0), INT64(54), INT64(29));
  chpl_macro_tmp_1434 = chpl_macro_tmp_1433;
  chpl_macro_tmp_1435.locale = (coerce_tmp_chpl2).locale;
  chpl_macro_tmp_1435.addr = ( (((chpl__cid_RootLocale_chpl <= chpl_macro_tmp_1434) && (chpl_macro_tmp_1434 <= chpl_subclass_max_id[chpl__cid_RootLocale_chpl])))?(((RootLocale_chpl)((coerce_tmp_chpl2).addr))):(((RootLocale_chpl)(NULL))) );
  call_tmp_chpl36 = chpl_macro_tmp_1435;
  ret_chpl = call_tmp_chpl36;
  _end__COLON__chpl:;
  call_tmp_chpl16 = ret_chpl;
  chpl_macro_tmp_1436.locale = (&call_tmp_chpl16)->locale;
  chpl_macro_tmp_1436.addr = ((object_chpl)((&call_tmp_chpl16)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_1436;
  chpl_macro_tmp_1437.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1437.addr = nil;
  chpl_macro_tmp_1438.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1438.addr = NULL;
  tmp_chpl16 = chpl_macro_tmp_1438;
  if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl16)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl16)->locale, INT64(0), INT32(0)))))) {
    nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(54), INT32(29));
  }
  call_tmp_chpl17 = call_tmp_chpl16;
  chpl_check_nil((&call_tmp_chpl17)->addr, INT64(54), INT32(29));
  call_tmp_chpl18 = getDefaultLocaleArray_chpl(call_tmp_chpl17);
  Locales_chpl = call_tmp_chpl18;
  _dom_chpl(Locales_chpl, &ret_tmp_chpl);
  call_tmp_chpl19 = ret_tmp_chpl;
  LocaleSpace_chpl = chpl__initCopy(&call_tmp_chpl19, UINT8(true));
  chpl_comm_broadcast_private(INT64(11), sizeof(_domain_DefaultRectangularDom_1_int64_t_F_chpl));
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_LocalesArray_chpl:;
  return;
}

/* LocalesArray.chpl:41 */
static void chpl__deinit_LocalesArray(void) {
  _domain_DefaultRectangularDom_1_int64_t_F_chpl local_LocaleSpace_chpl;
  local_LocaleSpace_chpl = LocaleSpace_chpl;
  chpl__autoDestroy2(&local_LocaleSpace_chpl);
  return;
}

