/* 0x182d851c0 size=0x5d
   CloseHandle
*/


undefined8 * FUN_182d851c0(undefined8 *param_1,ulonglong param_2)

{
  CloseHandle((HANDLE)param_1[0x15]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *param_1 = x265::JobProvider::vftable;
  if ((param_2 & 1) != 0) {
    FUN_18001e0e2(param_1,0x150);
  }
  return param_1;
}


