// vtable slot 1 (thunk 0x18000db9d) -> FUN_18122a680 @ 0x18122a680  size=1711

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18122a680(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  CameraType CVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined **ppuVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined ***local_1a0;
  longlong local_190 [4];
  undefined8 uStack_170;
  undefined8 local_168;
  ulonglong uStack_160;
  undefined **local_158;
  undefined1 *local_150;
  undefined1 local_148;
  undefined1 local_147;
  undefined1 local_146;
  longlong *local_140;
  undefined ***local_120;
  int local_118 [56];
  ulonglong local_38;
  
  local_38 = DAT_183dc69c0 ^ (ulonglong)auStack_1c8;
  thunk_FUN_18317f440("[SDK INFO ] \r\n\r\n*********************************************** connect this camera, cameraPtr = %p *********************************************** \r\n"
                      ,param_1);
  thunk_FUN_18317f440("[SDK INFO ] %20s  :  %s\n",&DAT_183226368,param_2);
  thunk_FUN_18317f440("[SDK INFO ] %20s  :  %s\n","serial",param_2 + 4);
  thunk_FUN_18317f440("[SDK INFO ] %20s  :  %s\n","unique id",param_2 + 8);
  thunk_FUN_18317f440("[SDK INFO ] %20s  :  %s\n","firmware version",param_2 + 0xc);
  thunk_FUN_18317f440("[SDK INFO ] %20s  :  %s\n","algorithm version",param_2 + 0x10);
  thunk_FUN_18317f440("[SDK TRACE] start check disconnect\r\n");
  (**(code **)(*param_1 + 0x20))(param_1);
  thunk_FUN_18317f440("[SDK TRACE] end check disconnect\r\n");
  thunk_FUN_18122a270(param_1);
  thunk_FUN_18317f440("[SDK TRACE] end clear all frames\r\n");
  *(undefined1 *)(param_1 + 0x69) = 1;
  plVar5 = (longlong *)thunk_FUN_18125f510(param_2);
  if (plVar5 == (longlong *)0x0) {
    thunk_FUN_18317f440("[SDK ERROR] new camera device failed\n");
    uVar6 = 1;
  }
  else {
    thunk_FUN_18317f440("[SDK TRACE] create camera devices instance\r\n");
    iVar3 = (**(code **)(*plVar5 + 8))(plVar5);
    if (iVar3 == 0) {
      thunk_FUN_18317f440("[SDK ERROR] camera device init failed\n");
      (**(code **)*plVar5)(plVar5,1);
      uVar6 = 3;
    }
    else {
      param_1[0x19] = (longlong)plVar5;
      cVar2 = (*(code *)**(undefined8 **)param_1[0x6e])((undefined8 *)param_1[0x6e],param_2);
      if (cVar2 == '\0') {
        thunk_FUN_18317f440("[SDK TRACE] authorize failed\r\n");
        (**(code **)(*plVar5 + 0x10))(plVar5);
        (**(code **)*plVar5)(plVar5,1);
        param_1[0x19] = 0;
        uVar6 = 8;
      }
      else {
        uVar6 = param_2[1];
        *(undefined8 *)((longlong)param_1 + 0x19) = *param_2;
        *(undefined8 *)((longlong)param_1 + 0x21) = uVar6;
        uVar6 = param_2[3];
        *(undefined8 *)((longlong)param_1 + 0x29) = param_2[2];
        *(undefined8 *)((longlong)param_1 + 0x31) = uVar6;
        uVar6 = param_2[5];
        *(undefined8 *)((longlong)param_1 + 0x39) = param_2[4];
        *(undefined8 *)((longlong)param_1 + 0x41) = uVar6;
        uVar6 = param_2[7];
        *(undefined8 *)((longlong)param_1 + 0x49) = param_2[6];
        *(undefined8 *)((longlong)param_1 + 0x51) = uVar6;
        uVar6 = param_2[9];
        *(undefined8 *)((longlong)param_1 + 0x59) = param_2[8];
        *(undefined8 *)((longlong)param_1 + 0x61) = uVar6;
        uVar6 = param_2[0xb];
        *(undefined8 *)((longlong)param_1 + 0x69) = param_2[10];
        *(undefined8 *)((longlong)param_1 + 0x71) = uVar6;
        uVar6 = param_2[0xd];
        *(undefined8 *)((longlong)param_1 + 0x79) = param_2[0xc];
        *(undefined8 *)((longlong)param_1 + 0x81) = uVar6;
        uVar6 = param_2[0xf];
        *(undefined8 *)((longlong)param_1 + 0x89) = param_2[0xe];
        *(undefined8 *)((longlong)param_1 + 0x91) = uVar6;
        uVar6 = param_2[0x11];
        *(undefined8 *)((longlong)param_1 + 0x99) = param_2[0x10];
        *(undefined8 *)((longlong)param_1 + 0xa1) = uVar6;
        uVar6 = param_2[0x13];
        *(undefined8 *)((longlong)param_1 + 0xa9) = param_2[0x12];
        *(undefined8 *)((longlong)param_1 + 0xb1) = uVar6;
        CVar4 = cs::getCameraTypeBySN((char *)((longlong)param_1 + 0x39));
        *(CameraType *)((longlong)param_1 + 0xbc) = CVar4;
        if (DAT_183dce9a0 != 0) {
          pcVar7 = (char *)thunk_FUN_1811adae0(DAT_183dce9a0 + 2);
          if (*pcVar7 != '\0') {
            local_190[3] = 0;
            uStack_170 = 0;
            local_168 = 0;
            uStack_160 = 0;
            lVar10 = -1;
            do {
              lVar1 = lVar10 + 0x3a;
              lVar10 = lVar10 + 1;
            } while (*(char *)((longlong)param_1 + lVar1) != '\0');
            thunk_FUN_1811adba0(local_190 + 3,(longlong)param_1 + 0x39);
            uVar6 = thunk_FUN_18135a8f0();
            thunk_FUN_18135aa30(uVar6,local_190 + 3,param_1);
            if (0xf < uStack_160) {
              uVar11 = uStack_160 + 1;
              lVar10 = local_190[3];
              if (0xfff < uVar11) {
                uVar11 = uStack_160 + 0x28;
                lVar10 = *(longlong *)(local_190[3] + -8);
                if (0x1f < (local_190[3] - lVar10) - 8U) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              FUN_18001e0e2(lVar10,uVar11);
            }
            thunk_FUN_181382c80(&local_158);
            local_190[3] = 0;
            uStack_170 = 0;
            local_168 = 0;
            uStack_160 = 0;
            lVar10 = -1;
            do {
              lVar1 = lVar10 + 0x3a;
              lVar10 = lVar10 + 1;
            } while (*(char *)((longlong)param_1 + lVar1) != '\0');
            thunk_FUN_1811adba0(local_190 + 3,(longlong)param_1 + 0x39);
            uVar6 = thunk_FUN_1813833b0();
            local_1a0 = &local_158;
            local_1a8 = 0;
            thunk_FUN_181383890(uVar6,local_190 + 3,0,0);
            if (0xf < uStack_160) {
              uVar11 = uStack_160 + 1;
              lVar10 = local_190[3];
              if (0xfff < uVar11) {
                uVar11 = uStack_160 + 0x28;
                lVar10 = *(longlong *)(local_190[3] + -8);
                if (0x1f < (local_190[3] - lVar10) - 8U) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              FUN_18001e0e2(lVar10,uVar11);
            }
            if ((longlong *)0xf < local_140) {
              plVar5 = (longlong *)((longlong)local_140 + 1);
              ppuVar9 = local_158;
              if ((longlong *)0xfff < plVar5) {
                plVar5 = local_140 + 5;
                ppuVar9 = (undefined **)local_158[-1];
                if (0x1f < (ulonglong)((longlong)local_158 + (-8 - (longlong)ppuVar9))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              FUN_18001e0e2(ppuVar9,plVar5);
            }
          }
        }
        param_1[0x3f] = 0;
        param_1[0x40] = 0;
        param_1[0x41] = 0;
        param_1[0x42] = 0;
        param_1[0x43] = 0;
        param_1[0x44] = 0;
        param_1[0x45] = 0;
        param_1[0x46] = 0;
        param_1[0x47] = 0;
        param_1[0x48] = 0;
        param_1[0x49] = 0;
        param_1[0x4a] = 0;
        param_1[0x4b] = 0;
        param_1[0x4c] = 0;
        param_1[0x4d] = 0;
        param_1[0x4e] = 0;
        param_1[0x4f] = 0;
        param_1[0x50] = 0;
        param_1[0x51] = 0;
        param_1[0x52] = 0;
        param_1[0x53] = 0;
        param_1[0x54] = 0;
        param_1[0x55] = 0;
        param_1[0x56] = 0;
        param_1[0x57] = 0;
        param_1[0x58] = 0;
        param_1[0x59] = 0;
        param_1[0x5a] = 0;
        param_1[0x5b] = 0;
        param_1[0x5c] = 0;
        *(undefined1 *)(param_1 + 0x7d) = 0;
        iVar3 = strcmp((char *)(param_2 + 8),"192.168.179.1");
        if (iVar3 == 0) {
          iVar3 = thunk_FUN_18122e870(param_1,local_118);
          if (((iVar3 == 0) && ((local_118[0] - 1U & 0xfffffffc) == 0)) && (local_118[0] != 3)) {
            thunk_FUN_18122db60(param_1,"pkill wpa_supplicant");
          }
        }
        thunk_FUN_18124b560(param_1,1);
        local_190[3] = 0;
        uStack_170 = 0;
        local_168 = 0;
        uStack_160 = 0;
        lVar10 = -1;
        do {
          lVar12 = lVar10 + 1;
          lVar1 = lVar10 + 0x3a;
          lVar10 = lVar12;
        } while (*(char *)((longlong)param_1 + lVar1) != '\0');
        thunk_FUN_1811adba0(local_190 + 3,(longlong)param_1 + 0x39,lVar12);
        uVar6 = thunk_FUN_18135cda0();
        thunk_FUN_18135d180(uVar6,local_190 + 3,0);
        if (0xf < uStack_160) {
          uVar11 = uStack_160 + 1;
          lVar10 = local_190[3];
          if (0xfff < uVar11) {
            uVar11 = uStack_160 + 0x28;
            lVar10 = *(longlong *)(local_190[3] + -8);
            if (0x1f < (local_190[3] - lVar10) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FUN_18001e0e2(lVar10,uVar11);
        }
        thunk_FUN_18317f440("[SDK TRACE] set certify call back func\r\n");
        local_120 = (undefined ***)0x0;
        cVar2 = thunk_FUN_181208710(local_190 + 3);
        if (cVar2 != '\0') {
          local_158 = std::
                      _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__cdecl_cs::Camera::*)(cs::CERTIFY_CSCAMERA_TYPE,void*___ptr64)___ptr64,cs::Camera*___ptr64,std::_Ph<1>_const&___ptr64,std::_Ph<2>_const&___ptr64>,void,cs::CERTIFY_CSCAMERA_TYPE,void*___ptr64>
                      ::vftable;
          local_150 = &LAB_18000f5d8;
          local_148 = (undefined1)uStack_170;
          local_147 = uStack_170._1_1_;
          local_120 = &local_158;
          local_140 = param_1;
        }
        (**(code **)(*(longlong *)param_1[0x19] + 0x90))((longlong *)param_1[0x19],&local_158);
        local_190[0] = 0;
        local_190[1] = 0;
        local_190[2] = 0;
        (**(code **)(*param_1 + 0x28))(param_1,0,local_190);
        thunk_FUN_181238560(param_1);
        thunk_FUN_18123da40(param_1);
        thunk_FUN_1812676a0(param_1);
        plVar5 = (longlong *)param_1[0x19];
        local_120 = (undefined ***)0x0;
        cVar2 = thunk_FUN_181208720(local_190 + 3);
        if (cVar2 != '\0') {
          local_158 = std::
                      _Func_impl_no_alloc<std::_Binder<std::_Unforced,enum_ERROR_CODE_(__cdecl_cs::CsDeviceBase::*)(int,char*___ptr64_const,int*___ptr64)___ptr64,cs::CsDeviceBase*___ptr64&___ptr64,std::_Ph<1>_const&___ptr64,std::_Ph<2>_const&___ptr64,std::_Ph<3>_const&___ptr64>,ERROR_CODE,int,char_(&___ptr64)[60],int*___ptr64>
                      ::vftable;
          local_150 = &LAB_180014056;
          local_148 = (undefined1)uStack_170;
          local_147 = uStack_170._1_1_;
          local_146 = uStack_170._2_1_;
          local_120 = &local_158;
          local_140 = plVar5;
        }
        thunk_FUN_1812689a0(*(undefined4 *)((longlong)param_1 + 0xbc),&local_158,
                            (longlong)param_1 + 0x99);
        pcVar7 = "E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp";
        pcVar8 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c)
        ;
        if (pcVar8 != (char *)0x0) {
          pcVar7 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",
                           0x5c);
          pcVar7 = pcVar7 + 1;
        }
        thunk_FUN_18317f440("[SDK LEAVE] %s %s %d\r\n",pcVar7,"cs::Camera::connect",0x18d);
        if (local_190[0] != 0) {
          uVar11 = local_190[2] - local_190[0] & 0xfffffffffffffff0;
          lVar10 = local_190[0];
          if (0xfff < uVar11) {
            uVar11 = uVar11 + 0x27;
            lVar10 = *(longlong *)(local_190[0] + -8);
            if (0x1f < (local_190[0] - lVar10) - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FUN_18001e0e2(lVar10,uVar11);
        }
        uVar6 = 0;
      }
    }
  }
  return uVar6;
}


