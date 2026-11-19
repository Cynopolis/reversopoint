/* 0x182b01b40 size=0x4d7
   CloseHandle
   WaitForSingleObjectEx
*/


undefined8 FUN_182b01b40(longlong param_1)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  HANDLE pvVar6;
  ulonglong uVar7;
  int *_ArgList;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar7 = 0;
  lVar8 = param_1 + 0x1a7a0;
  uVar11 = 0;
  *(undefined4 *)(param_1 + 0x23c1c) = 0;
  *(undefined8 *)(param_1 + 0x23c20) = 0;
  iVar10 = *(int *)(param_1 + 0x1c9c8);
  if ((1 < iVar10) && (iVar1 = *(int *)(param_1 + 0x1cc2c), 1 < iVar1)) {
    if (iVar10 < iVar1) {
      iVar1 = iVar10;
    }
    iVar2 = *(int *)(param_1 + 0x1b358) / *(int *)(param_1 + 0x23c18) + -1;
    iVar10 = iVar1 + -1;
    if (iVar2 < iVar1 + -1) {
      iVar10 = iVar2;
    }
    if (iVar10 != 0) {
      lVar9 = (longlong)iVar10;
      lVar5 = lVar9 * 8;
      lVar4 = thunk_FUN_182944cc0(lVar5,(longlong)*(int *)(param_1 + 0x1b358) %
                                        (longlong)*(int *)(param_1 + 0x23c18) & 0xffffffff);
      *(longlong *)(param_1 + 0x23c28) = lVar4;
      if (lVar4 == 0) {
        thunk_FUN_1826d8670(lVar8,2,"Failed to allocate cpi->h_encoding_thread");
      }
      lVar4 = thunk_FUN_182944cc0(lVar5);
      *(longlong *)(param_1 + 0x23c58) = lVar4;
      if (lVar4 == 0) {
        thunk_FUN_1826d8670(lVar8,2,"Failed to allocate cpi->h_event_start_encoding");
      }
      lVar5 = thunk_FUN_182944cc0(lVar5);
      *(longlong *)(param_1 + 0x23c60) = lVar5;
      if (lVar5 == 0) {
        thunk_FUN_1826d8670(lVar8,2,"Failed to allocate cpi->h_event_end_encoding");
      }
      lVar5 = thunk_FUN_182944d10(0x20);
      *(longlong *)(param_1 + 0x23c38) = lVar5;
      if (lVar5 == 0) {
        thunk_FUN_1826d8670(lVar8,2,"Failed to allocate cpi->mb_row_ei");
      }
      memset(*(void **)(param_1 + 0x23c38),0,lVar9 * 0x87c0);
      lVar5 = thunk_FUN_182944cc0(lVar9 * 0x18);
      *(longlong *)(param_1 + 0x23c40) = lVar5;
      if (lVar5 == 0) {
        thunk_FUN_1826d8670(lVar8,2,"Failed to allocate cpi->en_thread_data");
      }
      *(undefined4 *)(param_1 + 0x23c1c) = 1;
      *(int *)(param_1 + 0x23c20) = iVar10;
      uVar12 = uVar7;
      uVar13 = uVar7;
      if (0 < iVar10) {
        do {
          iVar10 = (int)uVar12;
          _ArgList = (int *)(*(longlong *)(param_1 + 0x23c40) + uVar13);
          lVar8 = (longlong)iVar10 * 0x87c0;
          thunk_FUN_182b00450(*(longlong *)(param_1 + 0x23c38) + lVar8);
          thunk_FUN_182960d60(*(longlong *)(param_1 + 0x23c38) + 0x1080 + lVar8);
          pvVar6 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,0,0x8000,(LPCWSTR)0x0);
          *(HANDLE *)(*(longlong *)(param_1 + 0x23c58) + uVar7 * 8) = pvVar6;
          pvVar6 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,0,0x8000,(LPCWSTR)0x0);
          *(HANDLE *)(*(longlong *)(param_1 + 0x23c60) + uVar7 * 8) = pvVar6;
          *_ArgList = iVar10;
          *(longlong *)(_ArgList + 2) = param_1;
          *(longlong *)(_ArgList + 4) = *(longlong *)(param_1 + 0x23c38) + lVar8;
          lVar8 = *(longlong *)(param_1 + 0x23c28);
          pvVar6 = (HANDLE)_beginthreadex((void *)0x0,0,FUN_182b01180,_ArgList,0,(uint *)0x0);
          *(HANDLE *)(lVar8 + uVar7 * 8) = pvVar6;
          if (pvVar6 == (HANDLE)0x0) {
            *(undefined4 *)(param_1 + 0x23c1c) = 0;
            lVar8 = (longlong)(iVar10 + -1);
            if (-1 < iVar10 + -1) {
              do {
                pvVar6 = *(HANDLE *)(*(longlong *)(param_1 + 0x23c28) + lVar8 * 8);
                DVar3 = WaitForSingleObjectEx(pvVar6,0xffffffff,0);
                if (DVar3 == 0) {
                  CloseHandle(pvVar6);
                }
                pvVar6 = *(HANDLE *)(*(longlong *)(param_1 + 0x23c58) + lVar8 * 8);
                if (pvVar6 != (HANDLE)0x0) {
                  CloseHandle(pvVar6);
                }
                pvVar6 = *(HANDLE *)(*(longlong *)(param_1 + 0x23c60) + lVar8 * 8);
                if (pvVar6 != (HANDLE)0x0) {
                  CloseHandle(pvVar6);
                }
                lVar8 = lVar8 + -1;
              } while (-1 < lVar8);
            }
            thunk_FUN_182944ca0(*(undefined8 *)(param_1 + 0x23c58));
            thunk_FUN_182944ca0(*(undefined8 *)(param_1 + 0x23c60));
            thunk_FUN_182944ca0(*(undefined8 *)(param_1 + 0x23c28));
            thunk_FUN_182944ca0(*(undefined8 *)(param_1 + 0x23c38));
            thunk_FUN_182944ca0(*(undefined8 *)(param_1 + 0x23c40));
            return 0xffffffff;
          }
          SetThreadPriority(pvVar6,1);
          uVar11 = iVar10 + 1;
          uVar7 = uVar7 + 1;
          uVar12 = (ulonglong)uVar11;
          uVar13 = uVar13 + 0x18;
        } while ((longlong)uVar7 < lVar9);
      }
      pvVar6 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,0,0x8000,(LPCWSTR)0x0);
      *(HANDLE *)(param_1 + 0x23c68) = pvVar6;
      pvVar6 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,0,0x8000,(LPCWSTR)0x0);
      *(HANDLE *)(param_1 + 0x23c70) = pvVar6;
      *(longlong *)(param_1 + 0x23c50) = param_1;
      pvVar6 = (HANDLE)_beginthreadex((void *)0x0,0,FUN_182b01aa0,(void *)(param_1 + 0x23c48),0,
                                      (uint *)0x0);
      *(HANDLE *)(param_1 + 0x23c30) = pvVar6;
      if (pvVar6 == (HANDLE)0x0) {
        *(undefined4 *)(param_1 + 0x23c1c) = 0;
        lVar8 = (longlong)(int)(uVar11 - 1);
        if (-1 < (int)(uVar11 - 1)) {
          do {
            ReleaseSemaphore(*(HANDLE *)(*(longlong *)(param_1 + 0x23c58) + lVar8 * 8),1,(LPLONG)0x0
                            );
            ReleaseSemaphore(*(HANDLE *)(*(longlong *)(param_1 + 0x23c60) + lVar8 * 8),1,(LPLONG)0x0
                            );
            pvVar6 = *(HANDLE *)(*(longlong *)(param_1 + 0x23c28) + lVar8 * 8);
            DVar3 = WaitForSingleObjectEx(pvVar6,0xffffffff,0);
            if (DVar3 == 0) {
              CloseHandle(pvVar6);
            }
            pvVar6 = *(HANDLE *)(*(longlong *)(param_1 + 0x23c58) + lVar8 * 8);
            if (pvVar6 != (HANDLE)0x0) {
              CloseHandle(pvVar6);
            }
            pvVar6 = *(HANDLE *)(*(longlong *)(param_1 + 0x23c60) + lVar8 * 8);
            if (pvVar6 != (HANDLE)0x0) {
              CloseHandle(pvVar6);
            }
            lVar8 = lVar8 + -1;
          } while (-1 < lVar8);
        }
        if (*(HANDLE *)(param_1 + 0x23c70) != (HANDLE)0x0) {
          CloseHandle(*(HANDLE *)(param_1 + 0x23c70));
        }
        if (*(HANDLE *)(param_1 + 0x23c68) != (HANDLE)0x0) {
          CloseHandle(*(HANDLE *)(param_1 + 0x23c68));
        }
        thunk_FUN_182944ca0(*(undefined8 *)(param_1 + 0x23c58));
        thunk_FUN_182944ca0(*(undefined8 *)(param_1 + 0x23c60));
        thunk_FUN_182944ca0(*(undefined8 *)(param_1 + 0x23c28));
        thunk_FUN_182944ca0(*(undefined8 *)(param_1 + 0x23c38));
        thunk_FUN_182944ca0(*(undefined8 *)(param_1 + 0x23c40));
        return 0xfffffffe;
      }
      SetThreadPriority(pvVar6,1);
    }
  }
  return 0;
}


