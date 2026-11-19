// 1812ff260  size=0x2c4  str:"setProperty"

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1812ff260(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auStack_538 [32];
  int local_518;
  longlong *local_510;
  undefined4 local_508;
  uint local_4f8 [2];
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  ulonglong uStack_4d8;
  ulonglong local_4d0 [3];
  ulonglong uStack_4b8;
  longlong local_4b0 [3];
  ulonglong uStack_498;
  undefined1 local_488 [96];
  undefined1 local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_183dc69c0 ^ (ulonglong)auStack_538;
  if (param_2 == 0x1111) {
    uVar3 = thunk_FUN_181301340(param_1,param_3);
  }
  else {
    if (param_2 == 0xffff) {
      thunk_FUN_18317f440("[SDK DEBUG] RPCClient setPropertyExtension execute cmd:%s\n",param_3);
    }
    local_518 = param_2;
    uVar1 = snprintf(local_428,0x400,
                     "{\"msgId\":\"setPropertyExtension\",\"valLen\":%d,\"propertyType\":%d}",0x5e8)
    ;
    local_4b0[1] = 0;
    local_4b0[2] = _DAT_183222c50;
    uStack_498 = _UNK_183222c58;
    local_4b0[0] = 0;
    local_508 = 500;
    local_510 = local_4b0;
    local_518 = 0x5e8;
    iVar2 = thunk_FUN_1812fe010(param_1,local_428,uVar1,param_3);
    if (iVar2 == 0) {
      thunk_FUN_18317f440("setPropertyExtension not response:%s\n",local_428);
      uVar6 = 1;
    }
    else {
      thunk_FUN_1812d5b40(local_488,local_4b0);
      local_4d0[1] = 0;
      local_4d0[2] = _DAT_183222c50;
      uStack_4b8 = _UNK_183222c58;
      local_4d0[0] = 0;
      uStack_4e8 = 0;
      local_4e0 = _DAT_18322bfa0;
      uStack_4d8 = _UNK_18322bfa8;
      local_4f0 = (ulonglong)CONCAT24(s_result_18323d8d4._4_2_,s_result_18323d8d4._0_4_);
      thunk_FUN_1812da9f0(local_488,&local_4f0,local_4d0);
      if (0xf < uStack_4d8) {
        uVar5 = uStack_4d8 + 1;
        uVar3 = local_4f0;
        if (0xfff < uVar5) {
          uVar5 = uStack_4d8 + 0x28;
          uVar3 = *(ulonglong *)(local_4f0 - 8);
          if (0x1f < (local_4f0 - uVar3) - 8) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_18001e0e2(uVar3,uVar5);
      }
      local_4f8[0] = 0;
      uStack_4e8 = 0;
      local_4e0 = _DAT_18322bf60;
      uStack_4d8 = _UNK_18322bf68;
      local_4f0 = 0x65646f63;
      thunk_FUN_1812da670(local_488,&local_4f0,local_4f8);
      if (0xf < uStack_4d8) {
        uVar3 = uStack_4d8 + 1;
        lVar4 = local_4f0;
        if (0xfff < uVar3) {
          uVar3 = uStack_4d8 + 0x28;
          lVar4 = *(longlong *)(local_4f0 + -8);
          if (0x1f < (local_4f0 - lVar4) - 8) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_18001e0e2(lVar4,uVar3);
      }
      uVar6 = local_4f8[0];
      if (0xf < uStack_4b8) {
        uVar5 = uStack_4b8 + 1;
        uVar3 = local_4d0[0];
        if (0xfff < uVar5) {
          uVar5 = uStack_4b8 + 0x28;
          uVar3 = *(ulonglong *)(local_4d0[0] - 8);
          if (0x1f < (local_4d0[0] - uVar3) - 8) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_18001e0e2(uVar3,uVar5);
      }
      local_4d0[2] = _DAT_183222c50;
      uStack_4b8 = _UNK_183222c58;
      local_4d0[0] = local_4d0[0] & 0xffffffffffffff00;
      thunk_FUN_1812d6290(local_488);
    }
    if (0xf < uStack_498) {
      uVar3 = uStack_498 + 1;
      lVar4 = local_4b0[0];
      if (0xfff < uVar3) {
        uVar3 = uStack_498 + 0x28;
        lVar4 = *(longlong *)(local_4b0[0] + -8);
        if (0x1f < (local_4b0[0] - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(lVar4,uVar3);
    }
    uVar3 = (ulonglong)uVar6;
  }
  return uVar3;
}


