/* 0x181792c70 size=0x41
   WaitForSingleObject
*/


void FUN_181792c70(undefined8 *param_1)

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
    WaitForSingleObject((HANDLE)*param_1,0xffffffff);
  }
  return;
}


