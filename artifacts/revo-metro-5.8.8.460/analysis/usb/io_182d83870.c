/* 0x182d83870 size=0x117
   CreateEventW
*/


undefined8 * FUN_182d83870(undefined8 *param_1)

{
  HANDLE pvVar1;
  
  memset(param_1 + 9,0,0x88);
  memset(param_1 + 0x723,0,0x990);
  pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  param_1[0x9f4] = pvVar1;
  pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  param_1[0x9f6] = pvVar1;
  *(undefined2 *)(param_1 + 0x855) = 0;
  param_1[0x859] = 0;
  param_1[0x85a] = 0;
  *(undefined4 *)((longlong)param_1 + 0x42dc) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x856] = 0;
  param_1[0x85c] = 0;
  param_1[0x85d] = 0;
  param_1[0x85e] = 0;
  *(undefined4 *)(param_1 + 0x857) = 0;
  param_1[0x858] = 0;
  memset(param_1 + 9,0,0x4260);
  param_1[0x9f3] = 0;
  param_1[0x9f8] = 0;
  *(undefined1 *)((longlong)param_1 + 0x42aa) = 0;
  param_1[0x9f5] = 0;
  param_1[0x9f7] = 0;
  param_1[0x9f9] = 0;
  param_1[0x9fa] = 0;
  param_1[0x9fb] = 0;
  *(undefined1 *)(param_1 + 0x9ff) = 0;
  return param_1;
}


