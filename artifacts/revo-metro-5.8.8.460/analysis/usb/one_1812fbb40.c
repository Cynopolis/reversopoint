/* 0x1812fbb40 size=0x183 */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1812fbb40(longlong param_1,int param_2,longlong param_3,int param_4,int param_5,int param_6)

{
  char *pcVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_183dc69c0 ^ (ulonglong)auStack_c8;
  lVar6 = (longlong)param_2;
  lVar5 = (longlong)param_5;
  puVar2 = (undefined8 *)(param_3 + 1 + lVar5);
  local_a8 = *puVar2;
  uStack_a0 = puVar2[1];
  local_48 = *(undefined4 *)(param_3 + 0x61 + lVar5);
  param_3 = param_3 + lVar5;
  local_98 = *(undefined8 *)(param_3 + 0x11);
  uStack_90 = *(undefined8 *)(param_3 + 0x19);
  pcVar1 = (char *)(param_3 + 0x65);
  local_88 = *(undefined8 *)(param_3 + 0x21);
  uStack_80 = *(undefined8 *)(param_3 + 0x29);
  local_78 = *(undefined8 *)(param_3 + 0x31);
  uStack_70 = *(undefined8 *)(param_3 + 0x39);
  local_68 = *(undefined4 *)(param_3 + 0x41);
  uStack_64 = *(undefined4 *)(param_3 + 0x45);
  uStack_60 = *(undefined4 *)(param_3 + 0x49);
  uStack_5c = *(undefined4 *)(param_3 + 0x4d);
  local_58 = *(undefined4 *)(param_3 + 0x51);
  uStack_54 = *(undefined4 *)(param_3 + 0x55);
  uStack_50 = *(undefined4 *)(param_3 + 0x59);
  uStack_4c = *(undefined4 *)(param_3 + 0x5d);
  if (param_6 + 0x65 + param_5 == param_4) {
    if (((param_6 < 3) || (*pcVar1 != -1)) || (*(char *)(param_3 + 0x66) != -0x28)) {
      thunk_FUN_18317f440("%s--Invalid JPEG data for CPAIR decode, size=%d\n",
                          "cs::CameraDeviceRpcClient::processDepthMjpgToCpair",param_6);
      uVar4 = 0;
    }
    else {
      cVar3 = thunk_FUN_181293fd0(param_1 + 0x168 + lVar6 * 8,0);
      if (cVar3 == '\0') {
        cVar3 = thunk_FUN_1812f41c0(param_1 + 0x178 + lVar6 * 8,0);
        if (cVar3 == '\0') {
          thunk_FUN_18317f440("%s--CPAIR decoder not initialized for streamType:%d\n",
                              "cs::CameraDeviceRpcClient::processDepthMjpgToCpair",param_2);
          return 0;
        }
        thunk_FUN_181356c10(*(undefined8 *)(param_1 + 0x178 + lVar6 * 8),pcVar1,param_6,&local_a8);
      }
      else {
        thunk_FUN_18134ebf0(*(undefined8 *)(param_1 + 0x168 + lVar6 * 8),pcVar1,param_6,&local_a8);
      }
      uVar4 = 1;
    }
  }
  else {
    thunk_FUN_18317f440("%s--Data packet format error: expectedLen=%d, actualLen=%d\n",
                        "cs::CameraDeviceRpcClient::processDepthMjpgToCpair");
    uVar4 = 0;
  }
  return uVar4;
}


