/* 0x183059e50 size=0xaa
   WaitForSingleObject
*/


void FUN_183059e50(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  if ((*(longlong *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x38) != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    cVar1 = *(char *)(param_1 + 0x141);
    *(char *)(param_1 + 0x143) = cVar1;
    *(undefined1 *)(param_1 + 0x140) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    if (cVar1 != '\0') {
      WaitForSingleObject(*(HANDLE *)(param_1 + 0xa8),0xffffffff);
    }
  }
  if (((*(longlong *)(param_1 + 8) != 0) && (0 < *(int *)(*(longlong *)(param_1 + 0xb8) + 0x2d0)))
     && (iVar2 = 0, 0 < *(int *)(param_1 + 0x148))) {
    do {
      thunk_FUN_183012b60((longlong)iVar2 * 0x30 + *(longlong *)(param_1 + 8));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x148));
  }
  return;
}


