/* 0x182bb4b10 size=0x8a
   WaitForSingleObject
*/


undefined8 FUN_182bb4b10(undefined8 *param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (DAT_18481ddd8 != (code *)0x0) {
    (*DAT_18481ddd8)();
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)*param_1;
  thunk_FUN_182bb4df0(lpCriticalSection);
  thunk_FUN_182bb4df0(lpCriticalSection + 1);
  iVar1 = *(int *)&lpCriticalSection[2].DebugInfo;
  LeaveCriticalSection(lpCriticalSection + 1);
  if (iVar1 != 0) {
    ReleaseSemaphore(*(HANDLE *)&lpCriticalSection[2].LockCount,1,(LPLONG)0x0);
    WaitForSingleObject(lpCriticalSection[2].OwningThread,0xffffffff);
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}


