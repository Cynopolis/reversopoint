/* 0x183180970 size=0x41
   CloseHandle
   WaitForSingleObject
*/


bool FUN_183180970(HANDLE param_1)

{
  DWORD DVar1;
  
  if (param_1 == (HANDLE)0x0) {
    return false;
  }
  DVar1 = WaitForSingleObject(param_1,0xffffffff);
  CloseHandle(param_1);
  return DVar1 == 0;
}


