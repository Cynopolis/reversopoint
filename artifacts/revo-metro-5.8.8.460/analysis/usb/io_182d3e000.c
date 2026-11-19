/* 0x182d3e000 size=0x49
   CloseHandle
*/


undefined8 * FUN_182d3e000(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = x265::Thread::vftable;
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    FUN_18001e0e2(param_1,0x10);
  }
  return param_1;
}


