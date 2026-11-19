// 1812e5640  size=0x266  str:"propertyType"

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1812e5640(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  void *_Memory;
  longlong lVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined1 auStack_e98 [32];
  undefined4 local_e78;
  undefined4 local_e68 [2];
  longlong local_e60;
  ulonglong uStack_e58;
  undefined8 local_e50;
  ulonglong uStack_e48;
  undefined8 local_e40;
  undefined8 uStack_e38;
  undefined8 local_e30;
  undefined8 uStack_e28;
  undefined1 local_e18 [1520];
  undefined1 local_828 [1024];
  undefined1 local_428 [1024];
  ulonglong local_28;
  
  local_28 = DAT_183dc69c0 ^ (ulonglong)auStack_e98;
  if (*(longlong *)(param_1 + 0x19090) == 0) {
    memset(local_428,0,0x400);
    local_e78 = 3;
    uVar2 = snprintf(local_428,0x400,
                     "{\"msgId\":\"%sRsp\",\"result\":\"camera is nullptr\",\"code\":%d}",
                     "RPCServerCamera::getPropertyExtension");
    thunk_FUN_18317f440(local_428);
    local_e78 = 0xffffffff;
    thunk_FUN_1812eb750(param_1,1,local_428,uVar2);
  }
  else {
    uStack_e38 = 0;
    local_e30 = _DAT_183222c50;
    uStack_e28 = _UNK_183222c58;
    local_e40 = 0;
    local_e68[0] = 0;
    memset(local_828,0,0x400);
    local_e50 = _DAT_183242500;
    uStack_e48 = _UNK_183242508;
    local_e60._0_1_ = s_propertyType_1832501c0[0];
    local_e60._1_1_ = s_propertyType_1832501c0[1];
    local_e60._2_1_ = s_propertyType_1832501c0[2];
    local_e60._3_1_ = s_propertyType_1832501c0[3];
    local_e60._4_1_ = s_propertyType_1832501c0[4];
    local_e60._5_1_ = s_propertyType_1832501c0[5];
    local_e60._6_1_ = s_propertyType_1832501c0[6];
    local_e60._7_1_ = s_propertyType_1832501c0[7];
    uStack_e58 = (ulonglong)(uint)s_propertyType_1832501c0._8_4_;
    cVar1 = thunk_FUN_1812da670(param_2,&local_e60,local_e68);
    if (0xf < uStack_e48) {
      uVar5 = uStack_e48 + 1;
      lVar4 = local_e60;
      if (0xfff < uVar5) {
        uVar5 = uStack_e48 + 0x28;
        lVar4 = *(longlong *)(local_e60 + -8);
        if (0x1f < (local_e60 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(lVar4,uVar5);
    }
    if (cVar1 == '\0') {
      pcVar6 = "{\"msgId\":\"getPropertyExtensionRsp\",\"result\":\"paramError\",\"code\":%d}";
      iVar3 = 1;
    }
    else {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x19090) + 200))
                        (*(longlong **)(param_1 + 0x19090),local_e68[0],local_e18);
      if (iVar3 == 0) {
        _Memory = (void *)thunk_FUN_183196718(0x6b0);
        if (_Memory != (void *)0x0) {
          local_e78 = 0x5e8;
          iVar3 = snprintf(_Memory,0x6b0,
                           "{\"msgId\":\"getPropertyExtensionRsp\",\"result\":\"success\",\"code\":%d,\"valLen\":%d}"
                           ,0);
          memcpy((void *)((longlong)_Memory + (longlong)iVar3 + 1),local_e18,0x5e8);
          local_e78 = 0xffffffff;
          thunk_FUN_1812eb750(param_1,1,_Memory,iVar3 + 0x5e9);
          free(_Memory);
          return;
        }
        iVar3 = 0x14;
      }
      pcVar6 = "{\"msgId\":\"getPropertyExtensionRsp\",\"result\":\"failed\",\"code\":%d}";
    }
    uVar2 = snprintf(local_828,0x400,pcVar6,iVar3);
    local_e78 = 0xffffffff;
    thunk_FUN_1812eb750(param_1,1,local_828,uVar2);
  }
  return;
}


