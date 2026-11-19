// 1812e3eb0  size=0x25c  str:"streamType"

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1812e3eb0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined1 auStack_8a8 [32];
  undefined4 local_888;
  int local_878 [2];
  longlong local_870;
  ulonglong uStack_868;
  undefined8 local_860;
  ulonglong uStack_858;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined1 local_828 [1024];
  undefined1 local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_183dc69c0 ^ (ulonglong)auStack_8a8;
  if (*(longlong *)(param_1 + 0x19090) == 0) {
    memset(local_428,0,0x400);
    local_888 = 3;
    uVar2 = snprintf(local_428,0x400,
                     "{\"msgId\":\"%sRsp\",\"result\":\"camera is nullptr\",\"code\":%d}",
                     "RPCServerCamera::stopStream");
    thunk_FUN_18317f440(local_428);
    local_888 = 0xffffffff;
    thunk_FUN_1812eb750(param_1,1,local_428,uVar2);
  }
  else {
    thunk_FUN_1812ead20();
    uStack_848 = 0;
    local_840 = _DAT_183222c50;
    uStack_838 = _UNK_183222c58;
    local_850 = 0;
    local_878[0] = 0;
    memset(local_828,0,0x400);
    local_860 = _DAT_18322c020;
    uStack_858 = _UNK_18322c028;
    local_870._0_1_ = s_streamType_18324fe18[0];
    local_870._1_1_ = s_streamType_18324fe18[1];
    local_870._2_1_ = s_streamType_18324fe18[2];
    local_870._3_1_ = s_streamType_18324fe18[3];
    local_870._4_1_ = s_streamType_18324fe18[4];
    local_870._5_1_ = s_streamType_18324fe18[5];
    local_870._6_1_ = s_streamType_18324fe18[6];
    local_870._7_1_ = s_streamType_18324fe18[7];
    uStack_868 = (ulonglong)(ushort)s_streamType_18324fe18._8_2_;
    cVar1 = thunk_FUN_1812da670(param_2,&local_870,local_878);
    if (0xf < uStack_858) {
      uVar5 = uStack_858 + 1;
      lVar4 = local_870;
      if (0xfff < uVar5) {
        uVar5 = uStack_858 + 0x28;
        lVar4 = *(longlong *)(local_870 + -8);
        if (0x1f < (local_870 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(lVar4,uVar5);
    }
    if (cVar1 == '\0') {
      pcVar6 = "{\"msgId\":\"stopStreamRsp\",\"result\":\"paramError\",\"code\":%d}";
      iVar3 = 1;
    }
    else {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x19090) + 0x68))
                        (*(longlong **)(param_1 + 0x19090),local_878[0]);
      DAT_183dced15 = 1;
      thunk_FUN_1812ead20(param_1);
      if (iVar3 == 0) {
        uVar2 = snprintf(local_828,0x400,
                         "{\"msgId\":\"stopStreamRsp\",\"result\":\"success\",\"code\":%d}",0);
        local_888 = 0xffffffff;
        thunk_FUN_1812eb750(param_1,1,local_828,uVar2);
        if (local_878[0] != 1) {
          return;
        }
        *(undefined1 *)(param_1 + 0x30) = 0;
        thunk_FUN_183180af0(param_1 + 0x38);
        FUN_18002691d(param_1 + 0x38);
        if (*(longlong *)(param_1 + 0x40) == 0) {
          return;
        }
        thunk_FUN_183180730();
        *(undefined8 *)(param_1 + 0x40) = 0;
        return;
      }
      pcVar6 = "{\"msgId\":\"stopStreamRsp\",\"result\":\"failed\",\"code\":%d}";
    }
    uVar2 = snprintf(local_828,0x400,pcVar6,iVar3);
    local_888 = 0xffffffff;
    thunk_FUN_1812eb750(param_1,1,local_828,uVar2);
  }
  return;
}


