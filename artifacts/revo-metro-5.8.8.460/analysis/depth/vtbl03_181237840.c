// vtable slot 3 (thunk 0x18000b94c) -> FUN_181237840 @ 0x181237840  size=148

undefined8 FUN_181237840(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = thunk_FUN_18122f510();
  if (cVar2 == '\0') {
    return 3;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x21);
  *param_2 = *(undefined8 *)(param_1 + 0x19);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x31);
  param_2[2] = *(undefined8 *)(param_1 + 0x29);
  param_2[3] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x41);
  param_2[4] = *(undefined8 *)(param_1 + 0x39);
  param_2[5] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x51);
  param_2[6] = *(undefined8 *)(param_1 + 0x49);
  param_2[7] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x61);
  param_2[8] = *(undefined8 *)(param_1 + 0x59);
  param_2[9] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x71);
  param_2[10] = *(undefined8 *)(param_1 + 0x69);
  param_2[0xb] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x81);
  param_2[0xc] = *(undefined8 *)(param_1 + 0x79);
  param_2[0xd] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x91);
  param_2[0xe] = *(undefined8 *)(param_1 + 0x89);
  param_2[0xf] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0xa1);
  param_2[0x10] = *(undefined8 *)(param_1 + 0x99);
  param_2[0x11] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0xb1);
  param_2[0x12] = *(undefined8 *)(param_1 + 0xa9);
  param_2[0x13] = uVar1;
  return 0;
}


