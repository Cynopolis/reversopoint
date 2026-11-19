/* 0x183180750 size=0x65
   CloseHandle
*/


undefined8 FUN_183180750(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x18);
  while (cVar1 == '\0') {
    Sleep(1);
    cVar1 = *(char *)(param_1 + 0x18);
  }
  thunk_FUN_183180af0(param_1 + 0x10);
  FUN_18002691d(param_1 + 0x10);
  CloseHandle(*(HANDLE *)(param_1 + 0x20));
  FUN_18000178f(param_1 + 0x10);
  FUN_18001e0e2(param_1,0x28);
  return 1;
}


