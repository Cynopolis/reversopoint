/* 0x1812bd0f0 size=0xd97
   SetupDiDestroyDeviceInfoList @1812bdda8
   SetupDiEnumDeviceInterfaces @1812bd353
   SetupDiGetDeviceInterfaceDetailW @1812bd385
   SetupDiGetDeviceInterfaceDetailW @1812bd3bf
   SetupDiGetClassDevsW @1812bd206
   CM_Get_Parent @1812bd6a2
   CM_Get_Device_ID_Size @1812bd58b
   CM_Get_Device_IDW @1812bd628
   SetupDiGetDeviceRegistryPropertyW @1812bd56a
   SetupDiEnumDeviceInfo @1812bd323
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1812bd0f0(undefined8 *param_1)

{
  PSP_DEVICE_INTERFACE_DETAIL_DATA_W p_Var1;
  WCHAR *pWVar2;
  undefined1 auVar3 [16];
  ushort uVar4;
  longlong lVar5;
  DWORD DVar6;
  BOOL BVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  HDEVINFO DeviceInfoSet;
  PSP_DEVICE_INTERFACE_DETAIL_DATA_W p_Var12;
  _SP_DEVICE_INTERFACE_DETAIL_DATA_W _Var13;
  longlong lVar14;
  undefined8 uVar15;
  undefined1 (*pauVar16) [16];
  _SP_DEVICE_INTERFACE_DETAIL_DATA_W _Var17;
  _SP_DEVICE_INTERFACE_DETAIL_DATA_W _Var18;
  undefined8 ****ppppuVar19;
  ulonglong uVar20;
  longlong lVar21;
  PSP_DEVICE_INTERFACE_DETAIL_DATA_W p_Var22;
  undefined8 *puVar23;
  ulonglong uVar24;
  PSP_DEVICE_INTERFACE_DETAIL_DATA_W p_Var25;
  undefined8 *puVar26;
  DWORD MemberIndex;
  undefined8 ****ppppuVar27;
  longlong lVar28;
  undefined1 auStackY_448 [32];
  undefined4 local_408;
  uint local_404;
  DWORD local_400;
  DWORD local_3fc;
  int local_3f8 [2];
  HDEVINFO local_3f0;
  PSP_DEVICE_INTERFACE_DETAIL_DATA_W local_3e8;
  undefined1 *local_3e0;
  PSP_DEVICE_INTERFACE_DETAIL_DATA_W local_3d8;
  PSP_DEVICE_INTERFACE_DETAIL_DATA_W local_3d0;
  undefined8 *local_3c8;
  undefined8 *local_3c0;
  longlong local_3b8;
  longlong lStack_3b0;
  longlong local_3a8;
  undefined8 *local_3a0;
  undefined8 *puStack_398;
  undefined8 *local_390;
  undefined8 *local_388;
  undefined1 local_380 [32];
  undefined8 *local_360;
  longlong local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  ulonglong local_340;
  undefined1 local_338;
  undefined7 uStack_337;
  undefined8 local_328;
  ulonglong local_320;
  _SP_DEVICE_INTERFACE_DETAIL_DATA_W local_318;
  undefined8 uStack_310;
  ulonglong local_308;
  ulonglong local_300;
  undefined8 ***local_2f8;
  undefined8 uStack_2f0;
  longlong local_2e8;
  ulonglong local_2e0;
  GUID local_2d8;
  _SP_DEVINFO_DATA local_2c8;
  _SP_DEVICE_INTERFACE_DATA local_2a8;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  short local_258 [264];
  ulonglong local_48;
  
  local_48 = DAT_183dc69c0 ^ (ulonglong)auStackY_448;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_404 = 1;
  local_288 = _DAT_18324b0f8;
  uStack_280 = _UNK_18324b100;
  local_278 = _DAT_18324b108;
  uStack_274 = _UNK_18324b10c;
  uStack_270 = _UNK_18324b110;
  uStack_26c = _UNK_18324b114;
  local_268 = _DAT_18324b118;
  uStack_260 = _UNK_18324b120;
  local_3a0 = (undefined8 *)0x0;
  puStack_398 = (undefined8 *)0x0;
  local_3c0 = param_1;
  local_360 = param_1;
  puVar11 = (undefined8 *)thunk_FUN_183196718(0x30);
  local_3c8 = puVar11;
  local_3a0 = puVar11;
  local_390 = puVar11 + 6;
  thunk_FUN_1812b8c40(&local_288);
  puStack_398 = puVar11 + 6;
  puVar23 = puVar11 + 6;
  puVar26 = puVar11;
  local_388 = puStack_398;
  if (puVar11 != puStack_398) {
    do {
      MemberIndex = 0;
      local_2d8._0_8_ = *puVar11;
      local_2d8.Data4 = *(uchar (*) [8])(puVar11 + 1);
      DeviceInfoSet = SetupDiGetClassDevsW(&local_2d8,(PCWSTR)0x0,(HWND)0x0,0x12);
      local_3fc = 0;
      local_3f0 = DeviceInfoSet;
      if (DeviceInfoSet == (HDEVINFO)0xffffffffffffffff) {
        GetLastError();
      }
      else {
        DVar6 = GetLastError();
        while (DVar6 != 0x103) {
          p_Var25 = (PSP_DEVICE_INTERFACE_DETAIL_DATA_W)0x0;
          local_3e8 = (PSP_DEVICE_INTERFACE_DETAIL_DATA_W)thunk_FUN_183196718(0xa8);
          if (local_3e8 != (PSP_DEVICE_INTERFACE_DETAIL_DATA_W)0x0) {
            local_3e8->cbSize = 0;
            local_3e8->DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8->field_0x6 = 0;
            local_3e8[1].cbSize = 0;
            local_3e8[1].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[1].field_0x6 = 0;
            local_3e8[1].cbSize = 1;
            *(undefined4 *)local_3e8[1].DevicePath = 1;
            *local_3e8 = (_SP_DEVICE_INTERFACE_DETAIL_DATA_W)
                         std::_Ref_count_obj2<cs::UsbDevice>::vftable;
            local_3e8[4].cbSize = 0;
            local_3e8[4].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[4].field_0x6 = 0;
            local_3e8[5].cbSize = 0;
            local_3e8[5].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[5].field_0x6 = 0;
            local_3e8[6].cbSize = 0;
            local_3e8[6].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[6].field_0x6 = 0;
            local_3e8[7].cbSize = 0;
            local_3e8[7].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[7].field_0x6 = 0;
            local_3e8[8].cbSize = 0;
            local_3e8[8].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[8].field_0x6 = 0;
            local_3e8[9].cbSize = 0;
            local_3e8[9].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[9].field_0x6 = 0;
            local_3e8[10].cbSize = 0;
            local_3e8[10].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[10].field_0x6 = 0;
            local_3e8[0xb].cbSize = 0;
            local_3e8[0xb].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[0xb].field_0x6 = 0;
            local_3e8[0xc].cbSize = 0;
            local_3e8[0xc].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[0xc].field_0x6 = 0;
            local_3e8[0xd].cbSize = 0;
            local_3e8[0xd].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[0xd].field_0x6 = 0;
            local_3e8[0xe].cbSize = 0;
            local_3e8[0xe].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[0xe].field_0x6 = 0;
            local_3e8[0xf].cbSize = 0;
            local_3e8[0xf].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[0xf].field_0x6 = 0;
            local_3e8[0x10].cbSize = 0;
            local_3e8[0x10].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[0x10].field_0x6 = 0;
            local_3e8[0x11].cbSize = 0;
            local_3e8[0x11].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[0x11].field_0x6 = 0;
            local_3e8[0x12].cbSize = 0;
            local_3e8[0x12].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[0x12].field_0x6 = 0;
            local_3e8[0x13].cbSize = 0;
            local_3e8[0x13].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[0x13].field_0x6 = 0;
            local_3e8[2].cbSize = 0;
            local_3e8[2].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[2].field_0x6 = 0;
            local_3e8[3].cbSize = 0;
            local_3e8[3].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[3].field_0x6 = 0;
            local_3e8[4].cbSize = 0;
            local_3e8[4].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[4].field_0x6 = 0;
            local_3e8[5].cbSize = 0xf;
            local_3e8[5].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[5].field_0x6 = 0;
            *(undefined1 *)&local_3e8[2].cbSize = 0;
            local_3e8[9].cbSize = 0;
            local_3e8[9].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[9].field_0x6 = 0;
            local_3e8[10].cbSize = 0;
            local_3e8[10].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[10].field_0x6 = 0;
            local_3e8[0xb].cbSize = 0;
            local_3e8[0xb].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[0xb].field_0x6 = 0;
            local_3e8[0xc].cbSize = 0xf;
            local_3e8[0xc].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[0xc].field_0x6 = 0;
            *(undefined1 *)&local_3e8[9].cbSize = 0;
            local_3e8[0xd].cbSize = 0;
            local_3e8[0xd].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[0xd].field_0x6 = 0;
            local_3e8[0xe].cbSize = 0;
            local_3e8[0xe].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[0xe].field_0x6 = 0;
            local_3e8[0xf].cbSize = 0;
            local_3e8[0xf].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[0xf].field_0x6 = 0;
            local_3e8[0x10].cbSize = 0xf;
            local_3e8[0x10].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[0x10].field_0x6 = 0;
            *(undefined1 *)&local_3e8[0xd].cbSize = 0;
            local_3e8[0x11].cbSize = 0;
            local_3e8[0x11].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[0x11].field_0x6 = 0;
            local_3e8[0x12].cbSize = 0;
            local_3e8[0x12].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[0x12].field_0x6 = 0;
            local_3e8[0x13].cbSize = 0;
            local_3e8[0x13].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[0x13].field_0x6 = 0;
            local_3e8[0x14].cbSize = 0xf;
            local_3e8[0x14].DevicePath[0] = L'\0';
            *(undefined2 *)&local_3e8[0x14].field_0x6 = 0;
            *(undefined1 *)&local_3e8[0x11].cbSize = 0;
            p_Var25 = local_3e8;
          }
          local_404 = local_404 | 2;
          p_Var1 = p_Var25 + 2;
          local_2c8.cbSize = 0x20;
          local_3d8 = p_Var1;
          local_3d0 = p_Var25;
          BVar7 = SetupDiEnumDeviceInfo(DeviceInfoSet,MemberIndex,&local_2c8);
          if (BVar7 == 0) {
LAB_1812bdd3a:
            GetLastError();
          }
          else {
            local_2a8.cbSize = 0x20;
            BVar7 = SetupDiEnumDeviceInterfaces
                              (DeviceInfoSet,(PSP_DEVINFO_DATA)0x0,&local_2d8,MemberIndex,&local_2a8
                              );
            if (BVar7 == 0) goto LAB_1812bdd3a;
            local_400 = 0;
            SetupDiGetDeviceInterfaceDetailW
                      (DeviceInfoSet,&local_2a8,(PSP_DEVICE_INTERFACE_DETAIL_DATA_W)0x0,0,&local_400
                       ,(PSP_DEVINFO_DATA)0x0);
            p_Var12 = malloc((ulonglong)local_400);
            p_Var12->cbSize = 8;
            local_3e8 = p_Var12;
            BVar7 = SetupDiGetDeviceInterfaceDetailW
                              (DeviceInfoSet,&local_2a8,p_Var12,local_400,(PDWORD)0x0,
                               (PSP_DEVINFO_DATA)0x0);
            if (BVar7 == 0) {
              GetLastError();
              free(p_Var12);
            }
            else {
              local_2f8 = (undefined8 ****)0x0;
              uStack_2f0 = 0;
              local_2e8 = 0;
              local_2e0 = 0;
              lVar14 = -1;
              do {
                lVar21 = lVar14 + 1;
                lVar14 = lVar14 + 1;
              } while (p_Var12->DevicePath[lVar21] != L'\0');
              thunk_FUN_1812b8710(&local_2f8);
              ppppuVar19 = &local_2f8;
              if (7 < local_2e0) {
                ppppuVar19 = (undefined8 ****)local_2f8;
              }
              ppppuVar19 = (undefined8 ****)((longlong)ppppuVar19 + local_2e8 * 2);
              ppppuVar27 = &local_2f8;
              if (7 < local_2e0) {
                ppppuVar27 = (undefined8 ****)local_2f8;
              }
              local_318.cbSize = 0;
              local_318.DevicePath[0] = L'\0';
              local_318._6_2_ = 0;
              uStack_310 = 0;
              if (ppppuVar27 == ppppuVar19) {
                local_308 = 0;
                local_300 = 0xf;
                local_318.cbSize = 0;
                local_318.DevicePath[0] = L'\0';
                local_318._6_2_ = 0;
              }
              else {
                uVar24 = (longlong)ppppuVar19 - (longlong)ppppuVar27 >> 1;
                _Var18.cbSize = 0;
                _Var18.DevicePath[0] = L'\0';
                _Var18._6_2_ = 0;
                local_308 = 0;
                local_300 = 0xf;
                if (0x7fffffffffffffff < uVar24) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_1811b44e0();
                }
                _Var13 = local_318;
                uVar20 = local_300;
                if (0xf < uVar24) {
                  uVar20 = uVar24 | 0xf;
                  if (uVar20 < 0x8000000000000000) {
                    if (uVar20 < 0x16) {
                      uVar20 = 0x16;
                    }
                    _Var13 = _Var18;
                    if (uVar20 != 0xffffffffffffffff) {
                      if (uVar20 + 1 < 0x1000) {
                        _Var13 = (_SP_DEVICE_INTERFACE_DETAIL_DATA_W)thunk_FUN_183196718();
                      }
                      else {
                        _Var13 = (_SP_DEVICE_INTERFACE_DETAIL_DATA_W)thunk_FUN_1811a9100();
                      }
                    }
                  }
                  else {
                    _Var13 = (_SP_DEVICE_INTERFACE_DETAIL_DATA_W)
                             thunk_FUN_1811a9100(0x8000000000000000);
                    local_300 = 0x7fffffffffffffff;
                    uVar20 = local_300;
                  }
                }
                local_300 = uVar20;
                local_318 = _Var13;
                uVar20 = uVar24;
                _Var18 = (_SP_DEVICE_INTERFACE_DETAIL_DATA_W)&local_318;
                _Var13 = (_SP_DEVICE_INTERFACE_DETAIL_DATA_W)&local_318;
                if (0xf < local_300) {
                  _Var18 = local_318;
                  _Var13 = local_318;
                }
                for (; uVar20 != 0; uVar20 = uVar20 - 1) {
                  *(undefined1 *)_Var18 = *(undefined1 *)ppppuVar27;
                  ppppuVar27 = (undefined8 ****)((longlong)ppppuVar27 + 2);
                  _Var18 = (_SP_DEVICE_INTERFACE_DETAIL_DATA_W)((longlong)_Var18 + 1);
                }
                local_308 = uVar24;
                *(undefined1 *)(uVar24 + (longlong)_Var13) = 0;
                DeviceInfoSet = local_3f0;
              }
              lVar14 = 0;
              if (p_Var1 != &local_318) {
                _Var18 = (_SP_DEVICE_INTERFACE_DETAIL_DATA_W)&local_318;
                if (0xf < local_300) {
                  _Var18 = local_318;
                }
                thunk_FUN_1811b4840(p_Var1,_Var18,local_308);
              }
              uVar24 = local_300;
              BVar7 = SetupDiGetDeviceRegistryPropertyW
                                (DeviceInfoSet,&local_2c8,0xd,(PDWORD)0x0,(PBYTE)local_258,0x104,
                                 (PDWORD)0x0);
              if (BVar7 != 0) {
                local_3f8[0] = 0;
                iVar8 = CM_Get_Device_ID_Size(local_3f8,local_2c8.DevInst);
                if (iVar8 == 0) {
                  uVar9 = local_3f8[0] + 1;
                  local_3b8 = 0;
                  lStack_3b0 = 0;
                  local_3a8 = 0;
                  if (uVar9 == 0) {
                    lVar14 = 0;
                  }
                  else {
                    uVar20 = (ulonglong)uVar9 * 2;
                    if ((ulonglong)uVar9 != 0) {
                      if (uVar20 < 0x1000) {
                        lVar14 = thunk_FUN_183196718(uVar20);
                      }
                      else {
                        lVar14 = thunk_FUN_1811a9100();
                      }
                    }
                    lVar21 = uVar20 + lVar14;
                    local_3b8 = lVar14;
                    local_3a8 = lVar21;
                    thunk_FUN_1812b9aa0(lVar14,lVar21);
                    lStack_3b0 = lVar21;
                  }
                  lVar21 = lStack_3b0;
                  iVar8 = CM_Get_Device_IDW(local_2c8.DevInst,lVar14,lStack_3b0 - lVar14 >> 1,0);
                  if (iVar8 == 0) {
                    thunk_FUN_1812bec00(L"pInstID:%s\n",lVar14);
                    local_408 = 0;
                    iVar8 = CM_Get_Parent(&local_408,local_2c8.DevInst);
                    if (iVar8 == 0) {
                      local_358 = 0;
                      uStack_350 = 0;
                      local_348 = 0;
                      local_340 = 0;
                      lVar28 = -1;
                      do {
                        lVar28 = lVar28 + 1;
                      } while (local_258[lVar28] != 0);
                      thunk_FUN_1812b8710(&local_358,local_258);
                      local_3e0 = local_380;
                      uVar15 = thunk_FUN_1812bb160(local_380,local_408);
                      uVar10 = thunk_FUN_1812bb3a0(&local_358);
                      pauVar16 = (undefined1 (*) [16])thunk_FUN_1812bb000(&local_338,uVar15,uVar10);
                      auVar3 = *pauVar16;
                      uVar4 = *(ushort *)pauVar16[1];
                      if (7 < local_340) {
                        uVar20 = local_340 * 2 + 2;
                        lVar28 = local_358;
                        if (0xfff < uVar20) {
                          uVar20 = local_340 * 2 + 0x29;
                          lVar28 = *(longlong *)(local_358 + -8);
                          if (0x1f < (local_358 - lVar28) - 8U) {
                    /* WARNING: Subroutine does not return */
                            _invalid_parameter_noinfo_noreturn();
                          }
                        }
                        FUN_18001e0e2(lVar28,uVar20);
                      }
                      local_358 = 0;
                      uStack_350 = 0;
                      local_348 = 0;
                      local_340 = 0;
                      lVar28 = -1;
                      do {
                        lVar28 = lVar28 + 1;
                      } while (local_258[lVar28] != 0);
                      thunk_FUN_1812b8710(&local_358,local_258);
                      local_3e0 = local_380;
                      uVar15 = thunk_FUN_1812bb160(local_380,local_408);
                      uVar10 = thunk_FUN_1812bb3a0(auVar3._14_2_);
                      p_Var12 = (PSP_DEVICE_INTERFACE_DETAIL_DATA_W)
                                thunk_FUN_1812bb6b0(&local_338,uVar15,uVar10,auVar3._14_2_ & 0xff);
                      p_Var1 = local_3d8;
                      p_Var22 = local_3d8 + 7;
                      if (p_Var22 != p_Var12) {
                        _Var18 = local_3d8[10];
                        if (0xf < (ulonglong)_Var18) {
                          _Var13 = *p_Var22;
                          uVar20 = (longlong)_Var18 + 1;
                          _Var17 = _Var13;
                          if (0xfff < uVar20) {
                            uVar20 = (longlong)_Var18 + 0x28;
                            _Var17 = *(_SP_DEVICE_INTERFACE_DETAIL_DATA_W *)((longlong)_Var13 + -8);
                            if (0x1f < ((longlong)_Var13 - (longlong)_Var17) - 8U)
                            goto LAB_1812bde0b;
                          }
                          FUN_18001e0e2(_Var17,uVar20);
                        }
                        p_Var1[9].cbSize = 0;
                        p_Var1[9].DevicePath[0] = L'\0';
                        *(undefined2 *)&p_Var1[9].field_0x6 = 0;
                        p_Var1[10].cbSize = 0xf;
                        p_Var1[10].DevicePath[0] = L'\0';
                        *(undefined2 *)&p_Var1[10].field_0x6 = 0;
                        *(undefined1 *)&p_Var22->cbSize = 0;
                        _Var18 = p_Var12[1];
                        *p_Var22 = *p_Var12;
                        p_Var1[8] = _Var18;
                        _Var18 = p_Var12[3];
                        p_Var1[9] = p_Var12[2];
                        p_Var1[10] = _Var18;
                        p_Var12[2].cbSize = 0;
                        p_Var12[2].DevicePath[0] = L'\0';
                        *(undefined2 *)&p_Var12[2].field_0x6 = 0;
                        p_Var12[3].cbSize = 0xf;
                        p_Var12[3].DevicePath[0] = L'\0';
                        *(undefined2 *)&p_Var12[3].field_0x6 = 0;
                        *(undefined1 *)&p_Var12->cbSize = 0;
                      }
                      if (0xf < local_320) {
                        uVar20 = local_320 + 1;
                        lVar5 = CONCAT71(uStack_337,local_338);
                        lVar28 = lVar5;
                        if (0xfff < uVar20) {
                          uVar20 = local_320 + 0x28;
                          lVar28 = *(longlong *)(lVar5 + -8);
                          if (0x1f < (lVar5 - lVar28) - 8U) {
LAB_1812bde0b:
                    /* WARNING: Subroutine does not return */
                            _invalid_parameter_noinfo_noreturn();
                          }
                        }
                        FUN_18001e0e2(lVar28,uVar20);
                      }
                      local_328 = 0;
                      local_320 = 0xf;
                      local_338 = 0;
                      if (7 < local_340) {
                        uVar20 = local_340 * 2 + 2;
                        lVar28 = local_358;
                        if (0xfff < uVar20) {
                          uVar20 = local_340 * 2 + 0x29;
                          lVar28 = *(longlong *)(local_358 + -8);
                          if (0x1f < (local_358 - lVar28) - 8U) {
                    /* WARNING: Subroutine does not return */
                            _invalid_parameter_noinfo_noreturn();
                          }
                        }
                        FUN_18001e0e2(lVar28,uVar20);
                      }
                      local_358 = 0;
                      uStack_350 = 0;
                      local_348 = 0;
                      local_340 = 0;
                      lVar28 = -1;
                      do {
                        lVar28 = lVar28 + 1;
                      } while (local_258[lVar28] != 0);
                      thunk_FUN_1812b8710(&local_358,local_258);
                      local_3e0 = local_380;
                      uVar15 = thunk_FUN_1812bb160(local_380,local_408);
                      uVar10 = thunk_FUN_1812bb3a0(&local_358);
                      p_Var12 = (PSP_DEVICE_INTERFACE_DETAIL_DATA_W)
                                thunk_FUN_1812bb6b0(&local_338,uVar15,uVar10,uVar4 & 0xff);
                      p_Var1 = local_3d8;
                      p_Var22 = local_3d8 + 0xb;
                      if (p_Var22 != p_Var12) {
                        _Var18 = local_3d8[0xe];
                        if (0xf < (ulonglong)_Var18) {
                          _Var13 = *p_Var22;
                          uVar20 = (longlong)_Var18 + 1;
                          _Var17 = _Var13;
                          if (0xfff < uVar20) {
                            uVar20 = (longlong)_Var18 + 0x28;
                            _Var17 = *(_SP_DEVICE_INTERFACE_DETAIL_DATA_W *)((longlong)_Var13 + -8);
                            if (0x1f < ((longlong)_Var13 - (longlong)_Var17) - 8U)
                            goto LAB_1812bde19;
                          }
                          FUN_18001e0e2(_Var17,uVar20);
                        }
                        p_Var1[0xd].cbSize = 0;
                        p_Var1[0xd].DevicePath[0] = L'\0';
                        *(undefined2 *)&p_Var1[0xd].field_0x6 = 0;
                        p_Var1[0xe].cbSize = 0xf;
                        p_Var1[0xe].DevicePath[0] = L'\0';
                        *(undefined2 *)&p_Var1[0xe].field_0x6 = 0;
                        *(undefined1 *)&p_Var22->cbSize = 0;
                        _Var18 = p_Var12[1];
                        *p_Var22 = *p_Var12;
                        p_Var1[0xc] = _Var18;
                        _Var18 = p_Var12[3];
                        p_Var1[0xd] = p_Var12[2];
                        p_Var1[0xe] = _Var18;
                        p_Var12[2].cbSize = 0;
                        p_Var12[2].DevicePath[0] = L'\0';
                        *(undefined2 *)&p_Var12[2].field_0x6 = 0;
                        p_Var12[3].cbSize = 0xf;
                        p_Var12[3].DevicePath[0] = L'\0';
                        *(undefined2 *)&p_Var12[3].field_0x6 = 0;
                        *(undefined1 *)&p_Var12->cbSize = 0;
                      }
                      if (0xf < local_320) {
                        uVar20 = local_320 + 1;
                        lVar5 = CONCAT71(uStack_337,local_338);
                        lVar28 = lVar5;
                        if (0xfff < uVar20) {
                          uVar20 = local_320 + 0x28;
                          lVar28 = *(longlong *)(lVar5 + -8);
                          if (0x1f < (lVar5 - lVar28) - 8U) {
LAB_1812bde19:
                    /* WARNING: Subroutine does not return */
                            _invalid_parameter_noinfo_noreturn();
                          }
                        }
                        FUN_18001e0e2(lVar28,uVar20);
                      }
                      local_328 = 0;
                      local_320 = 0xf;
                      local_338 = 0;
                      if (7 < local_340) {
                        uVar20 = local_340 * 2 + 2;
                        lVar28 = local_358;
                        if (0xfff < uVar20) {
                          uVar20 = local_340 * 2 + 0x29;
                          lVar28 = *(longlong *)(local_358 + -8);
                          if (0x1f < (local_358 - lVar28) - 8U) {
                    /* WARNING: Subroutine does not return */
                            _invalid_parameter_noinfo_noreturn();
                          }
                        }
                        FUN_18001e0e2(lVar28,uVar20);
                      }
                      local_358 = 0;
                      uStack_350 = 0;
                      local_348 = 0;
                      local_340 = 0;
                      lVar28 = -1;
                      do {
                        lVar28 = lVar28 + 1;
                      } while (local_258[lVar28] != 0);
                      thunk_FUN_1812b8710(&local_358,local_258);
                      local_3e0 = local_380;
                      uVar15 = thunk_FUN_1812bb160(local_380,local_408);
                      uVar10 = thunk_FUN_1812bb3a0(auVar3[0xf]);
                      p_Var12 = (PSP_DEVICE_INTERFACE_DETAIL_DATA_W)
                                thunk_FUN_1812bb6b0(&local_338,uVar15,uVar10,auVar3[0xf]);
                      p_Var1 = local_3d8;
                      p_Var22 = local_3d8 + 0xf;
                      if (p_Var22 != p_Var12) {
                        _Var18 = local_3d8[0x12];
                        if (0xf < (ulonglong)_Var18) {
                          _Var13 = *p_Var22;
                          uVar20 = (longlong)_Var18 + 1;
                          _Var17 = _Var13;
                          if (0xfff < uVar20) {
                            uVar20 = (longlong)_Var18 + 0x28;
                            _Var17 = *(_SP_DEVICE_INTERFACE_DETAIL_DATA_W *)((longlong)_Var13 + -8);
                            if (0x1f < ((longlong)_Var13 - (longlong)_Var17) - 8U)
                            goto LAB_1812bde27;
                          }
                          FUN_18001e0e2(_Var17,uVar20);
                        }
                        p_Var1[0x11].cbSize = 0;
                        p_Var1[0x11].DevicePath[0] = L'\0';
                        *(undefined2 *)&p_Var1[0x11].field_0x6 = 0;
                        p_Var1[0x12].cbSize = 0xf;
                        p_Var1[0x12].DevicePath[0] = L'\0';
                        *(undefined2 *)&p_Var1[0x12].field_0x6 = 0;
                        *(undefined1 *)&p_Var22->cbSize = 0;
                        _Var18 = p_Var12[1];
                        *p_Var22 = *p_Var12;
                        p_Var1[0x10] = _Var18;
                        _Var18 = p_Var12[3];
                        p_Var1[0x11] = p_Var12[2];
                        p_Var1[0x12] = _Var18;
                        p_Var12[2].cbSize = 0;
                        p_Var12[2].DevicePath[0] = L'\0';
                        *(undefined2 *)&p_Var12[2].field_0x6 = 0;
                        p_Var12[3].cbSize = 0xf;
                        p_Var12[3].DevicePath[0] = L'\0';
                        *(undefined2 *)&p_Var12[3].field_0x6 = 0;
                        *(undefined1 *)&p_Var12->cbSize = 0;
                      }
                      if (0xf < local_320) {
                        uVar20 = local_320 + 1;
                        lVar5 = CONCAT71(uStack_337,local_338);
                        lVar28 = lVar5;
                        if (0xfff < uVar20) {
                          uVar20 = local_320 + 0x28;
                          lVar28 = *(longlong *)(lVar5 + -8);
                          if (0x1f < (lVar5 - lVar28) - 8U) {
LAB_1812bde27:
                    /* WARNING: Subroutine does not return */
                            _invalid_parameter_noinfo_noreturn();
                          }
                        }
                        FUN_18001e0e2(lVar28,uVar20);
                      }
                      local_328 = 0;
                      local_320 = 0xf;
                      local_338 = 0;
                      if (7 < local_340) {
                        uVar20 = local_340 * 2 + 2;
                        lVar28 = local_358;
                        if (0xfff < uVar20) {
                          uVar20 = local_340 * 2 + 0x29;
                          lVar28 = *(longlong *)(local_358 + -8);
                          if (0x1f < (local_358 - lVar28) - 8U) {
                    /* WARNING: Subroutine does not return */
                            _invalid_parameter_noinfo_noreturn();
                          }
                        }
                        FUN_18001e0e2(lVar28,uVar20);
                      }
                      *(undefined1 (*) [16])(local_3d8 + 4) = auVar3;
                      *(ushort *)&local_3d8[6].cbSize = uVar4;
                      puVar11 = (undefined8 *)local_3c0[1];
                      if (puVar11 == (undefined8 *)local_3c0[2]) {
                        thunk_FUN_1812b8fe0();
                        p_Var12 = local_3e8;
                      }
                      else {
                        *puVar11 = 0;
                        puVar11[1] = 0;
                        if (p_Var25 != (PSP_DEVICE_INTERFACE_DETAIL_DATA_W)0x0) {
                          LOCK();
                          p_Var25[1].cbSize = p_Var25[1].cbSize + 1;
                          UNLOCK();
                          uVar24 = local_300;
                          lVar14 = local_3b8;
                          lVar21 = local_3a8;
                        }
                        *puVar11 = local_3d8;
                        puVar11[1] = p_Var25;
                        local_3c0[1] = local_3c0[1] + 0x10;
                        p_Var12 = local_3e8;
                      }
                    }
                    DeviceInfoSet = local_3f0;
                    if (lVar14 != 0) {
                      uVar20 = (lVar21 - lVar14 >> 1) * 2;
                      if (0xfff < uVar20) {
                        lVar21 = lVar14 - *(longlong *)(lVar14 + -8);
                        lVar14 = *(longlong *)(lVar14 + -8);
                        goto joined_r0x0001812bdc81;
                      }
                      goto LAB_1812bdc8a;
                    }
                  }
                  else {
                    thunk_FUN_18317f440("[SDK ERROR] CM_Get_Device_ID failed\n");
                    DeviceInfoSet = local_3f0;
                    if (lVar14 != 0) {
                      uVar20 = (lVar21 - lVar14 >> 1) * 2;
                      if (0xfff < uVar20) {
                        lVar21 = lVar14 - *(longlong *)(lVar14 + -8);
                        lVar14 = *(longlong *)(lVar14 + -8);
joined_r0x0001812bdc81:
                        uVar20 = uVar20 + 0x27;
                        if (0x1f < lVar21 - 8U) {
                    /* WARNING: Subroutine does not return */
                          _invalid_parameter_noinfo_noreturn();
                        }
                      }
LAB_1812bdc8a:
                      FUN_18001e0e2(lVar14,uVar20);
                      DeviceInfoSet = local_3f0;
                    }
                  }
                }
                else {
                  thunk_FUN_18317f440("[SDK ERROR] CM_Get_Device_ID_Size failed\n");
                }
              }
              if (0xf < uVar24) {
                uVar20 = uVar24 + 1;
                _Var18 = local_318;
                if (0xfff < uVar20) {
                  uVar20 = uVar24 + 0x28;
                  _Var18 = *(_SP_DEVICE_INTERFACE_DETAIL_DATA_W *)((longlong)local_318 + -8);
                  if (0x1f < ((longlong)local_318 - (longlong)_Var18) - 8U) {
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                }
                FUN_18001e0e2(_Var18,uVar20);
              }
              if (7 < local_2e0) {
                if ((0xfff < local_2e0 * 2 + 2) &&
                   ((undefined1 *)0x1f <
                    (undefined1 *)((longlong)local_2f8 + (-8 - (longlong)local_2f8[-1])))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
                FUN_18001e0e2();
              }
              MemberIndex = local_3fc;
              free(p_Var12);
            }
          }
          MemberIndex = MemberIndex + 1;
          local_3fc = MemberIndex;
          if (p_Var25 != (PSP_DEVICE_INTERFACE_DETAIL_DATA_W)0x0) {
            LOCK();
            p_Var1 = p_Var25 + 1;
            DVar6 = p_Var1->cbSize;
            p_Var1->cbSize = p_Var1->cbSize - 1;
            UNLOCK();
            if (DVar6 == 1) {
              (**(code **)*p_Var25)(p_Var25);
              LOCK();
              pWVar2 = p_Var25[1].DevicePath;
              iVar8 = *(int *)pWVar2;
              *(int *)pWVar2 = *(int *)pWVar2 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)((longlong)*p_Var25 + 8))(p_Var25);
              }
            }
          }
          DVar6 = GetLastError();
          puVar11 = local_3c8;
        }
      }
      SetupDiDestroyDeviceInfoList(DeviceInfoSet);
      puVar11 = puVar11 + 2;
      puVar23 = local_390;
      puVar26 = local_3a0;
      param_1 = local_3c0;
      local_3c8 = puVar11;
    } while (puVar11 != local_388);
  }
  if (puVar26 != (undefined8 *)0x0) {
    uVar24 = (longlong)puVar23 - (longlong)puVar26 & 0xfffffffffffffff0;
    puVar11 = puVar26;
    if (0xfff < uVar24) {
      uVar24 = uVar24 + 0x27;
      puVar11 = (undefined8 *)puVar26[-1];
      if (0x1f < (ulonglong)((longlong)puVar26 + (-8 - (longlong)puVar11))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(puVar11,uVar24);
  }
  return param_1;
}


