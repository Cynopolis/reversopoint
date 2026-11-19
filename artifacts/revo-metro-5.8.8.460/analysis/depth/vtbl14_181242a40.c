// vtable slot 14 (thunk 0x18000addf) -> FUN_181242a40 @ 0x181242a40  size=598

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_181242a40(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  DWORD dwMilliseconds;
  longlong lVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined1 auStack_c38 [32];
  undefined1 local_c18 [1520];
  longlong local_628 [4];
  undefined1 local_608 [1520];
  ulonglong local_18;
  
  local_18 = DAT_183dc69c0 ^ (ulonglong)auStack_c38;
  thunk_FUN_18317f440("[SDK TRACE] \r\n\r\n");
  pcVar7 = "E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp";
  pcVar3 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
  if (pcVar3 != (char *)0x0) {
    pcVar7 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
    pcVar7 = pcVar7 + 1;
  }
  thunk_FUN_18317f440("[SDK ENTER] %s %s %d\r\n",pcVar7,"cs::Camera::pauseStream",0x44e);
  pcVar7 = "rgb";
  if (param_2 == 0) {
    pcVar7 = "depth";
  }
  thunk_FUN_18317f440("[SDK TRACE] [%s] pauseStream %s, stream operation\r\n",
                      (longlong)param_1 + 0x39,pcVar7);
  if (param_2 == 1) {
    uVar4 = 8;
  }
  else if (*(char *)((longlong)param_2 + 0x378 + (longlong)param_1) == '\0') {
    thunk_FUN_18317f440("[SDK WARN ] %d stream type not start stream, not allow pause stream\r\n",
                        param_2);
    uVar4 = 5;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x316) == '\0') {
      snprintf(local_608,0x400,"echo s 0x483 >/dev/rk_preisp");
      memcpy(local_c18,local_608,0x5e8);
      iVar2 = (**(code **)(*param_1 + 0xc0))(param_1,0xffff,local_c18);
      if (iVar2 != 0) {
        thunk_FUN_18317f440("[SDK ERROR] pause stream failed\n");
        return 10;
      }
      if ((int)param_1[0x5d] == 0) {
        dwMilliseconds = 0x93;
      }
      else {
        dwMilliseconds = ((int)param_1[0x5d] / 1000) * 0x15;
      }
      Sleep(dwMilliseconds);
      Sleep(500);
      *(undefined1 *)((longlong)param_1 + 0x316) = 1;
      thunk_FUN_18122a270(param_1);
      local_628[0] = 0;
      local_628[1] = 0;
      local_628[2] = 0;
      local_628[3] = 0;
      lVar5 = -1;
      do {
        lVar1 = lVar5 + 0x3a;
        lVar5 = lVar5 + 1;
      } while (*(char *)((longlong)param_1 + lVar1) != '\0');
      thunk_FUN_1811adba0(local_628,(longlong)param_1 + 0x39);
      uVar4 = thunk_FUN_18135cda0();
      thunk_FUN_18135d180(uVar4,local_628,4);
      if (0xf < (ulonglong)local_628[3]) {
        uVar6 = local_628[3] + 1;
        lVar5 = local_628[0];
        if (0xfff < uVar6) {
          uVar6 = local_628[3] + 0x28;
          lVar5 = *(longlong *)(local_628[0] + -8);
          if (0x1f < (local_628[0] - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_18001e0e2(lVar5,uVar6);
      }
    }
    else {
      thunk_FUN_18317f440("[SDK WARN ] [%s] depth stream was paused already\r\n",
                          (longlong)param_1 + 0x39);
    }
    uVar4 = 0;
  }
  return uVar4;
}


