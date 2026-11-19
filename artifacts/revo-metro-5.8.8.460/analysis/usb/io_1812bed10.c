/* 0x1812bed10 size=0x24
   CancelIo
*/


void FUN_1812bed10(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CancelIo((HANDLE)*param_1);
    FUN_1812bec80(param_1);
  }
  return;
}


