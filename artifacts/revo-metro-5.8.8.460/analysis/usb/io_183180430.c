/* 0x183180430 size=0xf5
   ReadFile
*/


DWORD FUN_183180430(undefined8 *param_1,longlong *param_2,DWORD param_3)

{
  BOOL BVar1;
  longlong lVar2;
  DWORD local_res8 [2];
  
  local_res8[0] = 0;
  if (*(int *)(param_1 + 2) == -1) {
    BVar1 = ReadFile((HANDLE)*param_1,param_2,param_3,local_res8,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      local_res8[0] = 0xffffffff;
    }
    return local_res8[0];
  }
  if ((7 < param_3) && (*(int *)((longlong)param_1 + 0x14) == 0)) {
    LOCK();
    *(undefined4 *)((longlong)param_1 + 0x14) = 1;
    UNLOCK();
    lVar2 = thunk_FUN_1831807d0(FUN_18317fa70,param_1);
    if (lVar2 == 0) {
      LOCK();
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
      UNLOCK();
      local_res8[0] = 0xffffffff;
    }
    else {
      BVar1 = ReadFile((HANDLE)*param_1,param_2,param_3,local_res8,(LPOVERLAPPED)0x0);
      if (BVar1 == 0) {
        LOCK();
        *(undefined4 *)((longlong)param_1 + 0x14) = 0;
        UNLOCK();
        thunk_FUN_183180970(lVar2);
        local_res8[0] = 0xffffffff;
      }
      else {
        LOCK();
        *(undefined4 *)((longlong)param_1 + 0x14) = 0;
        UNLOCK();
        thunk_FUN_183180970(lVar2);
        if (*param_2 == s_wjhlumei_183a29770._0_8_) {
          local_res8[0] = 0;
        }
      }
    }
    return local_res8[0];
  }
  return 0xffffffff;
}


