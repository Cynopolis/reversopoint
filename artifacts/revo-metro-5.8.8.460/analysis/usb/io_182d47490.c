/* 0x182d47490 size=0xe3
   CreateEventW
*/


undefined1 FUN_182d47490(longlong param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  HANDLE pvVar3;
  int iVar4;
  undefined8 *puVar5;
  
  *(int *)(param_1 + 0xc) = param_2;
  lVar2 = FUN_180013282((longlong)param_2 * 0x38);
  *(longlong *)(param_1 + 0x28) = lVar2;
  if (lVar2 != 0) {
    iVar4 = 0;
    if (0 < param_2) {
      lVar2 = 0;
      do {
        puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar2);
        if (puVar5 != (undefined8 *)0x0) {
          thunk_FUN_182d3dfb0(puVar5);
          *puVar5 = x265::WorkerThread::vftable;
          puVar5[2] = param_1;
          *(int *)(puVar5 + 3) = iVar4;
          pvVar3 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
          puVar5[4] = pvVar3;
        }
        iVar4 = iVar4 + 1;
        lVar2 = lVar2 + 0x38;
      } while (iVar4 < param_2);
    }
  }
  lVar2 = FUN_180013282((longlong)param_3 << 3);
  *(longlong *)(param_1 + 0x20) = lVar2;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((*(longlong *)(param_1 + 0x28) == 0) || (lVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


