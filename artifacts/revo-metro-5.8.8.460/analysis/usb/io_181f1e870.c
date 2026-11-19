/* 0x181f1e870 size=0x7e
   SetEvent
*/


void FUN_181f1e870(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 auStack_28 [8];
  
  puVar2 = auStack_28;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x38) = 1;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    SetEvent(*(HANDLE *)(param_1 + 0x58));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  SetEvent(*(HANDLE *)(param_1 + 0x60));
  return;
}


