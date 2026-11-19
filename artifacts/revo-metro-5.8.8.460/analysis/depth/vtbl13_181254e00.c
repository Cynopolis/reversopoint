// vtable slot 13 (thunk 0x1800015f5) -> FUN_181254e00 @ 0x181254e00  size=1278

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_181254e00(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined1 auStack_c68 [32];
  undefined1 local_c48 [8];
  undefined1 local_c40 [8];
  undefined1 local_c38 [1520];
  undefined4 local_648 [380];
  longlong local_58 [6];
  
  local_58[4] = DAT_183dc69c0 ^ (ulonglong)auStack_c68;
  thunk_FUN_18317f440("[SDK TRACE] \r\n\r\n");
  pcVar7 = "E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp";
  pcVar3 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp";
  }
  else {
    pcVar3 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
    pcVar3 = pcVar3 + 1;
  }
  thunk_FUN_18317f440("[SDK ENTER] %s %s %d\r\n",pcVar3,"cs::Camera::stopStream",0x3b4);
  pcVar3 = "RGB";
  if (param_2 == 0) {
    pcVar3 = "Depth";
  }
  thunk_FUN_18317f440("[SDK TRACE] [%s] stop %s stream, stream operation\r\n",
                      (longlong)param_1 + 0x39,pcVar3);
  if ((param_2 == 0) && ((int)param_1[0x21] - 0x104U < 4)) {
    thunk_FUN_18317f440(
                       "[SDK TRACE] stop STREAM_FORMAT_PMLD or STREAM_FORMAT_PRCZ format, wanto end markers proc thread\r\n"
                       );
    thunk_FUN_18122cb70(param_1);
  }
  thunk_FUN_1831809d0(local_c40,param_1 + 0x1b);
  thunk_FUN_18317f440("[SDK TRACE] end callback proc thread\r\n");
  thunk_FUN_18122c910(param_1,param_2);
  thunk_FUN_18317f440("[SDK TRACE] set stream call back null\r\n");
  (**(code **)(*param_1 + 0x80))(param_1,param_2,0,0);
  thunk_FUN_18317f440("[SDK TRACE] in %s %d\r\n","cs::Camera::stopStream",0x3cc);
  if ((param_2 == 0) && (*(char *)((longlong)param_1 + 0x316) != '\0')) {
    thunk_FUN_18317f440("[SDK TRACE] resume stream...\r\n");
    memset(local_c38,0,0x5e8);
    memcpy(local_648,local_c38,0x5e8);
    (**(code **)(*param_1 + 0xc0))(param_1,0xe,local_648);
    thunk_FUN_18317f440("[SDK TRACE] resume stream end\r\n");
    Sleep(200);
  }
  if (*(char *)((longlong)param_1 + 0x315) != '\0') {
    local_648[0] = 0;
    memcpy(local_c38,local_648,0x5e8);
    (**(code **)(*param_1 + 0xc0))(param_1,1,local_c38);
  }
  thunk_FUN_18317f440("[SDK TRACE] in %s %d\r\n","cs::Camera::stopStream",0x3e4);
  thunk_FUN_1831809d0(local_c48,param_1 + 0x18);
  thunk_FUN_18317f440("[SDK TRACE] in %s %d\r\n","cs::Camera::stopStream",0x3eb);
  thunk_FUN_18122a270(param_1);
  if (param_1[0x19] == 0) {
    thunk_FUN_18317f440("[SDK ERROR] stop stream failed: camera device is nullptr\n");
    iVar2 = 3;
    goto LAB_1812552be;
  }
  thunk_FUN_18317f440("[SDK TRACE] in %s %d\r\n","cs::Camera::stopStream",0x3f5);
  if (param_2 == 0) {
    thunk_FUN_18125f490((longlong)param_1 + 0x39);
  }
  thunk_FUN_18317f440("[SDK TRACE] in %s %d\r\n","cs::Camera::stopStream",0x3ff);
  iVar2 = (**(code **)(*(longlong *)param_1[0x19] + 0x28))((longlong *)param_1[0x19],param_2);
  thunk_FUN_18317f440("[SDK TRACE] in %s %d\r\n","cs::Camera::stopStream",0x403);
  if (iVar2 == 0) {
    *(undefined1 *)((longlong)param_2 + 0x378 + (longlong)param_1) = 0;
    if (param_2 == 0) {
      local_58[0] = 0;
      local_58[1] = 0;
      local_58[2] = 0;
      local_58[3] = 0;
      lVar5 = -1;
      do {
        lVar1 = lVar5 + 0x3a;
        lVar5 = lVar5 + 1;
      } while (*(char *)((longlong)param_1 + lVar1) != '\0');
      thunk_FUN_1811adba0(local_58,(longlong)param_1 + 0x39);
      uVar4 = thunk_FUN_18135cda0();
      thunk_FUN_18135d180(uVar4,local_58,3);
      if (0xf < (ulonglong)local_58[3]) {
        uVar6 = local_58[3] + 1;
        lVar5 = local_58[0];
        if (0xfff < uVar6) {
          uVar6 = local_58[3] + 0x28;
          lVar5 = *(longlong *)(local_58[0] + -8);
          if (0x1f < (local_58[0] - *(longlong *)(local_58[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
LAB_181255236:
        FUN_18001e0e2(lVar5,uVar6);
      }
    }
    else if (param_2 == 1) {
      local_58[0] = 0;
      local_58[1] = 0;
      local_58[2] = 0;
      local_58[3] = 0;
      lVar5 = -1;
      do {
        lVar1 = lVar5 + 0x3a;
        lVar5 = lVar5 + 1;
      } while (*(char *)((longlong)param_1 + lVar1) != '\0');
      thunk_FUN_1811adba0(local_58,(longlong)param_1 + 0x39);
      uVar4 = thunk_FUN_18135cda0();
      thunk_FUN_18135d180(uVar4,local_58,7);
      if (0xf < (ulonglong)local_58[3]) {
        uVar6 = local_58[3] + 1;
        lVar5 = local_58[0];
        if (0xfff < uVar6) {
          uVar6 = local_58[3] + 0x28;
          lVar5 = *(longlong *)(local_58[0] + -8);
          if (0x1f < (local_58[0] - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        goto LAB_181255236;
      }
    }
    if (((char)param_1[0x6f] == '\0') && (*(char *)((longlong)param_1 + 0x379) == '\0')) {
      *(undefined4 *)(param_1 + 0x3d) = 0;
      *(undefined8 *)((longlong)param_1 + 0x94c) = 0;
    }
  }
  Sleep(500);
  thunk_FUN_18122a270(param_1);
  thunk_FUN_18317f440("[SDK TRACE] camera device stop stream ret = %d\r\n",iVar2);
  pcVar3 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
  if (pcVar3 != (char *)0x0) {
    pcVar7 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
    pcVar7 = pcVar7 + 1;
  }
  thunk_FUN_18317f440("[SDK LEAVE] %s %s %d\r\n",pcVar7,"cs::Camera::stopStream",0x423);
LAB_1812552be:
  thunk_FUN_183180a80(local_c48);
  thunk_FUN_183180a80(local_c40);
  return iVar2;
}


