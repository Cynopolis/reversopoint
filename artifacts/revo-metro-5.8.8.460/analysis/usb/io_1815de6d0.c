/* 0x1815de6d0 size=0x75
   CloseHandle
   WaitForSingleObjectEx
*/


undefined8 FUN_1815de6d0(undefined8 *param_1,undefined8 *param_2)

{
  DWORD DVar1;
  undefined8 uVar2;
  
  DVar1 = WaitForSingleObjectEx((HANDLE)*param_1,0xffffffff,0);
  if (DVar1 == 0) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1[3];
    }
    CloseHandle((HANDLE)*param_1);
    uVar2 = 0;
  }
  else if (DVar1 == 0x80) {
    uVar2 = 0x16;
  }
  else {
    uVar2 = 0x24;
  }
  return uVar2;
}


