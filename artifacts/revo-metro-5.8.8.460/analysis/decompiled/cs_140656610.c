// 140656610  FUN_140656610  size=0x137  calls ~QUrl (site 14065671e)

void FUN_140656610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  QString *pQVar4;
  QUrl *pQVar5;
  undefined8 local_res18;
  QChar local_res20 [8];
  QTypedArrayData<unsigned_short> *local_38;
  QTypedArrayData<unsigned_short> *local_30;
  QString local_28 [8];
  QString local_20 [8];
  QString local_18 [8];
  QString local_10 [8];
  
  local_res18 = param_3;
  uVar2 = QCoreApplication::applicationDirPath();
  thunk_FUN_14025f9b0(local_20,uVar2,&DAT_141053a22);
  QString::~QString(local_18);
  local_30 = QString::fromAscii_helper("%1/%2",5);
  puVar3 = (undefined2 *)QChar::QChar((QChar *)&local_res18,0x20);
  pQVar4 = (QString *)QString::arg((QString *)&local_30,local_10,local_20,0,*puVar3);
  puVar3 = (undefined2 *)QChar::QChar(local_res20,0x20);
  uVar1 = *puVar3;
  local_38 = QString::fromAscii_helper("third_party_module_licenses.html",0x20);
  QString::arg(pQVar4,local_28,&local_38,0,uVar1);
  QString::~QString((QString *)&local_38);
  QString::~QString(local_10);
  QString::~QString((QString *)&local_30);
  pQVar5 = (QUrl *)QUrl::fromLocalFile(local_18);
  QDesktopServices::openUrl(pQVar5);
  QUrl::~QUrl((QUrl *)local_18);
  QString::~QString(local_28);
  QString::~QString(local_20);
  return;
}


