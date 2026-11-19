// vtable slot 17 (thunk 0x180007f31) -> FUN_1812361d0 @ 0x1812361d0  size=642

undefined8 FUN_1812361d0(longlong param_1,int param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  char *pcVar12;
  longlong local_58;
  undefined1 local_50 [8];
  longlong local_48;
  undefined1 local_40;
  
  lVar9 = (longlong)param_2;
  cVar1 = thunk_FUN_18122f510();
  if (cVar1 == '\0') {
    uVar4 = 3;
  }
  else {
    *(undefined1 *)(param_1 + 0x128) = 0;
    pcVar12 = "RGB";
    if (param_2 == 0) {
      pcVar12 = "Depth";
    }
    lVar11 = lVar9 * 0x50 + 0x958 + param_1;
    local_40 = 0;
    local_48 = lVar11;
    iVar2 = _Mtx_lock(lVar11);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(5);
    }
    if (*(int *)(lVar11 + 0x4c) == 0x7fffffff) {
      *(undefined4 *)(lVar11 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(6);
    }
    local_40 = 1;
    local_58 = (longlong)param_4;
    plVar5 = (longlong *)thunk_FUN_1811aefe0(local_50,&local_58);
    lVar6 = *(longlong *)(param_1 + 0xe8 + lVar9 * 0x10);
    while (lVar6 == 0) {
      do {
        lVar6 = _Query_perf_frequency();
        lVar7 = _Query_perf_counter();
        if (lVar6 == 10000000) {
          lVar7 = lVar7 * 100;
        }
        else if (lVar6 == 24000000) {
          lVar6 = SUB168(SEXT816(-0x4d0b03f86b6f730d) * SEXT816(lVar7),8) + lVar7;
          lVar8 = (lVar6 >> 0x18) - (lVar6 >> 0x3f);
          lVar6 = (lVar7 + lVar8 * -24000000) * 1000000000;
          lVar6 = SUB168(SEXT816(-0x4d0b03f86b6f730d) * SEXT816(lVar6),8) + lVar6;
          lVar7 = ((lVar6 >> 0x18) - (lVar6 >> 0x3f)) + lVar8 * 1000000000;
        }
        else {
          lVar7 = ((lVar7 % lVar6) * 1000000000) / lVar6 + (lVar7 / lVar6) * 1000000000;
        }
        if (*plVar5 <= lVar7) {
          if (*(longlong *)(param_1 + 0xe8 + lVar9 * 0x10) != 0) goto LAB_18123637e;
          thunk_FUN_18317f440("[SDK TRACE] [getFrame] timeout (%s) queue_size=%zu m_handlePair=%d timeout_ms=%d serial=%s\r\n"
                              ,pcVar12,*(undefined8 *)(param_1 + 0xe8 + lVar9 * 0x10),
                              *(char *)(param_1 + 0x128) != '\0',param_4,param_1 + 0x39);
          thunk_FUN_18317f440("[SDK ERROR] Camera [%s-%s] getFarame failed,Timeout (%s), %d\r\n",
                              param_1 + 0x39,param_1 + 0x59,pcVar12,param_4);
          uVar4 = 7;
          goto LAB_1812363aa;
        }
        local_58 = *plVar5 - lVar7;
        uVar3 = thunk_FUN_1811adb20(&local_58);
        iVar2 = thunk_FUN_1831867a4(param_1 + (lVar9 * 9 + 0x13f) * 8,lVar11,uVar3);
      } while (iVar2 != 0);
      lVar6 = *(longlong *)(param_1 + 0xe8 + lVar9 * 0x10);
    }
LAB_18123637e:
    puVar10 = (undefined8 *)((lVar9 + 0xe) * 0x10 + param_1);
    thunk_FUN_1811ce270(param_3,*(longlong *)*puVar10 + 0x10);
    thunk_FUN_1811d3200(puVar10);
    uVar4 = 0;
LAB_1812363aa:
    _Mtx_unlock(lVar11);
  }
  return uVar4;
}


