/* 0x182b4e060 size=0xaa
   CloseHandle
   WaitForSingleObjectEx
*/


void FUN_182b4e060(longlong *param_1)

{
  int iVar1;
  HANDLE hHandle;
  DWORD DVar2;
  
  if ((LPCRITICAL_SECTION)*param_1 != (LPCRITICAL_SECTION)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)*param_1);
    iVar1 = (int)param_1[1];
    if (0 < iVar1) {
      while (iVar1 != 1) {
        SleepConditionVariableCS
                  ((PCONDITION_VARIABLE)((PCRITICAL_SECTION)*param_1 + 1),
                   (PCRITICAL_SECTION)*param_1,0xffffffff);
        iVar1 = (int)param_1[1];
      }
      *(undefined4 *)(param_1 + 1) = 0;
      WakeConditionVariable((PCONDITION_VARIABLE)(*param_1 + 0x28));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
    hHandle = *(HANDLE *)(*param_1 + 0x30);
    DVar2 = WaitForSingleObjectEx(hHandle,0xffffffff,0);
    if (DVar2 == 0) {
      CloseHandle(hHandle);
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)*param_1);
    thunk_FUN_182944ca0(*param_1);
    *param_1 = 0;
  }
  return;
}


