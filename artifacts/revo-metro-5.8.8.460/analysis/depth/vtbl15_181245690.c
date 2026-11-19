// vtable slot 15 (thunk 0x180024cc6) -> FUN_181245690 @ 0x181245690  size=769

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_181245690(longlong *param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  CameraType CVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined1 auStack_c38 [32];
  undefined1 local_c18 [1520];
  longlong local_628 [4];
  undefined1 local_608 [1520];
  ulonglong local_18;
  
  local_18 = DAT_183dc69c0 ^ (ulonglong)auStack_c38;
  thunk_FUN_18317f440("[SDK TRACE] \r\n\r\n");
  pcVar9 = "E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp";
  pcVar5 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
  if (pcVar5 != (char *)0x0) {
    pcVar9 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
    pcVar9 = pcVar9 + 1;
  }
  thunk_FUN_18317f440("[SDK ENTER] %s %s %d\r\n",pcVar9,"cs::Camera::resumeStream",0x48e);
  pcVar9 = "rgb";
  if (param_2 == 0) {
    pcVar9 = "depth";
  }
  thunk_FUN_18317f440("[SDK TRACE] [%s] resumeStream %s, stream operation\r\n",
                      (longlong)param_1 + 0x39,pcVar9);
  if (param_2 == 1) {
    uVar6 = 8;
  }
  else if (*(char *)((longlong)param_2 + 0x378 + (longlong)param_1) == '\0') {
    thunk_FUN_18317f440("[SDK WARN ] %d stream type not start stream, not allow resume stream\r\n",
                        param_2);
    uVar6 = 5;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x316) == '\0') {
      thunk_FUN_18317f440("[SDK WARN ] %d stream type not pause stream, not allow resume stream\r\n"
                          ,param_2);
    }
    else if (*(char *)((longlong)param_1 + 0x315) == '\0') {
      iVar4 = (int)param_1[0x21];
      if (((iVar4 == 4) || (iVar4 == 0x10a)) || (iVar4 - 0x104U < 4)) {
        CVar3 = cs::getCameraTypeBySN((char *)((longlong)param_1 + 0x39));
        if (CVar3 - 1 < 2) {
          snprintf(local_608,0x400,"echo s 0x481 1 >/dev/rk_preisp");
          memcpy(local_c18,local_608,0x5e8);
          (**(code **)(*param_1 + 0xc0))(param_1,0xffff,local_c18);
        }
        pcVar9 = "echo s 0x701 1 >/dev/rk_preisp";
      }
      else {
        pcVar9 = "echo s 0x481 1 >/dev/rk_preisp";
      }
      snprintf(local_608,0x400,pcVar9);
      memcpy(local_c18,local_608,0x5e8);
      iVar4 = (**(code **)(*param_1 + 0xc0))(param_1,0xffff,local_c18);
      if (iVar4 != 0) {
        thunk_FUN_18317f440("[SDK ERROR] resume stream faild\n");
        return 10;
      }
      *(undefined1 *)((longlong)param_1 + 0x316) = 0;
      local_628[0] = 0;
      local_628[1] = 0;
      local_628[2] = 0;
      local_628[3] = 0;
      lVar7 = -1;
      do {
        lVar1 = lVar7 + 0x3a;
        lVar7 = lVar7 + 1;
      } while (*(char *)((longlong)param_1 + lVar1) != '\0');
      thunk_FUN_1811adba0(local_628,(longlong)param_1 + 0x39);
      uVar6 = thunk_FUN_18135cda0();
      thunk_FUN_18135d180(uVar6,local_628,5);
      if (0xf < (ulonglong)local_628[3]) {
        uVar8 = local_628[3] + 1;
        lVar7 = local_628[0];
        if (0xfff < uVar8) {
          uVar8 = local_628[3] + 0x28;
          lVar7 = *(longlong *)(local_628[0] + -8);
          if (0x1f < (local_628[0] - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_18001e0e2(lVar7,uVar8);
      }
      thunk_FUN_18122a270(param_1);
      Sleep(500);
      iVar4 = (int)param_1[0x21];
      if ((((iVar4 == 4) || (iVar4 == 0x10a)) || (iVar4 - 0x104U < 4)) &&
         (cVar2 = thunk_FUN_1811caba0(param_1 + 0x71,0), cVar2 != '\0')) {
        thunk_FUN_18133c1e0(param_1[0x71]);
      }
    }
    else {
      thunk_FUN_18317f440("[SDK ERROR] in triggermode resume failed\n");
    }
    uVar6 = 0;
  }
  return uVar6;
}


