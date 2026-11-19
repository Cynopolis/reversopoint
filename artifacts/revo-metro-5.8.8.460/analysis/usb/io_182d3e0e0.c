/* 0x182d3e0e0 size=0x14
   WaitForSingleObject
*/


void FUN_182d3e0e0(longlong param_1)

{
  if (*(HANDLE *)(param_1 + 8) != (HANDLE)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000182d3e0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    WaitForSingleObject(*(HANDLE *)(param_1 + 8),0xffffffff);
    return;
  }
  return;
}


