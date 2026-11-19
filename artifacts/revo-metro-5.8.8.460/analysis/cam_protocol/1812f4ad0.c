// 1812f4ad0  size=0x5e5  str:"msgId"

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1812f4ad0(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 ***pppuVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined8 ****_Dst;
  undefined8 ****ppppuVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_5e8 [32];
  ulonglong local_5c8;
  undefined8 ***local_5c0;
  longlong local_5b8;
  longlong local_5b0;
  undefined4 local_5a8 [2];
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  ulonglong local_588;
  ulonglong uStack_580;
  undefined8 ***local_578;
  undefined8 uStack_570;
  ulonglong local_568;
  ulonglong uStack_560;
  undefined8 ***local_558;
  undefined8 uStack_550;
  ulonglong local_548;
  ulonglong uStack_540;
  ulonglong local_538 [3];
  ulonglong uStack_520;
  ulonglong local_518 [3];
  ulonglong uStack_500;
  ulonglong local_4f8 [3];
  ulonglong uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  ulonglong local_4c8;
  ulonglong uStack_4c0;
  undefined1 local_4b8 [96];
  undefined1 local_458 [1024];
  ulonglong local_58;
  
  uVar1 = _UNK_183222c58;
  uVar9 = _DAT_183222c50;
  local_58 = DAT_183dc69c0 ^ (ulonglong)auStack_5e8;
  uStack_4d0 = 0;
  local_4c8 = _DAT_183222c50;
  uStack_4c0 = _UNK_183222c58;
  local_4d8 = 0;
  uStack_550 = 0;
  local_548 = _DAT_183222c50;
  uStack_540 = _UNK_183222c58;
  local_558 = (undefined8 ****)0x0;
  local_5a0 = param_1;
  pcVar5 = strstr((char *)(param_2 + 0x40),"rpc-");
  uVar10 = 0xffffffffffffffff;
  if (pcVar5 == (char *)0x0) {
    do {
      uVar10 = uVar10 + 1;
    } while (*(char *)(param_2 + 0x40 + uVar10) != '\0');
    thunk_FUN_1811b4840(&local_558,param_2 + 0x40,uVar10);
  }
  else {
    local_578 = (undefined8 ****)0x0;
    uStack_570 = 0;
    local_568 = 0;
    uStack_560 = 0;
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (*(char *)(param_2 + 0x40 + lVar11) != '\0');
    thunk_FUN_1811adba0(&local_578,param_2 + 0x40);
    uVar8 = uStack_560;
    pppuVar2 = local_578;
    local_598 = (undefined8 ****)0x0;
    uStack_590 = 0;
    if (local_568 < 4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_1811c3110();
    }
    if (local_568 - 4 != 0xffffffffffffffff) {
      uVar10 = local_568 - 4;
    }
    ppppuVar7 = &local_578;
    if (0xf < uStack_560) {
      ppppuVar7 = (undefined8 ****)local_578;
    }
    if (0x7fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_1811b44e0();
    }
    local_588 = uVar10;
    if (uVar10 < 0x10) {
      uStack_580 = 0xf;
      memcpy(&local_598,(void *)((longlong)ppppuVar7 + 4),uVar10);
      *(undefined1 *)((longlong)&local_598 + uVar10) = 0;
    }
    else {
      uVar6 = uVar10 | 0xf;
      if (uVar6 < 0x8000000000000000) {
        if (uVar6 < 0x16) {
          uVar6 = 0x16;
        }
        if (uVar6 == 0xffffffffffffffff) {
          _Dst = (undefined8 ****)0x0;
        }
        else if (uVar6 + 1 < 0x1000) {
          _Dst = (undefined8 ****)thunk_FUN_183196718();
        }
        else {
          _Dst = (undefined8 ****)thunk_FUN_1811a9100();
        }
      }
      else {
        _Dst = (undefined8 ****)thunk_FUN_1811a9100(0x8000000000000000);
        uVar6 = 0x7fffffffffffffff;
      }
      local_598 = _Dst;
      uStack_580 = uVar6;
      memcpy(_Dst,(void *)((longlong)ppppuVar7 + 4),uVar10);
      *(undefined1 *)((longlong)_Dst + uVar10) = 0;
      param_1 = local_5a0;
    }
    if (0xf < uStack_540) {
      uVar10 = uStack_540 + 1;
      ppppuVar7 = (undefined8 ****)local_558;
      if (0xfff < uVar10) {
        uVar10 = uStack_540 + 0x28;
        ppppuVar7 = (undefined8 ****)local_558[-1];
        if (0x1f < (ulonglong)((longlong)local_558 + (-8 - (longlong)ppppuVar7))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(ppppuVar7,uVar10);
    }
    local_558 = local_598;
    uStack_550 = uStack_590;
    local_548 = local_588;
    uStack_540 = uStack_580;
    if (0xf < uVar8) {
      uVar10 = uVar8 + 1;
      ppppuVar7 = (undefined8 ****)pppuVar2;
      if (0xfff < uVar10) {
        uVar10 = uVar8 + 0x28;
        ppppuVar7 = (undefined8 ****)pppuVar2[-1];
        if (0x1f < (ulonglong)((longlong)pppuVar2 + (-8 - (longlong)ppppuVar7))) goto LAB_1812f502b;
      }
      FUN_18001e0e2(ppppuVar7,uVar10);
    }
  }
  local_5c0 = &local_558;
  if (0xf < uStack_540) {
    local_5c0 = local_558;
  }
  local_5b0 = param_2 + 0x80;
  local_5b8 = param_2 + 0x60;
  local_5c8 = param_2 + 0x20;
  uVar3 = snprintf(local_458,0x3f4,
                   "{\"msgId\":\"connect\",\"name\":\"%s\",\"serial\":\"%s\",\"uniqueId\":\"%s\",\"firmwareVersion\":\"%s\",\"algorithmVersion\":\"%s\"}"
                   ,param_2);
  local_538[1] = 0;
  local_538[2] = uVar9;
  uStack_520 = uVar1;
  local_538[0] = 0;
  local_5b8 = CONCAT44(local_5b8._4_4_,5000);
  local_5c0 = (undefined8 ***)local_538;
  local_5c8 = local_5c8 & 0xffffffff00000000;
  iVar4 = thunk_FUN_1812fe010(param_1,local_458,uVar3,0);
  if (iVar4 == 0) {
    uVar3 = 1;
  }
  else {
    thunk_FUN_1812d5b40(local_4b8,local_538);
    local_4f8[1] = 0;
    local_4f8[2] = uVar9;
    uStack_4e0 = uVar1;
    local_4f8[0] = 0;
    uStack_590 = 0;
    local_588 = _DAT_18322bf80;
    uStack_580 = _UNK_18322bf88;
    local_598 = (undefined8 ****)(ulonglong)CONCAT14(DAT_18324f634,DAT_18324f630);
    thunk_FUN_1812da9f0(local_4b8,&local_598,local_4f8);
    if (0xf < uStack_580) {
      uVar8 = uStack_580 + 1;
      uVar10 = (ulonglong)local_598;
      if (0xfff < uVar8) {
        uVar8 = uStack_580 + 0x28;
        uVar10 = *(ulonglong *)((longlong)local_598 - 8);
        if (0x1f < ((longlong)local_598 - uVar10) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(uVar10,uVar8);
    }
    local_518[1] = 0;
    local_518[2] = uVar9;
    uStack_500 = uVar1;
    local_518[0] = 0;
    uStack_590 = 0;
    local_588 = _DAT_18322bfa0;
    uStack_580 = _UNK_18322bfa8;
    local_598 = (undefined8 ****)
                (ulonglong)CONCAT24(s_result_18323d8d4._4_2_,s_result_18323d8d4._0_4_);
    thunk_FUN_1812da9f0(local_4b8,&local_598,local_518);
    if (0xf < uStack_580) {
      uVar10 = uStack_580 + 1;
      ppppuVar7 = local_598;
      if (0xfff < uVar10) {
        uVar10 = uStack_580 + 0x28;
        ppppuVar7 = (undefined8 ****)local_598[-1];
        if (0x1f < (ulonglong)((longlong)local_598 + (-8 - (longlong)ppppuVar7))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(ppppuVar7,uVar10);
    }
    local_5a8[0] = 0;
    uStack_570 = 0;
    local_568 = _DAT_18322bf60;
    uStack_560 = _UNK_18322bf68;
    local_578 = (undefined8 ****)0x65646f63;
    thunk_FUN_1812da670(local_4b8,&local_578,local_5a8);
    if (0xf < uStack_560) {
      uVar10 = uStack_560 + 1;
      ppppuVar7 = (undefined8 ****)local_578;
      if (0xfff < uVar10) {
        uVar10 = uStack_560 + 0x28;
        ppppuVar7 = (undefined8 ****)local_578[-1];
        if (0x1f < (ulonglong)((longlong)local_578 + (-8 - (longlong)ppppuVar7))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(ppppuVar7,uVar10);
    }
    uVar3 = local_5a8[0];
    if (0xf < uStack_500) {
      uVar8 = uStack_500 + 1;
      uVar10 = local_518[0];
      if (0xfff < uVar8) {
        uVar8 = uStack_500 + 0x28;
        uVar10 = *(ulonglong *)(local_518[0] - 8);
        if (0x1f < (local_518[0] - uVar10) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(uVar10,uVar8);
    }
    local_518[2] = uVar9;
    uStack_500 = uVar1;
    local_518[0] = local_518[0] & 0xffffffffffffff00;
    if (0xf < uStack_4e0) {
      uVar8 = uStack_4e0 + 1;
      uVar10 = local_4f8[0];
      if (0xfff < uVar8) {
        uVar8 = uStack_4e0 + 0x28;
        uVar10 = *(ulonglong *)(local_4f8[0] - 8);
        if (0x1f < (local_4f8[0] - uVar10) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(uVar10,uVar8);
    }
    local_4f8[2] = uVar9;
    uStack_4e0 = uVar1;
    local_4f8[0] = local_4f8[0] & 0xffffffffffffff00;
    thunk_FUN_1812d6290(local_4b8);
  }
  if (0xf < uStack_520) {
    uVar8 = uStack_520 + 1;
    uVar10 = local_538[0];
    if (0xfff < uVar8) {
      uVar8 = uStack_520 + 0x28;
      uVar10 = *(ulonglong *)(local_538[0] - 8);
      if (0x1f < (local_538[0] - uVar10) - 8) {
LAB_1812f502b:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(uVar10,uVar8);
  }
  local_538[2] = uVar9;
  uStack_520 = uVar1;
  local_538[0] = local_538[0] & 0xffffffffffffff00;
  if (0xf < uStack_540) {
    uVar9 = uStack_540 + 1;
    ppppuVar7 = (undefined8 ****)local_558;
    if (0xfff < uVar9) {
      uVar9 = uStack_540 + 0x28;
      ppppuVar7 = (undefined8 ****)local_558[-1];
      if (0x1f < (ulonglong)((longlong)local_558 + (-8 - (longlong)ppppuVar7))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(ppppuVar7,uVar9);
  }
  return uVar3;
}


