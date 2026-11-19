/* 0x182b025d0 size=0x186
   CloseHandle
   WaitForSingleObjectEx
*/


void FUN_182b025d0(longlong param_1)

{
  HANDLE pvVar1;
  DWORD DVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x23c1c) == 0) {
    return;
  }
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x23c1c) = 0;
  if (0 < *(int *)(param_1 + 0x23c20)) {
    lVar4 = 0;
    do {
      ReleaseSemaphore(*(HANDLE *)(lVar4 + *(longlong *)(param_1 + 0x23c58)),1,(LPLONG)0x0);
      ReleaseSemaphore(*(HANDLE *)(*(longlong *)(param_1 + 0x23c60) + lVar4),1,(LPLONG)0x0);
      pvVar1 = *(HANDLE *)(lVar4 + *(longlong *)(param_1 + 0x23c28));
      DVar2 = WaitForSingleObjectEx(pvVar1,0xffffffff,0);
      if (DVar2 == 0) {
        CloseHandle(pvVar1);
      }
      pvVar1 = *(HANDLE *)(lVar4 + *(longlong *)(param_1 + 0x23c58));
      if (pvVar1 != (HANDLE)0x0) {
        CloseHandle(pvVar1);
      }
      pvVar1 = *(HANDLE *)(lVar4 + *(longlong *)(param_1 + 0x23c60));
      if (pvVar1 != (HANDLE)0x0) {
        CloseHandle(pvVar1);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x23c20));
  }
  ReleaseSemaphore(*(HANDLE *)(param_1 + 0x23c68),1,(LPLONG)0x0);
  pvVar1 = *(HANDLE *)(param_1 + 0x23c30);
  DVar2 = WaitForSingleObjectEx(pvVar1,0xffffffff,0);
  if (DVar2 == 0) {
    CloseHandle(pvVar1);
  }
  if (*(HANDLE *)(param_1 + 0x23c70) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x23c70));
  }
  if (*(HANDLE *)(param_1 + 0x23c68) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x23c68));
  }
  thunk_FUN_182944ca0(*(undefined8 *)(param_1 + 0x23c58));
  thunk_FUN_182944ca0(*(undefined8 *)(param_1 + 0x23c60));
  thunk_FUN_182944ca0(*(undefined8 *)(param_1 + 0x23c28));
  thunk_FUN_182944ca0(*(undefined8 *)(param_1 + 0x23c38));
  thunk_FUN_182944ca0(*(undefined8 *)(param_1 + 0x23c40));
  return;
}


