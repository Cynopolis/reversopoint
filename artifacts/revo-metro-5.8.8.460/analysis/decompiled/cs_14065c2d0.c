// 14065c2d0  FUN_14065c2d0  size=0x36  calls ~QUrl (site 14065c2fb)

void FUN_14065c2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  QUrl *pQVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  pQVar1 = (QUrl *)QUrl::fromLocalFile((QString *)local_res18);
  QDesktopServices::openUrl(pQVar1);
  QUrl::~QUrl((QUrl *)local_res18);
  return;
}


