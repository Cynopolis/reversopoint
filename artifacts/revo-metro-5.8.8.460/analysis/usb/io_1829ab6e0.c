/* 0x1829ab6e0 size=0xf3b
   WaitForSingleObject
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1829ab6e0(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double _X;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 *puVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  void *pvVar21;
  sbyte sVar22;
  undefined8 *puVar23;
  longlong *plVar24;
  longlong lVar25;
  char *pcVar26;
  char *pcVar27;
  size_t _Size;
  undefined8 *puVar28;
  uint uVar29;
  uint uVar30;
  undefined *puVar31;
  undefined *puVar32;
  longlong lVar33;
  char *pcVar34;
  undefined8 *puVar35;
  double dVar36;
  undefined1 auStack_198 [32];
  char *local_178;
  undefined4 *local_170;
  char local_168;
  int local_164;
  uint local_160;
  uint local_15c;
  undefined8 *local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  undefined4 local_128;
  undefined1 local_124;
  ulonglong local_a8;
  
  local_138 = 0xfffffffffffffffe;
  local_a8 = DAT_183dc69c0 ^ (ulonglong)auStack_198;
  if (DAT_1847dddb0 == 0) {
    thunk_FUN_18299c2b0(*(undefined8 *)(param_1 + 0x10150),&DAT_18393797c,0,
                        "Primitives must be initialized before encoder is created\n");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar18 = *(longlong *)(param_1 + 0x10150);
  uVar30 = *(uint *)(lVar18 + 0xb4);
  uVar29 = *(int *)(lVar18 + 0x4c) + -1 + uVar30 >> ((&DAT_18397f600)[uVar30] & 0x1f);
  puVar28 = (undefined8 *)0x0;
  iVar12 = 0;
  local_140 = lVar18;
  if ((uVar29 == 1) ||
     ((int)((uVar30 - 1) + *(int *)(lVar18 + 0x48) >> ((&DAT_18397f600)[uVar30] & 0x1f)) < 3)) {
    thunk_FUN_18299c2b0(lVar18,&DAT_18393797c,1,"Too few rows/columns, --wpp disabled\n");
    *(undefined4 *)(lVar18 + 0x10) = 0;
  }
  puVar17 = puVar28;
  if (*(longlong *)(lVar18 + 8) == 0) {
LAB_1829ab808:
    cVar10 = '\x01';
  }
  else {
    do {
      puVar23 = (undefined8 *)((longlong)puVar17 + 1);
      if (*(char *)(*(longlong *)(lVar18 + 8) + (longlong)puVar17) !=
          *(char *)(puVar17 + 0x306b4e26)) goto LAB_1829ab808;
      puVar17 = puVar23;
    } while (puVar23 != (undefined8 *)&DAT_00000005);
    cVar10 = '\0';
  }
  if ((((*(int *)(lVar18 + 0x10) == 0) && (*(int *)(lVar18 + 0x14) == 0)) &&
      (*(int *)(lVar18 + 0x18) == 0)) && (*(int *)(lVar18 + 0xa8) == 0)) {
    cVar10 = '\0';
  }
  piVar1 = (int *)(param_1 + 0x10080);
  *piVar1 = 0;
  if (cVar10 == '\0') {
    if (*(int *)(lVar18 + 4) == 0) {
      uVar14 = thunk_FUN_182d475b0();
      thunk_FUN_182d475d0(lVar18,uVar14);
    }
  }
  else {
    uVar15 = thunk_FUN_182d46d40(lVar18,piVar1,0);
    *(undefined8 *)(param_1 + 0x100a8) = uVar15;
  }
  if (*piVar1 == 0) {
    if (*(int *)(lVar18 + 0x10) != 0) {
      thunk_FUN_18299c2b0(lVar18,&DAT_18393797c,1,"No thread pool allocated, --wpp disabled\n");
    }
    if (*(int *)(lVar18 + 0x18) != 0) {
      thunk_FUN_18299c2b0(lVar18,&DAT_18393797c,1,"No thread pool allocated, --pme disabled\n");
    }
    if (*(int *)(lVar18 + 0x14) != 0) {
      thunk_FUN_18299c2b0(lVar18,&DAT_18393797c,1,"No thread pool allocated, --pmode disabled\n");
    }
    if (*(int *)(lVar18 + 0xa8) != 0) {
      thunk_FUN_18299c2b0(lVar18,&DAT_18393797c,1,
                          "No thread pool allocated, --lookahead-slices disabled\n");
    }
    *(undefined4 *)(lVar18 + 0xa8) = 0;
    *(undefined8 *)(lVar18 + 0x14) = 0;
    *(undefined4 *)(lVar18 + 0x10) = 0;
  }
  local_178 = (char *)CONCAT44(local_178._4_4_,*(undefined4 *)(lVar18 + 0x2b4));
  thunk_FUN_18299c2b0(lVar18,&DAT_18393797c,2,"Slices                              : %d\n");
  if (*(int *)(lVar18 + 0x10) != 0) {
    iVar12 = thunk_FUN_1811c68b0(&local_128,"wpp(%d rows)",uVar29);
  }
  puVar31 = &DAT_183e7fc60;
  if (*(int *)(lVar18 + 0x14) != 0) {
    puVar32 = &DAT_183e7fc60;
    if (iVar12 != 0) {
      puVar32 = &DAT_1837040f0;
    }
    iVar13 = thunk_FUN_1811c68b0((longlong)&local_128 + (longlong)iVar12,"%spmode",puVar32);
    iVar12 = iVar12 + iVar13;
  }
  if (*(int *)(lVar18 + 0x18) != 0) {
    if (iVar12 != 0) {
      puVar31 = &DAT_1837040f0;
    }
    iVar13 = thunk_FUN_1811c68b0((longlong)&local_128 + (longlong)iVar12,"%spme ",puVar31);
    iVar12 = iVar12 + iVar13;
  }
  if (iVar12 == 0) {
    local_128 = _DAT_1835a7130;
    local_124 = DAT_1835a7134;
  }
  local_170 = &local_128;
  local_178 = (char *)CONCAT44(local_178._4_4_,*(undefined4 *)(lVar18 + 4));
  thunk_FUN_18299c2b0(lVar18,&DAT_18393797c,2,"frame threads / pool features       : %d / %s\n");
  if (0 < *(int *)(*(longlong *)(param_1 + 0x10150) + 4)) {
    puVar17 = (undefined8 *)(param_1 + 0x100b0);
    puVar23 = puVar28;
    do {
      local_158 = (undefined8 *)thunk_FUN_183196718(0x2680);
      puVar16 = puVar28;
      if (local_158 != (undefined8 *)0x0) {
        puVar16 = (undefined8 *)thunk_FUN_18299dac0(local_158);
      }
      *puVar17 = puVar16;
      *(bool *)(puVar16 + 0x4cf) = *(int *)(*(longlong *)(param_1 + 0x10150) + 0x70) != 0;
      uVar30 = (int)puVar23 + 1;
      puVar23 = (undefined8 *)(ulonglong)uVar30;
      puVar17 = puVar17 + 1;
    } while ((int)uVar30 < *(int *)(*(longlong *)(param_1 + 0x10150) + 4));
  }
  if (*piVar1 == 0) {
    if (0 < *(int *)(*(longlong *)(param_1 + 0x10150) + 4)) {
      plVar24 = (longlong *)(param_1 + 0x100b0);
      puVar17 = puVar28;
      do {
        *(undefined4 *)(*plVar24 + 0x18) = 0;
        uVar30 = (int)puVar17 + 1;
        puVar17 = (undefined8 *)(ulonglong)uVar30;
        plVar24 = plVar24 + 1;
      } while ((int)uVar30 < *(int *)(*(longlong *)(param_1 + 0x10150) + 4));
    }
  }
  else {
    if (0 < *(int *)(*(longlong *)(param_1 + 0x10150) + 4)) {
      plVar24 = (longlong *)(param_1 + 0x100b0);
      puVar17 = puVar28;
      do {
        lVar33 = (longlong)((int)puVar17 % *piVar1) * 0x30;
        *(longlong *)(*plVar24 + 8) = *(longlong *)(param_1 + 0x100a8) + lVar33;
        *(undefined4 *)(*plVar24 + 0x18) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x100a8) + 8 + lVar33);
        piVar2 = (int *)(*(longlong *)(param_1 + 0x100a8) + 8 + lVar33);
        *piVar2 = *piVar2 + 1;
        *(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x100a8) + 0x20 + lVar33) +
         (longlong)*(int *)(*plVar24 + 0x18) * 8) = *plVar24;
        uVar30 = (int)puVar17 + 1;
        puVar17 = (undefined8 *)(ulonglong)uVar30;
        plVar24 = plVar24 + 1;
      } while ((int)uVar30 < *(int *)(*(longlong *)(param_1 + 0x10150) + 4));
    }
    puVar17 = puVar28;
    if (0 < *piVar1) {
      do {
        thunk_FUN_182d476c0((longlong)(int)puVar17 * 0x30 + *(longlong *)(param_1 + 0x100a8));
        uVar30 = (int)puVar17 + 1;
        puVar17 = (undefined8 *)(ulonglong)uVar30;
      } while ((int)uVar30 < *piVar1);
    }
  }
  lVar33 = param_1 + 0x12c48;
  cVar10 = thunk_FUN_1829a7040(lVar33);
  if (cVar10 != '\0') {
    lVar25 = *(longlong *)(*(longlong *)(param_1 + 0x10150) + 0xe8);
    puVar17 = puVar28;
    if (lVar25 != 0) {
      do {
        puVar16 = (undefined8 *)((longlong)puVar17 + 1);
        puVar23 = puVar28;
        if (*(char *)(lVar25 + (longlong)puVar17) != *(char *)((longlong)puVar17 + 0x18363430c))
        goto LAB_1829abba0;
        puVar17 = puVar16;
      } while (puVar16 != (undefined8 *)&DAT_00000004);
    }
    *(undefined1 *)(param_1 + 0x13668) = 0;
    goto LAB_1829abbda;
  }
  pcVar34 = "Unable to allocate scaling list arrays\n";
LAB_1829abb45:
  thunk_FUN_18299c2b0(*(undefined8 *)(param_1 + 0x10150),&DAT_18393797c,0,pcVar34);
  goto LAB_1829ac5c1;
  while (puVar23 = puVar17, puVar17 != (undefined8 *)0x8) {
LAB_1829abba0:
    puVar17 = (undefined8 *)((longlong)puVar23 + 1);
    if (*(char *)(lVar25 + (longlong)puVar23) != *(char *)(puVar23 + 0x306b4e2a)) {
      cVar10 = thunk_FUN_1829a7180(lVar33);
      if (cVar10 != '\0') {
        *(undefined1 *)(param_1 + 0x13686) = 1;
      }
      goto LAB_1829abbda;
    }
  }
  thunk_FUN_1829a7960(lVar33);
LAB_1829abbda:
  local_164 = *piVar1;
  if (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x2d0) < 1) {
    lVar33 = *(longlong *)(param_1 + 0x100a8);
  }
  else {
    lVar33 = thunk_FUN_182d46d40(lVar18,&local_164,1);
  }
  local_158 = (undefined8 *)thunk_FUN_183196718(0x150);
  puVar17 = puVar28;
  if (local_158 != (undefined8 *)0x0) {
    puVar17 = (undefined8 *)thunk_FUN_182d84b90(local_158,*(undefined8 *)(param_1 + 0x10150),lVar33)
    ;
  }
  *(undefined8 **)(param_1 + 0x10168) = puVar17;
  if (local_164 != 0) {
    *(undefined4 *)(puVar17 + 3) = *(undefined4 *)(lVar33 + 8);
    *(int *)(lVar33 + 8) = *(int *)(lVar33 + 8) + 1;
    *(longlong *)
     (*(longlong *)(lVar33 + 0x20) + (longlong)*(int *)(*(longlong *)(param_1 + 0x10168) + 0x18) * 8
     ) = *(longlong *)(param_1 + 0x10168);
  }
  if ((0 < *(int *)(*(longlong *)(param_1 + 0x10150) + 0x2d0)) && (puVar17 = puVar28, 0 < local_164)
     ) {
    do {
      thunk_FUN_182d476c0((longlong)(int)puVar17 * 0x30 + lVar33);
      uVar30 = (int)puVar17 + 1;
      puVar17 = (undefined8 *)(ulonglong)uVar30;
    } while ((int)uVar30 < local_164);
  }
  lVar33 = param_1 + 0x12c48;
  *(int *)(*(longlong *)(param_1 + 0x10168) + 0x148) = local_164;
  local_158 = (undefined8 *)thunk_FUN_183196718(0x50);
  puVar17 = puVar28;
  if (local_158 != (undefined8 *)0x0) {
    lVar25 = *(longlong *)(param_1 + 0x10150);
    local_158[3] = 0;
    local_158[4] = 0;
    *(undefined4 *)(local_158 + 5) = 0;
    local_158[6] = 0;
    local_158[7] = 0;
    *(undefined4 *)(local_158 + 8) = 0;
    *local_158 = 0;
    *(undefined4 *)((longlong)local_158 + 0xc) = *(undefined4 *)(lVar25 + 0x380);
    *(undefined1 *)(local_158 + 2) = 0;
    local_158[9] = 0;
    *(undefined4 *)(local_158 + 1) = *(undefined4 *)(lVar25 + 0x88);
    *(bool *)((longlong)local_158 + 0x11) = *(int *)(lVar25 + 0x84) != 0;
    puVar17 = local_158;
  }
  *(undefined8 **)(param_1 + 0x10130) = puVar17;
  local_158 = (undefined8 *)thunk_FUN_183196718(0x8b0);
  puVar17 = puVar28;
  if (local_158 != (undefined8 *)0x0) {
    puVar17 = (undefined8 *)thunk_FUN_182d75870(local_158,*(undefined8 *)(param_1 + 0x10150));
  }
  *(undefined8 **)(param_1 + 0x10160) = puVar17;
  *(bool *)(param_1 + 0x102b1) = *(int *)(*(longlong *)(param_1 + 0x10150) + 0x50) == 0;
  *(bool *)(param_1 + 0x102b2) = *(int *)(*(longlong *)(param_1 + 0x10150) + 0x50) != 0;
  *(undefined1 *)(param_1 + 0x102b3) = 0;
  *(bool *)(param_1 + 0x102b4) = *(int *)(*(longlong *)(param_1 + 0x10150) + 0x50) == 0;
  thunk_FUN_1829b1920(param_1,param_1 + 0x102e8);
  thunk_FUN_1829b16b0(param_1,param_1 + 0x12ae8);
  if (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x1d4) == 0) {
    thunk_FUN_1829a7aa0(lVar33);
  }
  else {
    lVar18 = FUN_180013282(0x90000);
    *(longlong *)(param_1 + 0x10040) = lVar18;
    if (lVar18 == 0) {
      pcVar34 = "Unable to allocate memory\n";
      goto LAB_1829abb45;
    }
    local_168 = *(char *)(param_1 + 0x13668);
    if (local_168 == '\0') {
      thunk_FUN_1829a7960(lVar33);
    }
    thunk_FUN_1829a7aa0(lVar33,*(undefined4 *)(param_1 + 0x10308));
    dVar8 = DAT_18397d180;
    dVar7 = DAT_183303060;
    dVar6 = DAT_1832df6c0;
    dVar5 = DAT_1832b1af0;
    _X = DAT_1832a9880;
    dVar4 = DAT_1832576d0;
    local_15c = 0;
    local_148 = 0;
    puVar17 = puVar28;
    do {
      bVar11 = (char)((ulonglong)puVar17 / 6) + 0x18U & 0x3f;
      uVar19 = 1L << bVar11 | 1UL >> 0x40 - bVar11;
      dVar3 = (double)(longlong)uVar19;
      if ((longlong)uVar19 < 0) {
        dVar3 = dVar3 + dVar5;
      }
      local_150 = local_148 << 0xf;
      lVar18 = local_148;
      puVar23 = puVar28;
      do {
        lVar33 = *(longlong *)(param_1 + 0x10040) + local_150;
        uVar30 = (uint)puVar23;
        sVar22 = (char)(uVar30 & 3) * '\x02' + 4;
        if ((uVar30 - 4 < 4) || (puVar23 = (undefined8 *)0xc, 0xb < (int)uVar30)) {
          puVar23 = puVar28;
        }
        local_160 = (uint)puVar23;
        puVar16 = puVar28;
        puVar35 = puVar28;
        puVar9 = (undefined8 *)(ulonglong)(uVar30 & 3);
        if (0 < 1 << sVar22) {
          do {
            local_158 = puVar9;
            if (lVar18 == 0x11) {
              *(undefined2 *)(lVar33 + (longlong)puVar16 * 2) = 0x7fff;
            }
            else {
              iVar12 = (int)puVar23;
              if ((int)puVar35 == 0) {
                iVar12 = 0xc;
              }
              if ((int)puVar17 < iVar12) {
                *(undefined2 *)(lVar33 + (longlong)puVar16 * 2) = 0;
              }
              else {
                dVar36 = pow(_X,((double)((int)puVar17 + 1 + -iVar12) / (double)(-iVar12 + 0x12)) *
                                dVar6);
                puVar17 = puVar28;
                if (iVar12 == 0) {
                  puVar17 = (undefined8 *)0x30;
                }
                puVar23 = puVar28;
                if (7 < (int)uVar30) {
                  puVar23 = (undefined8 *)0x90;
                }
                dVar36 = (dVar36 * dVar8 - dVar8) *
                         (dVar3 / (double)*(int *)(*(longlong *)
                                                    ((longlong)puVar23 +
                                                    ((longlong)local_158 + 0x10cU) * 0x120 + param_1
                                                    + (longlong)puVar17) + (longlong)puVar16 * 4)) +
                         dVar4;
                if (dVar7 <= dVar36) {
                  dVar36 = dVar7;
                }
                *(short *)(lVar33 + (longlong)puVar16 * 2) = (short)(longlong)dVar36;
                puVar17 = (undefined8 *)(ulonglong)local_15c;
                lVar18 = local_148;
              }
            }
            puVar16 = (undefined8 *)((longlong)puVar16 + 1);
            puVar23 = (undefined8 *)(ulonglong)local_160;
            puVar35 = (undefined8 *)(ulonglong)((int)puVar35 + 1);
            puVar9 = local_158;
          } while ((longlong)puVar16 < (longlong)(1 << sVar22));
        }
        puVar23 = (undefined8 *)(ulonglong)(uVar30 + 1);
        local_150 = local_150 + 0x800;
      } while ((int)(uVar30 + 1) < 0x10);
      local_15c = (int)puVar17 + 1;
      puVar17 = (undefined8 *)(ulonglong)local_15c;
      local_148 = lVar18 + 1;
    } while ((int)local_15c < 0x12);
    lVar18 = local_140;
    if (local_168 == '\0') {
      *(undefined2 *)(param_1 + 0x13668) = 0;
      thunk_FUN_1829a7aa0(param_1 + 0x12c48);
      lVar18 = local_140;
    }
  }
  lVar33 = *(longlong *)(param_1 + 0x10150);
  uVar30 = *(uint *)(lVar33 + 0xb4);
  iVar12 = *(int *)(lVar33 + 0x4c);
  iVar13 = *(int *)(lVar33 + 0x48);
  if (0 < *(int *)(lVar33 + 4)) {
    puVar17 = (undefined8 *)(param_1 + 0x100b0);
    puVar23 = puVar28;
    do {
      cVar10 = (**(code **)(*(longlong *)*puVar17 + 0x18))
                         ((longlong *)*puVar17,param_1,
                          (ulonglong)(iVar12 + -1 + uVar30) / (ulonglong)uVar30,
                          (ulonglong)((uVar30 - 1) + iVar13) / (ulonglong)uVar30);
      if (cVar10 == '\0') {
        thunk_FUN_18299c2b0(*(undefined8 *)(param_1 + 0x10150),&DAT_18393797c,0,
                            "Unable to initialize frame encoder, aborting\n");
        *(undefined1 *)(param_1 + 0x13686) = 1;
      }
      uVar29 = (int)puVar23 + 1;
      puVar23 = (undefined8 *)(ulonglong)uVar29;
      puVar17 = puVar17 + 1;
    } while ((int)uVar29 < *(int *)(*(longlong *)(param_1 + 0x10150) + 4));
  }
  if (0 < *(int *)(*(longlong *)(param_1 + 0x10150) + 4)) {
    plVar24 = (longlong *)(param_1 + 0x100b0);
    puVar17 = puVar28;
    do {
      thunk_FUN_182d3e080(*plVar24 + 0x50);
      WaitForSingleObject(*(HANDLE *)(*plVar24 + 0x68),0xffffffff);
      uVar30 = (int)puVar17 + 1;
      puVar17 = (undefined8 *)(ulonglong)uVar30;
      plVar24 = plVar24 + 1;
    } while ((int)uVar30 < *(int *)(*(longlong *)(param_1 + 0x10150) + 4));
  }
  if (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x78) != 0) {
    thunk_FUN_182d7ae70(*(undefined8 *)(param_1 + 0x10160),param_1 + 0x102e8);
  }
  cVar10 = thunk_FUN_182d79220(*(undefined8 *)(param_1 + 0x10160));
  if (cVar10 == '\0') {
    *(undefined1 *)(param_1 + 0x13686) = 1;
  }
  cVar10 = thunk_FUN_182d86990(*(undefined8 *)(param_1 + 0x10168));
  if (cVar10 == '\0') {
    *(undefined1 *)(param_1 + 0x13686) = 1;
  }
  puVar20 = (undefined4 *)(param_1 + 0x13a20);
  lVar33 = 0x40;
  do {
    puVar20[-0x40] = 0;
    *puVar20 = 0;
    puVar20 = puVar20 + 1;
    lVar33 = lVar33 + -1;
  } while (lVar33 != 0);
  pcVar34 = *(char **)(*(longlong *)(param_1 + 0x10150) + 0x370);
  if ((pcVar34 != (char *)0x0) && (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x334) != 0)) {
    lVar33 = -1;
    do {
      lVar25 = lVar33;
      lVar33 = lVar25 + 1;
    } while (pcVar34[lVar33] != '\0');
    lVar33 = FUN_180013282(lVar25 + 7);
    if (lVar33 == 0) {
      thunk_FUN_18299c2b0(0,&DAT_18393797c,0,"unable to allocate memory for filename\n");
      *(undefined1 *)(param_1 + 0x13686) = 1;
    }
    else {
      lVar25 = lVar33 - (longlong)pcVar34;
      do {
        cVar10 = *pcVar34;
        pcVar34[lVar25] = cVar10;
        pcVar34 = pcVar34 + 1;
      } while (cVar10 != '\0');
      pcVar34 = (char *)(lVar33 + -1);
      do {
        pcVar26 = pcVar34;
        pcVar34 = pcVar26 + 1;
      } while (*pcVar34 != '\0');
      *(undefined4 *)pcVar34 = s__temp_18397b070._0_4_;
      *(undefined2 *)(pcVar26 + 5) = s__temp_18397b070._4_2_;
      uVar15 = thunk_FUN_18299c700(lVar33);
      *(undefined8 *)(param_1 + 0x10148) = uVar15;
      thunk_FUN_18299c7d0(lVar33);
    }
    if (*(longlong *)(param_1 + 0x10148) == 0) {
      local_178 = *(char **)(*(longlong *)(param_1 + 0x10150) + 0x370);
      thunk_FUN_18299c460(0,&DAT_18393797c,0,"Analysis save: failed to open file %s.temp\n");
      *(undefined1 *)(param_1 + 0x13686) = 1;
    }
  }
  if ((*(longlong *)(*(longlong *)(param_1 + 0x10150) + 0x378) != 0) &&
     (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x334) != 0)) {
    lVar33 = thunk_FUN_18299c700();
    *(longlong *)(param_1 + 0x10140) = lVar33;
    if (lVar33 == 0) {
      local_178 = *(char **)(*(longlong *)(param_1 + 0x10150) + 0x378);
      thunk_FUN_18299c460(0,&DAT_18393797c,0,"Analysis load: failed to open file %s\n");
      *(undefined1 *)(param_1 + 0x13686) = 1;
    }
  }
  lVar33 = *(longlong *)(param_1 + 0x10150);
  if ((*(int *)(lVar33 + 0x2d8) != 0) || (*(int *)(lVar33 + 0x2dc) != 0)) {
    pcVar34 = *(char **)(lVar33 + 0x170);
    if (*(char **)(lVar33 + 0x170) == (char *)0x0) {
      pcVar34 = PTR_s_x265_analysis_dat_183db7c28;
    }
    lVar25 = -1;
    if (*(int *)(lVar33 + 0x1f8) != 0) {
      do {
        lVar33 = lVar25;
        lVar25 = lVar33 + 1;
      } while (pcVar34[lVar25] != '\0');
      lVar33 = FUN_180013282(lVar33 + 7);
      if (lVar33 == 0) {
        thunk_FUN_18299c2b0(0,&DAT_18393797c,0,"unable to allocate memory for filename\n");
        *(undefined1 *)(param_1 + 0x13686) = 1;
      }
      else {
        pcVar26 = pcVar34;
        do {
          cVar10 = *pcVar26;
          pcVar26[lVar33 - (longlong)pcVar34] = cVar10;
          pcVar26 = pcVar26 + 1;
        } while (cVar10 != '\0');
        pcVar26 = (char *)(lVar33 + -1);
        do {
          pcVar27 = pcVar26;
          pcVar26 = pcVar27 + 1;
        } while (*pcVar26 != '\0');
        *(undefined4 *)pcVar26 = s__temp_18397b070._0_4_;
        *(undefined2 *)(pcVar27 + 5) = s__temp_18397b070._4_2_;
        uVar15 = thunk_FUN_18299c700(lVar33);
        *(undefined8 *)(param_1 + 0x10148) = uVar15;
        thunk_FUN_18299c7d0(lVar33);
      }
      if (*(longlong *)(param_1 + 0x10148) == 0) {
        local_178 = pcVar34;
        thunk_FUN_18299c460(0,&DAT_18393797c,0,"Analysis 2 pass: failed to open file %s.temp\n");
        *(undefined1 *)(param_1 + 0x13686) = 1;
      }
    }
    if (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x1fc) != 0) {
      lVar33 = thunk_FUN_18299c700(pcVar34);
      *(longlong *)(param_1 + 0x10140) = lVar33;
      if (lVar33 == 0) {
        local_178 = pcVar34;
        thunk_FUN_18299c460(0,&DAT_18393797c,0,"Analysis 2 pass: failed to open file %s\n");
        *(undefined1 *)(param_1 + 0x13686) = 1;
      }
    }
  }
  lVar33 = *(longlong *)(param_1 + 0x10150);
  if ((((*(int *)(lVar33 + 0x94) != 0) || (*(int *)(lVar33 + 0xa4) != 0)) ||
      (*(int *)(lVar33 + 4) != 1)) || (cVar10 = '\x01', *(int *)(lVar33 + 0x2b4) != 1)) {
    cVar10 = '\0';
  }
  *(char *)(param_1 + 0x13685) = cVar10;
  bVar11 = thunk_FUN_182990040();
  *(byte *)(param_1 + 0x13686) = *(byte *)(param_1 + 0x13686) | bVar11;
  uVar15 = thunk_FUN_18299c7f0();
  *(undefined8 *)(param_1 + 0x10068) = uVar15;
  *(bool *)(param_1 + 0x12c40) = *(int *)(*(longlong *)(param_1 + 0x10150) + 0x70) != 0;
  if ((*(short *)(lVar18 + 0x2a0) != 0) || (*(short *)(lVar18 + 0x2a2) != 0)) {
    puVar28 = (undefined8 *)0x1;
  }
  *(char *)(param_1 + 0x13684) = (char)puVar28;
  if (*(int *)(param_1 + 0x13b60) != 0) {
    uVar14 = (**(code **)(*(longlong *)(param_1 + 0x13b68) + 8))
                       (*(undefined8 *)(*(longlong *)(param_1 + 0x10150) + 0x300));
    *(undefined4 *)(param_1 + 0x13b78) = uVar14;
  }
  lVar18 = *(longlong *)(param_1 + 0x10150);
  if (*(int *)(lVar18 + 0x394) == 0) {
    return;
  }
  lVar18 = (longlong)
           ((*(int *)(lVar18 + 0xa4) + *(int *)(lVar18 + 0x90)) * *(int *)(lVar18 + 0x328) * 3);
  _Size = lVar18 * 8;
  pvVar21 = (void *)FUN_180013282(_Size);
  *(void **)(param_1 + 0x13b98) = pvVar21;
  if (pvVar21 != (void *)0x0) {
    memset(pvVar21,0,_Size);
    pvVar21 = (void *)FUN_180013282(_Size);
    *(void **)(param_1 + 0x13b90) = pvVar21;
    if (pvVar21 != (void *)0x0) {
      memset(pvVar21,0,_Size);
      _Size = lVar18 * 4;
      pvVar21 = (void *)FUN_180013282(_Size);
      *(void **)(param_1 + 0x13ba0) = pvVar21;
      if (pvVar21 != (void *)0x0) {
        memset(pvVar21,0,_Size);
        return;
      }
    }
  }
  local_178 = (char *)_Size;
  thunk_FUN_18299c2b0(0,&DAT_18393797c,0,"malloc of size %d failed\n");
LAB_1829ac5c1:
  *(undefined1 *)(param_1 + 0x13686) = 1;
  return;
}


