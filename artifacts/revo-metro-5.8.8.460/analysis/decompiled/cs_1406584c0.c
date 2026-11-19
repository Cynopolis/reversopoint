// 1406584c0  FUN_1406584c0  size=0x166  calls ~QUrl (site 1406585da)

void FUN_1406584c0(int param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  QString *pQVar4;
  QUrl *pQVar5;
  QChar local_res8 [8];
  QChar local_48 [8];
  QTypedArrayData<unsigned_short> *local_40;
  QTypedArrayData<unsigned_short> *local_38;
  QString local_30 [8];
  QString local_28 [8];
  QString local_20 [8];
  QString local_18 [16];
  
  if (param_1 == 0) {
    if (param_2 != 0) {
      FUN_140036f43(param_2,0x18);
    }
  }
  else if (param_1 == 1) {
    uVar2 = QCoreApplication::applicationDirPath();
    thunk_FUN_14025f9b0(local_28,uVar2,&DAT_141053a22);
    QString::~QString(local_20);
    local_38 = QString::fromAscii_helper("%1/%2",5);
    puVar3 = (undefined2 *)QChar::QChar(local_res8,0x20);
    pQVar4 = (QString *)QString::arg((QString *)&local_38,local_18,local_28,0,*puVar3);
    puVar3 = (undefined2 *)QChar::QChar(local_48,0x20);
    uVar1 = *puVar3;
    local_40 = QString::fromAscii_helper("third_party_module_licenses.html",0x20);
    QString::arg(pQVar4,local_30,&local_40,0,uVar1);
    QString::~QString((QString *)&local_40);
    QString::~QString(local_18);
    QString::~QString((QString *)&local_38);
    pQVar5 = (QUrl *)QUrl::fromLocalFile(local_20);
    QDesktopServices::openUrl(pQVar5);
    QUrl::~QUrl((QUrl *)local_20);
    QString::~QString(local_30);
    QString::~QString(local_28);
    return;
  }
  return;
}


