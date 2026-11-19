/* 0x181f1b980 size=0x4a4
   CloseHandle
   ReadFile
*/


undefined8 * FUN_181f1b980(LPCSTR param_1)

{
  uint uVar1;
  int *_Memory;
  DWORD DVar2;
  BOOL BVar3;
  HANDLE hFile;
  undefined8 *_Memory_00;
  void *pvVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 auStackY_c8 [8];
  ulonglong local_68;
  int *local_60;
  uint local_44 [4];
  uint local_34;
  int *local_30;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  
  puVar6 = auStackY_c8;
  for (lVar5 = 0x30; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = 0xcccccccc;
    puVar6 = puVar6 + 1;
  }
  hFile = CreateFileA(param_1,0x80000000,2,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    _Memory_00 = (undefined8 *)0x0;
  }
  else {
    DVar2 = GetFileSize(hFile,(LPDWORD)0x0);
    if (DVar2 == 0xffffffff) {
      CloseHandle(hFile);
      _Memory_00 = (undefined8 *)0x0;
    }
    else {
      if (DVar2 < DVar2 << 1) {
        local_30 = malloc((ulonglong)(DVar2 << 1));
      }
      else {
        local_30 = (int *)0x0;
      }
      _Memory = local_30;
      if (local_30 == (int *)0x0) {
        CloseHandle(hFile);
        _Memory_00 = (undefined8 *)0x0;
      }
      else {
        local_68 = (ulonglong)DVar2;
        local_60 = local_30;
        do {
          BVar3 = ReadFile(hFile,local_60,(DWORD)local_68,local_44,(LPOVERLAPPED)0x0);
          if ((BVar3 == 0) || (local_44[0] < local_68)) {
            CloseHandle(hFile);
            free(_Memory);
            _Memory_00 = (undefined8 *)0x0;
            goto LAB_181f1be06;
          }
          local_60 = (int *)((longlong)local_60 + (ulonglong)local_44[0]);
          local_68 = local_68 - local_44[0];
        } while (local_68 != 0);
        CloseHandle(hFile);
        if ((*_Memory == -0x6afbed22) || (*_Memory == -0x21edfb6b)) {
          _Memory_00 = calloc(1,0x48);
          if (_Memory_00 == (undefined8 *)0x0) {
            free(_Memory);
            _Memory_00 = (undefined8 *)0x0;
          }
          else {
            *_Memory_00 = _Memory;
            _Memory_00[1] = (longlong)_Memory + (ulonglong)DVar2;
            local_28 = (uint)(*_Memory != -0x6afbed22);
            *(uint *)(_Memory_00 + 2) = local_28;
            if (*(int *)(_Memory_00 + 2) == 0) {
              local_24 = _Memory[1];
            }
            else {
              local_24 = FUN_181f1b7b0(_Memory[1]);
            }
            local_20 = local_24;
            if (local_24 == 0) {
              if (*(int *)(_Memory_00 + 2) == 0) {
                local_1c = _Memory[2];
              }
              else {
                local_1c = FUN_181f1b7b0(_Memory[2]);
              }
              local_34 = local_1c;
              uVar1 = local_34;
              if (local_1c < 0xffff) {
                local_34._0_2_ = (undefined2)local_1c;
                *(undefined2 *)((longlong)_Memory_00 + 0x14) = (undefined2)local_34;
                local_34 = uVar1;
                if (*(int *)(_Memory_00 + 2) == 0) {
                  local_18 = _Memory[3];
                }
                else {
                  local_18 = FUN_181f1b7b0(_Memory[3]);
                }
                _Memory_00[5] = (longlong)_Memory + (ulonglong)local_18;
                if (*(int *)(_Memory_00 + 2) == 0) {
                  local_14 = _Memory[4];
                }
                else {
                  local_14 = FUN_181f1b7b0(_Memory[4]);
                }
                _Memory_00[6] = (longlong)_Memory + (ulonglong)local_14;
                if (*(int *)(_Memory_00 + 2) == 0) {
                  local_10 = _Memory[5];
                }
                else {
                  local_10 = FUN_181f1b7b0(_Memory[5]);
                }
                *(int *)(_Memory_00 + 7) = local_10;
                if (*(int *)(_Memory_00 + 2) == 0) {
                  local_c = _Memory[6];
                }
                else {
                  local_c = FUN_181f1b7b0(_Memory[6]);
                }
                _Memory_00[8] = (longlong)_Memory + (ulonglong)local_c;
                pvVar4 = calloc((ulonglong)*(ushort *)((longlong)_Memory_00 + 0x14),2);
                _Memory_00[3] = pvVar4;
                if (_Memory_00[3] != 0) goto LAB_181f1be06;
              }
            }
            free(_Memory);
            free(_Memory_00);
            _Memory_00 = (undefined8 *)0x0;
          }
        }
        else {
          free(_Memory);
          _Memory_00 = (undefined8 *)0x0;
        }
      }
    }
  }
LAB_181f1be06:
  _RTC_CheckStackVars(auStackY_c8,&DAT_183537610);
  return _Memory_00;
}


