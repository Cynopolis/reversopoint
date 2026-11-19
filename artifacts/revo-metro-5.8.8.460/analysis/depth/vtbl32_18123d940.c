// vtable slot 32 (thunk 0x180012d6e) -> FUN_18123d940 @ 0x18123d940  size=203

undefined8 FUN_18123d940(longlong param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined8 *puVar3;
  
  if (param_2 != (char *)0x0) {
    pcVar2 = strstr(param_2,"995b2f683da44aae");
    if (pcVar2 != (char *)0x0) {
      cVar1 = thunk_FUN_181327660(*(undefined8 *)(param_1 + 0x370),0);
      if (cVar1 == '\0') {
        puVar3 = (undefined8 *)thunk_FUN_183196718(0x10);
        if (puVar3 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar3 + 1) = 0;
          *puVar3 = cs::InnerAuthorizer::vftable;
        }
        thunk_FUN_181327490(*(undefined8 *)(param_1 + 0x370),0,puVar3);
      }
      return 0;
    }
  }
  if (param_2 == (char *)0x0) {
    param_2 = "node";
  }
  thunk_FUN_18317f440("[SDK ERROR] not support this init code:%s\n",param_2);
  cVar1 = thunk_FUN_181327660(*(undefined8 *)(param_1 + 0x370),0);
  if (cVar1 != '\0') {
    thunk_FUN_181327810(*(undefined8 *)(param_1 + 0x370),0);
  }
  return 1;
}


