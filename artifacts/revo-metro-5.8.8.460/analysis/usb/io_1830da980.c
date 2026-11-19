/* 0x1830da980 size=0x88
   CloseHandle
*/


void FUN_1830da980(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if ((longlong *)*plVar1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar1 + 0x10))();
    *plVar1 = 0;
  }
  if ((longlong *)plVar1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)plVar1[1] + 0x10))();
    plVar1[1] = 0;
  }
  if ((longlong *)plVar1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)plVar1[2] + 0x10))();
    plVar1[2] = 0;
  }
  if ((longlong *)plVar1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)plVar1[3] + 0x10))();
    plVar1[3] = 0;
  }
  if ((undefined1 *)plVar1[4] == &LAB_1830dafa0) {
    CloseHandle((HANDLE)plVar1[6]);
    plVar1[6] = -1;
    plVar1[4] = 0;
  }
  return;
}


