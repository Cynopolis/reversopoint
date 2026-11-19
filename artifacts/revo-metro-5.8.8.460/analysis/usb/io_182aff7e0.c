/* 0x182aff7e0 size=0x939
   WaitForSingleObjectEx
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_182aff7e0(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  char *pcVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  int *piVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  int *local_90;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  longlong local_70;
  longlong local_68;
  LARGE_INTEGER local_60;
  LARGE_INTEGER local_58;
  LARGE_INTEGER local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_183dc69c0 ^ (ulonglong)auStack_c8;
  local_70 = *(longlong *)(param_1 + 0x1cea8);
  lVar6 = param_1 + 0x12000;
  uVar15 = 0;
  local_88 = 0;
  lVar16 = param_1 + 0x13080;
  local_48 = 0;
  local_40 = 0;
  local_68 = lVar16;
  if (*(int *)(param_1 + 0x23a9c) == 2) {
    if (*(int *)(param_1 + 0x1cb88) < 0) {
      *(int *)(param_1 + 0x23a98) = -*(int *)(param_1 + 0x1cb88);
    }
    else {
      thunk_FUN_182e2e130();
    }
  }
  if (*(int *)(param_1 + 0x1b368) == 0) {
    *(undefined8 *)(param_1 + 0x14018) = DAT_184a05060;
    *(undefined8 *)(param_1 + 0x14020) = DAT_184a05058;
    *(undefined8 *)(param_1 + 0x14028) = DAT_184a05048;
    uVar4 = DAT_184a05070;
  }
  else {
    *(undefined1 **)(param_1 + 0x14018) = &LAB_18022b9cc;
    *(undefined1 **)(param_1 + 0x14020) = &LAB_18022b894;
    *(undefined8 *)(param_1 + 0x14028) = DAT_184a05050;
    uVar4 = DAT_184a05068;
  }
  *(undefined8 *)(param_1 + 0x14030) = uVar4;
  *(undefined4 *)(param_1 + 0x14428) = 0;
  *(undefined4 *)(param_1 + 0x1ceb0) = 0;
  *(undefined8 *)(param_1 + 0x13f80) = *(undefined8 *)(param_1 + 0x1b390);
  memset((void *)(param_1 + 0x1562c),0,0x3ff8);
  thunk_FUN_182aed010(param_1);
  uVar2 = thunk_FUN_182e2ad30(*(undefined4 *)(param_1 + 0x1b370),*(undefined4 *)(param_1 + 0x1b374))
  ;
  thunk_FUN_182e2ea50(param_1,lVar6,uVar2);
  thunk_FUN_182e319f0(param_1,*(undefined4 *)(param_1 + 0x1b370));
  if (*(int *)(param_1 + 0x1cc60) == 1) {
    FUN_182aff0d0(param_1);
    FUN_182afe770(param_1);
  }
  FUN_182aff0d0(param_1);
  QueryPerformanceCounter(&local_58);
  lVar23 = 3;
  if (*(int *)(param_1 + 0x23c1c) == 0) {
    if (0 < *(int *)(param_1 + 0x1b354)) {
      do {
        *(undefined8 *)(param_1 + 0x1c100) = 0;
        *(undefined1 *)(param_1 + 0x1c108) = 0;
        local_90 = &local_88;
        local_98 = &local_48;
        local_a0 = &local_70;
        local_a8 = lVar16;
        FUN_182afe990(param_1,param_1 + 0x1a7a0,uVar15,lVar6);
        uVar10 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar10;
        *(longlong *)(param_1 + 0x13018) =
             *(longlong *)(param_1 + 0x13018) +
             (longlong)((*(int *)(param_1 + 0x12ff0) - *(int *)(param_1 + 0x1b358)) * 0x10);
        *(longlong *)(param_1 + 0x13020) =
             *(longlong *)(param_1 + 0x13020) +
             (longlong)((*(int *)(param_1 + 0x13004) - *(int *)(param_1 + 0x1b358)) * 8);
        *(longlong *)(param_1 + 0x13028) =
             *(longlong *)(param_1 + 0x13028) +
             (longlong)((*(int *)(param_1 + 0x13004) - *(int *)(param_1 + 0x1b358)) * 8);
      } while ((int)uVar10 < *(int *)(param_1 + 0x1b354));
    }
    *(int *)(param_1 + 0x1ceb0) = (int)(local_70 - *(longlong *)(param_1 + 0x1cea8) >> 4);
    local_78 = local_48._4_4_;
    local_7c = (int)local_48;
    iVar17 = local_40._4_4_;
    iVar3 = (int)local_40;
  }
  else {
    thunk_FUN_182b02150(param_1,lVar6,*(undefined8 *)(param_1 + 0x23c38),
                        *(undefined4 *)(param_1 + 0x23c20));
    uVar8 = uVar15;
    if (0 < *(int *)(param_1 + 0x1b354)) {
      do {
        iVar17 = (int)uVar8;
        uVar10 = iVar17 + 1;
        uVar8 = (ulonglong)uVar10;
        *(undefined4 *)(*(longlong *)(param_1 + 0x23c10) + (longlong)iVar17 * 4) = 0xffffffff;
      } while ((int)uVar10 < *(int *)(param_1 + 0x1b354));
    }
    uVar8 = uVar15;
    uVar14 = uVar15;
    if (0 < *(int *)(param_1 + 0x23c20)) {
      do {
        ReleaseSemaphore(*(HANDLE *)(uVar14 + *(longlong *)(param_1 + 0x23c58)),1,(LPLONG)0x0);
        uVar10 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar10;
        uVar14 = uVar14 + 8;
      } while ((int)uVar10 < *(int *)(param_1 + 0x23c20));
    }
    uVar8 = uVar15;
    if (0 < *(int *)(param_1 + 0x1b354)) {
      do {
        *(undefined8 *)(param_1 + 0x1c100) = 0;
        *(undefined1 *)(param_1 + 0x1c108) = 0;
        local_90 = &local_88;
        local_98 = &local_48;
        local_a0 = &local_70;
        local_70 = (longlong)(*(int *)(param_1 + 0x1b358) * (int)uVar8 * 0x180) * 0x10 +
                   *(longlong *)(param_1 + 0x1cea8);
        local_a8 = param_1 + 0x13080;
        FUN_182afe990(param_1,param_1 + 0x1a7a0,uVar8,lVar6);
        *(longlong *)(param_1 + 0x13018) =
             *(longlong *)(param_1 + 0x13018) +
             (longlong)
             (((*(int *)(param_1 + 0x23c20) + 1) * *(int *)(param_1 + 0x12ff0) -
              *(int *)(param_1 + 0x1b358)) * 0x10);
        *(longlong *)(param_1 + 0x13020) =
             *(longlong *)(param_1 + 0x13020) +
             (longlong)
             (((*(int *)(param_1 + 0x23c20) + 1) * *(int *)(param_1 + 0x13004) -
              *(int *)(param_1 + 0x1b358)) * 8);
        *(longlong *)(param_1 + 0x13028) =
             *(longlong *)(param_1 + 0x13028) +
             (longlong)
             (((*(int *)(param_1 + 0x23c20) + 1) * *(int *)(param_1 + 0x13004) -
              *(int *)(param_1 + 0x1b358)) * 8);
        *(longlong *)(param_1 + 0x13f80) =
             *(longlong *)(param_1 + 0x13f80) +
             (longlong)(*(int *)(param_1 + 0x13f88) * *(int *)(param_1 + 0x23c20)) * 0x4c;
        *(longlong *)(param_1 + 0x14320) =
             *(longlong *)(param_1 + 0x14320) +
             (longlong)(*(int *)(param_1 + 0x13f88) * *(int *)(param_1 + 0x23c20)) * 0x84;
        *(longlong *)(param_1 + 0x143e8) =
             *(longlong *)(param_1 + 0x143e8) +
             (longlong)(*(int *)(param_1 + 0x1b358) * *(int *)(param_1 + 0x23c20));
        uVar10 = (int)uVar8 + *(int *)(param_1 + 0x23c20) + 1;
        uVar8 = (ulonglong)uVar10;
      } while ((int)uVar10 < *(int *)(param_1 + 0x1b354));
    }
    uVar8 = uVar15;
    uVar14 = uVar15;
    if (0 < *(int *)(param_1 + 0x23c20)) {
      do {
        WaitForSingleObjectEx(*(HANDLE *)(uVar14 + *(longlong *)(param_1 + 0x23c60)),0xffffffff,0);
        uVar10 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar10;
        uVar14 = uVar14 + 8;
      } while ((int)uVar10 < *(int *)(param_1 + 0x23c20));
    }
    if (0 < *(int *)(param_1 + 0x1b354)) {
      plVar7 = *(longlong **)(param_1 + 0x23c78);
      iVar17 = *(int *)(param_1 + 0x1ceb0);
      uVar8 = uVar15;
      do {
        plVar1 = plVar7 + 1;
        uVar10 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar10;
        lVar16 = *plVar7;
        plVar7 = plVar7 + 2;
        iVar17 = iVar17 + (int)(*plVar1 - lVar16 >> 4);
        *(int *)(param_1 + 0x1ceb0) = iVar17;
      } while ((int)uVar10 < *(int *)(param_1 + 0x1b354));
    }
    if ((*(char *)(param_1 + 0x13fe0) == '\0') ||
       (uVar8 = (ulonglong)*(uint *)(param_1 + 0x23c20), (int)*(uint *)(param_1 + 0x23c20) < 1)) {
      local_80 = local_40._4_4_;
      local_84 = (int)local_40;
      local_78 = local_48._4_4_;
      local_7c = (int)local_48;
    }
    else {
      piVar5 = (int *)(*(longlong *)(param_1 + 0x23c38) + 0x87a4);
      local_80 = local_40._4_4_;
      local_84 = (int)local_40;
      local_78 = local_48._4_4_;
      local_7c = (int)local_48;
      do {
        local_7c = local_7c + piVar5[-1];
        local_78 = local_78 + *piVar5;
        local_84 = local_84 + piVar5[1];
        local_80 = local_80 + piVar5[2];
        piVar5 = piVar5 + 0x21f0;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    iVar17 = local_80;
    iVar3 = local_84;
    if (0 < *(int *)(param_1 + 0x23c20)) {
      local_48 = -0x12000 - param_1;
      uVar8 = uVar15;
      do {
        piVar21 = (int *)(param_1 + 0x19770);
        piVar20 = (int *)(param_1 + 0x1442c);
        piVar5 = (int *)(param_1 + 0x17628);
        lVar16 = *(longlong *)(param_1 + 0x23c38);
        local_88 = local_88 + *(int *)(lVar16 + 0x87b0 + uVar15);
        *(int *)(param_1 + 0x14428) =
             *(int *)(param_1 + 0x14428) + *(int *)(lVar16 + 0x2428 + uVar15);
        *(int *)(param_1 + 0x19624) =
             *(int *)(param_1 + 0x19624) + *(int *)(lVar16 + 0x7624 + uVar15);
        *(int *)(param_1 + 0x19628) =
             *(int *)(param_1 + 0x19628) +
             *(int *)(uVar15 + 0x7628 + *(longlong *)(param_1 + 0x23c38));
        *(int *)(param_1 + 0x1962c) =
             *(int *)(param_1 + 0x1962c) +
             *(int *)(uVar15 + 0x762c + *(longlong *)(param_1 + 0x23c38));
        *(int *)(param_1 + 0x19630) =
             *(int *)(param_1 + 0x19630) +
             *(int *)(uVar15 + 0x7630 + *(longlong *)(param_1 + 0x23c38));
        *(int *)(param_1 + 0x19634) =
             *(int *)(param_1 + 0x19634) +
             *(int *)(uVar15 + 0x7634 + *(longlong *)(param_1 + 0x23c38));
        *(int *)(param_1 + 0x19638) =
             *(int *)(param_1 + 0x19638) +
             *(int *)(uVar15 + 0x7638 + *(longlong *)(param_1 + 0x23c38));
        *(int *)(param_1 + 0x1963c) =
             *(int *)(param_1 + 0x1963c) +
             *(int *)(uVar15 + 0x763c + *(longlong *)(param_1 + 0x23c38));
        *(int *)(param_1 + 0x19640) =
             *(int *)(param_1 + 0x19640) +
             *(int *)(uVar15 + 0x7640 + *(longlong *)(param_1 + 0x23c38));
        *(int *)(param_1 + 0x19644) =
             *(int *)(param_1 + 0x19644) +
             *(int *)(uVar15 + 0x7644 + *(longlong *)(param_1 + 0x23c38));
        lVar16 = uVar15 + local_48;
        lVar11 = 0x7ff;
        do {
          piVar5[-0x7ff] =
               piVar5[-0x7ff] +
               *(int *)((longlong)piVar5 + lVar16 + *(longlong *)(param_1 + 0x23c38) + -0x1ffc);
          *piVar5 = *piVar5 + *(int *)((longlong)piVar5 + lVar16 + *(longlong *)(param_1 + 0x23c38))
          ;
          piVar5 = piVar5 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        lVar11 = *(longlong *)(param_1 + 0x23c38);
        lVar12 = 0x400;
        *(longlong *)(param_1 + 0x19648) =
             *(longlong *)(param_1 + 0x19648) + *(longlong *)(lVar11 + 0x7648 + uVar15);
        *(longlong *)(param_1 + 0x19650) =
             *(longlong *)(param_1 + 0x19650) + *(longlong *)(lVar11 + 0x7650 + uVar15);
        *(int *)(param_1 + 0x19658) =
             *(int *)(param_1 + 0x19658) + *(int *)(lVar11 + 0x7658 + uVar15);
        *(int *)(param_1 + 0x1965c) =
             *(int *)(param_1 + 0x1965c) +
             *(int *)(uVar15 + 0x765c + *(longlong *)(param_1 + 0x23c38));
        *(int *)(param_1 + 0x19660) =
             *(int *)(param_1 + 0x19660) +
             *(int *)(uVar15 + 0x7660 + *(longlong *)(param_1 + 0x23c38));
        *(int *)(param_1 + 0x19664) =
             *(int *)(param_1 + 0x19664) +
             *(int *)(uVar15 + 0x7664 + *(longlong *)(param_1 + 0x23c38));
        do {
          *piVar21 = *piVar21 +
                     *(int *)((longlong)piVar21 + lVar16 + *(longlong *)(param_1 + 0x23c38));
          piVar21 = piVar21 + 1;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        lVar16 = *(longlong *)(param_1 + 0x23c38);
        lVar11 = 4;
        do {
          lVar12 = 8;
          do {
            lVar22 = 3;
            do {
              lVar13 = 0xb;
              piVar5 = piVar20;
              do {
                *piVar5 = *piVar5 + *(int *)(((lVar16 + uVar15) - lVar6) + (longlong)piVar5);
                piVar5 = piVar5 + 1;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
              piVar20 = piVar20 + 0xc;
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        uVar10 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar10;
        uVar15 = uVar15 + 0x87c0;
        lVar16 = local_68;
      } while ((int)uVar10 < *(int *)(param_1 + 0x23c20));
      goto LAB_182afffba;
    }
  }
  lVar16 = param_1 + 0x13080;
LAB_182afffba:
  QueryPerformanceCounter(&local_50);
  QueryPerformanceFrequency(&local_60);
  lVar6 = (local_50.QuadPart - (longlong)local_58) * 1000000;
  uVar15 = lVar6 % local_60.QuadPart;
  *(longlong *)(param_1 + 0x23e88) = *(longlong *)(param_1 + 0x23e88) + lVar6 / local_60.QuadPart;
  if ((*(char *)(lVar16 + 0xf60) != '\0') && (*(char *)(lVar16 + 0xf61) != '\0')) {
    pcVar9 = (char *)(lVar16 + 0xf64);
    iVar18 = local_78 + local_7c;
    pcVar9[0] = -1;
    pcVar9[1] = -1;
    *(undefined1 *)(lVar16 + 0xf66) = 0xff;
    iVar19 = iVar18 + iVar3 + iVar17;
    if (iVar19 != 0) {
      uVar15 = (longlong)(iVar18 * 0xff) % (longlong)iVar19;
      *pcVar9 = (char)((iVar18 * 0xff) / iVar19);
      if (0 < iVar18) {
        uVar15 = (longlong)(local_7c * 0xff) % (longlong)iVar18;
        *(char *)(lVar16 + 0xf65) = (char)((local_7c * 0xff) / iVar18);
      }
      uVar15 = uVar15 & 0xffffffff;
      iVar17 = iVar3 + iVar17;
      if (0 < iVar17) {
        uVar15 = (longlong)(iVar3 * 0xff) % (longlong)iVar17 & 0xffffffff;
        *(char *)(lVar16 + 0xf66) = (char)((iVar3 * 0xff) / iVar17);
      }
      do {
        if (*pcVar9 == '\0') {
          *pcVar9 = '\x01';
        }
        pcVar9 = pcVar9 + 1;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
    }
  }
  *(int *)(param_1 + 0x2101c) = local_88 >> 8;
  if (*(int *)(param_1 + 0x1b344) == 0) {
    *(undefined4 *)(param_1 + 0x23aec) = 100;
  }
  else {
    iVar17 = *(int *)(param_1 + 0x19664) + *(int *)(param_1 + 0x19660) + *(int *)(param_1 + 0x1965c)
             + *(int *)(param_1 + 0x19658);
    if (iVar17 != 0) {
      iVar3 = *(int *)(param_1 + 0x19658) * 100;
      uVar15 = (longlong)iVar3 % (longlong)iVar17 & 0xffffffff;
      *(int *)(param_1 + 0x23aec) = iVar3 / iVar17;
    }
  }
  if ((*(int *)(param_1 + 0x1b344) != 0) &&
     ((1 < *(uint *)(param_1 + 0x1cc64) ||
      ((*(int *)(param_1 + 0x1c0d4) == 0 && (*(int *)(param_1 + 0x1c0d0) == 0)))))) {
    thunk_FUN_182ae7ba0(param_1,uVar15);
  }
  return;
}


