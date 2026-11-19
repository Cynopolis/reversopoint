// vtable slot 16 (thunk 0x180003102) -> FUN_181251400 @ 0x181251400  size=196

undefined8 FUN_181251400(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  pcVar2 = "E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp";
  pcVar1 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
    pcVar2 = pcVar2 + 1;
  }
  thunk_FUN_18317f440("[SDK ENTER] %s %s %d\r\n",pcVar2,"cs::Camera::setStreamCallback",0x4f2);
  thunk_FUN_1831809d0(local_res8,param_1 + 0xc0);
  if (*(longlong *)(param_1 + 200) == 0) {
    thunk_FUN_18317f440("[SDK ERROR] setStreamCallback: camera device is nullptr\n");
    uVar3 = 3;
  }
  else {
    *(undefined8 *)(param_1 + 0x318 + (longlong)param_2 * 8) = param_3;
    *(undefined8 *)(param_1 + 0x328 + (longlong)param_2 * 8) = param_4;
    uVar3 = 0;
  }
  thunk_FUN_183180a80(local_res8);
  return uVar3;
}


