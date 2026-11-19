// 1403d3610  FUN_1403d3610  size=0xe67  calls ~QUrl (site 1403d401d)

void FUN_1403d3610(QObject *param_1)

{
  QObject *pQVar1;
  bool bVar2;
  QWidget *pQVar3;
  QVBoxLayout *pQVar4;
  QHBoxLayout *this;
  QVBoxLayout *this_00;
  QWidget *pQVar5;
  QString *pQVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  QFileInfo *pQVar9;
  undefined8 uVar10;
  QWidget *this_01;
  QHBoxLayout *this_02;
  QVBoxLayout *this_03;
  QWidget *local_res8;
  QString local_res10 [8];
  QString local_res18 [8];
  QString local_res20 [8];
  undefined2 uVar12;
  undefined4 uVar11;
  undefined2 uVar13;
  QTypedArrayData<unsigned_short> *local_98;
  QString local_90 [8];
  QString local_88 [8];
  QString local_80 [8];
  QTypedArrayData<unsigned_short> *local_78;
  QTypedArrayData<unsigned_short> *local_70;
  QTypedArrayData<unsigned_short> *local_68;
  QString local_60 [8];
  QString local_58 [8];
  QString local_50 [16];
  
  this_01 = (QWidget *)0x0;
  local_res8 = (QWidget *)((ulonglong)local_res8 & 0xffffffff00000000);
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    pQVar3 = (QWidget *)thunk_FUN_140bd99d4(0x30);
    pQVar5 = this_01;
    local_res8 = pQVar3;
    if (pQVar3 != (QWidget *)0x0) {
      QWidget::QWidget(pQVar3,param_1,0);
      *(undefined ***)pQVar3 = QWidget::vftable;
      *(undefined ***)(pQVar3 + 0x10) = QWidget::vftable;
      pQVar5 = pQVar3;
    }
    *(QWidget **)(param_1 + 0xf0) = pQVar5;
    QWidget::setMouseTracking(pQVar5,true);
    QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 0x38),*(undefined8 *)(param_1 + 0xf0),0);
  }
  pQVar4 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  this_03 = (QVBoxLayout *)this_01;
  local_res8 = (QWidget *)pQVar4;
  if (pQVar4 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar4);
    *(undefined ***)pQVar4 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar4 + 0x10) = QVBoxLayout::vftable;
    this_03 = pQVar4;
  }
  QLayout::setContentsMargins((QLayout *)this_03,0,0x18,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)this_03,0);
  QWidget::setLayout(*(QWidget **)(param_1 + 0xf0),(QLayout *)this_03);
  this = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  this_02 = (QHBoxLayout *)this_01;
  local_res8 = (QWidget *)this;
  if (this != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(this);
    *(undefined ***)this = QHBoxLayout::vftable;
    *(undefined ***)(this + 0x10) = QHBoxLayout::vftable;
    this_02 = this;
  }
  QLayout::setContentsMargins((QLayout *)this_02,0,0,0x14,0);
  QBoxLayout::setSpacing((QBoxLayout *)this_02,0x14);
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    pQVar3 = (QWidget *)thunk_FUN_140bd99d4(0x30);
    pQVar5 = this_01;
    local_res8 = pQVar3;
    if (pQVar3 != (QWidget *)0x0) {
      QWidget::QWidget(pQVar3,param_1,0);
      *(undefined ***)pQVar3 = QWidget::vftable;
      *(undefined ***)(pQVar3 + 0x10) = QWidget::vftable;
      pQVar5 = pQVar3;
    }
    *(QWidget **)(param_1 + 0xf8) = pQVar5;
    QWidget::setAttribute(pQVar5,0x4a,true);
    pQVar1 = *(QObject **)(param_1 + 0xf8);
    local_res8 = (QWidget *)QString::fromAscii_helper("deviceWidget",0xc);
    QObject::setObjectName(pQVar1,(QString *)&local_res8);
    QString::~QString((QString *)&local_res8);
    QWidget::setFixedHeight(*(QWidget **)(param_1 + 0xf8),0xdc);
    pQVar5 = *(QWidget **)(param_1 + 0xf8);
    local_res8 = (QWidget *)
                 QString::fromAscii_helper
                           ("QWidget {background-color: #292929; border-radius: 8px;} ",0x39);
    QWidget::setStyleSheet(pQVar5,(QString *)&local_res8);
    QString::~QString((QString *)&local_res8);
    QObject::installEventFilter(*(QObject **)(param_1 + 0xf8),param_1);
    QWidget::setSizePolicy(*(QWidget **)(param_1 + 0xf8),7,0);
    thunk_FUN_1403d4810(param_1);
  }
  QBoxLayout::addWidget((QBoxLayout *)this_02);
  this_00 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar4 = (QVBoxLayout *)this_01;
  local_res8 = (QWidget *)this_00;
  if (this_00 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(this_00);
    *(undefined ***)this_00 = QVBoxLayout::vftable;
    *(undefined ***)(this_00 + 0x10) = QVBoxLayout::vftable;
    pQVar4 = this_00;
  }
  uVar12 = 0;
  QLayout::setContentsMargins((QLayout *)pQVar4,0,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar4,0x14);
  if (*(longlong *)(param_1 + 0x108) == 0) {
    pQVar3 = (QWidget *)thunk_FUN_140bd99d4(0x30);
    pQVar5 = this_01;
    local_res8 = pQVar3;
    if (pQVar3 != (QWidget *)0x0) {
      QWidget::QWidget(pQVar3,param_1,0);
      *(undefined ***)pQVar3 = QWidget::vftable;
      *(undefined ***)(pQVar3 + 0x10) = QWidget::vftable;
      pQVar5 = pQVar3;
    }
    *(QWidget **)(param_1 + 0x108) = pQVar5;
    local_res8 = (QWidget *)QString::fromAscii_helper("openWidget",10);
    QObject::setObjectName((QObject *)pQVar5,(QString *)&local_res8);
    QString::~QString((QString *)&local_res8);
    QWidget::setFixedSize(*(QWidget **)(param_1 + 0x108),0x1aa,0x6b);
    pQVar5 = *(QWidget **)(param_1 + 0x108);
    local_res8 = (QWidget *)
                 QString::fromAscii_helper
                           ("QWidget {background-color: #353535; border-radius: 12px;} ",0x3a);
    QWidget::setStyleSheet(pQVar5,(QString *)&local_res8);
    QString::~QString((QString *)&local_res8);
    QObject::installEventFilter(*(QObject **)(param_1 + 0x108),param_1);
    thunk_FUN_1403d65f0(param_1);
  }
  if (*(longlong *)(param_1 + 0x110) == 0) {
    pQVar3 = (QWidget *)thunk_FUN_140bd99d4(0x30);
    pQVar5 = this_01;
    local_res8 = pQVar3;
    if (pQVar3 != (QWidget *)0x0) {
      QWidget::QWidget(pQVar3,param_1,0);
      *(undefined ***)pQVar3 = QWidget::vftable;
      *(undefined ***)(pQVar3 + 0x10) = QWidget::vftable;
      pQVar5 = pQVar3;
    }
    *(QWidget **)(param_1 + 0x110) = pQVar5;
    local_res8 = (QWidget *)QString::fromAscii_helper("transmitWidget",0xe);
    QObject::setObjectName((QObject *)pQVar5,(QString *)&local_res8);
    QString::~QString((QString *)&local_res8);
    QWidget::setFixedSize(*(QWidget **)(param_1 + 0x110),0x1aa,0x6b);
    pQVar5 = *(QWidget **)(param_1 + 0x110);
    local_res8 = (QWidget *)
                 QString::fromAscii_helper
                           ("QWidget {background-color: #353535; border-radius: 12px;} ",0x3a);
    QWidget::setStyleSheet(pQVar5,(QString *)&local_res8);
    QString::~QString((QString *)&local_res8);
    QObject::installEventFilter(*(QObject **)(param_1 + 0x110),param_1);
    thunk_FUN_1403db070(param_1);
  }
  QBoxLayout::addWidget((QBoxLayout *)pQVar4,*(undefined8 *)(param_1 + 0x108),0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar4,*(undefined8 *)(param_1 + 0x110),0,0);
  QWidget::hide(*(QWidget **)(param_1 + 0x108));
  QWidget::hide(*(QWidget **)(param_1 + 0x110));
  if (*(longlong *)(param_1 + 0x100) == 0) {
    pQVar3 = (QWidget *)thunk_FUN_140bd99d4(0x30);
    pQVar5 = this_01;
    local_res8 = pQVar3;
    if (pQVar3 != (QWidget *)0x0) {
      QWidget::QWidget(pQVar3,param_1,0);
      *(undefined ***)pQVar3 = QWidget::vftable;
      *(undefined ***)(pQVar3 + 0x10) = QWidget::vftable;
      pQVar5 = pQVar3;
    }
    *(QWidget **)(param_1 + 0x100) = pQVar5;
    QWidget::setAttribute(pQVar5,0x4a,true);
    pQVar1 = *(QObject **)(param_1 + 0x100);
    local_res8 = (QWidget *)QString::fromAscii_helper("deviceWidget",0xc);
    QObject::setObjectName(pQVar1,(QString *)&local_res8);
    QString::~QString((QString *)&local_res8);
    QWidget::setFixedHeight(*(QWidget **)(param_1 + 0x100),0xdc);
    QObject::installEventFilter(*(QObject **)(param_1 + 0x100),param_1);
    QWidget::setSizePolicy(*(QWidget **)(param_1 + 0x100),7,0);
    thunk_FUN_1403d5d80(param_1);
  }
  QBoxLayout::addWidget((QBoxLayout *)this_02,*(undefined8 *)(param_1 + 0x100),0,0);
  QBoxLayout::addLayout((QBoxLayout *)this_03,(QLayout *)this_02,0);
  QBoxLayout::addSpacing((QBoxLayout *)this_03,0x18);
  thunk_FUN_1403d81c0(param_1);
  pQVar3 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar5 = this_01;
  local_res8 = pQVar3;
  if (pQVar3 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar3,param_1,0);
    *(undefined ***)pQVar3 = QWidget::vftable;
    *(undefined ***)(pQVar3 + 0x10) = QWidget::vftable;
    pQVar5 = pQVar3;
  }
  *(QWidget **)(param_1 + 0x118) = pQVar5;
  QWidget::setMouseTracking(pQVar5,true);
  thunk_FUN_1403d6c00(param_1);
  thunk_FUN_1403d8b60(param_1);
  QBoxLayout::addWidget((QBoxLayout *)this_03,*(undefined8 *)(param_1 + 0x118),0,0);
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    local_res8 = (QWidget *)thunk_FUN_140bd99d4(0x48);
    pQVar5 = this_01;
    if (local_res8 != (QWidget *)0x0) {
      pQVar5 = (QWidget *)thunk_FUN_1403e8440(local_res8,param_1);
    }
    *(QWidget **)(param_1 + 0xa8) = pQVar5;
    QWidget::setMouseTracking(pQVar5,true);
    pQVar6 = (QString *)QCoreApplication::applicationDirPath();
    QString::QString(local_res18,pQVar6);
    local_res8 = (QWidget *)CONCAT44(local_res8._4_4_,2);
    pQVar6 = (QString *)QString::fromUtf8((char *)local_res10,0x41053a22);
    QString::append(local_res18,pQVar6);
    QString::~QString(local_res10);
    thunk_FUN_14025f9b0(local_60,local_res18,"/tutorial/startpage");
    QString::~QString(local_res18);
    QString::~QString(local_res20);
    local_70 = QString::fromAscii_helper("%1-%2.html",10);
    puVar7 = (undefined2 *)QChar::QChar((QChar *)&local_res8,0x20);
    uVar13 = *puVar7;
    local_78 = QString::fromAscii_helper("index",5);
    uVar11 = CONCAT22(uVar12,uVar13);
    pQVar6 = (QString *)QString::arg((QString *)&local_70,local_58,&local_78,0,uVar11);
    uVar13 = (undefined2)((uint)uVar11 >> 0x10);
    puVar7 = (undefined2 *)QChar::QChar((QChar *)local_res10,0x20);
    uVar12 = *puVar7;
    uVar8 = thunk_FUN_140653c40(&local_98);
    uVar11 = CONCAT22(uVar13,uVar12);
    QString::arg(pQVar6,local_88,uVar8,0,uVar11);
    uVar12 = (undefined2)((uint)uVar11 >> 0x10);
    QString::~QString((QString *)&local_98);
    QString::~QString(local_58);
    QString::~QString((QString *)&local_78);
    QString::~QString((QString *)&local_70);
    local_68 = QString::fromAscii_helper("%1/%2",5);
    puVar7 = (undefined2 *)QChar::QChar((QChar *)local_res18,0x20);
    uVar11 = CONCAT22(uVar12,*puVar7);
    pQVar6 = (QString *)QString::arg((QString *)&local_68,local_50,local_60,0,uVar11);
    uVar12 = (undefined2)((uint)uVar11 >> 0x10);
    puVar7 = (undefined2 *)QChar::QChar((QChar *)local_res20,0x20);
    uVar11 = CONCAT22(uVar12,*puVar7);
    QString::arg(pQVar6,local_90,local_88,0,uVar11);
    uVar12 = (undefined2)((uint)uVar11 >> 0x10);
    QString::~QString(local_50);
    QString::~QString((QString *)&local_68);
    pQVar9 = (QFileInfo *)QFileInfo::QFileInfo((QFileInfo *)&local_res8,local_90);
    bVar2 = QFileInfo::exists(pQVar9);
    QFileInfo::~QFileInfo((QFileInfo *)&local_res8);
    if (!bVar2) {
      local_98 = QString::fromAscii_helper("%1-%2.html",10);
      puVar7 = (undefined2 *)QChar::QChar((QChar *)&local_res8,0x20);
      uVar13 = *puVar7;
      local_78 = QString::fromAscii_helper("index",5);
      uVar11 = CONCAT22(uVar12,uVar13);
      pQVar6 = (QString *)QString::arg((QString *)&local_98,local_80,&local_78,0,uVar11);
      uVar13 = (undefined2)((uint)uVar11 >> 0x10);
      puVar7 = (undefined2 *)QChar::QChar((QChar *)local_res10,0x20);
      uVar12 = *puVar7;
      local_70 = QString::fromAscii_helper("en_US",5);
      uVar11 = CONCAT22(uVar13,uVar12);
      pQVar6 = (QString *)QString::arg(pQVar6,local_58,&local_70,0,uVar11);
      uVar12 = (undefined2)((uint)uVar11 >> 0x10);
      QString::operator=(local_88,pQVar6);
      QString::~QString(local_58);
      QString::~QString((QString *)&local_70);
      QString::~QString(local_80);
      QString::~QString((QString *)&local_78);
      QString::~QString((QString *)&local_98);
      local_98 = QString::fromAscii_helper("%1/%2",5);
      puVar7 = (undefined2 *)QChar::QChar((QChar *)&local_res8,0x20);
      uVar11 = CONCAT22(uVar12,*puVar7);
      pQVar6 = (QString *)QString::arg((QString *)&local_98,local_58,local_60,0,uVar11);
      uVar12 = (undefined2)((uint)uVar11 >> 0x10);
      puVar7 = (undefined2 *)QChar::QChar((QChar *)local_res10,0x20);
      uVar11 = CONCAT22(uVar12,*puVar7);
      pQVar6 = (QString *)QString::arg(pQVar6,local_80,local_88,0,uVar11);
      uVar12 = (undefined2)((uint)uVar11 >> 0x10);
      QString::operator=(local_90,pQVar6);
      QString::~QString(local_80);
      QString::~QString(local_58);
      QString::~QString((QString *)&local_98);
    }
    uVar8 = *(undefined8 *)(param_1 + 0xa8);
    uVar10 = QUrl::fromLocalFile((QString *)&local_res8);
    thunk_FUN_1403e8a00(uVar8,uVar10);
    QUrl::~QUrl((QUrl *)&local_res8);
    QWidget::hide(*(QWidget **)(param_1 + 0xa8));
    QString::~QString(local_90);
    QString::~QString(local_88);
    QString::~QString(local_60);
  }
  QBoxLayout::addWidget((QBoxLayout *)this_03,*(undefined8 *)(param_1 + 0xa8),0,0);
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    local_res8 = (QWidget *)thunk_FUN_140bd99d4(0x48);
    if (local_res8 != (QWidget *)0x0) {
      this_01 = (QWidget *)thunk_FUN_1403e8440(local_res8,param_1);
    }
    *(QWidget **)(param_1 + 0xb0) = this_01;
    QWidget::setMouseTracking(this_01,true);
    pQVar6 = (QString *)QCoreApplication::applicationDirPath();
    QString::QString(local_res18,pQVar6);
    local_res8 = (QWidget *)CONCAT44(local_res8._4_4_,1);
    pQVar6 = (QString *)QString::fromUtf8((char *)local_res10,0x41053a22);
    QString::append(local_res18,pQVar6);
    QString::~QString(local_res10);
    thunk_FUN_14025f9b0(local_60,local_res18,"/tutorial/support");
    QString::~QString(local_res18);
    QString::~QString(local_res20);
    local_68 = QString::fromAscii_helper("%1-%2.html",10);
    puVar7 = (undefined2 *)QChar::QChar((QChar *)&local_res8,0x20);
    uVar13 = *puVar7;
    local_98 = QString::fromAscii_helper("index",5);
    uVar11 = CONCAT22(uVar12,uVar13);
    pQVar6 = (QString *)QString::arg((QString *)&local_68,local_50,&local_98,0,uVar11);
    uVar13 = (undefined2)((uint)uVar11 >> 0x10);
    puVar7 = (undefined2 *)QChar::QChar((QChar *)local_res10,0x20);
    uVar12 = *puVar7;
    uVar8 = thunk_FUN_140653c40(local_80);
    uVar11 = CONCAT22(uVar13,uVar12);
    QString::arg(pQVar6,local_90,uVar8,0,uVar11);
    uVar12 = (undefined2)((uint)uVar11 >> 0x10);
    QString::~QString(local_80);
    QString::~QString(local_50);
    QString::~QString((QString *)&local_98);
    QString::~QString((QString *)&local_68);
    local_70 = QString::fromAscii_helper("%1/%2",5);
    puVar7 = (undefined2 *)QChar::QChar((QChar *)local_res18,0x20);
    uVar11 = CONCAT22(uVar12,*puVar7);
    pQVar6 = (QString *)QString::arg((QString *)&local_70,local_58,local_60,0,uVar11);
    uVar12 = (undefined2)((uint)uVar11 >> 0x10);
    puVar7 = (undefined2 *)QChar::QChar((QChar *)local_res20,0x20);
    uVar11 = CONCAT22(uVar12,*puVar7);
    QString::arg(pQVar6,local_88,local_90,0,uVar11);
    uVar12 = (undefined2)((uint)uVar11 >> 0x10);
    QString::~QString(local_58);
    QString::~QString((QString *)&local_70);
    pQVar9 = (QFileInfo *)QFileInfo::QFileInfo((QFileInfo *)&local_res8,local_88);
    bVar2 = QFileInfo::exists(pQVar9);
    QFileInfo::~QFileInfo((QFileInfo *)&local_res8);
    if (!bVar2) {
      local_78 = QString::fromAscii_helper("%1-%2.html",10);
      puVar7 = (undefined2 *)QChar::QChar((QChar *)&local_res8,0x20);
      uVar13 = *puVar7;
      local_68 = QString::fromAscii_helper("index",5);
      uVar11 = CONCAT22(uVar12,uVar13);
      pQVar6 = (QString *)QString::arg((QString *)&local_78,local_50,&local_68,0,uVar11);
      uVar13 = (undefined2)((uint)uVar11 >> 0x10);
      puVar7 = (undefined2 *)QChar::QChar((QChar *)local_res10,0x20);
      uVar12 = *puVar7;
      local_98 = QString::fromAscii_helper("en_US",5);
      uVar11 = CONCAT22(uVar13,uVar12);
      pQVar6 = (QString *)QString::arg(pQVar6,local_80,&local_98,0,uVar11);
      uVar12 = (undefined2)((uint)uVar11 >> 0x10);
      QString::operator=(local_90,pQVar6);
      QString::~QString(local_80);
      QString::~QString((QString *)&local_98);
      QString::~QString(local_50);
      QString::~QString((QString *)&local_68);
      QString::~QString((QString *)&local_78);
      local_98 = QString::fromAscii_helper("%1/%2",5);
      puVar7 = (undefined2 *)QChar::QChar((QChar *)&local_res8,0x20);
      uVar11 = CONCAT22(uVar12,*puVar7);
      pQVar6 = (QString *)QString::arg((QString *)&local_98,local_50,local_60,0,uVar11);
      uVar12 = (undefined2)((uint)uVar11 >> 0x10);
      puVar7 = (undefined2 *)QChar::QChar((QChar *)local_res10,0x20);
      pQVar6 = (QString *)QString::arg(pQVar6,local_80,local_90,0,CONCAT22(uVar12,*puVar7));
      QString::operator=(local_88,pQVar6);
      QString::~QString(local_80);
      QString::~QString(local_50);
      QString::~QString((QString *)&local_98);
    }
    uVar8 = *(undefined8 *)(param_1 + 0xb0);
    uVar10 = QUrl::fromLocalFile((QString *)&local_res8);
    thunk_FUN_1403e8a00(uVar8,uVar10);
    QUrl::~QUrl((QUrl *)&local_res8);
    QWidget::hide(*(QWidget **)(param_1 + 0xb0));
    QString::~QString(local_88);
    QString::~QString(local_90);
    QString::~QString(local_60);
  }
                    /* WARNING: Could not recover jumptable at 0x0001403d4470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QBoxLayout::addWidget((QBoxLayout *)this_03,*(undefined8 *)(param_1 + 0xb0),0,0);
  return;
}


