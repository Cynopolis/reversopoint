/* 0x183180160 size=0x49
   CloseHandle
*/


undefined8 FUN_183180160(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  CloseHandle((HANDLE)*param_1);
  FUN_18000178f(param_1 + 4);
  FUN_18000178f(param_1 + 3);
  FUN_18001e0e2(param_1,0x28);
  return 1;
}


