// vtable slot 51 (thunk 0x180026a71) -> FUN_181255fc0 @ 0x181255fc0  size=485

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_181255fc0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6,undefined4 *param_7)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined8 local_c0;
  undefined4 *local_b8;
  char local_a8 [40];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_183dc69c0 ^ (ulonglong)auStack_e8;
  pcVar5 = "E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp";
  pcVar3 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
  if (pcVar3 != (char *)0x0) {
    pcVar5 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
    pcVar5 = pcVar5 + 1;
  }
  thunk_FUN_18317f440("[SDK ENTER] %s %s %d\r\n",pcVar5,"cs::Camera::upgradeFirmware",0xd4d);
  local_a8[0x20] = '\0';
  local_a8[0x21] = '\0';
  local_a8[0x22] = '\0';
  local_a8[0x23] = '\0';
  local_a8[0x24] = '\0';
  local_a8[0x25] = '\0';
  local_a8[0x26] = '\0';
  local_a8[0x27] = '\0';
  local_60 = 0;
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  local_a8[4] = '\0';
  local_a8[5] = '\0';
  local_a8[6] = '\0';
  local_a8[7] = '\0';
  local_a8[8] = '\0';
  local_a8[9] = '\0';
  local_a8[10] = '\0';
  local_a8[0xb] = '\0';
  local_a8[0xc] = '\0';
  local_a8[0xd] = '\0';
  local_a8[0xe] = '\0';
  local_a8[0xf] = '\0';
  local_a8[0x10] = '\0';
  local_a8[0x11] = '\0';
  local_a8[0x12] = '\0';
  local_a8[0x13] = '\0';
  local_a8[0x14] = '\0';
  local_a8[0x15] = '\0';
  local_a8[0x16] = '\0';
  local_a8[0x17] = '\0';
  local_a8[0x18] = '\0';
  local_a8[0x19] = '\0';
  local_a8[0x1a] = '\0';
  local_a8[0x1b] = '\0';
  local_a8[0x1c] = '\0';
  local_a8[0x1d] = '\0';
  local_a8[0x1e] = '\0';
  local_a8[0x1f] = '\0';
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  thunk_FUN_183181750(param_2,local_a8,0x28);
  thunk_FUN_183181750(param_4,&local_80,0x28);
  pcVar5 = local_a8;
  lVar6 = param_3 - (longlong)pcVar5;
  do {
    cVar1 = *pcVar5;
    cVar2 = pcVar5[lVar6];
    if (cVar1 != cVar2) break;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  if (cVar1 == cVar2) {
    pcVar5 = (char *)&local_80;
    lVar6 = param_5 - (longlong)pcVar5;
    do {
      cVar1 = *pcVar5;
      cVar2 = pcVar5[lVar6];
      if (cVar1 != cVar2) break;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      if (*(longlong *)(param_1 + 200) == 0) {
        *param_7 = 0x14;
        thunk_FUN_18317f440("[SDK ERROR] upgradeFirmware failed: camera device is nullptr\n");
        return 3;
      }
      thunk_FUN_18317f440("[SDK TRACE] ready to call camera device upgrade firmware\r\n");
      local_b8 = param_7;
      local_c0 = param_6;
      local_c8 = param_5;
      uVar4 = (**(code **)(**(longlong **)(param_1 + 200) + 0x80))
                        (*(longlong **)(param_1 + 200),param_2,param_3,param_4);
      return uVar4;
    }
  }
  thunk_FUN_18317f440("[SDK ERROR] upgrade file error:\n");
  thunk_FUN_18317f440("[SDK ERROR] \t      upmd5:%s-%s-%s\n",param_3,local_a8,param_2);
  thunk_FUN_18317f440("[SDK ERROR] \t packageMd5:%s-%s-%s\n",param_5,&local_80,param_4);
  return 1;
}


