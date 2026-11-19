/* 0x183012f30 size=0xae
   SetEvent
*/


int FUN_183012f30(ulonglong *param_1,int param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  
  iVar3 = 0;
  do {
    uVar1 = *param_1 & param_3;
    if (uVar1 == 0) {
      return iVar3;
    }
    while( true ) {
      lVar5 = 0;
      if (uVar1 != 0) {
        for (; (uVar1 >> lVar5 & 1) == 0; lVar5 = lVar5 + 1) {
        }
      }
      uVar4 = 1L << ((byte)lVar5 & 0x3f);
      uVar1 = *param_1;
      do {
        LOCK();
        uVar2 = *param_1;
        bVar6 = uVar1 == uVar2;
        if (bVar6) {
          *param_1 = uVar1 & (longlong)(int)~(uint)uVar4;
          uVar2 = uVar1;
        }
        UNLOCK();
        uVar1 = uVar2;
      } while (!bVar6);
      if ((uVar4 & uVar2) != 0) break;
      uVar1 = *param_1 & param_3;
      if (uVar1 == 0) {
        return iVar3;
      }
    }
    if ((int)lVar5 < 0) {
      return iVar3;
    }
    lVar5 = (longlong)(int)lVar5 * 0x38;
    *(undefined8 *)(param_1[5] + 0x30 + lVar5) = param_4;
    SetEvent(*(HANDLE *)(param_1[5] + 0x20 + lVar5));
    iVar3 = iVar3 + 1;
  } while (iVar3 < param_2);
  return iVar3;
}


