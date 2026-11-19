/* 0x182963e30 size=0x16e
   CloseHandle
   WaitForSingleObjectEx
*/


void FUN_182963e30(longlong param_1)

{
  HANDLE pvVar1;
  DWORD DVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (*(int *)(param_1 + 0x3760) != 0) {
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x3760) = 0;
    uVar3 = uVar4;
    uVar6 = uVar4;
    if (0 < *(int *)(param_1 + 0x3770)) {
      do {
        ReleaseSemaphore(*(HANDLE *)(uVar3 + *(longlong *)(param_1 + 0x37d8)),1,(LPLONG)0x0);
        pvVar1 = *(HANDLE *)(uVar3 + *(longlong *)(param_1 + 0x37d0));
        DVar2 = WaitForSingleObjectEx(pvVar1,0xffffffff,0);
        if (DVar2 == 0) {
          CloseHandle(pvVar1);
        }
        uVar5 = (int)uVar6 + 1;
        uVar3 = uVar3 + 8;
        uVar6 = (ulonglong)uVar5;
      } while ((int)uVar5 < *(int *)(param_1 + 0x3770));
    }
    uVar3 = uVar4;
    if (0 < *(int *)(param_1 + 0x3770)) {
      do {
        pvVar1 = *(HANDLE *)(uVar4 + *(longlong *)(param_1 + 0x37d8));
        if (pvVar1 != (HANDLE)0x0) {
          CloseHandle(pvVar1);
        }
        uVar5 = (int)uVar3 + 1;
        uVar4 = uVar4 + 8;
        uVar3 = (ulonglong)uVar5;
      } while ((int)uVar5 < *(int *)(param_1 + 0x3770));
    }
    if ((*(int *)(param_1 + 0x3770) != 0) && (*(HANDLE *)(param_1 + 0x37e0) != (HANDLE)0x0)) {
      CloseHandle(*(HANDLE *)(param_1 + 0x37e0));
    }
    thunk_FUN_182944ca0(*(undefined8 *)(param_1 + 0x37d0));
    *(undefined8 *)(param_1 + 0x37d0) = 0;
    thunk_FUN_182944ca0(*(undefined8 *)(param_1 + 0x37d8));
    *(undefined8 *)(param_1 + 0x37d8) = 0;
    thunk_FUN_182944ca0(*(undefined8 *)(param_1 + 0x37c0));
    *(undefined8 *)(param_1 + 0x37c0) = 0;
    thunk_FUN_182944ca0(*(undefined8 *)(param_1 + 0x37c8));
    *(undefined8 *)(param_1 + 0x37c8) = 0;
    thunk_FUN_182964580(param_1,*(undefined4 *)(param_1 + 0x1e74));
  }
  return;
}


