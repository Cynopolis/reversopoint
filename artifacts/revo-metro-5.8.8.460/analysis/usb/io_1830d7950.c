/* 0x1830d7950 size=0x119
   CloseHandle
   WaitForSingleObjectEx
*/


void FUN_1830d7950(longlong *param_1)

{
  longlong *plVar1;
  HANDLE hHandle;
  int iVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((param_1 != (longlong *)0x0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
    iVar2 = (int)plVar1[1];
    if (plVar1[10] == 0) {
      iVar2 = iVar2 + -1;
    }
    lVar4 = 0;
    *(undefined4 *)((longlong)plVar1 + 0x3c) = 1;
    lVar5 = (longlong)iVar2;
    lVar7 = lVar5;
    lVar8 = lVar4;
    if (0 < iVar2) {
      do {
        lVar6 = *plVar1 + lVar8;
        AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 8));
        *(undefined4 *)(lVar6 + 0x38) = 0;
        WakeConditionVariable((PCONDITION_VARIABLE)(lVar6 + 0x10));
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 8));
        lVar7 = lVar7 + -1;
        lVar8 = lVar8 + 0x40;
      } while (lVar7 != 0);
    }
    if (0 < lVar5) {
      do {
        hHandle = *(HANDLE *)(*plVar1 + 0x18 + lVar4);
        DVar3 = WaitForSingleObjectEx(hHandle,0xffffffff,0);
        if (DVar3 == 0) {
          CloseHandle(hHandle);
        }
        lVar4 = lVar4 + 0x40;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    thunk_FUN_181fb00e0(plVar1);
    thunk_FUN_181fb00e0(param_1);
  }
  return;
}


