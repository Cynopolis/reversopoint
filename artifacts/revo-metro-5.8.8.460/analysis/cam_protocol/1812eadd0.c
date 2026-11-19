// 1812eadd0  size=0x267  str:"msgId"

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1812eadd0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  ulonglong uVar3;
  char *pcVar4;
  undefined8 ****ppppuVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_118 [32];
  undefined8 ***local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  ulonglong local_e0;
  ulonglong local_d8 [4];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong uStack_a0;
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = DAT_183dc69c0 ^ (ulonglong)auStack_118;
  uStack_f0 = 0;
  uVar7 = 0;
  local_e8 = 0;
  local_e0 = 0xf;
  local_f8 = (undefined8 ****)0x0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_d8[2] = 0;
  local_d8[3] = 0;
  lVar9 = -1;
  do {
    lVar9 = lVar9 + 1;
  } while (*(char *)(param_2 + lVar9) != '\0');
  thunk_FUN_1811adba0(local_d8);
  thunk_FUN_1812d5b40(local_98,local_d8);
  if (0xf < local_d8[3]) {
    uVar6 = local_d8[3] + 1;
    uVar3 = local_d8[0];
    if (0xfff < uVar6) {
      uVar6 = local_d8[3] + 0x28;
      uVar3 = *(ulonglong *)(local_d8[0] - 8);
      if (0x1f < (local_d8[0] - uVar3) - 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(uVar3,uVar6);
  }
  local_d8[2] = _DAT_183222c50;
  local_d8[3] = _UNK_183222c58;
  local_d8[0] = local_d8[0] & 0xffffffffffffff00;
  uStack_b0 = 0;
  local_a8 = _DAT_18322bf80;
  uStack_a0 = _UNK_18322bf88;
  local_b8 = (ulonglong)CONCAT14(DAT_18324f634,DAT_18324f630);
  thunk_FUN_1812da9f0(local_98,&local_b8,&local_f8);
  if (0xf < uStack_a0) {
    uVar6 = uStack_a0 + 1;
    uVar3 = local_b8;
    if (0xfff < uVar6) {
      uVar6 = uStack_a0 + 0x28;
      uVar3 = *(ulonglong *)(local_b8 - 8);
      if (0x1f < (local_b8 - uVar3) - 8) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(uVar3,uVar6);
  }
  uVar3 = uVar7;
  pcVar4 = PTR_s_queryCameras_183b9f530;
  if (local_e8 == 0) {
    thunk_FUN_18317f440("RPCServerCamera::handleRequest----msgId is Empty!\n");
  }
  else {
    while (pcVar4 != (char *)0x0) {
      ppppuVar5 = &local_f8;
      if (0xf < local_e0) {
        ppppuVar5 = (undefined8 ****)local_f8;
      }
      lVar9 = (longlong)ppppuVar5 - (longlong)pcVar4;
      do {
        cVar1 = *pcVar4;
        cVar2 = pcVar4[lVar9];
        if (cVar1 != cVar2) break;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      if (cVar1 == cVar2) {
        (**(code **)((longlong)(int)uVar3 * 0x10 + 0x183b9f538))(param_1,local_98,param_2,param_3);
        uVar8 = 1;
        goto LAB_1812eaf33;
      }
      uVar7 = uVar7 + 1;
      uVar3 = (ulonglong)((int)uVar3 + 1);
      pcVar4 = (&PTR_s_queryCameras_183b9f530)[uVar7 * 2];
    }
  }
  uVar8 = 0;
LAB_1812eaf33:
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


