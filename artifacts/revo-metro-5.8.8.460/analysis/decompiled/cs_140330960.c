// 140330960  FUN_140330960  size=0x55  calls ~QUrl (site 14033099e)

void FUN_140330960(void)

{
  QUrl *pQVar1;
  QTypedArrayData<unsigned_short> *local_res10;
  QUrl local_res18 [16];
  
  local_res10 = QString::fromAscii_helper("https://forum.revopoint3d.com/",0x1e);
  pQVar1 = (QUrl *)QUrl::QUrl(local_res18,(QString *)&local_res10,0);
  QDesktopServices::openUrl(pQVar1);
  QUrl::~QUrl(local_res18);
  QString::~QString((QString *)&local_res10);
  return;
}


