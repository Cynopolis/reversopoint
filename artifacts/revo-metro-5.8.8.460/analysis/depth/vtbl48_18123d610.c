// vtable slot 48 (thunk 0x180014d12) -> FUN_18123d610 @ 0x18123d610  size=28

undefined8 FUN_18123d610(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 200) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018123d61f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 200) + 0xf8))();
    return uVar1;
  }
  return 1;
}


