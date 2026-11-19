/* 0x182f86fa0 size=0xef
   WaitForSingleObject
*/


longlong FUN_182f86fa0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  if (*(char *)((longlong)param_1 + 0x146) != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    lVar2 = thunk_FUN_182f81dc0(param_1 + 8);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
    if (lVar2 == 0) {
      if ((*(longlong *)(param_1[0x17] + 0x378) == 0) || (*(int *)(param_1[0x17] + 0x348) == 0)) {
        (**(code **)(*param_1 + 8))(param_1,0xffffffff);
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
        cVar1 = *(char *)((longlong)param_1 + 0x141);
        *(char *)((longlong)param_1 + 0x143) = cVar1;
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
        if (cVar1 != '\0') {
          WaitForSingleObject((HANDLE)param_1[0x15],0xffffffff);
        }
        lVar2 = thunk_FUN_182f81dc0(param_1 + 8);
        if (lVar2 != 0) {
          *(int *)((longlong)param_1 + 0x134) = *(int *)((longlong)param_1 + 0x134) + -1;
        }
      }
      else {
        lVar2 = 0;
      }
    }
    else {
      *(int *)((longlong)param_1 + 0x134) = *(int *)((longlong)param_1 + 0x134) + -1;
    }
    return lVar2;
  }
  return 0;
}


