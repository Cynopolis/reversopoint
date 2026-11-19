/* 0x181f1e900 size=0x35c
   ResetEvent
   WaitForSingleObject
   SetEvent
*/


ulonglong FUN_181f1e900(uint *param_1,void *param_2,ulonglong param_3)

{
  BOOL BVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 auStack_58 [8];
  uint *local_38;
  size_t local_30;
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  puVar3 = auStack_58;
  for (lVar2 = 0x14; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_28 = *(longlong *)(param_1 + 0xe);
  local_38 = param_1;
  if (local_28 == 0) {
    local_28 = FUN_181f1e5e0(param_1);
    *(longlong *)(local_38 + 0xe) = local_28;
    if (local_28 == 0) {
      thunk_FUN_181cacf00(9);
      return 0xffffffffffffffff;
    }
  }
  if (*(int *)(local_28 + 0x40) == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(local_28 + 0x10));
    if ((*(longlong *)(local_28 + 0x68) == *(longlong *)(local_28 + 0x70)) &&
       (*(int *)(local_28 + 0x44) == 0)) {
      local_20 = *(int *)(local_28 + 0x3c);
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_28 + 0x10));
      if (((*local_38 & 0x40000000) != 0) && (local_20 == 0)) {
        thunk_FUN_181cacf00(0xb);
        return 0xffffffffffffffff;
      }
      WaitForSingleObject(*(HANDLE *)(local_28 + 0x50),0xffffffff);
      EnterCriticalSection((LPCRITICAL_SECTION)(local_28 + 0x10));
    }
    if ((*(longlong *)(local_28 + 0x68) == *(longlong *)(local_28 + 0x70)) ||
       (*(int *)(local_28 + 0x44) != 0)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_28 + 0x10));
      *(undefined4 *)(local_28 + 0x40) = 1;
      if (*(int *)(local_28 + 0x3c) == 0) {
        if (*(int *)(local_28 + 0x44) == 0) {
          local_30 = 0;
        }
        else {
          thunk_FUN_181cacf00(*(undefined4 *)(local_28 + 0x48));
          local_30 = 0xffffffffffffffff;
        }
      }
      else {
        local_30 = 0;
      }
    }
    else {
      if (*(ulonglong *)(local_28 + 0x68) < *(ulonglong *)(local_28 + 0x70)) {
        local_18 = *(longlong *)(local_28 + 0x70) - *(longlong *)(local_28 + 0x68);
      }
      else {
        local_18 = 0x1000 - *(longlong *)(local_28 + 0x68);
      }
      local_30 = local_18;
      if (param_3 < local_18) {
        local_30 = param_3;
      }
      memcpy(param_2,(void *)(local_28 + 0x78 + *(longlong *)(local_28 + 0x68)),local_30);
      *(ulonglong *)(local_28 + 0x68) = (*(longlong *)(local_28 + 0x68) + local_30) % 0x1000;
      if (((*(longlong *)(local_28 + 0x68) == *(longlong *)(local_28 + 0x70)) &&
          (*(int *)(local_28 + 0x3c) == 0)) &&
         (BVar1 = ResetEvent(*(HANDLE *)(local_28 + 0x50)), BVar1 == 0)) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(local_28 + 0x10));
        thunk_FUN_181cacf00(5);
        local_30 = 0xffffffffffffffff;
      }
      else {
        BVar1 = SetEvent(*(HANDLE *)(local_28 + 0x58));
        if (BVar1 == 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(local_28 + 0x10));
          thunk_FUN_181cacf00(5);
          local_30 = 0xffffffffffffffff;
        }
        else {
          LeaveCriticalSection((LPCRITICAL_SECTION)(local_28 + 0x10));
        }
      }
    }
  }
  else {
    local_30 = 0;
  }
  return local_30;
}


