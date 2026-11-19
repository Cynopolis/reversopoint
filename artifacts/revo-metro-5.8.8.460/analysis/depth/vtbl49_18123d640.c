// vtable slot 49 (thunk 0x18000b25d) -> FUN_18123d640 @ 0x18123d640  size=28

undefined8 FUN_18123d640(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 200) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018123d64f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 200) + 0x100))();
    return uVar1;
  }
  return 1;
}


