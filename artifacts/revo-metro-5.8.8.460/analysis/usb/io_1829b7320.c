/* 0x1829b7320 size=0x537
   SetEvent
*/


undefined8 FUN_1829b7320(longlong param_1,undefined8 *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte bVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong lVar14;
  int iVar15;
  longlong *plVar16;
  size_t sVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  int iVar26;
  longlong lVar27;
  
  lVar9 = *(longlong *)(param_1 + 0x10150);
  uVar19 = (ulonglong)param_4;
  iVar1 = *(int *)(lVar9 + 0xb4);
  iVar26 = *(int *)(lVar9 + 0x48);
  bVar11 = (byte)*(undefined4 *)(lVar9 + 0x324);
  iVar23 = *(int *)(lVar9 + 0x4c);
  lVar9 = thunk_FUN_182d84960(*(longlong *)(param_1 + 0x10130) + 0x18,param_3);
  if (lVar9 == 0) {
    return 0xffffffff;
  }
  lVar22 = 0x19;
  puVar7 = (undefined8 *)(lVar9 + 0x42f8);
  puVar8 = param_2;
  do {
    puVar21 = puVar8;
    puVar13 = puVar7;
    uVar6 = puVar21[1];
    *puVar13 = *puVar21;
    puVar13[1] = uVar6;
    uVar6 = puVar21[3];
    puVar13[2] = puVar21[2];
    puVar13[3] = uVar6;
    uVar6 = puVar21[5];
    puVar13[4] = puVar21[4];
    puVar13[5] = uVar6;
    uVar6 = puVar21[7];
    puVar13[6] = puVar21[6];
    puVar13[7] = uVar6;
    uVar6 = puVar21[9];
    puVar13[8] = puVar21[8];
    puVar13[9] = uVar6;
    uVar6 = puVar21[0xb];
    puVar13[10] = puVar21[10];
    puVar13[0xb] = uVar6;
    uVar6 = puVar21[0xd];
    puVar13[0xc] = puVar21[0xc];
    puVar13[0xd] = uVar6;
    uVar3 = *(undefined4 *)((longlong)puVar21 + 0x74);
    uVar4 = *(undefined4 *)(puVar21 + 0xf);
    uVar5 = *(undefined4 *)((longlong)puVar21 + 0x7c);
    *(undefined4 *)(puVar13 + 0xe) = *(undefined4 *)(puVar21 + 0xe);
    *(undefined4 *)((longlong)puVar13 + 0x74) = uVar3;
    *(undefined4 *)(puVar13 + 0xf) = uVar4;
    *(undefined4 *)((longlong)puVar13 + 0x7c) = uVar5;
    lVar22 = lVar22 + -1;
    puVar7 = puVar13 + 0x10;
    puVar8 = puVar21 + 0x10;
  } while (lVar22 != 0);
  uVar3 = *(undefined4 *)((longlong)puVar21 + 0x84);
  uVar4 = *(undefined4 *)(puVar21 + 0x11);
  uVar5 = *(undefined4 *)((longlong)puVar21 + 0x8c);
  *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(puVar21 + 0x10);
  *(undefined4 *)((longlong)puVar13 + 0x84) = uVar3;
  *(undefined4 *)(puVar13 + 0x11) = uVar4;
  *(undefined4 *)((longlong)puVar13 + 0x8c) = uVar5;
  *(uint *)(lVar9 + 0x430c) =
       ((uint)(iVar1 + -1 + iVar23) >> (bVar11 & 0x1f)) *
       ((uint)(iVar26 + -1 + iVar1) >> (bVar11 & 0x1f));
  *(undefined4 *)(lVar9 + 0x4310) = *(undefined4 *)(*(longlong *)(param_1 + 0x10150) + 0x330);
  thunk_FUN_1829a8950(param_1);
  lVar22 = *(longlong *)(param_1 + 0x10150);
  if (*(int *)(lVar22 + 0xb4) == 0x10) {
    iVar1 = *(int *)(param_2 + 2);
    if (iVar1 - 1U < 2) {
      *(undefined4 *)(lVar9 + 0x4308) = 2;
      if (*(int *)(*(longlong *)(param_1 + 0x10150) + 0x2f8) < 2) {
        return 0xffffffff;
      }
      lVar22 = 0;
      plVar16 = *(longlong **)(lVar9 + 0x4330);
      *(undefined4 *)(lVar9 + 0x4310) = *(undefined4 *)(*(longlong *)(param_1 + 0x10150) + 0x330);
      plVar2 = (longlong *)param_2[7];
      lVar27 = lVar22;
      if (param_4 != 0) {
        do {
          sVar17 = (size_t)(int)(*(uint *)(lVar9 + 0x4310) >>
                                (*(byte *)(lVar22 + *plVar2) * '\x02' & 0x1f));
          memset((void *)(*plVar16 + lVar27),(uint)*(byte *)(lVar22 + *plVar2),sVar17);
          memset((void *)(plVar16[3] + lVar27),(uint)*(byte *)(lVar22 + plVar2[3]),sVar17);
          memset((void *)(plVar16[2] + lVar27),(int)*(char *)(plVar2[2] + lVar22),sVar17);
          memset((void *)(plVar16[2] + lVar27),(int)*(char *)(plVar2[2] + lVar22),sVar17);
          lVar22 = lVar22 + 1;
          uVar19 = uVar19 - 1;
          lVar27 = lVar27 + sVar17;
        } while (uVar19 != 0);
      }
      memcpy(plVar16 + 1,(void *)plVar2[1],
             (ulonglong)(uint)(*(int *)((longlong)param_2 + 0x14) * *(int *)(lVar9 + 0x4310)));
    }
    else {
      uVar19 = 0;
      if (*(int *)(lVar22 + 0x2f8) < 2) {
        return 0xffffffff;
      }
      lVar27 = *(longlong *)(lVar9 + 0x4328);
      *(undefined4 *)(lVar9 + 0x4310) = *(undefined4 *)(lVar22 + 0x330);
      lVar22 = param_2[6];
      uVar10 = uVar19;
      if (param_4 != 0) {
        do {
          iVar26 = (int)uVar10;
          bVar11 = *(byte *)(uVar10 + *(longlong *)(lVar22 + 8));
          sVar17 = (size_t)(int)(*(uint *)(lVar9 + 0x4310) >> (bVar11 * '\x02' & 0x1f));
          memset((void *)(*(longlong *)(lVar27 + 8) + uVar19),(uint)bVar11,sVar17);
          memset((void *)(*(longlong *)(lVar27 + 0x10) + uVar19),
                 (uint)*(byte *)(uVar10 + *(longlong *)(lVar22 + 0x10)),sVar17);
          memcpy((void *)(*(longlong *)(lVar27 + 0x60) + uVar19 * 8),
                 (void *)(*(longlong *)(param_2[6] + 0x60) + uVar10 * 8),sVar17);
          if (4 < *(int *)(*(longlong *)(param_1 + 0x10150) + 0x2f8)) {
            memset((void *)(*(longlong *)(lVar27 + 0x18) + uVar19),
                   (uint)*(byte *)(uVar10 + *(longlong *)(lVar22 + 0x18)),sVar17);
            iVar23 = 0;
            lVar25 = 0;
            iVar26 = *(int *)(&DAT_18397aa48 +
                             (ulonglong)*(byte *)(uVar10 + *(longlong *)(lVar22 + 0x18)) * 4);
            lVar24 = (longlong)iVar26;
            if (0 < lVar24) {
              lVar20 = uVar19 * 4;
              uVar18 = uVar10;
              do {
                uVar10 = (ulonglong)((int)uVar18 + 1);
                if (iVar23 == 0) {
                  uVar10 = uVar18;
                }
                *(undefined1 *)(*(longlong *)(lVar27 + 0x20) + lVar25 + uVar19) =
                     *(undefined1 *)(uVar10 + *(longlong *)(lVar22 + 0x20));
                if (6 < *(int *)(*(longlong *)(param_1 + 0x10150) + 0x2f8)) {
                  plVar16 = (longlong *)(lVar27 + 0x30);
                  uVar18 = (ulonglong)((iVar1 != 3) + 1);
                  *(undefined1 *)(*(longlong *)(lVar27 + 0x28) + lVar25 + uVar19) =
                       *(undefined1 *)(uVar10 + *(longlong *)(lVar22 + 0x28));
                  lVar14 = lVar22 - lVar27;
                  do {
                    *(undefined1 *)(lVar25 + uVar19 + *plVar16) =
                         *(undefined1 *)(uVar10 + *(longlong *)(lVar14 + (longlong)plVar16));
                    *(undefined1 *)(plVar16[2] + lVar25 + uVar19) =
                         *(undefined1 *)(uVar10 + *(longlong *)(lVar14 + 0x10 + (longlong)plVar16));
                    *(undefined4 *)(lVar20 + plVar16[4]) =
                         *(undefined4 *)
                          (*(longlong *)(lVar14 + 0x20 + (longlong)plVar16) + uVar10 * 4);
                    if ((((*(int *)(*(longlong *)(param_1 + 0x10150) + 0x2f8) == 7) && (lVar24 == 1)
                         ) && (*(uint *)(*(longlong *)(param_1 + 0x10150) + 0x330) < 0x11)) &&
                       (iVar12 = (int)*(short *)(lVar20 + plVar16[4]),
                       iVar15 = (int)*(short *)(lVar20 + 2 + plVar16[4]),
                       iVar15 * iVar15 + iVar12 * iVar12 < 0x65)) {
                      memset((void *)(*(longlong *)((lVar9 - lVar27) + 0x4f10 + (longlong)plVar16) +
                                      (longlong)iVar23 + uVar19),iVar26,sVar17);
                    }
                    plVar16 = plVar16 + 1;
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                }
                iVar23 = iVar23 + 1;
                lVar25 = lVar25 + 1;
                lVar20 = lVar20 + 4;
                uVar18 = uVar10;
              } while (lVar25 < lVar24);
            }
            iVar26 = (int)uVar10;
          }
          uVar19 = uVar19 + sVar17;
          uVar10 = (ulonglong)(iVar26 + 1U);
        } while (iVar26 + 1U < param_4);
      }
    }
  }
  else {
    thunk_FUN_1829b79b0(param_1,param_2,lVar9);
  }
  SetEvent(*(HANDLE *)(lVar9 + 0x4fa0));
  return 0;
}


