// vtable slot 26 (thunk 0x180024ac8) -> FUN_181237900 @ 0x181237900  size=335

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_181237900(longlong *param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auStack_458 [32];
  undefined4 local_438 [4];
  longlong local_428;
  longlong lStack_420;
  longlong local_418;
  longlong lStack_410;
  longlong local_408;
  ulonglong local_28;
  
  local_28 = DAT_183dc69c0 ^ (ulonglong)auStack_458;
  if (((short)param_1[(longlong)param_2 * 5 + 0x3f] == 0) ||
     (*(short *)((longlong)param_1 + (longlong)param_2 * 0x28 + 0x1fa) == 0)) {
    memset(&local_428,0,0x400);
    pcVar3 = "%s/data/camparam/Pl.bin";
    if (param_2 != 0) {
      pcVar3 = "%s/data/camparam/Prgb.bin";
    }
    snprintf(&local_428,0x400,pcVar3,"995b2f683da44aae");
    local_438[0] = 0;
    uVar2 = (**(code **)(*param_1 + 0xf8))(param_1,&local_428,local_438);
    if ((int)uVar2 == 0) {
      *param_3 = local_428;
      param_3[1] = lStack_420;
      param_3[2] = local_418;
      param_3[3] = lStack_410;
      param_3[4] = local_408;
      param_1[(longlong)param_2 * 5 + 0x3f] = local_428;
      param_1[(longlong)param_2 * 5 + 0x40] = lStack_420;
      param_1[(longlong)param_2 * 5 + 0x41] = local_418;
      param_1[(longlong)param_2 * 5 + 0x42] = lStack_410;
      param_1[(longlong)param_2 * 5 + 0x43] = local_408;
    }
    else {
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0;
      thunk_FUN_18317f440("[SDK ERROR] not support getIntrinsics\n");
      uVar2 = 8;
    }
  }
  else {
    lVar1 = param_1[(longlong)param_2 * 5 + 0x40];
    uVar2 = 0;
    *param_3 = param_1[(longlong)param_2 * 5 + 0x3f];
    param_3[1] = lVar1;
    lVar1 = param_1[(longlong)param_2 * 5 + 0x42];
    param_3[2] = param_1[(longlong)param_2 * 5 + 0x41];
    param_3[3] = lVar1;
    param_3[4] = param_1[(longlong)param_2 * 5 + 0x43];
  }
  return uVar2;
}


