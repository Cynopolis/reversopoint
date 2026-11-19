/* 0x182daccc0 size=0x1ba7
   CloseHandle
*/


ulonglong FUN_182daccc0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  char *pcVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  byte bVar21;
  byte *pbVar22;
  undefined8 *puVar23;
  undefined4 *puVar24;
  longlong *plVar25;
  longlong *plVar26;
  int iVar27;
  uint uVar28;
  ulonglong uVar29;
  undefined8 *puVar30;
  longlong *plVar31;
  int iVar32;
  longlong lVar33;
  uint uVar34;
  ulonglong uVar35;
  uint local_res20;
  ulonglong local_d48;
  undefined8 local_d38;
  void *pvStack_d30;
  undefined8 local_d28;
  undefined8 uStack_d20;
  undefined8 local_cf8;
  undefined8 uStack_cf0;
  undefined8 local_ce8;
  undefined8 local_cd8 [404];
  
  if (*(char *)(param_1 + 0x13686) != '\0') {
    return 0xffffffffffffffff;
  }
  iVar32 = 0;
  if (*(longlong *)(param_1 + 0x10138) != 0) {
    if ((*(int *)(*(longlong *)(param_1 + 0x10150) + 0x334) == 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x10150) + 0x370) != 0)) {
      thunk_FUN_182db0630(param_1,*(longlong *)(param_1 + 0x10138) + 0x42f8);
    }
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x10138) + 0x42dc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x10138) = 0;
    thunk_FUN_182f8ce00(*(undefined8 *)(param_1 + 0x10130));
  }
  if (param_2 == (undefined8 *)0x0) {
    if (*(int *)(*(longlong *)(param_1 + 0x10158) + 0x340) == 2) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x10168) + 0x146) = 1;
    }
    else {
      thunk_FUN_182f86cc0(*(undefined8 *)(param_1 + 0x10168));
    }
  }
  else {
    if (*(int *)(*(longlong *)(param_1 + 0x10158) + 0x340) == 1) {
      thunk_FUN_182f88a50(*(undefined8 *)(param_1 + 0x10168));
      *(undefined4 *)(*(longlong *)(param_1 + 0x10158) + 0x340) = 0;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x10158) + 0x340) == 2) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x10168) + 0x146) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x10158) + 0x340) = 0;
    }
    pvStack_d30 = (void *)0x0;
    if ((*(int *)(param_1 + 0x13b60) != 0) &&
       (iVar11 = *(int *)(param_1 + 0x10070) + 1, iVar11 < *(int *)(param_1 + 0x13b78))) {
      iVar27 = 0;
      pbVar2 = *(byte **)(*(longlong *)(param_1 + 0x13b70) + (longlong)iVar11 * 8);
      if (*pbVar2 == 0xff) {
        bVar21 = 0xff;
        pbVar22 = pbVar2;
        iVar27 = 0;
        iVar32 = 0;
        do {
          pbVar22 = pbVar22 + 1;
          iVar27 = iVar27 + (uint)bVar21;
          iVar32 = iVar32 + 1;
          bVar21 = *pbVar22;
        } while (bVar21 == 0xff);
      }
      iVar27 = iVar27 + (uint)pbVar2[iVar32];
      pvStack_d30 = (void *)thunk_FUN_182d8fc00((longlong)iVar27);
      local_d38 = (longlong *)CONCAT44(4,iVar27);
      memcpy(pvStack_d30,
             (void *)((longlong)(iVar32 + 1) +
                     *(longlong *)(*(longlong *)(param_1 + 0x13b70) + (longlong)iVar11 * 8)),
             (longlong)iVar27);
    }
    lVar14 = 0;
    if (8 < *(int *)((longlong)param_2 + 0x3c) - 8U) {
      thunk_FUN_182d8f720(*(undefined8 *)(param_1 + 0x10150),&DAT_18393797c,0,
                          "Input bit depth (%d) must be between 8 and 16\n",
                          *(int *)((longlong)param_2 + 0x3c));
      return 0xffffffffffffffff;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x10130) + 0x40) == 0) {
      lVar13 = thunk_FUN_183196718(0x5000);
      if (lVar13 != 0) {
        lVar14 = thunk_FUN_182f80e40(lVar13);
      }
      uVar15 = thunk_FUN_182d8fc10();
      *(undefined8 *)(lVar14 + 0x4fc0) = uVar15;
      if ((*(char *)(param_1 + 0x13687) == '\0') && (*(char *)(param_1 + 0x13688) == '\0')) {
        uVar15 = *(undefined8 *)(param_1 + 0x10150);
      }
      else {
        uVar15 = *(undefined8 *)(param_1 + 0x10158);
      }
      cVar10 = thunk_FUN_182f812b0(lVar14,uVar15,param_2[0x19c]);
      if (cVar10 == '\0') {
LAB_182dacfd8:
        *(undefined1 *)(param_1 + 0x13686) = 1;
        thunk_FUN_182d8f720(*(undefined8 *)(param_1 + 0x10150),&DAT_18393797c,0,
                            "memory allocation failure, aborting encode\n");
        thunk_FUN_182f818e0(lVar14);
        CloseHandle(*(HANDLE *)(lVar14 + 0x4fb0));
        CloseHandle(*(HANDLE *)(lVar14 + 0x4fa0));
        FUN_18001e0e2(lVar14,0x5000);
        return 0xffffffffffffffff;
      }
      if (*(longlong *)(param_1 + 0x102e8) == 0) {
        cVar10 = thunk_FUN_182f3a5e0(*(undefined8 *)(lVar14 + 0x10),param_1 + 0x102e8);
        if (cVar10 == '\0') goto LAB_182dacfd8;
        *(undefined8 *)(param_1 + 0x102e8) = *(undefined8 *)(*(longlong *)(lVar14 + 0x10) + 0x58);
        *(undefined8 *)(param_1 + 0x102f8) = *(undefined8 *)(*(longlong *)(lVar14 + 0x10) + 0x68);
        if (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x3c) != 0) {
          *(undefined8 *)(param_1 + 0x102f0) = *(undefined8 *)(*(longlong *)(lVar14 + 0x10) + 0x60);
          *(undefined8 *)(param_1 + 0x102e8) = *(undefined8 *)(*(longlong *)(lVar14 + 0x10) + 0x58);
          *(undefined8 *)(param_1 + 0x10300) = *(undefined8 *)(*(longlong *)(lVar14 + 0x10) + 0x70);
          *(undefined8 *)(param_1 + 0x102f8) = *(undefined8 *)(*(longlong *)(lVar14 + 0x10) + 0x68);
        }
      }
      else {
        *(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x58) = *(longlong *)(param_1 + 0x102e8);
        *(undefined8 *)(*(longlong *)(lVar14 + 0x10) + 0x68) = *(undefined8 *)(param_1 + 0x102f8);
        if (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x3c) != 0) {
          *(undefined8 *)(*(longlong *)(lVar14 + 0x10) + 0x60) = *(undefined8 *)(param_1 + 0x102f0);
          *(undefined8 *)(*(longlong *)(lVar14 + 0x10) + 0x70) = *(undefined8 *)(param_1 + 0x10300);
        }
      }
    }
    else {
      lVar14 = thunk_FUN_182f81d60(*(longlong *)(param_1 + 0x10130) + 0x30);
      uVar15 = thunk_FUN_182d8fc10();
      *(undefined8 *)(lVar14 + 0x4fc0) = uVar15;
      *(undefined1 *)(lVar14 + 0x104) = 0;
      *(undefined8 *)(lVar14 + 0x1fc8) = 0xffffffffffffffff;
      *(undefined1 *)(lVar14 + 0x42a8) = 0;
    }
    thunk_FUN_182f397f0(*(undefined8 *)(lVar14 + 0x10),param_2,*(undefined8 *)(param_1 + 0x10150),
                        *(undefined4 *)(param_1 + 0x12a6c),*(undefined4 *)(param_1 + 0x12a74));
    *(int *)(param_1 + 0x10070) = *(int *)(param_1 + 0x10070) + 1;
    *(undefined4 *)(lVar14 + 0x18) = *(undefined4 *)(param_1 + 0x10070);
    *(undefined8 *)(lVar14 + 0x40) = param_2[2];
    *(undefined8 *)(lVar14 + 0x20) = *param_2;
    *(undefined4 *)(lVar14 + 0x38) = *(undefined4 *)((longlong)param_2 + 0x4c);
    if ((*(char *)(param_1 + 0x13687) == '\0') && (*(char *)(param_1 + 0x13688) == '\0')) {
      uVar15 = *(undefined8 *)(param_1 + 0x10150);
    }
    else {
      uVar15 = *(undefined8 *)(param_1 + 0x10158);
    }
    *(undefined8 *)(lVar14 + 0x42f0) = uVar15;
    local_res20 = 0;
    if (*(int *)(param_1 + 0x13b60) != 0) {
      local_res20 = (uint)(pvStack_d30 != (void *)0x0);
    }
    iVar32 = *(int *)(param_2 + 0x213) + local_res20;
    *(int *)(lVar14 + 0x42b8) = iVar32;
    if (iVar32 != 0) {
      local_d48 = (ulonglong)iVar32;
      if (*(longlong *)(lVar14 + 0x42c0) == 0) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = local_d48;
        uVar15 = SUB168(ZEXT816(0x10) * auVar4,0);
        if (SUB168(ZEXT816(0x10) * auVar4,8) != 0) {
          uVar15 = 0xffffffffffffffff;
        }
        uVar15 = thunk_FUN_183196718(uVar15);
        lVar13 = 0;
        *(undefined8 *)(lVar14 + 0x42c0) = uVar15;
        uVar29 = local_d48;
        if (0 < iVar32) {
          do {
            *(undefined8 *)(lVar13 + 8 + *(longlong *)(lVar14 + 0x42c0)) = 0;
            uVar29 = uVar29 - 1;
            lVar13 = lVar13 + 0x10;
          } while (uVar29 != 0);
        }
      }
      uVar29 = 0;
      if (0 < iVar32) {
        uVar35 = uVar29;
        do {
          if (((int)uVar35 == iVar32 + -1) && (local_res20 != 0)) {
            local_d28 = local_d38;
            uStack_d20 = pvStack_d30;
          }
          else {
            local_d28 = *(undefined8 *)(param_2[0x214] + uVar29);
            uStack_d20 = (void *)((undefined8 *)(param_2[0x214] + uVar29))[1];
          }
          iVar11 = (int)local_d28;
          *(int *)(uVar29 + *(longlong *)(lVar14 + 0x42c0)) = iVar11;
          *(int *)(uVar29 + 4 + *(longlong *)(lVar14 + 0x42c0)) =
               (int)((ulonglong)local_d28 >> 0x20);
          if (*(longlong *)(uVar29 + 8 + *(longlong *)(lVar14 + 0x42c0)) == 0) {
            uVar15 = thunk_FUN_183196718((longlong)iVar11);
            *(undefined8 *)(uVar29 + 8 + *(longlong *)(lVar14 + 0x42c0)) = uVar15;
          }
          memcpy(*(void **)(uVar29 + 8 + *(longlong *)(lVar14 + 0x42c0)),uStack_d20,(longlong)iVar11
                );
          uVar35 = (ulonglong)((int)uVar35 + 1);
          uVar29 = uVar29 + 0x10;
          local_d48 = local_d48 - 1;
        } while (local_d48 != 0);
      }
      if (pvStack_d30 != (void *)0x0) {
        FUN_18001f5ff();
      }
    }
    if ((void *)param_2[0x19c] != (void *)0x0) {
      if (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x234) == 8) {
        iVar32 = *(int *)(lVar14 + 0x2c44) * *(int *)(lVar14 + 0x2c40);
      }
      else {
        iVar32 = *(int *)(lVar14 + 0x2c3c) * *(int *)(lVar14 + 0x2c38);
      }
      memcpy(*(void **)(lVar14 + 0x42b0),(void *)param_2[0x19c],(longlong)iVar32 << 2);
    }
    if (*(int *)(param_1 + 0x10070) == 0) {
      *(undefined8 *)(param_1 + 0x10048) = *(undefined8 *)(lVar14 + 0x20);
    }
    if ((*(int *)(param_1 + 0x1007c) != 0) &&
       (*(int *)(param_1 + 0x10070) == *(int *)(param_1 + 0x1007c))) {
      *(longlong *)(param_1 + 0x10050) =
           *(longlong *)(lVar14 + 0x20) - *(longlong *)(param_1 + 0x10048);
    }
    LOCK();
    *(int *)(lVar14 + 0x42dc) = *(int *)(lVar14 + 0x42dc) + 1;
    UNLOCK();
    lVar13 = *(longlong *)(param_1 + 0x10150);
    if (((((*(int *)(lVar13 + 0x1c4) != 0) || (*(int *)(lVar13 + 0x114) != 0)) ||
         (*(int *)(lVar13 + 0x118) != 0)) &&
        ((*(int *)(lVar13 + 0x1e0) != 0 && (*(int *)(lVar13 + 0x1fc) != 0)))) &&
       (cVar10 = thunk_FUN_182f75750(*(undefined8 *)(param_1 + 0x10160),lVar14), cVar10 == '\0')) {
      *(undefined1 *)(param_1 + 0x13686) = 1;
      return 0xffffffffffffffff;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x1fc) != 0) {
      thunk_FUN_182f7a970(*(undefined8 *)(param_1 + 0x10160),*(undefined4 *)(lVar14 + 0x18));
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x10150) + 0x378) != 0) {
      iVar32 = DAT_1848aef5c;
      if (*(int *)(lVar14 + 0x18) == 0) {
        lVar13 = 0x19;
        puVar30 = param_2 + 10;
        puVar20 = local_cd8;
        do {
          puVar23 = puVar20;
          puVar16 = puVar30;
          uVar15 = puVar16[1];
          uVar5 = puVar16[2];
          uVar6 = puVar16[3];
          *puVar23 = *puVar16;
          puVar23[1] = uVar15;
          uVar15 = puVar16[4];
          uVar7 = puVar16[5];
          puVar23[2] = uVar5;
          puVar23[3] = uVar6;
          uVar5 = puVar16[6];
          uVar6 = puVar16[7];
          puVar23[4] = uVar15;
          puVar23[5] = uVar7;
          uVar15 = puVar16[8];
          uVar7 = puVar16[9];
          puVar23[6] = uVar5;
          puVar23[7] = uVar6;
          uVar5 = puVar16[10];
          uVar6 = puVar16[0xb];
          puVar23[8] = uVar15;
          puVar23[9] = uVar7;
          uVar15 = puVar16[0xc];
          uVar7 = puVar16[0xd];
          puVar23[10] = uVar5;
          puVar23[0xb] = uVar6;
          uVar5 = puVar16[0xe];
          uVar6 = puVar16[0xf];
          puVar23[0xc] = uVar15;
          puVar23[0xd] = uVar7;
          puVar23[0xe] = uVar5;
          puVar23[0xf] = uVar6;
          lVar13 = lVar13 + -1;
          puVar30 = puVar16 + 0x10;
          puVar20 = puVar23 + 0x10;
        } while (lVar13 != 0);
        uVar15 = puVar16[0x11];
        puVar23[0x10] = puVar16[0x10];
        puVar23[0x11] = uVar15;
        iVar32 = thunk_FUN_182db8580(param_1,local_cd8,0);
        DAT_1848aef5c = iVar32;
        if (iVar32 == -1) {
          *(undefined1 *)(param_1 + 0x13686) = 1;
        }
      }
      if (*(char *)(param_1 + 0x13bd8) == '\0') {
        thunk_FUN_182db3800(param_1,lVar14 + 0x42f8,*(undefined4 *)(lVar14 + 0x18),param_2,iVar32);
      }
      else {
        lVar13 = *(longlong *)(param_1 + 0x10150);
        uVar34 = *(uint *)(lVar13 + 0xb4);
        bVar21 = (byte)*(undefined4 *)(lVar13 + 0x324);
        local_d28 = CONCAT44((uint)(*(int *)(lVar13 + 0x4c) + -1 + *(int *)(lVar13 + 0xb4)) >>
                             (bVar21 & 0x1f),(undefined4)local_d28);
        uVar28 = (uint)(*(int *)(lVar13 + 0xb4) + -1 + *(int *)(lVar13 + 0x48)) >> (bVar21 & 0x1f);
        uStack_d20 = (void *)CONCAT44(*(int *)(lVar13 + 0x330) * uVar28,uVar28);
        local_ce8 = 0;
        iVar11 = *(int *)(lVar13 + 0x4c) / 2;
        bVar21 = (byte)*(undefined4 *)(lVar13 + 0x324);
        iVar27 = *(int *)(lVar13 + 0x48) / 2;
        local_d28._0_2_ =
             CONCAT11(uVar34 <= ((iVar11 + -1 + uVar34 >> (bVar21 & 0x1f)) * uVar34 - iVar11) * 2,
                      uVar34 <= (((uVar34 - 1) + iVar27 >> (bVar21 & 0x1f)) * uVar34 - iVar27) * 2);
        local_cf8 = local_d28;
        uStack_cf0 = uStack_d20;
        thunk_FUN_182db5110(param_1,lVar14 + 0x42f8,*(undefined4 *)(lVar14 + 0x18),param_2,iVar32,
                            &local_cf8);
      }
      *(undefined4 *)(lVar14 + 0x18) = *(undefined4 *)(lVar14 + 0x4304);
      *(bool *)(lVar14 + 0x104) = *(int *)(lVar14 + 0x4318) != 0;
      *(undefined8 *)(lVar14 + 0x1fc8) = *(undefined8 *)(lVar14 + 0x42f8);
      if (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x348) != 0) {
        *(undefined4 *)(lVar14 + 0xf4) = *(undefined4 *)(lVar14 + 0x4308);
        *(bool *)(lVar14 + 0x105) = *(int *)(lVar14 + 0x4b38) != 0;
        *(bool *)(lVar14 + 0x106) = *(int *)(lVar14 + 0x4b3c) != 0;
        if ((*(char *)(*(longlong *)(param_1 + 0x10160) + 0x1d) != '\0') &&
           (iVar32 = *(int *)(*(longlong *)(param_1 + 0x10150) + 0xa4) + 2 +
                     *(int *)(*(longlong *)(param_1 + 0x10150) + 0x94), lVar13 = (longlong)iVar32,
           0 < iVar32)) {
          puVar30 = (undefined8 *)(lVar14 + 0x3038);
          puVar24 = (undefined4 *)(lVar14 + 0x2c48);
          do {
            *puVar30 = puVar30[0x261];
            puVar30 = puVar30 + 1;
            *puVar24 = puVar24[0x7be];
            lVar13 = lVar13 + -1;
            puVar24 = puVar24 + 1;
          } while (lVar13 != 0);
        }
      }
    }
    if ((*(int *)(*(longlong *)(param_1 + 0x10150) + 0x310) != 0) &&
       (lVar13 = param_2[0x215], lVar13 != 0)) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x10160) + 0x198) = *(undefined8 *)(lVar13 + 0x48);
      *(undefined8 *)(*(longlong *)(param_1 + 0x10160) + 0x1a0) = *(undefined8 *)(lVar13 + 0x50);
      *(undefined1 *)(*(longlong *)(param_1 + 0x10160) + 0x22) = 1;
      *(undefined8 *)(*(longlong *)(param_1 + 0x10160) + 0x1a8) = *(undefined8 *)(lVar13 + 0x58);
      *(undefined8 *)(*(longlong *)(param_1 + 0x10160) + 0x1b0) = *(undefined8 *)(lVar13 + 0x60);
      *(undefined8 *)(*(longlong *)(param_1 + 0x10160) + 0x1b8) = *(undefined8 *)(lVar13 + 0x68);
      *(undefined8 *)(*(longlong *)(param_1 + 0x10160) + 400) = *(undefined8 *)(lVar13 + 0x90);
      *(undefined8 *)(*(longlong *)(param_1 + 0x10160) + 0x188) = *(undefined8 *)(lVar13 + 0x98);
      *(undefined8 *)(*(longlong *)(param_1 + 0x10160) + 0x218) = *(undefined8 *)(lVar13 + 0xb0);
      *(undefined8 *)(*(longlong *)(param_1 + 0x10160) + 0x220) = *(undefined8 *)(lVar13 + 0xb8);
      *(undefined8 *)(*(longlong *)(param_1 + 0x10160) + 0x1f8) = *(undefined8 *)(lVar13 + 0xa0);
      *(undefined8 *)(*(longlong *)(param_1 + 0x10160) + 0x200) = *(undefined8 *)(lVar13 + 0xa8);
      if (*(char *)(*(longlong *)(param_1 + 0x10160) + 0x1d) != '\0') {
        *(undefined8 *)(*(longlong *)(param_1 + 0x10160) + 0x50) = *(undefined8 *)(lVar13 + 0x120);
        *(undefined8 *)(*(longlong *)(param_1 + 0x10160) + 0xa8) = *(undefined8 *)(lVar13 + 0xc0);
        *(undefined8 *)(*(longlong *)(param_1 + 0x10160) + 0xb0) = *(undefined8 *)(lVar13 + 0xe0);
        *(undefined8 *)(*(longlong *)(param_1 + 0x10160) + 0xc0) = *(undefined8 *)(lVar13 + 0x100);
        *(undefined8 *)(*(longlong *)(param_1 + 0x10160) + 0xd0) = *(undefined8 *)(lVar13 + 200);
        *(undefined8 *)(*(longlong *)(param_1 + 0x10160) + 0xd8) = *(undefined8 *)(lVar13 + 0xe8);
        *(undefined8 *)(*(longlong *)(param_1 + 0x10160) + 0xe8) = *(undefined8 *)(lVar13 + 0x108);
        *(undefined8 *)(*(longlong *)(param_1 + 0x10160) + 0xf8) = *(undefined8 *)(lVar13 + 0xd0);
        *(undefined8 *)(*(longlong *)(param_1 + 0x10160) + 0x100) = *(undefined8 *)(lVar13 + 0xf0);
        *(undefined8 *)(*(longlong *)(param_1 + 0x10160) + 0x110) = *(undefined8 *)(lVar13 + 0x110);
        *(undefined8 *)(*(longlong *)(param_1 + 0x10160) + 0x120) = *(undefined8 *)(lVar13 + 0xd8);
        *(undefined8 *)(*(longlong *)(param_1 + 0x10160) + 0x128) = *(undefined8 *)(lVar13 + 0xf8);
        *(undefined8 *)(*(longlong *)(param_1 + 0x10160) + 0x138) = *(undefined8 *)(lVar13 + 0x118);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x10150) + 0x310) = 0;
    }
    if (*(char *)(param_1 + 0x13688) != '\0') {
      *(undefined1 *)(lVar14 + 0x42aa) = 1;
    }
    thunk_FUN_182f82960(*(undefined8 *)(param_1 + 0x10168),lVar14);
    *(int *)(param_1 + 0x100a0) = *(int *)(param_1 + 0x100a0) + 1;
  }
  plVar17 = (longlong *)0x0;
  plVar19 = (longlong *)0x0;
  local_d38 = (longlong *)0x0;
  lVar14 = *(longlong *)(param_1 + 0x100b0 + (longlong)*(int *)(param_1 + 0x10084) * 8);
  iVar32 = 0;
  *(int *)(param_1 + 0x10084) =
       (*(int *)(param_1 + 0x10084) + 1) % *(int *)(*(longlong *)(param_1 + 0x10150) + 4);
  local_res20 = 0;
  do {
    if ((*(char *)(param_1 + 0x13685) == '\0') || (iVar32 != 0)) {
      plVar17 = (longlong *)thunk_FUN_182d96510(lVar14);
      local_d38 = plVar17;
    }
    if (plVar17 != (longlong *)0x0) {
      lVar13 = *(longlong *)(param_1 + 0x10150);
      plVar26 = (longlong *)0x0;
      lVar33 = *(longlong *)*plVar17;
      if (((*(longlong *)(lVar13 + 0x378) != 0) && (*(longlong *)(lVar13 + 0x370) == 0)) ||
         ((*(int *)(lVar13 + 0x360) != 0 && (*(int *)(lVar33 + 0x8d8) != 2)))) {
        thunk_FUN_182db0630(param_1,plVar17 + 0x85f);
      }
      if (param_3 != (longlong *)0x0) {
        lVar13 = plVar17[1];
        plVar26 = param_3 + 0x19d;
        *(undefined4 *)((longlong)param_3 + 0x44) = *(undefined4 *)(lVar33 + 0x8e8);
        *(undefined4 *)((longlong)param_3 + 0x3c) = 10;
        param_3[2] = plVar17[8];
        *(undefined4 *)(param_3 + 9) = *(undefined4 *)(*(longlong *)(param_1 + 0x10150) + 0x3c);
        *param_3 = plVar17[4];
        param_3[1] = plVar17[6];
        param_3[0x21a] = plVar17[5];
        *(undefined4 *)(param_3 + 8) = *(undefined4 *)((longlong)plVar17 + 0xf4);
        param_3[3] = *(longlong *)(lVar13 + 0x18);
        *(int *)(param_3 + 6) = *(int *)(lVar13 + 0x38) * 2;
        if (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x3c) != 0) {
          param_3[4] = *(longlong *)(lVar13 + 0x20);
          *(int *)((longlong)param_3 + 0x34) = *(int *)(lVar13 + 0x40) * 2;
          param_3[5] = *(longlong *)(lVar13 + 0x28);
          *(int *)(param_3 + 7) = *(int *)(lVar13 + 0x40) * 2;
        }
        if (*(longlong *)(*(longlong *)(param_1 + 0x10150) + 0x370) != 0) {
          *(undefined4 *)((longlong)param_3 + 0x5c) = *(undefined4 *)((longlong)param_3 + 0x44);
          *(int *)(param_3 + 0xc) = (int)param_3[8];
          *(uint *)(param_3 + 0xe) = (uint)*(byte *)((longlong)plVar17 + 0x104);
          param_3[10] = plVar17[0x3f9];
          *(undefined4 *)((longlong)param_3 + 100) = *(undefined4 *)((longlong)plVar17 + 0x430c);
          *(int *)(param_3 + 0xd) = (int)plVar17[0x862];
          param_3[0xf] = plVar17[0x864];
          param_3[0x10] = plVar17[0x865];
          param_3[0x11] = plVar17[0x866];
          param_3[0x193] = plVar17[0x9e8];
          param_3[0x194] = plVar17[0x9e9];
          if (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x348) != 0) {
            iVar11 = *(int *)(*(longlong *)(param_1 + 0x10150) + 0x314);
            iVar27 = 1;
            if (iVar11 != 0) {
              iVar27 = iVar11 * 2;
            }
            *(int *)(param_3 + 0x12) = (int)plVar17[0x867];
            param_3[0x191] = plVar17[6];
            param_3[0x192] = plVar17[5];
            param_3[10] = param_3[10] * (longlong)iVar27;
            *(uint *)(param_3 + 0x112) = (uint)*(byte *)((longlong)plVar17 + 0x105);
            *(uint *)((longlong)param_3 + 0x894) = (uint)*(byte *)((longlong)plVar17 + 0x106);
            if (*(char *)(*(longlong *)(param_1 + 0x10160) + 0x1d) != '\0') {
              iVar11 = *(int *)(*(longlong *)(param_1 + 0x10150) + 0xa4) + 2 +
                       *(int *)(*(longlong *)(param_1 + 0x10150) + 0x94);
              lVar13 = (longlong)iVar11;
              if (0 < iVar11) {
                plVar31 = param_3 + 0x13;
                plVar25 = param_3 + 0x113;
                do {
                  *plVar31 = *(longlong *)
                              ((longlong)plVar17 + (0x2fa0 - (longlong)param_3) + (longlong)plVar31)
                  ;
                  plVar31 = plVar31 + 1;
                  *(undefined4 *)plVar25 =
                       *(undefined4 *)
                        ((longlong)plVar17 + (0x23ac - (longlong)param_3) + (longlong)plVar25 + 4);
                  lVar13 = lVar13 + -1;
                  plVar25 = (longlong *)((longlong)plVar25 + 4);
                } while (lVar13 != 0);
              }
              uVar29 = 0;
              if ((int)param_3[0x12] != 0) {
                do {
                  *(undefined4 *)(plVar17[0x966] + uVar29 * 4) =
                       *(undefined4 *)(*(longlong *)(*plVar17 + 0x78) + 0xc + uVar29 * 0x38);
                  *(undefined4 *)(plVar17[0x965] + uVar29 * 4) =
                       *(undefined4 *)(*(longlong *)(*plVar17 + 0x78) + 8 + uVar29 * 0x38);
                  uVar34 = (int)uVar29 + 1;
                  uVar29 = (ulonglong)uVar34;
                } while (uVar34 < *(uint *)(param_3 + 0x12));
              }
              uVar29 = 0;
              param_3[0x111] = plVar17[0x966];
              param_3[0x110] = plVar17[0x965];
              if (*(int *)((longlong)param_3 + 100) != 0) {
                do {
                  *(undefined4 *)(plVar17[0x964] + uVar29 * 4) =
                       *(undefined4 *)(*(longlong *)(*plVar17 + 0x70) + 8 + uVar29 * 0x48);
                  *(undefined4 *)(plVar17[0x963] + uVar29 * 4) =
                       *(undefined4 *)(*(longlong *)(*plVar17 + 0x70) + 4 + uVar29 * 0x48);
                  uVar34 = (int)uVar29 + 1;
                  uVar29 = (ulonglong)uVar34;
                } while (uVar34 < *(uint *)((longlong)param_3 + 100));
              }
              param_3[0x10f] = plVar17[0x964];
              param_3[0x10e] = plVar17[0x963];
            }
          }
          thunk_FUN_182db9610(param_1,param_3 + 10);
          if (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x334) != 0) {
            thunk_FUN_182db0630(param_1,param_3 + 10);
          }
        }
      }
      lVar13 = *(longlong *)(param_1 + 0x10150);
      if ((*(int *)(lVar13 + 0x1f8) != 0) &&
         ((*(int *)(lVar13 + 0x2d8) != 0 || (*(int *)(lVar13 + 0x2dc) != 0)))) {
        if (param_3 != (longlong *)0x0) {
          *(undefined4 *)(param_3 + 0x218) = *(undefined4 *)((longlong)param_3 + 0x44);
          param_3[0x219] = plVar17[0x9f2];
        }
        thunk_FUN_182db90d0(param_1,plVar17 + 0x9f1,*plVar17,
                            *(undefined4 *)((longlong)plVar17 + 0xf4));
      }
      if ((*(int *)(*(longlong *)(param_1 + 0x10150) + 0x2d8) != 0) ||
         (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x2dc) != 0)) {
        thunk_FUN_182db04f0(param_1,plVar17 + 0x9f1);
      }
      iVar11 = *(int *)(lVar33 + 0x8d8);
      if (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x3c) == 0) {
        if (iVar11 == 1) {
          if (*(char *)(lVar33 + 0x23c) != '\0') {
            *(int *)(param_1 + 0x10088) = *(int *)(param_1 + 0x10088) + 1;
          }
        }
        else if ((iVar11 == 0) &&
                ((*(char *)(lVar33 + 0x53c) != '\0' || (*(char *)(lVar33 + 0x23c) != '\0')))) {
          *(int *)(param_1 + 0x10090) = *(int *)(param_1 + 0x10090) + 1;
        }
      }
      else if (iVar11 == 1) {
        if (*(char *)(lVar33 + 0x23c) != '\0') {
          *(int *)(param_1 + 0x10088) = *(int *)(param_1 + 0x10088) + 1;
        }
        if ((*(char *)(lVar33 + 0x24c) != '\0') || (*(char *)(lVar33 + 0x25c) != '\0')) {
          *(int *)(param_1 + 0x1008c) = *(int *)(param_1 + 0x1008c) + 1;
        }
      }
      else if (iVar11 == 0) {
        bVar8 = false;
        pcVar18 = (char *)(lVar33 + 0x24c);
        bVar9 = false;
        lVar13 = 2;
        do {
          if (pcVar18[-0x10] != '\0') {
            bVar8 = true;
          }
          if ((*pcVar18 != '\0') || (pcVar18[0x10] != '\0')) {
            bVar9 = true;
          }
          pcVar18 = pcVar18 + 0x300;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        if (bVar8) {
          *(int *)(param_1 + 0x10090) = *(int *)(param_1 + 0x10090) + 1;
        }
        if (bVar9) {
          *(int *)(param_1 + 0x10094) = *(int *)(param_1 + 0x10094) + 1;
        }
      }
      local_res20 = 1;
      if (*(char *)(param_1 + 0x13686) != '\0') {
        return 0xffffffffffffffff;
      }
      thunk_FUN_182daf510(param_1,plVar17,lVar14,plVar26,*(undefined4 *)(param_1 + 0x10070));
      if ((*(int *)(*(longlong *)(param_1 + 0x10150) + 0x1f8) != 0) &&
         (iVar11 = thunk_FUN_182f7ea20(*(undefined8 *)(param_1 + 0x10160)), iVar11 != 0)) {
        *(undefined1 *)(param_1 + 0x13686) = 1;
      }
      if (param_3 == (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar17 + 0x42dc) = *(int *)((longlong)plVar17 + 0x42dc) + -1;
        UNLOCK();
        thunk_FUN_182f8ce00(*(undefined8 *)(param_1 + 0x10130));
      }
      else {
        param_3[0x215] = plVar17[0x9f3];
        *(undefined8 *)plVar17[0x9f3] = *(undefined8 *)(*plVar17 + 0x4e8);
        *(undefined8 *)(plVar17[0x9f3] + 0x10) = *(undefined8 *)(lVar14 + 0x200);
        *(undefined8 *)(plVar17[0x9f3] + 0x18) = *(undefined8 *)(lVar14 + 0x230);
        *(undefined4 *)(plVar17[0x9f3] + 0x78) = *(undefined4 *)(*plVar17 + 0x84);
        *(undefined4 *)(plVar17[0x9f3] + 0x74) = *(undefined4 *)(*plVar17 + 0x88);
        *(undefined4 *)(plVar17[0x9f3] + 0x70) = *(undefined4 *)(*plVar17 + 0x80);
        uVar15 = thunk_FUN_182d8fcd0(*(undefined8 *)(*plVar17 + 0x4e8));
        *(undefined8 *)(plVar17[0x9f3] + 0x20) = uVar15;
        *(undefined8 *)(plVar17[0x9f3] + 0x40) = uVar15;
        *(undefined4 *)(plVar17[0x9f3] + 0x7c) = *(undefined4 *)(lVar14 + 0x268);
        *(undefined4 *)(plVar17[0x9f3] + 0x80) = *(undefined4 *)(lVar14 + 0x26c);
        *(undefined4 *)(plVar17[0x9f3] + 0x84) = *(undefined4 *)(lVar14 + 0x260);
        uVar34 = local_res20;
        if ((*(int *)(lVar14 + 0x260) == 0) && (*(int *)((longlong)plVar17 + 0xf4) == 5)) {
          uVar34 = 0;
        }
        *(uint *)(plVar17[0x9f3] + 0x88) = uVar34;
        *(undefined8 *)(plVar17[0x9f3] + 8) = *(undefined8 *)(*plVar17 + 0x4f0);
        *(double *)(plVar17[0x9f3] + 0x28) =
             (double)*(int *)(*(longlong *)(param_1 + 0x10160) + 0x14) *
             *(double *)(*plVar17 + 0x98);
        *(double *)(plVar17[0x9f3] + 0x30) =
             (double)*(int *)(*(longlong *)(param_1 + 0x10160) + 0x14) *
             *(double *)(*plVar17 + 0xa0);
        *(double *)(plVar17[0x9f3] + 0x38) =
             (double)*(int *)(*(longlong *)(param_1 + 0x10160) + 0x14) *
             *(double *)(*plVar17 + 0xa8);
        *(longlong **)(param_1 + 0x10138) = plVar17;
      }
      *(int *)(param_1 + 0x100a0) = *(int *)(param_1 + 0x100a0) + -1;
    }
    if (iVar32 == 0) {
      plVar19 = (longlong *)thunk_FUN_182f86fa0(*(undefined8 *)(param_1 + 0x10168));
    }
    if ((plVar19 == (longlong *)0x0) || (iVar32 != 0)) {
      if (*(int *)(param_1 + 0x10074) != 0) {
        thunk_FUN_182f7dae0(*(undefined8 *)(param_1 + 0x10160));
      }
    }
    else {
      if ((*(int *)(*(longlong *)(param_1 + 0x10150) + 0x2d8) != 0) ||
         (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x2dc) != 0)) {
        thunk_FUN_182da8210(param_1,plVar19 + 0x9f1,*(undefined4 *)((longlong)plVar19 + 0xf4));
        *(int *)(plVar19 + 0x9f1) = (int)plVar19[3];
        if (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x1fc) != 0) {
          thunk_FUN_182db2d00(param_1,plVar19 + 0x9f1,(int)plVar19[3],
                              *(undefined4 *)((longlong)plVar19 + 0xf4));
        }
      }
      if (*(char *)((longlong)plVar19 + 0x42aa) != '\0') {
        if (*(char *)(param_1 + 0x13688) != '\0') {
          lVar13 = 7;
          puVar30 = *(undefined8 **)(param_1 + 0x10158);
          puVar20 = *(undefined8 **)(param_1 + 0x10150);
          do {
            puVar23 = puVar20;
            puVar16 = puVar30;
            uVar15 = puVar16[1];
            *puVar23 = *puVar16;
            puVar23[1] = uVar15;
            uVar15 = puVar16[3];
            puVar23[2] = puVar16[2];
            puVar23[3] = uVar15;
            uVar15 = puVar16[5];
            puVar23[4] = puVar16[4];
            puVar23[5] = uVar15;
            uVar15 = puVar16[7];
            puVar23[6] = puVar16[6];
            puVar23[7] = uVar15;
            uVar15 = puVar16[9];
            puVar23[8] = puVar16[8];
            puVar23[9] = uVar15;
            uVar15 = puVar16[0xb];
            puVar23[10] = puVar16[10];
            puVar23[0xb] = uVar15;
            uVar15 = puVar16[0xd];
            puVar23[0xc] = puVar16[0xc];
            puVar23[0xd] = uVar15;
            uVar15 = puVar16[0xf];
            puVar23[0xe] = puVar16[0xe];
            puVar23[0xf] = uVar15;
            lVar13 = lVar13 + -1;
            puVar30 = puVar16 + 0x10;
            puVar20 = puVar23 + 0x10;
          } while (lVar13 != 0);
          uVar15 = puVar16[0x11];
          puVar23[0x10] = puVar16[0x10];
          puVar23[0x11] = uVar15;
          uVar15 = puVar16[0x13];
          puVar23[0x12] = puVar16[0x12];
          puVar23[0x13] = uVar15;
          thunk_FUN_182f7cdb0(*(undefined8 *)(param_1 + 0x10160));
          *(undefined1 *)(param_1 + 0x13688) = 0;
        }
        if ((*(char *)((longlong)plVar19 + 0x42aa) != '\0') &&
           (*(char *)(param_1 + 0x13688) == '\0')) {
          *(undefined1 *)((longlong)plVar19 + 0x42aa) = 0;
        }
      }
      if (*(char *)(lVar14 + 0x7c) != '\0') {
        iVar11 = 0;
        if (0 < *(int *)(*(longlong *)(param_1 + 0x10150) + 4)) {
          plVar26 = (longlong *)(param_1 + 0x100b0);
          do {
            lVar13 = *plVar26;
            plVar26 = plVar26 + 1;
            iVar11 = iVar11 + 1;
            *(undefined1 *)(lVar13 + 0x7c) = 0;
          } while (iVar11 < *(int *)(*(longlong *)(param_1 + 0x10150) + 4));
        }
        lVar13 = 7;
        puVar30 = *(undefined8 **)(param_1 + 0x10158);
        puVar20 = *(undefined8 **)(param_1 + 0x10150);
        do {
          puVar23 = puVar20;
          puVar16 = puVar30;
          uVar15 = puVar16[1];
          *puVar23 = *puVar16;
          puVar23[1] = uVar15;
          uVar15 = puVar16[3];
          puVar23[2] = puVar16[2];
          puVar23[3] = uVar15;
          uVar15 = puVar16[5];
          puVar23[4] = puVar16[4];
          puVar23[5] = uVar15;
          uVar15 = puVar16[7];
          puVar23[6] = puVar16[6];
          puVar23[7] = uVar15;
          uVar15 = puVar16[9];
          puVar23[8] = puVar16[8];
          puVar23[9] = uVar15;
          uVar15 = puVar16[0xb];
          puVar23[10] = puVar16[10];
          puVar23[0xb] = uVar15;
          uVar15 = puVar16[0xd];
          puVar23[0xc] = puVar16[0xc];
          puVar23[0xd] = uVar15;
          uVar15 = puVar16[0xf];
          puVar23[0xe] = puVar16[0xe];
          puVar23[0xf] = uVar15;
          lVar13 = lVar13 + -1;
          puVar30 = puVar16 + 0x10;
          puVar20 = puVar23 + 0x10;
        } while (lVar13 != 0);
        uVar15 = puVar16[0x11];
        puVar23[0x10] = puVar16[0x10];
        puVar23[0x11] = uVar15;
        uVar15 = puVar16[0x13];
        puVar23[0x12] = puVar16[0x12];
        puVar23[0x13] = uVar15;
        *(undefined1 *)(param_1 + 0x13687) = 0;
      }
      if (*(char *)(param_1 + 0x13687) == '\0') {
        uVar15 = *(undefined8 *)(param_1 + 0x10150);
      }
      else {
        uVar15 = *(undefined8 *)(param_1 + 0x10158);
      }
      *(undefined8 *)(lVar14 + 0x590) = uVar15;
      *(undefined1 *)(lVar14 + 0x7c) = *(undefined1 *)(param_1 + 0x13687);
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x10130) + 0x48);
      if (lVar13 == 0) {
        if (*(char *)(param_1 + 0x13687) == '\0') {
          uVar15 = *(undefined8 *)(param_1 + 0x10150);
        }
        else {
          uVar15 = *(undefined8 *)(param_1 + 0x10158);
        }
        thunk_FUN_182f810f0(plVar19,uVar15);
        plVar26 = *(longlong **)*plVar19;
        *plVar26 = param_1 + 0x102e8;
        plVar26[1] = param_1 + 0x12ae8;
        plVar26[0x135] = *(longlong *)(param_1 + 0x10150);
        *(undefined4 *)(plVar26 + 0x131) = *(undefined4 *)(*(longlong *)(param_1 + 0x10150) + 0xf8);
        uVar12 = thunk_FUN_182f3ae80(plVar26);
        *(undefined4 *)((longlong)plVar26 + 0x98c) = uVar12;
      }
      else {
        *plVar19 = lVar13;
        *(undefined8 *)(*(longlong *)(param_1 + 0x10130) + 0x48) =
             *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10130) + 0x48) + 0x18);
        thunk_FUN_182f81d10(plVar19);
        if (*(char *)(param_1 + 0x13687) == '\0') {
          lVar13 = *(longlong *)(param_1 + 0x10150);
        }
        else {
          lVar13 = *(longlong *)(param_1 + 0x10158);
        }
        plVar19[0x85e] = lVar13;
        if (*(char *)(param_1 + 0x13687) == '\0') {
          *(undefined8 *)(*plVar19 + 0x10) = *(undefined8 *)(param_1 + 0x10150);
        }
        else {
          *(undefined8 *)(*plVar19 + 0x10) = *(undefined8 *)(param_1 + 0x10158);
        }
      }
      if ((*(longlong *)(*(longlong *)(param_1 + 0x10150) + 0x378) != 0) &&
         (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x348) != 0)) {
        plVar19[6] = plVar19[0x9e6];
        plVar19[5] = plVar19[0x9e7];
        if (*(char *)(*(longlong *)(param_1 + 0x10160) + 0x1d) != '\0') {
          uVar29 = 0;
          if ((int)plVar19[0x867] != 0) {
            do {
              lVar33 = uVar29 * 0x38;
              *(undefined4 *)(*(longlong *)(*plVar19 + 0x78) + 0xc + lVar33) =
                   *(undefined4 *)(plVar19[0x966] + uVar29 * 4);
              lVar13 = uVar29 * 4;
              uVar34 = (int)uVar29 + 1;
              uVar29 = (ulonglong)uVar34;
              *(undefined4 *)(*(longlong *)(*plVar19 + 0x78) + 8 + lVar33) =
                   *(undefined4 *)(plVar19[0x965] + lVar13);
            } while (uVar34 < *(uint *)(plVar19 + 0x867));
          }
          uVar29 = 0;
          if (*(int *)((longlong)plVar19 + 0x430c) != 0) {
            do {
              *(undefined4 *)(*(longlong *)(*plVar19 + 0x70) + 8 + uVar29 * 0x48) =
                   *(undefined4 *)(plVar19[0x964] + uVar29 * 4);
              uVar34 = (int)uVar29 + 1;
              *(undefined4 *)(*(longlong *)(*plVar19 + 0x70) + 4 + uVar29 * 0x48) =
                   *(undefined4 *)(plVar19[0x963] + uVar29 * 4);
              uVar29 = (ulonglong)uVar34;
            } while (uVar34 < *(uint *)((longlong)plVar19 + 0x430c));
          }
        }
      }
      if ((*(int *)(*(longlong *)(param_1 + 0x10150) + 0x104) == 4) &&
         (*(int *)((longlong)plVar19 + 0xf4) != 5)) {
        uVar34 = *(uint *)(*(longlong *)(param_1 + 0x10150) + 0xb4);
        lVar13 = 0x568;
        iVar11 = 0;
        lVar33 = (longlong)
                 (int)(((*(int *)(*(longlong *)(*plVar19 + 0x20) + 0x34) + -1 + uVar34) / uVar34) *
                       uVar34 + (uVar34 + 0x10) * 2);
        do {
          uVar15 = thunk_FUN_182d8fc00(*(longlong *)(plVar19[1] + 0x38) * lVar33 * 4);
          *(undefined8 *)(lVar13 + *plVar19) = uVar15;
          if (*(void **)(lVar13 + *plVar19) == (void *)0x0) {
            thunk_FUN_182d8f720(*(undefined8 *)(param_1 + 0x10150),&DAT_18393797c,0,
                                "SEA motion search: POC %d Integral buffer[%d] unallocated\n",
                                (int)plVar19[3],iVar11);
          }
          else {
            memset(*(void **)(lVar13 + *plVar19),0,*(longlong *)(plVar19[1] + 0x38) * lVar33 * 4);
            lVar3 = *plVar19;
            *(longlong *)(lVar3 + -0x60 + lVar13) =
                 *(longlong *)(lVar3 + lVar13) +
                 (*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0x38) * (longlong)(int)(uVar34 + 0x10)
                 + (longlong)(int)(uVar34 + 0x20)) * 4;
          }
          iVar11 = iVar11 + 1;
          lVar13 = lVar13 + 8;
          plVar17 = local_d38;
        } while (iVar11 < 0xc);
      }
      if (((*(int *)(*(longlong *)(param_1 + 0x10150) + 0x2b8) != 0) &&
          (*(char *)((longlong)plVar19 + 0x105) != '\0')) &&
         (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x6c) != 0)) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13690));
        iVar11 = 0;
        if (0 < *(int *)(param_1 + 0x136b8)) {
          lVar13 = *(longlong *)(param_1 + 0x136c0);
          iVar27 = 1;
          plVar26 = (longlong *)(param_1 + 0x136c8);
          do {
            if (*plVar26 < lVar13) {
              lVar13 = *plVar26;
              iVar11 = iVar27;
            }
            iVar27 = iVar27 + 1;
            plVar26 = plVar26 + 1;
          } while (iVar27 < 0x46);
          if (1 < *(int *)(param_1 + 0x136b8)) {
            *(int *)(param_1 + 0x136bc) = iVar11 + -0x19;
          }
          *(undefined4 *)(param_1 + 0x136b8) = 0;
        }
        lVar13 = 8;
        puVar30 = (undefined8 *)(param_1 + 0x136c0);
        do {
          puVar20 = puVar30;
          *puVar20 = 0;
          puVar20[1] = 0;
          puVar20[2] = 0;
          puVar20[3] = 0;
          puVar20[4] = 0;
          puVar20[5] = 0;
          puVar20[6] = 0;
          puVar20[7] = 0;
          lVar13 = lVar13 + -1;
          puVar30 = puVar20 + 8;
        } while (lVar13 != 0);
        puVar20[8] = 0;
        puVar20[9] = 0;
        puVar20[10] = 0;
        puVar20[0xb] = 0;
        puVar20[0xc] = 0;
        puVar20[0xd] = 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13690));
      }
      *(undefined4 *)(*(longlong *)*plVar19 + 0x994) = *(undefined4 *)(param_1 + 0x136bc);
      *(undefined4 *)(*(longlong *)*plVar19 + 0x998) = *(undefined4 *)(param_1 + 0x12b08);
      *(undefined4 *)(*(longlong *)*plVar19 + 0x99c) = *(undefined4 *)(param_1 + 0x12b0c);
      *(undefined4 *)(*(longlong *)*plVar19 + 0x9a0) = *(undefined4 *)(param_1 + 0x12a58);
      uVar12 = *(undefined4 *)(param_1 + 0x10074);
      *(undefined4 *)((longlong)plVar19 + 0x1c) = uVar12;
      *(undefined4 *)(lVar14 + 0x26c) = uVar12;
      *(int *)(param_1 + 0x10074) = *(int *)(param_1 + 0x10074) + 1;
      if ((*(longlong *)(*(longlong *)(param_1 + 0x10150) + 0x378) == 0) ||
         (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x348) == 0)) {
        iVar11 = *(int *)(param_1 + 0x1007c);
        if (iVar11 == 0) {
          plVar19[6] = plVar19[5];
        }
        else {
          if (iVar11 < *(int *)(param_1 + 0x10074)) {
            lVar13 = *(longlong *)
                      (param_1 + 0x10058 +
                      (longlong)((*(int *)(param_1 + 0x10074) - iVar11) % iVar11) * 8);
          }
          else {
            lVar13 = plVar19[5] - *(longlong *)(param_1 + 0x10050);
          }
          plVar19[6] = lVar13;
          *(longlong *)
           (param_1 + 0x10058 +
           (longlong)(*(int *)(param_1 + 0x10074) % *(int *)(param_1 + 0x1007c)) * 8) = plVar19[5];
        }
      }
      if ((*(longlong *)(*(longlong *)(param_1 + 0x10150) + 0x370) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x10150) + 0x378) == 0)) {
        *(int *)((longlong)plVar19 + 0x4304) = (int)plVar19[3];
        *(undefined4 *)(plVar19 + 0x861) = *(undefined4 *)((longlong)plVar19 + 0xf4);
        lVar13 = *(longlong *)(param_1 + 0x10150);
        iVar11 = *(int *)(lVar13 + 0xb4);
        iVar27 = *(int *)(lVar13 + 0x48);
        bVar21 = (byte)*(undefined4 *)(lVar13 + 0x324);
        uVar34 = (uint)(*(int *)(lVar13 + 0x4c) + -1 + iVar11) >> (bVar21 & 0x1f);
        *(uint *)(plVar19 + 0x867) = uVar34;
        *(uint *)((longlong)plVar19 + 0x430c) =
             ((uint)(iVar11 + -1 + iVar27) >> (bVar21 & 0x1f)) * uVar34;
        *(undefined4 *)(plVar19 + 0x862) = *(undefined4 *)(*(longlong *)(param_1 + 0x10150) + 0x330)
        ;
        thunk_FUN_182da8730(param_1);
      }
      thunk_FUN_182f8ca70(*(undefined8 *)(param_1 + 0x10130),plVar19);
      if (*(int *)(*(longlong *)(param_1 + 0x10150) + 400) != 1) {
        thunk_FUN_182f870d0(*(undefined8 *)(param_1 + 0x10168),plVar19);
      }
      if (*(int *)(*(longlong *)(param_1 + 0x10150) + 0xb0) != 0) {
        thunk_FUN_182da8e00(param_1,plVar19);
      }
      cVar10 = thunk_FUN_182d99a90(lVar14);
      if (cVar10 == '\0') {
        *(undefined1 *)(param_1 + 0x13686) = 1;
      }
    }
  } while ((*(char *)(param_1 + 0x13685) != '\0') && (iVar32 = iVar32 + 1, iVar32 < 2));
  return (ulonglong)local_res20;
}


