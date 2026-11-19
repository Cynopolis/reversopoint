/* 0x1829a3030 size=0x79
   WaitForSingleObject
*/


undefined8 FUN_1829a3030(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x598) != 0) {
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x68),0xffffffff);
    uVar1 = *(undefined8 *)(param_1 + 0x598);
    *(undefined8 *)(param_1 + 0x598) = 0;
    thunk_FUN_182d48640(param_2,param_1 + 0x2550);
    uVar2 = thunk_FUN_18299c7f0();
    *(undefined8 *)(param_1 + 0x568) = uVar2;
    return uVar1;
  }
  return 0;
}


