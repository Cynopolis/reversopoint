/* 0x183050c40 size=0x5d
   CloseHandle
*/


undefined8 * FUN_183050c40(undefined8 *param_1,ulonglong param_2)

{
  CloseHandle((HANDLE)param_1[0x15]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *param_1 = x265_12bit::JobProvider::vftable;
  if ((param_2 & 1) != 0) {
    FUN_18001e0e2(param_1,0x150);
  }
  return param_1;
}


