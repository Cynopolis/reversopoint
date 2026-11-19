/* 0x1829a3c50 size=0x1ec3
   SetEvent
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1829a3c50(longlong param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  short sVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  LPCRITICAL_SECTION p_Var10;
  double *pdVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  short sVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong *plVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined8 uVar30;
  double dVar31;
  double dVar32;
  undefined1 auStack_5c8 [32];
  double *local_5a8;
  undefined8 local_5a0;
  double local_598;
  undefined8 local_590;
  char local_588;
  uint local_584;
  uint local_580;
  uint local_57c;
  uint local_578;
  uint local_574;
  uint local_570;
  uint local_56c;
  longlong local_568;
  ulonglong local_560;
  uint local_558;
  double *local_550;
  longlong local_548;
  longlong local_540;
  ulonglong local_538;
  longlong *local_530;
  uint local_528;
  ulonglong local_520;
  ulonglong local_518;
  uint local_510;
  uint local_50c;
  uint local_508;
  uint local_504;
  double local_500;
  double local_4f8;
  LPCRITICAL_SECTION local_4f0;
  LPCRITICAL_SECTION local_4e8;
  longlong local_4e0;
  longlong local_4d8;
  LPCRITICAL_SECTION local_4d0;
  undefined8 local_4c8;
  undefined1 local_4b8 [360];
  longlong local_350;
  longlong local_348;
  longlong alStack_310 [4];
  longlong alStack_2f0 [4];
  longlong alStack_2d0 [4];
  longlong alStack_2b0 [4];
  longlong alStack_290 [16];
  longlong alStack_210 [55];
  ulonglong local_58;
  
  local_4c8 = 0xfffffffffffffffe;
  local_58 = DAT_183dc69c0 ^ (ulonglong)auStack_5c8;
  local_518 = (ulonglong)param_2;
  lVar23 = local_518 * 0xc08 + *(longlong *)(param_1 + 0xa0);
  local_584 = param_2;
  local_568 = lVar23;
  local_4d8 = param_3;
  if (*(int *)(*(longlong *)(param_1 + 0x590) + 0x10) == 0) {
LAB_1829a3d36:
    lVar21 = *(longlong *)(param_1 + 0x590);
    lVar18 = lVar23;
    if (*(int *)(lVar21 + 0x10) == 0) {
      lVar18 = *(longlong *)(param_1 + 0xa0);
    }
    local_550 = (double *)(lVar18 + 0x3b8);
    plVar25 = (longlong *)**(undefined8 **)(param_1 + 0x598);
    local_4e0 = *plVar25;
    uVar29 = *(uint *)(param_1 + 0x90);
    local_50c = param_2 * uVar29;
    if ((*(int *)(lVar21 + 0x1d4) < 1) || (local_588 = '\x01', *(int *)(lVar21 + 0x1d0) < 1)) {
      local_588 = '\0';
    }
    local_508 = *(uint *)(lVar23 + 0x770);
    local_560 = (ulonglong)local_508;
    local_510 = *(int *)((*(undefined8 **)(param_1 + 0x598))[2] + 0x30) + 0xfU >> 4;
    local_528 = *(uint *)(lVar21 + 0xb4) >> 4;
    if ((param_2 == 0) ||
       (local_570 = 0,
       *(uint *)((ulonglong)(param_2 - 1) * 0xc08 + 0x770 + *(longlong *)(param_1 + 0xa0)) !=
       local_508)) {
      local_570 = 1;
    }
    if ((param_2 == *(int *)(param_1 + 0x8c) - 1U) ||
       (local_56c = 0,
       *(uint *)((ulonglong)(param_2 + 1) * 0xc08 + 0x770 + *(longlong *)(param_1 + 0xa0)) !=
       local_508)) {
      local_56c = 1;
    }
    local_520 = (ulonglong)(local_508 + 1);
    local_504 = *(uint *)(*(longlong *)(param_1 + 0xb0) + local_520 * 4);
    local_574 = param_2 - *(int *)(*(longlong *)(param_1 + 0xb0) + local_560 * 4);
    local_57c = uVar29;
    local_530 = plVar25;
    if ((local_570 != 0) && (*(int *)(lVar23 + 0xbfc) == 0)) {
      thunk_FUN_1829beaf0(local_550,param_1 + 0x2110);
    }
    if (*(int *)(*(longlong *)(param_1 + 0x590) + 0x2d4) != 0) {
      p_Var10 = (LPCRITICAL_SECTION)(lVar23 + 0xbd0);
      local_4f0 = p_Var10;
      EnterCriticalSection(p_Var10);
      if (*(int *)(lVar23 + 0xc00) == 0) {
        lVar21 = *(longlong *)(param_1 + 0x590);
        if ((*(int *)(lVar21 + 0x10) == 0) && (param_2 != 0)) {
          local_550[0x76] = *(double *)(*(longlong *)(param_1 + 0xa0) + 0x768);
        }
        else {
          dVar32 = 0.0;
          lVar23 = *(longlong *)(param_1 + 0x598);
          if ((*(int *)(lVar23 + 0xf4) == 5) || (*(int *)(lVar21 + 0x1e0) == 0)) {
            lVar18 = *(longlong *)(lVar23 + 0x3818);
          }
          else {
            lVar18 = *(longlong *)(lVar23 + 0x3820);
          }
          if (lVar18 != 0) {
            iVar22 = *(int *)(lVar21 + 0x234);
            local_538 = CONCAT44(local_538._4_4_,iVar22);
            uVar29 = 0x10;
            if (*(int *)(lVar21 + 0x234) == 8) {
              uVar29 = 8;
            }
            uVar14 = 0;
            local_578 = 0;
            uVar27 = *(uint *)(*(longlong *)(lVar23 + 0x10) + 0x34);
            local_548 = CONCAT44(local_548._4_4_,uVar27);
            local_558 = uVar27;
            if (*(int *)(lVar21 + 0x10) != 0) {
              local_578 = *(int *)(lVar21 + 0xb4) * param_2;
              uVar14 = (ulonglong)local_578;
              local_558 = *(int *)(lVar21 + 0xb4) + local_578;
            }
            uVar28 = *(uint *)(*(longlong *)(lVar23 + 0x10) + 0x30);
            uVar8 = 0;
            local_580 = 0;
            uVar17 = (uint)uVar14;
            while ((uVar17 < local_558 &&
                   (uVar17 = (uint)uVar14, p_Var10 = local_4f0, plVar25 = local_530,
                   param_2 = local_584, uVar17 < uVar27))) {
              uVar7 = 0;
              if (uVar28 != 0) {
                do {
                  dVar31 = 0.0;
                  uVar13 = 0;
                  uVar17 = (uint)uVar14 + iVar22;
                  local_538 = CONCAT44(local_538._4_4_,uVar17);
                  uVar26 = (uint)uVar7;
                  if ((uint)uVar14 < uVar17) {
                    uVar8 = *(uint *)(*(longlong *)(lVar23 + 0x10) + 0x34);
                    local_540 = CONCAT44(local_540._4_4_,uVar8);
                    dVar31 = 0.0;
                    do {
                      if (uVar8 <= (uint)uVar14) break;
                      uVar20 = uVar7;
                      uVar16 = uVar26;
                      while ((uVar16 < uVar26 + iVar22 && ((uint)uVar20 < uVar28))) {
                        dVar31 = dVar31 + *(double *)
                                           (lVar18 + (longlong)
                                                     (int)((int)(uVar20 / uVar29) +
                                                          (int)(uVar14 / uVar29) *
                                                          (((uVar29 - 1) + uVar28) / uVar29)) * 8);
                        uVar13 = uVar13 + 1;
                        uVar16 = (uint)uVar20 + uVar29;
                        uVar20 = (ulonglong)uVar16;
                      }
                      uVar16 = (uint)uVar14 + uVar29;
                      uVar14 = (ulonglong)uVar16;
                    } while (uVar16 < uVar17);
                    uVar14 = (ulonglong)local_578;
                    lVar23 = *(longlong *)(param_1 + 0x598);
                    uVar8 = local_580;
                  }
                  uVar17 = (uint)uVar14;
                  dVar32 = dVar32 + dVar31 / (double)uVar13;
                  uVar8 = uVar8 + 1;
                  uVar7 = (ulonglong)(uVar26 + iVar22);
                  local_580 = uVar8;
                } while (uVar26 + iVar22 < uVar28);
              }
              local_578 = uVar17 + iVar22;
              uVar17 = local_578;
              uVar14 = (ulonglong)local_578;
            }
            dVar32 = dVar32 / (double)uVar8;
          }
          local_550[0x76] = (double)*(int *)(local_4e0 + 0x8dc) + dVar32;
          lVar23 = local_568;
          uVar29 = local_57c;
        }
        *(undefined4 *)(lVar23 + 0xc00) = 1;
      }
      LeaveCriticalSection(p_Var10);
      param_3 = local_4d8;
    }
    sVar15 = (3 - *(short *)(*(longlong *)(param_1 + 0x590) + 0xb4) * (short)local_574) * 4;
    *(short *)(param_3 + 0x15524) = sVar15;
    sVar5 = ((((short)local_504 - (short)param_2) + -1) *
             *(short *)(*(longlong *)(param_1 + 0x590) + 0xb4) + -4) * 4;
    *(short *)(param_3 + 0x15522) = sVar5;
    if (sVar5 < sVar15) {
      *(undefined4 *)(param_3 + 0x15522) = 0;
    }
    if (*(uint *)(lVar23 + 0xbfc) < uVar29) {
      local_578 = uVar29 - 1;
      local_548 = local_518 * 0x38;
      p_Var10 = (LPCRITICAL_SECTION)(lVar23 + 0xbd0);
      local_4f0 = p_Var10;
      do {
        uVar29 = *(uint *)(lVar23 + 0xbfc);
        uVar27 = local_50c + uVar29;
        uVar7 = (ulonglong)uVar27;
        uVar14 = (ulonglong)uVar27;
        plVar24 = (longlong *)(uVar14 * 0x208 + plVar25[0xb]);
        local_598 = (double)CONCAT44(local_598._4_4_,uVar29 == local_578 & local_56c);
        local_5a0 = CONCAT44(local_5a0._4_4_,local_56c);
        local_5a8 = (double *)CONCAT44(local_5a8._4_4_,local_570);
        local_580 = uVar29;
        local_558 = uVar27;
        local_538 = uVar14;
        local_530 = plVar24;
        thunk_FUN_182d452f0(plVar24,*(undefined8 *)(param_1 + 0x598),uVar7,
                            *(undefined4 *)(local_4e0 + 0x8dc));
        if (local_588 == '\0') {
          *(longlong *)(plVar25[0xe] + 0x40 + uVar7 * 0x48) = plVar25[0x9d];
        }
        else {
          if ((uVar29 == 0) && (*(int *)(*(longlong *)(param_1 + 0x590) + 0x10) == 0)) {
            lVar23 = *(longlong *)(param_1 + 0x5b0);
            lVar21 = *(longlong *)(param_1 + 0x5b8);
            *(undefined4 *)(lVar21 + 0x18) = *(undefined4 *)(lVar23 + 0x18);
            *(undefined4 *)(lVar21 + 0x14) = *(undefined4 *)(lVar23 + 0x14);
            *(undefined1 *)(lVar21 + 0x1c) = *(undefined1 *)(lVar23 + 0x1c);
            thunk_FUN_1829bebf0(local_568,local_550);
            thunk_FUN_1829bea50(local_568,local_550);
          }
          if ((local_570 != 0) && (*(uint *)(param_1 + 0x84) != local_584)) {
            *(longlong *)(local_548 + 0x18 + plVar25[0xf]) = plVar25[0x9d];
            uVar30 = thunk_FUN_18299c8d0(plVar25[0x9d]);
            *(undefined8 *)(local_548 + 0x20 + plVar25[0xf]) = uVar30;
          }
          lVar23 = uVar7 * 0x48;
          lVar21 = plVar25[0xe];
          if ((((*(int *)(*(longlong *)(param_1 + 0x590) + 0x10) == 0) || (local_574 < uVar29)) ||
              (local_570 != 0)) || (*(uint *)(param_1 + 0x84) == local_584)) {
            lVar18 = local_548;
            if (((*(int *)(*(longlong *)(param_1 + 0x590) + 0x10) == 0) && (local_570 == 0)) &&
               (*(uint *)(param_1 + 0x84) != local_584)) {
              lVar18 = (ulonglong)(local_584 - 1) * 0x38;
            }
            uVar30 = *(undefined8 *)(lVar18 + 0x18 + plVar25[0xf]);
          }
          else {
            uVar30 = *(undefined8 *)
                      (plVar25[0xe] + 0x40 + (ulonglong)((uVar27 - local_57c) + 1) * 0x48);
          }
          *(undefined8 *)(lVar23 + 0x40 + lVar21) = uVar30;
          lVar18 = *(longlong *)(param_1 + 0x590);
          bVar6 = (byte)*(undefined4 *)(lVar18 + 0x324);
          uVar27 = (*(uint *)((longlong)plVar24 + 0x6c) >> (bVar6 & 0x1f)) * local_528;
          iVar22 = (*(uint *)((longlong)plVar24 + 0x68) >> (bVar6 & 0x1f)) * local_528;
          uVar14 = local_538;
          plVar24 = local_530;
          if ((*(longlong *)(lVar18 + 0x378) == 0) || (*(int *)(lVar18 + 0x348) == 0)) {
            uVar28 = 0;
            *(undefined8 *)(lVar23 + 4 + lVar21) = 0;
            if (local_528 != 0) {
              uVar8 = uVar27 * local_510 + iVar22;
              do {
                uVar29 = local_580;
                if (*(uint *)(*(longlong *)(param_1 + 0xb8) + local_520 * 4) <= uVar27) break;
                uVar17 = uVar8;
                do {
                  if (local_510 <= (iVar22 - uVar8) + uVar17) break;
                  piVar2 = (int *)(lVar23 + 4 + lVar21);
                  *piVar2 = *piVar2 + (*(ushort *)
                                        (*(longlong *)(*(longlong *)(param_1 + 0x598) + 0x1fd0) +
                                        (ulonglong)uVar17 * 2) & 0x3fff);
                  piVar2 = (int *)(lVar23 + 8 + lVar21);
                  *piVar2 = *piVar2 + *(int *)(*(longlong *)
                                                (*(longlong *)(param_1 + 0x598) + 0x1fb8) +
                                              (ulonglong)uVar17 * 4);
                  uVar17 = uVar17 + 1;
                } while (uVar17 - uVar8 < local_528);
                uVar28 = uVar28 + 1;
                uVar27 = uVar27 + 1;
                uVar8 = uVar8 + local_510;
                p_Var10 = local_4f0;
              } while (uVar28 < local_528);
            }
          }
        }
        pdVar11 = local_550;
        local_540 = uVar7 * 0x48;
        if (((*(int *)(*(longlong *)(param_1 + 0x590) + 0x10) != 0) && (uVar29 == 0)) &&
           (local_570 == 0)) {
          thunk_FUN_1829bebf0(local_550,param_1 + 0x2110);
          thunk_FUN_1829bea50(pdVar11,(ulonglong)(local_584 - 1) * 0xc08 +
                                      *(longlong *)(param_1 + 0xa0));
        }
        if ((*(double *)(*(longlong *)(param_1 + 0x590) + 0x2e8) != 0.0) &&
           (0 < (int)(*(double *)(param_1 + 0x1f0) - *(double *)(param_1 + 0x230)))) {
          *(undefined1 *)((longlong)plVar24 + 0x2c) = 1;
        }
        local_5a8 = pdVar11;
        local_530 = (longlong *)
                    thunk_FUN_182d69650(local_4d8,plVar24,*(undefined8 *)(param_1 + 0x598));
        if (*(int *)(*(longlong *)(param_1 + 0x590) + 0x394) != 0) {
          lVar23 = *(longlong *)(param_1 + 0x588);
          if (*(int *)(lVar23 + 0x13ba8) <= *(int *)(*(longlong *)(param_1 + 0x598) + 0x1c)) {
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar23 + 0x13bb0));
            p_Var10 = local_4f0;
            uVar29 = 0;
            do {
              uVar28 = 0;
              uVar27 = uVar29;
              if (*(int *)(*(longlong *)(param_1 + 0x590) + 0x328) != 0) {
                do {
                  lVar21 = (longlong)(int)uVar27;
                  if (*(int *)(*(longlong *)((longlong)plVar24 + 0x200) + lVar21 * 4) != 0) {
                    lVar18 = (longlong)
                             (int)(uVar27 + *(int *)(*(longlong *)(param_1 + 0x590) + 0x328) *
                                            (*(int *)(*(longlong *)(param_1 + 0x598) + 0x1c) -
                                            *(int *)(*(longlong *)(param_1 + 0x588) + 0x13ba8)) * 3)
                    ;
                    plVar1 = (longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x588) + 0x13b98) + lVar18 * 8);
                    *plVar1 = *plVar1 + (ulonglong)
                                        *(uint *)(*(longlong *)((longlong)plVar24 + 0x1f8) +
                                                 lVar21 * 4);
                    plVar1 = (longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x588) + 0x13b90) + lVar18 * 8);
                    *plVar1 = *plVar1 + *(longlong *)
                                         (*(longlong *)((longlong)plVar24 + 0x1f0) + lVar21 * 8);
                    piVar2 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x588) + 0x13ba0) +
                                    lVar18 * 4);
                    *piVar2 = *piVar2 + *(int *)(*(longlong *)((longlong)plVar24 + 0x200) +
                                                lVar21 * 4);
                  }
                  uVar28 = uVar28 + 1;
                  uVar27 = uVar27 + 3;
                } while (uVar28 < *(uint *)(*(longlong *)(param_1 + 0x590) + 0x328));
              }
              uVar29 = uVar29 + 1;
            } while (uVar29 < 3);
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar23 + 0x13bb0));
            uVar14 = local_538;
          }
          thunk_FUN_18299c7d0(*(undefined8 *)((longlong)plVar24 + 0x1f8));
          *(undefined8 *)((longlong)plVar24 + 0x1f8) = 0;
          thunk_FUN_18299c7d0(*(undefined8 *)((longlong)plVar24 + 0x1f0));
          *(undefined8 *)((longlong)plVar24 + 0x1f0) = 0;
          thunk_FUN_18299c7d0(*(undefined8 *)((longlong)plVar24 + 0x200));
          *(undefined8 *)((longlong)plVar24 + 0x200) = 0;
          pdVar11 = local_550;
        }
        LOCK();
        *(int *)(param_1 + 0x528) = *(int *)(param_1 + 0x528) + *(int *)(param_1 + 0x524);
        UNLOCK();
        LOCK();
        *(int *)(param_1 + 0x52c) = *(int *)(param_1 + 0x52c) + 1;
        UNLOCK();
        thunk_FUN_1829bf040(pdVar11,plVar24,
                            (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x5d0) + uVar14 * 4) * 0x1c
                            + *(longlong *)(param_1 + 0x5c8));
        uVar29 = local_580;
        if ((*(int *)(*(longlong *)(param_1 + 0x590) + 0x10) != 0) && (local_580 == 1)) {
          thunk_FUN_1829bea50(local_568);
        }
        uVar14 = local_518;
        uVar27 = local_584;
        if ((*(int *)(*(longlong *)(param_1 + 0x590) + 300) != 0) &&
           (*(int *)(*(longlong *)(param_1 + 0x590) + 0x130) != 0)) {
          thunk_FUN_182d332d0(local_518 * 0x2748 + 0x28 + *(longlong *)(param_1 + 0x2548),
                              *(undefined8 *)(param_1 + 0x598),uVar29);
        }
        if (*(int *)(*(longlong *)(param_1 + 0x590) + 300) == 0 &&
            *(int *)(*(longlong *)(param_1 + 0x590) + 0x120) == 0) {
          thunk_FUN_182d399d0(uVar14 * 0x2748 + *(longlong *)(param_1 + 0x2548));
        }
        else if ((local_588 == '\0') && (*(longlong *)(param_1 + 8) != 0)) {
          if (local_570 == 0) {
            uVar28 = uVar29;
            if (1 < local_574) {
              uVar14 = (ulonglong)(uVar27 - 2);
              if (uVar29 == local_578) {
                lVar21 = uVar14 * 0x2748;
                lVar23 = *(longlong *)(param_1 + 0x2548);
                EnterCriticalSection((LPCRITICAL_SECTION)(lVar23 + 10000 + lVar21));
                iVar22 = *(int *)(lVar23 + 0x2740 + lVar21);
                LeaveCriticalSection((LPCRITICAL_SECTION)(lVar23 + 10000 + lVar21));
              }
              else {
                lVar21 = uVar14 * 0x2748;
                lVar23 = *(longlong *)(param_1 + 0x2548);
                EnterCriticalSection((LPCRITICAL_SECTION)(lVar23 + 0x26a0 + lVar21));
                iVar22 = *(int *)(lVar23 + 0x26d0 + lVar21);
                LeaveCriticalSection((LPCRITICAL_SECTION)(lVar23 + 0x26a0 + lVar21));
              }
              lVar23 = uVar14 * 0x2748;
              uVar29 = local_580;
              uVar28 = local_580;
              if (iVar22 < (int)local_580) {
                lVar21 = *(longlong *)(param_1 + 0x2548);
                if (local_580 == local_578) {
                  EnterCriticalSection((LPCRITICAL_SECTION)(lVar21 + 10000 + lVar23));
                  uVar28 = *(uint *)(lVar21 + 0x2740 + lVar23);
                  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar21 + 10000 + lVar23));
                  uVar29 = local_580;
                }
                else {
                  EnterCriticalSection((LPCRITICAL_SECTION)(lVar21 + 0x26a0 + lVar23));
                  uVar28 = *(uint *)(lVar21 + 0x26d0 + lVar23);
                  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar21 + 0x26a0 + lVar23));
                  uVar29 = local_580;
                }
              }
            }
            lVar23 = (ulonglong)(local_584 - 1) * 0x2748 + *(longlong *)(param_1 + 0x2548);
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar23 + 0x26d8));
            *(uint *)(lVar23 + 0x2708) = uVar28;
            WakeAllConditionVariable((PCONDITION_VARIABLE)(lVar23 + 0x2700));
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar23 + 0x26d8));
          }
          if ((*(longlong *)(param_1 + 8) != 0) && (local_56c != 0)) {
            if (1 < local_574) {
              uVar14 = (ulonglong)(local_584 - 1);
              if (uVar29 == local_578) {
                lVar21 = uVar14 * 0x2748;
                lVar23 = *(longlong *)(param_1 + 0x2548);
                EnterCriticalSection((LPCRITICAL_SECTION)(lVar23 + 10000 + lVar21));
                iVar22 = *(int *)(lVar23 + 0x2740 + lVar21);
                LeaveCriticalSection((LPCRITICAL_SECTION)(lVar23 + 10000 + lVar21));
              }
              else {
                lVar21 = uVar14 * 0x2748;
                lVar23 = *(longlong *)(param_1 + 0x2548);
                EnterCriticalSection((LPCRITICAL_SECTION)(lVar23 + 0x26a0 + lVar21));
                iVar22 = *(int *)(lVar23 + 0x26d0 + lVar21);
                LeaveCriticalSection((LPCRITICAL_SECTION)(lVar23 + 0x26a0 + lVar21));
              }
              lVar23 = uVar14 * 0x2748;
              uVar29 = local_580;
              if (iVar22 < (int)local_580) {
                lVar21 = *(longlong *)(param_1 + 0x2548);
                if (local_580 == local_578) {
                  EnterCriticalSection((LPCRITICAL_SECTION)(lVar21 + 10000 + lVar23));
                  uVar29 = *(uint *)(lVar21 + 0x2740 + lVar23);
                  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar21 + 10000 + lVar23));
                }
                else {
                  EnterCriticalSection((LPCRITICAL_SECTION)(lVar21 + 0x26a0 + lVar23));
                  uVar29 = *(uint *)(lVar21 + 0x26d0 + lVar23);
                  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar21 + 0x26a0 + lVar23));
                }
              }
            }
            lVar23 = *(longlong *)(param_1 + 0x2548) + local_518 * 0x2748;
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar23 + 0x26d8));
            *(uint *)(lVar23 + 0x2708) = uVar29;
            WakeAllConditionVariable((PCONDITION_VARIABLE)(lVar23 + 0x2700));
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar23 + 0x26d8));
          }
        }
        lVar23 = local_568;
        *(int *)(local_568 + 0xbfc) = *(int *)(local_568 + 0xbfc) + 1;
        memset(local_4b8,0,0x458);
        iVar22 = thunk_FUN_18299e5a0(param_1,plVar24,local_4b8);
        lVar21 = local_540;
        *(double *)(local_548 + 0x30 + plVar25[0xf]) =
             (double)iVar22 + *(double *)(local_548 + 0x30 + plVar25[0xf]);
        if (*(int *)(*(longlong *)(param_1 + 0x590) + 0x1f8) != 0) {
          *(int *)(lVar23 + 0x778) = *(int *)(lVar23 + 0x778) + (int)local_530[0x408];
          *(int *)(lVar23 + 0x77c) =
               *(int *)(lVar23 + 0x77c) + *(int *)((longlong)local_530 + 0x2044);
          *(int *)(lVar23 + 0x780) =
               *(int *)(lVar23 + 0x780) +
               ((*(int *)((longlong)local_530 + 0x203c) - *(int *)((longlong)local_530 + 0x2044)) -
               (int)local_530[0x408]);
          uVar14 = 0;
          iVar22 = *(int *)(lVar23 + 0x784);
          iVar9 = *(int *)(lVar23 + 0x788);
          iVar12 = *(int *)(lVar23 + 0x78c);
          do {
            bVar6 = ((char)*(undefined4 *)(*(longlong *)(param_1 + 0x590) + 0x328) - (byte)uVar14) *
                    '\x02';
            if (*(uint *)(*(longlong *)(param_1 + 0x590) + 0xb4) >> ((byte)uVar14 & 0x1f) == 8) {
              iVar19 = (int)alStack_2b0[uVar14] + (int)local_350;
            }
            else {
              iVar19 = (int)(alStack_2b0[uVar14] << (bVar6 & 0x3f));
            }
            iVar22 = iVar22 + iVar19;
            *(int *)(local_568 + 0x784) = iVar22;
            iVar9 = iVar9 + (int)(alStack_2d0[uVar14] << (bVar6 & 0x3f));
            *(int *)(local_568 + 0x788) = iVar9;
            iVar12 = iVar12 + (int)(alStack_2f0[uVar14] + alStack_310[uVar14] << (bVar6 & 0x3f));
            *(int *)(local_568 + 0x78c) = iVar12;
            uVar29 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar29;
            lVar23 = local_568;
          } while (uVar29 <= *(uint *)(*(longlong *)(param_1 + 0x590) + 0x328));
        }
        *(longlong *)(lVar23 + 0x8f0) = *(longlong *)(lVar23 + 0x8f0) + 1;
        *(longlong *)(lVar23 + 0x8f8) =
             *(longlong *)(lVar23 + 0x8f8) + (ulonglong)*(uint *)(local_530 + 0x406);
        *(longlong *)(lVar23 + 0x900) =
             *(longlong *)(lVar23 + 0x900) + (ulonglong)*(uint *)((longlong)local_530 + 0x2034);
        *(longlong *)(lVar23 + 0x908) =
             *(longlong *)(lVar23 + 0x908) + (ulonglong)*(uint *)((longlong)local_530 + 0x2024);
        *(longlong *)(lVar23 + 0x910) =
             *(longlong *)(lVar23 + 0x910) + (ulonglong)*(uint *)(local_530 + 0x405);
        *(longlong *)(lVar23 + 0x918) =
             *(longlong *)(lVar23 + 0x918) + (ulonglong)*(uint *)((longlong)local_530 + 0x202c);
        *(longlong *)(lVar23 + 0x8e0) = *(longlong *)(lVar23 + 0x8e0) + local_350;
        *(longlong *)(lVar23 + 0x8e8) = *(longlong *)(lVar23 + 0x8e8) + local_348;
        uVar14 = 0;
        do {
          plVar24 = (longlong *)(lVar23 + 0x920 + uVar14 * 8);
          *plVar24 = *plVar24 + alStack_310[uVar14];
          plVar24 = (longlong *)(lVar23 + 0x940 + uVar14 * 8);
          *plVar24 = *plVar24 + alStack_2f0[uVar14];
          lVar18 = uVar14 * 0x20;
          plVar24 = (longlong *)((uVar14 + 0x4d) * 0x20 + lVar23);
          *plVar24 = *plVar24 + alStack_290[uVar14 * 4];
          *(longlong *)(lVar23 + 0x9a8 + lVar18) =
               *(longlong *)(lVar18 + 0x9a8 + lVar23) + alStack_290[uVar14 * 4 + 1];
          plVar24 = (longlong *)(lVar23 + 0x9b0 + lVar18);
          *plVar24 = *plVar24 + alStack_290[uVar14 * 4 + 2];
          *(longlong *)(lVar23 + 0x9b8 + lVar18) =
               *(longlong *)(lVar23 + 0x9b8 + lVar18) + alStack_290[uVar14 * 4 + 3];
          plVar24 = (longlong *)(lVar23 + 0xa20 + uVar14 * 0x18);
          *plVar24 = *plVar24 + alStack_210[uVar14 * 3];
          *(longlong *)(lVar23 + 0xa28 + uVar14 * 0x18) =
               *(longlong *)(lVar23 + 0xa28 + uVar14 * 0x18) + alStack_210[uVar14 * 3 + 1];
          *(longlong *)(lVar23 + 0xa30 + uVar14 * 0x18) =
               *(longlong *)(lVar23 + 0xa30 + uVar14 * 0x18) + alStack_210[uVar14 * 3 + 2];
          uVar29 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar29;
        } while (uVar29 <= *(uint *)(*(longlong *)(param_1 + 0x590) + 0x328));
        *(undefined4 *)(local_540 + plVar25[0xe]) = *(undefined4 *)((longlong)local_530 + 0x203c);
        FUN_1801ec8c0();
        lVar18 = local_548;
        uVar29 = local_584;
        lVar23 = local_568;
        param_2 = local_584;
        if (local_588 != '\0') {
          lVar3 = plVar25[0xe];
          iVar22 = *(int *)(*(longlong *)(param_1 + 0x590) + 0x10);
          if ((((iVar22 == 0) ||
               (local_558 == *(int *)(*(longlong *)(param_1 + 0xb0) + local_560 * 4) * local_57c))
              || (*(int *)(*(longlong *)(param_1 + 0x590) + 0x244) == 0)) || (iVar22 == 0)) {
            piVar2 = (int *)(local_548 + 0x10 + plVar25[0xf]);
            *piVar2 = *piVar2 + *(int *)(lVar21 + 4 + lVar3);
            piVar2 = (int *)(local_548 + 0x14 + plVar25[0xf]);
            *piVar2 = *piVar2 + *(int *)(lVar21 + 8 + lVar3);
            piVar2 = (int *)(local_548 + 4 + plVar25[0xf]);
            *piVar2 = *piVar2 + *(int *)(lVar21 + lVar3);
            *(double *)(local_548 + 0x28 + plVar25[0xf]) =
                 *(double *)(lVar21 + 0x40 + lVar3) + *(double *)(local_548 + 0x28 + plVar25[0xf]);
            *(uint *)(local_548 + plVar25[0xf]) = local_558;
          }
          if (*(int *)(*(longlong *)(param_1 + 0x590) + 0x10) == 0) {
            if (local_580 == local_578) {
              local_500 = *(double *)(plVar25[0xe] + 0x40 + lVar21);
              local_598 = (double)CONCAT44(local_598._4_4_,local_508);
              local_5a0 = *(undefined8 *)(param_1 + 0xb0);
              local_5a8 = &local_500;
              iVar22 = thunk_FUN_182d7fa80(*(undefined8 *)(*(longlong *)(param_1 + 0x588) + 0x10160)
                                           ,*(undefined8 *)(param_1 + 0x598),local_584,
                                           param_1 + 0xd0);
              dVar31 = (double)*(int *)(*(longlong *)(param_1 + 0x590) + 0x23c);
              dVar32 = (double)*(int *)(*(longlong *)(param_1 + 0x590) + 0x240);
              if (dVar32 <= local_500) {
                dVar32 = local_500;
              }
              local_500 = dVar32;
              if (dVar31 <= dVar32) {
                local_500 = dVar31;
              }
              *(double *)(lVar18 + 0x18 + plVar25[0xf]) = local_500;
              uVar30 = thunk_FUN_18299c8d0(local_500);
              *(undefined8 *)(lVar18 + 0x20 + plVar25[0xf]) = uVar30;
              lVar23 = local_568;
              param_2 = local_584;
              if (iVar22 < 0) {
                local_590 = *(undefined8 *)(plVar25[0xe] + 0x40 + lVar21);
                local_598 = local_500;
                local_5a0 = CONCAT44(local_5a0._4_4_,uVar29);
                local_5a8 = (double *)
                            CONCAT44(local_5a8._4_4_,
                                     *(undefined4 *)(*(longlong *)(param_1 + 0x598) + 0x18));
                thunk_FUN_18299c2b0(*(undefined8 *)(param_1 + 0x590),&DAT_18393797c,3,
                                    "POC %d row %d - encode restart required for VBV, to %.2f from %.2f\n"
                                   );
                lVar23 = local_568;
                *(uint *)(param_1 + 0x84) = uVar29;
                lVar21 = *(longlong *)(param_1 + 0x5b8);
                lVar3 = *(longlong *)(param_1 + 0x5b0);
                *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)(lVar21 + 0x18);
                *(undefined4 *)(lVar3 + 0x14) = *(undefined4 *)(lVar21 + 0x14);
                *(undefined1 *)(lVar3 + 0x1c) = *(undefined1 *)(lVar21 + 0x1c);
                thunk_FUN_1829bebf0(local_550,local_568);
                thunk_FUN_1829bea50(local_550);
                *(undefined4 *)(lVar23 + 0xbfc) = 0;
                memset((void *)(lVar23 + 0x778),0,0x458);
                *(undefined4 *)(lVar18 + plVar25[0xf]) = 0;
                *(undefined4 *)(lVar18 + 4 + plVar25[0xf]) = 0;
                *(undefined4 *)(lVar18 + 0x10 + plVar25[0xf]) = 0;
                *(undefined4 *)(lVar18 + 0x14 + plVar25[0xf]) = 0;
                *(undefined8 *)(lVar18 + 0x28 + plVar25[0xf]) = 0;
                *(undefined8 *)(lVar18 + 0x30 + plVar25[0xf]) = 0;
                param_2 = local_584;
              }
            }
          }
          else if ((local_574 == local_580) && (local_570 == 0)) {
            if (*(int *)(*(longlong *)(param_1 + 0x590) + 0x244) != 0) {
              uVar29 = local_50c + local_580;
              if (*(int *)(*(longlong *)(param_1 + 0xb0) + local_560 * 4) <= (int)local_584) {
                lVar23 = (longlong)(int)local_584 * 0x38;
                local_580 = -local_57c;
                uVar8 = (local_584 + 1) * local_57c - 1;
                uVar28 = local_584;
                uVar27 = local_50c;
                do {
                  if (uVar27 <= uVar29) {
                    if (3 < (uVar29 - uVar27) + 1) {
                      uVar17 = uVar27 + 2;
                      do {
                        uVar14 = (ulonglong)uVar17;
                        if (uVar8 < uVar27) goto LAB_1829a51d3;
                        uVar7 = (ulonglong)uVar27;
                        piVar2 = (int *)(lVar23 + 0x10 + plVar25[0xf]);
                        *piVar2 = *piVar2 + *(int *)(plVar25[0xe] + 4 + uVar7 * 0x48);
                        piVar2 = (int *)(lVar23 + 0x14 + plVar25[0xf]);
                        *piVar2 = *piVar2 + *(int *)(plVar25[0xe] + 8 + uVar7 * 0x48);
                        piVar2 = (int *)(lVar23 + 4 + plVar25[0xf]);
                        *piVar2 = *piVar2 + *(int *)(plVar25[0xe] + uVar7 * 0x48);
                        *(double *)(lVar23 + 0x28 + plVar25[0xf]) =
                             *(double *)(plVar25[0xe] + 0x40 + uVar7 * 0x48) +
                             *(double *)(lVar23 + 0x28 + plVar25[0xf]);
                        *(uint *)(lVar23 + plVar25[0xf]) = uVar27;
                        uVar13 = uVar17 - 1;
                        uVar7 = (ulonglong)uVar13;
                        if (uVar8 < uVar13) goto LAB_1829a51d3;
                        piVar2 = (int *)(lVar23 + 0x10 + plVar25[0xf]);
                        *piVar2 = *piVar2 + *(int *)(plVar25[0xe] + 4 + uVar7 * 0x48);
                        piVar2 = (int *)(lVar23 + 0x14 + plVar25[0xf]);
                        *piVar2 = *piVar2 + *(int *)(plVar25[0xe] + 8 + uVar7 * 0x48);
                        piVar2 = (int *)(lVar23 + 4 + plVar25[0xf]);
                        *piVar2 = *piVar2 + *(int *)(plVar25[0xe] + uVar7 * 0x48);
                        *(double *)(lVar23 + 0x28 + plVar25[0xf]) =
                             *(double *)(plVar25[0xe] + 0x40 + uVar7 * 0x48) +
                             *(double *)(lVar23 + 0x28 + plVar25[0xf]);
                        *(uint *)(lVar23 + plVar25[0xf]) = uVar13;
                        if (uVar8 < uVar17) goto LAB_1829a51d3;
                        piVar2 = (int *)(lVar23 + 0x10 + plVar25[0xf]);
                        *piVar2 = *piVar2 + *(int *)(plVar25[0xe] + 4 + uVar14 * 0x48);
                        piVar2 = (int *)(lVar23 + 0x14 + plVar25[0xf]);
                        *piVar2 = *piVar2 + *(int *)(plVar25[0xe] + 8 + uVar14 * 0x48);
                        piVar2 = (int *)(lVar23 + 4 + plVar25[0xf]);
                        *piVar2 = *piVar2 + *(int *)(plVar25[0xe] + uVar14 * 0x48);
                        *(double *)(lVar23 + 0x28 + plVar25[0xf]) =
                             *(double *)(plVar25[0xe] + 0x40 + uVar14 * 0x48) +
                             *(double *)(lVar23 + 0x28 + plVar25[0xf]);
                        *(uint *)(lVar23 + plVar25[0xf]) = uVar17;
                        uVar13 = uVar17 + 1;
                        uVar14 = (ulonglong)uVar13;
                        if (uVar8 < uVar13) goto LAB_1829a51d3;
                        piVar2 = (int *)(lVar23 + 0x10 + plVar25[0xf]);
                        *piVar2 = *piVar2 + *(int *)(plVar25[0xe] + 4 + uVar14 * 0x48);
                        piVar2 = (int *)(lVar23 + 0x14 + plVar25[0xf]);
                        *piVar2 = *piVar2 + *(int *)(plVar25[0xe] + 8 + uVar14 * 0x48);
                        piVar2 = (int *)(lVar23 + 4 + plVar25[0xf]);
                        *piVar2 = *piVar2 + *(int *)(plVar25[0xe] + uVar14 * 0x48);
                        *(double *)(lVar23 + 0x28 + plVar25[0xf]) =
                             *(double *)(plVar25[0xe] + 0x40 + uVar14 * 0x48) +
                             *(double *)(lVar23 + 0x28 + plVar25[0xf]);
                        *(uint *)(lVar23 + plVar25[0xf]) = uVar13;
                        uVar27 = uVar27 + 4;
                        uVar17 = uVar17 + 4;
                      } while (uVar27 <= uVar29 - 3);
                    }
                    for (; (uVar27 <= uVar29 && (uVar27 <= uVar8)); uVar27 = uVar27 + 1) {
                      uVar14 = (ulonglong)uVar27;
                      piVar2 = (int *)(lVar23 + 0x10 + plVar25[0xf]);
                      *piVar2 = *piVar2 + *(int *)(plVar25[0xe] + 4 + uVar14 * 0x48);
                      piVar2 = (int *)(lVar23 + 0x14 + plVar25[0xf]);
                      *piVar2 = *piVar2 + *(int *)(plVar25[0xe] + 8 + uVar14 * 0x48);
                      piVar2 = (int *)(lVar23 + 4 + plVar25[0xf]);
                      *piVar2 = *piVar2 + *(int *)(plVar25[0xe] + uVar14 * 0x48);
                      *(double *)(lVar23 + 0x28 + plVar25[0xf]) =
                           *(double *)(plVar25[0xe] + 0x40 + uVar14 * 0x48) +
                           *(double *)(lVar23 + 0x28 + plVar25[0xf]);
                      *(uint *)(lVar23 + plVar25[0xf]) = uVar27;
                    }
                  }
LAB_1829a51d3:
                  uVar27 = uVar29 - local_57c;
                  uVar29 = uVar27 + 1;
                  uVar28 = uVar28 - 1;
                  uVar8 = uVar8 + local_580;
                  lVar23 = lVar23 + -0x38;
                  lVar21 = local_540;
                } while (*(int *)(*(longlong *)(param_1 + 0xb0) + local_560 * 4) <= (int)uVar28);
              }
            }
            local_4f8 = *(double *)(plVar25[0xe] + 0x40 + lVar21);
            local_598 = (double)CONCAT44(local_598._4_4_,local_508);
            local_5a0 = *(undefined8 *)(param_1 + 0xb0);
            local_5a8 = &local_4f8;
            iVar22 = thunk_FUN_182d7fa80(*(undefined8 *)(*(longlong *)(param_1 + 0x588) + 0x10160),
                                         *(undefined8 *)(param_1 + 0x598),local_584,param_1 + 0xd0);
            lVar23 = local_548;
            dVar31 = (double)*(int *)(*(longlong *)(param_1 + 0x590) + 0x23c);
            dVar32 = (double)*(int *)(*(longlong *)(param_1 + 0x590) + 0x240);
            if (dVar32 <= local_4f8) {
              dVar32 = local_4f8;
            }
            local_4f8 = dVar32;
            if (dVar31 <= dVar32) {
              local_4f8 = dVar31;
            }
            *(double *)(local_548 + 0x18 + plVar25[0xf]) = local_4f8;
            uVar30 = thunk_FUN_18299c8d0(local_4f8);
            param_2 = local_584;
            *(undefined8 *)(lVar23 + 0x20 + plVar25[0xf]) = uVar30;
            lVar23 = local_568;
            if (iVar22 < 0) {
              local_590 = *(undefined8 *)(plVar25[0xe] + 0x40 + lVar21);
              local_598 = local_4f8;
              local_5a0 = CONCAT44(local_5a0._4_4_,local_584);
              local_5a8 = (double *)
                          CONCAT44(local_5a8._4_4_,
                                   *(undefined4 *)(*(longlong *)(param_1 + 0x598) + 0x18));
              thunk_FUN_18299c2b0(*(undefined8 *)(param_1 + 0x590),&DAT_18393797c,3,
                                  "POC %d row %d - encode restart required for VBV, to %.2f from %.2f\n"
                                 );
              *(uint *)(param_1 + 0x84) = param_2;
              *(undefined1 *)(param_1 + 0x7e) = 1;
              uVar29 = *(int *)(*(longlong *)(param_1 + 0xb0) + local_520 * 4) - 1;
              if (param_2 <= uVar29) {
                do {
                  lVar23 = (ulonglong)uVar29 * 0xc08 + *(longlong *)(param_1 + 0xa0);
                  if (uVar29 != param_2) {
                    p_Var10 = (LPCRITICAL_SECTION)(lVar23 + 0xbd0);
                    EnterCriticalSection(p_Var10);
                    cVar4 = *(char *)(lVar23 + 0xbf8);
                    while (cVar4 != '\0') {
                      cVar4 = thunk_FUN_182d47d30(param_1);
                      if (cVar4 == '\0') {
                        LeaveCriticalSection(p_Var10);
                        Sleep(0);
                        EnterCriticalSection(p_Var10);
                      }
                      else {
                        *(undefined1 *)(lVar23 + 0xbf8) = 0;
                      }
                      cVar4 = *(char *)(lVar23 + 0xbf8);
                    }
                    LeaveCriticalSection(p_Var10);
                    while( true ) {
                      EnterCriticalSection(p_Var10);
                      cVar4 = *(char *)(lVar23 + 0xbf9);
                      LeaveCriticalSection(p_Var10);
                      param_2 = local_584;
                      if (cVar4 == '\0') break;
                      Sleep(0);
                    }
                  }
                  (**(code **)(*(longlong *)
                                ((ulonglong)uVar29 * 0x20 + *(longlong *)(param_1 + 0x5b0)) + 0x10))
                            ();
                  *(undefined4 *)(lVar23 + 0xbfc) = 0;
                  memset((void *)(lVar23 + 0x778),0,0x458);
                  lVar23 = (ulonglong)uVar29 * 0x38;
                  *(undefined4 *)(lVar23 + plVar25[0xf]) = 0;
                  *(undefined4 *)(lVar23 + 4 + plVar25[0xf]) = 0;
                  *(undefined4 *)(lVar23 + 0x10 + plVar25[0xf]) = 0;
                  *(undefined4 *)(lVar23 + 0x14 + plVar25[0xf]) = 0;
                  *(undefined8 *)(lVar23 + 0x28 + plVar25[0xf]) = 0;
                  *(undefined8 *)(lVar23 + 0x30 + plVar25[0xf]) = 0;
                  uVar29 = uVar29 - 1;
                  p_Var10 = local_4f0;
                } while (param_2 <= uVar29);
              }
              *(undefined1 *)(param_1 + 0x7e) = 0;
              lVar23 = local_568;
            }
          }
        }
        if ((((*(int *)(*(longlong *)(param_1 + 0x590) + 0x10) != 0) &&
             (1 < *(uint *)(lVar23 + 0xbfc))) && (local_56c == 0)) &&
           ((*(char *)(param_1 + 0x7e) == '\0' || ((int)(param_2 + 1) < *(int *)(param_1 + 0x84)))))
        {
          lVar21 = (ulonglong)(param_2 + 1) * 0xc08;
          local_4d0 = (LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0xa0) + 0xbd0 + lVar21);
          EnterCriticalSection(local_4d0);
          if ((*(char *)(lVar21 + 0xbf8 + *(longlong *)(param_1 + 0xa0)) == '\0') &&
             (*(int *)(lVar21 + 0xbfc + *(longlong *)(param_1 + 0xa0)) + 2U <=
              *(uint *)(lVar23 + 0xbfc))) {
            *(undefined1 *)(lVar21 + 0xbf8 + *(longlong *)(param_1 + 0xa0)) = 1;
            thunk_FUN_182d47de0(param_1);
            thunk_FUN_182d47be0(param_1);
          }
          LeaveCriticalSection(local_4d0);
        }
        EnterCriticalSection(p_Var10);
        if (((*(char *)(param_1 + 0x7e) != '\0') && (*(int *)(param_1 + 0x84) < (int)param_2)) ||
           ((local_570 == 0 &&
            (((*(uint *)(lVar23 + 0xbfc) < local_578 ||
              (*(uint *)((ulonglong)(param_2 - 1) * 0xc08 + 0xbfc + *(longlong *)(param_1 + 0xa0)) <
               local_57c)) &&
             (*(uint *)((ulonglong)(param_2 - 1) * 0xc08 + 0xbfc + *(longlong *)(param_1 + 0xa0)) <
              *(int *)(lVar23 + 0xbfc) + 2U)))))) {
          *(undefined1 *)(lVar23 + 0xbf8) = 0;
          *(undefined1 *)(lVar23 + 0xbf9) = 0;
          LOCK();
          *(int *)(param_1 + 0x530) = *(int *)(param_1 + 0x530) + 1;
          UNLOCK();
          LeaveCriticalSection(p_Var10);
          return;
        }
        LeaveCriticalSection(p_Var10);
        uVar29 = local_57c;
      } while (*(uint *)(lVar23 + 0xbfc) < local_57c);
    }
    uVar27 = local_574;
    if (((*(int *)(*(longlong *)(param_1 + 0x590) + 0x10) != 0) &&
        (*(int *)(*(longlong *)(param_1 + 0x590) + 0x244) != 0)) &&
       ((local_56c != 0 &&
        (uVar28 = *(uint *)(*(longlong *)(param_1 + 0xb0) + local_560 * 4),
        uVar28 < *(uint *)(*(longlong *)(param_1 + 0xb0) + local_520 * 4))))) {
      uVar8 = (uVar28 + 1) * uVar29;
      do {
        lVar21 = (ulonglong)uVar28 * 0x38;
        uVar17 = *(int *)(lVar21 + plVar25[0xf]) + 1;
        uVar14 = (ulonglong)uVar17;
        uVar28 = uVar28 + 1;
        if (uVar17 < uVar8) {
          lVar18 = uVar14 * 0x48;
          do {
            piVar2 = (int *)(lVar21 + 0x10 + plVar25[0xf]);
            *piVar2 = *piVar2 + *(int *)(lVar18 + 4 + plVar25[0xe]);
            piVar2 = (int *)(lVar21 + 0x14 + plVar25[0xf]);
            *piVar2 = *piVar2 + *(int *)(lVar18 + 8 + plVar25[0xe]);
            piVar2 = (int *)(lVar21 + 4 + plVar25[0xf]);
            *piVar2 = *piVar2 + *(int *)(lVar18 + plVar25[0xe]);
            *(double *)(lVar21 + 0x28 + plVar25[0xf]) =
                 *(double *)(lVar18 + 0x40 + plVar25[0xe]) +
                 *(double *)(lVar21 + 0x28 + plVar25[0xf]);
            *(int *)(lVar21 + plVar25[0xf]) = (int)uVar14;
            uVar17 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar17;
            lVar18 = lVar18 + 0x48;
          } while (uVar17 < uVar8);
        }
        uVar8 = uVar8 + uVar29;
      } while (uVar28 < *(uint *)(*(longlong *)(param_1 + 0xb0) + local_520 * 4));
    }
    lVar21 = *(longlong *)(param_1 + 0x590);
    if ((*(int *)(lVar21 + 400) == 0) || (local_588 != '\0')) {
      iVar22 = *(int *)(*(longlong *)(param_1 + 0xb0) + local_520 * 4) -
               *(int *)(*(longlong *)(param_1 + 0xb0) + local_560 * 4);
      if (*(uint *)(param_1 + 0x26c) == 0) {
        uVar28 = iVar22 - 1;
      }
      else if ((*(uint *)(lVar21 + 0x40) / *(uint *)(lVar21 + 0x44)) * 2 <
               *(uint *)(param_1 + 0x26c)) {
        uVar8 = *(uint *)(param_1 + 0x9c) / *(uint *)(lVar21 + 0x2b4);
        uVar28 = iVar22 - 1U;
        if (uVar8 < iVar22 - 1U) {
          uVar28 = uVar8;
        }
      }
      else {
        uVar28 = iVar22 + 1U >> 1;
        if (iVar22 - 1U <= uVar28) {
          uVar28 = iVar22 - 1U;
        }
      }
      uVar14 = 0;
      if (local_574 == uVar28) {
        *(undefined8 *)(param_1 + 0xc0 + local_560 * 8) = 0;
        if ((local_588 == '\0') ||
           ((*(int *)(*(longlong *)(param_1 + 0x590) + 0x244) != 0 &&
            (*(int *)(*(longlong *)(param_1 + 0x590) + 0x10) != 0)))) {
          uVar8 = *(int *)(*(longlong *)(param_1 + 0xb0) + local_560 * 4) * uVar29;
          uVar29 = uVar28 * uVar29 + uVar8;
          if (uVar8 < uVar29) {
            lVar21 = (ulonglong)uVar8 * 0x48;
            uVar20 = (ulonglong)(uVar29 - uVar8);
            uVar7 = uVar14;
            do {
              uVar7 = uVar7 + *(uint *)(lVar21 + plVar25[0xe]);
              *(ulonglong *)(param_1 + 0xc0 + local_560 * 8) = uVar7;
              lVar21 = lVar21 + 0x48;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
        }
        else {
          uVar29 = *(uint *)(*(longlong *)(param_1 + 0xb0) + local_560 * 4);
          uVar7 = uVar14;
          if (uVar29 < uVar28 + uVar29) {
            do {
              uVar7 = uVar7 + *(uint *)((ulonglong)uVar29 * 0x38 + 4 + plVar25[0xf]);
              *(ulonglong *)(param_1 + 0xc0 + local_560 * 8) = uVar7;
              uVar29 = uVar29 + 1;
            } while (uVar29 < *(int *)(*(longlong *)(param_1 + 0xb0) + local_560 * 4) + uVar28);
          }
        }
        lVar21 = *(longlong *)(param_1 + 0x590);
        LOCK();
        piVar2 = (int *)(param_1 + 0x88);
        iVar22 = *piVar2;
        *piVar2 = *piVar2 + 1;
        UNLOCK();
        if (iVar22 + 1 == *(int *)(lVar21 + 0x2b4)) {
          *(undefined8 *)(param_1 + 0x1e0) = 0;
          uVar7 = uVar14;
          if (*(int *)(lVar21 + 0x2b4) != 0) {
            do {
              uVar7 = uVar7 + *(longlong *)(param_1 + 0xc0 + uVar14 * 8);
              *(ulonglong *)(param_1 + 0x1e0) = uVar7;
              uVar29 = (int)uVar14 + 1;
              uVar14 = (ulonglong)uVar29;
            } while (uVar29 < *(uint *)(lVar21 + 0x2b4));
          }
          thunk_FUN_182d7e0e0(*(undefined8 *)(*(longlong *)(param_1 + 0x588) + 0x10160),
                              param_1 + 0xd0);
        }
      }
    }
    pdVar11 = local_550;
    if ((*(int *)(*(longlong *)(param_1 + 0x590) + 300) == 0) &&
       ((*(int *)(*(longlong *)(param_1 + 0x590) + 0x10) != 0 || (local_56c != 0)))) {
      thunk_FUN_1829bedc0(local_550,1);
      thunk_FUN_1829c0a40(pdVar11);
      local_5a8 = (double *)((ulonglong)local_5a8 & 0xffffffff00000000);
      uVar30 = __RTDynamicCast(*pdVar11,0,&x265::BitInterface::RTTI_Type_Descriptor,
                               &x265::Bitstream::RTTI_Type_Descriptor);
      thunk_FUN_18299d9c0(uVar30);
    }
    if (((uint)(1 < uVar27) &
        (*(uint *)(*(longlong *)(param_1 + 0x590) + 300) |
        *(uint *)(*(longlong *)(param_1 + 0x590) + 0x120))) != 0) {
      lVar21 = (ulonglong)(param_2 - 2) * 0x2748 + *(longlong *)(param_1 + 0x2548);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar21 + 10000));
      uVar29 = *(uint *)(lVar21 + 0x2740);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar21 + 10000));
      uVar28 = local_57c;
      uVar27 = local_574;
      if (uVar29 == local_57c) {
        lVar18 = (ulonglong)(param_2 - 1) * 0x2748;
        lVar21 = *(longlong *)(param_1 + 0x2548) + lVar18;
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar21 + 0x26d8));
        *(uint *)(lVar21 + 0x2708) = uVar28;
        WakeAllConditionVariable((PCONDITION_VARIABLE)(lVar21 + 0x2700));
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar21 + 0x26d8));
        thunk_FUN_182d3aba0(*(longlong *)(param_1 + 0x2548) + lVar18,0xffffffff);
        uVar27 = local_574;
      }
    }
    if (*(int *)(*(longlong *)(param_1 + 0x590) + 0x10) != 0) {
      if (*(uint *)(param_1 + 0x94) <= uVar27) {
        thunk_FUN_182d47db0(param_1,*(int *)(*(longlong *)(param_1 + 0x40) +
                                            (ulonglong)(param_2 - *(uint *)(param_1 + 0x94)) * 4) *
                                    2 + 1);
        if (uVar27 == *(uint *)(param_1 + 0x94)) {
          thunk_FUN_182d47de0(param_1,*(int *)(*(longlong *)(param_1 + 0x40) +
                                              (ulonglong)(param_2 - *(uint *)(param_1 + 0x94)) * 4)
                                      * 2 + 1);
        }
        thunk_FUN_182d47be0(param_1);
      }
      uVar29 = local_56c;
      if (local_56c != 0) {
        uVar29 = local_504 - *(int *)(param_1 + 0x94);
        if (uVar29 < local_504) {
          lVar21 = (ulonglong)uVar29 * 4;
          uVar14 = (ulonglong)(local_504 - uVar29);
          do {
            thunk_FUN_182d47db0(param_1,*(int *)(lVar21 + *(longlong *)(param_1 + 0x40)) * 2 + 1);
            lVar21 = lVar21 + 4;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        uVar29 = local_56c;
        thunk_FUN_182d47be0(param_1);
      }
      if ((local_570 & uVar29) != 0) {
        thunk_FUN_182d47de0(param_1,*(int *)(*(longlong *)(param_1 + 0x40) + local_518 * 4) * 2 + 1)
        ;
        thunk_FUN_182d47be0(param_1);
      }
    }
    *(undefined1 *)(lVar23 + 0xbf9) = 0;
    LOCK();
    piVar2 = (int *)(param_1 + 0x80);
    iVar22 = *piVar2;
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    if (iVar22 + 1 == *(int *)(param_1 + 0x8c) * 2) {
      SetEvent(*(HANDLE *)(param_1 + 0x70));
    }
  }
  else {
    local_4e8 = (LPCRITICAL_SECTION)(lVar23 + 0xbd0);
    EnterCriticalSection(local_4e8);
    if (*(char *)(lVar23 + 0xbf8) != '\0') {
      if (*(char *)(lVar23 + 0xbf9) == '\0') {
        *(undefined1 *)(lVar23 + 0xbf9) = 1;
        LeaveCriticalSection(local_4e8);
        goto LAB_1829a3d36;
      }
      thunk_FUN_18299c2b0(*(undefined8 *)(param_1 + 0x590),&DAT_18393797c,1,
                          "internal error - simultaneous row access detected. Please report HW to x265-devel@videolan.org\n"
                         );
    }
    LeaveCriticalSection(local_4e8);
  }
  return;
}


