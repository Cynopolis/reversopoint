/* 0x18294d2a0 size=0xa11
   WaitForSingleObjectEx
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_18294d2a0(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 *param_7,int param_8)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  int *piVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  uint uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  double dVar24;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  longlong local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined4 *local_88;
  LARGE_INTEGER local_80;
  LARGE_INTEGER local_78;
  LARGE_INTEGER local_70;
  LARGE_INTEGER local_68;
  LARGE_INTEGER local_60;
  LARGE_INTEGER local_58;
  LARGE_INTEGER local_50;
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_183dc69c0 ^ (ulonglong)auStack_f8;
  uVar18 = 0;
  local_b8 = param_5;
  local_98 = param_6;
  local_90 = param_7;
  local_c8 = 0;
  if (param_1 != 0) {
    local_a0 = param_1 + 0x1a7a0;
    local_c0 = param_1;
    local_b0 = param_4;
    local_a8 = param_3;
    local_88 = param_2;
    iVar12 = __intrinsic_setjmp(param_1 + 0x1a800,auStack_f8);
    lVar6 = local_c0;
    if (iVar12 != 0) {
      *(undefined4 *)(local_c0 + 0x1a7f8) = 0;
      FUN_180069520();
      return 7;
    }
    *(undefined4 *)(local_c0 + 0x1a7f8) = 1;
    QueryPerformanceCounter(&local_60);
    lVar7 = local_a0;
    *(undefined8 *)(lVar6 + 0x1cd38) = 0;
    uVar23 = extraout_XMM0_Da;
    if (((*(int *)(lVar6 + 0x1cc38) == 0) && (*(int *)(lVar6 + 0x1cc18) != 0)) &&
       (*(int *)(lVar6 + 0x1cdfc) != 0)) {
      lVar14 = thunk_FUN_182af0cb0(*(undefined8 *)(lVar6 + 0x1cd30),*(undefined4 *)(lVar6 + 0x21044)
                                   ,1);
      *(longlong *)(lVar6 + 0x1cd38) = lVar14;
      uVar23 = extraout_XMM0_Da_00;
      if (lVar14 != 0) {
        *(longlong *)(lVar6 + 0x1cd40) = lVar14;
        if (0 < *(int *)(lVar6 + 0x1cc3c)) {
          uVar23 = thunk_FUN_182b03e20(lVar6,*(undefined4 *)(lVar6 + 0x21044));
          local_c8 = lVar6 + 0x25010;
        }
        *(undefined4 *)(lVar6 + 0x1cdf8) = *(undefined4 *)(lVar6 + 0x21044);
        *(undefined4 *)(lVar7 + 0x1934) = 1;
        *(undefined8 *)(lVar7 + 0x192c) = 0;
        *(undefined4 *)(lVar7 + 0xba8) = 0;
        *(undefined4 *)(lVar6 + 0x1cdfc) = 0;
        *(undefined4 *)(lVar6 + 0x1ce04) = 0;
      }
    }
    lVar14 = local_c8;
    if (*(longlong *)(lVar6 + 0x1cd38) == 0) {
      if ((*(int *)(lVar6 + 0x23ab0) == 1) && (*(int *)(lVar7 + 0x221c) != 0)) {
        lVar15 = thunk_FUN_182af0cb0(*(undefined8 *)(lVar6 + 0x1cd30),1);
        *(longlong *)(lVar6 + 0x1cd48) = lVar15;
        if (lVar15 == 0) {
          return 0xffffffff;
        }
      }
      lVar15 = thunk_FUN_182af0d20(*(undefined8 *)(lVar6 + 0x1cd30),param_8);
      *(longlong *)(lVar6 + 0x1cd38) = lVar15;
      uVar23 = extraout_XMM0_Da_01;
      if (lVar15 != 0) {
        *(undefined4 *)(lVar7 + 0xba8) = 1;
        if ((*(longlong *)(lVar6 + 0x1cd40) == 0) ||
           (iVar12 = 1, *(longlong *)(lVar6 + 0x1cd38) != *(longlong *)(lVar6 + 0x1cd40))) {
          iVar12 = 0;
        }
        *(int *)(lVar6 + 0x1ce04) = iVar12;
        if (iVar12 != 0) {
          *(undefined8 *)(lVar6 + 0x1cd40) = 0;
        }
      }
    }
    puVar9 = local_88;
    if (*(longlong *)(lVar6 + 0x1cd38) != 0) {
      lVar15 = *(longlong *)(lVar6 + 0x1cd38);
      if (lVar14 != 0) {
        lVar15 = lVar14;
      }
      *(longlong *)(lVar6 + 0x1cd50) = lVar15;
      *(longlong *)(lVar6 + 0x1cd58) = lVar15;
      *local_98 = *(undefined8 *)(*(longlong *)(lVar6 + 0x1cd38) + 0x90);
      *local_90 = *(undefined8 *)(*(longlong *)(lVar6 + 0x1cd38) + 0x98);
      *local_88 = *(undefined4 *)(*(longlong *)(lVar6 + 0x1cd38) + 0xa0);
      if ((*(int *)(lVar6 + 0x23ab0) == 1) && (*(int *)(lVar7 + 0x221c) != 0)) {
        *(undefined8 *)(lVar6 + 0x1cdf0) = *(undefined8 *)(lVar6 + 0x1cd48);
      }
      lVar14 = *(longlong *)(*(longlong *)(lVar6 + 0x1cd38) + 0x90);
      if (lVar14 < *(longlong *)(lVar6 + 0x210b0)) {
        *(longlong *)(lVar6 + 0x210b0) = lVar14;
        *(undefined8 *)(lVar6 + 0x210a8) = *(undefined8 *)(*(longlong *)(lVar6 + 0x1cd38) + 0x90);
      }
      if (*(int *)(lVar7 + 0xba8) != 0) {
        lVar14 = *(longlong *)(*(longlong *)(lVar6 + 0x1cd38) + 0x90);
        lVar15 = *(longlong *)(*(longlong *)(lVar6 + 0x1cd38) + 0x98);
        if (lVar14 == *(longlong *)(lVar6 + 0x210b0)) {
          lVar14 = lVar15 - lVar14;
          uVar16 = 1;
        }
        else {
          lVar14 = lVar15 - *(longlong *)(lVar6 + 0x210a8);
          lVar22 = *(longlong *)(lVar6 + 0x210a8) - *(longlong *)(lVar6 + 0x210a0);
          uVar16 = uVar18;
          if (lVar22 != 0) {
            uVar16 = ((lVar14 - lVar22) * 10) / lVar22;
          }
        }
        if (lVar14 != 0) {
          if ((int)uVar16 == 0) {
            dVar2 = DAT_1832c17e0 / *(double *)(lVar6 + 0x210e0);
            dVar1 = (double)(lVar15 - *(longlong *)(lVar6 + 0x210b0));
            dVar24 = DAT_1832c17e0;
            if (dVar1 <= DAT_1832c17e0) {
              dVar24 = dVar1;
            }
            uVar23 = SUB84((double)lVar14,0);
            *(double *)(lVar6 + 0x210e0) =
                 DAT_1832c17e0 / ((((dVar24 - dVar2) + (double)lVar14) * dVar2) / dVar24);
          }
          else {
            uVar23 = SUB84((double)lVar14,0);
            *(double *)(lVar6 + 0x210e0) = DAT_1832c17e0 / (double)lVar14;
          }
          if (*(uint *)(lVar6 + 0x1cc64) < 2) {
            uVar23 = thunk_FUN_18294e250(lVar6,(int)*(undefined8 *)(lVar6 + 0x210e0));
          }
          else {
            uVar16 = uVar18;
            if (*(uint *)(lVar6 + 0x1cc64) != 0) {
              do {
                if (4 < (uint)uVar16) break;
                uVar20 = (uint)uVar16 + 1;
                dVar1 = (double)*(uint *)(lVar6 + 0x1cca8 + uVar16 * 4);
                uVar23 = SUB84(dVar1,0);
                *(double *)(uVar16 * 0xd0 + 0x25d68 + lVar6) = *(double *)(lVar6 + 0x210e0) / dVar1;
                uVar16 = (ulonglong)uVar20;
              } while (uVar20 < *(uint *)(lVar6 + 0x1cc64));
            }
          }
        }
        *(undefined8 *)(lVar6 + 0x210a0) = *(undefined8 *)(*(longlong *)(lVar6 + 0x1cd38) + 0x90);
        *(undefined8 *)(lVar6 + 0x210a8) = *(undefined8 *)(*(longlong *)(lVar6 + 0x1cd38) + 0x98);
      }
      if (1 < *(uint *)(lVar6 + 0x1cc64)) {
        FUN_18294ad80(lVar6);
        iVar12 = *(int *)(lVar6 + 0x23bf4);
        if (iVar12 < 0) {
          iVar12 = *(int *)(lVar6 + 0x1ccec +
                           ((ulonglong)*(uint *)(lVar6 + 0x23bf0) %
                           (ulonglong)*(uint *)(lVar6 + 0x1cce8)) * 4);
        }
        FUN_18294a490(lVar6);
        uVar23 = thunk_FUN_18294e250(lVar6,(int)*(undefined8 *)
                                                 ((longlong)iVar12 * 0xd0 + 0x25d68 + lVar6));
      }
      if (*(int *)(lVar6 + 0x23a9c) == 2) {
        QueryPerformanceCounter(&local_50);
        QueryPerformanceCounter(&local_70);
        uVar23 = extraout_XMM0_Da_02;
      }
      plVar8 = local_a8;
      iVar13 = *(int *)(lVar6 + 0x23b84) * 100;
      iVar12 = *(int *)(lVar7 + 0xbb0);
      *(int *)(lVar6 + 0x23b88) = iVar13 / iVar12;
      *local_a8 = 0;
      FUN_180069520(uVar23,(longlong)iVar13 % (longlong)iVar12 & 0xffffffff);
      *(undefined4 *)(lVar7 + 0xba4) = 1;
      *(undefined4 *)(lVar7 + 0xbac) = *puVar9;
      piVar17 = (int *)(lVar7 + 0x80c);
      uVar16 = uVar18;
      do {
        if (*piVar17 == 0) {
          *(int *)(lVar7 + 0x9d0) = (int)uVar16;
          break;
        }
        uVar16 = (ulonglong)((int)uVar16 + 1);
        uVar18 = uVar18 + 1;
        piVar17 = piVar17 + 0x24;
      } while ((longlong)uVar18 < 4);
      if (*(int *)(lVar6 + 0x23ab0) == 1) {
        thunk_FUN_182aece10(lVar6,0x1a);
        thunk_FUN_182af8160(lVar6);
      }
      else {
        local_d8 = puVar9;
        if (*(int *)(lVar6 + 0x23ab0) == 2) {
          FUN_182946480(lVar6,plVar8,local_b0,local_b8);
        }
        else {
          FUN_1829473f0();
        }
      }
      if (*(int *)(lVar6 + 0x23a9c) == 2) {
        QueryPerformanceCounter(&local_48);
        QueryPerformanceCounter(&local_68);
        QueryPerformanceFrequency(&local_80);
        uVar18 = ((local_68.QuadPart - (longlong)local_70) * 1000000) / local_80.QuadPart;
        dVar1 = (double)(uVar18 & 0xffffffff) * DAT_1832576d0;
        if (*(int *)(lVar7 + 0xba4) != 0) {
          iVar12 = (int)uVar18;
          if (*(int *)(lVar6 + 0x23a90) == 0) {
            *(int *)(lVar6 + 0x23a90) = iVar12;
          }
          else {
            *(uint *)(lVar6 + 0x23a90) = (uint)(*(int *)(lVar6 + 0x23a90) * 7 + iVar12) >> 3;
          }
        }
        iVar12 = (int)(longlong)dVar1;
        if (iVar12 != 0) {
          if (*(int *)(lVar6 + 0x23a94) == 0) {
            *(int *)(lVar6 + 0x23a94) = iVar12;
          }
          else {
            *(uint *)(lVar6 + 0x23a94) = (uint)(*(int *)(lVar6 + 0x23a94) * 7 + iVar12) >> 3;
          }
        }
      }
      lVar14 = 8;
      if (*(int *)(lVar7 + 0x1940) == 0) {
        lVar15 = 8;
        puVar10 = (undefined8 *)(lVar7 + 0x1dc2);
        puVar11 = (undefined8 *)(lVar7 + 0x1969);
        do {
          puVar21 = puVar11;
          puVar19 = puVar10;
          uVar5 = puVar21[1];
          *puVar19 = *puVar21;
          puVar19[1] = uVar5;
          uVar5 = puVar21[3];
          puVar19[2] = puVar21[2];
          puVar19[3] = uVar5;
          uVar5 = puVar21[5];
          puVar19[4] = puVar21[4];
          puVar19[5] = uVar5;
          uVar5 = puVar21[7];
          puVar19[6] = puVar21[6];
          puVar19[7] = uVar5;
          uVar5 = puVar21[9];
          puVar19[8] = puVar21[8];
          puVar19[9] = uVar5;
          uVar5 = puVar21[0xb];
          puVar19[10] = puVar21[10];
          puVar19[0xb] = uVar5;
          uVar5 = puVar21[0xd];
          puVar19[0xc] = puVar21[0xc];
          puVar19[0xd] = uVar5;
          uVar5 = puVar21[0xf];
          puVar19[0xe] = puVar21[0xe];
          puVar19[0xf] = uVar5;
          lVar15 = lVar15 + -1;
          puVar10 = puVar19 + 0x10;
          puVar11 = puVar21 + 0x10;
        } while (lVar15 != 0);
        uVar5 = puVar21[0x11];
        puVar19[0x10] = puVar21[0x10];
        puVar19[0x11] = uVar5;
        uVar5 = puVar21[0x13];
        puVar19[0x12] = puVar21[0x12];
        puVar19[0x13] = uVar5;
        uVar5 = puVar21[0x15];
        puVar19[0x14] = puVar21[0x14];
        puVar19[0x15] = uVar5;
        uVar5 = puVar21[0x17];
        puVar19[0x16] = puVar21[0x16];
        puVar19[0x17] = uVar5;
        uVar23 = *(undefined4 *)((longlong)puVar21 + 0xc4);
        uVar3 = *(undefined4 *)(puVar21 + 0x19);
        uVar4 = *(undefined4 *)((longlong)puVar21 + 0xcc);
        *(undefined4 *)(puVar19 + 0x18) = *(undefined4 *)(puVar21 + 0x18);
        *(undefined4 *)((longlong)puVar19 + 0xc4) = uVar23;
        *(undefined4 *)(puVar19 + 0x19) = uVar3;
        *(undefined4 *)((longlong)puVar19 + 0xcc) = uVar4;
        puVar19[0x1a] = puVar21[0x1a];
        *(undefined1 *)(puVar19 + 0x1b) = *(undefined1 *)(puVar21 + 0x1b);
      }
      if (*(int *)(lVar7 + 0x1934) != 0) {
        lVar15 = 8;
        puVar10 = (undefined8 *)(lVar6 + 0x244e9);
        puVar11 = (undefined8 *)(lVar7 + 0x1dc2);
        do {
          puVar21 = puVar11;
          puVar19 = puVar10;
          uVar5 = puVar21[1];
          *puVar19 = *puVar21;
          puVar19[1] = uVar5;
          uVar5 = puVar21[3];
          puVar19[2] = puVar21[2];
          puVar19[3] = uVar5;
          uVar5 = puVar21[5];
          puVar19[4] = puVar21[4];
          puVar19[5] = uVar5;
          uVar5 = puVar21[7];
          puVar19[6] = puVar21[6];
          puVar19[7] = uVar5;
          uVar5 = puVar21[9];
          puVar19[8] = puVar21[8];
          puVar19[9] = uVar5;
          uVar5 = puVar21[0xb];
          puVar19[10] = puVar21[10];
          puVar19[0xb] = uVar5;
          uVar5 = puVar21[0xd];
          puVar19[0xc] = puVar21[0xc];
          puVar19[0xd] = uVar5;
          uVar5 = puVar21[0xf];
          puVar19[0xe] = puVar21[0xe];
          puVar19[0xf] = uVar5;
          lVar15 = lVar15 + -1;
          puVar10 = puVar19 + 0x10;
          puVar11 = puVar21 + 0x10;
        } while (lVar15 != 0);
        uVar5 = puVar21[0x11];
        puVar19[0x10] = puVar21[0x10];
        puVar19[0x11] = uVar5;
        uVar5 = puVar21[0x13];
        puVar19[0x12] = puVar21[0x12];
        puVar19[0x13] = uVar5;
        uVar5 = puVar21[0x15];
        puVar19[0x14] = puVar21[0x14];
        puVar19[0x15] = uVar5;
        uVar5 = puVar21[0x17];
        puVar19[0x16] = puVar21[0x16];
        puVar19[0x17] = uVar5;
        uVar23 = *(undefined4 *)((longlong)puVar21 + 0xc4);
        uVar3 = *(undefined4 *)(puVar21 + 0x19);
        uVar4 = *(undefined4 *)((longlong)puVar21 + 0xcc);
        *(undefined4 *)(puVar19 + 0x18) = *(undefined4 *)(puVar21 + 0x18);
        *(undefined4 *)((longlong)puVar19 + 0xc4) = uVar23;
        *(undefined4 *)(puVar19 + 0x19) = uVar3;
        *(undefined4 *)((longlong)puVar19 + 0xcc) = uVar4;
        puVar19[0x1a] = puVar21[0x1a];
        *(undefined1 *)(puVar19 + 0x1b) = *(undefined1 *)(puVar21 + 0x1b);
      }
      if (*(int *)(lVar7 + 0x1930) != 0) {
        lVar15 = 8;
        puVar10 = (undefined8 *)(lVar6 + 0x24942);
        puVar11 = (undefined8 *)(lVar7 + 0x1dc2);
        do {
          puVar21 = puVar11;
          puVar19 = puVar10;
          uVar5 = puVar21[1];
          *puVar19 = *puVar21;
          puVar19[1] = uVar5;
          uVar5 = puVar21[3];
          puVar19[2] = puVar21[2];
          puVar19[3] = uVar5;
          uVar5 = puVar21[5];
          puVar19[4] = puVar21[4];
          puVar19[5] = uVar5;
          uVar5 = puVar21[7];
          puVar19[6] = puVar21[6];
          puVar19[7] = uVar5;
          uVar5 = puVar21[9];
          puVar19[8] = puVar21[8];
          puVar19[9] = uVar5;
          uVar5 = puVar21[0xb];
          puVar19[10] = puVar21[10];
          puVar19[0xb] = uVar5;
          uVar5 = puVar21[0xd];
          puVar19[0xc] = puVar21[0xc];
          puVar19[0xd] = uVar5;
          uVar5 = puVar21[0xf];
          puVar19[0xe] = puVar21[0xe];
          puVar19[0xf] = uVar5;
          lVar15 = lVar15 + -1;
          puVar10 = puVar19 + 0x10;
          puVar11 = puVar21 + 0x10;
        } while (lVar15 != 0);
        uVar5 = puVar21[0x11];
        puVar19[0x10] = puVar21[0x10];
        puVar19[0x11] = uVar5;
        uVar5 = puVar21[0x13];
        puVar19[0x12] = puVar21[0x12];
        puVar19[0x13] = uVar5;
        uVar5 = puVar21[0x15];
        puVar19[0x14] = puVar21[0x14];
        puVar19[0x15] = uVar5;
        uVar5 = puVar21[0x17];
        puVar19[0x16] = puVar21[0x16];
        puVar19[0x17] = uVar5;
        uVar23 = *(undefined4 *)((longlong)puVar21 + 0xc4);
        uVar3 = *(undefined4 *)(puVar21 + 0x19);
        uVar4 = *(undefined4 *)((longlong)puVar21 + 0xcc);
        *(undefined4 *)(puVar19 + 0x18) = *(undefined4 *)(puVar21 + 0x18);
        *(undefined4 *)((longlong)puVar19 + 0xc4) = uVar23;
        *(undefined4 *)(puVar19 + 0x19) = uVar3;
        *(undefined4 *)((longlong)puVar19 + 0xcc) = uVar4;
        puVar19[0x1a] = puVar21[0x1a];
        *(undefined1 *)(puVar19 + 0x1b) = *(undefined1 *)(puVar21 + 0x1b);
      }
      if (*(int *)(lVar7 + 0x192c) != 0) {
        puVar10 = (undefined8 *)(lVar6 + 0x24090);
        puVar11 = (undefined8 *)(lVar7 + 0x1dc2);
        do {
          puVar21 = puVar11;
          puVar19 = puVar10;
          uVar5 = puVar21[1];
          *puVar19 = *puVar21;
          puVar19[1] = uVar5;
          uVar5 = puVar21[3];
          puVar19[2] = puVar21[2];
          puVar19[3] = uVar5;
          uVar5 = puVar21[5];
          puVar19[4] = puVar21[4];
          puVar19[5] = uVar5;
          uVar5 = puVar21[7];
          puVar19[6] = puVar21[6];
          puVar19[7] = uVar5;
          uVar5 = puVar21[9];
          puVar19[8] = puVar21[8];
          puVar19[9] = uVar5;
          uVar5 = puVar21[0xb];
          puVar19[10] = puVar21[10];
          puVar19[0xb] = uVar5;
          uVar5 = puVar21[0xd];
          puVar19[0xc] = puVar21[0xc];
          puVar19[0xd] = uVar5;
          uVar5 = puVar21[0xf];
          puVar19[0xe] = puVar21[0xe];
          puVar19[0xf] = uVar5;
          lVar14 = lVar14 + -1;
          puVar10 = puVar19 + 0x10;
          puVar11 = puVar21 + 0x10;
        } while (lVar14 != 0);
        uVar5 = puVar21[0x11];
        puVar19[0x10] = puVar21[0x10];
        puVar19[0x11] = uVar5;
        uVar5 = puVar21[0x13];
        puVar19[0x12] = puVar21[0x12];
        puVar19[0x13] = uVar5;
        uVar5 = puVar21[0x15];
        puVar19[0x14] = puVar21[0x14];
        puVar19[0x15] = uVar5;
        uVar5 = puVar21[0x17];
        puVar19[0x16] = puVar21[0x16];
        puVar19[0x17] = uVar5;
        uVar23 = *(undefined4 *)((longlong)puVar21 + 0xc4);
        uVar3 = *(undefined4 *)(puVar21 + 0x19);
        uVar4 = *(undefined4 *)((longlong)puVar21 + 0xcc);
        *(undefined4 *)(puVar19 + 0x18) = *(undefined4 *)(puVar21 + 0x18);
        *(undefined4 *)((longlong)puVar19 + 0xc4) = uVar23;
        *(undefined4 *)(puVar19 + 0x19) = uVar3;
        *(undefined4 *)((longlong)puVar19 + 0xcc) = uVar4;
        puVar19[0x1a] = puVar21[0x1a];
        *(undefined1 *)(puVar19 + 0x1b) = *(undefined1 *)(puVar21 + 0x1b);
      }
      if (*plVar8 != 0) {
        if (((((((*(int *)(lVar6 + 0x1b344) == 0) || (*(int *)(lVar6 + 0x1c0cc) != 0)) ||
               (*(int *)(lVar6 + 0x1c0d0) != 0)) ||
              ((*(int *)(lVar6 + 0x1c0d4) != 0 || (*(int *)(lVar6 + 0x1c0d8) != 0)))) ||
             ((*(int *)(lVar6 + 0x1c0dc) != 0 ||
              ((*(int *)(lVar6 + 0x1c0e0) != 0 || (*(char *)(lVar6 + 0x13ff0) != '\0')))))) ||
            (*(char *)(lVar6 + 0x13fe1) != '\0')) ||
           (iVar12 = 1, *(char *)(lVar6 + 0x13fe2) != '\0')) {
          iVar12 = 0;
        }
        *(int *)(lVar6 + 0x259a4) = iVar12;
        *(undefined4 *)(lVar7 + 0x1940) = 1;
        *(undefined8 *)(lVar7 + 0x1930) = 0;
        *(undefined4 *)(lVar7 + 0x192c) = 1;
        *(undefined4 *)(lVar7 + 0xba4) = 1;
      }
      if (1 < *(uint *)(lVar6 + 0x1cc64)) {
        FUN_18294a6b0(lVar6);
      }
      QueryPerformanceCounter(&local_58);
      QueryPerformanceFrequency(&local_78);
      *(longlong *)(lVar6 + 0x23e78) =
           *(longlong *)(lVar6 + 0x23e78) +
           ((local_58.QuadPart - (longlong)local_60) * 1000000) / local_78.QuadPart;
      if (((*(int *)(lVar6 + 0x25968) != 0) && (*(int *)(lVar6 + 0x23ab0) != 1)) &&
         (*(int *)(lVar7 + 0xba8) != 0)) {
        FUN_182949330(lVar6);
      }
      lVar7 = local_c0;
      *(undefined4 *)(lVar6 + 0x1a7f8) = 0;
      if ((*(int *)(lVar6 + 0x23c1c) != 0) && (*(int *)(local_c0 + 0x23c24) != 0)) {
        WaitForSingleObjectEx(*(HANDLE *)(local_c0 + 0x23c70),0xffffffff,0);
        *(undefined4 *)(lVar7 + 0x23c24) = 0;
      }
      return 0;
    }
    *local_a8 = 0;
    if (((param_8 != 0) && (*(int *)(lVar6 + 0x23ab0) == 1)) && (*(int *)(lVar6 + 0x24f80) == 0)) {
      thunk_FUN_182af80d0(lVar6);
      *(undefined4 *)(lVar6 + 0x24f80) = 1;
    }
  }
  return 0xffffffff;
}


