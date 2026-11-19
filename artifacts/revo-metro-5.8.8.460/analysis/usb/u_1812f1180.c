/* 0x1812f1180 size=0x36a
   SetupDiDestroyDeviceInfoList @1812f12dd
   SetupDiGetClassDevsExW @1812f1286
   SetupDiEnumDeviceInfo @1812f12c3
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1812f1180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  BOOL BVar5;
  DWORD DVar6;
  ulonglong uVar7;
  ulong *puVar8;
  HDEVINFO DeviceInfoSet;
  longlong lVar9;
  DWORD MemberIndex;
  ulong *puVar10;
  undefined1 auStackY_608 [32];
  longlong local_5c8;
  longlong local_5c0;
  longlong local_5b8;
  longlong local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  _SP_DEVINFO_DATA local_598;
  GUID local_578;
  undefined1 local_568 [160];
  undefined1 local_4c8 [813];
  undefined1 local_19b [283];
  longlong *local_80;
  ulonglong local_48;
  
  local_48 = DAT_183dc69c0 ^ (ulonglong)auStackY_608;
  local_5a8 = param_1;
  local_5a0 = param_3;
  iVar4 = thunk_FUN_183180c40(&DAT_183dced58,0);
  if (iVar4 == 0) {
    uVar7 = thunk_FUN_18317f440(
                               "[SDK ERROR] getInUpgradeModeSerial, isInUpgradeMode g_adbMutex try lock failed\n"
                               );
    return uVar7 & 0xffffffffffffff00;
  }
  local_598.cbSize = _DAT_183252408;
  local_598.ClassGuid.Data2 = _UNK_183252410;
  local_598.ClassGuid.Data3 = _UNK_183252412;
  local_598.ClassGuid.Data1 = _UNK_18325240c;
  local_598.ClassGuid.Data4[4] = DAT_183252418;
  local_598.ClassGuid.Data4[5] = UNK_183252419;
  local_598.ClassGuid.Data4[6] = UNK_18325241a;
  local_598.ClassGuid.Data4[7] = UNK_18325241b;
  local_598.ClassGuid.Data4[0] = UNK_183252414;
  local_598.ClassGuid.Data4[1] = UNK_183252415;
  local_598.ClassGuid.Data4[2] = UNK_183252416;
  local_598.ClassGuid.Data4[3] = UNK_183252417;
  local_598.Reserved._0_4_ = _UNK_183252420;
  local_598.DevInst = _UNK_18325241c;
  local_598.Reserved._4_4_ = _UNK_183252424;
  puVar8 = (ulong *)thunk_FUN_183196718(0x20);
  thunk_FUN_1812b8c40(&local_598,&local_578,puVar8);
  bVar3 = false;
  puVar10 = puVar8;
  if (puVar8 != puVar8 + 8) {
LAB_1812f1260:
    MemberIndex = 0;
    local_578.Data1 = *puVar10;
    local_578._4_4_ = puVar10[1];
    local_578.Data4._0_4_ = puVar10[2];
    local_578.Data4._4_4_ = puVar10[3];
    DeviceInfoSet =
         SetupDiGetClassDevsExW
                   (&local_578,(PCWSTR)0x0,(HWND)0x0,2,(HDEVINFO)0x0,(PCWSTR)0x0,(PVOID)0x0);
    if (DeviceInfoSet != (HDEVINFO)0xffffffffffffffff) {
      do {
        local_598.cbSize = 0x20;
        local_598._20_8_ = 0;
        local_598.Reserved._4_4_ = 0;
        local_598.ClassGuid.Data1 = 0;
        local_598.ClassGuid.Data2 = 0;
        local_598.ClassGuid.Data3 = 0;
        local_598.ClassGuid.Data4[0] = '\0';
        local_598.ClassGuid.Data4[1] = '\0';
        local_598.ClassGuid.Data4[2] = '\0';
        local_598.ClassGuid.Data4[3] = '\0';
        local_598.ClassGuid.Data4[4] = '\0';
        local_598.ClassGuid.Data4[5] = '\0';
        local_598.ClassGuid.Data4[6] = '\0';
        local_598.ClassGuid.Data4[7] = '\0';
        BVar5 = SetupDiEnumDeviceInfo(DeviceInfoSet,MemberIndex,&local_598);
        if (BVar5 == 0) {
          DVar6 = GetLastError();
          if (DVar6 == 0x103) goto code_r0x0001812f12da;
        }
        else {
          bVar3 = true;
        }
        MemberIndex = MemberIndex + 1;
      } while( true );
    }
    goto LAB_1812f12ea;
  }
LAB_1812f147b:
  uVar7 = 0;
LAB_1812f147e:
  FUN_18002691d(&DAT_183dced58);
  if (puVar8 != (ulong *)0x0) {
    FUN_18001e0e2(puVar8,0x20);
  }
  return uVar7;
code_r0x0001812f12da:
  SetupDiDestroyDeviceInfoList(DeviceInfoSet);
  if (bVar3) goto LAB_1812f1300;
LAB_1812f12ea:
  puVar10 = puVar10 + 4;
  if (puVar10 == puVar8 + 8) goto code_r0x0001812f12f7;
  goto LAB_1812f1260;
code_r0x0001812f12f7:
  if (bVar3) {
LAB_1812f1300:
    local_5c8 = 0;
    local_5c0 = 0;
    uVar7 = 0;
    local_5b8 = 0;
    local_5b0 = 0;
    iVar4 = thunk_FUN_18317fd10(&local_5c8,&local_5c0);
    if (iVar4 == 0) {
      thunk_FUN_18317f440("[SDK ERROR] create read write pipe failed\n");
    }
    else {
      iVar4 = thunk_FUN_18317fd10(&local_5b8);
      if (iVar4 == 0) {
        thunk_FUN_18317f440("[SDK ERROR] create read write pipe failed\n");
      }
      else {
        memset(local_568,0,0x520);
        snprintf(local_4c8,0x104,&DAT_183252848);
        lVar9 = thunk_FUN_1831801c0(param_2,local_19b,0x104);
        if (lVar9 == 0) {
          thunk_FUN_18317f440("[SDK ERROR] getInUpgradeModeSerial, adb(%s) does not exist\n",param_2
                             );
        }
        else {
          iVar4 = thunk_FUN_1812eed50(local_5a0,local_568,local_5c8,local_5c0);
          if (iVar4 == 0) {
            uVar7 = 1;
          }
        }
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_80 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar2 = (int *)((longlong)local_80 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_80 + 8))(local_80);
            }
          }
        }
      }
    }
    if (local_5c8 != 0) {
      thunk_FUN_183180160();
    }
    if (local_5c0 != 0) {
      thunk_FUN_183180160();
    }
    if (local_5b8 != 0) {
      thunk_FUN_183180160();
    }
    if (local_5b0 != 0) {
      thunk_FUN_183180160();
    }
    thunk_FUN_1831852b0("adb.exe");
    goto LAB_1812f147e;
  }
  goto LAB_1812f147b;
}


