/* 0x182d47be0 size=0x72
   SetEvent
*/


void FUN_182d47be0(longlong param_1)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  iVar2 = thunk_FUN_182d47a10(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                              0xffffffffffffffff);
  if (iVar2 < 0) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    return;
  }
  lVar4 = (longlong)iVar2 * 0x38 + *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
  if (*(longlong *)(lVar4 + 0x28) != param_1) {
    uVar3 = (uint)(1L << ((byte)iVar2 & 0x3f));
    LOCK();
    puVar1 = (ulonglong *)(*(longlong *)(lVar4 + 0x28) + 0x10);
    *puVar1 = *puVar1 & (longlong)(int)~uVar3;
    UNLOCK();
    *(longlong *)(lVar4 + 0x28) = param_1;
    LOCK();
    *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) | (longlong)(int)uVar3;
    UNLOCK();
  }
                    /* WARNING: Could not recover jumptable at 0x000182d47c4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetEvent(*(HANDLE *)(lVar4 + 0x20));
  return;
}


