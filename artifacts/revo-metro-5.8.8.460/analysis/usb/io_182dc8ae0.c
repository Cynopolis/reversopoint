/* 0x182dc8ae0 size=0x79
   WaitForSingleObject
*/


undefined8 FUN_182dc8ae0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x598) != 0) {
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x68),0xffffffff);
    uVar1 = *(undefined8 *)(param_1 + 0x598);
    *(undefined8 *)(param_1 + 0x598) = 0;
    thunk_FUN_183013a60(param_2,param_1 + 0x2550);
    uVar2 = thunk_FUN_182dc2250();
    *(undefined8 *)(param_1 + 0x568) = uVar2;
    return uVar1;
  }
  return 0;
}


