/* 0x181f6d750 size=0x251
   CloseHandle
*/


int * FUN_181f6d750(undefined8 param_1,int param_2,longlong param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  HANDLE pvVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 auStackY_58 [8];
  int *local_28;
  
  puVar5 = auStackY_58;
  for (lVar4 = 0x14; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  bVar1 = false;
  if (*(int *)(param_3 + 0x14) < 0x40) {
    return (int *)0x0;
  }
  local_28 = (int *)FUN_181f6ce20(param_3);
  if (local_28 != (int *)0x0) {
    iVar2 = FUN_181f6cf60(param_1,local_28,param_4);
    if (iVar2 != 0) {
      return local_28;
    }
    thunk_FUN_181f68b10(local_28);
    local_28 = (int *)0x0;
  }
  iVar2 = FUN_181f6c090(param_2);
  if ((iVar2 != 0) && (0x3ff < *(int *)(param_3 + 0x14))) {
    local_28 = (int *)0x0;
    pvVar3 = (HANDLE)_get_osfhandle(param_2);
    pvVar3 = CreateFileMappingA(pvVar3,(LPSECURITY_ATTRIBUTES)0x0,2,0,0,(LPCSTR)0x0);
    if (pvVar3 != (HANDLE)0x0) {
      local_28 = MapViewOfFile(pvVar3,4,0,0,(longlong)*(int *)(param_3 + 0x14));
      CloseHandle(pvVar3);
    }
  }
  if (local_28 == (int *)0x0) {
    local_28 = malloc((longlong)*(int *)(param_3 + 0x14));
    if (local_28 == (int *)0x0) {
      return (int *)0x0;
    }
    iVar2 = _read(param_2,local_28,*(uint *)(param_3 + 0x14));
    if (iVar2 != *(int *)(param_3 + 0x14)) {
      free(local_28);
      return (int *)0x0;
    }
    bVar1 = true;
  }
  if ((((*local_28 == -0x3fd03fc) && (6 < local_28[1])) &&
      (*(longlong *)(local_28 + 2) == (longlong)*(int *)(param_3 + 0x14))) &&
     (((iVar2 = FUN_181f6d130(local_28), iVar2 != 0 &&
       (iVar2 = FUN_181f6cf60(param_1,local_28,param_4), iVar2 != 0)) &&
      (iVar2 = FUN_181f6c7f0(local_28,param_3), iVar2 != 0)))) {
    if (bVar1) {
      *local_28 = -0x3fd03fb;
    }
  }
  else {
    if (bVar1) {
      free(local_28);
    }
    else {
      UnmapViewOfFile(local_28);
    }
    local_28 = (int *)0x0;
  }
  return local_28;
}


