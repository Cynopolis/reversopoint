/* 0x1829639e0 size=0xb2
   WaitForSingleObjectEx
*/


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1829639e0(int *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  DWORD DVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_183dc69c0 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 2);
  iVar1 = *param_1;
  lVar3 = *(longlong *)(param_1 + 4);
  if (*(int *)(lVar2 + 0x3760) != 0) {
    do {
      DVar4 = WaitForSingleObjectEx
                        (*(HANDLE *)(*(longlong *)(lVar2 + 0x37d8) + (longlong)iVar1 * 8),0xffffffff
                         ,0);
      if (DVar4 == 0) {
        if (*(int *)(lVar2 + 0x3760) == 0) {
          return 0;
        }
        *(undefined1 **)(lVar3 + 0xf58) = local_28;
        FUN_1829625c0(lVar2);
      }
    } while (*(int *)(lVar2 + 0x3760) != 0);
  }
  return 0;
}


