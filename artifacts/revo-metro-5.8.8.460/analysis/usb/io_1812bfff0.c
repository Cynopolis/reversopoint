/* 0x1812bfff0 size=0x1aa
   ReadFile
   GetOverlappedResult
   CancelIo
   ResetEvent
   WaitForSingleObject
*/


ulonglong FUN_1812bfff0(undefined8 *param_1,void *param_2,ulonglong param_3,DWORD param_4)

{
  HANDLE hEvent;
  char *_Src;
  bool bVar1;
  BOOL BVar2;
  DWORD DVar3;
  ulonglong uVar4;
  DWORD local_res8 [2];
  
  hEvent = (HANDLE)param_1[0xc];
  uVar4 = 0;
  bVar1 = false;
  local_res8[0] = 0;
  if (*(int *)((longlong)param_1 + 0x3c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 1;
    memset((void *)param_1[8],0,param_1[3]);
    ResetEvent(hEvent);
    BVar2 = ReadFile((HANDLE)*param_1,(LPVOID)param_1[8],*(DWORD *)(param_1 + 3),local_res8,
                     (LPOVERLAPPED)(param_1 + 9));
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x3e5) {
        bVar1 = true;
        goto LAB_1812c00dd;
      }
      CancelIo((HANDLE)*param_1);
      DVar3 = GetLastError();
      thunk_FUN_18317f440("[SDK TRACE] hid_read ReadFile() has failed. %d\n",DVar3);
      goto LAB_1812c00a2;
    }
LAB_1812c00dd:
    if (bVar1) goto LAB_1812c00e7;
  }
  else {
LAB_1812c00e7:
    if ((-1 < (int)param_4) && (DVar3 = WaitForSingleObject(hEvent,param_4), DVar3 != 0)) {
      return 0;
    }
    BVar2 = GetOverlappedResult((HANDLE)*param_1,(LPOVERLAPPED)(param_1 + 9),local_res8,1);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      thunk_FUN_18317f440("[SDK ERROR] GetOverlappedResult is error,res =  %d,and GetLastError() is %d\n"
                          ,0,DVar3);
LAB_1812c00a2:
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
      goto LAB_1812c00a5;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  if (BVar2 != 0) {
    if (local_res8[0] != 0) {
      _Src = (char *)param_1[8];
      if (*_Src == '\0') {
        local_res8[0] = local_res8[0] - 1;
        uVar4 = (ulonglong)local_res8[0];
        if (param_3 <= local_res8[0]) {
          uVar4 = param_3;
        }
        memcpy(param_2,_Src + 1,uVar4);
        return uVar4 & 0xffffffff;
      }
      uVar4 = param_3;
      if (local_res8[0] < param_3) {
        uVar4 = (ulonglong)local_res8[0];
      }
      memcpy(param_2,_Src,uVar4);
    }
    return uVar4 & 0xffffffff;
  }
LAB_1812c00a5:
  FUN_1812c0980(param_1,"GetOverlappedResult");
  return 0xffffffff;
}


