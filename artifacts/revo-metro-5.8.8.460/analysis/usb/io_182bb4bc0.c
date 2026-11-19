/* 0x182bb4bc0 size=0xd4
   WaitForSingleObject
   SetEvent
*/


ulonglong FUN_182bb4bc0(undefined8 *param_1,LPCRITICAL_SECTION param_2)

{
  LPCRITICAL_SECTION p_Var1;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  
  if (DAT_18481dde0 != (code *)0x0) {
    iVar3 = (*DAT_18481dde0)(param_1,param_2,0xffffffff);
    return (ulonglong)(iVar3 == 0);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)*param_1;
  thunk_FUN_182bb4df0(lpCriticalSection);
  thunk_FUN_182bb4df0(lpCriticalSection + 1);
  *(int *)&lpCriticalSection[2].DebugInfo = *(int *)&lpCriticalSection[2].DebugInfo + 1;
  LeaveCriticalSection(lpCriticalSection + 1);
  LeaveCriticalSection(lpCriticalSection);
  LeaveCriticalSection(param_2);
  WaitForSingleObject(*(HANDLE *)&lpCriticalSection[2].LockCount,0xffffffff);
  thunk_FUN_182bb4df0(lpCriticalSection + 1);
  p_Var1 = lpCriticalSection + 2;
  *(int *)&p_Var1->DebugInfo = *(int *)&p_Var1->DebugInfo + -1;
  if ((*(int *)&p_Var1->DebugInfo == 0) || (*(int *)&lpCriticalSection[2].LockSemaphore == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  LeaveCriticalSection(lpCriticalSection + 1);
  if (bVar2) {
    SetEvent(lpCriticalSection[2].OwningThread);
  }
  uVar4 = thunk_FUN_182bb4df0(param_2);
  return uVar4;
}


