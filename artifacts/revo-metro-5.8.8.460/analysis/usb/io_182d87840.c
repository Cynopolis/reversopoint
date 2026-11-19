/* 0x182d87840 size=0x153
   CloseHandle
*/


void FUN_182d87840(longlong param_1)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x38);
  while (iVar1 != 0) {
    lVar3 = thunk_FUN_182d849e0(param_1 + 0x28);
    thunk_FUN_182d842d0(lVar3);
    if (lVar3 != 0) {
      CloseHandle(*(HANDLE *)(lVar3 + 0x4fb0));
      CloseHandle(*(HANDLE *)(lVar3 + 0x4fa0));
      FUN_18001e0e2(lVar3,0x5000);
    }
    iVar1 = *(int *)(param_1 + 0x38);
  }
  iVar1 = *(int *)(param_1 + 0x50);
  while (iVar1 != 0) {
    lVar3 = thunk_FUN_182d849e0(param_1 + 0x40);
    thunk_FUN_182d842d0(lVar3);
    if (lVar3 != 0) {
      CloseHandle(*(HANDLE *)(lVar3 + 0x4fb0));
      CloseHandle(*(HANDLE *)(lVar3 + 0x4fa0));
      FUN_18001e0e2(lVar3,0x5000);
    }
    iVar1 = *(int *)(param_1 + 0x50);
  }
  thunk_FUN_18299c7d0(*(undefined8 *)(param_1 + 200));
  pvVar2 = *(void **)(param_1 + 0xb0);
  if (pvVar2 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar2,0xd58,*(__uint64 *)((longlong)pvVar2 + -8),
               (_func_void_void_ptr *)&LAB_18001166c);
    free((__uint64 *)((longlong)pvVar2 + -8));
  }
  if ((0 < *(int *)(*(longlong *)(param_1 + 0xb8) + 0x2d0)) &&
     (pvVar2 = *(void **)(param_1 + 8), pvVar2 != (void *)0x0)) {
    _eh_vector_destructor_iterator_
              (pvVar2,0x30,*(__uint64 *)((longlong)pvVar2 + -8),thunk_FUN_182d46b40);
    free((__uint64 *)((longlong)pvVar2 + -8));
  }
  return;
}


