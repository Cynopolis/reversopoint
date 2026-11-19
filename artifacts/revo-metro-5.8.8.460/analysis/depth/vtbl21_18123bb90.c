// vtable slot 21 (thunk 0x180017f44) -> FUN_18123bb90 @ 0x18123bb90  size=517

int FUN_18123bb90(longlong param_1,int param_2,int param_3,float *param_4,float *param_5,
                 undefined4 *param_6)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  CameraType CVar4;
  char *pcVar5;
  undefined1 local_res8 [8];
  
  thunk_FUN_18317f440("[SDK TRACE] [%s] - %d getPropertyRange type = %d\r\n",param_1 + 0x39,param_2,
                      param_3);
  if (param_2 == 0) {
    if (param_3 == 1) {
      iVar3 = thunk_FUN_1812640e0(*(undefined4 *)(param_1 + 0x108),param_4,param_5,param_6);
      CVar4 = cs::getCameraTypeBySN((char *)(param_1 + 0x39));
      if (iVar3 != 0) {
        return iVar3;
      }
      if (*(int *)(param_1 + 0x108) != 4) {
        return 0;
      }
      if (0x24 < CVar4) {
        return 0;
      }
      if ((0x145a000000U >> ((ulonglong)CVar4 & 0x3f) & 1) == 0) {
        return 0;
      }
      *param_4 = 50.0;
      return 0;
    }
  }
  else if ((param_2 == 1) && (param_3 == 0)) {
    *param_4 = 1.0;
    *param_5 = 15.0;
    *param_6 = 0x3f800000;
    return 0;
  }
  cVar2 = thunk_FUN_18122f510(param_1);
  if (cVar2 == '\0') {
    thunk_FUN_18317f440("[SDK ERROR] Camera::getPropertyRange, Camera status was disconnect\r\n");
    iVar3 = 3;
  }
  else {
    thunk_FUN_1831809d0(local_res8,param_1 + 0xc0);
    plVar1 = *(longlong **)(param_1 + 200);
    if (plVar1 == (longlong *)0x0) {
      thunk_FUN_18317f440("[SDK ERROR] get property range failed: camera device is nullptr\n");
      iVar3 = 3;
    }
    else {
      iVar3 = (**(code **)(*plVar1 + 0x38))(plVar1,param_2,param_3,param_4,param_5,param_6);
      if (iVar3 == 0) {
        if ((param_2 == 0) && (param_3 == 0)) {
          thunk_FUN_181245a80(param_1,param_4,param_5,param_6);
        }
        pcVar5 = "RGB";
        if (param_2 == 0) {
          pcVar5 = "Depth";
        }
        thunk_FUN_18317f440("[SDK TRACE] get [%s] property Range (%d) : min = %f, max = %f\r\n",
                            pcVar5,param_3,(double)*param_4,(double)*param_5);
      }
      else {
        pcVar5 = "RGB";
        if (param_2 == 0) {
          pcVar5 = "Depth";
        }
        thunk_FUN_18317f440("[SDK ERROR] get [%s] property Range (%d) failed(%d)\r\n",pcVar5,param_3
                            ,iVar3);
      }
    }
    thunk_FUN_183180a80(local_res8);
  }
  return iVar3;
}


