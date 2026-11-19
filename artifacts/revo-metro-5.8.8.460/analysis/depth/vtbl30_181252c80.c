// vtable slot 30 (thunk 0x1800165d1) -> FUN_181252c80 @ 0x181252c80  size=585

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_181252c80(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  char *pcVar5;
  char ****ppppcVar6;
  ulonglong uVar7;
  char *pcVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  int local_58;
  undefined1 local_48 [8];
  char ***local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_183dc69c0 ^ (ulonglong)auStack_78;
  pcVar8 = "E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp";
  pcVar5 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
  if (pcVar5 != (char *)0x0) {
    pcVar8 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
    pcVar8 = pcVar8 + 1;
  }
  thunk_FUN_18317f440("[SDK ENTER] %s %s %d\r\n",pcVar8,"cs::Camera::setUserData",0xbf0);
  local_40 = (char ***)0x0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = (char ***)thunk_FUN_183196718(0x20);
  uVar3 = s__persist_usrdata_cfg_18322efd0._8_8_;
  local_30 = _DAT_1832394c0;
  uStack_28 = _UNK_1832394c8;
  *local_40 = (char **)s__persist_usrdata_cfg_18322efd0._0_8_;
  local_40[1] = (char **)uVar3;
  *(undefined4 *)(local_40 + 2) = s__persist_usrdata_cfg_18322efd0._16_4_;
  *(char *)((longlong)local_40 + 0x14) = '\0';
  if (((0x10 < param_3) && (*param_2 == 0x3836663262353939)) && (param_2[1] == 0x6561613434616433))
  {
    lVar9 = -1;
    do {
      lVar2 = lVar9 + 0x11;
      lVar9 = lVar9 + 1;
    } while (*(char *)((longlong)param_2 + lVar2) != '\0');
    thunk_FUN_1811b4840(&local_40);
    param_2 = (longlong *)((longlong)param_2 + (longlong)(int)local_30 + 0x11);
    param_3 = param_3 + (-0x11 - (int)local_30);
  }
  ppppcVar6 = &local_40;
  if (0xf < uStack_28) {
    ppppcVar6 = (char ****)local_40;
  }
  thunk_FUN_18317f440("[SDK TRACE] [%s] set userData, buf length = %d:%s\n",param_1 + 0x39,param_3,
                      ppppcVar6);
  thunk_FUN_1831809d0(local_48,param_1 + 0xc0);
  plVar1 = *(longlong **)(param_1 + 200);
  if (plVar1 == (longlong *)0x0) {
    thunk_FUN_18317f440("[SDK ERROR] set user data failed: camera device is nullptr\n");
    thunk_FUN_183180a80(local_48);
    iVar4 = 3;
  }
  else {
    ppppcVar6 = &local_40;
    if (0xf < uStack_28) {
      ppppcVar6 = (char ****)local_40;
    }
    iVar4 = (**(code **)(*plVar1 + 0x68))(plVar1,ppppcVar6,param_2,param_3);
    thunk_FUN_183180a80(local_48);
    if (iVar4 == 0) {
      ppppcVar6 = &local_40;
      if (0xf < uStack_28) {
        ppppcVar6 = (char ****)local_40;
      }
      thunk_FUN_18317f440("[SDK TRACE] [%s] set userData %s, buf length = %d, success\n",
                          param_1 + 0x39,ppppcVar6,param_3);
      thunk_FUN_18122db60(param_1,&DAT_18322f0c0);
    }
    else {
      ppppcVar6 = &local_40;
      if (0xf < uStack_28) {
        ppppcVar6 = (char ****)local_40;
      }
      local_58 = iVar4;
      thunk_FUN_18317f440("[SDK ERROR] [%s] set userData %s, buf length = %d, failed\n",
                          param_1 + 0x39,ppppcVar6,param_3);
    }
  }
  if (0xf < uStack_28) {
    uVar7 = uStack_28 + 1;
    ppppcVar6 = (char ****)local_40;
    if (0xfff < uVar7) {
      uVar7 = uStack_28 + 0x28;
      ppppcVar6 = (char ****)local_40[-1];
      if ((char *)0x1f < (char *)((longlong)local_40 + (-8 - (longlong)ppppcVar6))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(ppppcVar6,uVar7);
  }
  return iVar4;
}


