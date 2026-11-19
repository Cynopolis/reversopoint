/* 0x181792d10 size=0x47
   CloseHandle
*/


void FUN_181792d10(undefined8 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 auStack_28 [8];
  
  puVar2 = auStack_28;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_1 != (undefined8 *)0x0) {
    CloseHandle((HANDLE)*param_1);
    free(param_1);
  }
  return;
}


