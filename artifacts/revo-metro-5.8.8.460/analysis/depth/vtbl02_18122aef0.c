// vtable slot 2 (thunk 0x18000ac22) -> FUN_18122aef0 @ 0x18122aef0  size=826

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_18122aef0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  longlong lStack_190;
  longlong local_188;
  longlong *local_180;
  longlong *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_183dc69c0 ^ (ulonglong)auStack_1b8;
  thunk_FUN_18317f440(
                     "[SDK TRACE] \r\n\r\n*********************************************** enter camera connect ***********************************************\r\n"
                     );
  thunk_FUN_18122a270(param_1);
  *(undefined1 *)(param_1 + 0x69) = 1;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  cs::getSystemPtr();
  DVar4 = GetTickCount();
  DVar5 = GetTickCount();
  uVar6 = DVar5 - DVar4;
  do {
    if (19999 < uVar6) {
      thunk_FUN_18317f440("[SDK ERROR] not found any camera\n");
      uVar8 = 2;
LAB_18122b061:
      if (local_178 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_178 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_178)(local_178);
          LOCK();
          piVar2 = (int *)((longlong)local_178 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_178 + 8))(local_178);
          }
        }
      }
      return uVar8;
    }
    local_198 = (undefined8 *)0x0;
    lStack_190 = 0;
    local_188 = 0;
    thunk_FUN_18317f440("[SDK TRACE] queryCameras in connecting\n");
    iVar7 = (**(code **)(*local_180 + 8))(local_180,&local_198,0);
    if ((iVar7 == 0) &&
       (lVar3 = lStack_190 - (longlong)local_198 >> 0x3f,
       (lStack_190 - (longlong)local_198) / 0xa0 + lVar3 != lVar3)) {
      local_b8 = *local_198;
      uStack_b0 = local_198[1];
      local_a8 = local_198[2];
      uStack_a0 = local_198[3];
      local_98 = local_198[4];
      uStack_90 = local_198[5];
      local_88 = local_198[6];
      uStack_80 = local_198[7];
      local_78 = local_198[8];
      uStack_70 = local_198[9];
      local_68 = local_198[10];
      uStack_60 = local_198[0xb];
      local_58 = local_198[0xc];
      uStack_50 = local_198[0xd];
      local_48 = local_198[0xe];
      uStack_40 = local_198[0xf];
      local_38 = *(undefined4 *)(local_198 + 0x10);
      uStack_34 = *(undefined4 *)((longlong)local_198 + 0x84);
      uStack_30 = *(undefined4 *)(local_198 + 0x11);
      uStack_2c = *(undefined4 *)((longlong)local_198 + 0x8c);
      local_28 = *(undefined4 *)(local_198 + 0x12);
      uStack_24 = *(undefined4 *)((longlong)local_198 + 0x94);
      uStack_20 = *(undefined4 *)(local_198 + 0x13);
      uStack_1c = *(undefined4 *)((longlong)local_198 + 0x9c);
      thunk_FUN_18317f440("[SDK INFO ] select the first camera serial:%s\n",&local_98);
      if (local_198 != (undefined8 *)0x0) {
        uVar9 = ((local_188 - (longlong)local_198) / 0xa0) * 0xa0;
        puVar10 = local_198;
        if (0xfff < uVar9) {
          uVar9 = uVar9 + 0x27;
          puVar10 = (undefined8 *)local_198[-1];
          if (0x1f < (ulonglong)((longlong)local_198 + (-8 - (longlong)puVar10)))
          goto LAB_18122b224;
        }
        FUN_18001e0e2(puVar10,uVar9);
      }
      *(undefined2 *)((longlong)param_1 + 0x37f) = 0;
      local_158 = local_b8;
      uStack_150 = uStack_b0;
      local_148 = local_a8;
      uStack_140 = uStack_a0;
      local_138 = local_98;
      uStack_130 = uStack_90;
      local_128 = local_88;
      uStack_120 = uStack_80;
      local_118 = local_78;
      uStack_110 = uStack_70;
      local_108 = local_68;
      uStack_100 = uStack_60;
      local_f8 = local_58;
      uStack_f0 = uStack_50;
      local_e8 = local_48;
      uStack_e0 = uStack_40;
      local_d8 = local_38;
      uStack_d4 = uStack_34;
      uStack_d0 = uStack_30;
      uStack_cc = uStack_2c;
      local_c8 = local_28;
      uStack_c4 = uStack_24;
      uStack_c0 = uStack_20;
      uStack_bc = uStack_1c;
      uVar8 = (**(code **)(*param_1 + 8))(param_1,&local_158);
      goto LAB_18122b061;
    }
    Sleep(1000);
    if (local_198 != (undefined8 *)0x0) {
      uVar9 = ((local_188 - (longlong)local_198) / 0xa0) * 0xa0;
      puVar10 = local_198;
      if (0xfff < uVar9) {
        uVar9 = uVar9 + 0x27;
        puVar10 = (undefined8 *)local_198[-1];
        if (0x1f < (ulonglong)((longlong)local_198 + (-8 - (longlong)puVar10))) {
LAB_18122b224:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(puVar10,uVar9);
    }
    DVar5 = GetTickCount();
    uVar6 = DVar5 - DVar4;
  } while( true );
}


