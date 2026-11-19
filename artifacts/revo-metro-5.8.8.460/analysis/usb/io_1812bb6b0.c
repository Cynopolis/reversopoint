/* 0x1812bb6b0 size=0x227
   CreateFileW
   CloseHandle
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1812bb6b0(undefined8 *param_1,LPCWSTR param_2,undefined4 param_3,ushort param_4)

{
  BOOL BVar1;
  HANDLE hDevice;
  LPCWSTR lpFileName;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1a8 [8];
  undefined8 *local_1a0 [2];
  LPCWSTR local_190;
  undefined8 ***local_188;
  undefined8 uStack_180;
  longlong local_178;
  ulonglong uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  ushort local_142;
  undefined4 local_140;
  short local_13a [129];
  ulonglong local_38;
  
  local_38 = DAT_183dc69c0 ^ (ulonglong)auStackY_1e8;
  lpFileName = param_2;
  if (7 < *(ulonglong *)(param_2 + 0xc)) {
    lpFileName = *(LPCWSTR *)param_2;
  }
  local_1a0[0] = param_1;
  local_190 = param_2;
  hDevice = CreateFileW(lpFileName,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hDevice != (HANDLE)0xffffffffffffffff) {
    local_1a0[0] = (undefined8 *)((ulonglong)local_1a0[0] & 0xffffffff00000000);
    memset(&local_148,0,0x10b);
    local_142 = param_4 | 0x300;
    local_140 = 0xff0409;
    local_148 = param_3;
    BVar1 = DeviceIoControl(hDevice,0x220410,&local_148,0x10b,&local_148,0x10b,(LPDWORD)local_1a0,
                            (LPOVERLAPPED)0x0);
    if (BVar1 != 0) {
      local_188 = (undefined8 ****)0x0;
      uStack_180 = 0;
      local_178 = 0;
      uStack_170 = 0;
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (local_13a[lVar5] != 0);
      thunk_FUN_1812b8710(&local_188,local_13a);
      ppppuVar2 = &local_188;
      if (7 < uStack_170) {
        ppppuVar2 = (undefined8 ****)local_188;
      }
      ppppuVar3 = &local_188;
      if (7 < uStack_170) {
        ppppuVar3 = (undefined8 ****)local_188;
      }
      thunk_FUN_1812b8360(&local_168,ppppuVar3,(longlong)ppppuVar2 + local_178 * 2,local_1a8);
      CloseHandle(hDevice);
      *param_1 = local_168;
      param_1[1] = uStack_160;
      *(undefined4 *)(param_1 + 2) = local_158;
      *(undefined4 *)((longlong)param_1 + 0x14) = uStack_154;
      *(undefined4 *)(param_1 + 3) = uStack_150;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_14c;
      if (7 < uStack_170) {
        uVar4 = uStack_170 * 2 + 2;
        ppppuVar2 = (undefined8 ****)local_188;
        if (0xfff < uVar4) {
          uVar4 = uStack_170 * 2 + 0x29;
          ppppuVar2 = (undefined8 ****)local_188[-1];
          if (0x1f < (ulonglong)((longlong)local_188 + (-8 - (longlong)ppppuVar2))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_18001e0e2(ppppuVar2,uVar4);
      }
      local_178 = _DAT_18324b560;
      uStack_170 = _UNK_18324b568;
      local_188 = (undefined8 ***)((ulonglong)local_188 & 0xffffffffffff0000);
      goto LAB_1812bb8a2;
    }
    CloseHandle(hDevice);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
LAB_1812bb8a2:
  thunk_FUN_1812bc4e0(param_2);
  return param_1;
}


