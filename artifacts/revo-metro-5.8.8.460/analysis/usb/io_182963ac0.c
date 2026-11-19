/* 0x182963ac0 size=0x2be
   CloseHandle
*/


void FUN_182963ac0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  HANDLE pvVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x3760) = 0;
  *(undefined4 *)(param_1 + 0x3770) = 0;
  iVar5 = *(int *)(param_1 + 0x3764);
  if (8 < iVar5) {
    iVar5 = 8;
  }
  if (*(int *)(param_1 + 0x34e8) < iVar5) {
    iVar5 = *(int *)(param_1 + 0x34e8);
  }
  if (1 < iVar5) {
    *(undefined4 *)(param_1 + 0x3760) = 1;
    *(int *)(param_1 + 0x376c) = iVar5 + -1;
    lVar3 = thunk_FUN_182944bf0(8,iVar5 + -1);
    *(longlong *)(param_1 + 0x37d0) = lVar3;
    if (lVar3 == 0) {
      thunk_FUN_1826d8670(param_1 + 0x12c0,2,"Failed to allocate (pbi->h_decoding_thread)");
    }
    lVar3 = thunk_FUN_182944bf0(8,*(undefined4 *)(param_1 + 0x376c));
    *(longlong *)(param_1 + 0x37d8) = lVar3;
    if (lVar3 == 0) {
      thunk_FUN_1826d8670(param_1 + 0x12c0,2,"Failed to allocate (pbi->h_event_start_decoding)");
    }
    lVar3 = thunk_FUN_182944d10(0x20);
    *(longlong *)(param_1 + 0x37c0) = lVar3;
    if (lVar3 == 0) {
      thunk_FUN_1826d8670(param_1 + 0x12c0,2,"Failed to allocate (pbi->mb_row_di)");
    }
    memset(*(void **)(param_1 + 0x37c0),0,(ulonglong)*(uint *)(param_1 + 0x376c) * 0x12a0);
    lVar3 = thunk_FUN_182944bf0(0x18,*(undefined4 *)(param_1 + 0x376c));
    *(longlong *)(param_1 + 0x37c8) = lVar3;
    if (lVar3 == 0) {
      thunk_FUN_1826d8670(param_1 + 0x12c0,2,"Failed to allocate (pbi->de_thread_data)");
    }
    pvVar4 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,0,0x8000,(LPCWSTR)0x0);
    *(HANDLE *)(param_1 + 0x37e0) = pvVar4;
    if (pvVar4 == (HANDLE)0x0) {
      thunk_FUN_1826d8670(param_1 + 0x12c0,2,"Failed to initialize semaphore");
    }
    uVar7 = 0;
    if (*(int *)(param_1 + 0x376c) != 0) {
      while( true ) {
        pvVar4 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,0,0x8000,(LPCWSTR)0x0);
        uVar7 = (uint)uVar6;
        lVar3 = uVar6 * 8;
        *(HANDLE *)(lVar3 + *(longlong *)(param_1 + 0x37d8)) = pvVar4;
        if (pvVar4 == (HANDLE)0x0) break;
        thunk_FUN_182960d60(*(longlong *)(param_1 + 0x37c0) + uVar6 * 0x12a0);
        lVar1 = uVar6 * 0x18;
        *(uint *)(lVar1 + *(longlong *)(param_1 + 0x37c8)) = uVar7;
        *(longlong *)(lVar1 + 8 + *(longlong *)(param_1 + 0x37c8)) = param_1;
        *(ulonglong *)(lVar1 + 0x10 + *(longlong *)(param_1 + 0x37c8)) =
             *(longlong *)(param_1 + 0x37c0) + uVar6 * 0x12a0;
        lVar2 = *(longlong *)(param_1 + 0x37d0);
        pvVar4 = (HANDLE)_beginthreadex((void *)0x0,0,FUN_1829639e0,
                                        (void *)(*(longlong *)(param_1 + 0x37c8) + lVar1),0,
                                        (uint *)0x0);
        *(HANDLE *)(lVar2 + lVar3) = pvVar4;
        if (pvVar4 == (HANDLE)0x0) {
          pvVar4 = *(HANDLE *)(lVar3 + *(longlong *)(param_1 + 0x37d8));
          if (pvVar4 != (HANDLE)0x0) {
            CloseHandle(pvVar4);
          }
          break;
        }
        SetThreadPriority(pvVar4,1);
        uVar7 = uVar7 + 1;
        uVar6 = (ulonglong)uVar7;
        if (*(uint *)(param_1 + 0x376c) <= uVar7) break;
      }
    }
    *(uint *)(param_1 + 0x3770) = uVar7;
    if (uVar7 != *(uint *)(param_1 + 0x376c)) {
      if ((uVar7 == 0) && (*(HANDLE *)(param_1 + 0x37e0) != (HANDLE)0x0)) {
        CloseHandle(*(HANDLE *)(param_1 + 0x37e0));
      }
      thunk_FUN_1826d8670(param_1 + 0x12c0,2,"Failed to create threads");
    }
  }
  return;
}


