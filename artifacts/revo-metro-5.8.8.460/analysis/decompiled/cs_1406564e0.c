// 1406564e0  FUN_1406564e0  size=0xdb  calls ~QUrl (site 140656551)

void FUN_1406564e0(undefined8 param_1,undefined8 param_2,QTypedArrayData<unsigned_short> *param_3)

{
  bool bVar1;
  QString *this;
  QUrl *pQVar2;
  QTypedArrayData<unsigned_short> *local_res18;
  QUrl local_res20 [8];
  
  local_res18 = param_3;
  this = (QString *)thunk_FUN_140653c40(&local_res18);
  bVar1 = QString::operator==(this,"zh_CN");
  QString::~QString((QString *)&local_res18);
  if (bVar1) {
    local_res18 = QString::fromAscii_helper
                            ("https://www.revopoint3d.com.cn/index.php?c=category&id=81",0x39);
    pQVar2 = (QUrl *)QUrl::QUrl(local_res20,(QString *)&local_res18,0);
    QDesktopServices::openUrl(pQVar2);
    QUrl::~QUrl(local_res20);
    QString::~QString((QString *)&local_res18);
    return;
  }
  local_res18 = QString::fromAscii_helper("https://www.revopoint3d.com/pages/user-agreement",0x30);
  pQVar2 = (QUrl *)QUrl::QUrl(local_res20,(QString *)&local_res18,0);
  QDesktopServices::openUrl(pQVar2);
  QUrl::~QUrl(local_res20);
  QString::~QString((QString *)&local_res18);
  return;
}


