// vtable slot 20 (thunk 0x1800206e9) -> FUN_181253280 @ 0x181253280  size=329

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_181253280(longlong param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_183dc69c0 ^ (ulonglong)auStack_78;
  thunk_FUN_18317f440("[SDK TRACE] Camera [%s-%s] softtrigger, stream operation\r\n",param_1 + 0x39,
                      param_1 + 0x59);
  if (*(char *)(param_1 + 0x315) == '\0') {
    thunk_FUN_18317f440("[SDK ERROR] Not setting trigger mode yet\r\n");
    iVar2 = 1;
  }
  else {
    thunk_FUN_18317f440("[SDK TRACE] Camera critical Enter\r\n");
    thunk_FUN_1831809d0(local_58,param_1 + 0xc0);
    if (*(longlong *)(param_1 + 200) == 0) {
      thunk_FUN_18317f440("[SDK ERROR] soft trigger failed: camera device is nullptr\n");
      thunk_FUN_183180a80(local_58);
      iVar2 = 3;
    }
    else {
      thunk_FUN_183180a80(local_58);
      thunk_FUN_18317f440("[SDK TRACE] start clear all frames\r\n");
      thunk_FUN_18122a270(param_1);
      local_50 = 0;
      uStack_48 = 0;
      local_40 = 0;
      uStack_38 = 0;
      local_30 = 0;
      uStack_28 = 0;
      local_20 = 0;
      local_18 = 0;
      cVar1 = thunk_FUN_1812655b0(param_1 + 0x39);
      pcVar3 = "echo s 0x487 %d >/dev/rk_preisp";
      if (cVar1 == '\0') {
        pcVar3 = "echo s 0x484 %d >/dev/rk_preisp";
      }
      snprintf(&local_50,0x3c,pcVar3,param_2);
      iVar2 = thunk_FUN_18122db60(param_1,&local_50);
      if (iVar2 != 0) {
        thunk_FUN_18317f440("[SDK ERROR] execute soft trigger cmd failed\r\n");
      }
    }
  }
  return iVar2;
}


