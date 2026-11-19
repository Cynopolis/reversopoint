/* 0x1831852b0 size=0x115
   CloseHandle
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1831852b0(char *param_1)

{
  int iVar1;
  BOOL BVar2;
  HANDLE hObject;
  HANDLE hProcess;
  undefined8 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined1 auStack_398 [32];
  undefined4 local_378;
  DWORD local_370;
  undefined1 local_34c [532];
  char local_138 [272];
  ulonglong local_28;
  
  local_28 = DAT_183dc69c0 ^ (ulonglong)auStack_398;
  DVar4 = 0xffffffff;
  hObject = (HANDLE)CreateToolhelp32Snapshot(2,0);
  thunk_FUN_1831847c0();
  local_378 = 0x238;
  iVar1 = Process32FirstW(hObject);
  while (uVar3 = 1, DVar5 = DVar4, iVar1 != 0) {
    memset(local_138,0,0x104);
    thunk_FUN_183185880(local_34c,local_138,0x104);
    iVar1 = _stricmp(local_138,param_1);
    DVar5 = local_370;
    if (iVar1 == 0) {
      hProcess = OpenProcess(0x1fffff,1,local_370);
      BVar2 = TerminateProcess(hProcess,0);
      uVar3 = 0;
      DVar4 = DVar5;
      if (BVar2 != 1) break;
    }
    iVar1 = Process32NextW(hObject);
  }
  CloseHandle(hObject);
  if (DVar5 == 0xffffffff) {
    uVar3 = 0;
  }
  return uVar3;
}


