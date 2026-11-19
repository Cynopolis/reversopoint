/* 0x182f43890 size=0x2a
   CloseHandle
*/


void FUN_182f43890(undefined8 *param_1)

{
  *param_1 = x265_10bit::WorkerThread::vftable;
  CloseHandle((HANDLE)param_1[4]);
  thunk_FUN_182f3acd0(param_1);
  return;
}


