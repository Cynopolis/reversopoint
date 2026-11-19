// 1812e5940  size=0x264  str:"streamType"

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1812e5940(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  void *_Memory;
  longlong lVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined1 auStack_8c8 [32];
  undefined4 local_8a8;
  undefined4 local_898 [2];
  longlong local_890;
  ulonglong uStack_888;
  undefined8 local_880;
  ulonglong uStack_878;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined1 local_828 [1024];
  undefined1 local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_183dc69c0 ^ (ulonglong)auStack_8c8;
  if (*(longlong *)(param_1 + 0x19090) == 0) {
    memset(local_428,0,0x400);
    local_8a8 = 3;
    uVar3 = snprintf(local_428,0x400,
                     "{\"msgId\":\"%sRsp\",\"result\":\"camera is nullptr\",\"code\":%d}",
                     "RPCServerCamera::getIntrinsics");
    thunk_FUN_18317f440(local_428);
    local_8a8 = 0xffffffff;
    thunk_FUN_1812eb750(param_1,1,local_428,uVar3);
  }
  else {
    uStack_840 = 0;
    local_838 = _DAT_183222c50;
    uStack_830 = _UNK_183222c58;
    local_848 = 0;
    local_898[0] = 0;
    memset(local_828,0,0x400);
    local_880 = _DAT_18322c020;
    uStack_878 = _UNK_18322c028;
    local_890._0_1_ = s_streamType_18324fe18[0];
    local_890._1_1_ = s_streamType_18324fe18[1];
    local_890._2_1_ = s_streamType_18324fe18[2];
    local_890._3_1_ = s_streamType_18324fe18[3];
    local_890._4_1_ = s_streamType_18324fe18[4];
    local_890._5_1_ = s_streamType_18324fe18[5];
    local_890._6_1_ = s_streamType_18324fe18[6];
    local_890._7_1_ = s_streamType_18324fe18[7];
    uStack_888 = (ulonglong)(ushort)s_streamType_18324fe18._8_2_;
    cVar2 = thunk_FUN_1812da670(param_2,&local_890,local_898);
    if (0xf < uStack_878) {
      uVar6 = uStack_878 + 1;
      lVar5 = local_890;
      if (0xfff < uVar6) {
        uVar6 = uStack_878 + 0x28;
        lVar5 = *(longlong *)(local_890 + -8);
        if (0x1f < (local_890 - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(lVar5,uVar6);
    }
    if (cVar2 == '\0') {
      pcVar7 = "{\"msgId\":\"getIntrinsicsRsp\",\"result\":\"paramError\",\"code\":%d}";
      iVar4 = 1;
    }
    else {
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x19090) + 0xd0))
                        (*(longlong **)(param_1 + 0x19090),local_898[0],&local_870);
      if (iVar4 == 0) {
        _Memory = (void *)thunk_FUN_183196718(0xf0);
        if (_Memory != (void *)0x0) {
          local_8a8 = 0x28;
          iVar4 = snprintf(_Memory,0xf0,
                           "{\"msgId\":\"getIntrinsicsRsp\",\"result\":\"success\",\"code\":%d,\"valLen\":%d}"
                           ,0);
          lVar5 = (longlong)iVar4;
          puVar1 = (undefined8 *)(lVar5 + 1 + (longlong)_Memory);
          *puVar1 = local_870;
          puVar1[1] = uStack_868;
          puVar1 = (undefined8 *)(lVar5 + 0x11 + (longlong)_Memory);
          *puVar1 = local_860;
          puVar1[1] = uStack_858;
          *(undefined8 *)(lVar5 + 0x21 + (longlong)_Memory) = local_850;
          local_8a8 = 0xffffffff;
          thunk_FUN_1812eb750(param_1,1,_Memory,iVar4 + 0x29);
          free(_Memory);
          return;
        }
        iVar4 = 0x14;
      }
      pcVar7 = "{\"msgId\":\"getIntrinsicsRsp\",\"result\":\"failed\",\"code\":%d}";
    }
    uVar3 = snprintf(local_828,0x400,pcVar7,iVar4);
    local_8a8 = 0xffffffff;
    thunk_FUN_1812eb750(param_1,1,local_828,uVar3);
  }
  return;
}


