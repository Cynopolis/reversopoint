/* 0x181f1ec70 size=0x2ab
   CloseHandle
   ResetEvent
   WaitForSingleObject
   SetEvent
*/


undefined8 FUN_181f1ec70(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 auStack_48 [8];
  longlong *local_28;
  longlong local_20;
  longlong local_18;
  
  puVar3 = auStack_48;
  for (lVar2 = 0x10; local_28 = param_1, lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  while ((EnterCriticalSection((LPCRITICAL_SECTION)(local_28 + 2)), (int)local_28[7] == 0 ||
         (local_28[0xc] != 0))) {
    if (local_28[0xc] == 0) {
      SetEvent((HANDLE)local_28[10]);
      ResetEvent((HANDLE)local_28[9]);
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_28 + 2));
      WaitForSingleObject((HANDLE)local_28[9],0xffffffff);
      EnterCriticalSection((LPCRITICAL_SECTION)(local_28 + 2));
    }
    if (((int)local_28[7] != 0) && (local_28[0xc] == 0)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_28 + 2));
      goto LAB_181f1ee6f;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(local_28 + 2));
    local_18 = *local_28;
    local_20 = (**(code **)(local_18 + 0x10))
                         (*(undefined8 *)(*local_28 + 0x30),local_28 + 0xd,local_28[0xc]);
    if (local_20 < 1) {
      piVar1 = _errno();
      if (*piVar1 != 0xaa) {
        piVar1 = _errno();
        *(int *)(local_28 + 8) = *piVar1;
        *(undefined4 *)((longlong)local_28 + 0x3c) = 1;
LAB_181f1ee6f:
        SetEvent((HANDLE)local_28[10]);
        WaitForSingleObject((HANDLE)local_28[0xb],0xffffffff);
        CloseHandle((HANDLE)local_28[0xb]);
        CloseHandle((HANDLE)local_28[9]);
        CloseHandle((HANDLE)local_28[10]);
        CloseHandle((HANDLE)local_28[1]);
        DeleteCriticalSection((LPCRITICAL_SECTION)(local_28 + 2));
        free(local_28);
        return 0;
      }
    }
    else {
      EnterCriticalSection((LPCRITICAL_SECTION)(local_28 + 2));
      local_28[0xc] = local_28[0xc] - local_20;
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_28 + 2));
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(local_28 + 2));
  goto LAB_181f1ee6f;
}


