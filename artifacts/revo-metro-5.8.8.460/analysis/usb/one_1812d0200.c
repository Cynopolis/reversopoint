/* 0x1812d0200 size=0xe05 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1812d0200(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  uint *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  void *pvVar9;
  uint **ppuVar10;
  longlong lVar11;
  uint *puVar12;
  char ******ppppppcVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  char ******ppppppcVar19;
  undefined1 auStack_238 [32];
  uint local_218;
  uint *local_210;
  uint *puStack_208;
  uint *local_200;
  longlong local_1f8;
  longlong lStack_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  longlong local_1c8 [2];
  undefined1 local_1b8 [8];
  basic_istream<char,std::char_traits<char>_> local_1b0 [120];
  basic_ios<char,std::char_traits<char>_> local_138 [96];
  undefined1 local_d8 [32];
  void *local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  void *local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  char *****local_78 [2];
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_183dc69c0 ^ (ulonglong)auStack_238;
  uVar16 = 0;
  local_218 = 0;
  local_1e0 = param_3;
  local_1d8 = param_2;
  local_1d0 = param_4;
  thunk_FUN_1811c1030(local_78,param_5);
  ppppppcVar13 = local_78;
  if (0xf < local_60) {
    ppppppcVar13 = (char ******)local_78[0];
  }
  ppppppcVar19 = local_78;
  if (0xf < local_60) {
    ppppppcVar19 = (char ******)local_78[0];
  }
  if (ppppppcVar19 != (char ******)((longlong)ppppppcVar13 + local_68)) {
    lVar18 = (longlong)ppppppcVar13 - (longlong)ppppppcVar19;
    do {
      iVar3 = tolower((int)*(char *)ppppppcVar19);
      *(char *)((longlong)ppppppcVar19 + lVar18) = (char)iVar3;
      ppppppcVar19 = (char ******)((longlong)ppppppcVar19 + 1);
    } while (ppppppcVar19 != (char ******)((longlong)ppppppcVar13 + local_68));
  }
  uVar4 = thunk_FUN_1811c1030(&local_98,local_78);
  FUN_1812d36d0(&local_1f8,uVar4,0x5c);
  lVar18 = local_1f8;
  if ((lStack_1f0 - local_1f8 >> 5 == 0) ||
     (cVar1 = thunk_FUN_1812cd4f0(local_1f8,&DAT_18324e7e4), cVar1 != '\0')) {
    uVar4 = 0;
    goto LAB_1812d0f1f;
  }
  uVar4 = thunk_FUN_1811c1030(local_d8,lVar18 + 0x20);
  FUN_1812d36d0(&local_210,uVar4,0x26);
  puVar12 = local_210;
  if ((ulonglong)((longlong)puStack_208 - (longlong)local_210 >> 5) < 3) {
    thunk_FUN_18317f440("[SDK TRACE] incomplete device id");
    uVar4 = 0;
  }
  else {
    if (*(longlong *)(local_210 + 4) == 8) {
      uStack_90 = 0;
      puVar5 = local_210;
      if (0xf < *(ulonglong *)(local_210 + 6)) {
        puVar5 = *(uint **)local_210;
      }
      local_88 = _DAT_18322bf60;
      uStack_80 = _UNK_18322bf68;
      local_98 = (void *)(ulonglong)*puVar5;
      uVar16 = 0x201;
      local_218 = 0x201;
      cVar1 = thunk_FUN_1812cd4f0(&local_98,&DAT_18324e11c);
      if (cVar1 != '\0') goto LAB_1812d0537;
      local_b8 = (void *)0x0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      if (*(ulonglong *)(puVar12 + 4) < 4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_1811c3110();
      }
      uVar6 = *(ulonglong *)(puVar12 + 4) - 4;
      uVar15 = 4;
      if (uVar6 < 4) {
        uVar15 = uVar6;
      }
      if (0xf < *(ulonglong *)(puVar12 + 6)) {
        puVar12 = *(uint **)puVar12;
      }
      if (0x7fffffffffffffff < uVar15) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_1811b44e0();
      }
      if (uVar15 < 0x10) {
        uStack_a0 = 0xf;
        local_a8 = uVar15;
        memcpy(&local_b8,puVar12 + 1,uVar15);
        *(undefined1 *)((longlong)&local_b8 + uVar15) = 0;
      }
      else {
        uVar6 = uVar15 | 0xf;
        if (uVar6 < 0x8000000000000000) {
          if (uVar6 < 0x16) {
            uVar6 = 0x16;
          }
          if (uVar6 == 0xffffffffffffffff) {
            pvVar9 = (void *)0x0;
          }
          else if (uVar6 + 1 < 0x1000) {
            pvVar9 = (void *)thunk_FUN_183196718();
          }
          else {
            pvVar9 = (void *)thunk_FUN_1811a9100();
          }
        }
        else {
          uVar6 = 0x7fffffffffffffff;
          pvVar9 = (void *)thunk_FUN_1811a9100(0x8000000000000000);
        }
        local_b8 = pvVar9;
        local_a8 = uVar15;
        uStack_a0 = uVar6;
        memcpy(pvVar9,puVar12 + 1,uVar15);
        *(undefined1 *)((longlong)pvVar9 + uVar15) = 0;
      }
      local_218 = 0xa03;
      uVar4 = thunk_FUN_1811c0e60(local_1c8,&local_b8,1);
      uVar16 = 0xa07;
      local_218 = 0xa07;
      uVar4 = thunk_FUN_1812cd4b0(uVar4,&LAB_1800216bb);
      plVar7 = (longlong *)thunk_FUN_1812cd4d0(uVar4,param_1);
      bVar2 = std::ios_base::operator!
                        ((ios_base *)((longlong)*(int *)(*plVar7 + 4) + (longlong)plVar7));
      puVar12 = local_210;
      if (bVar2) goto LAB_1812d0537;
      bVar2 = false;
    }
    else {
LAB_1812d0537:
      bVar2 = true;
    }
    if ((uVar16 & 4) != 0) {
      uVar16 = uVar16 & 0xfffffffb;
      *(undefined ***)((longlong)local_1c8 + (longlong)*(int *)(local_1c8[0] + 4)) =
           std::basic_istringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)((longlong)local_1c8 + (longlong)*(int *)(local_1c8[0] + 4) + -4) =
           *(int *)(local_1c8[0] + 4) + -0x90;
      thunk_FUN_1811b17f0(local_1b8);
      std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
                (local_1b0);
      std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                (local_138);
      puVar12 = local_210;
    }
    if (((uVar16 & 2) != 0) && (uVar16 = uVar16 & 0xfffffffd, 0xf < uStack_a0)) {
      uVar15 = uStack_a0 + 1;
      pvVar9 = local_b8;
      if (0xfff < uVar15) {
        uVar15 = uStack_a0 + 0x28;
        pvVar9 = *(void **)((longlong)local_b8 + -8);
        if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)pvVar9))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(pvVar9,uVar15);
      puVar12 = local_210;
    }
    if (((uVar16 & 1) != 0) && (uVar16 = uVar16 & 0xfffffffe, 0xf < uStack_80)) {
      uVar15 = uStack_80 + 1;
      pvVar9 = local_98;
      if (0xfff < uVar15) {
        uVar15 = uStack_80 + 0x28;
        pvVar9 = *(void **)((longlong)local_98 + -8);
        if (0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)pvVar9))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(pvVar9,uVar15);
      puVar12 = local_210;
    }
    if (bVar2) {
      puVar14 = (undefined8 *)(local_1f8 + 0x20);
      if (0xf < *(ulonglong *)(local_1f8 + 0x38)) {
        puVar14 = (undefined8 *)*puVar14;
      }
      thunk_FUN_18317f440("[SDK TRACE] malformed vid string: ",puVar14);
      uVar4 = 0;
    }
    else {
      uVar15 = uStack_a0;
      uVar17 = uVar16;
      if (*(longlong *)(puVar12 + 0xc) == 8) {
        puVar5 = puVar12 + 8;
        local_b8 = (void *)0x0;
        uStack_b0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        uVar6 = 4;
        if (*(ulonglong *)(puVar12 + 0xc) < 4) {
          uVar6 = *(ulonglong *)(puVar12 + 0xc);
        }
        if (0xf < *(ulonglong *)(puVar12 + 0xe)) {
          puVar5 = *(uint **)puVar5;
        }
        if (0x7fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_1811b44e0();
        }
        if (uVar6 < 0x10) {
          uStack_a0 = 0xf;
          local_a8 = uVar6;
          memcpy(&local_b8,puVar5,uVar6);
          *(undefined1 *)((longlong)&local_b8 + uVar6) = 0;
          uVar15 = uStack_a0;
        }
        else {
          uVar15 = uVar6 | 0xf;
          if (uVar15 < 0x8000000000000000) {
            if (uVar15 < 0x16) {
              uVar15 = 0x16;
            }
            if (uVar15 == 0xffffffffffffffff) {
              pvVar9 = (void *)0x0;
            }
            else if (uVar15 + 1 < 0x1000) {
              pvVar9 = (void *)thunk_FUN_183196718();
            }
            else {
              pvVar9 = (void *)thunk_FUN_1811a9100();
            }
          }
          else {
            uVar15 = 0x7fffffffffffffff;
            pvVar9 = (void *)thunk_FUN_1811a9100(0x8000000000000000);
          }
          local_b8 = pvVar9;
          local_a8 = uVar6;
          uStack_a0 = uVar15;
          memcpy(pvVar9,puVar5,uVar6);
          *(undefined1 *)((longlong)pvVar9 + uVar6) = 0;
          puVar12 = local_210;
        }
        local_218 = uVar16 | 0x408;
        cVar1 = thunk_FUN_1812cd4f0(&local_b8,&DAT_18324e170);
        uVar17 = uVar16 | 0x408;
        if (cVar1 != '\0') goto LAB_1812d08e9;
        puVar5 = puVar12 + 8;
        local_98 = (void *)0x0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        if (*(ulonglong *)(puVar12 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_1811c3110();
        }
        uVar8 = *(ulonglong *)(puVar12 + 0xc) - 4;
        uVar6 = 4;
        if (uVar8 < 4) {
          uVar6 = uVar8;
        }
        if (0xf < *(ulonglong *)(puVar12 + 0xe)) {
          puVar5 = *(uint **)puVar5;
        }
        if (0x7fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_1811b44e0();
        }
        if (uVar6 < 0x10) {
          uStack_80 = 0xf;
          local_88 = uVar6;
          memcpy(&local_98,puVar5 + 1,uVar6);
          *(undefined1 *)((longlong)&local_98 + uVar6) = 0;
        }
        else {
          uVar8 = uVar6 | 0xf;
          if (uVar8 < 0x8000000000000000) {
            if (uVar8 < 0x16) {
              uVar8 = 0x16;
            }
            if (uVar8 == 0xffffffffffffffff) {
              pvVar9 = (void *)0x0;
            }
            else if (uVar8 + 1 < 0x1000) {
              pvVar9 = (void *)thunk_FUN_183196718();
            }
            else {
              pvVar9 = (void *)thunk_FUN_1811a9100();
            }
          }
          else {
            uVar8 = 0x7fffffffffffffff;
            pvVar9 = (void *)thunk_FUN_1811a9100(0x8000000000000000);
          }
          local_98 = pvVar9;
          local_88 = uVar6;
          uStack_80 = uVar8;
          memcpy(pvVar9,puVar5 + 1,uVar6);
          *(undefined1 *)((longlong)pvVar9 + uVar6) = 0;
        }
        local_218 = uVar16 | 0x1418;
        uVar4 = thunk_FUN_1811c0e60(local_1c8,&local_98,1);
        uVar17 = uVar16 | 0x1438;
        local_218 = uVar17;
        uVar4 = thunk_FUN_1812cd4b0(uVar4,&LAB_1800216bb);
        plVar7 = (longlong *)thunk_FUN_1812cd4d0(uVar4,local_1d8);
        bVar2 = std::ios_base::operator!
                          ((ios_base *)((longlong)*(int *)(*plVar7 + 4) + (longlong)plVar7));
        puVar12 = local_210;
        if (bVar2) goto LAB_1812d08e9;
        bVar2 = false;
      }
      else {
LAB_1812d08e9:
        bVar2 = true;
      }
      if ((uVar17 & 0x20) != 0) {
        uVar17 = uVar17 & 0xffffffdf;
        *(undefined ***)((longlong)local_1c8 + (longlong)*(int *)(local_1c8[0] + 4)) =
             std::basic_istringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        *(int *)((longlong)local_1c8 + (longlong)*(int *)(local_1c8[0] + 4) + -4) =
             *(int *)(local_1c8[0] + 4) + -0x90;
        thunk_FUN_1811b17f0(local_1b8);
        std::basic_istream<char,std::char_traits<char>_>::
        ~basic_istream<char,std::char_traits<char>_>(local_1b0);
        std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                  (local_138);
        puVar12 = local_210;
      }
      if (((uVar17 & 0x10) != 0) && (uVar17 = uVar17 & 0xffffffef, 0xf < uStack_80)) {
        uVar6 = uStack_80 + 1;
        pvVar9 = local_98;
        if (0xfff < uVar6) {
          uVar6 = uStack_80 + 0x28;
          pvVar9 = *(void **)((longlong)local_98 + -8);
          if (0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)pvVar9))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_18001e0e2(pvVar9,uVar6);
        puVar12 = local_210;
      }
      if (((uVar17 & 8) != 0) && (uVar17 = uVar17 & 0xfffffff7, 0xf < uVar15)) {
        uVar6 = uVar15 + 1;
        pvVar9 = local_b8;
        if (0xfff < uVar6) {
          uVar6 = uVar15 + 0x28;
          pvVar9 = *(void **)((longlong)local_b8 + -8);
          if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)pvVar9))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_18001e0e2(pvVar9,uVar6);
        puVar12 = local_210;
      }
      if (bVar2) {
        puVar14 = (undefined8 *)(local_1f8 + 0x20);
        if (0xf < *(ulonglong *)(local_1f8 + 0x38)) {
          puVar14 = (undefined8 *)*puVar14;
        }
        thunk_FUN_18317f440("[SDK TRACE] malformed pid string: ",puVar14);
        uVar4 = 0;
      }
      else {
        uVar16 = uVar17;
        if (*(longlong *)(puVar12 + 0x14) == 5) {
          uStack_b0 = 0;
          if (*(ulonglong *)(puVar12 + 0x16) < 0x10) {
            puVar5 = puVar12 + 0x10;
          }
          else {
            puVar5 = *(uint **)(puVar12 + 0x10);
          }
          local_a8 = _DAT_1832276a0;
          uStack_a0 = _UNK_1832276a8;
          local_b8 = (void *)(ulonglong)(uint3)*puVar5;
          uVar16 = uVar17 | 0x2040;
          local_218 = uVar16;
          cVar1 = thunk_FUN_1812cd4f0(&local_b8,&DAT_18324e1c0);
          if (cVar1 != '\0') goto LAB_1812d0be5;
          puVar5 = puVar12 + 0x10;
          local_98 = (void *)0x0;
          uStack_90 = 0;
          local_88 = 0;
          uStack_80 = 0;
          if (*(ulonglong *)(puVar12 + 0x14) < 3) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_1811c3110();
          }
          uVar6 = *(ulonglong *)(puVar12 + 0x14) - 3;
          uVar15 = 2;
          if (uVar6 < 2) {
            uVar15 = uVar6;
          }
          if (0xf < *(ulonglong *)(puVar12 + 0x16)) {
            puVar5 = *(uint **)puVar5;
          }
          if (0x7fffffffffffffff < uVar15) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_1811b44e0();
          }
          if (uVar15 < 0x10) {
            uStack_80 = 0xf;
            local_88 = uVar15;
            memcpy(&local_98,(undefined1 *)((longlong)puVar5 + 3),uVar15);
            *(undefined1 *)((longlong)&local_98 + uVar15) = 0;
          }
          else {
            uVar6 = uVar15 | 0xf;
            if (uVar6 < 0x8000000000000000) {
              if (uVar6 < 0x16) {
                uVar6 = 0x16;
              }
              uVar8 = uVar6 + 1;
              if (uVar8 == 0) {
                pvVar9 = (void *)0x0;
              }
              else if (uVar8 < 0x1000) {
                pvVar9 = (void *)thunk_FUN_183196718(uVar8);
              }
              else {
                pvVar9 = (void *)thunk_FUN_1811a9100(uVar8);
              }
            }
            else {
              pvVar9 = (void *)thunk_FUN_1811a9100(0x8000000000000000);
              uVar6 = 0x7fffffffffffffff;
            }
            local_98 = pvVar9;
            local_88 = uVar15;
            uStack_80 = uVar6;
            memcpy(pvVar9,(undefined1 *)((longlong)puVar5 + 3),uVar15);
            *(undefined1 *)((longlong)pvVar9 + uVar15) = 0;
          }
          local_218 = uVar17 | 0x60c0;
          uVar4 = thunk_FUN_1811c0e60(local_1c8,&local_98,1);
          uVar16 = uVar17 | 0x61c0;
          local_218 = uVar16;
          plVar7 = (longlong *)thunk_FUN_1812cd4d0(uVar4,local_1e0);
          bVar2 = std::ios_base::operator!
                            ((ios_base *)((longlong)*(int *)(*plVar7 + 4) + (longlong)plVar7));
          if (bVar2) goto LAB_1812d0be5;
          bVar2 = false;
        }
        else {
LAB_1812d0be5:
          bVar2 = true;
        }
        if ((uVar16 >> 8 & 1) != 0) {
          uVar16 = uVar16 & 0xfffffeff;
          *(undefined ***)((longlong)local_1c8 + (longlong)*(int *)(local_1c8[0] + 4)) =
               std::basic_istringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
          *(int *)((longlong)local_1c8 + (longlong)*(int *)(local_1c8[0] + 4) + -4) =
               *(int *)(local_1c8[0] + 4) + -0x90;
          thunk_FUN_1811b17f0(local_1b8);
          std::basic_istream<char,std::char_traits<char>_>::
          ~basic_istream<char,std::char_traits<char>_>(local_1b0);
          std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                    (local_138);
        }
        if (((char)uVar16 < '\0') && (uVar16 = uVar16 & 0xffffff7f, 0xf < uStack_80)) {
          uVar15 = uStack_80 + 1;
          pvVar9 = local_98;
          if (0xfff < uVar15) {
            uVar15 = uStack_80 + 0x28;
            pvVar9 = *(void **)((longlong)local_98 + -8);
            if (0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)pvVar9))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FUN_18001e0e2(pvVar9,uVar15);
        }
        if (((uVar16 & 0x40) != 0) && (0xf < uStack_a0)) {
          uVar15 = uStack_a0 + 1;
          pvVar9 = local_b8;
          if (0xfff < uVar15) {
            uVar15 = uStack_a0 + 0x28;
            pvVar9 = *(void **)((longlong)local_b8 + -8);
            if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)pvVar9))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FUN_18001e0e2(pvVar9,uVar15);
        }
        if (bVar2) {
          puVar14 = (undefined8 *)(local_1f8 + 0x20);
          if (0xf < *(ulonglong *)(local_1f8 + 0x38)) {
            puVar14 = (undefined8 *)*puVar14;
          }
          thunk_FUN_18317f440("[SDK TRACE] malformed mi string: ",puVar14);
          uVar4 = 0;
        }
        else {
          uVar4 = thunk_FUN_1811c1030(&local_98,local_1f8 + 0x40);
          ppuVar10 = (uint **)FUN_1812d36d0(&local_b8,uVar4,0x26);
          puVar12 = puStack_208;
          if (&local_210 != ppuVar10) {
            puVar5 = local_210;
            if (local_210 != (uint *)0x0) {
              for (; puVar5 != puVar12; puVar5 = puVar5 + 8) {
                uVar15 = *(ulonglong *)(puVar5 + 6);
                if (0xf < uVar15) {
                  lVar18 = *(longlong *)puVar5;
                  uVar6 = uVar15 + 1;
                  lVar11 = lVar18;
                  if (0xfff < uVar6) {
                    uVar6 = uVar15 + 0x28;
                    lVar11 = *(longlong *)(lVar18 + -8);
                    if (0x1f < (lVar18 - lVar11) - 8U) goto LAB_1812d0e5b;
                  }
                  FUN_18001e0e2(lVar11,uVar6);
                }
                puVar5[4] = 0;
                puVar5[5] = 0;
                puVar5[6] = 0xf;
                puVar5[7] = 0;
                *(undefined1 *)puVar5 = 0;
              }
              uVar15 = (longlong)local_200 - (longlong)local_210 & 0xffffffffffffffe0;
              puVar12 = local_210;
              if (0xfff < uVar15) {
                uVar15 = uVar15 + 0x27;
                puVar12 = *(uint **)(local_210 + -2);
                if (0x1f < (ulonglong)((longlong)local_210 + (-8 - (longlong)puVar12)))
                goto LAB_1812d0e5b;
              }
              FUN_18001e0e2(puVar12,uVar15);
            }
            local_210 = *ppuVar10;
            puStack_208 = ppuVar10[1];
            local_200 = ppuVar10[2];
            *ppuVar10 = (uint *)0x0;
            ppuVar10[1] = (uint *)0x0;
            ppuVar10[2] = (uint *)0x0;
          }
          if (local_b8 != (void *)0x0) {
            thunk_FUN_1811fae50(local_b8,uStack_b0,&local_b8);
            uVar15 = local_a8 - (longlong)local_b8 & 0xffffffffffffffe0;
            pvVar9 = local_b8;
            if (0xfff < uVar15) {
              uVar15 = uVar15 + 0x27;
              pvVar9 = *(void **)((longlong)local_b8 + -8);
              if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)pvVar9))) {
LAB_1812d0e5b:
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FUN_18001e0e2(pvVar9,uVar15);
          }
          if ((ulonglong)((longlong)puStack_208 - (longlong)local_210 >> 5) < 2) {
            puVar14 = (undefined8 *)(local_1f8 + 0x40);
            if (0xf < *(ulonglong *)(local_1f8 + 0x58)) {
              puVar14 = (undefined8 *)*puVar14;
            }
            thunk_FUN_18317f440("[SDK TRACE] malformed id string: ",puVar14);
            uVar4 = 0;
          }
          else {
            thunk_FUN_1811cdd80(local_1d0,local_210 + 8);
            uVar4 = 1;
          }
        }
      }
    }
  }
  lVar18 = local_1f8;
  if (local_210 != (uint *)0x0) {
    thunk_FUN_1811fae50(local_210,puStack_208,&local_210);
    uVar15 = (longlong)local_200 - (longlong)local_210 & 0xffffffffffffffe0;
    puVar12 = local_210;
    if (0xfff < uVar15) {
      uVar15 = uVar15 + 0x27;
      puVar12 = *(uint **)(local_210 + -2);
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_210 + (-8 - (longlong)puVar12))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(puVar12,uVar15);
    local_210 = (uint *)0x0;
    puStack_208 = (uint *)0x0;
    local_200 = (uint *)0x0;
    lVar18 = local_1f8;
  }
LAB_1812d0f1f:
  if (lVar18 != 0) {
    thunk_FUN_1811fae50(lVar18,lStack_1f0,&local_1f8);
    uVar15 = local_1e8 - local_1f8 & 0xffffffffffffffe0;
    lVar18 = local_1f8;
    if (0xfff < uVar15) {
      uVar15 = uVar15 + 0x27;
      lVar18 = *(longlong *)(local_1f8 + -8);
      if (0x1f < (local_1f8 - lVar18) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(lVar18,uVar15);
    local_1f8 = 0;
    lStack_1f0 = 0;
    local_1e8 = 0;
  }
  if (0xf < local_60) {
    uVar15 = local_60 + 1;
    ppppppcVar13 = (char ******)local_78[0];
    if (0xfff < uVar15) {
      uVar15 = local_60 + 0x28;
      ppppppcVar13 = (char ******)local_78[0][-1];
      if ((char *)0x1f < (char *)((longlong)local_78[0] + (-8 - (longlong)ppppppcVar13))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(ppppppcVar13,uVar15);
  }
  return uVar4;
}


