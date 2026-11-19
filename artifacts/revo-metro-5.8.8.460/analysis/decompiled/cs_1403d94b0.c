// 1403d94b0  FUN_1403d94b0  size=0x1628  calls ~QUrl (site 1403da418)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1403d94b0(QObject *param_1)

{
  QWebEngineView *this;
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  TextElideMode TVar4;
  QWidget *pQVar5;
  QVBoxLayout *pQVar6;
  QLabel *pQVar7;
  QHBoxLayout *pQVar8;
  QObject *pQVar9;
  QSpacerItem *pQVar10;
  QString *pQVar11;
  QSpacerItem *pQVar12;
  QWebEnginePage *this_00;
  QUrl *pQVar13;
  QVBoxLayout *this_01;
  QPushButton *pQVar14;
  QSpacerItem *this_02;
  QVBoxLayout *pQVar15;
  QObject *pQVar16;
  QHBoxLayout *pQVar17;
  QWidget *pQVar18;
  QLabel *pQVar19;
  QPushButton *pQVar20;
  undefined1 auStackY_a8 [32];
  QTypedArrayData<unsigned_short> *local_78;
  QTypedArrayData<unsigned_short> *local_70;
  uint local_68 [2];
  QVBoxLayout *local_60;
  QString local_58 [8];
  QTypedArrayData<unsigned_short> *local_50;
  QChar local_48 [8];
  QWidget *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_141a19280 ^ (ulonglong)auStackY_a8;
  pQVar16 = (QObject *)0x0;
  local_68[0] = 0;
  pQVar5 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar18 = (QWidget *)pQVar16;
  local_40[0] = pQVar5;
  if (pQVar5 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar5,param_1,0);
    *(undefined ***)pQVar5 = QWidget::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QWidget::vftable;
    pQVar18 = pQVar5;
  }
  *(QWidget **)(param_1 + 0x48) = pQVar18;
  QWidget::setFixedWidth(pQVar18,0x120);
  QWidget::setMouseTracking(*(QWidget **)(param_1 + 0x48),true);
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x48),0);
  pQVar6 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar15 = (QVBoxLayout *)pQVar16;
  local_40[0] = (QWidget *)pQVar6;
  if (pQVar6 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar6);
    *(undefined ***)pQVar6 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar6 + 0x10) = QVBoxLayout::vftable;
    pQVar15 = pQVar6;
  }
  QLayout::setContentsMargins((QLayout *)pQVar15,0x20,0x18,0,0x14);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar15,5);
  QWidget::setLayout(*(QWidget **)(param_1 + 0x48),(QLayout *)pQVar15);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar19 = (QLabel *)pQVar16;
  local_40[0] = (QWidget *)pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    QLabel::QLabel(pQVar7,*(undefined8 *)(param_1 + 0x48),0);
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar19 = pQVar7;
  }
  *(QLabel **)(param_1 + 0x50) = pQVar19;
  local_78 = QString::fromAscii_helper("RevoIconLabel",0xd);
  QObject::setObjectName((QObject *)pQVar19,(QString *)&local_78);
  QString::~QString((QString *)&local_78);
  QWidget::setFixedSize(*(QWidget **)(param_1 + 0x50),0x38,0x38);
  QBoxLayout::addWidget((QBoxLayout *)pQVar15);
  pQVar5 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar18 = (QWidget *)pQVar16;
  local_40[0] = pQVar5;
  if (pQVar5 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar5);
    *(undefined ***)pQVar5 = QWidget::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QWidget::vftable;
    pQVar18 = pQVar5;
  }
  pQVar8 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar17 = (QHBoxLayout *)pQVar16;
  local_40[0] = (QWidget *)pQVar8;
  if (pQVar8 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar8);
    *(undefined ***)pQVar8 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar8 + 0x10) = QHBoxLayout::vftable;
    pQVar17 = pQVar8;
  }
  QLayout::setContentsMargins((QLayout *)pQVar17,0,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar17,0);
  QWidget::setLayout(pQVar18,(QLayout *)pQVar17);
  QBoxLayout::addWidget((QBoxLayout *)pQVar15,pQVar18,0,0);
  local_40[0] = (QWidget *)thunk_FUN_140bd99d4(0x38);
  pQVar9 = pQVar16;
  if (local_40[0] != (QWidget *)0x0) {
    pQVar9 = (QObject *)thunk_FUN_14039ac20(local_40[0],*(undefined8 *)(param_1 + 0x48));
  }
  *(QObject **)(param_1 + 0x58) = pQVar9;
  local_78 = QString::fromAscii_helper("homeIconBtn",0xb);
  QObject::setObjectName(pQVar9,(QString *)&local_78);
  QString::~QString((QString *)&local_78);
  QWidget::setFixedSize(*(QWidget **)(param_1 + 0x58),0xd0,0x30);
  QBoxLayout::addWidget((QBoxLayout *)pQVar17,*(undefined8 *)(param_1 + 0x58),0,0);
  pQVar10 = (QSpacerItem *)thunk_FUN_140bd99d4(0x30);
  pQVar12 = (QSpacerItem *)pQVar16;
  local_40[0] = (QWidget *)pQVar10;
  if (pQVar10 != (QSpacerItem *)0x0) {
    QSpacerItem::QSpacerItem(pQVar10,1,1,7,0);
    *(undefined ***)pQVar10 = QSpacerItem::vftable;
    pQVar12 = pQVar10;
  }
  QBoxLayout::addSpacerItem((QBoxLayout *)pQVar17,pQVar12);
  pQVar8 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar17 = (QHBoxLayout *)pQVar16;
  local_40[0] = (QWidget *)pQVar8;
  if (pQVar8 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar8);
    *(undefined ***)pQVar8 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar8 + 0x10) = QHBoxLayout::vftable;
    pQVar17 = pQVar8;
  }
  QWidget::setLayout(*(QWidget **)(param_1 + 0x58),(QLayout *)pQVar17);
  thunk_FUN_14039ace0(*(undefined8 *)(param_1 + 0x58),1);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar19 = (QLabel *)pQVar16;
  local_40[0] = (QWidget *)pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    QLabel::QLabel(pQVar7,*(undefined8 *)(param_1 + 0x58),0);
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar19 = pQVar7;
  }
  *(QLabel **)(param_1 + 0x60) = pQVar19;
  local_78 = QString::fromAscii_helper("homeIconLabel",0xd);
  QObject::setObjectName((QObject *)pQVar19,(QString *)&local_78);
  QString::~QString((QString *)&local_78);
  QWidget::setFixedSize(*(QWidget **)(param_1 + 0x60),0x14,0x14);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar19 = (QLabel *)pQVar16;
  local_40[0] = (QWidget *)pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    QLabel::QLabel(pQVar7,*(undefined8 *)(param_1 + 0x58));
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar19 = pQVar7;
  }
  *(QLabel **)(param_1 + 0x68) = pQVar19;
  pQVar11 = (QString *)QObject::tr((char *)&local_70,&DAT_141061cc8,0);
  QLabel::setText(pQVar19,pQVar11);
  QString::~QString((QString *)&local_70);
  pQVar9 = *(QObject **)(param_1 + 0x68);
  local_78 = QString::fromAscii_helper("homeTextLabel",0xd);
  QObject::setObjectName(pQVar9,(QString *)&local_78);
  QString::~QString((QString *)&local_78);
  QLayout::setContentsMargins((QLayout *)pQVar17,0x14,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar17,4);
  QBoxLayout::addWidget((QBoxLayout *)pQVar17,*(undefined8 *)(param_1 + 0x60));
  QBoxLayout::addWidget((QBoxLayout *)pQVar17,*(undefined8 *)(param_1 + 0x68));
  QBoxLayout::addSpacing((QBoxLayout *)pQVar15,0xb);
  pQVar5 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar18 = (QWidget *)pQVar16;
  local_40[0] = pQVar5;
  if (pQVar5 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar5);
    *(undefined ***)pQVar5 = QWidget::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QWidget::vftable;
    pQVar18 = pQVar5;
  }
  pQVar8 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar17 = (QHBoxLayout *)pQVar16;
  local_40[0] = (QWidget *)pQVar8;
  if (pQVar8 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar8);
    *(undefined ***)pQVar8 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar8 + 0x10) = QHBoxLayout::vftable;
    pQVar17 = pQVar8;
  }
  QLayout::setContentsMargins((QLayout *)pQVar17,0,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar17,0);
  QWidget::setLayout(pQVar18,(QLayout *)pQVar17);
  QBoxLayout::addWidget((QBoxLayout *)pQVar15,pQVar18,0,0);
  local_40[0] = (QWidget *)thunk_FUN_140bd99d4(0x38);
  pQVar9 = pQVar16;
  if (local_40[0] != (QWidget *)0x0) {
    pQVar9 = (QObject *)thunk_FUN_14039ac20(local_40[0],*(undefined8 *)(param_1 + 0x48));
  }
  *(QObject **)(param_1 + 0x88) = pQVar9;
  local_78 = QString::fromAscii_helper("homelearnBtn",0xc);
  QObject::setObjectName(pQVar9,(QString *)&local_78);
  QString::~QString((QString *)&local_78);
  QWidget::setFixedSize(*(QWidget **)(param_1 + 0x88),0xd0,0x30);
  QBoxLayout::addWidget((QBoxLayout *)pQVar17,*(undefined8 *)(param_1 + 0x88),0,0);
  pQVar10 = (QSpacerItem *)thunk_FUN_140bd99d4(0x30);
  pQVar12 = (QSpacerItem *)pQVar16;
  local_40[0] = (QWidget *)pQVar10;
  if (pQVar10 != (QSpacerItem *)0x0) {
    QSpacerItem::QSpacerItem(pQVar10,1,1,7,0);
    *(undefined ***)pQVar10 = QSpacerItem::vftable;
    pQVar12 = pQVar10;
  }
  QBoxLayout::addSpacerItem((QBoxLayout *)pQVar17,pQVar12);
  pQVar8 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar17 = (QHBoxLayout *)pQVar16;
  local_40[0] = (QWidget *)pQVar8;
  if (pQVar8 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar8);
    *(undefined ***)pQVar8 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar8 + 0x10) = QHBoxLayout::vftable;
    pQVar17 = pQVar8;
  }
  QWidget::setLayout(*(QWidget **)(param_1 + 0x88),(QLayout *)pQVar17);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar19 = (QLabel *)pQVar16;
  local_40[0] = (QWidget *)pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    QLabel::QLabel(pQVar7,*(undefined8 *)(param_1 + 0x88),0);
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar19 = pQVar7;
  }
  *(QLabel **)(param_1 + 0x90) = pQVar19;
  local_78 = QString::fromAscii_helper("learnIconLabel",0xe);
  QObject::setObjectName((QObject *)pQVar19,(QString *)&local_78);
  QString::~QString((QString *)&local_78);
  QWidget::setFixedSize(*(QWidget **)(param_1 + 0x90),0x14,0x14);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar19 = (QLabel *)pQVar16;
  local_40[0] = (QWidget *)pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    QLabel::QLabel(pQVar7,*(undefined8 *)(param_1 + 0x88));
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar19 = pQVar7;
  }
  *(QLabel **)(param_1 + 0x98) = pQVar19;
  local_78 = QString::fromAscii_helper("learnTextLabel",0xe);
  QObject::setObjectName((QObject *)pQVar19,(QString *)&local_78);
  QString::~QString((QString *)&local_78);
  pQVar19 = *(QLabel **)(param_1 + 0x98);
  pQVar11 = (QString *)QObject::tr((char *)&local_70,&DAT_1410713fc,0);
  QLabel::setText(pQVar19,pQVar11);
  QString::~QString((QString *)&local_70);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar19 = (QLabel *)pQVar16;
  local_40[0] = (QWidget *)pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    QLabel::QLabel(pQVar7,*(undefined8 *)(param_1 + 0x88),0);
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar19 = pQVar7;
  }
  *(QLabel **)(param_1 + 0xa0) = pQVar19;
  local_78 = QString::fromAscii_helper("learnNewTip",0xb);
  QObject::setObjectName((QObject *)pQVar19,(QString *)&local_78);
  QString::~QString((QString *)&local_78);
  pQVar19 = *(QLabel **)(param_1 + 0xa0);
  local_78 = QString::fromAscii_helper("New",3);
  QLabel::setText(pQVar19,(QString *)&local_78);
  QString::~QString((QString *)&local_78);
  QWidget::setFixedSize(*(QWidget **)(param_1 + 0xa0),0x2c,0x18);
  QLabel::setAlignment(*(QLabel **)(param_1 + 0xa0),0x84);
  iVar3 = thunk_FUN_14062c5f0(0);
  if (2 < iVar3) {
    QWidget::hide(*(QWidget **)(param_1 + 0xa0));
  }
  QLayout::setContentsMargins((QLayout *)pQVar17,0x14,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar17,4);
  QBoxLayout::addWidget((QBoxLayout *)pQVar17,*(undefined8 *)(param_1 + 0x90),0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar17,*(undefined8 *)(param_1 + 0x98),0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar17,*(undefined8 *)(param_1 + 0xa0));
  QWidget::setEnabled(*(QWidget **)(param_1 + 0x88),true);
  QObject::installEventFilter(*(QObject **)(param_1 + 0x88),param_1);
  QBoxLayout::addSpacing((QBoxLayout *)pQVar15,0xb);
  pQVar5 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar18 = (QWidget *)pQVar16;
  local_40[0] = pQVar5;
  if (pQVar5 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar5);
    *(undefined ***)pQVar5 = QWidget::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QWidget::vftable;
    pQVar18 = pQVar5;
  }
  pQVar8 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar17 = (QHBoxLayout *)pQVar16;
  local_40[0] = (QWidget *)pQVar8;
  if (pQVar8 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar8);
    *(undefined ***)pQVar8 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar8 + 0x10) = QHBoxLayout::vftable;
    pQVar17 = pQVar8;
  }
  QLayout::setContentsMargins((QLayout *)pQVar17,0,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar17,0);
  QWidget::setLayout(pQVar18,(QLayout *)pQVar17);
  QBoxLayout::addWidget((QBoxLayout *)pQVar15,pQVar18,0,0);
  local_40[0] = (QWidget *)thunk_FUN_140bd99d4(0x38);
  pQVar9 = pQVar16;
  if (local_40[0] != (QWidget *)0x0) {
    pQVar9 = (QObject *)thunk_FUN_14039ac20(local_40[0],*(undefined8 *)(param_1 + 0x48));
  }
  *(QObject **)(param_1 + 0x70) = pQVar9;
  local_78 = QString::fromAscii_helper("contactIconBtn",0xe);
  QObject::setObjectName(pQVar9,(QString *)&local_78);
  QString::~QString((QString *)&local_78);
  QWidget::setFixedSize(*(QWidget **)(param_1 + 0x70),0xd0,0x30);
  QBoxLayout::addWidget((QBoxLayout *)pQVar17,*(undefined8 *)(param_1 + 0x70),0,0);
  pQVar10 = (QSpacerItem *)thunk_FUN_140bd99d4(0x30);
  pQVar12 = (QSpacerItem *)pQVar16;
  local_40[0] = (QWidget *)pQVar10;
  if (pQVar10 != (QSpacerItem *)0x0) {
    QSpacerItem::QSpacerItem(pQVar10,1,1,7,0);
    *(undefined ***)pQVar10 = QSpacerItem::vftable;
    pQVar12 = pQVar10;
  }
  QBoxLayout::addSpacerItem((QBoxLayout *)pQVar17,pQVar12);
  pQVar8 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar17 = (QHBoxLayout *)pQVar16;
  local_40[0] = (QWidget *)pQVar8;
  if (pQVar8 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar8);
    *(undefined ***)pQVar8 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar8 + 0x10) = QHBoxLayout::vftable;
    pQVar17 = pQVar8;
  }
  QWidget::setLayout(*(QWidget **)(param_1 + 0x70),(QLayout *)pQVar17);
  thunk_FUN_14039ace0(*(undefined8 *)(param_1 + 0x70),0);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar19 = (QLabel *)pQVar16;
  local_40[0] = (QWidget *)pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    QLabel::QLabel(pQVar7,*(undefined8 *)(param_1 + 0x70),0);
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar19 = pQVar7;
  }
  *(QLabel **)(param_1 + 0x78) = pQVar19;
  local_78 = QString::fromAscii_helper("contactIconLabel",0x10);
  QObject::setObjectName((QObject *)pQVar19,(QString *)&local_78);
  QString::~QString((QString *)&local_78);
  QWidget::setFixedSize(*(QWidget **)(param_1 + 0x78),0x14,0x14);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar19 = (QLabel *)pQVar16;
  local_40[0] = (QWidget *)pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    QLabel::QLabel(pQVar7,*(undefined8 *)(param_1 + 0x70));
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar19 = pQVar7;
  }
  *(QLabel **)(param_1 + 0x80) = pQVar19;
  pQVar11 = (QString *)QObject::tr((char *)&local_70,&DAT_141071450,0);
  QLabel::setText(pQVar19,pQVar11);
  QString::~QString((QString *)&local_70);
  pQVar9 = *(QObject **)(param_1 + 0x80);
  local_78 = QString::fromAscii_helper("contactTextLabel",0x10);
  QObject::setObjectName(pQVar9,(QString *)&local_78);
  QString::~QString((QString *)&local_78);
  QLayout::setContentsMargins((QLayout *)pQVar17,0x14,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar17,4);
  QBoxLayout::addWidget((QBoxLayout *)pQVar17,*(undefined8 *)(param_1 + 0x78));
  QBoxLayout::addWidget((QBoxLayout *)pQVar17);
  QBoxLayout::addStretch((QBoxLayout *)pQVar15,0);
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    pQVar5 = (QWidget *)thunk_FUN_140bd99d4(0x30);
    pQVar18 = (QWidget *)pQVar16;
    local_40[0] = pQVar5;
    if (pQVar5 != (QWidget *)0x0) {
      QWidget::QWidget(pQVar5,*(undefined8 *)(param_1 + 0x48),0);
      *(undefined ***)pQVar5 = QWidget::vftable;
      *(undefined ***)(pQVar5 + 0x10) = QWidget::vftable;
      pQVar18 = pQVar5;
    }
    *(QWidget **)(param_1 + 0xb8) = pQVar18;
    local_78 = QString::fromAscii_helper("guidewdg",8);
    QObject::setObjectName((QObject *)pQVar18,(QString *)&local_78);
    QString::~QString((QString *)&local_78);
    QWidget::setFixedWidth(*(QWidget **)(param_1 + 0xb8),0xd0);
    QWidget::setFixedHeight(*(QWidget **)(param_1 + 0xb8),0x8c);
    local_40[0] = (QWidget *)thunk_FUN_140bd99d4(0x48);
    pQVar12 = (QSpacerItem *)pQVar16;
    if (local_40[0] != (QWidget *)0x0) {
      pQVar12 = (QSpacerItem *)thunk_FUN_1406976f0(local_40[0],0);
    }
    *(QSpacerItem **)(param_1 + 0xc0) = pQVar12;
    local_40[0] = (QWidget *)thunk_FUN_140bd99d4(0x18);
    this_00 = (QWebEnginePage *)pQVar16;
    if (local_40[0] != (QWidget *)0x0) {
      this_00 = (QWebEnginePage *)thunk_FUN_1403e8e70(local_40[0],param_1);
    }
    QColor::QColor((QColor *)local_40,"#1E1E1E");
    QWebEnginePage::setBackgroundColor(this_00,(QColor *)local_40);
    QWebEngineView::setPage(*(QWebEngineView **)(param_1 + 0xc0),this_00);
    QWidget::setEnabled(*(QWidget **)(param_1 + 0xb8),true);
    QObject::installEventFilter(*(QObject **)(param_1 + 0xb8),param_1);
    pQVar11 = (QString *)QCoreApplication::applicationDirPath();
    QString::QString((QString *)&local_78,pQVar11);
    local_68[0] = 0x10;
    pQVar11 = (QString *)QString::fromUtf8((char *)&local_60,0x41053a22);
    QString::append((QString *)&local_78,pQVar11);
    QString::~QString((QString *)&local_60);
    thunk_FUN_14025f9b0(&local_70,&local_78,"/tutorial/surveys");
    QString::~QString((QString *)&local_78);
    QString::~QString((QString *)local_40);
    local_50 = QString::fromAscii_helper("survey-en_US.html",0x11);
    local_78 = QString::fromAscii_helper("%1/%2",5);
    QChar::QChar(local_48,0x20);
    pQVar11 = (QString *)QString::arg((QString *)&local_78,local_40,&local_70);
    QChar::QChar((QChar *)local_68,0x20);
    QString::arg(pQVar11,local_58);
    QString::~QString((QString *)local_40);
    QString::~QString((QString *)&local_78);
    this = *(QWebEngineView **)(param_1 + 0xc0);
    pQVar13 = (QUrl *)QUrl::fromUserInput((QString *)&local_60);
    QWebEngineView::load(this,pQVar13);
    QUrl::~QUrl((QUrl *)&local_60);
    pQVar11 = (QString *)thunk_FUN_140653c40(&local_60);
    bVar2 = QString::operator==(pQVar11,"zh_CN");
    QString::~QString((QString *)&local_60);
    if (bVar2) {
      QWidget::hide(*(QWidget **)(param_1 + 0xb8));
    }
    else {
      QWidget::show(*(QWidget **)(param_1 + 0xb8));
    }
    this_01 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
    pQVar6 = (QVBoxLayout *)pQVar16;
    local_60 = this_01;
    if (this_01 != (QVBoxLayout *)0x0) {
      QVBoxLayout::QVBoxLayout(this_01,*(QWidget **)(param_1 + 0xb8));
      *(undefined ***)this_01 = QVBoxLayout::vftable;
      *(undefined ***)(this_01 + 0x10) = QVBoxLayout::vftable;
      pQVar6 = this_01;
    }
    QLayout::setContentsMargins((QLayout *)pQVar6,0,0,0,0);
    QBoxLayout::setSpacing((QBoxLayout *)pQVar6,0);
    QBoxLayout::addWidget((QBoxLayout *)pQVar6,*(undefined8 *)(param_1 + 0xc0),0,0);
    QWidget::setLayout(*(QWidget **)(param_1 + 0xb8),(QLayout *)pQVar6);
    QBoxLayout::addWidget((QBoxLayout *)pQVar15,*(undefined8 *)(param_1 + 0xb8),0,0);
    QString::~QString(local_58);
    QString::~QString((QString *)&local_50);
    QString::~QString((QString *)&local_70);
  }
  QBoxLayout::addSpacing((QBoxLayout *)pQVar15,0x18);
  pQVar12 = (QSpacerItem *)pQVar16;
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    pQVar14 = (QPushButton *)thunk_FUN_140bd99d4(0x30);
    pQVar20 = (QPushButton *)pQVar16;
    local_40[0] = (QWidget *)pQVar14;
    if (pQVar14 != (QPushButton *)0x0) {
      QPushButton::QPushButton(pQVar14,*(QWidget **)(param_1 + 0x48));
      *(undefined ***)pQVar14 = QPushButton::vftable;
      *(undefined ***)(pQVar14 + 0x10) = QPushButton::vftable;
      pQVar20 = pQVar14;
    }
    *(QPushButton **)(param_1 + 0xd8) = pQVar20;
    local_70 = QString::fromAscii_helper("scannerCaliBtn",0xe);
    QObject::setObjectName((QObject *)pQVar20,(QString *)&local_70);
    QString::~QString((QString *)&local_70);
    QWidget::setFixedWidth(*(QWidget **)(param_1 + 0xd8),0xd8);
    QFontMetrics::QFontMetrics
              ((QFontMetrics *)&local_78,
               (QFont *)(*(longlong *)(*(longlong *)(param_1 + 0xd8) + 0x28) + 0x38));
    iVar3 = QWidget::width(*(QWidget **)(param_1 + 0xd8));
    TVar4 = QObject::tr((char *)local_40,&DAT_1410714d0,0);
    QFontMetrics::elidedText((QFontMetrics *)&local_78,local_58,TVar4,1,iVar3 + -0x14);
    QString::~QString((QString *)local_40);
    QAbstractButton::setText(*(QAbstractButton **)(param_1 + 0xd8),local_58);
    pQVar18 = *(QWidget **)(param_1 + 0xd8);
    pQVar11 = (QString *)QObject::tr((char *)&local_60,&DAT_1410714d0,0);
    QWidget::setToolTip(pQVar18,pQVar11);
    QString::~QString((QString *)&local_60);
    QBoxLayout::addWidget((QBoxLayout *)pQVar15,*(undefined8 *)(param_1 + 0xd8),0,0);
    pQVar6 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
    pQVar9 = pQVar16;
    local_60 = pQVar6;
    if (pQVar6 != (QVBoxLayout *)0x0) {
      uVar1 = *(undefined8 *)(param_1 + 0xd8);
      local_50 = QString::fromAscii_helper(":/res/svg/icon_start_calibration_hover.svg",0x2a);
      local_68[0] = 1;
      local_70 = QString::fromAscii_helper(":/res/svg/icon_start_calibration_normal.svg",0x2b);
      local_68[0] = 3;
      pQVar9 = (QObject *)thunk_FUN_1403770f0(pQVar6,&local_70,&local_50,uVar1);
      pQVar12 = (QSpacerItem *)0x3;
    }
    if (((ulonglong)pQVar12 & 2) != 0) {
      pQVar12 = (QSpacerItem *)(ulonglong)((uint)pQVar12 & 0xfffffffd);
      QString::~QString((QString *)&local_70);
    }
    if (((ulonglong)pQVar12 & 1) != 0) {
      pQVar12 = (QSpacerItem *)(ulonglong)((uint)pQVar12 & 0xfffffffe);
      QString::~QString((QString *)&local_50);
    }
    QObject::installEventFilter(*(QObject **)(param_1 + 0xd8),pQVar9);
    QString::~QString(local_58);
    QFontMetrics::~QFontMetrics((QFontMetrics *)&local_78);
  }
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
    pQVar19 = (QLabel *)pQVar16;
    local_40[0] = (QWidget *)pQVar7;
    if (pQVar7 != (QLabel *)0x0) {
      QLabel::QLabel(pQVar7,*(undefined8 *)(param_1 + 0x48));
      *(undefined ***)pQVar7 = QLabel::vftable;
      *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
      pQVar19 = pQVar7;
    }
    *(QLabel **)(param_1 + 0xe0) = pQVar19;
    local_70 = QString::fromAscii_helper("calibrationDateLabel",0x14);
    QObject::setObjectName((QObject *)pQVar19,(QString *)&local_70);
    QString::~QString((QString *)&local_70);
    QWidget::setFixedWidth(*(QWidget **)(param_1 + 0xe0),0xfa);
    QLabel::setWordWrap(*(QLabel **)(param_1 + 0xe0),true);
    QBoxLayout::addSpacing((QBoxLayout *)pQVar15,4);
    QBoxLayout::addWidget((QBoxLayout *)pQVar15,*(undefined8 *)(param_1 + 0xe0),0,0);
    this_02 = (QSpacerItem *)thunk_FUN_140bd99d4(0x30);
    pQVar10 = (QSpacerItem *)pQVar16;
    local_40[0] = (QWidget *)this_02;
    if (this_02 != (QSpacerItem *)0x0) {
      QSpacerItem::QSpacerItem(this_02,0x28,0xf,7,1);
      *(undefined ***)this_02 = QSpacerItem::vftable;
      pQVar10 = this_02;
    }
    (**(code **)(*(longlong *)pQVar15 + 0x58))(pQVar15,pQVar10);
    QString::operator=((QString *)(param_1 + 0x2d8),"--");
    thunk_FUN_1403e7ef0(param_1);
  }
  if (*(longlong *)(param_1 + 0xe8) == 0) {
    pQVar14 = (QPushButton *)thunk_FUN_140bd99d4(0x30);
    pQVar20 = (QPushButton *)pQVar16;
    local_40[0] = (QWidget *)pQVar14;
    if (pQVar14 != (QPushButton *)0x0) {
      QPushButton::QPushButton(pQVar14,*(QWidget **)(param_1 + 0x48));
      *(undefined ***)pQVar14 = QPushButton::vftable;
      *(undefined ***)(pQVar14 + 0x10) = QPushButton::vftable;
      pQVar20 = pQVar14;
    }
    *(QPushButton **)(param_1 + 0xe8) = pQVar20;
    (**(code **)(*(longlong *)pQVar20 + 0x58))(pQVar20,0);
    pQVar9 = *(QObject **)(param_1 + 0xe8);
    local_70 = QString::fromAscii_helper("langtBtn",8);
    QObject::setObjectName(pQVar9,(QString *)&local_70);
    QString::~QString((QString *)&local_70);
    QWidget::setFixedWidth(*(QWidget **)(param_1 + 0xe8),0xd8);
    QFontMetrics::QFontMetrics
              ((QFontMetrics *)&local_78,
               (QFont *)(*(longlong *)(*(longlong *)(param_1 + 0xe8) + 0x28) + 0x38));
    iVar3 = QWidget::width(*(QWidget **)(param_1 + 0xe8));
    TVar4 = QObject::tr((char *)local_40,&DAT_14105f270,0);
    QFontMetrics::elidedText((QFontMetrics *)&local_78,local_58,TVar4,1,iVar3 + -0x14);
    QString::~QString((QString *)local_40);
    QAbstractButton::setText(*(QAbstractButton **)(param_1 + 0xe8),local_58);
    pQVar18 = *(QWidget **)(param_1 + 0xe8);
    pQVar11 = (QString *)QObject::tr((char *)&local_60,&DAT_14105f270,0);
    QWidget::setToolTip(pQVar18,pQVar11);
    QString::~QString((QString *)&local_60);
    QBoxLayout::addWidget((QBoxLayout *)pQVar15,*(undefined8 *)(param_1 + 0xe8),0,0);
    pQVar15 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
    local_60 = pQVar15;
    if (pQVar15 != (QVBoxLayout *)0x0) {
      uVar1 = *(undefined8 *)(param_1 + 0xe8);
      local_50 = QString::fromAscii_helper(":/res/svg/icon_start_language_hover.svg",0x27);
      local_68[0] = (uint)pQVar12 | 4;
      local_70 = QString::fromAscii_helper(":/res/svg/icon_start_language_normal.svg",0x28);
      local_68[0] = (uint)pQVar12 | 0xc;
      pQVar12 = (QSpacerItem *)(ulonglong)local_68[0];
      pQVar16 = (QObject *)thunk_FUN_1403770f0(pQVar15,&local_70,&local_50,uVar1);
    }
    if (((ulonglong)pQVar12 & 8) != 0) {
      pQVar12 = (QSpacerItem *)(ulonglong)((uint)pQVar12 & 0xfffffff7);
      QString::~QString((QString *)&local_70);
    }
    if (((ulonglong)pQVar12 & 4) != 0) {
      QString::~QString((QString *)&local_50);
    }
    QObject::installEventFilter(*(QObject **)(param_1 + 0xe8),pQVar16);
    QString::~QString(local_58);
    QFontMetrics::~QFontMetrics((QFontMetrics *)&local_78);
  }
  return;
}


