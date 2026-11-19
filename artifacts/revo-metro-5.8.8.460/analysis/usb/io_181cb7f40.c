/* 0x181cb7f40 size=0x2e3
   CloseHandle
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_181cb7f40(void)

{
  DWORD DVar1;
  int iVar2;
  size_t sVar3;
  int *piVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 auStackY_1d8 [8];
  int local_198;
  CHAR local_178 [296];
  char *local_50;
  char *local_48;
  HANDLE local_40;
  DWORD local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_20;
  ulonglong local_18;
  
  puVar6 = auStackY_1d8;
  for (lVar5 = 0x74; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = 0xcccccccc;
    puVar6 = puVar6 + 1;
  }
  local_18 = DAT_183dc69c0 ^ (ulonglong)auStackY_1d8;
  local_38 = GetCurrentProcessId();
  DVar1 = GetTempPathA(0x105,local_178);
  if (((DVar1 == 0) || (0x104 < (int)DVar1)) || (sVar3 = strlen(local_178), 0x104 < sVar3)) {
    piVar4 = _errno();
    *piVar4 = 2;
    iVar2 = -1;
  }
  else {
    sVar3 = strlen(local_178);
    local_48 = local_178 + sVar3;
    strcpy(local_48,s__estream_183d22798);
    local_48 = local_48 + 8;
    CreateDirectoryA(local_178,(LPSECURITY_ATTRIBUTES)0x0);
    *local_48 = '\\';
    local_50 = local_48 + 1;
    local_48 = local_50;
    for (local_198 = 0; local_198 < 10; local_198 = local_198 + 1) {
      local_48 = local_50;
      DVar1 = GetTickCount();
      local_34 = DVar1 ^ local_38 << 0x10;
      for (local_30 = 0; local_30 < 8; local_30 = local_30 + 1) {
        if (local_34 >> 0x1c < 10) {
          local_20 = (local_34 >> 0x1c) + 0x30;
        }
        else {
          local_20 = (local_34 >> 0x1c) + 0x37;
        }
        *local_48 = (char)local_20;
        local_48 = local_48 + 1;
        local_34 = local_34 << 4;
      }
      strcpy(local_48,&DAT_183d227a4);
      local_40 = CreateFileA(local_178,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,1,0x4000100,
                             (HANDLE)0x0);
      if (local_40 != (HANDLE)0xffffffffffffffff) {
        local_2c = _open_osfhandle((longlong)(int)local_40,0);
        iVar2 = local_2c;
        if (local_2c == -1) {
          CloseHandle(local_40);
          iVar2 = -1;
        }
        goto LAB_181cb81f5;
      }
      Sleep(1);
    }
    piVar4 = _errno();
    *piVar4 = 2;
    iVar2 = -1;
  }
LAB_181cb81f5:
  _RTC_CheckStackVars(auStackY_1d8,&DAT_18348ff58);
  return iVar2;
}


