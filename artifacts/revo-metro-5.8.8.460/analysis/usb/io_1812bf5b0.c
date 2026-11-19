/* 0x1812bf5b0 size=0xca
   GetOverlappedResult
*/


int FUN_1812bf5b0(undefined8 *param_1,DWORD param_2,char *param_3,DWORD param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  DWORD local_res8 [2];
  _OVERLAPPED local_28;
  
  local_res8[0] = 0;
  local_28.Internal = 0;
  local_28.InternalHigh = 0;
  local_28.u.Pointer = (PVOID)0x0;
  local_28.hEvent = (HANDLE)0x0;
  BVar1 = DeviceIoControl((HANDLE)*param_1,param_2,param_3,param_4,param_3,param_4,local_res8,
                          &local_28);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 != 0x3e5) {
      FUN_1812c0980(param_1,"Get Input/Feature Report DeviceIoControl");
      return -1;
    }
  }
  BVar1 = GetOverlappedResult((HANDLE)*param_1,&local_28,local_res8,1);
  if (BVar1 == 0) {
    FUN_1812c0980(param_1,"Get Input/Feature Report GetOverLappedResult");
    return -1;
  }
  if (*param_3 == '\0') {
    local_res8[0] = local_res8[0] + 1;
  }
  return local_res8[0];
}


