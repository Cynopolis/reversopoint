/* 0x182f8c670 size=0x121
   CloseHandle
*/


void FUN_182f8c670(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x40);
  while (iVar1 != 0) {
    lVar2 = thunk_FUN_182f81dc0(param_1 + 0x30);
    thunk_FUN_182f818e0(lVar2);
    if (lVar2 != 0) {
      CloseHandle(*(HANDLE *)(lVar2 + 0x4fb0));
      CloseHandle(*(HANDLE *)(lVar2 + 0x4fa0));
      FUN_18001e0e2(lVar2,0x5000);
    }
    iVar1 = *(int *)(param_1 + 0x40);
  }
  iVar1 = *(int *)(param_1 + 0x28);
  while (iVar1 != 0) {
    lVar2 = thunk_FUN_182f81dc0(param_1 + 0x18);
    thunk_FUN_182f818e0(lVar2);
    if (lVar2 != 0) {
      CloseHandle(*(HANDLE *)(lVar2 + 0x4fb0));
      CloseHandle(*(HANDLE *)(lVar2 + 0x4fa0));
      FUN_18001e0e2(lVar2,0x5000);
    }
    iVar1 = *(int *)(param_1 + 0x28);
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  while (lVar2 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18);
    thunk_FUN_1830a0bc0(*(longlong *)(param_1 + 0x48));
    thunk_FUN_182f3a970(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x20));
    FUN_18001e0e2(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x20),200);
    FUN_18001e0e2(*(undefined8 *)(param_1 + 0x48),0x5c8);
    *(longlong *)(param_1 + 0x48) = lVar2;
  }
  return;
}


