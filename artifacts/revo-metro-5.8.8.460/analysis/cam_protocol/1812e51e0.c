// 1812e51e0  size=0x378  str:"propertyType"

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1812e51e0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined1 auStack_10c8 [32];
  undefined4 local_10a8;
  undefined4 local_1098;
  int local_1094;
  undefined4 local_1090 [2];
  undefined1 local_1088 [1520];
  ulonglong local_a98;
  ulonglong uStack_a90;
  undefined8 local_a88;
  ulonglong uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  ulonglong uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  ulonglong uStack_a40;
  undefined1 local_a38 [1520];
  undefined1 local_448 [1024];
  ulonglong local_48;
  
  uVar8 = _UNK_183222c58;
  uVar10 = _DAT_183222c50;
  local_48 = DAT_183dc69c0 ^ (ulonglong)auStack_10c8;
  local_1098 = 0;
  if (*(longlong *)(param_1 + 0x19090) == 0) {
    memset(local_a38,0,0x400);
    local_10a8 = 3;
    uVar5 = snprintf(local_a38,0x400,
                     "{\"msgId\":\"%sRsp\",\"result\":\"camera is nullptr\",\"code\":%d}",
                     "RPCServerCamera::setPropertyExtension");
    thunk_FUN_18317f440(local_a38);
    local_10a8 = 0xffffffff;
    thunk_FUN_1812eb750(param_1,1,local_a38,uVar5);
    return;
  }
  uStack_a50 = 0;
  local_a48 = _DAT_183222c50;
  uStack_a40 = _UNK_183222c58;
  local_a58 = 0;
  local_1090[0] = 0;
  local_1094 = 0;
  memset(local_448,0,0x400);
  uStack_a70 = 0;
  local_a68 = _DAT_18322bfa0;
  uStack_a60 = _UNK_18322bfa8;
  local_a78 = (ulonglong)CONCAT24(s_valLen_183250520._4_2_,s_valLen_183250520._0_4_);
  bVar2 = false;
  local_1098 = 1;
  cVar4 = thunk_FUN_1812da670(param_2,&local_a78,&local_1094);
  if (cVar4 != '\0') {
    local_a88 = _DAT_183242500;
    uStack_a80 = _UNK_183242508;
    local_a98._0_1_ = s_propertyType_1832501c0[0];
    local_a98._1_1_ = s_propertyType_1832501c0[1];
    local_a98._2_1_ = s_propertyType_1832501c0[2];
    local_a98._3_1_ = s_propertyType_1832501c0[3];
    local_a98._4_1_ = s_propertyType_1832501c0[4];
    local_a98._5_1_ = s_propertyType_1832501c0[5];
    local_a98._6_1_ = s_propertyType_1832501c0[6];
    local_a98._7_1_ = s_propertyType_1832501c0[7];
    uStack_a90 = (ulonglong)(uint)s_propertyType_1832501c0._8_4_;
    bVar2 = true;
    local_1098 = 3;
    cVar4 = thunk_FUN_1812da670(param_2,&local_a98,local_1090);
    if (cVar4 != '\0') {
      bVar3 = false;
      goto LAB_1812e539e;
    }
  }
  bVar3 = true;
LAB_1812e539e:
  if (bVar2) {
    if (0xf < uStack_a80) {
      if ((0xfff < uStack_a80 + 1) && (0x1f < (local_a98 - *(longlong *)(local_a98 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18001e0e2();
      uVar10 = _DAT_183222c50;
      uVar8 = _UNK_183222c58;
    }
    local_a98 = local_a98 & 0xffffffffffffff00;
    local_a88 = uVar10;
    uStack_a80 = uVar8;
  }
  if (0xf < uStack_a60) {
    if ((0xfff < uStack_a60 + 1) && (0x1f < (local_a78 - *(longlong *)(local_a78 - 8)) - 8)) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18001e0e2();
  }
  if ((bVar3) || (uVar8 = (ulonglong)local_1094, 0x5e8 < uVar8)) {
    pcVar9 = "{\"msgId\":\"setPropertyExtensionRsp\",\"result\":\"paramError\",\"code\":%d}";
    iVar6 = 1;
  }
  else {
    memset(local_a38,0,0x5e8);
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (*(char *)(param_3 + lVar7) != '\0');
    memcpy(local_a38,(void *)(param_3 + 1 + lVar7),uVar8);
    plVar1 = *(longlong **)(param_1 + 0x19090);
    memcpy(local_1088,local_a38,0x5e8);
    iVar6 = (**(code **)(*plVar1 + 0xc0))(plVar1,local_1090[0],local_1088);
    if (iVar6 == 0) {
      iVar6 = 0;
      pcVar9 = "{\"msgId\":\"setPropertyExtensionRsp\",\"result\":\"success\",\"code\":%d}";
    }
    else {
      pcVar9 = "{\"msgId\":\"setPropertyExtensionRsp\",\"result\":\"failed\",\"code\":%d}";
    }
  }
  uVar5 = snprintf(local_448,0x400,pcVar9,iVar6);
  local_10a8 = 0xffffffff;
  thunk_FUN_1812eb750(param_1,1,local_448,uVar5);
  return;
}


