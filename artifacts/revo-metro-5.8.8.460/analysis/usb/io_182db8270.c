/* 0x182db8270 size=0xdd
   SetEvent
*/


void FUN_182db8270(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x10160) != 0) {
    thunk_FUN_182f7de40();
  }
  if (*(longlong *)(param_1 + 0x10168) != 0) {
    thunk_FUN_182f8b730();
  }
  iVar2 = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 0x10150) + 4)) {
    plVar3 = (longlong *)(param_1 + 0x100b0);
    iVar1 = iVar2;
    do {
      if (*plVar3 != 0) {
        thunk_FUN_182d96510(*plVar3,param_1 + 0x12b18);
        *(undefined1 *)(*plVar3 + 0x7d) = 0;
        SetEvent(*(HANDLE *)(*plVar3 + 0x60));
        thunk_FUN_182f3ade0(*plVar3 + 0x50);
      }
      iVar1 = iVar1 + 1;
      plVar3 = plVar3 + 1;
    } while (iVar1 < *(int *)(*(longlong *)(param_1 + 0x10150) + 4));
  }
  if ((*(longlong *)(param_1 + 0x100a8) != 0) && (0 < *(int *)(param_1 + 0x10080))) {
    do {
      thunk_FUN_182f44440((longlong)iVar2 * 0x30 + *(longlong *)(param_1 + 0x100a8));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x10080));
  }
  return;
}


