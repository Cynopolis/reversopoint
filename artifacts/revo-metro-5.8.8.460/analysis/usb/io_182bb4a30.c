/* 0x182bb4a30 size=0xae
   CreateEventW
*/


int FUN_182bb4a30(undefined8 *param_1)

{
  BOOL BVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  HANDLE pvVar2;
  
  if (DAT_18481ddd0 != (code *)0x0) {
    (*DAT_18481ddd0)();
    return 0;
  }
  lpCriticalSection = calloc(1,0x70);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    *param_1 = lpCriticalSection;
    pvVar2 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,0,0x7fffffff,(LPCWSTR)0x0);
    *(HANDLE *)&lpCriticalSection[2].LockCount = pvVar2;
    if (pvVar2 != (HANDLE)0x0) {
      BVar1 = InitializeCriticalSectionAndSpinCount(lpCriticalSection + 1,0);
      if (BVar1 != 0) {
        BVar1 = InitializeCriticalSectionAndSpinCount(lpCriticalSection,0);
        if (BVar1 != 0) {
          pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
          lpCriticalSection[2].OwningThread = pvVar2;
          return (pvVar2 != (HANDLE)0x0) - 1;
        }
      }
    }
  }
  return -1;
}


