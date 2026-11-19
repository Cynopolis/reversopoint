// FUN_181325900 @ 181325900  size=1127
// caller of 0x181325340 site@18132593c

undefined8
FUN_181325900(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,char param_5)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  float *pfVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong *plVar19;
  float fVar20;
  int local_b8 [2];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 *local_78;
  uint uStack_70;
  longlong local_68;
  
  thunk_FUN_181325340();
  if (*param_4 != param_4[1]) {
    param_4[1] = *param_4;
  }
  fVar9 = DAT_183239420;
  fVar8 = DAT_1832224d8;
  plVar18 = (longlong *)**(longlong **)(param_1 + 0x30);
  if (plVar18 != *(longlong **)(param_1 + 0x30)) {
    plVar19 = (longlong *)(param_1 + 0x50);
    do {
      local_b8[0] = *(int *)((longlong)plVar18 + 0x1c);
      puVar4 = (undefined8 *)*plVar19;
      puVar11 = (undefined8 *)puVar4[1];
      cVar1 = *(char *)((longlong)puVar11 + 0x19);
      puVar13 = puVar4;
      puVar16 = puVar11;
      cVar2 = cVar1;
      while (cVar2 == '\0') {
        if (*(int *)((longlong)puVar16 + 0x1c) < local_b8[0]) {
          puVar15 = (undefined8 *)puVar16[2];
          puVar16 = puVar13;
        }
        else {
          puVar15 = (undefined8 *)*puVar16;
        }
        puVar13 = puVar16;
        puVar16 = puVar15;
        cVar2 = *(char *)((longlong)puVar15 + 0x19);
      }
      if (((*(char *)((longlong)puVar13 + 0x19) == '\0') &&
          (*(int *)((longlong)puVar13 + 0x1c) <= local_b8[0])) && (puVar13 != puVar4)) {
        uStack_70 = 0;
        puVar13 = puVar4;
        local_78 = puVar11;
        while (puVar16 = puVar11, cVar1 == '\0') {
          bVar6 = local_b8[0] <= *(int *)((longlong)puVar16 + 0x1c);
          if (bVar6) {
            puVar11 = (undefined8 *)*puVar16;
            puVar13 = puVar16;
          }
          else {
            puVar11 = (undefined8 *)puVar16[2];
          }
          uStack_70 = (uint)bVar6;
          cVar1 = *(char *)((longlong)puVar11 + 0x19);
          local_78 = puVar16;
        }
        if ((*(char *)((longlong)puVar13 + 0x19) != '\0') ||
           (local_b8[0] < *(int *)((longlong)puVar13 + 0x1c))) {
          if (*(longlong *)(param_1 + 0x58) == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_1811dfd70();
          }
          local_88 = 0;
          local_90 = plVar19;
          plVar12 = (longlong *)thunk_FUN_183196718(0x30);
          *(int *)((longlong)plVar12 + 0x1c) = local_b8[0];
          plVar12[4] = 0;
          *(undefined4 *)(plVar12 + 5) = 0;
          *plVar12 = (longlong)puVar4;
          plVar12[1] = (longlong)puVar4;
          plVar12[2] = (longlong)puVar4;
          *(undefined2 *)(plVar12 + 3) = 0;
          local_88 = 0;
          puVar13 = (undefined8 *)thunk_FUN_18131c780(plVar19,&local_78);
        }
        local_a0 = puVar13[4];
        uVar3 = *(undefined4 *)(puVar13 + 5);
        puVar4 = *(undefined8 **)(param_1 + 0x40);
        cVar2 = *(char *)((longlong)puVar4[1] + 0x19);
        puVar11 = puVar4;
        puVar13 = (undefined8 *)puVar4[1];
        while (cVar2 == '\0') {
          if (*(int *)((longlong)puVar13 + 0x1c) < local_b8[0]) {
            puVar16 = (undefined8 *)puVar13[2];
            puVar13 = puVar11;
          }
          else {
            puVar16 = (undefined8 *)*puVar13;
          }
          puVar11 = puVar13;
          puVar13 = puVar16;
          cVar2 = *(char *)((longlong)puVar16 + 0x19);
        }
        fVar20 = fVar9;
        if (((*(char *)((longlong)puVar11 + 0x19) == '\0') &&
            (*(int *)((longlong)puVar11 + 0x1c) <= local_b8[0])) && (puVar11 != puVar4)) {
          pfVar14 = (float *)thunk_FUN_181318940(param_1 + 0x40,local_b8);
          fVar20 = *pfVar14;
        }
        if (0.0 < fVar20 - (*(float *)(param_1 + 0xd8) - fVar8)) {
          local_b0 = (undefined4)local_a0;
          local_ac = local_a0._4_4_;
          puVar5 = (undefined4 *)param_4[1];
          local_a8 = uVar3;
          if (puVar5 == (undefined4 *)param_4[2]) {
            thunk_FUN_18130cbe0(param_4,puVar5,&local_b0);
          }
          else {
            *puVar5 = (undefined4)local_a0;
            puVar5[1] = local_a0._4_4_;
            puVar5[2] = uVar3;
            param_4[1] = param_4[1] + 0xc;
          }
        }
      }
      plVar12 = (longlong *)plVar18[2];
      if (*(char *)((longlong)plVar12 + 0x19) == '\0') {
        cVar2 = *(char *)(*plVar12 + 0x19);
        plVar18 = plVar12;
        plVar12 = (longlong *)*plVar12;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*plVar12 + 0x19);
          plVar18 = plVar12;
          plVar12 = (longlong *)*plVar12;
        }
      }
      else {
        cVar2 = *(char *)(plVar18[1] + 0x19);
        plVar10 = (longlong *)plVar18[1];
        plVar12 = plVar18;
        while ((plVar18 = plVar10, cVar2 == '\0' && (plVar12 == (longlong *)plVar18[2]))) {
          cVar2 = *(char *)(plVar18[1] + 0x19);
          plVar10 = (longlong *)plVar18[1];
          plVar12 = plVar18;
        }
      }
    } while (plVar18 != *(longlong **)(param_1 + 0x30));
  }
  if (param_5 == '\0') {
    thunk_FUN_181316a30(&local_90,param_2);
    thunk_FUN_181316a30(&local_78,param_3);
    puVar4 = local_78;
    plVar18 = local_90;
    if (*param_2 != param_2[1]) {
      param_2[1] = *param_2;
    }
    if (*param_3 != param_3[1]) {
      param_3[1] = *param_3;
    }
    plVar19 = (longlong *)**(longlong **)(param_1 + 0x30);
    if (plVar19 != *(longlong **)(param_1 + 0x30)) {
      do {
        lVar7 = plVar19[4];
        if ((longlong *)param_2[1] == (longlong *)param_2[2]) {
          thunk_FUN_18130ca00(param_2);
        }
        else {
          *(longlong *)param_2[1] = plVar18[*(int *)((longlong)plVar19 + 0x1c)];
          param_2[1] = param_2[1] + 8;
        }
        if ((undefined8 *)param_3[1] == (undefined8 *)param_3[2]) {
          thunk_FUN_18130ca00(param_3);
        }
        else {
          *(undefined8 *)param_3[1] = puVar4[(int)lVar7];
          param_3[1] = param_3[1] + 8;
        }
        plVar12 = (longlong *)plVar19[2];
        if (*(char *)((longlong)plVar12 + 0x19) == '\0') {
          cVar2 = *(char *)(*plVar12 + 0x19);
          plVar19 = plVar12;
          plVar12 = (longlong *)*plVar12;
          while (cVar2 == '\0') {
            cVar2 = *(char *)(*plVar12 + 0x19);
            plVar19 = plVar12;
            plVar12 = (longlong *)*plVar12;
          }
        }
        else {
          cVar2 = *(char *)(plVar19[1] + 0x19);
          plVar10 = (longlong *)plVar19[1];
          plVar12 = plVar19;
          while ((plVar19 = plVar10, cVar2 == '\0' && (plVar12 == (longlong *)plVar19[2]))) {
            cVar2 = *(char *)(plVar19[1] + 0x19);
            plVar10 = (longlong *)plVar19[1];
            plVar12 = plVar19;
          }
        }
      } while (plVar19 != *(longlong **)(param_1 + 0x30));
    }
    if (puVar4 != (undefined8 *)0x0) {
      uVar17 = (local_68 - (longlong)puVar4 >> 3) * 8;
      puVar11 = puVar4;
      if (0xfff < uVar17) {
        uVar17 = uVar17 + 0x27;
        puVar11 = (undefined8 *)puVar4[-1];
        if (0x1f < (ulonglong)((longlong)puVar4 + (-8 - (longlong)puVar11))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(puVar11,uVar17);
    }
    if (plVar18 != (longlong *)0x0) {
      uVar17 = local_80 - (longlong)plVar18 & 0xfffffffffffffff8;
      plVar19 = plVar18;
      if (0xfff < uVar17) {
        uVar17 = uVar17 + 0x27;
        plVar19 = (longlong *)plVar18[-1];
        if (0x1f < (ulonglong)((longlong)plVar18 + (-8 - (longlong)plVar19))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(plVar19,uVar17);
    }
  }
  return 0;
}


