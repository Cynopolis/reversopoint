/* 0x182f82520 size=0x5d
   CloseHandle
*/


undefined8 * FUN_182f82520(undefined8 *param_1,ulonglong param_2)

{
  CloseHandle((HANDLE)param_1[0x15]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *param_1 = x265_10bit::JobProvider::vftable;
  if ((param_2 & 1) != 0) {
    FUN_18001e0e2(param_1,0x150);
  }
  return param_1;
}


