/* 0x1812f0bd0 size=0x46f
   SetupDiDestroyDeviceInfoList @1812f0d2e
   SetupDiGetClassDevsExW @1812f0cd6
   SetupDiEnumDeviceInfo @1812f0d10
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1812f0bd0(void *param_1,void *param_2,undefined8 param_3)

{
  ulong *puVar1;
  longlong *plVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  BOOL BVar6;
  DWORD DVar7;
  ulong *puVar8;
  HDEVINFO DeviceInfoSet;
  longlong lVar9;
  size_t sVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStackY_798 [32];
  undefined1 local_758 [8];
  longlong local_750;
  longlong local_748;
  longlong local_740;
  longlong local_738;
  undefined8 local_730;
  void *local_728;
  ulong *local_720;
  _SP_DEVINFO_DATA local_718;
  GUID local_6f8;
  undefined1 local_6e8 [32];
  undefined1 local_6c8 [32];
  undefined1 local_6a8 [96];
  undefined1 local_648 [813];
  undefined1 local_31b [283];
  longlong *local_200;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined1 local_158 [272];
  ulonglong local_48;
  
  local_48 = DAT_183dc69c0 ^ (ulonglong)auStackY_798;
  local_730 = param_3;
  local_728 = param_2;
  iVar5 = thunk_FUN_183180c40(&DAT_183dced58,0);
  if (iVar5 == 0) {
    thunk_FUN_18317f440(
                       "[SDK ERROR] getInUpgradeMode, isInUsbUpgradeMode g_adbMutex try lock failed\n"
                       );
    return 0xffffffffffffffff;
  }
  local_718.cbSize = _DAT_183252408;
  local_718.ClassGuid.Data2 = _UNK_183252410;
  local_718.ClassGuid.Data3 = _UNK_183252412;
  local_718.ClassGuid.Data1 = _UNK_18325240c;
  local_718.ClassGuid.Data4[4] = DAT_183252418;
  local_718.ClassGuid.Data4[5] = UNK_183252419;
  local_718.ClassGuid.Data4[6] = UNK_18325241a;
  local_718.ClassGuid.Data4[7] = UNK_18325241b;
  local_718.ClassGuid.Data4[0] = UNK_183252414;
  local_718.ClassGuid.Data4[1] = UNK_183252415;
  local_718.ClassGuid.Data4[2] = UNK_183252416;
  local_718.ClassGuid.Data4[3] = UNK_183252417;
  local_718.Reserved._0_4_ = _UNK_183252420;
  local_718.DevInst = _UNK_18325241c;
  local_718.Reserved._4_4_ = _UNK_183252424;
  puVar8 = (ulong *)thunk_FUN_183196718(0x20);
  local_720 = puVar8;
  thunk_FUN_1812b8c40(&local_718,&local_6f8,puVar8);
  puVar1 = puVar8 + 8;
  bVar4 = false;
  uVar11 = 0;
  if (puVar8 != puVar1) {
LAB_1812f0cb0:
    local_6f8.Data1 = *puVar8;
    local_6f8._4_4_ = puVar8[1];
    local_6f8.Data4._0_4_ = puVar8[2];
    local_6f8.Data4._4_4_ = puVar8[3];
    DeviceInfoSet =
         SetupDiGetClassDevsExW
                   (&local_6f8,(PCWSTR)0x0,(HWND)0x0,2,(HDEVINFO)0x0,(PCWSTR)0x0,(PVOID)0x0);
    uVar12 = uVar11;
    if (DeviceInfoSet != (HDEVINFO)0xffffffffffffffff) {
      do {
        local_718.cbSize = 0x20;
        local_718._20_8_ = 0;
        local_718.Reserved._4_4_ = 0;
        local_718.ClassGuid.Data1 = 0;
        local_718.ClassGuid.Data2 = 0;
        local_718.ClassGuid.Data3 = 0;
        local_718.ClassGuid.Data4[0] = '\0';
        local_718.ClassGuid.Data4[1] = '\0';
        local_718.ClassGuid.Data4[2] = '\0';
        local_718.ClassGuid.Data4[3] = '\0';
        local_718.ClassGuid.Data4[4] = '\0';
        local_718.ClassGuid.Data4[5] = '\0';
        local_718.ClassGuid.Data4[6] = '\0';
        local_718.ClassGuid.Data4[7] = '\0';
        BVar6 = SetupDiEnumDeviceInfo(DeviceInfoSet,(DWORD)uVar12,&local_718);
        if (BVar6 == 0) {
          DVar7 = GetLastError();
          if (DVar7 == 0x103) goto code_r0x0001812f0d2b;
        }
        else {
          bVar4 = true;
        }
        uVar12 = (ulonglong)((DWORD)uVar12 + 1);
      } while( true );
    }
    goto LAB_1812f0d39;
  }
LAB_1812f0d4b:
  thunk_FUN_18317f440("[SDK ERROR] windows regitst table get bIsInAdbMode : not in adb mode\r\n");
LAB_1812f0d57:
  local_750 = 0;
  local_748 = 0;
  local_740 = 0;
  local_738 = 0;
  iVar5 = thunk_FUN_18317fd10(&local_750,&local_748);
  uVar12 = uVar11;
  if (iVar5 == 0) {
    thunk_FUN_18317f440("[SDK ERROR] create read write pipe failed\n");
    goto LAB_1812f0fa5;
  }
  iVar5 = thunk_FUN_18317fd10(&local_740);
  if (iVar5 == 0) {
    thunk_FUN_18317f440("[SDK ERROR] create read write pipe failed\n");
    goto LAB_1812f0fa5;
  }
  memset(local_6e8,0,0x520);
  memset(local_158,0,0x104);
  snprintf(local_158,0x104,"%s/%s",local_730);
  lVar9 = thunk_FUN_1831801c0(local_158,local_31b,0x104);
  if (lVar9 == 0) {
    thunk_FUN_18317f440("[SDK ERROR] adb(%s) does not exist\n",local_158);
joined_r0x0001812f0f65:
    uVar12 = 0;
    if (local_200 == (longlong *)0x0) goto LAB_1812f0fa5;
    LOCK();
    plVar2 = local_200 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    uVar12 = 0;
    if ((int)lVar9 != 1) goto LAB_1812f0fa5;
    (**(code **)*local_200)(local_200);
    LOCK();
    piVar3 = (int *)((longlong)local_200 + 0xc);
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    uVar12 = uVar11;
  }
  else {
    snprintf(local_648,0x104,&DAT_183252848);
    sVar10 = 0xffffffffffffffff;
    do {
      sVar10 = sVar10 + 1;
    } while (*(char *)((longlong)param_1 + sVar10) != '\0');
    memcpy(local_6c8,param_1,sVar10);
    sVar10 = 0xffffffffffffffff;
    do {
      sVar10 = sVar10 + 1;
    } while (*(char *)((longlong)local_728 + sVar10) != '\0');
    memcpy(local_6a8,local_728,sVar10);
    local_758[0] = 1;
    local_168 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    uStack_170 = 0;
    iVar5 = thunk_FUN_1812eed50(local_758,local_6e8,local_750,local_748);
    if (iVar5 != 0) {
      thunk_FUN_18317f440("[SDK ERROR] not found the adb devices\n");
      goto joined_r0x0001812f0f65;
    }
    uVar12 = 1;
    if (local_200 == (longlong *)0x0) goto LAB_1812f0fa5;
    LOCK();
    plVar2 = local_200 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 != 1) goto LAB_1812f0fa5;
    (**(code **)*local_200)(local_200);
    LOCK();
    piVar3 = (int *)((longlong)local_200 + 0xc);
    iVar5 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
  }
  if (iVar5 == 1) {
    (**(code **)(*local_200 + 8))(local_200);
  }
LAB_1812f0fa5:
  if (local_750 != 0) {
    thunk_FUN_183180160();
  }
  if (local_748 != 0) {
    thunk_FUN_183180160();
  }
  if (local_740 != 0) {
    thunk_FUN_183180160();
  }
  if (local_738 != 0) {
    thunk_FUN_183180160();
  }
  thunk_FUN_1831852b0("adb.exe");
  FUN_18002691d(&DAT_183dced58);
  if (local_720 != (ulong *)0x0) {
    FUN_18001e0e2(local_720,0x20);
  }
  return uVar12;
code_r0x0001812f0d2b:
  SetupDiDestroyDeviceInfoList(DeviceInfoSet);
  if (bVar4) goto LAB_1812f0d57;
LAB_1812f0d39:
  puVar8 = puVar8 + 4;
  if (puVar8 == puVar1) goto code_r0x0001812f0d46;
  goto LAB_1812f0cb0;
code_r0x0001812f0d46:
  if (!bVar4) goto LAB_1812f0d4b;
  goto LAB_1812f0d57;
}


