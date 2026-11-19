// vtable slot 39 (thunk 0x18001eb37) -> FUN_181237690 @ 0x181237690  size=320

undefined8 FUN_181237690(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 local_res20 [8];
  
  pcVar6 = "E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp";
  pcVar4 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp";
  }
  else {
    pcVar4 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
    pcVar4 = pcVar4 + 1;
  }
  thunk_FUN_18317f440("[SDK ENTER] %s %s %d\r\n",pcVar4,"cs::Camera::getIMUCalibrationState",0x1ee7)
  ;
  cVar2 = thunk_FUN_18123e4e0(param_1);
  if (cVar2 == '\0') {
    uVar5 = 8;
  }
  else {
    thunk_FUN_1831809d0(local_res20,param_1 + 0xc0);
    plVar1 = *(longlong **)(param_1 + 200);
    if (plVar1 == (longlong *)0x0) {
      thunk_FUN_18317f440("[SDK ERROR] getIMUCalibrationState failed: camera device is nullptr\n");
      uVar5 = 3;
    }
    else {
      iVar3 = (**(code **)(*plVar1 + 0xa0))(plVar1,param_2,param_3);
      if (iVar3 == 0) {
        thunk_FUN_183180a80(local_res20);
        pcVar4 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c)
        ;
        if (pcVar4 != (char *)0x0) {
          pcVar6 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",
                           0x5c);
          pcVar6 = pcVar6 + 1;
        }
        thunk_FUN_18317f440("[SDK LEAVE] %s %s %d\r\n",pcVar6,"cs::Camera::getIMUCalibrationState",
                            0x1f03);
        return 0;
      }
      thunk_FUN_18317f440("[SDK ERROR] cameraDevice getIMUCalibrationState failed : %d\r\n",iVar3);
      uVar5 = 1;
    }
    thunk_FUN_183180a80(local_res20);
  }
  return uVar5;
}


