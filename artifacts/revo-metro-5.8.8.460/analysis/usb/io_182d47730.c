/* 0x182d47730 size=0x9f
   SetEvent
*/


void FUN_182d47730(ulonglong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_1[5] != 0) {
    uVar1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    if (0 < *(int *)((longlong)param_1 + 0xc)) {
      lVar3 = 0;
      uVar2 = 1;
      do {
        if ((*param_1 & uVar2) == 0) {
          do {
            Sleep(0);
          } while ((*param_1 >> ((ulonglong)uVar1 & 0x3f) & 1) == 0);
        }
        SetEvent(*(HANDLE *)(lVar3 + 0x20 + param_1[5]));
        thunk_FUN_182d3e0e0();
        uVar1 = uVar1 + 1;
        uVar2 = uVar2 << 1 | (ulonglong)((longlong)uVar2 < 0);
        lVar3 = lVar3 + 0x38;
      } while ((int)uVar1 < *(int *)((longlong)param_1 + 0xc));
    }
  }
  return;
}


