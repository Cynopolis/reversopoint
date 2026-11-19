/* 0x181f1da50 size=0x718
   WaitForSingleObject
   WaitForMultipleObjects
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_181f1da50(longlong param_1,ulonglong param_2,DWORD param_3)

{
  DWORD DVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 auStack_3a8 [12];
  HANDLE local_378 [68];
  DWORD aDStack_158 [65];
  DWORD local_54;
  DWORD local_50;
  DWORD local_4c;
  int local_48;
  int local_44;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  DWORD local_20;
  ulonglong local_18;
  
  puVar4 = auStack_3a8;
  for (lVar3 = 0xe8; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  local_18 = DAT_183dc69c0 ^ (ulonglong)auStack_3a8;
  local_48 = 0;
  local_50 = 0;
  local_44 = 0;
  local_4c = 0;
  do {
    if (param_2 <= (ulonglong)(longlong)(int)local_4c) {
      if (local_48 == 0) {
        iVar2 = 0;
      }
      else {
        local_20 = param_3;
        if (param_3 == 0xffffffff) {
          local_20 = 0xffffffff;
        }
        local_54 = WaitForMultipleObjects(local_50,local_378,0,local_20);
        if (local_54 < local_50) {
          local_48 = 0;
          for (local_4c = local_54; (int)local_4c < (int)local_50; local_4c = local_4c + 1) {
            DVar1 = WaitForSingleObject(local_378[(int)local_4c],0);
            if (DVar1 == 0) {
              if (((int)aDStack_158[(int)local_4c] < 0) ||
                 (param_2 <= (ulonglong)(longlong)(int)aDStack_158[(int)local_4c])) {
                _wassert(u_waitidx_i__>_0____waitidx_i__<_n_183d6ad20,
                         u____src_w32_estream_c_183d6acf0,0x387);
              }
              if ((*(uint *)(param_1 + 8 + (longlong)(int)aDStack_158[(int)local_4c] * 0x10) & 1) ==
                  0) {
                if ((*(uint *)(param_1 + 8 + (longlong)(int)aDStack_158[(int)local_4c] * 0x10) >> 1
                    & 1) != 0) {
                  *(uint *)(param_1 + 8 + (longlong)(int)aDStack_158[(int)local_4c] * 0x10) =
                       *(uint *)(param_1 + 8 + (longlong)(int)aDStack_158[(int)local_4c] * 0x10) |
                       0x200;
                }
              }
              else {
                *(uint *)(param_1 + 8 + (longlong)(int)aDStack_158[(int)local_4c] * 0x10) =
                     *(uint *)(param_1 + 8 + (longlong)(int)aDStack_158[(int)local_4c] * 0x10) |
                     0x100;
              }
              local_48 = 1;
              local_44 = local_44 + 1;
            }
          }
          if (local_48 == 0) {
            local_44 = -1;
          }
        }
        else if (local_54 != 0x102) {
          if (local_54 == 0xffffffff) {
            local_44 = -1;
          }
          else {
            local_44 = -1;
          }
        }
        if (0 < local_44) {
          for (local_4c = 0; (ulonglong)(longlong)(int)local_4c < param_2; local_4c = local_4c + 1)
          {
          }
        }
        iVar2 = local_44;
        if (local_44 < 0) {
          thunk_FUN_181cacf00(5);
          iVar2 = local_44;
        }
      }
LAB_181f1e13a:
      _RTC_CheckStackVars(auStack_3a8,&DAT_1835377a0);
      return iVar2;
    }
    if ((*(uint *)(param_1 + 8 + (longlong)(int)local_4c * 0x10) >> 0x17 & 1) == 0) {
      if (*(int *)(*(longlong *)(*(longlong *)(param_1 + (longlong)(int)local_4c * 0x10) + 0x48) +
                  0x248) == 5) {
        local_40 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + (longlong)(int)local_4c * 0x10) + 0x48) +
                    0x250);
        if (((*(uint *)(param_1 + 8 + (longlong)(int)local_4c * 0x10) & 1) != 0) ||
           ((*(uint *)(param_1 + 8 + (longlong)(int)local_4c * 0x10) >> 1 & 1) != 0)) {
          if ((*(uint *)(param_1 + 8 + (longlong)(int)local_4c * 0x10) & 1) == 0) {
            if ((*(uint *)(param_1 + 8 + (longlong)(int)local_4c * 0x10) >> 1 & 1) != 0) {
              local_30 = *(longlong *)(local_40 + 0x40);
              if (local_30 == 0) {
                local_30 = FUN_181f1ef30(local_40);
                *(longlong *)(local_40 + 0x40) = local_30;
                if (local_30 == 0) {
                  thunk_FUN_181cacf00(9);
                  iVar2 = -1;
                  goto LAB_181f1e13a;
                }
              }
              if (0x3f < local_50) {
                thunk_FUN_181cacf00(5);
                iVar2 = -1;
                goto LAB_181f1e13a;
              }
              aDStack_158[(int)local_50] = local_4c;
              local_378[(int)local_50] = *(HANDLE *)(local_30 + 0x50);
              local_50 = local_50 + 1;
              local_48 = 1;
            }
          }
          else {
            local_38 = *(longlong *)(local_40 + 0x38);
            if (local_38 == 0) {
              local_38 = FUN_181f1e5e0(local_40);
              *(longlong *)(local_40 + 0x38) = local_38;
              if (local_38 == 0) {
                thunk_FUN_181cacf00(9);
                iVar2 = -1;
                goto LAB_181f1e13a;
              }
            }
            if (0x3f < local_50) {
              thunk_FUN_181cacf00(5);
              iVar2 = -1;
              goto LAB_181f1e13a;
            }
            aDStack_158[(int)local_50] = local_4c;
            local_378[(int)local_50] = *(HANDLE *)(local_38 + 0x50);
            local_50 = local_50 + 1;
            local_48 = 1;
          }
        }
      }
      else {
        *(uint *)(param_1 + 8 + (longlong)(int)local_4c * 0x10) =
             *(uint *)(param_1 + 8 + (longlong)(int)local_4c * 0x10) | 0x10000;
      }
    }
    local_4c = local_4c + 1;
  } while( true );
}


