// 1813030f0  size=0x92f  str:"msgId"

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1813030f0(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined8 ****ppppuVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 ****ppppuVar16;
  undefined1 auStack_2d8 [32];
  undefined8 ***local_2b8;
  undefined8 ***local_2b0;
  undefined8 local_2a8;
  longlong *local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  ulonglong local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  ulonglong uStack_260;
  undefined8 ***local_258;
  undefined8 uStack_250;
  ulonglong local_248;
  ulonglong local_240;
  undefined8 ***local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  ulonglong local_220;
  undefined8 ***local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  ulonglong local_200;
  undefined8 ***local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  ulonglong local_1e0;
  undefined8 ***local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  ulonglong local_1c0;
  undefined1 local_1b8 [96];
  undefined1 local_158 [96];
  undefined1 local_f8 [176];
  ulonglong local_48;
  
  local_48 = DAT_183dc69c0 ^ (ulonglong)auStack_2d8;
  local_278 = (undefined8 *)0x0;
  uStack_270 = 0;
  local_268 = 0;
  uStack_260 = 0;
  lVar14 = -1;
  do {
    lVar14 = lVar14 + 1;
  } while (*(char *)(param_2 + lVar14) != '\0');
  thunk_FUN_1811adba0(&local_278);
  thunk_FUN_1812d5b40(local_158,&local_278);
  if (0xf < uStack_260) {
    uVar13 = uStack_260 + 1;
    lVar14 = (longlong)local_278;
    if (0xfff < uVar13) {
      uVar13 = uStack_260 + 0x28;
      lVar14 = *(longlong *)((longlong)local_278 + -8);
      if (0x1f < ((longlong)local_278 - lVar14) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(lVar14,uVar13);
  }
  uStack_250 = 0;
  iVar8 = 0;
  local_248 = 0;
  local_240 = 0xf;
  local_258 = (undefined8 ****)0x0;
  uStack_270 = 0;
  local_268 = _DAT_18322bf80;
  uStack_260 = _UNK_18322bf88;
  local_278 = (undefined8 *)(ulonglong)CONCAT14(DAT_18324f634,DAT_18324f630);
  cVar6 = thunk_FUN_1812da9f0(local_158,&local_278,&local_258);
  if (0xf < uStack_260) {
    uVar13 = uStack_260 + 1;
    puVar12 = local_278;
    if (0xfff < uVar13) {
      uVar13 = uStack_260 + 0x28;
      puVar12 = (undefined8 *)local_278[-1];
      if (0x1f < (ulonglong)((longlong)local_278 + (-8 - (longlong)puVar12))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(puVar12,uVar13);
  }
  uVar13 = local_248;
  if (cVar6 == '\0') {
    thunk_FUN_18317f440("[SDK TRACE] %s--queryCameras failed!\n",
                        "cs::CameraProbeRpcClient::recvDataHandle");
  }
  else {
    ppppuVar11 = &local_258;
    if (0xf < local_240) {
      ppppuVar11 = (undefined8 ****)local_258;
    }
    uVar15 = local_248;
    if (0xf < local_248) {
      uVar15 = 0xf;
    }
    iVar7 = memcmp(ppppuVar11,"queryCamerasRsp",uVar15);
    if ((iVar7 == 0) && (uVar13 == 0xf)) {
      thunk_FUN_1831809d0(&local_2a8,param_1 + 0x30);
      thunk_FUN_181302750(param_1 + 0x18);
      thunk_FUN_1812d5dd0(local_1b8);
      uStack_270 = 0;
      local_268 = _DAT_18322bfc0;
      uStack_260 = _UNK_18322bfc8;
      local_278 = (undefined8 *)
                  (ulonglong)
                  CONCAT16(s_cameras_183257148[6],
                           CONCAT24(s_cameras_183257148._4_2_,s_cameras_183257148._0_4_));
      thunk_FUN_1812da880(local_158,&local_278,local_1b8);
      if (0xf < uStack_260) {
        uVar13 = uStack_260 + 1;
        puVar12 = local_278;
        if (0xfff < uVar13) {
          uVar13 = uStack_260 + 0x28;
          puVar12 = (undefined8 *)local_278[-1];
          if (0x1f < (ulonglong)((longlong)local_278 + (-8 - (longlong)puVar12))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_18001e0e2(puVar12,uVar13);
      }
      cVar6 = thunk_FUN_1812db2a0(local_1b8);
      if ((cVar6 != '\0') && (iVar7 = thunk_FUN_1812db170(local_1b8), 0 < iVar7)) {
        do {
          uStack_270 = 0;
          local_268 = 0;
          uStack_260 = 0xf;
          local_278 = (undefined8 *)0x0;
          uStack_290 = 0;
          local_288 = 4;
          local_280 = 0xf;
          local_298 = (char *)0x656d616e;
          uVar9 = thunk_FUN_1812d68c0(local_1b8,iVar8);
          thunk_FUN_1812da9f0(uVar9,&local_298,&local_278);
          if (0xf < local_280) {
            uVar13 = local_280 + 1;
            lVar14 = (longlong)local_298;
            if (0xfff < uVar13) {
              uVar13 = local_280 + 0x28;
              lVar14 = *(longlong *)((longlong)local_298 + -8);
              if (0x1f < ((longlong)local_298 - lVar14) - 8U) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FUN_18001e0e2(lVar14,uVar13);
          }
          uStack_1d0 = 0;
          local_1c8 = 0;
          local_1c0 = 0xf;
          local_1d8 = (undefined8 ****)0x0;
          uStack_290 = 0;
          local_288 = 6;
          local_280 = 0xf;
          local_298 = (char *)(ulonglong)CONCAT24(s_serial_183226390._4_2_,s_serial_183226390._0_4_)
          ;
          uVar9 = thunk_FUN_1812d68c0(local_1b8,iVar8);
          thunk_FUN_1812da9f0(uVar9,&local_298,&local_1d8);
          if (0xf < local_280) {
            uVar15 = local_280 + 1;
            uVar13 = (ulonglong)local_298;
            if (0xfff < uVar15) {
              uVar15 = local_280 + 0x28;
              uVar13 = *(ulonglong *)((longlong)local_298 - 8);
              if (0x1f < ((longlong)local_298 - uVar13) - 8) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FUN_18001e0e2(uVar13,uVar15);
          }
          uStack_1f0 = 0;
          local_1e8 = 0;
          local_1e0 = 0xf;
          local_1f8 = (undefined8 ****)0x0;
          local_288 = 8;
          local_280 = 0xf;
          local_298 = (char *)0x6449657571696e75;
          uStack_290 = 0;
          uVar9 = thunk_FUN_1812d68c0(local_1b8,iVar8);
          thunk_FUN_1812da9f0(uVar9,&local_298,&local_1f8);
          if (0xf < local_280) {
            uVar13 = local_280 + 1;
            lVar14 = (longlong)local_298;
            if (0xfff < uVar13) {
              uVar13 = local_280 + 0x28;
              lVar14 = *(longlong *)((longlong)local_298 + -8);
              if (0x1f < ((longlong)local_298 - lVar14) - 8U) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FUN_18001e0e2(lVar14,uVar13);
          }
          uStack_210 = 0;
          local_208 = 0;
          local_200 = 0xf;
          local_218 = (undefined8 ****)0x0;
          local_288 = 0xf;
          local_280 = 0xf;
          local_298._0_1_ = s_firmwareVersion_18322a3c0[0];
          local_298._1_1_ = s_firmwareVersion_18322a3c0[1];
          local_298._2_1_ = s_firmwareVersion_18322a3c0[2];
          local_298._3_1_ = s_firmwareVersion_18322a3c0[3];
          local_298._4_1_ = s_firmwareVersion_18322a3c0[4];
          local_298._5_1_ = s_firmwareVersion_18322a3c0[5];
          local_298._6_1_ = s_firmwareVersion_18322a3c0[6];
          local_298._7_1_ = s_firmwareVersion_18322a3c0[7];
          uStack_290 = (ulonglong)
                       CONCAT16(s_firmwareVersion_18322a3c0[0xe],
                                CONCAT24(s_firmwareVersion_18322a3c0._12_2_,
                                         s_firmwareVersion_18322a3c0._8_4_));
          uVar9 = thunk_FUN_1812d68c0(local_1b8,iVar8);
          thunk_FUN_1812da9f0(uVar9,&local_298,&local_218);
          if (0xf < local_280) {
            uVar13 = local_280 + 1;
            lVar14 = (longlong)local_298;
            if (0xfff < uVar13) {
              uVar13 = local_280 + 0x28;
              lVar14 = *(longlong *)((longlong)local_298 + -8);
              if (0x1f < ((longlong)local_298 - lVar14) - 8U) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FUN_18001e0e2(lVar14,uVar13);
          }
          uStack_230 = 0;
          local_228 = 0;
          local_220 = 0xf;
          local_238 = (undefined8 ****)0x0;
          local_298 = (char *)0x0;
          uStack_290 = 0;
          local_288 = 0;
          local_280 = 0;
          local_298 = (char *)thunk_FUN_183196718(0x20);
          uVar5 = s_algorithmVersion_18322a3d8._12_4_;
          uVar4 = s_algorithmVersion_18322a3d8._8_4_;
          uVar3 = s_algorithmVersion_18322a3d8._4_4_;
          local_288 = 0x10;
          local_280 = 0x1f;
          *(undefined4 *)local_298 = s_algorithmVersion_18322a3d8._0_4_;
          *(undefined4 *)(local_298 + 4) = uVar3;
          *(undefined4 *)(local_298 + 8) = uVar4;
          *(undefined4 *)(local_298 + 0xc) = uVar5;
          local_298[0x10] = '\0';
          uVar9 = thunk_FUN_1812d68c0(local_1b8,iVar8);
          thunk_FUN_1812da9f0(uVar9,&local_298,&local_238);
          if (0xf < local_280) {
            uVar13 = local_280 + 1;
            pcVar10 = local_298;
            if (0xfff < uVar13) {
              uVar13 = local_280 + 0x28;
              pcVar10 = *(char **)(local_298 + -8);
              if ((char *)0x1f < local_298 + (-8 - (longlong)pcVar10)) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FUN_18001e0e2(pcVar10,uVar13);
          }
          local_2b0 = &local_238;
          if (0xf < local_220) {
            local_2b0 = local_238;
          }
          local_2b8 = &local_218;
          if (0xf < local_200) {
            local_2b8 = local_218;
          }
          ppppuVar11 = &local_1f8;
          if (0xf < local_1e0) {
            ppppuVar11 = (undefined8 ****)local_1f8;
          }
          ppppuVar16 = &local_1d8;
          if (0xf < local_1c0) {
            ppppuVar16 = (undefined8 ****)local_1d8;
          }
          puVar12 = &local_278;
          if (0xf < uStack_260) {
            puVar12 = local_278;
          }
          thunk_FUN_181301870(local_f8,puVar12,ppppuVar16,ppppuVar11);
          lVar14 = *(longlong *)(param_1 + 0x20);
          if (lVar14 == *(longlong *)(param_1 + 0x28)) {
            thunk_FUN_181301b60(param_1 + 0x18,lVar14,local_f8);
          }
          else {
            thunk_FUN_1813017d0(lVar14,local_f8);
            *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 0xa4;
          }
          thunk_FUN_181301970(local_f8);
          if (0xf < local_220) {
            uVar13 = local_220 + 1;
            ppppuVar11 = (undefined8 ****)local_238;
            if (0xfff < uVar13) {
              uVar13 = local_220 + 0x28;
              ppppuVar11 = (undefined8 ****)local_238[-1];
              if (0x1f < (ulonglong)((longlong)local_238 + (-8 - (longlong)ppppuVar11))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FUN_18001e0e2(ppppuVar11,uVar13);
          }
          local_228 = 0;
          local_220 = 0xf;
          local_238 = (undefined8 ***)((ulonglong)local_238 & 0xffffffffffffff00);
          if (0xf < local_200) {
            uVar13 = local_200 + 1;
            ppppuVar11 = (undefined8 ****)local_218;
            if (0xfff < uVar13) {
              uVar13 = local_200 + 0x28;
              ppppuVar11 = (undefined8 ****)local_218[-1];
              if (0x1f < (ulonglong)((longlong)local_218 + (-8 - (longlong)ppppuVar11))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FUN_18001e0e2(ppppuVar11,uVar13);
          }
          local_208 = 0;
          local_200 = 0xf;
          local_218 = (undefined8 ***)((ulonglong)local_218 & 0xffffffffffffff00);
          if (0xf < local_1e0) {
            uVar13 = local_1e0 + 1;
            ppppuVar11 = (undefined8 ****)local_1f8;
            if (0xfff < uVar13) {
              uVar13 = local_1e0 + 0x28;
              ppppuVar11 = (undefined8 ****)local_1f8[-1];
              if (0x1f < (ulonglong)((longlong)local_1f8 + (-8 - (longlong)ppppuVar11))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FUN_18001e0e2(ppppuVar11,uVar13);
          }
          local_1e8 = 0;
          local_1e0 = 0xf;
          local_1f8 = (undefined8 ***)((ulonglong)local_1f8 & 0xffffffffffffff00);
          if (0xf < local_1c0) {
            uVar13 = local_1c0 + 1;
            ppppuVar11 = (undefined8 ****)local_1d8;
            if (0xfff < uVar13) {
              uVar13 = local_1c0 + 0x28;
              ppppuVar11 = (undefined8 ****)local_1d8[-1];
              if (0x1f < (ulonglong)((longlong)local_1d8 + (-8 - (longlong)ppppuVar11))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FUN_18001e0e2(ppppuVar11,uVar13);
          }
          local_1c8 = 0;
          local_1c0 = 0xf;
          local_1d8 = (undefined8 ***)((ulonglong)local_1d8 & 0xffffffffffffff00);
          if (0xf < uStack_260) {
            uVar13 = uStack_260 + 1;
            puVar12 = local_278;
            if (0xfff < uVar13) {
              uVar13 = uStack_260 + 0x28;
              puVar12 = (undefined8 *)local_278[-1];
              if (0x1f < (ulonglong)((longlong)local_278 + (-8 - (longlong)puVar12))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FUN_18001e0e2(puVar12,uVar13);
          }
          iVar8 = iVar8 + 1;
          iVar7 = thunk_FUN_1812db170(local_1b8);
        } while (iVar8 < iVar7);
      }
      thunk_FUN_1812d6290(local_1b8);
      thunk_FUN_183180a80(&local_2a8);
    }
    else {
      ppppuVar11 = &local_258;
      if (0xf < local_240) {
        ppppuVar11 = (undefined8 ****)local_258;
      }
      uVar15 = uVar13;
      if (0xc < uVar13) {
        uVar15 = 0xc;
      }
      iVar8 = memcmp(ppppuVar11,"upgradeAlarm",uVar15);
      if ((iVar8 == 0) && (uVar13 == 0xc)) {
        thunk_FUN_18317f440("[SDK TRACE] upgrade alarm %d:%s\n",param_3,param_2);
        cs::getSystemPtr();
        thunk_FUN_18125ee60(local_2a8,param_2,param_3);
        if (local_2a0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_2a0 + 1;
          lVar14 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*local_2a0)(local_2a0);
            LOCK();
            piVar2 = (int *)((longlong)local_2a0 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_2a0 + 8))(local_2a0);
            }
          }
        }
      }
    }
  }
  if (0xf < local_240) {
    uVar13 = local_240 + 1;
    ppppuVar11 = (undefined8 ****)local_258;
    if (0xfff < uVar13) {
      uVar13 = local_240 + 0x28;
      ppppuVar11 = (undefined8 ****)local_258[-1];
      if (0x1f < (ulonglong)((longlong)local_258 + (-8 - (longlong)ppppuVar11))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(ppppuVar11,uVar13);
  }
  local_248 = 0;
  local_240 = 0xf;
  local_258 = (undefined8 ***)((ulonglong)local_258 & 0xffffffffffffff00);
  thunk_FUN_1812d6290(local_158);
  return;
}


