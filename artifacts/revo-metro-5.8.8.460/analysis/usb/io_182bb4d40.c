/* 0x182bb4d40 size=0x53
   CloseHandle
   WaitForSingleObject
*/


undefined8 FUN_182bb4d40(undefined8 *param_1,undefined8 *param_2)

{
  DWORD DVar1;
  
  DVar1 = WaitForSingleObject((HANDLE)*param_1,0xffffffff);
  if (DVar1 != 0) {
    return 0xffffffff;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)param_1[3];
  }
  CloseHandle((HANDLE)*param_1);
  return 0;
}


