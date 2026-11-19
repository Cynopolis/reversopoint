/* 0x182bb49c0 size=0x52
   CloseHandle
*/


undefined8 FUN_182bb49c0(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (DAT_18481ddd0 == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)*param_1;
    CloseHandle(*(HANDLE *)&lpCriticalSection[2].LockCount);
    CloseHandle(lpCriticalSection[2].OwningThread);
    DeleteCriticalSection(lpCriticalSection);
    DeleteCriticalSection(lpCriticalSection + 1);
    free(lpCriticalSection);
  }
  return 0;
}


