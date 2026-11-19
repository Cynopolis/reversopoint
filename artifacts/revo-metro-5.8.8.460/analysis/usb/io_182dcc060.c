/* 0x182dcc060 size=0x90
   SetEvent
*/


undefined8 FUN_182dcc060(longlong param_1,longlong *param_2)

{
  BOOL BVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 extraout_var;
  
  lVar2 = thunk_FUN_182dc2250();
  *(longlong *)(param_1 + 0x570) = lVar2 - *(longlong *)(param_1 + 0x568);
  *(longlong **)(param_1 + 0x598) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0xf4);
  *(undefined4 *)(*param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x18);
  *(longlong *)(*param_2 + 0x30) = param_1;
  *(longlong *)(*(longlong *)*param_2 + 0x830) = param_1 + 0x5f8;
  if (*(longlong *)(param_1 + 0x5c8) == 0) {
    uVar3 = thunk_FUN_182dc9130(param_1);
    if ((char)uVar3 == '\0') {
      return uVar3;
    }
  }
  BVar1 = SetEvent(*(HANDLE *)(param_1 + 0x60));
  return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),1);
}


