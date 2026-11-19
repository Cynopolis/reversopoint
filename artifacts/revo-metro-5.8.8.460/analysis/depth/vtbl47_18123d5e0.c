// vtable slot 47 (thunk 0x180016a86) -> FUN_18123d5e0 @ 0x18123d5e0  size=28

undefined8 FUN_18123d5e0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 200) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018123d5ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 200) + 0xf0))();
    return uVar1;
  }
  return 1;
}


