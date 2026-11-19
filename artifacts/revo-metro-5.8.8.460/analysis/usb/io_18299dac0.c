/* 0x18299dac0 size=0x243
   CreateEventW
*/


undefined8 * FUN_18299dac0(undefined8 *param_1)

{
  HANDLE pvVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 10;
  *(undefined2 *)(param_1 + 4) = 0;
  *param_1 = x265::WaveFront::vftable;
  param_1[5] = 0;
  param_1[6] = 0;
  thunk_FUN_182d3dfb0(param_1 + 10);
  *param_1 = x265::FrameEncoder::vftable;
  param_1[10] = x265::FrameEncoder::vftable;
  pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  param_1[0xc] = pvVar1;
  pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  param_1[0xd] = pvVar1;
  pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  param_1[0xe] = pvVar1;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
  memset(param_1 + 0x5f,0,0x90);
  param_1[0x72] = 0;
  param_1[0x71] = x265::SEIDecodedPictureHash::vftable;
  param_1[0x73] = 0x84;
  thunk_FUN_18299d700(param_1 + 0xbb);
  _eh_vector_constructor_iterator_
            (param_1 + 0xbf,0xb0,0x22,(_func_void_void_ptr *)&LAB_180017125,
             (_func_void_void_ptr *)&LAB_1800200a9);
  thunk_FUN_1829ba6d0(param_1 + 0x3ab);
  thunk_FUN_1829ba6d0(param_1 + 0x422);
  param_1[0x499] = 0;
  param_1[0x49a] = 0;
  param_1[0x49b] = 0;
  *(undefined4 *)(param_1 + 0x4a7) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a1));
  InitializeConditionVariable((PCONDITION_VARIABLE)(param_1 + 0x4a6));
  param_1[0x4a8] = 0;
  param_1[0x4a9] = 0;
  thunk_FUN_182d47ff0(param_1 + 0x4aa);
  uVar2 = thunk_FUN_18299c7f0();
  param_1[0xad] = uVar2;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  *(undefined1 *)((longlong)param_1 + 0x7d) = 1;
  param_1[0xae] = 0;
  *(undefined4 *)((longlong)param_1 + 0x524) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0xffffffff;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0x14] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  memset(param_1 + 0x1a,0,0x2b8);
  return param_1;
}


