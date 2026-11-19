// vtable slot 8 (thunk 0x1800203b5) -> FUN_181253fb0 @ 0x181253fb0  size=1131

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_181253fb0(longlong param_1,int param_2,longlong *param_3,longlong param_4,
                       longlong param_5)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  char *pcVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  char *pcVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined1 auStack_b8 [32];
  longlong local_98;
  int local_90;
  undefined4 local_88;
  undefined1 local_78 [16];
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_183dc69c0 ^ (ulonglong)auStack_b8;
  lVar11 = (longlong)param_2;
  thunk_FUN_18317f440("[SDK TRACE] \r\n\r\n");
  pcVar12 = "E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp";
  pcVar7 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
  if (pcVar7 == (char *)0x0) {
    pcVar7 = "E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp";
  }
  else {
    pcVar7 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
    pcVar7 = pcVar7 + 1;
  }
  thunk_FUN_18317f440("[SDK ENTER] %s %s %d\r\n",pcVar7,"cs::Camera::startStream",0x301);
  *(undefined1 *)(param_1 + 0x128) = 0;
  cVar5 = thunk_FUN_18122f510(param_1);
  if (cVar5 == '\0') {
    thunk_FUN_18317f440("[SDK ERROR] Camera::startStream, Camera status was disconnect\r\n");
    return 3;
  }
  local_90 = (int)*(float *)((longlong)param_3 + 0xc);
  pcVar7 = " rgb";
  if (param_2 == 0) {
    pcVar7 = "depth";
  }
  local_88 = (undefined4)*param_3;
  local_98 = CONCAT44(local_98._4_4_,(int)param_3[1]);
  thunk_FUN_18317f440("[SDK INFO ] [%s] enter start stream(%s) width:%d,height:%d,fps:%d,format:%d, stream operation\n"
                      ,param_1 + 0x39,pcVar7,*(undefined4 *)((longlong)param_3 + 4));
  if (param_4 != 0) {
    thunk_FUN_18317f440("[SDK TRACE] callback not null\r\n");
  }
  if (param_5 != 0) {
    thunk_FUN_18317f440("[SDK TRACE] userData not null\r\n");
  }
  thunk_FUN_18122a270(param_1);
  uVar3 = *(undefined4 *)((longlong)param_3 + 4);
  lVar13 = param_3[1];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  puVar1 = (undefined4 *)(param_1 + 0x108 + lVar11 * 0x10);
  *puVar1 = (int)*param_3;
  puVar1[1] = uVar3;
  puVar1[2] = (int)lVar13;
  puVar1[3] = uVar4;
  *(longlong *)(param_1 + 0x318 + lVar11 * 8) = param_4;
  *(longlong *)(param_1 + 0x328 + lVar11 * 8) = param_5;
  *(undefined1 *)(lVar11 + 0x381 + param_1) = 1;
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x545) = 0;
    thunk_FUN_181242f80(param_1);
    uVar8 = thunk_FUN_181240900(param_1,param_3);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
  }
  thunk_FUN_1831809d0(local_78,param_1 + 0xc0);
  plVar2 = *(longlong **)(param_1 + 200);
  if (plVar2 == (longlong *)0x0) {
    thunk_FUN_18317f440("[SDK ERROR] stream stream failed: camera device is nullptr %p\n",0);
    thunk_FUN_183180a80(local_78);
    return 3;
  }
  local_68 = *param_3;
  lStack_60 = param_3[1];
  if (param_2 == 0) {
    puVar14 = &LAB_18000d175;
    iVar10 = 0;
  }
  else {
    puVar14 = &LAB_18001f46f;
    iVar10 = param_2;
  }
  local_98 = param_1;
  uVar6 = (**(code **)(*plVar2 + 0x20))(plVar2,iVar10,&local_68,puVar14);
  if (uVar6 != 0) goto LAB_1812542f1;
  *(undefined1 *)(lVar11 + 0x378 + param_1) = 1;
  if (param_2 == 0) {
    local_68 = 0;
    lStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    lVar13 = -1;
    do {
      lVar13 = lVar13 + 1;
    } while (*(char *)(param_1 + 0x39 + lVar13) != '\0');
    thunk_FUN_1811adba0(&local_68,param_1 + 0x39);
    uVar9 = thunk_FUN_18135cda0();
    thunk_FUN_18135d180(uVar9,&local_68,2);
    if (0xf < uStack_50) {
      uVar8 = uStack_50 + 1;
      lVar13 = local_68;
      if (0xfff < uVar8) {
        uVar8 = uStack_50 + 0x28;
        lVar13 = *(longlong *)(local_68 + -8);
        if (0x1f < (local_68 - *(longlong *)(local_68 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
LAB_1812542de:
      FUN_18001e0e2(lVar13,uVar8);
    }
  }
  else if (param_2 == 1) {
    local_68 = 0;
    lStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    lVar13 = -1;
    do {
      lVar13 = lVar13 + 1;
    } while (*(char *)(param_1 + 0x39 + lVar13) != '\0');
    thunk_FUN_1811adba0(&local_68,param_1 + 0x39);
    uVar9 = thunk_FUN_18135cda0();
    thunk_FUN_18135d180(uVar9,&local_68,6);
    if (0xf < uStack_50) {
      uVar8 = uStack_50 + 1;
      lVar13 = local_68;
      if (0xfff < uVar8) {
        uVar8 = uStack_50 + 0x28;
        lVar13 = *(longlong *)(local_68 + -8);
        if (0x1f < (local_68 - lVar13) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      goto LAB_1812542de;
    }
  }
  thunk_FUN_181363e50(param_1,param_2,param_1 + 0x39);
LAB_1812542f1:
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1d8 + lVar11 * 4) = 0;
  *(undefined4 *)(param_1 + 0x1ec + lVar11 * 4) = 0;
  *(undefined4 *)(param_1 + 0x1e0 + lVar11 * 4) = 0;
  *(undefined4 *)(param_1 + 0x1d0 + lVar11 * 4) = 0;
  *(undefined4 *)(param_1 + 0x950) = 0;
  DAT_183dcea8c = 0;
  DAT_183b9f1a0 = 0x428c0000;
  DAT_183b9f1a8._4_4_ = 7;
  DAT_183b9f1b0 = 0x3ecccccd;
  DAT_183b9f1b4 = 0x40a00000;
  DAT_183b9f1a8._0_1_ = *(int *)(param_1 + 0xbc) - 0x20U < 2;
  thunk_FUN_1813641f0(param_1,param_1 + 0x39);
  thunk_FUN_183180a80(local_78);
  if ((*(int *)(param_1 + 0xbc) == 0x24) && (param_2 == 1)) {
    thunk_FUN_18122db60(param_1,"SetCmd s 0x104 0");
  }
  if ((uVar6 == 0) && (*(longlong *)(param_1 + 0x318 + lVar11 * 8) != 0)) {
    thunk_FUN_181253580(param_1,param_2);
  }
  pcVar7 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
  if (pcVar7 != (char *)0x0) {
    pcVar12 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
    pcVar12 = pcVar12 + 1;
  }
  thunk_FUN_18317f440("[SDK LEAVE] %s %s %d\r\n",pcVar12,"cs::Camera::startStream",0x386);
  return (ulonglong)uVar6;
}


