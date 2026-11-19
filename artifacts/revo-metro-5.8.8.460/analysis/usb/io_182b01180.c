/* 0x182b01180 size=0x748
   WaitForSingleObjectEx
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_182b01180(uint *param_1)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  DWORD DVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  undefined1 auStack_d8 [32];
  int local_b8;
  int local_b0;
  uint local_a8;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  uint local_80;
  longlong local_78;
  int *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_183dc69c0 ^ (ulonglong)auStack_d8;
  lVar6 = *(longlong *)(param_1 + 2);
  local_80 = *param_1;
  uVar14 = (ulonglong)(int)local_80;
  lVar7 = *(longlong *)(param_1 + 4);
  if (*(int *)(lVar6 + 0x23c1c) != 0) {
    local_68 = uVar14 * 8;
    do {
      DVar9 = WaitForSingleObjectEx
                        (*(HANDLE *)(local_68 + *(longlong *)(lVar6 + 0x23c58)),0xffffffff,0);
      if (DVar9 == 0) {
        iVar5 = *(int *)(lVar6 + 0x23c18);
        if (*(int *)(lVar6 + 0x23c1c) == 0) {
          return 0;
        }
        iVar16 = (int)uVar14 + 1;
        *(longlong *)(lVar7 + 0x1f80) =
             (longlong)(iVar16 * *(int *)(lVar6 + 0x1b35c)) * 0x4c + *(longlong *)(lVar6 + 0x1b390);
        *(undefined4 *)(lVar7 + 0x1f88) = *(undefined4 *)(lVar6 + 0x1b35c);
        if (iVar16 < *(int *)(lVar6 + 0x1b354)) {
          do {
            local_84 = *(int *)(lVar6 + 0x1b170);
            iVar11 = *(int *)(lVar6 + 0x1b358) * iVar16;
            iVar15 = *(int *)(lVar6 + 0x1af30 + (longlong)*(int *)(lVar6 + 0x1b174) * 0x90);
            local_70 = (int *)(*(longlong *)(lVar6 + 0x23c10) + (longlong)iVar16 * 4);
            iVar10 = *(int *)(lVar6 + 0x1af44 + (longlong)*(int *)(lVar6 + 0x1b174) * 0x90);
            local_50 = (longlong)iVar16 * 0x10;
            local_78 = (longlong)(iVar11 * 0x180) * 0x10 + *(longlong *)(lVar6 + 0x1cea8);
            *(longlong *)(local_50 + *(longlong *)(lVar6 + 0x23c78)) = local_78;
            lVar12 = (longlong)iVar11;
            piVar1 = (int *)(*(longlong *)(lVar6 + 0x23c10) + (longlong)(iVar16 + -1) * 4);
            *(undefined8 *)(lVar7 + 0x1fd0) = *(undefined8 *)(lVar6 + 0x1c0f8);
            *(undefined8 **)(lVar7 + 0x1fd8) = &local_48;
            local_48 = 0;
            local_40 = 0;
            *(uint *)(lVar7 + 0x1f90) = (uint)(iVar16 != 0);
            uVar13 = 0;
            iVar15 = iVar15 * iVar16 * 0x10;
            *(longlong *)(lVar7 + 0x2370) = *(longlong *)(lVar6 + 0x25970) + lVar12 * 4;
            local_98 = iVar10 * iVar16 * 8;
            local_58 = lVar12;
            if (0 < *(int *)(lVar6 + 0x1b358)) {
              local_8c = iVar16 * -0x80;
              local_90 = -0x10;
              local_88 = (-1 - iVar16) * 0x10;
              local_60 = lVar6 + 0x1a7a0 + (longlong)local_84 * 0x90;
              local_94 = 0;
              do {
                if ((int)(uVar13 - 1) % iVar5 == 0) {
                  *local_70 = uVar13 - 1;
                }
                if ((iVar16 != 0) && ((uVar13 & iVar5 - 1U) == 0)) {
                  iVar10 = *piVar1 - iVar5;
                  while (iVar10 < (int)uVar13) {
                    Sleep(0);
                    iVar10 = *piVar1 - iVar5;
                  }
                }
                *(int *)(lVar7 + 0x2004) = local_94;
                *(uint *)(lVar7 + 0x2008) = ((*(int *)(lVar6 + 0x1b358) - uVar13) + -1) * 0x80;
                *(int *)(lVar7 + 0x200c) = local_8c;
                *(int *)(lVar7 + 0x2010) = ((*(int *)(lVar6 + 0x1b354) - iVar16) + -1) * 0x80;
                *(int *)(lVar7 + 0x23d0) = local_90;
                *(uint *)(lVar7 + 0x23d4) = (*(int *)(lVar6 + 0x1b358) - uVar13) * 0x10;
                *(int *)(lVar7 + 0x23d8) = local_88;
                *(int *)(lVar7 + 0x23dc) = (*(int *)(lVar6 + 0x1b354) - iVar16) * 0x10;
                *(longlong *)(lVar7 + 0x1f28) = (longlong)iVar15 + *(longlong *)(local_60 + 0x7b8);
                *(longlong *)(lVar7 + 0x1f30) = *(longlong *)(local_60 + 0x7c0) + (longlong)local_98
                ;
                *(longlong *)(lVar7 + 0x1f38) = *(longlong *)(local_60 + 0x7c8) + (longlong)local_98
                ;
                *(uint *)(lVar7 + 0x1f94) = (uint)(uVar13 != 0);
                *(undefined4 *)(lVar7 + 0x2364) = *(undefined4 *)(lVar6 + 0x1cf6c);
                *(undefined4 *)(lVar7 + 0x2368) = *(undefined4 *)(lVar6 + 0x1cf68);
                FUN_18022b4d0(*(undefined8 *)(lVar7 + 0x1018),*(undefined4 *)(lVar7 + 0xff0),
                              lVar7 + 0x640,0x10);
                if (*(int *)(lVar6 + 0x1cc60) == 1) {
                  thunk_FUN_182aff530(lVar6,lVar7);
                }
                if (*(char *)(lVar7 + 0x1fe0) == '\0') {
                  *(undefined1 *)(*(longlong *)(lVar7 + 0x1f80) + 0xb) = 0;
                }
                else {
                  bVar3 = *(byte *)(lVar12 + *(longlong *)(lVar6 + 0x23b98));
                  if (bVar3 < 4) {
                    *(byte *)(*(longlong *)(lVar7 + 0x1f80) + 0xb) = bVar3;
                  }
                  else {
                    *(undefined1 *)(*(longlong *)(lVar7 + 0x1f80) + 0xb) = 0;
                  }
                  thunk_FUN_182aed8f0(lVar6,lVar7,1);
                }
                *(longlong *)(lVar7 + 0x23f0) =
                     (int)uVar13 + local_58 + *(longlong *)(lVar6 + 0x23bb8);
                if (*(int *)(lVar6 + 0x1b344) == 0) {
                  iVar10 = thunk_FUN_182b00b20();
                  *(int *)(lVar7 + 0x87b0) = *(int *)(lVar7 + 0x87b0) + iVar10;
                }
                else {
                  local_b8 = local_98;
                  local_b0 = iVar16;
                  local_a8 = uVar13;
                  iVar10 = thunk_FUN_182b00570(lVar6,lVar7,&local_78,iVar15);
                  *(int *)(lVar7 + 0x87b0) = *(int *)(lVar7 + 0x87b0) + iVar10;
                  if (*(int *)(lVar6 + 0x25d60) == 0) {
                    if ((**(char **)(lVar7 + 0x1f80) == '\a') &&
                       ((*(char **)(lVar7 + 0x1f80))[2] == '\x01')) {
                      cVar4 = *(char *)(*(longlong *)(lVar6 + 0x23be0) + lVar12);
                      if (cVar4 != -1) {
                        *(char *)(*(longlong *)(lVar6 + 0x23be0) + lVar12) = cVar4 + '\x01';
                      }
                      cVar4 = *(char *)(lVar12 + *(longlong *)(lVar6 + 0x23be8));
                      if (cVar4 != -1) {
                        *(char *)(lVar12 + *(longlong *)(lVar6 + 0x23be8)) = cVar4 + '\x01';
                      }
                    }
                    else {
                      *(undefined1 *)(lVar12 + *(longlong *)(lVar6 + 0x23be0)) = 0;
                      *(undefined1 *)(lVar12 + *(longlong *)(lVar6 + 0x23be8)) = 0;
                    }
                    if (*(int *)(lVar7 + 0x8794) != 0) {
                      *(undefined1 *)(lVar12 + *(longlong *)(lVar6 + 0x23be8)) = 0;
                    }
                    if (((*(int *)(lVar6 + 0x25d60) == 0) && (*(int *)(lVar6 + 0x23bc4) != 0)) &&
                       (*(char *)(lVar7 + 0x1fe0) != '\0')) {
                      pcVar8 = *(char **)(lVar7 + 0x1f80);
                      *(char *)(lVar12 + *(longlong *)(lVar6 + 0x23b98)) = pcVar8[0xb];
                      if (pcVar8[0xb] == '\0') {
                        if ((*pcVar8 == '\a') && (pcVar8[2] == '\x01')) {
                          if (*(char *)(*(longlong *)(lVar6 + 0x23bd8) + lVar12) == '\x01') {
                            *(undefined1 *)(*(longlong *)(lVar6 + 0x23bd8) + lVar12) = 0;
                          }
                        }
                        else {
                          *(undefined1 *)(lVar12 + *(longlong *)(lVar6 + 0x23bd8)) = 1;
                        }
                      }
                      else {
                        *(undefined1 *)(lVar12 + *(longlong *)(lVar6 + 0x23bd8)) = 0xff;
                      }
                    }
                  }
                }
                iVar15 = iVar15 + 0x10;
                uVar13 = uVar13 + 1;
                lVar12 = lVar12 + 1;
                local_98 = local_98 + 8;
                local_94 = local_94 + -0x80;
                local_90 = local_90 + -0x10;
                *(longlong *)(local_50 + 8 + *(longlong *)(lVar6 + 0x23c78)) = local_78;
                *(longlong *)(lVar7 + 0x23e8) = *(longlong *)(lVar7 + 0x23e8) + 1;
                *(longlong *)(lVar7 + 0x2370) = *(longlong *)(lVar7 + 0x2370) + 4;
                *(longlong *)(lVar7 + 0x1018) = *(longlong *)(lVar7 + 0x1018) + 0x10;
                *(longlong *)(lVar7 + 0x1020) = *(longlong *)(lVar7 + 0x1020) + 8;
                *(longlong *)(lVar7 + 0x1028) = *(longlong *)(lVar7 + 0x1028) + 8;
                piVar2 = (int *)(lVar7 + 0x87a0 +
                                (ulonglong)*(byte *)(*(longlong *)(lVar7 + 0x1f80) + 0xb) * 4);
                *piVar2 = *piVar2 + 1;
                *(longlong *)(lVar7 + 0x1f80) = *(longlong *)(lVar7 + 0x1f80) + 0x4c;
                *(longlong *)(lVar7 + 0x2320) = *(longlong *)(lVar7 + 0x2320) + 0x84;
                *(longlong *)(lVar7 + 0x1fd0) = *(longlong *)(lVar7 + 0x1fd0) + 9;
              } while ((int)uVar13 < *(int *)(lVar6 + 0x1b358));
            }
            thunk_FUN_182bac2e0(lVar6 + 0x1af20 + (longlong)local_84 * 0x90,
                                *(longlong *)(lVar7 + 0x1f28) + 0x10,
                                *(longlong *)(lVar7 + 0x1f30) + 8,*(longlong *)(lVar7 + 0x1f38) + 8)
            ;
            *local_70 = uVar13 + iVar5;
            *(longlong *)(lVar7 + 0x1f80) = *(longlong *)(lVar7 + 0x1f80) + 0x4c;
            *(longlong *)(lVar7 + 0x2320) = *(longlong *)(lVar7 + 0x2320) + 0x84;
            *(longlong *)(lVar7 + 0x1018) =
                 *(longlong *)(lVar7 + 0x1018) +
                 (longlong)
                 (((*(int *)(lVar6 + 0x23c20) + 1) * *(int *)(lVar7 + 0xff0) -
                  *(int *)(lVar6 + 0x1b358)) * 0x10);
            *(longlong *)(lVar7 + 0x1020) =
                 *(longlong *)(lVar7 + 0x1020) +
                 (longlong)
                 (((*(int *)(lVar6 + 0x23c20) + 1) * *(int *)(lVar7 + 0x1004) -
                  *(int *)(lVar6 + 0x1b358)) * 8);
            *(longlong *)(lVar7 + 0x1028) =
                 *(longlong *)(lVar7 + 0x1028) +
                 (longlong)
                 (((*(int *)(lVar6 + 0x23c20) + 1) * *(int *)(lVar7 + 0x1004) -
                  *(int *)(lVar6 + 0x1b358)) * 8);
            *(longlong *)(lVar7 + 0x1f80) =
                 *(longlong *)(lVar7 + 0x1f80) +
                 (longlong)(*(int *)(lVar6 + 0x23c20) * *(int *)(lVar7 + 0x1f88)) * 0x4c;
            *(longlong *)(lVar7 + 0x2320) =
                 *(longlong *)(lVar7 + 0x2320) +
                 (longlong)(*(int *)(lVar6 + 0x23c20) * *(int *)(lVar7 + 0x1f88)) * 0x84;
            *(longlong *)(lVar7 + 0x23e8) =
                 *(longlong *)(lVar7 + 0x23e8) +
                 (longlong)(*(int *)(lVar6 + 0x23c20) * *(int *)(lVar6 + 0x1b358));
            iVar16 = iVar16 + *(int *)(lVar6 + 0x23c20) + 1;
          } while (iVar16 < *(int *)(lVar6 + 0x1b354));
          uVar14 = (ulonglong)local_80;
        }
        ReleaseSemaphore(*(HANDLE *)(*(longlong *)(lVar6 + 0x23c60) + local_68),1,(LPLONG)0x0);
      }
    } while (*(int *)(lVar6 + 0x23c1c) != 0);
  }
  return 0;
}


