/* 0x1812bb000 size=0x112
   CreateFileW
   CloseHandle
*/


undefined4 * FUN_1812bb000(undefined4 *param_1,LPCWSTR param_2,undefined4 param_3)

{
  BOOL BVar1;
  HANDLE hDevice;
  undefined4 *lpInBuffer;
  LPCWSTR lpFileName;
  undefined2 uVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  LPCWSTR local_28 [2];
  
  uVar2 = 0;
  local_38 = 0;
  uStack_30 = 0;
  lpFileName = param_2;
  if (7 < *(ulonglong *)(param_2 + 0xc)) {
    lpFileName = *(LPCWSTR *)param_2;
  }
  local_28[0] = param_2;
  hDevice = CreateFileW(lpFileName,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hDevice != (HANDLE)0xffffffffffffffff) {
    local_28[0] = (LPCWSTR)CONCAT44(local_28[0]._4_4_,0x16d);
    lpInBuffer = malloc(0x16d);
    *lpInBuffer = param_3;
    BVar1 = DeviceIoControl(hDevice,0x220448,lpInBuffer,(DWORD)local_28[0],lpInBuffer,
                            (DWORD)local_28[0],(LPDWORD)local_28,(LPOVERLAPPED)0x0);
    if (BVar1 != 0) {
      local_38 = *(undefined8 *)(lpInBuffer + 1);
      uStack_30 = *(undefined8 *)(lpInBuffer + 3);
      uVar2 = *(undefined2 *)(lpInBuffer + 5);
    }
    free(lpInBuffer);
    CloseHandle(hDevice);
  }
  *param_1 = (undefined4)local_38;
  param_1[1] = local_38._4_4_;
  param_1[2] = (undefined4)uStack_30;
  param_1[3] = uStack_30._4_4_;
  *(undefined2 *)(param_1 + 4) = uVar2;
  thunk_FUN_1812bc4e0(param_2);
  return param_1;
}


