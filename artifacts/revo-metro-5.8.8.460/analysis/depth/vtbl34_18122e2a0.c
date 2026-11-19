// vtable slot 34 (thunk 0x18000410b) -> FUN_18122e2a0 @ 0x18122e2a0  size=321

undefined4
FUN_18122e2a0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28 [4];
  
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_38 = *param_2;
  uStack_30 = param_2[1];
  uVar5 = (**(code **)(*param_1 + 0x1a8))
                    (param_5,&local_38,param_3,param_4,param_6,local_28,param_5,0);
  if (local_28[0] != 0) {
    uVar6 = ((local_28[2] - local_28[0]) / 0xc) * 0xc;
    lVar7 = local_28[0];
    if (0xfff < uVar6) {
      uVar6 = uVar6 + 0x27;
      lVar7 = *(longlong *)(local_28[0] + -8);
      if (0x1f < (local_28[0] - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(lVar7,uVar6);
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[2] = 0;
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return uVar5;
}


