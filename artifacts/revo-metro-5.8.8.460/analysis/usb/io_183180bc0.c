/* 0x183180bc0 size=0x1b
   WaitForSingleObject
*/


bool FUN_183180bc0(HANDLE param_1)

{
  DWORD DVar1;
  
  DVar1 = WaitForSingleObject(param_1,0xffffffff);
  return DVar1 == 0;
}


