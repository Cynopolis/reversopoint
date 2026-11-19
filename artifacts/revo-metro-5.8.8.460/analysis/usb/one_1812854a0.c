/* 0x1812854a0 size=0x43 */


undefined4 FUN_1812854a0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  
  _Buf2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    _Buf2 = (undefined8 *)*param_2;
  }
  _Buf1 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    _Buf1 = (undefined8 *)*param_1;
  }
  if (param_1[2] == param_2[2]) {
    iVar1 = memcmp(_Buf1,_Buf2,param_1[2]);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


