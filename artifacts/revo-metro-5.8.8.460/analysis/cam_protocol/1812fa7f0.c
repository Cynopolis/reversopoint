// 1812fa7f0  size=0x35d  str:"msgId"

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1812fa7f0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_548 [32];
  undefined4 local_528;
  longlong *local_520;
  undefined4 local_518;
  undefined4 local_508 [2];
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  ulonglong uStack_4e8;
  ulonglong local_4e0 [3];
  ulonglong uStack_4c8;
  ulonglong local_4c0 [3];
  ulonglong uStack_4a8;
  longlong local_4a0 [3];
  ulonglong uStack_488;
  undefined1 local_478 [96];
  undefined1 local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_183dc69c0 ^ (ulonglong)auStack_548;
  local_4a0[1] = 0;
  local_4a0[2] = _DAT_183222c50;
  uStack_488 = _UNK_183222c58;
  local_4a0[0] = 0;
  uVar1 = snprintf(local_418,0x400,"{\"msgId\":\"initDriver\",\"code\":\"%s\"}",param_2);
  local_518 = 5000;
  local_520 = local_4a0;
  local_528 = 0;
  iVar2 = thunk_FUN_1812fe010(param_1,local_418,uVar1,0);
  if (iVar2 == 0) {
    uVar1 = 1;
  }
  else {
    thunk_FUN_1812d5b40(local_478,local_4a0);
    local_4c0[1] = 0;
    local_4c0[2] = _DAT_183222c50;
    uStack_4a8 = _UNK_183222c58;
    local_4c0[0] = 0;
    uStack_4f8 = 0;
    local_4f0 = _DAT_18322bf80;
    uStack_4e8 = _UNK_18322bf88;
    local_500 = (ulonglong)CONCAT14(DAT_18324f634,DAT_18324f630);
    thunk_FUN_1812da9f0(local_478,&local_500,local_4c0);
    if (0xf < uStack_4e8) {
      uVar4 = uStack_4e8 + 1;
      uVar5 = local_500;
      if (0xfff < uVar4) {
        uVar4 = uStack_4e8 + 0x28;
        uVar5 = *(ulonglong *)(local_500 - 8);
        if (0x1f < (local_500 - uVar5) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(uVar5,uVar4);
    }
    local_4e0[1] = 0;
    local_4e0[2] = _DAT_183222c50;
    uStack_4c8 = _UNK_183222c58;
    local_4e0[0] = 0;
    uStack_4f8 = 0;
    local_4f0 = _DAT_18322bfa0;
    uStack_4e8 = _UNK_18322bfa8;
    local_500 = (ulonglong)CONCAT24(s_result_18323d8d4._4_2_,s_result_18323d8d4._0_4_);
    thunk_FUN_1812da9f0(local_478,&local_500,local_4e0);
    if (0xf < uStack_4e8) {
      uVar4 = uStack_4e8 + 1;
      uVar5 = local_500;
      if (0xfff < uVar4) {
        uVar4 = uStack_4e8 + 0x28;
        uVar5 = *(ulonglong *)(local_500 - 8);
        if (0x1f < (local_500 - uVar5) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(uVar5,uVar4);
    }
    local_508[0] = 0;
    uStack_4f8 = 0;
    local_4f0 = _DAT_18322bf60;
    uStack_4e8 = _UNK_18322bf68;
    local_500 = 0x65646f63;
    thunk_FUN_1812da670(local_478,&local_500,local_508);
    if (0xf < uStack_4e8) {
      uVar5 = uStack_4e8 + 1;
      lVar3 = local_500;
      if (0xfff < uVar5) {
        uVar5 = uStack_4e8 + 0x28;
        lVar3 = *(longlong *)(local_500 + -8);
        if (0x1f < (local_500 - lVar3) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(lVar3,uVar5);
    }
    uVar1 = local_508[0];
    if (0xf < uStack_4c8) {
      uVar4 = uStack_4c8 + 1;
      uVar5 = local_4e0[0];
      if (0xfff < uVar4) {
        uVar4 = uStack_4c8 + 0x28;
        uVar5 = *(ulonglong *)(local_4e0[0] - 8);
        if (0x1f < (local_4e0[0] - uVar5) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(uVar5,uVar4);
    }
    local_4e0[2] = _DAT_183222c50;
    uStack_4c8 = _UNK_183222c58;
    local_4e0[0] = local_4e0[0] & 0xffffffffffffff00;
    if (0xf < uStack_4a8) {
      uVar5 = uStack_4a8 + 1;
      if (0xfff < uVar5) {
        uVar5 = uStack_4a8 + 0x28;
        if (0x1f < (local_4c0[0] - *(longlong *)(local_4c0[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(_DAT_183222c50,uVar5);
    }
    local_4c0[2] = _DAT_183222c50;
    uStack_4a8 = _UNK_183222c58;
    local_4c0[0] = local_4c0[0] & 0xffffffffffffff00;
    thunk_FUN_1812d6290(local_478);
  }
  if (0xf < uStack_488) {
    uVar5 = uStack_488 + 1;
    lVar3 = local_4a0[0];
    if (0xfff < uVar5) {
      uVar5 = uStack_488 + 0x28;
      lVar3 = *(longlong *)(local_4a0[0] + -8);
      if (0x1f < (local_4a0[0] - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(lVar3,uVar5);
  }
  return uVar1;
}


