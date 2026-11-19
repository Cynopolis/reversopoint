/* 0x182dddae0 size=0xfc2
   WaitForSingleObject
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_182dddae0(longlong param_1)

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
  char cVar9;
  byte bVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  void *pvVar22;
  sbyte sVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  char *pcVar26;
  char *pcVar27;
  char *pcVar28;
  size_t _Size;
  undefined8 *puVar29;
  uint uVar30;
  uint uVar31;
  undefined *puVar32;
  longlong lVar33;
  undefined *puVar34;
  longlong lVar35;
  undefined8 *puVar36;
  double dVar37;
  int local_res18 [2];
  uint local_res20;
  undefined8 in_stack_fffffffffffffe98;
  uint local_158;
  longlong local_148;
  undefined4 local_128;
  undefined1 local_124;
  
  uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
  if (DAT_1848aff50 == 0) {
    thunk_FUN_182dc1d60(*(undefined8 *)(param_1 + 0x10150),&DAT_18393797c,0,
                        "Primitives must be initialized before encoder is created\n");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar29 = (undefined8 *)0x0;
  iVar12 = 0;
  lVar33 = *(longlong *)(param_1 + 0x10150);
  uVar31 = *(uint *)(lVar33 + 0xb4);
  uVar30 = (uVar31 - 1) + *(int *)(lVar33 + 0x4c) >> ((&DAT_1839e0430)[uVar31] & 0x1f);
  if ((uVar30 == 1) ||
     ((int)((uVar31 - 1) + *(int *)(lVar33 + 0x48) >> ((&DAT_1839e0430)[uVar31] & 0x1f)) < 3)) {
    thunk_FUN_182dc1d60(lVar33,&DAT_18393797c,1,"Too few rows/columns, --wpp disabled\n");
    *(undefined4 *)(lVar33 + 0x10) = 0;
  }
  puVar18 = puVar29;
  if (*(longlong *)(lVar33 + 8) == 0) {
LAB_182dddbd8:
    cVar9 = '\x01';
  }
  else {
    do {
      puVar24 = (undefined8 *)((longlong)puVar18 + 1);
      if (*(char *)(*(longlong *)(lVar33 + 8) + (longlong)puVar18) !=
          *(char *)(puVar18 + 0x306b4e26)) goto LAB_182dddbd8;
      puVar18 = puVar24;
    } while (puVar24 != (undefined8 *)&DAT_00000005);
    cVar9 = '\0';
  }
  if ((((*(int *)(lVar33 + 0x10) == 0) && (*(int *)(lVar33 + 0x14) == 0)) &&
      (*(int *)(lVar33 + 0x18) == 0)) && (*(int *)(lVar33 + 0xa8) == 0)) {
    cVar9 = '\0';
  }
  piVar1 = (int *)(param_1 + 0x10080);
  *piVar1 = 0;
  if (cVar9 == '\0') {
    if (*(int *)(lVar33 + 4) == 0) {
      uVar11 = thunk_FUN_1830129e0();
      thunk_FUN_183012a00(lVar33,uVar11);
    }
  }
  else {
    uVar15 = thunk_FUN_1830121a0(lVar33,piVar1,0);
    *(undefined8 *)(param_1 + 0x100a8) = uVar15;
  }
  if (*piVar1 == 0) {
    if (*(int *)(lVar33 + 0x10) != 0) {
      thunk_FUN_182dc1d60(lVar33,&DAT_18393797c,1,"No thread pool allocated, --wpp disabled\n");
    }
    if (*(int *)(lVar33 + 0x18) != 0) {
      thunk_FUN_182dc1d60(lVar33,&DAT_18393797c,1,"No thread pool allocated, --pme disabled\n");
    }
    if (*(int *)(lVar33 + 0x14) != 0) {
      thunk_FUN_182dc1d60(lVar33,&DAT_18393797c,1,"No thread pool allocated, --pmode disabled\n");
    }
    if (*(int *)(lVar33 + 0xa8) != 0) {
      thunk_FUN_182dc1d60(lVar33,&DAT_18393797c,1,
                          "No thread pool allocated, --lookahead-slices disabled\n");
    }
    *(undefined4 *)(lVar33 + 0xa8) = 0;
    *(undefined8 *)(lVar33 + 0x14) = 0;
    *(undefined4 *)(lVar33 + 0x10) = 0;
  }
  uVar15 = CONCAT44(uVar14,*(undefined4 *)(lVar33 + 0x2b4));
  thunk_FUN_182dc1d60(lVar33,&DAT_18393797c,2,"Slices                              : %d\n",uVar15);
  uVar14 = (undefined4)((ulonglong)uVar15 >> 0x20);
  if (*(int *)(lVar33 + 0x10) != 0) {
    iVar12 = thunk_FUN_1811c68b0(&local_128,"wpp(%d rows)",uVar30);
  }
  puVar32 = &DAT_183e7fc60;
  if (*(int *)(lVar33 + 0x14) != 0) {
    puVar34 = &DAT_183e7fc60;
    if (iVar12 != 0) {
      puVar34 = &DAT_1837040f0;
    }
    iVar13 = thunk_FUN_1811c68b0((longlong)&local_128 + (longlong)iVar12,"%spmode",puVar34);
    iVar12 = iVar12 + iVar13;
  }
  if (*(int *)(lVar33 + 0x18) != 0) {
    if (iVar12 != 0) {
      puVar32 = &DAT_1837040f0;
    }
    iVar13 = thunk_FUN_1811c68b0((longlong)&local_128 + (longlong)iVar12,"%spme ",puVar32);
    iVar12 = iVar12 + iVar13;
  }
  if (iVar12 == 0) {
    local_128 = _DAT_1835a7130;
    local_124 = DAT_1835a7134;
  }
  puVar21 = &local_128;
  uVar15 = CONCAT44(uVar14,*(undefined4 *)(lVar33 + 4));
  thunk_FUN_182dc1d60(lVar33,&DAT_18393797c,2,"frame threads / pool features       : %d / %s\n",
                      uVar15,puVar21);
  if (0 < *(int *)(*(longlong *)(param_1 + 0x10150) + 4)) {
    puVar18 = (undefined8 *)(param_1 + 0x100b0);
    puVar24 = puVar29;
    do {
      lVar16 = thunk_FUN_183196718(0x2680);
      puVar17 = puVar29;
      if (lVar16 != 0) {
        puVar17 = (undefined8 *)thunk_FUN_182dc3550(lVar16);
      }
      *puVar18 = puVar17;
      uVar31 = (int)puVar24 + 1;
      puVar24 = (undefined8 *)(ulonglong)uVar31;
      *(bool *)(puVar17 + 0x4cf) = *(int *)(*(longlong *)(param_1 + 0x10150) + 0x70) != 0;
      puVar18 = puVar18 + 1;
    } while ((int)uVar31 < *(int *)(*(longlong *)(param_1 + 0x10150) + 4));
  }
  if (*piVar1 == 0) {
    if (0 < *(int *)(*(longlong *)(param_1 + 0x10150) + 4)) {
      plVar25 = (longlong *)(param_1 + 0x100b0);
      puVar18 = puVar29;
      do {
        lVar16 = *plVar25;
        plVar25 = plVar25 + 1;
        uVar31 = (int)puVar18 + 1;
        puVar18 = (undefined8 *)(ulonglong)uVar31;
        *(undefined4 *)(lVar16 + 0x18) = 0;
      } while ((int)uVar31 < *(int *)(*(longlong *)(param_1 + 0x10150) + 4));
    }
  }
  else {
    if (0 < *(int *)(*(longlong *)(param_1 + 0x10150) + 4)) {
      plVar25 = (longlong *)(param_1 + 0x100b0);
      puVar18 = puVar29;
      do {
        iVar12 = (int)puVar18;
        uVar31 = iVar12 + 1;
        puVar18 = (undefined8 *)(ulonglong)uVar31;
        lVar16 = (longlong)(iVar12 % *piVar1);
        lVar35 = lVar16 * 0x30;
        *(longlong *)(*plVar25 + 8) = *(longlong *)(param_1 + 0x100a8) + lVar35;
        *(undefined4 *)(*plVar25 + 0x18) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x100a8) + 8 + lVar16 * 0x30);
        piVar2 = (int *)(lVar35 + 8 + *(longlong *)(param_1 + 0x100a8));
        *piVar2 = *piVar2 + 1;
        *(longlong *)
         (*(longlong *)(lVar35 + 0x20 + *(longlong *)(param_1 + 0x100a8)) +
         (longlong)*(int *)(*plVar25 + 0x18) * 8) = *plVar25;
        plVar25 = plVar25 + 1;
      } while ((int)uVar31 < *(int *)(*(longlong *)(param_1 + 0x10150) + 4));
    }
    puVar18 = puVar29;
    if (0 < *piVar1) {
      do {
        thunk_FUN_183012af0((longlong)(int)puVar18 * 0x30 + *(longlong *)(param_1 + 0x100a8));
        uVar31 = (int)puVar18 + 1;
        puVar18 = (undefined8 *)(ulonglong)uVar31;
      } while ((int)uVar31 < *piVar1);
    }
  }
  lVar16 = param_1 + 0x12c48;
  cVar9 = thunk_FUN_182dd95b0(lVar16);
  if (cVar9 == '\0') {
    thunk_FUN_182dc1d60(*(undefined8 *)(param_1 + 0x10150),&DAT_18393797c,0,
                        "Unable to allocate scaling list arrays\n",uVar15,puVar21);
    *(undefined1 *)(param_1 + 0x13686) = 1;
    return;
  }
  lVar35 = *(longlong *)(*(longlong *)(param_1 + 0x10150) + 0xe8);
  puVar18 = puVar29;
  if (lVar35 != 0) {
    do {
      puVar17 = (undefined8 *)((longlong)puVar18 + 1);
      puVar24 = puVar29;
      if (*(char *)(lVar35 + (longlong)puVar18) != *(char *)((longlong)puVar18 + 0x18363430c))
      goto LAB_182dddfd0;
      puVar18 = puVar17;
    } while (puVar17 != (undefined8 *)&DAT_00000004);
  }
  *(undefined1 *)(param_1 + 0x13668) = 0;
  goto LAB_182dddf8b;
  while (puVar24 = puVar18, puVar18 != (undefined8 *)0x8) {
LAB_182dddfd0:
    puVar18 = (undefined8 *)((longlong)puVar24 + 1);
    if (*(char *)(lVar35 + (longlong)puVar24) != *(char *)(puVar24 + 0x306b4e2a)) {
      cVar9 = thunk_FUN_182dd96f0(lVar16);
      if (cVar9 != '\0') {
        *(undefined1 *)(param_1 + 0x13686) = 1;
      }
      goto LAB_182dddf8b;
    }
  }
  thunk_FUN_182dd9ec0(lVar16);
LAB_182dddf8b:
  local_res18[0] = *piVar1;
  if (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x2d0) < 1) {
    lVar16 = *(longlong *)(param_1 + 0x100a8);
  }
  else {
    lVar16 = thunk_FUN_1830121a0(lVar33,local_res18,1);
  }
  lVar35 = thunk_FUN_183196718(0x150);
  puVar18 = puVar29;
  if (lVar35 != 0) {
    puVar18 = (undefined8 *)thunk_FUN_183050690(lVar35,*(undefined8 *)(param_1 + 0x10150),lVar16);
  }
  *(undefined8 **)(param_1 + 0x10168) = puVar18;
  if (local_res18[0] != 0) {
    *(undefined4 *)(puVar18 + 3) = *(undefined4 *)(lVar16 + 8);
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    *(longlong *)
     (*(longlong *)(lVar16 + 0x20) + (longlong)*(int *)(*(longlong *)(param_1 + 0x10168) + 0x18) * 8
     ) = *(longlong *)(param_1 + 0x10168);
  }
  if ((0 < *(int *)(*(longlong *)(param_1 + 0x10150) + 0x2d0)) &&
     (puVar18 = puVar29, 0 < local_res18[0])) {
    do {
      thunk_FUN_183012af0((longlong)(int)puVar18 * 0x30 + lVar16);
      uVar31 = (int)puVar18 + 1;
      puVar18 = (undefined8 *)(ulonglong)uVar31;
    } while ((int)uVar31 < local_res18[0]);
  }
  lVar16 = param_1 + 0x12c48;
  *(int *)(*(longlong *)(param_1 + 0x10168) + 0x148) = local_res18[0];
  puVar24 = (undefined8 *)thunk_FUN_183196718(0x50);
  puVar18 = puVar29;
  if (puVar24 != (undefined8 *)0x0) {
    lVar35 = *(longlong *)(param_1 + 0x10150);
    puVar24[3] = 0;
    puVar24[4] = 0;
    *(undefined4 *)(puVar24 + 5) = 0;
    puVar24[6] = 0;
    puVar24[7] = 0;
    *(undefined4 *)(puVar24 + 8) = 0;
    *puVar24 = 0;
    *(undefined4 *)((longlong)puVar24 + 0xc) = *(undefined4 *)(lVar35 + 0x380);
    *(undefined1 *)(puVar24 + 2) = 0;
    puVar24[9] = 0;
    *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(lVar35 + 0x88);
    *(bool *)((longlong)puVar24 + 0x11) = *(int *)(lVar35 + 0x84) != 0;
    puVar18 = puVar24;
  }
  *(undefined8 **)(param_1 + 0x10130) = puVar18;
  lVar35 = thunk_FUN_183196718(0x8b0);
  puVar18 = puVar29;
  if (lVar35 != 0) {
    puVar18 = (undefined8 *)thunk_FUN_183041510(lVar35,*(undefined8 *)(param_1 + 0x10150));
  }
  *(undefined8 **)(param_1 + 0x10160) = puVar18;
  *(bool *)(param_1 + 0x102b1) = *(int *)(*(longlong *)(param_1 + 0x10150) + 0x50) == 0;
  iVar12 = *(int *)(*(longlong *)(param_1 + 0x10150) + 0x50);
  *(undefined1 *)(param_1 + 0x102b3) = 0;
  *(bool *)(param_1 + 0x102b2) = iVar12 != 0;
  *(bool *)(param_1 + 0x102b4) = *(int *)(*(longlong *)(param_1 + 0x10150) + 0x50) == 0;
  thunk_FUN_182de3e50(param_1,param_1 + 0x102e8);
  thunk_FUN_182de3be0(param_1,param_1 + 0x12ae8);
  if (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x1d4) == 0) {
    thunk_FUN_182dda000(lVar16);
  }
  else {
    lVar35 = thunk_FUN_182dc2240(0x90000);
    *(longlong *)(param_1 + 0x10040) = lVar35;
    if (lVar35 == 0) {
      thunk_FUN_182dc1d60(*(undefined8 *)(param_1 + 0x10150),&DAT_18393797c,0,
                          "Unable to allocate memory\n");
      goto LAB_182ddea5b;
    }
    cVar9 = *(char *)(param_1 + 0x13668);
    if (cVar9 == '\0') {
      thunk_FUN_182dd9ec0(lVar16);
    }
    thunk_FUN_182dda000(lVar16,*(undefined4 *)(param_1 + 0x10308));
    dVar8 = DAT_18397d180;
    dVar7 = DAT_183303060;
    dVar6 = DAT_1832df6c0;
    dVar5 = DAT_1832b1af0;
    _X = DAT_1832a9880;
    dVar4 = DAT_1832576d0;
    local_158 = 0;
    local_148 = 0;
    puVar18 = puVar29;
    do {
      bVar10 = (char)((ulonglong)puVar18 / 6) + 0x18U & 0x3f;
      uVar19 = 1L << bVar10 | 1UL >> 0x40 - bVar10;
      dVar3 = (double)(longlong)uVar19;
      if ((longlong)uVar19 < 0) {
        dVar3 = dVar3 + dVar5;
      }
      lVar16 = local_148 << 0xf;
      puVar24 = puVar29;
      do {
        uVar31 = (uint)puVar24;
        lVar35 = *(longlong *)(param_1 + 0x10040) + lVar16;
        sVar23 = (char)(uVar31 & 3) * '\x02' + 4;
        if ((uVar31 - 4 < 4) || (puVar24 = (undefined8 *)0xc, 0xb < (int)uVar31)) {
          puVar24 = puVar29;
        }
        local_res20 = (uint)puVar24;
        puVar17 = puVar29;
        puVar36 = puVar29;
        if (0 < 1 << sVar23) {
          do {
            if (local_148 == 0x11) {
              *(undefined2 *)(lVar35 + (longlong)puVar17 * 2) = 0x7fff;
            }
            else {
              iVar12 = (int)puVar24;
              if ((int)puVar36 == 0) {
                iVar12 = 0xc;
              }
              if ((int)puVar18 < iVar12) {
                *(undefined2 *)(lVar35 + (longlong)puVar17 * 2) = 0;
              }
              else {
                dVar37 = pow(_X,((double)((int)puVar18 + 1 + -iVar12) / (double)(-iVar12 + 0x12)) *
                                dVar6);
                puVar18 = (undefined8 *)(ulonglong)local_158;
                puVar24 = puVar29;
                if (iVar12 == 0) {
                  puVar24 = (undefined8 *)0x30;
                }
                puVar20 = puVar29;
                if (7 < (int)uVar31) {
                  puVar20 = (undefined8 *)0x90;
                }
                dVar37 = (dVar37 * dVar8 - dVar8) *
                         (dVar3 / (double)*(int *)(*(longlong *)
                                                    ((longlong)puVar20 +
                                                    ((ulonglong)(uVar31 & 3) + 0x10c) * 0x120 +
                                                    param_1 + (longlong)puVar24) +
                                                  (longlong)puVar17 * 4)) + dVar4;
                if (dVar7 <= dVar37) {
                  dVar37 = dVar7;
                }
                *(short *)(lVar35 + (longlong)puVar17 * 2) = (short)(longlong)dVar37;
              }
            }
            puVar24 = (undefined8 *)(ulonglong)local_res20;
            puVar17 = (undefined8 *)((longlong)puVar17 + 1);
            puVar36 = (undefined8 *)(ulonglong)((int)puVar36 + 1);
          } while ((longlong)puVar17 < (longlong)(1 << sVar23));
        }
        puVar24 = (undefined8 *)(ulonglong)(uVar31 + 1);
        lVar16 = lVar16 + 0x800;
      } while ((int)(uVar31 + 1) < 0x10);
      local_158 = (int)puVar18 + 1;
      puVar18 = (undefined8 *)(ulonglong)local_158;
      local_148 = local_148 + 1;
    } while ((int)local_158 < 0x12);
    if (cVar9 == '\0') {
      *(undefined2 *)(param_1 + 0x13668) = 0;
      thunk_FUN_182dda000(param_1 + 0x12c48);
    }
  }
  lVar16 = *(longlong *)(param_1 + 0x10150);
  uVar31 = *(uint *)(lVar16 + 0xb4);
  iVar12 = *(int *)(lVar16 + 0x4c);
  iVar13 = *(int *)(lVar16 + 0x48);
  if (0 < *(int *)(lVar16 + 4)) {
    puVar18 = (undefined8 *)(param_1 + 0x100b0);
    puVar24 = puVar29;
    do {
      cVar9 = (**(code **)(*(longlong *)*puVar18 + 0x18))
                        ((longlong *)*puVar18,param_1,
                         (ulonglong)(iVar12 + -1 + uVar31) / (ulonglong)uVar31,
                         (ulonglong)((uVar31 - 1) + iVar13) / (ulonglong)uVar31);
      if (cVar9 == '\0') {
        thunk_FUN_182dc1d60(*(undefined8 *)(param_1 + 0x10150),&DAT_18393797c,0,
                            "Unable to initialize frame encoder, aborting\n");
        *(undefined1 *)(param_1 + 0x13686) = 1;
      }
      uVar30 = (int)puVar24 + 1;
      puVar24 = (undefined8 *)(ulonglong)uVar30;
      puVar18 = puVar18 + 1;
    } while ((int)uVar30 < *(int *)(*(longlong *)(param_1 + 0x10150) + 4));
  }
  if (0 < *(int *)(*(longlong *)(param_1 + 0x10150) + 4)) {
    plVar25 = (longlong *)(param_1 + 0x100b0);
    puVar18 = puVar29;
    do {
      thunk_FUN_1830094a0(*plVar25 + 0x50);
      WaitForSingleObject(*(HANDLE *)(*plVar25 + 0x68),0xffffffff);
      plVar25 = plVar25 + 1;
      uVar31 = (int)puVar18 + 1;
      puVar18 = (undefined8 *)(ulonglong)uVar31;
    } while ((int)uVar31 < *(int *)(*(longlong *)(param_1 + 0x10150) + 4));
  }
  if (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x78) != 0) {
    thunk_FUN_183046a20(*(undefined8 *)(param_1 + 0x10160),param_1 + 0x102e8);
  }
  cVar9 = thunk_FUN_183044d40(*(undefined8 *)(param_1 + 0x10160));
  if (cVar9 == '\0') {
    *(undefined1 *)(param_1 + 0x13686) = 1;
  }
  cVar9 = thunk_FUN_183052960(*(undefined8 *)(param_1 + 0x10168));
  if (cVar9 == '\0') {
    *(undefined1 *)(param_1 + 0x13686) = 1;
  }
  puVar21 = (undefined4 *)(param_1 + 0x13a20);
  lVar16 = 0x40;
  do {
    puVar21[-0x40] = 0;
    *puVar21 = 0;
    puVar21 = puVar21 + 1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  pcVar28 = *(char **)(*(longlong *)(param_1 + 0x10150) + 0x370);
  if ((pcVar28 != (char *)0x0) && (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x334) != 0)) {
    lVar16 = -1;
    do {
      lVar35 = lVar16;
      lVar16 = lVar35 + 1;
    } while (pcVar28[lVar16] != '\0');
    lVar16 = thunk_FUN_182dc2240(lVar35 + 7);
    if (lVar16 == 0) {
      thunk_FUN_182dc1d60(0,&DAT_18393797c,0,"unable to allocate memory for filename\n");
      *(undefined1 *)(param_1 + 0x13686) = 1;
    }
    else {
      lVar35 = lVar16 - (longlong)pcVar28;
      do {
        cVar9 = *pcVar28;
        pcVar28[lVar35] = cVar9;
        pcVar28 = pcVar28 + 1;
      } while (cVar9 != '\0');
      pcVar28 = (char *)(lVar16 + -1);
      do {
        pcVar26 = pcVar28;
        pcVar28 = pcVar26 + 1;
      } while (pcVar26[1] != '\0');
      *(undefined4 *)(pcVar26 + 1) = s__temp_18397b070._0_4_;
      *(undefined2 *)(pcVar26 + 5) = s__temp_18397b070._4_2_;
      uVar15 = thunk_FUN_182dc2180(lVar16);
      *(undefined8 *)(param_1 + 0x10148) = uVar15;
      FUN_18001c2f1(lVar16);
    }
    if (*(longlong *)(param_1 + 0x10148) == 0) {
      thunk_FUN_182dc1ef0(0,&DAT_18393797c,0,"Analysis save: failed to open file %s.temp\n",
                          *(undefined8 *)(*(longlong *)(param_1 + 0x10150) + 0x370));
      *(undefined1 *)(param_1 + 0x13686) = 1;
    }
  }
  if ((*(longlong *)(*(longlong *)(param_1 + 0x10150) + 0x378) != 0) &&
     (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x334) != 0)) {
    lVar16 = thunk_FUN_182dc2180();
    *(longlong *)(param_1 + 0x10140) = lVar16;
    if (lVar16 == 0) {
      thunk_FUN_182dc1ef0(0,&DAT_18393797c,0,"Analysis load: failed to open file %s\n",
                          *(undefined8 *)(*(longlong *)(param_1 + 0x10150) + 0x378));
      *(undefined1 *)(param_1 + 0x13686) = 1;
    }
  }
  lVar16 = *(longlong *)(param_1 + 0x10150);
  if ((*(int *)(lVar16 + 0x2d8) != 0) || (*(int *)(lVar16 + 0x2dc) != 0)) {
    pcVar28 = *(char **)(lVar16 + 0x170);
    if (*(char **)(lVar16 + 0x170) == (char *)0x0) {
      pcVar28 = PTR_s_x265_analysis_dat_183dba268;
    }
    lVar35 = -1;
    if (*(int *)(lVar16 + 0x1f8) != 0) {
      do {
        lVar16 = lVar35;
        lVar35 = lVar16 + 1;
      } while (pcVar28[lVar16 + 1] != '\0');
      lVar16 = thunk_FUN_182dc2240(lVar16 + 7);
      if (lVar16 == 0) {
        thunk_FUN_182dc1d60(0,&DAT_18393797c,0,"unable to allocate memory for filename\n");
        *(undefined1 *)(param_1 + 0x13686) = 1;
      }
      else {
        pcVar26 = pcVar28;
        do {
          cVar9 = *pcVar26;
          pcVar26[lVar16 - (longlong)pcVar28] = cVar9;
          pcVar26 = pcVar26 + 1;
        } while (cVar9 != '\0');
        pcVar26 = (char *)(lVar16 + -1);
        do {
          pcVar27 = pcVar26;
          pcVar26 = pcVar27 + 1;
        } while (pcVar27[1] != '\0');
        *(undefined4 *)(pcVar27 + 1) = s__temp_18397b070._0_4_;
        *(undefined2 *)(pcVar27 + 5) = s__temp_18397b070._4_2_;
        uVar15 = thunk_FUN_182dc2180(lVar16);
        *(undefined8 *)(param_1 + 0x10148) = uVar15;
        FUN_18001c2f1(lVar16);
      }
      if (*(longlong *)(param_1 + 0x10148) == 0) {
        thunk_FUN_182dc1ef0(0,&DAT_18393797c,0,"Analysis 2 pass: failed to open file %s.temp\n",
                            pcVar28);
        *(undefined1 *)(param_1 + 0x13686) = 1;
      }
    }
    if (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x1fc) != 0) {
      lVar16 = thunk_FUN_182dc2180(pcVar28);
      *(longlong *)(param_1 + 0x10140) = lVar16;
      if (lVar16 == 0) {
        thunk_FUN_182dc1ef0(0,&DAT_18393797c,0,"Analysis 2 pass: failed to open file %s\n",pcVar28);
        *(undefined1 *)(param_1 + 0x13686) = 1;
      }
    }
  }
  lVar16 = *(longlong *)(param_1 + 0x10150);
  if ((((*(int *)(lVar16 + 0x94) != 0) || (*(int *)(lVar16 + 0xa4) != 0)) ||
      (*(int *)(lVar16 + 4) != 1)) || (cVar9 = '\x01', *(int *)(lVar16 + 0x2b4) != 1)) {
    cVar9 = '\0';
  }
  *(char *)(param_1 + 0x13685) = cVar9;
  bVar10 = thunk_FUN_182dccce0();
  *(byte *)(param_1 + 0x13686) = *(byte *)(param_1 + 0x13686) | bVar10;
  uVar15 = thunk_FUN_182dc2250();
  *(undefined8 *)(param_1 + 0x10068) = uVar15;
  *(bool *)(param_1 + 0x12c40) = *(int *)(*(longlong *)(param_1 + 0x10150) + 0x70) != 0;
  if ((*(short *)(lVar33 + 0x2a0) != 0) || (*(short *)(lVar33 + 0x2a2) != 0)) {
    puVar29 = (undefined8 *)0x1;
  }
  *(char *)(param_1 + 0x13684) = (char)puVar29;
  if (*(int *)(param_1 + 0x13b60) != 0) {
    uVar14 = (**(code **)(*(longlong *)(param_1 + 0x13b68) + 8))
                       (*(undefined8 *)(*(longlong *)(param_1 + 0x10150) + 0x300));
    *(undefined4 *)(param_1 + 0x13b78) = uVar14;
  }
  lVar33 = *(longlong *)(param_1 + 0x10150);
  if (*(int *)(lVar33 + 0x394) == 0) {
    return;
  }
  lVar33 = (longlong)
           ((*(int *)(lVar33 + 0xa4) + *(int *)(lVar33 + 0x90)) * *(int *)(lVar33 + 0x328) * 3);
  _Size = lVar33 * 8;
  pvVar22 = (void *)thunk_FUN_182dc2240(_Size);
  *(void **)(param_1 + 0x13b98) = pvVar22;
  if (pvVar22 != (void *)0x0) {
    memset(pvVar22,0,_Size);
    pvVar22 = (void *)thunk_FUN_182dc2240(_Size);
    *(void **)(param_1 + 0x13b90) = pvVar22;
    if (pvVar22 != (void *)0x0) {
      memset(pvVar22,0,_Size);
      _Size = lVar33 * 4;
      pvVar22 = (void *)thunk_FUN_182dc2240(_Size);
      *(void **)(param_1 + 0x13ba0) = pvVar22;
      if (pvVar22 != (void *)0x0) {
        memset(pvVar22,0,_Size);
        return;
      }
    }
  }
  thunk_FUN_182dc1d60(0,&DAT_18393797c,0,"malloc of size %d failed\n",_Size);
LAB_182ddea5b:
  *(undefined1 *)(param_1 + 0x13686) = 1;
  return;
}


