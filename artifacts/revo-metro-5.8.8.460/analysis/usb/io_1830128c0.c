/* 0x1830128c0 size=0xe4
   CreateEventW
*/


undefined1 FUN_1830128c0(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  HANDLE pvVar2;
  int iVar3;
  undefined8 *puVar4;
  
  *(int *)(param_1 + 0xc) = param_2;
  lVar1 = thunk_FUN_182dc2240((longlong)param_2 * 0x38);
  *(longlong *)(param_1 + 0x28) = lVar1;
  if ((lVar1 != 0) && (iVar3 = 0, 0 < param_2)) {
    lVar1 = 0;
    do {
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar1);
      if (puVar4 != (undefined8 *)0x0) {
        thunk_FUN_1830093d0(puVar4);
        *puVar4 = x265_12bit::WorkerThread::vftable;
        puVar4[2] = param_1;
        *(int *)(puVar4 + 3) = iVar3;
        pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
        puVar4[4] = pvVar2;
      }
      iVar3 = iVar3 + 1;
      lVar1 = lVar1 + 0x38;
    } while (iVar3 < param_2);
  }
  lVar1 = thunk_FUN_182dc2240((longlong)param_3 << 3);
  *(longlong *)(param_1 + 0x20) = lVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) && (lVar1 != 0)) {
    return 1;
  }
  return 0;
}


