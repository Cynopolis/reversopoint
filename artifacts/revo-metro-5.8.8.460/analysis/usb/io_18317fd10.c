/* 0x18317fd10 size=0x18e
   CloseHandle
*/


undefined8 FUN_18317fd10(longlong *param_1,longlong *param_2)

{
  BOOL BVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  HANDLE local_res18;
  HANDLE local_res20;
  _SECURITY_ATTRIBUTES local_38;
  
  local_38.bInheritHandle = 1;
  puVar3 = (undefined8 *)0x0;
  local_38.lpSecurityDescriptor = (LPVOID)0x0;
  local_38.nLength = 0x18;
  local_res18 = (HANDLE)0x0;
  local_res20 = (HANDLE)0x0;
  BVar1 = CreatePipe(&local_res18,&local_res20,&local_38,0);
  if (BVar1 != 0) {
    puVar2 = (undefined8 *)thunk_FUN_183196718(0x28);
    puVar4 = puVar3;
    if (puVar2 != (undefined8 *)0x0) {
      thunk_FUN_183180a50(puVar2 + 3);
      thunk_FUN_183180a50(puVar2 + 4);
      puVar4 = puVar2;
    }
    puVar2 = (undefined8 *)thunk_FUN_183196718(0x28);
    if (puVar2 != (undefined8 *)0x0) {
      thunk_FUN_183180a50(puVar2 + 3);
      thunk_FUN_183180a50(puVar2 + 4);
      puVar3 = puVar2;
    }
    if ((puVar4 != (undefined8 *)0x0) && (puVar3 != (undefined8 *)0x0)) {
      *puVar4 = local_res18;
      puVar4[1] = local_res20;
      *(undefined4 *)(puVar4 + 2) = 0xffffffff;
      LOCK();
      *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
      UNLOCK();
      *puVar3 = local_res20;
      puVar3[1] = local_res18;
      *(undefined4 *)(puVar3 + 2) = 0xffffffff;
      LOCK();
      *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
      UNLOCK();
      *param_1 = (longlong)puVar4;
      *param_2 = (longlong)puVar3;
      return 1;
    }
    CloseHandle(local_res18);
    CloseHandle(local_res20);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_18000178f(puVar4 + 4);
      FUN_18000178f(puVar4 + 3);
      FUN_18001e0e2(puVar4,0x28);
    }
    if (puVar3 != (undefined8 *)0x0) {
      FUN_18000178f(puVar3 + 4);
      FUN_18000178f(puVar3 + 3);
      FUN_18001e0e2(puVar3,0x28);
    }
  }
  return 0;
}


