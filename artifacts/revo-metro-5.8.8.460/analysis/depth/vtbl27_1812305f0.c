// vtable slot 27 (thunk 0x18001fd3e) -> FUN_1812305f0 @ 0x1812305f0  size=328

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1812305f0(longlong *param_1,longlong *param_2)

{
  longlong *_Buf1;
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_488 [32];
  undefined4 local_468 [2];
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  longlong local_428;
  longlong lStack_420;
  longlong local_418;
  longlong lStack_410;
  longlong local_408;
  longlong lStack_400;
  ulonglong local_28;
  
  local_28 = DAT_183dc69c0 ^ (ulonglong)auStack_488;
  _Buf1 = param_1 + 0x49;
  local_460 = 0;
  uStack_458 = 0;
  local_450 = 0;
  uStack_448 = 0;
  local_440 = 0;
  uStack_438 = 0;
  iVar2 = memcmp(_Buf1,&local_460,0x30);
  if (iVar2 == 0) {
    memset(&local_428,0,0x400);
    snprintf(&local_428,0x400,"%s/data/camparam/LC_RT.bin","995b2f683da44aae");
    local_468[0] = 0;
    uVar3 = (**(code **)(*param_1 + 0xf8))(param_1,&local_428,local_468);
    if ((int)uVar3 == 0) {
      *param_2 = local_428;
      param_2[1] = lStack_420;
      param_2[2] = local_418;
      param_2[3] = lStack_410;
      param_2[4] = local_408;
      param_2[5] = lStack_400;
      *_Buf1 = local_428;
      param_1[0x4a] = lStack_420;
      param_1[0x4b] = local_418;
      param_1[0x4c] = lStack_410;
      param_1[0x4d] = local_408;
      param_1[0x4e] = lStack_400;
    }
    else {
      thunk_FUN_18317f440("[SDK ERROR] get extrinsics failed,memset 0\n");
      *param_2 = 0x3f800000;
      uVar3 = 1;
      param_2[1] = 0;
      param_2[2] = 0x3f800000;
      param_2[3] = 0;
      param_2[4] = 0x3f800000;
      param_2[5] = 0;
    }
  }
  else {
    lVar1 = param_1[0x4a];
    uVar3 = 0;
    *param_2 = *_Buf1;
    param_2[1] = lVar1;
    lVar1 = param_1[0x4c];
    param_2[2] = param_1[0x4b];
    param_2[3] = lVar1;
    lVar1 = param_1[0x4e];
    param_2[4] = param_1[0x4d];
    param_2[5] = lVar1;
  }
  return uVar3;
}


