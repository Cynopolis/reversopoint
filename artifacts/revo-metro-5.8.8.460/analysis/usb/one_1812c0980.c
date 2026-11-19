/* 0x1812c0980 size=0x86 */


void FUN_1812c0980(longlong param_1)

{
  short sVar1;
  DWORD dwMessageId;
  short *psVar2;
  short *local_res8;
  
  dwMessageId = GetLastError();
  FormatMessageW(0x1300,(LPCVOID)0x0,dwMessageId,0x400,(LPWSTR)&local_res8,0,(va_list *)0x0);
  sVar1 = *local_res8;
  psVar2 = local_res8;
  do {
    if (sVar1 == 0) {
LAB_1812c09e8:
      LocalFree(*(HLOCAL *)(param_1 + 0x30));
      *(short **)(param_1 + 0x30) = local_res8;
      return;
    }
    if (sVar1 == 0xd) {
      *psVar2 = 0;
      goto LAB_1812c09e8;
    }
    sVar1 = psVar2[1];
    psVar2 = psVar2 + 1;
  } while( true );
}


