// 1812f99b0  size=0x4ab  str:"msgId"

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1812f99b0(undefined8 param_1,undefined8 param_2,void *param_3,undefined4 param_4,
                 int *param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 ****ppppuVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_568 [32];
  undefined4 local_548;
  undefined8 ***local_540;
  undefined4 local_538;
  int local_528;
  int local_524;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  ulonglong uStack_508;
  undefined8 ***local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  ulonglong uStack_4e8;
  undefined8 ***local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  ulonglong uStack_4c8;
  ulonglong local_4c0 [3];
  ulonglong uStack_4a8;
  undefined1 local_498 [96];
  undefined1 local_438 [1024];
  ulonglong local_38;
  longlong lVar5;
  
  local_38 = DAT_183dc69c0 ^ (ulonglong)auStack_568;
  local_548 = param_4;
  uVar2 = snprintf(local_438,0x400,"{\"msgId\":\"getUserData\",\"filePath\":\"%s\",\"valLen\":%d}",
                   param_2);
  uStack_4d8 = 0;
  local_4d0 = _DAT_183222c50;
  uStack_4c8 = _UNK_183222c58;
  local_4e0 = (undefined8 ****)0x0;
  local_538 = 5000;
  local_540 = &local_4e0;
  local_548 = 0;
  iVar3 = thunk_FUN_1812fe010(param_1,local_438,uVar2,0);
  if (iVar3 == 0) {
    thunk_FUN_18317f440("not response:%s\n",local_438);
    iVar3 = 1;
  }
  else {
    thunk_FUN_1812d5b40(local_498,&local_4e0);
    uStack_4f8 = 0;
    local_4f0 = _DAT_183222c50;
    uStack_4e8 = _UNK_183222c58;
    local_500 = (undefined8 ****)0x0;
    uStack_518 = 0;
    local_510 = _DAT_18322bf80;
    uStack_508 = _UNK_18322bf88;
    local_520 = (ulonglong)CONCAT14(DAT_18324f634,DAT_18324f630);
    thunk_FUN_1812da9f0(local_498,&local_520,&local_500);
    if (0xf < uStack_508) {
      uVar7 = uStack_508 + 1;
      uVar8 = local_520;
      if (0xfff < uVar7) {
        uVar7 = uStack_508 + 0x28;
        uVar8 = *(ulonglong *)(local_520 - 8);
        if (0x1f < (local_520 - uVar8) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(uVar8,uVar7);
    }
    cVar1 = thunk_FUN_1812cd4f0(&local_500,"getUserDataRsp");
    if (cVar1 == '\0') {
      local_4c0[1] = 0;
      local_4c0[2] = _DAT_183222c50;
      uStack_4a8 = _UNK_183222c58;
      local_4c0[0] = 0;
      uStack_518 = 0;
      local_510 = _DAT_18322bfa0;
      uStack_508 = _UNK_18322bfa8;
      local_520._0_6_ = CONCAT24(s_result_18323d8d4._4_2_,s_result_18323d8d4._0_4_);
      local_520 = (ulonglong)(uint6)local_520;
      thunk_FUN_1812da9f0(local_498,&local_520,local_4c0);
      if (0xf < uStack_508) {
        uVar7 = uStack_508 + 1;
        uVar8 = local_520;
        if (0xfff < uVar7) {
          uVar7 = uStack_508 + 0x28;
          uVar8 = *(ulonglong *)(local_520 - 8);
          if (0x1f < (local_520 - uVar8) - 8) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_18001e0e2(uVar8,uVar7);
      }
      local_528 = 0;
      uStack_518 = 0;
      local_510 = _DAT_18322bf60;
      uStack_508 = _UNK_18322bf68;
      local_520 = 0x65646f63;
      thunk_FUN_1812da670(local_498,&local_520,&local_528);
      if (0xf < uStack_508) {
        uVar7 = uStack_508 + 1;
        uVar8 = local_520;
        if (0xfff < uVar7) {
          uVar7 = uStack_508 + 0x28;
          uVar8 = *(ulonglong *)(local_520 - 8);
          if (0x1f < (local_520 - uVar8) - 8) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_18001e0e2(uVar8,uVar7);
      }
      iVar3 = local_528;
      if (local_528 == 0) {
        uStack_518 = 0;
        local_510 = _DAT_18322bfa0;
        uStack_508 = _UNK_18322bfa8;
        local_520._0_6_ = CONCAT24(s_valLen_183250520._4_2_,s_valLen_183250520._0_4_);
        local_520 = (ulonglong)(uint6)local_520;
        cVar1 = thunk_FUN_1812da670(local_498,&local_520,&local_524);
        if (0xf < uStack_508) {
          uVar7 = uStack_508 + 1;
          uVar8 = local_520;
          if (0xfff < uVar7) {
            uVar7 = uStack_508 + 0x28;
            uVar8 = *(ulonglong *)(local_520 - 8);
            if (0x1f < (local_520 - uVar8) - 8) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FUN_18001e0e2(uVar8,uVar7);
        }
        if (cVar1 == '\0') {
          thunk_FUN_18317f440("[SDK TRACE] the valLen of getUserData Msg abserct\r\n");
          iVar3 = 9;
        }
        else {
          if (0 < local_524) {
            ppppuVar6 = &local_4e0;
            if (0xf < uStack_4c8) {
              ppppuVar6 = (undefined8 ****)local_4e0;
            }
            lVar4 = -1;
            do {
              lVar5 = lVar4;
              lVar4 = lVar5 + 1;
            } while (*(char *)((longlong)ppppuVar6 + lVar4) != '\0');
            memcpy(param_3,(void *)((longlong)ppppuVar6 + lVar5 + 2),(longlong)local_524);
            *param_5 = local_524;
          }
          iVar3 = 0;
        }
      }
      if (0xf < uStack_4a8) {
        uVar7 = uStack_4a8 + 1;
        uVar8 = local_4c0[0];
        if (0xfff < uVar7) {
          uVar7 = uStack_4a8 + 0x28;
          uVar8 = *(ulonglong *)(local_4c0[0] - 8);
          if (0x1f < (local_4c0[0] - uVar8) - 8) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_18001e0e2(uVar8,uVar7);
      }
      local_4c0[2] = _DAT_183222c50;
      uStack_4a8 = _UNK_183222c58;
      local_4c0[0] = local_4c0[0] & 0xffffffffffffff00;
    }
    else {
      ppppuVar6 = &local_500;
      if (0xf < uStack_4e8) {
        ppppuVar6 = (undefined8 ****)local_500;
      }
      thunk_FUN_18317f440("[SDK TRACE] the msgId(%s) of getUserData Msg incorrect\r\n",ppppuVar6);
      iVar3 = 9;
    }
    if (0xf < uStack_4e8) {
      uVar8 = uStack_4e8 + 1;
      ppppuVar6 = (undefined8 ****)local_500;
      if (0xfff < uVar8) {
        uVar8 = uStack_4e8 + 0x28;
        ppppuVar6 = (undefined8 ****)local_500[-1];
        if (0x1f < (ulonglong)((longlong)local_500 + (-8 - (longlong)ppppuVar6))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(ppppuVar6,uVar8);
    }
    local_500 = (undefined8 ***)((ulonglong)local_500 & 0xffffffffffffff00);
    local_4f0 = _DAT_183222c50;
    uStack_4e8 = _UNK_183222c58;
    thunk_FUN_1812d6290(local_498);
  }
  if (0xf < uStack_4c8) {
    uVar8 = uStack_4c8 + 1;
    ppppuVar6 = (undefined8 ****)local_4e0;
    if (0xfff < uVar8) {
      uVar8 = uStack_4c8 + 0x28;
      ppppuVar6 = (undefined8 ****)local_4e0[-1];
      if (0x1f < (ulonglong)((longlong)local_4e0 + (-8 - (longlong)ppppuVar6))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(ppppuVar6,uVar8);
  }
  return iVar3;
}


