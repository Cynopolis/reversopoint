// vtable slot 33 (thunk 0x180006c67) -> FUN_18123e020 @ 0x18123e020  size=255

undefined8 FUN_18123e020(longlong param_1,int param_2,undefined1 *param_3)

{
  char *pcVar1;
  longlong lVar2;
  char *pcVar3;
  undefined1 local_res8 [8];
  
  pcVar3 = "E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp";
  pcVar1 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
  if (pcVar1 != (char *)0x0) {
    pcVar3 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
    pcVar3 = pcVar3 + 1;
  }
  thunk_FUN_18317f440("[SDK ENTER] %s %s %d\r\n",pcVar3,"cs::Camera::isStreamSupport",0xdb1);
  thunk_FUN_1831809d0(local_res8,param_1 + 0xc0);
  if (*(longlong *)(param_1 + 200) == 0) {
    thunk_FUN_18317f440("[SDK ERROR] camera judge support stream failed cause device not connect\n")
    ;
    thunk_FUN_183180a80(local_res8);
    return 3;
  }
  thunk_FUN_183180a80(local_res8);
  if (param_2 != 0) {
    if (param_2 != 1) {
      *param_3 = 0;
      return 1;
    }
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(param_1 + 0x39 + lVar2) != '\0');
    if (((int)lVar2 < 1) || (*(char *)((longlong)(int)lVar2 + 0x38 + param_1) == '0')) {
      *param_3 = 0;
      return 0;
    }
  }
  *param_3 = 1;
  return 0;
}


