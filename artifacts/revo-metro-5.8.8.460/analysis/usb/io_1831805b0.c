/* 0x1831805b0 size=0x30
   WriteFile
*/


DWORD FUN_1831805b0(undefined8 *param_1,LPCVOID param_2,DWORD param_3)

{
  BOOL BVar1;
  DWORD local_res8 [8];
  
  local_res8[0] = 0;
  BVar1 = WriteFile((HANDLE)*param_1,param_2,param_3,local_res8,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    local_res8[0] = 0xffffffff;
  }
  return local_res8[0];
}


