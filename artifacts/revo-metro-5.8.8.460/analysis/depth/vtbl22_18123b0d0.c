// vtable slot 22 (thunk 0x18002606c) -> FUN_18123b0d0 @ 0x18123b0d0  size=537

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_18123b0d0(longlong param_1,int param_2,int param_3,float *param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 auStack_c8 [32];
  double local_a8;
  undefined4 local_98 [2];
  undefined1 local_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_183dc69c0 ^ (ulonglong)auStack_c8;
  if (*(char *)((longlong)param_2 + 0x378 + param_1) == '\0') {
    pcVar5 = "Depth";
    if (param_2 == 1) {
      pcVar5 = "RGB";
    }
    thunk_FUN_18317f440("[SDK ERROR] [%s] getProperty (%s), Type=%d failed, stream not started\r\n",
                        param_1 + 0x39,pcVar5,param_3);
    return 5;
  }
  pcVar5 = "Depth";
  pcVar6 = "Depth";
  if (param_2 == 1) {
    pcVar6 = "RGB";
  }
  thunk_FUN_18317f440("[SDK TRACE] [%s] getProperty (%s), Type=%d\r\n",param_1 + 0x39,pcVar6,param_3
                     );
  cVar2 = thunk_FUN_18122f510(param_1);
  if (cVar2 == '\0') {
    thunk_FUN_18317f440("[SDK ERROR] Camera::getProperty, Camera status was disconnect\r\n");
    return 3;
  }
  thunk_FUN_1831809d0(local_90,param_1 + 0xc0);
  plVar1 = *(longlong **)(param_1 + 200);
  if (plVar1 == (longlong *)0x0) {
    thunk_FUN_18317f440("[SDK ERROR] get property failed: camera device is nullptr\n");
    iVar4 = 3;
  }
  else {
    if (param_3 == 2) {
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 0;
      iVar4 = 0;
      local_98[0] = 0;
      iVar3 = (**(code **)(*plVar1 + 0x58))(plVar1,0x910,&local_88,local_98);
      if (iVar3 == 0) {
        *param_4 = (float)(int)local_88;
        goto LAB_18123b2bb;
      }
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 200) + 0x40))
                      (*(longlong **)(param_1 + 200),param_2,param_3,param_4);
    if (param_3 == 0) {
      if (((param_2 == 0) &&
          (iVar3 = (**(code **)(**(longlong **)(param_1 + 200) + 0x108))(), iVar3 == 0)) &&
         (cVar2 = thunk_FUN_1812650c0(param_1 + 0x39), cVar2 != '\0')) {
        thunk_FUN_18317f440("[SDK TRACE] retrun trip depth gain\r\n");
      }
      else if (DAT_1832221b8 <= *param_4) {
        if (DAT_183239480 < *param_4) {
          *param_4 = 15.0;
        }
      }
      else {
        *param_4 = 1.0;
      }
    }
    if (iVar4 == 0) {
      local_a8 = (double)*param_4;
      pcVar6 = "[SDK TRACE] [%s] getProperty (%s), Type=%d success, value = %f\r\n";
    }
    else {
      local_a8 = (double)CONCAT44(local_a8._4_4_,iVar4);
      pcVar6 = "[SDK ERROR] [%s] getProperty (%s), Type=%d failed(%d)\r\n";
    }
    if (param_2 == 1) {
      pcVar5 = "RGB";
    }
    thunk_FUN_18317f440(pcVar6,param_1 + 0x39,pcVar5,param_3);
  }
LAB_18123b2bb:
  thunk_FUN_183180a80(local_90);
  return iVar4;
}


