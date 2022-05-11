/* ChapelUtil.chpl:25 */
static void chpl__init_ChapelUtil(int64_t _ln_chpl,
                                  int32_t _fn_chpl) {
  _ref_int32_t_chpl refIndentLevel_chpl = NULL;
  if (chpl__init_ChapelUtil_p) {
    goto _exit_chpl__init_ChapelUtil_chpl;
  }
  printModuleInit_chpl("%*s\n", "ChapelUtil", INT64(10));
  refIndentLevel_chpl = &moduleInitLevel_chpl;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_ChapelUtil_p = UINT8(true);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_ChapelUtil_chpl:;
  return;
}

/* ChapelUtil.chpl:32 */
static chpl_bool safeAdd_chpl(int64_t a_chpl,
                              int64_t b_chpl) {
  chpl_bool ret_chpl;
  if (a_chpl < INT64(0)) {
    if (b_chpl >= INT64(0)) {
      ret_chpl = UINT8(true);
      goto _end_safeAdd_chpl;
    } else {
      if (b_chpl < ((int64_t)((-INT64(9223372036854775807) - INT64(1) - a_chpl)))) {
        ret_chpl = UINT8(false);
        goto _end_safeAdd_chpl;
      } else {
        ret_chpl = UINT8(true);
        goto _end_safeAdd_chpl;
      }
    }
  } else {
    if (b_chpl <= INT64(0)) {
      ret_chpl = UINT8(true);
      goto _end_safeAdd_chpl;
    } else {
      if (b_chpl > ((int64_t)((INT64(9223372036854775807) - a_chpl)))) {
        ret_chpl = UINT8(false);
        goto _end_safeAdd_chpl;
      } else {
        ret_chpl = UINT8(true);
        goto _end_safeAdd_chpl;
      }
    }
  }
  _end_safeAdd_chpl:;
  return ret_chpl;
}

/* ChapelUtil.chpl:105 */
static chpl_bool safeMul_chpl(uint64_t a_chpl,
                              uint64_t b_chpl) {
  string_chpl local__str_literal_42_chpl;
  chpl_bool ret_chpl;
  chpl_bool tmp_chpl15;
  chpl_bool tmp_chpl16;
  chpl_bool tmp_chpl17;
  uint64_t call_tmp_chpl36;
  chpl_bool tmp_chpl18;
  uint64_t call_tmp_chpl37;
  chpl_bool tmp_chpl19;
  chpl_bool tmp_chpl20;
  uint64_t call_tmp_chpl38;
  chpl_bool tmp_chpl21;
  chpl_bool tmp_chpl22;
  chpl_bool tmp_chpl23;
  uint64_t call_tmp_chpl39;
  local__str_literal_42_chpl = _str_literal_42_chpl /* "Attempt to divide by zero" */;
  if (INT64(0) < INT64(0)) {
    tmp_chpl15 = UINT8(true);
  } else {
    tmp_chpl15 = (a_chpl > ((uint64_t)(INT64(0))));
  }
  if (tmp_chpl15) {
    if (INT64(0) < INT64(0)) {
      tmp_chpl16 = UINT8(true);
    } else {
      tmp_chpl16 = (b_chpl > ((uint64_t)(INT64(0))));
    }
    if (tmp_chpl16) {
      if (! (INT64(0) < INT64(0))) {
        tmp_chpl17 = (b_chpl == ((uint64_t)(INT64(0))));
      } else {
        tmp_chpl17 = UINT8(false);
      }
      if (tmp_chpl17) {
        halt_chpl(&local__str_literal_42_chpl, INT64(110), INT32(40));
      }
      call_tmp_chpl36 = (UINT64(18446744073709551615) / b_chpl);
      if (a_chpl > call_tmp_chpl36) {
        ret_chpl = UINT8(false);
        goto _end_safeMul_chpl;
      }
    } else {
      if (! (INT64(0) < INT64(0))) {
        tmp_chpl18 = (a_chpl == ((uint64_t)(INT64(0))));
      } else {
        tmp_chpl18 = UINT8(false);
      }
      if (tmp_chpl18) {
        halt_chpl(&local__str_literal_42_chpl, INT64(113), INT32(40));
      }
      call_tmp_chpl37 = (UINT64(0) / a_chpl);
      if (b_chpl < call_tmp_chpl37) {
        ret_chpl = UINT8(false);
        goto _end_safeMul_chpl;
      }
    }
  } else {
    if (INT64(0) < INT64(0)) {
      tmp_chpl19 = UINT8(true);
    } else {
      tmp_chpl19 = (b_chpl > ((uint64_t)(INT64(0))));
    }
    if (tmp_chpl19) {
      if (! (INT64(0) < INT64(0))) {
        tmp_chpl20 = (b_chpl == ((uint64_t)(INT64(0))));
      } else {
        tmp_chpl20 = UINT8(false);
      }
      if (tmp_chpl20) {
        halt_chpl(&local__str_literal_42_chpl, INT64(118), INT32(40));
      }
      call_tmp_chpl38 = (UINT64(0) / b_chpl);
      if (a_chpl < call_tmp_chpl38) {
        ret_chpl = UINT8(false);
        goto _end_safeMul_chpl;
      }
    } else {
      if (INT64(0) < INT64(0)) {
        tmp_chpl21 = UINT8(true);
      } else {
        tmp_chpl21 = (a_chpl != ((uint64_t)(INT64(0))));
      }
      if (tmp_chpl21) {
        if (! (INT64(0) < INT64(0))) {
          tmp_chpl23 = (a_chpl == ((uint64_t)(INT64(0))));
        } else {
          tmp_chpl23 = UINT8(false);
        }
        if (tmp_chpl23) {
          halt_chpl(&local__str_literal_42_chpl, INT64(121), INT32(40));
        }
        call_tmp_chpl39 = (UINT64(18446744073709551615) / a_chpl);
        tmp_chpl22 = (b_chpl < call_tmp_chpl39);
      } else {
        tmp_chpl22 = UINT8(false);
      }
      if (tmp_chpl22) {
        ret_chpl = UINT8(false);
        goto _end_safeMul_chpl;
      }
    }
  }
  ret_chpl = UINT8(true);
  _end_safeMul_chpl:;
  return ret_chpl;
}

/* ChapelUtil.chpl:184 */
static void chpl_addModule(c_string moduleName_chpl,
                           c_fn_ptr deinitFun_chpl) {
  chpl_ModuleDeinit new_temp_chpl = NULL;
  chpl____wide_chpl_ModuleDeinit tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_chpl_ModuleDeinit tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_chpl_ModuleDeinit chpl_macro_tmp_1772;
  chpl____wide_chpl_ModuleDeinit chpl_macro_tmp_1773;
  chpl____wide__ref__wide_chpl_ModuleDeinit chpl_macro_tmp_1774;
  chpl_check_nil((&chpl_moduleDeinitFuns)->addr, INT64(2337), INT32(2));
  chpl_macro_tmp_1772.locale = (&chpl_moduleDeinitFuns)->locale;
  chpl_macro_tmp_1772.addr = &(((&chpl_moduleDeinitFuns)->addr)->value);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1772).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1772).addr, sizeof(chpl____wide_chpl_ModuleDeinit), COMMID(8), INT64(2337), INT64(2));
  new_temp_chpl = _new_chpl3(moduleName_chpl, deinitFun_chpl, tmp_chpl15, INT64(186), INT32(40));
  chpl_macro_tmp_1773.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1773.addr = new_temp_chpl;
  tmp_chpl16 = chpl_macro_tmp_1773;
  chpl_check_nil((&chpl_moduleDeinitFuns)->addr, INT64(185), INT32(40));
  chpl_macro_tmp_1774.locale = (&chpl_moduleDeinitFuns)->locale;
  chpl_macro_tmp_1774.addr = &(((&chpl_moduleDeinitFuns)->addr)->value);
  chpl_gen_comm_put(((void*)(&tmp_chpl16)), chpl_nodeFromLocaleID((chpl_macro_tmp_1774).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1774).addr, sizeof(chpl____wide_chpl_ModuleDeinit), COMMID(0), INT64(185), INT64(40));
  return;
}

/* ChapelUtil.chpl:189 */
void chpl_deinitModules(void) {
  string_chpl local__str_literal_75_chpl;
  chpl____wide_chpl_ModuleDeinit prev_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_chpl_ModuleDeinit tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl16;
  chpl____wide_object coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_chpl_ModuleDeinit curr_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_chpl_ModuleDeinit coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  c_fn_ptr tmp_chpl19;
  chpl____wide_chpl_ModuleDeinit coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_chpl_ModuleDeinit coerce_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_ModuleDeinit tmp_chpl21 = NULL;
  chpl____wide_chpl_ModuleDeinit tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_chpl_ModuleDeinit chpl_macro_tmp_1775;
  chpl____wide_object chpl_macro_tmp_1776;
  chpl____wide__nilType chpl_macro_tmp_1777;
  chpl____wide_object chpl_macro_tmp_1778;
  chpl____wide_object chpl_macro_tmp_1779;
  chpl____wide__nilType chpl_macro_tmp_1780;
  chpl____wide_object chpl_macro_tmp_1781;
  chpl____wide__ref_c_fn_ptr chpl_macro_tmp_1782;
  chpl____wide__ref__wide_chpl_ModuleDeinit chpl_macro_tmp_1783;
  chpl____wide_object chpl_macro_tmp_1784;
  chpl____wide__nilType chpl_macro_tmp_1785;
  chpl____wide_object chpl_macro_tmp_1786;
  chpl____wide_chpl_ModuleDeinit chpl_macro_tmp_1787;
  chpl____wide__ref__wide_chpl_ModuleDeinit chpl_macro_tmp_1788;
  local__str_literal_75_chpl = _str_literal_75_chpl /* "argument to ! is nil" */;
  chpl_check_nil((&chpl_moduleDeinitFuns)->addr, INT64(2337), INT32(2));
  chpl_macro_tmp_1775.locale = (&chpl_moduleDeinitFuns)->locale;
  chpl_macro_tmp_1775.addr = &(((&chpl_moduleDeinitFuns)->addr)->value);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID((chpl_macro_tmp_1775).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1775).addr, sizeof(chpl____wide_chpl_ModuleDeinit), COMMID(9), INT64(2337), INT64(2));
  prev_chpl = tmp_chpl15;
  chpl_macro_tmp_1776.locale = (&tmp_chpl15)->locale;
  chpl_macro_tmp_1776.addr = ((object_chpl)((&tmp_chpl15)->addr));
  coerce_tmp_chpl3 = chpl_macro_tmp_1776;
  chpl_macro_tmp_1777.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1777.addr = nil;
  chpl_macro_tmp_1778.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1778.addr = NULL;
  tmp_chpl17 = chpl_macro_tmp_1778;
  tmp_chpl16 = (((&coerce_tmp_chpl3)->addr != (&tmp_chpl17)->addr) || ((!(! (&coerce_tmp_chpl3)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl3)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl17)->locale, INT64(0), INT32(0)))));
  while (tmp_chpl16) {
    chpl_macro_tmp_1779.locale = (&prev_chpl)->locale;
    chpl_macro_tmp_1779.addr = ((object_chpl)((&prev_chpl)->addr));
    coerce_tmp_chpl4 = chpl_macro_tmp_1779;
    chpl_macro_tmp_1780.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1780.addr = nil;
    chpl_macro_tmp_1781.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1781.addr = NULL;
    tmp_chpl18 = chpl_macro_tmp_1781;
    if (! (((&coerce_tmp_chpl4)->addr != (&tmp_chpl18)->addr) || ((!(! (&coerce_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl4)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl18)->locale, INT64(0), INT32(0)))))) {
      nilCheckHalt_chpl(&local__str_literal_75_chpl, INT64(198), INT32(40));
    }
    curr_chpl = prev_chpl;
    coerce_tmp_chpl5 = prev_chpl;
    chpl_check_nil((&coerce_tmp_chpl5)->addr, INT64(201), INT32(40));
    chpl_macro_tmp_1782.locale = (&coerce_tmp_chpl5)->locale;
    chpl_macro_tmp_1782.addr = &(((&coerce_tmp_chpl5)->addr)->deinitFun);
    chpl_gen_comm_get(((void*)(&tmp_chpl19)), chpl_nodeFromLocaleID((chpl_macro_tmp_1782).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1782).addr, sizeof(c_fn_ptr), COMMID(1), INT64(201), INT64(40));
    chpl_execute_module_deinit(tmp_chpl19);
    coerce_tmp_chpl6 = prev_chpl;
    chpl_check_nil((&coerce_tmp_chpl6)->addr, INT64(202), INT32(40));
    chpl_macro_tmp_1783.locale = (&coerce_tmp_chpl6)->locale;
    chpl_macro_tmp_1783.addr = &(((&coerce_tmp_chpl6)->addr)->prevModule);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl7)), chpl_nodeFromLocaleID((chpl_macro_tmp_1783).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1783).addr, sizeof(chpl____wide_chpl_ModuleDeinit), COMMID(2), INT64(202), INT64(40));
    prev_chpl = coerce_tmp_chpl7;
    chpl__delete7(curr_chpl);
    chpl_macro_tmp_1784.locale = (&coerce_tmp_chpl7)->locale;
    chpl_macro_tmp_1784.addr = ((object_chpl)((&coerce_tmp_chpl7)->addr));
    coerce_tmp_chpl8 = chpl_macro_tmp_1784;
    chpl_macro_tmp_1785.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1785.addr = nil;
    chpl_macro_tmp_1786.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1786.addr = NULL;
    tmp_chpl20 = chpl_macro_tmp_1786;
    tmp_chpl16 = (((&coerce_tmp_chpl8)->addr != (&tmp_chpl20)->addr) || ((!(! (&coerce_tmp_chpl8)->addr)) && (chpl_nodeFromLocaleID((&coerce_tmp_chpl8)->locale, INT64(0), INT32(0)) != chpl_nodeFromLocaleID((&tmp_chpl20)->locale, INT64(0), INT32(0)))));
  }
  tmp_chpl21 = ((chpl_ModuleDeinit)(nil));
  chpl_macro_tmp_1787.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_1787.addr = tmp_chpl21;
  tmp_chpl22 = chpl_macro_tmp_1787;
  chpl_check_nil((&chpl_moduleDeinitFuns)->addr, INT64(206), INT32(40));
  chpl_macro_tmp_1788.locale = (&chpl_moduleDeinitFuns)->locale;
  chpl_macro_tmp_1788.addr = &(((&chpl_moduleDeinitFuns)->addr)->value);
  chpl_gen_comm_put(((void*)(&tmp_chpl22)), chpl_nodeFromLocaleID((chpl_macro_tmp_1788).locale, INT64(0), INT32(0)), (chpl_macro_tmp_1788).addr, sizeof(chpl____wide_chpl_ModuleDeinit), COMMID(3), INT64(206), INT64(40));
  deallocate_string_literals_buf();
  return;
}

