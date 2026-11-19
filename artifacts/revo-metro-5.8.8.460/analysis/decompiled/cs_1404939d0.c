// 1404939d0  FUN_1404939d0  size=0x9d7  calls ~QUrl (site 140494379)

void FUN_1404939d0(QScrollArea *param_1)

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
  QHBoxLayout *this_00;
  QLabel *pQVar11;
  longlong lVar12;
  QFrame *pQVar13;
  QLabel *pQVar14;
  QWidget *pQVar15;
  QPushButton *this_01;
  QVBoxLayout *pQVar16;
  QHBoxLayout *this_02;
  uint uVar17;
  QFrame *this_03;
  undefined8 local_res8;
  QString local_res10 [8];
  QLabel *local_res18;
  QLabel *local_res20;
  uint in_stack_ffffffffffffff7c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  pQVar14 = (QLabel *)0x0;
  local_res8 = (QVBoxLayout *)((ulonglong)local_res8 & 0xffffffff00000000);
  pQVar4 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar16 = (QVBoxLayout *)pQVar14;
  local_res8 = pQVar4;
  if (pQVar4 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar4);
    *(undefined ***)pQVar4 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar4 + 0x10) = QVBoxLayout::vftable;
    pQVar16 = pQVar4;
  }
  *(QVBoxLayout **)(param_1 + 0x70) = pQVar16;
  QLayout::setContentsMargins((QLayout *)pQVar16,0x10,0x10,0x10,0x10);
  QScrollArea::setWidgetResizable(param_1,true);
  pQVar5 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar15 = (QWidget *)pQVar14;
  local_res8 = (QVBoxLayout *)pQVar5;
  if (pQVar5 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar5,param_1,0);
    *(undefined ***)pQVar5 = QWidget::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QWidget::vftable;
    pQVar15 = pQVar5;
  }
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("scanPanelContentWidget",0x16);
  QObject::setObjectName((QObject *)pQVar15,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QScrollArea::setWidget(param_1,pQVar15);
  QAbstractScrollArea::setHorizontalScrollBarPolicy((QAbstractScrollArea *)param_1,1);
  QWidget::setLayout(pQVar15,*(QLayout **)(param_1 + 0x70));
  pcVar3 = rangeChanged_exref;
  pQVar6 = QAbstractScrollArea::verticalScrollBar((QAbstractScrollArea *)param_1);
  local_68 = SUB84(pcVar3,0);
  uStack_64 = (undefined4)((ulonglong)pcVar3 >> 0x20);
  local_58 = local_68;
  uStack_54 = uStack_64;
  uStack_50 = 0;
  local_res18 = (QLabel *)thunk_FUN_140bd99d4(0x18);
  pQVar11 = pQVar14;
  if (local_res18 != (QLabel *)0x0) {
    *(undefined4 *)local_res18 = 1;
    *(code **)(local_res18 + 8) = FUN_1404934f0;
    *(QScrollArea **)(local_res18 + 0x10) = param_1;
    pQVar11 = local_res18;
  }
  QObject::connectImpl
            ((QObject *)&local_res8,(void **)pQVar6,(QObject *)&local_58,(void **)param_1,
             (QSlotObjectBase *)0x0,(ConnectionType)pQVar11,
             (int *)((ulonglong)in_stack_ffffffffffffff7c << 0x20),(QMetaObject *)0x0);
  uVar17 = 0x10;
  QMetaObject::Connection::~Connection((Connection *)&local_res8);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("editPage",8);
  QObject::setObjectName((QObject *)param_1,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar11 = pQVar14;
  local_res8 = (QVBoxLayout *)pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    QLabel::QLabel(pQVar7,param_1,0);
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar11 = pQVar7;
  }
  QWidget::setFixedSize((QWidget *)pQVar11,0x20,0x20);
  local_res8 = (QVBoxLayout *)
               QString::fromAscii_helper
                         ("QLabel{ background-color: transparent; border-image: url(:res/svg/function/icon_function_sharpen_normal.svg);}"
                          ,0x6e);
  QWidget::setStyleSheet((QWidget *)pQVar11,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar8 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar7 = pQVar14;
  local_res20 = pQVar8;
  if (pQVar8 != (QLabel *)0x0) {
    uVar9 = QObject::tr((char *)&local_res18,&DAT_14105d3a8,0);
    uVar17 = 0x11;
    local_res8 = (QVBoxLayout *)CONCAT44(local_res8._4_4_,0x11);
    QLabel::QLabel(pQVar8,uVar9,param_1,0);
    *(undefined ***)pQVar8 = QLabel::vftable;
    *(undefined ***)(pQVar8 + 0x10) = QLabel::vftable;
    pQVar7 = pQVar8;
  }
  *(QLabel **)(param_1 + 0x30) = pQVar7;
  if ((uVar17 & 1) != 0) {
    uVar17 = uVar17 & 0xfffffffe;
    QString::~QString((QString *)&local_res18);
  }
  pQVar1 = *(QObject **)(param_1 + 0x30);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("editPageTitleLabel",0x12);
  QObject::setObjectName(pQVar1,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar10 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  this_02 = (QHBoxLayout *)pQVar14;
  local_res8 = (QVBoxLayout *)pQVar10;
  if (pQVar10 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar10);
    *(undefined ***)pQVar10 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar10 + 0x10) = QHBoxLayout::vftable;
    this_02 = pQVar10;
  }
  QBoxLayout::addWidget((QBoxLayout *)this_02,pQVar11,0,0);
  QBoxLayout::addWidget((QBoxLayout *)this_02,*(undefined8 *)(param_1 + 0x30),0,0);
  QBoxLayout::addStretch((QBoxLayout *)this_02,0);
  pQVar5 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar15 = (QWidget *)pQVar14;
  local_res8 = (QVBoxLayout *)pQVar5;
  if (pQVar5 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar5,param_1);
    *(undefined ***)pQVar5 = QWidget::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QWidget::vftable;
    pQVar15 = pQVar5;
  }
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("pointCloudFusionBottomWidget",0x1c);
  QObject::setObjectName((QObject *)pQVar15,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar11 = pQVar14;
  local_res20 = pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    uVar9 = QObject::tr((char *)&local_res18,&DAT_14107ea08,0);
    local_res8 = (QVBoxLayout *)(CONCAT44(local_res8._4_4_,uVar17) | 2);
    QLabel::QLabel(pQVar7,uVar9,pQVar15,0);
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar11 = pQVar7;
    uVar17 = uVar17 | 2;
  }
  *(QLabel **)(param_1 + 0x38) = pQVar11;
  if ((uVar17 & 2) != 0) {
    uVar17 = uVar17 & 0xfffffffd;
    QString::~QString((QString *)&local_res18);
  }
  pQVar1 = *(QObject **)(param_1 + 0x38);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("fusionDotPitchLabel",0x13);
  QObject::setObjectName(pQVar1,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  this = (QPushButton *)thunk_FUN_140bd99d4(0x30);
  this_01 = (QPushButton *)pQVar14;
  local_res8 = (QVBoxLayout *)this;
  if (this != (QPushButton *)0x0) {
    QPushButton::QPushButton(this,pQVar15);
    *(undefined ***)this = QPushButton::vftable;
    *(undefined ***)(this + 0x10) = QPushButton::vftable;
    this_01 = this;
  }
  *(QPushButton **)(param_1 + 0x40) = this_01;
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("fusionDotPitchResetBtn",0x16);
  QObject::setObjectName((QObject *)this_01,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  this_00 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar10 = (QHBoxLayout *)pQVar14;
  local_res8 = (QVBoxLayout *)this_00;
  if (this_00 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(this_00);
    *(undefined ***)this_00 = QHBoxLayout::vftable;
    *(undefined ***)(this_00 + 0x10) = QHBoxLayout::vftable;
    pQVar10 = this_00;
  }
  QBoxLayout::setSpacing((QBoxLayout *)pQVar10,10);
  QBoxLayout::addWidget((QBoxLayout *)pQVar10,*(undefined8 *)(param_1 + 0x38),0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar10,*(undefined8 *)(param_1 + 0x40),0,0);
  QBoxLayout::addStretch((QBoxLayout *)pQVar10,0);
  local_res8 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x88);
  pQVar11 = pQVar14;
  if (local_res8 != (QVBoxLayout *)0x0) {
    pQVar11 = (QLabel *)
              thunk_FUN_14039c090(local_res8,pQVar15,DAT_141072f50,DAT_141059158,DAT_141058db8,0);
  }
  *(QLabel **)(param_1 + 0x48) = pQVar11;
  thunk_FUN_14039d840(pQVar11,0xb4);
  thunk_FUN_14039d930(*(undefined8 *)(param_1 + 0x48),0x3c);
  QWidget::setFixedHeight(*(QWidget **)(param_1 + 0x48),0x18);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0x48),0x5c,true);
  lVar12 = thunk_FUN_140bd99d4(0x30);
  pQVar11 = pQVar14;
  local_res20 = (QLabel *)lVar12;
  if (lVar12 != 0) {
    uVar9 = QObject::tr((char *)&local_res18,&DAT_141059efc,0);
    local_res8 = (QVBoxLayout *)(CONCAT44(local_res8._4_4_,uVar17) | 4);
    pQVar11 = (QLabel *)thunk_FUN_1406c6430(lVar12,uVar9,pQVar15);
    uVar17 = uVar17 | 4;
  }
  *(QLabel **)(param_1 + 0x50) = pQVar11;
  if ((uVar17 & 4) != 0) {
    uVar17 = uVar17 & 0xfffffffb;
    QString::~QString((QString *)&local_res18);
  }
  QWidget::setFixedHeight(*(QWidget **)(param_1 + 0x50),0x26);
  pQVar4 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar16 = (QVBoxLayout *)pQVar14;
  local_res8 = pQVar4;
  if (pQVar4 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar4,pQVar15);
    *(undefined ***)pQVar4 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar4 + 0x10) = QVBoxLayout::vftable;
    pQVar16 = pQVar4;
  }
  QLayout::setContentsMargins((QLayout *)pQVar16,0x10,0x10,0x10,0x10);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar16,0x14);
  QBoxLayout::addLayout((QBoxLayout *)pQVar16,(QLayout *)pQVar10,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar16,*(undefined8 *)(param_1 + 0x48));
  QBoxLayout::addWidget((QBoxLayout *)pQVar16,*(undefined8 *)(param_1 + 0x50));
  pQVar13 = (QFrame *)thunk_FUN_140bd99d4(0x30);
  this_03 = (QFrame *)pQVar14;
  local_res8 = (QVBoxLayout *)pQVar13;
  if (pQVar13 != (QFrame *)0x0) {
    QFrame::QFrame(pQVar13,param_1);
    *(undefined ***)pQVar13 = QFrame::vftable;
    *(undefined ***)(pQVar13 + 0x10) = QFrame::vftable;
    this_03 = pQVar13;
  }
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("editPageSplitLine",0x11);
  QObject::setObjectName((QObject *)this_03,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QFrame::setFrameShape(this_03,4);
  QWidget::setFixedHeight((QWidget *)this_03,1);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar11 = pQVar14;
  local_res20 = pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    uVar9 = QObject::tr((char *)&local_res18,&DAT_14107c4e0,0);
    local_res8 = (QVBoxLayout *)(CONCAT44(local_res8._4_4_,uVar17) | 8);
    QLabel::QLabel(pQVar7,uVar9);
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar11 = pQVar7;
    uVar17 = 8;
  }
  *(QLabel **)(param_1 + 0x58) = pQVar11;
  if ((uVar17 & 8) != 0) {
    QString::~QString((QString *)&local_res18);
  }
  pQVar1 = *(QObject **)(param_1 + 0x58);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("editPageInstructionLabel",0x18);
  QObject::setObjectName(pQVar1,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QBoxLayout::addLayout(*(QBoxLayout **)(param_1 + 0x70),(QLayout *)this_02,0);
  QBoxLayout::addSpacing(*(QBoxLayout **)(param_1 + 0x70),0xc);
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 0x70),pQVar15);
  QBoxLayout::addSpacing(*(QBoxLayout **)(param_1 + 0x70),0x18);
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 0x70),this_03);
  QBoxLayout::addSpacing(*(QBoxLayout **)(param_1 + 0x70),0x14);
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x58));
  QBoxLayout::addSpacing(*(QBoxLayout **)(param_1 + 0x70),0xc);
  pQVar4 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar16 = (QVBoxLayout *)pQVar14;
  local_res8 = pQVar4;
  if (pQVar4 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar4);
    *(undefined ***)pQVar4 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar4 + 0x10) = QVBoxLayout::vftable;
    pQVar16 = pQVar4;
  }
  *(QVBoxLayout **)(param_1 + 0x78) = pQVar16;
  QLayout::setContentsMargins((QLayout *)pQVar16,0,0,0,0);
  QBoxLayout::addLayout(*(QBoxLayout **)(param_1 + 0x70),*(QLayout **)(param_1 + 0x78),0);
  local_res8 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x30);
  if (local_res8 != (QVBoxLayout *)0x0) {
    pQVar14 = (QLabel *)thunk_FUN_140695fd0(local_res8,param_1);
  }
  *(QLabel **)(param_1 + 0x60) = pQVar14;
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 0x78),pQVar14,0,0);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("meshsharpenpage",0xf);
  thunk_FUN_1406487e0(local_res10,&local_res8);
  QString::~QString((QString *)&local_res8);
  plVar2 = *(longlong **)(param_1 + 0x60);
  pcVar3 = *(code **)(*plVar2 + 0x1b0);
  QUrl::fromUserInput((QString *)&local_res18);
  (*pcVar3)(plVar2);
  QUrl::~QUrl((QUrl *)&local_res18);
  QBoxLayout::addStretch(*(QBoxLayout **)(param_1 + 0x70),0);
  QString::~QString(local_res10);
  return;
}


