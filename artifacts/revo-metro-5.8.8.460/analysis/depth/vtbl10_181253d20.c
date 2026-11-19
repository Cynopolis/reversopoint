// vtable slot 10 (thunk 0x1800087e2) -> FUN_181253d20 @ 0x181253d20  size=132

undefined8
FUN_181253d20(longlong *param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4,
             longlong param_5)

{
  undefined8 uVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  param_1[0x17b] = param_5;
  param_1[0x17a] = param_4;
  uVar1 = (**(code **)(*param_1 + 0x30))(local_18,0,&local_18);
  if ((int)uVar1 == 0) {
    local_18 = *param_3;
    uStack_14 = param_3[1];
    uStack_10 = param_3[2];
    uStack_c = param_3[3];
    uVar1 = (**(code **)(*param_1 + 0x30))(param_1,1,&local_18);
    if ((int)uVar1 == 0) {
      *(char *)((longlong)param_1 + 0x131) = (char)uVar1;
      *(undefined8 *)((longlong)param_1 + 0x129) = uVar1;
      *(undefined1 *)(param_1 + 0x25) = 1;
      thunk_FUN_181253c30(param_1);
      uVar1 = 0;
    }
  }
  return uVar1;
}


