// vtable slot 37 (thunk 0x180016a8b) -> FUN_18123aeb0 @ 0x18123aeb0  size=430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18123aeb0(longlong *param_1,longlong *param_2)

{
  longlong *_Buf1;
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auStack_498 [32];
  undefined4 local_478 [4];
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined4 local_428;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  ulonglong local_18;
  
  local_18 = DAT_183dc69c0 ^ (ulonglong)auStack_498;
  _Buf1 = param_1 + 0x54;
  local_428 = 0;
  local_468 = 0;
  uStack_460 = 0;
  local_458 = 0;
  uStack_450 = 0;
  local_448 = 0;
  uStack_440 = 0;
  local_438 = 0;
  uStack_430 = 0;
  iVar2 = memcmp(_Buf1,&local_468,0x44);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_1 + 0xd0))(param_1,0,&local_468);
    if (iVar2 == 0) {
      *(undefined2 *)_Buf1 = (undefined2)local_468;
      *(undefined2 *)((longlong)param_1 + 0x2a2) = local_468._2_2_;
      memset(&local_418,0,0x400);
      snprintf(&local_418,0x400,"%s/data/camparam/camparamLR/Q.bin","995b2f683da44aae");
      local_478[0] = 0;
      iVar2 = (**(code **)(*param_1 + 0xf8))(param_1,&local_418,local_478);
      if (iVar2 == 0) {
        *(undefined8 *)((longlong)param_1 + 0x2a4) = local_418;
        *(undefined8 *)((longlong)param_1 + 0x2ac) = uStack_410;
        *(undefined8 *)((longlong)param_1 + 0x2b4) = local_408;
        *(undefined8 *)((longlong)param_1 + 700) = uStack_400;
        *(undefined8 *)((longlong)param_1 + 0x2c4) = local_3f8;
        *(undefined8 *)((longlong)param_1 + 0x2cc) = uStack_3f0;
        *(undefined8 *)((longlong)param_1 + 0x2d4) = local_3e8;
        *(undefined8 *)((longlong)param_1 + 0x2dc) = uStack_3e0;
        goto LAB_18123b013;
      }
      pcVar4 = "[SDK ERROR] get Q Matrix failed\n";
    }
    else {
      pcVar4 = "[SDK ERROR] getIntrinsics failed\n";
    }
    thunk_FUN_18317f440(pcVar4);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    uVar3 = 1;
  }
  else {
LAB_18123b013:
    lVar1 = param_1[0x55];
    *param_2 = *_Buf1;
    param_2[1] = lVar1;
    lVar1 = param_1[0x57];
    param_2[2] = param_1[0x56];
    param_2[3] = lVar1;
    lVar1 = param_1[0x59];
    param_2[4] = param_1[0x58];
    param_2[5] = lVar1;
    lVar1 = param_1[0x5b];
    param_2[6] = param_1[0x5a];
    param_2[7] = lVar1;
    *(int *)(param_2 + 8) = (int)param_1[0x5c];
    uVar3 = 0;
  }
  return uVar3;
}


