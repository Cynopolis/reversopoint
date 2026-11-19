/* 0x18312cb10 size=0x147
   WSACreateEvent
*/


undefined4 * FUN_18312cb10(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  puVar3 = (undefined4 *)(*(code *)PTR_calloc_183dc66a0)(1,0x188);
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar3 = 0xbab1e;
  iVar2 = thunk_FUN_183146430(puVar3 + 0x20);
  if (((iVar2 == 0) &&
      (iVar2 = thunk_FUN_183145510(puVar3 + 0x2e,param_1,&LAB_18312e070,&LAB_18312e060,
                                   &DAT_183130d10), iVar2 == 0)) &&
     (iVar2 = thunk_FUN_183137f20(puVar3 + 0x3a,param_2), iVar2 == 0)) {
    thunk_FUN_183144fd0(puVar3 + 8,0);
    thunk_FUN_183144fd0(puVar3 + 0x10,0);
    *(undefined1 *)(puVar3 + 0x60) = 1;
    puVar3[0x50] = 0xffffffff;
    puVar3[0x5c] = 100;
    uVar1 = thunk_FUN_183145cf0(0);
    *(undefined1 *)((longlong)puVar3 + 0x183) = uVar1;
    lVar4 = WSACreateEvent();
    *(longlong *)(puVar3 + 0x5e) = lVar4;
    if (lVar4 != 0) {
      return puVar3;
    }
  }
  thunk_FUN_183145490(puVar3 + 0x2e);
  thunk_FUN_183145490(puVar3 + 0x20);
  thunk_FUN_183137930(puVar3 + 0x3a);
  thunk_FUN_183144ee0(puVar3 + 8,0);
  thunk_FUN_183144ee0(puVar3 + 0x10,0);
  (*(code *)PTR_free_183dc6688)(puVar3);
  return (undefined4 *)0x0;
}


