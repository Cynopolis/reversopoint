// 1812e37f0  size=0x55d  str:"streamType"

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1812e37f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  char *pcVar14;
  undefined1 auStack_948 [32];
  longlong local_928;
  undefined4 local_918;
  int local_914;
  undefined4 local_910;
  undefined4 local_90c;
  undefined4 local_908;
  int local_904 [3];
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  ulonglong uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  ulonglong uStack_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  ulonglong uStack_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
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
  
  uVar13 = _UNK_183222c58;
  uVar10 = _DAT_183222c50;
  local_38 = DAT_183dc69c0 ^ (ulonglong)auStack_948;
  local_918 = 0;
  if (*(longlong *)(param_1 + 0x19090) == 0) {
    memset(local_438,0,0x400);
    local_928._0_4_ = 3;
    uVar8 = snprintf(local_438,0x400,
                     "{\"msgId\":\"%sRsp\",\"result\":\"camera is nullptr\",\"code\":%d}",
                     "RPCServerCamera::startStream");
    thunk_FUN_18317f440(local_438);
    local_928 = CONCAT44(local_928._4_4_,0xffffffff);
    thunk_FUN_1812eb750(param_1,1,local_438,uVar8);
    return;
  }
  uStack_850 = 0;
  local_848 = _DAT_183222c50;
  uStack_840 = _UNK_183222c58;
  local_858 = 0;
  local_914 = 0;
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
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_918 = 1;
  cVar7 = thunk_FUN_1812da670(param_2,&local_878,&local_914);
  if (cVar7 == '\0') {
LAB_1812e3a6d:
    bVar6 = true;
  }
  else {
    uStack_890 = 0;
    local_888 = _DAT_18322bfa0;
    uStack_880 = _UNK_18322bfa8;
    local_898 = (ulonglong)CONCAT24(s_format_18322a528._4_2_,s_format_18322a528._0_4_);
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
    local_918 = 3;
    cVar7 = thunk_FUN_1812da670(param_2,&local_898,&local_910);
    if (cVar7 == '\0') {
LAB_1812e3a65:
      bVar5 = true;
      uVar10 = _DAT_183222c50;
      uVar13 = _UNK_183222c58;
      goto LAB_1812e3a6d;
    }
    uStack_8b0 = 0;
    local_8a8 = _DAT_18322bf80;
    uStack_8a0 = _UNK_18322bf88;
    local_8b8 = (ulonglong)CONCAT14(s_width_18322a530[4],s_width_18322a530._0_4_);
    bVar4 = true;
    bVar3 = false;
    bVar2 = false;
    local_918 = 7;
    cVar7 = thunk_FUN_1812da670(param_2,&local_8b8,&local_90c);
    if (cVar7 == '\0') goto LAB_1812e3a65;
    uStack_8d0 = 0;
    local_8c8 = _DAT_18322bfa0;
    uStack_8c0 = _UNK_18322bfa8;
    local_8d8 = (ulonglong)CONCAT24(s_height_18322a538._4_2_,s_height_18322a538._0_4_);
    bVar4 = true;
    bVar3 = true;
    bVar2 = false;
    local_918 = 0xf;
    cVar7 = thunk_FUN_1812da670(param_2,&local_8d8,&local_908);
    if (cVar7 == '\0') goto LAB_1812e3a65;
    uStack_8f0 = 0;
    local_8e8 = _DAT_1832276a0;
    uStack_8e0 = _UNK_1832276a8;
    local_8f8 = (ulonglong)(uint3)DAT_18322a540;
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    local_918 = 0x1f;
    cVar7 = thunk_FUN_1812da670(param_2,&local_8f8,local_904);
    if (cVar7 == '\0') goto LAB_1812e3a65;
    bVar6 = false;
  }
  if (bVar2) {
    if (0xf < uStack_8e0) {
      uVar12 = uStack_8e0 + 1;
      uVar13 = local_8f8;
      if (0xfff < uVar12) {
        uVar12 = uStack_8e0 + 0x28;
        uVar13 = *(ulonglong *)(local_8f8 - 8);
        if (0x1f < (local_8f8 - uVar13) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(uVar13,uVar12);
      uVar10 = _DAT_183222c50;
      uVar13 = _UNK_183222c58;
    }
    local_8f8 = local_8f8 & 0xffffffffffffff00;
    local_8e8 = uVar10;
    uStack_8e0 = uVar13;
  }
  if (bVar3) {
    if (0xf < uStack_8c0) {
      uVar12 = uStack_8c0 + 1;
      uVar13 = local_8d8;
      if (0xfff < uVar12) {
        uVar12 = uStack_8c0 + 0x28;
        uVar13 = *(ulonglong *)(local_8d8 - 8);
        if (0x1f < (local_8d8 - uVar13) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(uVar13,uVar12);
      uVar10 = _DAT_183222c50;
      uVar13 = _UNK_183222c58;
    }
    local_8d8 = local_8d8 & 0xffffffffffffff00;
    local_8c8 = uVar10;
    uStack_8c0 = uVar13;
  }
  if (bVar4) {
    if (0xf < uStack_8a0) {
      uVar12 = uStack_8a0 + 1;
      uVar13 = local_8b8;
      if (0xfff < uVar12) {
        uVar12 = uStack_8a0 + 0x28;
        uVar13 = *(ulonglong *)(local_8b8 - 8);
        if (0x1f < (local_8b8 - uVar13) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(uVar13,uVar12);
      uVar10 = _DAT_183222c50;
      uVar13 = _UNK_183222c58;
    }
    local_8b8 = local_8b8 & 0xffffffffffffff00;
    local_8a8 = uVar10;
    uStack_8a0 = uVar13;
  }
  if (bVar5) {
    if (0xf < uStack_880) {
      uVar12 = uStack_880 + 1;
      uVar13 = local_898;
      if (0xfff < uVar12) {
        uVar12 = uStack_880 + 0x28;
        uVar13 = *(ulonglong *)(local_898 - 8);
        if (0x1f < (local_898 - uVar13) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(uVar13,uVar12);
      uVar10 = _DAT_183222c50;
      uVar13 = _UNK_183222c58;
    }
    local_898 = local_898 & 0xffffffffffffff00;
    local_888 = uVar10;
    uStack_880 = uVar13;
  }
  if (0xf < uStack_860) {
    uVar13 = uStack_860 + 1;
    lVar11 = local_878;
    if (0xfff < uVar13) {
      uVar13 = uStack_860 + 0x28;
      lVar11 = *(longlong *)(local_878 + -8);
      if (0x1f < (local_878 - lVar11) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(lVar11,uVar13);
  }
  if (bVar6) {
    pcVar14 = "{\"msgId\":\"startStreamRsp\",\"result\":\"paramError\",\"code\":%d}";
    iVar9 = 1;
    goto LAB_1812e3ce3;
  }
  local_8f8 = CONCAT44(local_90c,local_910);
  uStack_8f0 = CONCAT44((float)local_904[0],local_908);
  plVar1 = *(longlong **)(param_1 + 0x19090);
  local_928 = param_1;
  if (local_914 == 1) {
    iVar9 = (**(code **)(*plVar1 + 0x40))(plVar1,1,&local_8f8,&LAB_180027dc7);
    if (iVar9 != 0) {
LAB_1812e3d46:
      pcVar14 = "{\"msgId\":\"startStreamRsp\",\"result\":\"failed\",\"code\":%d}";
      goto LAB_1812e3ce3;
    }
    if (*(longlong *)(param_1 + 0x40) == 0) {
      *(undefined1 *)(param_1 + 0x30) = 1;
      DAT_183dced15 = 0;
      thunk_FUN_18317f440("[SDK TRACE] csCreateServiceThread RPCServerCamera::pushPropertyThread, %p,%p\n"
                          ,&LAB_180016df6,param_1);
      uVar10 = thunk_FUN_1831807d0(&LAB_180016df6,param_1);
      *(undefined8 *)(param_1 + 0x40) = uVar10;
    }
  }
  else {
    iVar9 = (**(code **)(*plVar1 + 0x40))(plVar1,local_914,&local_8f8,&LAB_1800257d4);
    if (iVar9 != 0) goto LAB_1812e3d46;
  }
  *(undefined4 *)(param_1 + 0x190c4 + (longlong)local_914 * 4) = local_910;
  iVar9 = 0;
  pcVar14 = "{\"msgId\":\"startStreamRsp\",\"result\":\"success\",\"code\":%d}";
LAB_1812e3ce3:
  uVar8 = snprintf(local_838,0x400,pcVar14,iVar9);
  local_928 = CONCAT44(local_928._4_4_,0xffffffff);
  thunk_FUN_1812eb750(param_1,1,local_838,uVar8);
  return;
}


