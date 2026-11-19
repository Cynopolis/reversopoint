/* 0x182d39f60 size=0x64c
   SetEvent
*/


void FUN_182d39f60(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  uint uVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  bool bVar16;
  float fVar17;
  uint local_res8 [2];
  int local_res10;
  uint local_res18;
  uint local_res20;
  undefined8 in_stack_ffffffffffffff88;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  
  uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  lVar11 = (longlong)param_2;
  lVar2 = ((undefined8 *)param_1[1])[1];
  local_res20 = *(int *)(*(longlong *)**(undefined8 **)param_1[1] + 0x2c) * param_2;
  uVar15 = (ulonglong)local_res20;
  local_res10 = param_2;
  if (*(int *)(*param_1 + 0x104) == 4) {
    thunk_FUN_182d37f30(param_1,param_2);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar11 * 0x38 + *(longlong *)(param_1[1] + 0x42c8));
  EnterCriticalSection(lpCriticalSection);
  lpCriticalSection[1].LockCount = 1;
  WakeAllConditionVariable((PCONDITION_VARIABLE)(lpCriticalSection + 1));
  LeaveCriticalSection(lpCriticalSection);
  if (*(int *)(*param_1 + 0x20) != 0) {
    uVar10 = *(int *)(lVar2 + 0x30) - (int)param_1[4];
    lVar8 = *(longlong *)(param_1[1] + 0x10);
    uVar14 = *(uint *)(lVar11 * 0x2748 + param_1[0x10]);
    uVar18 = CONCAT44(uVar20,uVar14);
    lVar7 = FUN_182d38740(*(longlong *)(*(longlong *)(lVar8 + 0x58) + uVar15 * 8) +
                          *(longlong *)(lVar8 + 0x18),
                          *(longlong *)(*(longlong *)(lVar2 + 0x58) + uVar15 * 8) +
                          *(longlong *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x38),uVar10,uVar18);
    uVar20 = (undefined4)((ulonglong)uVar18 >> 0x20);
    *(longlong *)(param_1[2] + 0x3d8) = *(longlong *)(param_1[2] + 0x3d8) + lVar7;
    if (*(int *)(*param_1 + 0x3c) != 0) {
      local_res8[0] = uVar14 >> ((byte)*(undefined4 *)((longlong)param_1 + 0x1c) & 0x1f);
      local_res18 = uVar10 >> ((byte)(int)param_1[3] & 0x1f);
      uVar18 = *(undefined8 *)(lVar2 + 0x40);
      uVar19 = CONCAT44(uVar20,local_res8[0]);
      lVar7 = FUN_182d38740(*(longlong *)(*(longlong *)(lVar8 + 0x60) + uVar15 * 8) +
                            *(longlong *)(lVar8 + 0x20),
                            *(longlong *)(*(longlong *)(lVar2 + 0x60) + uVar15 * 8) +
                            *(longlong *)(lVar2 + 0x20),uVar18,local_res18,uVar19);
      uVar19 = CONCAT44((int)((ulonglong)uVar19 >> 0x20),local_res8[0]);
      lVar8 = FUN_182d38740(*(longlong *)(*(longlong *)(lVar8 + 0x60) + uVar15 * 8) +
                            *(longlong *)(lVar8 + 0x28),
                            *(longlong *)(*(longlong *)(lVar2 + 0x60) + uVar15 * 8) +
                            *(longlong *)(lVar2 + 0x28),uVar18,local_res18,uVar19);
      uVar20 = (undefined4)((ulonglong)uVar19 >> 0x20);
      *(longlong *)(param_1[2] + 0x3e0) = *(longlong *)(param_1[2] + 0x3e0) + lVar7;
      *(longlong *)(param_1[2] + 1000) = *(longlong *)(param_1[2] + 1000) + lVar8;
    }
  }
  lVar8 = *param_1;
  if ((*(int *)(lVar8 + 0x24) != 0) && (param_1[0xf] != 0)) {
    lVar7 = *(longlong *)(lVar2 + 0x18);
    lVar3 = *(longlong *)(lVar2 + 0x38);
    iVar12 = *(int *)(lVar8 + 0xb4) * local_res10;
    bVar16 = local_res10 != 0;
    lVar4 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + 0x18);
    lVar5 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + 0x38);
    iVar6 = 0;
    if (local_res10 != (int)param_1[5] + -1) {
      iVar6 = 4;
    }
    uVar10 = (local_res10 + 1) * *(int *)(lVar8 + 0xb4) - iVar6;
    uVar14 = *(uint *)(lVar8 + 0x4c);
    if (uVar10 < *(uint *)(lVar8 + 0x4c)) {
      uVar14 = uVar10;
    }
    FUN_1801ec8c0();
    iVar6 = -6;
    if (local_res10 == 0) {
      iVar6 = 2;
    }
    uVar10 = (iVar12 - (-(uint)bVar16 & 4)) + iVar6;
    fVar17 = (float)FUN_182d37cc0((ulonglong)uVar10 * lVar3 + lVar7 + 2,lVar3,
                                  lVar4 + 2 + (ulonglong)uVar10 * lVar5,lVar5,
                                  CONCAT44(uVar20,*(int *)(*param_1 + 0x48) + -2),uVar14 - uVar10,
                                  param_1[0xf],local_res8);
    uVar15 = (ulonglong)local_res20;
    *(double *)(param_1[2] + 0x3f0) = (double)fVar17 + *(double *)(param_1[2] + 0x3f0);
    *(int *)(param_1[2] + 0x400) = *(int *)(param_1[2] + 0x400) + local_res8[0];
    param_2 = local_res10;
  }
  lVar8 = *param_1;
  if (*(int *)(lVar8 + 0x2b4) == 1) {
    iVar6 = *(int *)(lVar8 + 0x80);
    if (iVar6 == 1) {
      uVar18 = *(undefined8 *)(lVar2 + 0x38);
      uVar14 = *(uint *)(lVar2 + 0x30);
      uVar10 = *(uint *)(lVar11 * 0x2748 + param_1[0x10]);
      if (param_2 == 0) {
        thunk_FUN_182d3bcb0(param_1[2] + 0x404);
      }
      thunk_FUN_182d3c7f0(param_1[2] + 0x404,
                          *(longlong *)(*(longlong *)(lVar2 + 0x58) + uVar15 * 8) +
                          *(longlong *)(lVar2 + 0x18),uVar14,uVar10,uVar18);
      if (*(int *)(*param_1 + 0x3c) != 0) {
        if (param_2 == 0) {
          thunk_FUN_182d3bcb0(param_1[2] + 0x45c);
          thunk_FUN_182d3bcb0(param_1[2] + 0x4b4);
        }
        uVar18 = *(undefined8 *)(lVar2 + 0x40);
        uVar14 = uVar14 >> ((byte)(int)param_1[3] & 0x1f);
        uVar10 = uVar10 >> ((byte)*(undefined4 *)((longlong)param_1 + 0x1c) & 0x1f);
        thunk_FUN_182d3c7f0(param_1[2] + 0x45c,
                            *(longlong *)(*(longlong *)(lVar2 + 0x60) + uVar15 * 8) +
                            *(longlong *)(lVar2 + 0x20),uVar14,uVar10,uVar18);
        thunk_FUN_182d3c7f0(param_1[2] + 0x4b4,
                            *(longlong *)(*(longlong *)(lVar2 + 0x60) + uVar15 * 8) +
                            *(longlong *)(lVar2 + 0x28),uVar14,uVar10,uVar18);
      }
    }
    else if (iVar6 == 2) {
      uVar18 = *(undefined8 *)(lVar2 + 0x38);
      uVar14 = *(uint *)(lVar2 + 0x30);
      uVar10 = *(uint *)(lVar11 * 0x2748 + param_1[0x10]);
      if (param_2 == 0) {
        *(undefined4 *)(param_1[2] + 0x50c) = 0xffff;
      }
      thunk_FUN_182d3de00(*(longlong *)(*(longlong *)(lVar2 + 0x58) + uVar15 * 8) +
                          *(longlong *)(lVar2 + 0x18),param_1[2] + 0x50c,uVar10,uVar14,uVar18);
      if (*(int *)(*param_1 + 0x3c) != 0) {
        uVar18 = *(undefined8 *)(lVar2 + 0x40);
        uVar14 = uVar14 >> ((byte)(int)param_1[3] & 0x1f);
        uVar20 = *(undefined4 *)((longlong)param_1 + 0x1c);
        *(undefined4 *)(param_1[2] + 0x514) = 0xffff;
        uVar10 = uVar10 >> ((byte)uVar20 & 0x1f);
        *(undefined4 *)(param_1[2] + 0x510) = 0xffff;
        thunk_FUN_182d3de00(*(longlong *)(*(longlong *)(lVar2 + 0x60) + uVar15 * 8) +
                            *(longlong *)(lVar2 + 0x20),param_1[2] + 0x510,uVar10,uVar14,uVar18);
        thunk_FUN_182d3de00(*(longlong *)(*(longlong *)(lVar2 + 0x60) + uVar15 * 8) +
                            *(longlong *)(lVar2 + 0x28),param_1[2] + 0x514,uVar10,uVar14,uVar18);
      }
    }
    else if (iVar6 == 3) {
      uVar14 = *(uint *)(lVar2 + 0x30);
      uVar10 = *(uint *)(lVar8 + 0xb4);
      uVar13 = *(uint *)(lVar11 * 0x2748 + param_1[0x10]);
      uVar18 = *(undefined8 *)(lVar2 + 0x38);
      if (param_2 == 0) {
        *(undefined4 *)(param_1[2] + 0x518) = 0;
      }
      thunk_FUN_182d3ded0(*(undefined8 *)(lVar2 + 0x18),param_1[2] + 0x518,uVar13,uVar14,uVar18,
                          param_2,uVar10);
      if (*(int *)(*param_1 + 0x3c) != 0) {
        uVar18 = *(undefined8 *)(lVar2 + 0x40);
        uVar14 = uVar14 >> ((byte)(int)param_1[3] & 0x1f);
        bVar9 = (byte)*(undefined4 *)((longlong)param_1 + 0x1c);
        uVar13 = uVar13 >> (bVar9 & 0x1f);
        uVar10 = uVar10 >> (bVar9 & 0x1f);
        if (param_2 == 0) {
          *(undefined4 *)(param_1[2] + 0x520) = 0;
          *(undefined4 *)(param_1[2] + 0x51c) = 0;
        }
        thunk_FUN_182d3ded0(*(undefined8 *)(lVar2 + 0x20),param_1[2] + 0x51c,uVar13,uVar14,uVar18,
                            param_2,uVar10);
        thunk_FUN_182d3ded0(*(undefined8 *)(lVar2 + 0x28),param_1[2] + 0x520,uVar13,uVar14,uVar18,
                            param_2,uVar10);
      }
    }
  }
  lVar2 = param_1[2];
  LOCK();
  piVar1 = (int *)(lVar2 + 0x80);
  iVar6 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (iVar6 + 1 == *(int *)(lVar2 + 0x8c) * 2) {
    SetEvent(*(HANDLE *)(lVar2 + 0x70));
  }
  return;
}


