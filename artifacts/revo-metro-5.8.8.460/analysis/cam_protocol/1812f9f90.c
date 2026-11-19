// 1812f9f90  size=0x359  str:"msgId"

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1812f9f90(longlong param_1,void *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 ****ppppuVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 *_Dst;
  longlong lVar9;
  undefined1 auStack_128 [32];
  undefined1 local_108 [16];
  undefined8 ***local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  ulonglong uStack_c0;
  ulonglong local_b8 [4];
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = DAT_183dc69c0 ^ (ulonglong)auStack_128;
  uStack_f0 = 0;
  local_e8 = 0;
  local_e0 = 0xf;
  local_f8 = (undefined8 ****)0x0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_b8[2] = 0;
  local_b8[3] = 0;
  lVar9 = -1;
  do {
    lVar9 = lVar9 + 1;
  } while (*(char *)((longlong)param_2 + lVar9) != '\0');
  thunk_FUN_1811adba0(local_b8);
  thunk_FUN_1812d5b40(local_98,local_b8);
  if (0xf < local_b8[3]) {
    uVar6 = local_b8[3] + 1;
    uVar7 = local_b8[0];
    if (0xfff < uVar6) {
      uVar6 = local_b8[3] + 0x28;
      uVar7 = *(ulonglong *)(local_b8[0] - 8);
      if (0x1f < (local_b8[0] - uVar7) - 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(uVar7,uVar6);
  }
  local_b8[2] = _DAT_183222c50;
  local_b8[3] = _UNK_183222c58;
  local_b8[0] = local_b8[0] & 0xffffffffffffff00;
  plStack_d0 = (longlong *)0x0;
  local_c8 = _DAT_18322bf80;
  uStack_c0 = _UNK_18322bf88;
  local_d8 = (ulonglong)CONCAT14(DAT_18324f634,DAT_18324f630);
  thunk_FUN_1812da9f0(local_98,&local_d8,&local_f8);
  if (0xf < uStack_c0) {
    uVar6 = uStack_c0 + 1;
    uVar7 = local_d8;
    if (0xfff < uVar6) {
      uVar6 = uStack_c0 + 0x28;
      uVar7 = *(ulonglong *)(local_d8 - 8);
      if (0x1f < (local_d8 - uVar7) - 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(uVar7,uVar6);
  }
  uVar7 = local_e8;
  if (local_e8 == 0) {
    thunk_FUN_18317f440("%s--jsonObject failed:%s\n","cs::CameraDeviceRpcClient::handleRequest",
                        param_2);
    uVar8 = 0;
  }
  else {
    ppppuVar5 = &local_f8;
    if (0xf < local_e0) {
      ppppuVar5 = (undefined8 ****)local_f8;
    }
    uVar6 = local_e8;
    if (9 < local_e8) {
      uVar6 = 9;
    }
    iVar4 = memcmp(ppppuVar5,"frameData",uVar6);
    if ((iVar4 == 0) && (uVar7 == 9)) {
      thunk_FUN_1812fbf00(param_1,local_98,param_2,param_3);
      uVar8 = 1;
    }
    else {
      ppppuVar5 = &local_f8;
      if (0xf < local_e0) {
        ppppuVar5 = (undefined8 ****)local_f8;
      }
      uVar6 = uVar7;
      if (0x1e < uVar7) {
        uVar6 = 0x1e;
      }
      iVar4 = memcmp(ppppuVar5,"getPropertyPropertyExposuerRsp",uVar6);
      if ((iVar4 == 0) && (uVar7 == 0x1e)) {
        thunk_FUN_1812fdef0(param_1,local_98);
        uVar8 = 1;
      }
      else {
        ppppuVar5 = &local_f8;
        if (0xf < local_e0) {
          ppppuVar5 = (undefined8 ****)local_f8;
        }
        uVar6 = uVar7;
        if (0xc < uVar7) {
          uVar6 = 0xc;
        }
        iVar4 = memcmp(ppppuVar5,"upgradeAlarm",uVar6);
        if ((iVar4 == 0) && (uVar7 == 0xc)) {
          thunk_FUN_18317f440("upgrade alarm %d:%s\n",param_3,param_2);
          cs::getSystemPtr();
          thunk_FUN_18125ee60(local_d8,param_2,param_3);
          plVar3 = plStack_d0;
          if (plStack_d0 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_d0 + 1;
            lVar9 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plStack_d0)(plStack_d0);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3);
              }
            }
          }
          uVar8 = 1;
        }
        else {
          thunk_FUN_183180a00(local_108,param_1 + 0x30);
          _Dst = (undefined8 *)(param_1 + 0x38);
          thunk_FUN_1812450a0(_Dst,(longlong)param_3,0);
          if (0xf < *(ulonglong *)(param_1 + 0x50)) {
            _Dst = (undefined8 *)*_Dst;
          }
          memcpy(_Dst,param_2,(longlong)param_3);
          uVar8 = 1;
          thunk_FUN_183180a90(local_108);
        }
      }
    }
  }
  thunk_FUN_1812d6290(local_98);
  if (0xf < local_e0) {
    uVar7 = local_e0 + 1;
    ppppuVar5 = (undefined8 ****)local_f8;
    if (0xfff < uVar7) {
      uVar7 = local_e0 + 0x28;
      ppppuVar5 = (undefined8 ****)local_f8[-1];
      if (0x1f < (ulonglong)((longlong)local_f8 + (-8 - (longlong)ppppuVar5))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(ppppuVar5,uVar7);
  }
  return uVar8;
}


