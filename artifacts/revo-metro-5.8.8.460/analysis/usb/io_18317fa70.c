/* 0x18317fa70 size=0x6c
   WriteFile
*/


undefined8 FUN_18317fa70(longlong param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  DWORD local_res8 [2];
  
  DVar1 = GetTickCount();
  while (*(int *)(param_1 + 0x14) != 0) {
    DVar2 = GetTickCount();
    if (*(uint *)(param_1 + 0x10) <= DVar2 - DVar1) break;
    Sleep(1);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    local_res8[0] = 0;
    WriteFile(*(HANDLE *)(param_1 + 8),"wjhlumei",8,local_res8,(LPOVERLAPPED)0x0);
  }
  return 0;
}


