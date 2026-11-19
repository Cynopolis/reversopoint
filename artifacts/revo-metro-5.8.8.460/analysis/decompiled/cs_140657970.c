// 140657970  FUN_140657970  size=0xdb  calls ~QUrl (site 1406579e1)

void FUN_140657970(undefined8 param_1,QTypedArrayData<unsigned_short> *param_2)

{
  bool bVar1;
  QString *this;
  QUrl *pQVar2;
  QTypedArrayData<unsigned_short> *local_res10;
  QUrl local_res18 [16];
  
  local_res10 = param_2;
  this = (QString *)thunk_FUN_140653c40(&local_res10);
  bVar1 = QString::operator==(this,"zh_CN");
  QString::~QString((QString *)&local_res10);
  if (bVar1) {
    local_res10 = QString::fromAscii_helper
                            ("https://www.revopoint3d.com.cn/index.php?c=category&id=81",0x39);
    pQVar2 = (QUrl *)QUrl::QUrl(local_res18,(QString *)&local_res10,0);
    QDesktopServices::openUrl(pQVar2);
    QUrl::~QUrl(local_res18);
    QString::~QString((QString *)&local_res10);
    return;
  }
  local_res10 = QString::fromAscii_helper("https://www.revopoint3d.com/pages/user-agreement",0x30);
  pQVar2 = (QUrl *)QUrl::QUrl(local_res18,(QString *)&local_res10,0);
  QDesktopServices::openUrl(pQVar2);
  QUrl::~QUrl(local_res18);
  QString::~QString((QString *)&local_res10);
  return;
}


