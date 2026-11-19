/* 0x181f41be0 size=0x7a6
   CreateFileW
   CloseHandle
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_181f41be0(code *param_1,undefined4 param_2)

{
  LSTATUS LVar1;
  int iVar2;
  BOOL BVar3;
  INT_PTR IVar4;
  HANDLE hDevice;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 auStackY_308 [8];
  uint local_2c0;
  DWORD local_2b4 [4];
  int local_2a4;
  uint local_294 [4];
  int local_284;
  LSTATUS local_280;
  int local_27c;
  undefined8 local_278;
  HKEY local_260 [4];
  BYTE local_240 [64];
  undefined8 local_200;
  undefined1 local_1d8 [304];
  WCHAR local_a8 [58];
  int local_34;
  wchar_t *local_28;
  int local_20;
  uint local_1c;
  ulonglong local_18;
  
  puVar6 = auStackY_308;
  for (lVar5 = 0xc0; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = 0xcccccccc;
    puVar6 = puVar6 + 1;
  }
  local_18 = DAT_183dc69c0 ^ (ulonglong)auStackY_308;
  local_27c = 0;
  if (DAT_183e86fd8 == 0) {
    if (DAT_183e8704c != 0) {
      thunk_FUN_181be5450(s_rndw32_slow_gatherer__init_toolk_183d6bd18);
    }
    LVar1 = RegOpenKeyExW((HKEY)0xffffffff80000002,u_SYSTEM_CurrentControlSet_Control_183d6bd40,0,
                          0x20019,local_260);
    if (LVar1 == 0) {
      local_2b4[0] = 0x20;
      if (DAT_183e8704c != 0) {
        thunk_FUN_181be5450(s_rndw32_slow_gatherer__check_prod_183d6bda0);
      }
      local_280 = RegQueryValueExW(local_260[0],u_ProductType_183d6bdd0,(LPDWORD)0x0,(LPDWORD)0x0,
                                   local_240,local_2b4);
      if (((local_280 == 0) && (iVar2 = _stricmp((char *)local_240,s_WinNT_183d6bde8), iVar2 != 0))
         && (DAT_183d6bb84 = 0, DAT_183e8704c != 0)) {
        thunk_FUN_181be5450(s_rndw32__this_is_a_NT_server_183d6bdf0);
      }
      RegCloseKey(local_260[0]);
    }
    DAT_183e86fe0 = LoadLibraryW(u_NETAPI32_DLL_183d6be10);
    if (DAT_183e86fe0 != (HMODULE)0x0) {
      if (DAT_183e8704c != 0) {
        thunk_FUN_181be5450(s_rndw32_slow_gatherer__netapi32_l_183d6be30);
      }
      DAT_183e86fe8 = GetProcAddress(DAT_183e86fe0,s_NetStatisticsGet_183d6be58);
      DAT_183e86ff0 = GetProcAddress(DAT_183e86fe0,s_NetApiBufferSize_183d6be70);
      DAT_183e86ff8 = GetProcAddress(DAT_183e86fe0,s_NetApiBufferFree_183d6be88);
      if (((DAT_183e86fe8 == (FARPROC)0x0) || (DAT_183e86ff0 == (FARPROC)0x0)) ||
         (DAT_183e86ff8 == (FARPROC)0x0)) {
        FreeLibrary(DAT_183e86fe0);
        DAT_183e86fe0 = (HMODULE)0x0;
        thunk_FUN_181be5450(s_rndw32__No_NETAPI_found_183d6bea0);
      }
    }
    DAT_183e87000 = GetModuleHandleW(u_NTDll_dll_183d6bec0);
    if (DAT_183e87000 != (HMODULE)0x0) {
      DAT_183e87008 = GetProcAddress(DAT_183e87000,s_NtQuerySystemInformation_183d6bed8);
      DAT_183e87010 = GetProcAddress(DAT_183e87000,s_NtQueryInformationProcess_183d6bef8);
      DAT_183e87018 = GetProcAddress(DAT_183e87000,s_NtPowerInformation_183d6bf18);
      if ((DAT_183e87008 == (FARPROC)0x0) || (DAT_183e87010 == (FARPROC)0x0)) {
        DAT_183e87000 = (HMODULE)0x0;
      }
    }
    DAT_183e86fd8 = 1;
  }
  FUN_181f416c0(param_1,param_2);
  FUN_181f41960(param_1,param_2);
  if (DAT_183e86fe0 != (HMODULE)0x0) {
    if (DAT_183d6bb84 == 0) {
      local_28 = u_LanmanServer_183d6bf58;
    }
    else {
      local_28 = u_LanmanWorkstation_183d6bf30;
    }
    IVar4 = (*DAT_183e86fe8)(0,local_28,0,0);
    if ((int)IVar4 == 0) {
      if (DAT_183e8704c != 0) {
        thunk_FUN_181be5450(s_rndw32_slow_gatherer__get_netsta_183d6bf78);
      }
      (*DAT_183e86ff0)(local_200,local_2b4);
      (*param_1)(local_200,local_2b4[0],param_2);
      (*DAT_183e86ff8)(local_200);
    }
  }
  for (local_284 = 0; local_284 < 100; local_284 = local_284 + 1) {
    thunk_FUN_181f42a10(local_a8,0x32,u_____PhysicalDrive_d_183d6bfa0);
    hDevice = CreateFileW(local_a8,0,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    if (hDevice == (HANDLE)0xffffffffffffffff) break;
    local_2b4[0] = 0x108;
    BVar3 = DeviceIoControl(hDevice,0x70020,(LPVOID)0x0,0,local_1d8,0x100,local_2b4,
                            (LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      thunk_FUN_181be53e0(s_NOTE__you_should_run__diskperf___183d6bff0);
    }
    else {
      if (DAT_183e8704c != 0) {
        thunk_FUN_181be5450(s_rndw32_slow_gatherer__iostat_dri_183d6bfc8,local_284);
      }
      (*param_1)(local_1d8,local_2b4[0],param_2);
    }
    CloseHandle(hDevice);
  }
  if (DAT_183e87000 == (HMODULE)0x0) {
    FUN_181f41a20(param_1,param_2);
  }
  else {
    local_278 = thunk_FUN_181be3420(0x10000);
    for (local_2c0 = 0; local_2c0 < 0x40; local_2c0 = local_2c0 + 1) {
      local_20 = local_2c0 - 0x11;
      switch(local_20) {
      case 0:
        if (DAT_183e87058 == 0) goto switchD_181f42125_caseD_1;
        break;
      default:
switchD_181f42125_caseD_1:
        IVar4 = (*DAT_183e87008)((ulonglong)local_2c0,local_278,0xf800,local_294);
        local_2a4 = (int)IVar4;
        if (local_2a4 == 0) {
          if (local_294[0] == 0) {
            if (local_2c0 == 0x17) {
              local_294[0] = 0x18;
            }
            else if (local_2c0 == 0x18) {
              local_294[0] = 0x14;
            }
          }
          if ((local_294[0] != 0) && (local_294[0] < 0xf801)) {
            if (DAT_183e8704c != 0) {
              thunk_FUN_181be5450(s_rndw32_slow_gatherer___lu_bytes_f_183d6c038,local_294[0],
                                  local_2c0);
            }
            (*param_1)(local_278);
            local_27c = local_27c + 1;
          }
        }
        break;
      case 9:
      case 10:
      case 0x15:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x23:
        break;
      case 0x24:
      }
    }
    if (DAT_183e87018 != (FARPROC)0x0) {
      for (local_34 = 0;
          (*(int *)(&DAT_18353a4d0 + (longlong)local_34 * 8) != -1 && (local_34 < 100));
          local_34 = local_34 + 1) {
        IVar4 = (*DAT_183e87018)((ulonglong)*(uint *)(&DAT_18353a4d0 + (longlong)local_34 * 8),0,0,
                                 local_278);
        local_2a4 = (int)IVar4;
        if (local_2a4 == 0) {
          if (DAT_183e8704c != 0) {
            thunk_FUN_181be5450(s_rndw32_slow_gatherer___u_bytes_f_183d6c070,
                                *(undefined4 *)(&DAT_18353a4d4 + (longlong)local_34 * 8),local_34);
          }
          (*param_1)(local_278);
          local_27c = local_27c + 1;
        }
      }
      local_1c = (uint)(local_34 < 100);
      if (local_1c == 0) {
        thunk_FUN_181be4e50(s_i_<_100_183d6c0c0,s____random_rndw32_c_183d6c0a8,0x2f9);
      }
    }
    thunk_FUN_181be3860(local_278);
    if (local_27c < 0xf) {
      FUN_181f41a20(param_1,param_2);
    }
  }
  _RTC_CheckStackVars(auStackY_308,&DAT_18353b060);
  return;
}


