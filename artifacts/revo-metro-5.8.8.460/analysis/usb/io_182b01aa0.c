/* 0x182b01aa0 size=0x7b
   WaitForSingleObjectEx
*/


undefined8 FUN_182b01aa0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0x23c1c);
  do {
    if (iVar1 == 0) {
      return 0;
    }
    DVar3 = WaitForSingleObjectEx(*(HANDLE *)(lVar2 + 0x23c68),0xffffffff,0);
    if (DVar3 == 0) {
      if (*(int *)(lVar2 + 0x23c1c) == 0) {
        return 0;
      }
      thunk_FUN_18294e060(lVar2,lVar2 + 0x1a7a0);
      ReleaseSemaphore(*(HANDLE *)(lVar2 + 0x23c70),1,(LPLONG)0x0);
    }
    iVar1 = *(int *)(lVar2 + 0x23c1c);
  } while( true );
}


