/* 0x1829aade0 size=0x69f
   SetEvent
*/


void FUN_1829aade0(longlong param_1,longlong *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  byte bVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  size_t _Size;
  
  lVar4 = *(longlong *)(param_1 + 0x10150);
  uVar14 = 0;
  bVar10 = (byte)*(undefined4 *)(lVar4 + 0x324);
  uVar20 = ((uint)(*(int *)(lVar4 + 0xb4) + -1 + *(int *)(lVar4 + 0x4c)) >> (bVar10 & 0x1f)) *
           ((uint)(*(int *)(lVar4 + 0xb4) + -1 + *(int *)(lVar4 + 0x48)) >> (bVar10 & 0x1f));
  uVar5 = uVar14;
LAB_1829aae40:
  lVar4 = thunk_FUN_182d84960(*(longlong *)(param_1 + 0x10168) + 0x28);
  if (lVar4 == 0) {
    lVar4 = thunk_FUN_182d84960(*(longlong *)(param_1 + 0x10168) + 0x40);
  }
  if (0 < param_3) {
    uVar5 = thunk_FUN_182d84960(*(longlong *)(param_1 + 0x10168) + 0x28);
    if (((uVar5 == 0) &&
        (uVar5 = thunk_FUN_182d84960(*(longlong *)(param_1 + 0x10168) + 0x40), uVar5 == 0)) &&
       (lVar17 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10150) + 4), 0 < lVar17)) {
      plVar6 = (longlong *)(param_1 + 0x100b0);
      uVar11 = uVar14;
      do {
        uVar5 = *(ulonglong *)(*plVar6 + 0x598);
        if ((uVar5 != 0) && (*(int *)(uVar5 + 0x18) == param_3 + -1)) break;
        uVar11 = uVar11 + 1;
        plVar6 = plVar6 + 1;
      } while ((longlong)uVar11 < lVar17);
    }
  }
  if (lVar4 == 0) {
    lVar17 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10150) + 4);
    if (0 < lVar17) {
      plVar6 = (longlong *)(param_1 + 0x100b0);
      uVar11 = uVar14;
      do {
        lVar4 = *(longlong *)(*plVar6 + 0x598);
        if ((lVar4 != 0) && (param_3 == *(int *)(lVar4 + 0x18))) {
          if (*(longlong *)(lVar4 + 0x4fa8) == 0) {
            lVar17 = FUN_180013282(8);
            *(longlong *)(lVar4 + 0x4fa8) = lVar17;
            if (lVar17 == 0) {
              _Size = 8;
              goto LAB_1829ab3ca;
            }
          }
          _Size = (ulonglong)uVar20 * 0x110;
          uVar7 = FUN_180013282(_Size);
          **(undefined8 **)(lVar4 + 0x4fa8) = uVar7;
          if (**(longlong **)(lVar4 + 0x4fa8) == 0) goto LAB_1829ab3ca;
          _Size = (ulonglong)(uVar20 * 0x40) << 2;
          pvVar8 = (void *)FUN_180013282(_Size);
          *(void **)(lVar4 + 0x4fb8) = pvVar8;
          if (pvVar8 == (void *)0x0) goto LAB_1829ab3ca;
          memset(pvVar8,0,_Size);
          uVar11 = uVar14;
          if (uVar20 == 0) goto LAB_1829ab15d;
          goto LAB_1829aafe0;
        }
        uVar11 = uVar11 + 1;
        plVar6 = plVar6 + 1;
      } while ((longlong)uVar11 < lVar17);
    }
    goto LAB_1829aae40;
  }
  if (*(longlong *)(lVar4 + 0x4fa8) == 0) {
    lVar17 = FUN_180013282(8);
    *(longlong *)(lVar4 + 0x4fa8) = lVar17;
    if (lVar17 != 0) goto LAB_1829ab19c;
    _Size = 8;
  }
  else {
LAB_1829ab19c:
    _Size = (ulonglong)uVar20 * 0x110;
    uVar7 = FUN_180013282(_Size);
    **(undefined8 **)(lVar4 + 0x4fa8) = uVar7;
    if (**(longlong **)(lVar4 + 0x4fa8) != 0) {
      _Size = (ulonglong)(uVar20 * 0x40) << 2;
      pvVar8 = (void *)FUN_180013282(_Size);
      *(void **)(lVar4 + 0x4fb8) = pvVar8;
      if (pvVar8 != (void *)0x0) {
        memset(pvVar8,0,_Size);
        uVar11 = uVar14;
        if (uVar20 == 0) {
LAB_1829ab15d:
          SetEvent(*(HANDLE *)(lVar4 + 0x4fb0));
          return;
        }
        while( true ) {
          puVar15 = (undefined4 *)(**(longlong **)(lVar4 + 0x4fa8) + uVar11);
          lVar17 = FUN_180013282(0x100);
          if (lVar17 == 0) break;
          *(longlong *)(puVar15 + 0x42) = lVar17;
          lVar17 = 2;
          *puVar15 = *(undefined4 *)*param_2;
          puVar9 = (undefined8 *)(*param_2 + 4);
          puVar12 = (undefined8 *)(puVar15 + 1);
          do {
            uVar7 = puVar9[1];
            *puVar12 = *puVar9;
            puVar12[1] = uVar7;
            uVar7 = puVar9[3];
            puVar12[2] = puVar9[2];
            puVar12[3] = uVar7;
            uVar7 = puVar9[5];
            puVar12[4] = puVar9[4];
            puVar12[5] = uVar7;
            uVar7 = puVar9[7];
            puVar12[6] = puVar9[6];
            puVar12[7] = uVar7;
            uVar7 = puVar9[9];
            puVar12[8] = puVar9[8];
            puVar12[9] = uVar7;
            uVar7 = puVar9[0xb];
            puVar12[10] = puVar9[10];
            puVar12[0xb] = uVar7;
            uVar7 = puVar9[0xd];
            puVar12[0xc] = puVar9[0xc];
            puVar12[0xd] = uVar7;
            uVar7 = puVar9[0xf];
            puVar12[0xe] = puVar9[0xe];
            puVar12[0xf] = uVar7;
            lVar17 = lVar17 + -1;
            puVar9 = puVar9 + 0x10;
            puVar12 = puVar12 + 0x10;
          } while (lVar17 != 0);
          lVar17 = 2;
          puVar9 = *(undefined8 **)(puVar15 + 0x42);
          puVar12 = *(undefined8 **)(*param_2 + 0x108);
          do {
            uVar7 = puVar12[1];
            *puVar9 = *puVar12;
            puVar9[1] = uVar7;
            uVar7 = puVar12[3];
            puVar9[2] = puVar12[2];
            puVar9[3] = uVar7;
            uVar7 = puVar12[5];
            puVar9[4] = puVar12[4];
            puVar9[5] = uVar7;
            uVar7 = puVar12[7];
            puVar9[6] = puVar12[6];
            puVar9[7] = uVar7;
            uVar7 = puVar12[9];
            puVar9[8] = puVar12[8];
            puVar9[9] = uVar7;
            uVar7 = puVar12[0xb];
            puVar9[10] = puVar12[10];
            puVar9[0xb] = uVar7;
            uVar1 = *(undefined4 *)((longlong)puVar12 + 100);
            uVar2 = *(undefined4 *)(puVar12 + 0xd);
            uVar3 = *(undefined4 *)((longlong)puVar12 + 0x6c);
            *(undefined4 *)(puVar9 + 0xc) = *(undefined4 *)(puVar12 + 0xc);
            *(undefined4 *)((longlong)puVar9 + 100) = uVar1;
            *(undefined4 *)(puVar9 + 0xd) = uVar2;
            *(undefined4 *)((longlong)puVar9 + 0x6c) = uVar3;
            uVar1 = *(undefined4 *)((longlong)puVar12 + 0x74);
            uVar2 = *(undefined4 *)(puVar12 + 0xf);
            uVar3 = *(undefined4 *)((longlong)puVar12 + 0x7c);
            *(undefined4 *)(puVar9 + 0xe) = *(undefined4 *)(puVar12 + 0xe);
            *(undefined4 *)((longlong)puVar9 + 0x74) = uVar1;
            *(undefined4 *)(puVar9 + 0xf) = uVar2;
            *(undefined4 *)((longlong)puVar9 + 0x7c) = uVar3;
            lVar17 = lVar17 + -1;
            puVar9 = puVar9 + 0x10;
            puVar12 = puVar12 + 0x10;
          } while (lVar17 != 0);
          if ((uVar5 != 0) && (1 < *(int *)(lVar4 + 0x18))) {
            uVar13 = (int)uVar14 << 6;
            lVar18 = 0;
            lVar17 = **(longlong **)(uVar5 + 0x4fa8);
            lVar19 = 0x40;
            do {
              if (*(int *)(lVar18 + *(longlong *)(lVar17 + 0x108 + uVar11)) == 2) {
                iVar16 = param_3 + -1;
              }
              else {
                iVar16 = *(int *)(*(longlong *)(uVar5 + 0x4fb8) + (ulonglong)uVar13 * 4);
              }
              lVar18 = lVar18 + 4;
              *(int *)(*(longlong *)(lVar4 + 0x4fb8) + (ulonglong)uVar13 * 4) = iVar16;
              uVar13 = uVar13 + 1;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
          }
          uVar13 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar13;
          param_2 = param_2 + 1;
          uVar11 = uVar11 + 0x110;
          if (uVar20 <= uVar13) {
            SetEvent(*(HANDLE *)(lVar4 + 0x4fb0));
            return;
          }
        }
LAB_1829ab39f:
        thunk_FUN_18299c2b0(0,&DAT_18393797c,0,"malloc of size %d failed\n",0x100);
        goto LAB_1829ab3e2;
      }
    }
  }
LAB_1829ab3ca:
  thunk_FUN_18299c2b0(0,&DAT_18393797c,0,"malloc of size %d failed\n",_Size);
LAB_1829ab3e2:
  lVar17 = 0;
  if (uVar20 != 0) {
    uVar5 = (ulonglong)uVar20;
    do {
      thunk_FUN_18299c7d0(*(undefined8 *)(**(longlong **)(lVar4 + 0x4fa8) + 0x108 + lVar17));
      lVar17 = lVar17 + 0x110;
      *(undefined8 *)(**(longlong **)(lVar4 + 0x4fa8) + -8 + lVar17) = 0;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  thunk_FUN_18299c7d0(**(undefined8 **)(lVar4 + 0x4fa8));
  **(undefined8 **)(lVar4 + 0x4fa8) = 0;
  thunk_FUN_18299c7d0(*(undefined8 *)(lVar4 + 0x4fa8));
  *(undefined8 *)(lVar4 + 0x4fa8) = 0;
  thunk_FUN_18299c7d0(*(undefined8 *)(lVar4 + 0x4fb8));
  *(undefined8 *)(lVar4 + 0x4fb8) = 0;
  return;
  while( true ) {
    *(longlong *)(puVar15 + 0x42) = lVar17;
    lVar17 = 2;
    *puVar15 = *(undefined4 *)*param_2;
    puVar9 = (undefined8 *)(*param_2 + 4);
    puVar12 = (undefined8 *)(puVar15 + 1);
    do {
      uVar7 = puVar9[1];
      *puVar12 = *puVar9;
      puVar12[1] = uVar7;
      uVar7 = puVar9[3];
      puVar12[2] = puVar9[2];
      puVar12[3] = uVar7;
      uVar7 = puVar9[5];
      puVar12[4] = puVar9[4];
      puVar12[5] = uVar7;
      uVar7 = puVar9[7];
      puVar12[6] = puVar9[6];
      puVar12[7] = uVar7;
      uVar7 = puVar9[9];
      puVar12[8] = puVar9[8];
      puVar12[9] = uVar7;
      uVar7 = puVar9[0xb];
      puVar12[10] = puVar9[10];
      puVar12[0xb] = uVar7;
      uVar7 = puVar9[0xd];
      puVar12[0xc] = puVar9[0xc];
      puVar12[0xd] = uVar7;
      uVar7 = puVar9[0xf];
      puVar12[0xe] = puVar9[0xe];
      puVar12[0xf] = uVar7;
      lVar17 = lVar17 + -1;
      puVar9 = puVar9 + 0x10;
      puVar12 = puVar12 + 0x10;
    } while (lVar17 != 0);
    lVar17 = 2;
    puVar9 = *(undefined8 **)(puVar15 + 0x42);
    puVar12 = *(undefined8 **)(*param_2 + 0x108);
    do {
      uVar7 = puVar12[1];
      *puVar9 = *puVar12;
      puVar9[1] = uVar7;
      uVar7 = puVar12[3];
      puVar9[2] = puVar12[2];
      puVar9[3] = uVar7;
      uVar7 = puVar12[5];
      puVar9[4] = puVar12[4];
      puVar9[5] = uVar7;
      uVar7 = puVar12[7];
      puVar9[6] = puVar12[6];
      puVar9[7] = uVar7;
      uVar7 = puVar12[9];
      puVar9[8] = puVar12[8];
      puVar9[9] = uVar7;
      uVar7 = puVar12[0xb];
      puVar9[10] = puVar12[10];
      puVar9[0xb] = uVar7;
      uVar7 = puVar12[0xd];
      puVar9[0xc] = puVar12[0xc];
      puVar9[0xd] = uVar7;
      uVar7 = puVar12[0xf];
      puVar9[0xe] = puVar12[0xe];
      puVar9[0xf] = uVar7;
      lVar17 = lVar17 + -1;
      puVar9 = puVar9 + 0x10;
      puVar12 = puVar12 + 0x10;
    } while (lVar17 != 0);
    if ((uVar5 != 0) && (1 < *(int *)(lVar4 + 0x18))) {
      uVar13 = (int)uVar14 << 6;
      lVar18 = 0;
      lVar17 = **(longlong **)(uVar5 + 0x4fa8);
      lVar19 = 0x40;
      do {
        if (*(int *)(lVar18 + *(longlong *)(lVar17 + 0x108 + uVar11)) == 2) {
          iVar16 = param_3 + -1;
        }
        else {
          iVar16 = *(int *)(*(longlong *)(uVar5 + 0x4fb8) + (ulonglong)uVar13 * 4);
        }
        lVar18 = lVar18 + 4;
        *(int *)(*(longlong *)(lVar4 + 0x4fb8) + (ulonglong)uVar13 * 4) = iVar16;
        uVar13 = uVar13 + 1;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
    uVar13 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar13;
    param_2 = param_2 + 1;
    uVar11 = uVar11 + 0x110;
    if (uVar20 <= uVar13) break;
LAB_1829aafe0:
    puVar15 = (undefined4 *)(**(longlong **)(lVar4 + 0x4fa8) + uVar11);
    lVar17 = FUN_180013282(0x100);
    if (lVar17 == 0) goto LAB_1829ab39f;
  }
  goto LAB_1829ab15d;
}


