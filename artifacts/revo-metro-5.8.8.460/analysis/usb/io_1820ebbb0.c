/* 0x1820ebbb0 size=0x253
   CloseHandle
   WaitForSingleObjectEx
*/


void FUN_1820ebbb0(longlong param_1,int param_2)

{
  longlong *plVar1;
  HANDLE hHandle;
  code *pcVar2;
  int iVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = *(longlong *)(param_1 + 0x10);
  lVar5 = (longlong)param_2;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x20);
  FUN_1820ed170(plVar1,param_2);
  lVar9 = plVar1[1];
  if (((lVar9 != 0) && (lVar9 != *plVar1)) &&
     (iVar3 = FUN_1820ed9c0(*(undefined8 *)(*plVar1 + 0x58),*(undefined8 *)(lVar9 + 0x58),0),
     iVar3 < 0)) {
    thunk_FUN_181fb4a90(param_1,0x10,"Final thread update failed\n");
    **(undefined4 **)(*(longlong *)(plVar1[1] + 0x58) + 0x28) =
         **(undefined4 **)(*(longlong *)(*plVar1 + 0x58) + 0x28);
    **(undefined4 **)(*(longlong *)(*plVar1 + 0x58) + 0x28) = 1;
  }
  if (0 < lVar5) {
    lVar7 = 0;
    lVar9 = lVar5;
    do {
      lVar6 = *plVar1 + lVar7;
      AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x48));
      *(undefined4 *)(lVar6 + 0xfc) = 1;
      WakeConditionVariable((PCONDITION_VARIABLE)(lVar6 + 0x30));
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x48));
      if (*(int *)(lVar6 + 0x28) != 0) {
        hHandle = *(HANDLE *)(lVar6 + 8);
        DVar4 = WaitForSingleObjectEx(hHandle,0xffffffff,0);
        if (DVar4 == 0) {
          CloseHandle(hHandle);
        }
      }
      *(undefined4 *)(lVar6 + 0x28) = 0;
      pcVar2 = *(code **)(lVar8 + 0xb8);
      if ((pcVar2 != (code *)0x0) && (*(longlong *)(lVar6 + 0x58) != 0)) {
        (*pcVar2)();
      }
      FUN_1820ed2e0(lVar6);
      thunk_FUN_181fb1810(lVar6 + 0xb8);
      lVar7 = lVar7 + 0x110;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  lVar9 = 0;
  lVar8 = lVar9;
  if (0 < lVar5) {
    do {
      lVar7 = *plVar1 + lVar9;
      thunk_FUN_1820da650(lVar7 + 0x60);
      thunk_FUN_181fb00e0(lVar7 + 0xd0);
      if ((lVar8 != 0) && (*(longlong *)(lVar7 + 0x58) != 0)) {
        thunk_FUN_181fb00e0(*(longlong *)(lVar7 + 0x58) + 0x20);
        thunk_FUN_181fb00e0(*(longlong *)(lVar7 + 0x58) + 0xe0);
      }
      if (*(longlong *)(lVar7 + 0x58) != 0) {
        thunk_FUN_181fb00e0(*(longlong *)(lVar7 + 0x58) + 0x28);
        thunk_FUN_181fcf970(*(longlong *)(lVar7 + 0x58) + 0x3f0);
      }
      thunk_FUN_181fb00e0(lVar7 + 0x58);
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x110;
    } while (lVar8 < lVar5);
  }
  thunk_FUN_181fb00e0(plVar1);
  thunk_FUN_181fb00e0(*(longlong *)(param_1 + 0x28) + 0x20);
  if (((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x50) != 0)) {
    thunk_FUN_181fbc190();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


