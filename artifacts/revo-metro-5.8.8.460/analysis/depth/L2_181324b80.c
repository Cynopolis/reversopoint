// FUN_181324b80 @ 181324b80  size=708
// caller of 0x181325900 site@181324d8f

undefined4 FUN_181324b80(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 *local_58;
  uint uStack_50;
  longlong local_48;
  
  puVar11 = (undefined8 *)(param_1 + 0x40);
  plVar1 = (longlong *)(param_1 + 0x30);
  thunk_FUN_18131efd0(plVar1);
  thunk_FUN_18131f060(puVar11);
  uVar13 = param_2[1] - *param_2 >> 3;
  uVar7 = param_3[1] - *param_3 >> 3;
  if (uVar7 <= uVar13) {
    uVar13 = uVar7;
  }
  iVar12 = 0;
  if (0 < (int)uVar13) {
    do {
      puVar3 = (undefined8 *)*plVar1;
      puVar10 = (undefined8 *)puVar3[1];
      uStack_50 = 0;
      cVar2 = *(char *)((longlong)puVar10 + 0x19);
      puVar9 = puVar3;
      local_58 = puVar10;
      while (puVar5 = puVar10, cVar2 == '\0') {
        bVar4 = iVar12 <= *(int *)((longlong)puVar5 + 0x1c);
        if (bVar4) {
          puVar10 = (undefined8 *)*puVar5;
          puVar9 = puVar5;
        }
        else {
          puVar10 = (undefined8 *)puVar5[2];
        }
        uStack_50 = (uint)bVar4;
        cVar2 = *(char *)((longlong)puVar10 + 0x19);
        local_58 = puVar5;
      }
      if ((*(char *)((longlong)puVar9 + 0x19) != '\0') ||
         (iVar12 < *(int *)((longlong)puVar9 + 0x1c))) {
        if (*(longlong *)(param_1 + 0x38) == 0x666666666666666) goto LAB_181324e41;
        plVar8 = (longlong *)thunk_FUN_183196718();
        *(int *)((longlong)plVar8 + 0x1c) = iVar12;
        *(undefined4 *)(plVar8 + 4) = 0;
        *plVar8 = (longlong)puVar3;
        plVar8[1] = (longlong)puVar3;
        plVar8[2] = (longlong)puVar3;
        *(undefined2 *)(plVar8 + 3) = 0;
        puVar9 = (undefined8 *)thunk_FUN_18131be80(plVar1,&local_58,plVar8);
      }
      *(int *)(puVar9 + 4) = iVar12;
      puVar3 = (undefined8 *)*puVar11;
      puVar10 = (undefined8 *)puVar3[1];
      uStack_50 = 0;
      cVar2 = *(char *)((longlong)puVar10 + 0x19);
      puVar9 = puVar3;
      local_58 = puVar10;
      while (puVar5 = puVar10, cVar2 == '\0') {
        bVar4 = iVar12 <= *(int *)((longlong)puVar5 + 0x1c);
        if (bVar4) {
          puVar10 = (undefined8 *)*puVar5;
          puVar9 = puVar5;
        }
        else {
          puVar10 = (undefined8 *)puVar5[2];
        }
        uStack_50 = (uint)bVar4;
        cVar2 = *(char *)((longlong)puVar10 + 0x19);
        local_58 = puVar5;
      }
      if ((*(char *)((longlong)puVar9 + 0x19) != '\0') ||
         (iVar12 < *(int *)((longlong)puVar9 + 0x1c))) {
        if (*(longlong *)(param_1 + 0x48) == 0x666666666666666) {
LAB_181324e41:
                    /* WARNING: Subroutine does not return */
          thunk_FUN_1811dfd70();
        }
        local_70 = 0;
        local_78 = puVar11;
        puVar10 = (undefined8 *)thunk_FUN_183196718();
        *(int *)((longlong)puVar10 + 0x1c) = iVar12;
        *(undefined4 *)(puVar10 + 4) = 0;
        *puVar10 = puVar3;
        puVar10[1] = puVar3;
        puVar10[2] = puVar3;
        *(undefined2 *)(puVar10 + 3) = 0;
        local_70 = 0;
        puVar9 = (undefined8 *)thunk_FUN_18131c180(puVar11,&local_58,puVar10);
      }
      *(undefined4 *)(puVar9 + 4) = 0x3f800000;
      iVar12 = iVar12 + 1;
    } while (iVar12 < (int)uVar13);
  }
  thunk_FUN_181316a30(&local_78,param_2);
  thunk_FUN_181316a30(&local_58,param_3);
  uVar6 = thunk_FUN_181325900(param_1,&local_78,&local_58,param_4,1);
  if (local_58 != (undefined8 *)0x0) {
    uVar13 = (local_48 - (longlong)local_58 >> 3) * 8;
    puVar11 = local_58;
    if (0xfff < uVar13) {
      uVar13 = uVar13 + 0x27;
      puVar11 = (undefined8 *)local_58[-1];
      if (0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)puVar11))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(puVar11,uVar13);
  }
  if (local_78 != (undefined8 *)0x0) {
    uVar13 = local_68 - (longlong)local_78 & 0xfffffffffffffff8;
    puVar11 = local_78;
    if (0xfff < uVar13) {
      uVar13 = uVar13 + 0x27;
      puVar11 = (undefined8 *)local_78[-1];
      if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)puVar11))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(puVar11,uVar13);
  }
  return uVar6;
}


