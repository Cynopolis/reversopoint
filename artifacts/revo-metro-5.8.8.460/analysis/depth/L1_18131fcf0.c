// FUN_18131fcf0 @ 18131fcf0  size=2733
// caller of 0x181325650 site@18132013c

undefined8 FUN_18131fcf0(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  float fVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  float *pfVar16;
  float *pfVar17;
  longlong lVar18;
  undefined8 *puVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float local_208;
  float fStack_204;
  float local_200;
  undefined8 *local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8;
  undefined8 *local_1e0;
  longlong *local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  float local_1b8;
  longlong local_1b0;
  undefined8 *local_1a8;
  undefined8 *puStack_1a0;
  longlong local_198;
  undefined8 *local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  double local_158;
  double local_150;
  double local_148;
  longlong local_140;
  longlong local_138;
  undefined8 local_128;
  float local_120;
  undefined8 local_118;
  float local_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong local_f0;
  longlong lStack_e8;
  longlong local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [136];
  
  puVar19 = param_1 + 0xc;
  local_168 = puVar19;
  thunk_FUN_18131f0f0(puVar19);
  fVar5 = DAT_1832224ec;
  fVar4 = DAT_1832224d8;
  local_1d8 = *(longlong **)param_1[6];
  if (local_1d8 != (longlong *)param_1[6]) {
    do {
      plVar11 = local_1d8;
      puVar9 = (undefined8 *)param_1[10];
      local_188 = puVar9;
      if (*(char *)((longlong)puVar9[1] + 0x19) == '\0') {
        puVar7 = (undefined8 *)puVar9[1];
        do {
          if (*(int *)((longlong)puVar7 + 0x1c) < *(int *)((longlong)local_1d8 + 0x1c)) {
            puVar8 = (undefined8 *)puVar7[2];
          }
          else {
            puVar8 = (undefined8 *)*puVar7;
            local_188 = puVar7;
          }
          puVar7 = puVar8;
        } while (*(char *)((longlong)puVar8 + 0x19) == '\0');
      }
      if (((*(char *)((longlong)local_188 + 0x19) == '\0') &&
          (*(int *)((longlong)local_188 + 0x1c) <= *(int *)((longlong)local_1d8 + 0x1c))) &&
         (local_188 != puVar9)) {
        local_f0 = 0;
        lStack_e8 = 0;
        local_e0 = 0;
        local_108 = 0;
        lStack_100 = 0;
        local_f8 = 0;
        local_1f8 = (undefined8 *)*param_1;
        local_1e8 = param_1[2];
        uStack_1f0._0_4_ = *(undefined4 *)(param_1 + 1);
        thunk_FUN_1813221b0(param_1,&local_1f8,
                            *param_2 + (longlong)*(int *)((longlong)local_1d8 + 0x1c) * 8,0x14,
                            &local_f0);
        local_1f8 = (undefined8 *)param_1[3];
        local_1e8 = param_1[5];
        uStack_1f0 = (undefined8 *)CONCAT44(uStack_1f0._4_4_,*(undefined4 *)(param_1 + 4));
        thunk_FUN_1813221b0(param_1,&local_1f8,*param_3 + (longlong)(int)plVar11[4] * 8,0x14,
                            &local_108);
        lVar14 = lStack_e8;
        lVar18 = local_f0;
        lVar12 = local_108;
        local_200 = -1.0;
        local_180 = lStack_e8;
        local_178 = local_f0;
        uVar15 = lStack_e8 - local_f0 >> 3;
        local_1b0 = local_108;
        if (uVar15 == lStack_100 - local_108 >> 3) {
          local_1a8 = (undefined8 *)0x0;
          puStack_1a0 = (undefined8 *)0x0;
          puVar19 = (undefined8 *)0x0;
          local_1c8 = 0;
          local_198 = 0;
          if (uVar15 != 0) {
            if (0x1555555555555555 < uVar15) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_18131dae0();
            }
            uVar13 = uVar15 * 0xc;
            if (uVar13 == 0) {
              local_198 = 0;
              puStack_1a0 = puVar19;
              local_1a8 = puVar19;
            }
            else {
              if (uVar13 < 0x1000) {
                puStack_1a0 = (undefined8 *)thunk_FUN_183196718(uVar13);
              }
              else {
                puStack_1a0 = (undefined8 *)thunk_FUN_1811a9100();
              }
              local_198 = (longlong)puStack_1a0 + uVar13;
              local_1a8 = puStack_1a0;
            }
            do {
              *puStack_1a0 = 0;
              *(undefined4 *)(puStack_1a0 + 1) = 0;
              puStack_1a0 = (undefined8 *)((longlong)puStack_1a0 + 0xc);
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          uVar15 = lVar14 - lVar18 >> 3;
          local_1f8 = (undefined8 *)0x0;
          uStack_1f0 = (undefined8 *)0x0;
          local_1d0 = 0;
          local_1e8 = 0;
          local_1e0 = local_1a8;
          local_1c8 = local_198;
          if (uVar15 != 0) {
            if (0x1555555555555555 < uVar15) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_18131dae0();
            }
            uVar13 = uVar15 * 0xc;
            if (uVar13 == 0) {
              local_1d0 = 0;
              uStack_1f0 = puVar19;
              local_1f8 = puVar19;
            }
            else {
              if (uVar13 < 0x1000) {
                uStack_1f0 = (undefined8 *)thunk_FUN_183196718(uVar13);
              }
              else {
                uStack_1f0 = (undefined8 *)thunk_FUN_1811a9100();
              }
              local_1d0 = (longlong)uStack_1f0 + uVar13;
              local_1f8 = uStack_1f0;
            }
            do {
              *uStack_1f0 = 0;
              *(undefined4 *)(uStack_1f0 + 1) = 0;
              uStack_1f0 = (undefined8 *)((longlong)uStack_1f0 + 0xc);
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          puVar9 = local_1f8;
          uVar15 = lVar14 - lVar18 >> 3;
          local_170 = 0;
          puVar7 = puVar19;
          local_1e8 = local_1d0;
          if (uVar15 != 0) {
            if (0x3fffffffffffffff < uVar15) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_1811aa350();
            }
            uVar15 = uVar15 * 4;
            if (uVar15 != 0) {
              if (uVar15 < 0x1000) {
                puVar7 = (undefined8 *)thunk_FUN_183196718(uVar15);
              }
              else {
                puVar7 = (undefined8 *)thunk_FUN_1811a9100();
              }
            }
            local_170 = (longlong)puVar7 + uVar15;
            thunk_FUN_1811a9920(puVar7);
          }
          fVar26 = 0.0;
          puVar8 = (undefined8 *)(lVar14 - lVar18 >> 3);
          lVar12 = lVar18;
          local_160 = puVar8;
          if (puVar8 != (undefined8 *)0x0) {
            pfVar16 = (float *)(puVar9 + 1);
            pfVar17 = (float *)(lVar18 + 4);
            local_138 = local_1b0 - lVar18;
            local_1a8 = (undefined8 *)(-4 - lVar18);
            local_140 = (longlong)local_1e0 - (longlong)puVar9;
            fVar20 = fVar26;
            do {
              if (*(char *)((longlong)param_1 + 0x89) == '\0') {
                fVar26 = *(float *)((longlong)local_1a8 + (longlong)pfVar17 + 4 + lVar18) -
                         *(float *)((longlong)pfVar17 + local_138);
              }
              else {
                fVar26 = *(float *)(lVar18 + (longlong)local_1a8 + (longlong)pfVar17) -
                         *(float *)((longlong)pfVar17 + local_138 + -4);
              }
              thunk_FUN_181325650(param_1,(longlong)param_1 + 0x8c,SUB84((double)pfVar17[-1],0),
                                  (double)*pfVar17,(double)fVar26,&local_148,&local_150,&local_158);
              *(ulonglong *)(local_140 + -8 + (longlong)pfVar16) =
                   CONCAT44((float)local_150,(float)local_148);
              *(float *)(local_140 + (longlong)pfVar16) = (float)local_158;
              fVar26 = *(float *)(local_140 + (longlong)pfVar16);
              fVar22 = *(float *)(local_188 + 5);
              *(ulonglong *)(pfVar16 + -2) =
                   CONCAT44(*(float *)(local_140 + -4 + (longlong)pfVar16) -
                            *(float *)((longlong)local_188 + 0x24),
                            *(float *)(local_140 + -8 + (longlong)pfVar16) -
                            *(float *)(local_188 + 4));
              *pfVar16 = fVar26 - fVar22;
              fVar26 = pfVar16[-2] * pfVar16[-2] + pfVar16[-1] * pfVar16[-1] + *pfVar16 * *pfVar16;
              if (fVar26 < 0.0) {
                fVar26 = sqrtf(fVar26);
              }
              else {
                fVar26 = SQRT(fVar26);
              }
              *(float *)((longlong)puVar7 + (longlong)puVar19 * 4) = fVar26;
              if (fVar4 <= fVar26) {
                *(ulonglong *)(pfVar16 + -2) = CONCAT44(pfVar16[-1] / fVar26,pfVar16[-2] / fVar26);
                *pfVar16 = *pfVar16 / fVar26;
              }
              else {
                *(undefined4 *)((longlong)puVar7 + (longlong)puVar19 * 4) = 0x497423f0;
                pfVar16[-2] = 0.0;
                pfVar16[-1] = 0.0;
                *pfVar16 = fVar5;
              }
              fVar26 = *(float *)((longlong)puVar7 + (longlong)puVar19 * 4);
              if (fVar26 <= fVar20) {
                fVar26 = fVar20;
              }
              puVar19 = (undefined8 *)((longlong)puVar19 + 1);
              pfVar17 = pfVar17 + 2;
              pfVar16 = pfVar16 + 3;
              plVar11 = local_1d8;
              lVar12 = local_178;
              fVar20 = fVar26;
            } while (puVar19 < puVar8);
          }
          uVar21 = 0;
          local_208 = 0.0;
          fStack_204 = 0.0;
          local_200 = 0.0;
          uVar15 = local_180 - lVar12 >> 3;
          lVar18 = lVar12;
          if (uVar15 != 0) {
            lVar12 = local_180 - lVar12;
            pfVar16 = (float *)(puVar9 + 1);
            uVar13 = 0;
            do {
              uVar1 = uVar13 + 1;
              uVar10 = uVar1 % (ulonglong)(lVar12 >> 3);
              fVar25 = fVar26 / (*(float *)((longlong)puVar7 + uVar10 * 4) +
                                *(float *)((longlong)puVar7 + uVar13 * 4));
              fVar20 = *(float *)((longlong)puVar9 + uVar10 * 0xc);
              fVar22 = *(float *)((longlong)puVar9 + uVar10 * 0xc + 4);
              local_120 = fVar20 * pfVar16[-1] - fVar22 * pfVar16[-2];
              fVar2 = *(float *)((longlong)puVar9 + uVar10 * 0xc + 8);
              local_128 = CONCAT44(fVar2 * pfVar16[-2] - fVar20 * *pfVar16,
                                   fVar22 * *pfVar16 - fVar2 * pfVar16[-1]);
              FUN_18131f380(&local_1c0);
              fVar22 = local_1c0._4_4_;
              fVar20 = (float)local_1c0;
              if (local_1c0._4_4_ * 0.0 + (float)local_1c0 * 0.0 + local_1b8 * fVar5 < 0.0) {
                fVar22 = local_1c0._4_4_ * fVar5;
                fVar20 = (float)local_1c0 * fVar5;
                local_1c0 = CONCAT44(fVar22,fVar20);
                local_1b8 = local_1b8 * fVar5;
              }
              local_200 = fVar25 * local_1b8 + local_200;
              fStack_204 = fVar25 * fVar22 + fStack_204;
              local_208 = fVar25 * fVar20 + local_208;
              uVar21 = CONCAT44(fStack_204,local_208);
              pfVar16 = pfVar16 + 3;
              uVar13 = uVar1;
              plVar11 = local_1d8;
              lVar18 = local_178;
            } while (uVar1 < uVar15);
          }
          local_118 = uVar21;
          local_110 = local_200;
          puVar19 = (undefined8 *)FUN_18131f380(local_c8,&local_118);
          uVar23 = (undefined4)*puVar19;
          uVar24 = (undefined4)((ulonglong)*puVar19 >> 0x20);
          local_200 = *(float *)(puVar19 + 1);
          if (puVar7 != (undefined8 *)0x0) {
            uVar15 = (local_170 - (longlong)puVar7 >> 2) * 4;
            puVar19 = puVar7;
            if (0xfff < uVar15) {
              uVar15 = uVar15 + 0x27;
              puVar19 = (undefined8 *)puVar7[-1];
              if (0x1f < (ulonglong)((longlong)puVar7 + (-8 - (longlong)puVar19))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FUN_18001e0e2(puVar19,uVar15);
          }
          if (puVar9 != (undefined8 *)0x0) {
            uVar15 = ((local_1d0 - (longlong)puVar9) / 0xc) * 0xc;
            puVar19 = puVar9;
            if (0xfff < uVar15) {
              uVar15 = uVar15 + 0x27;
              puVar19 = (undefined8 *)puVar9[-1];
              if (0x1f < (ulonglong)((longlong)puVar9 + (-8 - (longlong)puVar19))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FUN_18001e0e2(puVar19,uVar15);
          }
          lVar12 = local_1b0;
          puVar19 = local_168;
          if (local_1e0 != (undefined8 *)0x0) {
            uVar15 = ((local_1c8 - (longlong)local_1e0) / 0xc) * 0xc;
            puVar19 = local_1e0;
            if (0xfff < uVar15) {
              uVar15 = uVar15 + 0x27;
              puVar19 = (undefined8 *)local_1e0[-1];
              if (0x1f < (ulonglong)((longlong)local_1e0 + (-8 - (longlong)puVar19))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FUN_18001e0e2(puVar19,uVar15);
            lVar12 = local_1b0;
            puVar19 = local_168;
          }
        }
        else {
          thunk_FUN_18317f440("check circle corners count, (%d,%d)\n",
                              *(undefined4 *)((longlong)plVar11 + 0x1c),(int)plVar11[4]);
          uVar23 = 0;
          uVar24 = 0;
        }
        puVar9 = (undefined8 *)*puVar19;
        local_1f8 = (undefined8 *)puVar9[1];
        uStack_1f0 = (undefined8 *)((ulonglong)uStack_1f0 & 0xffffffff00000000);
        if (*(char *)((longlong)local_1f8 + 0x19) == '\0') {
          puVar7 = local_1f8;
          do {
            local_1f8 = puVar7;
            if (*(int *)((longlong)local_1f8 + 0x1c) < *(int *)((longlong)plVar11 + 0x1c)) {
              uStack_1f0 = (undefined8 *)((ulonglong)uStack_1f0._4_4_ << 0x20);
              puVar7 = (undefined8 *)local_1f8[2];
            }
            else {
              uStack_1f0 = (undefined8 *)CONCAT44(uStack_1f0._4_4_,1);
              puVar7 = (undefined8 *)*local_1f8;
              puVar9 = local_1f8;
            }
          } while (*(char *)((longlong)puVar7 + 0x19) == '\0');
        }
        if ((*(char *)((longlong)puVar9 + 0x19) != '\0') ||
           (*(int *)((longlong)plVar11 + 0x1c) < *(int *)((longlong)puVar9 + 0x1c))) {
          if (puVar19[1] == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_1811dfd70();
          }
          uVar21 = *puVar19;
          local_d0 = 0;
          local_d8 = puVar19;
          puVar9 = (undefined8 *)thunk_FUN_183196718(0x30);
          *(undefined4 *)((longlong)puVar9 + 0x1c) = *(undefined4 *)((longlong)plVar11 + 0x1c);
          puVar9[4] = 0;
          *(undefined4 *)(puVar9 + 5) = 0;
          *puVar9 = uVar21;
          puVar9[1] = uVar21;
          puVar9[2] = uVar21;
          *(undefined2 *)(puVar9 + 3) = 0;
          local_d0 = 0;
          local_1a8 = local_1f8;
          puStack_1a0 = uStack_1f0;
          puVar9 = (undefined8 *)thunk_FUN_18131c780(puVar19,&local_1a8,puVar9);
        }
        puVar9[4] = CONCAT44(uVar24,uVar23);
        *(float *)(puVar9 + 5) = local_200;
        if (lVar12 != 0) {
          uVar15 = (local_f8 - lVar12 >> 3) * 8;
          lVar14 = lVar12;
          if (0xfff < uVar15) {
            uVar15 = uVar15 + 0x27;
            lVar14 = *(longlong *)(lVar12 + -8);
            if (0x1f < (lVar12 - lVar14) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FUN_18001e0e2(lVar14,uVar15);
        }
        if (lVar18 != 0) {
          uVar15 = local_e0 - lVar18 & 0xfffffffffffffff8;
          lVar12 = lVar18;
          if (0xfff < uVar15) {
            uVar15 = uVar15 + 0x27;
            lVar12 = *(longlong *)(lVar18 + -8);
            if (0x1f < (lVar18 - lVar12) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FUN_18001e0e2(lVar12,uVar15);
        }
      }
      else {
        thunk_FUN_18317f440("error, please check\n");
      }
      local_1d8 = (longlong *)plVar11[2];
      if (*(char *)((longlong)local_1d8 + 0x19) == '\0') {
        cVar3 = *(char *)(*local_1d8 + 0x19);
        plVar11 = (longlong *)*local_1d8;
        while (cVar3 == '\0') {
          cVar3 = *(char *)(*plVar11 + 0x19);
          local_1d8 = plVar11;
          plVar11 = (longlong *)*plVar11;
        }
      }
      else {
        cVar3 = *(char *)(plVar11[1] + 0x19);
        plVar6 = (longlong *)plVar11[1];
        while ((local_1d8 = plVar6, cVar3 == '\0' && (plVar11 == (longlong *)local_1d8[2]))) {
          cVar3 = *(char *)(local_1d8[1] + 0x19);
          plVar6 = (longlong *)local_1d8[1];
          plVar11 = local_1d8;
        }
      }
    } while (local_1d8 != (longlong *)param_1[6]);
  }
  return 0;
}


