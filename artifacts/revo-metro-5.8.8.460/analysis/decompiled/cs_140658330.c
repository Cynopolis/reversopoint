// 140658330  FUN_140658330  size=0x108  calls ~QUrl (site 1406583b1)

void FUN_140658330(int param_1,longlong param_2)

{
  bool bVar1;
  QString *this;
  QUrl *pQVar2;
  QTypedArrayData<unsigned_short> *local_18;
  QUrl local_10 [8];
  
  if (param_1 == 0) {
    if (param_2 != 0) {
      FUN_140036f43(param_2,0x18);
      return;
    }
  }
  else if (param_1 == 1) {
    this = (QString *)thunk_FUN_140653c40(&local_18);
    bVar1 = QString::operator==(this,"zh_CN");
    QString::~QString((QString *)&local_18);
    if (bVar1) {
      local_18 = QString::fromAscii_helper
                           ("https://www.revopoint3d.com.cn/index.php?c=category&id=81",0x39);
      pQVar2 = (QUrl *)QUrl::QUrl(local_10,(QString *)&local_18,0);
      QDesktopServices::openUrl(pQVar2);
      QUrl::~QUrl(local_10);
      QString::~QString((QString *)&local_18);
      return;
    }
    local_18 = QString::fromAscii_helper("https://www.revopoint3d.com/pages/user-agreement",0x30);
    pQVar2 = (QUrl *)QUrl::QUrl(local_10,(QString *)&local_18,0);
    QDesktopServices::openUrl(pQVar2);
    QUrl::~QUrl(local_10);
    QString::~QString((QString *)&local_18);
    return;
  }
  return;
}


