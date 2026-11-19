/* 0x18299de80 size=0xe7
   CloseHandle
*/


void FUN_18299de80(undefined8 *param_1)

{
  *param_1 = x265::FrameEncoder::vftable;
  param_1[10] = x265::FrameEncoder::vftable;
  thunk_FUN_18299c7d0(param_1[0x4cb]);
  thunk_FUN_18299c7d0(param_1[0x4cd]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a1));
  _eh_vector_destructor_iterator_(param_1 + 0xbf,0xb0,0x22,(_func_void_void_ptr *)&LAB_1800200a9);
  param_1[0xbb] = x265::Bitstream::vftable;
  thunk_FUN_18299c7d0(param_1[0xbc]);
  param_1[0xbb] = x265::BitInterface::vftable;
  param_1[0x71] = x265::SEI::vftable;
  CloseHandle((HANDLE)param_1[0xe]);
  CloseHandle((HANDLE)param_1[0xd]);
  CloseHandle((HANDLE)param_1[0xc]);
  thunk_FUN_182d3dfd0(param_1 + 10);
  thunk_FUN_182d47c70(param_1);
  return;
}


