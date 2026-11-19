// vtable slot 23 (thunk 0x18001090b) -> FUN_18124f9e0 @ 0x18124f9e0  size=1139

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18124f9e0(longlong *param_1,int param_2,int param_3,float param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  CameraType CVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  char *pcVar8;
  longlong lVar9;
  char *pcVar10;
  bool bVar11;
  undefined1 auStack_cc8 [32];
  double local_ca8;
  undefined1 local_c98 [16];
  undefined4 local_c88;
  undefined1 local_c84 [1516];
  undefined1 local_698 [1520];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  ulonglong local_68;
  
  local_68 = DAT_183dc69c0 ^ (ulonglong)auStack_cc8;
  local_ca8 = (double)param_4;
  thunk_FUN_18317f440("[SDK TRACE] [%s] set [%d] property, [%d] type, value = %f\r\n",
                      (longlong)param_1 + 0x39,param_2,param_3);
  cVar3 = thunk_FUN_18122f510(param_1);
  if (cVar3 == '\0') {
    thunk_FUN_18317f440("[SDK ERROR] Camera::setProperty, Camera status was disconnect\r\n");
    return 3;
  }
  if (param_3 == 1) {
    if (param_1[0x19] == 0) {
      thunk_FUN_18317f440("[SDK ERROR] set property failed: camera device is nullptr\n");
      return 3;
    }
    if ((param_2 == 0) &&
       (((0x24 < *(uint *)((longlong)param_1 + 0xbc) ||
         ((0x1fe5c00000U >> ((longlong)(int)*(uint *)((longlong)param_1 + 0xbc) & 0x3fU) & 1) == 0))
        && (thunk_FUN_18317f440("[SDK TRACE] m_iFrameTime value is : %d\r\n",(int)param_1[0x5d]),
           (int)param_1[0x5d] < (int)(param_4 + _DAT_183239490))))) {
      (**(code **)(*param_1 + 0xb8))(param_1,0,2);
      *(undefined4 *)(param_1 + 0x5d) = 0;
    }
    *(float *)(param_1 + 0x6d) = param_4;
  }
  else {
    if (param_3 == 2) {
      CVar4 = cs::getCameraTypeBySN((char *)((longlong)param_1 + 0x39));
      bVar11 = false;
      if ((CVar4 == 4) || (CVar4 == 10)) {
        iVar5 = thunk_FUN_181261f30((longlong)param_1 + 0x79);
        bVar11 = iVar5 < 0;
      }
      local_c88 = 0;
      memset(local_c84,0,0x5e4);
      if (bVar11) {
        memcpy(local_698,&local_c88,0x5e8);
        iVar5 = (**(code **)(*param_1 + 0xc0))(param_1,0xd,local_698);
        if (iVar5 != 0) {
          return 10;
        }
        Sleep(200);
      }
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0;
      snprintf(&local_a8,0x3c,"echo s 0x910 %d >/dev/rk_preisp",(int)param_4);
      iVar5 = thunk_FUN_18122db60(param_1,&local_a8);
      if (iVar5 == 0) {
        if (bVar11) {
          Sleep(200);
          memcpy(local_698,&local_c88,0x5e8);
          iVar5 = (**(code **)(*param_1 + 0xc0))(param_1,0xe,local_698);
          if (iVar5 != 0) {
            return 10;
          }
          Sleep(200);
        }
        *(int *)(param_1 + 0x5d) = (int)param_4;
        *(float *)((longlong)param_1 + 0x364) = param_4;
        return 0;
      }
      thunk_FUN_18317f440("[SDK ERROR] set PROPERTY_FRAMETIME failed\n");
      if (!bVar11) {
        return 10;
      }
      memcpy(local_698,&local_c88,0x5e8);
      (**(code **)(*param_1 + 0xc0))(param_1,0xe,local_698);
      return 10;
    }
    if (param_3 == 5) {
      uVar7 = thunk_FUN_18124ad90(param_1,param_2);
      return uVar7;
    }
  }
  thunk_FUN_1831809d0(local_c98,param_1 + 0x18);
  plVar1 = (longlong *)param_1[0x19];
  if (plVar1 == (longlong *)0x0) {
    thunk_FUN_18317f440("[SDK ERROR] set property failed: camera device is nullptr\n");
    thunk_FUN_183180a80(local_c98);
    uVar7 = 3;
  }
  else {
    uVar6 = (**(code **)(*plVar1 + 0x48))(plVar1,param_2,param_3);
    thunk_FUN_183180a80(local_c98);
    iVar5 = *(int *)((longlong)param_1 + 0xbc);
    if ((iVar5 - 0x1dU < 2) || (iVar5 == 0x24)) {
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
    if ((iVar5 == 0x16) || (iVar5 == 0x1f)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((((param_3 == 1) && (!bVar11)) && (!bVar2)) &&
       (*(char *)((longlong)param_1 + 0x315) != '\0')) {
      lVar9 = 3;
      do {
        (**(code **)(*param_1 + 0xa0))(param_1,1);
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      Sleep(100);
      thunk_FUN_18122a270(param_1);
    }
    pcVar10 = "Depth";
    if (uVar6 == 0) {
      pcVar8 = "[SDK TRACE] [%s] setProperty (%s), Type=%d success, value = %f\r\n";
      local_ca8 = (double)param_4;
    }
    else {
      local_ca8 = (double)CONCAT44(local_ca8._4_4_,uVar6);
      pcVar8 = "[SDK ERROR] [%s] setProperty (%s), Type=%d failed(%d)\r\n";
    }
    if (param_2 == 1) {
      pcVar10 = "RGB";
    }
    thunk_FUN_18317f440(pcVar8,(longlong)param_1 + 0x39,pcVar10,param_3);
    pcVar10 = "E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp";
    pcVar8 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
    if (pcVar8 != (char *)0x0) {
      pcVar10 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
      pcVar10 = pcVar10 + 1;
    }
    thunk_FUN_18317f440("[SDK LEAVE] %s %s %d\r\n",pcVar10,"cs::Camera::setProperty",0x84d);
    uVar7 = (ulonglong)uVar6;
  }
  return uVar7;
}


