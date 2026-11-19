// 14065c9d0  FUN_14065c9d0  size=0x36  calls ~QUrl (site 14065c9fb)

void FUN_14065c9d0(undefined8 param_1,undefined8 param_2)

{
  QUrl *pQVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  pQVar1 = (QUrl *)QUrl::fromLocalFile((QString *)local_res10);
  QDesktopServices::openUrl(pQVar1);
  QUrl::~QUrl((QUrl *)local_res10);
  return;
}


