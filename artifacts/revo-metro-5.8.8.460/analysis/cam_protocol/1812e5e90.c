// 1812e5e90  size=0x258  str:"streamType"

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1812e5e90(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  void *_Memory;
  longlong lVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined1 auStack_8b8 [32];
  undefined4 local_898;
  undefined4 local_888 [2];
  longlong local_880;
  ulonglong uStack_878;
  undefined8 local_870;
  ulonglong uStack_868;
  undefined4 local_860;
  undefined4 uStack_85c;
  undefined4 uStack_858;
  undefined4 uStack_854;
  undefined4 local_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined1 local_828 [1024];
  undefined1 local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_183dc69c0 ^ (ulonglong)auStack_8b8;
  if (*(longlong *)(param_1 + 0x19090) == 0) {
    memset(local_428,0,0x400);
    local_898 = 3;
    uVar3 = snprintf(local_428,0x400,
                     "{\"msgId\":\"%sRsp\",\"result\":\"camera is nullptr\",\"code\":%d}",
                     "RPCServerCamera::getDistort");
    thunk_FUN_18317f440(local_428);
    local_898 = 0xffffffff;
    thunk_FUN_1812eb750(param_1,1,local_428,uVar3);
  }
  else {
    uStack_840 = 0;
    local_838 = _DAT_183222c50;
    uStack_830 = _UNK_183222c58;
    local_848 = 0;
    local_888[0] = 0;
    memset(local_828,0,0x400);
    local_870 = _DAT_18322c020;
    uStack_868 = _UNK_18322c028;
    local_880._0_1_ = s_streamType_18324fe18[0];
    local_880._1_1_ = s_streamType_18324fe18[1];
    local_880._2_1_ = s_streamType_18324fe18[2];
    local_880._3_1_ = s_streamType_18324fe18[3];
    local_880._4_1_ = s_streamType_18324fe18[4];
    local_880._5_1_ = s_streamType_18324fe18[5];
    local_880._6_1_ = s_streamType_18324fe18[6];
    local_880._7_1_ = s_streamType_18324fe18[7];
    uStack_878 = (ulonglong)(ushort)s_streamType_18324fe18._8_2_;
    cVar2 = thunk_FUN_1812da670(param_2,&local_880,local_888);
    if (0xf < uStack_868) {
      uVar6 = uStack_868 + 1;
      lVar5 = local_880;
      if (0xfff < uVar6) {
        uVar6 = uStack_868 + 0x28;
        lVar5 = *(longlong *)(local_880 + -8);
        if (0x1f < (local_880 - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(lVar5,uVar6);
    }
    if (cVar2 == '\0') {
      pcVar7 = "{\"msgId\":\"getDistortRsp\",\"result\":\"paramError\",\"code\":%d}";
      iVar4 = 1;
    }
    else {
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x19090) + 0xe0))
                        (*(longlong **)(param_1 + 0x19090),local_888[0],&local_860);
      if (iVar4 == 0) {
        _Memory = (void *)thunk_FUN_183196718(0xdc);
        if (_Memory != (void *)0x0) {
          local_898 = 0x14;
          iVar4 = snprintf(_Memory,0xdc,
                           "{\"msgId\":\"getDistortRsp\",\"result\":\"success\",\"code\":%d,\"valLen\":%d}"
                           ,0);
          puVar1 = (undefined4 *)((longlong)iVar4 + 1 + (longlong)_Memory);
          *puVar1 = local_860;
          puVar1[1] = uStack_85c;
          puVar1[2] = uStack_858;
          puVar1[3] = uStack_854;
          *(undefined4 *)((longlong)iVar4 + 0x11 + (longlong)_Memory) = local_850;
          local_898 = 0xffffffff;
          thunk_FUN_1812eb750(param_1,1,_Memory,iVar4 + 0x15);
          free(_Memory);
          return;
        }
        iVar4 = 0x14;
      }
      pcVar7 = "{\"msgId\":\"getDistortRsp\",\"result\":\"failed\",\"code\":%d}";
    }
    uVar3 = snprintf(local_828,0x400,pcVar7,iVar4);
    local_898 = 0xffffffff;
    thunk_FUN_1812eb750(param_1,1,local_828,uVar3);
  }
  return;
}


