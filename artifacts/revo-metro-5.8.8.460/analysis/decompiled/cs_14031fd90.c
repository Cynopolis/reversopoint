// 14031fd90  FUN_14031fd90  size=0x5a  calls ~QUrl (site 14031fdd3)

void FUN_14031fd90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  QUrl *pQVar1;
  QTypedArrayData<unsigned_short> *local_res18;
  QUrl local_res20 [8];
  
  local_res18 = (QTypedArrayData<unsigned_short> *)param_3;
  local_res18 = QString::fromAscii_helper("https://www.revopoint3d.com/pages/revoscan-5-video",0x32)
  ;
  pQVar1 = (QUrl *)QUrl::QUrl(local_res20,(QString *)&local_res18,0);
  QDesktopServices::openUrl(pQVar1);
  QUrl::~QUrl(local_res20);
  QString::~QString((QString *)&local_res18);
  return;
}


