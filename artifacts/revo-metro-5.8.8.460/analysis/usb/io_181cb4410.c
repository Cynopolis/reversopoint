/* 0x181cb4410 size=0xe1
   CloseHandle
*/


undefined4 FUN_181cb4410(longlong *param_1)

{
  BOOL BVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 auStack_48 [8];
  longlong *local_28;
  undefined4 local_20;
  DWORD local_1c;
  int local_18;
  
  puVar4 = auStack_48;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  if (param_1 == (longlong *)0x0) {
    local_20 = 0;
  }
  else {
    local_28 = param_1;
    if (*param_1 == -1) {
      local_20 = 0;
    }
    else if ((int)param_1[1] == 0) {
      BVar1 = CloseHandle((HANDLE)*param_1);
      if (BVar1 == 0) {
        local_1c = GetLastError();
        local_18 = FUN_181cb28b0(local_1c);
        piVar2 = _errno();
        *piVar2 = local_18;
        local_20 = 0xffffffff;
      }
      else {
        local_20 = 0;
      }
    }
    else {
      local_20 = 0;
    }
    FUN_181cb2870(local_28);
  }
  return local_20;
}


