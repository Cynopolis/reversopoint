/* 0x182d46be0 size=0x2a
   CloseHandle
*/


void FUN_182d46be0(undefined8 *param_1)

{
  *param_1 = x265::WorkerThread::vftable;
  CloseHandle((HANDLE)param_1[4]);
  thunk_FUN_182d3dfd0(param_1);
  return;
}


