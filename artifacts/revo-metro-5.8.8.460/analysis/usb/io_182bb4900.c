/* 0x182bb4900 size=0x99
   WaitForSingleObject
*/


undefined8 FUN_182bb4900(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (DAT_18481ddc8 != (code *)0x0) {
    (*DAT_18481ddc8)();
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)*param_1;
  thunk_FUN_182bb4df0(lpCriticalSection);
  thunk_FUN_182bb4df0(lpCriticalSection + 1);
  if (*(int *)&lpCriticalSection[2].DebugInfo == 0) {
    LeaveCriticalSection(lpCriticalSection + 1);
  }
  else {
    *(undefined4 *)&lpCriticalSection[2].LockSemaphore = 1;
    ReleaseSemaphore(*(HANDLE *)&lpCriticalSection[2].LockCount,
                     *(LONG *)&lpCriticalSection[2].DebugInfo,(LPLONG)0x0);
    LeaveCriticalSection(lpCriticalSection + 1);
    WaitForSingleObject(lpCriticalSection[2].OwningThread,0xffffffff);
    *(undefined4 *)&lpCriticalSection[2].LockSemaphore = 0;
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


