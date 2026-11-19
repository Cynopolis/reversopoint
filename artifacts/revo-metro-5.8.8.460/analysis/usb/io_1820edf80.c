/* 0x1820edf80 size=0xc1
   CloseHandle
   WaitForSingleObjectEx
*/


void FUN_1820edf80(longlong param_1)

{
  longlong lVar1;
  HANDLE hHandle;
  DWORD DVar2;
  int iVar3;
  undefined8 *puVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x60);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x18));
  *(undefined8 *)(lVar1 + 0x1840) = 1;
  LOCK();
  UNLOCK();
  WakeAllConditionVariable((PCONDITION_VARIABLE)(lVar1 + 0x20));
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x18));
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x310)) {
    puVar4 = (undefined8 *)(lVar1 + 0x1040);
    do {
      hHandle = (HANDLE)*puVar4;
      DVar2 = WaitForSingleObjectEx(hHandle,0xffffffff,0);
      if (DVar2 == 0) {
        CloseHandle(hHandle);
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x310));
  }
  thunk_FUN_181fe7ef0(lVar1 + 0x10);
  thunk_FUN_181fb00e0(*(longlong *)(param_1 + 0x28) + 0x60);
  return;
}


