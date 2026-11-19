// vtable slot 12 (thunk 0x18001229c) -> FUN_181255440 @ 0x181255440  size=212

undefined8 FUN_181255440(longlong *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = "E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp";
  pcVar1 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp";
  }
  else {
    pcVar1 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
    pcVar1 = pcVar1 + 1;
  }
  thunk_FUN_18317f440("[SDK ENTER] %s %s %d\r\n",pcVar1,"cs::Camera::stopStream",0x432);
  if ((char)param_1[0x179] != '\0') {
    *(undefined1 *)(param_1 + 0x179) = 0;
    (**(code **)(*param_1 + 0x68))(param_1,0);
    (**(code **)(*param_1 + 0x68))(param_1,1);
    thunk_FUN_18122cc30(param_1);
  }
  pcVar1 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
    pcVar2 = pcVar2 + 1;
  }
  thunk_FUN_18317f440("[SDK LEAVE] %s %s %d\r\n",pcVar2,"cs::Camera::stopStream",0x43f);
  return 0;
}


