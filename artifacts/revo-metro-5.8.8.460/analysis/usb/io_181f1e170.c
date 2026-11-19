/* 0x181f1e170 size=0xaa
   CloseHandle
*/


HANDLE FUN_181f1e170(HANDLE param_1)

{
  BOOL BVar1;
  HANDLE pvVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 auStackY_68 [8];
  HANDLE local_20 [2];
  HANDLE local_10;
  
  puVar4 = auStackY_68;
  for (lVar3 = 0x18; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  local_10 = GetCurrentProcess();
  pvVar2 = GetCurrentProcess();
  BVar1 = DuplicateHandle(pvVar2,param_1,local_10,local_20,0x100002,0,0);
  if (BVar1 == 0) {
    thunk_FUN_181cacf00(5);
    pvVar2 = (HANDLE)0xffffffffffffffff;
  }
  else {
    CloseHandle(param_1);
    pvVar2 = local_20[0];
  }
  _RTC_CheckStackVars(auStackY_68,&DAT_183537800);
  return pvVar2;
}


