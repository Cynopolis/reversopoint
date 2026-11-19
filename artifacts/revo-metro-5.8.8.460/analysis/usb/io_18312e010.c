/* 0x18312e010 size=0x3b
   WSASetEvent
*/


undefined4 FUN_18312e010(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0xbab1e)) {
    iVar1 = WSASetEvent(*(undefined8 *)(param_1 + 0x5e));
    uVar2 = 9;
    if (iVar1 != 0) {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 1;
}


