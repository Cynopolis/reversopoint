// 1812e41b0  size=0x4d7  str:"streamType"

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1812e41b0(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 ****ppppuVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  void *pvVar11;
  double _Size;
  char *pcVar13;
  undefined1 auStack_9a8 [32];
  float *local_988;
  float *local_980;
  undefined4 local_978;
  undefined4 local_974;
  undefined4 local_970;
  float local_96c;
  float local_968;
  float local_964;
  undefined8 ***local_960;
  undefined8 uStack_958;
  ulonglong local_950;
  ulonglong local_948;
  ulonglong local_940;
  ulonglong uStack_938;
  undefined8 local_930;
  ulonglong uStack_928;
  longlong local_920;
  ulonglong uStack_918;
  undefined8 local_910;
  ulonglong uStack_908;
  char local_8f8 [208];
  char local_828 [1024];
  undefined1 local_428 [1024];
  ulonglong local_28;
  double dVar12;
  
  local_28 = DAT_183dc69c0 ^ (ulonglong)auStack_9a8;
  local_978 = 0;
  if (*(longlong *)(param_1 + 0x19090) == 0) {
    memset(local_428,0,0x400);
    local_988._0_4_ = 3;
    uVar5 = snprintf(local_428,0x400,
                     "{\"msgId\":\"%sRsp\",\"result\":\"camera is nullptr\",\"code\":%d}",
                     "RPCServerCamera::getPropertyRange");
    thunk_FUN_18317f440(local_428);
    local_988 = (float *)CONCAT44(local_988._4_4_,0xffffffff);
    thunk_FUN_1812eb750(param_1,1,local_428,uVar5);
    return;
  }
  uStack_958 = 0;
  local_950 = 0;
  local_948 = 0xf;
  local_960 = (undefined8 ****)0x0;
  local_970 = 0;
  local_974 = 0;
  memset(local_828,0,0x400);
  local_910 = _DAT_18322c020;
  uStack_908 = _UNK_18322c028;
  local_920._0_1_ = s_streamType_18324fe18[0];
  local_920._1_1_ = s_streamType_18324fe18[1];
  local_920._2_1_ = s_streamType_18324fe18[2];
  local_920._3_1_ = s_streamType_18324fe18[3];
  local_920._4_1_ = s_streamType_18324fe18[4];
  local_920._5_1_ = s_streamType_18324fe18[5];
  local_920._6_1_ = s_streamType_18324fe18[6];
  local_920._7_1_ = s_streamType_18324fe18[7];
  uStack_918 = (ulonglong)(ushort)s_streamType_18324fe18._8_2_;
  bVar2 = false;
  local_978 = 1;
  cVar4 = thunk_FUN_1812da670(param_2,&local_920,&local_970);
  if (cVar4 == '\0') {
LAB_1812e433c:
    bVar3 = true;
  }
  else {
    local_930 = _DAT_183242500;
    uStack_928 = _UNK_183242508;
    local_940._0_1_ = s_propertyType_1832501c0[0];
    local_940._1_1_ = s_propertyType_1832501c0[1];
    local_940._2_1_ = s_propertyType_1832501c0[2];
    local_940._3_1_ = s_propertyType_1832501c0[3];
    local_940._4_1_ = s_propertyType_1832501c0[4];
    local_940._5_1_ = s_propertyType_1832501c0[5];
    local_940._6_1_ = s_propertyType_1832501c0[6];
    local_940._7_1_ = s_propertyType_1832501c0[7];
    uStack_938 = (ulonglong)(uint)s_propertyType_1832501c0._8_4_;
    bVar2 = true;
    local_978 = 3;
    cVar4 = thunk_FUN_1812da670(param_2,&local_940,&local_974);
    if (cVar4 == '\0') goto LAB_1812e433c;
    bVar3 = false;
  }
  if (bVar2) {
    if (0xf < uStack_928) {
      uVar9 = uStack_928 + 1;
      uVar10 = local_940;
      if (0xfff < uVar9) {
        uVar9 = uStack_928 + 0x28;
        uVar10 = *(ulonglong *)(local_940 - 8);
        if (0x1f < (local_940 - uVar10) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(uVar10,uVar9);
    }
    local_930 = _DAT_183222c50;
    uStack_928 = _UNK_183222c58;
    local_940 = local_940 & 0xffffffffffffff00;
  }
  if (0xf < uStack_908) {
    uVar10 = uStack_908 + 1;
    lVar8 = local_920;
    if (0xfff < uVar10) {
      uVar10 = uStack_908 + 0x28;
      lVar8 = *(longlong *)(local_920 + -8);
      if (0x1f < (local_920 - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(lVar8,uVar10);
  }
  if (bVar3) {
    pcVar13 = "{\"msgId\":\"getPropertyRangeRsp\",\"result\":\"paramError\",\"code\":%d}";
    iVar6 = 1;
  }
  else {
    local_964 = 0.0;
    local_968 = 0.0;
    local_96c = 0.0;
    local_980 = &local_96c;
    local_988 = &local_968;
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x19090) + 0xa8))
                      (*(longlong **)(param_1 + 0x19090),local_970,local_974,&local_964);
    if (iVar6 == 0) {
      snprintf(local_828,0x400,
               "{\"msgId\":\"getPropertyRangeRsp\",\"result\":\"success\",\"code\":%d,",0);
      uVar10 = 0xffffffffffffffff;
      do {
        uVar9 = uVar10 + 1;
        lVar8 = uVar10 + 1;
        uVar10 = uVar9;
      } while (local_828[lVar8] != '\0');
      if (local_948 - local_950 < uVar9) {
        local_988 = (float *)uVar9;
        thunk_FUN_1811bf380(&local_960,uVar9,0,local_828);
      }
      else {
        ppppuVar7 = &local_960;
        if (0xf < local_948) {
          ppppuVar7 = (undefined8 ****)local_960;
        }
        pvVar11 = (void *)((longlong)ppppuVar7 + local_950);
        local_950 = local_950 + uVar9;
        memmove(pvVar11,local_828,uVar9);
        *(undefined1 *)((longlong)pvVar11 + uVar9) = 0;
      }
      local_980 = (float *)(double)local_96c;
      local_988 = (float *)(double)local_968;
      snprintf(local_8f8,200,"\"min\":%f,\"max\":%f,\"step\":%f}",(double)local_964);
      dVar12 = -NAN;
      do {
        _Size = (double)((longlong)dVar12 + 1);
        lVar8 = (longlong)dVar12 + 1;
        dVar12 = _Size;
      } while (local_8f8[lVar8] != '\0');
      if (local_948 - local_950 < (ulonglong)_Size) {
        local_988 = (float *)_Size;
        thunk_FUN_1811bf380(&local_960,_Size,0,local_8f8);
      }
      else {
        ppppuVar7 = &local_960;
        if (0xf < local_948) {
          ppppuVar7 = (undefined8 ****)local_960;
        }
        pvVar11 = (void *)((longlong)ppppuVar7 + local_950);
        local_950 = (longlong)_Size + local_950;
        memmove(pvVar11,local_8f8,(size_t)_Size);
        *(undefined1 *)((longlong)pvVar11 + (longlong)_Size) = 0;
      }
      if (local_948 == local_950) {
        local_988 = (float *)0x1;
        thunk_FUN_1811bf380(&local_960,1,0,&DAT_1832502dc);
      }
      else {
        ppppuVar7 = &local_960;
        if (0xf < local_948) {
          ppppuVar7 = (undefined8 ****)local_960;
        }
        puVar1 = (undefined2 *)((longlong)ppppuVar7 + local_950);
        local_950 = local_950 + 1;
        *puVar1 = 0x7d;
      }
      thunk_FUN_1812eb710(param_1,&local_960);
      goto LAB_1812e4623;
    }
    pcVar13 = "{\"msgId\":\"getPropertyRangeRsp\",\"result\":\"failed\",\"code\":%d}";
  }
  uVar5 = snprintf(local_828,0x400,pcVar13,iVar6);
  local_988 = (float *)CONCAT44(local_988._4_4_,0xffffffff);
  thunk_FUN_1812eb750(param_1,1,local_828,uVar5);
LAB_1812e4623:
  if (0xf < local_948) {
    uVar10 = local_948 + 1;
    ppppuVar7 = (undefined8 ****)local_960;
    if (0xfff < uVar10) {
      uVar10 = local_948 + 0x28;
      ppppuVar7 = (undefined8 ****)local_960[-1];
      if (0x1f < (ulonglong)((longlong)local_960 + (-8 - (longlong)ppppuVar7))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(ppppuVar7,uVar10);
  }
  return;
}


