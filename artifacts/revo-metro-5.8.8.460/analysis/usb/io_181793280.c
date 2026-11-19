/* 0x181793280 size=0x6e
   CloseHandle
   WaitForSingleObject
*/


void FUN_181793280(undefined8 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 auStack_38 [8];
  undefined8 *local_18;
  
  puVar2 = auStack_38;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_18 = param_1;
  WaitForSingleObject((HANDLE)*param_1,0xffffffff);
  CloseHandle((HANDLE)*local_18);
  FUN_1817931a0(local_18[1]);
  free(local_18);
  _endthread();
  return;
}


