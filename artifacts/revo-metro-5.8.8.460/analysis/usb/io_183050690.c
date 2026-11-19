/* 0x183050690 size=0x33a
   CreateEventW
*/


undefined8 * FUN_183050690(undefined8 *param_1,longlong param_2,longlong param_3)

{
  double dVar1;
  undefined1 uVar2;
  HANDLE pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 10;
  *param_1 = x265_12bit::Lookahead::vftable;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  pvVar3 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  param_1[0x15] = pvVar3;
  param_1[0x17] = param_2;
  param_1[1] = param_3;
  param_1[0x18] = 0;
  *(undefined2 *)((longlong)param_1 + 0x146) = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)((longlong)param_1 + 0x143) = 0;
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
  iVar6 = *(int *)(param_2 + 0x4c) / 2 + 7 >> 3;
  *(int *)(param_1 + 0x24) = iVar6;
  iVar5 = *(int *)(param_2 + 0x48) / 2 + 7 >> 3;
  *(int *)((longlong)param_1 + 0x11c) = iVar5;
  iVar4 = iVar5 * iVar6;
  *(int *)(param_1 + 0x25) = iVar4;
  dVar1 = DAT_183239460;
  if ((2 < iVar5) && (2 < iVar6)) {
    iVar4 = iVar4 + ((2 - iVar5) - iVar6) * 2;
  }
  *(int *)((longlong)param_1 + 0x124) = iVar4;
  param_1[0x27] = (dVar1 - *(double *)(param_2 + 0x1a0)) * DAT_183301c08;
  iVar4 = *(int *)(param_2 + 0x90);
  *(undefined1 *)((longlong)param_1 + 0x141) = 0;
  *(int *)(param_1 + 0x23) = -iVar4;
  iVar4 = *(int *)(param_2 + 0xa4);
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  *(int *)(param_1 + 0x1a) = iVar4;
  if ((((*(int *)(param_2 + 0x1c4) != 0) || (*(int *)(param_2 + 0x114) != 0)) ||
      (*(int *)(param_2 + 0x118) != 0)) || (uVar2 = 0, *(int *)(param_2 + 0x2e0) != 0)) {
    uVar2 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x142) = uVar2;
  if ((param_3 == 0) || (uVar2 = 1, *(int *)(param_2 + 0x98) != 2)) {
    uVar2 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x144) = uVar2;
  *(undefined1 *)((longlong)param_1 + 0x145) = uVar2;
  if ((*(int *)(param_2 + 0xa8) != 0) && (param_3 == 0)) {
    thunk_FUN_182dc1d60(param_2,&DAT_18393797c,1,"No pools found; disabling lookahead-slices\n");
    *(undefined4 *)(param_1[0x17] + 0xa8) = 0;
  }
  if ((*(int *)(param_1[0x17] + 0xa8) != 0) && (*(int *)(param_1[0x17] + 0x4c) < 0x2d0)) {
    thunk_FUN_182dc1d60(param_2,&DAT_18393797c,1,
                        "Source height < 720p; disabling lookahead-slices\n");
    *(undefined4 *)(param_1[0x17] + 0xa8) = 0;
  }
  iVar4 = *(int *)(param_1[0x17] + 0xa8);
  if (iVar4 < 2) {
    *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)((longlong)param_1 + 300) = 1;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x24);
    iVar4 = iVar5 / iVar4;
    iVar6 = 10;
    if (10 < iVar4) {
      iVar6 = iVar4;
    }
    iVar4 = iVar5;
    if (iVar6 < iVar5) {
      iVar4 = iVar6;
    }
    *(int *)(param_1 + 0x26) = iVar4;
    *(int *)((longlong)param_1 + 300) = iVar5 / iVar4;
    *(int *)(param_1[0x17] + 0xa8) = iVar5 / iVar4;
  }
  if ((*(int *)(param_2 + 0x368) != 0) &&
     (iVar4 = (*(int *)(param_2 + 0xa4) - *(int *)(param_2 + 0x94)) + -2,
     iVar4 < *(int *)(param_2 + 0x368))) {
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    *(int *)(param_2 + 0x368) = iVar4;
    thunk_FUN_182dc1d60(param_2,&DAT_18393797c,1,
                        "Gop-lookahead cannot be greater than (rc-lookahead - length of the mini-gop); Clipping gop-lookahead to %d\n"
                        ,iVar4);
  }
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  return param_1;
}


