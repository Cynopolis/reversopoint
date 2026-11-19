/* 0x1812c0860 size=0xa3
   CreateEventW
*/


undefined8 * FUN_1812c0860(void)

{
  undefined8 *puVar1;
  HANDLE pvVar2;
  
  puVar1 = calloc(1,0x90);
  *puVar1 = 0xffffffffffffffff;
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined2 *)((longlong)puVar1 + 0xc) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined2 *)(puVar1 + 4) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  puVar1[0xc] = pvVar2;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  pvVar2 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  puVar1[0x10] = pvVar2;
  puVar1[0x11] = 0;
  return puVar1;
}


