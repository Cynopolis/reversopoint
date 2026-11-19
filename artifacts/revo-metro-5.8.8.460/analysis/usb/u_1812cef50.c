/* 0x1812cef50 size=0xebe
   SetupDiDestroyDeviceInfoList @1812cf77a
   SetupDiDestroyDeviceInfoList @1812cfc01
   SetupDiEnumDeviceInterfaces @1812cf5fa
   SetupDiGetDeviceInterfaceDetailW @1812cf63b
   SetupDiGetDeviceInterfaceDetailW @1812cf712
   SetupDiGetClassDevsW @1812cf4c6
   SetupDiGetClassDevsExW @1812cf04b
   CM_Get_Parent @1812cf3eb
   CM_Get_Device_ID_Size @1812cf0f4
   CM_Get_Device_ID_Size @1812cf405
   CM_Get_Device_IDW @1812cf183
   CM_Get_Device_IDW @1812cf4aa
   SetupDiEnumDeviceInfo @1812cf0b9
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1812cef50(short param_1,short param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  BOOL BVar2;
  DWORD DVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  PCWSTR Enumerator;
  _SP_DEVICE_INTERFACE_DETAIL_DATA_W DeviceInterfaceDetailData;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 ******ppppppuVar11;
  PCWSTR pWVar12;
  _SP_DEVICE_INTERFACE_DETAIL_DATA_W _Var13;
  ulonglong uVar14;
  undefined8 ******ppppppuVar15;
  char *pcVar16;
  longlong lVar17;
  longlong lVar18;
  DWORD DVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  undefined1 auStackY_388 [32];
  DWORD local_344;
  undefined2 local_340 [2];
  undefined2 local_33c [2];
  DWORD local_338;
  short local_334;
  short local_330 [2];
  short local_32c [2];
  undefined2 local_328;
  undefined4 local_324;
  char *local_320;
  PCWSTR local_318;
  HDEVINFO local_308;
  PCWSTR local_300;
  undefined8 *local_2f8;
  undefined8 *puStack_2f0;
  undefined8 *local_2e8;
  undefined8 *local_2e0;
  HDEVINFO local_2d8;
  longlong local_2d0;
  longlong lStack_2c8;
  longlong local_2c0;
  PCWSTR local_2b8;
  PCWSTR pWStack_2b0;
  PCWSTR local_2a8;
  _SP_DEVICE_INTERFACE_DETAIL_DATA_W local_2a0;
  longlong lStack_298;
  longlong local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 local_260;
  undefined8 uStack_258;
  ulonglong local_250;
  ulonglong local_248;
  longlong local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  ulonglong local_228;
  undefined8 *****local_220;
  undefined8 uStack_218;
  longlong local_210;
  ulonglong local_208;
  _SP_DEVICE_INTERFACE_DATA local_200;
  _SP_DEVINFO_DATA local_1e0;
  _SP_DEVINFO_DATA local_1c0;
  GUID local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  char local_148 [272];
  ulonglong local_38;
  
  local_38 = DAT_183dc69c0 ^ (ulonglong)auStackY_388;
  local_190 = _DAT_18324dd68;
  uStack_188 = _UNK_18324dd70;
  local_180 = _DAT_18324dd78;
  uStack_17c = _UNK_18324dd7c;
  uStack_178 = _UNK_18324dd80;
  uStack_174 = _UNK_18324dd84;
  local_2f8 = (undefined8 *)0x0;
  puStack_2f0 = (undefined8 *)0x0;
  local_334 = param_1;
  local_320 = param_4;
  local_288 = param_3;
  puVar6 = (undefined8 *)thunk_FUN_183196718(0x20);
  local_2f8 = puVar6;
  local_2e8 = puVar6 + 4;
  thunk_FUN_1812b8c40(&local_190);
  puVar9 = puVar6 + 4;
  puVar20 = puVar6;
  puVar21 = puVar6 + 4;
  puStack_2f0 = puVar9;
  local_2e0 = puVar6;
  if (puVar6 != puVar9) {
    do {
      DVar19 = 0;
      local_1a0._0_8_ = *puVar6;
      local_1a0.Data4 = *(uchar (*) [8])(puVar6 + 1);
      local_2e0 = puVar6;
      local_2d8 = SetupDiGetClassDevsExW
                            (&local_1a0,(PCWSTR)0x0,(HWND)0x0,2,(HDEVINFO)0x0,(PCWSTR)0x0,(PVOID)0x0
                            );
      if (local_2d8 != (HDEVINFO)0xffffffffffffffff) {
        while( true ) {
          while( true ) {
            local_200.cbSize = 0x20;
            local_200.InterfaceClassGuid.Data1 = 0;
            local_200.InterfaceClassGuid.Data2 = 0;
            local_200.InterfaceClassGuid.Data3 = 0;
            local_200.InterfaceClassGuid.Data4[0] = '\0';
            local_200.InterfaceClassGuid.Data4[1] = '\0';
            local_200.InterfaceClassGuid.Data4[2] = '\0';
            local_200.InterfaceClassGuid.Data4[3] = '\0';
            local_200.InterfaceClassGuid.Data4[4] = '\0';
            local_200.InterfaceClassGuid.Data4[5] = '\0';
            local_200.InterfaceClassGuid.Data4[6] = '\0';
            local_200.InterfaceClassGuid.Data4[7] = '\0';
            local_200.Flags = 0;
            local_200.Reserved._0_4_ = 0;
            local_200.Reserved._4_4_ = 0;
            local_344 = 0;
            local_1e0.cbSize = 0x20;
            local_1e0.ClassGuid.Data1 = 0;
            local_1e0.ClassGuid.Data2 = 0;
            local_1e0.ClassGuid.Data3 = 0;
            local_1e0.ClassGuid.Data4[0] = '\0';
            local_1e0.ClassGuid.Data4[1] = '\0';
            local_1e0.ClassGuid.Data4[2] = '\0';
            local_1e0.ClassGuid.Data4[3] = '\0';
            local_1e0.ClassGuid.Data4[4] = '\0';
            local_1e0.ClassGuid.Data4[5] = '\0';
            local_1e0.ClassGuid.Data4[6] = '\0';
            local_1e0.ClassGuid.Data4[7] = '\0';
            local_1e0._20_8_ = 0;
            local_1e0.Reserved._4_4_ = 0;
            local_338 = DVar19;
            BVar2 = SetupDiEnumDeviceInfo(local_2d8,DVar19,&local_1e0);
            if (BVar2 != 0) break;
            DVar3 = GetLastError();
            if (DVar3 == 0x103) goto LAB_1812cfbfd;
            DVar19 = DVar19 + 1;
          }
          iVar5 = CM_Get_Device_ID_Size(&local_344);
          if (iVar5 != 0) {
            thunk_FUN_18317f440("[SDK TRACE] CM_Get_Device_ID_Size failed\n");
            goto LAB_1812cfbfd;
          }
          uVar4 = local_344 + 1;
          local_2d0 = 0;
          lStack_2c8 = 0;
          local_2c0 = 0;
          if (uVar4 == 0) {
            lVar7 = 0;
          }
          else {
            uVar22 = (ulonglong)uVar4 * 2;
            if ((ulonglong)uVar4 == 0) {
              lVar7 = 0;
            }
            else if (uVar22 < 0x1000) {
              lVar7 = thunk_FUN_183196718(uVar22);
            }
            else {
              lVar7 = thunk_FUN_1811a9100();
            }
            lVar17 = uVar22 + lVar7;
            local_2d0 = lVar7;
            local_2c0 = lVar17;
            thunk_FUN_1812b9aa0(lVar7,lVar17);
            lStack_2c8 = lVar17;
          }
          lVar17 = lStack_2c8;
          uVar8 = thunk_FUN_1812cd790(&local_2d0);
          iVar5 = CM_Get_Device_IDW(local_1e0._20_8_ & 0xffffffff,lVar7,uVar8,0);
          if (iVar5 != 0) {
            thunk_FUN_18317f440("[SDK ERROR] CM_Get_Device_ID failed\n");
            if (lVar7 != 0) {
              lVar10 = lVar7;
              if ((0xfff < (ulonglong)((lVar17 - lVar7 >> 1) * 2)) &&
                 (lVar10 = *(longlong *)(lVar7 + -8), 0x1f < (lVar7 - lVar10) - 8U))
              goto LAB_1812cfd69;
              FUN_18001e0e2(lVar10);
            }
            goto LAB_1812cfbfd;
          }
          uStack_238 = 0;
          local_230 = 0;
          local_228 = 0xf;
          local_240 = 0;
          memset(local_148,0,0x104);
          thunk_FUN_183185880(lVar7,local_148,0x104);
          local_260 = (undefined8 *)0x0;
          uStack_258 = 0;
          local_250 = 0;
          local_248 = 0;
          uVar22 = 0xffffffffffffffff;
          do {
            uVar14 = uVar22;
            uVar22 = uVar14 + 1;
          } while (local_148[uVar14 + 1] != '\0');
          if (0x7fffffffffffffff < uVar22) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_1811b44e0();
          }
          if (uVar22 < 0x10) {
            local_248 = 0xf;
            local_250 = uVar22;
            memcpy(&local_260,local_148,uVar22);
            *(undefined1 *)((longlong)&local_260 + uVar14 + 1) = 0;
          }
          else {
            uVar14 = uVar22 | 0xf;
            if (uVar14 < 0x8000000000000000) {
              if (uVar14 < 0x16) {
                uVar14 = 0x16;
              }
              if (uVar14 == 0xffffffffffffffff) {
                puVar9 = (undefined8 *)0x0;
              }
              else if (uVar14 + 1 < 0x1000) {
                puVar9 = (undefined8 *)thunk_FUN_183196718();
              }
              else {
                puVar9 = (undefined8 *)thunk_FUN_1811a9100();
              }
            }
            else {
              uVar14 = 0x7fffffffffffffff;
              puVar9 = (undefined8 *)thunk_FUN_1811a9100(0x8000000000000000);
            }
            local_260 = puVar9;
            local_250 = uVar22;
            local_248 = uVar14;
            memcpy(puVar9,local_148,uVar22);
            *(undefined1 *)((longlong)puVar9 + uVar22) = 0;
          }
          cVar1 = thunk_FUN_1812d0200(local_330,local_32c);
          if (0xf < local_248) {
            uVar22 = local_248 + 1;
            puVar9 = local_260;
            if (0xfff < uVar22) {
              uVar22 = local_248 + 0x28;
              puVar9 = (undefined8 *)local_260[-1];
              if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_260 + (-8 - (longlong)puVar9))
                 ) goto LAB_1812cfd5b;
            }
            FUN_18001e0e2(puVar9,uVar22);
          }
          if ((((cVar1 != '\0') && (local_330[0] == local_334)) && (local_32c[0] == param_2)) &&
             (cVar1 = thunk_FUN_1812854a0(&local_240,local_288), cVar1 == '\0')) break;
LAB_1812cf31c:
          if (0xf < local_228) {
            uVar22 = local_228 + 1;
            lVar10 = local_240;
            if (0xfff < uVar22) {
              lVar10 = *(longlong *)(local_240 + -8);
              uVar22 = local_228 + 0x28;
              if (0x1f < (local_240 - lVar10) - 8U) goto LAB_1812cfd62;
            }
            FUN_18001e0e2(lVar10,uVar22);
          }
          if (lVar7 == 0) {
LAB_1812cf5a0:
            DVar19 = DVar19 + 1;
          }
          else {
            uVar22 = (lVar17 - lVar7 >> 1) * 2;
            lVar17 = lVar7;
            if (0xfff < uVar22) {
              uVar22 = uVar22 + 0x27;
              lVar17 = *(longlong *)(lVar7 + -8);
              if (0x1f < (lVar7 - lVar17) - 8U) goto LAB_1812cfd69;
            }
            FUN_18001e0e2(lVar17,uVar22);
            DVar19 = DVar19 + 1;
          }
        }
        iVar5 = CM_Get_Parent(&local_324,local_1e0._20_8_ & 0xffffffff);
        if (iVar5 == 0) {
          iVar5 = CM_Get_Device_ID_Size(&local_344,local_324);
          if (iVar5 != 0) {
            pcVar16 = "[SDK ERROR] CM_Get_Device_ID_Size failed\n";
            goto LAB_1812cfc60;
          }
          uVar22 = (ulonglong)(local_344 + 1);
          local_2b8 = (PCWSTR)0x0;
          pWStack_2b0 = (PCWSTR)0x0;
          local_300 = (PCWSTR)0x0;
          local_2a8 = (PCWSTR)0x0;
          if (local_344 + 1 == 0) {
            Enumerator = (PCWSTR)0x0;
            local_318 = (PCWSTR)0x0;
          }
          else {
            if (uVar22 == 0) {
              Enumerator = (PCWSTR)0x0;
            }
            else if (uVar22 * 2 < 0x1000) {
              Enumerator = (PCWSTR)thunk_FUN_183196718(uVar22 * 2);
            }
            else {
              Enumerator = (PCWSTR)thunk_FUN_1811a9100();
            }
            pWVar12 = Enumerator + uVar22;
            local_318 = Enumerator;
            local_300 = pWVar12;
            local_2b8 = Enumerator;
            local_2a8 = pWVar12;
            thunk_FUN_1812b9aa0(Enumerator,pWVar12);
            param_4 = local_320;
            pWStack_2b0 = pWVar12;
          }
          pWVar12 = pWStack_2b0;
          uVar8 = thunk_FUN_1812cd790(&local_2b8);
          iVar5 = CM_Get_Device_IDW(local_324,Enumerator,uVar8,0);
          if (iVar5 == 0) {
            local_308 = SetupDiGetClassDevsW((GUID *)0x0,Enumerator,(HWND)0x0,0x16);
            if (local_308 == (HDEVINFO)0xffffffffffffffff) {
              thunk_FUN_18317f440();
              if (Enumerator != (PCWSTR)0x0) {
                uVar22 = ((longlong)pWVar12 - (longlong)Enumerator >> 1) * 2;
                pWVar12 = Enumerator;
                if (0xfff < uVar22) {
                  uVar22 = uVar22 + 0x27;
                  pWVar12 = *(PCWSTR *)(Enumerator + -4);
                  if (0x1f < (ulonglong)((longlong)Enumerator + (-8 - (longlong)pWVar12)))
                  goto LAB_1812cfd5b;
                }
                FUN_18001e0e2(pWVar12,uVar22);
              }
              if (0xf < local_228) {
                uVar22 = local_228 + 1;
                lVar10 = local_240;
                if (0xfff < uVar22) {
                  uVar22 = local_228 + 0x28;
                  lVar10 = *(longlong *)(local_240 + -8);
                  if (0x1f < (local_240 - lVar10) - 8U) goto LAB_1812cfd62;
                }
                FUN_18001e0e2(lVar10,uVar22);
              }
              if (lVar7 != 0) {
                uVar22 = (lVar17 - lVar7 >> 1) * 2;
                lVar17 = lVar7;
                if (0xfff < uVar22) {
                  uVar22 = uVar22 + 0x27;
                  lVar17 = *(longlong *)(lVar7 + -8);
                  if (0x1f < (lVar7 - lVar17) - 8U) goto LAB_1812cfd69;
                }
                FUN_18001e0e2(lVar17,uVar22);
              }
              goto LAB_1812cf5a0;
            }
            local_280 = 0x20;
            uStack_27c = 0;
            uStack_278 = 0;
            uStack_274 = 0;
            uStack_270 = 0;
            uStack_26c = 0;
            uStack_268 = 0;
            uStack_264 = 0;
            local_200.cbSize = 0x20;
            local_200.InterfaceClassGuid.Data1 = 0;
            local_200.InterfaceClassGuid.Data2 = 0;
            local_200.InterfaceClassGuid.Data3 = 0;
            local_200.InterfaceClassGuid.Data4[0] = '\0';
            local_200.InterfaceClassGuid.Data4[1] = '\0';
            local_200.InterfaceClassGuid.Data4[2] = '\0';
            local_200.InterfaceClassGuid.Data4[3] = '\0';
            local_200.InterfaceClassGuid.Data4[4] = '\0';
            local_200.InterfaceClassGuid.Data4[5] = '\0';
            local_200.InterfaceClassGuid.Data4[6] = '\0';
            local_200.InterfaceClassGuid.Data4[7] = '\0';
            local_200.Flags = 0;
            local_200.Reserved._0_4_ = 0;
            local_200.Reserved._4_4_ = 0;
            BVar2 = SetupDiEnumDeviceInterfaces
                              (local_308,(PSP_DEVINFO_DATA)0x0,(GUID *)&DAT_18324dd58,0,&local_200);
            if (BVar2 == 0) {
              thunk_FUN_18317f440("[SDK ERROR] SetupDiEnumDeviceInterfaces failed\n");
            }
            else {
              local_344 = 0;
              SetupDiGetDeviceInterfaceDetailW
                        (local_308,&local_200,(PSP_DEVICE_INTERFACE_DETAIL_DATA_W)0x0,0,&local_344,
                         (PSP_DEVINFO_DATA)0x0);
              DVar3 = GetLastError();
              if (DVar3 == 0x7a) {
                uVar22 = (ulonglong)local_344;
                local_2a0.cbSize = 0;
                local_2a0.DevicePath[0] = L'\0';
                local_2a0._6_2_ = 0;
                lStack_298 = 0;
                local_290 = 0;
                if (uVar22 == 0) {
                  DeviceInterfaceDetailData.cbSize = 0;
                  DeviceInterfaceDetailData.DevicePath[0] = L'\0';
                  DeviceInterfaceDetailData._6_2_ = 0;
                }
                else {
                  if (uVar22 < 0x1000) {
                    DeviceInterfaceDetailData =
                         (_SP_DEVICE_INTERFACE_DETAIL_DATA_W)thunk_FUN_183196718(uVar22);
                  }
                  else {
                    DeviceInterfaceDetailData =
                         (_SP_DEVICE_INTERFACE_DETAIL_DATA_W)thunk_FUN_1811a9100();
                  }
                  lVar10 = (longlong)DeviceInterfaceDetailData + uVar22;
                  local_2a0 = DeviceInterfaceDetailData;
                  local_290 = lVar10;
                  thunk_FUN_1811d5a70(DeviceInterfaceDetailData,lVar10);
                  lStack_298 = lVar10;
                }
                lVar10 = lStack_298;
                *(undefined4 *)DeviceInterfaceDetailData = 8;
                local_1c0.cbSize = 0x20;
                local_1c0.ClassGuid.Data1 = 0;
                local_1c0.ClassGuid.Data2 = 0;
                local_1c0.ClassGuid.Data3 = 0;
                local_1c0.ClassGuid.Data4[0] = '\0';
                local_1c0.ClassGuid.Data4[1] = '\0';
                local_1c0.ClassGuid.Data4[2] = '\0';
                local_1c0.ClassGuid.Data4[3] = '\0';
                local_1c0.ClassGuid.Data4[4] = '\0';
                local_1c0.ClassGuid.Data4[5] = '\0';
                local_1c0.ClassGuid.Data4[6] = '\0';
                local_1c0.ClassGuid.Data4[7] = '\0';
                local_1c0._20_8_ = 0;
                local_1c0.Reserved._4_4_ = 0;
                DVar19 = thunk_FUN_1812cd780(&local_2a0);
                BVar2 = SetupDiGetDeviceInterfaceDetailW
                                  (local_308,&local_200,
                                   (PSP_DEVICE_INTERFACE_DETAIL_DATA_W)DeviceInterfaceDetailData,
                                   DVar19,(PDWORD)0x0,&local_1c0);
                if (BVar2 == 0) {
                  thunk_FUN_18317f440("[SDK ERROR] SetupDiGetDeviceInterfaceDetail failed\n");
                  param_4 = local_320;
                  Enumerator = local_318;
                  DVar19 = local_338;
                  if (DeviceInterfaceDetailData != (_SP_DEVICE_INTERFACE_DETAIL_DATA_W)0x0) {
                    uVar22 = lVar10 - (longlong)DeviceInterfaceDetailData;
                    _Var13 = DeviceInterfaceDetailData;
                    if (0xfff < uVar22) {
                      uVar22 = uVar22 + 0x27;
                      _Var13 = *(_SP_DEVICE_INTERFACE_DETAIL_DATA_W *)
                                ((longlong)DeviceInterfaceDetailData + -8);
                      if (0x1f < ((longlong)DeviceInterfaceDetailData - (longlong)_Var13) - 8U)
                      goto LAB_1812cfd54;
                    }
                    FUN_18001e0e2(_Var13,uVar22);
                    param_4 = local_320;
                    Enumerator = local_318;
                    DVar19 = local_338;
                  }
                }
                else {
                  local_33c[0] = 0;
                  local_340[0] = 0;
                  local_328 = 0;
                  uStack_168 = 0;
                  local_160 = 0;
                  local_158 = 0xf;
                  local_170 = 0;
                  local_220 = (undefined8 ******)0x0;
                  uStack_218 = 0;
                  local_210 = 0;
                  local_208 = 0;
                  lVar18 = -1;
                  do {
                    lVar18 = lVar18 + 1;
                  } while (*(short *)((longlong)DeviceInterfaceDetailData + 4 + lVar18 * 2) != 0);
                  thunk_FUN_1812b8710(&local_220);
                  ppppppuVar11 = &local_220;
                  if (7 < local_208) {
                    ppppppuVar11 = (undefined8 ******)local_220;
                  }
                  ppppppuVar11 = (undefined8 ******)((longlong)ppppppuVar11 + local_210 * 2);
                  ppppppuVar15 = &local_220;
                  if (7 < local_208) {
                    ppppppuVar15 = (undefined8 ******)local_220;
                  }
                  local_260 = (undefined8 *)0x0;
                  uStack_258 = 0;
                  if (ppppppuVar15 == ppppppuVar11) {
                    local_250 = 0;
                    local_248 = 0xf;
                    local_260 = (undefined8 *)0x0;
                  }
                  else {
                    uVar22 = (longlong)ppppppuVar11 - (longlong)ppppppuVar15 >> 1;
                    local_250 = 0;
                    local_248 = 0xf;
                    if (0x7fffffffffffffff < uVar22) {
                    /* WARNING: Subroutine does not return */
                      thunk_FUN_1811b44e0();
                    }
                    puVar9 = local_260;
                    uVar14 = local_248;
                    if (0xf < uVar22) {
                      uVar14 = uVar22 | 0xf;
                      if (uVar14 < 0x8000000000000000) {
                        if (uVar14 < 0x16) {
                          uVar14 = 0x16;
                        }
                        puVar9 = (undefined8 *)0x0;
                        if (uVar14 != 0xffffffffffffffff) {
                          if (uVar14 + 1 < 0x1000) {
                            puVar9 = (undefined8 *)thunk_FUN_183196718();
                          }
                          else {
                            puVar9 = (undefined8 *)thunk_FUN_1811a9100();
                          }
                        }
                      }
                      else {
                        puVar9 = (undefined8 *)thunk_FUN_1811a9100(0x8000000000000000);
                        local_248 = 0x7fffffffffffffff;
                        uVar14 = local_248;
                      }
                    }
                    local_248 = uVar14;
                    local_260 = puVar9;
                    uVar14 = uVar22;
                    puVar9 = &local_260;
                    puVar6 = &local_260;
                    if (0xf < local_248) {
                      puVar9 = local_260;
                      puVar6 = local_260;
                    }
                    for (; uVar14 != 0; uVar14 = uVar14 - 1) {
                      *(undefined1 *)puVar9 = *(undefined1 *)ppppppuVar15;
                      ppppppuVar15 = (undefined8 ******)((longlong)ppppppuVar15 + 2);
                      puVar9 = (undefined8 *)((longlong)puVar9 + 1);
                    }
                    local_250 = uVar22;
                    *(undefined1 *)(uVar22 + (longlong)puVar6) = 0;
                  }
                  pcVar16 = local_320;
                  thunk_FUN_1812d13a0(local_33c,local_340);
                  if (*(longlong *)(pcVar16 + 0x10) == 0) {
                    thunk_FUN_1812d26a0(local_33c,local_340);
                  }
                  if (0xf < local_248) {
                    uVar22 = local_248 + 1;
                    puVar9 = local_260;
                    if (0xfff < uVar22) {
                      uVar22 = local_248 + 0x28;
                      puVar9 = (undefined8 *)local_260[-1];
                      if ((undefined1 *)0x1f <
                          (undefined1 *)((longlong)local_260 + (-8 - (longlong)puVar9))) {
                    /* WARNING: Subroutine does not return */
                        _invalid_parameter_noinfo_noreturn();
                      }
                    }
                    FUN_18001e0e2(puVar9,uVar22);
                  }
                  if (7 < local_208) {
                    uVar22 = local_208 * 2 + 2;
                    ppppppuVar11 = (undefined8 ******)local_220;
                    if (0xfff < uVar22) {
                      uVar22 = local_208 * 2 + 0x29;
                      ppppppuVar11 = (undefined8 ******)local_220[-1];
                      if ((undefined1 *)0x1f <
                          (undefined1 *)((longlong)local_220 + (-8 - (longlong)ppppppuVar11))) {
                    /* WARNING: Subroutine does not return */
                        _invalid_parameter_noinfo_noreturn();
                      }
                    }
                    FUN_18001e0e2(ppppppuVar11,uVar22);
                  }
                  local_210 = 0;
                  local_208 = 7;
                  local_220 = (undefined8 *****)((ulonglong)local_220 & 0xffffffffffff0000);
                  param_4 = local_320;
                  Enumerator = local_318;
                  DVar19 = local_338;
                  if (DeviceInterfaceDetailData != (_SP_DEVICE_INTERFACE_DETAIL_DATA_W)0x0) {
                    uVar22 = lVar10 - (longlong)DeviceInterfaceDetailData;
                    _Var13 = DeviceInterfaceDetailData;
                    if (0xfff < uVar22) {
                      uVar22 = uVar22 + 0x27;
                      _Var13 = *(PSP_DEVICE_INTERFACE_DETAIL_DATA_W)
                                ((longlong)DeviceInterfaceDetailData + -8);
                      if (0x1f < ((longlong)DeviceInterfaceDetailData - (longlong)_Var13) - 8U) {
LAB_1812cfd54:
                    /* WARNING: Subroutine does not return */
                        _invalid_parameter_noinfo_noreturn();
                      }
                    }
                    FUN_18001e0e2(_Var13,uVar22);
                    param_4 = local_320;
                    Enumerator = local_318;
                    DVar19 = local_338;
                  }
                }
              }
              else {
                thunk_FUN_18317f440("[SDK ERROR] SetupDiGetDeviceInterfaceDetail failed\n");
              }
            }
            SetupDiDestroyDeviceInfoList(local_308);
            if (*(longlong *)(param_4 + 0x10) == 0) {
              if (Enumerator != (PCWSTR)0x0) {
                uVar22 = ((longlong)local_300 - (longlong)Enumerator >> 1) * 2;
                pWVar12 = Enumerator;
                if (0xfff < uVar22) {
                  uVar22 = uVar22 + 0x27;
                  pWVar12 = *(PCWSTR *)(Enumerator + -4);
                  if (0x1f < (ulonglong)((longlong)Enumerator + (-8 - (longlong)pWVar12)))
                  goto LAB_1812cfd5b;
                }
                FUN_18001e0e2(pWVar12,uVar22);
              }
              goto LAB_1812cf31c;
            }
            if (Enumerator != (PCWSTR)0x0) {
              uVar22 = ((longlong)local_300 - (longlong)Enumerator >> 1) * 2;
              pWVar12 = Enumerator;
              if (0xfff < uVar22) {
                uVar22 = uVar22 + 0x27;
                pWVar12 = *(PCWSTR *)(Enumerator + -4);
                if (0x1f < (ulonglong)((longlong)Enumerator + (-8 - (longlong)pWVar12))) {
LAB_1812cfd5b:
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              FUN_18001e0e2(pWVar12,uVar22);
            }
            if (0xf < local_228) {
              if ((0xfff < local_228 + 1) &&
                 (0x1f < (local_240 - *(longlong *)(local_240 + -8)) - 8U)) goto LAB_1812cfd62;
              FUN_18001e0e2();
            }
            if (lVar7 != 0) {
              lVar10 = lVar7;
              if ((0xfff < (ulonglong)((lVar17 - lVar7 >> 1) * 2)) &&
                 (lVar10 = *(longlong *)(lVar7 + -8), 0x1f < (lVar7 - lVar10) - 8U))
              goto LAB_1812cfd69;
              FUN_18001e0e2(lVar10);
            }
          }
          else {
            thunk_FUN_18317f440("[SDK ERROR] CM_Get_Device_ID failed\n");
            if (Enumerator != (PCWSTR)0x0) {
              uVar22 = ((longlong)pWVar12 - (longlong)Enumerator >> 1) * 2;
              pWVar12 = Enumerator;
              if (0xfff < uVar22) {
                uVar22 = uVar22 + 0x27;
                pWVar12 = *(PCWSTR *)(Enumerator + -4);
                if (0x1f < (ulonglong)((longlong)Enumerator + (-8 - (longlong)pWVar12)))
                goto LAB_1812cfd5b;
              }
              FUN_18001e0e2(pWVar12,uVar22);
            }
            if (0xf < local_228) {
              if ((0xfff < local_228 + 1) &&
                 (0x1f < (local_240 - *(longlong *)(local_240 + -8)) - 8U)) goto LAB_1812cfd62;
              FUN_18001e0e2();
            }
            if (lVar7 != 0) {
              lVar10 = lVar7;
              if ((0xfff < (ulonglong)((lVar17 - lVar7 >> 1) * 2)) &&
                 (lVar10 = *(longlong *)(lVar7 + -8), 0x1f < (lVar7 - lVar10) - 8U))
              goto LAB_1812cfd69;
              FUN_18001e0e2(lVar10);
            }
          }
        }
        else {
          pcVar16 = "[SDK ERROR] CM_Get_Parent failed\n";
LAB_1812cfc60:
          thunk_FUN_18317f440(pcVar16);
          if (0xf < local_228) {
            if ((0xfff < local_228 + 1) && (0x1f < (local_240 - *(longlong *)(local_240 + -8)) - 8U)
               ) {
LAB_1812cfd62:
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18001e0e2();
          }
          if (lVar7 != 0) {
            lVar10 = lVar7;
            if ((0xfff < (ulonglong)((lVar17 - lVar7 >> 1) * 2)) &&
               (lVar10 = *(longlong *)(lVar7 + -8), 0x1f < (lVar7 - lVar10) - 8U)) {
LAB_1812cfd69:
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18001e0e2(lVar10);
          }
        }
LAB_1812cfbfd:
        SetupDiDestroyDeviceInfoList(local_2d8);
        puVar6 = local_2e0;
        puVar9 = puStack_2f0;
        puVar20 = local_2f8;
        puVar21 = local_2e8;
        if (*(longlong *)(param_4 + 0x10) != 0) break;
      }
      puVar6 = puVar6 + 2;
      puVar20 = local_2f8;
      puVar21 = local_2e8;
      local_2e0 = puVar6;
    } while (puVar6 != puVar9);
  }
  if (*(ulonglong *)(param_4 + 0x18) < 0x10) {
    pcVar16 = param_4 + *(longlong *)(param_4 + 0x10);
  }
  else {
    pcVar16 = *(char **)param_4 + *(longlong *)(param_4 + 0x10);
    param_4 = *(char **)param_4;
  }
  for (; param_4 != pcVar16; param_4 = param_4 + 1) {
    iVar5 = toupper((int)*param_4);
    *param_4 = (char)iVar5;
  }
  if (puVar20 != (undefined8 *)0x0) {
    uVar22 = (longlong)puVar21 - (longlong)puVar20 & 0xfffffffffffffff0;
    puVar9 = puVar20;
    if (0xfff < uVar22) {
      uVar22 = uVar22 + 0x27;
      puVar9 = (undefined8 *)puVar20[-1];
      if (0x1f < (ulonglong)((longlong)puVar20 + (-8 - (longlong)puVar9))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(puVar9,uVar22);
  }
  return 1;
}


