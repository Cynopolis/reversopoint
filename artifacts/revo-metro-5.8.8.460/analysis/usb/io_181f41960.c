/* 0x181f41960 size=0xb8
   CloseHandle
*/


void FUN_181f41960(code *param_1,undefined4 param_2)

{
  HANDLE hFileMappingObject;
  LPVOID lpBaseAddress;
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 auStackY_48 [8];
  
  puVar2 = auStackY_48;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  hFileMappingObject = OpenFileMappingW(4,0,u__M_B_M_5_S_D__183d6bbf0);
  if (hFileMappingObject != (HANDLE)0x0) {
    lpBaseAddress = MapViewOfFile(hFileMappingObject,4,0,0,0);
    if (lpBaseAddress != (LPVOID)0x0) {
      if (DAT_183e8704c != 0) {
        thunk_FUN_181be5450(s_rndw32_read_mbm_data__got__d_byt_183d6bc10,0x2000);
      }
      (*param_1)(lpBaseAddress,0x2000,param_2);
      UnmapViewOfFile(lpBaseAddress);
    }
    CloseHandle(hFileMappingObject);
  }
  return;
}


