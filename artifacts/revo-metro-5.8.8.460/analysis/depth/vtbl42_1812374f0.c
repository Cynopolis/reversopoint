// vtable slot 42 (thunk 0x18001a25d) -> FUN_1812374f0 @ 0x1812374f0  size=331

undefined8 FUN_1812374f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined1 local_res18 [16];
  
  pcVar5 = "E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp";
  pcVar4 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp";
  }
  else {
    pcVar4 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
    pcVar4 = pcVar4 + 1;
  }
  thunk_FUN_18317f440("[SDK ENTER] %s %s %d\r\n",pcVar4,"cs::Camera::getIMUCalibrationDate",0x1f69);
  cVar2 = thunk_FUN_18123e4e0(param_1);
  if (cVar2 == '\0') {
    return 8;
  }
  thunk_FUN_1831809d0(local_res18,param_1 + 0xc0);
  plVar1 = *(longlong **)(param_1 + 200);
  if (plVar1 == (longlong *)0x0) {
    thunk_FUN_18317f440("[SDK ERROR] getIMUCalibrationDate failed: camera device is nullptr\n");
    uVar6 = 3;
  }
  else {
    iVar3 = (**(code **)(*plVar1 + 0xb8))(plVar1,param_2);
    if (iVar3 == 0) {
      thunk_FUN_183180a80(local_res18);
      pcVar4 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
      if (pcVar4 != (char *)0x0) {
        pcVar5 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c)
        ;
        pcVar5 = pcVar5 + 1;
      }
      thunk_FUN_18317f440("[SDK LEAVE] %s %s %d\r\n",pcVar5,"cs::Camera::getIMUCalibrationDate",
                          0x1f85);
      return 0;
    }
    thunk_FUN_18317f440("[SDK ERROR] cameraDevice getIMUCalibrationDate failed : %d\r\n",iVar3);
    uVar6 = 1;
  }
  thunk_FUN_183180a80(local_res18);
  return uVar6;
}


