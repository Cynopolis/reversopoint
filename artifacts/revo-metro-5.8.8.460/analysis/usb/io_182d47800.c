/* 0x182d47800 size=0x1a2
   WaitForSingleObject
*/


void FUN_182d47800(longlong param_1)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  HANDLE hThread;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  hThread = GetCurrentThread();
  SetThreadPriority(hThread,-1);
  uVar9 = (uint)(1L << ((byte)*(undefined4 *)(param_1 + 0x18) & 0x3f));
  uVar10 = (ulonglong)(int)uVar9;
  lVar13 = **(longlong **)(*(longlong *)(param_1 + 0x10) + 0x20);
  *(longlong *)(param_1 + 0x28) = lVar13;
  *(undefined8 *)(param_1 + 0x30) = 0;
  LOCK();
  puVar1 = (ulonglong *)(lVar13 + 0x10);
  *puVar1 = *puVar1 | uVar10;
  UNLOCK();
  LOCK();
  **(ulonglong **)(param_1 + 0x10) = **(ulonglong **)(param_1 + 0x10) | uVar10;
  UNLOCK();
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x20),0xffffffff);
  puVar1 = *(ulonglong **)(param_1 + 0x10);
  cVar2 = (char)puVar1[3];
  while (cVar2 != '\0') {
    puVar5 = *(undefined8 **)(param_1 + 0x30);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,*(undefined4 *)(param_1 + 0x18));
      lVar13 = *(longlong *)(param_1 + 0x30);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar13 + 0x30));
      *(int *)(lVar13 + 0x60) = *(int *)(lVar13 + 0x60) + 1;
      WakeAllConditionVariable((PCONDITION_VARIABLE)(lVar13 + 0x58));
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar13 + 0x30));
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    do {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 8))
                (*(longlong **)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x18));
      if (*(char *)(*(longlong *)(param_1 + 0x28) + 0x20) == '\0') {
        iVar11 = 0xb;
      }
      else {
        iVar11 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x1c);
      }
      lVar13 = -1;
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + 8);
      if (0 < (int)uVar3) {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20);
        uVar12 = (ulonglong)uVar3;
        lVar8 = 0;
        do {
          lVar7 = *(longlong *)(lVar6 + lVar8 * 8);
          if ((*(char *)(lVar7 + 0x20) != '\0') && (iVar4 = *(int *)(lVar7 + 0x1c), iVar4 < iVar11))
          {
            lVar13 = lVar8;
            iVar11 = iVar4;
          }
          lVar8 = lVar8 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        if ((lVar13 != -1) && (*(longlong *)(param_1 + 0x28) != *(longlong *)(lVar6 + lVar13 * 8)))
        {
          LOCK();
          puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x28) + 0x10);
          *puVar1 = *puVar1 & (longlong)(int)~uVar9;
          UNLOCK();
          lVar13 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + lVar13 * 8);
          *(longlong *)(param_1 + 0x28) = lVar13;
          LOCK();
          puVar1 = (ulonglong *)(lVar13 + 0x10);
          *puVar1 = *puVar1 | uVar10;
          UNLOCK();
        }
      }
    } while (*(char *)(*(longlong *)(param_1 + 0x28) + 0x20) != '\0');
    LOCK();
    **(ulonglong **)(param_1 + 0x10) = **(ulonglong **)(param_1 + 0x10) | uVar10;
    UNLOCK();
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x20),0xffffffff);
    puVar1 = *(ulonglong **)(param_1 + 0x10);
    cVar2 = (char)puVar1[3];
  }
  LOCK();
  *puVar1 = *puVar1 | uVar10;
  UNLOCK();
  return;
}


