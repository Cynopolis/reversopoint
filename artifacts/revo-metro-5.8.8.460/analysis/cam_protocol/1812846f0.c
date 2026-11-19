// 1812846f0  size=0x27a  socket:inet_pton@181284756

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1812846f0(longlong param_1,char *param_2,undefined2 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  char *pcVar7;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [16];
  undefined8 local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_183dc69c0 ^ (ulonglong)auStackY_98;
  thunk_FUN_181284a10();
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    pcVar7 = "[SDK WARN ] DeviceDataComTcp::start: empty host\r\n";
  }
  else {
    uStack_38 = 0;
    local_40 = 2;
    uVar3 = Ordinal_9(param_3);
    local_40._0_4_ = CONCAT22(uVar3,(undefined2)local_40);
    iVar4 = inet_pton(2,param_2,(longlong)&local_40 + 4);
    if (iVar4 != 1) {
      thunk_FUN_18317f440("[SDK WARN ] DeviceDataComTcp::start: invalid IPv4 %s\r\n",param_2);
      return 0;
    }
    cVar1 = FUN_181284f20();
    if (cVar1 != '\0') {
      lVar5 = Ordinal_23(2,1,6);
      if (lVar5 == -1) {
        thunk_FUN_18317f440("[SDK WARN ] DeviceDataComTcp::start: socket() failed\r\n");
        FUN_181285030();
        return 0;
      }
      cVar1 = FUN_181284060(lVar5,&local_40,5000);
      if (cVar1 == '\0') {
        thunk_FUN_18317f440("[SDK WARN ] DeviceDataComTcp::start: connect failed %s:%u\r\n",param_2,
                            param_3);
        FUN_181284040(lVar5);
        FUN_181285030();
        return 0;
      }
      iVar4 = _Mtx_lock(param_1 + 0x148);
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        std::_Throw_Cpp_error(5);
      }
      if (*(int *)(param_1 + 0x194) == 0x7fffffff) {
        *(undefined4 *)(param_1 + 0x194) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        std::_Throw_Cpp_error(6);
      }
      *(longlong *)(param_1 + 0x140) = lVar5;
      _Mtx_unlock(param_1 + 0x148);
      local_68[0] = 1;
      puVar6 = (undefined1 *)thunk_FUN_1811adad0(param_1 + 0x13a);
      uVar2 = thunk_FUN_1811adb00(local_68);
      *puVar6 = uVar2;
      local_68[0] = 0;
      puVar6 = (undefined1 *)thunk_FUN_1811adad0(param_1 + 0x139);
      uVar2 = thunk_FUN_1811adb00(local_68);
      *puVar6 = uVar2;
      local_68[0] = 1;
      puVar6 = (undefined1 *)thunk_FUN_1811adad0(param_1 + 0x138);
      uVar2 = thunk_FUN_1811adb00(local_68);
      *puVar6 = uVar2;
      local_48 = (longlong *)thunk_FUN_183196718(0x10);
      if (local_48 != (longlong *)0x0) {
        *local_48 = param_1;
        local_48[1] = (longlong)&LAB_180008ed1;
      }
      local_58 = _beginthreadex((void *)0x0,0,(_StartAddress *)&LAB_180009831,local_48,0,&uStack_50)
      ;
      if (local_58 == 0) {
        uStack_50 = 0;
                    /* WARNING: Subroutine does not return */
        std::_Throw_Cpp_error(6);
      }
      if (*(int *)(param_1 + 0x130) != 0) {
                    /* WARNING: Subroutine does not return */
        terminate();
      }
      local_58._4_4_ = (undefined4)(local_58 >> 0x20);
      *(undefined4 *)(param_1 + 0x128) = (undefined4)local_58;
      *(undefined4 *)(param_1 + 300) = local_58._4_4_;
      *(uint *)(param_1 + 0x130) = uStack_50;
      *(undefined4 *)(param_1 + 0x134) = uStack_4c;
      thunk_FUN_18317f440("[SDK INFO ] DeviceDataComTcp::start: connected %s:%u (I/O: select + recv/send)\r\n"
                          ,param_2,param_3);
      return 1;
    }
    pcVar7 = "[SDK WARN ] DeviceDataComTcp::start: WSAStartup failed\r\n";
  }
  thunk_FUN_18317f440(pcVar7);
  return 0;
}


