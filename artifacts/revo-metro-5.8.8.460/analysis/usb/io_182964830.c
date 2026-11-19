/* 0x182964830 size=0x1ee
   WaitForSingleObjectEx
*/


void FUN_182964830(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  
  iVar1 = *(int *)(param_1 + 0x2be0);
  piVar2 = *(int **)(param_1 + 0x12a0);
  uVar6 = 0;
  if (iVar1 == 0) {
    thunk_FUN_182bae460(piVar2);
  }
  else {
    memset((void *)(**(longlong **)(param_1 + 0x3790) + 0x1f),0x7f,(longlong)(*piVar2 + 5));
    memset((void *)(**(longlong **)(param_1 + 0x3798) + 0xf),0x7f,(longlong)((*piVar2 >> 1) + 5));
    memset((void *)(**(longlong **)(param_1 + 0x37a0) + 0xf),0x7f,(longlong)((*piVar2 >> 1) + 5));
    iVar7 = 1;
    if (1 < *(int *)(param_1 + 0x1e74)) {
      lVar4 = 8;
      do {
        iVar7 = iVar7 + 1;
        *(undefined1 *)(*(longlong *)(lVar4 + *(longlong *)(param_1 + 0x3790)) + 0x1f) = 0x81;
        *(undefined1 *)(*(longlong *)(lVar4 + *(longlong *)(param_1 + 0x3798)) + 0xf) = 0x81;
        *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x37a0) + -8 + lVar4 + 8) + 0xf) =
             0x81;
        lVar4 = lVar4 + 8;
      } while (iVar7 < *(int *)(param_1 + 0x1e74));
    }
    uVar5 = uVar6;
    uVar9 = uVar6;
    if (0 < *(int *)(param_1 + 0x1e74)) {
      do {
        uVar8 = (int)uVar9 + 1;
        puVar3 = *(undefined8 **)(uVar5 + *(longlong *)(param_1 + 0x37a8));
        *puVar3 = 0x8181818181818181;
        puVar3[1] = 0x8181818181818181;
        **(undefined8 **)(*(longlong *)(param_1 + 0x37b0) + -8 + uVar5 + 8) = 0x8181818181818181;
        **(undefined8 **)(uVar5 + *(longlong *)(param_1 + 0x37b8)) = 0x8181818181818181;
        uVar5 = uVar5 + 8;
        uVar9 = (ulonglong)uVar8;
      } while ((int)uVar8 < *(int *)(param_1 + 0x1e74));
    }
    thunk_FUN_182aea220(param_1 + 0x12c0,param_1,iVar1);
  }
  FUN_1829635e0(param_1,param_2,*(undefined8 *)(param_1 + 0x37c0),*(undefined4 *)(param_1 + 0x376c))
  ;
  if (*(int *)(param_1 + 0x376c) != 0) {
    do {
      ReleaseSemaphore(*(HANDLE *)(*(longlong *)(param_1 + 0x37d8) + uVar6 * 8),1,(LPLONG)0x0);
      uVar8 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar8;
    } while (uVar8 < *(uint *)(param_1 + 0x376c));
  }
  FUN_1829625c0(param_1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x000182964a17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WaitForSingleObjectEx(*(HANDLE *)(param_1 + 0x37e0),0xffffffff,0);
  return;
}


