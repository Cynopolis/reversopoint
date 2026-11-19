// FUN_181325340 @ 181325340  size=618
// markers: ReconstructPoint failed  (string @1832575a0, site @18132550f)

undefined8 FUN_181325340(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double local_res8;
  double local_res20;
  double local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 *local_88;
  uint uStack_80;
  
  plVar1 = (longlong *)(param_1 + 0x50);
  thunk_FUN_18131f0f0(plVar1);
  plVar14 = (longlong *)**(longlong **)(param_1 + 0x30);
  if (plVar14 != *(longlong **)(param_1 + 0x30)) {
    do {
      iVar4 = *(int *)((longlong)plVar14 + 0x1c);
      lVar15 = (longlong)iVar4;
      iVar5 = (int)plVar14[4];
      lVar6 = *param_2;
      lVar2 = lVar6 + lVar15 * 8;
      if (*(char *)(param_1 + 0x89) == '\0') {
        fVar16 = *(float *)(lVar2 + 4) - *(float *)(*param_3 + 4 + (longlong)iVar5 * 8);
      }
      else {
        fVar16 = *(float *)(lVar6 + lVar15 * 8) - *(float *)(*param_3 + (longlong)iVar5 * 8);
      }
      thunk_FUN_181325650(param_1,param_1 + 0x8c,(double)*(float *)(lVar6 + lVar15 * 8),
                          (double)*(float *)(lVar2 + 4),(double)fVar16,&local_a8,&local_res20,
                          &local_res8);
      if (NAN(local_res8)) {
        thunk_FUN_18317f440("ReconstructPoint failed, (%d,%d)",iVar4,iVar5);
      }
      else {
        fVar18 = (float)local_res8;
        fVar17 = (float)local_res20;
        fVar16 = (float)local_a8;
        puVar7 = (undefined8 *)*plVar1;
        puVar11 = (undefined8 *)puVar7[1];
        uStack_80 = 0;
        cVar3 = *(char *)((longlong)puVar11 + 0x19);
        puVar13 = puVar7;
        local_88 = puVar11;
        while (puVar9 = puVar11, cVar3 == '\0') {
          bVar8 = iVar4 <= *(int *)((longlong)puVar9 + 0x1c);
          if (bVar8) {
            puVar11 = (undefined8 *)*puVar9;
            puVar13 = puVar9;
          }
          else {
            puVar11 = (undefined8 *)puVar9[2];
          }
          uStack_80 = (uint)bVar8;
          cVar3 = *(char *)((longlong)puVar11 + 0x19);
          local_88 = puVar9;
        }
        if ((*(char *)((longlong)puVar13 + 0x19) != '\0') ||
           (iVar4 < *(int *)((longlong)puVar13 + 0x1c))) {
          if (*(longlong *)(param_1 + 0x58) == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_1811dfd70();
          }
          local_98 = 0;
          local_a0 = plVar1;
          plVar12 = (longlong *)thunk_FUN_183196718();
          *(int *)((longlong)plVar12 + 0x1c) = iVar4;
          plVar12[4] = 0;
          *(undefined4 *)(plVar12 + 5) = 0;
          *plVar12 = (longlong)puVar7;
          plVar12[1] = (longlong)puVar7;
          plVar12[2] = (longlong)puVar7;
          *(undefined2 *)(plVar12 + 3) = 0;
          local_98 = 0;
          puVar13 = (undefined8 *)thunk_FUN_18131c780(plVar1,&local_88,plVar12);
        }
        puVar13[4] = CONCAT44(fVar17,fVar16);
        *(float *)(puVar13 + 5) = fVar18;
      }
      plVar12 = (longlong *)plVar14[2];
      if (*(char *)((longlong)plVar12 + 0x19) == '\0') {
        cVar3 = *(char *)(*plVar12 + 0x19);
        plVar14 = plVar12;
        plVar12 = (longlong *)*plVar12;
        while (cVar3 == '\0') {
          cVar3 = *(char *)(*plVar12 + 0x19);
          plVar14 = plVar12;
          plVar12 = (longlong *)*plVar12;
        }
      }
      else {
        cVar3 = *(char *)(plVar14[1] + 0x19);
        plVar10 = (longlong *)plVar14[1];
        plVar12 = plVar14;
        while ((plVar14 = plVar10, cVar3 == '\0' && (plVar12 == (longlong *)plVar14[2]))) {
          cVar3 = *(char *)(plVar14[1] + 0x19);
          plVar10 = (longlong *)plVar14[1];
          plVar12 = plVar14;
        }
      }
    } while (plVar14 != *(longlong **)(param_1 + 0x30));
  }
  return 0;
}


