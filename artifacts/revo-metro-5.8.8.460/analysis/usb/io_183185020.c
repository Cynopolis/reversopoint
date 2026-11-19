/* 0x183185020 size=0x100
   CloseHandle
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_183185020(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  HANDLE hObject;
  char *pcVar4;
  undefined4 uVar5;
  undefined1 auStack_388 [32];
  undefined4 local_368;
  undefined4 local_360;
  undefined1 local_33c [532];
  char local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_183dc69c0 ^ (ulonglong)auStack_388;
  uVar5 = 0;
  hObject = (HANDLE)CreateToolhelp32Snapshot(2,0);
  if (hObject != (HANDLE)0xffffffffffffffff) {
    local_368 = 0x238;
    iVar3 = Process32FirstW(hObject);
    if (iVar3 != 0) {
      do {
        memset(local_128,0,0x104);
        thunk_FUN_183185880(local_33c,local_128,0x104);
        pcVar4 = param_1;
        do {
          cVar1 = *pcVar4;
          cVar2 = pcVar4[(longlong)(local_128 + -(longlong)param_1)];
          if (cVar1 != cVar2) break;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) {
          uVar5 = local_360;
        }
        iVar3 = Process32NextW(hObject);
        if (iVar3 == 0) {
          CloseHandle(hObject);
          return uVar5;
        }
      } while( true );
    }
    CloseHandle(hObject);
  }
  return 0;
}


