/* 0x1812bb160 size=0x1c8
   SetupDiDestroyDeviceInfoList @1812bb2f2
   SetupDiEnumDeviceInterfaces @1812bb243
   SetupDiGetDeviceInterfaceDetailW @1812bb273
   SetupDiGetDeviceInterfaceDetailW @1812bb2a6
   SetupDiGetClassDevsW @1812bb1cf
   SetupDiEnumDeviceInfo @1812bb212
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1812bb160(undefined8 *param_1,DWORD param_2)

{
  longlong lVar1;
  DWORD DVar2;
  BOOL BVar3;
  HDEVINFO DeviceInfoSet;
  PSP_DEVICE_INTERFACE_DETAIL_DATA_W DeviceInterfaceDetailData;
  DWORD MemberIndex;
  longlong lVar4;
  undefined1 auStackY_a8 [32];
  DWORD local_78;
  undefined4 local_74;
  undefined8 *local_70;
  _SP_DEVINFO_DATA local_68;
  _SP_DEVICE_INTERFACE_DATA local_48;
  ulonglong local_28;
  
  local_28 = DAT_183dc69c0 ^ (ulonglong)auStackY_a8;
  MemberIndex = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  local_74 = 1;
  local_70 = param_1;
  DeviceInfoSet = SetupDiGetClassDevsW((GUID *)&DAT_183225738,(PCWSTR)0x0,(HWND)0x0,0x12);
  if (DeviceInfoSet != (HDEVINFO)0xffffffffffffffff) {
    DVar2 = GetLastError();
    while (DVar2 != 0x103) {
      local_68.cbSize = 0x20;
      BVar3 = SetupDiEnumDeviceInfo(DeviceInfoSet,MemberIndex,&local_68);
      if (((BVar3 != 0) && (local_68.DevInst == param_2)) &&
         (BVar3 = SetupDiEnumDeviceInterfaces
                            (DeviceInfoSet,(PSP_DEVINFO_DATA)0x0,(GUID *)&DAT_183225738,MemberIndex,
                             &local_48), BVar3 != 0)) {
        local_78 = 0;
        SetupDiGetDeviceInterfaceDetailW
                  (DeviceInfoSet,&local_48,(PSP_DEVICE_INTERFACE_DETAIL_DATA_W)0x0,0,&local_78,
                   (PSP_DEVINFO_DATA)0x0);
        DeviceInterfaceDetailData = malloc((ulonglong)local_78);
        DeviceInterfaceDetailData->cbSize = 8;
        BVar3 = SetupDiGetDeviceInterfaceDetailW
                          (DeviceInfoSet,&local_48,DeviceInterfaceDetailData,local_78,(PDWORD)0x0,
                           (PSP_DEVINFO_DATA)0x0);
        if (BVar3 != 0) {
          lVar4 = -1;
          do {
            lVar1 = lVar4 + 1;
            lVar4 = lVar4 + 1;
          } while (DeviceInterfaceDetailData->DevicePath[lVar1] != L'\0');
          thunk_FUN_1812bc900(param_1);
        }
        free(DeviceInterfaceDetailData);
      }
      MemberIndex = MemberIndex + 1;
      DVar2 = GetLastError();
    }
  }
  SetupDiDestroyDeviceInfoList(DeviceInfoSet);
  return param_1;
}


