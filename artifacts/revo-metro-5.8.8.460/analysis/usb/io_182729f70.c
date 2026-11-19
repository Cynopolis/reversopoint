/* 0x182729f70 size=0x6f
   WaitForSingleObjectEx
*/


void FUN_182729f70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(int *)(param_1 + 0x88) == 0x76) || (*(int *)(param_1 + 0x88) == 0xae)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x70);
    lVar2 = *(longlong *)(param_1 + 0x2a8);
    if (lVar2 == 0) {
      lVar2 = lVar1 + 0x120;
    }
    if (*(HANDLE *)(lVar2 + 0x38) != (HANDLE)0xffffffffffffffff) {
      WaitForSingleObjectEx(*(HANDLE *)(lVar2 + 0x38),0xffffffff,0);
    }
    lVar2 = *(longlong *)(lVar1 + 0x18);
    if (lVar2 != 0) {
      lVar2 = *(longlong *)(lVar2 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000182729fd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x20))(*(undefined8 *)(lVar2 + 0x30));
      return;
    }
  }
  return;
}


