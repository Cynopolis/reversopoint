/* 0x1831847c0 size=0xbe
   CloseHandle
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1831847c0(void)

{
  BOOL BVar1;
  HANDLE ProcessHandle;
  undefined1 auStackY_68 [32];
  HANDLE local_38;
  _LUID local_30;
  _TOKEN_PRIVILEGES local_28;
  ulonglong local_18;
  
  local_18 = DAT_183dc69c0 ^ (ulonglong)auStackY_68;
  ProcessHandle = GetCurrentProcess();
  BVar1 = OpenProcessToken(ProcessHandle,0xf01ff,&local_38);
  if (BVar1 != 0) {
    BVar1 = LookupPrivilegeValueW((LPCWSTR)0x0,L"SeDebugPrivilege",&local_30);
    if (BVar1 != 0) {
      local_28.Privileges[0].Luid.LowPart = local_30.LowPart;
      local_28.Privileges[0].Luid.HighPart = local_30.HighPart;
      local_28.PrivilegeCount = 1;
      local_28.Privileges[0].Attributes = 2;
      BVar1 = AdjustTokenPrivileges(local_38,0,&local_28,0x10,(PTOKEN_PRIVILEGES)0x0,(PDWORD)0x0);
      if (BVar1 != 0) {
        return 1;
      }
    }
    CloseHandle(local_38);
  }
  return 0;
}


