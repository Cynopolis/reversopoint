/* 0x1812bed40 size=0x27e
   SetupDiDestroyDeviceInfoList @1812bef86
   SetupDiEnumDeviceInterfaces @1812bedf6
   SetupDiEnumDeviceInterfaces @1812bef68
   SetupDiGetDeviceRegistryPropertyA @1812beeac
   SetupDiGetClassDevsA @1812bedd3
   SetupDiGetDeviceInterfaceDetailA @1812bee5e
   SetupDiGetDeviceInterfaceDetailA @1812bee2c
   SetupDiEnumDeviceInfo @1812bee77
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1812bed40(short param_1,short param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  BOOL BVar4;
  ulonglong uVar5;
  HDEVINFO DeviceInfoSet;
  PSP_DEVICE_INTERFACE_DETAIL_DATA_A DeviceInterfaceDetailData;
  HANDLE hObject;
  ulonglong uVar6;
  ulonglong uVar7;
  uint MemberIndex;
  undefined1 auStackY_1e8 [32];
  DWORD local_1a8;
  short local_1a4;
  ulonglong local_1a0;
  undefined4 local_198;
  short local_194;
  short local_192;
  GUID local_188;
  _SP_DEVINFO_DATA local_178;
  _SP_DEVICE_INTERFACE_DATA local_158;
  BYTE local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_183dc69c0 ^ (ulonglong)auStackY_1e8;
  uVar7 = 0;
  local_1a0 = 0;
  local_1a4 = param_1;
  iVar3 = hid_init();
  if (iVar3 < 0) {
    uVar5 = 0;
  }
  else {
    (*DAT_183dceb98)(&local_188);
    local_158.cbSize = 0x20;
    local_178.ClassGuid.Data2 = 0;
    local_178.ClassGuid.Data3 = 0;
    local_178.ClassGuid.Data4[0] = '\0';
    local_178.ClassGuid.Data4[1] = '\0';
    local_178.ClassGuid.Data4[2] = '\0';
    local_178.ClassGuid.Data4[3] = '\0';
    local_178.cbSize = 0x20;
    local_178.ClassGuid.Data1 = 0;
    local_178.ClassGuid.Data4[4] = '\0';
    local_178.ClassGuid.Data4[5] = '\0';
    local_178.ClassGuid.Data4[6] = '\0';
    local_178.ClassGuid.Data4[7] = '\0';
    local_178.DevInst = 0;
    local_178.Reserved = 0;
    DeviceInfoSet = SetupDiGetClassDevsA(&local_188,(PCSTR)0x0,(HWND)0x0,0x12);
    local_1a8 = 0;
    iVar3 = SetupDiEnumDeviceInterfaces(DeviceInfoSet,(PSP_DEVINFO_DATA)0x0,&local_188,0,&local_158)
    ;
    uVar1 = uVar7;
    uVar5 = uVar7;
    while (iVar3 != 0) {
      SetupDiGetDeviceInterfaceDetailA
                (DeviceInfoSet,&local_158,(PSP_DEVICE_INTERFACE_DETAIL_DATA_A)0x0,0,&local_1a8,
                 (PSP_DEVINFO_DATA)0x0);
      DeviceInterfaceDetailData = malloc((ulonglong)local_1a8);
      DeviceInterfaceDetailData->cbSize = 8;
      BVar4 = SetupDiGetDeviceInterfaceDetailA
                        (DeviceInfoSet,&local_158,DeviceInterfaceDetailData,local_1a8,(PDWORD)0x0,
                         (PSP_DEVINFO_DATA)0x0);
      uVar5 = uVar1;
      if (((BVar4 != 0) &&
          (BVar4 = SetupDiEnumDeviceInfo(DeviceInfoSet,(DWORD)uVar7,&local_178), BVar4 != 0)) &&
         (BVar4 = SetupDiGetDeviceRegistryPropertyA
                            (DeviceInfoSet,&local_178,9,(PDWORD)0x0,local_138,0x100,(PDWORD)0x0),
         BVar4 != 0)) {
        hObject = (HANDLE)FUN_1812c0930(DeviceInterfaceDetailData->DevicePath,0);
        if (hObject == (HANDLE)0xffffffffffffffff) {
          thunk_FUN_18317f440("[SDK ERROR] open device failed \n");
        }
        else {
          local_198 = 0xc;
          (*DAT_183dceba0)(hObject,&local_198);
          uVar2 = local_1a0;
          if ((((local_1a4 == 0) || (local_194 == local_1a4)) &&
              ((param_2 == 0 || (local_192 == param_2)))) &&
             ((uVar6 = FUN_1812bf160(DeviceInterfaceDetailData->DevicePath,hObject),
              uVar2 = local_1a0, uVar6 != 0 && (uVar5 = uVar6, uVar2 = uVar6, uVar1 != 0)))) {
            *(ulonglong *)(uVar1 + 0x38) = uVar6;
            uVar2 = local_1a0;
          }
          local_1a0 = uVar2;
          CloseHandle(hObject);
        }
      }
      free(DeviceInterfaceDetailData);
      local_1a8 = 0;
      MemberIndex = (DWORD)uVar7 + 1;
      uVar7 = (ulonglong)MemberIndex;
      iVar3 = SetupDiEnumDeviceInterfaces
                        (DeviceInfoSet,(PSP_DEVINFO_DATA)0x0,&local_188,MemberIndex,&local_158);
      uVar1 = uVar5;
      uVar5 = local_1a0;
    }
    SetupDiDestroyDeviceInfoList(DeviceInfoSet);
  }
  return uVar5;
}


