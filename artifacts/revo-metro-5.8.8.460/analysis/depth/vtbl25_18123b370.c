// vtable slot 25 (thunk 0x180023fa1) -> FUN_18123b370 @ 0x18123b370  size=1654

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_18123b370(longlong *param_1,int param_2,uint *param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *******pppppppuVar3;
  size_t sVar4;
  char cVar5;
  undefined1 uVar6;
  CameraType CVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  char *pcVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 *******pppppppuVar14;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 *******local_60;
  undefined8 uStack_58;
  size_t local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_183dc69c0 ^ (ulonglong)auStack_88;
  thunk_FUN_18317f440("[SDK TRACE] [%s] getPropertyExtension Type=%04X\r\n",(longlong)param_1 + 0x39
                      ,param_2);
  if (param_2 == 0xeeee) {
    uVar10 = thunk_FUN_18122dd60(param_1,param_3);
    return uVar10;
  }
  cVar5 = thunk_FUN_18122f510(param_1);
  if (cVar5 == '\0') {
    thunk_FUN_18317f440("[SDK ERROR] Camera was disconnect,set property exitension failed\r\n");
    return 3;
  }
  if (param_2 == 9) {
    uVar10 = thunk_FUN_18122e870(param_1,param_3);
    return uVar10;
  }
  if (param_2 == 8) {
    CVar7 = cs::getCameraTypeBySN((char *)((longlong)param_1 + 0x39));
    if (CVar7 != 4) {
      uVar10 = thunk_FUN_181237ab0(param_1,param_3);
      return uVar10;
    }
    goto LAB_18123b7f9;
  }
  if (param_2 == 0x10) {
    uVar10 = thunk_FUN_18123c500(param_1,param_3);
    return uVar10;
  }
  if (param_2 == 0) {
    uVar10 = thunk_FUN_18122fe90(param_1,param_3);
    return uVar10;
  }
  if (param_2 == 0x916) {
    uVar10 = thunk_FUN_181237110(param_1,param_3);
    return uVar10;
  }
  if (param_2 == 0x913) {
    uVar10 = thunk_FUN_18122fc50(param_1,param_3);
    return uVar10;
  }
  if (param_2 == 0x14) {
    uVar10 = (**(code **)(*param_1 + 0x128))(param_1,param_3);
    return uVar10;
  }
  if (param_2 - 0x15U < 2) {
    uVar10 = thunk_FUN_1812303c0(param_1,param_2,param_3);
    return uVar10;
  }
  if (param_2 == 0x22) {
    uVar10 = thunk_FUN_18123ae70(param_1,param_3);
    return uVar10;
  }
  if (param_2 == 0x20) {
    cVar5 = thunk_FUN_18123e4e0(param_1);
    if (cVar5 == '\0') {
      *(undefined1 *)param_3 = 0;
      return 0;
    }
    goto LAB_18123b7f9;
  }
  if (param_2 == 0x21) {
    cVar5 = thunk_FUN_18123e4e0(param_1);
  }
  else {
    if (param_2 != 0x23) {
      if (param_2 - 0x25U < 2) {
        cVar5 = thunk_FUN_18123e2a0(param_1);
      }
      else {
        if (param_2 == 0xc) {
          thunk_FUN_1831809d0(local_68,param_1 + 0x18);
          *(undefined8 *)param_3 = *(undefined8 *)((longlong)param_1 + 0x129);
          *(undefined1 *)(param_3 + 2) = *(undefined1 *)((longlong)param_1 + 0x131);
          thunk_FUN_183180a80(local_68);
          return 0;
        }
        if (param_2 == 0x925) {
          cVar5 = thunk_FUN_18123e990(param_1);
          goto LAB_18123b7ee;
        }
        if ((param_2 == 0xb02) || (param_2 == 0xb05)) {
          cVar5 = thunk_FUN_18123e160(param_1);
          goto joined_r0x00018123b92b;
        }
        if (param_2 == 0xb04) {
          uVar10 = thunk_FUN_18122f140(param_1,param_3);
          return uVar10;
        }
        if (param_2 == 0xb03) {
          uVar10 = thunk_FUN_18122f9c0(param_1,param_3);
          return uVar10;
        }
        if (param_2 == 0xb06) {
          uVar10 = thunk_FUN_18123bf60(param_1,param_3);
          return uVar10;
        }
        if ((((param_2 == 0x707) || (param_2 - 0x914U < 2)) || (param_2 == 0x705)) ||
           (param_2 == 0x912)) {
          uVar10 = thunk_FUN_18122fd10(param_1,param_2,param_3);
          return uVar10;
        }
        if (param_2 == 0x17) {
          iVar8 = thunk_FUN_18122b510(param_1);
          if (iVar8 != 0) {
            return 8;
          }
LAB_18123b5fb:
          if (param_2 == 0xb13) {
            cVar5 = thunk_FUN_18123e600(param_1);
            goto LAB_18123b7ee;
          }
LAB_18123b775:
          if (param_2 == 0xb14) {
            uVar10 = thunk_FUN_181238440(param_1,param_3);
            return uVar10;
          }
LAB_18123b78d:
          if (param_2 == 0xb18) {
            uVar10 = thunk_FUN_181238ba0(param_1,param_3);
            return uVar10;
          }
        }
        else {
          if (param_2 == 0x18) {
            iVar8 = thunk_FUN_181245f50(param_1);
            if (iVar8 != 0) {
              param_3[0] = 0;
              param_3[1] = 0;
              param_3[2] = 0;
              param_3[3] = 0;
              param_3[4] = 0;
              param_3[5] = 0;
              param_3[6] = 0;
              param_3[7] = 0;
              param_3[8] = 0;
              param_3[9] = 0;
              param_3[10] = 0;
              return 8;
            }
            goto LAB_18123b775;
          }
          if (param_2 == 0x2a) {
            iVar8 = thunk_FUN_18122c000(param_1);
            if (iVar8 != 0) {
              *param_3 = 0;
              return 8;
            }
            goto LAB_18123b78d;
          }
          if (param_2 != 0x2b) {
            if (param_2 == 0x19) {
              iVar8 = thunk_FUN_181249680(param_1);
              if (iVar8 != 0) {
                uVar10 = thunk_FUN_18123c080(param_1,param_3);
                return uVar10;
              }
              goto LAB_18123b831;
            }
            if (param_2 == 0xb07) {
              uVar10 = thunk_FUN_18123e800(param_1,param_3);
              return uVar10;
            }
            if (param_2 == 0xb08) {
              uVar10 = thunk_FUN_18123e3f0(param_1,param_3);
              return uVar10;
            }
            if (param_2 == 0xb09) {
              uVar10 = thunk_FUN_1812357d0(param_1,param_3);
              return uVar10;
            }
            if (param_2 == 0xb0a) {
              uVar10 = thunk_FUN_181235a60(param_1,param_3);
              return uVar10;
            }
            if (param_2 == 0xb10) {
              uVar10 = thunk_FUN_1812384a0(param_1,param_3);
              return uVar10;
            }
            if (param_2 == 0xb11) {
              uVar10 = thunk_FUN_18123e740(param_1,param_3);
              return uVar10;
            }
            if (param_2 == 0xb12) {
              uVar10 = thunk_FUN_18122f5b0(param_1,param_3);
              return uVar10;
            }
            goto LAB_18123b5fb;
          }
          iVar8 = thunk_FUN_18122c040(param_1);
          if (iVar8 != 0) {
            return 8;
          }
        }
        if (param_2 == 0xb20) {
          uVar6 = thunk_FUN_1812654e0(*(undefined4 *)((longlong)param_1 + 0xbc),
                                      (longlong)param_1 + 0x79,(longlong)param_1 + 0x39);
          *(undefined1 *)param_3 = uVar6;
          return 0;
        }
        if (1 < param_2 - 0xb24U) {
          if (param_2 == 0xb28) {
            uVar10 = thunk_FUN_181232330(param_1,param_3);
            return uVar10;
          }
          if (param_2 == 0x27) {
            cVar5 = thunk_FUN_181264fa0(*(undefined4 *)((longlong)param_1 + 0xbc));
          }
          else if (param_2 == 0x28) {
            cVar5 = thunk_FUN_181264fe0(*(undefined4 *)((longlong)param_1 + 0xbc));
          }
          else {
            if (param_2 != 0x29) goto LAB_18123b831;
            cVar5 = thunk_FUN_181264f20(*(undefined4 *)((longlong)param_1 + 0xbc));
          }
          goto LAB_18123b7ee;
        }
        cVar5 = thunk_FUN_181264e80((longlong)param_1 + 0x79,(longlong)param_1 + 0x39);
      }
joined_r0x00018123b92b:
      if (cVar5 == '\0') {
        return 8;
      }
LAB_18123b831:
      uVar9 = thunk_FUN_181239080(param_1,param_2,param_3);
      if (param_2 != 1) {
        return (ulonglong)uVar9;
      }
      if (uVar9 == 0) {
        return 0;
      }
      CVar7 = cs::getCameraTypeBySN((char *)((longlong)param_1 + 0x39));
      local_60 = (undefined8 *******)0x0;
      uStack_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      lVar13 = -1;
      do {
        lVar2 = lVar13 + 0x5a;
        lVar13 = lVar13 + 1;
      } while (*(char *)((longlong)param_1 + lVar2) != '\0');
      thunk_FUN_1811adba0();
      uVar10 = uStack_48;
      sVar4 = local_50;
      pppppppuVar3 = local_60;
      pppppppuVar14 = &local_60;
      if (0xf < uStack_48) {
        pppppppuVar14 = local_60;
      }
      if (local_50 != 0) {
        for (pcVar11 = memchr(pppppppuVar14,0x2e,local_50); pcVar11 != (char *)0x0;
            pcVar11 = memchr(pcVar11 + 1,0x2e,
                             (longlong)pppppppuVar14 + (sVar4 - (longlong)(pcVar11 + 1)))) {
          if (*pcVar11 == '.') {
            if (((longlong)pcVar11 - (longlong)pppppppuVar14 != -1) && (CVar7 == 1))
            goto LAB_18123b95a;
            break;
          }
        }
      }
      if ((CVar7 - 0xd & 0xfffffffd) == 0) {
LAB_18123b95a:
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (0xf < uVar10) {
        uVar12 = uVar10 + 1;
        pppppppuVar14 = pppppppuVar3;
        if (0xfff < uVar12) {
          pppppppuVar14 = (undefined8 *******)pppppppuVar3[-1];
          uVar12 = uVar10 + 0x28;
          if (0x1f < (ulonglong)((longlong)pppppppuVar3 + (-8 - (longlong)pppppppuVar14))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_18001e0e2(pppppppuVar14,uVar12);
      }
      if (!bVar1) {
        return (ulonglong)uVar9;
      }
      *param_3 = -(uint)(*(char *)((longlong)param_1 + 0x315) != '\0') & 2;
      return 0;
    }
    cVar5 = thunk_FUN_18123e350(param_1);
  }
LAB_18123b7ee:
  if (cVar5 == '\0') {
    return 8;
  }
LAB_18123b7f9:
  uVar10 = thunk_FUN_181239080(param_1,param_2,param_3);
  return uVar10;
}


