/* 0x182d891a0 size=0xab
   SetEvent
*/


void FUN_182d891a0(longlong param_1)

{
  bool bVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (((*(int *)(param_1 + 0x38) < *(int *)(param_1 + 0xd0)) || (*(char *)(param_1 + 0x141) != '\0')
      ) || (*(char *)(param_1 + 0x140) == '\0')) {
    *(undefined1 *)(param_1 + 0x20) = 0;
    bVar1 = false;
  }
  else {
    *(undefined1 *)(param_1 + 0x141) = 1;
    bVar1 = true;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (bVar1) {
    thunk_FUN_182d8c670(param_1);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    if (*(char *)(param_1 + 0x143) != '\0') {
      SetEvent(*(HANDLE *)(param_1 + 0xa8));
      *(undefined1 *)(param_1 + 0x143) = 0;
    }
    *(undefined1 *)(param_1 + 0x141) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  }
  return;
}


