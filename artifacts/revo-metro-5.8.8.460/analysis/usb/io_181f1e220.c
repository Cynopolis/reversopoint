/* 0x181f1e220 size=0x3ab
   CloseHandle
   ResetEvent
   WaitForSingleObject
   SetEvent
*/


undefined8 FUN_181f1e220(longlong *param_1)

{
  undefined1 auVar1 [16];
  int *piVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 auStack_58 [8];
  longlong *local_38;
  int local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  puVar4 = auStack_58;
  for (lVar3 = 0x14; local_38 = param_1, lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  while( true ) {
    EnterCriticalSection((LPCRITICAL_SECTION)(local_38 + 2));
    while ((local_38[0xe] + 1U) % 0x1000 == local_38[0xd]) {
      ResetEvent((HANDLE)local_38[0xb]);
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_38 + 2));
      WaitForSingleObject((HANDLE)local_38[0xb],0xffffffff);
      EnterCriticalSection((LPCRITICAL_SECTION)(local_38 + 2));
    }
    if ((local_38[0xe] + 1U) % 0x1000 == local_38[0xd]) {
      _wassert(u___ctx_>writepos___1____READBUF_S_183d6adc0,u____src_w32_estream_c_183d6ad90,0xab);
    }
    if ((int)local_38[7] != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_38 + 2));
      goto LAB_181f1e537;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (local_38[0xd] - local_38[0xe]) + 0xfff;
    local_30 = SUB164(auVar1 % ZEXT816(0x1000),0);
    if (local_30 == 0) {
      _wassert(u_nbytes_183d6ae60,u____src_w32_estream_c_183d6ae30,0xb3);
    }
    if (0x1000U - local_38[0xe] < (ulonglong)(longlong)local_30) {
      local_30 = 0x1000 - (int)local_38[0xe];
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(local_38 + 2));
    local_20 = *local_38;
    local_18 = *local_38;
    local_28 = (**(code **)(local_18 + 8))
                         (*(undefined8 *)(local_20 + 0x30),(longlong)local_38 + local_38[0xe] + 0x78
                          ,(longlong)local_30);
    if (local_28 < 0) break;
    EnterCriticalSection((LPCRITICAL_SECTION)(local_38 + 2));
    if ((int)local_38[7] != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_38 + 2));
      goto LAB_181f1e537;
    }
    if (local_28 == 0) {
      *(undefined4 *)((longlong)local_38 + 0x3c) = 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)(local_38 + 2));
LAB_181f1e537:
      SetEvent((HANDLE)local_38[10]);
      WaitForSingleObject((HANDLE)local_38[0xc],0xffffffff);
      CloseHandle((HANDLE)local_38[0xc]);
      CloseHandle((HANDLE)local_38[10]);
      CloseHandle((HANDLE)local_38[0xb]);
      CloseHandle((HANDLE)local_38[1]);
      DeleteCriticalSection((LPCRITICAL_SECTION)(local_38 + 2));
      free(local_38);
      return 0;
    }
    local_38[0xe] = (ulonglong)(local_38[0xe] + local_28) % 0x1000;
    SetEvent((HANDLE)local_38[10]);
    LeaveCriticalSection((LPCRITICAL_SECTION)(local_38 + 2));
  }
  piVar2 = _errno();
  *(int *)(local_38 + 9) = *piVar2;
  if ((int)local_38[9] == 0x6d) {
    *(undefined4 *)((longlong)local_38 + 0x3c) = 1;
  }
  else {
    *(undefined4 *)((longlong)local_38 + 0x44) = 1;
  }
  goto LAB_181f1e537;
}


