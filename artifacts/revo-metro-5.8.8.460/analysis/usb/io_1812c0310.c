/* 0x1812c0310 size=0x190
   WriteFile
   GetOverlappedResult
   WaitForSingleObject
*/


undefined4 FUN_1812c0310(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  void *_Dst;
  char *pcVar3;
  DWORD local_res8 [2];
  
  if (param_1 == (undefined8 *)0x0) {
    thunk_FUN_18317f440("[SDK ERROR] hid_write, dev is NULL\r\n");
    return 0xffffffff;
  }
  local_res8[0] = 0;
  if ((param_2 == (void *)0x0) || (param_3 == 0)) {
    thunk_FUN_18317f440("[SDK ERROR] Zero length buffer\n");
    pcVar3 = "Zero length buffer";
  }
  else {
    if (param_3 < *(ushort *)((longlong)param_1 + 0xc)) {
      _Dst = (void *)param_1[2];
      if (_Dst == (void *)0x0) {
        _Dst = malloc((ulonglong)*(ushort *)((longlong)param_1 + 0xc));
        param_1[2] = _Dst;
      }
      memcpy(_Dst,param_2,param_3);
      memset((void *)((longlong)_Dst + param_3),0,*(ushort *)((longlong)param_1 + 0xc) - param_3);
      param_3 = (ulonglong)*(ushort *)((longlong)param_1 + 0xc);
      param_2 = _Dst;
    }
    BVar1 = WriteFile((HANDLE)*param_1,param_2,(DWORD)param_3,(LPDWORD)0x0,
                      (LPOVERLAPPED)(param_1 + 0xd));
    if (BVar1 != 0) {
      return 0xffffffff;
    }
    DVar2 = GetLastError();
    if (DVar2 == 0x3e5) {
      DVar2 = WaitForSingleObject((HANDLE)param_1[0x10],5000);
      if (DVar2 == 0) {
        BVar1 = GetOverlappedResult((HANDLE)*param_1,(LPOVERLAPPED)(param_1 + 0xd),local_res8,0);
        if (BVar1 != 0) {
          return local_res8[0];
        }
        thunk_FUN_18317f440("[SDK ERROR] hid_write,The Write operation failed.\n");
        pcVar3 = "WriteFile";
      }
      else {
        thunk_FUN_18317f440("[SDK ERROR] hid_write,There was a Timeout.\n");
        pcVar3 = "WriteFile/WaitForSingleObject Timeout";
      }
    }
    else {
      DVar2 = GetLastError();
      thunk_FUN_18317f440("[SDK ERROR] hid_write,WriteFile() failed: %d;\n",DVar2);
      pcVar3 = "WriteFile";
    }
  }
  FUN_1812c0980(param_1,pcVar3);
  return 0xffffffff;
}


