/* 0x181f1f280 size=0x2e1
   ResetEvent
   WaitForSingleObject
   SetEvent
*/


longlong FUN_181f1f280(uint *param_1,void *param_2,ulonglong param_3)

{
  BOOL BVar1;
  longlong lVar2;
  undefined4 *puVar3;
  size_t local_res18;
  undefined4 auStack_48 [8];
  uint *local_28;
  longlong local_20;
  int local_18;
  
  puVar3 = auStack_48;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_20 = *(longlong *)(param_1 + 0x10);
  if (param_3 == 0) {
    local_18 = 0;
    goto LAB_181f1f550;
  }
  local_28 = param_1;
  if (local_20 == 0) {
    local_20 = FUN_181f1ef30(param_1);
    *(longlong *)(local_28 + 0x10) = local_20;
    if (local_20 == 0) {
      local_18 = -1;
      goto LAB_181f1f550;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(local_20 + 0x10));
  if ((*(int *)(local_20 + 0x3c) == 0) && (*(longlong *)(local_20 + 0x60) != 0)) {
    BVar1 = ResetEvent(*(HANDLE *)(local_20 + 0x50));
    if (BVar1 == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_20 + 0x10));
      thunk_FUN_181cacf00(5);
      local_18 = -1;
      goto LAB_181f1f550;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(local_20 + 0x10));
    if ((*local_28 & 0x40000000) != 0) {
      thunk_FUN_181cacf00(0xb);
      local_18 = -1;
      goto LAB_181f1f550;
    }
    WaitForSingleObject(*(HANDLE *)(local_20 + 0x50),0xffffffff);
    EnterCriticalSection((LPCRITICAL_SECTION)(local_20 + 0x10));
  }
  if (*(int *)(local_20 + 0x3c) == 0) {
    if (*(longlong *)(local_20 + 0x60) != 0) {
      _wassert(u__ctx_>nbytes_183d6acd0,u____src_w32_estream_c_183d6aca0,0x2e0);
    }
    local_res18 = param_3;
    if (0x1000 < param_3) {
      local_res18 = 0x1000;
    }
    memcpy((void *)(local_20 + 0x68),param_2,local_res18);
    *(size_t *)(local_20 + 0x60) = local_res18;
    BVar1 = ResetEvent(*(HANDLE *)(local_20 + 0x50));
    if (BVar1 == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_20 + 0x10));
      thunk_FUN_181cacf00(5);
      local_18 = -1;
    }
    else {
      BVar1 = SetEvent(*(HANDLE *)(local_20 + 0x48));
      if (BVar1 == 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(local_20 + 0x10));
        thunk_FUN_181cacf00(5);
        local_18 = -1;
      }
      else {
        LeaveCriticalSection((LPCRITICAL_SECTION)(local_20 + 0x10));
        local_18 = (int)local_res18;
      }
    }
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)(local_20 + 0x10));
    if (*(int *)(local_20 + 0x40) == 0xe8) {
      thunk_FUN_181cacf00(0x20);
    }
    else {
      thunk_FUN_181cacf00(5);
    }
    local_18 = -1;
  }
LAB_181f1f550:
  return (longlong)local_18;
}


