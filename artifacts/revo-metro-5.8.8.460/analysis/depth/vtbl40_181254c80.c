// vtable slot 40 (thunk 0x18000501f) -> FUN_181254c80 @ 0x181254c80  size=305

undefined8 FUN_181254c80(longlong param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 local_res10 [24];
  
  pcVar4 = "E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp";
  pcVar3 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp";
  }
  else {
    pcVar3 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
    pcVar3 = pcVar3 + 1;
  }
  thunk_FUN_18317f440("[SDK ENTER] %s %s %d\r\n",pcVar3,"cs::Camera::stopIMUCalibration",0x1f12);
  cVar1 = thunk_FUN_18123e4e0(param_1);
  if (cVar1 == '\0') {
    return 8;
  }
  thunk_FUN_1831809d0(local_res10,param_1 + 0xc0);
  if (*(longlong **)(param_1 + 200) == (longlong *)0x0) {
    thunk_FUN_18317f440("[SDK ERROR] stopIMUCalibration failed: camera device is nullptr\n");
    uVar5 = 3;
  }
  else {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 200) + 0xa8))();
    if (iVar2 == 0) {
      thunk_FUN_183180a80(local_res10);
      pcVar3 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
      if (pcVar3 != (char *)0x0) {
        pcVar4 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c)
        ;
        pcVar4 = pcVar4 + 1;
      }
      thunk_FUN_18317f440("[SDK LEAVE] %s %s %d\r\n",pcVar4,"cs::Camera::stopIMUCalibration",0x1f2e)
      ;
      return 0;
    }
    thunk_FUN_18317f440("[SDK ERROR] cameraDevice stopIMUCalibration failed : %d\r\n",iVar2);
    uVar5 = 1;
  }
  thunk_FUN_183180a80(local_res10);
  return uVar5;
}


