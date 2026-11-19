// FUN_181241c30 @ 181241c30  size=332
// seed/up 0x181241c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_181241c30(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 *local_128;
  undefined1 local_118 [224];
  ulonglong local_38;
  
  local_38 = DAT_183dc69c0 ^ (ulonglong)auStack_158;
  local_128 = param_2;
  thunk_FUN_1813171b0(local_118);
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_138 = *param_2;
  uStack_130 = param_2[1];
  iVar6 = thunk_FUN_181242ff0(param_1,&local_138,0,local_118);
  if (iVar6 == 0) {
    iVar6 = thunk_FUN_181324b80(local_118,param_3,param_4,param_5);
    if (iVar6 == 0) {
      thunk_FUN_1813183a0(local_118);
      thunk_FUN_1811cd360(param_2);
      iVar6 = 0;
    }
    else {
      thunk_FUN_18317f440("[SDK ERROR] matched feature points reconstruct failed, err = %d\n",iVar6)
      ;
      thunk_FUN_1813183a0(local_118);
      thunk_FUN_1811cd360(param_2);
      iVar6 = 1;
    }
  }
  else {
    thunk_FUN_18317f440("[SDK ERROR] prepare matched feature points reconstruct failed, err = %d\n",
                        iVar6);
    thunk_FUN_1813183a0(local_118);
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
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
      }
    }
  }
  return iVar6;
}


