// 1812e30a0  size=0x5cf  str:"streamType"

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1812e30a0(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  void *pvVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  undefined1 auStack_8e8 [32];
  ulonglong local_8c8;
  undefined4 local_8c0;
  int local_8b8;
  undefined4 local_8a8 [2];
  undefined4 *local_8a0;
  undefined4 *puStack_898;
  longlong local_890;
  undefined8 ***local_888;
  ulonglong uStack_880;
  ulonglong local_878;
  ulonglong uStack_870;
  undefined8 ***local_868;
  ulonglong uStack_860;
  ulonglong local_858;
  ulonglong uStack_850;
  char local_848 [1024];
  undefined1 local_448 [1024];
  ulonglong local_48;
  
  local_48 = DAT_183dc69c0 ^ (ulonglong)auStack_8e8;
  ppppuVar8 = (undefined8 ****)0x0;
  if (*(longlong *)(param_1 + 0x19090) == 0) {
    memset(local_448,0,0x400);
    local_8c8._0_4_ = 3;
    uVar5 = snprintf(local_448,0x400,
                     "{\"msgId\":\"%sRsp\",\"result\":\"camera is nullptr\",\"code\":%d}",
                     "RPCServerCamera::getStreamInfos");
    thunk_FUN_18317f440(local_448);
    local_8c8 = CONCAT44(local_8c8._4_4_,0xffffffff);
    thunk_FUN_1812eb750(param_1,1,local_448,uVar5);
  }
  else {
    memset(local_848,0,0x400);
    uStack_880 = 0;
    local_878 = 0;
    uStack_870 = 0xf;
    local_888 = (undefined8 ****)0x0;
    local_8a8[0] = 0;
    local_858 = _DAT_18322c020;
    uStack_850 = _UNK_18322c028;
    local_868 = (undefined8 ***)s_streamType_18324fe18._0_8_;
    uStack_860 = (ulonglong)(ushort)s_streamType_18324fe18._8_2_;
    cVar4 = thunk_FUN_1812da670(param_2,&local_868,local_8a8);
    if (0xf < uStack_850) {
      uVar11 = uStack_850 + 1;
      ppppuVar9 = (undefined8 ****)local_868;
      if (0xfff < uVar11) {
        uVar11 = uStack_850 + 0x28;
        ppppuVar9 = (undefined8 ****)local_868[-1];
        if (0x1f < (ulonglong)((longlong)local_868 + (-8 - (longlong)ppppuVar9))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(ppppuVar9,uVar11);
    }
    if (cVar4 == '\0') {
      uVar5 = snprintf(local_848,0x400,
                       "{\"msgId\":\"getStreamInfosRsp\",\"result\":\"paramError\",\"code\":%d}",1);
      local_8c8 = CONCAT44(local_8c8._4_4_,0xffffffff);
      thunk_FUN_1812eb750(param_1,1,local_848,uVar5);
    }
    else {
      local_8a0 = (undefined4 *)0x0;
      puStack_898 = (undefined4 *)0x0;
      local_890 = 0;
      iVar6 = (**(code **)(**(longlong **)(param_1 + 0x19090) + 0x28))
                        (*(longlong **)(param_1 + 0x19090),local_8a8[0],&local_8a0);
      if (iVar6 == 0) {
        snprintf(local_848,0x400,"{\"msgId\":\"getStreamInfosRsp\",\"code\":%d,\"streamInfos\":[",0)
        ;
        uVar11 = 0xffffffffffffffff;
        do {
          uVar14 = uVar11 + 1;
          lVar3 = uVar11 + 1;
          uVar11 = uVar14;
        } while (local_848[lVar3] != '\0');
        if (uStack_870 - local_878 < uVar14) {
          local_8c8 = uVar14;
          thunk_FUN_1811bf380(&local_888,uVar14,0,local_848);
        }
        else {
          ppppuVar9 = &local_888;
          if (0xf < uStack_870) {
            ppppuVar9 = (undefined8 ****)local_888;
          }
          pvVar12 = (void *)((longlong)ppppuVar9 + local_878);
          local_878 = uVar14 + local_878;
          memmove(pvVar12,local_848,uVar14);
          *(undefined1 *)((longlong)pvVar12 + uVar14) = 0;
        }
        puVar10 = puStack_898;
        if (local_8a0 != puStack_898) {
          puVar13 = local_8a0 + 2;
          do {
            local_8b8 = (int)(float)puVar13[1];
            local_8c0 = *puVar13;
            local_8c8 = CONCAT44(local_8c8._4_4_,puVar13[-1]);
            snprintf(local_848,0x400,"{\"format\":%d,\"width\":%d,\"height\":%d,\"fps\":%d},",
                     puVar13[-2]);
            uVar11 = 0xffffffffffffffff;
            do {
              uVar14 = uVar11 + 1;
              lVar3 = uVar11 + 1;
              uVar11 = uVar14;
            } while (local_848[lVar3] != '\0');
            if (uStack_870 - local_878 < uVar14) {
              local_8c8 = uVar14;
              thunk_FUN_1811bf380(&local_888,uVar14,0,local_848);
            }
            else {
              ppppuVar9 = &local_888;
              if (0xf < uStack_870) {
                ppppuVar9 = (undefined8 ****)local_888;
              }
              pvVar12 = (void *)((longlong)ppppuVar9 + local_878);
              local_878 = uVar14 + local_878;
              memmove(pvVar12,local_848,uVar14);
              *(undefined1 *)((longlong)pvVar12 + uVar14) = 0;
            }
            puVar1 = puVar13 + 2;
            puVar13 = puVar13 + 4;
          } while (puVar1 != puVar10);
        }
        uVar14 = uStack_870;
        ppppuVar9 = (undefined8 ****)local_888;
        uVar11 = local_878 - 1;
        if (local_878 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_1811c3110();
        }
        ppppuVar7 = &local_888;
        if (0xf < uStack_870) {
          ppppuVar7 = (undefined8 ****)local_888;
        }
        if (*(char *)((longlong)ppppuVar7 + uVar11) == ',') {
          local_868 = (undefined8 ****)0x0;
          uStack_860 = 0;
          if (local_878 < uVar11) {
            uVar11 = local_878;
          }
          ppppuVar7 = &local_888;
          if (0xf < uStack_870) {
            ppppuVar7 = (undefined8 ****)local_888;
          }
          if (0x7fffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_1811b44e0();
          }
          if (uVar11 < 0x10) {
            uStack_850 = 0xf;
            local_858 = uVar11;
            memcpy(&local_868,ppppuVar7,uVar11);
            *(undefined1 *)((longlong)&local_868 + uVar11) = 0;
          }
          else {
            uVar14 = uVar11 | 0xf;
            if (uVar14 < 0x8000000000000000) {
              if (uVar14 < 0x16) {
                uVar14 = 0x16;
              }
              if (uVar14 != 0xffffffffffffffff) {
                if (uVar14 + 1 < 0x1000) {
                  ppppuVar8 = (undefined8 ****)thunk_FUN_183196718();
                }
                else {
                  ppppuVar8 = (undefined8 ****)thunk_FUN_1811a9100();
                }
              }
            }
            else {
              ppppuVar8 = (undefined8 ****)thunk_FUN_1811a9100(0x8000000000000000);
              uVar14 = 0x7fffffffffffffff;
            }
            local_868 = ppppuVar8;
            local_858 = uVar11;
            uStack_850 = uVar14;
            memcpy(ppppuVar8,ppppuVar7,uVar11);
            *(undefined1 *)((longlong)ppppuVar8 + uVar11) = 0;
            ppppuVar9 = (undefined8 ****)local_888;
            uVar14 = uStack_870;
          }
          if (0xf < uVar14) {
            uVar11 = uVar14 + 1;
            ppppuVar8 = ppppuVar9;
            if (0xfff < uVar11) {
              uVar11 = uVar14 + 0x28;
              ppppuVar8 = (undefined8 ****)ppppuVar9[-1];
              if (0x1f < (ulonglong)((longlong)ppppuVar9 + (-8 - (longlong)ppppuVar8))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            FUN_18001e0e2(ppppuVar8,uVar11);
          }
          local_888 = local_868;
          uStack_880 = uStack_860;
          local_878 = local_858;
          uStack_870 = uStack_850;
        }
        uVar11 = local_878;
        if (uStack_870 - local_878 < 2) {
          local_8c8 = 2;
          thunk_FUN_1811bf380(&local_888,2,0,&DAT_18324f720);
        }
        else {
          ppppuVar8 = &local_888;
          if (0xf < uStack_870) {
            ppppuVar8 = (undefined8 ****)local_888;
          }
          puVar2 = (undefined2 *)((longlong)ppppuVar8 + local_878);
          local_878 = local_878 + 2;
          *puVar2 = 0x7d5d;
          *(undefined1 *)((longlong)ppppuVar8 + uVar11 + 2) = 0;
        }
        thunk_FUN_1812eb710(param_1,&local_888);
      }
      else {
        uVar5 = snprintf(local_848,0x400,
                         "{\"msgId\":\"getStreamInfosRsp\",\"result\":\"failed\",\"code\":%d}",iVar6
                        );
        local_8c8 = CONCAT44(local_8c8._4_4_,0xffffffff);
        thunk_FUN_1812eb750(param_1,1,local_848,uVar5);
      }
      if (local_8a0 != (undefined4 *)0x0) {
        uVar11 = local_890 - (longlong)local_8a0 & 0xfffffffffffffff0;
        puVar10 = local_8a0;
        if (0xfff < uVar11) {
          uVar11 = uVar11 + 0x27;
          puVar10 = *(undefined4 **)(local_8a0 + -2);
          if (0x1f < (ulonglong)((longlong)local_8a0 + (-8 - (longlong)puVar10))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_18001e0e2(puVar10,uVar11);
        local_8a0 = (undefined4 *)0x0;
        puStack_898 = (undefined4 *)0x0;
        local_890 = 0;
      }
    }
    if (0xf < uStack_870) {
      uVar11 = uStack_870 + 1;
      ppppuVar8 = (undefined8 ****)local_888;
      if (0xfff < uVar11) {
        uVar11 = uStack_870 + 0x28;
        ppppuVar8 = (undefined8 ****)local_888[-1];
        if (0x1f < (ulonglong)((longlong)local_888 + (-8 - (longlong)ppppuVar8))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(ppppuVar8,uVar11);
    }
  }
  return;
}


