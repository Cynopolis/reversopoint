/* 0x183011fb0 size=0x2a
   CloseHandle
*/


void FUN_183011fb0(undefined8 *param_1)

{
  *param_1 = x265_12bit::WorkerThread::vftable;
  CloseHandle((HANDLE)param_1[4]);
  thunk_FUN_1830093f0(param_1);
  return;
}


