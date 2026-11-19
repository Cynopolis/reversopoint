/* 0x183184b00 size=0x18b
   CloseHandle
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

BOOL FUN_183184b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  DWORD dwCreationFlags;
  BOOL BVar1;
  undefined1 auStackY_738 [32];
  _PROCESS_INFORMATION local_6e8;
  _STARTUPINFOW local_6c8;
  WCHAR local_658 [264];
  WCHAR local_448 [264];
  WCHAR local_238 [264];
  ulonglong local_28;
  
  local_28 = DAT_183dc69c0 ^ (ulonglong)auStackY_738;
  memset(&local_6c8,0,0x68);
  local_6c8.cb = 0x68;
  local_6c8.wShowWindow = 5;
  local_6c8.dwFlags = 1;
  local_6e8.hProcess = (HANDLE)0x0;
  local_6e8.hThread = (HANDLE)0x0;
  local_6e8.dwProcessId = 0;
  local_6e8.dwThreadId = 0;
  memset(local_238,0,0x208);
  memset(local_448,0,0x208);
  memset(local_658,0,0x208);
  thunk_FUN_183185930(param_1,local_238,0x104);
  thunk_FUN_183185930(param_2,local_448,0x104);
  thunk_FUN_183185930(param_3,local_658,0x104);
  dwCreationFlags = 0xc000000;
  if (param_4 == 0) {
    dwCreationFlags = 0x4000010;
  }
  BVar1 = CreateProcessW(local_238,local_448,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,0
                         ,dwCreationFlags,(LPVOID)0x0,local_658,&local_6c8,&local_6e8);
  if (BVar1 != 0) {
    CloseHandle(local_6e8.hThread);
    CloseHandle(local_6e8.hProcess);
  }
  return BVar1;
}


