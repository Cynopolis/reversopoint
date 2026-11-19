// 1812fbf00  size=0x916  str:"streamType"

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1812fbf00(longlong param_1,undefined8 param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_118 [32];
  int local_f8;
  int local_f0;
  uint local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0 [2];
  longlong *local_c8;
  longlong *plStack_c0;
  longlong local_b8;
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong uStack_90;
  int local_88;
  int local_84;
  int local_80;
  longlong local_78 [3];
  ulonglong uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_183dc69c0 ^ (ulonglong)auStack_118;
  local_78[1] = 0;
  local_78[2] = _DAT_183222c50;
  uStack_60 = _UNK_183222c58;
  local_78[0] = 0;
  uStack_a0 = (longlong *)0x0;
  local_98 = _DAT_18322bfa0;
  uStack_90 = _UNK_18322bfa8;
  local_a8._0_6_ = CONCAT24(s_result_18323d8d4._4_2_,s_result_18323d8d4._0_4_);
  local_a8 = (longlong *)(ulonglong)(uint6)local_a8;
  local_dc = param_4;
  thunk_FUN_1812da9f0(param_2,&local_a8,local_78);
  if (0xf < uStack_90) {
    uVar7 = uStack_90 + 1;
    uVar8 = (ulonglong)local_a8;
    if (0xfff < uVar7) {
      uVar7 = uStack_90 + 0x28;
      uVar8 = *(ulonglong *)((longlong)local_a8 - 8);
      if (0x1f < ((longlong)local_a8 - uVar8) - 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(uVar8,uVar7);
  }
  local_e8 = 0;
  local_98 = _DAT_18322c020;
  uStack_90 = _UNK_18322c028;
  local_a8 = (longlong *)s_streamType_18324fe18._0_8_;
  uStack_a0 = (longlong *)(ulonglong)(ushort)s_streamType_18324fe18._8_2_;
  thunk_FUN_1812da670(param_2,&local_a8,&local_e8);
  if (0xf < uStack_90) {
    uVar8 = uStack_90 + 1;
    plVar6 = local_a8;
    if (0xfff < uVar8) {
      uVar8 = uStack_90 + 0x28;
      plVar6 = (longlong *)local_a8[-1];
      if (0x1f < (ulonglong)((longlong)local_a8 + (-8 - (longlong)plVar6))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(plVar6,uVar8);
  }
  if (1 < local_e8) {
    thunk_FUN_18317f440("[%d/%s] streamtype error:%d\n",0x6e6,
                        "cs::CameraDeviceRpcClient::pushFrameStream");
    goto LAB_1812fc7c3;
  }
  uStack_a0 = (longlong *)0x0;
  local_98 = _DAT_18322bfc0;
  uStack_90 = _UNK_18322bfc8;
  local_a8._0_6_ = CONCAT24(s_dataLen_183256568._4_2_,s_dataLen_183256568._0_4_);
  local_a8 = (longlong *)(ulonglong)CONCAT16(s_dataLen_183256568[6],(uint6)local_a8);
  thunk_FUN_1812da670(param_2,&local_a8,&local_d8);
  if (0xf < uStack_90) {
    uVar7 = uStack_90 + 1;
    uVar8 = (ulonglong)local_a8;
    if (0xfff < uVar7) {
      uVar7 = uStack_90 + 0x28;
      uVar8 = *(ulonglong *)((longlong)local_a8 - 8);
      if (0x1f < ((longlong)local_a8 - uVar8) - 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(uVar8,uVar7);
  }
  uStack_a0 = (longlong *)0x0;
  local_98 = _DAT_18322bfa0;
  uStack_90 = _UNK_18322bfa8;
  local_a8._0_6_ = CONCAT24(s_format_18322a528._4_2_,s_format_18322a528._0_4_);
  local_a8 = (longlong *)(ulonglong)(uint6)local_a8;
  thunk_FUN_1812da670(param_2,&local_a8,&local_d4);
  if (0xf < uStack_90) {
    uVar7 = uStack_90 + 1;
    uVar8 = (ulonglong)local_a8;
    if (0xfff < uVar7) {
      uVar7 = uStack_90 + 0x28;
      uVar8 = *(ulonglong *)((longlong)local_a8 - 8);
      if (0x1f < ((longlong)local_a8 - uVar8) - 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(uVar8,uVar7);
  }
  local_d0[0] = local_d4;
  local_98 = _DAT_18322c080;
  uStack_90 = _UNK_18322c088;
  local_a8._0_1_ = s_originalFormat_183256578[0];
  local_a8._1_1_ = s_originalFormat_183256578[1];
  local_a8._2_1_ = s_originalFormat_183256578[2];
  local_a8._3_1_ = s_originalFormat_183256578[3];
  local_a8._4_1_ = s_originalFormat_183256578[4];
  local_a8._5_1_ = s_originalFormat_183256578[5];
  local_a8._6_1_ = s_originalFormat_183256578[6];
  local_a8._7_1_ = s_originalFormat_183256578[7];
  uStack_a0 = (longlong *)
              (ulonglong)
              CONCAT24(s_originalFormat_183256578._12_2_,s_originalFormat_183256578._8_4_);
  thunk_FUN_1812da670(param_2,&local_a8,local_d0);
  if (0xf < uStack_90) {
    uVar8 = uStack_90 + 1;
    lVar11 = (longlong)local_a8;
    if (0xfff < uVar8) {
      uVar8 = uStack_90 + 0x28;
      lVar11 = *(longlong *)((longlong)local_a8 + -8);
      if (0x1f < ((longlong)local_a8 - lVar11) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(lVar11,uVar8);
  }
  uStack_a0 = (longlong *)0x0;
  local_98 = _DAT_18322bf80;
  uStack_90 = _UNK_18322bf88;
  local_a8 = (longlong *)(ulonglong)CONCAT14(s_width_18322a530[4],s_width_18322a530._0_4_);
  thunk_FUN_1812da670(param_2,&local_a8,&local_e0);
  if (0xf < uStack_90) {
    uVar7 = uStack_90 + 1;
    uVar8 = (ulonglong)local_a8;
    if (0xfff < uVar7) {
      uVar7 = uStack_90 + 0x28;
      uVar8 = *(ulonglong *)((longlong)local_a8 - 8);
      if (0x1f < ((longlong)local_a8 - uVar8) - 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(uVar8,uVar7);
  }
  uStack_a0 = (longlong *)0x0;
  local_98 = _DAT_18322bfa0;
  uStack_90 = _UNK_18322bfa8;
  local_a8._0_6_ = CONCAT24(s_height_18322a538._4_2_,s_height_18322a538._0_4_);
  local_a8 = (longlong *)(ulonglong)(uint6)local_a8;
  thunk_FUN_1812da670(param_2,&local_a8,&local_e4);
  if (0xf < uStack_90) {
    uVar7 = uStack_90 + 1;
    uVar8 = (ulonglong)local_a8;
    if (0xfff < uVar7) {
      uVar7 = uStack_90 + 0x28;
      uVar8 = *(ulonglong *)((longlong)local_a8 - 8);
      if (0x1f < ((longlong)local_a8 - uVar8) - 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(uVar8,uVar7);
  }
  local_98 = _DAT_18322c000;
  uStack_90 = _UNK_18322c008;
  local_a8._0_1_ = s_timestamp_18323d968[0];
  local_a8._1_1_ = s_timestamp_18323d968[1];
  local_a8._2_1_ = s_timestamp_18323d968[2];
  local_a8._3_1_ = s_timestamp_18323d968[3];
  local_a8._4_1_ = s_timestamp_18323d968[4];
  local_a8._5_1_ = s_timestamp_18323d968[5];
  local_a8._6_1_ = s_timestamp_18323d968[6];
  local_a8._7_1_ = s_timestamp_18323d968[7];
  uStack_a0 = (longlong *)(ulonglong)(byte)s_timestamp_18323d968[8];
  thunk_FUN_1812da790(param_2,&local_a8,local_b0);
  if (0xf < uStack_90) {
    uVar8 = uStack_90 + 1;
    lVar11 = (longlong)local_a8;
    if (0xfff < uVar8) {
      uVar8 = uStack_90 + 0x28;
      lVar11 = *(longlong *)((longlong)local_a8 + -8);
      if (0x1f < ((longlong)local_a8 - lVar11) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(lVar11,uVar8);
  }
  local_98 = _DAT_183242500;
  uStack_90 = _UNK_183242508;
  local_a8._0_1_ = s_extraInfoLen_183256590[0];
  local_a8._1_1_ = s_extraInfoLen_183256590[1];
  local_a8._2_1_ = s_extraInfoLen_183256590[2];
  local_a8._3_1_ = s_extraInfoLen_183256590[3];
  local_a8._4_1_ = s_extraInfoLen_183256590[4];
  local_a8._5_1_ = s_extraInfoLen_183256590[5];
  local_a8._6_1_ = s_extraInfoLen_183256590[6];
  local_a8._7_1_ = s_extraInfoLen_183256590[7];
  uStack_a0 = (longlong *)(ulonglong)(uint)s_extraInfoLen_183256590._8_4_;
  thunk_FUN_1812daaf0(param_2,&local_a8,&local_b8);
  if (0xf < uStack_90) {
    uVar8 = uStack_90 + 1;
    lVar11 = (longlong)local_a8;
    if (0xfff < uVar8) {
      uVar8 = uStack_90 + 0x28;
      lVar11 = *(longlong *)((longlong)local_a8 + -8);
      if (0x1f < ((longlong)local_a8 - lVar11) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(lVar11,uVar8);
  }
  uStack_a0 = (longlong *)0x0;
  local_98 = _DAT_18322bf40;
  uStack_90 = _UNK_18322bf48;
  local_a8 = (longlong *)0x6374;
  thunk_FUN_1812da670(param_2,&local_a8,local_ac);
  if (0xf < uStack_90) {
    uVar8 = uStack_90 + 1;
    lVar11 = (longlong)local_a8;
    if (0xfff < uVar8) {
      uVar8 = uStack_90 + 0x28;
      lVar11 = *(longlong *)((longlong)local_a8 + -8);
      if (0x1f < ((longlong)local_a8 - lVar11) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(lVar11,uVar8);
  }
  iVar3 = local_dc;
  local_a8 = (longlong *)0x0;
  uStack_a0 = (longlong *)0x0;
  local_84 = local_e0;
  local_80 = local_e4;
  uVar8 = 0xffffffffffffffff;
  do {
    uVar7 = uVar8;
    uVar8 = uVar7 + 1;
  } while (*(char *)(param_3 + uVar8) != '\0');
  iVar10 = (int)uVar8;
  lVar9 = (longlong)local_dc;
  lVar11 = 100;
  if (local_d8 + 0x65 + iVar10 == local_dc) {
LAB_1812fc4d6:
    iVar12 = (int)lVar11;
    iVar13 = (iVar3 - iVar12) - iVar10;
    if ((local_e8 == 0) && (local_d4 == 0)) {
      if (*(int *)(param_1 + 0x140) == 0x108) {
        local_f8 = iVar10;
        local_f0 = local_d8;
        thunk_FUN_1812fbd30(param_1,0,param_3,iVar3);
      }
      else {
        if (*(int *)(param_1 + 0x140) != 0x10a) goto LAB_1812fc705;
        local_f8 = iVar10;
        local_f0 = local_d8;
        thunk_FUN_1812fbb40(param_1,0,param_3,iVar3);
      }
    }
    else {
      iVar3 = *(int *)(param_1 + ((longlong)(int)local_e8 + 0x14) * 0x10);
      if ((iVar3 == local_d4) || ((iVar3 != 1 || (local_d4 != 0)))) {
        local_88 = local_d4;
        plVar6 = (longlong *)thunk_FUN_183196718(0x100);
        local_c8 = plVar6;
        if (plVar6 == (longlong *)0x0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          *plVar6 = 0;
          plVar6[1] = 0;
          *(undefined4 *)(plVar6 + 1) = 1;
          *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
          *plVar6 = (longlong)std::_Ref_count_obj2<cs::CsFrame>::vftable;
          thunk_FUN_181256f40(plVar6 + 2,&local_88);
        }
        lVar11 = param_3 + 1 + (longlong)iVar10;
        param_3 = (longlong)iVar10 + (longlong)iVar12 + 1 + param_3;
        iVar13 = iVar13 + -1;
      }
      else {
        iVar3 = local_e4 * local_e0 * 3;
        local_dc = iVar3;
        if (*(int *)(param_1 + 0x18) < iVar3) {
          free(*(void **)(param_1 + 0x10));
          *(int *)(param_1 + 0x18) = iVar3;
          uVar5 = thunk_FUN_183196718((longlong)iVar3);
          *(undefined8 *)(param_1 + 0x10) = uVar5;
        }
        memset(*(void **)(param_1 + 0x10),0,(longlong)*(int *)(param_1 + 0x18));
        local_f8 = local_e4;
        cVar4 = thunk_FUN_1812599c0((longlong)iVar12 + 1 + (longlong)iVar10 + param_3,iVar13 + -1,
                                    *(undefined8 *)(param_1 + 0x10),local_e0);
        if (cVar4 == '\0') {
          thunk_FUN_18317f440("%s--unpack mjpeg failed\n",
                              "cs::CameraDeviceRpcClient::pushFrameStream");
          goto LAB_1812fc773;
        }
        local_88 = 1;
        plVar6 = (longlong *)thunk_FUN_183196718(0x100);
        local_c8 = plVar6;
        if (plVar6 == (longlong *)0x0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          *plVar6 = 0;
          plVar6[1] = 0;
          *(undefined4 *)(plVar6 + 1) = 1;
          *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
          *plVar6 = (longlong)std::_Ref_count_obj2<cs::CsFrame>::vftable;
          thunk_FUN_181256f40(plVar6 + 2,&local_88);
        }
        lVar11 = param_3 + 1 + (longlong)iVar10;
        param_3 = *(longlong *)(param_1 + 0x10);
        iVar13 = local_dc;
      }
      local_a8 = plVar6 + 2;
      uStack_a0 = plVar6;
      cVar4 = thunk_FUN_181258a70(local_a8,param_3,iVar13,lVar11);
      if (cVar4 == '\0') {
        local_a8 = (longlong *)0x0;
        uStack_a0 = (longlong *)0x0;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar6 + 1;
          lVar11 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6);
            }
          }
        }
      }
LAB_1812fc705:
      lVar11 = *(longlong *)(param_1 + 0x120 + (longlong)(int)local_e8 * 8);
      if ((lVar11 == 0) || (cVar4 = thunk_FUN_1812f41b0(&local_a8,0), cVar4 == '\0')) {
        thunk_FUN_18317f440("m_pushStreamCallBack[%d] is nullptr(%p)\n",local_e8,lVar11);
      }
      else {
        if (uStack_a0 != (longlong *)0x0) {
          LOCK();
          *(int *)(uStack_a0 + 1) = (int)uStack_a0[1] + 1;
          UNLOCK();
        }
        local_c8 = local_a8;
        plStack_c0 = uStack_a0;
        (**(code **)(param_1 + 0x120 + (longlong)(int)local_e8 * 8))
                  (&local_c8,*(undefined8 *)(param_1 + 0x130 + (longlong)(int)local_e8 * 8));
      }
    }
  }
  else {
    local_f0 = local_dc;
    local_f8 = local_d8;
    thunk_FUN_18317f440("pushFrameStream failed:dataLen error:jsonlen(%d) +1 + extraInfoLen(%d,actual=%d) + dataLen(%d) != len(%d)\n"
                        ,uVar8 & 0xffffffff,local_b8,100);
    lVar11 = local_b8;
    if (((int)uVar7 + 2) + local_b8 + (longlong)local_d8 == lVar9) goto LAB_1812fc4d6;
  }
LAB_1812fc773:
  plVar6 = uStack_a0;
  if (uStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_a0 + 1;
    lVar11 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*uStack_a0)(uStack_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_a0 + 8))();
      }
    }
  }
LAB_1812fc7c3:
  if (0xf < uStack_60) {
    uVar8 = uStack_60 + 1;
    lVar11 = local_78[0];
    if (0xfff < uVar8) {
      uVar8 = uStack_60 + 0x28;
      lVar11 = *(longlong *)(local_78[0] + -8);
      if (0x1f < (local_78[0] - lVar11) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(lVar11,uVar8);
  }
  return;
}


