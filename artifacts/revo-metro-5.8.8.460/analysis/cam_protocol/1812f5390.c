// 1812f5390  size=0x3cf  str:"msgId"

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1812f5390(longlong param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  longlong *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1d8 [2];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  ulonglong uStack_1b8;
  ulonglong local_1b0 [3];
  ulonglong uStack_198;
  ulonglong local_190 [3];
  ulonglong uStack_178;
  longlong local_170 [3];
  ulonglong uStack_158;
  undefined1 local_148 [96];
  undefined1 local_e8 [208];
  ulonglong local_18;
  
  local_18 = DAT_183dc69c0 ^ (ulonglong)auStack_218;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  memset(local_e8,0,200);
  pcVar6 = "{\"msgId\":\"disconnect\",\"restartService\":true}";
  if (param_2 == '\0') {
    pcVar6 = "{\"msgId\":\"disconnect\"}";
  }
  uVar1 = snprintf(local_e8,200,pcVar6);
  local_170[1] = 0;
  local_170[2] = _DAT_183222c50;
  uStack_158 = _UNK_183222c58;
  local_170[0] = 0;
  local_1e8 = 500;
  if (param_2 != '\0') {
    local_1e8 = 2000;
  }
  local_1f0 = local_170;
  local_1f8 = 0;
  iVar2 = thunk_FUN_1812fe010(param_1,local_e8,uVar1,0);
  if (iVar2 == 0) {
    thunk_FUN_18317f440("not response:%s\n",local_e8);
    uVar1 = 1;
  }
  else {
    thunk_FUN_1812d5b40(local_148,local_170);
    local_190[1] = 0;
    local_190[2] = _DAT_183222c50;
    uStack_178 = _UNK_183222c58;
    local_190[0] = 0;
    uStack_1c8 = 0;
    local_1c0 = _DAT_18322bf80;
    uStack_1b8 = _UNK_18322bf88;
    local_1d0 = (ulonglong)CONCAT14(DAT_18324f634,DAT_18324f630);
    thunk_FUN_1812da9f0(local_148,&local_1d0,local_190);
    if (0xf < uStack_1b8) {
      uVar4 = uStack_1b8 + 1;
      uVar5 = local_1d0;
      if (0xfff < uVar4) {
        uVar4 = uStack_1b8 + 0x28;
        uVar5 = *(ulonglong *)(local_1d0 - 8);
        if (0x1f < (local_1d0 - uVar5) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(uVar5,uVar4);
    }
    local_1b0[1] = 0;
    local_1b0[2] = _DAT_183222c50;
    uStack_198 = _UNK_183222c58;
    local_1b0[0] = 0;
    uStack_1c8 = 0;
    local_1c0 = _DAT_18322bfa0;
    uStack_1b8 = _UNK_18322bfa8;
    local_1d0 = (ulonglong)CONCAT24(s_result_18323d8d4._4_2_,s_result_18323d8d4._0_4_);
    thunk_FUN_1812da9f0(local_148,&local_1d0,local_1b0);
    if (0xf < uStack_1b8) {
      uVar4 = uStack_1b8 + 1;
      uVar5 = local_1d0;
      if (0xfff < uVar4) {
        uVar4 = uStack_1b8 + 0x28;
        uVar5 = *(ulonglong *)(local_1d0 - 8);
        if (0x1f < (local_1d0 - uVar5) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(uVar5,uVar4);
    }
    local_1d8[0] = 0;
    uStack_1c8 = 0;
    local_1c0 = _DAT_18322bf60;
    uStack_1b8 = _UNK_18322bf68;
    local_1d0 = 0x65646f63;
    thunk_FUN_1812da670(local_148,&local_1d0,local_1d8);
    if (0xf < uStack_1b8) {
      uVar5 = uStack_1b8 + 1;
      lVar3 = local_1d0;
      if (0xfff < uVar5) {
        uVar5 = uStack_1b8 + 0x28;
        lVar3 = *(longlong *)(local_1d0 + -8);
        if (0x1f < (local_1d0 - lVar3) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(lVar3,uVar5);
    }
    if (param_2 != '\0') {
      Sleep(100);
    }
    uVar1 = local_1d8[0];
    if (0xf < uStack_198) {
      uVar4 = uStack_198 + 1;
      uVar5 = local_1b0[0];
      if (0xfff < uVar4) {
        uVar4 = uStack_198 + 0x28;
        uVar5 = *(ulonglong *)(local_1b0[0] - 8);
        if (0x1f < (local_1b0[0] - uVar5) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(uVar5,uVar4);
    }
    local_1b0[2] = _DAT_183222c50;
    uStack_198 = _UNK_183222c58;
    local_1b0[0] = local_1b0[0] & 0xffffffffffffff00;
    if (0xf < uStack_178) {
      uVar5 = uStack_178 + 1;
      if (0xfff < uVar5) {
        uVar5 = uStack_178 + 0x28;
        if (0x1f < (local_190[0] - *(longlong *)(local_190[0] - 8)) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(_DAT_183222c50,uVar5);
    }
    local_190[2] = _DAT_183222c50;
    uStack_178 = _UNK_183222c58;
    local_190[0] = local_190[0] & 0xffffffffffffff00;
    thunk_FUN_1812d6290(local_148);
  }
  if (0xf < uStack_158) {
    uVar5 = uStack_158 + 1;
    lVar3 = local_170[0];
    if (0xfff < uVar5) {
      uVar5 = uStack_158 + 0x28;
      lVar3 = *(longlong *)(local_170[0] + -8);
      if (0x1f < (local_170[0] - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(lVar3,uVar5);
  }
  return uVar1;
}


