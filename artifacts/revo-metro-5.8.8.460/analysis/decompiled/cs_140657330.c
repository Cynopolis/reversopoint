// 140657330  FUN_140657330  size=0xd7  calls ~QUrl (site 14065739d)

void FUN_140657330(void)

{
  bool bVar1;
  QString *this;
  QUrl *pQVar2;
  QTypedArrayData<unsigned_short> *local_res10;
  QUrl local_res18 [16];
  
  this = (QString *)thunk_FUN_140653c40(&local_res10);
  bVar1 = QString::operator==(this,"zh_CN");
  QString::~QString((QString *)&local_res10);
  if (bVar1) {
    local_res10 = QString::fromAscii_helper("https://www.revopoint3d.com.cn/yszc.html",0x28);
    pQVar2 = (QUrl *)QUrl::QUrl(local_res18,(QString *)&local_res10,0);
    QDesktopServices::openUrl(pQVar2);
    QUrl::~QUrl(local_res18);
    QString::~QString((QString *)&local_res10);
    return;
  }
  local_res10 = QString::fromAscii_helper
                          ("https://www.revopoint3d.com/pages/revoscan-privacy-policy",0x39);
  pQVar2 = (QUrl *)QUrl::QUrl(local_res18,(QString *)&local_res10,0);
  QDesktopServices::openUrl(pQVar2);
  QUrl::~QUrl(local_res18);
  QString::~QString((QString *)&local_res10);
  return;
}


