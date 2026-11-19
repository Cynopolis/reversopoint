// 1812fcb00  size=0x520  str:"msgId"

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1812fcb00(undefined8 param_1,undefined4 param_2,void *param_3,int *param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 ****ppppuVar5;
  longlong lVar6;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined8 ***local_220;
  undefined4 local_218;
  int local_208;
  int local_204 [3];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  ulonglong uStack_1e0;
  undefined8 ***local_1d8;
  undefined8 uStack_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  undefined8 ***local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  ulonglong uStack_1a0;
  ulonglong local_198 [3];
  ulonglong uStack_180;
  undefined1 local_178 [96];
  undefined1 local_118 [208];
  ulonglong local_48;
  longlong lVar7;
  
  local_48 = DAT_183dc69c0 ^ (ulonglong)auStack_248;
  local_204[1] = 0;
  memset(local_118,0,200);
  uVar3 = snprintf(local_118,200,"{\"msgId\":\"readBuffer\",\"id\":%d}",param_2);
  uStack_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0xf;
  local_1d8 = (undefined8 ****)0x0;
  local_218 = 5000;
  local_220 = &local_1d8;
  local_228 = 0;
  iVar4 = thunk_FUN_1812fe010(param_1,local_118,uVar3,0);
  if ((iVar4 == 0) || (local_1c8 == 0)) {
    thunk_FUN_18317f440("not response:%s\n",local_118);
    iVar4 = 1;
  }
  else {
    thunk_FUN_1812d5b40(local_178,&local_1d8);
    uStack_1b0 = 0;
    local_1a8 = _DAT_183222c50;
    uStack_1a0 = _UNK_183222c58;
    local_1b8 = (undefined8 ****)0x0;
    uStack_1f0 = 0;
    local_1e8 = _DAT_18322bf80;
    uStack_1e0 = _UNK_18322bf88;
    local_1f8 = (ulonglong)CONCAT14(DAT_18324f634,DAT_18324f630);
    thunk_FUN_1812da9f0(local_178,&local_1f8,&local_1b8);
    if (0xf < uStack_1e0) {
      uVar8 = uStack_1e0 + 1;
      uVar9 = local_1f8;
      if (0xfff < uVar8) {
        uVar8 = uStack_1e0 + 0x28;
        uVar9 = *(ulonglong *)(local_1f8 - 8);
        if (0x1f < (local_1f8 - uVar9) - 8) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(uVar9,uVar8);
    }
    cVar2 = thunk_FUN_1812cd4f0(&local_1b8,"readBufferRsp");
    if (cVar2 == '\0') {
      local_198[1] = 0;
      local_198[2] = _DAT_183222c50;
      uStack_180 = _UNK_183222c58;
      local_198[0] = 0;
      uStack_1f0 = 0;
      local_1e8 = _DAT_18322bfa0;
      uStack_1e0 = _UNK_18322bfa8;
      local_1f8._0_6_ = CONCAT24(s_result_18323d8d4._4_2_,s_result_18323d8d4._0_4_);
      local_1f8 = (ulonglong)(uint6)local_1f8;
      thunk_FUN_1812da9f0(local_178,&local_1f8,local_198);
      if (0xf < uStack_1e0) {
        uVar8 = uStack_1e0 + 1;
        uVar9 = local_1f8;
        if (0xfff < uVar8) {
          uVar8 = uStack_1e0 + 0x28;
          uVar9 = *(ulonglong *)(local_1f8 - 8);
          if (0x1f < (local_1f8 - uVar9) - 8) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_18001e0e2(uVar9,uVar8);
      }
      local_204[0] = 0;
      uStack_1f0 = 0;
      local_1e8 = _DAT_18322bf60;
      uStack_1e0 = _UNK_18322bf68;
      local_1f8 = 0x65646f63;
      thunk_FUN_1812da670(local_178,&local_1f8,local_204);
      if (0xf < uStack_1e0) {
        uVar8 = uStack_1e0 + 1;
        uVar9 = local_1f8;
        if (0xfff < uVar8) {
          uVar8 = uStack_1e0 + 0x28;
          uVar9 = *(ulonglong *)(local_1f8 - 8);
          if (0x1f < (local_1f8 - uVar9) - 8) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_18001e0e2(uVar9,uVar8);
      }
      iVar4 = local_204[0];
      if (local_204[0] == 0) {
        local_208 = 0;
        uStack_1f0 = 0;
        local_1e8 = _DAT_18322bfa0;
        uStack_1e0 = _UNK_18322bfa8;
        local_1f8._0_6_ = CONCAT24(s_valLen_183250520._4_2_,s_valLen_183250520._0_4_);
        local_1f8 = (ulonglong)(uint6)local_1f8;
        bVar1 = true;
        local_204[1] = 1;
        cVar2 = thunk_FUN_1812da670(local_178,&local_1f8,&local_208);
        if ((cVar2 != '\0') && (0 < local_208)) {
          bVar1 = false;
        }
        if (0xf < uStack_1e0) {
          uVar9 = uStack_1e0 + 1;
          uVar8 = local_1f8;
          if (0xfff < uVar9) {
            uVar9 = uStack_1e0 + 0x28;
            uVar8 = *(ulonglong *)(local_1f8 - 8);
            if (0x1f < (local_1f8 - uVar8) - 8) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          FUN_18001e0e2(uVar8,uVar9);
        }
        if (bVar1) {
          thunk_FUN_18317f440("[SDK TRACE] the valLen of readBuffer Msg absent or invalid\r\n");
          iVar4 = 9;
        }
        else {
          ppppuVar5 = &local_1d8;
          if (0xf < local_1c0) {
            ppppuVar5 = (undefined8 ****)local_1d8;
          }
          lVar6 = -1;
          do {
            lVar7 = lVar6;
            lVar6 = lVar7 + 1;
          } while (*(char *)((longlong)ppppuVar5 + lVar6) != '\0');
          if (local_1c8 < (ulonglong)((longlong)local_208 + 1 + lVar6)) {
            thunk_FUN_18317f440("[SDK TRACE] readBuffer rsp payload too short, rspLen=%zu, expected=%zu\r\n"
                                ,local_1c8);
            iVar4 = 9;
          }
          else {
            iVar4 = local_208;
            if (0x3c < local_208) {
              iVar4 = 0x3c;
            }
            ppppuVar5 = &local_1d8;
            if (0xf < local_1c0) {
              ppppuVar5 = (undefined8 ****)local_1d8;
            }
            memcpy(param_3,(void *)((longlong)ppppuVar5 + lVar7 + 2),(longlong)iVar4);
            iVar4 = 0;
            if (param_4 != (int *)0x0) {
              *param_4 = (int)*(char *)((longlong)param_3 + 0x3b);
            }
          }
        }
      }
      if (0xf < uStack_180) {
        uVar8 = uStack_180 + 1;
        uVar9 = local_198[0];
        if (0xfff < uVar8) {
          uVar8 = uStack_180 + 0x28;
          uVar9 = *(ulonglong *)(local_198[0] - 8);
          if (0x1f < (local_198[0] - uVar9) - 8) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FUN_18001e0e2(uVar9,uVar8);
      }
      local_198[2] = _DAT_183222c50;
      uStack_180 = _UNK_183222c58;
      local_198[0] = local_198[0] & 0xffffffffffffff00;
    }
    else {
      ppppuVar5 = &local_1b8;
      if (0xf < uStack_1a0) {
        ppppuVar5 = (undefined8 ****)local_1b8;
      }
      thunk_FUN_18317f440("[SDK TRACE] the msgId(%s) of readBuffer Msg incorrect\r\n",ppppuVar5);
      iVar4 = 9;
    }
    if (0xf < uStack_1a0) {
      uVar9 = uStack_1a0 + 1;
      ppppuVar5 = (undefined8 ****)local_1b8;
      if (0xfff < uVar9) {
        uVar9 = uStack_1a0 + 0x28;
        ppppuVar5 = (undefined8 ****)local_1b8[-1];
        if (0x1f < (ulonglong)((longlong)local_1b8 + (-8 - (longlong)ppppuVar5))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FUN_18001e0e2(ppppuVar5,uVar9);
    }
    local_1b8 = (undefined8 ***)((ulonglong)local_1b8 & 0xffffffffffffff00);
    local_1a8 = _DAT_183222c50;
    uStack_1a0 = _UNK_183222c58;
    thunk_FUN_1812d6290(local_178);
  }
  if (0xf < local_1c0) {
    uVar9 = local_1c0 + 1;
    ppppuVar5 = (undefined8 ****)local_1d8;
    if (0xfff < uVar9) {
      uVar9 = local_1c0 + 0x28;
      ppppuVar5 = (undefined8 ****)local_1d8[-1];
      if (0x1f < (ulonglong)((longlong)local_1d8 + (-8 - (longlong)ppppuVar5))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_18001e0e2(ppppuVar5,uVar9);
  }
  return iVar4;
}


