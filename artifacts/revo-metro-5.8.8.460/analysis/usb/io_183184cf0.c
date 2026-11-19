/* 0x183184cf0 size=0x27e
   CloseHandle
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

BOOL FUN_183184cf0(char *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  int iVar3;
  void *pvVar4;
  BOOL BVar5;
  undefined8 uVar6;
  LPWSTR lpCommandLine;
  byte *pbVar7;
  void *_Memory;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStackY_358 [32];
  _PROCESS_INFORMATION local_308;
  _STARTUPINFOW local_2e8;
  byte local_278;
  undefined7 uStack_277;
  undefined8 local_268;
  ulonglong local_260;
  WCHAR local_258 [264];
  ulonglong local_48;
  
  local_48 = DAT_183dc69c0 ^ (ulonglong)auStackY_358;
  GetStartupInfoW(&local_2e8);
  local_2e8.hStdOutput = (HANDLE)*param_5;
  local_2e8.hStdInput = (HANDLE)*param_4;
  local_2e8.dwFlags = 0x100;
  local_260 = 0xf;
  local_268 = 0;
  local_278 = 0;
  local_2e8.hStdError = local_2e8.hStdOutput;
  thunk_FUN_182eb9920(&local_278,&DAT_18362d6e0,1);
  if (*param_1 == '\0') {
    lVar9 = 0;
  }
  else {
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (param_1[lVar9] != '\0');
  }
  thunk_FUN_183078050(&local_278,param_1,lVar9);
  thunk_FUN_183078050(&local_278,&DAT_18362d6e0,1);
  if (*param_2 != 0) {
    lVar9 = 0;
    plVar8 = param_2;
    do {
      thunk_FUN_183078050(&local_278,&DAT_183604e00,1);
      pcVar1 = (char *)*plVar8;
      if (*pcVar1 == '\0') {
        lVar10 = 0;
      }
      else {
        lVar10 = -1;
        do {
          lVar10 = lVar10 + 1;
        } while (pcVar1[lVar10] != '\0');
      }
      thunk_FUN_183078050(&local_278,pcVar1,lVar10);
      lVar9 = lVar9 + 1;
      plVar8 = param_2 + lVar9;
    } while (param_2[lVar9] != 0);
  }
  lVar9 = -1;
  pbVar7 = &local_278;
  if (0xf < local_260) {
    pbVar7 = (byte *)CONCAT71(uStack_277,local_278);
  }
  do {
    lVar10 = lVar9 + 1;
    lVar9 = lVar9 + 1;
  } while (pbVar7[lVar10] != 0);
  iVar3 = (int)lVar9 * 2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (longlong)(iVar3 + 3);
  uVar6 = SUB168(ZEXT816(2) * auVar2,0);
  if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  lpCommandLine = (LPWSTR)thunk_FUN_183196718(uVar6);
  pbVar7 = &local_278;
  if (0xf < local_260) {
    pbVar7 = (byte *)CONCAT71(uStack_277,local_278);
  }
  thunk_FUN_183185930(pbVar7,lpCommandLine,iVar3 + 2);
  thunk_FUN_183185930(param_3,local_258);
  BVar5 = CreateProcessW((LPCWSTR)0x0,lpCommandLine,(LPSECURITY_ATTRIBUTES)0x0,
                         (LPSECURITY_ATTRIBUTES)0x0,1,0xc000000,(LPVOID)0x0,local_258,&local_2e8,
                         &local_308);
  CloseHandle(local_308.hThread);
  CloseHandle(local_308.hProcess);
  free(lpCommandLine);
  if (0xf < local_260) {
    pvVar4 = (void *)CONCAT71(uStack_277,local_278);
    _Memory = pvVar4;
    if (0xfff < local_260 + 1) {
      if ((local_278 & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      _Memory = *(void **)((longlong)pvVar4 - 8);
      if (pvVar4 <= _Memory) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if ((ulonglong)((longlong)pvVar4 - (longlong)_Memory) < 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      if (0x27 < (ulonglong)((longlong)pvVar4 - (longlong)_Memory)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    free(_Memory);
  }
  return BVar5;
}


