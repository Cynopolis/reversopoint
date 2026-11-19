/* 0x182dc38c0 size=0xef
   CloseHandle
*/


void FUN_182dc38c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = x265_12bit::FrameEncoder::vftable;
  param_1[10] = x265_12bit::FrameEncoder::vftable;
  FUN_18001c2f1(param_1[0x4cb]);
  FUN_18001c2f1(param_1[0x4cd]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a1));
  lVar2 = 0x22;
  puVar1 = param_1 + 0x3ab;
  do {
    puVar1 = puVar1 + -0x16;
    thunk_FUN_183013b60(puVar1);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1[0xbb] = x265_12bit::Bitstream::vftable;
  FUN_18001c2f1(param_1[0xbc]);
  param_1[0xbb] = x265_12bit::BitInterface::vftable;
  param_1[0x71] = x265_12bit::SEI::vftable;
  CloseHandle((HANDLE)param_1[0xe]);
  CloseHandle((HANDLE)param_1[0xd]);
  CloseHandle((HANDLE)param_1[0xc]);
  thunk_FUN_1830093f0(param_1 + 10);
  thunk_FUN_1830130a0(param_1);
  return;
}


