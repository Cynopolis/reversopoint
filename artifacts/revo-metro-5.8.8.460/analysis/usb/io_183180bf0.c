/* 0x183180bf0 size=0x18
   WaitForSingleObject
*/


bool FUN_183180bf0(HANDLE param_1,DWORD param_2)

{
  DWORD DVar1;
  
  DVar1 = WaitForSingleObject(param_1,param_2);
  return DVar1 == 0;
}


