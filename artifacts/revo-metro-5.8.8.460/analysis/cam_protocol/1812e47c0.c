// 1812e47c0  size=0x429  str:"streamType"

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1812e47c0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 ****ppppuVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  void *pvVar10;
  char *pcVar11;
  undefined1 auStack_998 [32];
  ulonglong local_978;
  undefined4 local_968;
  undefined4 local_964;
  undefined4 local_960;
  float local_95c;
  undefined8 ***local_958;
  undefined8 uStack_950;
  longlong local_948;
  ulonglong local_940;
  ulonglong local_938;
  ulonglong uStack_930;
  undefined8 local_928;
  ulonglong uStack_920;
  longlong local_918;
  ulonglong uStack_910;
  undefined8 local_908;
  ulonglong uStack_900;
  char local_8f8 [208];
  char local_828 [1024];
  undefined1 local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_183dc69c0 ^ (ulonglong)auStack_998;
  local_968 = 0;
  if (*(longlong *)(param_1 + 0x19090) == 0) {
    memset(local_428,0,0x400);
    local_978._0_4_ = 3;
    uVar4 = snprintf(local_428,0x400,
                     "{\"msgId\":\"%sRsp\",\"result\":\"camera is nullptr\",\"code\":%d}",
                     "RPCServerCamera::getProperty");
    thunk_FUN_18317f440(local_428);
    local_978 = CONCAT44(local_978._4_4_,0xffffffff);
    thunk_FUN_1812eb750(param_1,1,local_428,uVar4);
    return;
  }
  uStack_950 = 0;
  local_948 = 0;
  local_940 = 0xf;
  local_958 = (undefined8 ****)0x0;
  local_960 = 0;
  local_964 = 0;
  memset(local_828,0,0x400);
  local_908 = _DAT_18322c020;
  uStack_900 = _UNK_18322c028;
  local_918._0_1_ = s_streamType_18324fe18[0];
  local_918._1_1_ = s_streamType_18324fe18[1];
  local_918._2_1_ = s_streamType_18324fe18[2];
  local_918._3_1_ = s_streamType_18324fe18[3];
  local_918._4_1_ = s_streamType_18324fe18[4];
  local_918._5_1_ = s_streamType_18324fe18[5];
  local_918._6_1_ = s_streamType_18324fe18[6];
  local_918._7_1_ = s_streamType_18324fe18[7];
  uStack_910 = (ulonglong)(ushort)s_streamType_18324fe18._8_2_;
  bVar1 = false;
  local_968 = 1;
  cVar3 = thunk_FUN_1812da670(param_2,&local_918,&local_960);
  if (cVar3 == '\0') {
LAB_1812e4949:
    bVar2 = true;
  }
  else {
    local_928 = _DAT_183242500;
    uStack_920 = _UNK_183242508;
    local_938._0_1_ = s_propertyType_1832501c0[0];
    local_938._1_1_ = s_propertyType_1832501c0[1];
    local_938._2_1_ = s_propertyType_1832501c0[2];
    local_938._3_1_ = s_propertyType_1832501c0[3];
    local_938._4_1_ = s_propertyType_1832501c0[4];
    local_938._5_1_ = s_propertyType_1832501c0[5];
    local_938._6_1_ = s_propertyType_1832501c0[6];
    local_938._7_1_ = s_propertyType_1832501c0[7];
    uStack_930 = (ulonglong)(uint)s_propertyType_1832501c0._8_4_;
    bVar1 = true;
    local_968 = 3;
    cVar3 = thunk_FUN_1812da670(param_2,&local_938,&local_964);
    if (cVar3 == '\0') goto LAB_1812e4949;
    bVar2 = false;
  }
  if (bVar1) {
    if (0xf < uStack_920) {
      uVar8 = uStack_920 + 1;
      uVar9 = local_938;
      if (0xfff < uVar8) {
        uVar8 = uStack_920 + 0x28;
        uVar9 = *(ulonglong *)(local_938 - 8);
        if (0x1f < (local_938 - uVar9) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(uVar9,uVar8);
    }
    local_928 = _DAT_183222c50;
    uStack_920 = _UNK_183222c58;
    local_938 = local_938 & 0xffffffffffffff00;
  }
  if (0xf < uStack_900) {
    uVar9 = uStack_900 + 1;
    lVar6 = local_918;
    if (0xfff < uVar9) {
      uVar9 = uStack_900 + 0x28;
      lVar6 = *(longlong *)(local_918 + -8);
      if (0x1f < (local_918 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(lVar6,uVar9);
  }
  if (bVar2) {
    pcVar11 = "{\"msgId\":\"getPropertyRsp\",\"result\":\"paramError\",\"code\":%d}";
    iVar5 = 1;
  }
  else {
    local_95c = 0.0;
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x19090) + 0xb0))
                      (*(longlong **)(param_1 + 0x19090),local_960,local_964,&local_95c);
    if (iVar5 == 0) {
      snprintf(local_828,0x400,"{\"msgId\":\"getPropertyRsp\",\"result\":\"success\",\"code\":%d,",0
              );
      uVar9 = 0xffffffffffffffff;
      do {
        uVar8 = uVar9 + 1;
        lVar6 = uVar9 + 1;
        uVar9 = uVar8;
      } while (local_828[lVar6] != '\0');
      if (local_940 - local_948 < uVar8) {
        local_978 = uVar8;
        thunk_FUN_1811bf380(&local_958,uVar8,0,local_828);
      }
      else {
        ppppuVar7 = &local_958;
        if (0xf < local_940) {
          ppppuVar7 = (undefined8 ****)local_958;
        }
        pvVar10 = (void *)((longlong)ppppuVar7 + local_948);
        local_948 = local_948 + uVar8;
        memmove(pvVar10,local_828,uVar8);
        *(undefined1 *)(uVar8 + (longlong)pvVar10) = 0;
      }
      snprintf(local_8f8,200,"\"val\":%f}",(double)local_95c);
      uVar9 = 0xffffffffffffffff;
      do {
        uVar8 = uVar9 + 1;
        lVar6 = uVar9 + 1;
        uVar9 = uVar8;
      } while (local_8f8[lVar6] != '\0');
      if (local_940 - local_948 < uVar8) {
        local_978 = uVar8;
        thunk_FUN_1811bf380(&local_958,uVar8,0,local_8f8);
      }
      else {
        ppppuVar7 = &local_958;
        if (0xf < local_940) {
          ppppuVar7 = (undefined8 ****)local_958;
        }
        pvVar10 = (void *)((longlong)ppppuVar7 + local_948);
        local_948 = local_948 + uVar8;
        memmove(pvVar10,local_8f8,uVar8);
        *(undefined1 *)(uVar8 + (longlong)pvVar10) = 0;
      }
      thunk_FUN_1812eb710(param_1,&local_958);
      goto LAB_1812e4b85;
    }
    pcVar11 = "{\"msgId\":\"getPropertyRsp\",\"result\":\"failed\",\"code\":%d}";
  }
  uVar4 = snprintf(local_828,0x400,pcVar11,iVar5);
  local_978 = CONCAT44(local_978._4_4_,0xffffffff);
  thunk_FUN_1812eb750(param_1,1,local_828,uVar4);
LAB_1812e4b85:
  if (0xf < local_940) {
    uVar9 = local_940 + 1;
    ppppuVar7 = (undefined8 ****)local_958;
    if (0xfff < uVar9) {
      uVar9 = local_940 + 0x28;
      ppppuVar7 = (undefined8 ****)local_958[-1];
      if (0x1f < (ulonglong)((longlong)local_958 + (-8 - (longlong)ppppuVar7))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(ppppuVar7,uVar9);
  }
  return;
}


