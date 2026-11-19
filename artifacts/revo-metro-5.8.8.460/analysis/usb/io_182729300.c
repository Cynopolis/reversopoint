/* 0x182729300 size=0x5c7
   WaitForSingleObjectEx
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_182729300(longlong param_1,longlong *param_2,undefined8 param_3,int param_4,
                       undefined8 param_5,int param_6,code *param_7)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  int local_280;
  undefined4 local_278;
  int local_268;
  undefined8 local_260;
  undefined8 local_258;
  code *local_250;
  int local_248 [2];
  undefined1 *local_240;
  undefined8 local_238;
  undefined1 local_228 [48];
  undefined1 local_1f8 [144];
  undefined1 local_168 [72];
  undefined1 local_120 [216];
  ulonglong local_48;
  
  local_48 = DAT_183dc69c0 ^ (ulonglong)auStack_2a8;
  puVar9 = *(undefined8 **)(param_1 + 0x2a8);
  local_258 = param_5;
  local_250 = param_7;
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x70) + 0x120);
  }
  puVar7 = (undefined1 *)0x0;
  puVar8 = (undefined1 *)0x0;
  iVar5 = 0;
  local_268 = param_4;
  local_260 = param_3;
  if ((**(longlong **)(*(longlong *)(param_1 + 0x28) + 0x70) == 0) ||
     (uVar4 = FUN_18272a090(param_2), param_4 = local_268, -1 < (int)uVar4)) {
    while( true ) {
      if ((*(int *)(param_1 + 0x88) == 0x76) || (*(int *)(param_1 + 0x88) == 0xae)) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x70);
        lVar6 = *(longlong *)(param_1 + 0x2a8);
        if (lVar6 == 0) {
          lVar6 = lVar1 + 0x120;
        }
        if (*(HANDLE *)(lVar6 + 0x38) != (HANDLE)0xffffffffffffffff) {
          WaitForSingleObjectEx(*(HANDLE *)(lVar6 + 0x38),0xffffffff,0);
        }
        lVar6 = *(longlong *)(lVar1 + 0x18);
        if (lVar6 != 0) {
          lVar6 = *(longlong *)(lVar6 + 0x18);
          (**(code **)(lVar6 + 0x20))(*(undefined8 *)(lVar6 + 0x30));
        }
      }
      iVar2 = thunk_FUN_182729f40(param_1);
      if (iVar2 != 0) {
        if (*(int *)((longlong)param_2 + 0x74) == 0xae) {
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x70);
          if (((param_2[1] < 0) || ((longlong)*(int *)(lVar6 + 0x98) <= param_2[1])) ||
             (*(longlong *)(lVar6 + 0xa0) != *param_2)) {
            thunk_FUN_181fb4a90(param_1,0x10);
          }
        }
        local_288 = 0;
        param_4 = (**(code **)(*(longlong *)puVar9[1] + 0x48))();
      }
      if (*(int *)(param_1 + 0x88) == 0x35) {
        if (*(int *)((longlong)param_2 + 0x74) == 0xae) {
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x70);
          if (((param_2[1] < 0) || ((longlong)*(int *)(lVar6 + 0x98) <= param_2[1])) ||
             (*(longlong *)(lVar6 + 0xa0) != *param_2)) {
            thunk_FUN_181fb4a90(param_1);
          }
        }
        param_4 = (**(code **)(*(longlong *)*puVar9 + 0x38))();
      }
      if (param_4 != -0x7ffffff6) break;
      iVar5 = iVar5 + 1;
      if (0x32 < iVar5) goto LAB_182729564;
      if ((*(int *)(param_1 + 0x88) == 0x76) || (*(int *)(param_1 + 0x88) == 0xae)) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x70);
        lVar6 = *(longlong *)(param_1 + 0x2a8);
        if (lVar6 == 0) {
          lVar6 = lVar1 + 0x120;
        }
        if (*(HANDLE *)(lVar6 + 0x38) != (HANDLE)0xffffffffffffffff) {
          ReleaseMutex(*(HANDLE *)(lVar6 + 0x38));
        }
        lVar6 = *(longlong *)(lVar1 + 0x18);
        if (lVar6 != 0) {
          lVar6 = *(longlong *)(lVar6 + 0x18);
          (**(code **)(lVar6 + 0x28))(*(undefined8 *)(lVar6 + 0x30));
        }
      }
      thunk_FUN_181fc9940(2000);
    }
    if (-1 < param_4) {
      iVar5 = *(int *)(param_1 + 0x88);
      if ((iVar5 == 0x76) || (iVar2 = local_268, iVar5 == 0xae)) {
        puVar7 = local_168;
        iVar2 = 0;
      }
      if (iVar5 == 0x35) {
        puVar7 = local_228;
        iVar2 = 0;
      }
      local_278 = 0;
      local_280 = local_268;
      local_288 = local_260;
      uVar3 = thunk_FUN_1827290b0(param_1,puVar9,puVar7,iVar2);
      uVar4 = (ulonglong)uVar3;
      if (uVar3 == 0) {
        lVar6 = 1;
        if (param_6 != 0) {
          iVar5 = *(int *)(param_1 + 0x88);
          if ((iVar5 == 0x76) || (iVar5 == 0xae)) {
            puVar7 = local_120;
            iVar2 = 4;
          }
          if (iVar5 == 0x35) {
            puVar7 = local_1f8;
            iVar2 = 4;
          }
          local_278 = 0;
          local_280 = param_6;
          local_288 = local_258;
          uVar3 = thunk_FUN_1827290b0(param_1,puVar9,puVar7,iVar2);
          uVar4 = (ulonglong)uVar3;
          if (uVar3 != 0) {
            thunk_FUN_181fb4a90(param_1,0x10,"Failed to add inverse quantization matrix buffer\n");
            goto LAB_1827297eb;
          }
          lVar6 = 2;
        }
        iVar5 = *(int *)(param_1 + 0x88);
        iVar2 = (int)lVar6;
        if ((iVar5 == 0x76) || (iVar5 == 0xae)) {
          puVar8 = local_168 + (ulonglong)(iVar2 + 1) * 0x48;
          puVar7 = local_168 + lVar6 * 0x48;
        }
        if (iVar5 == 0x35) {
          puVar7 = local_228 + lVar6 * 0x30;
          puVar8 = local_228 + (ulonglong)(iVar2 + 1) * 0x30;
        }
        uVar3 = (*local_250)(param_1,puVar7,puVar8);
        uVar4 = (ulonglong)uVar3;
        if (uVar3 == 0) {
          if ((*(int *)(param_1 + 0x88) == 0x76) || (*(int *)(param_1 + 0x88) == 0xae)) {
            param_4 = (**(code **)(*(longlong *)puVar9[1] + 0x58))
                                ((longlong *)puVar9[1],*puVar9,iVar2 + 2,local_168);
          }
          if (*(int *)(param_1 + 0x88) == 0x35) {
            local_240 = local_228;
            local_238 = 0;
            local_248[0] = iVar2 + 2;
            param_4 = (**(code **)(*(longlong *)*puVar9 + 0x48))((longlong *)*puVar9,local_248);
          }
          if (param_4 < 0) {
            thunk_FUN_181fb4a90(param_1,0x10,"Failed to execute: 0x%x\n",param_4);
            uVar4 = 0xffffffff;
          }
        }
        else {
          thunk_FUN_181fb4a90(param_1,0x10,"Failed to add bitstream or slice control buffer\n");
        }
      }
      else {
        thunk_FUN_181fb4a90(param_1,0x10,"Failed to add picture parameter buffer\n");
      }
LAB_1827297eb:
      if ((*(int *)(param_1 + 0x88) == 0x76) || (*(int *)(param_1 + 0x88) == 0xae)) {
        param_4 = (**(code **)(*(longlong *)puVar9[1] + 0x50))((longlong *)puVar9[1],*puVar9);
      }
      if (*(int *)(param_1 + 0x88) == 0x35) {
        param_4 = (**(code **)(*(longlong *)*puVar9 + 0x40))((longlong *)*puVar9,0);
      }
      if ((*(int *)(param_1 + 0x88) == 0x76) || (*(int *)(param_1 + 0x88) == 0xae)) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x70);
        lVar6 = *(longlong *)(param_1 + 0x2a8);
        if (lVar6 == 0) {
          lVar6 = lVar1 + 0x120;
        }
        if (*(HANDLE *)(lVar6 + 0x38) != (HANDLE)0xffffffffffffffff) {
          ReleaseMutex(*(HANDLE *)(lVar6 + 0x38));
        }
        lVar6 = *(longlong *)(lVar1 + 0x18);
        if (lVar6 != 0) {
          lVar6 = *(longlong *)(lVar6 + 0x18);
          (**(code **)(lVar6 + 0x28))(*(undefined8 *)(lVar6 + 0x30));
        }
      }
      if (-1 < param_4) {
        return uVar4;
      }
      thunk_FUN_181fb4a90(param_1,0x10,"Failed to end frame: 0x%x\n",param_4);
      return 0xffffffff;
    }
LAB_182729564:
    thunk_FUN_181fb4a90(param_1,0x10,"Failed to begin frame: 0x%x\n",param_4);
    if ((*(int *)(param_1 + 0x88) == 0x76) || (*(int *)(param_1 + 0x88) == 0xae)) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x70);
      lVar6 = *(longlong *)(param_1 + 0x2a8);
      if (lVar6 == 0) {
        lVar6 = lVar1 + 0x120;
      }
      if (*(HANDLE *)(lVar6 + 0x38) != (HANDLE)0xffffffffffffffff) {
        ReleaseMutex(*(HANDLE *)(lVar6 + 0x38));
      }
      lVar6 = *(longlong *)(lVar1 + 0x18);
      if (lVar6 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x18);
        (**(code **)(lVar6 + 0x28))(*(undefined8 *)(lVar6 + 0x30));
      }
    }
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


