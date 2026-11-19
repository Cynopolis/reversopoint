/* 0x1829ace60 size=0x1b45
   CloseHandle
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1829ace60(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  void *pvVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  char *pcVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  byte bVar20;
  byte *pbVar21;
  undefined8 *puVar22;
  undefined4 *puVar23;
  longlong *plVar24;
  longlong *plVar25;
  uint uVar26;
  longlong lVar27;
  undefined8 *puVar28;
  longlong *plVar29;
  size_t _Size;
  uint uVar30;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  undefined1 auStack_da8 [32];
  int local_d88;
  undefined8 *local_d80;
  uint local_d78;
  ulonglong local_d70;
  uint local_d68;
  longlong *local_d60;
  undefined8 local_d58;
  undefined8 uStack_d50;
  undefined8 local_d48;
  int local_d34;
  longlong *local_d30;
  int local_d28;
  undefined4 uStack_d24;
  void *pvStack_d20;
  undefined8 local_d18;
  undefined8 local_d08;
  void *pvStack_d00;
  undefined8 local_cf8;
  undefined8 local_ce8 [402];
  ulonglong local_58;
  void *pvVar31;
  
  local_d18 = 0xfffffffffffffffe;
  local_58 = DAT_183dc69c0 ^ (ulonglong)auStack_da8;
  if (*(char *)((longlong)param_1 + 0x13686) == '\0') {
    pvVar11 = (void *)0x0;
    uVar30 = 0;
    local_d60 = param_1;
    local_d30 = param_3;
    if (*(longlong *)((longlong)param_1 + 0x10138) != 0) {
      if ((*(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x334) == 0) &&
         (*(longlong *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x370) != 0)) {
        thunk_FUN_1829b0750(param_1,*(longlong *)((longlong)param_1 + 0x10138) + 0x42f8);
      }
      LOCK();
      piVar1 = (int *)(*(longlong *)((longlong)param_1 + 0x10138) + 0x42dc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      *(undefined8 *)((longlong)param_1 + 0x10138) = 0;
      thunk_FUN_182d8f470(*(undefined8 *)((longlong)param_1 + 0x10130));
    }
    if (param_2 == (undefined8 *)0x0) {
      if (*(int *)(*(longlong *)((longlong)param_1 + 0x10158) + 0x340) == 2) {
        *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x10168) + 0x146) = 1;
      }
      else {
        thunk_FUN_182d892e0(*(undefined8 *)((longlong)param_1 + 0x10168));
      }
    }
    else {
      if (*(int *)(*(longlong *)((longlong)param_1 + 0x10158) + 0x340) == 1) {
        thunk_FUN_182d8b090(*(undefined8 *)((longlong)param_1 + 0x10168));
        *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x10158) + 0x340) = 0;
      }
      if (*(int *)(*(longlong *)((longlong)param_1 + 0x10158) + 0x340) == 2) {
        *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x10168) + 0x146) = 0;
        *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x10158) + 0x340) = 0;
      }
      pvStack_d20 = (void *)0x0;
      if ((*(int *)((longlong)param_1 + 0x13b60) != 0) &&
         (iVar8 = *(int *)((longlong)param_1 + 0x10070) + 1,
         iVar8 < *(int *)((longlong)param_1 + 0x13b78))) {
        uVar26 = 0;
        pbVar2 = *(byte **)(*(longlong *)((longlong)param_1 + 0x13b70) + (longlong)iVar8 * 8);
        if (*pbVar2 == 0xff) {
          bVar20 = 0xff;
          pbVar21 = pbVar2;
          pvVar31 = pvVar11;
          do {
            uVar26 = (int)pvVar11 + (uint)bVar20;
            pvVar11 = (void *)(ulonglong)uVar26;
            uVar30 = (int)pvVar31 + 1;
            pvVar31 = (void *)(ulonglong)uVar30;
            pbVar21 = pbVar21 + 1;
            bVar20 = *pbVar21;
          } while (bVar20 == 0xff);
        }
        local_d28 = uVar26 + pbVar2[(int)uVar30];
        _Size = (size_t)local_d28;
        pvVar11 = (void *)FUN_180013282(_Size);
        uStack_d24 = 4;
        pvStack_d20 = pvVar11;
        memcpy(pvVar11,(void *)((longlong)(int)(uVar30 + 1) +
                               *(longlong *)
                                (*(longlong *)((longlong)param_1 + 0x13b70) + (longlong)iVar8 * 8)),
               _Size);
      }
      lVar12 = 0;
      local_d88 = *(int *)((longlong)param_2 + 0x3c);
      if (8 < local_d88 - 8U) {
        thunk_FUN_18299c2b0(*(undefined8 *)((longlong)param_1 + 0x10150),&DAT_18393797c,0,
                            "Input bit depth (%d) must be between 8 and 16\n");
        goto LAB_1829ad9cb;
      }
      if (*(int *)(*(longlong *)((longlong)param_1 + 0x10130) + 0x40) == 0) {
        local_d70 = thunk_FUN_183196718(0x5000);
        if (local_d70 != 0) {
          lVar12 = thunk_FUN_182d83870(local_d70);
        }
        uVar13 = thunk_FUN_18299c7f0();
        *(undefined8 *)(lVar12 + 0x4fc0) = uVar13;
        if ((*(char *)((longlong)param_1 + 0x13687) == '\0') &&
           (*(char *)((longlong)param_1 + 0x13688) == '\0')) {
          uVar13 = *(undefined8 *)((longlong)param_1 + 0x10150);
        }
        else {
          uVar13 = *(undefined8 *)((longlong)param_1 + 0x10158);
        }
        cVar7 = thunk_FUN_182d83cc0(lVar12,uVar13,param_2[0x19c]);
        if (cVar7 == '\0') {
LAB_1829ad106:
          *(undefined1 *)((longlong)param_1 + 0x13686) = 1;
          thunk_FUN_18299c2b0(*(undefined8 *)((longlong)param_1 + 0x10150),&DAT_18393797c,0,
                              "memory allocation failure, aborting encode\n");
          thunk_FUN_182d842d0(lVar12);
          CloseHandle(*(HANDLE *)(lVar12 + 0x4fb0));
          CloseHandle(*(HANDLE *)(lVar12 + 0x4fa0));
          FUN_18001e0e2(lVar12,0x5000);
          return 0xffffffffffffffff;
        }
        if (*(longlong *)((longlong)param_1 + 0x102e8) == 0) {
          cVar7 = thunk_FUN_182d3d960(*(undefined8 *)(lVar12 + 0x10),(longlong)param_1 + 0x102e8);
          if (cVar7 == '\0') goto LAB_1829ad106;
          *(undefined8 *)((longlong)param_1 + 0x102e8) =
               *(undefined8 *)(*(longlong *)(lVar12 + 0x10) + 0x58);
          *(undefined8 *)((longlong)param_1 + 0x102f8) =
               *(undefined8 *)(*(longlong *)(lVar12 + 0x10) + 0x68);
          if (*(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x3c) != 0) {
            *(undefined8 *)((longlong)param_1 + 0x102f0) =
                 *(undefined8 *)(*(longlong *)(lVar12 + 0x10) + 0x60);
            *(undefined8 *)((longlong)param_1 + 0x102e8) =
                 *(undefined8 *)(*(longlong *)(lVar12 + 0x10) + 0x58);
            *(undefined8 *)((longlong)param_1 + 0x10300) =
                 *(undefined8 *)(*(longlong *)(lVar12 + 0x10) + 0x70);
            *(undefined8 *)((longlong)param_1 + 0x102f8) =
                 *(undefined8 *)(*(longlong *)(lVar12 + 0x10) + 0x68);
          }
        }
        else {
          *(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x58) =
               *(longlong *)((longlong)param_1 + 0x102e8);
          *(undefined8 *)(*(longlong *)(lVar12 + 0x10) + 0x68) =
               *(undefined8 *)((longlong)param_1 + 0x102f8);
          if (*(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x3c) != 0) {
            *(undefined8 *)(*(longlong *)(lVar12 + 0x10) + 0x60) =
                 *(undefined8 *)((longlong)param_1 + 0x102f0);
            *(undefined8 *)(*(longlong *)(lVar12 + 0x10) + 0x70) =
                 *(undefined8 *)((longlong)param_1 + 0x10300);
          }
        }
      }
      else {
        lVar12 = thunk_FUN_182d84980(*(longlong *)((longlong)param_1 + 0x10130) + 0x30);
        uVar13 = thunk_FUN_18299c7f0();
        *(undefined8 *)(lVar12 + 0x4fc0) = uVar13;
        *(undefined1 *)(lVar12 + 0x104) = 0;
        *(undefined8 *)(lVar12 + 0x1fc8) = 0xffffffffffffffff;
        *(undefined1 *)(lVar12 + 0x42a8) = 0;
      }
      local_d88 = *(int *)((longlong)param_1 + 0x12a74);
      thunk_FUN_182d3cc00(*(undefined8 *)(lVar12 + 0x10),param_2,
                          *(undefined8 *)((longlong)param_1 + 0x10150),
                          *(undefined4 *)((longlong)param_1 + 0x12a6c));
      *(int *)((longlong)param_1 + 0x10070) = *(int *)((longlong)param_1 + 0x10070) + 1;
      *(undefined4 *)(lVar12 + 0x18) = *(undefined4 *)((longlong)param_1 + 0x10070);
      *(undefined8 *)(lVar12 + 0x40) = param_2[2];
      *(undefined8 *)(lVar12 + 0x20) = *param_2;
      *(undefined4 *)(lVar12 + 0x38) = *(undefined4 *)((longlong)param_2 + 0x4c);
      if ((*(char *)((longlong)param_1 + 0x13687) == '\0') &&
         (*(char *)((longlong)param_1 + 0x13688) == '\0')) {
        uVar13 = *(undefined8 *)((longlong)param_1 + 0x10150);
      }
      else {
        uVar13 = *(undefined8 *)((longlong)param_1 + 0x10158);
      }
      *(undefined8 *)(lVar12 + 0x42f0) = uVar13;
      local_d78 = 0;
      if (*(int *)((longlong)param_1 + 0x13b60) != 0) {
        local_d78 = (uint)(pvVar11 != (void *)0x0);
      }
      iVar8 = *(int *)(param_2 + 0x213) + local_d78;
      *(int *)(lVar12 + 0x42b8) = iVar8;
      if (iVar8 != 0) {
        uVar33 = (ulonglong)iVar8;
        local_d70 = uVar33;
        if (*(longlong *)(lVar12 + 0x42c0) == 0) {
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar33;
          uVar13 = SUB168(ZEXT816(0x10) * auVar4,0);
          if (SUB168(ZEXT816(0x10) * auVar4,8) != 0) {
            uVar13 = 0xffffffffffffffff;
          }
          uVar13 = thunk_FUN_183196718(uVar13);
          *(undefined8 *)(lVar12 + 0x42c0) = uVar13;
          lVar27 = 0;
          if (0 < iVar8) {
            do {
              *(undefined8 *)(lVar27 + 8 + *(longlong *)(lVar12 + 0x42c0)) = 0;
              lVar27 = lVar27 + 0x10;
              uVar33 = uVar33 - 1;
            } while (uVar33 != 0);
          }
        }
        pvVar11 = pvStack_d20;
        uVar30 = local_d78;
        uVar33 = 0;
        if (0 < iVar8) {
          uVar13 = CONCAT44(uStack_d24,local_d28);
          uVar32 = uVar33;
          do {
            if (((int)uVar32 == iVar8 + -1) && (uVar30 != 0)) {
              uStack_d50 = pvVar11;
              local_d58 = uVar13;
            }
            else {
              local_d58 = *(undefined8 *)(param_2[0x214] + uVar33);
              uStack_d50 = (void *)((undefined8 *)(param_2[0x214] + uVar33))[1];
            }
            iVar9 = (int)local_d58;
            *(int *)(uVar33 + *(longlong *)(lVar12 + 0x42c0)) = iVar9;
            *(int *)(uVar33 + 4 + *(longlong *)(lVar12 + 0x42c0)) =
                 (int)((ulonglong)local_d58 >> 0x20);
            if (*(longlong *)(uVar33 + 8 + *(longlong *)(lVar12 + 0x42c0)) == 0) {
              uVar14 = thunk_FUN_183196718((longlong)iVar9);
              *(undefined8 *)(uVar33 + 8 + *(longlong *)(lVar12 + 0x42c0)) = uVar14;
            }
            memcpy(*(void **)(uVar33 + 8 + *(longlong *)(lVar12 + 0x42c0)),uStack_d50,
                   (longlong)iVar9);
            uVar32 = (ulonglong)((int)uVar32 + 1);
            uVar33 = uVar33 + 0x10;
            local_d70 = local_d70 - 1;
          } while (local_d70 != 0);
          local_d70 = 0;
          param_1 = local_d60;
          param_3 = local_d30;
        }
        if (pvStack_d20 != (void *)0x0) {
          thunk_FUN_18299c7d0();
        }
      }
      if ((void *)param_2[0x19c] != (void *)0x0) {
        if (*(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x234) == 8) {
          iVar8 = *(int *)(lVar12 + 0x2c44) * *(int *)(lVar12 + 0x2c40);
        }
        else {
          iVar8 = *(int *)(lVar12 + 0x2c3c) * *(int *)(lVar12 + 0x2c38);
        }
        memcpy(*(void **)(lVar12 + 0x42b0),(void *)param_2[0x19c],(longlong)iVar8 << 2);
      }
      if (*(int *)((longlong)param_1 + 0x10070) == 0) {
        *(undefined8 *)((longlong)param_1 + 0x10048) = *(undefined8 *)(lVar12 + 0x20);
      }
      if ((*(int *)((longlong)param_1 + 0x1007c) != 0) &&
         (*(int *)((longlong)param_1 + 0x10070) == *(int *)((longlong)param_1 + 0x1007c))) {
        *(longlong *)((longlong)param_1 + 0x10050) =
             *(longlong *)(lVar12 + 0x20) - *(longlong *)((longlong)param_1 + 0x10048);
      }
      LOCK();
      *(int *)(lVar12 + 0x42dc) = *(int *)(lVar12 + 0x42dc) + 1;
      UNLOCK();
      lVar27 = *(longlong *)((longlong)param_1 + 0x10150);
      if (((((*(int *)(lVar27 + 0x1c4) != 0) || (*(int *)(lVar27 + 0x114) != 0)) ||
           (*(int *)(lVar27 + 0x118) != 0)) &&
          ((*(int *)(lVar27 + 0x1e0) != 0 && (*(int *)(lVar27 + 0x1fc) != 0)))) &&
         (cVar7 = thunk_FUN_182d78320(*(undefined8 *)((longlong)param_1 + 0x10160),lVar12),
         cVar7 == '\0')) {
        *(undefined1 *)((longlong)param_1 + 0x13686) = 1;
        return 0xffffffffffffffff;
      }
      if (*(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x1fc) != 0) {
        thunk_FUN_182d7d3e0(*(undefined8 *)((longlong)param_1 + 0x10160),
                            *(undefined4 *)(lVar12 + 0x18));
      }
      if (*(longlong *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x378) != 0) {
        iVar8 = DAT_1847e325c;
        if (*(int *)(lVar12 + 0x18) == 0) {
          lVar27 = 0x19;
          puVar28 = param_2 + 10;
          puVar19 = local_ce8;
          do {
            puVar22 = puVar19;
            puVar15 = puVar28;
            uVar13 = puVar15[1];
            *puVar22 = *puVar15;
            puVar22[1] = uVar13;
            uVar13 = puVar15[3];
            puVar22[2] = puVar15[2];
            puVar22[3] = uVar13;
            uVar13 = puVar15[5];
            puVar22[4] = puVar15[4];
            puVar22[5] = uVar13;
            uVar13 = puVar15[7];
            puVar22[6] = puVar15[6];
            puVar22[7] = uVar13;
            uVar13 = puVar15[9];
            puVar22[8] = puVar15[8];
            puVar22[9] = uVar13;
            uVar13 = puVar15[0xb];
            puVar22[10] = puVar15[10];
            puVar22[0xb] = uVar13;
            uVar13 = puVar15[0xd];
            puVar22[0xc] = puVar15[0xc];
            puVar22[0xd] = uVar13;
            uVar13 = puVar15[0xf];
            puVar22[0xe] = puVar15[0xe];
            puVar22[0xf] = uVar13;
            lVar27 = lVar27 + -1;
            puVar28 = puVar15 + 0x10;
            puVar19 = puVar22 + 0x10;
          } while (lVar27 != 0);
          uVar13 = puVar15[0x11];
          puVar22[0x10] = puVar15[0x10];
          puVar22[0x11] = uVar13;
          iVar8 = thunk_FUN_1829b8780(param_1,local_ce8,0);
          DAT_1847e325c = iVar8;
          if (iVar8 == -1) {
            *(undefined1 *)((longlong)param_1 + 0x13686) = 1;
          }
        }
        local_d88 = iVar8;
        if (*(char *)((longlong)param_1 + 0x13bd8) == '\0') {
          thunk_FUN_1829b3910(param_1,lVar12 + 0x42f8,*(undefined4 *)(lVar12 + 0x18),param_2);
        }
        else {
          lVar27 = *(longlong *)((longlong)param_1 + 0x10150);
          bVar20 = (byte)*(undefined4 *)(lVar27 + 0x324);
          local_d58 = CONCAT44((uint)(*(int *)(lVar27 + 0x4c) + -1 + *(int *)(lVar27 + 0xb4)) >>
                               (bVar20 & 0x1f),(undefined4)local_d58);
          uVar30 = (uint)(*(int *)(lVar27 + 0xb4) + -1 + *(int *)(lVar27 + 0x48)) >> (bVar20 & 0x1f)
          ;
          local_d48 = 0;
          uStack_d50 = (void *)CONCAT44(*(int *)(lVar27 + 0x330) * uVar30,uVar30);
          iVar8 = *(int *)(lVar27 + 0x4c) / 2;
          uVar30 = *(uint *)(lVar27 + 0xb4);
          bVar20 = (byte)*(undefined4 *)(lVar27 + 0x324);
          iVar9 = *(int *)(lVar27 + 0x48) / 2;
          local_d58._0_2_ =
               CONCAT11(uVar30 <= ((iVar8 + -1 + uVar30 >> (bVar20 & 0x1f)) * uVar30 - iVar8) * 2,
                        uVar30 <= (((uVar30 - 1) + iVar9 >> (bVar20 & 0x1f)) * uVar30 - iVar9) * 2);
          local_d08 = local_d58;
          pvStack_d00 = uStack_d50;
          local_cf8 = 0;
          local_d80 = &local_d08;
          thunk_FUN_1829b5220(param_1,lVar12 + 0x42f8,*(undefined4 *)(lVar12 + 0x18),param_2);
        }
        *(undefined4 *)(lVar12 + 0x18) = *(undefined4 *)(lVar12 + 0x4304);
        *(bool *)(lVar12 + 0x104) = *(int *)(lVar12 + 0x4318) != 0;
        *(undefined8 *)(lVar12 + 0x1fc8) = *(undefined8 *)(lVar12 + 0x42f8);
        if (*(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x348) != 0) {
          *(undefined4 *)(lVar12 + 0xf4) = *(undefined4 *)(lVar12 + 0x4308);
          *(bool *)(lVar12 + 0x105) = *(int *)(lVar12 + 0x4b38) != 0;
          *(bool *)(lVar12 + 0x106) = *(int *)(lVar12 + 0x4b3c) != 0;
          if ((*(char *)(*(longlong *)((longlong)param_1 + 0x10160) + 0x1d) != '\0') &&
             (iVar8 = *(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0xa4) + 2 +
                      *(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x94),
             lVar27 = (longlong)iVar8, 0 < iVar8)) {
            puVar23 = (undefined4 *)(lVar12 + 0x2c48);
            puVar28 = (undefined8 *)(lVar12 + 0x3038);
            do {
              *puVar28 = puVar28[0x261];
              *puVar23 = puVar23[0x7be];
              puVar28 = puVar28 + 1;
              puVar23 = puVar23 + 1;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
          }
        }
      }
      if ((*(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x310) != 0) &&
         (lVar27 = param_2[0x215], lVar27 != 0)) {
        *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10160) + 0x198) =
             *(undefined8 *)(lVar27 + 0x48);
        *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10160) + 0x1a0) =
             *(undefined8 *)(lVar27 + 0x50);
        *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x10160) + 0x22) = 1;
        *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10160) + 0x1a8) =
             *(undefined8 *)(lVar27 + 0x58);
        *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10160) + 0x1b0) =
             *(undefined8 *)(lVar27 + 0x60);
        *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10160) + 0x1b8) =
             *(undefined8 *)(lVar27 + 0x68);
        *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10160) + 400) =
             *(undefined8 *)(lVar27 + 0x90);
        *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10160) + 0x188) =
             *(undefined8 *)(lVar27 + 0x98);
        *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10160) + 0x218) =
             *(undefined8 *)(lVar27 + 0xb0);
        *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10160) + 0x220) =
             *(undefined8 *)(lVar27 + 0xb8);
        *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10160) + 0x1f8) =
             *(undefined8 *)(lVar27 + 0xa0);
        *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10160) + 0x200) =
             *(undefined8 *)(lVar27 + 0xa8);
        if (*(char *)(*(longlong *)((longlong)param_1 + 0x10160) + 0x1d) != '\0') {
          *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10160) + 0x50) =
               *(undefined8 *)(lVar27 + 0x120);
          *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10160) + 0xa8) =
               *(undefined8 *)(lVar27 + 0xc0);
          *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10160) + 0xb0) =
               *(undefined8 *)(lVar27 + 0xe0);
          *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10160) + 0xc0) =
               *(undefined8 *)(lVar27 + 0x100);
          *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10160) + 0xd0) =
               *(undefined8 *)(lVar27 + 200);
          *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10160) + 0xd8) =
               *(undefined8 *)(lVar27 + 0xe8);
          *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10160) + 0xe8) =
               *(undefined8 *)(lVar27 + 0x108);
          *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10160) + 0xf8) =
               *(undefined8 *)(lVar27 + 0xd0);
          *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10160) + 0x100) =
               *(undefined8 *)(lVar27 + 0xf0);
          *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10160) + 0x110) =
               *(undefined8 *)(lVar27 + 0x110);
          *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10160) + 0x120) =
               *(undefined8 *)(lVar27 + 0xd8);
          *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10160) + 0x128) =
               *(undefined8 *)(lVar27 + 0xf8);
          *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10160) + 0x138) =
               *(undefined8 *)(lVar27 + 0x118);
        }
        *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x310) = 0;
      }
      if (*(char *)((longlong)param_1 + 0x13688) != '\0') {
        *(undefined1 *)(lVar12 + 0x42aa) = 1;
      }
      thunk_FUN_182d855c0(*(undefined8 *)((longlong)param_1 + 0x10168),lVar12);
      *(int *)((longlong)param_1 + 0x100a0) = *(int *)((longlong)param_1 + 0x100a0) + 1;
    }
    uVar33 = *(longlong *)
              ((longlong)param_1 + 0x100b0 + (longlong)*(int *)((longlong)param_1 + 0x10084) * 8);
    *(int *)((longlong)param_1 + 0x10084) =
         (*(int *)((longlong)param_1 + 0x10084) + 1) %
         *(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 4);
    local_d68 = 0;
    plVar16 = (longlong *)0x0;
    local_d60 = (longlong *)0x0;
    plVar18 = (longlong *)0x0;
    local_d78 = 0;
    local_d70 = uVar33;
    do {
      uVar30 = local_d78;
      if ((*(char *)((longlong)param_1 + 0x13685) == '\0') || (local_d78 != 0)) {
        plVar16 = (longlong *)thunk_FUN_1829a3030(uVar33);
        local_d60 = plVar16;
      }
      if (plVar16 != (longlong *)0x0) {
        lVar12 = *(longlong *)*plVar16;
        plVar25 = (longlong *)0x0;
        lVar27 = *(longlong *)((longlong)param_1 + 0x10150);
        if (((*(longlong *)(lVar27 + 0x378) != 0) && (*(longlong *)(lVar27 + 0x370) == 0)) ||
           ((*(int *)(lVar27 + 0x360) != 0 && (*(int *)(lVar12 + 0x8d8) != 2)))) {
          thunk_FUN_1829b0750(param_1,plVar16 + 0x85f);
        }
        if (param_3 != (longlong *)0x0) {
          lVar27 = plVar16[1];
          *(undefined4 *)((longlong)param_3 + 0x44) = *(undefined4 *)(lVar12 + 0x8e8);
          *(undefined4 *)((longlong)param_3 + 0x3c) = 8;
          param_3[2] = plVar16[8];
          *(undefined4 *)(param_3 + 9) =
               *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x3c);
          plVar25 = param_3 + 0x19d;
          *param_3 = plVar16[4];
          param_3[1] = plVar16[6];
          param_3[0x21a] = plVar16[5];
          *(undefined4 *)(param_3 + 8) = *(undefined4 *)((longlong)plVar16 + 0xf4);
          param_3[3] = *(longlong *)(lVar27 + 0x18);
          *(undefined4 *)(param_3 + 6) = *(undefined4 *)(lVar27 + 0x38);
          if (*(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x3c) != 0) {
            param_3[4] = *(longlong *)(lVar27 + 0x20);
            *(undefined4 *)((longlong)param_3 + 0x34) = *(undefined4 *)(lVar27 + 0x40);
            param_3[5] = *(longlong *)(lVar27 + 0x28);
            *(undefined4 *)(param_3 + 7) = *(undefined4 *)(lVar27 + 0x40);
          }
          if (*(longlong *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x370) != 0) {
            *(undefined4 *)((longlong)param_3 + 0x5c) = *(undefined4 *)((longlong)param_3 + 0x44);
            *(int *)(param_3 + 0xc) = (int)param_3[8];
            *(uint *)(param_3 + 0xe) = (uint)*(byte *)((longlong)plVar16 + 0x104);
            param_3[10] = plVar16[0x3f9];
            *(undefined4 *)((longlong)param_3 + 100) = *(undefined4 *)((longlong)plVar16 + 0x430c);
            *(int *)(param_3 + 0xd) = (int)plVar16[0x862];
            param_3[0xf] = plVar16[0x864];
            param_3[0x10] = plVar16[0x865];
            param_3[0x11] = plVar16[0x866];
            param_3[0x193] = plVar16[0x9e8];
            param_3[0x194] = plVar16[0x9e9];
            if (*(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x348) != 0) {
              iVar9 = 1;
              iVar8 = *(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x314);
              if (iVar8 != 0) {
                iVar9 = iVar8 * 2;
              }
              *(int *)(param_3 + 0x12) = (int)plVar16[0x867];
              param_3[0x191] = plVar16[6];
              param_3[0x192] = plVar16[5];
              param_3[10] = param_3[10] * (longlong)iVar9;
              *(uint *)(param_3 + 0x112) = (uint)*(byte *)((longlong)plVar16 + 0x105);
              *(uint *)((longlong)param_3 + 0x894) = (uint)*(byte *)((longlong)plVar16 + 0x106);
              if (*(char *)(*(longlong *)((longlong)param_1 + 0x10160) + 0x1d) != '\0') {
                iVar8 = *(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0xa4) + 2 +
                        *(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x94);
                lVar27 = (longlong)iVar8;
                if (0 < iVar8) {
                  plVar24 = param_3 + 0x113;
                  plVar29 = param_3 + 0x13;
                  do {
                    *plVar29 = *(longlong *)
                                ((longlong)plVar16 + (0x2fa0 - (longlong)param_3) +
                                (longlong)plVar29);
                    *(undefined4 *)plVar24 =
                         *(undefined4 *)
                          ((longlong)plVar16 + (0x23b0 - (longlong)param_3) + (longlong)plVar24);
                    plVar29 = plVar29 + 1;
                    plVar24 = (longlong *)((longlong)plVar24 + 4);
                    lVar27 = lVar27 + -1;
                  } while (lVar27 != 0);
                }
                uVar33 = 0;
                if ((int)param_3[0x12] != 0) {
                  do {
                    *(undefined4 *)(plVar16[0x966] + uVar33 * 4) =
                         *(undefined4 *)(*(longlong *)(*plVar16 + 0x78) + 0xc + uVar33 * 0x38);
                    *(undefined4 *)(plVar16[0x965] + uVar33 * 4) =
                         *(undefined4 *)(*(longlong *)(*plVar16 + 0x78) + 8 + uVar33 * 0x38);
                    uVar30 = (int)uVar33 + 1;
                    uVar33 = (ulonglong)uVar30;
                  } while (uVar30 < *(uint *)(param_3 + 0x12));
                }
                param_3[0x111] = plVar16[0x966];
                param_3[0x110] = plVar16[0x965];
                uVar33 = 0;
                if (*(int *)((longlong)param_3 + 100) != 0) {
                  do {
                    *(undefined4 *)(plVar16[0x964] + uVar33 * 4) =
                         *(undefined4 *)(*(longlong *)(*plVar16 + 0x70) + 8 + uVar33 * 0x48);
                    *(undefined4 *)(plVar16[0x963] + uVar33 * 4) =
                         *(undefined4 *)(*(longlong *)(*plVar16 + 0x70) + 4 + uVar33 * 0x48);
                    uVar30 = (int)uVar33 + 1;
                    uVar33 = (ulonglong)uVar30;
                  } while (uVar30 < *(uint *)((longlong)param_3 + 100));
                }
                param_3[0x10f] = plVar16[0x964];
                param_3[0x10e] = plVar16[0x963];
              }
            }
            thunk_FUN_1829b9810(param_1,param_3 + 10);
            uVar33 = local_d70;
            if (*(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x334) != 0) {
              thunk_FUN_1829b0750(param_1,param_3 + 10);
              uVar33 = local_d70;
            }
          }
        }
        lVar27 = *(longlong *)((longlong)param_1 + 0x10150);
        if ((*(int *)(lVar27 + 0x1f8) != 0) &&
           ((*(int *)(lVar27 + 0x2d8) != 0 || (*(int *)(lVar27 + 0x2dc) != 0)))) {
          if (param_3 != (longlong *)0x0) {
            *(undefined4 *)(param_3 + 0x218) = *(undefined4 *)((longlong)param_3 + 0x44);
            param_3[0x219] = plVar16[0x9f2];
          }
          thunk_FUN_1829b92d0(param_1,plVar16 + 0x9f1,*plVar16,
                              *(undefined4 *)((longlong)plVar16 + 0xf4));
        }
        if ((*(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x2d8) != 0) ||
           (*(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x2dc) != 0)) {
          thunk_FUN_1829b0610(param_1,plVar16 + 0x9f1);
        }
        iVar8 = *(int *)(lVar12 + 0x8d8);
        if (*(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x3c) == 0) {
          if (iVar8 == 1) {
            if (*(char *)(lVar12 + 0x23c) != '\0') {
              *(int *)((longlong)param_1 + 0x10088) = *(int *)((longlong)param_1 + 0x10088) + 1;
            }
          }
          else if ((iVar8 == 0) &&
                  ((*(char *)(lVar12 + 0x53c) != '\0' || (*(char *)(lVar12 + 0x23c) != '\0')))) {
            *(int *)((longlong)param_1 + 0x10090) = *(int *)((longlong)param_1 + 0x10090) + 1;
          }
        }
        else if (iVar8 == 1) {
          if (*(char *)(lVar12 + 0x23c) != '\0') {
            *(int *)((longlong)param_1 + 0x10088) = *(int *)((longlong)param_1 + 0x10088) + 1;
          }
          if ((*(char *)(lVar12 + 0x24c) != '\0') || (*(char *)(lVar12 + 0x25c) != '\0')) {
            *(int *)((longlong)param_1 + 0x1008c) = *(int *)((longlong)param_1 + 0x1008c) + 1;
          }
        }
        else if (iVar8 == 0) {
          bVar5 = false;
          bVar6 = false;
          pcVar17 = (char *)(lVar12 + 0x24c);
          lVar12 = 2;
          do {
            if (pcVar17[-0x10] != '\0') {
              bVar5 = true;
            }
            if ((*pcVar17 != '\0') || (pcVar17[0x10] != '\0')) {
              bVar6 = true;
            }
            pcVar17 = pcVar17 + 0x300;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          if (bVar5) {
            *(int *)((longlong)param_1 + 0x10090) = *(int *)((longlong)param_1 + 0x10090) + 1;
          }
          if (bVar6) {
            *(int *)((longlong)param_1 + 0x10094) = *(int *)((longlong)param_1 + 0x10094) + 1;
          }
        }
        uVar26 = 1;
        if (*(char *)((longlong)param_1 + 0x13686) != '\0') goto LAB_1829ad9cb;
        local_d88 = *(int *)((longlong)param_1 + 0x10070);
        thunk_FUN_1829af640(param_1,plVar16,uVar33,plVar25);
        if ((*(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x1f8) != 0) &&
           (iVar8 = thunk_FUN_182d81420(*(undefined8 *)((longlong)param_1 + 0x10160)), iVar8 != 0))
        {
          *(undefined1 *)((longlong)param_1 + 0x13686) = 1;
        }
        if (param_3 == (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar16 + 0x42dc) = *(int *)((longlong)plVar16 + 0x42dc) + -1;
          UNLOCK();
          thunk_FUN_182d8f470(*(undefined8 *)((longlong)param_1 + 0x10130));
        }
        else {
          param_3[0x215] = plVar16[0x9f3];
          *(undefined8 *)plVar16[0x9f3] = *(undefined8 *)(*plVar16 + 0x4e8);
          *(undefined8 *)(plVar16[0x9f3] + 0x10) = *(undefined8 *)(uVar33 + 0x200);
          *(undefined8 *)(plVar16[0x9f3] + 0x18) = *(undefined8 *)(uVar33 + 0x230);
          *(undefined4 *)(plVar16[0x9f3] + 0x78) = *(undefined4 *)(*plVar16 + 0x84);
          *(undefined4 *)(plVar16[0x9f3] + 0x74) = *(undefined4 *)(*plVar16 + 0x88);
          *(undefined4 *)(plVar16[0x9f3] + 0x70) = *(undefined4 *)(*plVar16 + 0x80);
          uVar13 = thunk_FUN_18299c8d0(*(undefined8 *)(*plVar16 + 0x4e8));
          *(undefined8 *)(plVar16[0x9f3] + 0x20) = uVar13;
          *(undefined8 *)(plVar16[0x9f3] + 0x40) = uVar13;
          *(undefined4 *)(plVar16[0x9f3] + 0x7c) = *(undefined4 *)(uVar33 + 0x268);
          *(undefined4 *)(plVar16[0x9f3] + 0x80) = *(undefined4 *)(uVar33 + 0x26c);
          *(undefined4 *)(plVar16[0x9f3] + 0x84) = *(undefined4 *)(uVar33 + 0x260);
          uVar30 = uVar26;
          if ((*(int *)(uVar33 + 0x260) == 0) && (*(int *)((longlong)plVar16 + 0xf4) == 5)) {
            uVar30 = 0;
          }
          *(uint *)(plVar16[0x9f3] + 0x88) = uVar30;
          *(undefined8 *)(plVar16[0x9f3] + 8) = *(undefined8 *)(*plVar16 + 0x4f0);
          *(double *)(plVar16[0x9f3] + 0x28) =
               (double)*(int *)(*(longlong *)((longlong)param_1 + 0x10160) + 0x14) *
               *(double *)(*plVar16 + 0x98);
          *(double *)(plVar16[0x9f3] + 0x30) =
               (double)*(int *)(*(longlong *)((longlong)param_1 + 0x10160) + 0x14) *
               *(double *)(*plVar16 + 0xa0);
          *(double *)(plVar16[0x9f3] + 0x38) =
               (double)*(int *)(*(longlong *)((longlong)param_1 + 0x10160) + 0x14) *
               *(double *)(*plVar16 + 0xa8);
          *(longlong **)((longlong)param_1 + 0x10138) = plVar16;
        }
        *(int *)((longlong)param_1 + 0x100a0) = *(int *)((longlong)param_1 + 0x100a0) + -1;
        uVar30 = local_d78;
        local_d68 = uVar26;
      }
      if (uVar30 == 0) {
        plVar18 = (longlong *)thunk_FUN_182d895c0(*(undefined8 *)((longlong)param_1 + 0x10168));
      }
      if ((plVar18 == (longlong *)0x0) || (uVar30 != 0)) {
        if (*(int *)((longlong)param_1 + 0x10074) != 0) {
          thunk_FUN_182d804a0(*(undefined8 *)((longlong)param_1 + 0x10160));
        }
      }
      else {
        if ((*(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x2d8) != 0) ||
           (*(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x2dc) != 0)) {
          thunk_FUN_1829a8430(param_1,plVar18 + 0x9f1,*(undefined4 *)((longlong)plVar18 + 0xf4));
          *(int *)(plVar18 + 0x9f1) = (int)plVar18[3];
          if (*(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x1fc) != 0) {
            thunk_FUN_1829b2e40(param_1,plVar18 + 0x9f1,(int)plVar18[3],
                                *(undefined4 *)((longlong)plVar18 + 0xf4));
          }
        }
        if (*(char *)((longlong)plVar18 + 0x42aa) != '\0') {
          if (*(char *)((longlong)param_1 + 0x13688) != '\0') {
            lVar12 = 7;
            puVar28 = *(undefined8 **)((longlong)param_1 + 0x10158);
            puVar19 = *(undefined8 **)((longlong)param_1 + 0x10150);
            do {
              puVar22 = puVar19;
              puVar15 = puVar28;
              uVar13 = puVar15[1];
              *puVar22 = *puVar15;
              puVar22[1] = uVar13;
              uVar13 = puVar15[3];
              puVar22[2] = puVar15[2];
              puVar22[3] = uVar13;
              uVar13 = puVar15[5];
              puVar22[4] = puVar15[4];
              puVar22[5] = uVar13;
              uVar13 = puVar15[7];
              puVar22[6] = puVar15[6];
              puVar22[7] = uVar13;
              uVar13 = puVar15[9];
              puVar22[8] = puVar15[8];
              puVar22[9] = uVar13;
              uVar13 = puVar15[0xb];
              puVar22[10] = puVar15[10];
              puVar22[0xb] = uVar13;
              uVar13 = puVar15[0xd];
              puVar22[0xc] = puVar15[0xc];
              puVar22[0xd] = uVar13;
              uVar13 = puVar15[0xf];
              puVar22[0xe] = puVar15[0xe];
              puVar22[0xf] = uVar13;
              lVar12 = lVar12 + -1;
              puVar28 = puVar15 + 0x10;
              puVar19 = puVar22 + 0x10;
            } while (lVar12 != 0);
            uVar13 = puVar15[0x11];
            puVar22[0x10] = puVar15[0x10];
            puVar22[0x11] = uVar13;
            uVar13 = puVar15[0x13];
            puVar22[0x12] = puVar15[0x12];
            puVar22[0x13] = uVar13;
            thunk_FUN_182d7f760(*(undefined8 *)((longlong)param_1 + 0x10160));
            *(undefined1 *)((longlong)param_1 + 0x13688) = 0;
          }
          if ((*(char *)((longlong)plVar18 + 0x42aa) != '\0') &&
             (*(char *)((longlong)param_1 + 0x13688) == '\0')) {
            *(undefined1 *)((longlong)plVar18 + 0x42aa) = 0;
          }
        }
        if (*(char *)(uVar33 + 0x7c) != '\0') {
          iVar8 = 0;
          if (0 < *(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 4)) {
            plVar25 = (longlong *)((longlong)param_1 + 0x100b0);
            do {
              *(undefined1 *)(*plVar25 + 0x7c) = 0;
              iVar8 = iVar8 + 1;
              plVar25 = plVar25 + 1;
            } while (iVar8 < *(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 4));
          }
          lVar12 = 7;
          puVar28 = *(undefined8 **)((longlong)param_1 + 0x10158);
          puVar19 = *(undefined8 **)((longlong)param_1 + 0x10150);
          do {
            puVar22 = puVar19;
            puVar15 = puVar28;
            uVar13 = puVar15[1];
            *puVar22 = *puVar15;
            puVar22[1] = uVar13;
            uVar13 = puVar15[3];
            puVar22[2] = puVar15[2];
            puVar22[3] = uVar13;
            uVar13 = puVar15[5];
            puVar22[4] = puVar15[4];
            puVar22[5] = uVar13;
            uVar13 = puVar15[7];
            puVar22[6] = puVar15[6];
            puVar22[7] = uVar13;
            uVar13 = puVar15[9];
            puVar22[8] = puVar15[8];
            puVar22[9] = uVar13;
            uVar13 = puVar15[0xb];
            puVar22[10] = puVar15[10];
            puVar22[0xb] = uVar13;
            uVar13 = puVar15[0xd];
            puVar22[0xc] = puVar15[0xc];
            puVar22[0xd] = uVar13;
            uVar13 = puVar15[0xf];
            puVar22[0xe] = puVar15[0xe];
            puVar22[0xf] = uVar13;
            lVar12 = lVar12 + -1;
            puVar28 = puVar15 + 0x10;
            puVar19 = puVar22 + 0x10;
          } while (lVar12 != 0);
          uVar13 = puVar15[0x11];
          puVar22[0x10] = puVar15[0x10];
          puVar22[0x11] = uVar13;
          uVar13 = puVar15[0x13];
          puVar22[0x12] = puVar15[0x12];
          puVar22[0x13] = uVar13;
          *(undefined1 *)((longlong)param_1 + 0x13687) = 0;
        }
        if (*(char *)((longlong)param_1 + 0x13687) == '\0') {
          uVar13 = *(undefined8 *)((longlong)param_1 + 0x10150);
        }
        else {
          uVar13 = *(undefined8 *)((longlong)param_1 + 0x10158);
        }
        *(undefined8 *)(uVar33 + 0x590) = uVar13;
        *(undefined1 *)(uVar33 + 0x7c) = *(undefined1 *)((longlong)param_1 + 0x13687);
        lVar12 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x10130) + 0x48);
        if (lVar12 == 0) {
          if (*(char *)((longlong)param_1 + 0x13687) == '\0') {
            uVar13 = *(undefined8 *)((longlong)param_1 + 0x10150);
          }
          else {
            uVar13 = *(undefined8 *)((longlong)param_1 + 0x10158);
          }
          thunk_FUN_182d83af0(plVar18,uVar13);
          plVar25 = *(longlong **)*plVar18;
          *plVar25 = (longlong)param_1 + 0x102e8;
          plVar25[1] = (longlong)param_1 + 0x12ae8;
          plVar25[0x135] = *(longlong *)((longlong)param_1 + 0x10150);
          *(undefined4 *)(plVar25 + 0x131) =
               *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x10150) + 0xf8);
          uVar10 = thunk_FUN_182d3e180(plVar25);
          *(undefined4 *)((longlong)plVar25 + 0x98c) = uVar10;
        }
        else {
          *plVar18 = lVar12;
          *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10130) + 0x48) =
               *(undefined8 *)
                (*(longlong *)(*(longlong *)((longlong)param_1 + 0x10130) + 0x48) + 0x18);
          thunk_FUN_182d846d0(plVar18);
          if (*(char *)((longlong)param_1 + 0x13687) == '\0') {
            lVar12 = *(longlong *)((longlong)param_1 + 0x10150);
          }
          else {
            lVar12 = *(longlong *)((longlong)param_1 + 0x10158);
          }
          plVar18[0x85e] = lVar12;
          if (*(char *)((longlong)param_1 + 0x13687) == '\0') {
            uVar13 = *(undefined8 *)((longlong)param_1 + 0x10150);
          }
          else {
            uVar13 = *(undefined8 *)((longlong)param_1 + 0x10158);
          }
          *(undefined8 *)(*plVar18 + 0x10) = uVar13;
        }
        if ((*(longlong *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x378) != 0) &&
           (*(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x348) != 0)) {
          plVar18[6] = plVar18[0x9e6];
          plVar18[5] = plVar18[0x9e7];
          if (*(char *)(*(longlong *)((longlong)param_1 + 0x10160) + 0x1d) != '\0') {
            uVar33 = 0;
            if ((int)plVar18[0x867] != 0) {
              do {
                *(undefined4 *)(*(longlong *)(*plVar18 + 0x78) + 0xc + uVar33 * 0x38) =
                     *(undefined4 *)(plVar18[0x966] + uVar33 * 4);
                *(undefined4 *)(*(longlong *)(*plVar18 + 0x78) + 8 + uVar33 * 0x38) =
                     *(undefined4 *)(plVar18[0x965] + uVar33 * 4);
                uVar30 = (int)uVar33 + 1;
                uVar33 = (ulonglong)uVar30;
              } while (uVar30 < *(uint *)(plVar18 + 0x867));
            }
            uVar33 = 0;
            if (*(int *)((longlong)plVar18 + 0x430c) != 0) {
              do {
                *(undefined4 *)(*(longlong *)(*plVar18 + 0x70) + 8 + uVar33 * 0x48) =
                     *(undefined4 *)(plVar18[0x964] + uVar33 * 4);
                *(undefined4 *)(*(longlong *)(*plVar18 + 0x70) + 4 + uVar33 * 0x48) =
                     *(undefined4 *)(plVar18[0x963] + uVar33 * 4);
                uVar30 = (int)uVar33 + 1;
                uVar33 = (ulonglong)uVar30;
              } while (uVar30 < *(uint *)((longlong)plVar18 + 0x430c));
            }
          }
        }
        if ((*(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x104) == 4) &&
           (*(int *)((longlong)plVar18 + 0xf4) != 5)) {
          uVar30 = *(uint *)(*(longlong *)((longlong)param_1 + 0x10150) + 0xb4);
          local_d34 = uVar30 + 0x20;
          iVar8 = 0;
          lVar27 = (longlong)
                   (int)(((*(int *)(*(longlong *)(*plVar18 + 0x20) + 0x34) + -1 + uVar30) / uVar30)
                         * uVar30 + (uVar30 + 0x10) * 2);
          lVar12 = 0x568;
          lVar34 = (longlong)local_d34;
          do {
            uVar13 = FUN_180013282(*(longlong *)(plVar18[1] + 0x38) * lVar27 * 4);
            *(undefined8 *)(lVar12 + *plVar18) = uVar13;
            if (*(void **)(lVar12 + *plVar18) == (void *)0x0) {
              local_d80 = (undefined8 *)CONCAT44(local_d80._4_4_,iVar8);
              local_d88 = (int)plVar18[3];
              thunk_FUN_18299c2b0(*(undefined8 *)((longlong)param_1 + 0x10150),&DAT_18393797c,0,
                                  "SEA motion search: POC %d Integral buffer[%d] unallocated\n");
            }
            else {
              memset(*(void **)(lVar12 + *plVar18),0,*(longlong *)(plVar18[1] + 0x38) * lVar27 * 4);
              lVar3 = *plVar18;
              *(longlong *)(lVar3 + -0x60 + lVar12) =
                   *(longlong *)(lVar3 + lVar12) +
                   (*(longlong *)(*(longlong *)(lVar3 + 0x20) + 0x38) *
                    (longlong)(int)(uVar30 + 0x10) + lVar34) * 4;
            }
            iVar8 = iVar8 + 1;
            lVar12 = lVar12 + 8;
            param_3 = local_d30;
            plVar16 = local_d60;
          } while (iVar8 < 0xc);
        }
        if (((*(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x2b8) != 0) &&
            (*(char *)((longlong)plVar18 + 0x105) != '\0')) &&
           (*(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x6c) != 0)) {
          EnterCriticalSection((LPCRITICAL_SECTION)((longlong)param_1 + 0x13690));
          iVar8 = 0;
          if (0 < *(int *)((longlong)param_1 + 0x136b8)) {
            lVar12 = *(longlong *)((longlong)param_1 + 0x136c0);
            iVar9 = 1;
            plVar25 = (longlong *)((longlong)param_1 + 0x136c8);
            do {
              if (*plVar25 < lVar12) {
                lVar12 = *plVar25;
                iVar8 = iVar9;
              }
              iVar9 = iVar9 + 1;
              plVar25 = plVar25 + 1;
            } while (iVar9 < 0x46);
            if (1 < *(int *)((longlong)param_1 + 0x136b8)) {
              *(int *)((longlong)param_1 + 0x136bc) = iVar8 + -0x19;
            }
            *(undefined4 *)((longlong)param_1 + 0x136b8) = 0;
          }
          lVar12 = 8;
          puVar28 = (undefined8 *)((longlong)param_1 + 0x136c0);
          do {
            puVar19 = puVar28;
            *puVar19 = 0;
            puVar19[1] = 0;
            puVar19[2] = 0;
            puVar19[3] = 0;
            puVar19[4] = 0;
            puVar19[5] = 0;
            puVar19[6] = 0;
            puVar19[7] = 0;
            lVar12 = lVar12 + -1;
            puVar28 = puVar19 + 8;
          } while (lVar12 != 0);
          puVar19[8] = 0;
          puVar19[9] = 0;
          puVar19[10] = 0;
          puVar19[0xb] = 0;
          puVar19[0xc] = 0;
          puVar19[0xd] = 0;
          LeaveCriticalSection((LPCRITICAL_SECTION)((longlong)param_1 + 0x13690));
        }
        uVar33 = local_d70;
        *(undefined4 *)(*(longlong *)*plVar18 + 0x994) =
             *(undefined4 *)((longlong)param_1 + 0x136bc);
        *(undefined4 *)(*(longlong *)*plVar18 + 0x998) =
             *(undefined4 *)((longlong)param_1 + 0x12b08);
        *(undefined4 *)(*(longlong *)*plVar18 + 0x99c) =
             *(undefined4 *)((longlong)param_1 + 0x12b0c);
        *(undefined4 *)(*(longlong *)*plVar18 + 0x9a0) =
             *(undefined4 *)((longlong)param_1 + 0x12a58);
        uVar10 = *(undefined4 *)((longlong)param_1 + 0x10074);
        *(undefined4 *)((longlong)plVar18 + 0x1c) = uVar10;
        *(undefined4 *)(local_d70 + 0x26c) = uVar10;
        *(int *)((longlong)param_1 + 0x10074) = *(int *)((longlong)param_1 + 0x10074) + 1;
        if ((*(longlong *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x378) == 0) ||
           (*(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x348) == 0)) {
          iVar8 = *(int *)((longlong)param_1 + 0x1007c);
          if (iVar8 == 0) {
            plVar18[6] = plVar18[5];
          }
          else {
            if (iVar8 < *(int *)((longlong)param_1 + 0x10074)) {
              lVar12 = *(longlong *)
                        ((longlong)param_1 + 0x10058 +
                        (longlong)((*(int *)((longlong)param_1 + 0x10074) - iVar8) % iVar8) * 8);
            }
            else {
              lVar12 = plVar18[5] - *(longlong *)((longlong)param_1 + 0x10050);
            }
            plVar18[6] = lVar12;
            *(longlong *)
             ((longlong)param_1 + 0x10058 +
             (longlong)
             (*(int *)((longlong)param_1 + 0x10074) % *(int *)((longlong)param_1 + 0x1007c)) * 8) =
                 plVar18[5];
          }
        }
        if ((*(longlong *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x370) != 0) &&
           (*(longlong *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x378) == 0)) {
          *(int *)((longlong)plVar18 + 0x4304) = (int)plVar18[3];
          *(undefined4 *)(plVar18 + 0x861) = *(undefined4 *)((longlong)plVar18 + 0xf4);
          lVar12 = *(longlong *)((longlong)param_1 + 0x10150);
          bVar20 = (byte)*(undefined4 *)(lVar12 + 0x324);
          uVar30 = (uint)(*(int *)(lVar12 + 0x4c) + -1 + *(int *)(lVar12 + 0xb4)) >> (bVar20 & 0x1f)
          ;
          *(uint *)((longlong)plVar18 + 0x430c) =
               ((uint)(*(int *)(lVar12 + 0xb4) + -1 + *(int *)(lVar12 + 0x48)) >> (bVar20 & 0x1f)) *
               uVar30;
          *(uint *)(plVar18 + 0x867) = uVar30;
          *(undefined4 *)(plVar18 + 0x862) =
               *(undefined4 *)(*(longlong *)((longlong)param_1 + 0x10150) + 0x330);
          thunk_FUN_1829a8950(param_1);
        }
        thunk_FUN_182d8f0e0(*(undefined8 *)((longlong)param_1 + 0x10130),plVar18);
        if (*(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 400) != 1) {
          thunk_FUN_182d896f0(*(undefined8 *)((longlong)param_1 + 0x10168),plVar18);
        }
        if (*(int *)(*(longlong *)((longlong)param_1 + 0x10150) + 0xb0) != 0) {
          thunk_FUN_1829a9020(param_1,plVar18);
        }
        cVar7 = thunk_FUN_1829a6300(uVar33);
        uVar30 = local_d78;
        if (cVar7 == '\0') {
          *(undefined1 *)((longlong)param_1 + 0x13686) = 1;
        }
      }
    } while ((*(char *)((longlong)param_1 + 0x13685) != '\0') &&
            (local_d78 = uVar30 + 1, (int)local_d78 < 2));
    uVar33 = (ulonglong)local_d68;
  }
  else {
LAB_1829ad9cb:
    uVar33 = 0xffffffffffffffff;
  }
  return uVar33;
}


