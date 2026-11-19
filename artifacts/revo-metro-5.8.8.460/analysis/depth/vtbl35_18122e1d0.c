// vtable slot 35 (thunk 0x1800167bb) -> FUN_18122e1d0 @ 0x18122e1d0  size=166

ulonglong FUN_18122e1d0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_18 = *param_2;
  uStack_10 = param_2[1];
  uVar6 = (**(code **)(*param_1 + 0x110))(0,&local_18,param_3,param_4,0,param_5);
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      uVar6 = uVar6 & 0xffffffff;
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return uVar6;
}


