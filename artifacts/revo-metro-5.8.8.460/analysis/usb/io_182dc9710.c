/* 0x182dc9710 size=0x20e2
   SetEvent
*/


void FUN_182dc9710(longlong param_1,uint param_2,longlong param_3)

{
  double *pdVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  byte bVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  LPCRITICAL_SECTION p_Var25;
  longlong lVar26;
  uint uVar27;
  int iVar28;
  byte bVar29;
  short sVar30;
  uint uVar31;
  longlong lVar32;
  uint uVar33;
  int iVar34;
  ulonglong uVar35;
  uint uVar36;
  longlong lVar37;
  int iVar38;
  longlong lVar39;
  longlong lVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  ulonglong uVar44;
  undefined8 uVar45;
  double dVar46;
  double dVar47;
  double *in_stack_fffffffffffffa88;
  undefined4 uVar48;
  uint local_558;
  uint local_554;
  short local_550;
  longlong local_518;
  short local_4e0;
  double local_4d8;
  double local_4d0;
  LPCRITICAL_SECTION local_4c8;
  longlong local_4c0;
  undefined1 local_4b8 [360];
  longlong local_350;
  longlong local_348;
  longlong alStack_310 [4];
  longlong alStack_2f0 [4];
  longlong alStack_2d0 [4];
  longlong alStack_2b0 [4];
  longlong alStack_290 [16];
  longlong alStack_210 [58];
  
  uVar44 = (ulonglong)param_2;
  lVar39 = uVar44 * 0xc08 + *(longlong *)(param_1 + 0xa0);
  if (*(int *)(*(longlong *)(param_1 + 0x590) + 0x10) == 0) {
LAB_182dc97d7:
    lVar12 = *(longlong *)(param_1 + 0x590);
    lVar40 = lVar39;
    if (*(int *)(lVar12 + 0x10) == 0) {
      lVar40 = *(longlong *)(param_1 + 0xa0);
    }
    uVar15 = *(uint *)(param_1 + 0x90);
    pdVar1 = (double *)(lVar40 + 0x3b8);
    uVar21 = uVar15 * param_2;
    plVar5 = (longlong *)**(longlong **)(param_1 + 0x598);
    local_4c0 = *plVar5;
    if ((*(int *)(lVar12 + 0x1d4) < 1) || (bVar6 = true, *(int *)(lVar12 + 0x1d0) < 1)) {
      bVar6 = false;
    }
    uVar36 = *(uint *)(lVar39 + 0x770);
    uVar20 = (ulonglong)uVar36;
    uVar10 = *(int *)((*(longlong **)(param_1 + 0x598))[2] + 0x30) + 0xfU >> 4;
    uVar11 = *(uint *)(lVar12 + 0xb4) >> 4;
    if ((param_2 == 0) ||
       (bVar29 = 0,
       *(uint *)((ulonglong)(param_2 - 1) * 0xc08 + 0x770 + *(longlong *)(param_1 + 0xa0)) != uVar36
       )) {
      bVar29 = 1;
    }
    if ((param_2 == *(int *)(param_1 + 0x8c) - 1U) ||
       (bVar7 = 0,
       *(uint *)((ulonglong)(param_2 + 1) * 0xc08 + 0x770 + *(longlong *)(param_1 + 0xa0)) != uVar36
       )) {
      bVar7 = 1;
    }
    uVar16 = (ulonglong)(uVar36 + 1);
    uVar17 = param_2 - *(int *)(*(longlong *)(param_1 + 0xb0) + uVar20 * 4);
    uVar4 = *(uint *)(*(longlong *)(param_1 + 0xb0) + uVar16 * 4);
    if ((bVar29 != 0) && (*(int *)(lVar39 + 0xbfc) == 0)) {
      thunk_FUN_182df0fb0(pdVar1,param_1 + 0x2110);
    }
    if (*(int *)(*(longlong *)(param_1 + 0x590) + 0x2d4) != 0) {
      p_Var25 = (LPCRITICAL_SECTION)(lVar39 + 0xbd0);
      local_4c8 = p_Var25;
      EnterCriticalSection(p_Var25);
      if (*(int *)(lVar39 + 0xc00) == 0) {
        lVar12 = *(longlong *)(param_1 + 0x590);
        if ((*(int *)(lVar12 + 0x10) == 0) && (param_2 != 0)) {
          *(undefined8 *)(lVar40 + 0x768) = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x768);
        }
        else {
          lVar13 = *(longlong *)(param_1 + 0x598);
          dVar47 = 0.0;
          if ((*(int *)(lVar13 + 0xf4) == 5) || (*(int *)(lVar12 + 0x1e0) == 0)) {
            lVar26 = *(longlong *)(lVar13 + 0x3818);
          }
          else {
            lVar26 = *(longlong *)(lVar13 + 0x3820);
          }
          if (lVar26 != 0) {
            iVar38 = *(int *)(lVar12 + 0x234);
            uVar19 = 0;
            local_554 = 0;
            uVar33 = 0x10;
            if (*(int *)(lVar12 + 0x234) == 8) {
              uVar33 = 8;
            }
            uVar43 = *(uint *)(*(longlong *)(lVar13 + 0x10) + 0x34);
            uVar22 = uVar43;
            if (*(int *)(lVar12 + 0x10) != 0) {
              local_554 = *(int *)(lVar12 + 0xb4) * param_2;
              uVar19 = (ulonglong)local_554;
              uVar22 = *(int *)(lVar12 + 0xb4) + local_554;
            }
            uVar27 = *(uint *)(*(longlong *)(lVar13 + 0x10) + 0x30);
            uVar42 = 0;
            local_558 = 0;
            uVar23 = (uint)uVar19;
            while ((uVar23 < uVar22 && (uVar23 = (uint)uVar19, p_Var25 = local_4c8, uVar23 < uVar43)
                   )) {
              uVar35 = 0;
              if (uVar27 != 0) {
                do {
                  uVar23 = (uint)uVar19 + iVar38;
                  uVar31 = 0;
                  dVar46 = 0.0;
                  uVar41 = (uint)uVar35;
                  if ((uint)uVar19 < uVar23) {
                    dVar46 = 0.0;
                    do {
                      if (*(uint *)(*(longlong *)(lVar13 + 0x10) + 0x34) <= (uint)uVar19) break;
                      uVar18 = uVar35;
                      uVar42 = uVar41;
                      while ((uVar42 < uVar41 + iVar38 && ((uint)uVar18 < uVar27))) {
                        uVar31 = uVar31 + 1;
                        uVar42 = (uint)uVar18 + uVar33;
                        dVar46 = dVar46 + *(double *)
                                           (lVar26 + (longlong)
                                                     (int)((int)(uVar18 / uVar33) +
                                                          (int)(uVar19 / uVar33) *
                                                          (((uVar33 - 1) + uVar27) / uVar33)) * 8);
                        uVar18 = (ulonglong)uVar42;
                      }
                      uVar42 = (uint)uVar19 + uVar33;
                      uVar19 = (ulonglong)uVar42;
                    } while (uVar42 < uVar23);
                    uVar19 = (ulonglong)local_554;
                    lVar13 = *(longlong *)(param_1 + 0x598);
                    uVar42 = local_558;
                  }
                  uVar23 = (uint)uVar19;
                  uVar42 = uVar42 + 1;
                  uVar35 = (ulonglong)(uVar41 + iVar38);
                  dVar47 = dVar47 + dVar46 / (double)uVar31;
                  local_558 = uVar42;
                } while (uVar41 + iVar38 < uVar27);
              }
              local_554 = uVar23 + iVar38;
              uVar23 = local_554;
              uVar19 = (ulonglong)local_554;
            }
            dVar47 = dVar47 / (double)uVar42;
          }
          *(double *)(lVar40 + 0x768) = (double)*(int *)(local_4c0 + 0x8dc) + dVar47;
        }
        *(undefined4 *)(lVar39 + 0xc00) = 1;
      }
      LeaveCriticalSection(p_Var25);
    }
    local_550 = (short)uVar17;
    local_4e0 = (short)uVar4;
    sVar30 = (3 - *(short *)(*(longlong *)(param_1 + 0x590) + 0xb4) * local_550) * 4;
    *(short *)(param_3 + 0x1572c) = sVar30;
    sVar9 = (((local_4e0 - (short)param_2) + -1) * *(short *)(*(longlong *)(param_1 + 0x590) + 0xb4)
            + -4) * 4;
    *(short *)(param_3 + 0x1572a) = sVar9;
    if (sVar9 < sVar30) {
      *(undefined4 *)(param_3 + 0x1572a) = 0;
    }
    if (*(uint *)(lVar39 + 0xbfc) < uVar15) {
      lVar12 = uVar44 * 0x38;
      uVar33 = uVar15 - 1;
      p_Var25 = (LPCRITICAL_SECTION)(lVar39 + 0xbd0);
      local_4c8 = p_Var25;
      do {
        uVar43 = *(uint *)(lVar39 + 0xbfc);
        uVar22 = uVar21 + uVar43;
        uVar19 = (ulonglong)uVar22;
        uVar35 = (ulonglong)uVar22;
        lVar40 = uVar35 * 0x208 + plVar5[0xb];
        thunk_FUN_1830106d0(lVar40,*(undefined8 *)(param_1 + 0x598),uVar22,
                            *(undefined4 *)(local_4c0 + 0x8dc),bVar29,bVar7,uVar43 == uVar33 & bVar7
                           );
        if (bVar6) {
          if ((uVar43 == 0) && (*(int *)(*(longlong *)(param_1 + 0x590) + 0x10) == 0)) {
            lVar13 = *(longlong *)(param_1 + 0x5b0);
            lVar26 = *(longlong *)(param_1 + 0x5b8);
            *(undefined4 *)(lVar26 + 0x18) = *(undefined4 *)(lVar13 + 0x18);
            *(undefined4 *)(lVar26 + 0x14) = *(undefined4 *)(lVar13 + 0x14);
            *(undefined1 *)(lVar26 + 0x1c) = *(undefined1 *)(lVar13 + 0x1c);
            thunk_FUN_182df10b0(lVar39,pdVar1);
            thunk_FUN_182df0f10(lVar39,pdVar1);
          }
          if ((bVar29 != 0) && (*(uint *)(param_1 + 0x84) != param_2)) {
            *(longlong *)(plVar5[0xf] + 0x18 + lVar12) = plVar5[0x9d];
            uVar45 = thunk_FUN_182dc2310(plVar5[0x9d]);
            *(undefined8 *)(plVar5[0xf] + 0x20 + lVar12) = uVar45;
          }
          lVar26 = plVar5[0xe];
          lVar13 = uVar19 * 0x48;
          if ((((*(int *)(*(longlong *)(param_1 + 0x590) + 0x10) == 0) || (uVar17 < uVar43)) ||
              (bVar29 != 0)) || (*(uint *)(param_1 + 0x84) == param_2)) {
            if (((*(int *)(*(longlong *)(param_1 + 0x590) + 0x10) == 0) && (bVar29 == 0)) &&
               (*(uint *)(param_1 + 0x84) != param_2)) {
              uVar45 = *(undefined8 *)((ulonglong)(param_2 - 1) * 0x38 + 0x18 + plVar5[0xf]);
            }
            else {
              uVar45 = *(undefined8 *)(plVar5[0xf] + 0x18 + lVar12);
            }
          }
          else {
            uVar45 = *(undefined8 *)(plVar5[0xe] + 0x40 + (ulonglong)((uVar22 - uVar15) + 1) * 0x48)
            ;
          }
          *(undefined8 *)(lVar13 + 0x40 + lVar26) = uVar45;
          lVar37 = *(longlong *)(param_1 + 0x590);
          bVar14 = (byte)*(undefined4 *)(lVar37 + 0x324);
          uVar27 = (*(uint *)(lVar40 + 0x6c) >> (bVar14 & 0x1f)) * uVar11;
          iVar38 = (*(uint *)(lVar40 + 0x68) >> (bVar14 & 0x1f)) * uVar11;
          if ((*(longlong *)(lVar37 + 0x378) == 0) || (*(int *)(lVar37 + 0x348) == 0)) {
            uVar42 = 0;
            *(undefined8 *)(lVar13 + 4 + lVar26) = 0;
            if (uVar11 != 0) {
              uVar23 = uVar27 * uVar10 + iVar38;
              do {
                if (*(uint *)(*(longlong *)(param_1 + 0xb8) + uVar16 * 4) <= uVar27) break;
                uVar31 = uVar23;
                do {
                  if (uVar10 <= (iVar38 - uVar23) + uVar31) break;
                  uVar18 = (ulonglong)uVar31;
                  uVar31 = uVar31 + 1;
                  piVar3 = (int *)(lVar13 + 4 + lVar26);
                  *piVar3 = *piVar3 + (*(ushort *)
                                        (*(longlong *)(*(longlong *)(param_1 + 0x598) + 0x1fd0) +
                                        uVar18 * 2) & 0x3fff);
                  piVar3 = (int *)(lVar13 + 8 + lVar26);
                  *piVar3 = *piVar3 + *(int *)(*(longlong *)
                                                (*(longlong *)(param_1 + 0x598) + 0x1fb8) +
                                              uVar18 * 4);
                } while (uVar31 - uVar23 < uVar11);
                uVar23 = uVar23 + uVar10;
                uVar42 = uVar42 + 1;
                uVar27 = uVar27 + 1;
                p_Var25 = local_4c8;
              } while (uVar42 < uVar11);
            }
          }
        }
        else {
          *(longlong *)(plVar5[0xe] + 0x40 + uVar19 * 0x48) = plVar5[0x9d];
        }
        local_518 = uVar19 * 0x48;
        if (((*(int *)(*(longlong *)(param_1 + 0x590) + 0x10) != 0) && (uVar43 == 0)) &&
           (bVar29 == 0)) {
          thunk_FUN_182df10b0(pdVar1,param_1 + 0x2110);
          thunk_FUN_182df0f10(pdVar1,(ulonglong)(param_2 - 1) * 0xc08 +
                                     *(longlong *)(param_1 + 0xa0));
        }
        if ((*(double *)(*(longlong *)(param_1 + 0x590) + 0x2e8) != 0.0) &&
           (0 < (int)(*(double *)(param_1 + 0x1f0) - *(double *)(param_1 + 0x230)))) {
          *(undefined1 *)(lVar40 + 0x2c) = 1;
        }
        in_stack_fffffffffffffa88 = pdVar1;
        lVar13 = thunk_FUN_1830352b0(param_3,lVar40,*(undefined8 *)(param_1 + 0x598),
                                     (ulonglong)
                                     *(uint *)(*(longlong *)(param_1 + 0x5d0) + uVar35 * 4) * 0x1c +
                                     *(longlong *)(param_1 + 0x5c8),pdVar1);
        if (*(int *)(*(longlong *)(param_1 + 0x590) + 0x394) != 0) {
          lVar26 = *(longlong *)(param_1 + 0x588);
          if (*(int *)(lVar26 + 0x13ba8) <= *(int *)(*(longlong *)(param_1 + 0x598) + 0x1c)) {
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar26 + 0x13bb0));
            p_Var25 = local_4c8;
            uVar27 = 0;
            do {
              uVar23 = 0;
              uVar42 = uVar27;
              if (*(int *)(*(longlong *)(param_1 + 0x590) + 0x328) != 0) {
                do {
                  lVar37 = (longlong)(int)uVar42;
                  if (*(int *)(*(longlong *)(lVar40 + 0x200) + lVar37 * 4) != 0) {
                    lVar32 = (longlong)
                             (int)(uVar42 + (*(int *)(*(longlong *)(param_1 + 0x598) + 0x1c) -
                                            *(int *)(*(longlong *)(param_1 + 0x588) + 0x13ba8)) *
                                            *(int *)(*(longlong *)(param_1 + 0x590) + 0x328) * 3);
                    plVar2 = (longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x588) + 0x13b98) + lVar32 * 8);
                    *plVar2 = *plVar2 + (ulonglong)
                                        *(uint *)(*(longlong *)(lVar40 + 0x1f8) + lVar37 * 4);
                    plVar2 = (longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x588) + 0x13b90) + lVar32 * 8);
                    *plVar2 = *plVar2 + *(longlong *)(*(longlong *)(lVar40 + 0x1f0) + lVar37 * 8);
                    piVar3 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x588) + 0x13ba0) +
                                    lVar32 * 4);
                    *piVar3 = *piVar3 + *(int *)(*(longlong *)(lVar40 + 0x200) + lVar37 * 4);
                  }
                  uVar23 = uVar23 + 1;
                  uVar42 = uVar42 + 3;
                } while (uVar23 < *(uint *)(*(longlong *)(param_1 + 0x590) + 0x328));
              }
              uVar27 = uVar27 + 1;
            } while (uVar27 < 3);
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar26 + 0x13bb0));
          }
          FUN_18001c2f1(*(undefined8 *)(lVar40 + 0x1f8));
          *(undefined8 *)(lVar40 + 0x1f8) = 0;
          FUN_18001c2f1(*(undefined8 *)(lVar40 + 0x1f0));
          *(undefined8 *)(lVar40 + 0x1f0) = 0;
          FUN_18001c2f1(*(undefined8 *)(lVar40 + 0x200));
          *(undefined8 *)(lVar40 + 0x200) = 0;
        }
        LOCK();
        *(int *)(param_1 + 0x528) = *(int *)(param_1 + 0x528) + *(int *)(param_1 + 0x524);
        UNLOCK();
        LOCK();
        *(int *)(param_1 + 0x52c) = *(int *)(param_1 + 0x52c) + 1;
        UNLOCK();
        thunk_FUN_182df1500(pdVar1,lVar40,
                            (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x5d0) + uVar35 * 4) * 0x1c
                            + *(longlong *)(param_1 + 0x5c8));
        if ((*(int *)(*(longlong *)(param_1 + 0x590) + 0x10) != 0) && (uVar43 == 1)) {
          thunk_FUN_182df0f10(lVar39);
        }
        if ((*(int *)(*(longlong *)(param_1 + 0x590) + 300) != 0) &&
           (*(int *)(*(longlong *)(param_1 + 0x590) + 0x130) != 0)) {
          thunk_FUN_182ffde60(uVar44 * 0x2748 + 0x28 + *(longlong *)(param_1 + 0x2548),
                              *(undefined8 *)(param_1 + 0x598),uVar43);
        }
        if (*(int *)(*(longlong *)(param_1 + 0x590) + 300) == 0 &&
            *(int *)(*(longlong *)(param_1 + 0x590) + 0x120) == 0) {
          thunk_FUN_183004660(uVar44 * 0x2748 + *(longlong *)(param_1 + 0x2548));
        }
        else if ((!bVar6) && (*(longlong *)(param_1 + 8) != 0)) {
          if (bVar29 == 0) {
            uVar27 = uVar43;
            if (1 < uVar17) {
              uVar19 = (ulonglong)(param_2 - 2);
              if (uVar43 == uVar33) {
                lVar26 = *(longlong *)(param_1 + 0x2548);
                lVar37 = uVar19 * 0x2748;
                EnterCriticalSection((LPCRITICAL_SECTION)(lVar26 + 10000 + lVar37));
                iVar38 = *(int *)(lVar26 + 0x2740 + lVar37);
                LeaveCriticalSection((LPCRITICAL_SECTION)(lVar26 + 10000 + lVar37));
              }
              else {
                lVar26 = *(longlong *)(param_1 + 0x2548);
                lVar37 = uVar19 * 0x2748;
                EnterCriticalSection((LPCRITICAL_SECTION)(lVar26 + 0x26a0 + lVar37));
                iVar38 = *(int *)(lVar26 + 0x26d0 + lVar37);
                LeaveCriticalSection((LPCRITICAL_SECTION)(lVar26 + 0x26a0 + lVar37));
              }
              lVar26 = uVar19 * 0x2748;
              if (iVar38 < (int)uVar43) {
                lVar37 = *(longlong *)(param_1 + 0x2548);
                if (uVar43 == uVar33) {
                  EnterCriticalSection((LPCRITICAL_SECTION)(lVar37 + 10000 + lVar26));
                  uVar27 = *(uint *)(lVar37 + 0x2740 + lVar26);
                  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar37 + 10000 + lVar26));
                }
                else {
                  EnterCriticalSection((LPCRITICAL_SECTION)(lVar37 + 0x26a0 + lVar26));
                  uVar27 = *(uint *)(lVar37 + 0x26d0 + lVar26);
                  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar37 + 0x26a0 + lVar26));
                }
              }
            }
            lVar26 = (ulonglong)(param_2 - 1) * 0x2748 + *(longlong *)(param_1 + 0x2548);
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar26 + 0x26d8));
            *(uint *)(lVar26 + 0x2708) = uVar27;
            WakeAllConditionVariable((PCONDITION_VARIABLE)(lVar26 + 0x2700));
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar26 + 0x26d8));
          }
          if ((*(longlong *)(param_1 + 8) != 0) && (bVar7 != 0)) {
            uVar27 = uVar43;
            if (1 < uVar17) {
              uVar19 = (ulonglong)(param_2 - 1);
              if (uVar43 == uVar33) {
                lVar26 = *(longlong *)(param_1 + 0x2548);
                lVar37 = uVar19 * 0x2748;
                EnterCriticalSection((LPCRITICAL_SECTION)(lVar26 + 10000 + lVar37));
                iVar38 = *(int *)(lVar26 + 0x2740 + lVar37);
                LeaveCriticalSection((LPCRITICAL_SECTION)(lVar26 + 10000 + lVar37));
              }
              else {
                lVar26 = *(longlong *)(param_1 + 0x2548);
                lVar37 = uVar19 * 0x2748;
                EnterCriticalSection((LPCRITICAL_SECTION)(lVar26 + 0x26a0 + lVar37));
                iVar38 = *(int *)(lVar26 + 0x26d0 + lVar37);
                LeaveCriticalSection((LPCRITICAL_SECTION)(lVar26 + 0x26a0 + lVar37));
              }
              lVar26 = uVar19 * 0x2748;
              if (iVar38 < (int)uVar43) {
                lVar37 = *(longlong *)(param_1 + 0x2548);
                if (uVar43 == uVar33) {
                  EnterCriticalSection((LPCRITICAL_SECTION)(lVar37 + 10000 + lVar26));
                  uVar27 = *(uint *)(lVar37 + 0x2740 + lVar26);
                  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar37 + 10000 + lVar26));
                }
                else {
                  EnterCriticalSection((LPCRITICAL_SECTION)(lVar37 + 0x26a0 + lVar26));
                  uVar27 = *(uint *)(lVar37 + 0x26d0 + lVar26);
                  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar37 + 0x26a0 + lVar26));
                }
              }
            }
            lVar26 = *(longlong *)(param_1 + 0x2548) + uVar44 * 0x2748;
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar26 + 0x26d8));
            *(uint *)(lVar26 + 0x2708) = uVar27;
            WakeAllConditionVariable((PCONDITION_VARIABLE)(lVar26 + 0x2700));
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar26 + 0x26d8));
          }
        }
        *(int *)(lVar39 + 0xbfc) = *(int *)(lVar39 + 0xbfc) + 1;
        memset(local_4b8,0,0x458);
        iVar38 = thunk_FUN_182dc3fd0(param_1,lVar40);
        *(double *)(plVar5[0xf] + 0x30 + lVar12) =
             (double)iVar38 + *(double *)(plVar5[0xf] + 0x30 + lVar12);
        if (*(int *)(*(longlong *)(param_1 + 0x590) + 0x1f8) != 0) {
          *(int *)(lVar39 + 0x778) = *(int *)(lVar39 + 0x778) + *(int *)(lVar13 + 0x2054);
          *(int *)(lVar39 + 0x77c) = *(int *)(lVar39 + 0x77c) + *(int *)(lVar13 + 0x2058);
          *(int *)(lVar39 + 0x780) =
               *(int *)(lVar39 + 0x780) +
               ((*(int *)(lVar13 + 0x2050) - *(int *)(lVar13 + 0x2054)) - *(int *)(lVar13 + 0x2058))
          ;
          iVar38 = *(int *)(lVar39 + 0x784);
          iVar24 = *(int *)(lVar39 + 0x788);
          iVar28 = *(int *)(lVar39 + 0x78c);
          uVar19 = 0;
          do {
            bVar14 = ((char)*(undefined4 *)(*(longlong *)(param_1 + 0x590) + 0x328) - (byte)uVar19)
                     * '\x02';
            if (*(uint *)(*(longlong *)(param_1 + 0x590) + 0xb4) >> ((byte)uVar19 & 0x1f) == 8) {
              iVar34 = (int)alStack_2b0[uVar19] + (int)local_350;
            }
            else {
              iVar34 = (int)(alStack_2b0[uVar19] << (bVar14 & 0x3f));
            }
            iVar38 = iVar38 + iVar34;
            uVar27 = (int)uVar19 + 1;
            iVar24 = iVar24 + (int)(alStack_2d0[uVar19] << (bVar14 & 0x3f));
            iVar28 = iVar28 + (int)(alStack_2f0[uVar19] + alStack_310[uVar19] << (bVar14 & 0x3f));
            *(int *)(lVar39 + 0x784) = iVar38;
            *(int *)(lVar39 + 0x78c) = iVar28;
            *(int *)(lVar39 + 0x788) = iVar24;
            uVar19 = (ulonglong)uVar27;
          } while (uVar27 <= *(uint *)(*(longlong *)(param_1 + 0x590) + 0x328));
        }
        *(longlong *)(lVar39 + 0x8f0) = *(longlong *)(lVar39 + 0x8f0) + 1;
        *(longlong *)(lVar39 + 0x8f8) =
             *(longlong *)(lVar39 + 0x8f8) + *(longlong *)(lVar13 + 0x2038);
        *(longlong *)(lVar39 + 0x900) =
             *(longlong *)(lVar39 + 0x900) + *(longlong *)(lVar13 + 0x2040);
        *(longlong *)(lVar39 + 0x908) =
             *(longlong *)(lVar39 + 0x908) + (ulonglong)*(uint *)(lVar13 + 0x2024);
        *(longlong *)(lVar39 + 0x910) =
             *(longlong *)(lVar39 + 0x910) + (ulonglong)*(uint *)(lVar13 + 0x2028);
        *(longlong *)(lVar39 + 0x918) =
             *(longlong *)(lVar39 + 0x918) + *(longlong *)(lVar13 + 0x2030);
        *(longlong *)(lVar39 + 0x8e8) = *(longlong *)(lVar39 + 0x8e8) + local_348;
        *(longlong *)(lVar39 + 0x8e0) = *(longlong *)(lVar39 + 0x8e0) + local_350;
        uVar19 = 0;
        do {
          plVar2 = (longlong *)(lVar39 + 0x920 + uVar19 * 8);
          *plVar2 = *plVar2 + alStack_310[uVar19];
          plVar2 = (longlong *)(lVar39 + 0x940 + uVar19 * 8);
          *plVar2 = *plVar2 + alStack_2f0[uVar19];
          lVar40 = uVar19 * 0x20;
          plVar2 = (longlong *)((uVar19 + 0x4d) * 0x20 + lVar39);
          *plVar2 = *plVar2 + alStack_290[uVar19 * 4];
          *(longlong *)(lVar39 + 0x9a8 + lVar40) =
               *(longlong *)(lVar40 + 0x9a8 + lVar39) + alStack_290[uVar19 * 4 + 1];
          plVar2 = (longlong *)(lVar39 + 0x9b0 + lVar40);
          *plVar2 = *plVar2 + alStack_290[uVar19 * 4 + 2];
          plVar2 = (longlong *)(lVar39 + 0x9b8 + lVar40);
          *plVar2 = *plVar2 + alStack_290[uVar19 * 4 + 3];
          uVar27 = (int)uVar19 + 1;
          plVar2 = (longlong *)(lVar39 + 0xa20 + uVar19 * 0x18);
          *plVar2 = *plVar2 + alStack_210[uVar19 * 3];
          *(longlong *)(lVar39 + 0xa28 + uVar19 * 0x18) =
               *(longlong *)(lVar39 + 0xa28 + uVar19 * 0x18) + alStack_210[uVar19 * 3 + 1];
          *(longlong *)(lVar39 + 0xa30 + uVar19 * 0x18) =
               *(longlong *)(lVar39 + 0xa30 + uVar19 * 0x18) + alStack_210[uVar19 * 3 + 2];
          uVar19 = (ulonglong)uVar27;
        } while (uVar27 <= *(uint *)(*(longlong *)(param_1 + 0x590) + 0x328));
        *(undefined4 *)(local_518 + plVar5[0xe]) = *(undefined4 *)(lVar13 + 0x2050);
        FUN_1807029c0();
        if (bVar6) {
          lVar40 = plVar5[0xe];
          iVar38 = *(int *)(*(longlong *)(param_1 + 0x590) + 0x10);
          if ((((iVar38 == 0) ||
               (uVar22 == *(int *)(*(longlong *)(param_1 + 0xb0) + uVar20 * 4) * uVar15)) ||
              (*(int *)(*(longlong *)(param_1 + 0x590) + 0x244) == 0)) || (iVar38 == 0)) {
            piVar3 = (int *)(plVar5[0xf] + 0x10 + lVar12);
            *piVar3 = *piVar3 + *(int *)(local_518 + 4 + lVar40);
            piVar3 = (int *)(plVar5[0xf] + 0x14 + lVar12);
            *piVar3 = *piVar3 + *(int *)(local_518 + 8 + lVar40);
            piVar3 = (int *)(plVar5[0xf] + 4 + lVar12);
            *piVar3 = *piVar3 + *(int *)(local_518 + lVar40);
            *(double *)(plVar5[0xf] + 0x28 + lVar12) =
                 *(double *)(local_518 + 0x40 + lVar40) + *(double *)(plVar5[0xf] + 0x28 + lVar12);
            *(uint *)(lVar12 + plVar5[0xf]) = uVar22;
          }
          if (*(int *)(*(longlong *)(param_1 + 0x590) + 0x10) == 0) {
            if (uVar43 == uVar33) {
              local_4d8 = *(double *)(plVar5[0xe] + 0x40 + local_518);
              uVar45 = *(undefined8 *)(param_1 + 0xb0);
              in_stack_fffffffffffffa88 = &local_4d8;
              iVar38 = thunk_FUN_18304b7f0(*(undefined8 *)(*(longlong *)(param_1 + 0x588) + 0x10160)
                                           ,*(undefined8 *)(param_1 + 0x598),param_2,param_1 + 0xd0,
                                           in_stack_fffffffffffffa88,uVar45,uVar36);
              uVar48 = (undefined4)((ulonglong)uVar45 >> 0x20);
              dVar47 = (double)*(int *)(*(longlong *)(param_1 + 0x590) + 0x240);
              dVar46 = (double)*(int *)(*(longlong *)(param_1 + 0x590) + 0x23c);
              if (dVar47 <= local_4d8) {
                dVar47 = local_4d8;
              }
              local_4d8 = dVar47;
              if (dVar46 <= dVar47) {
                local_4d8 = dVar46;
              }
              *(double *)(plVar5[0xf] + 0x18 + lVar12) = local_4d8;
              uVar45 = thunk_FUN_182dc2310(local_4d8);
              *(undefined8 *)(plVar5[0xf] + 0x20 + lVar12) = uVar45;
              if (iVar38 < 0) {
                in_stack_fffffffffffffa88 =
                     (double *)
                     CONCAT44((int)((ulonglong)in_stack_fffffffffffffa88 >> 0x20),
                              *(undefined4 *)(*(longlong *)(param_1 + 0x598) + 0x18));
                thunk_FUN_182dc1d60(*(undefined8 *)(param_1 + 0x590),&DAT_18393797c,3,
                                    "POC %d row %d - encode restart required for VBV, to %.2f from %.2f\n"
                                    ,in_stack_fffffffffffffa88,CONCAT44(uVar48,param_2),local_4d8,
                                    *(undefined8 *)(plVar5[0xe] + 0x40 + local_518));
                lVar40 = *(longlong *)(param_1 + 0x5b8);
                lVar13 = *(longlong *)(param_1 + 0x5b0);
                *(uint *)(param_1 + 0x84) = param_2;
                *(undefined4 *)(lVar13 + 0x18) = *(undefined4 *)(lVar40 + 0x18);
                *(undefined4 *)(lVar13 + 0x14) = *(undefined4 *)(lVar40 + 0x14);
                *(undefined1 *)(lVar13 + 0x1c) = *(undefined1 *)(lVar40 + 0x1c);
                thunk_FUN_182df10b0(pdVar1,lVar39);
                thunk_FUN_182df0f10(pdVar1);
                *(undefined4 *)(lVar39 + 0xbfc) = 0;
                memset((void *)(lVar39 + 0x778),0,0x458);
                *(undefined4 *)(lVar12 + plVar5[0xf]) = 0;
                *(undefined4 *)(plVar5[0xf] + 4 + lVar12) = 0;
                *(undefined4 *)(plVar5[0xf] + 0x10 + lVar12) = 0;
                *(undefined4 *)(plVar5[0xf] + 0x14 + lVar12) = 0;
                *(undefined8 *)(plVar5[0xf] + 0x28 + lVar12) = 0;
                *(undefined8 *)(plVar5[0xf] + 0x30 + lVar12) = 0;
              }
            }
          }
          else if ((uVar17 == uVar43) && (bVar29 == 0)) {
            if (*(int *)(*(longlong *)(param_1 + 0x590) + 0x244) != 0) {
              uVar43 = uVar21 + uVar43;
              if (*(int *)(*(longlong *)(param_1 + 0xb0) + uVar20 * 4) <= (int)param_2) {
                lVar40 = (longlong)(int)param_2 * 0x38;
                uVar42 = (param_2 + 1) * uVar15 - 1;
                uVar27 = param_2;
                uVar22 = uVar21;
                do {
                  if (uVar22 <= uVar43) {
                    if (3 < (uVar43 - uVar22) + 1) {
                      uVar23 = uVar22 + 2;
                      do {
                        uVar19 = (ulonglong)uVar23;
                        if (uVar42 < uVar22) goto LAB_182dcacb7;
                        uVar31 = uVar23 - 1;
                        uVar18 = (ulonglong)uVar31;
                        uVar35 = (ulonglong)uVar22;
                        piVar3 = (int *)(plVar5[0xf] + 0x10 + lVar40);
                        *piVar3 = *piVar3 + *(int *)(plVar5[0xe] + 4 + uVar35 * 0x48);
                        piVar3 = (int *)(plVar5[0xf] + 0x14 + lVar40);
                        *piVar3 = *piVar3 + *(int *)(plVar5[0xe] + 8 + uVar35 * 0x48);
                        piVar3 = (int *)(plVar5[0xf] + 4 + lVar40);
                        *piVar3 = *piVar3 + *(int *)(plVar5[0xe] + uVar35 * 0x48);
                        *(double *)(plVar5[0xf] + 0x28 + lVar40) =
                             *(double *)(plVar5[0xe] + 0x40 + uVar35 * 0x48) +
                             *(double *)(plVar5[0xf] + 0x28 + lVar40);
                        *(uint *)(lVar40 + plVar5[0xf]) = uVar22;
                        if (uVar42 < uVar31) goto LAB_182dcacb7;
                        piVar3 = (int *)(plVar5[0xf] + 0x10 + lVar40);
                        *piVar3 = *piVar3 + *(int *)(plVar5[0xe] + 4 + uVar18 * 0x48);
                        piVar3 = (int *)(plVar5[0xf] + 0x14 + lVar40);
                        *piVar3 = *piVar3 + *(int *)(plVar5[0xe] + 8 + uVar18 * 0x48);
                        piVar3 = (int *)(plVar5[0xf] + 4 + lVar40);
                        *piVar3 = *piVar3 + *(int *)(plVar5[0xe] + uVar18 * 0x48);
                        *(double *)(plVar5[0xf] + 0x28 + lVar40) =
                             *(double *)(plVar5[0xe] + 0x40 + uVar18 * 0x48) +
                             *(double *)(plVar5[0xf] + 0x28 + lVar40);
                        *(uint *)(lVar40 + plVar5[0xf]) = uVar31;
                        if (uVar42 < uVar23) goto LAB_182dcacb7;
                        uVar31 = uVar23 + 1;
                        uVar35 = (ulonglong)uVar31;
                        piVar3 = (int *)(plVar5[0xf] + 0x10 + lVar40);
                        *piVar3 = *piVar3 + *(int *)(plVar5[0xe] + 4 + uVar19 * 0x48);
                        piVar3 = (int *)(plVar5[0xf] + 0x14 + lVar40);
                        *piVar3 = *piVar3 + *(int *)(plVar5[0xe] + 8 + uVar19 * 0x48);
                        piVar3 = (int *)(plVar5[0xf] + 4 + lVar40);
                        *piVar3 = *piVar3 + *(int *)(plVar5[0xe] + uVar19 * 0x48);
                        *(double *)(plVar5[0xf] + 0x28 + lVar40) =
                             *(double *)(plVar5[0xe] + 0x40 + uVar19 * 0x48) +
                             *(double *)(plVar5[0xf] + 0x28 + lVar40);
                        *(uint *)(lVar40 + plVar5[0xf]) = uVar23;
                        if (uVar42 < uVar31) goto LAB_182dcacb7;
                        uVar22 = uVar22 + 4;
                        uVar23 = uVar23 + 4;
                        piVar3 = (int *)(plVar5[0xf] + 0x10 + lVar40);
                        *piVar3 = *piVar3 + *(int *)(plVar5[0xe] + 4 + uVar35 * 0x48);
                        piVar3 = (int *)(plVar5[0xf] + 0x14 + lVar40);
                        *piVar3 = *piVar3 + *(int *)(plVar5[0xe] + 8 + uVar35 * 0x48);
                        piVar3 = (int *)(plVar5[0xf] + 4 + lVar40);
                        *piVar3 = *piVar3 + *(int *)(plVar5[0xe] + uVar35 * 0x48);
                        *(double *)(plVar5[0xf] + 0x28 + lVar40) =
                             *(double *)(plVar5[0xe] + 0x40 + uVar35 * 0x48) +
                             *(double *)(plVar5[0xf] + 0x28 + lVar40);
                        *(uint *)(lVar40 + plVar5[0xf]) = uVar31;
                      } while (uVar22 <= uVar43 - 3);
                    }
                    for (; (uVar22 <= uVar43 && (uVar22 <= uVar42)); uVar22 = uVar22 + 1) {
                      uVar19 = (ulonglong)uVar22;
                      piVar3 = (int *)(plVar5[0xf] + 0x10 + lVar40);
                      *piVar3 = *piVar3 + *(int *)(plVar5[0xe] + 4 + uVar19 * 0x48);
                      piVar3 = (int *)(plVar5[0xf] + 0x14 + lVar40);
                      *piVar3 = *piVar3 + *(int *)(plVar5[0xe] + 8 + uVar19 * 0x48);
                      piVar3 = (int *)(plVar5[0xf] + 4 + lVar40);
                      *piVar3 = *piVar3 + *(int *)(plVar5[0xe] + uVar19 * 0x48);
                      *(double *)(plVar5[0xf] + 0x28 + lVar40) =
                           *(double *)(plVar5[0xe] + 0x40 + uVar19 * 0x48) +
                           *(double *)(plVar5[0xf] + 0x28 + lVar40);
                      *(uint *)(lVar40 + plVar5[0xf]) = uVar22;
                    }
                  }
LAB_182dcacb7:
                  uVar22 = uVar43 - uVar15;
                  uVar27 = uVar27 - 1;
                  uVar42 = uVar42 - uVar15;
                  lVar40 = lVar40 + -0x38;
                  uVar43 = uVar22 + 1;
                } while (*(int *)(*(longlong *)(param_1 + 0xb0) + uVar20 * 4) <= (int)uVar27);
              }
            }
            local_4d0 = *(double *)(plVar5[0xe] + 0x40 + local_518);
            uVar45 = *(undefined8 *)(param_1 + 0xb0);
            in_stack_fffffffffffffa88 = &local_4d0;
            iVar38 = thunk_FUN_18304b7f0(*(undefined8 *)(*(longlong *)(param_1 + 0x588) + 0x10160),
                                         *(undefined8 *)(param_1 + 0x598),param_2,param_1 + 0xd0,
                                         in_stack_fffffffffffffa88,uVar45,uVar36);
            uVar48 = (undefined4)((ulonglong)uVar45 >> 0x20);
            dVar47 = (double)*(int *)(*(longlong *)(param_1 + 0x590) + 0x240);
            dVar46 = (double)*(int *)(*(longlong *)(param_1 + 0x590) + 0x23c);
            if (dVar47 <= local_4d0) {
              dVar47 = local_4d0;
            }
            local_4d0 = dVar47;
            if (dVar46 <= dVar47) {
              local_4d0 = dVar46;
            }
            *(double *)(plVar5[0xf] + 0x18 + lVar12) = local_4d0;
            uVar45 = thunk_FUN_182dc2310(local_4d0);
            *(undefined8 *)(plVar5[0xf] + 0x20 + lVar12) = uVar45;
            if (iVar38 < 0) {
              in_stack_fffffffffffffa88 =
                   (double *)
                   CONCAT44((int)((ulonglong)in_stack_fffffffffffffa88 >> 0x20),
                            *(undefined4 *)(*(longlong *)(param_1 + 0x598) + 0x18));
              thunk_FUN_182dc1d60(*(undefined8 *)(param_1 + 0x590),&DAT_18393797c,3,
                                  "POC %d row %d - encode restart required for VBV, to %.2f from %.2f\n"
                                  ,in_stack_fffffffffffffa88,CONCAT44(uVar48,param_2),local_4d0,
                                  *(undefined8 *)(plVar5[0xe] + 0x40 + local_518));
              *(uint *)(param_1 + 0x84) = param_2;
              *(undefined1 *)(param_1 + 0x7e) = 1;
              uVar43 = *(uint *)(*(longlong *)(param_1 + 0xb0) + uVar16 * 4);
              while (uVar43 = uVar43 - 1, param_2 <= uVar43) {
                lVar40 = (ulonglong)uVar43 * 0xc08 + *(longlong *)(param_1 + 0xa0);
                if (uVar43 != param_2) {
                  p_Var25 = (LPCRITICAL_SECTION)(lVar40 + 0xbd0);
                  EnterCriticalSection(p_Var25);
                  cVar8 = *(char *)(lVar40 + 0xbf8);
                  while (cVar8 != '\0') {
                    cVar8 = thunk_FUN_183013150(param_1);
                    if (cVar8 == '\0') {
                      LeaveCriticalSection(p_Var25);
                      Sleep(0);
                      EnterCriticalSection(p_Var25);
                    }
                    else {
                      *(undefined1 *)(lVar40 + 0xbf8) = 0;
                    }
                    cVar8 = *(char *)(lVar40 + 0xbf8);
                  }
                  LeaveCriticalSection(p_Var25);
                  while( true ) {
                    EnterCriticalSection(p_Var25);
                    cVar8 = *(char *)(lVar40 + 0xbf9);
                    LeaveCriticalSection(p_Var25);
                    if (cVar8 == '\0') break;
                    Sleep(0);
                  }
                }
                (**(code **)(*(longlong *)
                              ((ulonglong)uVar43 * 0x20 + *(longlong *)(param_1 + 0x5b0)) + 0x10))()
                ;
                *(undefined4 *)(lVar40 + 0xbfc) = 0;
                memset((void *)(lVar40 + 0x778),0,0x458);
                lVar40 = (ulonglong)uVar43 * 0x38;
                *(undefined4 *)(lVar40 + plVar5[0xf]) = 0;
                *(undefined4 *)(lVar40 + 4 + plVar5[0xf]) = 0;
                *(undefined4 *)(lVar40 + 0x10 + plVar5[0xf]) = 0;
                *(undefined4 *)(lVar40 + 0x14 + plVar5[0xf]) = 0;
                *(undefined8 *)(lVar40 + 0x28 + plVar5[0xf]) = 0;
                *(undefined8 *)(lVar40 + 0x30 + plVar5[0xf]) = 0;
                p_Var25 = local_4c8;
              }
              *(undefined1 *)(param_1 + 0x7e) = 0;
            }
          }
        }
        if ((((*(int *)(*(longlong *)(param_1 + 0x590) + 0x10) != 0) &&
             (1 < *(uint *)(lVar39 + 0xbfc))) && (bVar7 == 0)) &&
           ((*(char *)(param_1 + 0x7e) == '\0' || ((int)(param_2 + 1) < *(int *)(param_1 + 0x84)))))
        {
          lVar40 = *(longlong *)(param_1 + 0xa0);
          lVar13 = (ulonglong)(param_2 + 1) * 0xc08;
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar40 + 0xbd0 + lVar13));
          if ((*(char *)(lVar13 + 0xbf8 + *(longlong *)(param_1 + 0xa0)) == '\0') &&
             (*(int *)(lVar13 + 0xbfc + *(longlong *)(param_1 + 0xa0)) + 2U <=
              *(uint *)(lVar39 + 0xbfc))) {
            *(undefined1 *)(lVar13 + 0xbf8 + *(longlong *)(param_1 + 0xa0)) = 1;
            thunk_FUN_183013200(param_1);
            thunk_FUN_183013010(param_1);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar40 + 0xbd0 + lVar13));
        }
        EnterCriticalSection(p_Var25);
        if (((*(char *)(param_1 + 0x7e) != '\0') && (*(int *)(param_1 + 0x84) < (int)param_2)) ||
           ((bVar29 == 0 &&
            (((*(uint *)(lVar39 + 0xbfc) < uVar33 ||
              (*(uint *)((ulonglong)(param_2 - 1) * 0xc08 + 0xbfc + *(longlong *)(param_1 + 0xa0)) <
               uVar15)) &&
             (*(uint *)((ulonglong)(param_2 - 1) * 0xc08 + 0xbfc + *(longlong *)(param_1 + 0xa0)) <
              *(int *)(lVar39 + 0xbfc) + 2U)))))) {
          *(undefined1 *)(lVar39 + 0xbf8) = 0;
          *(undefined1 *)(lVar39 + 0xbf9) = 0;
          LOCK();
          *(int *)(param_1 + 0x530) = *(int *)(param_1 + 0x530) + 1;
          UNLOCK();
          LeaveCriticalSection(p_Var25);
          return;
        }
        LeaveCriticalSection(p_Var25);
      } while (*(uint *)(lVar39 + 0xbfc) < uVar15);
    }
    if (((*(int *)(*(longlong *)(param_1 + 0x590) + 0x10) != 0) &&
        (*(int *)(*(longlong *)(param_1 + 0x590) + 0x244) != 0)) &&
       ((bVar7 != 0 &&
        (uVar21 = *(uint *)(*(longlong *)(param_1 + 0xb0) + uVar20 * 4),
        uVar21 < *(uint *)(*(longlong *)(param_1 + 0xb0) + uVar16 * 4))))) {
      uVar36 = (uVar21 + 1) * uVar15;
      do {
        lVar12 = (ulonglong)uVar21 * 0x38;
        uVar10 = *(int *)(plVar5[0xf] + lVar12) + 1;
        uVar19 = (ulonglong)uVar10;
        if (uVar10 < uVar36) {
          if (3 < uVar36 - uVar10) {
            lVar40 = uVar19 * 0x48;
            iVar38 = *(int *)(plVar5[0xf] + lVar12) + 3;
            do {
              piVar3 = (int *)(plVar5[0xf] + 0x10 + lVar12);
              *piVar3 = *piVar3 + *(int *)(lVar40 + 4 + plVar5[0xe]);
              piVar3 = (int *)(plVar5[0xf] + 0x14 + lVar12);
              *piVar3 = *piVar3 + *(int *)(lVar40 + 8 + plVar5[0xe]);
              piVar3 = (int *)(plVar5[0xf] + 4 + lVar12);
              *piVar3 = *piVar3 + *(int *)(lVar40 + plVar5[0xe]);
              *(double *)(plVar5[0xf] + 0x28 + lVar12) =
                   *(double *)(lVar40 + 0x40 + plVar5[0xe]) +
                   *(double *)(plVar5[0xf] + 0x28 + lVar12);
              *(int *)(lVar12 + plVar5[0xf]) = (int)uVar19;
              uVar10 = (int)uVar19 + 4;
              uVar19 = (ulonglong)uVar10;
              piVar3 = (int *)(plVar5[0xf] + 0x10 + lVar12);
              *piVar3 = *piVar3 + *(int *)(lVar40 + 0x4c + plVar5[0xe]);
              piVar3 = (int *)(plVar5[0xf] + 0x14 + lVar12);
              *piVar3 = *piVar3 + *(int *)(lVar40 + 0x50 + plVar5[0xe]);
              piVar3 = (int *)(plVar5[0xf] + 4 + lVar12);
              *piVar3 = *piVar3 + *(int *)(lVar40 + 0x48 + plVar5[0xe]);
              *(double *)(plVar5[0xf] + 0x28 + lVar12) =
                   *(double *)(lVar40 + 0x88 + plVar5[0xe]) +
                   *(double *)(plVar5[0xf] + 0x28 + lVar12);
              *(int *)(lVar12 + plVar5[0xf]) = iVar38 + -1;
              piVar3 = (int *)(plVar5[0xf] + 0x10 + lVar12);
              *piVar3 = *piVar3 + *(int *)(lVar40 + 0x94 + plVar5[0xe]);
              piVar3 = (int *)(plVar5[0xf] + 0x14 + lVar12);
              *piVar3 = *piVar3 + *(int *)(lVar40 + 0x98 + plVar5[0xe]);
              piVar3 = (int *)(plVar5[0xf] + 4 + lVar12);
              *piVar3 = *piVar3 + *(int *)(lVar40 + 0x90 + plVar5[0xe]);
              *(double *)(plVar5[0xf] + 0x28 + lVar12) =
                   *(double *)(lVar40 + 0xd0 + plVar5[0xe]) +
                   *(double *)(plVar5[0xf] + 0x28 + lVar12);
              *(int *)(lVar12 + plVar5[0xf]) = iVar38;
              piVar3 = (int *)(plVar5[0xf] + 0x10 + lVar12);
              *piVar3 = *piVar3 + *(int *)(lVar40 + 0xdc + plVar5[0xe]);
              piVar3 = (int *)(plVar5[0xf] + 0x14 + lVar12);
              *piVar3 = *piVar3 + *(int *)(lVar40 + 0xe0 + plVar5[0xe]);
              piVar3 = (int *)(plVar5[0xf] + 4 + lVar12);
              *piVar3 = *piVar3 + *(int *)(lVar40 + 0xd8 + plVar5[0xe]);
              lVar13 = lVar40 + 0x118;
              lVar40 = lVar40 + 0x120;
              *(double *)(plVar5[0xf] + 0x28 + lVar12) =
                   *(double *)(lVar13 + plVar5[0xe]) + *(double *)(plVar5[0xf] + 0x28 + lVar12);
              iVar24 = iVar38 + 1;
              iVar38 = iVar38 + 4;
              *(int *)(lVar12 + plVar5[0xf]) = iVar24;
            } while (uVar10 < uVar36 - 3);
          }
          if ((uint)uVar19 < uVar36) {
            lVar40 = uVar19 * 0x48;
            do {
              piVar3 = (int *)(plVar5[0xf] + 0x10 + lVar12);
              *piVar3 = *piVar3 + *(int *)(lVar40 + 4 + plVar5[0xe]);
              piVar3 = (int *)(plVar5[0xf] + 0x14 + lVar12);
              *piVar3 = *piVar3 + *(int *)(lVar40 + 8 + plVar5[0xe]);
              piVar3 = (int *)(plVar5[0xf] + 4 + lVar12);
              *piVar3 = *piVar3 + *(int *)(lVar40 + plVar5[0xe]);
              lVar13 = lVar40 + 0x40;
              lVar40 = lVar40 + 0x48;
              *(double *)(plVar5[0xf] + 0x28 + lVar12) =
                   *(double *)(lVar13 + plVar5[0xe]) + *(double *)(plVar5[0xf] + 0x28 + lVar12);
              *(int *)(lVar12 + plVar5[0xf]) = (int)uVar19;
              uVar10 = (int)uVar19 + 1;
              uVar19 = (ulonglong)uVar10;
            } while (uVar10 < uVar36);
          }
        }
        uVar21 = uVar21 + 1;
        uVar36 = uVar36 + uVar15;
      } while (uVar21 < *(uint *)(*(longlong *)(param_1 + 0xb0) + uVar16 * 4));
    }
    lVar12 = *(longlong *)(param_1 + 0x590);
    if ((*(int *)(lVar12 + 400) == 0) || (bVar6)) {
      iVar38 = *(int *)(*(longlong *)(param_1 + 0xb0) + uVar16 * 4) -
               *(int *)(*(longlong *)(param_1 + 0xb0) + uVar20 * 4);
      if (*(uint *)(param_1 + 0x26c) == 0) {
        uVar21 = iVar38 - 1;
      }
      else if ((*(uint *)(lVar12 + 0x40) / *(uint *)(lVar12 + 0x44)) * 2 <
               *(uint *)(param_1 + 0x26c)) {
        uVar36 = *(uint *)(param_1 + 0x9c) / *(uint *)(lVar12 + 0x2b4);
        uVar21 = iVar38 - 1U;
        if (uVar36 < iVar38 - 1U) {
          uVar21 = uVar36;
        }
      }
      else {
        uVar21 = iVar38 + 1U >> 1;
        if (iVar38 - 1U <= uVar21) {
          uVar21 = iVar38 - 1U;
        }
      }
      uVar16 = 0;
      if (uVar17 == uVar21) {
        *(undefined8 *)(param_1 + 0xc0 + uVar20 * 8) = 0;
        if ((bVar6) &&
           ((*(int *)(*(longlong *)(param_1 + 0x590) + 0x244) == 0 ||
            (*(int *)(*(longlong *)(param_1 + 0x590) + 0x10) == 0)))) {
          uVar36 = *(uint *)(*(longlong *)(param_1 + 0xb0) + uVar20 * 4);
          uVar19 = uVar16;
          if (uVar36 < uVar36 + uVar21) {
            do {
              uVar35 = (ulonglong)uVar36;
              uVar36 = uVar36 + 1;
              uVar19 = uVar19 + *(uint *)(uVar35 * 0x38 + 4 + plVar5[0xf]);
              *(ulonglong *)(param_1 + 0xc0 + uVar20 * 8) = uVar19;
            } while (uVar36 < *(int *)(*(longlong *)(param_1 + 0xb0) + uVar20 * 4) + uVar21);
          }
        }
        else {
          uVar36 = *(int *)(*(longlong *)(param_1 + 0xb0) + uVar20 * 4) * uVar15;
          uVar21 = uVar21 * uVar15 + uVar36;
          if (uVar36 < uVar21) {
            lVar12 = (ulonglong)uVar36 * 0x48;
            uVar35 = (ulonglong)(uVar21 - uVar36);
            uVar19 = uVar16;
            do {
              lVar12 = lVar12 + 0x48;
              uVar19 = uVar19 + *(uint *)(plVar5[0xe] + -0x48 + lVar12);
              *(ulonglong *)(param_1 + 0xc0 + uVar20 * 8) = uVar19;
              uVar35 = uVar35 - 1;
            } while (uVar35 != 0);
          }
        }
        lVar12 = *(longlong *)(param_1 + 0x590);
        LOCK();
        piVar3 = (int *)(param_1 + 0x88);
        iVar38 = *piVar3;
        *piVar3 = *piVar3 + 1;
        UNLOCK();
        if (iVar38 + 1 == *(int *)(lVar12 + 0x2b4)) {
          *(undefined8 *)(param_1 + 0x1e0) = 0;
          uVar20 = uVar16;
          if (*(int *)(lVar12 + 0x2b4) != 0) {
            do {
              uVar21 = (int)uVar16 + 1;
              uVar20 = uVar20 + *(longlong *)(param_1 + 0xc0 + uVar16 * 8);
              *(ulonglong *)(param_1 + 0x1e0) = uVar20;
              uVar16 = (ulonglong)uVar21;
            } while (uVar21 < *(uint *)(lVar12 + 0x2b4));
          }
          thunk_FUN_183049da0(*(undefined8 *)(*(longlong *)(param_1 + 0x588) + 0x10160),
                              param_1 + 0xd0);
        }
      }
    }
    if ((*(int *)(*(longlong *)(param_1 + 0x590) + 300) == 0) &&
       ((*(int *)(*(longlong *)(param_1 + 0x590) + 0x10) != 0 || (bVar7 != 0)))) {
      thunk_FUN_182df1280(pdVar1,1);
      thunk_FUN_182df2f00(pdVar1);
      uVar45 = __RTDynamicCast(*pdVar1,0,&x265_12bit::BitInterface::RTTI_Type_Descriptor,
                               &x265_12bit::Bitstream::RTTI_Type_Descriptor,
                               (ulonglong)in_stack_fffffffffffffa88 & 0xffffffff00000000);
      thunk_FUN_182dc3450(uVar45);
    }
    if (((uint)(1 < uVar17) &
        (*(uint *)(*(longlong *)(param_1 + 0x590) + 300) |
        *(uint *)(*(longlong *)(param_1 + 0x590) + 0x120))) != 0) {
      lVar12 = (ulonglong)(param_2 - 2) * 0x2748 + *(longlong *)(param_1 + 0x2548);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar12 + 10000));
      uVar21 = *(uint *)(lVar12 + 0x2740);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar12 + 10000));
      if (uVar21 == uVar15) {
        lVar40 = (ulonglong)(param_2 - 1) * 0x2748;
        lVar12 = *(longlong *)(param_1 + 0x2548) + lVar40;
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar12 + 0x26d8));
        *(uint *)(lVar12 + 0x2708) = uVar15;
        WakeAllConditionVariable((PCONDITION_VARIABLE)(lVar12 + 0x2700));
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar12 + 0x26d8));
        thunk_FUN_1830058d0(*(longlong *)(param_1 + 0x2548) + lVar40,0xffffffff);
      }
    }
    if (*(int *)(*(longlong *)(param_1 + 0x590) + 0x10) != 0) {
      if (*(uint *)(param_1 + 0x94) <= uVar17) {
        thunk_FUN_1830131d0(param_1,*(int *)(*(longlong *)(param_1 + 0x40) +
                                            (ulonglong)(param_2 - *(uint *)(param_1 + 0x94)) * 4) *
                                    2 + 1);
        if (uVar17 == *(uint *)(param_1 + 0x94)) {
          thunk_FUN_183013200(param_1,*(int *)(*(longlong *)(param_1 + 0x40) +
                                              (ulonglong)(param_2 - *(uint *)(param_1 + 0x94)) * 4)
                                      * 2 + 1);
        }
        thunk_FUN_183013010(param_1);
      }
      if (bVar7 != 0) {
        uVar15 = uVar4 - *(int *)(param_1 + 0x94);
        if (uVar15 < uVar4) {
          lVar12 = (ulonglong)uVar15 * 4;
          uVar20 = (ulonglong)(uVar4 - uVar15);
          do {
            thunk_FUN_1830131d0(param_1,*(int *)(lVar12 + *(longlong *)(param_1 + 0x40)) * 2 + 1);
            lVar12 = lVar12 + 4;
            uVar20 = uVar20 - 1;
          } while (uVar20 != 0);
        }
        thunk_FUN_183013010(param_1);
      }
      if ((bVar29 & bVar7) != 0) {
        thunk_FUN_183013200(param_1,*(int *)(*(longlong *)(param_1 + 0x40) + uVar44 * 4) * 2 + 1);
        thunk_FUN_183013010(param_1);
      }
    }
    *(undefined1 *)(lVar39 + 0xbf9) = 0;
    LOCK();
    piVar3 = (int *)(param_1 + 0x80);
    iVar38 = *piVar3;
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    if (iVar38 + 1 == *(int *)(param_1 + 0x8c) * 2) {
      SetEvent(*(HANDLE *)(param_1 + 0x70));
    }
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar39 + 0xbd0));
  if (*(char *)(lVar39 + 0xbf8) != '\0') {
    if (*(char *)(lVar39 + 0xbf9) == '\0') {
      *(undefined1 *)(lVar39 + 0xbf9) = 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar39 + 0xbd0));
      goto LAB_182dc97d7;
    }
    thunk_FUN_182dc1d60(*(undefined8 *)(param_1 + 0x590),&DAT_18393797c,1,
                        "internal error - simultaneous row access detected. Please report HW to x265-devel@videolan.org\n"
                       );
  }
                    /* WARNING: Could not recover jumptable at 0x000182dc97b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar39 + 0xbd0));
  return;
}


