/* 0x182dcc120 size=0x30c
   WaitForSingleObject
   SetEvent
*/


void FUN_182dcc120(longlong param_1)

{
  char cVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  
  if (*(longlong *)(param_1 + -0x48) == 0) {
    lVar6 = thunk_FUN_183196718(0x8dde0);
    lVar4 = 0;
    if (lVar6 != 0) {
      thunk_FUN_183031b70(lVar6);
      lVar4 = lVar6;
    }
    *(longlong *)(param_1 + 0x558) = lVar4;
    thunk_FUN_18302b150(lVar4,*(undefined8 *)(param_1 + 0x540),
                        *(longlong *)(param_1 + 0x538) + 0x12c48);
    thunk_FUN_18303d750(*(undefined8 *)(param_1 + 0x558),0);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    thunk_FUN_183012ad0();
    if (*(int *)(param_1 + -0x38) == 0) {
      uVar10 = *(uint *)(*(longlong *)(param_1 + -0x48) + 0xc);
      if (*(int *)(*(longlong *)(param_1 + 0x540) + 0x10) == 0) {
        uVar10 = uVar10 + *(int *)(*(longlong *)(param_1 + -0x48) + 8);
      }
      uVar9 = (ulonglong)(int)uVar10;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar9;
      uVar3 = SUB168(ZEXT816(0x8dde0) * auVar2,0);
      if (SUB168(ZEXT816(0x8dde0) * auVar2,8) != 0) {
        uVar3 = 0xffffffffffffffff;
      }
      lVar4 = uVar3 + 8;
      if (0xfffffffffffffff7 < uVar3) {
        lVar4 = -1;
      }
      puVar5 = (ulonglong *)thunk_FUN_183196718(lVar4);
      uVar3 = 0;
      if (puVar5 == (ulonglong *)0x0) {
        puVar5 = (ulonglong *)0x0;
      }
      else {
        *puVar5 = uVar9;
        puVar5 = puVar5 + 1;
        puVar7 = puVar5;
        if (uVar10 != 0) {
          do {
            thunk_FUN_183031b70(puVar7);
            puVar7 = puVar7 + 0x11bbc;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
      *(ulonglong **)(param_1 + 0x558) = puVar5;
      if (0 < (int)uVar10) {
        uVar8 = (ulonglong)uVar10;
        uVar9 = uVar3;
        do {
          thunk_FUN_18302b150(*(longlong *)(param_1 + 0x558) + uVar9,
                              *(undefined8 *)(param_1 + 0x540),
                              *(longlong *)(param_1 + 0x538) + 0x12c48);
          thunk_FUN_18303d750(uVar9 + *(longlong *)(param_1 + 0x558));
          uVar9 = uVar9 + 0x8dde0;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      uVar9 = uVar3;
      if (0 < *(int *)(*(longlong *)(param_1 + -0x48) + 8)) {
        do {
          lVar4 = *(longlong *)(uVar3 + *(longlong *)(*(longlong *)(param_1 + -0x48) + 0x20));
          if (*(char *)(lVar4 + 0x21) != '\0') {
            lVar4 = __RTDynamicCast(lVar4,0,&x265_12bit::JobProvider::RTTI_Type_Descriptor,
                                    &x265_12bit::FrameEncoder::RTTI_Type_Descriptor,0);
            *(undefined8 *)(lVar4 + 0x5a8) = *(undefined8 *)(param_1 + 0x558);
          }
          uVar10 = (int)uVar9 + 1;
          uVar3 = uVar3 + 8;
          uVar9 = (ulonglong)uVar10;
        } while ((int)uVar10 < *(int *)(*(longlong *)(param_1 + -0x48) + 8));
      }
    }
    if (*(int *)(*(longlong *)(param_1 + 0x540) + 0x10) == 0) {
      *(int *)(param_1 + 0x28) =
           *(int *)(*(longlong *)(param_1 + -0x48) + 0xc) + *(int *)(param_1 + -0x38);
    }
    else {
      *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    }
  }
  SetEvent(*(HANDLE *)(param_1 + 0x18));
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),0xffffffff);
  cVar1 = *(char *)(param_1 + 0x2d);
  while (cVar1 != '\0') {
    if (*(int *)(*(longlong *)(param_1 + 0x540) + 0x30c) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x548) + 0x4fa8);
      while (lVar4 == 0) {
        WaitForSingleObject(*(HANDLE *)(*(longlong *)(param_1 + 0x548) + 0x4fb0),0xffffffff);
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x548) + 0x4fa8);
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x540);
    if ((((*(int *)(lVar4 + 0x360) == 1) && (*(longlong *)(lVar4 + 0x370) == 0)) &&
        (*(longlong *)(lVar4 + 0x378) == 0)) &&
       (1 < *(int *)(*(longlong *)(param_1 + 0x548) + 0xf4) - 1U)) {
      while (((lVar4 = *(longlong *)(param_1 + 0x548), *(longlong *)(lVar4 + 0x4328) == 0 &&
              (*(longlong *)(lVar4 + 0x4330) == 0)) ||
             (*(int *)(lVar4 + 0x18) != *(int *)(lVar4 + 0x4304)))) {
        WaitForSingleObject(*(HANDLE *)(lVar4 + 0x4fa0),0xffffffff);
      }
    }
    thunk_FUN_182dc42f0(param_1 + -0x50);
    SetEvent(*(HANDLE *)(param_1 + 0x18));
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),0xffffffff);
    cVar1 = *(char *)(param_1 + 0x2d);
  }
  return;
}


