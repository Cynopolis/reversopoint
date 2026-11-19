/* 0x1829473f0 size=0x18fa
   WaitForSingleObjectEx
*/


void FUN_1829473f0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  uint *param_5)

{
  byte *pbVar1;
  longlong *plVar2;
  int *piVar3;
  byte bVar4;
  bool bVar5;
  double dVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  char *pcVar15;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  bool bVar23;
  uint local_res8;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  
  lVar21 = (longlong)*(int *)(param_1 + 0x1cc08) * *(longlong *)(param_1 + 0x1cbc0);
  uVar22 = 0;
  local_res8 = 0;
  local_6c = 0;
  local_68 = 0;
  lVar21 = lVar21 + SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar21),8);
  iVar9 = (int)(lVar21 >> 6) - (int)(lVar21 >> 0x3f);
  FUN_180069520();
  if (*(int *)(param_1 + 0x259a0) != 0) {
    *(undefined4 *)(param_1 + 0x1b344) = 0;
    *(undefined4 *)(param_1 + 0x259a0) = 0;
  }
  if (*(int *)(param_1 + 0x23ab0) == 2) {
    if (*(int *)(param_1 + 0x1c0d4) != 0) {
      *(int *)(param_1 + 0x21084) = *(int *)(param_1 + 0x25000);
      *(int *)(param_1 + 0x23a7c) =
           (int)((double)*(int *)(param_1 + 0x25000) * *(double *)(param_1 + 0x21098));
    }
  }
  else {
    *(int *)(param_1 + 0x21084) =
         (int)((double)*(int *)(param_1 + 0x23a7c) / *(double *)(param_1 + 0x21098));
  }
  *(undefined8 *)(param_1 + 0x1c0d8) = 0;
  *(undefined4 *)(param_1 + 0x1976c) = 0;
  *(undefined8 *)(param_1 + 0x1975c) = 1;
  if (*(int *)(param_1 + 0x23ab0) == 2) {
    iVar8 = *(int *)(param_1 + 0x1975c);
    if (*(int *)(param_1 + 0x23a70) < 0x191) {
      iVar8 = 0;
    }
    *(int *)(param_1 + 0x1975c) = iVar8;
  }
  *(uint *)(param_1 + 0x1c0f0) = (uint)(*(int *)(param_1 + 0x1ce00) != 0);
  if ((((*(int *)(param_1 + 0x1c9bc) == 0) || ((*(byte *)(param_1 + 0x1b34c) & 1) != 0)) ||
      ((*(int *)(param_1 + 0x1cb9c) != 0 &&
       (*(uint *)(param_1 + 0x1ceb4) % *(uint *)(param_1 + 0x1ceb8) == 0)))) &&
     (*(undefined4 *)(param_1 + 0x1b344) = 0, *(int *)(param_1 + 0x1cb80) == 4)) {
    thunk_FUN_182af2670(param_1 + 0x259b0);
  }
  *(undefined4 *)(param_1 + 0x26368) = 1;
  if (*(int *)(param_1 + 0x1b344) == 0) {
LAB_182947676:
    if (*(char *)(param_1 + 0x13fe0) == '\0') {
      *(undefined2 *)(param_1 + 0x13fe1) = 0;
    }
    else {
      *(undefined2 *)(param_1 + 0x13fe1) = 0x101;
    }
    *(undefined8 *)(param_1 + 0x13ff1) = 0;
    *(undefined8 *)(param_1 + 0x13ff9) = 0;
    *(undefined2 *)(param_1 + 0x13fef) = 0x101;
    *(undefined4 *)(param_1 + 0x13ffd) = 0;
    *(undefined4 *)(param_1 + 0x13ff5) = 0xfefe0002;
    *(undefined1 *)(param_1 + 0x13ffd) = 4;
    *(undefined2 *)(param_1 + 0x13fff) = 0x402;
    uVar7 = 0xfe;
    if (*(int *)(param_1 + 0x1cb98) == 0) {
      uVar7 = 0xf4;
    }
    *(undefined1 *)(param_1 + 0x13ffe) = uVar7;
    *(undefined4 *)(param_1 + 0x1ce00) = 0;
    *(undefined8 *)(param_1 + 0x19668) = 0x8000000080;
    *(undefined8 *)(param_1 + 0x19670) = 0x8000000080;
    *(undefined8 *)(param_1 + 0x19678) = 0x8000000080;
    *(undefined8 *)(param_1 + 0x19680) = 0x8000000080;
    *(undefined8 *)(param_1 + 0x19688) = 0x8000000080;
    *(undefined8 *)(param_1 + 0x19690) = 0x8000000080;
    *(undefined8 *)(param_1 + 0x19698) = 0x8000000080;
    *(undefined8 *)(param_1 + 0x196a0) = 0x8000000080;
    *(undefined8 *)(param_1 + 0x196a8) = 0x8000000080;
    *(undefined8 *)(param_1 + 0x196b0) = 0x8000000080;
    memset(*(void **)(param_1 + 0x23be0),0,
           (longlong)(*(int *)(param_1 + 0x1b358) * *(int *)(param_1 + 0x1b354)));
    memset(*(void **)(param_1 + 0x23be8),0,
           (longlong)(*(int *)(param_1 + 0x1b358) * *(int *)(param_1 + 0x1b354)));
  }
  else {
    uVar17 = *(uint *)(param_1 + 0x23af4);
    if ((uVar17 & 1) == 0) {
      if ((uVar17 & 2) == 0) {
        uVar18 = uVar22;
        if ((uVar17 & 4) != 0) {
          uVar18 = 3;
        }
      }
      else {
        uVar18 = 2;
      }
    }
    else {
      uVar18 = 1;
    }
    uVar13 = (undefined4)uVar18;
    if (((uVar17 & 1) != 0) &&
       ((uint)(*(int *)(param_1 + 0x1c9bc) - *(int *)(param_1 + 0x2635c)) <
        (uint)(*(int *)(param_1 + 0x1c9bc) - *(int *)(param_1 + 0x26358 + uVar18 * 4)))) {
      uVar13 = 1;
      uVar18 = 1;
    }
    if (((uVar17 & 2) != 0) &&
       ((uint)(*(int *)(param_1 + 0x1c9bc) - *(int *)(param_1 + 0x26360)) <
        (uint)(*(int *)(param_1 + 0x1c9bc) - *(int *)(param_1 + 0x26358 + uVar18 * 4)))) {
      uVar13 = 2;
      uVar18 = 2;
    }
    if (((uVar17 & 4) != 0) &&
       ((uint)(*(int *)(param_1 + 0x1c9bc) - *(int *)(param_1 + 0x26364)) <
        (uint)(*(int *)(param_1 + 0x1c9bc) - *(int *)(param_1 + 0x26358 + uVar18 * 4)))) {
      uVar13 = 3;
    }
    *(undefined4 *)(param_1 + 0x26368) = uVar13;
    if (*(int *)(param_1 + 0x1b344) == 0) goto LAB_182947676;
  }
  uVar13 = 1;
  FUN_18294afd0(param_1);
  if (*(int *)(param_1 + 0x21128) != 0) {
    lVar21 = *(longlong *)(param_1 + 0x210e8);
    if ((iVar9 < lVar21) && (0 < *(int *)(param_1 + 0x23a88))) {
      *(int *)(param_1 + 0x23a88) = *(int *)(param_1 + 0x23a88) + -1;
    }
    lVar16 = (longlong)((iVar9 * 2) / 3);
    if ((lVar16 < lVar21) && (0 < *(int *)(param_1 + 0x23a88))) {
LAB_18294780d:
      *(undefined4 *)(param_1 + 0x23a88) = uVar13;
    }
    else if ((lVar21 < (int)(iVar9 + (iVar9 >> 0x1f & 7U)) >> 3) &&
            (*(int *)(param_1 + 0x23a88) - 2U < 2)) {
      *(undefined4 *)(param_1 + 0x23a88) = 3;
    }
    else if ((lVar21 < (int)(iVar9 + (iVar9 >> 0x1f & 3U)) >> 2) &&
            (*(int *)(param_1 + 0x23a88) - 1U < 2)) {
      *(undefined4 *)(param_1 + 0x23a88) = 2;
    }
    else if ((lVar21 < lVar16) && (*(uint *)(param_1 + 0x23a88) < 2)) goto LAB_18294780d;
  }
  iVar9 = *(int *)(param_1 + 0x23a88);
  if (iVar9 < 1) {
    *(undefined4 *)(param_1 + 0x23a8c) = 0;
  }
  else {
    if (iVar9 == 1) {
      iVar8 = (*(int *)(param_1 + 0x21084) * 3) / 2;
LAB_182947858:
      *(int *)(param_1 + 0x21084) = iVar8;
    }
    else if ((iVar9 == 2) || (iVar9 == 3)) {
      iVar8 = *(int *)(param_1 + 0x21084) * 5;
      iVar8 = (int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2;
      goto LAB_182947858;
    }
    if ((*(int *)(param_1 + 0x1b344) != 0) && (0 < *(int *)(param_1 + 0x23a8c))) {
      *(int *)(param_1 + 0x23a8c) = *(int *)(param_1 + 0x23a8c) + -1;
      *(longlong *)(param_1 + 0x210f0) =
           *(longlong *)(param_1 + 0x210f0) + (longlong)*(int *)(param_1 + 0x21088);
      lVar21 = *(longlong *)(param_1 + 0x210f0);
      if (*(longlong *)(param_1 + 0x1cbc8) < *(longlong *)(param_1 + 0x210f0)) {
        lVar21 = *(longlong *)(param_1 + 0x1cbc8);
      }
      *(longlong *)(param_1 + 0x210f0) = lVar21;
      *(int *)(param_1 + 0x1c9bc) = *(int *)(param_1 + 0x1c9bc) + 1;
      *(int *)(param_1 + 0x1ceb4) = *(int *)(param_1 + 0x1ceb4) + 1;
      *(int *)(param_1 + 0x23bf0) = *(int *)(param_1 + 0x23bf0) + 1;
      *(undefined8 *)(param_1 + 0x210e8) = *(undefined8 *)(param_1 + 0x210f0);
      if (*(uint *)(param_1 + 0x1cc64) < 2) {
        return;
      }
      uVar17 = *(int *)(param_1 + 0x25d60) + 1;
      if (*(uint *)(param_1 + 0x1cc64) <= uVar17) {
        return;
      }
      do {
        lVar19 = (ulonglong)uVar17 * 0xd0;
        plVar2 = (longlong *)(lVar19 + 0x25db8 + param_1);
        *plVar2 = *plVar2 + (longlong)
                            (int)((double)*(int *)(lVar19 + 0x25d70 + param_1) /
                                 *(double *)(lVar19 + 0x25d68 + param_1));
        lVar21 = *(longlong *)(lVar19 + 0x25db8 + param_1);
        lVar16 = *(longlong *)(lVar19 + 0x25d88 + param_1);
        if (lVar16 < lVar21) {
          lVar21 = lVar16;
        }
        uVar17 = uVar17 + 1;
        *(longlong *)(lVar19 + 0x25db8 + param_1) = lVar21;
        *(longlong *)(lVar19 + 0x25db0 + param_1) = lVar21;
      } while (uVar17 < *(uint *)(param_1 + 0x1cc64));
      return;
    }
    *(int *)(param_1 + 0x23a8c) = iVar9;
  }
  iVar9 = thunk_FUN_182afd3e0(param_1);
  if (iVar9 == 0) {
    *(int *)(param_1 + 0x1c9bc) = *(int *)(param_1 + 0x1c9bc) + 1;
    *(int *)(param_1 + 0x1ceb4) = *(int *)(param_1 + 0x1ceb4) + 1;
    *(int *)(param_1 + 0x23bf0) = *(int *)(param_1 + 0x23bf0) + 1;
    return;
  }
  if (*(int *)(param_1 + 0x1cbac) == 1) {
    lVar21 = *(longlong *)(param_1 + 0x1cbc0);
    lVar16 = *(longlong *)(param_1 + 0x210e8);
    if (((lVar21 <= lVar16) && (*(int *)(param_1 + 0x210d0) != 0)) &&
       (iVar9 = (int)(*(int *)(param_1 + 0x21118) + (*(int *)(param_1 + 0x21118) >> 0x1f & 3U)) >> 2
       , iVar9 != 0)) {
      if ((lVar16 < *(longlong *)(param_1 + 0x1cbc8)) &&
         (iVar8 = (int)((*(longlong *)(param_1 + 0x1cbc8) - lVar21) / (longlong)iVar9), iVar9 = 0,
         iVar8 != 0)) {
        iVar9 = (int)((lVar16 - lVar21) / (longlong)iVar8);
      }
      *(int *)(param_1 + 0x21118) = *(int *)(param_1 + 0x21118) - iVar9;
      iVar9 = *(int *)(param_1 + 0x21118);
      if (*(int *)(param_1 + 0x21118) < *(int *)(param_1 + 0x21120)) {
        iVar9 = *(int *)(param_1 + 0x21120);
      }
      *(int *)(param_1 + 0x21118) = iVar9;
    }
  }
  if ((*(int *)(param_1 + 0x23ab0) == 2) || (0x96 < *(int *)(param_1 + 0x210c0))) {
    FUN_180069520();
    iVar9 = *(int *)(param_1 + 0x21118);
    if (*(int *)(param_1 + 0x1b344) == 0) {
      if (*(int *)(param_1 + 0x23ab0) == 2) {
        if (*(int *)(param_1 + 0x23a70) < 0x259) {
          bVar4 = (&DAT_183970ad0)[iVar9];
        }
        else {
          bVar4 = (&DAT_183970a50)[iVar9];
        }
        *(uint *)(param_1 + 0x21120) = (uint)bVar4;
        if (*(int *)(param_1 + 0x1cebc) != 0) {
          iVar9 = *(int *)(param_1 + 0x210c4) * 7;
          iVar9 = (int)(iVar9 + (iVar9 >> 0x1f & 7U)) >> 3;
          if (iVar9 < *(int *)(param_1 + 0x21120)) {
            *(int *)(param_1 + 0x21120) = iVar9;
          }
          else {
            iVar9 = *(int *)(param_1 + 0x210c4) >> 2;
            if (*(int *)(param_1 + 0x21120) < iVar9) goto LAB_182947af6;
          }
        }
      }
      else {
        *(uint *)(param_1 + 0x21120) = (uint)(byte)(&DAT_183970ad0)[iVar9];
      }
    }
    else if ((*(int *)(param_1 + 0x1cc64) == 1) &&
            ((*(int *)(param_1 + 0x1c0d0) != 0 || (*(int *)(param_1 + 0x1c0d4) != 0)))) {
      if ((1 < *(uint *)(param_1 + 0x1ceb4)) && (*(int *)(param_1 + 0x210c4) < iVar9)) {
        iVar9 = *(int *)(param_1 + 0x210c4);
      }
      if ((*(int *)(param_1 + 0x1cbac) == 2) && (iVar9 < *(int *)(param_1 + 0x21124))) {
        iVar9 = *(int *)(param_1 + 0x21124);
      }
      if (*(int *)(param_1 + 0x23ab0) == 2) {
        if (*(int *)(param_1 + 0x23a70) < 0x3e9) {
          if (*(int *)(param_1 + 0x23a70) < 400) {
            uVar17 = (uint)(byte)(&DAT_183970c50)[iVar9];
          }
          else {
            uVar17 = (uint)(byte)(&DAT_183970bd0)[iVar9];
          }
        }
        else {
          uVar17 = (uint)(byte)(&DAT_183970b50)[iVar9];
        }
        *(uint *)(param_1 + 0x21120) = uVar17;
        if (*(int *)(param_1 + 0x1cbac) == 2) {
          *(int *)(param_1 + 0x21120) = (int)(uVar17 * 0xf) >> 4;
        }
      }
      else {
        *(uint *)(param_1 + 0x21120) = (uint)(byte)(&DAT_183970c50)[iVar9];
      }
    }
    else {
      bVar4 = (&DAT_183970cd0)[iVar9];
      *(uint *)(param_1 + 0x21120) = (uint)bVar4;
      if ((*(int *)(param_1 + 0x1cbac) == 2) &&
         (iVar9 = *(int *)(param_1 + 0x21124), (int)(uint)bVar4 < iVar9)) {
        if (*(int *)(param_1 + 0x210fc) < *(int *)(param_1 + 0x2108c)) {
          *(undefined4 *)(param_1 + 0x21120) = *(undefined4 *)(param_1 + 0x1cbf4);
        }
        else {
LAB_182947af6:
          *(int *)(param_1 + 0x21120) = iVar9;
        }
      }
    }
    if (*(int *)(param_1 + 0x1cbac) == 1) {
      lVar21 = *(longlong *)(param_1 + 0x210e8);
      if (*(longlong *)(param_1 + 0x1cbc8) <= lVar21) goto LAB_182947b20;
      lVar16 = *(longlong *)(param_1 + 0x1cbc0);
      if (lVar16 < lVar21) {
        iVar9 = (int)(((lVar16 - lVar21) * 0x80) / (*(longlong *)(param_1 + 0x1cbc8) - lVar16)) *
                (*(int *)(param_1 + 0x21120) - *(int *)(param_1 + 0x2111c));
        iVar9 = ((int)(iVar9 + (iVar9 >> 0x1f & 0x7fU)) >> 7) + *(int *)(param_1 + 0x21120);
        goto LAB_182947cab;
      }
    }
  }
  else if (*(int *)(param_1 + 0x1cbac) == 2) {
    if (((*(int *)(param_1 + 0x1b344) == 0) || (*(int *)(param_1 + 0x1c0d0) != 0)) ||
       (*(int *)(param_1 + 0x1c0d4) != 0)) {
LAB_182947b20:
      iVar9 = *(int *)(param_1 + 0x2111c);
    }
    else {
      iVar9 = *(int *)(param_1 + 0x21124);
      if (iVar9 <= *(int *)(param_1 + 0x21120)) goto LAB_182947cb1;
    }
LAB_182947cab:
    *(int *)(param_1 + 0x21120) = iVar9;
  }
LAB_182947cb1:
  if (*(int *)(param_1 + 0x21114) < *(int *)(param_1 + 0x21118)) {
    *(int *)(param_1 + 0x21118) = *(int *)(param_1 + 0x21114);
  }
  if (*(int *)(param_1 + 0x21120) < *(int *)(param_1 + 0x2111c)) {
    *(int *)(param_1 + 0x21120) = *(int *)(param_1 + 0x2111c);
  }
  if (*(int *)(param_1 + 0x21118) < *(int *)(param_1 + 0x21120)) {
    *(int *)(param_1 + 0x21118) = *(int *)(param_1 + 0x21120);
  }
  iVar9 = thunk_FUN_182afd440(param_1,*(undefined4 *)(param_1 + 0x21018));
  if (*(int *)(param_1 + 0x1b344) != 0) {
    if ((*(int *)(param_1 + 0x1cc64) == 1) &&
       ((*(int *)(param_1 + 0x1c0d4) != 0 ||
        ((*(int *)(param_1 + 0x1c0d0) != 0 && (*(int *)(param_1 + 0x1ce00) == 0)))))) {
      uVar22 = 0x10;
    }
    else {
      uVar22 = 0xc0;
    }
  }
  FUN_182946aa0(param_1);
  if (*(int *)(param_1 + 0x23bc4) != 0) {
    if ((*(int *)(param_1 + 0x1cb94) == 2) && (*(int *)(param_1 + 0x1c0d0) != 0)) {
      bVar23 = true;
    }
    else {
      bVar23 = false;
    }
    if (((*(int *)(param_1 + 0x25d60) != 0) || (*(int *)(param_1 + 0x23bfc) != 0)) || (bVar23)) {
      *(undefined1 *)(param_1 + 0x13fe0) = 0;
    }
    else {
      FUN_182946db0(param_1,iVar9,0);
    }
  }
  thunk_FUN_182afcf70(param_1,&local_70,&local_78);
  iVar8 = *(int *)(param_1 + 0x21120);
  iVar11 = *(int *)(param_1 + 0x21118);
  local_74 = iVar11;
  local_64 = iVar8;
  thunk_FUN_182afd8c0(param_1);
  FUN_18294a8c0(*(undefined8 *)(param_1 + 0x1cd58),param_1);
  iVar20 = iVar8;
  iVar14 = iVar11;
  dVar6 = DAT_1839713a8;
  if ((2 < *(int *)(param_1 + 0x1cb80)) && (*(int *)(param_1 + 0x25d58) != 0)) {
    thunk_FUN_182aebe60(param_1 + 0x1a7a0,*(undefined8 *)(param_1 + 0x1cd50),
                        *(undefined8 *)(param_1 + 0x1cd50),*(int *)(param_1 + 0x25d58),1,0,0);
    dVar6 = DAT_1839713a8;
  }
LAB_182947e17:
  FUN_180069520();
  thunk_FUN_182aece10(param_1);
  if (*(int *)(param_1 + 0x1b360) == 0) {
LAB_182947ed0:
    if (*(int *)(param_1 + 0x1b344) == 0) goto LAB_182947edd;
  }
  else {
    *(undefined4 *)(param_1 + 0x23ac0) = *(undefined4 *)(param_1 + 0x23e90 + (longlong)iVar9 * 4);
    if (*(int *)(param_1 + 0x1b344) != 0) {
      if (*(int *)(param_1 + 0x1c0d4) == 0) {
        if (*(int *)(param_1 + 0x1c0d0) == 0) {
          iVar10 = *(int *)(param_1 + 0x23ac0);
          if (*(int *)(param_1 + 0x23ac4) != 0) {
            iVar10 = *(int *)(param_1 + 0x23ac4);
          }
        }
        else {
          iVar10 = *(int *)(param_1 + 0x23ac8);
          if (iVar10 == 0) goto LAB_182947e91;
        }
LAB_182947e8b:
        *(int *)(param_1 + 0x23ac0) = iVar10;
      }
      else {
        iVar10 = *(int *)(param_1 + 0x23acc);
        if (iVar10 != 0) goto LAB_182947e8b;
      }
LAB_182947e91:
      iVar10 = *(int *)(param_1 + 0x23ac0);
      if (iVar10 < 5) {
        iVar10 = 5;
      }
      if (0xfa < iVar10) {
        iVar10 = 0xfa;
      }
      *(int *)(param_1 + 0x23ac0) = iVar10;
      if (*(int *)(param_1 + 0x1cc64) == 1) {
        if (*(int *)(param_1 + 0x1ce04) != 0) {
          iVar10 = 1;
        }
        *(int *)(param_1 + 0x23ac0) = iVar10;
      }
      goto LAB_182947ed0;
    }
LAB_182947edd:
    iVar10 = FUN_18294a230(param_1);
    if (iVar10 != 0) {
      iVar9 = thunk_FUN_182afd440(param_1);
      if (*(int *)(param_1 + 0x23bc4) != 0) {
        if (*(int *)(param_1 + 0x25d60) == 0) {
          FUN_182946db0(param_1,iVar9,0);
        }
        else {
          *(undefined1 *)(param_1 + 0x13fe0) = 0;
        }
      }
      memset(*(void **)(param_1 + 0x23be0),0,
             (longlong)(*(int *)(param_1 + 0x1b358) * *(int *)(param_1 + 0x1b354)));
      memset(*(void **)(param_1 + 0x23be8),0,
             (longlong)(*(int *)(param_1 + 0x1b358) * *(int *)(param_1 + 0x1b354)));
      thunk_FUN_182aece10(param_1);
    }
    thunk_FUN_182afda40(param_1);
  }
  thunk_FUN_182aff7e0(param_1);
  if (((*(int *)(param_1 + 0x23ab0) == 0) && (*(int *)(param_1 + 0x1cbac) == 1)) &&
     (iVar10 = thunk_FUN_182afd120(param_1), iVar10 != 0)) {
    return;
  }
  iVar10 = thunk_FUN_182ae7db0();
  *(int *)(param_1 + 0x2101c) = *(int *)(param_1 + 0x2101c) - iVar10;
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x2101c)) {
    iVar10 = *(int *)(param_1 + 0x2101c);
  }
  *(int *)(param_1 + 0x2101c) = iVar10;
  FUN_180069520();
  if ((((*(int *)(param_1 + 0x23ab0) != 2) && (*(int *)(param_1 + 0x1cb9c) != 0)) &&
      (*(int *)(param_1 + 0x1b344) != 0)) &&
     ((*(int *)(param_1 + 0x23a9c) != 2 && (iVar10 = FUN_1829471b0(param_1), iVar10 != 0)))) {
    *(undefined4 *)(param_1 + 0x1b344) = 0;
    thunk_FUN_182afd3e0(param_1);
    *(undefined4 *)(param_1 + 0x1ce00) = 0;
    FUN_18294aa20(param_1);
    thunk_FUN_182afd740();
    iVar9 = thunk_FUN_182afd440(param_1,*(undefined4 *)(param_1 + 0x21018));
    thunk_FUN_182afcf70(param_1,&local_70);
    iVar8 = *(int *)(param_1 + 0x21120);
    local_74 = *(int *)(param_1 + 0x21118);
    iVar11 = local_74;
    iVar20 = iVar8;
    iVar14 = local_74;
    local_64 = iVar8;
    goto LAB_182947e17;
  }
  FUN_180069520();
  if (local_78 == 0) {
    local_78 = 1;
  }
  if (((*(int *)(param_1 + 0x23ab0) == 2) && (*(int *)(param_1 + 0x1cbac) != 1)) ||
     ((iVar9 != *(int *)(param_1 + 0x21118) ||
      ((*(int *)(param_1 + 0x21114) <= *(int *)(param_1 + 0x21118) ||
       (*(int *)(param_1 + 0x2101c) <= local_78)))))) {
    local_60 = 0;
  }
  else {
    uVar18 = (longlong)((*(int *)(param_1 + 0x2101c) - local_78) * 100) / (longlong)local_78 &
             0xffffffff;
    do {
      if ((int)uVar18 < 1) break;
      *(int *)(param_1 + 0x21118) = *(int *)(param_1 + 0x21118) + 1;
      uVar18 = (ulonglong)(uint)(int)((double)(int)uVar18 * dVar6);
    } while (*(int *)(param_1 + 0x21118) < *(int *)(param_1 + 0x21114));
    iVar11 = *(int *)(param_1 + 0x21118);
    local_60 = 1;
    local_74 = iVar11;
  }
  if ((*(int *)(param_1 + 0x1b344) == 0) && (*(int *)(param_1 + 0x1cebc) != 0)) {
    iVar11 = thunk_FUN_18294bc40(*(undefined8 *)(param_1 + 0x1cd50),
                                 (longlong)*(int *)(param_1 + 0x1b170) * 0x90 + param_1 + 0x1af20);
    if (*(int *)(param_1 + 0x1cec4) * 7 >> 3 < iVar11) {
      iVar14 = iVar9 + -1;
      if (iVar9 <= iVar20) {
        iVar14 = iVar20;
      }
      iVar11 = iVar14 + iVar20;
LAB_182948173:
      iVar10 = iVar11 >> 1;
    }
    else {
      iVar10 = iVar9;
      if (iVar11 < *(int *)(param_1 + 0x1cec4) >> 1) {
        iVar20 = iVar9 + 1;
        if (iVar14 <= iVar9) {
          iVar20 = iVar14;
        }
        iVar11 = iVar20 + 1 + iVar14;
        goto LAB_182948173;
      }
    }
    if (iVar14 < iVar10) {
      bVar23 = iVar14 != iVar9;
      iVar9 = iVar14;
    }
    else {
      if (iVar10 < iVar20) {
        iVar10 = iVar20;
      }
      bVar23 = iVar10 != iVar9;
      iVar9 = iVar10;
    }
  }
  else if ((*(int *)(param_1 + 0x23b0c) == 1) ||
          ((*(int *)(param_1 + 0x23b0c) == 2 &&
           (((*(int *)(param_1 + 0x1b344) == 0 || (*(int *)(param_1 + 0x1c0d0) != 0)) ||
            (*(int *)(param_1 + 0x1c0d4) != 0)))))) {
    iVar10 = *(int *)(param_1 + 0x2101c);
    if (((iVar10 <= local_78) || (iVar11 <= iVar9)) && ((local_70 <= iVar10 || (iVar9 <= iVar8)))) {
      if (*(int *)(param_1 + 0x1cbac) != 2) goto LAB_18294846f;
      if ((iVar9 <= *(int *)(param_1 + 0x21124)) || (*(int *)(param_1 + 0x21018) * 7 >> 3 <= iVar10)
         ) {
        iVar11 = *(int *)(param_1 + 0x1cbf4);
        if ((iVar9 <= iVar11) ||
           ((*(int *)(param_1 + 0x2108c) <= iVar10 || (*(int *)(param_1 + 0x21120) <= iVar11))))
        goto LAB_18294846f;
        *(int *)(param_1 + 0x21120) = iVar11;
      }
    }
    iVar8 = 0;
    if (*(int *)(param_1 + 0x21018) < iVar10) {
      iVar20 = iVar9 + 1;
      if (iVar14 <= iVar9) {
        iVar20 = iVar14;
      }
      iVar11 = *(int *)(param_1 + 0x1976c);
      uVar17 = (uint)uVar22;
      if ((0 < iVar11) && (local_res8 = uVar17, iVar11 < (int)uVar17)) {
        local_res8 = iVar11 + 1;
      }
      if (local_68 == 0) {
        if (local_60 == 0) {
          thunk_FUN_182afdda0(param_1);
        }
        iVar11 = thunk_FUN_182afd440(param_1,*(undefined4 *)(param_1 + 0x21018));
        for (; ((iVar11 < iVar20 || (*(int *)(param_1 + 0x1976c) < (int)local_res8)) && (iVar8 < 10)
               ); iVar8 = iVar8 + 1) {
          thunk_FUN_182afdda0(param_1,0);
          iVar11 = thunk_FUN_182afd440(param_1);
        }
        local_6c = 1;
      }
      else {
        if (local_60 == 0) {
          thunk_FUN_182afdda0(param_1,1);
        }
        iVar11 = (iVar20 + 1 + iVar14) / 2;
        if (iVar11 < 0x7f) {
          *(undefined4 *)(param_1 + 0x1976c) = 0;
          local_6c = 1;
        }
        else {
          local_res8 = uVar17;
          if (*(int *)(param_1 + 0x1976c) < (int)uVar17) {
            local_res8 = *(int *)(param_1 + 0x1976c) + 1;
          }
          local_6c = 1;
          *(int *)(param_1 + 0x1976c) = (int)(local_res8 + uVar17) / 2;
        }
      }
    }
    else {
      iVar11 = *(int *)(param_1 + 0x1976c);
      if (iVar11 == 0) {
        iVar14 = iVar20;
        if (iVar20 < iVar9) {
          iVar14 = iVar9 + -1;
        }
      }
      else {
        uVar22 = (ulonglong)(iVar11 - 1);
        if (iVar11 <= (int)local_res8) {
          uVar22 = (ulonglong)local_res8;
        }
      }
      if (local_6c == 0) {
        if (local_60 == 0) {
          thunk_FUN_182afdda0(param_1);
        }
        iVar11 = thunk_FUN_182afd440(param_1,*(undefined4 *)(param_1 + 0x21018));
        if ((*(int *)(param_1 + 0x1cbac) == 2) && (iVar11 < iVar20)) {
          iVar8 = 0;
          iVar20 = iVar11;
        }
        for (; ((iVar14 < iVar11 || ((int)uVar22 < *(int *)(param_1 + 0x1976c))) && (iVar8 < 10));
            iVar8 = iVar8 + 1) {
          thunk_FUN_182afdda0(param_1,0);
          iVar11 = thunk_FUN_182afd440(param_1);
        }
      }
      else {
        if (local_60 == 0) {
          thunk_FUN_182afdda0(param_1,1);
        }
        iVar11 = (iVar14 + iVar20) / 2;
        if (iVar11 < 0x7f) {
          *(undefined4 *)(param_1 + 0x1976c) = 0;
        }
        else {
          *(int *)(param_1 + 0x1976c) = (int)(local_res8 + (int)uVar22) / 2;
        }
      }
      local_68 = 1;
    }
    iVar10 = iVar14;
    if ((iVar11 <= iVar14) && (iVar10 = iVar11, iVar11 < iVar20)) {
      iVar10 = iVar20;
    }
    uVar17 = *(uint *)(param_1 + 0x1976c);
    uVar12 = local_res8;
    if (((int)local_res8 <= (int)uVar17) && (uVar12 = uVar17, (int)(uint)uVar22 < (int)uVar17)) {
      uVar12 = (uint)uVar22;
    }
    *(uint *)(param_1 + 0x1976c) = uVar12;
    bVar23 = iVar10 != iVar9;
    iVar8 = local_64;
    iVar9 = iVar10;
  }
  else {
LAB_18294846f:
    bVar23 = false;
  }
  lVar21 = param_1 + 0x1a7a0;
  bVar5 = false;
  if (*(int *)(param_1 + 0x1ce04) == 0) {
    bVar5 = bVar23;
  }
  if (bVar5) {
    thunk_FUN_182afd740(param_1);
    iVar11 = local_74;
    goto LAB_182947e17;
  }
  if ((*(int *)(param_1 + 0x1cec0) != 0) && (*(int *)(param_1 + 0x24fc8) == 0)) {
    uVar13 = thunk_FUN_18294bc40(*(undefined8 *)(param_1 + 0x1cd50),
                                 (longlong)*(int *)(param_1 + 0x1b170) * 0x90 + 0x780 + lVar21);
    *(undefined4 *)(param_1 + 0x1cec4) = uVar13;
  }
  iVar8 = 0;
  if (((*(int *)(param_1 + 0x1b348) != 0) &&
      (lVar16 = *(longlong *)(param_1 + 0x1b388), *(int *)(param_1 + 0x1b344) != 0)) &&
     (iVar11 = iVar8, 0 < *(int *)(param_1 + 0x1b354) + 1)) {
    do {
      iVar20 = iVar8;
      if (0 < *(int *)(param_1 + 0x1b358) + 1) {
        do {
          if (*(char *)(lVar16 + 2) != '\0') {
            *(undefined4 *)
             (*(longlong *)(param_1 + 0x25988) +
             (longlong)((*(int *)(param_1 + 0x1b35c) + 1) * iVar11 + iVar20) * 4) =
                 *(undefined4 *)(lVar16 + 4);
          }
          *(undefined4 *)
           (*(longlong *)(param_1 + 0x25990) +
           (longlong)((*(int *)(param_1 + 0x1b35c) + 1) * iVar11 + iVar20) * 4) =
               *(undefined4 *)(param_1 + 0x1c0e4 + (ulonglong)*(byte *)(lVar16 + 2) * 4);
          pbVar1 = (byte *)(lVar16 + 2);
          lVar16 = lVar16 + 0x4c;
          iVar14 = (*(int *)(param_1 + 0x1b35c) + 1) * iVar11 + iVar20;
          iVar20 = iVar20 + 1;
          *(uint *)(*(longlong *)(param_1 + 0x25998) + (longlong)iVar14 * 4) = (uint)*pbVar1;
        } while (iVar20 < *(int *)(param_1 + 0x1b358) + 1);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_1 + 0x1b354) + 1);
  }
  pcVar15 = *(char **)(param_1 + 0x1b390);
  *(undefined4 *)(param_1 + 0x23b84) = 0;
  if ((*(int *)(param_1 + 0x1b344) != 0) && (iVar11 = iVar8, 0 < *(int *)(param_1 + 0x1b354))) {
    do {
      iVar20 = iVar8;
      if (0 < *(int *)(param_1 + 0x1b358)) {
        do {
          if ((*pcVar15 == '\a') && (pcVar15[2] == '\x01')) {
            *(int *)(param_1 + 0x23b84) = *(int *)(param_1 + 0x23b84) + 1;
          }
          pcVar15 = pcVar15 + 0x4c;
          iVar20 = iVar20 + 1;
        } while (iVar20 < *(int *)(param_1 + 0x1b358));
      }
      pcVar15 = pcVar15 + 0x4c;
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_1 + 0x1b354));
  }
  if (*(int *)(param_1 + 0x1cc64) == 1) {
    thunk_FUN_182afe1a0(param_1,lVar21,param_1 + 0x12000);
  }
  if (*(int *)(param_1 + 0x1b344) == 0) {
    *(undefined4 *)(param_1 + 0x1c0cc) = 1;
  }
  if ((*(int *)(param_1 + 0x1cc38) == 0) && (*(int *)(param_1 + 0x1c0d0) != 0)) {
    *(undefined4 *)(param_1 + 0x1c0dc) = 2;
  }
  else {
    *(undefined4 *)(param_1 + 0x1c0dc) = 0;
  }
  *(longlong *)(param_1 + 0x1af18) =
       param_1 + 0x1af20 + (longlong)*(int *)(param_1 + 0x1b170) * 0x90;
  if ((((*(int *)(param_1 + 0x1cb80) - 1U < 3) && (*(int *)(param_1 + 0x1cb94) == 0)) &&
      ((*(byte *)(param_1 + 0x1ceb4) & 7) == 0)) && (*(int *)(param_1 + 0x1b344) != 0)) {
    uVar13 = FUN_182949ad0(param_1 + 0x259b0,*(undefined8 *)(param_1 + 0x1cd50),param_1);
    *(undefined4 *)(param_1 + 0x23bf8) = uVar13;
  }
  if (((*(int *)(param_1 + 0x1cb80) == 4) && (*(int *)(param_1 + 0x1cb94) == 0)) &&
     (((*(byte *)(param_1 + 0x1ceb4) & 7) == 0 && (*(int *)(param_1 + 0x1b344) != 0)))) {
    FUN_182949c80(param_1);
  }
  if (*(int *)(param_1 + 0x23c1c) == 0) {
    thunk_FUN_18294e060(param_1,lVar21);
  }
  else {
    ReleaseSemaphore(*(HANDLE *)(param_1 + 0x23c68),1,(LPLONG)0x0);
    *(undefined4 *)(param_1 + 0x23c24) = 1;
    WaitForSingleObjectEx(*(HANDLE *)(param_1 + 0x23c70),0xffffffff,0);
  }
  FUN_18294b110(param_1);
  if (*(int *)(param_1 + 0x1cc38) != 0) {
    *(undefined4 *)(param_1 + 0x1c0e0) = 0;
  }
  thunk_FUN_182ae8040(param_1,param_3,param_4,param_2);
  *(undefined4 *)(param_1 + 0x1b340) = *(undefined4 *)(param_1 + 0x1b344);
  *(longlong *)(param_1 + 0x210c8) = *(longlong *)(param_1 + 0x210c8) + *param_2;
  *(int *)(param_1 + 0x2101c) = (int)*param_2 << 3;
  if ((1 < *(uint *)(param_1 + 0x1cc64)) &&
     (uVar17 = *(int *)(param_1 + 0x25d60) + 1, uVar17 < *(uint *)(param_1 + 0x1cc64))) {
    do {
      uVar22 = (ulonglong)uVar17;
      uVar17 = uVar17 + 1;
      plVar2 = (longlong *)(uVar22 * 0xd0 + 0x25e10 + param_1);
      *plVar2 = *plVar2 + *param_2;
    } while (uVar17 < *(uint *)(param_1 + 0x1cc64));
  }
  if (local_60 == 0) {
    thunk_FUN_182afdda0(param_1,2);
  }
  *(undefined4 *)(param_1 + 0x21020 + (longlong)*(int *)(param_1 + 0x1b344) * 4) =
       *(undefined4 *)(param_1 + 0x1b370);
  if ((((*(int *)(param_1 + 0x1b344) != 0) ||
       (thunk_FUN_182afcec0(param_1), *(int *)(param_1 + 0x1b344) != 0)) &&
      (*(int *)(param_1 + 0x210c4) =
            *(int *)(param_1 + 0x1b370) + *(int *)(param_1 + 0x210c4) * 3 + 2 >> 2,
      *(int *)(param_1 + 0x1b344) != 0)) &&
     ((1 < *(uint *)(param_1 + 0x1cc64) ||
      ((*(int *)(param_1 + 0x1c0d0) == 0 && (*(int *)(param_1 + 0x1c0d4) == 0)))))) {
    *(int *)(param_1 + 0x210bc) = *(int *)(param_1 + 0x210bc) + iVar9;
    *(int *)(param_1 + 0x210c0) = *(int *)(param_1 + 0x210c0) + 1;
    iVar8 = *(int *)(param_1 + 0x210bc) / *(int *)(param_1 + 0x210c0);
    if (*(int *)(param_1 + 0x23ab0) != 2) {
      if (*(int *)(param_1 + 0x210c0) < 0x97) {
        iVar8 = (iVar8 + *(int *)(param_1 + 0x21114) + 1) / 2;
      }
      *(int *)(param_1 + 0x210b8) = iVar8;
      if (iVar9 <= iVar8) goto LAB_1829488b6;
      iVar8 = iVar9 + -1;
    }
    *(int *)(param_1 + 0x210b8) = iVar8;
  }
LAB_1829488b6:
  if (*(int *)(param_1 + 0x1b348) == 0) {
    iVar9 = *(int *)(param_1 + 0x2101c);
    *(longlong *)(param_1 + 0x210f0) = *(longlong *)(param_1 + 0x210f0) - (longlong)iVar9;
  }
  else {
    iVar9 = *(int *)(param_1 + 0x2101c);
    *(longlong *)(param_1 + 0x210f0) =
         *(longlong *)(param_1 + 0x210f0) + (longlong)(*(int *)(param_1 + 0x21088) - iVar9);
  }
  lVar21 = *(longlong *)(param_1 + 0x1cbc8);
  lVar16 = *(longlong *)(param_1 + 0x210f0);
  if (lVar21 < *(longlong *)(param_1 + 0x210f0)) {
    lVar16 = lVar21;
  }
  *(longlong *)(param_1 + 0x210f0) = lVar16;
  if ((*(int *)(param_1 + 0x21128) == 0) && (*(int *)(param_1 + 0x1cb94) != 0)) {
    if (lVar16 < -lVar21) {
      lVar16 = -lVar21;
    }
    *(longlong *)(param_1 + 0x210f0) = lVar16;
  }
  iVar8 = *(int *)(param_1 + 0x21018) + *(int *)(param_1 + 0x210f8) * 2 +
          *(int *)(param_1 + 0x210f8) + 2;
  *(int *)(param_1 + 0x210f8) = (int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2;
  iVar9 = iVar9 + *(int *)(param_1 + 0x210fc) * 3 + 2;
  *(int *)(param_1 + 0x210fc) = (int)(iVar9 + (iVar9 >> 0x1f & 3U)) >> 2;
  iVar9 = *(int *)(param_1 + 0x21100) * 0x1f + 0x10 + *(int *)(param_1 + 0x21018);
  *(int *)(param_1 + 0x21100) = (int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5;
  iVar9 = *(int *)(param_1 + 0x2101c) + 0x10 + *(int *)(param_1 + 0x21104) * 0x1f;
  *(int *)(param_1 + 0x21104) = (int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5;
  *(longlong *)(param_1 + 0x21108) =
       *(longlong *)(param_1 + 0x21108) + (longlong)*(int *)(param_1 + 0x2101c);
  *(int *)(param_1 + 0x21110) =
       *(int *)(param_1 + 0x21110) + (*(int *)(param_1 + 0x21018) - *(int *)(param_1 + 0x2101c));
  *(undefined8 *)(param_1 + 0x210e8) = *(undefined8 *)(param_1 + 0x210f0);
  if ((1 < *(uint *)(param_1 + 0x1cc64)) &&
     (uVar17 = *(int *)(param_1 + 0x25d60) + 1, uVar17 < *(uint *)(param_1 + 0x1cc64))) {
    do {
      lVar19 = (ulonglong)uVar17 * 0xd0;
      iVar9 = (int)((double)*(int *)(lVar19 + 0x25d70 + param_1) /
                    *(double *)(lVar19 + 0x25d68 + param_1) - (double)*(int *)(param_1 + 0x2101c));
      plVar2 = (longlong *)(lVar19 + 0x25db8 + param_1);
      *plVar2 = *plVar2 + (longlong)iVar9;
      lVar21 = *(longlong *)(lVar19 + 0x25d88 + param_1);
      lVar16 = *(longlong *)(lVar19 + 0x25db8 + param_1);
      if (lVar21 < lVar16) {
        lVar16 = lVar21;
      }
      uVar17 = uVar17 + 1;
      *(longlong *)(lVar19 + 0x25db8 + param_1) = lVar16;
      plVar2 = (longlong *)(lVar19 + 0x25dc0 + param_1);
      *plVar2 = *plVar2 + (longlong)*(int *)(param_1 + 0x2101c);
      piVar3 = (int *)(lVar19 + 0x25dc8 + param_1);
      *piVar3 = *piVar3 + iVar9;
      *(longlong *)(lVar19 + 0x25db0 + param_1) = lVar16;
    } while (uVar17 < *(uint *)(param_1 + 0x1cc64));
  }
  if (*(int *)(param_1 + 0x1b344) == 0) {
    plVar2 = (longlong *)(param_1 + 0x24fe8);
    *plVar2 = *plVar2 + (longlong)(*(int *)(param_1 + 0x21018) - *(int *)(param_1 + 0x2101c));
    if (*plVar2 < 0) {
      *(undefined8 *)(param_1 + 0x24fe8) = 0;
    }
  }
  else if ((*(int *)(param_1 + 0x1c0d0) != 0) || (*(int *)(param_1 + 0x1c0d4) != 0)) {
    plVar2 = (longlong *)(param_1 + 0x24ff8);
    *plVar2 = *plVar2 + (longlong)(*(int *)(param_1 + 0x21018) - *(int *)(param_1 + 0x2101c));
    if (*plVar2 < 0) {
      *(undefined8 *)(param_1 + 0x24ff8) = 0;
    }
  }
  if (*(int *)(param_1 + 0x1b344) != 0) {
    uVar13 = *(undefined4 *)(param_1 + 0x23ac0);
    if (*(int *)(param_1 + 0x1c0d4) == 0) {
      if (*(int *)(param_1 + 0x1c0d0) == 0) {
        *(undefined4 *)(param_1 + 0x23ac4) = uVar13;
        *(undefined4 *)(param_1 + 0x23ad0) = *(undefined4 *)(param_1 + 0x1b370);
        *(undefined4 *)(param_1 + 0x23e90 + (longlong)*(int *)(param_1 + 0x1b370) * 4) =
             *(undefined4 *)(param_1 + 0x23ac0);
      }
      else {
        *(undefined4 *)(param_1 + 0x23ac8) = uVar13;
        *(undefined4 *)(param_1 + 0x23ad4) = *(undefined4 *)(param_1 + 0x1b370);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x23acc) = uVar13;
      *(undefined4 *)(param_1 + 0x23ad8) = *(undefined4 *)(param_1 + 0x1b370);
    }
  }
  uVar17 = *(uint *)(param_1 + 0x1c0d0);
  if (uVar17 == 1) {
    *(uint *)(param_1 + 0x1b34c) = *(uint *)(param_1 + 0x1b34c) | 2;
  }
  else {
    *(uint *)(param_1 + 0x1b34c) = *(uint *)(param_1 + 0x1b34c) & 0xfffffffd;
  }
  if (*(int *)(param_1 + 0x1c0d4) == 1) {
    *(uint *)(param_1 + 0x1b34c) = *(uint *)(param_1 + 0x1b34c) | 4;
  }
  else {
    *(uint *)(param_1 + 0x1b34c) = *(uint *)(param_1 + 0x1b34c) & 0xfffffffb;
  }
  if ((*(uint *)(param_1 + 0x1c0cc) & uVar17) == 0) {
    if (uVar17 != *(uint *)(param_1 + 0x1c0cc)) {
      *(undefined4 *)(param_1 + 0x1ce08) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1ce08) = 1;
  }
  if ((*(uint *)(param_1 + 0x1c0cc) & *(uint *)(param_1 + 0x1c0d4)) == 0) {
    if (*(uint *)(param_1 + 0x1c0d4) != *(uint *)(param_1 + 0x1c0cc)) {
      *(undefined4 *)(param_1 + 0x1ce0c) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1ce0c) = 1;
  }
  if ((*(uint *)(param_1 + 0x1c0d0) & *(uint *)(param_1 + 0x1c0d4)) == 0) {
    if (*(uint *)(param_1 + 0x1c0d4) != *(uint *)(param_1 + 0x1c0d0)) {
      *(undefined4 *)(param_1 + 0x1ce10) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1ce10) = 1;
  }
  *(undefined4 *)(param_1 + 0x23af4) = 7;
  uVar13 = *(undefined4 *)(param_1 + 0x23af4);
  if (*(int *)(param_1 + 0x1ce08) != 0) {
    uVar13 = 5;
  }
  *(undefined4 *)(param_1 + 0x23af4) = uVar13;
  if (*(int *)(param_1 + 0x1ce0c) != 0) {
    *(uint *)(param_1 + 0x23af4) = *(uint *)(param_1 + 0x23af4) & 0xfffffffb;
  }
  if (*(int *)(param_1 + 0x1ce10) != 0) {
    *(uint *)(param_1 + 0x23af4) = *(uint *)(param_1 + 0x23af4) & 0xfffffffb;
  }
  if (*(int *)(param_1 + 0x1cc38) == 0) {
    if (((*(int *)(param_1 + 0x1cc18) == 0) || (*(int *)(param_1 + 0x1c0d4) == 0)) ||
       (*(int *)(param_1 + 0x1b344) == 0)) {
      FUN_18294ab80(param_1);
    }
    else {
      FUN_18294aab0(param_1);
    }
  }
  if (*(int *)(param_1 + 0x1b344) == 0) {
    *param_5 = *(uint *)(param_1 + 0x1b34c) | 1;
    *(undefined4 *)(param_1 + 0x1b344) = 1;
    *(undefined4 *)(param_1 + 0x23af0) = 100;
  }
  else {
    *param_5 = *(uint *)(param_1 + 0x1b34c) & 0xfffffffe;
    *(undefined4 *)(param_1 + 0x23af0) = *(undefined4 *)(param_1 + 0x23aec);
  }
  *(undefined2 *)(param_1 + 0x13fe1) = 0;
  *(undefined1 *)(param_1 + 0x13ff0) = 0;
  if (*(int *)(param_1 + 0x1b348) != 0) {
    *(int *)(param_1 + 0x1c9bc) = *(int *)(param_1 + 0x1c9bc) + 1;
    *(int *)(param_1 + 0x1ceb4) = *(int *)(param_1 + 0x1ceb4) + 1;
    *(int *)(param_1 + 0x23bf0) = *(int *)(param_1 + 0x23bf0) + 1;
  }
  return;
}


