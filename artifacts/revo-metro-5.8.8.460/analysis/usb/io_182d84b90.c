/* 0x182d84b90 size=0x34b
   CreateEventW
*/


undefined8 * FUN_182d84b90(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined1 uVar1;
  HANDLE pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 10;
  *(undefined2 *)(param_1 + 4) = 0;
  *param_1 = x265::Lookahead::vftable;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  param_1[0x15] = pvVar2;
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
  iVar5 = *(int *)(param_2 + 0x4c) / 2 + 7 >> 3;
  *(int *)(param_1 + 0x24) = iVar5;
  iVar4 = *(int *)(param_2 + 0x48) / 2 + 7 >> 3;
  *(int *)((longlong)param_1 + 0x11c) = iVar4;
  iVar3 = iVar4 * iVar5;
  *(int *)(param_1 + 0x25) = iVar3;
  if ((2 < iVar4) && (2 < iVar5)) {
    iVar3 = iVar3 + ((2 - iVar4) - iVar5) * 2;
  }
  *(int *)((longlong)param_1 + 0x124) = iVar3;
  param_1[0x27] = (DAT_183239460 - *(double *)(param_2 + 0x1a0)) * DAT_183301c08;
  *(int *)(param_1 + 0x23) = -*(int *)(param_2 + 0x90);
  *(undefined1 *)((longlong)param_1 + 0x141) = 0;
  iVar3 = *(int *)(param_2 + 0xa4);
  if (iVar3 < 1) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x1a) = iVar3;
  if ((((*(int *)(param_2 + 0x1c4) != 0) || (*(int *)(param_2 + 0x114) != 0)) ||
      (*(int *)(param_2 + 0x118) != 0)) || (uVar1 = 0, *(int *)(param_2 + 0x2e0) != 0)) {
    uVar1 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x142) = uVar1;
  if ((param_3 == 0) || (uVar1 = 1, *(int *)(param_2 + 0x98) != 2)) {
    uVar1 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x144) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x145) = uVar1;
  if ((*(int *)(param_2 + 0xa8) != 0) && (param_3 == 0)) {
    thunk_FUN_18299c2b0(param_2,&DAT_18393797c,1,"No pools found; disabling lookahead-slices\n");
    *(undefined4 *)(param_1[0x17] + 0xa8) = 0;
  }
  if ((*(int *)(param_1[0x17] + 0xa8) != 0) && (*(int *)(param_1[0x17] + 0x4c) < 0x2d0)) {
    thunk_FUN_18299c2b0(param_2,&DAT_18393797c,1,
                        "Source height < 720p; disabling lookahead-slices\n");
    *(undefined4 *)(param_1[0x17] + 0xa8) = 0;
  }
  iVar3 = *(int *)(param_1[0x17] + 0xa8);
  if (iVar3 < 2) {
    *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)((longlong)param_1 + 300) = 1;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x24);
    iVar3 = iVar4 / iVar3;
    iVar5 = 10;
    if (10 < iVar3) {
      iVar5 = iVar3;
    }
    iVar3 = iVar4;
    if (iVar5 < iVar4) {
      iVar3 = iVar5;
    }
    *(int *)(param_1 + 0x26) = iVar3;
    *(int *)((longlong)param_1 + 300) = iVar4 / iVar3;
    *(int *)(param_1[0x17] + 0xa8) = iVar4 / iVar3;
  }
  if ((*(int *)(param_2 + 0x368) != 0) &&
     (iVar3 = (*(int *)(param_2 + 0xa4) - *(int *)(param_2 + 0x94)) + -2,
     iVar3 < *(int *)(param_2 + 0x368))) {
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    *(int *)(param_2 + 0x368) = iVar3;
    thunk_FUN_18299c2b0(param_2,&DAT_18393797c,1,
                        "Gop-lookahead cannot be greater than (rc-lookahead - length of the mini-gop); Clipping gop-lookahead to %d\n"
                        ,iVar3);
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


