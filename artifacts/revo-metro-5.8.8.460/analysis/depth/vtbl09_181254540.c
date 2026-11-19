// vtable slot 9 (thunk 0x180005547) -> FUN_181254540 @ 0x181254540  size=803

int FUN_181254540(longlong *param_1,int param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,int param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  char *pcVar11;
  longlong local_res8;
  undefined1 local_58 [16];
  longlong *local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  
  lVar10 = (longlong)param_2;
  thunk_FUN_18317f440("[SDK TRACE] \r\n\r\n");
  pcVar11 = "E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp";
  pcVar4 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp";
  }
  else {
    pcVar4 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
    pcVar4 = pcVar4 + 1;
  }
  thunk_FUN_18317f440("[SDK ENTER] %s %s %d\r\n",pcVar4,"cs::Camera::startStream",0x2d3);
  thunk_FUN_18317f440("[SDK TRACE] [%s] start stream, timeouts value = %d, stream operation\r\n",
                      (longlong)param_1 + 0x39,param_6);
  *(undefined1 *)((longlong)param_1 + lVar10 + 0x40c) = 1;
  *(undefined1 *)((longlong)param_1 + lVar10 + 899) = 0;
  local_48 = (longlong *)*param_3;
  uStack_40 = *(uint *)(param_3 + 1);
  uStack_3c = *(undefined4 *)((longlong)param_3 + 0xc);
  iVar2 = (**(code **)(*param_1 + 0x40))(param_1,param_2,&local_48,param_4,param_5);
  if (iVar2 == 0) {
    plVar9 = param_1 + (lVar10 + 0xd) * 10;
    uStack_40 = uStack_40 & 0xffffff00;
    local_48 = plVar9;
    iVar2 = _Mtx_lock(plVar9);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(5);
    }
    if (*(int *)((longlong)plVar9 + 0x4c) == 0x7fffffff) {
      *(undefined4 *)((longlong)plVar9 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(6);
    }
    uStack_40 = CONCAT31(uStack_40._1_3_,1);
    local_res8 = (longlong)param_6;
    plVar5 = (longlong *)thunk_FUN_1811aefe0(local_58,&local_res8);
    cVar1 = *(char *)((longlong)param_1 + lVar10 + 899);
    while (cVar1 == '\0') {
      do {
        lVar6 = _Query_perf_frequency();
        lVar7 = _Query_perf_counter();
        if (lVar6 == 10000000) {
          lVar7 = lVar7 * 100;
        }
        else if (lVar6 == 24000000) {
          lVar6 = SUB168(SEXT816(-0x4d0b03f86b6f730d) * SEXT816(lVar7),8) + lVar7;
          lVar8 = (lVar6 >> 0x18) - (lVar6 >> 0x3f);
          lVar6 = (lVar7 + lVar8 * -24000000) * 1000000000;
          lVar6 = SUB168(SEXT816(-0x4d0b03f86b6f730d) * SEXT816(lVar6),8) + lVar6;
          lVar7 = ((lVar6 >> 0x18) - (lVar6 >> 0x3f)) + lVar8 * 1000000000;
        }
        else {
          lVar7 = ((lVar7 % lVar6) * 1000000000) / lVar6 + (lVar7 / lVar6) * 1000000000;
        }
        if (*plVar5 <= lVar7) {
          *(undefined1 *)((longlong)param_1 + lVar10 + 0x40c) = 0;
          if (*(char *)((longlong)param_1 + lVar10 + 899) != '\0') goto LAB_18125479b;
          pcVar11 = "RGB";
          if (param_2 == 0) {
            pcVar11 = "Depth";
          }
          thunk_FUN_18317f440("[SDK ERROR] [%s] %s stream wait recv first frame timeout, %d\r\n",
                              (longlong)param_1 + 0x39,pcVar11,param_6);
          iVar2 = 7;
          goto LAB_1812547dc;
        }
        local_res8 = *plVar5 - lVar7;
        uVar3 = thunk_FUN_1811adb20(&local_res8);
        iVar2 = thunk_FUN_1831867a4(param_1 + lVar10 * 9 + 0x96,plVar9,uVar3);
      } while (iVar2 != 0);
      cVar1 = *(char *)((longlong)param_1 + lVar10 + 899);
    }
    *(undefined1 *)((longlong)param_1 + lVar10 + 0x40c) = 0;
LAB_18125479b:
    pcVar4 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
    if (pcVar4 != (char *)0x0) {
      pcVar11 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
      pcVar11 = pcVar11 + 1;
    }
    thunk_FUN_18317f440("[SDK LEAVE] %s %s %d\r\n",pcVar11,"cs::Camera::startStream",0x2ee);
    iVar2 = 0;
LAB_1812547dc:
    _Mtx_unlock(plVar9);
  }
  else {
    thunk_FUN_18122cb70(param_1);
    *(undefined1 *)((longlong)param_1 + lVar10 + 0x40c) = 0;
  }
  return iVar2;
}


