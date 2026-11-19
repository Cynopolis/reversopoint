// vtable slot 28 (thunk 0x180013f11) -> FUN_181230200 @ 0x181230200  size=352

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_181230200(longlong *param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_458 [32];
  undefined4 local_438 [4];
  undefined8 local_428;
  undefined8 uStack_420;
  undefined4 local_418;
  ulonglong local_28;
  
  local_28 = DAT_183dc69c0 ^ (ulonglong)auStack_458;
  lVar4 = (longlong)param_2;
  if (((*(longlong *)((longlong)param_1 + lVar4 * 0x14 + 0x278) == 0) &&
      (*(longlong *)((longlong)param_1 + lVar4 * 0x14 + 0x280) == 0)) &&
     (*(int *)((longlong)param_1 + lVar4 * 0x14 + 0x288) == 0)) {
    if (param_2 == 0) {
      thunk_FUN_18317f440("[SDK TRACE] get distort by depth stream\n");
      *param_3 = 0;
      param_3[1] = 0;
      *(undefined4 *)(param_3 + 2) = 0;
    }
    else {
      memset(&local_428,0,0x400);
      snprintf(&local_428,0x400,"%s/data/camparam/Distort.bin","995b2f683da44aae");
      local_438[0] = 0;
      iVar3 = (**(code **)(*param_1 + 0xf8))(param_1,&local_428,local_438);
      if (iVar3 != 0) {
        thunk_FUN_18317f440("[SDK ERROR] get distort of rgb failed\n");
        *param_3 = 0;
        param_3[1] = 0;
        *(undefined4 *)(param_3 + 2) = 0;
        return 1;
      }
      *param_3 = local_428;
      param_3[1] = uStack_420;
      *(undefined4 *)(param_3 + 2) = local_418;
      puVar1 = (undefined8 *)((longlong)param_1 + lVar4 * 0x14 + 0x278);
      *puVar1 = local_428;
      puVar1[1] = uStack_420;
      *(undefined4 *)((longlong)param_1 + lVar4 * 0x14 + 0x288) = local_418;
    }
  }
  else {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar4 * 0x14 + 0x278);
    uVar2 = puVar1[1];
    *param_3 = *puVar1;
    param_3[1] = uVar2;
    *(undefined4 *)(param_3 + 2) = *(undefined4 *)((longlong)param_1 + lVar4 * 0x14 + 0x288);
  }
  return 0;
}


