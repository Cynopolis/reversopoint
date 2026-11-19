// vtable slot 31 (thunk 0x18001827d) -> FUN_18123ca10 @ 0x18123ca10  size=1975

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_18123ca10(longlong param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  ulonglong uVar7;
  char ****ppppcVar8;
  FILE *_File;
  undefined8 ****ppppuVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  size_t _Size;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStack_118 [32];
  int *local_f8;
  int local_f0;
  int local_e8 [2];
  int *local_e0;
  longlong *local_d8;
  undefined8 ***local_d0;
  longlong local_c8;
  char ***local_c0;
  undefined8 uStack_b8;
  ulonglong local_b0;
  ulonglong uStack_a8;
  char ***local_a0;
  undefined8 uStack_98;
  ulonglong local_90;
  ulonglong uStack_88;
  undefined8 ***local_80;
  undefined8 uStack_78;
  size_t local_70;
  ulonglong local_68;
  char ***local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_183dc69c0 ^ (ulonglong)auStack_118;
  ppppcVar8 = (char ****)0x0;
  if (*param_3 < 0x400) {
    *param_3 = 0x400;
  }
  local_c0 = (char ***)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_e0 = param_3;
  local_d8 = param_2;
  local_c8 = param_1;
  local_c0 = (char ***)thunk_FUN_183196718(0x20);
  uVar3 = s__persist_usrdata_cfg_18322efd0._8_8_;
  local_b0 = 0x14;
  uStack_a8 = 0x1f;
  *local_c0 = (char **)s__persist_usrdata_cfg_18322efd0._0_8_;
  local_c0[1] = (char **)uVar3;
  *(undefined4 *)(local_c0 + 2) = s__persist_usrdata_cfg_18322efd0._16_4_;
  *(char *)((longlong)local_c0 + 0x14) = '\0';
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0xf;
  local_60 = (char ***)0x0;
  if (((*param_3 < 0x11) || (*param_2 != 0x3836663262353939)) || (param_2[1] != 0x6561613434616433))
  goto LAB_18123cf3c;
  local_80 = (undefined8 ****)0x0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0;
  lVar15 = -1;
  do {
    lVar2 = lVar15 + 0x11;
    lVar15 = lVar15 + 1;
  } while (*(char *)((longlong)param_2 + lVar2) != '\0');
  thunk_FUN_1811adba0(&local_80);
  _Size = local_70;
  ppppuVar9 = &local_80;
  if (0xf < local_68) {
    ppppuVar9 = (undefined8 ****)local_80;
  }
  if ((local_70 == 0) || (pvVar6 = memchr(ppppuVar9,0x7c,local_70), pvVar6 == (void *)0x0)) {
    iVar16 = -1;
  }
  else {
    iVar16 = (int)pvVar6 - (int)ppppuVar9;
  }
  if ((iVar16 < 1) || ((int)_Size <= iVar16)) {
    local_a0 = (char ***)0x0;
    uStack_98 = 0;
    ppppuVar9 = &local_80;
    if (0xf < local_68) {
      ppppuVar9 = (undefined8 ****)local_80;
    }
    if (0x7fffffffffffffff < _Size) goto LAB_18123d1c1;
    if (_Size < 0x10) {
      local_90 = _Size;
      uStack_88 = 0xf;
      memcpy(&local_a0,ppppuVar9,_Size);
      *(undefined1 *)((longlong)&local_a0 + _Size) = 0;
    }
    else {
      uVar10 = _Size | 0xf;
      if (uVar10 < 0x8000000000000000) {
        if (uVar10 < 0x16) {
          uVar10 = 0x16;
        }
        uVar13 = uVar10 + 1;
        if (uVar13 != 0) {
          if (uVar13 < 0x1000) {
            ppppcVar8 = (char ****)thunk_FUN_183196718(uVar13);
          }
          else {
            ppppcVar8 = (char ****)thunk_FUN_1811a9100(uVar13);
          }
        }
      }
      else {
        ppppcVar8 = (char ****)thunk_FUN_1811a9100(0x8000000000000000);
        uVar10 = 0x7fffffffffffffff;
      }
      local_90 = _Size;
      local_a0 = (char ***)ppppcVar8;
      uStack_88 = uVar10;
      memcpy(ppppcVar8,ppppuVar9,_Size);
      *(char *)((longlong)ppppcVar8 + _Size) = '\0';
    }
    if (0xf < uStack_a8) {
      uVar10 = uStack_a8 + 1;
      ppppcVar8 = (char ****)local_c0;
      if (0xfff < uVar10) {
        uVar10 = uStack_a8 + 0x28;
        ppppcVar8 = (char ****)local_c0[-1];
        if ((char *)0x1f < (char *)((longlong)local_c0 + (-8 - (longlong)ppppcVar8)))
        goto LAB_18123ced9;
      }
      FUN_18001e0e2(ppppcVar8,uVar10);
    }
    local_c0 = local_a0;
    uStack_b8 = uStack_98;
    local_b0 = local_90;
    uStack_a8 = uStack_88;
  }
  else {
    local_a0 = (char ***)0x0;
    uStack_98 = 0;
    uVar10 = (longlong)iVar16;
    if (_Size < (ulonglong)(longlong)iVar16) {
      uVar10 = _Size;
    }
    local_d0 = &local_80;
    if (0xf < local_68) {
      local_d0 = local_80;
    }
    if (0x7fffffffffffffff < uVar10) {
LAB_18123d1c1:
      uStack_98 = 0;
      local_a0 = (char ***)0x0;
                    /* WARNING: Subroutine does not return */
      thunk_FUN_1811b44e0();
    }
    uVar13 = 0x8000000000000000;
    local_90 = uVar10;
    if (uVar10 < 0x10) {
      uStack_88 = 0xf;
      memcpy(&local_a0,local_d0,uVar10);
      *(undefined1 *)((longlong)&local_a0 + uVar10) = 0;
    }
    else {
      uVar11 = uVar10 | 0xf;
      if (uVar11 < 0x8000000000000000) {
        if (uVar11 < 0x16) {
          uVar11 = 0x16;
        }
        if (uVar11 == 0xffffffffffffffff) {
          ppppcVar8 = (char ****)0x0;
        }
        else if (uVar11 + 1 < 0x1000) {
          ppppcVar8 = (char ****)thunk_FUN_183196718();
        }
        else {
          ppppcVar8 = (char ****)thunk_FUN_1811a9100();
        }
      }
      else {
        uVar11 = 0x7fffffffffffffff;
        ppppcVar8 = (char ****)thunk_FUN_1811a9100(0x8000000000000000);
      }
      local_a0 = (char ***)ppppcVar8;
      uStack_88 = uVar11;
      memcpy(ppppcVar8,local_d0,uVar10);
      *(char *)((longlong)ppppcVar8 + uVar10) = '\0';
      _Size = local_70;
      param_1 = local_c8;
    }
    if (0xf < uStack_a8) {
      uVar10 = uStack_a8 + 1;
      ppppcVar8 = (char ****)local_c0;
      if (0xfff < uVar10) {
        uVar10 = uStack_a8 + 0x28;
        ppppcVar8 = (char ****)local_c0[-1];
        if ((char *)0x1f < (char *)((longlong)local_c0 + (-8 - (longlong)ppppcVar8)))
        goto LAB_18123ced9;
      }
      FUN_18001e0e2(ppppcVar8,uVar10);
      _Size = local_70;
    }
    local_c0 = local_a0;
    uStack_b8 = uStack_98;
    local_b0 = local_90;
    uStack_a8 = uStack_88;
    if (iVar16 + 1 < (int)_Size) {
      uVar10 = (longlong)iVar16 + 1;
      local_a0 = (char ***)0x0;
      uStack_98 = 0;
      if (_Size < uVar10) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_1811c3110();
      }
      uVar11 = 0xffffffffffffffff;
      if (_Size - uVar10 != 0xffffffffffffffff) {
        uVar11 = _Size - uVar10;
      }
      ppppuVar9 = &local_80;
      if (0xf < local_68) {
        ppppuVar9 = (undefined8 ****)local_80;
      }
      if (0x7fffffffffffffff < uVar11) goto LAB_18123d1c1;
      if (uVar11 < 0x10) {
        uStack_88 = 0xf;
        local_90 = uVar11;
        memcpy(&local_a0,(void *)((longlong)ppppuVar9 + uVar10),uVar11);
        *(undefined1 *)((longlong)&local_a0 + uVar11) = 0;
      }
      else {
        uVar7 = uVar11 | 0xf;
        uVar14 = 0x7fffffffffffffff;
        if (uVar7 < 0x8000000000000000) {
          if (uVar7 < 0x16) {
            uVar7 = 0x16;
          }
          uVar13 = uVar7 + 1;
          if (uVar13 == 0) {
            ppppcVar8 = (char ****)0x0;
          }
          else {
            uVar14 = uVar7;
            if (0xfff < uVar13) goto LAB_18123cd3a;
            ppppcVar8 = (char ****)thunk_FUN_183196718(uVar13);
          }
        }
        else {
LAB_18123cd3a:
          ppppcVar8 = (char ****)thunk_FUN_1811a9100(uVar13);
          uVar7 = uVar14;
        }
        local_a0 = (char ***)ppppcVar8;
        local_90 = uVar11;
        uStack_88 = uVar7;
        memcpy(ppppcVar8,(void *)((longlong)ppppuVar9 + uVar10),uVar11);
        *(char *)((longlong)ppppcVar8 + uVar11) = '\0';
      }
      if (0xf < uStack_48) {
        uVar10 = uStack_48 + 1;
        ppppcVar8 = (char ****)local_60;
        if (0xfff < uVar10) {
          uVar10 = uStack_48 + 0x28;
          ppppcVar8 = (char ****)local_60[-1];
          if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar8))) {
LAB_18123ced9:
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_18001e0e2(ppppcVar8,uVar10);
      }
      local_60 = local_a0;
      uStack_58 = uStack_98;
      local_50 = local_90;
      uStack_48 = uStack_88;
    }
    else {
      ppppcVar8 = &local_60;
      if (0xf < uStack_48) {
        ppppcVar8 = (char ****)local_60;
      }
      local_50 = 0;
      *(char *)ppppcVar8 = '\0';
    }
  }
  param_3 = local_e0;
  param_2 = local_d8;
  if (0xf < local_68) {
    uVar10 = local_68 + 1;
    ppppuVar9 = (undefined8 ****)local_80;
    if (0xfff < uVar10) {
      uVar10 = local_68 + 0x28;
      ppppuVar9 = (undefined8 ****)local_80[-1];
      if (0x1f < (ulonglong)((longlong)local_80 + (-8 - (longlong)ppppuVar9))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(ppppuVar9,uVar10);
    param_3 = local_e0;
    param_2 = local_d8;
  }
LAB_18123cf3c:
  iVar16 = 0;
  ppppcVar8 = &local_c0;
  if (0xf < uStack_a8) {
    ppppcVar8 = (char ****)local_c0;
  }
  thunk_FUN_18317f440("[SDK TRACE] [%s] pre getUserData %s\r\n",param_1 + 0x39,ppppcVar8);
  local_e8[0] = 0;
  iVar12 = iVar16;
  do {
    cVar4 = thunk_FUN_18122f510(param_1);
    if (cVar4 == '\0') {
      thunk_FUN_18317f440("[SDK ERROR] Camera was disconnect,set property exitension failed\r\n");
      iVar5 = 3;
    }
    else {
      thunk_FUN_1831809d0(&local_e0,param_1 + 0xc0);
      plVar1 = *(longlong **)(param_1 + 200);
      if (plVar1 == (longlong *)0x0) {
        thunk_FUN_18317f440("[SDK ERROR] get user data failed: camera device is nullptr\n");
        thunk_FUN_183180a80(&local_e0);
        iVar16 = 3;
        goto LAB_18123d10c;
      }
      ppppcVar8 = &local_c0;
      if (0xf < uStack_a8) {
        ppppcVar8 = (char ****)local_c0;
      }
      local_f8 = local_e8;
      iVar5 = (**(code **)(*plVar1 + 0x50))(plVar1,ppppcVar8,param_2,*param_3);
      if (iVar5 == 0) {
        thunk_FUN_183180a80(&local_e0);
        goto LAB_18123d084;
      }
      if (iVar5 == 0x12) {
        ppppcVar8 = &local_c0;
        if (0xf < uStack_a8) {
          ppppcVar8 = (char ****)local_c0;
        }
        thunk_FUN_18317f440("[SDK ERROR] [%s] The file not exist, path = %s\n",param_1 + 0x39,
                            ppppcVar8);
        thunk_FUN_183180a80(&local_e0);
        goto LAB_18123d054;
      }
      thunk_FUN_183180a80(&local_e0);
    }
    Sleep(10);
    ppppcVar8 = &local_c0;
    if (0xf < uStack_a8) {
      ppppcVar8 = (char ****)local_c0;
    }
    iVar12 = iVar12 + 1;
    local_f0 = local_e8[0];
    local_f8 = (int *)CONCAT44(local_f8._4_4_,*param_3);
    thunk_FUN_18317f440("[SDK ERROR] [%s] try %d times,getUserData failed src:%s,inputSizeAndOutLen:%d,ret:%d\n"
                        ,param_1 + 0x39,iVar12,ppppcVar8);
    if (2 < iVar12) {
      if (iVar5 == 0) {
LAB_18123d084:
        *param_3 = local_e8[0];
        if (local_50 != 0) {
          ppppcVar8 = &local_60;
          if (0xf < uStack_48) {
            ppppcVar8 = (char ****)local_60;
          }
          _File = (FILE *)thunk_FUN_183180310(ppppcVar8,&DAT_183223718);
          if (_File != (FILE *)0x0) {
            thunk_FUN_183180590(_File,param_2,local_e8[0]);
            fclose(_File);
          }
        }
        ppppcVar8 = &local_c0;
        if (0xf < uStack_a8) {
          ppppcVar8 = (char ****)local_c0;
        }
        thunk_FUN_18317f440("[SDK TRACE] [%s] getUserData successful, %s\r\n",param_1 + 0x39,
                            ppppcVar8);
      }
      else {
LAB_18123d054:
        ppppcVar8 = &local_c0;
        if (0xf < uStack_a8) {
          ppppcVar8 = (char ****)local_c0;
        }
        thunk_FUN_18317f440("[SDK ERROR] [%s] getUserData failed(%d), %s\r\n",param_1 + 0x39,iVar5,
                            ppppcVar8);
        iVar16 = iVar5;
      }
LAB_18123d10c:
      if (0xf < uStack_48) {
        uVar10 = uStack_48 + 1;
        ppppcVar8 = (char ****)local_60;
        if (0xfff < uVar10) {
          uVar10 = uStack_48 + 0x28;
          ppppcVar8 = (char ****)local_60[-1];
          if ((char *)0x1f < (char *)((longlong)local_60 + (-8 - (longlong)ppppcVar8))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_18001e0e2(ppppcVar8,uVar10);
      }
      local_50 = 0;
      uStack_48 = 0xf;
      local_60 = (char ***)((ulonglong)local_60 & 0xffffffffffffff00);
      if (0xf < uStack_a8) {
        uVar10 = uStack_a8 + 1;
        ppppcVar8 = (char ****)local_c0;
        if (0xfff < uVar10) {
          uVar10 = uStack_a8 + 0x28;
          ppppcVar8 = (char ****)local_c0[-1];
          if ((char *)0x1f < (char *)((longlong)local_c0 + (-8 - (longlong)ppppcVar8))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_18001e0e2(ppppcVar8,uVar10);
      }
      return iVar16;
    }
  } while( true );
}


