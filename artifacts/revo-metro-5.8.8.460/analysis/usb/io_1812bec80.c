/* 0x1812bec80 size=0x6d
   CloseHandle
*/


void FUN_1812bec80(undefined8 *param_1)

{
  CloseHandle((HANDLE)param_1[0xc]);
  CloseHandle((HANDLE)param_1[0x10]);
  CloseHandle((HANDLE)*param_1);
  LocalFree((HLOCAL)param_1[6]);
  free((void *)param_1[2]);
  free((void *)param_1[5]);
  free((void *)param_1[8]);
  free((void *)param_1[0x11]);
                    /* WARNING: Could not recover jumptable at 0x0001812bece6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(param_1);
  return;
}


