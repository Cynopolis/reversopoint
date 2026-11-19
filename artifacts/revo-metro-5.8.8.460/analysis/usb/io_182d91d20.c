/* 0x182d91d20 size=0x2f7a
   WaitForSingleObject
*/


void FUN_182d91d20(longlong *param_1)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  DWORD DVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 *puVar19;
  uint *puVar20;
  int iVar21;
  ulonglong *puVar22;
  undefined8 *puVar23;
  uint uVar24;
  longlong *plVar25;
  ulonglong *puVar26;
  ulonglong uVar27;
  LPCRITICAL_SECTION p_Var28;
  ulonglong *puVar29;
  longlong lVar30;
  longlong *plVar31;
  longlong lVar32;
  uint uVar33;
  void *pvVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong *puVar37;
  ulonglong uVar38;
  int iVar39;
  uint uVar40;
  longlong *plVar41;
  bool bVar42;
  ulonglong uVar43;
  bool bVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  uint local_res18;
  longlong *local_res20;
  ulonglong in_stack_fffffffffffffe18;
  longlong *in_stack_fffffffffffffe20;
  uint local_1c0;
  int local_1bc;
  longlong *local_1b8;
  longlong *local_1b0;
  ulonglong local_1a8;
  int local_1a0;
  uint local_19c;
  longlong *local_198;
  ulonglong local_190;
  longlong local_188;
  uint local_180;
  longlong *local_178;
  longlong *local_170;
  longlong *local_168;
  undefined **local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined2 local_144;
  undefined **local_140;
  undefined8 local_138;
  undefined8 local_130;
  int local_128;
  undefined **local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined **local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  int local_e0;
  longlong local_d8;
  undefined **local_c8;
  _RTL_CRITICAL_SECTION local_c0;
  _RTL_CRITICAL_SECTION local_98;
  RTL_CONDITION_VARIABLE local_70;
  int local_68;
  int local_60;
  undefined8 local_5c;
  longlong *local_50;
  
  lVar13 = thunk_FUN_182d8fc10();
  uVar15 = 0;
  param_1[0xa7] = lVar13;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x52c) = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xa9] = 0;
  param_1[0xac] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0xffffffff;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  memset((void *)(*(longlong *)param_1[0xb3] + 0x80),0,0x458);
  plVar31 = (longlong *)**(longlong **)param_1[0xb3];
  if ((*(int *)(param_1[0xb2] + 0x74) != 0) &&
     ((*(int *)((undefined8 *)param_1[0xb3] + 3) != 0 || (*(int *)(param_1[0xb2] + 0x6c) != 0)))) {
    plVar17 = param_1 + 0xbb;
    (**(code **)(*plVar17 + 0x10))(plVar17);
    param_1[0x3ab] = (longlong)plVar17;
    thunk_FUN_182dba780(param_1 + 0x3ab,plVar31);
    thunk_FUN_182d90e10(plVar17);
    thunk_FUN_182f44d30(param_1 + 0x4aa,0x23);
    if (*(int *)(param_1[0xb2] + 0x398) != 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
  }
  if ((*(char *)(param_1[0xb3] + 0x105) != '\0') && (*(int *)(param_1[0xb2] + 0x6c) != 0)) {
    if (*(int *)(param_1[0xb2] + 700) != 0) {
      lVar13 = param_1[0xb1];
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar13 + 0x138f0));
      thunk_FUN_182db8390(param_1[0xb1]);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar13 + 0x138f0));
    }
    lVar13 = param_1[0xb1];
    if ((*(int *)(*(longlong *)(lVar13 + 0x10150) + 0x1fc) == 0) ||
       (*(int *)(*(longlong *)(lVar13 + 0x10150) + 0x2c0) == 0)) {
      thunk_FUN_182db1000(lVar13,param_1 + 0x4aa,param_1 + 0x3ab,param_1 + 0xbb);
    }
    else {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar13 + 0x13b20));
      cVar7 = thunk_FUN_182da8f50(param_1[0xb1]);
      if (cVar7 == '\0') {
        thunk_FUN_182d8f720(param_1[0xb2],&DAT_18393797c,0,"compute commonly RPS failed!\n");
        *(undefined1 *)(param_1[0xb1] + 0x13686) = 1;
      }
      thunk_FUN_182db1000(param_1[0xb1],param_1 + 0x4aa,param_1 + 0x3ab,param_1 + 0xbb);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar13 + 0x13b20));
    }
  }
  lVar13 = *(longlong *)(param_1[0xb1] + 0x10150);
  if ((*(int *)(lVar13 + 0x1fc) != 0) && (*(int *)(lVar13 + 0x2c0) != 0)) {
    *(undefined4 *)(**(longlong **)param_1[0xb3] + 0x8f0) =
         *(undefined4 *)
          ((longlong)*(int *)(param_1[0xb3] + 0x1c) * 0x2b8 + 0x218 +
          *(longlong *)(*(longlong *)(param_1[0xb1] + 0x10160) + 0x870));
  }
  if (((int)plVar31[0x11b] == 1) && (*(char *)(plVar31[1] + 0x14) != '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (((int)plVar31[0x11b] == 0) && (*(char *)(plVar31[1] + 0x15) != '\0')) {
    bVar44 = true;
  }
  else {
    bVar44 = false;
  }
  local_res20 = (longlong *)0x0;
  if (*(longlong *)(param_1[0xb2] + 0x378) == 0) {
LAB_182d92048:
    if ((!bVar1) && (!bVar44)) goto LAB_182d92051;
    if (*(longlong *)(param_1[0xb2] + 0x378) == 0) {
      local_c8 = x265_10bit::BondedTaskGroup::vftable;
      InitializeCriticalSection(&local_c0);
      local_68 = 0;
      InitializeCriticalSection(&local_98);
      InitializeConditionVariable(&local_70);
      local_5c = 0;
      local_60 = 0;
      local_c8 = x265_10bit::FrameEncoder::WeightAnalysis::vftable;
      local_50 = param_1;
      if (param_1[1] == 0) {
LAB_182d92191:
        thunk_FUN_182f7f820(plVar31,param_1[0xb3]);
      }
      else {
        iVar21 = thunk_FUN_182f44810(param_1[1],1,param_1[2],&local_c8);
        local_60 = local_60 + iVar21;
        if (iVar21 == 0) goto LAB_182d92191;
        thunk_FUN_182d99f20(&local_c8);
      }
      local_c8 = x265_10bit::BondedTaskGroup::vftable;
      EnterCriticalSection(&local_98);
      iVar21 = local_68;
      LeaveCriticalSection(&local_98);
      if (local_60 != iVar21) {
        do {
          EnterCriticalSection(&local_98);
          if (local_68 == iVar21) {
            SleepConditionVariableCS(&local_70,&local_98,0xffffffff);
          }
          LeaveCriticalSection(&local_98);
          iVar21 = local_68;
        } while (local_60 != local_68);
      }
      DeleteCriticalSection(&local_98);
      DeleteCriticalSection(&local_c0);
    }
    else {
      plVar17 = plVar31 + 0x46;
      plVar41 = plVar31 + 0x11f;
      uVar27 = uVar15;
      plVar25 = plVar17;
      uVar43 = uVar15;
      do {
        do {
          iVar21 = 1;
          plVar4 = plVar17;
          if (1 < (int)*plVar41) {
            do {
              iVar21 = iVar21 + 1;
              *(int *)((longlong)plVar4 + 0x34) = 1 << ((byte)(int)*local_res20 & 0x1f);
              *(int *)(plVar4 + 6) = (int)*local_res20;
              *(undefined4 *)(plVar4 + 7) = 0;
              *(undefined1 *)((longlong)plVar4 + 0x3c) = 0;
              plVar4 = plVar4 + 6;
            } while (iVar21 < (int)*plVar41);
          }
          lVar13 = *local_res20;
          lVar35 = local_res20[1];
          local_res20 = local_res20 + 2;
          uVar9 = (int)uVar27 + 1;
          *plVar17 = lVar13;
          plVar17[1] = lVar35;
          plVar17 = plVar17 + 2;
          iVar21 = 1;
          if (*(int *)(param_1[0xb2] + 0x3c) != 0) {
            iVar21 = 3;
          }
          uVar27 = (ulonglong)uVar9;
        } while ((int)uVar9 < iVar21);
        uVar9 = (int)uVar43 + 1;
        uVar43 = (ulonglong)uVar9;
        plVar41 = (longlong *)((longlong)plVar41 + 4);
        plVar17 = plVar25 + 0x60;
        uVar27 = uVar15;
        plVar25 = plVar17;
      } while ((int)uVar9 < (int)(2 - (uint)((int)plVar31[0x11b] != 0)));
    }
  }
  else {
    if ((bVar1) || (bVar44)) {
      local_res20 = *(longlong **)(param_1[0xb3] + 0x4320);
      goto LAB_182d92048;
    }
LAB_182d92051:
    thunk_FUN_182f3ae00(plVar31);
  }
  if ((*(longlong *)(param_1[0xb2] + 0x370) != 0) && ((bVar1 || (bVar44)))) {
    local_res20 = *(longlong **)(param_1[0xb3] + 0x4320);
  }
  local_190 = 0;
  if ((int)plVar31[0x11b] == 1) {
    local_1a8 = 1;
  }
  else {
    local_1a8 = uVar15;
    if ((int)plVar31[0x11b] == 0) {
      local_1a8 = 2;
    }
    if (local_1a8 == 0) goto LAB_182d9246b;
  }
  local_res18 = 0;
  local_1b8 = plVar31 + 0x46;
  local_188 = 0;
  plVar17 = plVar31 + 0x24;
  plVar41 = plVar31 + 0x11f;
  plVar25 = local_res20;
  do {
    lVar13 = local_188;
    uVar27 = 0;
    local_1b0 = plVar17;
    if (0 < (int)*plVar41) {
      local_198 = (longlong *)((longlong)(int)uVar15 * 0x11);
      uVar43 = uVar27;
      do {
        plVar25 = (longlong *)0x0;
        iVar21 = (int)uVar27;
        if (((bVar1) || (bVar44)) &&
           (*(char *)((longlong)plVar31 + (lVar13 + uVar43) * 0x30 + 0x23c) != '\0')) {
          plVar25 = plVar31 + ((longlong)(int)uVar15 * 0x10 + (longlong)iVar21) * 6 + 0x46;
        }
        lVar35 = *(longlong *)(plVar17[-0x22] + 8);
        *plVar17 = lVar35;
        thunk_FUN_182f458c0(param_1 + ((longlong)iVar21 + (longlong)local_198) * 0x16 + 0xbf,lVar35,
                            plVar25,param_1[0xb2]);
        uVar27 = (ulonglong)(iVar21 + 1U);
        uVar43 = uVar43 + 1;
        plVar17 = plVar17 + 1;
        plVar25 = local_res20;
      } while ((int)(iVar21 + 1U) < (int)*plVar41);
    }
    if ((*(longlong *)(param_1[0xb2] + 0x370) != 0) && ((bVar1 || (bVar44)))) {
      iVar21 = 0;
      plVar17 = local_1b8;
      do {
        lVar13 = *plVar17;
        lVar35 = plVar17[1];
        iVar21 = iVar21 + 1;
        plVar17 = plVar17 + 2;
        *plVar25 = lVar13;
        plVar25[1] = lVar35;
        plVar25 = plVar25 + 2;
        iVar39 = 1;
        if (*(int *)(param_1[0xb2] + 0x3c) != 0) {
          iVar39 = 3;
        }
        local_res20 = plVar25;
      } while (iVar21 < iVar39);
    }
    plVar17 = local_1b0 + 0x11;
    local_res18 = local_res18 + 1;
    uVar15 = (ulonglong)local_res18;
    local_190 = local_190 + 1;
    local_188 = local_188 + 0x10;
    local_1b8 = local_1b8 + 0x60;
    plVar41 = (longlong *)((longlong)plVar41 + 4);
    local_1b0 = plVar17;
  } while ((longlong)local_190 < (longlong)local_1a8);
LAB_182d9246b:
  lVar13 = param_1[1];
  if (lVar13 == 0) {
    iVar21 = 1;
  }
  else {
    iVar21 = *(int *)(lVar13 + 0xc);
    if (*(int *)(param_1[0xb2] + 0x10) == 0) {
      iVar21 = iVar21 + *(int *)(lVar13 + 8);
    }
  }
  bVar42 = false;
  bVar5 = true;
  *(undefined4 *)((longlong)param_1 + 0x26c) = *(undefined4 *)(param_1[0xb3] + 0x1c);
  if ((*(int *)(param_1[0xb2] + 0x308) != 0) && (iVar39 = 0, 0 < *(int *)(param_1[0xb3] + 0x42b8)))
  {
    lVar13 = 0;
    bVar5 = true;
    do {
      lVar35 = param_1[0xb3];
      lVar30 = *(longlong *)(lVar35 + 0x42c0);
      if (*(int *)(lVar13 + 4 + lVar30) == 4) {
        pvVar34 = *(void **)(param_1[0xb1] + 0x13b88);
        if ((pvVar34 == (void *)0x0) ||
           (*(int *)(lVar13 + lVar30) != *(int *)(param_1[0xb1] + 0x13b80))) {
          bVar42 = true;
          if (pvVar34 != (void *)0x0) {
            FUN_18001f5ff();
          }
          uVar14 = thunk_FUN_182d8fc00((longlong)*(int *)(lVar13 + lVar30));
          *(undefined8 *)(param_1[0xb1] + 0x13b88) = uVar14;
LAB_182d92559:
          *(undefined4 *)(param_1[0xb1] + 0x13b84) = *(undefined4 *)(lVar13 + 4 + lVar30);
          *(undefined4 *)(param_1[0xb1] + 0x13b80) = *(undefined4 *)(lVar13 + lVar30);
          memcpy(*(void **)(param_1[0xb1] + 0x13b88),*(void **)(lVar13 + 8 + lVar30),
                 (longlong)*(int *)(lVar13 + lVar30));
        }
        else {
          iVar8 = memcmp(pvVar34,*(void **)(lVar13 + 8 + lVar30),(longlong)*(int *)(lVar13 + lVar30)
                        );
          if (iVar8 != 0) {
            bVar42 = true;
            goto LAB_182d92559;
          }
          if (bVar42) goto LAB_182d92559;
          if (*(int *)(lVar35 + 0xf4) != 1) {
            bVar5 = false;
            goto LAB_182d9259d;
          }
        }
        bVar5 = true;
      }
LAB_182d9259d:
      iVar39 = iVar39 + 1;
      lVar13 = lVar13 + 0x10;
    } while (iVar39 < *(int *)(param_1[0xb3] + 0x42b8));
  }
  iVar39 = thunk_FUN_182f7ac00(*(undefined8 *)(param_1[0xb1] + 0x10160),param_1[0xb3],param_1 + 0x1a
                              );
  local_d8 = (longlong)iVar21;
  auVar45._0_8_ = (double)iVar39;
  param_1[0x58] = (longlong)auVar45._0_8_;
  if (param_1[0xb4] != 0) {
    if ((iVar39 < 0x34) || (*(int *)(*(longlong *)(param_1[0xb3] + 0x42f0) + 0x1d4) == 0)) {
      if ((*(int *)(param_1[0xb2] + 0xe0) == 0) && (*(int *)(param_1[0xb2] + 0xe4) == 0)) {
        lVar13 = 0;
        lVar35 = local_d8;
        if (0 < iVar21) {
          do {
            *(undefined8 *)
             (*(longlong *)(lVar13 + 0x1238 + param_1[0xb5]) + 0x18040 +
             (longlong)(int)param_1[3] * 0x18060) = 0;
            lVar35 = lVar35 + -1;
            lVar13 = lVar13 + 0x8dde0;
          } while (lVar35 != 0);
        }
      }
      else {
        lVar13 = 0;
        lVar35 = local_d8;
        if (0 < iVar21) {
          do {
            lVar18 = (longlong)(int)param_1[3] * 0x18060;
            lVar30 = *(longlong *)(lVar13 + 0x1238 + param_1[0xb5]);
            *(longlong *)(lVar30 + 0x18040 + lVar18) = lVar18 + 0x10040 + lVar30;
            lVar30 = (longlong)(int)param_1[3] * 0x18060 +
                     *(longlong *)(lVar13 + 0x1238 + param_1[0xb5]);
            *(longlong *)(lVar30 + 0x18048) = lVar30;
            lVar18 = (longlong)(int)param_1[3] * 0x18060;
            lVar30 = *(longlong *)(lVar13 + 0x1238 + param_1[0xb5]);
            *(longlong *)(lVar30 + 0x18050 + lVar18) = lVar18 + 0x10000 + lVar30;
            lVar35 = lVar35 + -1;
            lVar13 = lVar13 + 0x8dde0;
          } while (lVar35 != 0);
        }
      }
    }
    else if (0 < iVar21) {
      lVar13 = 0;
      lVar35 = local_d8;
      do {
        *(longlong *)
         ((longlong)(int)param_1[3] * 0x18060 + 0x18040 +
         *(longlong *)(lVar13 + 0x1238 + param_1[0xb5])) =
             *(longlong *)(param_1[0xb1] + 0x10040) + (longlong)(iVar39 + -0x34) * 0x8000;
        *(longlong *)
         ((longlong)(int)param_1[3] * 0x18060 + 0x18048 +
         *(longlong *)(lVar13 + 0x1238 + param_1[0xb5])) = param_1[0xb1];
        *(longlong *)
         ((longlong)(int)param_1[3] * 0x18060 + 0x18050 +
         *(longlong *)(lVar13 + 0x1238 + param_1[0xb5])) = param_1[0xb1] + 0x10000;
        lVar35 = lVar35 + -1;
        lVar13 = lVar13 + 0x8dde0;
      } while (lVar35 != 0);
    }
  }
  uVar15 = 0;
  if (iVar39 < -0xc) {
    iVar39 = -0xc;
  }
  iVar21 = 0x33;
  if (iVar39 < 0x33) {
    iVar21 = iVar39;
  }
  *(int *)((longlong)plVar31 + 0x8dc) = iVar21;
  if (*(int *)(param_1[0xb2] + 0x2f4) != 0) {
    auVar45._0_8_ = DAT_18397a210 - auVar45._0_8_ * DAT_18330d6e0;
    auVar46._0_8_ = auVar45._0_8_ * *(double *)(param_1[0xb1] + 0x13b50) + DAT_1832576d0;
    lVar13 = (longlong)auVar46._0_8_;
    if ((lVar13 != -0x8000000000000000) && ((double)lVar13 != auVar46._0_8_)) {
      auVar46._8_8_ = auVar46._0_8_;
      uVar9 = movmskpd((int)param_1[0xb2],auVar46);
      auVar46._0_8_ = (double)(longlong)(lVar13 - (ulonglong)(uVar9 & 1));
    }
    uVar9 = (uint)auVar46._0_8_;
    auVar45._0_8_ = auVar45._0_8_ * *(double *)(param_1[0xb1] + 0x13b58) + DAT_1832576d0;
    if ((int)uVar9 < -0xc) {
      uVar9 = 0xfffffff4;
    }
    lVar13 = (longlong)auVar45._0_8_;
    uVar27 = uVar15;
    if ((int)uVar9 < 0) {
      uVar27 = (ulonglong)uVar9;
    }
    iVar21 = (int)uVar27;
    if ((lVar13 != -0x8000000000000000) && ((double)lVar13 != auVar45._0_8_)) {
      auVar45._8_8_ = auVar45._0_8_;
      uVar9 = movmskpd(uVar9,auVar45);
      auVar45._0_8_ = (double)(longlong)(lVar13 - (ulonglong)(uVar9 & 1));
    }
    uVar9 = (uint)auVar45._0_8_;
    if ((int)uVar9 < -0xc) {
      uVar9 = 0xfffffff4;
    }
    uVar27 = uVar15;
    if ((int)uVar9 < 0) {
      uVar27 = (ulonglong)uVar9;
    }
    if (*(int *)(plVar31[1] + 4) + iVar21 < -0xc) {
      iVar21 = -0xc - *(int *)(plVar31[1] + 4);
    }
    *(int *)(plVar31 + 0x11c) = iVar21;
    iVar21 = (int)uVar27;
    if (*(int *)(plVar31[1] + 8) + iVar21 < -0xc) {
      iVar21 = -0xc - *(int *)(plVar31[1] + 8);
    }
    *(int *)((longlong)plVar31 + 0x8e4) = iVar21;
  }
  if ((*(int *)(param_1[0xb2] + 0x2b8) != 0) && (*(int *)(param_1[0xb2] + 0x6c) != 0)) {
    lVar13 = param_1[0xb1];
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar13 + 0x13690));
    lVar35 = 0x136c0;
    uVar27 = uVar15;
    do {
      iVar21 = (*(int *)((longlong)plVar31 + 0x8dc) - (int)uVar27) + -1;
      if (iVar21 < 1) {
        iVar21 = iVar21 * -2;
      }
      else {
        iVar21 = iVar21 * 2 + -1;
      }
      local_e0 = 0x1f;
      if (iVar21 + 1U != 0) {
        for (; iVar21 + 1U >> local_e0 == 0; local_e0 = local_e0 + -1) {
        }
      }
      uVar27 = (ulonglong)((int)uVar27 + 1);
      *(longlong *)(param_1[0xb1] + lVar35) =
           *(longlong *)(param_1[0xb1] + lVar35) + (longlong)(local_e0 * 2 + 1);
      lVar35 = lVar35 + 8;
    } while (lVar35 < 0x138f0);
    *(int *)(param_1[0xb1] + 0x136b8) = *(int *)(param_1[0xb1] + 0x136b8) + 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar13 + 0x13690));
  }
  thunk_FUN_182dc0d30(param_1 + 0x422,plVar31);
  thunk_FUN_182f37b00(param_1 + 0x499,param_1[0xb3],param_1 + 0x422);
  thunk_FUN_182f449e0(param_1);
  thunk_FUN_182dbe940(param_1 + 0x3ab);
  if (*(int *)(param_1[0xb2] + 0x2b4) != 0) {
    do {
      uVar40 = (int)uVar15 + 1;
      uVar9 = *(uint *)(param_1[0x16] + uVar15 * 4);
      if (uVar9 < *(uint *)(param_1[0x16] + (ulonglong)uVar40 * 4)) {
        do {
          lVar13 = (ulonglong)uVar9 * 0xc08 + param_1[0x14];
          *(undefined1 *)(lVar13 + 0xbf8) = 0;
          *(undefined1 *)(lVar13 + 0xbf9) = 0;
          *(undefined4 *)(lVar13 + 0xbfc) = 0;
          *(undefined4 *)(lVar13 + 0xc00) = 0;
          *(int *)(lVar13 + 0x770) = (int)uVar15;
          memset((void *)(lVar13 + 0x778),0,0x458);
          thunk_FUN_182dbe940(lVar13 + 0x3b8);
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(param_1[0x16] + (ulonglong)uVar40 * 4));
      }
      uVar15 = (ulonglong)uVar40;
    } while (uVar40 < *(uint *)(param_1[0xb2] + 0x2b4));
  }
  puVar26 = (ulonglong *)0x0;
  iVar21 = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (*(int *)(param_1[0xb2] + 0x10) == 0) {
    local_19c = *(uint *)(param_1[0xb2] + 0x2b4);
  }
  else {
    local_19c = *(uint *)(*plVar31 + 0x30);
  }
  if (param_1[0xb6] == 0) {
    uVar27 = CONCAT44(0,local_19c);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar27;
    uVar15 = SUB168(ZEXT816(0x20) * auVar2,0);
    if (SUB168(ZEXT816(0x20) * auVar2,8) != 0) {
      uVar15 = 0xffffffffffffffff;
    }
    lVar13 = uVar15 + 8;
    if (0xfffffffffffffff7 < uVar15) {
      lVar13 = -1;
    }
    puVar16 = (ulonglong *)thunk_FUN_183196718(lVar13);
    puVar22 = puVar26;
    if (puVar16 != (ulonglong *)0x0) {
      *puVar16 = uVar27;
      puVar22 = puVar16 + 1;
      puVar16 = puVar22;
      for (uVar15 = uVar27; uVar15 != 0; uVar15 = uVar15 - 1) {
        thunk_FUN_182d90b60(puVar16);
        puVar16 = puVar16 + 4;
      }
    }
    param_1[0xb6] = (longlong)puVar22;
    if (*(int *)(param_1[0xb2] + 0x10) == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar27;
      uVar15 = SUB168(ZEXT816(0x20) * auVar3,0);
      if (SUB168(ZEXT816(0x20) * auVar3,8) != 0) {
        uVar15 = 0xffffffffffffffff;
      }
      lVar13 = uVar15 + 8;
      if (0xfffffffffffffff7 < uVar15) {
        lVar13 = -1;
      }
      puVar16 = (ulonglong *)thunk_FUN_183196718(lVar13);
      puVar22 = puVar26;
      if (puVar16 != (ulonglong *)0x0) {
        *puVar16 = uVar27;
        puVar37 = puVar16 + 1;
        for (uVar15 = uVar27; puVar22 = puVar16 + 1, uVar15 != 0; uVar15 = uVar15 - 1) {
          thunk_FUN_182d90b60(puVar37);
          puVar37 = puVar37 + 4;
        }
      }
      param_1[0xb7] = (longlong)puVar22;
    }
    lVar13 = thunk_FUN_182d8fc00(uVar27 * 4);
    param_1[0xb8] = lVar13;
    if ((*(int *)(param_1[0xb2] + 300) == 0) &&
       (puVar22 = puVar26, puVar16 = puVar26, local_19c != 0)) {
      do {
        *(longlong *)(param_1[0x14] + 0x3b8 + (longlong)puVar22) = param_1[0xb6] + (longlong)puVar16
        ;
        uVar27 = uVar27 - 1;
        puVar22 = puVar22 + 0x181;
        puVar16 = puVar16 + 4;
      } while (uVar27 != 0);
    }
  }
  else if (local_19c != 0) {
    uVar15 = (ulonglong)local_19c;
    puVar16 = puVar26;
    puVar22 = puVar26;
    do {
      (**(code **)(*(longlong *)(param_1[0xb6] + (longlong)puVar16) + 0x10))
                (param_1[0xb6] + (longlong)puVar22);
      puVar22 = puVar22 + 4;
      puVar16 = puVar16 + 4;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  uVar12 = (undefined4)(in_stack_fffffffffffffe18 >> 0x20);
  if (*(int *)((longlong)param_1 + 0x26c) != 0) {
    iVar21 = *(int *)(param_1[0xb1] + 0x1009c);
  }
  if (*(char *)(param_1[0xb3] + 0x105) != '\0') {
    if (*(int *)(param_1[0xb2] + 0x78) != 0) {
      lVar13 = *(longlong *)(param_1[0xb1] + 0x10160);
      lVar35 = lVar13 + 0x7f0;
      *(undefined4 *)(lVar13 + 0x814) = 1;
      *(undefined2 *)(lVar13 + 0x808) = 0;
      thunk_FUN_182f764f0(*(undefined8 *)(param_1[0xb1] + 0x10160),lVar35);
      if (*(int *)(param_1[0xb2] + 0x398) == 0) {
        (**(code **)(param_1[0xbb] + 0x10))();
      }
      uVar10 = thunk_FUN_182f72b90(lVar35,*plVar31);
      thunk_FUN_182f72bf0(lVar35,uVar10);
      thunk_FUN_182f72c10(lVar35,param_1 + 0xbb,*plVar31);
      in_stack_fffffffffffffe20 = param_1 + 0x4aa;
      in_stack_fffffffffffffe18 = CONCAT44(uVar12,0x27);
      thunk_FUN_182f72b40(lVar35,param_1 + 0xbb,0,*(undefined4 *)(param_1[0xb2] + 0x398),
                          in_stack_fffffffffffffe18,in_stack_fffffffffffffe20);
      *(undefined4 *)(param_1[0xb1] + 0x1009c) = *(undefined4 *)((longlong)param_1 + 0x26c);
    }
    uVar12 = (undefined4)(in_stack_fffffffffffffe18 >> 0x20);
    if ((*(int *)(param_1[0xb3] + 0xf4) == 1) && (*(int *)(param_1[0xb2] + 0x390) != 0)) {
      local_158 = 0;
      local_160 = x265_10bit::SEIRecoveryPoint::vftable;
      local_150 = 6;
      local_148 = 0;
      local_144 = 1;
      if (*(int *)(param_1[0xb2] + 0x398) == 0) {
        (**(code **)(param_1[0xbb] + 0x10))();
      }
      uVar10 = thunk_FUN_182f72b90(&local_160,*plVar31);
      thunk_FUN_182f72bf0(&local_160,uVar10);
      thunk_FUN_182f72c10(&local_160,param_1 + 0xbb,*plVar31);
      in_stack_fffffffffffffe20 = param_1 + 0x4aa;
      in_stack_fffffffffffffe18 = CONCAT44(uVar12,0x27);
      thunk_FUN_182f72b40(&local_160,param_1 + 0xbb,0,*(undefined4 *)(param_1[0xb2] + 0x398),
                          in_stack_fffffffffffffe18,in_stack_fffffffffffffe20);
      local_160 = x265_10bit::SEI::vftable;
    }
  }
  uVar12 = (undefined4)(in_stack_fffffffffffffe18 >> 0x20);
  lVar13 = param_1[0xb2];
  if ((*(int *)(lVar13 + 0x78) != 0) || (*(int *)(lVar13 + 0x50) != 0)) {
    lVar35 = param_1[0x5b];
    lVar30 = *plVar31;
    uVar9 = *(uint *)(plVar31 + 0x11d);
    if (*(char *)(lVar30 + 0x27bf) != '\0') {
      if (*(int *)(lVar13 + 0x50) == 2) {
        iVar39 = 2 - (uint)((uVar9 & 1) != 0);
      }
      else if (*(int *)(lVar13 + 0x50) == 1) {
        iVar39 = (uVar9 & 1) + 1;
      }
      else {
        iVar39 = *(int *)(lVar13 + 0x188);
      }
      *(int *)(lVar35 + 0x18) = iVar39;
      iVar39 = *(int *)(param_1[0xb2] + 0x50);
      *(undefined1 *)(lVar35 + 0x20) = 0;
      *(uint *)(lVar35 + 0x1c) = (uint)(iVar39 == 0);
    }
    if (*(char *)(lVar30 + 0x27c1) != '\0') {
      iVar21 = *(int *)((longlong)param_1 + 0x26c) - iVar21;
      iVar39 = iVar21;
      if (iVar21 < 1) {
        iVar39 = 1;
      }
      iVar8 = 1 << ((byte)*(undefined4 *)(lVar30 + 0x27d0) & 0x1f);
      if ((iVar39 < iVar8) && (iVar8 = iVar21, iVar21 < 1)) {
        iVar8 = 1;
      }
      *(int *)(lVar35 + 0x24) = iVar8;
      *(uint *)(lVar35 + 0x28) =
           (*(int *)(*plVar31 + 0x6c) - *(int *)((longlong)param_1 + 0x26c)) + uVar9;
    }
    if (*(int *)(param_1[0xb2] + 0x398) == 0) {
      (**(code **)(param_1[0xbb] + 0x10))();
    }
    uVar10 = thunk_FUN_182f72b90(lVar35,*plVar31);
    thunk_FUN_182f72bf0(lVar35,uVar10);
    thunk_FUN_182f72c10(lVar35,param_1 + 0xbb,*plVar31);
    in_stack_fffffffffffffe20 = param_1 + 0x4aa;
    in_stack_fffffffffffffe18 = CONCAT44(uVar12,0x27);
    thunk_FUN_182f72b40(lVar35,param_1 + 0xbb,0,*(undefined4 *)(param_1[0xb2] + 0x398),
                        in_stack_fffffffffffffe18,in_stack_fffffffffffffe20);
  }
  uVar12 = (undefined4)(in_stack_fffffffffffffe18 >> 0x20);
  if ((-1 < *(int *)(param_1[0xb2] + 0x184)) && (*(int *)((longlong)plVar31 + 0x8d4) - 0x10U < 8)) {
    local_140 = x265_10bit::SEIAlternativeTC::vftable;
    local_138 = 0;
    local_130 = 0x93;
    local_128 = *(int *)(param_1[0xb2] + 0x184);
    (**(code **)(param_1[0xbb] + 0x10))(param_1 + 0xbb);
    uVar10 = thunk_FUN_182f72b90(&local_140,*plVar31);
    thunk_FUN_182f72bf0(&local_140,uVar10);
    thunk_FUN_182f72c10(&local_140,param_1 + 0xbb,*plVar31);
    in_stack_fffffffffffffe20 = param_1 + 0x4aa;
    in_stack_fffffffffffffe18 = CONCAT44(uVar12,0x27);
    thunk_FUN_182f72b40(&local_140,param_1 + 0xbb,0,*(undefined4 *)(param_1[0xb2] + 0x398),
                        in_stack_fffffffffffffe18,in_stack_fffffffffffffe20);
    local_140 = x265_10bit::SEI::vftable;
  }
  bVar42 = false;
  bVar6 = false;
  puVar22 = puVar26;
  puVar16 = puVar26;
  if (0 < *(int *)(param_1[0xb3] + 0x42b8)) {
    do {
      uVar12 = (undefined4)(in_stack_fffffffffffffe18 >> 0x20);
      lVar13 = *(longlong *)(param_1[0xb3] + 0x42c0);
      iVar21 = *(int *)((longlong)puVar16 + lVar13 + 4);
      if (iVar21 == 5) {
        local_108 = *(undefined8 *)((longlong)puVar16 + lVar13 + 8);
        local_118 = 0;
        local_120 = x265_10bit::SEIuserDataUnregistered::vftable;
        local_110 = 5;
        if (*(int *)(param_1[0xb2] + 0x398) == 0) {
          (**(code **)(param_1[0xbb] + 0x10))();
        }
        thunk_FUN_182f72bf0(&local_120,*(undefined4 *)((longlong)puVar16 + lVar13));
        thunk_FUN_182f72c10(&local_120,param_1 + 0xbb);
        in_stack_fffffffffffffe20 = param_1 + 0x4aa;
        in_stack_fffffffffffffe18 = CONCAT44(uVar12,0x27);
        thunk_FUN_182f72b40(&local_120,param_1 + 0xbb,0,*(undefined4 *)(param_1[0xb2] + 0x398),
                            in_stack_fffffffffffffe18,in_stack_fffffffffffffe20);
        local_120 = x265_10bit::SEI::vftable;
        bVar42 = true;
      }
      else {
        bVar42 = bVar6;
        if (iVar21 == 4) {
          if (bVar5) {
            local_e8 = *(undefined8 *)((longlong)puVar16 + lVar13 + 8);
            local_f8 = 0;
            local_100 = x265_10bit::SEICreativeIntentMeta::vftable;
            local_f0 = 4;
            if (*(int *)(param_1[0xb2] + 0x398) == 0) {
              (**(code **)(param_1[0xbb] + 0x10))();
            }
            thunk_FUN_182f72bf0(&local_100,*(undefined4 *)((longlong)puVar16 + lVar13));
            thunk_FUN_182f72c10(&local_100,param_1 + 0xbb);
            in_stack_fffffffffffffe20 = param_1 + 0x4aa;
            in_stack_fffffffffffffe18 = CONCAT44(uVar12,0x27);
            thunk_FUN_182f72b40(&local_100,param_1 + 0xbb,0,*(undefined4 *)(param_1[0xb2] + 0x398),
                                in_stack_fffffffffffffe18,in_stack_fffffffffffffe20);
            local_100 = x265_10bit::SEI::vftable;
            bVar42 = true;
          }
        }
        else {
          thunk_FUN_182d8f720(param_1[0xb2],&DAT_18393797c,0);
        }
      }
      uVar9 = (int)puVar22 + 1;
      puVar22 = (ulonglong *)(ulonglong)uVar9;
      puVar16 = puVar16 + 2;
      bVar6 = bVar42;
    } while ((int)uVar9 < *(int *)(param_1[0xb3] + 0x42b8));
  }
  if (((((*(char *)(param_1[0xb3] + 0x105) == '\0') ||
        (lVar13 = param_1[0xb2], *(int *)(lVar13 + 0x6c) == 0)) &&
       (lVar13 = param_1[0xb2], *(int *)(lVar13 + 0x78) == 0)) && (*(int *)(lVar13 + 0x50) == 0)) &&
     ((*(int *)(param_1[0xb3] + 0xf4) != 1 || (*(int *)(lVar13 + 0x390) == 0)))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((bVar42 || bVar5) && (*(int *)(lVar13 + 0x398) != 0)) {
    thunk_FUN_182d90e10(param_1 + 0xbb);
    thunk_FUN_182f44d30(param_1 + 0x4aa,0x27,param_1 + 0xbb);
  }
  if ((*(int *)(param_1[0xb2] + 400) != 0) &&
     (lVar13 = *(longlong *)(param_1[0xb1] + 0x10160), *(char *)(lVar13 + 0x1d) == '\0')) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar13 + 0x7b0));
    *(int *)(lVar13 + 0x7e0) = *(int *)(lVar13 + 0x7e0) + 1;
    WakeAllConditionVariable((PCONDITION_VARIABLE)(lVar13 + 0x7d8));
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar13 + 0x7b0));
    if (*(int *)((longlong)param_1 + 0x26c) < *(int *)(param_1[0xb2] + 4) + -1) {
      lVar13 = *(longlong *)(param_1[0xb1] + 0x10160);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar13 + 0x7b0));
      *(int *)(lVar13 + 0x7e0) = *(int *)(lVar13 + 0x7e0) + 1;
      WakeAllConditionVariable((PCONDITION_VARIABLE)(lVar13 + 0x7d8));
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar13 + 0x7b0));
    }
  }
  if (*(int *)(param_1[0xb2] + 0x394) != 0) {
    thunk_FUN_182d95880(param_1);
  }
  puVar22 = puVar26;
  if (*(int *)(param_1[0xb2] + 0x2b4) != 0) {
    do {
      uVar9 = (int)puVar22 + 1;
      *(undefined1 *)
       ((ulonglong)*(uint *)(param_1[0x16] + (longlong)puVar22 * 4) * 0xc08 + 0xbf8 + param_1[0x14])
           = 1;
      puVar22 = (ulonglong *)(ulonglong)uVar9;
    } while (uVar9 < *(uint *)(param_1[0xb2] + 0x2b4));
  }
  if ((*(int *)(param_1[0xb2] + 0x10) != 0) &&
     (puVar22 = puVar26, puVar16 = puVar26, puVar37 = puVar26,
     *(int *)((longlong)param_1 + 0xac) != 0)) {
    do {
      puVar29 = puVar26;
      if (*(int *)(param_1[0xb2] + 0x2b4) != 0) {
        do {
          uVar40 = *(int *)(param_1[0x16] + (longlong)puVar29 * 4) + (int)puVar22;
          uVar9 = (int)puVar29 + 1;
          puVar29 = (ulonglong *)(ulonglong)uVar9;
          if (uVar40 <= *(int *)(param_1[0x16] + (longlong)puVar29 * 4) - 1U) {
            *(int *)(param_1[8] + (ulonglong)uVar40 * 4) = (int)puVar37;
            puVar37 = (ulonglong *)(ulonglong)((int)puVar37 + 1);
            *(uint *)(param_1[9] + (longlong)puVar16 * 4) = uVar40;
            puVar16 = (ulonglong *)((longlong)puVar16 + 1);
          }
        } while (uVar9 < *(uint *)(param_1[0xb2] + 0x2b4));
      }
      uVar9 = (int)puVar22 + 1;
      puVar22 = (ulonglong *)(ulonglong)uVar9;
    } while (uVar9 < *(uint *)((longlong)param_1 + 0xac));
  }
  if (*(int *)(param_1[0xb2] + 0x10) == 0) {
    local_1c0 = 0;
    if (*(int *)((longlong)param_1 + 0x8c) + *(int *)((longlong)param_1 + 0x94) != 0) {
      do {
        iVar21 = 0;
        uVar9 = (uint)puVar26;
        if (uVar9 < *(uint *)((longlong)param_1 + 0x8c)) {
          local_168 = (longlong *)0x0;
          if (local_1a8 != 0) {
            local_178 = param_1 + 199;
            plVar17 = plVar31 + 2;
            local_1b8 = plVar31 + 0x11f;
            uVar15 = local_1a8;
            do {
              iVar39 = 0;
              local_170 = plVar17;
              plVar41 = local_178;
              if (0 < (int)*local_1b8) {
                do {
                  local_1b0 = plVar41;
                  lVar13 = *plVar17;
                  uVar9 = *(int *)((longlong)param_1 + 0x9c) + (int)puVar26;
                  if (*(int *)((longlong)param_1 + 0x8c) - 1U < uVar9) {
                    uVar9 = *(int *)((longlong)param_1 + 0x8c) - 1;
                  }
                  lVar35 = (longlong)(int)uVar9 * 0x38;
                  p_Var28 = (LPCRITICAL_SECTION)(*(longlong *)(lVar13 + 0x42c8) + lVar35);
                  local_198 = plVar17;
                  EnterCriticalSection(p_Var28);
                  iVar8 = p_Var28[1].LockCount;
                  LeaveCriticalSection(p_Var28);
                  plVar17 = local_1b0;
                  while (local_1b0 = plVar17, iVar8 == 0) {
                    p_Var28 = (LPCRITICAL_SECTION)(*(longlong *)(lVar13 + 0x42c8) + lVar35);
                    EnterCriticalSection(p_Var28);
                    if (p_Var28[1].LockCount == 0) {
                      SleepConditionVariableCS
                                ((PCONDITION_VARIABLE)(p_Var28 + 1),p_Var28,0xffffffff);
                    }
                    LeaveCriticalSection(p_Var28);
                    p_Var28 = (LPCRITICAL_SECTION)(*(longlong *)(lVar13 + 0x42c8) + lVar35);
                    EnterCriticalSection(p_Var28);
                    iVar8 = p_Var28[1].LockCount;
                    LeaveCriticalSection(p_Var28);
                    plVar17 = local_1b0;
                  }
                  if (((bVar1) || (bVar44)) && ((char)*plVar17 != '\0')) {
                    in_stack_fffffffffffffe18 = in_stack_fffffffffffffe18 & 0xffffffff00000000;
                    thunk_FUN_182f45490(param_1 + ((longlong)iVar21 * 0x11 + (longlong)iVar39) *
                                                  0x16 + 0xbf,uVar9,
                                        *(undefined4 *)((longlong)param_1 + 0x8c),
                                        *(undefined4 *)((longlong)param_1 + 0x8c),
                                        in_stack_fffffffffffffe18);
                  }
                  local_1b0 = plVar17 + 0x16;
                  plVar17 = local_198 + 1;
                  iVar39 = iVar39 + 1;
                  puVar26 = (ulonglong *)(ulonglong)local_1c0;
                  uVar15 = local_1a8;
                  plVar41 = local_1b0;
                  local_198 = plVar17;
                } while (iVar39 < (int)*local_1b8);
              }
              iVar21 = iVar21 + 1;
              local_168 = (longlong *)((longlong)local_168 + 1);
              local_1b8 = (longlong *)((longlong)local_1b8 + 4);
              plVar17 = local_170 + 0x11;
              local_178 = local_178 + 0x176;
              local_170 = plVar17;
            } while ((longlong)local_168 < (longlong)uVar15);
          }
          uVar9 = (uint)puVar26;
          if (uVar9 == 0) {
            lVar13 = thunk_FUN_182d8fc10();
            param_1[0xa8] = lVar13;
          }
          else if (uVar9 == *(int *)((longlong)param_1 + 0x8c) - 1U) {
            lVar13 = thunk_FUN_182d8fc10();
            param_1[0xa9] = lVar13;
          }
          (**(code **)(*param_1 + 0x20))
                    (param_1,puVar26,(longlong)(int)param_1[0xf] * 0x8dde0 + param_1[0xb5]);
        }
        if (*(uint *)((longlong)param_1 + 0x94) <= uVar9) {
          thunk_FUN_182f36d50(param_1 + 0x499,uVar9 - *(uint *)((longlong)param_1 + 0x94));
        }
        local_1c0 = uVar9 + 1;
        puVar26 = (ulonglong *)(ulonglong)local_1c0;
      } while (local_1c0 <
               (uint)(*(int *)((longlong)param_1 + 0x8c) + *(int *)((longlong)param_1 + 0x94)));
    }
  }
  else {
    local_1c0 = 0;
    if (*(int *)((longlong)param_1 + 0xac) != 0) {
      do {
        iVar21 = (int)puVar26;
        uVar15 = 0;
        local_190 = local_190 & 0xffffffff00000000;
        if (*(int *)(param_1[0xb2] + 0x2b4) != 0) {
          do {
            uVar9 = (int)uVar15 + 1;
            local_188 = CONCAT44(local_188._4_4_,uVar9);
            uVar40 = *(int *)(param_1[0x16] + (ulonglong)uVar9 * 4) - 1;
            local_180 = *(int *)(param_1[0x16] + uVar15 * 4) + (int)puVar26;
            uVar15 = (ulonglong)local_180;
            if (local_180 <= uVar40) {
              local_1a0 = 0;
              local_170 = (longlong *)0x0;
              if (local_1a8 != 0) {
                local_198 = param_1 + 199;
                plVar17 = plVar31 + 2;
                local_1b0 = plVar31 + 0x11f;
                uVar27 = local_1a8;
                do {
                  iVar21 = 0;
                  local_168 = plVar17;
                  plVar41 = local_198;
                  if (0 < (int)*local_1b0) {
                    do {
                      local_1b8 = plVar41;
                      lVar13 = *plVar17;
                      uVar9 = *(int *)((longlong)param_1 + 0x9c) + (int)uVar15;
                      if (uVar40 < uVar9) {
                        uVar9 = uVar40;
                      }
                      lVar35 = (longlong)(int)uVar9 * 0x38;
                      p_Var28 = (LPCRITICAL_SECTION)(*(longlong *)(lVar13 + 0x42c8) + lVar35);
                      local_178 = plVar17;
                      EnterCriticalSection(p_Var28);
                      iVar39 = p_Var28[1].LockCount;
                      LeaveCriticalSection(p_Var28);
                      plVar17 = local_1b8;
                      while (local_1b8 = plVar17, iVar39 == 0) {
                        p_Var28 = (LPCRITICAL_SECTION)(*(longlong *)(lVar13 + 0x42c8) + lVar35);
                        EnterCriticalSection(p_Var28);
                        if (p_Var28[1].LockCount == 0) {
                          SleepConditionVariableCS
                                    ((PCONDITION_VARIABLE)(p_Var28 + 1),p_Var28,0xffffffff);
                        }
                        LeaveCriticalSection(p_Var28);
                        p_Var28 = (LPCRITICAL_SECTION)(*(longlong *)(lVar13 + 0x42c8) + lVar35);
                        EnterCriticalSection(p_Var28);
                        iVar39 = p_Var28[1].LockCount;
                        LeaveCriticalSection(p_Var28);
                        plVar17 = local_1b8;
                      }
                      if (((bVar1) || (bVar44)) && ((char)*plVar17 != '\0')) {
                        in_stack_fffffffffffffe18 =
                             CONCAT44((int)(in_stack_fffffffffffffe18 >> 0x20),(undefined4)local_190
                                     );
                        thunk_FUN_182f45490(param_1 + ((longlong)local_1a0 * 0x11 + (longlong)iVar21
                                                      ) * 0x16 + 0xbf,uVar9,
                                            *(undefined4 *)((longlong)param_1 + 0x8c),uVar40,
                                            in_stack_fffffffffffffe18);
                      }
                      local_1b8 = plVar17 + 0x16;
                      plVar17 = local_178 + 1;
                      iVar21 = iVar21 + 1;
                      uVar15 = (ulonglong)local_180;
                      uVar27 = local_1a8;
                      plVar41 = local_1b8;
                      local_178 = plVar17;
                    } while (iVar21 < (int)*local_1b0);
                  }
                  local_1a0 = local_1a0 + 1;
                  local_170 = (longlong *)((longlong)local_170 + 1);
                  local_1b0 = (longlong *)((longlong)local_1b0 + 4);
                  plVar17 = local_168 + 0x11;
                  local_198 = local_198 + 0x176;
                } while ((longlong)local_170 < (longlong)uVar27);
                uVar9 = (uint)local_188;
                local_168 = plVar17;
              }
              thunk_FUN_182f44ab0(param_1,*(int *)(param_1[8] + uVar15 * 4) * 2);
              if (local_1c0 == 0) {
                lVar13 = thunk_FUN_182d8fc10();
                param_1[0xa8] = lVar13;
                thunk_FUN_182f44ae0(param_1,*(int *)(param_1[8] + uVar15 * 4) * 2);
              }
              thunk_FUN_182f448f0(param_1);
              puVar26 = (ulonglong *)(ulonglong)local_1c0;
            }
            iVar21 = (int)puVar26;
            uVar15 = (ulonglong)uVar9;
            local_190 = CONCAT44(local_190._4_4_,uVar9);
          } while (uVar9 < *(uint *)(param_1[0xb2] + 0x2b4));
        }
        local_1c0 = iVar21 + 1;
        puVar26 = (ulonglong *)(ulonglong)local_1c0;
      } while (local_1c0 < *(uint *)((longlong)param_1 + 0xac));
    }
    lVar13 = thunk_FUN_182d8fc10();
    param_1[0xa9] = lVar13;
    thunk_FUN_182f448f0(param_1);
    DVar11 = WaitForSingleObject((HANDLE)param_1[0xe],0xfa);
    while (DVar11 == 0x102) {
      thunk_FUN_182f448f0(param_1);
      DVar11 = WaitForSingleObject((HANDLE)param_1[0xe],0xfa);
    }
  }
  lVar13 = param_1[0xb2];
  if (1 < *(uint *)(lVar13 + 0x2b4)) {
    lVar35 = *(longlong *)(param_1[0xb3] + 8);
    iVar21 = *(int *)(lVar13 + 0x80);
    uVar15 = *(ulonglong *)(lVar35 + 0x38);
    bVar1 = *(int *)(lVar13 + 0x3c) - 1U < 2;
    uVar9 = *(uint *)(lVar35 + 0x34);
    bVar44 = *(int *)(lVar13 + 0x3c) == 1;
    uVar40 = *(uint *)(lVar35 + 0x30);
    if (iVar21 == 1) {
      thunk_FUN_182f388e0((longlong)param_1 + 0x404);
      thunk_FUN_182f39570((longlong)param_1 + 0x404,*(undefined8 *)(lVar35 + 0x18),uVar40,uVar9,
                          uVar15);
      in_stack_fffffffffffffe18 = uVar15;
      if (*(int *)(param_1[0xb2] + 0x3c) != 0) {
        thunk_FUN_182f388e0((longlong)param_1 + 0x45c);
        thunk_FUN_182f388e0((longlong)param_1 + 0x4b4);
        in_stack_fffffffffffffe18 = *(ulonglong *)(lVar35 + 0x40);
        thunk_FUN_182f39570((longlong)param_1 + 0x45c,*(undefined8 *)(lVar35 + 0x20),uVar40 >> bVar1
                            ,uVar9 >> bVar44,in_stack_fffffffffffffe18);
        thunk_FUN_182f39570((longlong)param_1 + 0x4b4,*(undefined8 *)(lVar35 + 0x28),uVar40 >> bVar1
                            ,uVar9 >> bVar44,in_stack_fffffffffffffe18);
      }
    }
    else if (iVar21 == 2) {
      *(undefined4 *)((longlong)param_1 + 0x50c) = 0xffff;
      thunk_FUN_182f3aa80(*(undefined8 *)(lVar35 + 0x18),(undefined4 *)((longlong)param_1 + 0x50c),
                          uVar9,uVar40,uVar15);
      in_stack_fffffffffffffe18 = uVar15;
      if (*(int *)(param_1[0xb2] + 0x3c) != 0) {
        in_stack_fffffffffffffe18 = *(ulonglong *)(lVar35 + 0x40);
        *(undefined4 *)((longlong)param_1 + 0x514) = 0xffff;
        *(undefined4 *)(param_1 + 0xa2) = 0xffff;
        thunk_FUN_182f3aa80(*(undefined8 *)(lVar35 + 0x20),param_1 + 0xa2,uVar9 >> bVar44,
                            uVar40 >> bVar1,in_stack_fffffffffffffe18);
        thunk_FUN_182f3aa80(*(undefined8 *)(lVar35 + 0x28),(longlong)param_1 + 0x514,uVar9 >> bVar44
                            ,uVar40 >> bVar1,in_stack_fffffffffffffe18);
      }
    }
    else if (iVar21 == 3) {
      uVar24 = *(uint *)(lVar13 + 0xb4);
      *(undefined4 *)(param_1 + 0xa3) = 0;
      uVar27 = (ulonglong)in_stack_fffffffffffffe20 & 0xffffffff00000000;
      thunk_FUN_182f3abb0(*(undefined8 *)(lVar35 + 0x18),param_1 + 0xa3,uVar9,uVar40,uVar15,uVar27,
                          uVar24);
      in_stack_fffffffffffffe18 = uVar15;
      if (*(int *)(param_1[0xb2] + 0x3c) != 0) {
        in_stack_fffffffffffffe18 = *(ulonglong *)(lVar35 + 0x40);
        uVar24 = uVar24 >> bVar44;
        *(undefined4 *)(param_1 + 0xa4) = 0;
        *(undefined4 *)((longlong)param_1 + 0x51c) = 0;
        uVar27 = uVar27 & 0xffffffff00000000;
        thunk_FUN_182f3abb0(*(undefined8 *)(lVar35 + 0x20),(undefined4 *)((longlong)param_1 + 0x51c)
                            ,uVar9 >> bVar44,uVar40 >> bVar1,in_stack_fffffffffffffe18,uVar27,uVar24
                           );
        thunk_FUN_182f3abb0(*(undefined8 *)(lVar35 + 0x28),param_1 + 0xa4,uVar9 >> bVar44,
                            uVar40 >> bVar1,in_stack_fffffffffffffe18,uVar27 & 0xffffffff00000000,
                            uVar24);
      }
    }
  }
  uVar15 = 0;
  uVar40 = 0;
  uVar9 = 0;
  if (*(int *)(param_1[0xb2] + 0x1f8) != 0) {
    uVar24 = 0;
    if (*(int *)((longlong)param_1 + 0x8c) != 0) {
      lVar13 = param_1[0x14];
      uVar27 = uVar15;
      uVar43 = uVar15;
      uVar36 = uVar15;
      uVar38 = uVar15;
      do {
        uVar33 = (int)uVar43 + 1;
        lVar35 = uVar43 * 0xc08;
        *(int *)(*(longlong *)param_1[0xb3] + 0x80) =
             *(int *)(*(longlong *)param_1[0xb3] + 0x80) + *(int *)(lVar13 + 0x778 + lVar35);
        *(int *)(*(longlong *)param_1[0xb3] + 0x84) =
             *(int *)(*(longlong *)param_1[0xb3] + 0x84) + *(int *)(param_1[0x14] + 0x77c + lVar35);
        *(int *)(*(longlong *)param_1[0xb3] + 0x88) =
             *(int *)(*(longlong *)param_1[0xb3] + 0x88) + *(int *)(param_1[0x14] + 0x780 + lVar35);
        lVar13 = param_1[0x14];
        uVar9 = (int)uVar36 + *(int *)(lVar13 + 0x784 + lVar35);
        uVar36 = (ulonglong)uVar9;
        uVar40 = (int)uVar38 + *(int *)(lVar13 + 0x788 + lVar35);
        uVar38 = (ulonglong)uVar40;
        uVar24 = (int)uVar27 + *(int *)(lVar13 + 0x78c + lVar35);
        uVar27 = (ulonglong)uVar24;
        uVar43 = (ulonglong)uVar33;
      } while (uVar33 < *(uint *)((longlong)param_1 + 0x8c));
    }
    auVar45._0_8_ = DAT_183239460 / (double)(int)(uVar24 + uVar40 + uVar9);
    *(double *)(*(longlong *)param_1[0xb3] + 0x98) = (double)(int)uVar9 * auVar45._0_8_;
    *(double *)(*(longlong *)param_1[0xb3] + 0xa0) = (double)(int)uVar40 * auVar45._0_8_;
    *(double *)(*(longlong *)param_1[0xb3] + 0xa8) = (double)(int)uVar24 * auVar45._0_8_;
  }
  auVar45._0_8_ = DAT_1832b1af0;
  if (0 < *(int *)(param_1[0xb2] + 0x2c)) {
    if (*(int *)((longlong)param_1 + 0x8c) != 0) {
      do {
        lVar13 = uVar15 * 0xc08;
        *(longlong *)(*(longlong *)param_1[0xb3] + 0x1e8) =
             *(longlong *)(*(longlong *)param_1[0xb3] + 0x1e8) +
             *(longlong *)(param_1[0x14] + 0x8e0 + lVar13);
        *(longlong *)(*(longlong *)param_1[0xb3] + 0x1f0) =
             *(longlong *)(*(longlong *)param_1[0xb3] + 0x1f0) +
             *(longlong *)(param_1[0x14] + 0x8e8 + lVar13);
        *(longlong *)(*(longlong *)param_1[0xb3] + 0x1f8) =
             *(longlong *)(*(longlong *)param_1[0xb3] + 0x1f8) +
             *(longlong *)(param_1[0x14] + 0x8f0 + lVar13);
        *(longlong *)(*(longlong *)param_1[0xb3] + 0x200) =
             *(longlong *)(*(longlong *)param_1[0xb3] + 0x200) +
             *(longlong *)(param_1[0x14] + 0x8f8 + lVar13);
        *(longlong *)(*(longlong *)param_1[0xb3] + 0x208) =
             *(longlong *)(*(longlong *)param_1[0xb3] + 0x208) +
             *(longlong *)(param_1[0x14] + 0x900 + lVar13);
        *(longlong *)(*(longlong *)param_1[0xb3] + 0x210) =
             *(longlong *)(*(longlong *)param_1[0xb3] + 0x210) +
             *(longlong *)(param_1[0x14] + 0x908 + lVar13);
        *(longlong *)(*(longlong *)param_1[0xb3] + 0x218) =
             *(longlong *)(*(longlong *)param_1[0xb3] + 0x218) +
             *(longlong *)(param_1[0x14] + 0x910 + lVar13);
        *(longlong *)(*(longlong *)param_1[0xb3] + 0x220) =
             *(longlong *)(*(longlong *)param_1[0xb3] + 0x220) +
             *(longlong *)(param_1[0x14] + 0x918 + lVar13);
        uVar27 = 0;
        do {
          lVar35 = uVar27 + uVar15 * 0x181;
          plVar17 = (longlong *)(*(longlong *)param_1[0xb3] + 0x228 + uVar27 * 8);
          *plVar17 = *plVar17 + *(longlong *)(param_1[0x14] + 0x920 + lVar35 * 8);
          plVar17 = (longlong *)(*(longlong *)param_1[0xb3] + 0x248 + uVar27 * 8);
          *plVar17 = *plVar17 + *(longlong *)(param_1[0x14] + 0x940 + lVar35 * 8);
          uVar9 = (int)uVar27 + 1;
          lVar30 = uVar27 * 0x20;
          lVar35 = lVar30 + lVar13;
          plVar17 = (longlong *)(*(longlong *)param_1[0xb3] + 0x2a8 + lVar30);
          *plVar17 = *plVar17 + *(longlong *)((uVar27 + 0x4d) * 0x20 + param_1[0x14] + lVar13);
          plVar17 = (longlong *)(*(longlong *)param_1[0xb3] + 0x2b0 + lVar30);
          *plVar17 = *plVar17 + *(longlong *)(param_1[0x14] + 0x9a8 + lVar35);
          plVar17 = (longlong *)(*(longlong *)param_1[0xb3] + 0x2b8 + lVar30);
          *plVar17 = *plVar17 + *(longlong *)(param_1[0x14] + 0x9b0 + lVar35);
          lVar30 = lVar13 + uVar27 * 0x18;
          plVar17 = (longlong *)((uVar27 + 0x16) * 0x20 + *(longlong *)param_1[0xb3]);
          *plVar17 = *plVar17 + *(longlong *)(param_1[0x14] + 0x9b8 + lVar35);
          plVar17 = (longlong *)(*(longlong *)param_1[0xb3] + 0x328 + uVar27 * 0x18);
          *plVar17 = *plVar17 + *(longlong *)(param_1[0x14] + (uVar27 + 0x6c) * 0x18 + lVar13);
          plVar17 = (longlong *)(*(longlong *)param_1[0xb3] + 0x330 + uVar27 * 0x18);
          *plVar17 = *plVar17 + *(longlong *)(param_1[0x14] + 0xa28 + lVar30);
          plVar17 = (longlong *)(*(longlong *)param_1[0xb3] + 0x338 + uVar27 * 0x18);
          *plVar17 = *plVar17 + *(longlong *)(param_1[0x14] + 0xa30 + lVar30);
          uVar27 = (ulonglong)uVar9;
        } while (uVar9 <= *(uint *)(param_1[0xb2] + 0x328));
        uVar9 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)((longlong)param_1 + 0x8c));
    }
    lVar13 = *(longlong *)param_1[0xb3];
    lVar35 = *(longlong *)(lVar13 + 0x1e8) * 100;
    auVar46._0_8_ = (double)lVar35;
    if (lVar35 < 0) {
      auVar46._0_8_ = auVar46._0_8_ + auVar45._0_8_;
    }
    dVar47 = (double)*(longlong *)(lVar13 + 0x1f0);
    if (*(longlong *)(lVar13 + 0x1f0) < 0) {
      dVar47 = dVar47 + auVar45._0_8_;
    }
    *(double *)(lVar13 + 0xd8) = auVar46._0_8_ / dVar47;
    uVar15 = 0;
    do {
      lVar13 = *(longlong *)param_1[0xb3];
      lVar35 = *(longlong *)(lVar13 + 0x228 + uVar15 * 8) * 100;
      auVar46._0_8_ = (double)lVar35;
      if (lVar35 < 0) {
        auVar46._0_8_ = auVar46._0_8_ + auVar45._0_8_;
      }
      dVar47 = (double)*(longlong *)(lVar13 + 0x1f0);
      if (*(longlong *)(lVar13 + 0x1f0) < 0) {
        dVar47 = dVar47 + auVar45._0_8_;
      }
      *(double *)(lVar13 + 0xe0 + uVar15 * 8) = auVar46._0_8_ / dVar47;
      lVar13 = *(longlong *)param_1[0xb3];
      lVar35 = *(longlong *)(lVar13 + 0x248 + uVar15 * 8) * 100;
      auVar46._0_8_ = (double)lVar35;
      if (lVar35 < 0) {
        auVar46._0_8_ = auVar46._0_8_ + auVar45._0_8_;
      }
      dVar47 = (double)*(longlong *)(lVar13 + 0x1f0);
      if (*(longlong *)(lVar13 + 0x1f0) < 0) {
        dVar47 = dVar47 + auVar45._0_8_;
      }
      *(double *)(lVar13 + 0x100 + uVar15 * 8) = auVar46._0_8_ / dVar47;
      lVar13 = *(longlong *)param_1[0xb3];
      lVar35 = *(longlong *)(lVar13 + 0x328 + uVar15 * 0x18) * 100;
      auVar46._0_8_ = (double)lVar35;
      if (lVar35 < 0) {
        auVar46._0_8_ = auVar46._0_8_ + auVar45._0_8_;
      }
      dVar47 = (double)*(longlong *)(lVar13 + 0x1f0);
      if (*(longlong *)(lVar13 + 0x1f0) < 0) {
        dVar47 = dVar47 + auVar45._0_8_;
      }
      *(double *)(lVar13 + 0x120 + uVar15 * 0x18) = auVar46._0_8_ / dVar47;
      lVar13 = *(longlong *)param_1[0xb3];
      lVar35 = *(longlong *)(lVar13 + 0x330 + uVar15 * 0x18) * 100;
      auVar46._0_8_ = (double)lVar35;
      if (lVar35 < 0) {
        auVar46._0_8_ = auVar46._0_8_ + auVar45._0_8_;
      }
      dVar47 = (double)*(longlong *)(lVar13 + 0x1f0);
      if (*(longlong *)(lVar13 + 0x1f0) < 0) {
        dVar47 = dVar47 + auVar45._0_8_;
      }
      *(double *)(lVar13 + 0x128 + uVar15 * 0x18) = auVar46._0_8_ / dVar47;
      lVar13 = *(longlong *)param_1[0xb3];
      lVar35 = *(longlong *)(lVar13 + 0x338 + uVar15 * 0x18) * 100;
      auVar46._0_8_ = (double)lVar35;
      if (lVar35 < 0) {
        auVar46._0_8_ = auVar46._0_8_ + auVar45._0_8_;
      }
      dVar47 = (double)*(longlong *)(lVar13 + 0x1f0);
      if (*(longlong *)(lVar13 + 0x1f0) < 0) {
        dVar47 = dVar47 + auVar45._0_8_;
      }
      *(double *)(lVar13 + 0x130 + uVar15 * 0x18) = auVar46._0_8_ / dVar47;
      lVar13 = *(longlong *)param_1[0xb3];
      lVar18 = uVar15 * 0x20;
      lVar35 = *(longlong *)(lVar18 + 0x2b8 + lVar13);
      lVar30 = *(longlong *)(lVar18 + 0x2b0 + lVar13);
      lVar18 = *(longlong *)(lVar18 + 0x2a8 + lVar13) * 100;
      auVar46._0_8_ = (double)lVar18;
      if (lVar18 < 0) {
        auVar46._0_8_ = auVar46._0_8_ + auVar45._0_8_;
      }
      dVar47 = (double)*(longlong *)(lVar13 + 0x1f0);
      if (*(longlong *)(lVar13 + 0x1f0) < 0) {
        dVar47 = dVar47 + auVar45._0_8_;
      }
      *(double *)(lVar13 + 0x180 + uVar15 * 0x18) = auVar46._0_8_ / dVar47;
      lVar13 = (lVar35 + lVar30) * 100;
      auVar46._0_8_ = (double)lVar13;
      if (lVar13 < 0) {
        auVar46._0_8_ = auVar46._0_8_ + auVar45._0_8_;
      }
      lVar13 = *(longlong *)(*(longlong *)param_1[0xb3] + 0x1f0);
      dVar47 = (double)lVar13;
      if (lVar13 < 0) {
        dVar47 = dVar47 + auVar45._0_8_;
      }
      *(double *)(*(longlong *)param_1[0xb3] + 0x188 + uVar15 * 0x18) = auVar46._0_8_ / dVar47;
      lVar13 = *(longlong *)param_1[0xb3];
      lVar35 = *(longlong *)((uVar15 + 0x16) * 0x20 + lVar13) * 100;
      auVar46._0_8_ = (double)lVar35;
      if (lVar35 < 0) {
        auVar46._0_8_ = auVar46._0_8_ + auVar45._0_8_;
      }
      dVar47 = (double)*(longlong *)(lVar13 + 0x1f0);
      if (*(longlong *)(lVar13 + 0x1f0) < 0) {
        dVar47 = dVar47 + auVar45._0_8_;
      }
      uVar9 = (int)uVar15 + 1;
      *(double *)(lVar13 + 400 + uVar15 * 0x18) = auVar46._0_8_ / dVar47;
      uVar15 = (ulonglong)uVar9;
    } while (uVar9 <= *(uint *)(param_1[0xb2] + 0x328));
  }
  uVar15 = 0;
  if (1 < *(int *)(param_1[0xb2] + 0x2c)) {
    lVar13 = *(longlong *)param_1[0xb3];
    auVar46._0_8_ = (double)*(longlong *)(lVar13 + 0x200);
    if (*(longlong *)(lVar13 + 0x200) < 0) {
      auVar46._0_8_ = auVar46._0_8_ + auVar45._0_8_;
    }
    dVar47 = (double)*(longlong *)(lVar13 + 0x1f8);
    if (*(longlong *)(lVar13 + 0x1f8) < 0) {
      dVar47 = dVar47 + auVar45._0_8_;
    }
    *(double *)(lVar13 + 0xb0) = auVar46._0_8_ / dVar47;
    lVar13 = *(longlong *)param_1[0xb3];
    auVar46._0_8_ = (double)*(longlong *)(lVar13 + 0x208);
    if (*(longlong *)(lVar13 + 0x208) < 0) {
      auVar46._0_8_ = auVar46._0_8_ + auVar45._0_8_;
    }
    dVar47 = (double)*(longlong *)(lVar13 + 0x1f8);
    if (*(longlong *)(lVar13 + 0x1f8) < 0) {
      dVar47 = dVar47 + auVar45._0_8_;
    }
    *(double *)(lVar13 + 0xb8) = auVar46._0_8_ / dVar47;
    lVar13 = *(longlong *)param_1[0xb3];
    auVar46._0_8_ = (double)*(longlong *)(lVar13 + 0x210);
    if (*(longlong *)(lVar13 + 0x210) < 0) {
      auVar46._0_8_ = auVar46._0_8_ + auVar45._0_8_;
    }
    dVar47 = (double)*(longlong *)(lVar13 + 0x1f8);
    if (*(longlong *)(lVar13 + 0x1f8) < 0) {
      dVar47 = dVar47 + auVar45._0_8_;
    }
    *(double *)(lVar13 + 0xc0) = auVar46._0_8_ / dVar47;
    lVar13 = *(longlong *)param_1[0xb3];
    auVar46._0_8_ = (double)*(longlong *)(lVar13 + 0x1f8);
    if (*(longlong *)(lVar13 + 0x1f8) < 0) {
      auVar46._0_8_ = auVar46._0_8_ + auVar45._0_8_;
    }
    *(double *)(lVar13 + 200) = (double)*(longlong *)(lVar13 + 0x218) / auVar46._0_8_;
    lVar13 = *(longlong *)param_1[0xb3];
    auVar46._0_8_ = (double)*(longlong *)(lVar13 + 0x220);
    if (*(longlong *)(lVar13 + 0x220) < 0) {
      auVar46._0_8_ = auVar46._0_8_ + auVar45._0_8_;
    }
    dVar47 = (double)*(longlong *)(lVar13 + 0x1f8);
    if (*(longlong *)(lVar13 + 0x1f8) < 0) {
      dVar47 = dVar47 + auVar45._0_8_;
    }
    *(double *)(lVar13 + 0xd0) = auVar46._0_8_ / dVar47;
  }
  plVar17 = param_1 + 0xbb;
  (**(code **)(*plVar17 + 0x10))(plVar17);
  plVar41 = param_1 + 0x3ab;
  thunk_FUN_182dbe940(plVar41,param_1 + 0x422);
  *plVar41 = (longlong)plVar17;
  if (*(int *)(param_1[0xb2] + 300) != 0) {
    thunk_FUN_182d95f90(param_1,0);
  }
  *plVar41 = (longlong)plVar17;
  uVar9 = *(uint *)(param_1[0xb2] + 0x2b4);
  if (uVar9 < 2) {
    if (*(int *)(param_1[0xb2] + 700) != 0) {
      lVar13 = param_1[0xb1];
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar13 + 0x138f0));
      thunk_FUN_182da8dc0(param_1[0xb1],plVar31 + 0x11f);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar13 + 0x138f0));
    }
    in_stack_fffffffffffffe18 = in_stack_fffffffffffffe18 & 0xffffffff00000000;
    thunk_FUN_182dbdea0(plVar41,plVar31,*(undefined8 *)param_1[0xb3],0,in_stack_fffffffffffffe18,
                        *(undefined4 *)((longlong)plVar31 + 0x8dc));
    uVar12 = thunk_FUN_182f45000(param_1 + 0x4aa,param_1[0xb8],local_19c,param_1[0xb6]);
    *plVar41 = (longlong)plVar17;
    if (*(char *)(plVar31[1] + 0x1a) != '\0') {
      thunk_FUN_182dbe310(plVar41,param_1[0xb8],*(int *)(*plVar31 + 0x30) + -1,uVar12);
    }
    thunk_FUN_182d90e10(plVar17);
    thunk_FUN_182f44d30(param_1 + 0x4aa,*(undefined4 *)((longlong)plVar31 + 0x8d4),plVar17);
  }
  else {
    uVar27 = uVar15;
    if (uVar9 != 0) {
      do {
        uVar12 = (undefined4)(in_stack_fffffffffffffe18 >> 0x20);
        (**(code **)(*plVar17 + 0x10))(plVar17);
        uVar9 = (uint)uVar15;
        lVar13 = param_1[0x12];
        if (*(int *)(param_1[0xb2] + 700) != 0) {
          lVar35 = param_1[0xb1];
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar35 + 0x138f0));
          thunk_FUN_182da8dc0(param_1[0xb1],plVar31 + 0x11f);
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar35 + 0x138f0));
        }
        in_stack_fffffffffffffe18 = CONCAT44(uVar12,(uint)*(ushort *)(param_1 + 0x15));
        thunk_FUN_182dbdea0(param_1 + 0x3ab,plVar31,*(undefined8 *)param_1[0xb3],uVar9 * (int)lVar13
                            ,in_stack_fffffffffffffe18,*(undefined4 *)((longlong)plVar31 + 0x8dc));
        uVar43 = uVar15;
        if (uVar9 < *(uint *)((longlong)param_1 + 0x8c)) {
          do {
            if (*(int *)(uVar43 * 0xc08 + 0x770 + param_1[0x14]) != (int)uVar27) break;
            uVar40 = (int)uVar43 + 1;
            uVar43 = (ulonglong)uVar40;
          } while (uVar40 < *(uint *)((longlong)param_1 + 0x8c));
        }
        iVar21 = (int)uVar43 - uVar9;
        uVar12 = thunk_FUN_182f45000(param_1 + 0x4aa,param_1[0xb8] + uVar15 * 4,iVar21,
                                     uVar15 * 0x20 + param_1[0xb6]);
        param_1[0x3ab] = (longlong)plVar17;
        if (*(char *)(plVar31[1] + 0x1a) != '\0') {
          thunk_FUN_182dbe310(param_1 + 0x3ab,param_1[0xb8] + uVar15 * 4,iVar21 + -1,uVar12);
        }
        thunk_FUN_182d90e10(plVar17);
        thunk_FUN_182f44d30(param_1 + 0x4aa,*(undefined4 *)((longlong)plVar31 + 0x8d4),plVar17);
        uVar9 = (int)uVar27 + 1;
        uVar15 = uVar43;
        uVar27 = (ulonglong)uVar9;
      } while (uVar9 < *(uint *)(param_1[0xb2] + 0x2b4));
    }
  }
  iVar21 = 0;
  if ((bVar42 || bVar5) && (*(int *)(param_1[0xb2] + 0x398) != 0)) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
  }
  uVar12 = (undefined4)(in_stack_fffffffffffffe18 >> 0x20);
  iVar39 = *(int *)(param_1[0xb2] + 0x80);
  if (iVar39 != 0) {
    iVar8 = *(int *)(*(longlong *)(param_1[0xb3] + 0x42f0) + 0x3c);
    uVar9 = 1;
    if (iVar8 != 0) {
      uVar9 = 3;
    }
    if (iVar39 == 1) {
      *(undefined4 *)(param_1 + 0x74) = 0;
      lVar13 = (longlong)param_1 + 0x404;
      uVar15 = (ulonglong)uVar9;
      lVar35 = (longlong)param_1 + 0x3a4;
      do {
        thunk_FUN_182f387f0(lVar13,lVar35);
        uVar12 = (undefined4)(in_stack_fffffffffffffe18 >> 0x20);
        lVar35 = lVar35 + 0x10;
        lVar13 = lVar13 + 0x58;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
      iVar21 = 0x11;
      if (iVar8 != 0) {
        iVar21 = 0x31;
      }
    }
    else if (iVar39 == 2) {
      *(undefined4 *)(param_1 + 0x74) = 1;
      lVar13 = (longlong)param_1 + 0x50c;
      lVar35 = (longlong)param_1 + 0x3a4;
      uVar15 = (ulonglong)uVar9;
      do {
        thunk_FUN_182f3a240(lVar13,lVar35);
        uVar12 = (undefined4)(in_stack_fffffffffffffe18 >> 0x20);
        lVar35 = lVar35 + 0x10;
        lVar13 = lVar13 + 4;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
      iVar21 = 3;
      if (iVar8 != 0) {
        iVar21 = 7;
      }
    }
    else if (iVar39 == 3) {
      *(undefined4 *)(param_1 + 0x74) = 2;
      uVar15 = (ulonglong)uVar9;
      plVar41 = param_1 + 0xa3;
      do {
        thunk_FUN_182f397c0((int)*plVar41,(longlong)param_1 + (longlong)iVar21 * 0x10 + 0x3a4);
        uVar12 = (undefined4)(in_stack_fffffffffffffe18 >> 0x20);
        iVar21 = iVar21 + 1;
        plVar41 = (longlong *)((longlong)plVar41 + 4);
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
      iVar21 = uVar9 * 4 + 1;
    }
    (**(code **)(*plVar17 + 0x10))(plVar17);
    thunk_FUN_182f72bf0(param_1 + 0x71,iVar21);
    thunk_FUN_182f72c10(param_1 + 0x71,plVar17,*plVar31);
    thunk_FUN_182f72b40(param_1 + 0x71,plVar17,1,*(undefined4 *)(param_1[0xb2] + 0x398),
                        CONCAT44(uVar12,0x28),param_1 + 0x4aa);
  }
  uVar27 = 0;
  uVar15 = uVar27;
  if (*(uint *)(param_1 + 0x4ca) != 0) {
    puVar20 = (uint *)((longlong)param_1 + 0x2554);
    uVar43 = uVar27;
    do {
      if (1 < puVar20[-1] - 0x27) {
        if (((int)uVar43 == 0) || (lVar13 = 3, puVar20[-1] - 0x21 < 2)) {
          lVar13 = 4;
        }
        uVar15 = (uVar15 + *puVar20) - lVar13;
      }
      uVar9 = (int)uVar43 + 1;
      uVar43 = (ulonglong)uVar9;
      puVar20 = puVar20 + 4;
    } while (uVar9 < *(uint *)(param_1 + 0x4ca));
  }
  param_1[0x7f] = uVar15 * 8;
  local_1bc = 0;
  iVar21 = thunk_FUN_182f79b30(*(undefined8 *)(param_1[0xb1] + 0x10160),param_1[0xb3],uVar15 * 8,
                               param_1 + 0x1a,&local_1bc);
  if (iVar21 < 0) {
    *(undefined1 *)(param_1[0xb1] + 0x13686) = 1;
  }
  if (0 < local_1bc) {
    local_1bc = local_1bc + -0x30 >> 3;
    (**(code **)(*plVar17 + 0x10))(plVar17);
    for (; 0 < local_1bc; local_1bc = local_1bc + -1) {
      (**(code **)*plVar17)(plVar17,0xff,8);
    }
    thunk_FUN_182d90e10(plVar17);
    thunk_FUN_182f44d30(param_1 + 0x4aa,0x26,plVar17);
    param_1[0x7f] =
         (*(uint *)((longlong)param_1 + (ulonglong)((int)param_1[0x4ca] - 1) * 0x10 + 0x2554) +
         uVar15) * 8 + -0x18;
  }
  lVar35 = thunk_FUN_182d8fc10();
  lVar13 = local_d8;
  param_1[0xaa] = lVar35;
  if (local_1a8 != 0) {
    plVar17 = plVar31 + 2;
    plVar31 = plVar31 + 0x11f;
    uVar15 = uVar27;
    do {
      plVar41 = plVar17;
      uVar43 = uVar27;
      if (0 < (int)*plVar31) {
        do {
          uVar9 = (int)uVar43 + 1;
          LOCK();
          *(int *)(*plVar41 + 0x42dc) = *(int *)(*plVar41 + 0x42dc) + -1;
          UNLOCK();
          plVar41 = plVar41 + 1;
          uVar43 = (ulonglong)uVar9;
        } while ((int)uVar9 < (int)*plVar31);
      }
      uVar15 = uVar15 + 1;
      plVar31 = (longlong *)((longlong)plVar31 + 4);
      plVar17 = plVar17 + 0x11;
    } while ((longlong)uVar15 < (longlong)local_1a8);
  }
  if (((param_1[0xb4] != 0) &&
      (((double)param_1[0x58] <= DAT_183974d08 && DAT_183974d08 != (double)param_1[0x58] ||
       (*(int *)(param_1[0xb2] + 0x1d4) == 0)))) &&
     ((*(int *)(param_1[0xb2] + 0xe0) != 0 || (*(int *)(param_1[0xb2] + 0xe4) != 0)))) {
    lVar35 = local_d8;
    uVar15 = uVar27;
    if (0 < local_d8) {
      do {
        lVar30 = 0x10000;
        lVar18 = (longlong)(int)param_1[3] * 0x18060 +
                 *(longlong *)(uVar15 + 0x1238 + param_1[0xb5]);
        uVar43 = uVar27;
        do {
          lVar32 = 0x400;
          do {
            *(int *)(uVar43 + param_1[0xb4]) =
                 *(int *)(uVar43 + param_1[0xb4]) + *(int *)(lVar18 + uVar43);
            uVar43 = uVar43 + 4;
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          *(int *)(lVar30 + param_1[0xb4]) =
               *(int *)(lVar30 + param_1[0xb4]) + *(int *)(lVar18 + lVar30);
          lVar30 = lVar30 + 4;
        } while (lVar30 < 0x10040);
        lVar35 = lVar35 + -1;
        uVar15 = uVar15 + 0x8dde0;
      } while (lVar35 != 0);
    }
    thunk_FUN_182d96e10(param_1);
    if (0 < lVar13) {
      do {
        lVar35 = 0x100;
        pvVar34 = (void *)((longlong)(int)param_1[3] * 0x18060 +
                          *(longlong *)(uVar27 + 0x1238 + param_1[0xb5]));
        puVar19 = (undefined8 *)(param_1[0xb4] + 0x10040);
        puVar23 = (undefined8 *)((longlong)pvVar34 + 0x10040);
        do {
          uVar14 = puVar19[1];
          *puVar23 = *puVar19;
          puVar23[1] = uVar14;
          uVar14 = puVar19[3];
          puVar23[2] = puVar19[2];
          puVar23[3] = uVar14;
          uVar14 = puVar19[5];
          puVar23[4] = puVar19[4];
          puVar23[5] = uVar14;
          uVar14 = puVar19[7];
          puVar23[6] = puVar19[6];
          puVar23[7] = uVar14;
          uVar14 = puVar19[9];
          puVar23[8] = puVar19[8];
          puVar23[9] = uVar14;
          uVar14 = puVar19[0xb];
          puVar23[10] = puVar19[10];
          puVar23[0xb] = uVar14;
          uVar14 = puVar19[0xd];
          puVar23[0xc] = puVar19[0xc];
          puVar23[0xd] = uVar14;
          uVar14 = puVar19[0xf];
          puVar23[0xe] = puVar19[0xe];
          puVar23[0xf] = uVar14;
          lVar35 = lVar35 + -1;
          puVar19 = puVar19 + 0x10;
          puVar23 = puVar23 + 0x10;
        } while (lVar35 != 0);
        memset(pvVar34,0,0x10040);
        uVar27 = uVar27 + 0x8dde0;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  lVar13 = thunk_FUN_182d8fc10();
  param_1[0xab] = lVar13;
  return;
}


