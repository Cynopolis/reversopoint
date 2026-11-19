/* 0x181ed69a0 size=0xe3
   ReadFile
*/


ulonglong FUN_181ed69a0(int param_1,LPVOID param_2,DWORD param_3,undefined8 param_4)

{
  BOOL BVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  DWORD local_res20;
  undefined4 auStackY_98 [8];
  _OVERLAPPED local_60;
  uint local_24 [5];
  HANDLE local_10;
  
  puVar4 = auStackY_98;
  for (lVar3 = 0x24; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  local_10 = (HANDLE)_get_osfhandle(param_1);
  if (local_10 == (HANDLE)0xffffffffffffffff) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    memset(&local_60,0,0x20);
    local_res20 = (DWORD)param_4;
    local_60.u.s.Offset = local_res20;
    local_60.u.s.OffsetHigh = (DWORD)((ulonglong)param_4 >> 0x20);
    BVar1 = ReadFile(local_10,param_2,param_3,local_24,&local_60);
    if (BVar1 == 0) {
      uVar2 = 0xffffffffffffffff;
    }
    else {
      uVar2 = (ulonglong)local_24[0];
    }
  }
  _RTC_CheckStackVars(auStackY_98,&DAT_183511700);
  return uVar2;
}


