// 140491010  FUN_140491010  size=0xb4e  calls ~QUrl (site 140491b2d)

void FUN_140491010(QScrollArea *param_1)

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
  QPushButton *this;
  QString *pQVar11;
  QHBoxLayout *pQVar12;
  QLabel *pQVar13;
  longlong lVar14;
  QHBoxLayout *this_00;
  QFrame *pQVar15;
  QLabel *pQVar16;
  QWidget *pQVar17;
  QPushButton *this_01;
  QVBoxLayout *pQVar18;
  uint uVar19;
  QFrame *this_02;
  undefined8 local_res8;
  QHBoxLayout *local_res10;
  QString local_res18 [8];
  QLabel *local_res20;
  uint in_stack_ffffffffffffff7c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  pQVar16 = (QLabel *)0x0;
  local_res8 = (QHBoxLayout *)((ulonglong)local_res8 & 0xffffffff00000000);
  pQVar4 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar18 = (QVBoxLayout *)pQVar16;
  local_res8 = (QHBoxLayout *)pQVar4;
  if (pQVar4 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar4);
    *(undefined ***)pQVar4 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar4 + 0x10) = QVBoxLayout::vftable;
    pQVar18 = pQVar4;
  }
  *(QVBoxLayout **)(param_1 + 0x80) = pQVar18;
  QLayout::setContentsMargins((QLayout *)pQVar18,0x10,0x10,0x10,0x10);
  QScrollArea::setWidgetResizable(param_1,true);
  pQVar5 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar17 = (QWidget *)pQVar16;
  local_res8 = (QHBoxLayout *)pQVar5;
  if (pQVar5 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar5,param_1,0);
    *(undefined ***)pQVar5 = QWidget::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QWidget::vftable;
    pQVar17 = pQVar5;
  }
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("scanPanelContentWidget",0x16);
  QObject::setObjectName((QObject *)pQVar17,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QScrollArea::setWidget(param_1,pQVar17);
  QAbstractScrollArea::setHorizontalScrollBarPolicy((QAbstractScrollArea *)param_1,1);
  QWidget::setLayout(pQVar17,*(QLayout **)(param_1 + 0x80));
  pcVar3 = rangeChanged_exref;
  pQVar6 = QAbstractScrollArea::verticalScrollBar((QAbstractScrollArea *)param_1);
  local_68 = SUB84(pcVar3,0);
  uStack_64 = (undefined4)((ulonglong)pcVar3 >> 0x20);
  local_58 = local_68;
  uStack_54 = uStack_64;
  uStack_50 = 0;
  local_res10 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x18);
  pQVar13 = pQVar16;
  if (local_res10 != (QHBoxLayout *)0x0) {
    *(undefined4 *)local_res10 = 1;
    *(code **)(local_res10 + 8) = FUN_1404905d0;
    *(QScrollArea **)(local_res10 + 0x10) = param_1;
    pQVar13 = (QLabel *)local_res10;
  }
  QObject::connectImpl
            ((QObject *)&local_res8,(void **)pQVar6,(QObject *)&local_58,(void **)param_1,
             (QSlotObjectBase *)0x0,(ConnectionType)pQVar13,
             (int *)((ulonglong)in_stack_ffffffffffffff7c << 0x20),(QMetaObject *)0x0);
  uVar19 = 0x20;
  QMetaObject::Connection::~Connection((Connection *)&local_res8);
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("editPage",8);
  QObject::setObjectName((QObject *)param_1,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar13 = pQVar16;
  local_res8 = (QHBoxLayout *)pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    QLabel::QLabel(pQVar7,param_1,0);
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar13 = pQVar7;
  }
  QWidget::setFixedSize((QWidget *)pQVar13,0x20,0x20);
  local_res8 = (QHBoxLayout *)
               QString::fromAscii_helper
                         ("QLabel{ background-color: transparent; border-image: url(:res/svg/function/icon_function_netisolated_normal.svg);}"
                          ,0x72);
  QWidget::setStyleSheet((QWidget *)pQVar13,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar8 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar7 = pQVar16;
  local_res20 = pQVar8;
  if (pQVar8 != (QLabel *)0x0) {
    uVar9 = QObject::tr((char *)&local_res10,&DAT_14105d360,0);
    uVar19 = 0x21;
    local_res8 = (QHBoxLayout *)CONCAT44(local_res8._4_4_,0x21);
    QLabel::QLabel(pQVar8,uVar9,param_1,0);
    *(undefined ***)pQVar8 = QLabel::vftable;
    *(undefined ***)(pQVar8 + 0x10) = QLabel::vftable;
    pQVar7 = pQVar8;
  }
  *(QLabel **)(param_1 + 0x30) = pQVar7;
  if ((uVar19 & 1) != 0) {
    uVar19 = uVar19 & 0xfffffffe;
    QString::~QString((QString *)&local_res10);
  }
  pQVar1 = *(QObject **)(param_1 + 0x30);
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("editPageTitleLabel",0x12);
  QObject::setObjectName(pQVar1,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar10 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  if (pQVar10 == (QHBoxLayout *)0x0) {
    local_res10 = (QHBoxLayout *)0x0;
    pQVar12 = (QHBoxLayout *)pQVar16;
    local_res8 = pQVar10;
  }
  else {
    local_res8 = pQVar10;
    local_res10 = pQVar10;
    QHBoxLayout::QHBoxLayout(pQVar10);
    *(undefined ***)pQVar10 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar10 + 0x10) = QHBoxLayout::vftable;
    pQVar12 = pQVar10;
  }
  QBoxLayout::addWidget((QBoxLayout *)pQVar12,pQVar13,0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar12,*(undefined8 *)(param_1 + 0x30),0,0);
  QBoxLayout::addStretch((QBoxLayout *)pQVar12,0);
  pQVar5 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar17 = (QWidget *)pQVar16;
  local_res8 = (QHBoxLayout *)pQVar5;
  if (pQVar5 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar5,param_1);
    *(undefined ***)pQVar5 = QWidget::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QWidget::vftable;
    pQVar17 = pQVar5;
  }
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("pointCloudFusionBottomWidget",0x1c);
  QObject::setObjectName((QObject *)pQVar17,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar13 = pQVar16;
  if (pQVar7 != (QLabel *)0x0) {
    uVar9 = QObject::tr((char *)&local_res20,&DAT_14107e450,0);
    local_res8 = (QHBoxLayout *)(CONCAT44(local_res8._4_4_,uVar19) | 2);
    QLabel::QLabel(pQVar7,uVar9,pQVar17,0);
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar13 = pQVar7;
    uVar19 = uVar19 | 2;
  }
  *(QLabel **)(param_1 + 0x38) = pQVar13;
  if ((uVar19 & 2) != 0) {
    uVar19 = uVar19 & 0xfffffffd;
    QString::~QString((QString *)&local_res20);
  }
  pQVar1 = *(QObject **)(param_1 + 0x38);
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("fusionDotPitchLabel",0x13);
  QObject::setObjectName(pQVar1,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  this = (QPushButton *)thunk_FUN_140bd99d4(0x30);
  this_01 = (QPushButton *)pQVar16;
  local_res8 = (QHBoxLayout *)this;
  if (this != (QPushButton *)0x0) {
    QPushButton::QPushButton(this,pQVar17);
    *(undefined ***)this = QPushButton::vftable;
    *(undefined ***)(this + 0x10) = QPushButton::vftable;
    this_01 = this;
  }
  *(QPushButton **)(param_1 + 0x40) = this_01;
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("fusionDotPitchResetBtn",0x16);
  QObject::setObjectName((QObject *)this_01,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar5 = *(QWidget **)(param_1 + 0x40);
  pQVar11 = (QString *)QObject::tr((char *)&local_res8,&DAT_14107e494,0);
  QWidget::setToolTip(pQVar5,pQVar11);
  QString::~QString((QString *)&local_res8);
  pQVar12 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar10 = (QHBoxLayout *)pQVar16;
  local_res8 = pQVar12;
  if (pQVar12 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar12);
    *(undefined ***)pQVar12 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar12 + 0x10) = QHBoxLayout::vftable;
    pQVar10 = pQVar12;
  }
  QBoxLayout::setSpacing((QBoxLayout *)pQVar10,10);
  QBoxLayout::addWidget((QBoxLayout *)pQVar10,*(undefined8 *)(param_1 + 0x38),0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar10,*(undefined8 *)(param_1 + 0x40),0,0);
  QBoxLayout::addStretch((QBoxLayout *)pQVar10,0);
  local_res8 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x88);
  pQVar13 = pQVar16;
  if (local_res8 != (QHBoxLayout *)0x0) {
    pQVar13 = (QLabel *)
              thunk_FUN_14039c090(local_res8,pQVar17,DAT_141072f50,DAT_141059158,DAT_141058db8,0);
  }
  *(QLabel **)(param_1 + 0x48) = pQVar13;
  thunk_FUN_14039d840(pQVar13,0xb4);
  QWidget::setFixedHeight(*(QWidget **)(param_1 + 0x48),0x18);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0x48),0x5c,true);
  thunk_FUN_14039d6e0(*(undefined8 *)(param_1 + 0x48),1);
  lVar14 = thunk_FUN_140bd99d4(0x30);
  pQVar13 = pQVar16;
  if (lVar14 != 0) {
    uVar9 = QObject::tr((char *)&local_res20,&DAT_14107de50,0);
    local_res8 = (QHBoxLayout *)(CONCAT44(local_res8._4_4_,uVar19) | 4);
    pQVar13 = (QLabel *)thunk_FUN_1406c6860(lVar14,uVar9,pQVar17);
    uVar19 = uVar19 | 4;
  }
  *(QLabel **)(param_1 + 0x50) = pQVar13;
  if ((uVar19 & 4) != 0) {
    uVar19 = uVar19 & 0xfffffffb;
    QString::~QString((QString *)&local_res20);
  }
  QWidget::setFixedHeight(*(QWidget **)(param_1 + 0x50),0x26);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0x50),0x5c,true);
  lVar14 = thunk_FUN_140bd99d4(0x30);
  pQVar13 = pQVar16;
  if (lVar14 != 0) {
    uVar9 = QObject::tr((char *)&local_res20,&DAT_141059efc,0);
    local_res8 = (QHBoxLayout *)(CONCAT44(local_res8._4_4_,uVar19) | 8);
    pQVar13 = (QLabel *)thunk_FUN_1406c6860(lVar14,uVar9,pQVar17);
    uVar19 = uVar19 | 8;
  }
  *(QLabel **)(param_1 + 0x58) = pQVar13;
  if ((uVar19 & 8) != 0) {
    uVar19 = uVar19 & 0xfffffff7;
    QString::~QString((QString *)&local_res20);
  }
  FUN_14000b802(*(undefined8 *)(param_1 + 0x58),1);
  QWidget::setFixedHeight(*(QWidget **)(param_1 + 0x58),0x26);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0x58),0x5c,true);
  this_00 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar12 = (QHBoxLayout *)pQVar16;
  local_res8 = this_00;
  if (this_00 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(this_00);
    *(undefined ***)this_00 = QHBoxLayout::vftable;
    *(undefined ***)(this_00 + 0x10) = QHBoxLayout::vftable;
    pQVar12 = this_00;
  }
  QBoxLayout::setSpacing((QBoxLayout *)pQVar12,10);
  QBoxLayout::addWidget((QBoxLayout *)pQVar12,*(undefined8 *)(param_1 + 0x50),0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar12,*(undefined8 *)(param_1 + 0x58),0,0);
  pQVar4 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar18 = (QVBoxLayout *)pQVar16;
  local_res8 = (QHBoxLayout *)pQVar4;
  if (pQVar4 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar4,pQVar17);
    *(undefined ***)pQVar4 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar4 + 0x10) = QVBoxLayout::vftable;
    pQVar18 = pQVar4;
  }
  QLayout::setContentsMargins((QLayout *)pQVar18,0x10,0x10,0x10,0x10);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar18,0x14);
  QBoxLayout::addLayout((QBoxLayout *)pQVar18,(QLayout *)pQVar10,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar18,*(undefined8 *)(param_1 + 0x48));
  QBoxLayout::addLayout((QBoxLayout *)pQVar18,(QLayout *)pQVar12,0);
  pQVar15 = (QFrame *)thunk_FUN_140bd99d4(0x30);
  this_02 = (QFrame *)pQVar16;
  local_res8 = (QHBoxLayout *)pQVar15;
  if (pQVar15 != (QFrame *)0x0) {
    QFrame::QFrame(pQVar15,param_1);
    *(undefined ***)pQVar15 = QFrame::vftable;
    *(undefined ***)(pQVar15 + 0x10) = QFrame::vftable;
    this_02 = pQVar15;
  }
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("editPageSplitLine",0x11);
  QObject::setObjectName((QObject *)this_02,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QFrame::setFrameShape(this_02,4);
  QWidget::setFixedHeight((QWidget *)this_02,1);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar13 = pQVar16;
  if (pQVar7 != (QLabel *)0x0) {
    uVar9 = QObject::tr((char *)&local_res20,&DAT_14107c4e0,0);
    local_res8 = (QHBoxLayout *)(CONCAT44(local_res8._4_4_,uVar19) | 0x10);
    QLabel::QLabel(pQVar7,uVar9);
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar13 = pQVar7;
    uVar19 = 0x10;
  }
  *(QLabel **)(param_1 + 0x60) = pQVar13;
  if ((uVar19 & 0x10) != 0) {
    QString::~QString((QString *)&local_res20);
  }
  pQVar1 = *(QObject **)(param_1 + 0x60);
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("editPageInstructionLabel",0x18);
  QObject::setObjectName(pQVar1,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QBoxLayout::addLayout(*(QBoxLayout **)(param_1 + 0x80),(QLayout *)local_res10,0);
  QBoxLayout::addSpacing(*(QBoxLayout **)(param_1 + 0x80),0xc);
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 0x80),pQVar17);
  QBoxLayout::addSpacing(*(QBoxLayout **)(param_1 + 0x80),0x18);
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 0x80),this_02);
  QBoxLayout::addSpacing(*(QBoxLayout **)(param_1 + 0x80),0x14);
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x60));
  QBoxLayout::addSpacing(*(QBoxLayout **)(param_1 + 0x80),0xc);
  pQVar4 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar18 = (QVBoxLayout *)pQVar16;
  local_res8 = (QHBoxLayout *)pQVar4;
  if (pQVar4 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar4);
    *(undefined ***)pQVar4 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar4 + 0x10) = QVBoxLayout::vftable;
    pQVar18 = pQVar4;
  }
  *(QVBoxLayout **)(param_1 + 0x88) = pQVar18;
  QLayout::setContentsMargins((QLayout *)pQVar18,0,0,0,0);
  QBoxLayout::addLayout(*(QBoxLayout **)(param_1 + 0x80),*(QLayout **)(param_1 + 0x88),0);
  local_res8 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x30);
  if (local_res8 != (QHBoxLayout *)0x0) {
    pQVar16 = (QLabel *)thunk_FUN_140695fd0(local_res8,param_1);
  }
  *(QLabel **)(param_1 + 0x68) = pQVar16;
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 0x88),pQVar16,0,0);
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("meshisolatepage",0xf);
  thunk_FUN_1406487e0(local_res18,&local_res8);
  QString::~QString((QString *)&local_res8);
  plVar2 = *(longlong **)(param_1 + 0x68);
  pcVar3 = *(code **)(*plVar2 + 0x1b0);
  QUrl::fromUserInput((QString *)&local_res10);
  (*pcVar3)(plVar2);
  QUrl::~QUrl((QUrl *)&local_res10);
  QBoxLayout::addStretch(*(QBoxLayout **)(param_1 + 0x80),0);
  QString::~QString(local_res18);
  return;
}


