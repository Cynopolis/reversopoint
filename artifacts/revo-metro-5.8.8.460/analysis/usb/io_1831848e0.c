/* 0x1831848e0 size=0x19c
   CloseHandle
   WaitForSingleObject
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

BOOL FUN_1831848e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  DWORD dwCreationFlags;
  BOOL BVar1;
  undefined1 auStackY_748 [32];
  DWORD local_6f8 [2];
  _PROCESS_INFORMATION local_6f0;
  _STARTUPINFOW local_6d8;
  WCHAR local_668 [264];
  WCHAR local_458 [264];
  WCHAR local_248 [264];
  ulonglong local_38;
  
  local_38 = DAT_183dc69c0 ^ (ulonglong)auStackY_748;
  memset(&local_6d8,0,0x68);
  local_6d8.cb = 0x68;
  local_6d8.wShowWindow = 5;
  local_6d8.dwFlags = 1;
  local_6f0.hProcess = (HANDLE)0x0;
  local_6f0.hThread = (HANDLE)0x0;
  local_6f0.dwProcessId = 0;
  local_6f0.dwThreadId = 0;
  memset(local_248,0,0x208);
  memset(local_458,0,0x208);
  memset(local_668,0,0x208);
  thunk_FUN_183185930(param_1,local_248,0x104);
  thunk_FUN_183185930(param_2,local_458,0x104);
  thunk_FUN_183185930(param_3,local_668,0x104);
  dwCreationFlags = 0xc000000;
  if (param_4 == 0) {
    dwCreationFlags = 0x4000010;
  }
  BVar1 = CreateProcessW(local_248,local_458,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,0
                         ,dwCreationFlags,(LPVOID)0x0,local_668,&local_6d8,&local_6f0);
  if (BVar1 != 0) {
    local_6f8[0] = 0;
    WaitForSingleObject(local_6f0.hProcess,500000);
    GetTickCount();
    GetExitCodeProcess(local_6f0.hProcess,local_6f8);
    CloseHandle(local_6f0.hThread);
    CloseHandle(local_6f0.hProcess);
  }
  return BVar1;
}


