/* 0x182d3dfd0 size=0x1b
   CloseHandle
*/


void FUN_182d3dfd0(undefined8 *param_1)

{
  *param_1 = x265::Thread::vftable;
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000182d3dfe3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CloseHandle((HANDLE)param_1[1]);
    return;
  }
  return;
}


