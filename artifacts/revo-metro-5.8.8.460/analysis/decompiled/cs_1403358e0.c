// 1403358e0  FUN_1403358e0  size=0x5a  calls ~QUrl (site 140335923)

void FUN_1403358e0(undefined8 param_1,undefined8 param_2)

{
  QUrl *pQVar1;
  QTypedArrayData<unsigned_short> *local_res10;
  QUrl local_res18 [16];
  
  local_res10 = (QTypedArrayData<unsigned_short> *)param_2;
  local_res10 = QString::fromAscii_helper("https://forum.revopoint3d.com/",0x1e);
  pQVar1 = (QUrl *)QUrl::QUrl(local_res18,(QString *)&local_res10,0);
  QDesktopServices::openUrl(pQVar1);
  QUrl::~QUrl(local_res18);
  QString::~QString((QString *)&local_res10);
  return;
}


