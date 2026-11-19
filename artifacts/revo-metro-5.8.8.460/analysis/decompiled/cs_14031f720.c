// 14031f720  FUN_14031f720  size=0xdb  calls ~QUrl (site 14031f791)

void FUN_14031f720(undefined8 param_1,undefined8 param_2,QTypedArrayData<unsigned_short> *param_3)

{
  bool bVar1;
  QString *this;
  QUrl *pQVar2;
  QTypedArrayData<unsigned_short> *local_res18;
  QUrl local_res20 [8];
  
  local_res18 = param_3;
  this = (QString *)thunk_FUN_140653c40(&local_res18);
  bVar1 = QString::operator!=(this,"zh_CN");
  QString::~QString((QString *)&local_res18);
  if (bVar1) {
    local_res18 = QString::fromAscii_helper("https://www.revopoint3d.com/support/",0x24);
    pQVar2 = (QUrl *)QUrl::QUrl(local_res20,(QString *)&local_res18,0);
    QDesktopServices::openUrl(pQVar2);
    QUrl::~QUrl(local_res20);
    QString::~QString((QString *)&local_res18);
    return;
  }
  local_res18 = QString::fromAscii_helper("https://www.revopoint3d.com.cn/support/",0x27);
  pQVar2 = (QUrl *)QUrl::QUrl(local_res20,(QString *)&local_res18,0);
  QDesktopServices::openUrl(pQVar2);
  QUrl::~QUrl(local_res20);
  QString::~QString((QString *)&local_res18);
  return;
}


