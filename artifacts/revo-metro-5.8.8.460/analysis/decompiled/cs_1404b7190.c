// 1404b7190  FUN_1404b7190  size=0x23cc  calls ~QUrl (site 1404b9515)

void FUN_1404b7190(QScrollArea *param_1)

{
  undefined2 uVar1;
  QObject *pQVar2;
  longlong *plVar3;
  QVBoxLayout *pQVar4;
  QWidget *pQVar5;
  QScrollBar *pQVar6;
  QLabel *pQVar7;
  QLabel *pQVar8;
  undefined8 uVar9;
  QHBoxLayout *pQVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  QLabel *pQVar14;
  QHBoxLayout *pQVar15;
  QRadioButton *pQVar16;
  QString *pQVar17;
  QPushButton *pQVar18;
  undefined2 *puVar19;
  QWidget *pQVar20;
  QHBoxLayout *pQVar21;
  QFrame *pQVar22;
  QLabel *pQVar23;
  QWidget *pQVar24;
  QPushButton *pQVar25;
  QFrame *pQVar26;
  QVBoxLayout *pQVar27;
  QRadioButton *pQVar28;
  uint uVar29;
  QVBoxLayout *local_res8;
  QLabel *local_res10;
  undefined8 local_res18;
  QLabel *local_res20;
  undefined4 uVar31;
  undefined8 uVar30;
  uint in_stack_ffffffffffffff0c;
  ulonglong uVar32;
  code *pcVar33;
  QLabel *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  QTypedArrayData<unsigned_short> *local_c8 [2];
  QLabel *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  QHBoxLayout *local_a8;
  QString local_a0 [8];
  QHBoxLayout *local_98;
  QHBoxLayout *local_90;
  QString local_88 [8];
  QString local_80 [8];
  QString local_78 [8];
  QString local_70 [8];
  QString local_68 [40];
  
  pQVar23 = (QLabel *)0x0;
  local_res18 = (QVBoxLayout *)((ulonglong)local_res18 & 0xffffffff00000000);
  pQVar4 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar27 = (QVBoxLayout *)pQVar23;
  local_res8 = pQVar4;
  if (pQVar4 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar4);
    *(undefined ***)pQVar4 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar4 + 0x10) = QVBoxLayout::vftable;
    pQVar27 = pQVar4;
  }
  *(QVBoxLayout **)(param_1 + 400) = pQVar27;
  QLayout::setContentsMargins((QLayout *)pQVar27,0x10,0x10,0x10,0x10);
  QScrollArea::setWidgetResizable(param_1,true);
  pQVar5 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar24 = (QWidget *)pQVar23;
  local_res8 = (QVBoxLayout *)pQVar5;
  if (pQVar5 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar5,param_1,0);
    *(undefined ***)pQVar5 = QWidget::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QWidget::vftable;
    pQVar24 = pQVar5;
  }
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("scanPanelContentWidget",0x16);
  QObject::setObjectName((QObject *)pQVar24,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QScrollArea::setWidget(param_1,pQVar24);
  QAbstractScrollArea::setHorizontalScrollBarPolicy((QAbstractScrollArea *)param_1,1);
  QWidget::setLayout(pQVar24,*(QLayout **)(param_1 + 400));
  local_b8 = (QLabel *)rangeChanged_exref;
  uStack_b0 = 0;
  pQVar6 = QAbstractScrollArea::verticalScrollBar((QAbstractScrollArea *)param_1);
  pcVar33 = staticMetaObject_exref;
  local_d8 = local_b8;
  uStack_d0 = uStack_b0;
  uStack_cc = uStack_ac;
  local_res10 = (QLabel *)thunk_FUN_140bd99d4(0x18);
  pQVar14 = pQVar23;
  if (local_res10 != (QLabel *)0x0) {
    *(undefined4 *)local_res10 = 1;
    *(code **)(local_res10 + 8) = FUN_1404b5670;
    *(QScrollArea **)(local_res10 + 0x10) = param_1;
    pQVar14 = local_res10;
  }
  uVar32 = 0;
  QObject::connectImpl
            ((QObject *)&local_res8,(void **)pQVar6,(QObject *)&local_d8,(void **)param_1,
             (QSlotObjectBase *)0x0,(ConnectionType)pQVar14,
             (int *)((ulonglong)in_stack_ffffffffffffff0c << 0x20),(QMetaObject *)0x0);
  uVar31 = (undefined4)((ulonglong)pQVar14 >> 0x20);
  uVar29 = 0x4000000;
  QMetaObject::Connection::~Connection((Connection *)&local_res8);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("editPage",8);
  QObject::setObjectName((QObject *)param_1,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar14 = pQVar23;
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
                         ("QLabel{ background-color: transparent; border-image: url(:res/svg/function/icon_function_pointcloud_normal.svg);}"
                          ,0x71);
  QWidget::setStyleSheet((QWidget *)pQVar14,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar8 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar7 = pQVar23;
  local_res10 = pQVar8;
  if (pQVar8 != (QLabel *)0x0) {
    uVar9 = QObject::tr((char *)&local_res8,&DAT_14105d350,0);
    uVar29 = 0x4000001;
    local_res18 = (QVBoxLayout *)CONCAT44(local_res18._4_4_,0x4000001);
    QLabel::QLabel(pQVar8,uVar9,param_1,0);
    *(undefined ***)pQVar8 = QLabel::vftable;
    *(undefined ***)(pQVar8 + 0x10) = QLabel::vftable;
    pQVar7 = pQVar8;
  }
  *(QLabel **)(param_1 + 0x38) = pQVar7;
  if ((char)uVar29 != '\0') {
    uVar29 = uVar29 & 0xfffffffe;
    QString::~QString((QString *)&local_res8);
  }
  pQVar2 = *(QObject **)(param_1 + 0x38);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("editPageTitleLabel",0x12);
  QObject::setObjectName(pQVar2,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar10 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  if (pQVar10 == (QHBoxLayout *)0x0) {
    local_90 = (QHBoxLayout *)0x0;
    pQVar15 = (QHBoxLayout *)pQVar23;
    local_res8 = (QVBoxLayout *)pQVar10;
  }
  else {
    local_res8 = (QVBoxLayout *)pQVar10;
    local_90 = pQVar10;
    QHBoxLayout::QHBoxLayout(pQVar10);
    *(undefined ***)pQVar10 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar10 + 0x10) = QHBoxLayout::vftable;
    pQVar15 = pQVar10;
  }
  QBoxLayout::addWidget((QBoxLayout *)pQVar15,pQVar14);
  QBoxLayout::addWidget((QBoxLayout *)pQVar15);
  QBoxLayout::addStretch((QBoxLayout *)pQVar15,0);
  pQVar5 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar24 = (QWidget *)pQVar23;
  local_res8 = (QVBoxLayout *)pQVar5;
  if (pQVar5 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar5,param_1);
    *(undefined ***)pQVar5 = QWidget::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QWidget::vftable;
    pQVar24 = pQVar5;
  }
  *(QWidget **)(param_1 + 0x48) = pQVar24;
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("pointCloudFusionBottomWidget",0x1c);
  QObject::setObjectName((QObject *)pQVar24,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QWidget::setContentsMargins(*(QWidget **)(param_1 + 0x48),0,0,0,0);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar14 = pQVar23;
  local_res10 = pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    uVar9 = QObject::tr((char *)&local_res8,&DAT_141080668,0);
    local_res18 = (QVBoxLayout *)(CONCAT44(local_res18._4_4_,uVar29) | 2);
    QLabel::QLabel(pQVar7,uVar9);
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar14 = pQVar7;
    uVar29 = uVar29 | 2;
  }
  *(QLabel **)(param_1 + 0x40) = pQVar14;
  if ((uVar29 & 2) != 0) {
    uVar29 = uVar29 & 0xfffffffd;
    QString::~QString((QString *)&local_res8);
  }
  pQVar2 = *(QObject **)(param_1 + 0x40);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("fusionDotPitchLabel",0x13);
  QObject::setObjectName(pQVar2,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x68);
  pQVar14 = pQVar23;
  local_b8 = pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    uVar11 = QObject::tr((char *)&local_res20,&DAT_141080678,0);
    local_res18 = (QVBoxLayout *)(CONCAT44(local_res18._4_4_,uVar29) | 4);
    uVar12 = QObject::tr((char *)&local_res10,&DAT_141080690,0);
    local_res18 = (QVBoxLayout *)(CONCAT44(local_res18._4_4_,uVar29) | 0xc);
    uVar13 = QObject::tr((char *)&local_res8,&DAT_141080668,0);
    local_res18 = (QVBoxLayout *)(CONCAT44(local_res18._4_4_,uVar29) | 0x1c);
    pcVar33 = (code *)((ulonglong)pcVar33 & 0xffffffff00000000);
    uVar32 = uVar32 & 0xffffffff00000000;
    uVar30 = CONCAT44(uVar31,0x15e);
    pQVar14 = (QLabel *)
              thunk_FUN_1406d0ed0(pQVar7,uVar13,uVar12,uVar11,uVar9,uVar30,1,uVar32,pcVar33,1);
    uVar31 = (undefined4)((ulonglong)uVar30 >> 0x20);
    uVar29 = uVar29 | 0x1c;
  }
  *(QLabel **)(param_1 + 0x60) = pQVar14;
  if ((uVar29 & 0x10) != 0) {
    uVar29 = uVar29 & 0xffffffef;
    QString::~QString((QString *)&local_res8);
  }
  if ((uVar29 & 8) != 0) {
    uVar29 = uVar29 & 0xfffffff7;
    QString::~QString((QString *)&local_res10);
  }
  if ((uVar29 & 4) != 0) {
    uVar29 = uVar29 & 0xfffffffb;
    QString::~QString((QString *)&local_res20);
  }
  QWidget::setFixedSize(*(QWidget **)(param_1 + 0x60),0xe,0xe);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0x60),0x5c,true);
  pQVar2 = *(QObject **)(param_1 + 0x60);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("objectHelpButton",0x10);
  QObject::setObjectName(pQVar2,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar15 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar10 = (QHBoxLayout *)pQVar23;
  local_res8 = (QVBoxLayout *)pQVar15;
  if (pQVar15 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar15);
    *(undefined ***)pQVar15 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar15 + 0x10) = QHBoxLayout::vftable;
    pQVar10 = pQVar15;
  }
  QLayout::setContentsMargins((QLayout *)pQVar10,0,0,0,0);
  QBoxLayout::addSpacing((QBoxLayout *)pQVar10,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar10,*(undefined8 *)(param_1 + 0x40),0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar10,*(undefined8 *)(param_1 + 0x60),0,0);
  QBoxLayout::addStretch((QBoxLayout *)pQVar10,0);
  pQVar16 = (QRadioButton *)thunk_FUN_140bd99d4(0x30);
  pQVar28 = (QRadioButton *)pQVar23;
  local_res10 = (QLabel *)pQVar16;
  if (pQVar16 != (QRadioButton *)0x0) {
    pQVar24 = *(QWidget **)(param_1 + 0x48);
    pQVar17 = (QString *)QObject::tr((char *)&local_res8,&DAT_141080770,0);
    local_res18 = (QVBoxLayout *)(CONCAT44(local_res18._4_4_,uVar29) | 0x20);
    QRadioButton::QRadioButton(pQVar16,pQVar17,pQVar24);
    *(undefined ***)pQVar16 = QRadioButton::vftable;
    *(undefined ***)(pQVar16 + 0x10) = QRadioButton::vftable;
    pQVar28 = pQVar16;
    uVar29 = uVar29 | 0x20;
  }
  *(QRadioButton **)(param_1 + 0x50) = pQVar28;
  if ((uVar29 & 0x20) != 0) {
    uVar29 = uVar29 & 0xffffffdf;
    QString::~QString((QString *)&local_res8);
  }
  QAbstractButton::setChecked(*(QAbstractButton **)(param_1 + 0x50),true);
  pQVar16 = (QRadioButton *)thunk_FUN_140bd99d4(0x30);
  pQVar28 = (QRadioButton *)pQVar23;
  local_res10 = (QLabel *)pQVar16;
  if (pQVar16 != (QRadioButton *)0x0) {
    pQVar24 = *(QWidget **)(param_1 + 0x48);
    pQVar17 = (QString *)QObject::tr((char *)&local_res8,&DAT_141080780,0);
    local_res18 = (QVBoxLayout *)(CONCAT44(local_res18._4_4_,uVar29) | 0x40);
    QRadioButton::QRadioButton(pQVar16,pQVar17,pQVar24);
    *(undefined ***)pQVar16 = QRadioButton::vftable;
    *(undefined ***)(pQVar16 + 0x10) = QRadioButton::vftable;
    pQVar28 = pQVar16;
    uVar29 = uVar29 | 0x40;
  }
  *(QRadioButton **)(param_1 + 0x58) = pQVar28;
  if ((uVar29 & 0x40) != 0) {
    uVar29 = uVar29 & 0xffffffbf;
    QString::~QString((QString *)&local_res8);
  }
  QAbstractButton::setChecked(*(QAbstractButton **)(param_1 + 0x58),false);
  pQVar4 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar27 = (QVBoxLayout *)pQVar23;
  local_res8 = pQVar4;
  if (pQVar4 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar4,*(QWidget **)(param_1 + 0x48));
    *(undefined ***)pQVar4 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar4 + 0x10) = QVBoxLayout::vftable;
    pQVar27 = pQVar4;
  }
  QLayout::setContentsMargins((QLayout *)pQVar27,0x10,0xc,0x10,0x10);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar27,8);
  QBoxLayout::addLayout((QBoxLayout *)pQVar27,(QLayout *)pQVar10,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar27,*(undefined8 *)(param_1 + 0x50),0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar27,*(undefined8 *)(param_1 + 0x58),0,0);
  pQVar5 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar24 = (QWidget *)pQVar23;
  local_res8 = (QVBoxLayout *)pQVar5;
  if (pQVar5 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar5,param_1);
    *(undefined ***)pQVar5 = QWidget::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QWidget::vftable;
    pQVar24 = pQVar5;
  }
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("pointCloudFusionBottomWidget",0x1c);
  QObject::setObjectName((QObject *)pQVar24,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar14 = pQVar23;
  local_res20 = pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    uVar9 = QObject::tr((char *)&local_res10,&DAT_14108079c,0);
    local_res18 = (QVBoxLayout *)(CONCAT44(local_res18._4_4_,uVar29) | 0x80);
    uVar9 = thunk_FUN_14025f9b0(&local_res8,uVar9," (mm)");
    local_res18 = (QVBoxLayout *)(CONCAT44(local_res18._4_4_,uVar29) | 0x180);
    QLabel::QLabel(pQVar7,uVar9,pQVar24,0);
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar14 = pQVar7;
    uVar29 = uVar29 | 0x180;
  }
  *(QLabel **)(param_1 + 0x68) = pQVar14;
  if ((uVar29 >> 8 & 1) != 0) {
    uVar29 = uVar29 & 0xfffffeff;
    QString::~QString((QString *)&local_res8);
  }
  if ((char)uVar29 < '\0') {
    uVar29 = uVar29 & 0xffffff7f;
    QString::~QString((QString *)&local_res10);
  }
  pQVar2 = *(QObject **)(param_1 + 0x68);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("fusionDotPitchLabel",0x13);
  QObject::setObjectName(pQVar2,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar18 = (QPushButton *)thunk_FUN_140bd99d4(0x30);
  pQVar25 = (QPushButton *)pQVar23;
  local_res8 = (QVBoxLayout *)pQVar18;
  if (pQVar18 != (QPushButton *)0x0) {
    QPushButton::QPushButton(pQVar18,pQVar24);
    *(undefined ***)pQVar18 = QPushButton::vftable;
    *(undefined ***)(pQVar18 + 0x10) = QPushButton::vftable;
    pQVar25 = pQVar18;
  }
  *(QPushButton **)(param_1 + 0x78) = pQVar25;
  pQVar17 = (QString *)QObject::tr((char *)&local_res8,&DAT_14107e494,0);
  QWidget::setToolTip((QWidget *)pQVar25,pQVar17);
  QString::~QString((QString *)&local_res8);
  pQVar2 = *(QObject **)(param_1 + 0x78);
  local_res8 = (QVBoxLayout *)QString::fromAscii_helper("fusionDotPitchResetBtn",0x16);
  QObject::setObjectName(pQVar2,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0x78),0x5c,true);
  local_res20 = (QLabel *)
                QString::fromAscii_helper
                          ("<p style=\'line-height:10px; width:100% ; white-space: pre-wrap; \'>%1<br><span style=\'color:#FF9D5D;\'>%2</span></p>"
                           ,0x72);
  puVar19 = (undefined2 *)QChar::QChar((QChar *)&local_res8,0x20);
  uVar1 = *puVar19;
  uVar9 = QObject::tr((char *)local_68,&DAT_141080840,0);
  pQVar17 = (QString *)QString::arg((QString *)&local_res20,local_70,uVar9,0,uVar1);
  puVar19 = (undefined2 *)QChar::QChar((QChar *)&local_res10,0x20);
  uVar1 = *puVar19;
  uVar9 = QObject::tr((char *)local_78,&DAT_141080850,0);
  QString::arg(pQVar17,local_80,uVar9,0,uVar1);
  QString::~QString(local_78);
  QString::~QString(local_70);
  QString::~QString(local_68);
  QString::~QString((QString *)&local_res20);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x68);
  pQVar14 = pQVar23;
  local_b8 = pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    uVar9 = QObject::tr((char *)local_c8,&DAT_141080678,0);
    local_res18 = (QVBoxLayout *)(CONCAT44(local_res18._4_4_,uVar29) | 0x200);
    uVar11 = QObject::tr((char *)&local_98,&DAT_14108079c,0);
    local_res18 = (QVBoxLayout *)(CONCAT44(local_res18._4_4_,uVar29) | 0x600);
    pcVar33 = (code *)((ulonglong)pcVar33 & 0xffffffff00000000);
    uVar32 = uVar32 & 0xffffffff00000000;
    uVar12 = CONCAT44(uVar31,0x15e);
    pQVar14 = (QLabel *)
              thunk_FUN_1406d0ed0(pQVar7,uVar11,local_80,uVar9,pQVar24,uVar12,1,uVar32,pcVar33,1);
    uVar31 = (undefined4)((ulonglong)uVar12 >> 0x20);
    uVar29 = uVar29 | 0x600;
  }
  *(QLabel **)(param_1 + 0x70) = pQVar14;
  if ((uVar29 >> 10 & 1) != 0) {
    uVar29 = uVar29 & 0xfffffbff;
    QString::~QString((QString *)&local_98);
  }
  if ((uVar29 >> 9 & 1) != 0) {
    uVar29 = uVar29 & 0xfffffdff;
    QString::~QString((QString *)local_c8);
  }
  QWidget::setFixedSize(*(QWidget **)(param_1 + 0x70),0xe,0xe);
  pQVar2 = *(QObject **)(param_1 + 0x70);
  local_res18 = (QVBoxLayout *)QString::fromAscii_helper("objectHelpButton",0x10);
  QObject::setObjectName(pQVar2,(QString *)&local_res18);
  QString::~QString((QString *)&local_res18);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0x70),0x5c,true);
  pQVar10 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  local_res18 = (QVBoxLayout *)pQVar10;
  if (pQVar10 == (QHBoxLayout *)0x0) {
    local_98 = (QHBoxLayout *)0x0;
    pQVar10 = (QHBoxLayout *)pQVar23;
  }
  else {
    local_98 = pQVar10;
    QHBoxLayout::QHBoxLayout(pQVar10);
    *(undefined ***)pQVar10 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar10 + 0x10) = QHBoxLayout::vftable;
  }
  QBoxLayout::setSpacing((QBoxLayout *)pQVar10,10);
  QBoxLayout::addWidget((QBoxLayout *)pQVar10,*(undefined8 *)(param_1 + 0x68),0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar10,*(undefined8 *)(param_1 + 0x70),0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar10,*(undefined8 *)(param_1 + 0x78),0,0);
  QBoxLayout::addStretch((QBoxLayout *)pQVar10,0);
  local_res18 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x88);
  uVar9 = DAT_141059158;
  pQVar14 = pQVar23;
  if (local_res18 != (QVBoxLayout *)0x0) {
    uVar31 = 0;
    pQVar14 = (QLabel *)
              thunk_FUN_14039c090(local_res18,pQVar24,DAT_141072f50,DAT_141059158,DAT_141058db8,0);
  }
  *(QLabel **)(param_1 + 0x80) = pQVar14;
  thunk_FUN_14039d840(pQVar14,0xb4);
  thunk_FUN_14039d930(*(undefined8 *)(param_1 + 0x80),0x3c);
  QWidget::setFixedHeight(*(QWidget **)(param_1 + 0x80),0x36);
  thunk_FUN_14039d860(*(undefined8 *)(param_1 + 0x80),1);
  uVar11 = *(undefined8 *)(param_1 + 0x80);
  uVar12 = QObject::tr((char *)&local_res18,&DAT_141080868,0);
  thunk_FUN_14039d650(uVar11,uVar12);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0x80),0x5c,true);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar14 = pQVar23;
  local_res18 = (QVBoxLayout *)pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    QLabel::QLabel(pQVar7,param_1);
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar14 = pQVar7;
  }
  *(QLabel **)(param_1 + 0x88) = pQVar14;
  local_res18 = (QVBoxLayout *)QString::fromAscii_helper("dotPitchTipLabel",0x10);
  QObject::setObjectName((QObject *)pQVar14,(QString *)&local_res18);
  QString::~QString((QString *)&local_res18);
  QLabel::setWordWrap(*(QLabel **)(param_1 + 0x88),true);
  pQVar14 = *(QLabel **)(param_1 + 0x88);
  pQVar17 = (QString *)QObject::tr((char *)&local_res18,&DAT_141080888,0);
  QLabel::setText(pQVar14,pQVar17);
  QString::~QString((QString *)&local_res18);
  pQVar20 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar5 = (QWidget *)pQVar23;
  local_res18 = (QVBoxLayout *)pQVar20;
  if (pQVar20 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar20,param_1);
    *(undefined ***)pQVar20 = QWidget::vftable;
    *(undefined ***)(pQVar20 + 0x10) = QWidget::vftable;
    pQVar5 = pQVar20;
  }
  *(QWidget **)(param_1 + 0xb8) = pQVar5;
  local_res18 = (QVBoxLayout *)QString::fromAscii_helper("pointCloudFusionBottomWidget",0x1c);
  QObject::setObjectName((QObject *)pQVar5,(QString *)&local_res18);
  QString::~QString((QString *)&local_res18);
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x58))(*(longlong **)(param_1 + 0xb8),0);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar14 = pQVar23;
  local_b8 = pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    uVar11 = QObject::tr((char *)local_c8,&DAT_1410808d0,0);
    local_res18 = (QVBoxLayout *)(CONCAT44(local_res18._4_4_,uVar29) | 0x800);
    QLabel::QLabel(pQVar7,uVar11);
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar14 = pQVar7;
    uVar29 = uVar29 | 0x800;
  }
  *(QLabel **)(param_1 + 0xc0) = pQVar14;
  if ((uVar29 >> 0xb & 1) != 0) {
    uVar29 = uVar29 & 0xfffff7ff;
    QString::~QString((QString *)local_c8);
  }
  pQVar2 = *(QObject **)(param_1 + 0xc0);
  local_res18 = (QVBoxLayout *)QString::fromAscii_helper("fusionDotPitchLabel",0x13);
  QObject::setObjectName(pQVar2,(QString *)&local_res18);
  QString::~QString((QString *)&local_res18);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x68);
  pQVar14 = pQVar23;
  local_b8 = pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    uVar11 = *(undefined8 *)(param_1 + 0xb8);
    local_a8 = (QHBoxLayout *)QString::fromAscii_helper("",0);
    local_res18 = (QVBoxLayout *)(CONCAT44(local_res18._4_4_,uVar29) | 0x1000);
    uVar12 = QObject::tr((char *)&local_d8,&DAT_1410808d8,0);
    local_res18 = (QVBoxLayout *)(CONCAT44(local_res18._4_4_,uVar29) | 0x3000);
    uVar12 = thunk_FUN_14025f9b0(local_a0,uVar12);
    local_res18 = (QVBoxLayout *)(CONCAT44(local_res18._4_4_,uVar29) | 0x7000);
    uVar13 = QObject::tr((char *)local_c8,&DAT_1410808d0,0);
    local_res18 = (QVBoxLayout *)(CONCAT44(local_res18._4_4_,uVar29) | 0xf000);
    pcVar33 = (code *)((ulonglong)pcVar33 & 0xffffffff00000000);
    uVar32 = uVar32 & 0xffffffff00000000;
    uVar30 = CONCAT44(uVar31,0x15e);
    pQVar14 = (QLabel *)
              thunk_FUN_1406d0ed0(pQVar7,uVar13,uVar12,&local_a8,uVar11,uVar30,1,uVar32,pcVar33,1);
    uVar31 = (undefined4)((ulonglong)uVar30 >> 0x20);
    uVar29 = uVar29 | 0xf000;
  }
  *(QLabel **)(param_1 + 200) = pQVar14;
  if ((uVar29 >> 0xf & 1) != 0) {
    uVar29 = uVar29 & 0xffff7fff;
    QString::~QString((QString *)local_c8);
  }
  if ((uVar29 >> 0xe & 1) != 0) {
    uVar29 = uVar29 & 0xffffbfff;
    QString::~QString(local_a0);
  }
  if ((uVar29 >> 0xd & 1) != 0) {
    uVar29 = uVar29 & 0xffffdfff;
    QString::~QString((QString *)&local_d8);
  }
  if ((uVar29 >> 0xc & 1) != 0) {
    uVar29 = uVar29 & 0xffffefff;
    QString::~QString((QString *)&local_a8);
  }
  QWidget::setFixedSize(*(QWidget **)(param_1 + 200),0xe,0xe);
  QWidget::setAttribute(*(QWidget **)(param_1 + 200),0x5c,true);
  pQVar2 = *(QObject **)(param_1 + 200);
  local_res18 = (QVBoxLayout *)QString::fromAscii_helper("objectHelpButton",0x10);
  QObject::setObjectName(pQVar2,(QString *)&local_res18);
  QString::~QString((QString *)&local_res18);
  local_res18 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x38);
  pQVar5 = (QWidget *)pQVar23;
  if (local_res18 != (QVBoxLayout *)0x0) {
    pQVar5 = (QWidget *)thunk_FUN_14039ac20(local_res18,*(undefined8 *)(param_1 + 0xb8));
  }
  *(QWidget **)(param_1 + 0xd0) = pQVar5;
  QWidget::setFixedSize(pQVar5,0x1c,0x10);
  pQVar2 = *(QObject **)(param_1 + 0xd0);
  local_res18 = (QVBoxLayout *)QString::fromAscii_helper("textureButton",0xd);
  QObject::setObjectName(pQVar2,(QString *)&local_res18);
  QString::~QString((QString *)&local_res18);
  thunk_FUN_14039ace0(*(undefined8 *)(param_1 + 0xd0));
  pQVar15 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar10 = (QHBoxLayout *)pQVar23;
  local_res18 = (QVBoxLayout *)pQVar15;
  if (pQVar15 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar15,*(QWidget **)(param_1 + 0xb8));
    *(undefined ***)pQVar15 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar15 + 0x10) = QHBoxLayout::vftable;
    pQVar10 = pQVar15;
  }
  QLayout::setContentsMargins((QLayout *)pQVar10,0,0,0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar10,*(undefined8 *)(param_1 + 0xc0),0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar10,*(undefined8 *)(param_1 + 200),0,0);
  QBoxLayout::addStretch((QBoxLayout *)pQVar10,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar10,*(undefined8 *)(param_1 + 0xd0),0,0);
  pQVar20 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar5 = (QWidget *)pQVar23;
  local_res18 = (QVBoxLayout *)pQVar20;
  if (pQVar20 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar20,param_1);
    *(undefined ***)pQVar20 = QWidget::vftable;
    *(undefined ***)(pQVar20 + 0x10) = QWidget::vftable;
    pQVar5 = pQVar20;
  }
  *(QWidget **)(param_1 + 0x188) = pQVar5;
  local_res18 = (QVBoxLayout *)QString::fromAscii_helper("pointCloudFusionBottomWidget",0x1c);
  QObject::setObjectName((QObject *)pQVar5,(QString *)&local_res18);
  QString::~QString((QString *)&local_res18);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar14 = pQVar23;
  local_b8 = pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    uVar11 = *(undefined8 *)(param_1 + 0x188);
    uVar12 = QObject::tr((char *)&local_d8,&DAT_141080918,0);
    local_res18 = (QVBoxLayout *)(CONCAT44(local_res18._4_4_,uVar29) | 0x10000);
    QLabel::QLabel(pQVar7,uVar12,uVar11,0);
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar14 = pQVar7;
    uVar29 = uVar29 | 0x10000;
  }
  *(QLabel **)(param_1 + 0xf0) = pQVar14;
  if ((uVar29 >> 0x10 & 1) != 0) {
    uVar29 = uVar29 & 0xfffeffff;
    QString::~QString((QString *)&local_d8);
  }
  pQVar2 = *(QObject **)(param_1 + 0xf0);
  local_res18 = (QVBoxLayout *)QString::fromAscii_helper("fusionDotPitchLabel",0x13);
  QObject::setObjectName(pQVar2,(QString *)&local_res18);
  QString::~QString((QString *)&local_res18);
  local_res18 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x38);
  pQVar5 = (QWidget *)pQVar23;
  if (local_res18 != (QVBoxLayout *)0x0) {
    pQVar5 = (QWidget *)thunk_FUN_14039ac20(local_res18,*(undefined8 *)(param_1 + 0x188));
  }
  *(QWidget **)(param_1 + 0xe8) = pQVar5;
  QWidget::setFixedSize(pQVar5,0x1c,0x10);
  pQVar2 = *(QObject **)(param_1 + 0xe8);
  local_res18 = (QVBoxLayout *)QString::fromAscii_helper("textureButton",0xd);
  QObject::setObjectName(pQVar2,(QString *)&local_res18);
  QString::~QString((QString *)&local_res18);
  thunk_FUN_14039ace0(*(undefined8 *)(param_1 + 0xe8),0);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar14 = pQVar23;
  local_b8 = pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    uVar11 = *(undefined8 *)(param_1 + 0x188);
    uVar12 = QObject::tr((char *)&local_d8,&DAT_141080940,0);
    local_res18 = (QVBoxLayout *)(CONCAT44(local_res18._4_4_,uVar29) | 0x20000);
    QLabel::QLabel(pQVar7,uVar12,uVar11,0);
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar14 = pQVar7;
    uVar29 = uVar29 | 0x20000;
  }
  *(QLabel **)(param_1 + 0xf8) = pQVar14;
  if ((uVar29 >> 0x11 & 1) != 0) {
    uVar29 = uVar29 & 0xfffdffff;
    QString::~QString((QString *)&local_d8);
  }
  pQVar2 = *(QObject **)(param_1 + 0xf8);
  local_res18 = (QVBoxLayout *)QString::fromAscii_helper("fusionDotPitchLabel",0x13);
  QObject::setObjectName(pQVar2,(QString *)&local_res18);
  QString::~QString((QString *)&local_res18);
  pQVar18 = (QPushButton *)thunk_FUN_140bd99d4(0x30);
  pQVar25 = (QPushButton *)pQVar23;
  local_res18 = (QVBoxLayout *)pQVar18;
  if (pQVar18 != (QPushButton *)0x0) {
    QPushButton::QPushButton(pQVar18,pQVar24);
    *(undefined ***)pQVar18 = QPushButton::vftable;
    *(undefined ***)(pQVar18 + 0x10) = QPushButton::vftable;
    pQVar25 = pQVar18;
  }
  *(QPushButton **)(param_1 + 0x110) = pQVar25;
  pQVar17 = (QString *)QObject::tr((char *)&local_res18,&DAT_14107e494,0);
  QWidget::setToolTip((QWidget *)pQVar25,pQVar17);
  QString::~QString((QString *)&local_res18);
  pQVar2 = *(QObject **)(param_1 + 0x110);
  local_res18 = (QVBoxLayout *)QString::fromAscii_helper("fusionDotPitchResetBtn",0x16);
  QObject::setObjectName(pQVar2,(QString *)&local_res18);
  QString::~QString((QString *)&local_res18);
  pQVar15 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar10 = (QHBoxLayout *)pQVar23;
  local_res18 = (QVBoxLayout *)pQVar15;
  if (pQVar15 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar15);
    *(undefined ***)pQVar15 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar15 + 0x10) = QHBoxLayout::vftable;
    pQVar10 = pQVar15;
  }
  QBoxLayout::setSpacing((QBoxLayout *)pQVar10,10);
  QBoxLayout::addWidget((QBoxLayout *)pQVar10,*(undefined8 *)(param_1 + 0xf8),0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar10,*(undefined8 *)(param_1 + 0x110),0);
  QBoxLayout::addStretch((QBoxLayout *)pQVar10,0);
  local_res18 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x88);
  pQVar14 = pQVar23;
  if (local_res18 != (QVBoxLayout *)0x0) {
    pQVar14 = (QLabel *)
              thunk_FUN_14039c090(local_res18,pQVar24,DAT_141055f80,DAT_141065140,DAT_14107fc10,
                                  uVar9);
    uVar31 = (undefined4)((ulonglong)uVar9 >> 0x20);
  }
  *(QLabel **)(param_1 + 0x108) = pQVar14;
  thunk_FUN_14039d840(pQVar14,0xb4);
  thunk_FUN_14039d880(*(undefined8 *)(param_1 + 0x108),DAT_141065140);
  thunk_FUN_14039d6d0(*(undefined8 *)(param_1 + 0x108),1);
  thunk_FUN_14039d930(*(undefined8 *)(param_1 + 0x108),0x3c);
  QWidget::setFixedHeight(*(QWidget **)(param_1 + 0x108),0x18);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0x108),0x5c,true);
  QWidget::hide(*(QWidget **)(param_1 + 0xf8));
  QWidget::hide(*(QWidget **)(param_1 + 0x110));
  QWidget::hide(*(QWidget **)(param_1 + 0x108));
  pQVar21 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar15 = (QHBoxLayout *)pQVar23;
  local_res18 = (QVBoxLayout *)pQVar21;
  if (pQVar21 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar21);
    *(undefined ***)pQVar21 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar21 + 0x10) = QHBoxLayout::vftable;
    pQVar15 = pQVar21;
  }
  QBoxLayout::addWidget((QBoxLayout *)pQVar15,*(undefined8 *)(param_1 + 0xf0),0);
  QBoxLayout::addStretch((QBoxLayout *)pQVar15,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar15,*(undefined8 *)(param_1 + 0xe8),0);
  pQVar4 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar27 = (QVBoxLayout *)pQVar23;
  local_res18 = pQVar4;
  if (pQVar4 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar4);
    *(undefined ***)pQVar4 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar4 + 0x10) = QVBoxLayout::vftable;
    pQVar27 = pQVar4;
  }
  QLayout::setContentsMargins((QLayout *)pQVar27,0,8,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar27,0x10);
  QBoxLayout::addLayout((QBoxLayout *)pQVar27,(QLayout *)pQVar15,0);
  QBoxLayout::addLayout((QBoxLayout *)pQVar27,(QLayout *)pQVar10,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar27,*(undefined8 *)(param_1 + 0x108));
  QWidget::setLayout(*(QWidget **)(param_1 + 0x188),(QLayout *)pQVar27);
  QWidget::hide(*(QWidget **)(param_1 + 0x188));
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar14 = pQVar23;
  local_b8 = pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    uVar9 = QObject::tr((char *)&local_d8,&DAT_141080958,0);
    local_res18 = (QVBoxLayout *)(CONCAT44(local_res18._4_4_,uVar29) | 0x40000);
    QLabel::QLabel(pQVar7,uVar9,pQVar24);
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar14 = pQVar7;
    uVar29 = uVar29 | 0x40000;
  }
  *(QLabel **)(param_1 + 0x118) = pQVar14;
  if ((uVar29 >> 0x12 & 1) != 0) {
    uVar29 = uVar29 & 0xfffbffff;
    QString::~QString((QString *)&local_d8);
  }
  pQVar2 = *(QObject **)(param_1 + 0x118);
  local_res18 = (QVBoxLayout *)QString::fromAscii_helper("fusionDotPitchLabel",0x13);
  QObject::setObjectName(pQVar2,(QString *)&local_res18);
  QString::~QString((QString *)&local_res18);
  local_res18 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x38);
  pQVar5 = (QWidget *)pQVar23;
  if (local_res18 != (QVBoxLayout *)0x0) {
    pQVar5 = (QWidget *)thunk_FUN_14039ac20(local_res18,pQVar24);
  }
  *(QWidget **)(param_1 + 0x120) = pQVar5;
  QWidget::setFixedSize(pQVar5,0x1c,0x10);
  pQVar2 = *(QObject **)(param_1 + 0x120);
  local_res18 = (QVBoxLayout *)QString::fromAscii_helper("textureButton",0xd);
  QObject::setObjectName(pQVar2,(QString *)&local_res18);
  QString::~QString((QString *)&local_res18);
  thunk_FUN_14039ace0(*(undefined8 *)(param_1 + 0x120));
  pQVar10 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  local_res18 = (QVBoxLayout *)pQVar10;
  if (pQVar10 == (QHBoxLayout *)0x0) {
    local_a8 = (QHBoxLayout *)0x0;
    pQVar10 = (QHBoxLayout *)pQVar23;
  }
  else {
    local_a8 = pQVar10;
    QHBoxLayout::QHBoxLayout(pQVar10);
    *(undefined ***)pQVar10 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar10 + 0x10) = QHBoxLayout::vftable;
  }
  QLayout::setContentsMargins((QLayout *)pQVar10,0,0,0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar10);
  QBoxLayout::addStretch((QBoxLayout *)pQVar10,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar10,*(undefined8 *)(param_1 + 0x120));
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar14 = pQVar23;
  local_b8 = pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    uVar9 = QObject::tr((char *)&local_d8,&DAT_141059efc,0);
    local_res18 = (QVBoxLayout *)(CONCAT44(local_res18._4_4_,uVar29) | 0x80000);
    pQVar14 = (QLabel *)thunk_FUN_1406c6430(pQVar7,uVar9,pQVar24);
    uVar29 = uVar29 | 0x80000;
  }
  *(QLabel **)(param_1 + 0x128) = pQVar14;
  if ((uVar29 >> 0x13 & 1) != 0) {
    uVar29 = uVar29 & 0xfff7ffff;
    QString::~QString((QString *)&local_d8);
  }
  QWidget::setFixedHeight(*(QWidget **)(param_1 + 0x128),0x26);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0x128),0x5c,true);
  pQVar20 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar5 = (QWidget *)pQVar23;
  local_res18 = (QVBoxLayout *)pQVar20;
  if (pQVar20 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar20,pQVar24);
    *(undefined ***)pQVar20 = QWidget::vftable;
    *(undefined ***)(pQVar20 + 0x10) = QWidget::vftable;
    pQVar5 = pQVar20;
  }
  *(QWidget **)(param_1 + 0x138) = pQVar5;
  local_res18 = (QVBoxLayout *)QString::fromAscii_helper("optimizeWidget",0xe);
  QObject::setObjectName((QObject *)pQVar5,(QString *)&local_res18);
  QString::~QString((QString *)&local_res18);
  pQVar4 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar27 = (QVBoxLayout *)pQVar23;
  local_res18 = pQVar4;
  if (pQVar4 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar4,*(QWidget **)(param_1 + 0x138));
    *(undefined ***)pQVar4 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar4 + 0x10) = QVBoxLayout::vftable;
    pQVar27 = pQVar4;
  }
  QLayout::setContentsMargins((QLayout *)pQVar27,0,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar27,0x10);
  pQVar22 = (QFrame *)thunk_FUN_140bd99d4(0x30);
  pQVar26 = (QFrame *)pQVar23;
  local_res18 = (QVBoxLayout *)pQVar22;
  if (pQVar22 != (QFrame *)0x0) {
    QFrame::QFrame(pQVar22,*(undefined8 *)(param_1 + 0x138));
    *(undefined ***)pQVar22 = QFrame::vftable;
    *(undefined ***)(pQVar22 + 0x10) = QFrame::vftable;
    pQVar26 = pQVar22;
  }
  local_res18 = (QVBoxLayout *)QString::fromAscii_helper("editPageSplitLine",0x11);
  QObject::setObjectName((QObject *)pQVar26,(QString *)&local_res18);
  QString::~QString((QString *)&local_res18);
  QFrame::setFrameShape(pQVar26,4);
  QWidget::setFixedHeight((QWidget *)pQVar26,1);
  QBoxLayout::addWidget((QBoxLayout *)pQVar27,pQVar26);
  local_d8 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar14 = pQVar23;
  if (local_d8 != (QLabel *)0x0) {
    uVar9 = *(undefined8 *)(param_1 + 0x138);
    uVar11 = QObject::tr((char *)local_a0,&DAT_141080980,0);
    pQVar14 = local_d8;
    local_res18 = (QVBoxLayout *)(CONCAT44(local_res18._4_4_,uVar29) | 0x100000);
    QLabel::QLabel(local_d8,uVar11,uVar9);
    *(undefined ***)pQVar14 = QLabel::vftable;
    *(undefined ***)(pQVar14 + 0x10) = QLabel::vftable;
    uVar29 = uVar29 | 0x100000;
  }
  *(QLabel **)(param_1 + 0x148) = pQVar14;
  if ((uVar29 >> 0x14 & 1) != 0) {
    uVar29 = uVar29 & 0xffefffff;
    QString::~QString(local_a0);
  }
  pQVar2 = *(QObject **)(param_1 + 0x148);
  local_res18 = (QVBoxLayout *)QString::fromAscii_helper("fusionDotPitchLabel",0x13);
  QObject::setObjectName(pQVar2,(QString *)&local_res18);
  QString::~QString((QString *)&local_res18);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0x148),0x5c,true);
  local_d8 = (QLabel *)thunk_FUN_140bd99d4(0x68);
  pQVar14 = pQVar23;
  if (local_d8 != (QLabel *)0x0) {
    uVar9 = *(undefined8 *)(param_1 + 0x138);
    local_c8[0] = QString::fromAscii_helper("",0);
    local_res18 = (QVBoxLayout *)(CONCAT44(local_res18._4_4_,uVar29) | 0x200000);
    uVar11 = QObject::tr((char *)&local_b8,&DAT_141080990,0);
    local_res18 = (QVBoxLayout *)(CONCAT44(local_res18._4_4_,uVar29) | 0x600000);
    uVar12 = QObject::tr((char *)local_a0,&DAT_141080980,0);
    local_res18 = (QVBoxLayout *)(CONCAT44(local_res18._4_4_,uVar29) | 0xe00000);
    pQVar14 = (QLabel *)
              thunk_FUN_1406d0ed0(local_d8,uVar12,uVar11,local_c8,uVar9,CONCAT44(uVar31,0x15e),1,
                                  uVar32 & 0xffffffff00000000,
                                  (ulonglong)pcVar33 & 0xffffffff00000000,1);
    pQVar10 = local_a8;
    uVar29 = uVar29 | 0xe00000;
  }
  *(QLabel **)(param_1 + 0x150) = pQVar14;
  if ((uVar29 >> 0x17 & 1) != 0) {
    uVar29 = uVar29 & 0xff7fffff;
    QString::~QString(local_a0);
  }
  if ((uVar29 >> 0x16 & 1) != 0) {
    uVar29 = uVar29 & 0xffbfffff;
    QString::~QString((QString *)&local_b8);
  }
  if ((uVar29 >> 0x15 & 1) != 0) {
    uVar29 = uVar29 & 0xffdfffff;
    QString::~QString((QString *)local_c8);
  }
  QWidget::setFixedSize(*(QWidget **)(param_1 + 0x150),0xe,0xe);
  pQVar2 = *(QObject **)(param_1 + 0x150);
  local_res18 = (QVBoxLayout *)QString::fromAscii_helper("objectHelpButton",0x10);
  QObject::setObjectName(pQVar2,(QString *)&local_res18);
  QString::~QString((QString *)&local_res18);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0x150),0x5c,true);
  pQVar21 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar15 = (QHBoxLayout *)pQVar23;
  local_res18 = (QVBoxLayout *)pQVar21;
  if (pQVar21 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar21,*(QWidget **)(param_1 + 0x138));
    *(undefined ***)pQVar21 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar21 + 0x10) = QHBoxLayout::vftable;
    pQVar15 = pQVar21;
  }
  QBoxLayout::setSpacing((QBoxLayout *)pQVar15,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar15,*(undefined8 *)(param_1 + 0x148));
  QBoxLayout::addSpacing((QBoxLayout *)pQVar15,10);
  QBoxLayout::addWidget((QBoxLayout *)pQVar15);
  QBoxLayout::addStretch((QBoxLayout *)pQVar15,0);
  QBoxLayout::addLayout((QBoxLayout *)pQVar27,(QLayout *)pQVar15,0);
  local_b8 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar14 = pQVar23;
  if (local_b8 != (QLabel *)0x0) {
    uVar9 = *(undefined8 *)(param_1 + 0x138);
    uVar11 = QObject::tr((char *)&local_d8,&DAT_141080a84,0);
    local_res18 = (QVBoxLayout *)(CONCAT44(local_res18._4_4_,uVar29) | 0x1000000);
    pQVar14 = (QLabel *)thunk_FUN_1406c6860(local_b8,uVar11,uVar9);
    uVar29 = uVar29 | 0x1000000;
  }
  *(QLabel **)(param_1 + 0x140) = pQVar14;
  if ((uVar29 >> 0x18 & 1) != 0) {
    uVar29 = uVar29 & 0xfeffffff;
    QString::~QString((QString *)&local_d8);
  }
  FUN_14000b802(*(undefined8 *)(param_1 + 0x140));
  QWidget::setEnabled(*(QWidget **)(param_1 + 0x140),false);
  QBoxLayout::addWidget((QBoxLayout *)pQVar27,*(undefined8 *)(param_1 + 0x140),0);
  pQVar4 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar27 = (QVBoxLayout *)pQVar23;
  local_res18 = pQVar4;
  if (pQVar4 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar4,pQVar24);
    *(undefined ***)pQVar4 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar4 + 0x10) = QVBoxLayout::vftable;
    pQVar27 = pQVar4;
  }
  QLayout::setContentsMargins((QLayout *)pQVar27,0,8,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar27,0x14);
  QBoxLayout::addLayout((QBoxLayout *)pQVar27,(QLayout *)local_98,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar27,*(undefined8 *)(param_1 + 0x80),0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar27,*(undefined8 *)(param_1 + 0x88),0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar27,*(undefined8 *)(param_1 + 0xb8),0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar27,*(undefined8 *)(param_1 + 0x188),0,0);
  QBoxLayout::addLayout((QBoxLayout *)pQVar27,(QLayout *)pQVar10,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar27,*(undefined8 *)(param_1 + 0x128),0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar27,*(undefined8 *)(param_1 + 0x138),0,0);
  pQVar22 = (QFrame *)thunk_FUN_140bd99d4(0x30);
  pQVar26 = (QFrame *)pQVar23;
  local_res18 = (QVBoxLayout *)pQVar22;
  if (pQVar22 != (QFrame *)0x0) {
    QFrame::QFrame(pQVar22,param_1);
    *(undefined ***)pQVar22 = QFrame::vftable;
    *(undefined ***)(pQVar22 + 0x10) = QFrame::vftable;
    pQVar26 = pQVar22;
  }
  local_res18 = (QVBoxLayout *)QString::fromAscii_helper("editPageSplitLine",0x11);
  QObject::setObjectName((QObject *)pQVar26,(QString *)&local_res18);
  QString::~QString((QString *)&local_res18);
  QFrame::setFrameShape(pQVar26,4);
  QWidget::setFixedHeight((QWidget *)pQVar26,1);
  pQVar7 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar14 = pQVar23;
  local_d8 = pQVar7;
  if (pQVar7 != (QLabel *)0x0) {
    uVar9 = QObject::tr((char *)&local_b8,&DAT_14107c4e0,0);
    local_res18 = (QVBoxLayout *)(CONCAT44(local_res18._4_4_,uVar29) | 0x2000000);
    QLabel::QLabel(pQVar7,uVar9,param_1,0);
    *(undefined ***)pQVar7 = QLabel::vftable;
    *(undefined ***)(pQVar7 + 0x10) = QLabel::vftable;
    pQVar14 = pQVar7;
    uVar29 = 0x2000000;
  }
  *(QLabel **)(param_1 + 0x130) = pQVar14;
  if ((uVar29 >> 0x19 & 1) != 0) {
    QString::~QString((QString *)&local_b8);
  }
  pQVar2 = *(QObject **)(param_1 + 0x130);
  local_res18 = (QVBoxLayout *)QString::fromAscii_helper("editPageInstructionLabel",0x18);
  QObject::setObjectName(pQVar2,(QString *)&local_res18);
  QString::~QString((QString *)&local_res18);
  QWidget::setContentsMargins(pQVar24,0x10,0,0x10,0x10);
  QBoxLayout::addLayout(*(QBoxLayout **)(param_1 + 400),(QLayout *)local_90,0);
  QBoxLayout::addSpacing(*(QBoxLayout **)(param_1 + 400),0xc);
  QBoxLayout::setSpacing(*(QBoxLayout **)(param_1 + 400),0);
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 400),*(undefined8 *)(param_1 + 0x48));
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 400),pQVar24);
  QBoxLayout::addSpacing(*(QBoxLayout **)(param_1 + 400),0x18);
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 400),pQVar26);
  QBoxLayout::addSpacing(*(QBoxLayout **)(param_1 + 400),0x14);
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 400),*(undefined8 *)(param_1 + 0x130));
  QBoxLayout::addSpacing(*(QBoxLayout **)(param_1 + 400),0xc);
  pQVar4 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar27 = (QVBoxLayout *)pQVar23;
  local_res18 = pQVar4;
  if (pQVar4 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar4);
    *(undefined ***)pQVar4 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar4 + 0x10) = QVBoxLayout::vftable;
    pQVar27 = pQVar4;
  }
  *(QVBoxLayout **)(param_1 + 0x198) = pQVar27;
  QLayout::setContentsMargins((QLayout *)pQVar27,0,0,0,0);
  QBoxLayout::addLayout(*(QBoxLayout **)(param_1 + 400),*(QLayout **)(param_1 + 0x198),0);
  local_res18 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x30);
  if (local_res18 != (QVBoxLayout *)0x0) {
    pQVar23 = (QLabel *)thunk_FUN_140695fd0(local_res18,param_1);
  }
  *(QLabel **)(param_1 + 0x158) = pQVar23;
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 0x198),pQVar23,0,0);
  local_res18 = (QVBoxLayout *)QString::fromAscii_helper("pointcloudfusionpage",0x14);
  thunk_FUN_1406487e0(local_88,&local_res18);
  QString::~QString((QString *)&local_res18);
  plVar3 = *(longlong **)(param_1 + 0x158);
  pcVar33 = *(code **)(*plVar3 + 0x1b0);
  QUrl::fromUserInput((QString *)&local_res8);
  (*pcVar33)(plVar3);
  QUrl::~QUrl((QUrl *)&local_res8);
  QBoxLayout::addStretch(*(QBoxLayout **)(param_1 + 400),0);
  QString::~QString(local_88);
  QString::~QString(local_80);
  return;
}


