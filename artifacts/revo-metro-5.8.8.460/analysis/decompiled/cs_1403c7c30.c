// 1403c7c30  FUN_1403c7c30  size=0x660  calls QNetworkAccessManager (site 1403c8022)

QWidget * FUN_1403c7c30(QWidget *param_1)

{
  char cVar1;
  int iVar2;
  QTypedArrayData<unsigned_short> *pQVar3;
  QNetworkAccessManager *this;
  QCoreApplication *pQVar4;
  undefined8 uVar5;
  QListData *this_00;
  uint *puVar6;
  QString *pQVar7;
  undefined8 uVar8;
  int *piVar9;
  QSlotObjectBase *pQVar10;
  QNetworkAccessManager *pQVar11;
  undefined8 local_res18;
  QSlotObjectBase *local_res20;
  Data *local_68;
  QString local_60 [8];
  code *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  pQVar10 = (QSlotObjectBase *)0x0;
  local_res18 = (QNetworkAccessManager *)((ulonglong)local_res18 & 0xffffffff00000000);
  thunk_FUN_140376f50();
  *(undefined ***)param_1 = StartPageWidget::vftable;
  *(undefined ***)(param_1 + 0x10) = StartPageWidget::vftable;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  pQVar3 = QString::fromAscii_helper("",0);
  *(QTypedArrayData<unsigned_short> **)(param_1 + 0x148) = pQVar3;
  pQVar3 = QString::fromAscii_helper("",0);
  *(QTypedArrayData<unsigned_short> **)(param_1 + 0x150) = pQVar3;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(code **)(param_1 + 0x270) = shared_null_exref;
  *(undefined4 *)(param_1 + 0x278) = 0;
  QModelIndex::QModelIndex((QModelIndex *)(param_1 + 0x280));
  pQVar3 = QString::fromAscii_helper("",0);
  *(QTypedArrayData<unsigned_short> **)(param_1 + 0x298) = pQVar3;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  QString::QString((QString *)(param_1 + 0x2c8));
  QString::QString((QString *)(param_1 + 0x2d0));
  pQVar3 = QString::fromAscii_helper("--",2);
  *(QTypedArrayData<unsigned_short> **)(param_1 + 0x2d8) = pQVar3;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  param_1[0x2f0] = (QWidget)0x0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  param_1[0x300] = (QWidget)0x0;
  QString::QString((QString *)(param_1 + 0x308));
  QString::QString((QString *)(param_1 + 0x310));
  QString::QString((QString *)(param_1 + 0x318));
  QString::QString((QString *)(param_1 + 800));
  param_1[0x328] = (QWidget)0x0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  param_1[0x350] = (QWidget)0x0;
  *(undefined4 *)(param_1 + 0x354) = 8;
  param_1[0x358] = (QWidget)0x0;
  QFile::QFile((QFile *)(param_1 + 0x360));
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined2 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  param_1[0x388] = (QWidget)0x0;
  local_res18 = (QNetworkAccessManager *)QString::fromAscii_helper(":/res/svg/close.svg",0x13);
  QIcon::QIcon((QIcon *)&local_res20,(QString *)&local_res18);
  QIcon::~QIcon((QIcon *)&local_res20);
  QString::~QString((QString *)&local_res18);
  thunk_FUN_1403d7000(param_1);
  thunk_FUN_1403db370(param_1);
  QWidget::setMouseTracking(param_1,true);
  this = (QNetworkAccessManager *)thunk_FUN_140bd99d4(0x10);
  pQVar11 = (QNetworkAccessManager *)pQVar10;
  local_res18 = this;
  if (this != (QNetworkAccessManager *)0x0) {
    QNetworkAccessManager::QNetworkAccessManager(this,(QObject *)param_1);
    *(undefined ***)this = QNetworkAccessManager::vftable;
    pQVar11 = this;
  }
  *(QNetworkAccessManager **)(param_1 + 0x2e0) = pQVar11;
  pQVar4 = QCoreApplication::instance();
  uVar5 = thunk_FUN_140265990(pQVar4);
  this_00 = (QListData *)QStandardPaths::standardLocations((StandardLocation)&local_68);
  puVar6 = (uint *)thunk_FUN_14020a900(*(undefined8 *)this_00);
  if (1 < *puVar6) {
    thunk_FUN_140266420(this_00,*(undefined4 *)(*(longlong *)this_00 + 4));
  }
  pQVar7 = (QString *)QListData::begin(this_00);
  QString::QString((QString *)&local_res20,pQVar7);
  local_res18._0_4_ = 4;
  pQVar7 = (QString *)QString::fromUtf8((char *)&local_58,0x41071040);
  QString::append((QString *)&local_res20,pQVar7);
  QString::~QString((QString *)&local_58);
  uVar8 = QString::toStdString((QString *)&local_res20);
  thunk_FUN_14055d550(uVar5,uVar8);
  local_res18 = (QNetworkAccessManager *)((ulonglong)local_res18._4_4_ << 0x20);
  QString::~QString((QString *)&local_res20);
  piVar9 = (int *)thunk_FUN_14020a900(local_68);
  if (*piVar9 != 0) {
    if (*piVar9 == -1) goto LAB_1403c815f;
    piVar9 = (int *)thunk_FUN_14020a910(local_68);
    LOCK();
    iVar2 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_1403c815f;
  }
  iVar2 = *(int *)(local_68 + 8);
  pQVar7 = (QString *)(local_68 + ((longlong)*(int *)(local_68 + 0xc) + 2) * 8);
  while (pQVar7 != (QString *)(local_68 + ((longlong)iVar2 + 2) * 8)) {
    pQVar7 = pQVar7 + -8;
    QString::~QString(pQVar7);
  }
  QListData::dispose(local_68);
LAB_1403c815f:
  thunk_FUN_1403d0ea0(param_1);
  thunk_FUN_1403ce1f0(param_1);
  if (param_1[0x350] != (QWidget)0x0) {
    thunk_FUN_1403d9290(param_1);
  }
  cVar1 = thunk_FUN_14062afd0();
  if (cVar1 == '\0') {
    local_58 = thunk_FUN_1403e5e30;
    uStack_50 = 0;
    local_res20 = (QSlotObjectBase *)thunk_FUN_140bd99d4(0x20);
    if (local_res20 != (QSlotObjectBase *)0x0) {
      *(undefined4 *)local_res20 = 1;
      *(undefined1 **)(local_res20 + 8) = &LAB_140043e96;
      *(code **)(local_res20 + 0x10) = local_58;
      *(ulonglong *)(local_res20 + 0x18) = CONCAT44(uStack_4c,uStack_50);
      pQVar10 = local_res20;
    }
    QMetaObject::invokeMethodImpl((QObject *)param_1,pQVar10,2,(void *)0x0);
  }
  iVar2 = thunk_FUN_14062c100(0);
  if (iVar2 == 0) {
    pQVar7 = (QString *)QObject::tr((char *)&local_res20,&DAT_14105f628,0);
  }
  else {
    pQVar7 = (QString *)QObject::tr((char *)&local_58,&DAT_14105f638,0);
  }
  QString::QString(local_60,pQVar7);
  if (iVar2 == 0) {
    QString::~QString((QString *)&local_res20);
  }
  else {
    QString::~QString((QString *)&local_58);
  }
  pQVar4 = QCoreApplication::instance();
  uVar5 = thunk_FUN_140341d40(pQVar4);
  thunk_FUN_14035b320(uVar5,local_60);
  QString::~QString(local_60);
  return param_1;
}


