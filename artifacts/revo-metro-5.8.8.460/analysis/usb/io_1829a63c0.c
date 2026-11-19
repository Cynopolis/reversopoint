/* 0x1829a63c0 size=0x309
   WaitForSingleObject
   SetEvent
*/


void FUN_1829a63c0(longlong param_1)

{
  char cVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 *in_stack_ffffffffffffffb8;
  
  if (*(longlong *)(param_1 + -0x48) == 0) {
    lVar6 = thunk_FUN_183196718(0x8d618);
    lVar4 = 0;
    if (lVar6 != 0) {
      thunk_FUN_182d65f80(lVar6);
      lVar4 = lVar6;
    }
    *(longlong *)(param_1 + 0x558) = lVar4;
    thunk_FUN_182d5f650(lVar4,*(undefined8 *)(param_1 + 0x540),
                        *(longlong *)(param_1 + 0x538) + 0x12c48);
    thunk_FUN_182d71b20(*(undefined8 *)(param_1 + 0x558),0);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    thunk_FUN_182d476a0();
    if (*(int *)(param_1 + -0x38) == 0) {
      uVar9 = *(uint *)(*(longlong *)(param_1 + -0x48) + 0xc);
      if (*(int *)(*(longlong *)(param_1 + 0x540) + 0x10) == 0) {
        uVar9 = uVar9 + *(int *)(*(longlong *)(param_1 + -0x48) + 8);
      }
      uVar10 = (ulonglong)uVar9;
      uVar11 = (ulonglong)(int)uVar9;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar11;
      uVar3 = SUB168(ZEXT816(0x8d618) * auVar2,0);
      if (SUB168(ZEXT816(0x8d618) * auVar2,8) != 0) {
        uVar3 = 0xffffffffffffffff;
      }
      lVar4 = uVar3 + 8;
      if (0xfffffffffffffff7 < uVar3) {
        lVar4 = -1;
      }
      puVar5 = (ulonglong *)thunk_FUN_183196718(lVar4);
      puVar7 = (ulonglong *)0x0;
      puVar8 = puVar7;
      if (puVar5 != (ulonglong *)0x0) {
        *puVar5 = uVar11;
        in_stack_ffffffffffffffb8 = &LAB_18001e39e;
        _eh_vector_constructor_iterator_
                  (puVar5 + 1,0x8d618,uVar11,(_func_void_void_ptr *)&LAB_180027444,
                   (_func_void_void_ptr *)&LAB_18001e39e);
        puVar8 = puVar5 + 1;
      }
      *(ulonglong **)(param_1 + 0x558) = puVar8;
      puVar8 = puVar7;
      if (0 < (int)uVar9) {
        do {
          thunk_FUN_182d5f650(*(longlong *)(param_1 + 0x558) + (longlong)puVar8,
                              *(undefined8 *)(param_1 + 0x540),
                              *(longlong *)(param_1 + 0x538) + 0x12c48);
          thunk_FUN_182d71b20((longlong)puVar8 + *(longlong *)(param_1 + 0x558));
          uVar10 = uVar10 - 1;
          puVar8 = puVar8 + 0x11ac3;
        } while (uVar10 != 0);
      }
      puVar8 = puVar7;
      if (0 < *(int *)(*(longlong *)(param_1 + -0x48) + 8)) {
        do {
          lVar4 = *(longlong *)
                   ((longlong)puVar7 + *(longlong *)(*(longlong *)(param_1 + -0x48) + 0x20));
          if (*(char *)(lVar4 + 0x21) != '\0') {
            in_stack_ffffffffffffffb8 =
                 (undefined1 *)((ulonglong)in_stack_ffffffffffffffb8 & 0xffffffff00000000);
            lVar4 = __RTDynamicCast(lVar4,0,&x265::JobProvider::RTTI_Type_Descriptor,
                                    &x265::FrameEncoder::RTTI_Type_Descriptor,
                                    in_stack_ffffffffffffffb8);
            *(undefined8 *)(lVar4 + 0x5a8) = *(undefined8 *)(param_1 + 0x558);
          }
          uVar9 = (int)puVar8 + 1;
          puVar7 = puVar7 + 1;
          puVar8 = (ulonglong *)(ulonglong)uVar9;
        } while ((int)uVar9 < *(int *)(*(longlong *)(param_1 + -0x48) + 8));
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
    thunk_FUN_18299e8c0(param_1 + -0x50);
    SetEvent(*(HANDLE *)(param_1 + 0x18));
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),0xffffffff);
    cVar1 = *(char *)(param_1 + 0x2d);
  }
  return;
}


