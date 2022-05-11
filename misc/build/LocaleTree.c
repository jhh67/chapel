/* LocaleTree.chpl:26 */
static void chpl__init_LocaleTree(int64_t _ln_chpl,
                                  int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  locale_chpl ret_chpl;
  locale_chpl left_chpl;
  locale_chpl ret_chpl2;
  locale_chpl right_chpl;
  if (chpl__init_LocaleTree_p) {
    goto _exit_chpl__init_LocaleTree_chpl;
  }
  printModuleInit_chpl("%*s\n", "LocaleTree", INT64(10));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_LocaleTree_p = UINT8(true);
  {
    chpl__init_ChapelLocale(INT64(26), INT32(33));
  }
  chpl_addModule("LocaleTree", ((c_fn_ptr)(chpl__deinit_LocaleTree)));
  init_chpl19(&left_chpl);
  ret_chpl = left_chpl;
  default_arg_left_chpl = ret_chpl;
  init_chpl19(&right_chpl);
  ret_chpl2 = right_chpl;
  default_arg_right_chpl = ret_chpl2;
  init_chpl45(&chpl_localeTree, &default_arg_left_chpl, &default_arg_right_chpl);
  chpl_initLocaleTree();
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_LocaleTree_chpl:;
  return;
}

/* LocaleTree.chpl:26 */
static void chpl__deinit_LocaleTree(void) {
  _ref_locale_chpl _field_destructor_tmp__chpl = NULL;
  chpl____wide__ref_locale tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl _field_destructor_tmp__chpl2 = NULL;
  chpl____wide__ref_locale tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_locale chpl_macro_tmp_1731;
  chpl____wide__ref_locale chpl_macro_tmp_1732;
  _field_destructor_tmp__chpl = &((&chpl_localeTree)->right);
  chpl_macro_tmp_1731.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1731.addr = _field_destructor_tmp__chpl;
  tmp_chpl15 = chpl_macro_tmp_1731;
  deinit_chpl14(tmp_chpl15);
  _field_destructor_tmp__chpl2 = &((&chpl_localeTree)->left);
  chpl_macro_tmp_1732.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1732.addr = _field_destructor_tmp__chpl2;
  tmp_chpl16 = chpl_macro_tmp_1732;
  deinit_chpl14(tmp_chpl16);
  return;
}

/* LocaleTree.chpl:30 */
static void init_chpl45(chpl_localeTreeRecord * this_chpl7,
                        locale_chpl * left_chpl,
                        locale_chpl * right_chpl) {
  locale_chpl _formal_tmp_left_chpl;
  locale_chpl _formal_tmp_right_chpl;
  _formal_tmp_left_chpl = *(left_chpl);
  _formal_tmp_right_chpl = *(right_chpl);
  (this_chpl7)->left = _formal_tmp_left_chpl;
  (this_chpl7)->right = _formal_tmp_right_chpl;
  return;
}

/* LocaleTree.chpl:36 */
static void chpl_initLocaleTree(void) {
  string_chpl local__str_literal_75_chpl;
  int64_t local_numLocales_chpl;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl local_LocaleSpace_chpl;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl _ir_F0_this_chpl;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl this_chpl7;
  DefaultRectangularDom_1_int64_t_F_chpl ret_chpl = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t_chpl ret_tmp_chpl;
  DefaultRectangularDom_1_int64_t_F_chpl this_chpl8 = NULL;
  _ref__tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl36 = NULL;
  range_int64_t_bounded_F_chpl coerce_tmp_chpl3;
  range_int64_t_bounded_F_chpl _ic__F0_this_chpl;
  int64_t i_chpl;
  range_int64_t_bounded_F_chpl this_chpl9;
  int64_t coerce_tmp_chpl4;
  range_int64_t_bounded_F_chpl this_chpl10;
  int64_t end_chpl;
  chpl____wide_BaseLocale left_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  BaseLocale_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_BaseLocale right_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  BaseLocale_chpl init_coerce_tmp_chpl4 = NULL;
  int64_t call_tmp_chpl37;
  int64_t child_chpl;
  locale_chpl call_tmp_chpl38;
  chpl____wide_BaseLocale coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  locale_chpl ret_tmp_chpl2;
  _ref_locale_chpl tmp_chpl17 = NULL;
  chpl____wide__ref_locale tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl i_x_chpl = NULL;
  chpl____wide__ref_locale tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t_chpl i_lhs_chpl = NULL;
  locale_chpl call_tmp_chpl39;
  chpl____wide_BaseLocale coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  locale_chpl ret_tmp_chpl3;
  _ref_locale_chpl tmp_chpl21 = NULL;
  chpl____wide__ref_locale tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale coerce_tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_locale_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_locale tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  locale_chpl call_tmp_chpl40;
  chpl____wide_BaseLocale coerce_tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  locale_chpl ret_tmp_chpl4;
  _ref_locale_chpl tmp_chpl25 = NULL;
  chpl____wide__ref_locale tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl41;
  chpl____wide_BaseLocale coerce_tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale rvfDerefTmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl72 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  _ref_locale_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_locale tmp_chpl28 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale chpl_macro_tmp_1733;
  chpl____wide_BaseLocale chpl_macro_tmp_1734;
  chpl____wide_object chpl_macro_tmp_1735;
  chpl____wide__nilType chpl_macro_tmp_1736;
  chpl____wide_object chpl_macro_tmp_1737;
  chpl____wide__ref_locale chpl_macro_tmp_1738;
  chpl____wide__ref_int32_t chpl_macro_tmp_1739;
  int32_t chpl_macro_tmp_1740;
  chpl____wide__ref_locale chpl_macro_tmp_1741;
  chpl____wide_object chpl_macro_tmp_1742;
  chpl____wide__nilType chpl_macro_tmp_1743;
  chpl____wide_object chpl_macro_tmp_1744;
  chpl____wide__ref_locale chpl_macro_tmp_1745;
  chpl____wide__ref_int32_t chpl_macro_tmp_1746;
  int32_t chpl_macro_tmp_1747;
  chpl____wide__ref_locale chpl_macro_tmp_1748;
  chpl____wide_object chpl_macro_tmp_1749;
  chpl____wide__nilType chpl_macro_tmp_1750;
  chpl____wide_object chpl_macro_tmp_1751;
  chpl____wide__ref_locale chpl_macro_tmp_1752;
  chpl____wide__ref_int32_t chpl_macro_tmp_1753;
  int32_t chpl_macro_tmp_1754;
  chpl____wide_object chpl_macro_tmp_1755;
  chpl____wide__nilType chpl_macro_tmp_1756;
  chpl____wide_object chpl_macro_tmp_1757;
  chpl__class_localson_fn_chpl72_object chpl_macro_tmp_1758;
  chpl____wide__ref_locale chpl_macro_tmp_1759;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  local_numLocales_chpl = numLocales_chpl;
  local_LocaleSpace_chpl = LocaleSpace_chpl;
  _ir_F0_this_chpl = local_LocaleSpace_chpl;
  this_chpl7 = _ir_F0_this_chpl;
  tmp_chpl15 = (&this_chpl7)->_instance;
  ret_chpl = (&tmp_chpl15)->addr;
  createTuple_chpl(INT64(0), &ret_tmp_chpl);
  this_chpl8 = ret_chpl;
  chpl_check_nil(this_chpl8, INT64(37), INT32(33));
  call_tmp_chpl36 = &((this_chpl8)->ranges);
  coerce_tmp_chpl3 = *(*(call_tmp_chpl36) + INT64(0));
  _ic__F0_this_chpl = coerce_tmp_chpl3;
  checkIfIterWillOverflow_chpl(coerce_tmp_chpl3, UINT8(true));
  i_chpl = INT64(0);
  this_chpl9 = _ic__F0_this_chpl;
  coerce_tmp_chpl4 = (&this_chpl9)->_low;
  this_chpl10 = _ic__F0_this_chpl;
  end_chpl = (&this_chpl10)->_high;
  for (i_chpl = coerce_tmp_chpl4; ((i_chpl <= end_chpl)); i_chpl += INT64(1)) {
    init_coerce_tmp_chpl3 = ((BaseLocale_chpl)(nil));
    chpl_macro_tmp_1733.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1733.addr = init_coerce_tmp_chpl3;
    left_chpl = chpl_macro_tmp_1733;
    init_coerce_tmp_chpl4 = ((BaseLocale_chpl)(nil));
    chpl_macro_tmp_1734.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1734.addr = init_coerce_tmp_chpl4;
    right_chpl = chpl_macro_tmp_1734;
    call_tmp_chpl37 = (((int64_t)((((int64_t)((i_chpl + INT64(1)))) * INT64(2)))) - INT64(1));
    child_chpl = call_tmp_chpl37;
    if (call_tmp_chpl37 < local_numLocales_chpl) {
      coerce_tmp_chpl5 = (&rootLocale_chpl)->_instance;
      chpl_macro_tmp_1735.locale = (&coerce_tmp_chpl5)->locale;
      chpl_macro_tmp_1735.addr = ((object_chpl)((&coerce_tmp_chpl5)->addr));
      coerce_tmp_chpl6 = chpl_macro_tmp_1735;
      chpl_macro_tmp_1736.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1736.addr = nil;
      chpl_macro_tmp_1737.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1737.addr = NULL;
      tmp_chpl16 = chpl_macro_tmp_1737;
      if (! (((&coerce_tmp_chpl6)->addr != (&tmp_chpl16)->addr) || ((!(! (&coerce_tmp_chpl6)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl6)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl16)->locale, INT64(0), INT32(0)))))) {
        nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(95), INT32(26));
      }
      chpl_check_nil((&coerce_tmp_chpl5)->addr, INT64(42), INT32(33));
      tmp_chpl17 = &ret_tmp_chpl2;
      chpl_macro_tmp_1738.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1738.addr = tmp_chpl17;
      tmp_chpl18 = chpl_macro_tmp_1738;
      chpl_macro_tmp_1739.locale = (&coerce_tmp_chpl5)->locale;
      chpl_macro_tmp_1739.addr = &(((object_chpl)((&coerce_tmp_chpl5)->addr))->chpl__cid);
      chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1740)), chpl_nodeFromLocaleID((chpl_macro_tmp_1739).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1739).addr, sizeof(int32_t), COMMID(0), INT64(42), INT64(33));
      ((void(*)(chpl____wide_BaseLocale,
         int64_t,
         chpl____wide__ref_locale))chpl_vmtable[((INT64(6) * chpl_macro_tmp_1740) + INT64(2))])(coerce_tmp_chpl5, call_tmp_chpl37, tmp_chpl18);
      call_tmp_chpl38 = ret_tmp_chpl2;
      coerce_tmp_chpl7 = (&call_tmp_chpl38)->_instance;
      left_chpl = coerce_tmp_chpl7;
      i_x_chpl = &call_tmp_chpl38;
      chpl_macro_tmp_1741.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_1741.addr = i_x_chpl;
      tmp_chpl19 = chpl_macro_tmp_1741;
      deinit_chpl14(tmp_chpl19);
      i_lhs_chpl = &child_chpl;
      *(i_lhs_chpl) += INT64(1);
      if (child_chpl < local_numLocales_chpl) {
        coerce_tmp_chpl8 = (&rootLocale_chpl)->_instance;
        chpl_macro_tmp_1742.locale = (&coerce_tmp_chpl8)->locale;
        chpl_macro_tmp_1742.addr = ((object_chpl)((&coerce_tmp_chpl8)->addr));
        coerce_tmp_chpl9 = chpl_macro_tmp_1742;
        chpl_macro_tmp_1743.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1743.addr = nil;
        chpl_macro_tmp_1744.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1744.addr = NULL;
        tmp_chpl20 = chpl_macro_tmp_1744;
        if (! (((&coerce_tmp_chpl9)->addr != (&tmp_chpl20)->addr) || ((!(! (&coerce_tmp_chpl9)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl9)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl20)->locale, INT64(0), INT32(0)))))) {
          nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(95), INT32(26));
        }
        chpl_check_nil((&coerce_tmp_chpl8)->addr, INT64(45), INT32(33));
        tmp_chpl21 = &ret_tmp_chpl3;
        chpl_macro_tmp_1745.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1745.addr = tmp_chpl21;
        tmp_chpl22 = chpl_macro_tmp_1745;
        chpl_macro_tmp_1746.locale = (&coerce_tmp_chpl8)->locale;
        chpl_macro_tmp_1746.addr = &(((object_chpl)((&coerce_tmp_chpl8)->addr))->chpl__cid);
        chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1747)), chpl_nodeFromLocaleID((chpl_macro_tmp_1746).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1746).addr, sizeof(int32_t), COMMID(1), INT64(45), INT64(33));
        ((void(*)(chpl____wide_BaseLocale,
           int64_t,
           chpl____wide__ref_locale))chpl_vmtable[((INT64(6) * chpl_macro_tmp_1747) + INT64(2))])(coerce_tmp_chpl8, child_chpl, tmp_chpl22);
        call_tmp_chpl39 = ret_tmp_chpl3;
        coerce_tmp_chpl10 = (&call_tmp_chpl39)->_instance;
        right_chpl = coerce_tmp_chpl10;
        i_x_chpl2 = &call_tmp_chpl39;
        chpl_macro_tmp_1748.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_1748.addr = i_x_chpl2;
        tmp_chpl23 = chpl_macro_tmp_1748;
        deinit_chpl14(tmp_chpl23);
      }
    }
    coerce_tmp_chpl11 = (&rootLocale_chpl)->_instance;
    chpl_macro_tmp_1749.locale = (&coerce_tmp_chpl11)->locale;
    chpl_macro_tmp_1749.addr = ((object_chpl)((&coerce_tmp_chpl11)->addr));
    coerce_tmp_chpl12 = chpl_macro_tmp_1749;
    chpl_macro_tmp_1750.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1750.addr = nil;
    chpl_macro_tmp_1751.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1751.addr = NULL;
    tmp_chpl24 = chpl_macro_tmp_1751;
    if (! (((&coerce_tmp_chpl12)->addr != (&tmp_chpl24)->addr) || ((!(! (&coerce_tmp_chpl12)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl12)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl24)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(95), INT32(26));
    }
    chpl_check_nil((&coerce_tmp_chpl11)->addr, INT64(47), INT32(33));
    tmp_chpl25 = &ret_tmp_chpl4;
    chpl_macro_tmp_1752.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1752.addr = tmp_chpl25;
    tmp_chpl26 = chpl_macro_tmp_1752;
    chpl_macro_tmp_1753.locale = (&coerce_tmp_chpl11)->locale;
    chpl_macro_tmp_1753.addr = &(((object_chpl)((&coerce_tmp_chpl11)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_1754)), chpl_nodeFromLocaleID((chpl_macro_tmp_1753).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1753).addr, sizeof(int32_t), COMMID(2), INT64(47), INT64(33));
    ((void(*)(chpl____wide_BaseLocale,
       int64_t,
       chpl____wide__ref_locale))chpl_vmtable[((INT64(6) * chpl_macro_tmp_1754) + INT64(2))])(coerce_tmp_chpl11, i_chpl, tmp_chpl26);
    call_tmp_chpl40 = ret_tmp_chpl4;
    coerce_tmp_chpl13 = (&call_tmp_chpl40)->_instance;
    chpl_macro_tmp_1755.locale = (&coerce_tmp_chpl13)->locale;
    chpl_macro_tmp_1755.addr = ((object_chpl)((&coerce_tmp_chpl13)->addr));
    coerce_tmp_chpl14 = chpl_macro_tmp_1755;
    chpl_macro_tmp_1756.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1756.addr = nil;
    chpl_macro_tmp_1757.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1757.addr = NULL;
    tmp_chpl27 = chpl_macro_tmp_1757;
    if (! (((&coerce_tmp_chpl14)->addr != (&tmp_chpl27)->addr) || ((!(! (&coerce_tmp_chpl14)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl14)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl27)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(47), INT32(33));
    }
    call_tmp_chpl41 = (&coerce_tmp_chpl13)->locale;
    chpl_rmem_consist_release(INT64(47), INT32(33));
    rvfDerefTmp_chpl = left_chpl;
    rvfDerefTmp_chpl2 = right_chpl;
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl41);
    if (isdirect_chpl) {
      on_fn_chpl72(rvfDerefTmp_chpl, rvfDerefTmp_chpl2);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl72)(&chpl_macro_tmp_1758));
      chpl_check_nil(_args_foron_fn_chpl, INT64(47), INT32(33));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl41;
      chpl_check_nil(_args_foron_fn_chpl, INT64(47), INT32(33));
      (_args_foron_fn_chpl)->_1_rvfDerefTmp = rvfDerefTmp_chpl;
      chpl_check_nil(_args_foron_fn_chpl, INT64(47), INT32(33));
      (_args_foron_fn_chpl)->_2_rvfDerefTmp = rvfDerefTmp_chpl2;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      /*** wrapon_fn_chpl72 ***/ chpl_executeOnFast(call_tmp_chpl41, INT32(84), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl72_object), INT64(47), INT32(33));
    }
    i_x_chpl3 = &call_tmp_chpl40;
    chpl_macro_tmp_1759.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1759.addr = i_x_chpl3;
    tmp_chpl28 = chpl_macro_tmp_1759;
    deinit_chpl14(tmp_chpl28);
    chpl_rmem_consist_acquire(INT64(47), INT32(33));
  }
  return;
}

/* LocaleTree.chpl:47 */
static void on_fn_chpl72(chpl____wide_BaseLocale left_chpl,
                         chpl____wide_BaseLocale right_chpl) {
  _ref_locale_chpl call_tmp_chpl36 = NULL;
  _ref_locale_chpl call_tmp_chpl37 = NULL;
  call_tmp_chpl36 = &((&chpl_localeTree)->left);
  (call_tmp_chpl36)->_instance = left_chpl;
  call_tmp_chpl37 = &((&chpl_localeTree)->right);
  (call_tmp_chpl37)->_instance = right_chpl;
  return;
}

/* LocaleTree.chpl:47 */
static void wrapon_fn_chpl72(_class_localson_fn_chpl72 c_chpl) {
  chpl____wide_BaseLocale _1_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseLocale _2_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_check_nil(c_chpl, INT64(47), INT32(33));
  _1_rvfDerefTmp_chpl = (c_chpl)->_1_rvfDerefTmp;
  chpl_check_nil(c_chpl, INT64(47), INT32(33));
  _2_rvfDerefTmp_chpl = (c_chpl)->_2_rvfDerefTmp;
  on_fn_chpl72(_1_rvfDerefTmp_chpl, _2_rvfDerefTmp_chpl);
  return;
}

