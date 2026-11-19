// 1404778b0  FUN_1404778b0  size=0xa78  calls ~QUrl (site 1404782fa)

void FUN_1404778b0(QObject *param_1)

{
  QAbstractButton *pQVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  QWidget *pQVar5;
  QVBoxLayout *pQVar6;
  QLabel *pQVar7;
  QLabel *pQVar8;
  undefined8 uVar9;
  QHBoxLayout *pQVar10;
  QRadioButton *pQVar11;
  QString *pQVar12;
  QButtonGroup *this;
  QObject *pQVar13;
  QLabel *pQVar14;
  QFrame *pQVar15;
  QLabel *pQVar16;
  QHBoxLayout *pQVar17;
  QWidget *pQVar18;
  QRadioButton *pQVar19;
  QButtonGroup *this_00;
  QFrame *this_01;
  QVBoxLayout *pQVar20;
  uint uVar21;
  bool bVar22;
  undefined8 local_res8;
  QString local_res10 [8];
  QString local_res18 [8];
  QLabel *local_res20;
  
  pQVar16 = (QLabel *)0x0;
  local_res8 = (QVBoxLayout *)((ulonglong)local_res8 & 0xffffffff00000000);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("editPage",8);
  QObject::setObjectName(param_1,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QScrollArea::setWidgetResizable((QScrollArea *)param_1,true);
  pQVar5 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar18 = (QWidget *)pQVar16;
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
  QScrollArea::setWidget((QScrollArea *)param_1,pQVar18);
  QAbstractScrollArea::setHorizontalScrollBarPolicy((QAbstractScrollArea *)param_1,1);
  pQVar6 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar20 = (QVBoxLayout *)pQVar16;
  local_res8 = pQVar6;
  if (pQVar6 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar6);
    *(undefined ***)pQVar6 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar6 + 0x10) = QVBoxLayout::vftable;
    pQVar20 = pQVar6;
  }
  *(QVBoxLayout **)(param_1 + 0x30) = pQVar20;
  QLayout::setContentsMargins((QLayout *)pQVar20,0x10,0x1a,0x10,0x1a);
  QBoxLayout::setSpacing(*(QBoxLayout **)(param_1 + 0x30),0x16);
  QWidget::setLayout(pQVar18,*(QLayout **)(param_1 + 0x30));
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar14 = pQVar16;
  local_res8 = (QVBoxLayout *)pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    QLabel::QLabel(pQVar7,param_1,0);
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar14 = pQVar7;
  }
  QWidget::setFixedSize((QWidget *)pQVar14,0x20,0x20);
  local_res8 = (QVBoxLayout *)
               QString::fromAscii_helper
                         ("QLabel{ background-color: transparent; border-image: url(:res/svg/function/icon_function_merge_normal.svg);}"
                          ,0x6c);
  QWidget::setStyleSheet((QWidget *)pQVar14,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar8 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  bVar22 = pQVar8 != (QLabel *)0x0;
  pQVar7 = pQVar16;
  local_res20 = pQVar8;
  if (bVar22) {
    uVar9 = QObject::tr((char *)local_res18,&DAT_14105d3c0,0);
    local_res8 = (QVBoxLayout *)CONCAT44(local_res8._4_4_,1);
    QLabel::QLabel(pQVar8,uVar9,param_1,0);
    *(undefined ***)pQVar8 = QLabel::vftable;
    *(undefined ***)(pQVar8 + 0x10) = QLabel::vftable;
    pQVar7 = pQVar8;
  }
  uVar21 = (uint)bVar22;
  *(QLabel **)(param_1 + 0x38) = pQVar7;
  if (bVar22) {
    uVar21 = 0;
    QString::~QString(local_res18);
  }
  pQVar13 = *(QObject **)(param_1 + 0x38);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("editPageTitleLabel",0x12);
  QObject::setObjectName(pQVar13,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar10 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar17 = (QHBoxLayout *)pQVar16;
  local_res8 = (QVBoxLayout *)pQVar10;
  if (pQVar10 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar10);
    *(undefined ***)pQVar10 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar10 + 0x10) = QHBoxLayout::vftable;
    pQVar17 = pQVar10;
  }
  QBoxLayout::addWidget((QBoxLayout *)pQVar17,pQVar14,0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar17,*(undefined8 *)(param_1 + 0x38),0,0);
  QBoxLayout::addStretch((QBoxLayout *)pQVar17,0);
  QBoxLayout::addLayout(*(QBoxLayout **)(param_1 + 0x30),(QLayout *)pQVar17,0);
  pQVar5 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar18 = (QWidget *)pQVar16;
  local_res8 = (QVBoxLayout *)pQVar5;
  if (pQVar5 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar5,param_1,0);
    *(undefined ***)pQVar5 = QWidget::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QWidget::vftable;
    pQVar18 = pQVar5;
  }
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("pointCloudFusionBottomWidget",0x1c);
  QObject::setObjectName((QObject *)pQVar18,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar6 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar20 = (QVBoxLayout *)pQVar16;
  local_res8 = pQVar6;
  if (pQVar6 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar6,pQVar18);
    *(undefined ***)pQVar6 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar6 + 0x10) = QVBoxLayout::vftable;
    pQVar20 = pQVar6;
  }
  QLayout::setContentsMargins((QLayout *)pQVar20,0x10,0x10,0x10,0x10);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar20,0x10);
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 0x30),pQVar18,0,0);
  pQVar11 = (QRadioButton *)thunk_FUN_140bd99d4(0x30);
  pQVar19 = (QRadioButton *)pQVar16;
  local_res8 = (QVBoxLayout *)pQVar11;
  if (pQVar11 != (QRadioButton *)0x0) {
    QRadioButton::QRadioButton(pQVar11,(QWidget *)0x0);
    *(undefined ***)pQVar11 = QRadioButton::vftable;
    *(undefined ***)(pQVar11 + 0x10) = QRadioButton::vftable;
    pQVar19 = pQVar11;
  }
  *(QRadioButton **)(param_1 + 0x48) = pQVar19;
  pQVar12 = (QString *)QObject::tr((char *)&local_res8,&DAT_14107c478,0);
  QAbstractButton::setText((QAbstractButton *)pQVar19,pQVar12);
  QString::~QString((QString *)&local_res8);
  QBoxLayout::addWidget((QBoxLayout *)pQVar20,*(undefined8 *)(param_1 + 0x48),0,0);
  pQVar11 = (QRadioButton *)thunk_FUN_140bd99d4(0x30);
  pQVar19 = (QRadioButton *)pQVar16;
  local_res8 = (QVBoxLayout *)pQVar11;
  if (pQVar11 != (QRadioButton *)0x0) {
    QRadioButton::QRadioButton(pQVar11,(QWidget *)0x0);
    *(undefined ***)pQVar11 = QRadioButton::vftable;
    *(undefined ***)(pQVar11 + 0x10) = QRadioButton::vftable;
    pQVar19 = pQVar11;
  }
  *(QRadioButton **)(param_1 + 0x50) = pQVar19;
  pQVar12 = (QString *)QObject::tr((char *)&local_res8,&DAT_14107c488,0);
  QAbstractButton::setText((QAbstractButton *)pQVar19,pQVar12);
  QString::~QString((QString *)&local_res8);
  QBoxLayout::addWidget((QBoxLayout *)pQVar20,*(undefined8 *)(param_1 + 0x50),0,0);
  this = (QButtonGroup *)thunk_FUN_140bd99d4(0x10);
  this_00 = (QButtonGroup *)pQVar16;
  local_res8 = (QVBoxLayout *)this;
  if (this != (QButtonGroup *)0x0) {
    QButtonGroup::QButtonGroup(this,param_1);
    *(undefined ***)this = QButtonGroup::vftable;
    this_00 = this;
  }
  *(QButtonGroup **)(param_1 + 0x40) = this_00;
  QButtonGroup::setExclusive(this_00,true);
  QButtonGroup::addButton
            (*(QButtonGroup **)(param_1 + 0x40),*(QAbstractButton **)(param_1 + 0x50),1);
  QButtonGroup::addButton
            (*(QButtonGroup **)(param_1 + 0x40),*(QAbstractButton **)(param_1 + 0x48),0);
  QAbstractButton::setChecked(*(QAbstractButton **)(param_1 + 0x48),true);
  uVar9 = *(undefined8 *)(param_1 + 0x90);
  iVar4 = QButtonGroup::checkedId(*(QButtonGroup **)(param_1 + 0x40));
  thunk_FUN_1402b8220(uVar9,iVar4);
  pQVar10 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar17 = (QHBoxLayout *)pQVar16;
  local_res8 = (QVBoxLayout *)pQVar10;
  if (pQVar10 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar10);
    *(undefined ***)pQVar10 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar10 + 0x10) = QHBoxLayout::vftable;
    pQVar17 = pQVar10;
  }
  local_res8 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x30);
  pQVar13 = (QObject *)pQVar16;
  if (local_res8 != (QVBoxLayout *)0x0) {
    pQVar13 = (QObject *)thunk_FUN_1406c6710(local_res8,param_1);
  }
  *(QObject **)(param_1 + 0x58) = pQVar13;
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("clearMarkBtn",0xc);
  QObject::setObjectName(pQVar13,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar1 = *(QAbstractButton **)(param_1 + 0x58);
  pQVar12 = (QString *)QObject::tr((char *)&local_res8,&DAT_14107c4b0,0);
  QAbstractButton::setText(pQVar1,pQVar12);
  QString::~QString((QString *)&local_res8);
  QObject::installEventFilter(*(QObject **)(param_1 + 0x58),param_1);
  QWidget::setEnabled(*(QWidget **)(param_1 + 0x58),false);
  QBoxLayout::addSpacing((QBoxLayout *)pQVar17,0x18);
  QBoxLayout::addWidget((QBoxLayout *)pQVar17,*(undefined8 *)(param_1 + 0x58),0,0);
  QBoxLayout::addLayout((QBoxLayout *)pQVar20,(QLayout *)pQVar17,0);
  local_res8 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x30);
  pQVar14 = pQVar16;
  if (local_res8 != (QVBoxLayout *)0x0) {
    pQVar14 = (QLabel *)thunk_FUN_1406c68b0(local_res8,param_1);
  }
  *(QLabel **)(param_1 + 0x68) = pQVar14;
  FUN_14000b802(pQVar14,2);
  pQVar1 = *(QAbstractButton **)(param_1 + 0x68);
  pQVar12 = (QString *)QObject::tr((char *)&local_res8,&DAT_14107c4c4,0);
  QAbstractButton::setText(pQVar1,pQVar12);
  QString::~QString((QString *)&local_res8);
  QWidget::setFixedHeight(*(QWidget **)(param_1 + 0x68),0x22);
  local_res8 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x30);
  pQVar14 = pQVar16;
  if (local_res8 != (QVBoxLayout *)0x0) {
    pQVar14 = (QLabel *)thunk_FUN_1406c68b0(local_res8,param_1);
  }
  *(QLabel **)(param_1 + 0x60) = pQVar14;
  FUN_14000b802(pQVar14,3);
  pQVar1 = *(QAbstractButton **)(param_1 + 0x60);
  pQVar12 = (QString *)QObject::tr((char *)&local_res8,&DAT_14107c4d0,0);
  QAbstractButton::setText(pQVar1,pQVar12);
  QString::~QString((QString *)&local_res8);
  QWidget::setFixedHeight(*(QWidget **)(param_1 + 0x60),0x22);
  pQVar6 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar20 = (QVBoxLayout *)pQVar16;
  local_res8 = pQVar6;
  if (pQVar6 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar6);
    *(undefined ***)pQVar6 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar6 + 0x10) = QVBoxLayout::vftable;
    pQVar20 = pQVar6;
  }
  QBoxLayout::addLayout(*(QBoxLayout **)(param_1 + 0x30),(QLayout *)pQVar20,0);
  QLayout::setContentsMargins((QLayout *)pQVar20,0,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar20,0xc);
  QBoxLayout::addWidget((QBoxLayout *)pQVar20,*(undefined8 *)(param_1 + 0x68));
  QBoxLayout::addWidget((QBoxLayout *)pQVar20,*(undefined8 *)(param_1 + 0x60));
  pQVar15 = (QFrame *)thunk_FUN_140bd99d4(0x30);
  this_01 = (QFrame *)pQVar16;
  local_res8 = (QVBoxLayout *)pQVar15;
  if (pQVar15 != (QFrame *)0x0) {
    QFrame::QFrame(pQVar15,param_1);
    *(undefined ***)pQVar15 = QFrame::vftable;
    *(undefined ***)(pQVar15 + 0x10) = QFrame::vftable;
    this_01 = pQVar15;
  }
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("editPageSplitLine",0x11);
  QObject::setObjectName((QObject *)this_01,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QFrame::setFrameShape(this_01,4);
  QWidget::setFixedHeight((QWidget *)this_01,1);
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 0x30),this_01);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar14 = pQVar16;
  local_res20 = pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    uVar9 = QObject::tr((char *)local_res18,&DAT_14107c4e0,0);
    local_res8 = (QVBoxLayout *)(CONCAT44(local_res8._4_4_,uVar21) | 2);
    QLabel::QLabel(pQVar7,uVar9);
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar14 = pQVar7;
    uVar21 = 2;
  }
  *(QLabel **)(param_1 + 0x70) = pQVar14;
  if ((uVar21 & 2) != 0) {
    QString::~QString(local_res18);
  }
  pQVar13 = *(QObject **)(param_1 + 0x70);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("editPageInstructionLabel",0x18);
  QObject::setObjectName(pQVar13,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar6 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar20 = (QVBoxLayout *)pQVar16;
  local_res8 = pQVar6;
  if (pQVar6 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar6);
    *(undefined ***)pQVar6 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar6 + 0x10) = QVBoxLayout::vftable;
    pQVar20 = pQVar6;
  }
  *(QVBoxLayout **)(param_1 + 0x80) = pQVar20;
  QLayout::setContentsMargins((QLayout *)pQVar20,0,0,0,0);
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x70),0,0);
  QBoxLayout::addLayout(*(QBoxLayout **)(param_1 + 0x30),*(QLayout **)(param_1 + 0x80),0);
  local_res8 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x30);
  if (local_res8 != (QVBoxLayout *)0x0) {
    pQVar16 = (QLabel *)thunk_FUN_140695fd0(local_res8,param_1);
  }
  *(QLabel **)(param_1 + 0x78) = pQVar16;
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 0x80),pQVar16,0,0);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("alignmentpage",0xd);
  thunk_FUN_1406487e0(local_res10,&local_res8);
  QString::~QString((QString *)&local_res8);
  plVar2 = *(longlong **)(param_1 + 0x78);
  pcVar3 = *(code **)(*plVar2 + 0x1b0);
  QUrl::fromUserInput(local_res18);
  (*pcVar3)(plVar2);
  QUrl::~QUrl((QUrl *)local_res18);
  QBoxLayout::addStretch(*(QBoxLayout **)(param_1 + 0x30),0);
  QString::~QString(local_res10);
  return;
}


