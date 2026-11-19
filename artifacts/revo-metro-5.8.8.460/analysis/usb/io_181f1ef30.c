/* 0x181f1ef30 size=0x281
   CloseHandle
   CreateEventA
*/


undefined8 * FUN_181f1ef30(undefined8 param_1)

{
  undefined8 *lpParameter;
  HANDLE pvVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 auStackY_98 [8];
  _SECURITY_ATTRIBUTES local_50;
  DWORD local_24 [7];
  
  puVar4 = auStackY_98;
  for (lVar3 = 0x24; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  memset(&local_50,0,0x18);
  local_50.nLength = 0x18;
  local_50.bInheritHandle = 0;
  lpParameter = calloc(1,0x1068);
  if (lpParameter == (undefined8 *)0x0) {
    lpParameter = (undefined8 *)0x0;
  }
  else {
    *lpParameter = param_1;
    pvVar1 = CreateEventA(&local_50,1,0,(LPCSTR)0x0);
    lpParameter[9] = pvVar1;
    if (lpParameter[9] != 0) {
      pvVar1 = CreateEventA(&local_50,1,1,(LPCSTR)0x0);
      lpParameter[10] = pvVar1;
    }
    if (lpParameter[10] != 0) {
      pvVar1 = CreateEventA(&local_50,1,0,(LPCSTR)0x0);
      lpParameter[0xb] = pvVar1;
    }
    if (((lpParameter[9] == 0) || (lpParameter[10] == 0)) || (lpParameter[0xb] == 0)) {
      if (lpParameter[9] != 0) {
        CloseHandle((HANDLE)lpParameter[9]);
      }
      if (lpParameter[10] != 0) {
        CloseHandle((HANDLE)lpParameter[10]);
      }
      if (lpParameter[0xb] != 0) {
        CloseHandle((HANDLE)lpParameter[0xb]);
      }
      thunk_FUN_181cad2d0(lpParameter);
      lpParameter = (undefined8 *)0x0;
    }
    else {
      uVar2 = FUN_181f1e170(lpParameter[10]);
      lpParameter[10] = uVar2;
      InitializeCriticalSection((LPCRITICAL_SECTION)(lpParameter + 2));
      pvVar1 = CreateThread(&local_50,0,FUN_181f1ec70,lpParameter,0,local_24);
      lpParameter[1] = pvVar1;
      if (lpParameter[1] == 0) {
        DeleteCriticalSection((LPCRITICAL_SECTION)(lpParameter + 2));
        if (lpParameter[9] != 0) {
          CloseHandle((HANDLE)lpParameter[9]);
        }
        if (lpParameter[10] != 0) {
          CloseHandle((HANDLE)lpParameter[10]);
        }
        if (lpParameter[0xb] != 0) {
          CloseHandle((HANDLE)lpParameter[0xb]);
        }
        thunk_FUN_181cad2d0(lpParameter);
        lpParameter = (undefined8 *)0x0;
      }
    }
  }
  _RTC_CheckStackVars(auStackY_98,&DAT_183537940);
  return lpParameter;
}


