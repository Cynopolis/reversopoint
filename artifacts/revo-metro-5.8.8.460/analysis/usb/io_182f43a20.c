/* 0x182f43a20 size=0x4b
   CloseHandle
*/


undefined8 * FUN_182f43a20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = x265_10bit::WorkerThread::vftable;
  CloseHandle((HANDLE)param_1[4]);
  thunk_FUN_182f3acd0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_18001e0e2(param_1,0x38);
  }
  return param_1;
}


