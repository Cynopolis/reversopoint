// vtable slot 24 (thunk 0x180014d6c) -> FUN_18124ff70 @ 0x18124ff70  size=3312

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18124ff70(longlong *param_1,int param_2,int *param_3)

{
  longlong lVar1;
  char cVar2;
  CameraType CVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_c68 [32];
  undefined1 local_c48 [16];
  undefined4 local_c38;
  undefined4 local_c34 [379];
  undefined1 local_648 [1520];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_183dc69c0 ^ (ulonglong)auStack_c68;
  cVar2 = thunk_FUN_18122f510();
  if (cVar2 == '\0') {
    thunk_FUN_18317f440("[SDK ERROR] Camera::setPropertyExtension, Camera status was disconnect\r\n"
                       );
    return 3;
  }
  thunk_FUN_18317f440("[SDK INFO ] [%s] Set property extension type : %04X\r\n",
                      (longlong)param_1 + 0x39,param_2);
  if (param_2 == 0xeeee) {
    uVar6 = thunk_FUN_18124cbc0(param_1,param_3);
    return uVar6;
  }
  if (param_2 == 10) {
    uVar6 = thunk_FUN_18124ce80(param_1,param_3);
    return uVar6;
  }
  if (param_2 == 9) {
    uVar6 = thunk_FUN_1812496b0(param_1,param_3);
    return uVar6;
  }
  if (param_2 == 0x10) {
    uVar6 = thunk_FUN_181251980(param_1,param_3);
    return uVar6;
  }
  if (param_2 == 0xb) {
    uVar6 = thunk_FUN_18124e7f0(param_1,(char)*param_3);
    return uVar6;
  }
  if (param_2 == 0xc) {
    uVar6 = thunk_FUN_18124ca50(param_1,param_3);
    return uVar6;
  }
  if (param_2 == 0x707) {
    uVar6 = thunk_FUN_18124c9a0(param_1,param_3);
    return uVar6;
  }
  if (param_2 == 0xaaaa) {
    memcpy(&local_c38,param_3,0x5e8);
    uVar6 = thunk_FUN_18122d680(param_1,&local_c38);
    return uVar6;
  }
  if (param_2 == 0xd) {
    uVar6 = (**(code **)(*param_1 + 0x70))(param_1,0);
    return uVar6;
  }
  if (param_2 == 0xe) {
    uVar6 = (**(code **)(*param_1 + 0x78))(param_1,0);
    return uVar6;
  }
  if (param_2 == 0x912) {
    uVar6 = thunk_FUN_18124b240(param_1,param_3);
    return uVar6;
  }
  if (param_2 == 0xa05) {
    uVar6 = thunk_FUN_18124dd10(param_1,param_3);
    return uVar6;
  }
  if (param_2 == 0x705) {
    memcpy(&local_c38,param_3,0x5e8);
    uVar6 = thunk_FUN_18124b330(param_1,&local_c38);
    return uVar6;
  }
  if (param_2 == 0x706) {
    memcpy(&local_c38,param_3,0x5e8);
    uVar6 = thunk_FUN_18124e100(param_1,&local_c38);
    return uVar6;
  }
  if (param_2 == 0x70a) {
    memcpy(&local_c38,param_3,0x5e8);
    uVar6 = thunk_FUN_18124d1b0(param_1,&local_c38);
    return uVar6;
  }
  if (param_2 == 0x70b) {
    uVar6 = thunk_FUN_18124d290(param_1,*(undefined8 *)param_3);
    return uVar6;
  }
  if (param_2 == 0x70c) {
    uVar6 = thunk_FUN_18124c720(param_1,param_3);
    return uVar6;
  }
  if (param_2 == 0xa04) {
    memcpy(&local_c38,param_3,0x5e8);
    uVar6 = thunk_FUN_18124ed70(param_1,&local_c38);
    return uVar6;
  }
  if (param_2 == 0x914) {
    memcpy(&local_c38,param_3,0x5e8);
    uVar6 = thunk_FUN_18124e490(param_1,&local_c38);
    return uVar6;
  }
  if (param_2 == 0x916) {
    memcpy(&local_c38,param_3,0x5e8);
    uVar6 = thunk_FUN_18124e330(param_1,&local_c38);
    return uVar6;
  }
  if (param_2 == 0x917) {
    memcpy(&local_c38,param_3,0x5e8);
    uVar6 = thunk_FUN_18124ec70(param_1,&local_c38);
    return uVar6;
  }
  if (param_2 == 0x915) {
    memcpy(&local_c38,param_3,0x5e8);
    uVar6 = thunk_FUN_18124e570(param_1,&local_c38);
    return uVar6;
  }
  if (param_2 == 0x702) {
    memcpy(&local_c38,param_3,0x5e8);
    uVar6 = thunk_FUN_181251500(param_1,&local_c38);
    return uVar6;
  }
  if (param_2 == 0x13) {
    thunk_FUN_18122a400(param_1,*param_3);
    return 0;
  }
  if (param_2 == 0xb00) {
    memcpy(&local_c38,param_3,0x5e8);
    uVar6 = thunk_FUN_18124eaa0(param_1,&local_c38);
    return uVar6;
  }
  if (param_2 == 0xb01) {
    memcpy(&local_c38,param_3,0x5e8);
    uVar6 = thunk_FUN_181240c50(param_1,&local_c38);
    return uVar6;
  }
  if (param_2 == 0x913) {
    memcpy(&local_c38,param_3,0x5e8);
    uVar6 = thunk_FUN_18124c890(param_1,&local_c38);
    return uVar6;
  }
  if (param_2 == 0x1111) {
    memcpy(&local_c38,param_3,0x5e8);
    uVar6 = thunk_FUN_18124e700(param_1,0x1111,&local_c38);
    return uVar6;
  }
  if (param_2 == 0x15) {
    uVar6 = thunk_FUN_181250fa0(param_1,param_3);
    return uVar6;
  }
  if (param_2 == 0x22) {
    uVar6 = thunk_FUN_18124ef60(param_1,param_3);
    return uVar6;
  }
  if (param_2 == 0x708) {
    uVar6 = thunk_FUN_181229e00(param_1,param_3);
    return uVar6;
  }
  if (param_2 == 8) {
    CVar3 = cs::getCameraTypeBySN((char *)((longlong)param_1 + 0x39));
    if ((0x1c < CVar3) || ((0x1a00a012U >> (CVar3 & 0x1f) & 1) == 0)) {
      thunk_FUN_18317f440("[SDK WARN ] not support set ip property\n");
      return 8;
    }
    goto LAB_181250411;
  }
  if (param_2 == 0x23) {
    cVar2 = thunk_FUN_18123e350(param_1);
joined_r0x0001812506b1:
    if (cVar2 == '\0') {
      return 8;
    }
  }
  else {
    if (param_2 == 0x24) {
      cVar2 = thunk_FUN_18123e2a0(param_1);
      goto joined_r0x0001812506b1;
    }
    if (param_2 == 0x925) {
      cVar2 = thunk_FUN_18123e990(param_1);
      goto joined_r0x0001812506b1;
    }
    if (param_2 == 0xb02) {
      cVar2 = thunk_FUN_18123e160(param_1);
      goto joined_r0x0001812506b1;
    }
    if (param_2 == 0xb03) {
      uVar6 = thunk_FUN_18124b620(param_1,param_3);
      return uVar6;
    }
    if (param_2 == 0xb06) {
      uVar6 = thunk_FUN_1812512d0(param_1,(char)*param_3);
      return uVar6;
    }
    if (param_2 == 0xb0a) {
      uVar6 = thunk_FUN_18124d2c0(param_1,*param_3);
      return uVar6;
    }
    if (param_2 == 0xb0b) {
      uVar6 = thunk_FUN_18124f8b0(param_1,(char)*param_3);
      return uVar6;
    }
    if (param_2 == 0xb0d) {
      uVar6 = thunk_FUN_1812403b0(param_1,*param_3);
      return uVar6;
    }
    if (param_2 == 0xb0e) {
      uVar6 = thunk_FUN_18123f7e0(param_1,(char)*param_3);
      return uVar6;
    }
    if (param_2 == 0xb0f) {
      uVar6 = thunk_FUN_181240280(param_1,*param_3);
      return uVar6;
    }
    if (param_2 == 0xb13) {
      cVar2 = thunk_FUN_18123e600(param_1);
      goto joined_r0x0001812506b1;
    }
    if (param_2 == 0xb14) {
      memcpy(&local_c38,param_3,0x5e8);
      uVar6 = thunk_FUN_181252f60(param_1,&local_c38);
      return uVar6;
    }
    if (param_2 == 0xb16) {
      uVar6 = thunk_FUN_18123fbf0(param_1,param_3);
      return uVar6;
    }
    if (param_2 == 0xb19) {
      uVar6 = thunk_FUN_181251800(param_1,param_3);
      return uVar6;
    }
    if (param_2 != 0xffff) {
      if (param_2 == 0xb17) {
        cVar2 = thunk_FUN_181265070(*(undefined4 *)((longlong)param_1 + 0xbc));
      }
      else {
        if (param_2 == 0xb21) {
          uVar6 = thunk_FUN_18123f6a0(param_1,*(undefined8 *)param_3);
          return uVar6;
        }
        if (param_2 == 0xb22) {
          uVar6 = thunk_FUN_18123f560(param_1,*param_3);
          return uVar6;
        }
        if (param_2 == 0xb23) {
          local_58 = *(undefined8 *)param_3;
          uStack_50 = *(undefined8 *)(param_3 + 2);
          local_48 = *(undefined8 *)(param_3 + 4);
          uStack_40 = CONCAT44(uStack_40._4_4_,param_3[6]);
          uVar6 = thunk_FUN_18123fec0(param_1,&local_58);
          return uVar6;
        }
        if (param_2 == 0xb26) {
          uVar6 = thunk_FUN_181240890(param_1);
          return uVar6;
        }
        if (param_2 == 0xb27) {
          uVar6 = thunk_FUN_181244de0(param_1);
          return uVar6;
        }
        if (param_2 == 0xb29) {
          uVar6 = thunk_FUN_18123eb40(param_1,param_3);
          return uVar6;
        }
        if (param_2 == 0x28) {
          cVar2 = thunk_FUN_181264fe0(*(undefined4 *)((longlong)param_1 + 0xbc));
        }
        else {
          if (param_2 != 0x29) {
            if (param_2 == 0xb2a) {
              uVar6 = thunk_FUN_1812529a0(param_1,(char)*param_3);
              return uVar6;
            }
            if (param_2 == 0xb2b) {
              uVar6 = thunk_FUN_181251150(param_1,(char)*param_3);
              return uVar6;
            }
            if (param_2 == 0xb2c) {
              uVar6 = thunk_FUN_181252b10(param_1,*param_3);
              return uVar6;
            }
            goto LAB_181250411;
          }
          cVar2 = thunk_FUN_181264f20(*(undefined4 *)((longlong)param_1 + 0xbc));
        }
      }
      goto joined_r0x0001812506b1;
    }
    thunk_FUN_18122a540(param_1,param_3);
  }
LAB_181250411:
  thunk_FUN_18317f440("[SDK TRACE] enter critical pre call m_cameraDevice->setPropertyExtension\r\n"
                     );
  thunk_FUN_1831809d0(local_c48,param_1 + 0x18);
  if (param_1[0x19] == 0) {
    thunk_FUN_18317f440("[SDK ERROR] set property extension failed: camera device is nullptr\n");
    thunk_FUN_183180a80(local_c48);
    return 3;
  }
  thunk_FUN_18317f440("[SDK TRACE] call m_cameraDevice->setPropertyExtension\r\n");
  memcpy(&local_c38,param_3,0x5e8);
  uVar4 = (**(code **)(*(longlong *)param_1[0x19] + 0x78))
                    ((longlong *)param_1[0x19],param_2,&local_c38);
  uVar6 = (ulonglong)uVar4;
  thunk_FUN_183180a80(local_c48);
  if (param_2 != 1) {
    if (param_2 != 0x23) {
      return uVar6;
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
    thunk_FUN_18122a270(param_1);
    return uVar6;
  }
  iVar5 = *param_3;
  if (iVar5 == 0) {
    *(undefined1 *)((longlong)param_1 + 0x315) = 0;
    thunk_FUN_1811b5c30(param_1 + 299);
    *(int *)(param_1 + 0x20) = (int)param_1[0xa8];
    _Mtx_unlock(param_1 + 299);
    local_c38 = 0;
    memset(local_c34,0,0x5e4);
    memcpy(local_648,&local_c38,0x5e8);
    iVar5 = (**(code **)(*param_1 + 0xc0))(param_1,0xe,local_648);
    if (iVar5 == 0) {
      if (*(char *)((longlong)param_1 + 0x316) != '\0') {
        *(undefined1 *)((longlong)param_1 + 0x316) = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_48 = 0;
        uStack_40 = 0;
        lVar9 = -1;
        do {
          lVar1 = lVar9 + 0x3a;
          lVar9 = lVar9 + 1;
        } while (*(char *)((longlong)param_1 + lVar1) != '\0');
        thunk_FUN_1811adba0(&local_58,(longlong)param_1 + 0x39);
        uVar7 = thunk_FUN_18135cda0();
        thunk_FUN_18135d180(uVar7,&local_58,5);
        if (0xf < uStack_40) {
          thunk_FUN_1811b2d60(&local_58,local_58);
        }
      }
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      lVar9 = -1;
      do {
        lVar8 = lVar9 + 1;
        lVar1 = lVar9 + 0x3a;
        lVar9 = lVar8;
      } while (*(char *)((longlong)param_1 + lVar1) != '\0');
      thunk_FUN_1811adba0(&local_58,(longlong)param_1 + 0x39,lVar8);
      uVar7 = thunk_FUN_18135cda0();
      thunk_FUN_18135d180(uVar7,&local_58,8);
      goto LAB_1812508c9;
    }
  }
  else if (iVar5 == 2) {
    *(undefined1 *)((longlong)param_1 + 0x315) = 1;
    thunk_FUN_1811b5c30(param_1 + 299);
    *(undefined4 *)(param_1 + 0x20) = 1;
    _Mtx_unlock(param_1 + 299);
    local_c38 = 0;
    memset(local_c34,0,0x5e4);
    memcpy(local_648,&local_c38,0x5e8);
    iVar5 = (**(code **)(*param_1 + 0xc0))(param_1,0xd,local_648);
    if (iVar5 == 0) {
      *(undefined1 *)((longlong)param_1 + 0x316) = 1;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      lVar9 = -1;
      do {
        lVar1 = lVar9 + 0x3a;
        lVar9 = lVar9 + 1;
      } while (*(char *)((longlong)param_1 + lVar1) != '\0');
      thunk_FUN_1811adba0(&local_58,(longlong)param_1 + 0x39);
      uVar7 = thunk_FUN_18135cda0();
      thunk_FUN_18135d180(uVar7,&local_58,9);
      if (0xf < uStack_40) {
        thunk_FUN_1811b2d60(&local_58,local_58);
      }
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      lVar9 = -1;
      do {
        lVar8 = lVar9 + 1;
        lVar1 = lVar9 + 0x3a;
        lVar9 = lVar8;
      } while (*(char *)((longlong)param_1 + lVar1) != '\0');
      thunk_FUN_1811adba0(&local_58,(longlong)param_1 + 0x39,lVar8);
      uVar7 = thunk_FUN_18135cda0();
      thunk_FUN_18135d180(uVar7,&local_58,4);
LAB_1812508c9:
      if (uStack_40 < 0x10) {
        return uVar6;
      }
      thunk_FUN_1811b2d60(&local_58,local_58);
      return uVar6;
    }
  }
  else {
    if (iVar5 != 1) {
      return uVar6;
    }
    *(undefined1 *)((longlong)param_1 + 0x315) = 1;
    thunk_FUN_1811b5c30(param_1 + 299);
    *(undefined4 *)(param_1 + 0x20) = 1;
    _Mtx_unlock(param_1 + 299);
    local_c38 = 0;
    memset(local_c34,0,0x5e4);
    memcpy(local_648,&local_c38,0x5e8);
    iVar5 = (**(code **)(*param_1 + 0xc0))(param_1,0xd,local_648);
    if (iVar5 == 0) {
      *(undefined1 *)((longlong)param_1 + 0x316) = 1;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      lVar9 = -1;
      do {
        lVar1 = lVar9 + 0x3a;
        lVar9 = lVar9 + 1;
      } while (*(char *)((longlong)param_1 + lVar1) != '\0');
      thunk_FUN_1811adba0(&local_58,(longlong)param_1 + 0x39);
      uVar7 = thunk_FUN_18135cda0();
      thunk_FUN_18135d180(uVar7,&local_58,10);
      if (0xf < uStack_40) {
        thunk_FUN_1811b2d60(&local_58,local_58);
      }
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      lVar9 = -1;
      do {
        lVar8 = lVar9 + 1;
        lVar1 = lVar9 + 0x3a;
        lVar9 = lVar8;
      } while (*(char *)((longlong)param_1 + lVar1) != '\0');
      thunk_FUN_1811adba0(&local_58,(longlong)param_1 + 0x39,lVar8);
      uVar7 = thunk_FUN_18135cda0();
      thunk_FUN_18135d180(uVar7,&local_58,4);
      goto LAB_1812508c9;
    }
  }
  thunk_FUN_18317f440("[SDK ERROR] set property:0xaaaa failed cmd:0x%x paramNum:%d\n",local_c38,
                      local_c34[0]);
  return 1;
}


