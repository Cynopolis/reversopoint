// vtable slot 46 (thunk 0x180002e28) -> FUN_18124cad0 @ 0x18124cad0  size=191

undefined8 FUN_18124cad0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 local_res8 [16];
  undefined1 local_68 [8];
  undefined1 local_60;
  undefined **local_50;
  undefined1 *local_48;
  undefined1 local_40;
  longlong local_38;
  undefined ***local_18;
  
  thunk_FUN_1831809d0(local_res8,param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0x338) = param_2;
  *(undefined8 *)(param_1 + 0x340) = param_3;
  local_18 = (undefined ***)0x0;
  cVar1 = thunk_FUN_181208700(local_68);
  if (cVar1 != '\0') {
    local_50 = std::
               _Func_impl_no_alloc<std::_Binder<std::_Unforced,void_(__cdecl_cs::Camera::*)(cs::DeviceDataPacketView_const&___ptr64)___ptr64,cs::Camera*___ptr64,std::_Ph<1>_const&___ptr64>,void,cs::DeviceDataPacketView_const&___ptr64>
               ::vftable;
    local_48 = &LAB_18001ed71;
    local_40 = local_60;
    local_18 = &local_50;
    local_38 = param_1;
  }
  (**(code **)(**(longlong **)(param_1 + 200) + 0x110))(*(longlong **)(param_1 + 200),&local_50);
  thunk_FUN_183180a80(local_res8);
  return 0;
}


