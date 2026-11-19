/* 0x182f3ade0 size=0x14
   WaitForSingleObject
*/


void FUN_182f3ade0(longlong param_1)

{
  if (*(HANDLE *)(param_1 + 8) != (HANDLE)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000182f3adec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    WaitForSingleObject(*(HANDLE *)(param_1 + 8),0xffffffff);
    return;
  }
  return;
}


