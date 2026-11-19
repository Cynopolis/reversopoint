// 140498a50  FUN_140498a50  size=0xce1  calls ~QUrl (site 1404996f0)

void FUN_140498a50(QScrollArea *param_1)

{
  QObject *pQVar1;
  longlong *plVar2;
  code *pcVar3;
  QVBoxLayout *pQVar4;
  QWidget *pQVar5;
  QScrollBar *pQVar6;
  QLabel *pQVar7;
  QLabel *pQVar8;
  undefined8 uVar9;
  QHBoxLayout *pQVar10;
  QPushButton *pQVar11;
  QString *pQVar12;
  QLabel *pQVar13;
  undefined8 uVar14;
  QHBoxLayout *this;
  longlong lVar15;
  QFrame *pQVar16;
  QLabel *pQVar17;
  QWidget *pQVar18;
  QPushButton *pQVar19;
  QVBoxLayout *pQVar20;
  QFrame *this_00;
  QHBoxLayout *this_01;
  uint uVar21;
  undefined8 local_res8;
  QHBoxLayout *local_res10;
  QString local_res18 [8];
  QLabel *local_res20;
  uint in_stack_ffffffffffffff5c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  
  pQVar17 = (QLabel *)0x0;
  local_res8 = (QVBoxLayout *)((ulonglong)local_res8 & 0xffffffff00000000);
  pQVar4 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar20 = (QVBoxLayout *)pQVar17;
  local_res8 = pQVar4;
  if (pQVar4 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar4,(QWidget *)param_1);
    *(undefined ***)pQVar4 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar4 + 0x10) = QVBoxLayout::vftable;
    pQVar20 = pQVar4;
  }
  *(QVBoxLayout **)(param_1 + 0x88) = pQVar20;
  QLayout::setContentsMargins((QLayout *)pQVar20,0x10,0x10,0x10,0x10);
  QScrollArea::setWidgetResizable(param_1,true);
  pQVar5 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar18 = (QWidget *)pQVar17;
  local_res8 = (QVBoxLayout *)pQVar5;
  if (pQVar5 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar5,param_1,0);
    *(undefined ***)pQVar5 = QWidget::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QWidget::vftable;
    pQVar18 = pQVar5;
  }
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("scanPanelContentWidget",0x16);
  QObject::setObjectName((QObject *)pQVar18,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QScrollArea::setWidget(param_1,pQVar18);
  QAbstractScrollArea::setHorizontalScrollBarPolicy((QAbstractScrollArea *)param_1,1);
  QWidget::setLayout(pQVar18,*(QLayout **)(param_1 + 0x88));
  pcVar3 = rangeChanged_exref;
  pQVar6 = QAbstractScrollArea::verticalScrollBar((QAbstractScrollArea *)param_1);
  local_88 = SUB84(pcVar3,0);
  uStack_84 = (undefined4)((ulonglong)pcVar3 >> 0x20);
  local_78 = local_88;
  uStack_74 = uStack_84;
  uStack_70 = 0;
  local_res10 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x18);
  pQVar13 = pQVar17;
  if (local_res10 != (QHBoxLayout *)0x0) {
    *(undefined4 *)local_res10 = 1;
    *(code **)(local_res10 + 8) = FUN_1404983f0;
    *(QScrollArea **)(local_res10 + 0x10) = param_1;
    pQVar13 = (QLabel *)local_res10;
  }
  QObject::connectImpl
            ((QObject *)&local_res8,(void **)pQVar6,(QObject *)&local_78,(void **)param_1,
             (QSlotObjectBase *)0x0,(ConnectionType)pQVar13,
             (int *)((ulonglong)in_stack_ffffffffffffff5c << 0x20),(QMetaObject *)0x0);
  uVar21 = 0x20;
  QMetaObject::Connection::~Connection((Connection *)&local_res8);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("editPage",8);
  QObject::setObjectName((QObject *)param_1,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar13 = pQVar17;
  local_res8 = (QVBoxLayout *)pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    QLabel::QLabel(pQVar7,param_1,0);
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar13 = pQVar7;
  }
  QWidget::setFixedSize((QWidget *)pQVar13,0x20,0x20);
  local_res8 = (QVBoxLayout *)
               QString::fromAscii_helper
                         ("QLabel{ background-color: transparent; border-image: url(:res/svg/function/icon_function_netsmooth_normal.svg);}"
                          ,0x70);
  QWidget::setStyleSheet((QWidget *)pQVar13,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar8 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar7 = pQVar17;
  local_res20 = pQVar8;
  if (pQVar8 != (QLabel *)0x0) {
    uVar9 = QObject::tr((char *)&local_res10,&DAT_14105d36c,0);
    uVar21 = 0x21;
    local_res8 = (QVBoxLayout *)CONCAT44(local_res8._4_4_,0x21);
    QLabel::QLabel(pQVar8,uVar9,param_1,0);
    *(undefined ***)pQVar8 = QLabel::vftable;
    *(undefined ***)(pQVar8 + 0x10) = QLabel::vftable;
    pQVar7 = pQVar8;
  }
  *(QLabel **)(param_1 + 0x30) = pQVar7;
  if ((uVar21 & 1) != 0) {
    uVar21 = uVar21 & 0xfffffffe;
    QString::~QString((QString *)&local_res10);
  }
  pQVar1 = *(QObject **)(param_1 + 0x30);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("editPageTitleLabel",0x12);
  QObject::setObjectName(pQVar1,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar10 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  this_01 = (QHBoxLayout *)pQVar17;
  local_res8 = (QVBoxLayout *)pQVar10;
  if (pQVar10 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar10);
    *(undefined ***)pQVar10 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar10 + 0x10) = QHBoxLayout::vftable;
    this_01 = pQVar10;
  }
  QBoxLayout::addWidget((QBoxLayout *)this_01,pQVar13,0,0);
  QBoxLayout::addWidget((QBoxLayout *)this_01,*(undefined8 *)(param_1 + 0x30),0,0);
  QBoxLayout::addStretch((QBoxLayout *)this_01,0);
  pQVar5 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar18 = (QWidget *)pQVar17;
  local_res8 = (QVBoxLayout *)pQVar5;
  if (pQVar5 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar5,param_1);
    *(undefined ***)pQVar5 = QWidget::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QWidget::vftable;
    pQVar18 = pQVar5;
  }
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("pointCloudFusionBottomWidget",0x1c);
  QObject::setObjectName((QObject *)pQVar18,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar13 = pQVar17;
  local_res20 = pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    uVar9 = QObject::tr((char *)&local_res10,&DAT_14107f2c8,0);
    local_res8 = (QVBoxLayout *)(CONCAT44(local_res8._4_4_,uVar21) | 2);
    QLabel::QLabel(pQVar7,uVar9,pQVar18,0);
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar13 = pQVar7;
    uVar21 = uVar21 | 2;
  }
  *(QLabel **)(param_1 + 0x38) = pQVar13;
  if ((uVar21 & 2) != 0) {
    uVar21 = uVar21 & 0xfffffffd;
    QString::~QString((QString *)&local_res10);
  }
  pQVar1 = *(QObject **)(param_1 + 0x38);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("fusionDotPitchLabel",0x13);
  QObject::setObjectName(pQVar1,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar11 = (QPushButton *)thunk_FUN_140bd99d4(0x30);
  pQVar19 = (QPushButton *)pQVar17;
  local_res8 = (QVBoxLayout *)pQVar11;
  if (pQVar11 != (QPushButton *)0x0) {
    QPushButton::QPushButton(pQVar11,pQVar18);
    *(undefined ***)pQVar11 = QPushButton::vftable;
    *(undefined ***)(pQVar11 + 0x10) = QPushButton::vftable;
    pQVar19 = pQVar11;
  }
  *(QPushButton **)(param_1 + 0x48) = pQVar19;
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("fusionDotPitchResetBtn",0x16);
  QObject::setObjectName((QObject *)pQVar19,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar5 = *(QWidget **)(param_1 + 0x48);
  pQVar12 = (QString *)QObject::tr((char *)&local_res8,&DAT_14107e494,0);
  QWidget::setToolTip(pQVar5,pQVar12);
  QString::~QString((QString *)&local_res8);
  pQVar10 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  local_res8 = (QVBoxLayout *)pQVar10;
  if (pQVar10 == (QHBoxLayout *)0x0) {
    local_res10 = (QHBoxLayout *)0x0;
    pQVar10 = (QHBoxLayout *)pQVar17;
  }
  else {
    local_res10 = pQVar10;
    QHBoxLayout::QHBoxLayout(pQVar10);
    *(undefined ***)pQVar10 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar10 + 0x10) = QHBoxLayout::vftable;
  }
  QBoxLayout::setSpacing((QBoxLayout *)pQVar10,10);
  QBoxLayout::addWidget((QBoxLayout *)pQVar10,*(undefined8 *)(param_1 + 0x38),0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar10,*(undefined8 *)(param_1 + 0x48),0,0);
  QBoxLayout::addStretch((QBoxLayout *)pQVar10,0);
  local_res8 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x88);
  uVar9 = DAT_141058db8;
  pQVar13 = pQVar17;
  if (local_res8 != (QVBoxLayout *)0x0) {
    pQVar13 = (QLabel *)
              thunk_FUN_14039c090(local_res8,pQVar18,DAT_141072f50,DAT_141059158,DAT_141058db8,0);
  }
  *(QLabel **)(param_1 + 0x58) = pQVar13;
  thunk_FUN_14039d840(pQVar13,0xb4);
  thunk_FUN_14039d930(*(undefined8 *)(param_1 + 0x58),0x3c);
  QWidget::setFixedHeight(*(QWidget **)(param_1 + 0x58),0x18);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0x58),0x5c,true);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar13 = pQVar17;
  if (pQVar7 != (QLabel *)0x0) {
    uVar14 = QObject::tr((char *)&local_res20,&DAT_14107ea08,0);
    local_res8 = (QVBoxLayout *)(CONCAT44(local_res8._4_4_,uVar21) | 4);
    QLabel::QLabel(pQVar7,uVar14,pQVar18,0);
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar13 = pQVar7;
    uVar21 = uVar21 | 4;
  }
  *(QLabel **)(param_1 + 0x40) = pQVar13;
  if ((uVar21 & 4) != 0) {
    uVar21 = uVar21 & 0xfffffffb;
    QString::~QString((QString *)&local_res20);
  }
  pQVar1 = *(QObject **)(param_1 + 0x40);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("fusionDotPitchLabel",0x13);
  QObject::setObjectName(pQVar1,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar11 = (QPushButton *)thunk_FUN_140bd99d4(0x30);
  pQVar19 = (QPushButton *)pQVar17;
  local_res8 = (QVBoxLayout *)pQVar11;
  if (pQVar11 != (QPushButton *)0x0) {
    QPushButton::QPushButton(pQVar11,pQVar18);
    *(undefined ***)pQVar11 = QPushButton::vftable;
    *(undefined ***)(pQVar11 + 0x10) = QPushButton::vftable;
    pQVar19 = pQVar11;
  }
  *(QPushButton **)(param_1 + 0x50) = pQVar19;
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("fusionDotPitchResetBtn",0x16);
  QObject::setObjectName((QObject *)pQVar19,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar5 = *(QWidget **)(param_1 + 0x50);
  pQVar12 = (QString *)QObject::tr((char *)&local_res8,&DAT_14107e494,0);
  QWidget::setToolTip(pQVar5,pQVar12);
  QString::~QString((QString *)&local_res8);
  this = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar10 = (QHBoxLayout *)pQVar17;
  local_res8 = (QVBoxLayout *)this;
  if (this != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(this);
    *(undefined ***)this = QHBoxLayout::vftable;
    *(undefined ***)(this + 0x10) = QHBoxLayout::vftable;
    pQVar10 = this;
  }
  QBoxLayout::setSpacing((QBoxLayout *)pQVar10,10);
  QBoxLayout::addWidget((QBoxLayout *)pQVar10,*(undefined8 *)(param_1 + 0x40),0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar10,*(undefined8 *)(param_1 + 0x50),0,0);
  QBoxLayout::addStretch((QBoxLayout *)pQVar10,0);
  local_res8 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x88);
  pQVar13 = pQVar17;
  if (local_res8 != (QVBoxLayout *)0x0) {
    pQVar13 = (QLabel *)thunk_FUN_14039c090(local_res8,pQVar18,DAT_141072f50,DAT_141059158,uVar9,0);
  }
  *(QLabel **)(param_1 + 0x60) = pQVar13;
  thunk_FUN_14039d840(pQVar13,0xb4);
  thunk_FUN_14039d930(*(undefined8 *)(param_1 + 0x60),0x3c);
  QWidget::setFixedHeight(*(QWidget **)(param_1 + 0x60),0x18);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0x60),0x5c,true);
  lVar15 = thunk_FUN_140bd99d4(0x30);
  pQVar13 = pQVar17;
  if (lVar15 != 0) {
    uVar9 = QObject::tr((char *)&local_res20,&DAT_141059efc,0);
    local_res8 = (QVBoxLayout *)(CONCAT44(local_res8._4_4_,uVar21) | 8);
    pQVar13 = (QLabel *)thunk_FUN_1406c6430(lVar15,uVar9,pQVar18);
    uVar21 = uVar21 | 8;
  }
  *(QLabel **)(param_1 + 0x68) = pQVar13;
  if ((uVar21 & 8) != 0) {
    uVar21 = uVar21 & 0xfffffff7;
    QString::~QString((QString *)&local_res20);
  }
  QWidget::setFixedHeight(*(QWidget **)(param_1 + 0x68),0x26);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0x68),0x5c,true);
  pQVar4 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar20 = (QVBoxLayout *)pQVar17;
  local_res8 = pQVar4;
  if (pQVar4 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar4,pQVar18);
    *(undefined ***)pQVar4 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar4 + 0x10) = QVBoxLayout::vftable;
    pQVar20 = pQVar4;
  }
  QLayout::setContentsMargins((QLayout *)pQVar20,0x10,0x10,0x10,0x10);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar20,0x14);
  QBoxLayout::addLayout((QBoxLayout *)pQVar20,(QLayout *)pQVar10,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar20,*(undefined8 *)(param_1 + 0x60));
  QBoxLayout::addLayout((QBoxLayout *)pQVar20,(QLayout *)local_res10,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar20,*(undefined8 *)(param_1 + 0x58));
  QBoxLayout::addWidget((QBoxLayout *)pQVar20,*(undefined8 *)(param_1 + 0x68));
  pQVar16 = (QFrame *)thunk_FUN_140bd99d4(0x30);
  this_00 = (QFrame *)pQVar17;
  local_res8 = (QVBoxLayout *)pQVar16;
  if (pQVar16 != (QFrame *)0x0) {
    QFrame::QFrame(pQVar16,param_1);
    *(undefined ***)pQVar16 = QFrame::vftable;
    *(undefined ***)(pQVar16 + 0x10) = QFrame::vftable;
    this_00 = pQVar16;
  }
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("editPageSplitLine",0x11);
  QObject::setObjectName((QObject *)this_00,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QFrame::setFrameShape(this_00,4);
  QWidget::setFixedHeight((QWidget *)this_00,1);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar13 = pQVar17;
  local_res20 = pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    uVar9 = QObject::tr((char *)&local_res10,&DAT_14107c4e0,0);
    local_res8 = (QVBoxLayout *)(CONCAT44(local_res8._4_4_,uVar21) | 0x10);
    QLabel::QLabel(pQVar7,uVar9);
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar13 = pQVar7;
    uVar21 = 0x10;
  }
  *(QLabel **)(param_1 + 0x70) = pQVar13;
  if ((uVar21 & 0x10) != 0) {
    QString::~QString((QString *)&local_res10);
  }
  pQVar1 = *(QObject **)(param_1 + 0x70);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("editPageInstructionLabel",0x18);
  QObject::setObjectName(pQVar1,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QBoxLayout::addLayout(*(QBoxLayout **)(param_1 + 0x88),(QLayout *)this_01,0);
  QBoxLayout::addSpacing(*(QBoxLayout **)(param_1 + 0x88),0xc);
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 0x88),pQVar18);
  QBoxLayout::addSpacing(*(QBoxLayout **)(param_1 + 0x88),0x18);
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 0x88),this_00);
  QBoxLayout::addSpacing(*(QBoxLayout **)(param_1 + 0x88),0x14);
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x70));
  QBoxLayout::addSpacing(*(QBoxLayout **)(param_1 + 0x88),0xc);
  pQVar4 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar20 = (QVBoxLayout *)pQVar17;
  local_res8 = pQVar4;
  if (pQVar4 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar4);
    *(undefined ***)pQVar4 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar4 + 0x10) = QVBoxLayout::vftable;
    pQVar20 = pQVar4;
  }
  *(QVBoxLayout **)(param_1 + 0x90) = pQVar20;
  QLayout::setContentsMargins((QLayout *)pQVar20,0,0,0,0);
  QBoxLayout::addLayout(*(QBoxLayout **)(param_1 + 0x88),*(QLayout **)(param_1 + 0x90),0);
  local_res8 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x30);
  if (local_res8 != (QVBoxLayout *)0x0) {
    pQVar17 = (QLabel *)thunk_FUN_140695fd0(local_res8,param_1);
  }
  *(QLabel **)(param_1 + 0x78) = pQVar17;
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 0x90),pQVar17,0,0);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("meshsmoothpage",0xe);
  thunk_FUN_1406487e0(local_res18,&local_res8);
  QString::~QString((QString *)&local_res8);
  plVar2 = *(longlong **)(param_1 + 0x78);
  pcVar3 = *(code **)(*plVar2 + 0x1b0);
  QUrl::fromUserInput((QString *)&local_res10);
  (*pcVar3)(plVar2);
  QUrl::~QUrl((QUrl *)&local_res10);
  QBoxLayout::addStretch(*(QBoxLayout **)(param_1 + 0x88),0);
  QString::~QString(local_res18);
  return;
}


