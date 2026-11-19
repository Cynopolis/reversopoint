/* 0x183185170 size=0xf5
   CloseHandle
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_183185170(char *param_1)

{
  int iVar1;
  HANDLE hObject;
  int iVar2;
  undefined1 auStack_388 [32];
  undefined4 local_368;
  undefined1 local_33c [532];
  char local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_183dc69c0 ^ (ulonglong)auStack_388;
  iVar2 = 0;
  hObject = (HANDLE)CreateToolhelp32Snapshot(2,0);
  if (hObject == (HANDLE)0xffffffffffffffff) {
    iVar2 = 0;
  }
  else {
    thunk_FUN_1831847c0();
    local_368 = 0x238;
    iVar1 = Process32FirstW(hObject);
    while (iVar1 != 0) {
      memset(local_128,0,0x104);
      thunk_FUN_183185880(local_33c,local_128,0x104);
      iVar1 = _stricmp(local_128,param_1);
      if (iVar1 == 0) {
        iVar2 = iVar2 + 1;
      }
      iVar1 = Process32NextW(hObject);
    }
    CloseHandle(hObject);
  }
  return iVar2;
}


