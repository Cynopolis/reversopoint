// vtable slot 4 (thunk 0x18000a790) -> FUN_18122c180 @ 0x18122c180  size=817

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18122c180(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  char *pcVar8;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  longlong local_38 [6];
  
  local_38[4] = DAT_183dc69c0 ^ (ulonglong)auStack_68;
  pcVar8 = "E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp";
  pcVar3 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp";
  }
  else {
    pcVar3 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
    pcVar3 = pcVar3 + 1;
  }
  thunk_FUN_18317f440("[SDK ENTER] %s %s %d\r\n",pcVar3,"cs::Camera::disconnect",0x1b2);
  lVar6 = -1;
  do {
    lVar4 = lVar6 + 1;
    lVar2 = lVar6 + 0x3a;
    lVar6 = lVar4;
  } while (*(char *)((longlong)param_1 + lVar2) != '\0');
  if (lVar4 != 0) {
    local_38[0] = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[3] = 0;
    lVar6 = -1;
    do {
      lVar2 = lVar6 + 0x3a;
      lVar6 = lVar6 + 1;
    } while (*(char *)((longlong)param_1 + lVar2) != '\0');
    thunk_FUN_1811adba0(local_38,(longlong)param_1 + 0x39);
    uVar5 = thunk_FUN_18135a8f0();
    thunk_FUN_18135ac10(uVar5,local_38);
    if (0xf < (ulonglong)local_38[3]) {
      uVar7 = local_38[3] + 1;
      lVar6 = local_38[0];
      if (0xfff < uVar7) {
        uVar7 = local_38[3] + 0x28;
        lVar6 = *(longlong *)(local_38[0] + -8);
        if (0x1f < (local_38[0] - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(lVar6,uVar7);
    }
  }
  thunk_FUN_18317f440("[SDK TRACE] [%s] disconnect camera for cameraPtr : %p\r\n",param_1);
  (**(code **)(*param_1 + 0x68))(param_1,0);
  (**(code **)(*param_1 + 0x68))(param_1,1);
  thunk_FUN_18317f440("[SDK INFO ] disconnect camera %p:%p\n",param_1,param_1[0x19]);
  thunk_FUN_1831809d0(local_48,param_1 + 0x18);
  thunk_FUN_18317f440("[SDK TRACE] ready deinit camera devices\r\n");
  if (param_1[0x19] == 0) {
    thunk_FUN_18317f440("[SDK ERROR] m_cameraDevice is nullptr\n");
    thunk_FUN_183180a80(local_48);
  }
  else {
    thunk_FUN_18317f440("[SDK TRACE] m_cameraDevice not null\r\n");
    thunk_FUN_1831809d0(local_40,param_1 + 0x1b);
    *(undefined1 *)(param_1 + 0x69) = 1;
    thunk_FUN_18317f440("[SDK TRACE] m_cameraDevice->deinitDevice\r\n");
    (**(code **)(*(longlong *)param_1[0x19] + 0x10))();
    puVar1 = (undefined8 *)param_1[0x19];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1[0x19] = 0;
    thunk_FUN_183180a80(local_40);
    thunk_FUN_183180a80(local_48);
    thunk_FUN_18124b560(param_1,0);
    lVar6 = -1;
    do {
      lVar4 = lVar6 + 1;
      lVar2 = lVar6 + 0x3a;
      lVar6 = lVar4;
    } while (*(char *)((longlong)param_1 + lVar2) != '\0');
    if (lVar4 != 0) {
      local_38[0] = 0;
      local_38[1] = 0;
      local_38[2] = 0;
      local_38[3] = 0;
      lVar6 = -1;
      do {
        lVar4 = lVar6 + 1;
        lVar2 = lVar6 + 0x3a;
        lVar6 = lVar4;
      } while (*(char *)((longlong)param_1 + lVar2) != '\0');
      thunk_FUN_1811adba0(local_38,(longlong)param_1 + 0x39,lVar4);
      uVar5 = thunk_FUN_18135cda0();
      thunk_FUN_18135d180(uVar5,local_38,1);
      if (0xf < (ulonglong)local_38[3]) {
        uVar7 = local_38[3] + 1;
        lVar6 = local_38[0];
        if (0xfff < uVar7) {
          uVar7 = local_38[3] + 0x28;
          lVar6 = *(longlong *)(local_38[0] + -8);
          if (0x1f < (local_38[0] - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_18001e0e2(lVar6,uVar7);
      }
    }
    thunk_FUN_18122a120(param_1);
    pcVar3 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
    if (pcVar3 != (char *)0x0) {
      pcVar8 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
      pcVar8 = pcVar8 + 1;
    }
    thunk_FUN_18317f440("[SDK LEAVE] %s %s %d\r\n",pcVar8,"cs::Camera::disconnect",0x1f8);
  }
  return 0;
}


