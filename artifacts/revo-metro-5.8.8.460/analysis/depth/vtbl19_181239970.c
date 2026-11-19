// vtable slot 19 (thunk 0x18002323b) -> FUN_181239970 @ 0x181239970  size=557

undefined8 FUN_181239970(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_48;
  undefined1 local_40 [8];
  longlong local_38;
  undefined1 local_30;
  
  cVar2 = thunk_FUN_18122f510();
  if (cVar2 == '\0') {
    thunk_FUN_18317f440("[SDK ERROR] Camera::getPairedFrame, Camera status was disconnect\r\n");
    uVar5 = 3;
  }
  else {
    *(undefined1 *)(param_1 + 0x128) = 1;
    lVar1 = param_1 + 0x138;
    local_30 = 0;
    local_38 = lVar1;
    iVar3 = _Mtx_lock(lVar1);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(5);
    }
    if (*(int *)(param_1 + 0x184) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0x184) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(6);
    }
    local_30 = 1;
    local_48 = (longlong)param_4;
    plVar6 = (longlong *)thunk_FUN_1811aefe0(local_40,&local_48);
    lVar7 = *(longlong *)(param_1 + 400);
    while (lVar7 == 0) {
      do {
        lVar7 = _Query_perf_frequency();
        lVar8 = _Query_perf_counter();
        if (lVar7 == 10000000) {
          lVar8 = lVar8 * 100;
        }
        else if (lVar7 == 24000000) {
          lVar7 = SUB168(SEXT816(-0x4d0b03f86b6f730d) * SEXT816(lVar8),8) + lVar8;
          lVar9 = (lVar7 >> 0x18) - (lVar7 >> 0x3f);
          lVar7 = (lVar8 + lVar9 * -24000000) * 1000000000;
          lVar7 = SUB168(SEXT816(-0x4d0b03f86b6f730d) * SEXT816(lVar7),8) + lVar7;
          lVar8 = ((lVar7 >> 0x18) - (lVar7 >> 0x3f)) + lVar9 * 1000000000;
        }
        else {
          lVar8 = ((lVar8 % lVar7) * 1000000000) / lVar7 + (lVar8 / lVar7) * 1000000000;
        }
        if (*plVar6 <= lVar8) {
          if (*(longlong *)(param_1 + 400) != 0) goto LAB_181239af5;
          thunk_FUN_18317f440("[SDK ERROR] getPairedFrame frame timeout(%d)\n",param_4);
          uVar5 = 7;
          goto LAB_181239b3b;
        }
        local_48 = *plVar6 - lVar8;
        uVar4 = thunk_FUN_1811adb20(&local_48);
        iVar3 = thunk_FUN_1831867a4(param_1 + 0xbf8,lVar1,uVar4);
      } while (iVar3 != 0);
      lVar7 = *(longlong *)(param_1 + 400);
    }
LAB_181239af5:
    thunk_FUN_1811ce270(param_2,**(longlong **)(param_1 + 0x188) + 0x10);
    thunk_FUN_1811d3200(param_1 + 0x188);
    thunk_FUN_1811ce270(param_3,**(longlong **)(param_1 + 0x188) + 0x10);
    thunk_FUN_1811d3200(param_1 + 0x188);
    uVar5 = 0;
LAB_181239b3b:
    _Mtx_unlock(lVar1);
  }
  return uVar5;
}


