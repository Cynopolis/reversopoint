// vtable slot 52 (thunk 0x18000afab) -> FUN_18123c990 @ 0x18123c990  size=102

undefined4 FUN_18123c990(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined1 local_res8 [8];
  
  thunk_FUN_1831809d0(local_res8,param_1 + 0xc0);
  plVar1 = *(longlong **)(param_1 + 200);
  if (plVar1 == (longlong *)0x0) {
    thunk_FUN_18317f440("[SDK ERROR] get user data failed: camera device is nullptr\n");
    uVar2 = 3;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x88))(plVar1,param_2);
  }
  thunk_FUN_183180a80(local_res8);
  return uVar2;
}


