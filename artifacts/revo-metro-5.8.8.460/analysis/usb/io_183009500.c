/* 0x183009500 size=0x14
   WaitForSingleObject
*/


void FUN_183009500(longlong param_1)

{
  if (*(HANDLE *)(param_1 + 8) != (HANDLE)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018300950c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    WaitForSingleObject(*(HANDLE *)(param_1 + 8),0xffffffff);
    return;
  }
  return;
}


