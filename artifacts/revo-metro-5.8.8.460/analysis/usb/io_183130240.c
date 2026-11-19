/* 0x183130240 size=0x690
   WSAResetEvent
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_183130240(int *param_1,undefined8 *param_2,uint param_3,uint param_4,int *param_5,char param_6,
             char param_7)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  longlong lVar10;
  ushort uVar11;
  undefined8 *puVar12;
  ushort uVar13;
  ushort *puVar14;
  int iVar15;
  undefined1 *puVar16;
  longlong *plVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  char local_188;
  int local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  undefined1 *local_170;
  undefined8 *local_168;
  int *local_160;
  int *local_158;
  uint local_150 [12];
  longlong local_120 [5];
  undefined1 local_f8 [160];
  ulonglong local_58;
  
  local_58 = DAT_183dc69c0 ^ (ulonglong)auStack_1b8;
  puVar9 = local_f8;
  iVar20 = 0;
  local_184 = 0;
  iVar6 = 0;
  local_188 = '\0';
  if ((param_1 == (int *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  if (*(char *)((longlong)param_1 + 0x182) != '\0') {
    return 8;
  }
  if ((int)param_4 < 0) {
    return 10;
  }
  local_170 = puVar9;
  local_168 = param_2;
  local_160 = param_1;
  local_158 = param_5;
  local_17c = param_3;
  local_178 = param_4;
  for (lVar2 = *(longlong *)(param_1 + 2); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 8)) {
    uVar4 = FUN_18312e620(lVar2);
    plVar17 = local_120;
    uVar5 = 1;
    uVar18 = 0;
    do {
      lVar10 = -1;
      if (((uVar4 & uVar5) != 0) && (*plVar17 != -1)) {
        iVar20 = iVar20 + 1;
        lVar10 = *plVar17;
      }
      if (((uVar4 & (uVar5 << 0x10 | uVar5 >> 0x10)) != 0) && (*plVar17 != -1)) {
        iVar20 = iVar20 + 1;
        lVar10 = *plVar17;
      }
      if (lVar10 == -1) break;
      uVar18 = uVar18 + 1;
      uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
      plVar17 = plVar17 + 1;
    } while (uVar18 < 5);
  }
  FUN_183130110(param_1,&local_180);
  if ((-1 < (int)local_180) && ((int)local_180 < (int)local_178)) {
    local_178 = local_180;
  }
  uVar4 = param_3 + iVar20 + 1;
  if (param_7 == '\0') {
    uVar4 = param_3 + iVar20;
  }
  if (10 < uVar4) {
    puVar9 = (undefined1 *)(*(code *)PTR_malloc_183dc6680)();
    if (puVar9 == (undefined1 *)0x0) {
      return 3;
    }
    local_188 = '\x01';
    local_170 = puVar9;
  }
  local_180 = 0;
  uVar19 = 0;
  if (iVar20 != 0) {
    lVar2 = *(longlong *)(param_1 + 2);
    param_1 = local_160;
    for (; local_160 = param_1, lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 8)) {
      uVar4 = FUN_18312e620(lVar2,local_120);
      plVar17 = local_120;
      uVar5 = 0;
      do {
        lVar10 = -1;
        if (((uVar4 >> (uVar5 & 0x1f) & 1) != 0) && (lVar3 = *plVar17, lVar3 != -1)) {
          local_180 = (int)uVar19 + 1;
          *(longlong *)(local_170 + uVar19 * 0x10) = lVar3;
          *(undefined2 *)(local_170 + uVar19 * 0x10 + 8) = 1;
          lVar10 = lVar3;
          uVar19 = (ulonglong)local_180;
        }
        if (((uVar4 >> (uVar5 + 0x10 & 0x1f) & 1) != 0) && (lVar3 = *plVar17, lVar3 != -1)) {
          Ordinal_19(lVar3,0,0,0);
          lVar10 = uVar19 * 0x10;
          local_180 = (int)uVar19 + 1;
          uVar19 = (ulonglong)local_180;
          *(longlong *)(local_170 + lVar10) = lVar3;
          *(undefined2 *)(local_170 + lVar10 + 8) = 4;
          lVar10 = lVar3;
        }
        if (lVar10 == -1) break;
        iVar6 = WSAEventSelect();
        puVar9 = local_170;
        if (iVar6 != 0) goto joined_r0x0001831305d2;
        uVar5 = uVar5 + 1;
        plVar17 = plVar17 + 1;
      } while (uVar5 < 5);
      puVar9 = local_170;
      param_2 = local_168;
      param_1 = local_160;
      iVar6 = local_184;
    }
  }
  uVar4 = 0;
  if (local_17c != 0) {
    puVar14 = (ushort *)(param_2 + 1);
    do {
      if ((*puVar14 & 4) != 0) {
        Ordinal_19(*(undefined8 *)(puVar14 + -4),0,0,0);
      }
      iVar7 = WSAEventSelect(*(undefined8 *)(puVar14 + -4),*(undefined8 *)(param_1 + 0x5e));
      if (iVar7 != 0) {
joined_r0x0001831305d2:
        if (local_188 != '\0') {
          (*(code *)PTR_free_183dc6688)(puVar9);
        }
        return 4;
      }
      puVar12 = (undefined8 *)(puVar9 + uVar19 * 0x10);
      *puVar12 = *(undefined8 *)(puVar14 + -4);
      *(undefined2 *)(puVar12 + 1) = 0;
      if ((*puVar14 & 1) != 0) {
        *(undefined2 *)(puVar12 + 1) = 1;
      }
      if ((*puVar14 & 2) != 0) {
        *(ushort *)(puVar12 + 1) = *(ushort *)(puVar12 + 1) | 2;
      }
      if ((*puVar14 & 4) != 0) {
        *(ushort *)(puVar12 + 1) = *(ushort *)(puVar12 + 1) | 4;
      }
      local_180 = (int)uVar19 + 1;
      uVar19 = (ulonglong)local_180;
      uVar4 = uVar4 + 1;
      puVar14 = puVar14 + 8;
    } while (uVar4 < local_17c);
  }
  puVar16 = local_170;
  uVar4 = (uint)uVar19;
  if (uVar4 == 0) {
    if (param_7 == '\0') goto LAB_18313084d;
    iVar8 = 0;
LAB_18313063d:
    local_198 = 0;
    WSAWaitForMultipleEvents(1,param_1 + 0x5e,0,local_178);
    iVar7 = local_184;
    iVar15 = iVar6;
  }
  else {
    iVar8 = thunk_FUN_1831510f0(local_170,uVar19,0);
    iVar7 = iVar8;
    iVar15 = iVar8;
    if (iVar8 < 1) goto LAB_18313063d;
  }
  local_184 = iVar7;
  uVar5 = 0;
  puVar12 = local_168;
  iVar6 = local_184;
  if (local_17c != 0) {
    do {
      uVar11 = 0;
      uVar1 = *(ushort *)(puVar16 + (ulonglong)(iVar20 + uVar5) * 0x10 + 10);
      local_150[0] = 0;
      iVar6 = WSAEnumNetworkEvents(*puVar12,0,local_150);
      if (iVar6 == 0) {
        uVar11 = (ushort)((local_150[0] & 0x29) != 0);
        uVar13 = uVar11 | 4;
        if ((local_150[0] & 0x32) == 0) {
          uVar13 = uVar11;
        }
        uVar11 = uVar13 | 2;
        if ((local_150[0] & 4) == 0) {
          uVar11 = uVar13;
        }
        if (((local_158 != (int *)0x0) && (iVar8 < 1)) && (local_150[0] != 0)) {
          iVar15 = iVar15 + 1;
        }
      }
      WSAEventSelect(*puVar12,*(undefined8 *)(param_1 + 0x5e),0);
      if (0 < iVar8) {
        uVar13 = uVar11 | 1;
        if ((uVar1 & 1) == 0) {
          uVar13 = uVar11;
        }
        uVar11 = uVar13 | 4;
        if ((uVar1 & 4) == 0) {
          uVar11 = uVar13;
        }
        uVar13 = uVar11 | 2;
        if ((uVar1 & 2) == 0) {
          uVar13 = uVar11;
        }
        *(ushort *)((longlong)puVar12 + 10) = uVar13;
      }
      uVar5 = uVar5 + 1;
      puVar12 = puVar12 + 2;
      puVar16 = local_170;
      uVar4 = local_180;
      iVar6 = iVar15;
    } while (uVar5 < local_17c);
  }
  local_184 = iVar6;
  iVar6 = iVar15;
  if ((iVar20 != 0) &&
     (local_168 = *(undefined8 **)(param_1 + 2), iVar6 = local_184, local_168 != (undefined8 *)0x0))
  {
    do {
      uVar4 = FUN_18312e620(local_168,local_120);
      plVar17 = local_120;
      uVar18 = 1;
      uVar5 = 0;
      iVar6 = local_184;
      do {
        if ((uVar4 & (uVar18 | 1 << (uVar5 + 0x10 & 0x1f))) == 0) break;
        local_150[0] = 0;
        iVar20 = WSAEnumNetworkEvents(*plVar17,0,local_150);
        if (((iVar20 == 0) && (local_158 != (int *)0x0)) && ((iVar8 < 1 && (local_150[0] != 0)))) {
          iVar6 = iVar6 + 1;
        }
        WSAEventSelect(*plVar17,*(undefined8 *)(param_1 + 0x5e),0);
        uVar5 = uVar5 + 1;
        uVar18 = uVar18 << 1 | (uint)((int)uVar18 < 0);
        plVar17 = plVar17 + 1;
      } while (uVar5 < 5);
      local_168 = (undefined8 *)local_168[1];
      local_184 = iVar6;
    } while (local_168 != (undefined8 *)0x0);
    local_168 = (undefined8 *)0x0;
    uVar4 = local_180;
  }
  WSAResetEvent(*(undefined8 *)(param_1 + 0x5e));
  puVar9 = local_170;
LAB_18313084d:
  if (local_188 != '\0') {
    (*(code *)PTR_free_183dc6688)(puVar9);
  }
  if (local_158 != (int *)0x0) {
    *local_158 = iVar6;
  }
  if (((((param_6 != '\0') && (uVar4 == 0)) && (param_7 == '\0')) &&
      ((local_17c = 0, *param_1 == 0xbab1e && (*(char *)((longlong)param_1 + 0x182) == '\0')))) &&
     ((iVar20 = FUN_183130110(param_1,&local_17c), iVar20 == 0 && (local_17c != 0)))) {
    uVar4 = local_178;
    if (((int)local_17c <= (int)local_178) && (uVar4 = local_17c, (int)local_17c < 0)) {
      uVar4 = local_178;
    }
    thunk_FUN_183151770((longlong)(int)uVar4);
  }
  return 0;
}


