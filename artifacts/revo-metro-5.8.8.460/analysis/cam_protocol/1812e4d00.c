// 1812e4d00  size=0x3e0  str:"streamType"

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1812e4d00(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined1 auStack_8f8 [32];
  undefined4 local_8d8;
  undefined4 local_8c8;
  int local_8c4;
  int local_8c0;
  undefined4 local_8bc;
  ulonglong local_8b8 [3];
  ulonglong uStack_8a0;
  ulonglong local_898;
  ulonglong uStack_890;
  undefined8 local_888;
  ulonglong uStack_880;
  longlong local_878;
  ulonglong uStack_870;
  undefined8 local_868;
  ulonglong uStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  ulonglong uStack_840;
  undefined1 local_838 [1024];
  undefined1 local_438 [1024];
  ulonglong local_38;
  
  uVar9 = _UNK_183222c58;
  uVar11 = _DAT_183222c50;
  local_38 = DAT_183dc69c0 ^ (ulonglong)auStack_8f8;
  local_8c8 = 0;
  if (*(longlong *)(param_1 + 0x19090) == 0) {
    memset(local_438,0,0x400);
    local_8d8 = 3;
    uVar5 = snprintf(local_438,0x400,
                     "{\"msgId\":\"%sRsp\",\"result\":\"camera is nullptr\",\"code\":%d}",
                     "RPCServerCamera::setProperty");
    thunk_FUN_18317f440(local_438);
    local_8d8 = 0xffffffff;
    thunk_FUN_1812eb750(param_1,1,local_438,uVar5);
    return;
  }
  uStack_850 = 0;
  local_848 = _DAT_183222c50;
  uStack_840 = _UNK_183222c58;
  local_858 = 0;
  local_8c4 = 0;
  local_8c0 = 0;
  local_8bc = 0;
  memset(local_838,0,0x400);
  local_868 = _DAT_18322c020;
  uStack_860 = _UNK_18322c028;
  local_878._0_1_ = s_streamType_18324fe18[0];
  local_878._1_1_ = s_streamType_18324fe18[1];
  local_878._2_1_ = s_streamType_18324fe18[2];
  local_878._3_1_ = s_streamType_18324fe18[3];
  local_878._4_1_ = s_streamType_18324fe18[4];
  local_878._5_1_ = s_streamType_18324fe18[5];
  local_878._6_1_ = s_streamType_18324fe18[6];
  local_878._7_1_ = s_streamType_18324fe18[7];
  uStack_870 = (ulonglong)(ushort)s_streamType_18324fe18._8_2_;
  bVar2 = false;
  bVar1 = false;
  local_8c8 = 1;
  cVar4 = thunk_FUN_1812da670(param_2,&local_878,&local_8c4);
  if (cVar4 != '\0') {
    local_888 = _DAT_183242500;
    uStack_880 = _UNK_183242508;
    local_898._0_1_ = s_propertyType_1832501c0[0];
    local_898._1_1_ = s_propertyType_1832501c0[1];
    local_898._2_1_ = s_propertyType_1832501c0[2];
    local_898._3_1_ = s_propertyType_1832501c0[3];
    local_898._4_1_ = s_propertyType_1832501c0[4];
    local_898._5_1_ = s_propertyType_1832501c0[5];
    local_898._6_1_ = s_propertyType_1832501c0[6];
    local_898._7_1_ = s_propertyType_1832501c0[7];
    uStack_890 = (ulonglong)(uint)s_propertyType_1832501c0._8_4_;
    bVar1 = false;
    local_8c8 = 3;
    cVar4 = thunk_FUN_1812da670(param_2,&local_898,&local_8c0);
    if (cVar4 != '\0') {
      local_8b8[1] = 0;
      local_8b8[2] = _DAT_1832276a0;
      uStack_8a0 = _UNK_1832276a8;
      local_8b8[0] = (ulonglong)(uint3)DAT_183244378;
      bVar2 = true;
      bVar1 = true;
      local_8c8 = 7;
      cVar4 = thunk_FUN_1812da790(param_2,local_8b8,&local_8bc);
      if (cVar4 != '\0') {
        bVar3 = false;
        goto LAB_1812e4ef1;
      }
    }
    bVar2 = true;
    uVar11 = _DAT_183222c50;
    uVar9 = _UNK_183222c58;
  }
  bVar3 = true;
LAB_1812e4ef1:
  if (bVar1) {
    if (0xf < uStack_8a0) {
      uVar8 = uStack_8a0 + 1;
      uVar9 = local_8b8[0];
      if (0xfff < uVar8) {
        uVar8 = uStack_8a0 + 0x28;
        uVar9 = *(ulonglong *)(local_8b8[0] - 8);
        if (0x1f < (local_8b8[0] - uVar9) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(uVar9,uVar8);
      uVar11 = _DAT_183222c50;
      uVar9 = _UNK_183222c58;
    }
    local_8b8[0] = local_8b8[0] & 0xffffffffffffff00;
    local_8b8[2] = uVar11;
    uStack_8a0 = uVar9;
  }
  if (bVar2) {
    if (0xf < uStack_880) {
      uVar8 = uStack_880 + 1;
      uVar9 = local_898;
      if (0xfff < uVar8) {
        uVar8 = uStack_880 + 0x28;
        uVar9 = *(ulonglong *)(local_898 - 8);
        if (0x1f < (local_898 - uVar9) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(uVar9,uVar8);
      uVar11 = _DAT_183222c50;
      uVar9 = _UNK_183222c58;
    }
    local_898 = local_898 & 0xffffffffffffff00;
    local_888 = uVar11;
    uStack_880 = uVar9;
  }
  if (0xf < uStack_860) {
    uVar9 = uStack_860 + 1;
    lVar7 = local_878;
    if (0xfff < uVar9) {
      uVar9 = uStack_860 + 0x28;
      lVar7 = *(longlong *)(local_878 + -8);
      if (0x1f < (local_878 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(lVar7,uVar9);
  }
  if (bVar3) {
    pcVar10 = "{\"msgId\":\"setPropertyRsp\",\"result\":\"paramError\",\"code\":%d}";
    iVar6 = 1;
  }
  else {
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x19090) + 0xb8))
                      (*(longlong **)(param_1 + 0x19090),local_8c4,local_8c0,local_8bc);
    if (iVar6 == 0) {
      uVar5 = snprintf(local_838,0x400,
                       "{\"msgId\":\"setPropertyRsp\",\"result\":\"success\",\"code\":%d}",0);
      local_8d8 = 0xffffffff;
      thunk_FUN_1812eb750(param_1,1,local_838,uVar5);
      if (local_8c4 != 1) {
        return;
      }
      if (local_8c0 != 1) {
        return;
      }
      thunk_FUN_183180a00(local_8b8,param_1 + 0x190b0);
      *(undefined1 *)(param_1 + 0x190aa) = 1;
      thunk_FUN_183180a90(local_8b8);
      return;
    }
    pcVar10 = "{\"msgId\":\"setPropertyRsp\",\"result\":\"failed\",\"code\":%d}";
  }
  uVar5 = snprintf(local_838,0x400,pcVar10,iVar6);
  local_8d8 = 0xffffffff;
  thunk_FUN_1812eb750(param_1,1,local_838,uVar5);
  return;
}


