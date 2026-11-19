/* 0x181cb3fd0 size=0x155
   ReadFile
*/


longlong FUN_181cb3fd0(longlong *param_1,LPVOID param_2,longlong param_3)

{
  BOOL BVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 *puVar4;
  DWORD local_res18;
  undefined4 auStackY_68 [8];
  longlong local_30;
  DWORD local_24 [4];
  DWORD local_14;
  int local_10;
  
  puVar4 = auStackY_68;
  for (lVar3 = 0x18; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  if (param_3 == 0) {
    local_30 = -1;
  }
  else if (*param_1 == -1) {
    thunk_FUN_181cae780();
    local_30 = 0;
  }
  else {
    if (*(int *)((longlong)param_1 + 0xc) == 0) {
      thunk_FUN_181cae7c0(param_1);
    }
    do {
      local_res18 = (DWORD)param_3;
      BVar1 = ReadFile((HANDLE)*param_1,param_2,local_res18,local_24,(LPOVERLAPPED)0x0);
      if (BVar1 == 0) {
        local_14 = GetLastError();
        if (local_14 == 0x6d) {
          local_30 = 0;
        }
        else {
          local_10 = FUN_181cb28b0(local_14);
          piVar2 = _errno();
          *piVar2 = local_10;
          local_30 = -1;
        }
      }
      else {
        local_30 = (longlong)(int)local_24[0];
      }
    } while ((local_30 == -1) && (piVar2 = _errno(), *piVar2 == 4));
    if (*(int *)((longlong)param_1 + 0xc) == 0) {
      thunk_FUN_181cae800();
    }
  }
  _RTC_CheckStackVars(auStackY_68,&DAT_18348f418);
  return local_30;
}


