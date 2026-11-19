/* 0x18299e8c0 size=0x2f60
   WaitForSingleObject
*/


void FUN_18299e8c0(longlong *param_1)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  DWORD DVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint *puVar20;
  void *pvVar21;
  int iVar22;
  ulonglong *puVar23;
  longlong *plVar24;
  undefined8 *puVar25;
  LPCRITICAL_SECTION p_Var26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong *puVar29;
  longlong *plVar30;
  uint uVar31;
  uint uVar32;
  ulonglong *puVar33;
  longlong lVar34;
  longlong *plVar35;
  longlong lVar36;
  uint uVar37;
  longlong *plVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong *puVar41;
  uint uVar42;
  uint uVar43;
  longlong *plVar44;
  int iVar45;
  ulonglong uVar46;
  bool bVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  int local_res20 [2];
  code *in_stack_fffffffffffffdc8;
  code *pcVar51;
  longlong *in_stack_fffffffffffffdd0;
  uint local_210;
  uint local_20c;
  longlong *local_200;
  longlong *local_1f8;
  longlong local_1f0;
  ulonglong local_1e8;
  longlong *local_1d8;
  longlong local_1d0;
  longlong local_1b8;
  longlong local_1b0;
  undefined **local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined2 local_18c;
  undefined **local_188;
  undefined8 local_180;
  undefined8 local_178;
  int local_170;
  undefined **local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined **local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  int local_128;
  longlong local_120;
  undefined **local_118;
  _RTL_CRITICAL_SECTION local_110;
  _RTL_CRITICAL_SECTION local_e8;
  RTL_CONDITION_VARIABLE local_c0;
  int local_b8;
  int local_b0;
  undefined8 local_ac;
  longlong *local_a0;
  undefined8 local_98;
  LPCRITICAL_SECTION local_90;
  LPCRITICAL_SECTION local_88;
  LPCRITICAL_SECTION local_80;
  LPCRITICAL_SECTION local_78;
  
  local_98 = 0xfffffffffffffffe;
  lVar12 = thunk_FUN_18299c7f0();
  param_1[0xa7] = lVar12;
  uVar28 = 0;
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
  plVar35 = (longlong *)**(longlong **)param_1[0xb3];
  if ((*(int *)(param_1[0xb2] + 0x74) != 0) &&
     ((*(int *)((undefined8 *)param_1[0xb3] + 3) != 0 || (*(int *)(param_1[0xb2] + 0x6c) != 0)))) {
    plVar24 = param_1 + 0xbb;
    (**(code **)(*plVar24 + 0x10))(plVar24);
    param_1[0x3ab] = (longlong)plVar24;
    thunk_FUN_1829ba980(param_1 + 0x3ab,plVar35);
    thunk_FUN_18299d9c0(plVar24);
    thunk_FUN_182d48030(param_1 + 0x4aa,0x23);
    if (*(int *)(param_1[0xb2] + 0x398) != 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
    }
  }
  if ((*(char *)(param_1[0xb3] + 0x105) != '\0') && (*(int *)(param_1[0xb2] + 0x6c) != 0)) {
    if (*(int *)(param_1[0xb2] + 700) != 0) {
      p_Var26 = (LPCRITICAL_SECTION)(param_1[0xb1] + 0x138f0);
      local_90 = p_Var26;
      EnterCriticalSection(p_Var26);
      thunk_FUN_1829b8590(param_1[0xb1]);
      LeaveCriticalSection(p_Var26);
    }
    lVar12 = param_1[0xb1];
    if ((*(int *)(*(longlong *)(lVar12 + 0x10150) + 0x1fc) == 0) ||
       (*(int *)(*(longlong *)(lVar12 + 0x10150) + 0x2c0) == 0)) {
      thunk_FUN_1829b1120(lVar12,param_1 + 0x4aa,param_1 + 0x3ab,param_1 + 0xbb);
    }
    else {
      p_Var26 = (LPCRITICAL_SECTION)(lVar12 + 0x13b20);
      local_88 = p_Var26;
      EnterCriticalSection(p_Var26);
      cVar7 = thunk_FUN_1829a9170(param_1[0xb1]);
      if (cVar7 == '\0') {
        thunk_FUN_18299c2b0(param_1[0xb2],&DAT_18393797c,0,"compute commonly RPS failed!\n");
        *(undefined1 *)(param_1[0xb1] + 0x13686) = 1;
      }
      thunk_FUN_1829b1120(param_1[0xb1],param_1 + 0x4aa,param_1 + 0x3ab,param_1 + 0xbb);
      LeaveCriticalSection(p_Var26);
    }
  }
  lVar12 = *(longlong *)(param_1[0xb1] + 0x10150);
  if ((*(int *)(lVar12 + 0x1fc) != 0) && (*(int *)(lVar12 + 0x2c0) != 0)) {
    *(undefined4 *)(**(longlong **)param_1[0xb3] + 0x8f0) =
         *(undefined4 *)
          ((longlong)*(int *)(param_1[0xb3] + 0x1c) * 0x2b8 + 0x218 +
          *(longlong *)(*(longlong *)(param_1[0xb1] + 0x10160) + 0x870));
  }
  if (((int)plVar35[0x11b] == 1) && (*(char *)(plVar35[1] + 0x14) != '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (((int)plVar35[0x11b] == 0) && (*(char *)(plVar35[1] + 0x15) != '\0')) {
    bVar47 = true;
  }
  else {
    bVar47 = false;
  }
  local_1d8 = (longlong *)0x0;
  if (*(longlong *)(param_1[0xb2] + 0x378) == 0) {
LAB_18299ec0a:
    if ((!bVar1) && (!bVar47)) goto LAB_18299ec13;
    if (*(longlong *)(param_1[0xb2] + 0x378) == 0) {
      local_118 = x265::BondedTaskGroup::vftable;
      InitializeCriticalSection(&local_110);
      local_b8 = 0;
      InitializeCriticalSection(&local_e8);
      InitializeConditionVariable(&local_c0);
      local_ac = 0;
      local_b0 = 0;
      local_118 = x265::FrameEncoder::WeightAnalysis::vftable;
      local_a0 = param_1;
      if (param_1[1] == 0) {
LAB_18299ed4e:
        thunk_FUN_182d82230(plVar35,param_1[0xb3]);
      }
      else {
        iVar22 = thunk_FUN_182d47b00(param_1[1],1,param_1[2],&local_118);
        local_b0 = local_b0 + iVar22;
        if (iVar22 == 0) goto LAB_18299ed4e;
        thunk_FUN_1829a6790(&local_118);
      }
      local_118 = x265::BondedTaskGroup::vftable;
      EnterCriticalSection(&local_e8);
      iVar22 = local_b8;
      LeaveCriticalSection(&local_e8);
      if (local_b0 != iVar22) {
        do {
          EnterCriticalSection(&local_e8);
          if (local_b8 == iVar22) {
            SleepConditionVariableCS(&local_c0,&local_e8,0xffffffff);
          }
          LeaveCriticalSection(&local_e8);
          iVar22 = local_b8;
        } while (local_b0 != local_b8);
      }
      DeleteCriticalSection(&local_e8);
      DeleteCriticalSection(&local_110);
    }
    else {
      plVar24 = plVar35 + 0x46;
      plVar38 = plVar35 + 0x11f;
      uVar14 = uVar28;
      plVar44 = plVar24;
      uVar46 = uVar28;
      do {
        do {
          iVar22 = 1;
          plVar16 = plVar24;
          if (1 < (int)*plVar38) {
            do {
              *(int *)((longlong)plVar16 + 0x34) = 1 << ((byte)(int)*local_1d8 & 0x1f);
              *(int *)(plVar16 + 6) = (int)*local_1d8;
              *(undefined4 *)(plVar16 + 7) = 0;
              *(undefined1 *)((longlong)plVar16 + 0x3c) = 0;
              iVar22 = iVar22 + 1;
              plVar16 = plVar16 + 6;
            } while (iVar22 < (int)*plVar38);
          }
          lVar12 = local_1d8[1];
          *plVar24 = *local_1d8;
          plVar24[1] = lVar12;
          local_1d8 = local_1d8 + 2;
          uVar19 = (int)uVar14 + 1;
          plVar24 = plVar24 + 2;
          iVar22 = 1;
          if (*(int *)(param_1[0xb2] + 0x3c) != 0) {
            iVar22 = 3;
          }
          uVar14 = (ulonglong)uVar19;
        } while ((int)uVar19 < iVar22);
        uVar19 = (int)uVar46 + 1;
        uVar46 = (ulonglong)uVar19;
        plVar38 = (longlong *)((longlong)plVar38 + 4);
        plVar24 = plVar44 + 0x60;
        uVar14 = uVar28;
        plVar44 = plVar24;
      } while ((int)uVar19 < (int)(2 - (uint)((int)plVar35[0x11b] != 0)));
    }
  }
  else {
    if ((bVar1) || (bVar47)) {
      local_1d8 = *(longlong **)(param_1[0xb3] + 0x4320);
      goto LAB_18299ec0a;
    }
LAB_18299ec13:
    thunk_FUN_182d3e100(plVar35);
  }
  if ((*(longlong *)(param_1[0xb2] + 0x370) != 0) && ((bVar1 || (bVar47)))) {
    local_1d8 = *(longlong **)(param_1[0xb3] + 0x4320);
  }
  local_1d0 = 0;
  if ((int)plVar35[0x11b] == 1) {
    local_1e8 = 1;
  }
  else {
    local_1e8 = uVar28;
    if ((int)plVar35[0x11b] == 0) {
      local_1e8 = 2;
    }
    if (local_1e8 == 0) goto LAB_18299f028;
  }
  uVar19 = 0;
  local_1f0 = 0;
  plVar24 = plVar35 + 0x46;
  plVar38 = plVar35 + 0x24;
  plVar44 = plVar35 + 0x11f;
  plVar16 = local_1d8;
  do {
    uVar14 = 0;
    if (0 < (int)*plVar44) {
      plVar30 = plVar38;
      uVar46 = uVar14;
      do {
        plVar16 = (longlong *)0x0;
        iVar22 = (int)uVar14;
        if (((bVar1) || (bVar47)) &&
           (*(char *)((longlong)plVar35 + (local_1f0 + uVar46) * 0x30 + 0x23c) != '\0')) {
          plVar16 = plVar35 + ((longlong)(int)uVar28 * 0x10 + (longlong)iVar22) * 6 + 0x46;
        }
        lVar12 = *(longlong *)(plVar30[-0x22] + 8);
        *plVar30 = lVar12;
        thunk_FUN_182d48ba0(param_1 + ((longlong)iVar22 + (longlong)(int)uVar28 * 0x11) * 0x16 +
                                      0xbf,lVar12,plVar16,param_1[0xb2]);
        uVar14 = (ulonglong)(iVar22 + 1U);
        uVar46 = uVar46 + 1;
        plVar30 = plVar30 + 1;
        plVar16 = local_1d8;
      } while ((int)(iVar22 + 1U) < (int)*plVar44);
    }
    if ((*(longlong *)(param_1[0xb2] + 0x370) != 0) && ((bVar1 || (bVar47)))) {
      iVar22 = 0;
      plVar30 = plVar24;
      do {
        lVar12 = plVar30[1];
        *plVar16 = *plVar30;
        plVar16[1] = lVar12;
        plVar16 = plVar16 + 2;
        iVar22 = iVar22 + 1;
        plVar30 = plVar30 + 2;
        iVar45 = 1;
        if (*(int *)(param_1[0xb2] + 0x3c) != 0) {
          iVar45 = 3;
        }
        local_1d8 = plVar16;
      } while (iVar22 < iVar45);
    }
    uVar19 = uVar19 + 1;
    uVar28 = (ulonglong)uVar19;
    local_1d0 = local_1d0 + 1;
    plVar44 = (longlong *)((longlong)plVar44 + 4);
    plVar38 = plVar38 + 0x11;
    local_1f0 = local_1f0 + 0x10;
    plVar24 = plVar24 + 0x60;
  } while (local_1d0 < (longlong)local_1e8);
LAB_18299f028:
  iVar22 = 1;
  lVar12 = param_1[1];
  if ((lVar12 != 0) && (iVar22 = *(int *)(lVar12 + 0xc), *(int *)(param_1[0xb2] + 0x10) == 0)) {
    iVar22 = iVar22 + *(int *)(lVar12 + 8);
  }
  lVar12 = param_1[0xb3];
  *(undefined4 *)((longlong)param_1 + 0x26c) = *(undefined4 *)(lVar12 + 0x1c);
  bVar4 = false;
  bVar5 = true;
  if ((*(int *)(param_1[0xb2] + 0x308) != 0) && (iVar45 = 0, 0 < *(int *)(lVar12 + 0x42b8))) {
    lVar27 = 0;
    bVar5 = true;
    do {
      lVar34 = *(longlong *)(lVar12 + 0x42c0);
      if (*(int *)(lVar27 + 4 + lVar34) == 4) {
        pvVar21 = *(void **)(param_1[0xb1] + 0x13b88);
        if ((pvVar21 == (void *)0x0) ||
           (*(int *)(lVar27 + lVar34) != *(int *)(param_1[0xb1] + 0x13b80))) {
          bVar4 = true;
          if (pvVar21 != (void *)0x0) {
            thunk_FUN_18299c7d0();
          }
          uVar13 = FUN_180013282((longlong)*(int *)(lVar27 + lVar34));
          *(undefined8 *)(param_1[0xb1] + 0x13b88) = uVar13;
LAB_18299f102:
          *(undefined4 *)(param_1[0xb1] + 0x13b84) = *(undefined4 *)(lVar27 + 4 + lVar34);
          *(undefined4 *)(param_1[0xb1] + 0x13b80) = *(undefined4 *)(lVar27 + lVar34);
          memcpy(*(void **)(param_1[0xb1] + 0x13b88),*(void **)(lVar27 + 8 + lVar34),
                 (longlong)*(int *)(lVar27 + lVar34));
        }
        else {
          iVar8 = memcmp(pvVar21,*(void **)(lVar27 + 8 + lVar34),(longlong)*(int *)(lVar27 + lVar34)
                        );
          if (iVar8 != 0) {
            bVar4 = true;
            goto LAB_18299f102;
          }
          if (bVar4) goto LAB_18299f102;
        }
        lVar12 = param_1[0xb3];
        if ((bVar4) || (*(int *)(lVar12 + 0xf4) == 1)) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
      }
      iVar45 = iVar45 + 1;
      lVar27 = lVar27 + 0x10;
    } while (iVar45 < *(int *)(lVar12 + 0x42b8));
  }
  uVar19 = thunk_FUN_182d7d680(*(undefined8 *)(param_1[0xb1] + 0x10160),param_1[0xb3],param_1 + 0x1a
                              );
  param_1[0x58] = (longlong)(double)(int)uVar19;
  local_120 = (longlong)iVar22;
  if (param_1[0xb4] != 0) {
    if (((int)uVar19 < 0x34) || (*(int *)(*(longlong *)(param_1[0xb3] + 0x42f0) + 0x1d4) == 0)) {
      if ((*(int *)(param_1[0xb2] + 0xe0) == 0) && (*(int *)(param_1[0xb2] + 0xe4) == 0)) {
        lVar12 = 0;
        lVar27 = local_120;
        if (0 < iVar22) {
          do {
            *(undefined8 *)
             ((longlong)(int)param_1[3] * 0x18060 + 0x18040 +
             *(longlong *)(lVar12 + 0x1030 + param_1[0xb5])) = 0;
            lVar12 = lVar12 + 0x8d618;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
        }
      }
      else {
        lVar12 = 0;
        lVar27 = local_120;
        if (0 < iVar22) {
          do {
            lVar17 = (longlong)(int)param_1[3] * 0x18060;
            lVar34 = *(longlong *)(lVar12 + 0x1030 + param_1[0xb5]);
            *(longlong *)(lVar17 + 0x18040 + lVar34) = lVar17 + 0x10040 + lVar34;
            lVar34 = *(longlong *)(lVar12 + 0x1030 + param_1[0xb5]) +
                     (longlong)(int)param_1[3] * 0x18060;
            *(longlong *)(lVar34 + 0x18048) = lVar34;
            lVar17 = (longlong)(int)param_1[3] * 0x18060;
            lVar34 = *(longlong *)(lVar12 + 0x1030 + param_1[0xb5]);
            *(longlong *)(lVar17 + 0x18050 + lVar34) = lVar17 + 0x10000 + lVar34;
            lVar12 = lVar12 + 0x8d618;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
        }
      }
    }
    else if (0 < iVar22) {
      lVar12 = 0;
      lVar27 = local_120;
      do {
        *(longlong *)
         ((longlong)(int)param_1[3] * 0x18060 + 0x18040 +
         *(longlong *)(lVar12 + 0x1030 + param_1[0xb5])) =
             *(longlong *)(param_1[0xb1] + 0x10040) + (longlong)(int)(uVar19 - 0x34) * 0x8000;
        *(longlong *)
         ((longlong)(int)param_1[3] * 0x18060 + 0x18048 +
         *(longlong *)(lVar12 + 0x1030 + param_1[0xb5])) = param_1[0xb1];
        *(longlong *)
         ((longlong)(int)param_1[3] * 0x18060 + 0x18050 +
         *(longlong *)(lVar12 + 0x1030 + param_1[0xb5])) = param_1[0xb1] + 0x10000;
        lVar12 = lVar12 + 0x8d618;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
    }
  }
  uVar14 = 0;
  uVar28 = (ulonglong)uVar19;
  if ((int)uVar19 < 0) {
    uVar28 = uVar14;
  }
  iVar22 = 0x33;
  if ((int)uVar28 < 0x33) {
    iVar22 = (int)uVar28;
  }
  *(int *)((longlong)plVar35 + 0x8dc) = iVar22;
  if (*(int *)(param_1[0xb2] + 0x2f4) != 0) {
    dVar49 = DAT_18397a210 - (double)(int)uVar19 * DAT_18330d6e0;
    lVar12 = param_1[0xb1];
    dVar48 = floor(dVar49 * *(double *)(lVar12 + 0x13b50) + DAT_1832576d0);
    uVar19 = (int)dVar48;
    if ((int)dVar48 < -0xc) {
      uVar19 = 0xfffffff4;
    }
    uVar28 = uVar14;
    if ((int)uVar19 < 0) {
      uVar28 = (ulonglong)uVar19;
    }
    iVar22 = (int)uVar28;
    dVar49 = floor(dVar49 * *(double *)(lVar12 + 0x13b58) + DAT_1832576d0);
    uVar19 = (int)dVar49;
    if ((int)dVar49 < -0xc) {
      uVar19 = 0xfffffff4;
    }
    uVar28 = uVar14;
    if ((int)uVar19 < 0) {
      uVar28 = (ulonglong)uVar19;
    }
    if (*(int *)(plVar35[1] + 4) + iVar22 < -0xc) {
      iVar22 = -0xc - *(int *)(plVar35[1] + 4);
    }
    *(int *)(plVar35 + 0x11c) = iVar22;
    iVar22 = (int)uVar28;
    if (*(int *)(plVar35[1] + 8) + iVar22 < -0xc) {
      iVar22 = -0xc - *(int *)(plVar35[1] + 8);
    }
    *(int *)((longlong)plVar35 + 0x8e4) = iVar22;
  }
  if ((*(int *)(param_1[0xb2] + 0x2b8) != 0) && (*(int *)(param_1[0xb2] + 0x6c) != 0)) {
    lVar12 = param_1[0xb1];
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar12 + 0x13690));
    lVar27 = 0x136c0;
    uVar28 = uVar14;
    do {
      iVar22 = (*(int *)((longlong)plVar35 + 0x8dc) - (int)uVar28) + -1;
      if (iVar22 < 1) {
        iVar22 = iVar22 * -2;
      }
      else {
        iVar22 = iVar22 * 2 + -1;
      }
      local_128 = 0x1f;
      if (iVar22 + 1U != 0) {
        for (; iVar22 + 1U >> local_128 == 0; local_128 = local_128 + -1) {
        }
      }
      *(longlong *)(param_1[0xb1] + lVar27) =
           *(longlong *)(param_1[0xb1] + lVar27) + (longlong)(local_128 * 2 + 1);
      uVar28 = (ulonglong)((int)uVar28 + 1);
      lVar27 = lVar27 + 8;
    } while (lVar27 < 0x138f0);
    *(int *)(param_1[0xb1] + 0x136b8) = *(int *)(param_1[0xb1] + 0x136b8) + 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar12 + 0x13690));
  }
  thunk_FUN_1829c0ee0(param_1 + 0x422,plVar35);
  thunk_FUN_182d3b4e0(param_1 + 0x499,param_1[0xb3],param_1 + 0x422);
  thunk_FUN_182d47ce0(param_1);
  thunk_FUN_1829beaf0(param_1 + 0x3ab);
  if (*(int *)(param_1[0xb2] + 0x2b4) != 0) {
    do {
      uVar19 = *(uint *)(param_1[0x16] + uVar14 * 4);
      uVar42 = (int)uVar14 + 1;
      if (uVar19 < *(uint *)(param_1[0x16] + (ulonglong)uVar42 * 4)) {
        do {
          lVar12 = (ulonglong)uVar19 * 0xc08 + param_1[0x14];
          *(undefined1 *)(lVar12 + 0xbf8) = 0;
          *(undefined1 *)(lVar12 + 0xbf9) = 0;
          *(undefined4 *)(lVar12 + 0xbfc) = 0;
          *(undefined4 *)(lVar12 + 0xc00) = 0;
          *(int *)(lVar12 + 0x770) = (int)uVar14;
          memset((void *)(lVar12 + 0x778),0,0x458);
          thunk_FUN_1829beaf0(lVar12 + 0x3b8);
          uVar19 = uVar19 + 1;
        } while (uVar19 < *(uint *)(param_1[0x16] + (ulonglong)uVar42 * 4));
      }
      uVar14 = (ulonglong)uVar42;
    } while (uVar42 < *(uint *)(param_1[0xb2] + 0x2b4));
  }
  puVar29 = (ulonglong *)0x0;
  iVar22 = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (*(int *)(param_1[0xb2] + 0x10) == 0) {
    uVar19 = *(uint *)(param_1[0xb2] + 0x2b4);
  }
  else {
    uVar19 = *(uint *)(*plVar35 + 0x30);
  }
  uVar28 = CONCAT44(0,uVar19);
  if (param_1[0xb6] == 0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar28;
    uVar14 = SUB168(ZEXT816(0x20) * auVar2,0);
    if (SUB168(ZEXT816(0x20) * auVar2,8) != 0) {
      uVar14 = 0xffffffffffffffff;
    }
    lVar12 = uVar14 + 8;
    if (0xfffffffffffffff7 < uVar14) {
      lVar12 = -1;
    }
    puVar15 = (ulonglong *)thunk_FUN_183196718(lVar12);
    puVar23 = puVar29;
    if (puVar15 != (ulonglong *)0x0) {
      *puVar15 = uVar28;
      in_stack_fffffffffffffdc8 = thunk_FUN_18299de00;
      _eh_vector_constructor_iterator_
                (puVar15 + 1,0x20,uVar28,thunk_FUN_18299d700,thunk_FUN_18299de00);
      puVar23 = puVar15 + 1;
    }
    param_1[0xb6] = (longlong)puVar23;
    if (*(int *)(param_1[0xb2] + 0x10) == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar28;
      uVar14 = SUB168(ZEXT816(0x20) * auVar3,0);
      if (SUB168(ZEXT816(0x20) * auVar3,8) != 0) {
        uVar14 = 0xffffffffffffffff;
      }
      lVar12 = uVar14 + 8;
      if (0xfffffffffffffff7 < uVar14) {
        lVar12 = -1;
      }
      puVar15 = (ulonglong *)thunk_FUN_183196718(lVar12);
      puVar23 = puVar29;
      if (puVar15 != (ulonglong *)0x0) {
        *puVar15 = uVar28;
        in_stack_fffffffffffffdc8 = thunk_FUN_18299de00;
        _eh_vector_constructor_iterator_
                  (puVar15 + 1,0x20,uVar28,thunk_FUN_18299d700,thunk_FUN_18299de00);
        puVar23 = puVar15 + 1;
      }
      param_1[0xb7] = (longlong)puVar23;
    }
    lVar12 = FUN_180013282(uVar28 * 4);
    param_1[0xb8] = lVar12;
    if ((*(int *)(param_1[0xb2] + 300) == 0) && (puVar23 = puVar29, puVar15 = puVar29, uVar19 != 0))
    {
      do {
        *(longlong *)(param_1[0x14] + 0x3b8 + (longlong)puVar23) = param_1[0xb6] + (longlong)puVar15
        ;
        uVar28 = uVar28 - 1;
        puVar23 = puVar23 + 0x181;
        puVar15 = puVar15 + 4;
      } while (uVar28 != 0);
    }
  }
  else {
    puVar23 = puVar29;
    puVar15 = puVar29;
    if (uVar19 != 0) {
      do {
        (**(code **)(*(longlong *)(param_1[0xb6] + (longlong)puVar23) + 0x10))
                  (param_1[0xb6] + (longlong)puVar15);
        uVar28 = uVar28 - 1;
        puVar23 = puVar23 + 4;
        puVar15 = puVar15 + 4;
      } while (uVar28 != 0);
    }
  }
  uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffdc8 >> 0x20);
  if (*(int *)((longlong)param_1 + 0x26c) != 0) {
    iVar22 = *(int *)(param_1[0xb1] + 0x1009c);
  }
  if (*(char *)(param_1[0xb3] + 0x105) != '\0') {
    if (*(int *)(param_1[0xb2] + 0x78) != 0) {
      lVar12 = *(longlong *)(param_1[0xb1] + 0x10160);
      lVar27 = lVar12 + 0x7f0;
      *(undefined4 *)(lVar12 + 0x814) = 1;
      *(undefined2 *)(lVar12 + 0x808) = 0;
      thunk_FUN_182d790f0(*(undefined8 *)(param_1[0xb1] + 0x10160),lVar27);
      if (*(int *)(param_1[0xb2] + 0x398) == 0) {
        (**(code **)(param_1[0xbb] + 0x10))();
      }
      uVar9 = thunk_FUN_182d75600(lVar27,*plVar35);
      thunk_FUN_182d75670(lVar27,uVar9);
      thunk_FUN_182d75690(lVar27,param_1 + 0xbb,*plVar35);
      in_stack_fffffffffffffdd0 = param_1 + 0x4aa;
      in_stack_fffffffffffffdc8 = (code *)CONCAT44(uVar11,0x27);
      thunk_FUN_182d755b0(lVar27,param_1 + 0xbb,0,*(undefined4 *)(param_1[0xb2] + 0x398),
                          in_stack_fffffffffffffdc8,in_stack_fffffffffffffdd0);
      *(undefined4 *)(param_1[0xb1] + 0x1009c) = *(undefined4 *)((longlong)param_1 + 0x26c);
    }
    uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffdc8 >> 0x20);
    if ((*(int *)(param_1[0xb3] + 0xf4) == 1) && (*(int *)(param_1[0xb2] + 0x390) != 0)) {
      local_1a0 = 0;
      local_1a8 = x265::SEIRecoveryPoint::vftable;
      local_198 = 6;
      local_190 = 0;
      local_18c = 1;
      if (*(int *)(param_1[0xb2] + 0x398) == 0) {
        (**(code **)(param_1[0xbb] + 0x10))();
      }
      uVar9 = thunk_FUN_182d75600(&local_1a8,*plVar35);
      thunk_FUN_182d75670(&local_1a8,uVar9);
      thunk_FUN_182d75690(&local_1a8,param_1 + 0xbb,*plVar35);
      in_stack_fffffffffffffdd0 = param_1 + 0x4aa;
      in_stack_fffffffffffffdc8 = (code *)CONCAT44(uVar11,0x27);
      thunk_FUN_182d755b0(&local_1a8,param_1 + 0xbb,0,*(undefined4 *)(param_1[0xb2] + 0x398),
                          in_stack_fffffffffffffdc8,in_stack_fffffffffffffdd0);
      local_1a8 = x265::SEI::vftable;
    }
  }
  uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffdc8 >> 0x20);
  lVar12 = param_1[0xb2];
  if ((*(int *)(lVar12 + 0x78) != 0) || (*(int *)(lVar12 + 0x50) != 0)) {
    lVar27 = param_1[0x5b];
    lVar34 = *plVar35;
    uVar42 = *(uint *)(plVar35 + 0x11d);
    if (*(char *)(lVar34 + 0x27bf) != '\0') {
      if (*(int *)(lVar12 + 0x50) == 2) {
        iVar45 = 2 - (uint)((uVar42 & 1) != 0);
      }
      else if (*(int *)(lVar12 + 0x50) == 1) {
        iVar45 = (uVar42 & 1) + 1;
      }
      else {
        iVar45 = *(int *)(lVar12 + 0x188);
      }
      *(int *)(lVar27 + 0x18) = iVar45;
      *(uint *)(lVar27 + 0x1c) = (uint)(*(int *)(param_1[0xb2] + 0x50) == 0);
      *(undefined1 *)(lVar27 + 0x20) = 0;
    }
    if (*(char *)(lVar34 + 0x27c1) != '\0') {
      iVar22 = *(int *)((longlong)param_1 + 0x26c) - iVar22;
      iVar45 = iVar22;
      if (iVar22 < 1) {
        iVar45 = 1;
      }
      iVar8 = 1 << ((byte)*(undefined4 *)(lVar34 + 0x27d0) & 0x1f);
      if ((iVar45 < iVar8) && (iVar8 = iVar22, iVar22 < 1)) {
        iVar8 = 1;
      }
      *(int *)(lVar27 + 0x24) = iVar8;
      *(uint *)(lVar27 + 0x28) =
           (*(int *)(*plVar35 + 0x6c) - *(int *)((longlong)param_1 + 0x26c)) + uVar42;
    }
    if (*(int *)(param_1[0xb2] + 0x398) == 0) {
      (**(code **)(param_1[0xbb] + 0x10))();
    }
    uVar9 = thunk_FUN_182d75600(lVar27,*plVar35);
    thunk_FUN_182d75670(lVar27,uVar9);
    thunk_FUN_182d75690(lVar27,param_1 + 0xbb,*plVar35);
    in_stack_fffffffffffffdd0 = param_1 + 0x4aa;
    in_stack_fffffffffffffdc8 = (code *)CONCAT44(uVar11,0x27);
    thunk_FUN_182d755b0(lVar27,param_1 + 0xbb,0,*(undefined4 *)(param_1[0xb2] + 0x398),
                        in_stack_fffffffffffffdc8,in_stack_fffffffffffffdd0);
  }
  uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffdc8 >> 0x20);
  if ((-1 < *(int *)(param_1[0xb2] + 0x184)) && (*(int *)((longlong)plVar35 + 0x8d4) - 0x10U < 8)) {
    local_180 = 0;
    local_188 = x265::SEIAlternativeTC::vftable;
    local_178 = 0x93;
    local_170 = *(int *)(param_1[0xb2] + 0x184);
    (**(code **)(param_1[0xbb] + 0x10))(param_1 + 0xbb);
    uVar9 = thunk_FUN_182d75600(&local_188,*plVar35);
    thunk_FUN_182d75670(&local_188,uVar9);
    thunk_FUN_182d75690(&local_188,param_1 + 0xbb,*plVar35);
    in_stack_fffffffffffffdd0 = param_1 + 0x4aa;
    in_stack_fffffffffffffdc8 = (code *)CONCAT44(uVar11,0x27);
    thunk_FUN_182d755b0(&local_188,param_1 + 0xbb,0,*(undefined4 *)(param_1[0xb2] + 0x398),
                        in_stack_fffffffffffffdc8,in_stack_fffffffffffffdd0);
    local_188 = x265::SEI::vftable;
  }
  bVar4 = false;
  puVar23 = puVar29;
  puVar15 = puVar29;
  bVar6 = false;
  if (0 < *(int *)(param_1[0xb3] + 0x42b8)) {
    do {
      bVar4 = bVar6;
      uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffdc8 >> 0x20);
      lVar12 = *(longlong *)(param_1[0xb3] + 0x42c0);
      iVar22 = *(int *)((longlong)puVar15 + lVar12 + 4);
      if (iVar22 == 5) {
        local_160 = 0;
        local_168 = x265::SEIuserDataUnregistered::vftable;
        local_158 = 5;
        local_150 = *(undefined8 *)((longlong)puVar15 + lVar12 + 8);
        if (*(int *)(param_1[0xb2] + 0x398) == 0) {
          (**(code **)(param_1[0xbb] + 0x10))();
        }
        thunk_FUN_182d75670(&local_168,*(undefined4 *)((longlong)puVar15 + lVar12));
        thunk_FUN_182d75690(&local_168,param_1 + 0xbb);
        in_stack_fffffffffffffdd0 = param_1 + 0x4aa;
        in_stack_fffffffffffffdc8 = (code *)CONCAT44(uVar11,0x27);
        thunk_FUN_182d755b0(&local_168,param_1 + 0xbb,0,*(undefined4 *)(param_1[0xb2] + 0x398),
                            in_stack_fffffffffffffdc8,in_stack_fffffffffffffdd0);
        bVar4 = true;
        local_168 = x265::SEI::vftable;
      }
      else if (iVar22 == 4) {
        if (bVar5) {
          local_140 = 0;
          local_148 = x265::SEICreativeIntentMeta::vftable;
          local_138 = 4;
          local_130 = *(undefined8 *)((longlong)puVar15 + lVar12 + 8);
          if (*(int *)(param_1[0xb2] + 0x398) == 0) {
            (**(code **)(param_1[0xbb] + 0x10))();
          }
          thunk_FUN_182d75670(&local_148,*(undefined4 *)((longlong)puVar15 + lVar12));
          thunk_FUN_182d75690(&local_148,param_1 + 0xbb);
          in_stack_fffffffffffffdd0 = param_1 + 0x4aa;
          in_stack_fffffffffffffdc8 = (code *)CONCAT44(uVar11,0x27);
          thunk_FUN_182d755b0(&local_148,param_1 + 0xbb,0,*(undefined4 *)(param_1[0xb2] + 0x398),
                              in_stack_fffffffffffffdc8,in_stack_fffffffffffffdd0);
          bVar4 = true;
          local_148 = x265::SEI::vftable;
        }
      }
      else {
        thunk_FUN_18299c2b0(param_1[0xb2],&DAT_18393797c,0);
      }
      uVar42 = (int)puVar23 + 1;
      puVar23 = (ulonglong *)(ulonglong)uVar42;
      puVar15 = puVar15 + 2;
      bVar6 = bVar4;
    } while ((int)uVar42 < *(int *)(param_1[0xb3] + 0x42b8));
  }
  if (((((*(char *)(param_1[0xb3] + 0x105) == '\0') ||
        (lVar12 = param_1[0xb2], *(int *)(lVar12 + 0x6c) == 0)) &&
       (lVar12 = param_1[0xb2], *(int *)(lVar12 + 0x78) == 0)) && (*(int *)(lVar12 + 0x50) == 0)) &&
     ((*(int *)(param_1[0xb3] + 0xf4) != 1 || (*(int *)(lVar12 + 0x390) == 0)))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((bVar4 || bVar5) && (*(int *)(lVar12 + 0x398) != 0)) {
    thunk_FUN_18299d9c0(param_1 + 0xbb);
    thunk_FUN_182d48030(param_1 + 0x4aa,0x27,param_1 + 0xbb);
  }
  if ((*(int *)(param_1[0xb2] + 400) != 0) &&
     (lVar12 = *(longlong *)(param_1[0xb1] + 0x10160), *(char *)(lVar12 + 0x1d) == '\0')) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar12 + 0x7b0));
    *(int *)(lVar12 + 0x7e0) = *(int *)(lVar12 + 0x7e0) + 1;
    WakeAllConditionVariable((PCONDITION_VARIABLE)(lVar12 + 0x7d8));
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar12 + 0x7b0));
    if (*(int *)((longlong)param_1 + 0x26c) < *(int *)(param_1[0xb2] + 4) + -1) {
      lVar12 = *(longlong *)(param_1[0xb1] + 0x10160);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar12 + 0x7b0));
      *(int *)(lVar12 + 0x7e0) = *(int *)(lVar12 + 0x7e0) + 1;
      WakeAllConditionVariable((PCONDITION_VARIABLE)(lVar12 + 0x7d8));
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar12 + 0x7b0));
    }
  }
  if (*(int *)(param_1[0xb2] + 0x394) != 0) {
    thunk_FUN_1829a2400(param_1);
  }
  puVar23 = puVar29;
  if (*(int *)(param_1[0xb2] + 0x2b4) != 0) {
    do {
      *(undefined1 *)
       ((ulonglong)*(uint *)(param_1[0x16] + (longlong)puVar23 * 4) * 0xc08 + 0xbf8 + param_1[0x14])
           = 1;
      uVar42 = (int)puVar23 + 1;
      puVar23 = (ulonglong *)(ulonglong)uVar42;
    } while (uVar42 < *(uint *)(param_1[0xb2] + 0x2b4));
  }
  if ((*(int *)(param_1[0xb2] + 0x10) != 0) &&
     (puVar23 = puVar29, puVar15 = puVar29, puVar41 = puVar29,
     *(int *)((longlong)param_1 + 0xac) != 0)) {
    do {
      puVar33 = puVar29;
      if (*(int *)(param_1[0xb2] + 0x2b4) != 0) {
        do {
          lVar12 = (longlong)puVar33 * 4;
          uVar42 = (int)puVar33 + 1;
          puVar33 = (ulonglong *)(ulonglong)uVar42;
          uVar37 = *(int *)(param_1[0x16] + lVar12) + (int)puVar23;
          if (uVar37 <= *(int *)(param_1[0x16] + (longlong)puVar33 * 4) - 1U) {
            *(int *)(param_1[8] + (ulonglong)uVar37 * 4) = (int)puVar41;
            *(uint *)(param_1[9] + (longlong)puVar15 * 4) = uVar37;
            puVar41 = (ulonglong *)(ulonglong)((int)puVar41 + 1);
            puVar15 = (ulonglong *)((longlong)puVar15 + 1);
          }
        } while (uVar42 < *(uint *)(param_1[0xb2] + 0x2b4));
      }
      uVar42 = (int)puVar23 + 1;
      puVar23 = (ulonglong *)(ulonglong)uVar42;
    } while (uVar42 < *(uint *)((longlong)param_1 + 0xac));
  }
  if (*(int *)(param_1[0xb2] + 0x10) == 0) {
    local_210 = 0;
    if (*(int *)((longlong)param_1 + 0x94) + *(int *)((longlong)param_1 + 0x8c) != 0) {
      do {
        uVar42 = (uint)puVar29;
        if (uVar42 < *(uint *)((longlong)param_1 + 0x8c)) {
          local_20c = 0;
          local_1b0 = 0;
          if (local_1e8 != 0) {
            plVar24 = param_1 + 199;
            plVar38 = plVar35 + 2;
            plVar44 = plVar35 + 0x11f;
            do {
              iVar22 = 0;
              plVar16 = plVar38;
              local_1f8 = plVar24;
              if (0 < (int)*plVar44) {
                do {
                  lVar12 = *plVar16;
                  uVar42 = *(int *)((longlong)param_1 + 0x9c) + (int)puVar29;
                  if (*(int *)((longlong)param_1 + 0x8c) - 1U < uVar42) {
                    uVar42 = *(int *)((longlong)param_1 + 0x8c) - 1;
                  }
                  p_Var26 = (LPCRITICAL_SECTION)
                            ((longlong)(int)uVar42 * 0x38 + *(longlong *)(lVar12 + 0x42c8));
                  EnterCriticalSection(p_Var26);
                  iVar45 = p_Var26[1].LockCount;
                  LeaveCriticalSection(p_Var26);
                  if (iVar45 == 0) {
                    lVar27 = (longlong)(int)uVar42 * 0x38;
                    do {
                      p_Var26 = (LPCRITICAL_SECTION)(*(longlong *)(lVar12 + 0x42c8) + lVar27);
                      EnterCriticalSection(p_Var26);
                      if (p_Var26[1].LockCount == 0) {
                        SleepConditionVariableCS
                                  ((PCONDITION_VARIABLE)(p_Var26 + 1),p_Var26,0xffffffff);
                      }
                      LeaveCriticalSection(p_Var26);
                      p_Var26 = (LPCRITICAL_SECTION)(*(longlong *)(lVar12 + 0x42c8) + lVar27);
                      EnterCriticalSection(p_Var26);
                      iVar45 = p_Var26[1].LockCount;
                      LeaveCriticalSection(p_Var26);
                    } while (iVar45 == 0);
                  }
                  if (((bVar1) || (bVar47)) && ((char)*local_1f8 != '\0')) {
                    in_stack_fffffffffffffdc8 =
                         (code *)((ulonglong)in_stack_fffffffffffffdc8 & 0xffffffff00000000);
                    thunk_FUN_182d487a0(param_1 + ((longlong)(int)local_20c * 0x11 +
                                                  (longlong)iVar22) * 0x16 + 0xbf,uVar42,
                                        *(undefined4 *)((longlong)param_1 + 0x8c),
                                        *(undefined4 *)((longlong)param_1 + 0x8c),
                                        in_stack_fffffffffffffdc8);
                  }
                  iVar22 = iVar22 + 1;
                  puVar29 = (ulonglong *)(ulonglong)local_210;
                  plVar16 = plVar16 + 1;
                  local_1f8 = local_1f8 + 0x16;
                } while (iVar22 < (int)*plVar44);
              }
              local_20c = local_20c + 1;
              local_1b0 = local_1b0 + 1;
              plVar44 = (longlong *)((longlong)plVar44 + 4);
              plVar38 = plVar38 + 0x11;
              plVar24 = plVar24 + 0x176;
            } while (local_1b0 < (longlong)local_1e8);
          }
          uVar42 = (uint)puVar29;
          if (uVar42 == 0) {
            lVar12 = thunk_FUN_18299c7f0();
            param_1[0xa8] = lVar12;
          }
          else if (uVar42 == *(int *)((longlong)param_1 + 0x8c) - 1U) {
            lVar12 = thunk_FUN_18299c7f0();
            param_1[0xa9] = lVar12;
          }
          (**(code **)(*param_1 + 0x20))
                    (param_1,puVar29,(longlong)(int)param_1[0xf] * 0x8d618 + param_1[0xb5]);
        }
        if (*(uint *)((longlong)param_1 + 0x94) <= uVar42) {
          thunk_FUN_182d3a740(param_1 + 0x499,uVar42 - *(uint *)((longlong)param_1 + 0x94));
        }
        local_210 = uVar42 + 1;
        puVar29 = (ulonglong *)(ulonglong)local_210;
      } while (local_210 <
               (uint)(*(int *)((longlong)param_1 + 0x94) + *(int *)((longlong)param_1 + 0x8c)));
    }
  }
  else {
    local_20c = 0;
    if (*(int *)((longlong)param_1 + 0xac) != 0) {
      do {
        iVar22 = (int)puVar29;
        uVar28 = 0;
        uVar42 = 0;
        if (*(int *)(param_1[0xb2] + 0x2b4) != 0) {
          do {
            uVar31 = (int)uVar28 + 1;
            uVar37 = *(int *)(param_1[0x16] + (ulonglong)uVar31 * 4) - 1;
            uVar32 = *(int *)(param_1[0x16] + uVar28 * 4) + (int)puVar29;
            if (uVar32 <= uVar37) {
              local_210 = 0;
              local_1b8 = 0;
              if (local_1e8 != 0) {
                plVar24 = param_1 + 199;
                plVar38 = plVar35 + 2;
                plVar44 = plVar35 + 0x11f;
                do {
                  iVar22 = 0;
                  plVar16 = plVar38;
                  local_200 = plVar24;
                  if (0 < (int)*plVar44) {
                    do {
                      lVar12 = *plVar16;
                      uVar43 = *(int *)((longlong)param_1 + 0x9c) + uVar32;
                      if (uVar37 < uVar43) {
                        uVar43 = uVar37;
                      }
                      p_Var26 = (LPCRITICAL_SECTION)
                                ((longlong)(int)uVar43 * 0x38 + *(longlong *)(lVar12 + 0x42c8));
                      EnterCriticalSection(p_Var26);
                      iVar45 = p_Var26[1].LockCount;
                      LeaveCriticalSection(p_Var26);
                      if (iVar45 == 0) {
                        lVar27 = (longlong)(int)uVar43 * 0x38;
                        do {
                          p_Var26 = (LPCRITICAL_SECTION)(*(longlong *)(lVar12 + 0x42c8) + lVar27);
                          EnterCriticalSection(p_Var26);
                          if (p_Var26[1].LockCount == 0) {
                            SleepConditionVariableCS
                                      ((PCONDITION_VARIABLE)(p_Var26 + 1),p_Var26,0xffffffff);
                          }
                          LeaveCriticalSection(p_Var26);
                          p_Var26 = (LPCRITICAL_SECTION)(*(longlong *)(lVar12 + 0x42c8) + lVar27);
                          EnterCriticalSection(p_Var26);
                          iVar45 = p_Var26[1].LockCount;
                          LeaveCriticalSection(p_Var26);
                        } while (iVar45 == 0);
                      }
                      if (((bVar1) || (bVar47)) && ((char)*local_200 != '\0')) {
                        in_stack_fffffffffffffdc8 =
                             (code *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffdc8 >> 0x20),
                                              uVar42);
                        thunk_FUN_182d487a0(param_1 + ((longlong)(int)local_210 * 0x11 +
                                                      (longlong)iVar22) * 0x16 + 0xbf,uVar43,
                                            *(undefined4 *)((longlong)param_1 + 0x8c),uVar37,
                                            in_stack_fffffffffffffdc8);
                      }
                      iVar22 = iVar22 + 1;
                      plVar16 = plVar16 + 1;
                      local_200 = local_200 + 0x16;
                    } while (iVar22 < (int)*plVar44);
                  }
                  local_210 = local_210 + 1;
                  local_1b8 = local_1b8 + 1;
                  plVar44 = (longlong *)((longlong)plVar44 + 4);
                  plVar38 = plVar38 + 0x11;
                  plVar24 = plVar24 + 0x176;
                } while (local_1b8 < (longlong)local_1e8);
              }
              thunk_FUN_182d47db0(param_1,*(int *)(param_1[8] + (ulonglong)uVar32 * 4) * 2);
              if (local_20c == 0) {
                lVar12 = thunk_FUN_18299c7f0();
                param_1[0xa8] = lVar12;
                thunk_FUN_182d47de0(param_1,*(int *)(param_1[8] + (ulonglong)uVar32 * 4) * 2);
              }
              thunk_FUN_182d47be0(param_1);
              puVar29 = (ulonglong *)(ulonglong)local_20c;
            }
            uVar28 = (ulonglong)uVar31;
            iVar22 = (int)puVar29;
            uVar42 = uVar31;
          } while (uVar31 < *(uint *)(param_1[0xb2] + 0x2b4));
        }
        local_20c = iVar22 + 1;
        puVar29 = (ulonglong *)(ulonglong)local_20c;
      } while (local_20c < *(uint *)((longlong)param_1 + 0xac));
    }
    lVar12 = thunk_FUN_18299c7f0();
    param_1[0xa9] = lVar12;
    thunk_FUN_182d47be0(param_1);
    DVar10 = WaitForSingleObject((HANDLE)param_1[0xe],0xfa);
    while (DVar10 == 0x102) {
      thunk_FUN_182d47be0(param_1);
      DVar10 = WaitForSingleObject((HANDLE)param_1[0xe],0xfa);
    }
  }
  lVar12 = param_1[0xb2];
  if (1 < *(uint *)(lVar12 + 0x2b4)) {
    lVar27 = *(longlong *)(param_1[0xb3] + 8);
    uVar42 = *(uint *)(lVar27 + 0x34);
    uVar37 = *(uint *)(lVar27 + 0x30);
    pcVar51 = *(code **)(lVar27 + 0x38);
    bVar1 = *(int *)(lVar12 + 0x3c) - 1U < 2;
    bVar47 = *(int *)(lVar12 + 0x3c) == 1;
    iVar22 = *(int *)(lVar12 + 0x80);
    if (iVar22 == 1) {
      thunk_FUN_182d3bcb0((longlong)param_1 + 0x404);
      thunk_FUN_182d3c7f0((longlong)param_1 + 0x404,*(undefined8 *)(lVar27 + 0x18),uVar37,uVar42,
                          pcVar51);
      in_stack_fffffffffffffdc8 = pcVar51;
      if (*(int *)(param_1[0xb2] + 0x3c) != 0) {
        thunk_FUN_182d3bcb0((longlong)param_1 + 0x45c);
        thunk_FUN_182d3bcb0((longlong)param_1 + 0x4b4);
        in_stack_fffffffffffffdc8 = *(code **)(lVar27 + 0x40);
        thunk_FUN_182d3c7f0((longlong)param_1 + 0x45c,*(undefined8 *)(lVar27 + 0x20),uVar37 >> bVar1
                            ,uVar42 >> bVar47,in_stack_fffffffffffffdc8);
        thunk_FUN_182d3c7f0((longlong)param_1 + 0x4b4,*(undefined8 *)(lVar27 + 0x28),uVar37 >> bVar1
                            ,uVar42 >> bVar47,in_stack_fffffffffffffdc8);
      }
    }
    else if (iVar22 == 2) {
      *(undefined4 *)((longlong)param_1 + 0x50c) = 0xffff;
      thunk_FUN_182d3de00(*(undefined8 *)(lVar27 + 0x18),(undefined4 *)((longlong)param_1 + 0x50c),
                          uVar42,uVar37,pcVar51);
      in_stack_fffffffffffffdc8 = pcVar51;
      if (*(int *)(param_1[0xb2] + 0x3c) != 0) {
        in_stack_fffffffffffffdc8 = *(code **)(lVar27 + 0x40);
        *(undefined4 *)((longlong)param_1 + 0x514) = 0xffff;
        *(undefined4 *)(param_1 + 0xa2) = 0xffff;
        thunk_FUN_182d3de00(*(undefined8 *)(lVar27 + 0x20),param_1 + 0xa2,uVar42 >> bVar47,
                            uVar37 >> bVar1,in_stack_fffffffffffffdc8);
        thunk_FUN_182d3de00(*(undefined8 *)(lVar27 + 0x28),(longlong)param_1 + 0x514,
                            uVar42 >> bVar47,uVar37 >> bVar1,in_stack_fffffffffffffdc8);
      }
    }
    else if (iVar22 == 3) {
      uVar31 = *(uint *)(lVar12 + 0xb4);
      *(undefined4 *)(param_1 + 0xa3) = 0;
      uVar28 = (ulonglong)in_stack_fffffffffffffdd0 & 0xffffffff00000000;
      thunk_FUN_182d3ded0(*(undefined8 *)(lVar27 + 0x18),param_1 + 0xa3,uVar42,uVar37,pcVar51,uVar28
                          ,uVar31);
      in_stack_fffffffffffffdc8 = pcVar51;
      if (*(int *)(param_1[0xb2] + 0x3c) != 0) {
        in_stack_fffffffffffffdc8 = *(code **)(lVar27 + 0x40);
        uVar31 = uVar31 >> bVar47;
        *(undefined4 *)(param_1 + 0xa4) = 0;
        *(undefined4 *)((longlong)param_1 + 0x51c) = 0;
        uVar28 = uVar28 & 0xffffffff00000000;
        thunk_FUN_182d3ded0(*(undefined8 *)(lVar27 + 0x20),(undefined4 *)((longlong)param_1 + 0x51c)
                            ,uVar42 >> bVar47,uVar37 >> bVar1,in_stack_fffffffffffffdc8,uVar28,
                            uVar31);
        thunk_FUN_182d3ded0(*(undefined8 *)(lVar27 + 0x28),param_1 + 0xa4,uVar42 >> bVar47,
                            uVar37 >> bVar1,in_stack_fffffffffffffdc8,uVar28 & 0xffffffff00000000,
                            uVar31);
      }
    }
  }
  uVar28 = 0;
  uVar42 = 0;
  if (*(int *)(param_1[0xb2] + 0x1f8) != 0) {
    uVar37 = 0;
    uVar14 = uVar28;
    if (*(int *)((longlong)param_1 + 0x8c) != 0) {
      lVar12 = param_1[0x14];
      uVar46 = uVar28;
      uVar39 = uVar28;
      uVar40 = uVar28;
      do {
        lVar27 = uVar39 * 0xc08;
        *(int *)(*(longlong *)param_1[0xb3] + 0x80) =
             *(int *)(*(longlong *)param_1[0xb3] + 0x80) + *(int *)(lVar12 + 0x778 + lVar27);
        *(int *)(*(longlong *)param_1[0xb3] + 0x84) =
             *(int *)(*(longlong *)param_1[0xb3] + 0x84) + *(int *)(param_1[0x14] + 0x77c + lVar27);
        *(int *)(*(longlong *)param_1[0xb3] + 0x88) =
             *(int *)(*(longlong *)param_1[0xb3] + 0x88) + *(int *)(param_1[0x14] + 0x780 + lVar27);
        lVar12 = param_1[0x14];
        uVar42 = (int)uVar40 + *(int *)(lVar12 + 0x784 + lVar27);
        uVar40 = (ulonglong)uVar42;
        uVar14 = (ulonglong)(uint)((int)uVar14 + *(int *)(lVar12 + 0x788 + lVar27));
        uVar37 = (int)uVar46 + *(int *)(lVar12 + 0x78c + lVar27);
        uVar46 = (ulonglong)uVar37;
        uVar31 = (int)uVar39 + 1;
        uVar39 = (ulonglong)uVar31;
      } while (uVar31 < *(uint *)((longlong)param_1 + 0x8c));
    }
    dVar49 = (double)(int)(uVar37 + (int)uVar14 + uVar42);
    *(double *)(*(longlong *)param_1[0xb3] + 0x98) = (double)(int)uVar42 / dVar49;
    *(double *)(*(longlong *)param_1[0xb3] + 0xa0) = (double)(int)uVar14 / dVar49;
    *(double *)(*(longlong *)param_1[0xb3] + 0xa8) = (double)(int)uVar37 / dVar49;
  }
  dVar49 = DAT_1832b1af0;
  if (0 < *(int *)(param_1[0xb2] + 0x2c)) {
    if (*(int *)((longlong)param_1 + 0x8c) != 0) {
      do {
        uVar14 = 0;
        lVar12 = uVar28 * 0xc08;
        *(longlong *)(*(longlong *)param_1[0xb3] + 0x1e8) =
             *(longlong *)(*(longlong *)param_1[0xb3] + 0x1e8) +
             *(longlong *)(param_1[0x14] + 0x8e0 + lVar12);
        *(longlong *)(*(longlong *)param_1[0xb3] + 0x1f0) =
             *(longlong *)(*(longlong *)param_1[0xb3] + 0x1f0) +
             *(longlong *)(param_1[0x14] + 0x8e8 + lVar12);
        *(longlong *)(*(longlong *)param_1[0xb3] + 0x1f8) =
             *(longlong *)(*(longlong *)param_1[0xb3] + 0x1f8) +
             *(longlong *)(param_1[0x14] + 0x8f0 + lVar12);
        *(longlong *)(*(longlong *)param_1[0xb3] + 0x200) =
             *(longlong *)(*(longlong *)param_1[0xb3] + 0x200) +
             *(longlong *)(param_1[0x14] + 0x8f8 + lVar12);
        *(longlong *)(*(longlong *)param_1[0xb3] + 0x208) =
             *(longlong *)(*(longlong *)param_1[0xb3] + 0x208) +
             *(longlong *)(param_1[0x14] + 0x900 + lVar12);
        *(longlong *)(*(longlong *)param_1[0xb3] + 0x210) =
             *(longlong *)(*(longlong *)param_1[0xb3] + 0x210) +
             *(longlong *)(param_1[0x14] + 0x908 + lVar12);
        *(longlong *)(*(longlong *)param_1[0xb3] + 0x218) =
             *(longlong *)(*(longlong *)param_1[0xb3] + 0x218) +
             *(longlong *)(param_1[0x14] + 0x910 + lVar12);
        *(longlong *)(*(longlong *)param_1[0xb3] + 0x220) =
             *(longlong *)(*(longlong *)param_1[0xb3] + 0x220) +
             *(longlong *)(param_1[0x14] + 0x918 + lVar12);
        do {
          lVar27 = uVar14 + uVar28 * 0x181;
          plVar24 = (longlong *)(*(longlong *)param_1[0xb3] + 0x228 + uVar14 * 8);
          *plVar24 = *plVar24 + *(longlong *)(param_1[0x14] + 0x920 + lVar27 * 8);
          plVar24 = (longlong *)(*(longlong *)param_1[0xb3] + 0x248 + uVar14 * 8);
          *plVar24 = *plVar24 + *(longlong *)(param_1[0x14] + 0x940 + lVar27 * 8);
          lVar34 = uVar14 * 0x20;
          plVar24 = (longlong *)(*(longlong *)param_1[0xb3] + 0x2a8 + lVar34);
          *plVar24 = *plVar24 + *(longlong *)((uVar14 + 0x4d) * 0x20 + param_1[0x14] + lVar12);
          lVar27 = lVar34 + lVar12;
          plVar24 = (longlong *)(*(longlong *)param_1[0xb3] + 0x2b0 + lVar34);
          *plVar24 = *plVar24 + *(longlong *)(param_1[0x14] + 0x9a8 + lVar27);
          plVar24 = (longlong *)(*(longlong *)param_1[0xb3] + 0x2b8 + lVar34);
          *plVar24 = *plVar24 + *(longlong *)(param_1[0x14] + 0x9b0 + lVar27);
          plVar24 = (longlong *)((uVar14 + 0x16) * 0x20 + *(longlong *)param_1[0xb3]);
          *plVar24 = *plVar24 + *(longlong *)(param_1[0x14] + 0x9b8 + lVar27);
          plVar24 = (longlong *)(*(longlong *)param_1[0xb3] + 0x328 + uVar14 * 0x18);
          *plVar24 = *plVar24 + *(longlong *)(param_1[0x14] + (uVar14 + 0x6c) * 0x18 + lVar12);
          lVar27 = lVar12 + uVar14 * 0x18;
          plVar24 = (longlong *)(*(longlong *)param_1[0xb3] + 0x330 + uVar14 * 0x18);
          *plVar24 = *plVar24 + *(longlong *)(param_1[0x14] + 0xa28 + lVar27);
          plVar24 = (longlong *)(*(longlong *)param_1[0xb3] + 0x338 + uVar14 * 0x18);
          *plVar24 = *plVar24 + *(longlong *)(param_1[0x14] + 0xa30 + lVar27);
          uVar42 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar42;
        } while (uVar42 <= *(uint *)(param_1[0xb2] + 0x328));
        uVar42 = (int)uVar28 + 1;
        uVar28 = (ulonglong)uVar42;
      } while (uVar42 < *(uint *)((longlong)param_1 + 0x8c));
    }
    uVar28 = 0;
    lVar12 = *(longlong *)param_1[0xb3];
    lVar27 = *(longlong *)(lVar12 + 0x1e8) * 100;
    dVar48 = (double)lVar27;
    if (lVar27 < 0) {
      dVar48 = dVar48 + dVar49;
    }
    dVar50 = (double)*(longlong *)(lVar12 + 0x1f0);
    if (*(longlong *)(lVar12 + 0x1f0) < 0) {
      dVar50 = dVar50 + dVar49;
    }
    *(double *)(lVar12 + 0xd8) = dVar48 / dVar50;
    do {
      lVar12 = *(longlong *)param_1[0xb3];
      lVar27 = *(longlong *)(lVar12 + 0x228 + uVar28 * 8) * 100;
      dVar48 = (double)lVar27;
      if (lVar27 < 0) {
        dVar48 = dVar48 + dVar49;
      }
      dVar50 = (double)*(longlong *)(lVar12 + 0x1f0);
      if (*(longlong *)(lVar12 + 0x1f0) < 0) {
        dVar50 = dVar50 + dVar49;
      }
      *(double *)(lVar12 + 0xe0 + uVar28 * 8) = dVar48 / dVar50;
      lVar12 = *(longlong *)param_1[0xb3];
      lVar27 = *(longlong *)(lVar12 + 0x248 + uVar28 * 8) * 100;
      dVar48 = (double)lVar27;
      if (lVar27 < 0) {
        dVar48 = dVar48 + dVar49;
      }
      dVar50 = (double)*(longlong *)(lVar12 + 0x1f0);
      if (*(longlong *)(lVar12 + 0x1f0) < 0) {
        dVar50 = dVar50 + dVar49;
      }
      *(double *)(lVar12 + 0x100 + uVar28 * 8) = dVar48 / dVar50;
      lVar12 = *(longlong *)param_1[0xb3];
      lVar27 = *(longlong *)(lVar12 + 0x328 + uVar28 * 0x18) * 100;
      dVar48 = (double)lVar27;
      if (lVar27 < 0) {
        dVar48 = dVar48 + dVar49;
      }
      dVar50 = (double)*(longlong *)(lVar12 + 0x1f0);
      if (*(longlong *)(lVar12 + 0x1f0) < 0) {
        dVar50 = dVar50 + dVar49;
      }
      *(double *)(lVar12 + 0x120 + uVar28 * 0x18) = dVar48 / dVar50;
      lVar12 = *(longlong *)param_1[0xb3];
      lVar27 = *(longlong *)(lVar12 + 0x330 + uVar28 * 0x18) * 100;
      dVar48 = (double)lVar27;
      if (lVar27 < 0) {
        dVar48 = dVar48 + dVar49;
      }
      dVar50 = (double)*(longlong *)(lVar12 + 0x1f0);
      if (*(longlong *)(lVar12 + 0x1f0) < 0) {
        dVar50 = dVar50 + dVar49;
      }
      *(double *)(lVar12 + 0x128 + uVar28 * 0x18) = dVar48 / dVar50;
      lVar12 = *(longlong *)param_1[0xb3];
      lVar27 = *(longlong *)(lVar12 + 0x338 + uVar28 * 0x18) * 100;
      dVar48 = (double)lVar27;
      if (lVar27 < 0) {
        dVar48 = dVar48 + dVar49;
      }
      dVar50 = (double)*(longlong *)(lVar12 + 0x1f0);
      if (*(longlong *)(lVar12 + 0x1f0) < 0) {
        dVar50 = dVar50 + dVar49;
      }
      *(double *)(lVar12 + 0x130 + uVar28 * 0x18) = dVar48 / dVar50;
      lVar12 = *(longlong *)param_1[0xb3];
      lVar17 = uVar28 * 0x20;
      lVar27 = *(longlong *)(lVar17 + 0x2b8 + lVar12);
      lVar34 = *(longlong *)(lVar17 + 0x2b0 + lVar12);
      lVar17 = *(longlong *)(lVar17 + 0x2a8 + lVar12) * 100;
      dVar48 = (double)lVar17;
      if (lVar17 < 0) {
        dVar48 = dVar48 + dVar49;
      }
      dVar50 = (double)*(longlong *)(lVar12 + 0x1f0);
      if (*(longlong *)(lVar12 + 0x1f0) < 0) {
        dVar50 = dVar50 + dVar49;
      }
      *(double *)(lVar12 + 0x180 + uVar28 * 0x18) = dVar48 / dVar50;
      lVar12 = (lVar27 + lVar34) * 100;
      dVar48 = (double)lVar12;
      if (lVar12 < 0) {
        dVar48 = dVar48 + dVar49;
      }
      lVar12 = *(longlong *)(*(longlong *)param_1[0xb3] + 0x1f0);
      dVar50 = (double)lVar12;
      if (lVar12 < 0) {
        dVar50 = dVar50 + dVar49;
      }
      *(double *)(*(longlong *)param_1[0xb3] + 0x188 + uVar28 * 0x18) = dVar48 / dVar50;
      lVar12 = *(longlong *)param_1[0xb3];
      lVar27 = *(longlong *)((uVar28 + 0x16) * 0x20 + lVar12) * 100;
      dVar48 = (double)lVar27;
      if (lVar27 < 0) {
        dVar48 = dVar48 + dVar49;
      }
      dVar50 = (double)*(longlong *)(lVar12 + 0x1f0);
      if (*(longlong *)(lVar12 + 0x1f0) < 0) {
        dVar50 = dVar50 + dVar49;
      }
      *(double *)(lVar12 + 400 + uVar28 * 0x18) = dVar48 / dVar50;
      uVar42 = (int)uVar28 + 1;
      uVar28 = (ulonglong)uVar42;
    } while (uVar42 <= *(uint *)(param_1[0xb2] + 0x328));
  }
  uVar28 = 0;
  if (1 < *(int *)(param_1[0xb2] + 0x2c)) {
    lVar12 = *(longlong *)param_1[0xb3];
    dVar48 = (double)*(longlong *)(lVar12 + 0x200);
    if (*(longlong *)(lVar12 + 0x200) < 0) {
      dVar48 = dVar48 + dVar49;
    }
    dVar50 = (double)*(longlong *)(lVar12 + 0x1f8);
    if (*(longlong *)(lVar12 + 0x1f8) < 0) {
      dVar50 = dVar50 + dVar49;
    }
    *(double *)(lVar12 + 0xb0) = dVar48 / dVar50;
    lVar12 = *(longlong *)param_1[0xb3];
    dVar48 = (double)*(longlong *)(lVar12 + 0x208);
    if (*(longlong *)(lVar12 + 0x208) < 0) {
      dVar48 = dVar48 + dVar49;
    }
    dVar50 = (double)*(longlong *)(lVar12 + 0x1f8);
    if (*(longlong *)(lVar12 + 0x1f8) < 0) {
      dVar50 = dVar50 + dVar49;
    }
    *(double *)(lVar12 + 0xb8) = dVar48 / dVar50;
    lVar12 = *(longlong *)param_1[0xb3];
    dVar48 = (double)*(longlong *)(lVar12 + 0x210);
    if (*(longlong *)(lVar12 + 0x210) < 0) {
      dVar48 = dVar48 + dVar49;
    }
    dVar50 = (double)*(longlong *)(lVar12 + 0x1f8);
    if (*(longlong *)(lVar12 + 0x1f8) < 0) {
      dVar50 = dVar50 + dVar49;
    }
    *(double *)(lVar12 + 0xc0) = dVar48 / dVar50;
    lVar12 = *(longlong *)param_1[0xb3];
    dVar48 = (double)*(longlong *)(lVar12 + 0x1f8);
    if (*(longlong *)(lVar12 + 0x1f8) < 0) {
      dVar48 = dVar48 + dVar49;
    }
    *(double *)(lVar12 + 200) = (double)*(longlong *)(lVar12 + 0x218) / dVar48;
    lVar12 = *(longlong *)param_1[0xb3];
    dVar48 = (double)*(longlong *)(lVar12 + 0x220);
    if (*(longlong *)(lVar12 + 0x220) < 0) {
      dVar48 = dVar48 + dVar49;
    }
    dVar50 = (double)*(longlong *)(lVar12 + 0x1f8);
    if (*(longlong *)(lVar12 + 0x1f8) < 0) {
      dVar50 = dVar50 + dVar49;
    }
    *(double *)(lVar12 + 0xd0) = dVar48 / dVar50;
  }
  plVar24 = param_1 + 0xbb;
  (**(code **)(*plVar24 + 0x10))(plVar24);
  plVar38 = param_1 + 0x3ab;
  thunk_FUN_1829beaf0(plVar38,param_1 + 0x422);
  *plVar38 = (longlong)plVar24;
  if (*(int *)(param_1[0xb2] + 300) != 0) {
    thunk_FUN_1829a2ab0(param_1,0);
  }
  *plVar38 = (longlong)plVar24;
  uVar42 = *(uint *)(param_1[0xb2] + 0x2b4);
  if (uVar42 < 2) {
    if (*(int *)(param_1[0xb2] + 700) != 0) {
      p_Var26 = (LPCRITICAL_SECTION)(param_1[0xb1] + 0x138f0);
      local_78 = p_Var26;
      EnterCriticalSection(p_Var26);
      thunk_FUN_1829a8fe0(param_1[0xb1],plVar35 + 0x11f);
      LeaveCriticalSection(p_Var26);
    }
    in_stack_fffffffffffffdc8 = (code *)((ulonglong)in_stack_fffffffffffffdc8 & 0xffffffff00000000);
    thunk_FUN_1829be050(plVar38,plVar35,*(undefined8 *)param_1[0xb3],0,in_stack_fffffffffffffdc8,
                        *(undefined4 *)((longlong)plVar35 + 0x8dc));
    uVar11 = thunk_FUN_182d48300(param_1 + 0x4aa,param_1[0xb8],uVar19,param_1[0xb6]);
    *plVar38 = (longlong)plVar24;
    if (*(char *)(plVar35[1] + 0x1a) != '\0') {
      thunk_FUN_1829be4c0(plVar38,param_1[0xb8],*(int *)(*plVar35 + 0x30) + -1,uVar11);
    }
    thunk_FUN_18299d9c0(plVar24);
    thunk_FUN_182d48030(param_1 + 0x4aa,*(undefined4 *)((longlong)plVar35 + 0x8d4),plVar24);
  }
  else {
    uVar14 = uVar28;
    if (uVar42 != 0) {
      do {
        uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffdc8 >> 0x20);
        (**(code **)(*plVar24 + 0x10))(plVar24);
        uVar19 = (uint)uVar28;
        lVar12 = param_1[0x12];
        if (*(int *)(param_1[0xb2] + 700) != 0) {
          p_Var26 = (LPCRITICAL_SECTION)(param_1[0xb1] + 0x138f0);
          local_80 = p_Var26;
          EnterCriticalSection(p_Var26);
          thunk_FUN_1829a8fe0(param_1[0xb1],plVar35 + 0x11f);
          LeaveCriticalSection(p_Var26);
        }
        in_stack_fffffffffffffdc8 = (code *)CONCAT44(uVar11,(uint)*(ushort *)(param_1 + 0x15));
        thunk_FUN_1829be050(param_1 + 0x3ab,plVar35,*(undefined8 *)param_1[0xb3],
                            uVar19 * (int)lVar12,in_stack_fffffffffffffdc8,
                            *(undefined4 *)((longlong)plVar35 + 0x8dc));
        uVar46 = uVar28;
        if (uVar19 < *(uint *)((longlong)param_1 + 0x8c)) {
          do {
            if (*(int *)(uVar46 * 0xc08 + 0x770 + param_1[0x14]) != (int)uVar14) break;
            uVar42 = (int)uVar46 + 1;
            uVar46 = (ulonglong)uVar42;
          } while (uVar42 < *(uint *)((longlong)param_1 + 0x8c));
        }
        iVar22 = (int)uVar46 - uVar19;
        uVar11 = thunk_FUN_182d48300(param_1 + 0x4aa,param_1[0xb8] + uVar28 * 4,iVar22,
                                     uVar28 * 0x20 + param_1[0xb6]);
        param_1[0x3ab] = (longlong)plVar24;
        if (*(char *)(plVar35[1] + 0x1a) != '\0') {
          thunk_FUN_1829be4c0(param_1 + 0x3ab,param_1[0xb8] + uVar28 * 4,iVar22 + -1,uVar11);
        }
        thunk_FUN_18299d9c0(plVar24);
        thunk_FUN_182d48030(param_1 + 0x4aa,*(undefined4 *)((longlong)plVar35 + 0x8d4),plVar24);
        uVar19 = (int)uVar14 + 1;
        uVar28 = uVar46;
        uVar14 = (ulonglong)uVar19;
      } while (uVar19 < *(uint *)(param_1[0xb2] + 0x2b4));
    }
  }
  iVar22 = 0;
  if ((bVar4 || bVar5) && (*(int *)(param_1[0xb2] + 0x398) != 0)) {
    (**(code **)(*plVar24 + 0x10))(plVar24);
  }
  uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffdc8 >> 0x20);
  iVar45 = *(int *)(param_1[0xb2] + 0x80);
  if (iVar45 != 0) {
    iVar8 = *(int *)(*(longlong *)(param_1[0xb3] + 0x42f0) + 0x3c);
    uVar19 = 1;
    if (iVar8 != 0) {
      uVar19 = 3;
    }
    if (iVar45 == 1) {
      *(undefined4 *)(param_1 + 0x74) = 0;
      lVar12 = (longlong)param_1 + 0x404;
      lVar27 = (longlong)param_1 + 0x3a4;
      uVar28 = (ulonglong)uVar19;
      do {
        thunk_FUN_182d3bbc0(lVar12,lVar27);
        uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffdc8 >> 0x20);
        lVar27 = lVar27 + 0x10;
        lVar12 = lVar12 + 0x58;
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
      iVar22 = 0x11;
      if (iVar8 != 0) {
        iVar22 = 0x31;
      }
    }
    else if (iVar45 == 2) {
      *(undefined4 *)(param_1 + 0x74) = 1;
      lVar12 = (longlong)param_1 + 0x50c;
      lVar27 = (longlong)param_1 + 0x3a4;
      uVar28 = (ulonglong)uVar19;
      do {
        thunk_FUN_182d3d5e0(lVar12,lVar27);
        uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffdc8 >> 0x20);
        lVar27 = lVar27 + 0x10;
        lVar12 = lVar12 + 4;
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
      iVar22 = 3;
      if (iVar8 != 0) {
        iVar22 = 7;
      }
    }
    else if (iVar45 == 3) {
      *(undefined4 *)(param_1 + 0x74) = 2;
      plVar38 = param_1 + 0xa3;
      uVar28 = (ulonglong)uVar19;
      do {
        thunk_FUN_182d3cbd0((int)*plVar38,(longlong)param_1 + (longlong)iVar22 * 0x10 + 0x3a4);
        uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffdc8 >> 0x20);
        iVar22 = iVar22 + 1;
        plVar38 = (longlong *)((longlong)plVar38 + 4);
        uVar28 = uVar28 - 1;
      } while (uVar28 != 0);
      iVar22 = uVar19 * 4 + 1;
    }
    (**(code **)(*plVar24 + 0x10))(plVar24);
    thunk_FUN_182d75670(param_1 + 0x71,iVar22);
    thunk_FUN_182d75690(param_1 + 0x71,plVar24,*plVar35);
    thunk_FUN_182d755b0(param_1 + 0x71,plVar24,1,*(undefined4 *)(param_1[0xb2] + 0x398),
                        CONCAT44(uVar11,0x28),param_1 + 0x4aa);
  }
  uVar14 = 0;
  uVar28 = uVar14;
  if (*(uint *)(param_1 + 0x4ca) != 0) {
    puVar20 = (uint *)((longlong)param_1 + 0x2554);
    uVar46 = uVar14;
    do {
      if (1 < puVar20[-1] - 0x27) {
        if (((int)uVar46 == 0) || (lVar12 = 3, puVar20[-1] - 0x21 < 2)) {
          lVar12 = 4;
        }
        uVar28 = (uVar28 + *puVar20) - lVar12;
      }
      uVar19 = (int)uVar46 + 1;
      uVar46 = (ulonglong)uVar19;
      puVar20 = puVar20 + 4;
    } while (uVar19 < *(uint *)(param_1 + 0x4ca));
  }
  param_1[0x7f] = uVar28 * 8;
  local_res20[0] = 0;
  iVar22 = thunk_FUN_182d7c710(*(undefined8 *)(param_1[0xb1] + 0x10160),param_1[0xb3],uVar28 * 8,
                               param_1 + 0x1a,local_res20);
  if (iVar22 < 0) {
    *(undefined1 *)(param_1[0xb1] + 0x13686) = 1;
  }
  if (0 < local_res20[0]) {
    local_res20[0] = local_res20[0] + -0x30 >> 3;
    (**(code **)(*plVar24 + 0x10))(plVar24);
    for (; 0 < local_res20[0]; local_res20[0] = local_res20[0] + -1) {
      (**(code **)*plVar24)(plVar24,0xff,8);
    }
    thunk_FUN_18299d9c0(plVar24);
    thunk_FUN_182d48030(param_1 + 0x4aa,0x26,plVar24);
    param_1[0x7f] =
         (*(uint *)((longlong)param_1 + (ulonglong)((int)param_1[0x4ca] - 1) * 0x10 + 0x2554) +
         uVar28) * 8 + -0x18;
  }
  lVar27 = thunk_FUN_18299c7f0();
  lVar12 = local_120;
  param_1[0xaa] = lVar27;
  if (local_1e8 != 0) {
    plVar24 = plVar35 + 2;
    plVar35 = plVar35 + 0x11f;
    uVar28 = uVar14;
    do {
      plVar38 = plVar24;
      uVar46 = uVar14;
      if (0 < (int)*plVar35) {
        do {
          LOCK();
          *(int *)(*plVar38 + 0x42dc) = *(int *)(*plVar38 + 0x42dc) + -1;
          UNLOCK();
          uVar19 = (int)uVar46 + 1;
          plVar38 = plVar38 + 1;
          uVar46 = (ulonglong)uVar19;
        } while ((int)uVar19 < (int)*plVar35);
      }
      uVar28 = uVar28 + 1;
      plVar35 = (longlong *)((longlong)plVar35 + 4);
      plVar24 = plVar24 + 0x11;
    } while ((longlong)uVar28 < (longlong)local_1e8);
  }
  if (((param_1[0xb4] != 0) &&
      (((double)param_1[0x58] <= DAT_183974d08 && DAT_183974d08 != (double)param_1[0x58] ||
       (*(int *)(param_1[0xb2] + 0x1d4) == 0)))) &&
     ((*(int *)(param_1[0xb2] + 0xe0) != 0 || (*(int *)(param_1[0xb2] + 0xe4) != 0)))) {
    lVar27 = local_120;
    uVar28 = uVar14;
    if (0 < local_120) {
      do {
        lVar17 = (longlong)(int)param_1[3] * 0x18060 +
                 *(longlong *)(uVar28 + 0x1030 + param_1[0xb5]);
        lVar34 = 0x10000;
        uVar46 = uVar14;
        do {
          lVar36 = 0x400;
          do {
            *(int *)(uVar46 + param_1[0xb4]) =
                 *(int *)(uVar46 + param_1[0xb4]) + *(int *)(lVar17 + uVar46);
            uVar46 = uVar46 + 4;
            lVar36 = lVar36 + -1;
          } while (lVar36 != 0);
          *(int *)(lVar34 + param_1[0xb4]) =
               *(int *)(lVar34 + param_1[0xb4]) + *(int *)(lVar17 + lVar34);
          lVar34 = lVar34 + 4;
        } while (lVar34 < 0x10040);
        lVar27 = lVar27 + -1;
        uVar28 = uVar28 + 0x8d618;
      } while (lVar27 != 0);
    }
    thunk_FUN_1829a3920(param_1);
    if (0 < lVar12) {
      do {
        pvVar21 = (void *)((longlong)(int)param_1[3] * 0x18060 +
                          *(longlong *)(uVar14 + 0x1030 + param_1[0xb5]));
        puVar18 = (undefined8 *)(param_1[0xb4] + 0x10040);
        lVar27 = 0x100;
        puVar25 = (undefined8 *)((longlong)pvVar21 + 0x10040);
        do {
          uVar13 = puVar18[1];
          *puVar25 = *puVar18;
          puVar25[1] = uVar13;
          uVar13 = puVar18[3];
          puVar25[2] = puVar18[2];
          puVar25[3] = uVar13;
          uVar13 = puVar18[5];
          puVar25[4] = puVar18[4];
          puVar25[5] = uVar13;
          uVar13 = puVar18[7];
          puVar25[6] = puVar18[6];
          puVar25[7] = uVar13;
          uVar13 = puVar18[9];
          puVar25[8] = puVar18[8];
          puVar25[9] = uVar13;
          uVar13 = puVar18[0xb];
          puVar25[10] = puVar18[10];
          puVar25[0xb] = uVar13;
          uVar13 = puVar18[0xd];
          puVar25[0xc] = puVar18[0xc];
          puVar25[0xd] = uVar13;
          uVar13 = puVar18[0xf];
          puVar25[0xe] = puVar18[0xe];
          puVar25[0xf] = uVar13;
          puVar18 = puVar18 + 0x10;
          lVar27 = lVar27 + -1;
          puVar25 = puVar25 + 0x10;
        } while (lVar27 != 0);
        memset(pvVar21,0,0x10040);
        uVar14 = uVar14 + 0x8d618;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
  lVar12 = thunk_FUN_18299c7f0();
  param_1[0xab] = lVar12;
  return;
}


