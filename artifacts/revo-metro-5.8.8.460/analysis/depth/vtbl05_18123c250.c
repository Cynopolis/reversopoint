// vtable slot 5 (thunk 0x18000d689) -> FUN_18123c250 @ 0x18123c250  size=539

int FUN_18123c250(longlong param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  char cVar8;
  int iVar9;
  char *pcVar10;
  undefined8 uVar11;
  char *pcVar12;
  int *piVar13;
  undefined1 local_res20 [8];
  
  pcVar12 = "E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp";
  pcVar10 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
  if (pcVar10 != (char *)0x0) {
    pcVar12 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
    pcVar12 = pcVar12 + 1;
  }
  thunk_FUN_18317f440("[SDK ENTER] %s %s %d\r\n",pcVar12,"cs::Camera::getStreamInfos",0x206);
  cVar8 = thunk_FUN_18122f510(param_1);
  if (cVar8 == '\0') {
    thunk_FUN_18317f440("[SDK ERROR] Camera was disconnect\r\n");
    iVar9 = 3;
  }
  else {
    thunk_FUN_1831809d0(local_res20,param_1 + 0xc0);
    plVar2 = *(longlong **)(param_1 + 200);
    if (plVar2 == (longlong *)0x0) {
      thunk_FUN_18317f440("[SDK ERROR] get stream infos failed: camera device is nullptr\n");
      iVar9 = 3;
    }
    else {
      iVar9 = (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_3);
      if (iVar9 == 0) {
        if (param_2 == 0) {
          uVar1 = *(uint *)(param_1 + 0xbc);
          if ((uVar1 < 0x25) && ((0x17fec00000U >> ((longlong)(int)uVar1 & 0x3fU) & 1) != 0)) {
            thunk_FUN_181261980((longlong)(int)uVar1,param_3);
          }
          if (*(int *)(param_1 + 0xbc) == 0x1d) {
            piVar3 = (int *)param_3[1];
            piVar13 = (int *)*param_3;
            if (piVar13 != piVar3) {
              do {
                if ((*piVar13 - 2U < 2) || (*piVar13 == 0x109)) break;
                piVar13 = piVar13 + 4;
              } while (piVar13 != piVar3);
              piVar7 = piVar13;
              if (piVar13 != piVar3) {
                while (piVar7 = piVar7 + 4, piVar7 != piVar3) {
                  if ((1 < *piVar7 - 2U) && (*piVar7 != 0x109)) {
                    iVar9 = piVar7[1];
                    iVar4 = piVar7[2];
                    iVar5 = piVar7[3];
                    *piVar13 = *piVar7;
                    piVar13[1] = iVar9;
                    piVar13[2] = iVar4;
                    piVar13[3] = iVar5;
                    piVar13 = piVar13 + 4;
                  }
                }
                if (piVar13 != piVar3) {
                  uVar11 = thunk_FUN_1811f0a20(piVar3,param_3[1]);
                  param_3[1] = uVar11;
                }
              }
            }
          }
          if (((*(int *)(param_1 + 0xbc) - 0xdU & 0xfffffffd) == 0) ||
             ((*(int *)(param_1 + 0xbc) == 1 && ((byte)(*(char *)(param_1 + 0x48) - 0x33U) < 2)))) {
            piVar3 = (int *)param_3[1];
            piVar13 = (int *)*param_3;
            if (piVar13 != piVar3) {
              do {
                if (*piVar13 == 3) break;
                piVar13 = piVar13 + 4;
              } while (piVar13 != piVar3);
              piVar7 = piVar13;
              if (piVar13 != piVar3) {
                while (piVar6 = piVar7, piVar7 = piVar6 + 4, piVar7 != piVar3) {
                  if (*piVar7 != 3) {
                    iVar9 = piVar6[5];
                    iVar4 = piVar6[6];
                    iVar5 = piVar6[7];
                    *piVar13 = *piVar7;
                    piVar13[1] = iVar9;
                    piVar13[2] = iVar4;
                    piVar13[3] = iVar5;
                    piVar13 = piVar13 + 4;
                  }
                }
                if (piVar13 != piVar3) {
                  uVar11 = thunk_FUN_1811f0a20(piVar3,param_3[1]);
                  param_3[1] = uVar11;
                }
              }
            }
          }
        }
        thunk_FUN_181268530(param_2,param_3);
        iVar9 = 0;
      }
    }
    thunk_FUN_183180a80(local_res20);
  }
  return iVar9;
}


