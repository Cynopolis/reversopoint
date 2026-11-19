/* 0x183053920 size=0x199
   CloseHandle
*/


void FUN_183053920(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x38);
  while (iVar2 != 0) {
    lVar3 = thunk_FUN_1830504e0(param_1 + 0x28);
    thunk_FUN_183050000(lVar3);
    if (lVar3 != 0) {
      CloseHandle(*(HANDLE *)(lVar3 + 0x4fb0));
      CloseHandle(*(HANDLE *)(lVar3 + 0x4fa0));
      FUN_18001e0e2(lVar3,0x5000);
    }
    iVar2 = *(int *)(param_1 + 0x38);
  }
  iVar2 = *(int *)(param_1 + 0x50);
  while (iVar2 != 0) {
    lVar3 = thunk_FUN_1830504e0(param_1 + 0x40);
    thunk_FUN_183050000(lVar3);
    if (lVar3 != 0) {
      CloseHandle(*(HANDLE *)(lVar3 + 0x4fb0));
      CloseHandle(*(HANDLE *)(lVar3 + 0x4fa0));
      FUN_18001e0e2(lVar3,0x5000);
    }
    iVar2 = *(int *)(param_1 + 0x50);
  }
  FUN_18001c2f1(*(undefined8 *)(param_1 + 200));
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(lVar3 + -8);
    lVar5 = lVar4 * 0xd58 + lVar3;
    for (; lVar4 != 0; lVar4 = lVar4 + -1) {
      puVar1 = (undefined8 *)(lVar5 + -0x30);
      lVar5 = lVar5 + -0xd58;
      FUN_18001c2f1(*puVar1);
      thunk_FUN_1830143f0(lVar5);
    }
    free((void *)(lVar3 + -8));
  }
  if ((0 < *(int *)(*(longlong *)(param_1 + 0xb8) + 0x2d0)) &&
     (lVar3 = *(longlong *)(param_1 + 8), lVar3 != 0)) {
    lVar4 = *(longlong *)(lVar3 + -8);
    lVar5 = lVar4 * 0x30 + lVar3;
    for (; lVar4 != 0; lVar4 = lVar4 + -1) {
      lVar5 = lVar5 + -0x30;
      thunk_FUN_183011f20(lVar5);
    }
    free((void *)(lVar3 + -8));
  }
  return;
}


