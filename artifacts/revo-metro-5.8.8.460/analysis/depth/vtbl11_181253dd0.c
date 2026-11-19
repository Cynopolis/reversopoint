// vtable slot 11 (thunk 0x18001b054) -> FUN_181253dd0 @ 0x181253dd0  size=270

undefined8
FUN_181253dd0(longlong *param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4,
             longlong param_5,undefined4 param_6)

{
  char *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pcVar3 = "E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp";
  pcVar1 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
  if (pcVar1 != (char *)0x0) {
    pcVar3 = strrchr("E:\\0 work\\temp\\SDK3.2.444\\trunk\\src\\csInterface\\csCamera.cpp",0x5c);
    pcVar3 = pcVar3 + 1;
  }
  thunk_FUN_18317f440("[SDK ENTER] %s %s %d\r\n",pcVar3,"cs::Camera::startStream",0x269);
  (**(code **)(*param_1 + 0x60))(param_1);
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  param_1[0x17b] = param_5;
  param_1[0x17a] = param_4;
  uVar2 = (**(code **)(*param_1 + 0x38))(param_1,0,&local_18,param_6);
  if ((int)uVar2 == 0) {
    local_18 = *param_3;
    uStack_14 = param_3[1];
    uStack_10 = param_3[2];
    uStack_c = param_3[3];
    uVar2 = (**(code **)(*param_1 + 0x38))(param_1,1,&local_18,param_6);
    if ((int)uVar2 == 0) {
      *(char *)((longlong)param_1 + 0x131) = (char)uVar2;
      *(undefined8 *)((longlong)param_1 + 0x129) = uVar2;
      *(undefined1 *)(param_1 + 0x25) = 1;
      thunk_FUN_181253c30(param_1);
      uVar2 = 0;
      *(undefined1 *)(param_1 + 0x179) = 1;
    }
  }
  return uVar2;
}


