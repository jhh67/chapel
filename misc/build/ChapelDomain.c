/* ChapelDomain.chpl:23 */
static void chpl__init_ChapelDomain(int64_t _ln_chpl,
                                    int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_ChapelDomain_p) {
    goto _exit_chpl__init_ChapelDomain_chpl;
  }
  printModuleInit_chpl("%*s\n", "ChapelDomain", INT64(12));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_ChapelDomain_p = UINT8(true);
  {
    chpl__init_ChapelBase(INT64(23), INT32(58));
    chpl__init_HaltWrappers(INT64(23), INT32(58));
    chpl__init_Initialization(INT64(23), INT32(58));
    chpl__init_IO(INT64(23), INT32(58));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_ChapelDomain_chpl:;
  return;
}

/* ChapelDomain.chpl:30 */
static void _getDomain_chpl(chpl____wide_DefaultRectangularDom_1_int64_t_F value_chpl,
                            _domain_DefaultRectangularDom_1_int64_t_F_chpl * _retArg_chpl) {
  _domain_DefaultRectangularDom_1_int64_t_F_chpl call_tmp_chpl36;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl initTemp_chpl;
  chpl____wide__ref__wide__domain_DefaultRectangularDom_1_int64_t_F tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_2105;
  chpl_macro_tmp_2105.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2105.addr = &initTemp_chpl;
  tmp_chpl15 = chpl_macro_tmp_2105;
  init_chpl15(tmp_chpl15, INT64(-1), value_chpl, UINT8(true));
  call_tmp_chpl36 = initTemp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelDomain.chpl:53 */
static chpl___RuntimeTypeInfo chpl__buildDomainRuntimeType(_distribution_DefaultDist_chpl * dist_chpl2) {
  chpl___RuntimeTypeInfo _return_tmp__chpl;
  (&_return_tmp__chpl)->dist = *(dist_chpl2);
  return _return_tmp__chpl;
}

/* ChapelDomain.chpl:100 */
static void chpl__convertRuntimeTypeToValue2(_distribution_DefaultDist_chpl * dist_chpl2,
                                             chpl_bool definedConst_chpl,
                                             _domain_DefaultRectangularDom_1_int64_t_F_chpl * _retArg_chpl) {
  _domain_DefaultRectangularDom_1_int64_t_F_chpl call_tmp_chpl36;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl initTemp_chpl;
  init_chpl17(&initTemp_chpl, dist_chpl2, definedConst_chpl);
  call_tmp_chpl36 = initTemp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelDomain.chpl:164 */
static void chpl__buildDomainExpr(range_int64_t_bounded_F_chpl _e0_ranges_chpl,
                                  chpl_bool definedConst_chpl,
                                  _domain_DefaultRectangularDom_1_int64_t_F_chpl * _retArg_chpl) {
  _tuple_1_star_range_int64_t_bounded_F_chpl ranges_chpl;
  _tuple_1_star_range_int64_t_bounded_F_chpl ret_tmp_chpl;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl ret_chpl;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl d_chpl;
  chpl___RuntimeTypeInfo call_tmp_chpl36;
  _distribution_DefaultDist_chpl _runtime_type_tmp__chpl2;
  _distribution_DefaultDist_chpl tmp_chpl15;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl ret_tmp_chpl2;
  *(ret_tmp_chpl + INT64(0)) = _e0_ranges_chpl;
  *(ranges_chpl + INT64(0)) = *(ret_tmp_chpl + INT64(0));
  call_tmp_chpl36 = chpl__buildDomainRuntimeType(&defaultDist_chpl);
  tmp_chpl15 = (&call_tmp_chpl36)->dist;
  _runtime_type_tmp__chpl2 = tmp_chpl15;
  chpl__convertRuntimeTypeToValue2(&_runtime_type_tmp__chpl2, UINT8(false), &ret_tmp_chpl2);
  d_chpl = ret_tmp_chpl2;
  setIndices_chpl(&d_chpl, &ranges_chpl);
  if (definedConst_chpl) {
    chpl__setDomainConst(&d_chpl);
  }
  ret_chpl = d_chpl;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelDomain.chpl:181 */
static void chpl__setDomainConst(_domain_DefaultRectangularDom_1_int64_t_F_chpl * dom_chpl) {
  DefaultRectangularDom_1_int64_t_F_chpl ret_chpl = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDom_chpl coerce_tmp_chpl3 = NULL;
  tmp_chpl15 = (dom_chpl)->_instance;
  ret_chpl = (&tmp_chpl15)->addr;
  coerce_tmp_chpl3 = ((BaseDom_chpl)(ret_chpl));
  chpl_check_nil(coerce_tmp_chpl3, INT64(182), INT32(58));
  (coerce_tmp_chpl3)->definedConst = UINT8(true);
  return;
}

/* ChapelDomain.chpl:212 */
static _domain_DefaultRectangularDom_1_int64_t_F_chpl * chpl__ensureDomainExpr(_domain_DefaultRectangularDom_1_int64_t_F_chpl * x_chpl2) {
  return x_chpl2;
}

/* ChapelDomain.chpl:226 */
static void chpl__ensureDomainExpr2(range_int64_t_bounded_F_chpl _e0_x_chpl,
                                    _domain_DefaultRectangularDom_1_int64_t_F_chpl * _retArg_chpl) {
  _domain_DefaultRectangularDom_1_int64_t_F_chpl call_tmp_chpl36;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl ret_tmp_chpl;
  chpl__buildDomainExpr(_e0_x_chpl, UINT8(true), &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelDomain.chpl:667 */
static void chpl___ASSIGN_(_domain_DefaultRectangularDom_1_int64_t_F_chpl * a_chpl,
                           _domain_DefaultRectangularDom_1_int64_t_F_chpl * b_chpl) {
  DefaultRectangularDom_1_int64_t_F_chpl coerce_tmp_chpl3 = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  tmp_chpl15 = (a_chpl)->_instance;
  coerce_tmp_chpl3 = (&tmp_chpl15)->addr;
  chpl_check_nil(coerce_tmp_chpl3, INT64(678), INT32(58));
  dsiAssignDomain_chpl(coerce_tmp_chpl3, b_chpl, UINT8(false));
  return;
}

/* ChapelDomain.chpl:784 */
static void chpl__coerceMove(chpl___RuntimeTypeInfo * dstType_chpl,
                             _domain_DefaultRectangularDom_1_int64_t_F_chpl * rhs_chpl,
                             chpl_bool definedConst_chpl,
                             _domain_DefaultRectangularDom_1_int64_t_F_chpl * _retArg_chpl) {
  _domain_DefaultRectangularDom_1_int64_t_F_chpl _formal_tmp_rhs_chpl;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl ret_chpl;
  _ref__distribution_DefaultDist_chpl dist_chpl2 = NULL;
  _distribution_DefaultDist_chpl call_tmp_chpl36;
  _distribution_DefaultDist_chpl tmp_chpl15;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl call_tmp_chpl37;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl ret_tmp_chpl;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl lhs_chpl;
  _formal_tmp_rhs_chpl = *(rhs_chpl);
  tmp_chpl15 = (dstType_chpl)->dist;
  call_tmp_chpl36 = tmp_chpl15;
  dist_chpl2 = &call_tmp_chpl36;
  chpl__convertRuntimeTypeToValue2(dist_chpl2, definedConst_chpl, &ret_tmp_chpl);
  call_tmp_chpl37 = ret_tmp_chpl;
  lhs_chpl = call_tmp_chpl37;
  chpl___ASSIGN_(&lhs_chpl, &_formal_tmp_rhs_chpl);
  ret_chpl = lhs_chpl;
  chpl__autoDestroy2(&_formal_tmp_rhs_chpl);
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ChapelDomain.chpl:927 */
static void init_chpl15(chpl____wide__ref__wide__domain_DefaultRectangularDom_1_int64_t_F this_chpl7,
                        int64_t _pid_chpl,
                        chpl____wide_DefaultRectangularDom_1_int64_t_F _instance_chpl,
                        chpl_bool _unowned_chpl) {
  chpl____wide__ref_int64_t chpl_macro_tmp_2106;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_2107;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_2108;
  chpl_macro_tmp_2106.locale = (this_chpl7).locale;
  chpl_macro_tmp_2106.addr = &(((this_chpl7).addr)->_pid);
  chpl_gen_comm_put(((void*)(&_pid_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_2106).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2106).addr, sizeof(int64_t), COMMID(0), INT64(928), INT64(58));
  chpl_macro_tmp_2107.locale = (this_chpl7).locale;
  chpl_macro_tmp_2107.addr = &(((this_chpl7).addr)->_instance);
  chpl_gen_comm_put(((void*)(&_instance_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_2107).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2107).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(1), INT64(929), INT64(58));
  chpl_macro_tmp_2108.locale = (this_chpl7).locale;
  chpl_macro_tmp_2108.addr = &(((this_chpl7).addr)->_unowned);
  chpl_gen_comm_put(((void*)(&_unowned_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_2108).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2108).addr, sizeof(chpl_bool), COMMID(2), INT64(930), INT64(58));
  return;
}

/* ChapelDomain.chpl:933 */
static void init_chpl16(_domain_DefaultRectangularDom_1_int64_t_F_chpl * this_chpl7,
                        DefaultRectangularDom_1_int64_t_F_chpl value_chpl) {
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_2109;
  (this_chpl7)->_pid = INT64(-1);
  chpl_macro_tmp_2109.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2109.addr = value_chpl;
  tmp_chpl15 = chpl_macro_tmp_2109;
  (this_chpl7)->_instance = tmp_chpl15;
  (this_chpl7)->_unowned = UINT8(false);
  return;
}

/* ChapelDomain.chpl:954 */
static void init_chpl17(_domain_DefaultRectangularDom_1_int64_t_F_chpl * this_chpl7,
                        _distribution_DefaultDist_chpl * d_chpl,
                        chpl_bool definedConst_chpl) {
  DefaultRectangularDom_1_int64_t_F_chpl call_tmp_chpl36 = NULL;
  call_tmp_chpl36 = newRectangularDom_chpl2(d_chpl, definedConst_chpl);
  init_chpl16(this_chpl7, call_tmp_chpl36);
  return;
}

/* ChapelDomain.chpl:962 */
static void init_chpl18(_domain_DefaultRectangularDom_1_int64_t_F_chpl * this_chpl7,
                        _distribution_DefaultDist_chpl * d_chpl,
                        _tuple_1_star_range_int64_t_bounded_F_chpl * ranges_chpl,
                        chpl_bool definedConst_chpl) {
  DefaultRectangularDom_1_int64_t_F_chpl call_tmp_chpl36 = NULL;
  call_tmp_chpl36 = newRectangularDom_chpl(d_chpl, ranges_chpl, definedConst_chpl);
  init_chpl16(this_chpl7, call_tmp_chpl36);
  return;
}

/* ChapelDomain.chpl:1018 */
static void chpl__serialize(_domain_DefaultRectangularDom_1_int64_t_F_chpl * this_chpl7,
                            _serialized_domain_1_int64_t_F__tuple_1_star_range_int64_t_bounded_F_T_chpl * _retArg_chpl) {
  DefaultRectangularDom_1_int64_t_F_chpl ret_chpl = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _serialized_domain_1_int64_t_F__tuple_1_star_range_int64_t_bounded_F_T_chpl call_tmp_chpl36;
  _serialized_domain_1_int64_t_F__tuple_1_star_range_int64_t_bounded_F_T_chpl ret_tmp_chpl;
  tmp_chpl15 = (this_chpl7)->_instance;
  ret_chpl = (&tmp_chpl15)->addr;
  chpl_check_nil(ret_chpl, INT64(1020), INT32(58));
  chpl__serialize2(ret_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelDomain.chpl:1027 */
static void chpl__deserialize(chpl___RuntimeTypeInfo * this_chpl7,
                              _serialized_domain_1_int64_t_F__tuple_1_star_range_int64_t_bounded_F_T_chpl * data_chpl,
                              _domain_DefaultRectangularDom_1_int64_t_F_chpl * _retArg_chpl) {
  DefaultRectangularDom_1_int64_t_F_chpl call_tmp_chpl36 = NULL;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl call_tmp_chpl37;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl initTemp_chpl;
  call_tmp_chpl36 = chpl__deserialize2(data_chpl);
  init_chpl16(&initTemp_chpl, call_tmp_chpl36);
  call_tmp_chpl37 = initTemp_chpl;
  *(_retArg_chpl) = call_tmp_chpl37;
  return;
}

/* ChapelDomain.chpl:1033 */
static void _do_destroy_chpl(chpl____wide__ref__wide__domain_DefaultRectangularDom_1_int64_t_F this_chpl7) {
  chpl_bool tmp_chpl15;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F call_tmp_chpl36 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl37;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl67 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_2110;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_2111;
  chpl__class_localson_fn_chpl67_object chpl_macro_tmp_2112;
  chpl_macro_tmp_2110.locale = (this_chpl7).locale;
  chpl_macro_tmp_2110.addr = &(((this_chpl7).addr)->_unowned);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_2110).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2110).addr, sizeof(chpl_bool), COMMID(3), INT64(1034), INT64(58));
  if (! tmp_chpl15) {
    chpl_macro_tmp_2111.locale = (this_chpl7).locale;
    chpl_macro_tmp_2111.addr = &(((this_chpl7).addr)->_instance);
    call_tmp_chpl36 = chpl_macro_tmp_2111;
    chpl_gen_comm_get(((void*)(&tmp_chpl16)), chpl_nodeFromLocaleID((call_tmp_chpl36).locale, INT64(0), INT32(0)), (call_tmp_chpl36).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(4), INT64(1035), INT64(58));
    call_tmp_chpl37 = (&tmp_chpl16)->locale;
    chpl_rmem_consist_release(INT64(1035), INT32(58));
    chpl_gen_comm_get(((void*)(&rvfDerefTmp_chpl)), chpl_nodeFromLocaleID((this_chpl7).locale, INT64(0), INT32(0)), (this_chpl7).addr, sizeof(_domain_DefaultRectangularDom_1_int64_t_F_chpl), COMMID(5), INT64(915), INT64(58));
    isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl37);
    if (isdirect_chpl) {
      on_fn_chpl67(&rvfDerefTmp_chpl);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn_chpl67)(&chpl_macro_tmp_2112));
      chpl_check_nil(_args_foron_fn_chpl, INT64(1035), INT32(58));
      (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl37;
      chpl_check_nil(_args_foron_fn_chpl, INT64(1035), INT32(58));
      (_args_foron_fn_chpl)->_1_rvfDerefTmp = rvfDerefTmp_chpl;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl67_object);
      chpl_taskRunningCntDec(INT64(1035), INT32(58));
      /*** wrapon_fn_chpl67 ***/ chpl_executeOn(call_tmp_chpl37, INT32(74), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(1035), INT32(58));
      chpl_taskRunningCntInc(INT64(1035), INT32(58));
    }
    chpl_rmem_consist_acquire(INT64(1035), INT32(58));
  } else {
  }
  return;
}

/* ChapelDomain.chpl:1035 */
static void wrapon_fn_chpl67(_class_localson_fn_chpl67 c_chpl) {
  _domain_DefaultRectangularDom_1_int64_t_F_chpl _1_rvfDerefTmp_chpl;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl tmp_chpl15;
  chpl_rmem_consist_acquire(INT64(1035), INT32(58));
  chpl_check_nil(c_chpl, INT64(1035), INT32(58));
  tmp_chpl15 = (c_chpl)->_1_rvfDerefTmp;
  _1_rvfDerefTmp_chpl = tmp_chpl15;
  chpl_taskRunningCntInc(INT64(1035), INT32(58));
  on_fn_chpl67(&_1_rvfDerefTmp_chpl);
  chpl_taskRunningCntDec(INT64(1035), INT32(58));
  chpl_rmem_consist_release(INT64(1035), INT32(58));
  return;
}

/* ChapelDomain.chpl:1035 */
static void on_fn_chpl67(_domain_DefaultRectangularDom_1_int64_t_F_chpl * this_chpl7) {
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_2_BaseDom_BaseDist_chpl call_tmp_chpl36;
  chpl____wide_BaseDom coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_2_BaseDom_BaseDist_chpl ret_tmp_chpl;
  chpl____wide_BaseDom tmp_x0_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist tmp_x1_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist distToFree_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist_chpl init_coerce_tmp_chpl3 = NULL;
  chpl____wide_object coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist call_tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom chpl_macro_tmp_2113;
  chpl____wide_BaseDist chpl_macro_tmp_2114;
  chpl____wide_object chpl_macro_tmp_2115;
  chpl____wide__nilType chpl_macro_tmp_2116;
  chpl____wide_object chpl_macro_tmp_2117;
  chpl____wide_object chpl_macro_tmp_2118;
  chpl____wide__nilType chpl_macro_tmp_2119;
  chpl____wide_object chpl_macro_tmp_2120;
  chpl____wide_object chpl_macro_tmp_2121;
  chpl____wide__nilType chpl_macro_tmp_2122;
  chpl____wide_object chpl_macro_tmp_2123;
  coerce_tmp_chpl3 = (this_chpl7)->_instance;
  chpl_macro_tmp_2113.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_2113.addr = ((BaseDom_chpl)((&coerce_tmp_chpl3)->addr));
  coerce_tmp_chpl4 = chpl_macro_tmp_2113;
  chpl_check_nil((&coerce_tmp_chpl4)->addr, INT64(1041), INT32(58));
  remove_chpl2(coerce_tmp_chpl4, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  tmp_x0_chpl = (&call_tmp_chpl36)->x0;
  tmp_x1_chpl = (&call_tmp_chpl36)->x1;
  init_coerce_tmp_chpl3 = ((BaseDist_chpl)(nil));
  chpl_macro_tmp_2114.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2114.addr = init_coerce_tmp_chpl3;
  distToFree_chpl = chpl_macro_tmp_2114;
  chpl_macro_tmp_2115.locale = (&tmp_x1_chpl)->locale;
  chpl_macro_tmp_2115.addr = ((object_chpl)((&tmp_x1_chpl)->addr));
  coerce_tmp_chpl5 = chpl_macro_tmp_2115;
  chpl_macro_tmp_2116.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2116.addr = nil;
  chpl_macro_tmp_2117.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2117.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_2117;
  if (((&coerce_tmp_chpl5)->addr != (&tmp_chpl15)->addr) || ((!(! (&coerce_tmp_chpl5)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl5)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl15)->locale, INT64(0), INT32(0))))) {
    chpl_check_nil((&tmp_x1_chpl)->addr, INT64(1044), INT32(58));
    call_tmp_chpl37 = remove_chpl(tmp_x1_chpl);
    distToFree_chpl = call_tmp_chpl37;
  }
  chpl_macro_tmp_2118.locale = (&tmp_x0_chpl)->locale;
  chpl_macro_tmp_2118.addr = ((object_chpl)((&tmp_x0_chpl)->addr));
  coerce_tmp_chpl6 = chpl_macro_tmp_2118;
  chpl_macro_tmp_2119.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2119.addr = nil;
  chpl_macro_tmp_2120.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2120.addr = NULL;
  tmp_chpl16 = chpl_macro_tmp_2120;
  if (((&coerce_tmp_chpl6)->addr != (&tmp_chpl16)->addr) || ((!(! (&coerce_tmp_chpl6)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl6)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl16)->locale, INT64(0), INT32(0))))) {
    _delete_dom_chpl(coerce_tmp_chpl3, UINT8(false));
  }
  chpl_macro_tmp_2121.locale = (&distToFree_chpl)->locale;
  chpl_macro_tmp_2121.addr = ((object_chpl)((&distToFree_chpl)->addr));
  coerce_tmp_chpl7 = chpl_macro_tmp_2121;
  chpl_macro_tmp_2122.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2122.addr = nil;
  chpl_macro_tmp_2123.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2123.addr = NULL;
  tmp_chpl17 = chpl_macro_tmp_2123;
  if (((&coerce_tmp_chpl7)->addr != (&tmp_chpl17)->addr) || ((!(! (&coerce_tmp_chpl7)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl7)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl17)->locale, INT64(0), INT32(0))))) {
    _delete_dist_chpl(distToFree_chpl, UINT8(false));
  }
  return;
}

/* ChapelDomain.chpl:1060 */
static void deinit_chpl13(_domain_DefaultRectangularDom_1_int64_t_F_chpl * this_chpl7) {
  chpl____wide__ref__wide__domain_DefaultRectangularDom_1_int64_t_F tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_2124;
  chpl_macro_tmp_2124.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2124.addr = this_chpl7;
  tmp_chpl15 = chpl_macro_tmp_2124;
  _do_destroy_chpl(tmp_chpl15);
  return;
}

/* ChapelDomain.chpl:1066 */
static void dist_chpl(_domain_DefaultRectangularDom_1_int64_t_F_chpl * this_chpl7,
                      _distribution_DefaultDist_chpl * _retArg_chpl) {
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _distribution_DefaultDist_chpl call_tmp_chpl36;
  chpl____wide_DefaultDist coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  _distribution_DefaultDist_chpl ret_tmp_chpl;
  chpl____wide__ref__wide_DefaultDist chpl_macro_tmp_2125;
  ret_chpl = (this_chpl7)->_instance;
  coerce_tmp_chpl3 = ret_chpl;
  chpl_check_nil((&coerce_tmp_chpl3)->addr, INT64(1066), INT32(58));
  chpl_macro_tmp_2125.locale = (&coerce_tmp_chpl3)->locale;
  chpl_macro_tmp_2125.addr = &(((&coerce_tmp_chpl3)->addr)->dist);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID((chpl_macro_tmp_2125).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2125).addr, sizeof(chpl____wide_DefaultDist), COMMID(6), INT64(1066), INT64(58));
  _getDistribution_chpl(coerce_tmp_chpl4, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

/* ChapelDomain.chpl:1152 */
static void this_chpl(_domain_DefaultRectangularDom_1_int64_t_F_chpl * this_chpl7,
                      range_int64_t_bounded_F_chpl _e0_ranges_chpl,
                      _domain_DefaultRectangularDom_1_int64_t_F_chpl * _retArg_chpl) {
  _tuple_1_star_range_int64_t_bounded_F_chpl r_chpl;
  _tuple_1_star_range_int64_t_bounded_F_chpl ret_tmp_chpl;
  range_int64_t_bounded_F_chpl tup_x0_chpl;
  range_int64_t_bounded_F_chpl elt_x0_chpl;
  DefaultRectangularDom_1_int64_t_F_chpl ret_chpl = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl call_tmp_chpl36;
  range_int64_t_bounded_F_chpl ret_tmp_chpl2;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F_chpl call_tmp_chpl37;
  range_int64_t_bounded_F_chpl ret_tmp_chpl3;
  _distribution_DefaultDist_chpl call_tmp_chpl38;
  _distribution_DefaultDist_chpl ret_tmp_chpl4;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl call_tmp_chpl39;
  _domain_DefaultRectangularDom_1_int64_t_F_chpl initTemp_chpl;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_2126;
  init_chpl32(&elt_x0_chpl);
  tup_x0_chpl = elt_x0_chpl;
  *(ret_tmp_chpl + INT64(0)) = tup_x0_chpl;
  *(r_chpl + INT64(0)) = *(ret_tmp_chpl + INT64(0));
  tmp_chpl15 = (this_chpl7)->_instance;
  ret_chpl = (&tmp_chpl15)->addr;
  chpl_macro_tmp_2126.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2126.addr = ret_chpl;
  tmp_chpl16 = chpl_macro_tmp_2126;
  chpl_check_nil((&tmp_chpl16)->addr, INT64(1160), INT32(58));
  dsiDim_chpl2(tmp_chpl16, &ret_tmp_chpl2);
  call_tmp_chpl36 = ret_tmp_chpl2;
  this_chpl2(call_tmp_chpl36, _e0_ranges_chpl, &ret_tmp_chpl3);
  call_tmp_chpl37 = ret_tmp_chpl3;
  *(r_chpl + INT64(0)) = call_tmp_chpl37;
  dist_chpl(this_chpl7, &ret_tmp_chpl4);
  call_tmp_chpl38 = ret_tmp_chpl4;
  init_chpl18(&initTemp_chpl, &call_tmp_chpl38, &r_chpl, UINT8(false));
  call_tmp_chpl39 = initTemp_chpl;
  chpl__autoDestroy(&call_tmp_chpl38);
  *(_retArg_chpl) = call_tmp_chpl39;
  return;
}

/* ChapelDomain.chpl:1239 */
static void dims_chpl(_domain_DefaultRectangularDom_1_int64_t_F_chpl * this_chpl7,
                      _tuple_1_star_range_int64_t_bounded_F_chpl * _retArg_chpl) {
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl36;
  _tuple_1_star_range_int64_t_bounded_F_chpl ret_tmp_chpl;
  ret_chpl = (this_chpl7)->_instance;
  chpl_check_nil((&ret_chpl)->addr, INT64(1239), INT32(58));
  dsiDims_chpl(ret_chpl, &ret_tmp_chpl);
  *(call_tmp_chpl36 + INT64(0)) = *(ret_tmp_chpl + INT64(0));
  *(*(_retArg_chpl) + INT64(0)) = *(call_tmp_chpl36 + INT64(0));
  return;
}

/* ChapelDomain.chpl:1297 */
static void buildArray_chpl(_domain_DefaultRectangularDom_1_int64_t_F_chpl * this_chpl7,
                            _array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl * _retArg_chpl) {
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl call_tmp_chpl36 = NULL;
  DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl x_chpl2 = NULL;
  _array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl call_tmp_chpl37;
  _array_DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl ret_tmp_chpl;
  ret_chpl = (this_chpl7)->_instance;
  chpl_check_nil((&ret_chpl)->addr, INT64(1328), INT32(58));
  call_tmp_chpl36 = dsiBuildArray_chpl(ret_chpl);
  x_chpl2 = call_tmp_chpl36;
  help_chpl(this_chpl7, &x_chpl2);
  chpl_incRefCountsForDomainsInArrayEltTypes(((BaseArr_chpl)(call_tmp_chpl36)));
  _newArray_chpl(call_tmp_chpl36, &ret_tmp_chpl);
  call_tmp_chpl37 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl37;
  return;
}

/* ChapelDomain.chpl:1330 */
static void help_chpl(_domain_DefaultRectangularDom_1_int64_t_F_chpl * this_chpl7,
                      DefaultRectangularArr_1_int64_t_F_locale_int64_t_chpl * x_chpl2) {
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseArr_chpl coerce_tmp_chpl4 = NULL;
  chpl_localeID_t call_tmp_chpl36;
  chpl_bool isdirect_chpl;
  chpl____wide_BaseArr tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl64 _args_foron_fn_chpl = NULL;
  chpl____wide_BaseArr tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t _args_sizeon_fn_chpl;
  chpl____wide_BaseDom chpl_macro_tmp_2127;
  chpl____wide_BaseArr chpl_macro_tmp_2128;
  chpl__class_localson_fn_chpl64_object chpl_macro_tmp_2129;
  chpl____wide_BaseArr chpl_macro_tmp_2130;
  ret_chpl = (this_chpl7)->_instance;
  chpl_macro_tmp_2127.locale = (&ret_chpl)->locale;
  chpl_macro_tmp_2127.addr = ((BaseDom_chpl)((&ret_chpl)->addr));
  coerce_tmp_chpl3 = chpl_macro_tmp_2127;
  coerce_tmp_chpl4 = ((BaseArr_chpl)(*(x_chpl2)));
  call_tmp_chpl36 = (&coerce_tmp_chpl3)->locale;
  chpl_rmem_consist_release(INT64(1331), INT32(58));
  isdirect_chpl = chpl_doDirectExecuteOn(call_tmp_chpl36);
  if (isdirect_chpl) {
    chpl_macro_tmp_2128.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2128.addr = coerce_tmp_chpl4;
    tmp_chpl15 = chpl_macro_tmp_2128;
    on_fn_chpl64(coerce_tmp_chpl3, tmp_chpl15);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl64)(&chpl_macro_tmp_2129));
    chpl_check_nil(_args_foron_fn_chpl, INT64(1331), INT32(58));
    (_args_foron_fn_chpl)->_0_tmp = call_tmp_chpl36;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1331), INT32(58));
    (_args_foron_fn_chpl)->_1_this = coerce_tmp_chpl3;
    chpl_macro_tmp_2130.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2130.addr = coerce_tmp_chpl4;
    tmp_chpl16 = chpl_macro_tmp_2130;
    chpl_check_nil(_args_foron_fn_chpl, INT64(1331), INT32(58));
    (_args_foron_fn_chpl)->_2_x = tmp_chpl16;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    _args_sizeon_fn_chpl = sizeof(chpl__class_localson_fn_chpl64_object);
    chpl_taskRunningCntDec(INT64(1331), INT32(58));
    /*** wrapon_fn_chpl64 ***/ chpl_executeOn(call_tmp_chpl36, INT32(71), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), _args_sizeon_fn_chpl, INT64(310), INT32(31));
    chpl_taskRunningCntInc(INT64(1331), INT32(58));
  }
  chpl_rmem_consist_acquire(INT64(1331), INT32(58));
  return;
}

/* ChapelDomain.chpl:1942 */
static int64_t size_chpl(chpl____wide__ref__wide__domain_DefaultRectangularDom_1_int64_t_F this_chpl7) {
  int64_t call_tmp_chpl36;
  call_tmp_chpl36 = sizeAs_chpl(this_chpl7);
  return call_tmp_chpl36;
}

/* ChapelDomain.chpl:1947 */
static int64_t sizeAs_chpl(chpl____wide__ref__wide__domain_DefaultRectangularDom_1_int64_t_F this_chpl7) {
  string_chpl local__str_literal_242_chpl;
  string_chpl local__str_literal_1552_chpl;
  string_chpl local__str_literal_3415_chpl;
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl36;
  string_chpl error_chpl;
  string_chpl call_tmp_chpl37;
  string_chpl ret_tmp_chpl;
  string_chpl call_tmp_chpl38;
  string_chpl ret_tmp_chpl2;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl39;
  string_chpl ret_tmp_chpl3;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string_chpl i_x_chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_2131;
  chpl____wide__ref_string chpl_macro_tmp_2132;
  chpl____wide__ref_string chpl_macro_tmp_2133;
  chpl____wide__ref_string chpl_macro_tmp_2134;
  chpl____wide__ref_string chpl_macro_tmp_2135;
  chpl____wide__ref_string chpl_macro_tmp_2136;
  chpl____wide__ref_string chpl_macro_tmp_2137;
  local__str_literal_242_chpl = _str_literal_242_chpl /* "'" */;
  local__str_literal_1552_chpl = _str_literal_1552_chpl /* " for: '" */;
  local__str_literal_3415_chpl = _str_literal_3415_chpl /* ".size query exceeds max(int(64))" */;
  chpl_macro_tmp_2131.locale = (this_chpl7).locale;
  chpl_macro_tmp_2131.addr = &(((this_chpl7).addr)->_instance);
  chpl_gen_comm_get(((void*)(&ret_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_2131).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2131).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(7), INT64(1949), INT64(58));
  chpl_check_nil((&ret_chpl)->addr, INT64(1949), INT32(58));
  call_tmp_chpl36 = dsiNumIndices_chpl(ret_chpl);
  if (call_tmp_chpl36 > INT64(9223372036854775807)) {
    error_chpl = local__str_literal_3415_chpl;
    chpl___COLON_2(this_chpl7, &ret_tmp_chpl);
    call_tmp_chpl37 = ret_tmp_chpl;
    chpl_macro_tmp_2132.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2132.addr = &call_tmp_chpl37;
    tmp_chpl15 = chpl_macro_tmp_2132;
    chpl___PLUS_(&local__str_literal_1552_chpl, tmp_chpl15, &ret_tmp_chpl2);
    call_tmp_chpl38 = ret_tmp_chpl2;
    chpl_macro_tmp_2133.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2133.addr = &local__str_literal_242_chpl;
    tmp_chpl16 = chpl_macro_tmp_2133;
    chpl___PLUS_(&call_tmp_chpl38, tmp_chpl16, &ret_tmp_chpl3);
    call_tmp_chpl39 = ret_tmp_chpl3;
    chpl___PLUS__ASSIGN_(&error_chpl, &call_tmp_chpl39);
    i_x_chpl = &call_tmp_chpl39;
    chpl_macro_tmp_2134.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2134.addr = i_x_chpl;
    tmp_chpl17 = chpl_macro_tmp_2134;
    deinit_chpl42(tmp_chpl17);
    i_x_chpl2 = &call_tmp_chpl38;
    chpl_macro_tmp_2135.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2135.addr = i_x_chpl2;
    tmp_chpl18 = chpl_macro_tmp_2135;
    deinit_chpl42(tmp_chpl18);
    i_x_chpl3 = &call_tmp_chpl37;
    chpl_macro_tmp_2136.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2136.addr = i_x_chpl3;
    tmp_chpl19 = chpl_macro_tmp_2136;
    deinit_chpl42(tmp_chpl19);
    boundsCheckHalt_chpl(&error_chpl, INT64(1955), INT32(58));
    i_x_chpl4 = &error_chpl;
    chpl_macro_tmp_2137.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2137.addr = i_x_chpl4;
    tmp_chpl20 = chpl_macro_tmp_2137;
    deinit_chpl42(tmp_chpl20);
  }
  return call_tmp_chpl36;
}

/* ChapelDomain.chpl:1947 */
static uint64_t sizeAs_chpl2(_domain_DefaultRectangularDom_1_int64_t_F_chpl * this_chpl7) {
  DefaultRectangularDom_1_int64_t_F_chpl ret_chpl = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl36;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  uint64_t call_tmp_chpl37;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_2138;
  tmp_chpl15 = (this_chpl7)->_instance;
  ret_chpl = (&tmp_chpl15)->addr;
  chpl_macro_tmp_2138.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2138.addr = ret_chpl;
  tmp_chpl16 = chpl_macro_tmp_2138;
  chpl_check_nil((&tmp_chpl16)->addr, INT64(1949), INT32(58));
  call_tmp_chpl36 = dsiNumIndices_chpl(tmp_chpl16);
  call_tmp_chpl37 = ((uint64_t)(call_tmp_chpl36));
  return call_tmp_chpl37;
}

/* ChapelDomain.chpl:1962 */
static int64_t low_chpl(_domain_DefaultRectangularDom_1_int64_t_F_chpl * this_chpl7) {
  DefaultRectangularDom_1_int64_t_F_chpl ret_chpl = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl36;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_2139;
  tmp_chpl15 = (this_chpl7)->_instance;
  ret_chpl = (&tmp_chpl15)->addr;
  chpl_macro_tmp_2139.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2139.addr = ret_chpl;
  tmp_chpl16 = chpl_macro_tmp_2139;
  chpl_check_nil((&tmp_chpl16)->addr, INT64(1962), INT32(58));
  call_tmp_chpl36 = dsiLow_chpl(tmp_chpl16);
  return call_tmp_chpl36;
}

/* ChapelDomain.chpl:1966 */
static int64_t stride_chpl(_domain_DefaultRectangularDom_1_int64_t_F_chpl * this_chpl7) {
  DefaultRectangularDom_1_int64_t_F_chpl ret_chpl = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl36;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_2140;
  tmp_chpl15 = (this_chpl7)->_instance;
  ret_chpl = (&tmp_chpl15)->addr;
  chpl_macro_tmp_2140.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2140.addr = ret_chpl;
  tmp_chpl16 = chpl_macro_tmp_2140;
  chpl_check_nil((&tmp_chpl16)->addr, INT64(1966), INT32(58));
  call_tmp_chpl36 = dsiStride_chpl(tmp_chpl16);
  return call_tmp_chpl36;
}

/* ChapelDomain.chpl:1987 */
static chpl_bool contains_chpl(_domain_DefaultRectangularDom_1_int64_t_F_chpl * this_chpl7,
                               _tuple_1_star_int64_t_chpl * idx_chpl) {
  DefaultRectangularDom_1_int64_t_F_chpl ret_chpl = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t_chpl call_tmp_chpl36;
  _tuple_1_star_int64_t_chpl ret_tmp_chpl;
  chpl_bool call_tmp_chpl37;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_2141;
  tmp_chpl15 = (this_chpl7)->_instance;
  ret_chpl = (&tmp_chpl15)->addr;
  _makeIndexTuple_chpl(idx_chpl, &ret_tmp_chpl);
  *(call_tmp_chpl36 + INT64(0)) = *(ret_tmp_chpl + INT64(0));
  chpl_macro_tmp_2141.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2141.addr = ret_chpl;
  tmp_chpl16 = chpl_macro_tmp_2141;
  chpl_check_nil((&tmp_chpl16)->addr, INT64(1989), INT32(58));
  call_tmp_chpl37 = dsiMember_chpl(tmp_chpl16, &call_tmp_chpl36);
  return call_tmp_chpl37;
}

/* ChapelDomain.chpl:2313 */
static void setIndices_chpl(_domain_DefaultRectangularDom_1_int64_t_F_chpl * this_chpl7,
                            _tuple_1_star_range_int64_t_bounded_F_chpl * x_chpl2) {
  DefaultRectangularDom_1_int64_t_F_chpl ret_chpl = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  tmp_chpl15 = (this_chpl7)->_instance;
  ret_chpl = (&tmp_chpl15)->addr;
  chpl_check_nil(ret_chpl, INT64(2314), INT32(58));
  dsiSetIndices_chpl(ret_chpl, x_chpl2);
  return;
}

/* ChapelDomain.chpl:2321 */
static void getIndices_chpl(_domain_DefaultRectangularDom_1_int64_t_F_chpl * this_chpl7,
                            _tuple_1_star_range_int64_t_bounded_F_chpl * _retArg_chpl) {
  DefaultRectangularDom_1_int64_t_F_chpl ret_chpl = NULL;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_range_int64_t_bounded_F_chpl call_tmp_chpl36;
  _tuple_1_star_range_int64_t_bounded_F_chpl ret_tmp_chpl;
  tmp_chpl15 = (this_chpl7)->_instance;
  ret_chpl = (&tmp_chpl15)->addr;
  chpl_check_nil(ret_chpl, INT64(2322), INT32(58));
  dsiGetIndices_chpl(ret_chpl, &ret_tmp_chpl);
  *(call_tmp_chpl36 + INT64(0)) = *(ret_tmp_chpl + INT64(0));
  *(*(_retArg_chpl) + INT64(0)) = *(call_tmp_chpl36 + INT64(0));
  return;
}

/* ChapelDomain.chpl:2513 */
static void chpl___COLON_2(chpl____wide__ref__wide__domain_DefaultRectangularDom_1_int64_t_F val_chpl,
                           string_chpl * _retArg_chpl) {
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  string_chpl call_tmp_chpl36;
  string_chpl ret_tmp_chpl;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_2142;
  chpl_macro_tmp_2142.locale = (val_chpl).locale;
  chpl_macro_tmp_2142.addr = &(((val_chpl).addr)->_instance);
  chpl_gen_comm_get(((void*)(&ret_chpl)), chpl_nodeFromLocaleID((chpl_macro_tmp_2142).locale, INT64(0), INT32(0)), (chpl_macro_tmp_2142).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), COMMID(8), INT64(2516), INT64(58));
  chpl_check_nil((&ret_chpl)->addr, INT64(2516), INT32(58));
  doiToString_chpl(ret_chpl, &ret_tmp_chpl);
  call_tmp_chpl36 = ret_tmp_chpl;
  *(_retArg_chpl) = call_tmp_chpl36;
  return;
}

