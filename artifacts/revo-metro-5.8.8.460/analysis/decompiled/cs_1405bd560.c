// 1405bd560  FUN_1405bd560  size=0x1eb3  calls ~QUrl (site 1405bf3b7)

void FUN_1405bd560(QObject *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  QWidget *pQVar3;
  QVBoxLayout *pQVar4;
  QHBoxLayout *pQVar5;
  QVBoxLayout *pQVar6;
  QStackedWidget *this;
  QObject *pQVar7;
  QLabel *pQVar8;
  QString *pQVar9;
  QVBoxLayout *pQVar10;
  QAction *this_00;
  QHBoxLayout *pQVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  QAction *pQVar15;
  QPushButton *pQVar16;
  QWidget *pQVar17;
  QVBoxLayout *this_01;
  QAction *pQVar18;
  QStackedWidget *this_02;
  QPushButton *pQVar19;
  QLabel *pQVar20;
  uint uVar21;
  bool bVar22;
  undefined8 local_res8;
  QVBoxLayout *local_res10;
  QVBoxLayout *local_res18;
  QHBoxLayout *local_res20;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar24;
  undefined8 uVar23;
  QString local_68 [8];
  longlong local_60;
  QString local_58 [8];
  QLabel *local_50 [2];
  
  uVar24 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  pQVar18 = (QAction *)0x0;
  local_res8 = (QVBoxLayout *)((ulonglong)local_res8 & 0xffffffff00000000);
  pQVar3 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar17 = (QWidget *)pQVar18;
  local_res8 = (QVBoxLayout *)pQVar3;
  if (pQVar3 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar3,*(undefined8 *)(param_1 + 0x38));
    *(undefined ***)pQVar3 = QWidget::vftable;
    *(undefined ***)(pQVar3 + 0x10) = QWidget::vftable;
    pQVar17 = pQVar3;
  }
  *(QWidget **)(param_1 + 0x40) = pQVar17;
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("scanContentWidget",0x11);
  QObject::setObjectName((QObject *)pQVar17,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QWidget::setFixedWidth(*(QWidget **)(param_1 + 0x40),0x140);
  pQVar4 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  if (pQVar4 == (QVBoxLayout *)0x0) {
    local_res10 = (QVBoxLayout *)0x0;
    pQVar6 = (QVBoxLayout *)pQVar18;
    local_res8 = pQVar4;
  }
  else {
    local_res8 = pQVar4;
    local_res10 = pQVar4;
    QVBoxLayout::QVBoxLayout(pQVar4,*(QWidget **)(param_1 + 0x40));
    *(undefined ***)pQVar4 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar4 + 0x10) = QVBoxLayout::vftable;
    pQVar6 = pQVar4;
  }
  QLayout::setContentsMargins((QLayout *)pQVar6,0,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar6,0);
  QWidget::setLayout(*(QWidget **)(param_1 + 0x40),(QLayout *)pQVar6);
  QBoxLayout::addSpacing((QBoxLayout *)pQVar6,0x18);
  thunk_FUN_1405b84b0(param_1);
  QBoxLayout::addWidget((QBoxLayout *)pQVar6,*(undefined8 *)(param_1 + 0x48),0,0);
  QBoxLayout::addSpacing((QBoxLayout *)pQVar6,0x18);
  pQVar5 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar11 = (QHBoxLayout *)pQVar18;
  local_res8 = (QVBoxLayout *)pQVar5;
  if (pQVar5 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar5);
    *(undefined ***)pQVar5 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QHBoxLayout::vftable;
    pQVar11 = pQVar5;
  }
  QLayout::setContentsMargins((QLayout *)pQVar11,0x10,0,0x10,0x10);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar11,0xd);
  pQVar6 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar4 = (QVBoxLayout *)pQVar18;
  local_res8 = pQVar6;
  if (pQVar6 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar6);
    *(undefined ***)pQVar6 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar6 + 0x10) = QVBoxLayout::vftable;
    pQVar4 = pQVar6;
  }
  QLayout::setContentsMargins((QLayout *)pQVar4,0,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar4,8);
  this = (QStackedWidget *)thunk_FUN_140bd99d4(0x30);
  this_02 = (QStackedWidget *)pQVar18;
  local_res8 = (QVBoxLayout *)this;
  if (this != (QStackedWidget *)0x0) {
    QStackedWidget::QStackedWidget(this,(QWidget *)0x0);
    *(undefined ***)this = QStackedWidget::vftable;
    *(undefined ***)(this + 0x10) = QStackedWidget::vftable;
    this_02 = this;
  }
  *(QStackedWidget **)(param_1 + 0xe0) = this_02;
  QWidget::setContentsMargins((QWidget *)this_02,0,0,0,0);
  pQVar17 = *(QWidget **)(param_1 + 0xe0);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("background-color: transparent;",0x1e);
  QWidget::setStyleSheet(pQVar17,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  local_res8 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x38);
  pQVar7 = (QObject *)pQVar18;
  if (local_res8 != (QVBoxLayout *)0x0) {
    pQVar7 = (QObject *)thunk_FUN_14039ac20(local_res8,*(undefined8 *)(param_1 + 0x40));
  }
  *(QObject **)(param_1 + 0xd0) = pQVar7;
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("scanCancelBtn",0xd);
  QObject::setObjectName(pQVar7,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QWidget::setFixedSize(*(QWidget **)(param_1 + 0xd0),0x58,0x28);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0xd0),0x5c,true);
  local_res8 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x38);
  pQVar7 = (QObject *)pQVar18;
  if (local_res8 != (QVBoxLayout *)0x0) {
    pQVar7 = (QObject *)thunk_FUN_14039ac20(local_res8,*(undefined8 *)(param_1 + 0x40));
  }
  *(QObject **)(param_1 + 0xa0) = pQVar7;
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("scanpPreviewBtn",0xf);
  QObject::setObjectName(pQVar7,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QWidget::setFixedSize(*(QWidget **)(param_1 + 0xa0),0x58,0x28);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0xa0),0x5c,true);
  pQVar8 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar20 = (QLabel *)pQVar18;
  local_res8 = (QVBoxLayout *)pQVar8;
  if (pQVar8 != (QLabel *)0x0) {
    QLabel::QLabel(pQVar8,*(undefined8 *)(param_1 + 0x40));
    *(undefined ***)pQVar8 = QLabel::vftable;
    *(undefined ***)(pQVar8 + 0x10) = QLabel::vftable;
    pQVar20 = pQVar8;
  }
  *(QLabel **)(param_1 + 0xa8) = pQVar20;
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("scanpPreviewTip",0xf);
  QObject::setObjectName((QObject *)pQVar20,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QLabel::setAlignment(*(QLabel **)(param_1 + 0xa8),0x84);
  pQVar20 = *(QLabel **)(param_1 + 0xa8);
  pQVar9 = (QString *)QObject::tr((char *)&local_res8,&DAT_1410828d0,0);
  QLabel::setText(pQVar20,pQVar9);
  QString::~QString((QString *)&local_res8);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0xa8),0x5c,true);
  QStackedWidget::addWidget(*(QStackedWidget **)(param_1 + 0xe0),*(QWidget **)(param_1 + 0xa0));
  QStackedWidget::addWidget(*(QStackedWidget **)(param_1 + 0xe0),*(QWidget **)(param_1 + 0xd0));
  QBoxLayout::addWidget((QBoxLayout *)pQVar4,*(undefined8 *)(param_1 + 0xe0));
  QBoxLayout::addWidget((QBoxLayout *)pQVar4);
  pQVar10 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar6 = (QVBoxLayout *)pQVar18;
  local_res8 = pQVar10;
  if (pQVar10 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar10);
    *(undefined ***)pQVar10 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar10 + 0x10) = QVBoxLayout::vftable;
    pQVar6 = pQVar10;
  }
  QLayout::setContentsMargins((QLayout *)pQVar6,0,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar6,8);
  QWidget::setSizePolicy(*(QWidget **)(param_1 + 0x40),7,7);
  pQVar8 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar20 = (QLabel *)pQVar18;
  local_res8 = (QVBoxLayout *)pQVar8;
  if (pQVar8 != (QLabel *)0x0) {
    QLabel::QLabel(pQVar8,*(undefined8 *)(param_1 + 0x40));
    *(undefined ***)pQVar8 = QLabel::vftable;
    *(undefined ***)(pQVar8 + 0x10) = QLabel::vftable;
    pQVar20 = pQVar8;
  }
  *(QLabel **)(param_1 + 0xd8) = pQVar20;
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("scanpStartTip",0xd);
  QObject::setObjectName((QObject *)pQVar20,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QLabel::setAlignment(*(QLabel **)(param_1 + 0xd8),0x84);
  pQVar20 = *(QLabel **)(param_1 + 0xd8);
  pQVar9 = (QString *)QObject::tr((char *)&local_res8,&DAT_14108cbd0,0);
  QLabel::setText(pQVar20,pQVar9);
  QString::~QString((QString *)&local_res8);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0xd8),0x5c,true);
  QWidget::hide(*(QWidget **)(param_1 + 0xd8));
  pQVar8 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar20 = (QLabel *)pQVar18;
  local_res8 = (QVBoxLayout *)pQVar8;
  if (pQVar8 != (QLabel *)0x0) {
    QLabel::QLabel(pQVar8,*(undefined8 *)(param_1 + 0x40));
    *(undefined ***)pQVar8 = QLabel::vftable;
    *(undefined ***)(pQVar8 + 0x10) = QLabel::vftable;
    pQVar20 = pQVar8;
  }
  *(QLabel **)(param_1 + 0xb0) = pQVar20;
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("scanpStartTip",0xd);
  QObject::setObjectName((QObject *)pQVar20,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QLabel::setAlignment(*(QLabel **)(param_1 + 0xb0),0x84);
  pQVar20 = *(QLabel **)(param_1 + 0xb0);
  pQVar9 = (QString *)QObject::tr((char *)&local_res8,&DAT_14108cbd8,0);
  QLabel::setText(pQVar20,pQVar9);
  QString::~QString((QString *)&local_res8);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0xb0),0x5c,true);
  thunk_FUN_1405bca10(param_1);
  QBoxLayout::addWidget((QBoxLayout *)pQVar6,*(undefined8 *)(param_1 + 0xf0));
  QBoxLayout::addWidget((QBoxLayout *)pQVar6,*(undefined8 *)(param_1 + 0xe8));
  QBoxLayout::addWidget((QBoxLayout *)pQVar6,*(undefined8 *)(param_1 + 0xb0));
  QBoxLayout::addWidget((QBoxLayout *)pQVar6);
  pQVar10 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  local_res8 = pQVar10;
  if (pQVar10 == (QVBoxLayout *)0x0) {
    local_res18 = (QVBoxLayout *)0x0;
    pQVar10 = (QVBoxLayout *)pQVar18;
  }
  else {
    local_res18 = pQVar10;
    QVBoxLayout::QVBoxLayout(pQVar10);
    *(undefined ***)pQVar10 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar10 + 0x10) = QVBoxLayout::vftable;
  }
  QLayout::setContentsMargins((QLayout *)pQVar10,0,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar10,8);
  local_res8 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x38);
  pQVar7 = (QObject *)pQVar18;
  if (local_res8 != (QVBoxLayout *)0x0) {
    pQVar7 = (QObject *)thunk_FUN_14039ac20(local_res8,*(undefined8 *)(param_1 + 0x40));
  }
  *(QObject **)(param_1 + 0xb8) = pQVar7;
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("scanpEndBtn",0xb);
  QObject::setObjectName(pQVar7,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QWidget::setFixedSize(*(QWidget **)(param_1 + 0xb8),0x58,0x28);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0xb8),0x5c,true);
  thunk_FUN_14039ace0(*(undefined8 *)(param_1 + 0xb8),1);
  QWidget::setEnabled(*(QWidget **)(param_1 + 0xb8),true);
  this_00 = (QAction *)thunk_FUN_140bd99d4(0x10);
  pQVar15 = pQVar18;
  local_res8 = (QVBoxLayout *)this_00;
  if (this_00 != (QAction *)0x0) {
    QAction::QAction(this_00,param_1);
    *(undefined ***)this_00 = QAction::vftable;
    pQVar15 = this_00;
  }
  *(QAction **)(param_1 + 0xc0) = pQVar15;
  pQVar8 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar20 = (QLabel *)pQVar18;
  local_res8 = (QVBoxLayout *)pQVar8;
  if (pQVar8 != (QLabel *)0x0) {
    QLabel::QLabel(pQVar8,*(undefined8 *)(param_1 + 0x40));
    *(undefined ***)pQVar8 = QLabel::vftable;
    *(undefined ***)(pQVar8 + 0x10) = QLabel::vftable;
    pQVar20 = pQVar8;
  }
  *(QLabel **)(param_1 + 200) = pQVar20;
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("scanpEndTip",0xb);
  QObject::setObjectName((QObject *)pQVar20,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QLabel::setAlignment(*(QLabel **)(param_1 + 200),0x84);
  pQVar20 = *(QLabel **)(param_1 + 200);
  pQVar9 = (QString *)QObject::tr((char *)&local_res8,&DAT_14108cc00,0);
  QLabel::setText(pQVar20,pQVar9);
  QString::~QString((QString *)&local_res8);
  QWidget::setAttribute(*(QWidget **)(param_1 + 200),0x5c,true);
  pQVar10 = local_res18;
  QBoxLayout::addWidget((QBoxLayout *)local_res18,*(undefined8 *)(param_1 + 0xb8));
  QBoxLayout::addWidget((QBoxLayout *)pQVar10,*(undefined8 *)(param_1 + 200));
  QBoxLayout::addLayout((QBoxLayout *)pQVar11,(QLayout *)pQVar4,0);
  QBoxLayout::addLayout((QBoxLayout *)pQVar11,(QLayout *)pQVar6,0);
  QBoxLayout::addLayout((QBoxLayout *)pQVar11,(QLayout *)pQVar10,0);
  pQVar4 = local_res10;
  QBoxLayout::addLayout((QBoxLayout *)local_res10,(QLayout *)pQVar11,0);
  pQVar8 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar20 = (QLabel *)pQVar18;
  local_res8 = (QVBoxLayout *)pQVar8;
  if (pQVar8 != (QLabel *)0x0) {
    QLabel::QLabel(pQVar8,0);
    *(undefined ***)pQVar8 = QLabel::vftable;
    *(undefined ***)(pQVar8 + 0x10) = QLabel::vftable;
    pQVar20 = pQVar8;
  }
  *(QLabel **)(param_1 + 0x158) = pQVar20;
  QWidget::setFixedHeight((QWidget *)pQVar20,1);
  pQVar7 = *(QObject **)(param_1 + 0x158);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("scanSplit",9);
  QObject::setObjectName(pQVar7,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QBoxLayout::addWidget((QBoxLayout *)pQVar4,*(undefined8 *)(param_1 + 0x158));
  pQVar3 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar17 = (QWidget *)pQVar18;
  local_res8 = (QVBoxLayout *)pQVar3;
  if (pQVar3 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar3,0);
    *(undefined ***)pQVar3 = QWidget::vftable;
    *(undefined ***)(pQVar3 + 0x10) = QWidget::vftable;
    pQVar17 = pQVar3;
  }
  *(QWidget **)(param_1 + 0x128) = pQVar17;
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("scanParamWidget",0xf);
  QObject::setObjectName((QObject *)pQVar17,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QWidget::setFixedWidth(*(QWidget **)(param_1 + 0x128),0x140);
  pQVar6 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar4 = (QVBoxLayout *)pQVar18;
  local_res8 = pQVar6;
  if (pQVar6 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar6);
    *(undefined ***)pQVar6 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar6 + 0x10) = QVBoxLayout::vftable;
    pQVar4 = pQVar6;
  }
  QLayout::setContentsMargins((QLayout *)pQVar4,0,0,0,0);
  QWidget::setLayout(*(QWidget **)(param_1 + 0x128),(QLayout *)pQVar4);
  pQVar3 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar17 = (QWidget *)pQVar18;
  local_res8 = (QVBoxLayout *)pQVar3;
  if (pQVar3 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar3,*(undefined8 *)(param_1 + 0x40),0);
    *(undefined ***)pQVar3 = QWidget::vftable;
    *(undefined ***)(pQVar3 + 0x10) = QWidget::vftable;
    pQVar17 = pQVar3;
  }
  *(QWidget **)(param_1 + 0x160) = pQVar17;
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("hideSurfaceProcessHolder",0x18);
  QObject::setObjectName((QObject *)pQVar17,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar10 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar6 = (QVBoxLayout *)pQVar18;
  local_res8 = pQVar10;
  if (pQVar10 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar10);
    *(undefined ***)pQVar10 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar10 + 0x10) = QVBoxLayout::vftable;
    pQVar6 = pQVar10;
  }
  QLayout::setContentsMargins((QLayout *)pQVar6,0x10,0x10,0x10,0x10);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar6,10);
  QWidget::setLayout(*(QWidget **)(param_1 + 0x160),(QLayout *)pQVar6);
  (**(code **)(**(longlong **)(param_1 + 0x160) + 0x58))(*(longlong **)(param_1 + 0x160),0);
  pQVar11 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  local_res8 = (QVBoxLayout *)pQVar11;
  if (pQVar11 == (QHBoxLayout *)0x0) {
    local_res20 = (QHBoxLayout *)0x0;
  }
  else {
    local_res20 = pQVar11;
    QHBoxLayout::QHBoxLayout(pQVar11);
    *(undefined ***)pQVar11 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar11 + 0x10) = QHBoxLayout::vftable;
  }
  pQVar8 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  bVar22 = pQVar8 != (QLabel *)0x0;
  pQVar20 = (QLabel *)pQVar18;
  local_50[0] = pQVar8;
  if (bVar22) {
    uVar12 = QObject::tr((char *)&local_res18,&DAT_14108c4e0,0);
    local_res8 = (QVBoxLayout *)CONCAT44(local_res8._4_4_,1);
    QLabel::QLabel(pQVar8,uVar12);
    *(undefined ***)pQVar8 = QLabel::vftable;
    *(undefined ***)(pQVar8 + 0x10) = QLabel::vftable;
    pQVar20 = pQVar8;
  }
  uVar21 = (uint)bVar22;
  *(QLabel **)(param_1 + 0x168) = pQVar20;
  if (bVar22) {
    uVar21 = 0;
    QString::~QString((QString *)&local_res18);
  }
  pQVar7 = *(QObject **)(param_1 + 0x168);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("scanDeleteLabel",0xf);
  QObject::setObjectName(pQVar7,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  local_60 = thunk_FUN_140bd99d4(0x68);
  pQVar15 = pQVar18;
  if (local_60 != 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x160);
    local_res18 = (QVBoxLayout *)QString::fromAscii_helper("",0);
    local_res8 = (QVBoxLayout *)(CONCAT44(local_res8._4_4_,uVar21) | 2);
    uVar13 = QObject::tr((char *)local_50,&DAT_14108c410,0);
    local_res8 = (QVBoxLayout *)(CONCAT44(local_res8._4_4_,uVar21) | 6);
    uVar14 = QObject::tr((char *)local_58,&DAT_14108c4e0,0);
    local_res8 = (QVBoxLayout *)(CONCAT44(local_res8._4_4_,uVar21) | 0xe);
    uVar23 = CONCAT44(uVar24,0x15e);
    pQVar15 = (QAction *)
              thunk_FUN_1406d0ed0(local_60,uVar14,uVar13,&local_res18,uVar12,uVar23,1,0,0,1);
    uVar24 = (undefined4)((ulonglong)uVar23 >> 0x20);
    uVar21 = uVar21 | 0xe;
  }
  *(QAction **)(param_1 + 0x170) = pQVar15;
  if ((uVar21 & 8) != 0) {
    uVar21 = uVar21 & 0xfffffff7;
    QString::~QString(local_58);
  }
  if ((uVar21 & 4) != 0) {
    uVar21 = uVar21 & 0xfffffffb;
    QString::~QString((QString *)local_50);
  }
  if ((uVar21 & 2) != 0) {
    uVar21 = uVar21 & 0xfffffffd;
    QString::~QString((QString *)&local_res18);
  }
  QWidget::setFixedSize(*(QWidget **)(param_1 + 0x170),0xe,0xe);
  pQVar7 = *(QObject **)(param_1 + 0x170);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("pointDistanceHelpButton",0x17);
  QObject::setObjectName(pQVar7,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar11 = local_res20;
  QBoxLayout::addWidget((QBoxLayout *)local_res20,*(undefined8 *)(param_1 + 0x168),0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar11,*(undefined8 *)(param_1 + 0x170),0);
  QBoxLayout::addStretch((QBoxLayout *)pQVar11,0);
  local_res8 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x88);
  pQVar15 = pQVar18;
  if (local_res8 != (QVBoxLayout *)0x0) {
    uVar24 = 0;
    pQVar15 = (QAction *)
              thunk_FUN_14039c090(local_res8,*(undefined8 *)(param_1 + 0x160),DAT_141072f50,
                                  DAT_141059158,DAT_141058db8,0);
  }
  *(QAction **)(param_1 + 0x178) = pQVar15;
  thunk_FUN_14039db50(pQVar15,0);
  pQVar7 = *(QObject **)(param_1 + 0x178);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("hideSufaceFactorProcess",0x17);
  QObject::setObjectName(pQVar7,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  thunk_FUN_14039d840(*(undefined8 *)(param_1 + 0x178),200);
  thunk_FUN_14039d930(*(undefined8 *)(param_1 + 0x178),0x50);
  QWidget::setFixedHeight(*(QWidget **)(param_1 + 0x178),0x18);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0x178),0x5c,true);
  thunk_FUN_14039d740(*(undefined8 *)(param_1 + 0x178),DAT_141065820);
  thunk_FUN_14039d7c0(*(undefined8 *)(param_1 + 0x178),DAT_14108efc0);
  thunk_FUN_14039d880(*(undefined8 *)(param_1 + 0x178),DAT_141065120);
  thunk_FUN_14039d6d0(*(undefined8 *)(param_1 + 0x178),2);
  uVar12 = *(undefined8 *)(param_1 + 0x178);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("mm",2);
  thunk_FUN_14039d980(uVar12,&local_res8);
  thunk_FUN_14039d9e0(*(undefined8 *)(param_1 + 0x178),DAT_141065160);
  QBoxLayout::addLayout((QBoxLayout *)pQVar6,(QLayout *)pQVar11,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar6,*(undefined8 *)(param_1 + 0x178),0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar4,*(undefined8 *)(param_1 + 0x160),0);
  thunk_FUN_1405ba4e0(param_1);
  QBoxLayout::addWidget((QBoxLayout *)pQVar4,*(undefined8 *)(param_1 + 0x130),0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar4,*(undefined8 *)(param_1 + 0x148),0);
  thunk_FUN_1405bcf10(param_1);
  QBoxLayout::addSpacing((QBoxLayout *)pQVar4,4);
  QBoxLayout::addWidget((QBoxLayout *)pQVar4,*(undefined8 *)(param_1 + 0x150),0);
  pQVar8 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar20 = (QLabel *)pQVar18;
  local_res8 = (QVBoxLayout *)pQVar8;
  if (pQVar8 != (QLabel *)0x0) {
    QLabel::QLabel(pQVar8,*(undefined8 *)(param_1 + 0x40),0);
    *(undefined ***)pQVar8 = QLabel::vftable;
    *(undefined ***)(pQVar8 + 0x10) = QLabel::vftable;
    pQVar20 = pQVar8;
  }
  QWidget::setFixedHeight((QWidget *)pQVar20,1);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("scanSetSplit",0xc);
  QObject::setObjectName((QObject *)pQVar20,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar10 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar6 = (QVBoxLayout *)pQVar18;
  local_res8 = pQVar10;
  if (pQVar10 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar10);
    *(undefined ***)pQVar10 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar10 + 0x10) = QVBoxLayout::vftable;
    pQVar6 = pQVar10;
  }
  QLayout::setContentsMargins((QLayout *)pQVar6,0,0x14,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar6,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar6,pQVar20,0,0);
  QBoxLayout::addLayout((QBoxLayout *)pQVar4,(QLayout *)pQVar6,0);
  pQVar8 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar20 = (QLabel *)pQVar18;
  local_res20 = (QHBoxLayout *)pQVar8;
  if (pQVar8 != (QLabel *)0x0) {
    uVar12 = QObject::tr((char *)&local_res18,&DAT_14108cca8,0);
    local_res8 = (QVBoxLayout *)(CONCAT44(local_res8._4_4_,uVar21) | 0x10);
    QLabel::QLabel(pQVar8,uVar12,0,0);
    *(undefined ***)pQVar8 = QLabel::vftable;
    *(undefined ***)(pQVar8 + 0x10) = QLabel::vftable;
    pQVar20 = pQVar8;
    uVar21 = uVar21 | 0x10;
  }
  *(QLabel **)(param_1 + 0x230) = pQVar20;
  if ((uVar21 & 0x10) != 0) {
    uVar21 = uVar21 & 0xffffffef;
    QString::~QString((QString *)&local_res18);
  }
  pQVar7 = *(QObject **)(param_1 + 0x230);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("scanCubeFilterLabel",0x13);
  QObject::setObjectName(pQVar7,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar16 = (QPushButton *)thunk_FUN_140bd99d4(0x30);
  pQVar19 = (QPushButton *)pQVar18;
  local_res8 = (QVBoxLayout *)pQVar16;
  if (pQVar16 != (QPushButton *)0x0) {
    QPushButton::QPushButton(pQVar16,*(QWidget **)(param_1 + 0x40));
    *(undefined ***)pQVar16 = QPushButton::vftable;
    *(undefined ***)(pQVar16 + 0x10) = QPushButton::vftable;
    pQVar19 = pQVar16;
  }
  *(QPushButton **)(param_1 + 0x238) = pQVar19;
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("scanCubeFilterResetBtn",0x16);
  QObject::setObjectName((QObject *)pQVar19,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar16 = (QPushButton *)thunk_FUN_140bd99d4(0x30);
  pQVar19 = (QPushButton *)pQVar18;
  local_res8 = (QVBoxLayout *)pQVar16;
  if (pQVar16 != (QPushButton *)0x0) {
    QPushButton::QPushButton(pQVar16,(QWidget *)0x0);
    *(undefined ***)pQVar16 = QPushButton::vftable;
    *(undefined ***)(pQVar16 + 0x10) = QPushButton::vftable;
    pQVar19 = pQVar16;
  }
  *(QPushButton **)(param_1 + 0x240) = pQVar19;
  pQVar9 = (QString *)QObject::tr((char *)&local_res8,&DAT_14108ccf8,0);
  QWidget::setToolTip((QWidget *)pQVar19,pQVar9);
  QString::~QString((QString *)&local_res8);
  QWidget::setFixedSize(*(QWidget **)(param_1 + 0x240),0xe,0xe);
  pQVar7 = *(QObject **)(param_1 + 0x240);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("scanCubeFilterHelpButton",0x18);
  QObject::setObjectName(pQVar7,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  local_res8 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x38);
  pQVar17 = (QWidget *)pQVar18;
  if (local_res8 != (QVBoxLayout *)0x0) {
    pQVar17 = (QWidget *)thunk_FUN_14039ac20(local_res8,*(undefined8 *)(param_1 + 0x40));
  }
  *(QWidget **)(param_1 + 0x248) = pQVar17;
  QWidget::setFixedSize(pQVar17,0x1c,0x10);
  pQVar7 = *(QObject **)(param_1 + 0x248);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("scanCubeFilterButton",0x14);
  QObject::setObjectName(pQVar7,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar5 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar11 = (QHBoxLayout *)pQVar18;
  local_res8 = (QVBoxLayout *)pQVar5;
  if (pQVar5 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar5);
    *(undefined ***)pQVar5 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QHBoxLayout::vftable;
    pQVar11 = pQVar5;
  }
  QLayout::setContentsMargins((QLayout *)pQVar11,0x10,0x14,0x10,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar11,10);
  QBoxLayout::addWidget((QBoxLayout *)pQVar11,*(undefined8 *)(param_1 + 0x230));
  QBoxLayout::addWidget((QBoxLayout *)pQVar11,*(undefined8 *)(param_1 + 0x238));
  QBoxLayout::addWidget((QBoxLayout *)pQVar11);
  QBoxLayout::addStretch((QBoxLayout *)pQVar11,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar11);
  QLayout::setContentsMargins((QLayout *)pQVar11,0,0,0,0);
  QWidget::hide(*(QWidget **)(param_1 + 0x230));
  QWidget::hide(*(QWidget **)(param_1 + 0x238));
  QWidget::hide(*(QWidget **)(param_1 + 0x240));
  QWidget::hide(*(QWidget **)(param_1 + 0x248));
  thunk_FUN_1405b9ae0(param_1);
  QBoxLayout::addWidget((QBoxLayout *)pQVar4,*(undefined8 *)(param_1 + 0x250));
  pQVar3 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar17 = (QWidget *)pQVar18;
  local_res8 = (QVBoxLayout *)pQVar3;
  if (pQVar3 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar3,*(undefined8 *)(param_1 + 0x40));
    *(undefined ***)pQVar3 = QWidget::vftable;
    *(undefined ***)(pQVar3 + 0x10) = QWidget::vftable;
    pQVar17 = pQVar3;
  }
  *(QWidget **)(param_1 + 0x280) = pQVar17;
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("hideSurfaceWidget",0x11);
  QObject::setObjectName((QObject *)pQVar17,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar10 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar6 = (QVBoxLayout *)pQVar18;
  local_res8 = pQVar10;
  if (pQVar10 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar10,*(QWidget **)(param_1 + 0x280));
    *(undefined ***)pQVar10 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar10 + 0x10) = QVBoxLayout::vftable;
    pQVar6 = pQVar10;
  }
  QLayout::setContentsMargins((QLayout *)pQVar6,0,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar6,0);
  thunk_FUN_1405b9260(param_1);
  QBoxLayout::addWidget((QBoxLayout *)pQVar6,*(undefined8 *)(param_1 + 0x288),0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar6,*(undefined8 *)(param_1 + 0x2b0),0,0);
  pQVar8 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar20 = (QLabel *)pQVar18;
  local_res8 = (QVBoxLayout *)pQVar8;
  if (pQVar8 != (QLabel *)0x0) {
    QLabel::QLabel(pQVar8,*(undefined8 *)(param_1 + 0x280));
    *(undefined ***)pQVar8 = QLabel::vftable;
    *(undefined ***)(pQVar8 + 0x10) = QLabel::vftable;
    pQVar20 = pQVar8;
  }
  QWidget::setFixedHeight((QWidget *)pQVar20,1);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("scanSetSplit",0xc);
  QObject::setObjectName((QObject *)pQVar20,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  this_01 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar10 = (QVBoxLayout *)pQVar18;
  local_res8 = this_01;
  if (this_01 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(this_01);
    *(undefined ***)this_01 = QVBoxLayout::vftable;
    *(undefined ***)(this_01 + 0x10) = QVBoxLayout::vftable;
    pQVar10 = this_01;
  }
  QBoxLayout::setSpacing((QBoxLayout *)pQVar10,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar10,pQVar20);
  QBoxLayout::addLayout((QBoxLayout *)pQVar6,(QLayout *)pQVar10,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar4,*(undefined8 *)(param_1 + 0x280));
  pQVar8 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar20 = (QLabel *)pQVar18;
  local_res20 = (QHBoxLayout *)pQVar8;
  if (pQVar8 != (QLabel *)0x0) {
    uVar12 = QObject::tr((char *)&local_res18,&DAT_14108ca38,0);
    local_res8 = (QVBoxLayout *)(CONCAT44(local_res8._4_4_,uVar21) | 0x20);
    QLabel::QLabel(pQVar8,uVar12);
    *(undefined ***)pQVar8 = QLabel::vftable;
    *(undefined ***)(pQVar8 + 0x10) = QLabel::vftable;
    pQVar20 = pQVar8;
    uVar21 = uVar21 | 0x20;
  }
  *(QLabel **)(param_1 + 0x2c0) = pQVar20;
  if ((uVar21 & 0x20) != 0) {
    uVar21 = uVar21 & 0xffffffdf;
    QString::~QString((QString *)&local_res18);
  }
  pQVar7 = *(QObject **)(param_1 + 0x2c0);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("scanAdjustLabel",0xf);
  QObject::setObjectName(pQVar7,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QLabel::setWordWrap(*(QLabel **)(param_1 + 0x2c0),true);
  pQVar10 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar6 = (QVBoxLayout *)pQVar18;
  local_res8 = pQVar10;
  if (pQVar10 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar10);
    *(undefined ***)pQVar10 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar10 + 0x10) = QVBoxLayout::vftable;
    pQVar6 = pQVar10;
  }
  QLayout::setContentsMargins((QLayout *)pQVar6,0,0,0,0);
  local_res18 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x68);
  pQVar15 = pQVar18;
  if (local_res18 != (QVBoxLayout *)0x0) {
    uVar12 = QObject::tr((char *)local_58,&DAT_141080678,0);
    local_res8 = (QVBoxLayout *)(CONCAT44(local_res8._4_4_,uVar21) | 0x40);
    uVar13 = QObject::tr((char *)local_50,&DAT_14108c9a0,0);
    local_res8 = (QVBoxLayout *)(CONCAT44(local_res8._4_4_,uVar21) | 0xc0);
    uVar14 = QObject::tr((char *)&local_res20,&DAT_14108ca38,0);
    local_res8 = (QVBoxLayout *)(CONCAT44(local_res8._4_4_,uVar21) | 0x1c0);
    pQVar15 = (QAction *)
              thunk_FUN_1406d0ed0(local_res18,uVar14,uVar13,uVar12,param_1,CONCAT44(uVar24,0x15e),1,
                                  0,0,1);
    uVar21 = uVar21 | 0x1c0;
  }
  *(QAction **)(param_1 + 0x2c8) = pQVar15;
  if (uVar21 >> 8 != 0) {
    uVar21 = uVar21 & 0xfffffeff;
    QString::~QString((QString *)&local_res20);
  }
  if ((char)uVar21 < '\0') {
    uVar21 = uVar21 & 0xffffff7f;
    QString::~QString((QString *)local_50);
  }
  if ((uVar21 & 0x40) != 0) {
    uVar21 = uVar21 & 0xffffffbf;
    QString::~QString(local_58);
  }
  QWidget::setFixedSize(*(QWidget **)(param_1 + 0x2c8),0xe,0xe);
  pQVar7 = *(QObject **)(param_1 + 0x2c8);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("adjustHelpButton",0x10);
  QObject::setObjectName(pQVar7,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QBoxLayout::addWidget((QBoxLayout *)pQVar6,*(undefined8 *)(param_1 + 0x2c8),0,0);
  pQVar5 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar11 = (QHBoxLayout *)pQVar18;
  local_res8 = (QVBoxLayout *)pQVar5;
  if (pQVar5 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar5);
    *(undefined ***)pQVar5 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QHBoxLayout::vftable;
    pQVar11 = pQVar5;
  }
  QLayout::setContentsMargins((QLayout *)pQVar11,0x10,0x14,0xf,0x14);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar11,10);
  QBoxLayout::addWidget((QBoxLayout *)pQVar11,*(undefined8 *)(param_1 + 0x2c0));
  QBoxLayout::addLayout((QBoxLayout *)pQVar11,(QLayout *)pQVar6,0);
  QBoxLayout::addStretch((QBoxLayout *)pQVar11,0);
  QBoxLayout::addLayout((QBoxLayout *)pQVar4,(QLayout *)pQVar11,0);
  local_res8 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x48);
  pQVar17 = (QWidget *)pQVar18;
  if (local_res8 != (QVBoxLayout *)0x0) {
    pQVar17 = (QWidget *)thunk_FUN_140374f80(local_res8,*(undefined8 *)(param_1 + 0x40));
  }
  *(QWidget **)(param_1 + 0x2d0) = pQVar17;
  QWidget::setFixedSize(pQVar17,0x136,0x41);
  thunk_FUN_140375ea0(*(undefined8 *)(param_1 + 0x2d0));
  pQVar5 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar11 = (QHBoxLayout *)pQVar18;
  local_res8 = (QVBoxLayout *)pQVar5;
  if (pQVar5 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar5);
    *(undefined ***)pQVar5 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QHBoxLayout::vftable;
    pQVar11 = pQVar5;
  }
  QLayout::setContentsMargins((QLayout *)pQVar11,0,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar11,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar11,*(undefined8 *)(param_1 + 0x2d0),0,0);
  QBoxLayout::addSpacing((QBoxLayout *)pQVar11,4);
  QBoxLayout::addLayout((QBoxLayout *)pQVar4,(QLayout *)pQVar11,0);
  QBoxLayout::addSpacing((QBoxLayout *)pQVar4,0x14);
  pQVar8 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar20 = (QLabel *)pQVar18;
  local_res8 = (QVBoxLayout *)pQVar8;
  if (pQVar8 != (QLabel *)0x0) {
    QLabel::QLabel(pQVar8,0);
    *(undefined ***)pQVar8 = QLabel::vftable;
    *(undefined ***)(pQVar8 + 0x10) = QLabel::vftable;
    pQVar20 = pQVar8;
  }
  QWidget::setFixedHeight((QWidget *)pQVar20,1);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("otherSplit",10);
  QObject::setObjectName((QObject *)pQVar20,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QBoxLayout::addWidget((QBoxLayout *)pQVar4,pQVar20,0,0);
  QBoxLayout::addSpacing((QBoxLayout *)pQVar4,0x14);
  pQVar8 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar20 = (QLabel *)pQVar18;
  local_res20 = (QHBoxLayout *)pQVar8;
  if (pQVar8 != (QLabel *)0x0) {
    uVar12 = QObject::tr((char *)&local_res18,&DAT_14107c4e0,0);
    local_res8 = (QVBoxLayout *)(CONCAT44(local_res8._4_4_,uVar21) | 0x200);
    QLabel::QLabel(pQVar8,uVar12,param_1,0);
    *(undefined ***)pQVar8 = QLabel::vftable;
    *(undefined ***)(pQVar8 + 0x10) = QLabel::vftable;
    pQVar20 = pQVar8;
    uVar21 = 0x200;
  }
  *(QLabel **)(param_1 + 0x2d8) = pQVar20;
  if (uVar21 >> 9 != 0) {
    QString::~QString((QString *)&local_res18);
  }
  pQVar7 = *(QObject **)(param_1 + 0x2d8);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("editPageInstructionLabel",0x18);
  QObject::setObjectName(pQVar7,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar10 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar6 = (QVBoxLayout *)pQVar18;
  local_res8 = pQVar10;
  if (pQVar10 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar10);
    *(undefined ***)pQVar10 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar10 + 0x10) = QVBoxLayout::vftable;
    pQVar6 = pQVar10;
  }
  QLayout::setContentsMargins((QLayout *)pQVar6,0x10,0,0x10,0x10);
  QBoxLayout::addWidget((QBoxLayout *)pQVar6,*(undefined8 *)(param_1 + 0x2d8),0,0);
  QBoxLayout::addLayout((QBoxLayout *)pQVar4,(QLayout *)pQVar6,0);
  pQVar10 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar6 = (QVBoxLayout *)pQVar18;
  local_res8 = pQVar10;
  if (pQVar10 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar10);
    *(undefined ***)pQVar10 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar10 + 0x10) = QVBoxLayout::vftable;
    pQVar6 = pQVar10;
  }
  *(QVBoxLayout **)(param_1 + 0x2e8) = pQVar6;
  QLayout::setContentsMargins((QLayout *)pQVar6,0x10,5,0x10,5);
  QBoxLayout::setSpacing(*(QBoxLayout **)(param_1 + 0x2e8),2);
  QBoxLayout::addLayout((QBoxLayout *)pQVar4,*(QLayout **)(param_1 + 0x2e8),0);
  local_res8 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x30);
  if (local_res8 != (QVBoxLayout *)0x0) {
    pQVar18 = (QAction *)thunk_FUN_140695fd0(local_res8,param_1);
  }
  *(QAction **)(param_1 + 0x2e0) = pQVar18;
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 0x2e8),pQVar18,0,0);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("scanpage",8);
  thunk_FUN_1406487e0(local_68,&local_res8);
  QString::~QString((QString *)&local_res8);
  plVar1 = *(longlong **)(param_1 + 0x2e0);
  pcVar2 = *(code **)(*plVar1 + 0x1b0);
  uVar12 = QUrl::fromUserInput((QString *)&local_res18);
  (*pcVar2)(plVar1,uVar12);
  QUrl::~QUrl((QUrl *)&local_res18);
  QBoxLayout::addWidget((QBoxLayout *)local_res10,*(undefined8 *)(param_1 + 0x128),0,0);
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40),0,0);
  QBoxLayout::addStretch(*(QBoxLayout **)(param_1 + 0x30),1);
  QString::~QString(local_68);
  return;
}


