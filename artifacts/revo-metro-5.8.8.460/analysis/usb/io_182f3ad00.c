/* 0x182f3ad00 size=0x49
   CloseHandle
*/


undefined8 * FUN_182f3ad00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = x265_10bit::Thread::vftable;
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    FUN_18001e0e2(param_1,0x10);
  }
  return param_1;
}


