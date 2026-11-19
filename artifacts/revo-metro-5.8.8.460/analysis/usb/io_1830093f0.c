/* 0x1830093f0 size=0x1b
   CloseHandle
*/


void FUN_1830093f0(undefined8 *param_1)

{
  *param_1 = x265_12bit::Thread::vftable;
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000183009403. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CloseHandle((HANDLE)param_1[1]);
    return;
  }
  return;
}


