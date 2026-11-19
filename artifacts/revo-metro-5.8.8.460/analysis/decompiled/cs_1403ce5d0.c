// 1403ce5d0  FUN_1403ce5d0  size=0x66b  calls ~QNetworkRequest (site 1403cebf6)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1403ce5d0(QWidget *param_1)

{
  longlong *plVar1;
  void **ppvVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  QUuid *this;
  QString *pQVar6;
  QString *pQVar7;
  QUrl *pQVar8;
  QNetworkReply *pQVar9;
  undefined8 uVar10;
  code *pcVar11;
  code *pcVar12;
  undefined1 auStackY_188 [32];
  uint in_stack_fffffffffffffeac;
  undefined4 local_138 [2];
  code *local_130;
  QString local_128 [8];
  QString local_120 [8];
  QTypedArrayData<unsigned_short> *local_118;
  QString local_110 [8];
  code *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  QString local_f8 [8];
  QNetworkRequest local_f0 [8];
  QTypedArrayData<unsigned_short> *local_e8;
  QString local_e0 [8];
  QModelIndex local_d8 [32];
  undefined1 local_b8 [116];
  undefined4 local_44;
  code *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_141a19280 ^ (ulonglong)auStackY_188;
  pcVar12 = (code *)0x0;
  local_138[0] = 0;
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    this = (QUuid *)QUuid::createUuid();
    pQVar6 = (QString *)QUuid::toString(this);
    pQVar7 = (QString *)QDir::tempPath();
    QString::QString(local_120,pQVar7);
    local_138[0] = 1;
    pQVar7 = (QString *)QString::fromUtf8((char *)local_110,0x4105c1b0);
    QString::append(local_120,pQVar7);
    QString::~QString(local_110);
    QString::QString(local_128,local_120);
    local_138[0] = 3;
    QString::append(local_128,pQVar6);
    QString::QString((QString *)&local_118,local_128);
    local_138[0] = 7;
    pQVar6 = (QString *)QString::fromUtf8((char *)local_110,0x41071d7c);
    QString::append((QString *)&local_118,pQVar6);
    QString::~QString(local_110);
    QDir::toNativeSeparators(local_e0);
    QString::~QString((QString *)&local_118);
    QString::~QString(local_128);
    QString::~QString(local_120);
    QString::~QString(local_f8);
    QString::~QString((QString *)&local_130);
    QFile::setFileName((QFile *)(param_1 + 0x360),local_e0);
    cVar3 = (**(code **)(*(longlong *)(param_1 + 0x360) + 0x60))(param_1 + 0x360,2);
    if (cVar3 != '\0') {
      local_e8 = QString::fromAscii_helper("https://download.revopoint3d.com/model/",0x27);
      local_118 = QString::fromAscii_helper("Project_Example",0xf);
      pQVar6 = (QString *)QString::toLower((QString *)&local_118);
      QString::QString(local_128,(QString *)&local_e8);
      local_138[0] = 8;
      QString::append(local_128,pQVar6);
      QString::QString(local_120,local_128);
      local_138[0] = 0x18;
      pQVar6 = (QString *)QString::fromUtf8((char *)&local_130,0x41071d7c);
      QString::append(local_120,pQVar6);
      QString::~QString((QString *)&local_130);
      pQVar8 = (QUrl *)QUrl::QUrl((QUrl *)local_f8,local_120,0);
      QNetworkRequest::QNetworkRequest(local_f0,pQVar8);
      QUrl::~QUrl((QUrl *)local_f8);
      QString::~QString(local_120);
      QString::~QString(local_128);
      QString::~QString(local_110);
      QString::~QString((QString *)&local_118);
      if (*(longlong **)(param_1 + 0x370) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x370) + 0xe8))();
        plVar1 = *(longlong **)(param_1 + 0x370);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x18))(plVar1,1);
        }
        *(undefined8 *)(param_1 + 0x370) = 0;
      }
      pQVar9 = QNetworkAccessManager::get(*(QNetworkAccessManager **)(param_1 + 0x2e0),local_f0);
      *(QNetworkReply **)(param_1 + 0x370) = pQVar9;
      thunk_FUN_1403cf560(param_1,local_d8);
      bVar4 = QModelIndex::isValid(local_d8);
      if (bVar4) {
        uVar10 = QModelIndex::data(local_d8,(int)&local_38);
        thunk_FUN_1403a2e60(local_b8,uVar10);
        QVariant::~QVariant((QVariant *)&local_38);
        local_44 = 0x38d1b717;
        plVar1 = *(longlong **)(param_1 + 0x210);
        pcVar11 = *(code **)(*plVar1 + 0x90);
        iVar5 = thunk_FUN_140221480();
        QVariant::QVariant((QVariant *)&local_108,iVar5,local_b8,0);
        (*pcVar11)(plVar1,local_d8,&local_108,0x100);
        QVariant::~QVariant((QVariant *)&local_108);
        QWidget::update(param_1);
        thunk_FUN_14020eab0(local_b8);
      }
      local_108 = thunk_FUN_1403e0800;
      uStack_100 = 0;
      local_38 = thunk_FUN_1403e0800;
      uStack_30 = 0;
      uStack_2c = uStack_fc;
      local_130 = downloadProgress_exref;
      ppvVar2 = *(void ***)(param_1 + 0x370);
      local_108 = (code *)thunk_FUN_140bd99d4(0x20);
      pcVar11 = pcVar12;
      if (local_108 != (code *)0x0) {
        *(undefined4 *)local_108 = 1;
        *(undefined1 **)(local_108 + 8) = &LAB_140037952;
        *(code **)(local_108 + 0x10) = local_38;
        *(ulonglong *)(local_108 + 0x18) = CONCAT44(uStack_2c,uStack_30);
        pcVar11 = local_108;
      }
      QObject::connectImpl
                ((QObject *)local_138,ppvVar2,(QObject *)&local_130,(void **)param_1,
                 (QSlotObjectBase *)&local_38,(ConnectionType)pcVar11,
                 (int *)((ulonglong)in_stack_fffffffffffffeac << 0x20),(QMetaObject *)0x0);
      QMetaObject::Connection::~Connection((Connection *)local_138);
      local_38 = thunk_FUN_1403dffd0;
      uStack_30 = 0;
      local_130 = finished_exref;
      ppvVar2 = *(void ***)(param_1 + 0x370);
      local_108 = (code *)thunk_FUN_140bd99d4(0x20);
      pcVar11 = pcVar12;
      if (local_108 != (code *)0x0) {
        *(undefined4 *)local_108 = 1;
        *(undefined1 **)(local_108 + 8) = &LAB_140043e96;
        *(code **)(local_108 + 0x10) = local_38;
        *(ulonglong *)(local_108 + 0x18) = CONCAT44(uStack_2c,uStack_30);
        pcVar11 = local_108;
      }
      QObject::connectImpl
                ((QObject *)local_138,ppvVar2,(QObject *)&local_130,(void **)param_1,
                 (QSlotObjectBase *)&local_38,(ConnectionType)pcVar11,
                 (int *)((ulonglong)in_stack_fffffffffffffeac << 0x20),(QMetaObject *)0x0);
      QMetaObject::Connection::~Connection((Connection *)local_138);
      local_38 = thunk_FUN_1403dfca0;
      uStack_30 = 0;
      local_130 = error_exref;
      ppvVar2 = *(void ***)(param_1 + 0x370);
      local_108 = (code *)thunk_FUN_140bd99d4(0x20);
      pcVar11 = pcVar12;
      if (local_108 != (code *)0x0) {
        *(undefined4 *)local_108 = 1;
        *(undefined1 **)(local_108 + 8) = &LAB_1400011b8;
        *(code **)(local_108 + 0x10) = local_38;
        *(ulonglong *)(local_108 + 0x18) = CONCAT44(uStack_2c,uStack_30);
        pcVar11 = local_108;
      }
      QObject::connectImpl
                ((QObject *)local_138,ppvVar2,(QObject *)&local_130,(void **)param_1,
                 (QSlotObjectBase *)&local_38,(ConnectionType)pcVar11,
                 (int *)((ulonglong)in_stack_fffffffffffffeac << 0x20),(QMetaObject *)0x0);
      QMetaObject::Connection::~Connection((Connection *)local_138);
      local_38 = thunk_FUN_1403e09d0;
      uStack_30 = 0;
      local_130 = readyRead_exref;
      ppvVar2 = *(void ***)(param_1 + 0x370);
      local_108 = (code *)thunk_FUN_140bd99d4(0x20);
      if (local_108 != (code *)0x0) {
        *(undefined4 *)local_108 = 1;
        *(undefined1 **)(local_108 + 8) = &LAB_140043e96;
        *(code **)(local_108 + 0x10) = local_38;
        *(ulonglong *)(local_108 + 0x18) = CONCAT44(uStack_2c,uStack_30);
        pcVar12 = local_108;
      }
      QObject::connectImpl
                ((QObject *)local_138,ppvVar2,(QObject *)&local_130,(void **)param_1,
                 (QSlotObjectBase *)&local_38,(ConnectionType)pcVar12,
                 (int *)((ulonglong)in_stack_fffffffffffffeac << 0x20),(QMetaObject *)0x0);
      QMetaObject::Connection::~Connection((Connection *)local_138);
      QNetworkRequest::~QNetworkRequest(local_f0);
      QString::~QString((QString *)&local_e8);
    }
    QString::~QString(local_e0);
  }
  return;
}


