/* 0x183157a20 size=0x44b
   WSACreateEvent
   ReadFile
   WaitForMultipleObjects
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_183157a20(longlong param_1,undefined1 *param_2)

{
  LPVOID lpBuffer;
  undefined8 uVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  BOOL BVar9;
  uint uVar10;
  ulonglong uVar11;
  HANDLE pvVar12;
  HANDLE hFile;
  longlong lVar13;
  undefined4 *puVar14;
  undefined1 auStackY_118 [32];
  DWORD local_e8;
  DWORD local_e4;
  DWORD local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  HANDLE local_c0;
  HANDLE local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  uint local_78;
  ulonglong local_48;
  
  local_48 = DAT_183dc69c0 ^ (ulonglong)auStackY_118;
  local_c8 = *(longlong *)(param_1 + 0x18);
  bVar4 = true;
  bVar3 = true;
  lpBuffer = *(LPVOID *)(param_1 + 0xd38);
  uVar1 = *(undefined8 *)(local_c8 + 0x1e8);
  *param_2 = 1;
  local_d8 = uVar1;
  uVar11 = FUN_1831583a0();
  if ((int)uVar11 == 0) {
    piVar2 = *(int **)(param_1 + 0x1b0);
    uVar11 = FUN_183157ff0(param_1);
    if ((int)uVar11 == 0) {
      pvVar12 = (HANDLE)WSACreateEvent();
      if (pvVar12 == (HANDLE)0x0) {
        uVar5 = Ordinal_111();
        thunk_FUN_183131ac0(param_1,"WSACreateEvent failed (%d)",uVar5);
        uVar11 = 2;
      }
      else {
        iVar6 = WSAEventSelect(uVar1,pvVar12,0x21);
        if (iVar6 == -1) {
          WSACloseEvent(pvVar12);
          uVar11 = 0;
        }
        else {
          hFile = GetStdHandle(0xfffffff6);
          local_c0 = pvVar12;
          local_b8 = hFile;
          DVar7 = GetFileType(hFile);
          if ((DVar7 == 3) || (*(char *)(param_1 + 0xb18) != '\0')) {
            local_e4 = 1;
            local_e0 = 100;
            uVar11 = uVar11 & 0xffffffff;
          }
          else {
            local_e4 = 2;
            local_e0 = 1000;
            uVar11 = uVar11 & 0xffffffff;
          }
          do {
            DVar7 = *(DWORD *)(param_1 + 0x734);
            DVar8 = WaitForMultipleObjects(local_e4,&local_c0,0,local_e0);
            uVar1 = local_d8;
            if (DVar8 == 0) {
              local_78 = 0;
              iVar6 = WSAEnumNetworkEvents(local_d8,pvVar12);
              if (iVar6 == -1) {
                iVar6 = Ordinal_111();
                if (iVar6 != 0x2734) {
                  thunk_FUN_183131c90(param_1,"WSAEnumNetworkEvents failed (%d)");
                  bVar4 = false;
                  uVar11 = 0x1a;
                  bVar3 = false;
                }
              }
              else if ((local_78 & 1) == 0) {
LAB_183157d63:
                bVar3 = bVar4;
                if ((local_78 & 0x20) != 0) {
                  bVar4 = false;
                  bVar3 = false;
                }
              }
              else {
                uVar10 = thunk_FUN_183131e00(param_1,uVar1,lpBuffer,
                                             (longlong)*(int *)(param_1 + 0x734));
                uVar11 = (ulonglong)uVar10;
                if (uVar10 != 0x51) {
                  if (uVar10 == 0) {
                    if (local_d0 < 1) {
                      bVar4 = false;
                      bVar3 = false;
                    }
                    else {
                      uVar10 = FUN_183159890(param_1,lpBuffer);
                      uVar11 = (ulonglong)uVar10;
                      if (uVar10 == 0) {
                        if ((*piVar2 != 0) && (piVar2[1] == 0)) {
                          FUN_183158450(param_1);
                          piVar2[1] = 1;
                        }
                        goto LAB_183157d63;
                      }
                      bVar4 = false;
                      bVar3 = false;
                    }
                  }
                  else {
                    bVar4 = false;
                    bVar3 = false;
                  }
                }
              }
            }
            else if (DVar8 == 1) {
              BVar9 = ReadFile(hFile,lpBuffer,DVar7,&local_e8,(LPOVERLAPPED)0x0);
              if (BVar9 == 0) {
LAB_183157c61:
                bVar4 = false;
                uVar11 = 0x1a;
                bVar3 = false;
              }
              else {
                uVar10 = FUN_183159020(param_1,lpBuffer);
                uVar11 = (ulonglong)uVar10;
                if (uVar10 != 0) {
                  bVar4 = false;
                  bVar3 = false;
                }
              }
            }
            else if (DVar8 == 0x102) {
              do {
                if (*(char *)(param_1 + 0xb18) == '\0') {
                  BVar9 = PeekNamedPipe(hFile,(LPVOID)0x0,0,(LPDWORD)0x0,&local_e8,(LPDWORD)0x0);
                  if (BVar9 == 0) goto LAB_183157c61;
                  if (local_e8 == 0) goto LAB_183157d77;
                  BVar9 = ReadFile(hFile,lpBuffer,DVar7,&local_e8,(LPOVERLAPPED)0x0);
                  if (BVar9 == 0) goto LAB_183157c61;
                }
                else {
                  lVar13 = (**(code **)(param_1 + 0x11e8))(lpBuffer,1);
                  if (lVar13 == 0x10000000) goto LAB_183157c61;
                  if ((lVar13 == 0x10000001) || (lVar13 == 0)) goto LAB_183157d77;
                  local_e8 = (DWORD)lVar13;
                }
                uVar10 = FUN_183159020(param_1);
                uVar11 = (ulonglong)uVar10;
              } while (uVar10 == 0);
              bVar4 = false;
              bVar3 = false;
            }
LAB_183157d77:
            if (*(int *)(param_1 + 0x318) != 0) {
              puVar14 = (undefined4 *)thunk_FUN_183144d40(local_88);
              local_a8 = *(undefined8 *)(local_c8 + 0x1c8);
              uStack_a0 = *(undefined8 *)(local_c8 + 0x1d0);
              local_98 = *puVar14;
              uStack_94 = puVar14[1];
              uStack_90 = puVar14[2];
              uStack_8c = puVar14[3];
              lVar13 = thunk_FUN_183144de0(&local_98,&local_a8);
              if (*(int *)(param_1 + 0x318) <= lVar13) {
                thunk_FUN_183131ac0(param_1,"Time-out");
                uVar11 = 0x1c;
                break;
              }
            }
          } while (bVar3);
          iVar6 = WSACloseEvent(pvVar12);
          if (iVar6 == 0) {
            uVar5 = Ordinal_111();
            thunk_FUN_183131c90(param_1,"WSACloseEvent failed (%d)",uVar5);
          }
          thunk_FUN_18314ed20(param_1,0xffffffff,0xffffffffffffffff,0);
        }
      }
    }
  }
  return uVar11;
}


