// 14049e2b0  FUN_14049e2b0  size=0x256f  calls ~QUrl (site 1404a07db)

void FUN_14049e2b0(QScrollArea *param_1)

{
  longlong *plVar1;
  QVBoxLayout *pQVar2;
  QWidget *pQVar3;
  QScrollBar *pQVar4;
  QLabel *pQVar5;
  QLabel *pQVar6;
  undefined8 uVar7;
  QHBoxLayout *pQVar8;
  QRadioButton *pQVar9;
  QString *pQVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  QLabel *pQVar13;
  QHBoxLayout *pQVar14;
  QHBoxLayout *pQVar15;
  QFrame *pQVar16;
  longlong lVar17;
  QPushButton *pQVar18;
  QObject *pQVar19;
  QFrame *pQVar20;
  QLabel *pQVar21;
  QWidget *pQVar22;
  QPushButton *pQVar23;
  QVBoxLayout *pQVar24;
  QRadioButton *pQVar25;
  uint uVar26;
  undefined8 local_res8;
  QLabel *local_res10;
  QFrame *local_res18;
  QHBoxLayout *local_res20;
  undefined4 uVar28;
  undefined8 uVar27;
  uint in_stack_ffffffffffffff4c;
  ulonglong uVar29;
  code *pcVar30;
  QString local_98 [8];
  QString local_90 [8];
  QLabel *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  QLabel *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  pQVar21 = (QLabel *)0x0;
  local_res8 = (QHBoxLayout *)((ulonglong)local_res8 & 0xffffffff00000000);
  pQVar2 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar24 = (QVBoxLayout *)pQVar21;
  local_res8 = (QHBoxLayout *)pQVar2;
  if (pQVar2 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar2);
    *(undefined ***)pQVar2 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar2 + 0x10) = QVBoxLayout::vftable;
    pQVar24 = pQVar2;
  }
  *(QVBoxLayout **)(param_1 + 0x148) = pQVar24;
  QLayout::setContentsMargins((QLayout *)pQVar24,0x10,0x10,0x10,0x10);
  QScrollArea::setWidgetResizable(param_1,true);
  pQVar3 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar22 = (QWidget *)pQVar21;
  local_res8 = (QHBoxLayout *)pQVar3;
  if (pQVar3 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar3,param_1,0);
    *(undefined ***)pQVar3 = QWidget::vftable;
    *(undefined ***)(pQVar3 + 0x10) = QWidget::vftable;
    pQVar22 = pQVar3;
  }
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("scanPanelContentWidget",0x16);
  QObject::setObjectName((QObject *)pQVar22,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QScrollArea::setWidget(param_1,pQVar22);
  QAbstractScrollArea::setHorizontalScrollBarPolicy((QAbstractScrollArea *)param_1,1);
  QWidget::setLayout(pQVar22,*(QLayout **)(param_1 + 0x148));
  local_78 = (QLabel *)rangeChanged_exref;
  uStack_70 = 0;
  pQVar4 = QAbstractScrollArea::verticalScrollBar((QAbstractScrollArea *)param_1);
  pcVar30 = staticMetaObject_exref;
  local_88 = local_78;
  uStack_80 = uStack_70;
  uStack_7c = uStack_6c;
  local_res10 = (QLabel *)thunk_FUN_140bd99d4(0x18);
  pQVar13 = pQVar21;
  if (local_res10 != (QLabel *)0x0) {
    *(undefined4 *)local_res10 = 1;
    *(code **)(local_res10 + 8) = FUN_14049c920;
    *(QScrollArea **)(local_res10 + 0x10) = param_1;
    pQVar13 = local_res10;
  }
  uVar29 = 0;
  QObject::connectImpl
            ((QObject *)&local_res8,(void **)pQVar4,(QObject *)&local_88,(void **)param_1,
             (QSlotObjectBase *)0x0,(ConnectionType)pQVar13,
             (int *)((ulonglong)in_stack_ffffffffffffff4c << 0x20),(QMetaObject *)0x0);
  uVar28 = (undefined4)((ulonglong)pQVar13 >> 0x20);
  uVar26 = 0x800000;
  QMetaObject::Connection::~Connection((Connection *)&local_res8);
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("editPage",8);
  QObject::setObjectName((QObject *)param_1,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar5 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar13 = pQVar21;
  local_res8 = (QHBoxLayout *)pQVar5;
  if (pQVar5 != (QLabel *)0x0) {
    QLabel::QLabel(pQVar5,param_1,0);
    *(undefined ***)pQVar5 = QLabel::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QLabel::vftable;
    pQVar13 = pQVar5;
  }
  QWidget::setFixedSize((QWidget *)pQVar13,0x20,0x20);
  local_res8 = (QHBoxLayout *)
               QString::fromAscii_helper
                         ("QLabel{ background-color: transparent; border-image: url(:res/svg/function/icon_function_net_normal.svg);}"
                          ,0x6a);
  QWidget::setStyleSheet((QWidget *)pQVar13,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar6 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar5 = pQVar21;
  local_res18 = (QFrame *)pQVar6;
  if (pQVar6 != (QLabel *)0x0) {
    uVar7 = QObject::tr((char *)&local_res10,&DAT_14105c2b0,0);
    uVar26 = 0x800001;
    local_res8 = (QHBoxLayout *)CONCAT44(local_res8._4_4_,0x800001);
    QLabel::QLabel(pQVar6,uVar7,param_1,0);
    *(undefined ***)pQVar6 = QLabel::vftable;
    *(undefined ***)(pQVar6 + 0x10) = QLabel::vftable;
    pQVar5 = pQVar6;
  }
  *(QLabel **)(param_1 + 0x30) = pQVar5;
  if ((char)uVar26 != '\0') {
    uVar26 = uVar26 & 0xfffffffe;
    QString::~QString((QString *)&local_res10);
  }
  pQVar19 = *(QObject **)(param_1 + 0x30);
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("editPageTitleLabel",0x12);
  QObject::setObjectName(pQVar19,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar8 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  if (pQVar8 == (QHBoxLayout *)0x0) {
    local_res20 = (QHBoxLayout *)0x0;
    pQVar14 = (QHBoxLayout *)pQVar21;
    local_res8 = pQVar8;
  }
  else {
    local_res8 = pQVar8;
    local_res20 = pQVar8;
    QHBoxLayout::QHBoxLayout(pQVar8);
    *(undefined ***)pQVar8 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar8 + 0x10) = QHBoxLayout::vftable;
    pQVar14 = pQVar8;
  }
  QBoxLayout::addWidget((QBoxLayout *)pQVar14,pQVar13);
  QBoxLayout::addWidget((QBoxLayout *)pQVar14);
  QBoxLayout::addStretch((QBoxLayout *)pQVar14,0);
  pQVar3 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar22 = (QWidget *)pQVar21;
  local_res8 = (QHBoxLayout *)pQVar3;
  if (pQVar3 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar3,param_1);
    *(undefined ***)pQVar3 = QWidget::vftable;
    *(undefined ***)(pQVar3 + 0x10) = QWidget::vftable;
    pQVar22 = pQVar3;
  }
  *(QWidget **)(param_1 + 0xb8) = pQVar22;
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("pointCloudFusionBottomWidget",0x1c);
  QObject::setObjectName((QObject *)pQVar22,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar3 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar22 = (QWidget *)pQVar21;
  local_res8 = (QHBoxLayout *)pQVar3;
  if (pQVar3 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar3,*(undefined8 *)(param_1 + 0xb8));
    *(undefined ***)pQVar3 = QWidget::vftable;
    *(undefined ***)(pQVar3 + 0x10) = QWidget::vftable;
    pQVar22 = pQVar3;
  }
  *(QWidget **)(param_1 + 200) = pQVar22;
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("pointCloudFusionBottomWidget",0x1c);
  QObject::setObjectName((QObject *)pQVar22,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar2 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar24 = (QVBoxLayout *)pQVar21;
  local_res8 = (QHBoxLayout *)pQVar2;
  if (pQVar2 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar2,*(QWidget **)(param_1 + 200));
    *(undefined ***)pQVar2 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar2 + 0x10) = QVBoxLayout::vftable;
    pQVar24 = pQVar2;
  }
  QLayout::setContentsMargins((QLayout *)pQVar24,0,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar24,8);
  pQVar9 = (QRadioButton *)thunk_FUN_140bd99d4(0x30);
  pQVar25 = (QRadioButton *)pQVar21;
  local_res18 = (QFrame *)pQVar9;
  if (pQVar9 != (QRadioButton *)0x0) {
    pQVar22 = *(QWidget **)(param_1 + 200);
    pQVar10 = (QString *)QObject::tr((char *)&local_res10,&DAT_14107f6f0,0);
    local_res8 = (QHBoxLayout *)(CONCAT44(local_res8._4_4_,uVar26) | 2);
    QRadioButton::QRadioButton(pQVar9,pQVar10,pQVar22);
    *(undefined ***)pQVar9 = QRadioButton::vftable;
    *(undefined ***)(pQVar9 + 0x10) = QRadioButton::vftable;
    pQVar25 = pQVar9;
    uVar26 = uVar26 | 2;
  }
  *(QRadioButton **)(param_1 + 0xd0) = pQVar25;
  if ((uVar26 & 2) != 0) {
    uVar26 = uVar26 & 0xfffffffd;
    QString::~QString((QString *)&local_res10);
  }
  QAbstractButton::setChecked(*(QAbstractButton **)(param_1 + 0xd0),true);
  pQVar5 = (QLabel *)thunk_FUN_140bd99d4(0x68);
  pQVar13 = pQVar21;
  local_88 = pQVar5;
  if (pQVar5 != (QLabel *)0x0) {
    uVar7 = *(undefined8 *)(param_1 + 200);
    local_res10 = (QLabel *)QString::fromAscii_helper("",0);
    local_res8 = (QHBoxLayout *)(CONCAT44(local_res8._4_4_,uVar26) | 4);
    uVar11 = QObject::tr((char *)local_90,&DAT_14107f700,0);
    local_res8 = (QHBoxLayout *)(CONCAT44(local_res8._4_4_,uVar26) | 0xc);
    uVar12 = QObject::tr((char *)&local_res18,&DAT_14105c2b0,0);
    local_res8 = (QHBoxLayout *)(CONCAT44(local_res8._4_4_,uVar26) | 0x1c);
    pcVar30 = (code *)((ulonglong)pcVar30 & 0xffffffff00000000);
    uVar29 = uVar29 & 0xffffffff00000000;
    uVar27 = CONCAT44(uVar28,0x15e);
    pQVar13 = (QLabel *)
              thunk_FUN_1406d0ed0(pQVar5,uVar12,uVar11,&local_res10,uVar7,uVar27,1,uVar29,pcVar30,1)
    ;
    uVar28 = (undefined4)((ulonglong)uVar27 >> 0x20);
    uVar26 = uVar26 | 0x1c;
  }
  *(QLabel **)(param_1 + 0xd8) = pQVar13;
  if ((uVar26 & 0x10) != 0) {
    uVar26 = uVar26 & 0xffffffef;
    QString::~QString((QString *)&local_res18);
  }
  if ((uVar26 & 8) != 0) {
    uVar26 = uVar26 & 0xfffffff7;
    QString::~QString(local_90);
  }
  if ((uVar26 & 4) != 0) {
    uVar26 = uVar26 & 0xfffffffb;
    QString::~QString((QString *)&local_res10);
  }
  QWidget::setFixedSize(*(QWidget **)(param_1 + 0xd8),0xe,0xe);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0xd8),0x5c,true);
  pQVar19 = *(QObject **)(param_1 + 0xd8);
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("objectHelpButton",0x10);
  QObject::setObjectName(pQVar19,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar14 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar8 = (QHBoxLayout *)pQVar21;
  local_res8 = pQVar14;
  if (pQVar14 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar14);
    *(undefined ***)pQVar14 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar14 + 0x10) = QHBoxLayout::vftable;
    pQVar8 = pQVar14;
  }
  QLayout::setContentsMargins((QLayout *)pQVar8,0,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar8,4);
  QBoxLayout::addWidget((QBoxLayout *)pQVar8,*(undefined8 *)(param_1 + 0xd0));
  QBoxLayout::addWidget((QBoxLayout *)pQVar8);
  QBoxLayout::addStretch((QBoxLayout *)pQVar8,0);
  pQVar9 = (QRadioButton *)thunk_FUN_140bd99d4(0x30);
  pQVar25 = (QRadioButton *)pQVar21;
  local_res18 = (QFrame *)pQVar9;
  if (pQVar9 != (QRadioButton *)0x0) {
    pQVar22 = *(QWidget **)(param_1 + 200);
    pQVar10 = (QString *)QObject::tr((char *)&local_res10,&DAT_14107f730,0);
    local_res8 = (QHBoxLayout *)(CONCAT44(local_res8._4_4_,uVar26) | 0x20);
    QRadioButton::QRadioButton(pQVar9,pQVar10,pQVar22);
    *(undefined ***)pQVar9 = QRadioButton::vftable;
    *(undefined ***)(pQVar9 + 0x10) = QRadioButton::vftable;
    pQVar25 = pQVar9;
    uVar26 = uVar26 | 0x20;
  }
  *(QRadioButton **)(param_1 + 0xe0) = pQVar25;
  if ((uVar26 & 0x20) != 0) {
    uVar26 = uVar26 & 0xffffffdf;
    QString::~QString((QString *)&local_res10);
  }
  QAbstractButton::setChecked(*(QAbstractButton **)(param_1 + 0xe0),false);
  local_res18 = (QFrame *)thunk_FUN_140bd99d4(0x68);
  pQVar13 = pQVar21;
  if (local_res18 != (QFrame *)0x0) {
    uVar7 = *(undefined8 *)(param_1 + 200);
    local_res10 = (QLabel *)QString::fromAscii_helper("",0);
    local_res8 = (QHBoxLayout *)(CONCAT44(local_res8._4_4_,uVar26) | 0x40);
    uVar11 = QObject::tr((char *)&local_88,&DAT_14107f748,0);
    local_res8 = (QHBoxLayout *)(CONCAT44(local_res8._4_4_,uVar26) | 0xc0);
    uVar12 = QObject::tr((char *)local_90,&DAT_14105c2b0,0);
    local_res8 = (QHBoxLayout *)(CONCAT44(local_res8._4_4_,uVar26) | 0x1c0);
    pcVar30 = (code *)((ulonglong)pcVar30 & 0xffffffff00000000);
    uVar29 = uVar29 & 0xffffffff00000000;
    uVar27 = CONCAT44(uVar28,0x15e);
    pQVar13 = (QLabel *)
              thunk_FUN_1406d0ed0(local_res18,uVar12,uVar11,&local_res10,uVar7,uVar27,1,uVar29,
                                  pcVar30,1);
    uVar28 = (undefined4)((ulonglong)uVar27 >> 0x20);
    uVar26 = uVar26 | 0x1c0;
  }
  *(QLabel **)(param_1 + 0xe8) = pQVar13;
  if ((uVar26 >> 8 & 1) != 0) {
    uVar26 = uVar26 & 0xfffffeff;
    QString::~QString(local_90);
  }
  if ((char)uVar26 < '\0') {
    uVar26 = uVar26 & 0xffffff7f;
    QString::~QString((QString *)&local_88);
  }
  if ((uVar26 & 0x40) != 0) {
    uVar26 = uVar26 & 0xffffffbf;
    QString::~QString((QString *)&local_res10);
  }
  QWidget::setFixedSize(*(QWidget **)(param_1 + 0xe8),0xe,0xe);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0xe8),0x5c,true);
  pQVar19 = *(QObject **)(param_1 + 0xe8);
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("objectHelpButton",0x10);
  QObject::setObjectName(pQVar19,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar15 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar14 = (QHBoxLayout *)pQVar21;
  local_res8 = pQVar15;
  if (pQVar15 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar15);
    *(undefined ***)pQVar15 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar15 + 0x10) = QHBoxLayout::vftable;
    pQVar14 = pQVar15;
  }
  QLayout::setContentsMargins((QLayout *)pQVar14,0,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar14,4);
  QBoxLayout::addWidget((QBoxLayout *)pQVar14,*(undefined8 *)(param_1 + 0xe0));
  QBoxLayout::addWidget((QBoxLayout *)pQVar14);
  QBoxLayout::addStretch((QBoxLayout *)pQVar14,0);
  QBoxLayout::addLayout((QBoxLayout *)pQVar24,(QLayout *)pQVar8,0);
  QBoxLayout::addLayout((QBoxLayout *)pQVar24,(QLayout *)pQVar14,0);
  pQVar3 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar22 = (QWidget *)pQVar21;
  local_res8 = (QHBoxLayout *)pQVar3;
  if (pQVar3 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar3,*(undefined8 *)(param_1 + 0xb8));
    *(undefined ***)pQVar3 = QWidget::vftable;
    *(undefined ***)(pQVar3 + 0x10) = QWidget::vftable;
    pQVar22 = pQVar3;
  }
  *(QWidget **)(param_1 + 0xc0) = pQVar22;
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("pointCloudFusionBottomWidget",0x1c);
  QObject::setObjectName((QObject *)pQVar22,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar16 = (QFrame *)thunk_FUN_140bd99d4(0x30);
  local_res8 = (QHBoxLayout *)pQVar16;
  if (pQVar16 == (QFrame *)0x0) {
    local_res18 = (QFrame *)0x0;
    pQVar16 = (QFrame *)pQVar21;
  }
  else {
    local_res18 = pQVar16;
    QFrame::QFrame(pQVar16,*(undefined8 *)(param_1 + 0xb8));
    *(undefined ***)pQVar16 = QFrame::vftable;
    *(undefined ***)(pQVar16 + 0x10) = QFrame::vftable;
  }
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("editPageSplitLine",0x11);
  QObject::setObjectName((QObject *)pQVar16,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QFrame::setFrameShape(pQVar16,4);
  QWidget::setFixedHeight((QWidget *)pQVar16,1);
  pQVar3 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar22 = (QWidget *)pQVar21;
  local_res8 = (QHBoxLayout *)pQVar3;
  if (pQVar3 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar3,*(undefined8 *)(param_1 + 0xc0));
    *(undefined ***)pQVar3 = QWidget::vftable;
    *(undefined ***)(pQVar3 + 0x10) = QWidget::vftable;
    pQVar22 = pQVar3;
  }
  *(QWidget **)(param_1 + 0xf0) = pQVar22;
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("meshingOptimizeWidget",0x15);
  QObject::setObjectName((QObject *)pQVar22,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar5 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar13 = pQVar21;
  local_88 = pQVar5;
  if (pQVar5 != (QLabel *)0x0) {
    uVar7 = QObject::tr((char *)&local_res10,&DAT_14107f788,0);
    local_res8 = (QHBoxLayout *)(CONCAT44(local_res8._4_4_,uVar26) | 0x200);
    QLabel::QLabel(pQVar5,uVar7);
    *(undefined ***)pQVar5 = QLabel::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QLabel::vftable;
    pQVar13 = pQVar5;
    uVar26 = uVar26 | 0x200;
  }
  *(QLabel **)(param_1 + 0xf8) = pQVar13;
  if ((uVar26 >> 9 & 1) != 0) {
    uVar26 = uVar26 & 0xfffffdff;
    QString::~QString((QString *)&local_res10);
  }
  pQVar19 = *(QObject **)(param_1 + 0xf8);
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("fusionDotPitchLabel",0x13);
  QObject::setObjectName(pQVar19,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  lVar17 = thunk_FUN_140bd99d4(0x68);
  pQVar13 = pQVar21;
  local_78 = (QLabel *)lVar17;
  if (lVar17 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0xf0);
    local_res10 = (QLabel *)QString::fromAscii_helper("",0);
    local_res8 = (QHBoxLayout *)(CONCAT44(local_res8._4_4_,uVar26) | 0x400);
    uVar11 = QObject::tr((char *)local_90,&DAT_14107f798,0);
    local_res8 = (QHBoxLayout *)(CONCAT44(local_res8._4_4_,uVar26) | 0xc00);
    uVar12 = QObject::tr((char *)&local_88,&DAT_14107f788,0);
    local_res8 = (QHBoxLayout *)(CONCAT44(local_res8._4_4_,uVar26) | 0x1c00);
    pQVar13 = (QLabel *)
              thunk_FUN_1406d0ed0(lVar17,uVar12,uVar11,&local_res10,uVar7,CONCAT44(uVar28,0x15e),1,
                                  uVar29 & 0xffffffff00000000,
                                  (ulonglong)pcVar30 & 0xffffffff00000000,1);
    uVar26 = uVar26 | 0x1c00;
  }
  *(QLabel **)(param_1 + 0x100) = pQVar13;
  if ((uVar26 >> 0xc & 1) != 0) {
    uVar26 = uVar26 & 0xffffefff;
    QString::~QString((QString *)&local_88);
  }
  if ((uVar26 >> 0xb & 1) != 0) {
    uVar26 = uVar26 & 0xfffff7ff;
    QString::~QString(local_90);
  }
  if ((uVar26 >> 10 & 1) != 0) {
    uVar26 = uVar26 & 0xfffffbff;
    QString::~QString((QString *)&local_res10);
  }
  QWidget::setFixedSize(*(QWidget **)(param_1 + 0x100),0xe,0xe);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0x100),0x5c,true);
  pQVar19 = *(QObject **)(param_1 + 0x100);
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("objectHelpButton",0x10);
  QObject::setObjectName(pQVar19,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar14 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar8 = (QHBoxLayout *)pQVar21;
  local_res8 = pQVar14;
  if (pQVar14 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar14);
    *(undefined ***)pQVar14 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar14 + 0x10) = QHBoxLayout::vftable;
    pQVar8 = pQVar14;
  }
  QLayout::setContentsMargins((QLayout *)pQVar8,0,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar8,4);
  QBoxLayout::addWidget((QBoxLayout *)pQVar8,*(undefined8 *)(param_1 + 0xf8));
  QBoxLayout::addWidget((QBoxLayout *)pQVar8);
  QBoxLayout::addStretch((QBoxLayout *)pQVar8,0);
  pQVar9 = (QRadioButton *)thunk_FUN_140bd99d4(0x30);
  pQVar25 = (QRadioButton *)pQVar21;
  local_78 = (QLabel *)pQVar9;
  if (pQVar9 != (QRadioButton *)0x0) {
    pQVar22 = *(QWidget **)(param_1 + 0xf0);
    pQVar10 = (QString *)QObject::tr((char *)&local_res10,&DAT_14107f7b0,0);
    local_res8 = (QHBoxLayout *)(CONCAT44(local_res8._4_4_,uVar26) | 0x2000);
    QRadioButton::QRadioButton(pQVar9,pQVar10,pQVar22);
    *(undefined ***)pQVar9 = QRadioButton::vftable;
    *(undefined ***)(pQVar9 + 0x10) = QRadioButton::vftable;
    pQVar25 = pQVar9;
    uVar26 = uVar26 | 0x2000;
  }
  *(QRadioButton **)(param_1 + 0x108) = pQVar25;
  if ((uVar26 >> 0xd & 1) != 0) {
    uVar26 = uVar26 & 0xffffdfff;
    QString::~QString((QString *)&local_res10);
  }
  pQVar9 = (QRadioButton *)thunk_FUN_140bd99d4(0x30);
  pQVar25 = (QRadioButton *)pQVar21;
  local_78 = (QLabel *)pQVar9;
  if (pQVar9 != (QRadioButton *)0x0) {
    pQVar22 = *(QWidget **)(param_1 + 0xf0);
    pQVar10 = (QString *)QObject::tr((char *)&local_res10,&DAT_14107f7b4,0);
    local_res8 = (QHBoxLayout *)(CONCAT44(local_res8._4_4_,uVar26) | 0x4000);
    QRadioButton::QRadioButton(pQVar9,pQVar10,pQVar22);
    *(undefined ***)pQVar9 = QRadioButton::vftable;
    *(undefined ***)(pQVar9 + 0x10) = QRadioButton::vftable;
    pQVar25 = pQVar9;
    uVar26 = uVar26 | 0x4000;
  }
  *(QRadioButton **)(param_1 + 0x110) = pQVar25;
  if ((uVar26 >> 0xe & 1) != 0) {
    uVar26 = uVar26 & 0xffffbfff;
    QString::~QString((QString *)&local_res10);
  }
  QAbstractButton::setChecked(*(QAbstractButton **)(param_1 + 0x110),true);
  pQVar9 = (QRadioButton *)thunk_FUN_140bd99d4(0x30);
  pQVar25 = (QRadioButton *)pQVar21;
  local_78 = (QLabel *)pQVar9;
  if (pQVar9 != (QRadioButton *)0x0) {
    pQVar22 = *(QWidget **)(param_1 + 0xf0);
    pQVar10 = (QString *)QObject::tr((char *)&local_res10,&DAT_14107f7b8,0);
    local_res8 = (QHBoxLayout *)(CONCAT44(local_res8._4_4_,uVar26) | 0x8000);
    QRadioButton::QRadioButton(pQVar9,pQVar10,pQVar22);
    *(undefined ***)pQVar9 = QRadioButton::vftable;
    *(undefined ***)(pQVar9 + 0x10) = QRadioButton::vftable;
    pQVar25 = pQVar9;
    uVar26 = uVar26 | 0x8000;
  }
  *(QRadioButton **)(param_1 + 0x118) = pQVar25;
  if ((uVar26 >> 0xf & 1) != 0) {
    uVar26 = uVar26 & 0xffff7fff;
    QString::~QString((QString *)&local_res10);
  }
  pQVar2 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar24 = (QVBoxLayout *)pQVar21;
  local_res8 = (QHBoxLayout *)pQVar2;
  if (pQVar2 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar2,*(QWidget **)(param_1 + 0xf0));
    *(undefined ***)pQVar2 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar2 + 0x10) = QVBoxLayout::vftable;
    pQVar24 = pQVar2;
  }
  QLayout::setContentsMargins((QLayout *)pQVar24,0,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar24,0);
  QBoxLayout::addLayout((QBoxLayout *)pQVar24,(QLayout *)pQVar8,0);
  QBoxLayout::addSpacing((QBoxLayout *)pQVar24,8);
  QBoxLayout::addWidget((QBoxLayout *)pQVar24,*(undefined8 *)(param_1 + 0x108),0,0);
  QBoxLayout::addSpacing((QBoxLayout *)pQVar24,8);
  QBoxLayout::addWidget((QBoxLayout *)pQVar24,*(undefined8 *)(param_1 + 0x110),0,0);
  QBoxLayout::addSpacing((QBoxLayout *)pQVar24,8);
  QBoxLayout::addWidget((QBoxLayout *)pQVar24,*(undefined8 *)(param_1 + 0x118),0,0);
  pQVar3 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar22 = (QWidget *)pQVar21;
  local_res8 = (QHBoxLayout *)pQVar3;
  if (pQVar3 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar3,*(undefined8 *)(param_1 + 0xc0));
    *(undefined ***)pQVar3 = QWidget::vftable;
    *(undefined ***)(pQVar3 + 0x10) = QWidget::vftable;
    pQVar22 = pQVar3;
  }
  *(QWidget **)(param_1 + 0x38) = pQVar22;
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("meshingQualityWidget",0x14);
  QObject::setObjectName((QObject *)pQVar22,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x58))(*(longlong **)(param_1 + 0x38),0);
  pQVar5 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar13 = pQVar21;
  local_78 = pQVar5;
  if (pQVar5 != (QLabel *)0x0) {
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    uVar11 = QObject::tr((char *)&local_res10,&DAT_14107f7dc,0);
    local_res8 = (QHBoxLayout *)(CONCAT44(local_res8._4_4_,uVar26) | 0x10000);
    QLabel::QLabel(pQVar5,uVar11,uVar7,0);
    *(undefined ***)pQVar5 = QLabel::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QLabel::vftable;
    pQVar13 = pQVar5;
    uVar26 = uVar26 | 0x10000;
  }
  *(QLabel **)(param_1 + 0x40) = pQVar13;
  if ((uVar26 >> 0x10 & 1) != 0) {
    uVar26 = uVar26 & 0xfffeffff;
    QString::~QString((QString *)&local_res10);
  }
  pQVar19 = *(QObject **)(param_1 + 0x40);
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("fusionDotPitchLabel",0x13);
  QObject::setObjectName(pQVar19,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar5 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar13 = pQVar21;
  local_78 = pQVar5;
  if (pQVar5 != (QLabel *)0x0) {
    uVar7 = QObject::tr((char *)local_90,&DAT_14107f7e8,0);
    local_res8 = (QHBoxLayout *)(CONCAT44(local_res8._4_4_,uVar26) | 0x20000);
    uVar7 = thunk_FUN_14025fa90(&local_88,&DAT_141070c14,uVar7);
    local_res8 = (QHBoxLayout *)(CONCAT44(local_res8._4_4_,uVar26) | 0x60000);
    uVar7 = thunk_FUN_14025f9b0(&local_res10,uVar7,&DAT_14106a04c);
    local_res8 = (QHBoxLayout *)(CONCAT44(local_res8._4_4_,uVar26) | 0xe0000);
    QLabel::QLabel(pQVar5,uVar7,param_1,0);
    *(undefined ***)pQVar5 = QLabel::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QLabel::vftable;
    pQVar13 = pQVar5;
    uVar26 = uVar26 | 0xe0000;
  }
  *(QLabel **)(param_1 + 0x48) = pQVar13;
  if ((uVar26 >> 0x13 & 1) != 0) {
    uVar26 = uVar26 & 0xfff7ffff;
    QString::~QString((QString *)&local_res10);
  }
  if ((uVar26 >> 0x12 & 1) != 0) {
    uVar26 = uVar26 & 0xfffbffff;
    QString::~QString((QString *)&local_88);
  }
  if ((uVar26 >> 0x11 & 1) != 0) {
    uVar26 = uVar26 & 0xfffdffff;
    QString::~QString(local_90);
  }
  pQVar19 = *(QObject **)(param_1 + 0x48);
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("editMeshEdgeLengthLabel",0x17);
  QObject::setObjectName(pQVar19,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar5 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar13 = pQVar21;
  local_res8 = (QHBoxLayout *)pQVar5;
  if (pQVar5 != (QLabel *)0x0) {
    QLabel::QLabel(pQVar5,param_1);
    *(undefined ***)pQVar5 = QLabel::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QLabel::vftable;
    pQVar13 = pQVar5;
  }
  *(QLabel **)(param_1 + 0x50) = pQVar13;
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("editMeshEdgeLengthLabel",0x17);
  QObject::setObjectName((QObject *)pQVar13,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar5 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar13 = pQVar21;
  local_78 = pQVar5;
  if (pQVar5 != (QLabel *)0x0) {
    local_res10 = (QLabel *)QString::fromAscii_helper("mm)",3);
    local_res8 = (QHBoxLayout *)(CONCAT44(local_res8._4_4_,uVar26) | 0x100000);
    QLabel::QLabel(pQVar5,&local_res10,param_1,0);
    *(undefined ***)pQVar5 = QLabel::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QLabel::vftable;
    pQVar13 = pQVar5;
    uVar26 = uVar26 | 0x100000;
  }
  if ((uVar26 >> 0x14 & 1) != 0) {
    uVar26 = uVar26 & 0xffefffff;
    QString::~QString((QString *)&local_res10);
  }
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("editMeshEdgeLengthLabel",0x17);
  QObject::setObjectName((QObject *)pQVar13,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar18 = (QPushButton *)thunk_FUN_140bd99d4(0x30);
  pQVar23 = (QPushButton *)pQVar21;
  local_res8 = (QHBoxLayout *)pQVar18;
  if (pQVar18 != (QPushButton *)0x0) {
    QPushButton::QPushButton(pQVar18,*(QWidget **)(param_1 + 0x38));
    *(undefined ***)pQVar18 = QPushButton::vftable;
    *(undefined ***)(pQVar18 + 0x10) = QPushButton::vftable;
    pQVar23 = pQVar18;
  }
  *(QPushButton **)(param_1 + 0x58) = pQVar23;
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("fusionDotPitchResetBtn",0x16);
  QObject::setObjectName((QObject *)pQVar23,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar22 = *(QWidget **)(param_1 + 0x58);
  pQVar10 = (QString *)QObject::tr((char *)&local_res8,&DAT_14107e494,0);
  QWidget::setToolTip(pQVar22,pQVar10);
  QString::~QString((QString *)&local_res8);
  pQVar14 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar8 = (QHBoxLayout *)pQVar21;
  local_res8 = pQVar14;
  if (pQVar14 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar14);
    *(undefined ***)pQVar14 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar14 + 0x10) = QHBoxLayout::vftable;
    pQVar8 = pQVar14;
  }
  QLayout::setContentsMargins((QLayout *)pQVar8,0,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar8,2);
  QBoxLayout::addWidget((QBoxLayout *)pQVar8,*(undefined8 *)(param_1 + 0x40));
  QBoxLayout::addSpacing((QBoxLayout *)pQVar8,8);
  QBoxLayout::addWidget((QBoxLayout *)pQVar8,*(undefined8 *)(param_1 + 0x58));
  QBoxLayout::addSpacing((QBoxLayout *)pQVar8,8);
  QBoxLayout::addStretch((QBoxLayout *)pQVar8,0);
  pQVar15 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar14 = (QHBoxLayout *)pQVar21;
  local_res8 = pQVar15;
  if (pQVar15 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar15);
    *(undefined ***)pQVar15 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar15 + 0x10) = QHBoxLayout::vftable;
    pQVar14 = pQVar15;
  }
  QLayout::setContentsMargins((QLayout *)pQVar14,0,0,0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar14,*(undefined8 *)(param_1 + 0x48),0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar14,6);
  QBoxLayout::addWidget((QBoxLayout *)pQVar14,*(undefined8 *)(param_1 + 0x50),0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar14,2);
  QBoxLayout::addWidget((QBoxLayout *)pQVar14,pQVar13,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar14,2);
  QBoxLayout::addStretch((QBoxLayout *)pQVar14,0);
  local_res8 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x88);
  uVar29 = DAT_141058db8;
  pQVar13 = pQVar21;
  if (local_res8 != (QHBoxLayout *)0x0) {
    pQVar13 = (QLabel *)
              thunk_FUN_14039c090(local_res8,*(undefined8 *)(param_1 + 0x38),DAT_141072f50,
                                  DAT_141059158,DAT_141058db8,0);
  }
  *(QLabel **)(param_1 + 0x60) = pQVar13;
  thunk_FUN_14039d840(pQVar13,0xb4);
  thunk_FUN_14039d930(*(undefined8 *)(param_1 + 0x60),0x37);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0x60),0x5c,true);
  pQVar2 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar24 = (QVBoxLayout *)pQVar21;
  local_res8 = (QHBoxLayout *)pQVar2;
  if (pQVar2 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar2,*(QWidget **)(param_1 + 0x38));
    *(undefined ***)pQVar2 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar2 + 0x10) = QVBoxLayout::vftable;
    pQVar24 = pQVar2;
  }
  QLayout::setContentsMargins((QLayout *)pQVar24,0,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar24,0);
  QBoxLayout::addLayout((QBoxLayout *)pQVar24,(QLayout *)pQVar8,0);
  QBoxLayout::addSpacing((QBoxLayout *)pQVar24,8);
  QBoxLayout::addLayout((QBoxLayout *)pQVar24,(QLayout *)pQVar14,0);
  QBoxLayout::addSpacing((QBoxLayout *)pQVar24,0xc);
  QBoxLayout::addWidget((QBoxLayout *)pQVar24);
  pQVar14 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar8 = (QHBoxLayout *)pQVar21;
  local_res8 = pQVar14;
  if (pQVar14 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar14);
    *(undefined ***)pQVar14 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar14 + 0x10) = QHBoxLayout::vftable;
    pQVar8 = pQVar14;
  }
  QLayout::setContentsMargins((QLayout *)pQVar8,0,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar8,0);
  pQVar5 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar13 = pQVar21;
  local_res8 = (QHBoxLayout *)pQVar5;
  if (pQVar5 != (QLabel *)0x0) {
    QLabel::QLabel(pQVar5,*(undefined8 *)(param_1 + 0x38));
    *(undefined ***)pQVar5 = QLabel::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QLabel::vftable;
    pQVar13 = pQVar5;
  }
  *(QLabel **)(param_1 + 0x68) = pQVar13;
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("fillHolesLable",0xe);
  QObject::setObjectName((QObject *)pQVar13,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar13 = *(QLabel **)(param_1 + 0x68);
  pQVar10 = (QString *)QObject::tr((char *)&local_res10,&DAT_14107f830,0);
  QLabel::setText(pQVar13,pQVar10);
  QString::~QString((QString *)&local_res10);
  local_res8 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x38);
  pQVar19 = (QObject *)pQVar21;
  if (local_res8 != (QHBoxLayout *)0x0) {
    pQVar19 = (QObject *)thunk_FUN_14039ac20(local_res8,*(undefined8 *)(param_1 + 0xb8));
  }
  *(QObject **)(param_1 + 0x70) = pQVar19;
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("fillHolesSwitchBtn",0x12);
  QObject::setObjectName(pQVar19,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QWidget::setFixedSize(*(QWidget **)(param_1 + 0x70),0x1c,0x10);
  thunk_FUN_14039ace0(*(undefined8 *)(param_1 + 0x70),0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar8);
  QBoxLayout::addStretch((QBoxLayout *)pQVar8,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar8,*(undefined8 *)(param_1 + 0x70));
  pQVar3 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar22 = (QWidget *)pQVar21;
  local_res8 = (QHBoxLayout *)pQVar3;
  if (pQVar3 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar3,*(undefined8 *)(param_1 + 0xb8));
    *(undefined ***)pQVar3 = QWidget::vftable;
    *(undefined ***)(pQVar3 + 0x10) = QWidget::vftable;
    pQVar22 = pQVar3;
  }
  *(QWidget **)(param_1 + 0x78) = pQVar22;
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("fillHolesRatioWgt",0x11);
  QObject::setObjectName((QObject *)pQVar22,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0x58))();
  pQVar15 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar14 = (QHBoxLayout *)pQVar21;
  local_res8 = pQVar15;
  if (pQVar15 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar15);
    *(undefined ***)pQVar15 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar15 + 0x10) = QHBoxLayout::vftable;
    pQVar14 = pQVar15;
  }
  QLayout::setContentsMargins((QLayout *)pQVar14,0,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar14,0);
  pQVar5 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar13 = pQVar21;
  local_res8 = (QHBoxLayout *)pQVar5;
  if (pQVar5 != (QLabel *)0x0) {
    QLabel::QLabel(pQVar5,*(undefined8 *)(param_1 + 0x78));
    *(undefined ***)pQVar5 = QLabel::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QLabel::vftable;
    pQVar13 = pQVar5;
  }
  *(QLabel **)(param_1 + 0x80) = pQVar13;
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("fillHolesRatioLabel",0x13);
  QObject::setObjectName((QObject *)pQVar13,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar13 = *(QLabel **)(param_1 + 0x80);
  pQVar10 = (QString *)QObject::tr((char *)&local_res10,&DAT_14107ee68,0);
  QLabel::setText(pQVar13,pQVar10);
  QString::~QString((QString *)&local_res10);
  pQVar18 = (QPushButton *)thunk_FUN_140bd99d4(0x30);
  pQVar23 = (QPushButton *)pQVar21;
  local_res8 = (QHBoxLayout *)pQVar18;
  if (pQVar18 != (QPushButton *)0x0) {
    QPushButton::QPushButton(pQVar18,*(QWidget **)(param_1 + 0x78));
    *(undefined ***)pQVar18 = QPushButton::vftable;
    *(undefined ***)(pQVar18 + 0x10) = QPushButton::vftable;
    pQVar23 = pQVar18;
  }
  *(QPushButton **)(param_1 + 0x88) = pQVar23;
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("fillHolesRatioResetBtn",0x16);
  QObject::setObjectName((QObject *)pQVar23,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar22 = *(QWidget **)(param_1 + 0x88);
  pQVar10 = (QString *)QObject::tr((char *)&local_res10,&DAT_14107e494,0);
  QWidget::setToolTip(pQVar22,pQVar10);
  QString::~QString((QString *)&local_res10);
  QBoxLayout::addWidget((QBoxLayout *)pQVar14,*(undefined8 *)(param_1 + 0x80));
  QBoxLayout::addSpacing((QBoxLayout *)pQVar14,10);
  QBoxLayout::addWidget((QBoxLayout *)pQVar14);
  QBoxLayout::addStretch((QBoxLayout *)pQVar14,0);
  local_res8 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x88);
  pQVar13 = pQVar21;
  if (local_res8 != (QHBoxLayout *)0x0) {
    pQVar13 = (QLabel *)
              thunk_FUN_14039c090(local_res8,*(undefined8 *)(param_1 + 0x78),DAT_141072f50,
                                  DAT_141059158,uVar29,0);
  }
  *(QLabel **)(param_1 + 0x90) = pQVar13;
  thunk_FUN_14039d840(pQVar13,0xb4);
  thunk_FUN_14039d930(*(undefined8 *)(param_1 + 0x90));
  pQVar2 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar24 = (QVBoxLayout *)pQVar21;
  local_res8 = (QHBoxLayout *)pQVar2;
  if (pQVar2 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar2,*(QWidget **)(param_1 + 0x78));
    *(undefined ***)pQVar2 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar2 + 0x10) = QVBoxLayout::vftable;
    pQVar24 = pQVar2;
  }
  QLayout::setContentsMargins((QLayout *)pQVar24,0,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar24,0);
  QBoxLayout::addSpacing((QBoxLayout *)pQVar24,0x14);
  QBoxLayout::addLayout((QBoxLayout *)pQVar24,(QLayout *)pQVar14,0);
  QBoxLayout::addSpacing((QBoxLayout *)pQVar24,0xc);
  QBoxLayout::addWidget((QBoxLayout *)pQVar24,*(undefined8 *)(param_1 + 0x90));
  pQVar3 = (QWidget *)thunk_FUN_140bd99d4(0x30);
  pQVar22 = (QWidget *)pQVar21;
  local_res8 = (QHBoxLayout *)pQVar3;
  if (pQVar3 != (QWidget *)0x0) {
    QWidget::QWidget(pQVar3,*(undefined8 *)(param_1 + 0xb8));
    *(undefined ***)pQVar3 = QWidget::vftable;
    *(undefined ***)(pQVar3 + 0x10) = QWidget::vftable;
    pQVar22 = pQVar3;
  }
  *(QWidget **)(param_1 + 0x98) = pQVar22;
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("fillHolesDiameterWgt",0x14);
  QObject::setObjectName((QObject *)pQVar22,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  (**(code **)(**(longlong **)(param_1 + 0x98) + 0x58))();
  pQVar15 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar14 = (QHBoxLayout *)pQVar21;
  local_res8 = pQVar15;
  if (pQVar15 != (QHBoxLayout *)0x0) {
    QHBoxLayout::QHBoxLayout(pQVar15);
    *(undefined ***)pQVar15 = QHBoxLayout::vftable;
    *(undefined ***)(pQVar15 + 0x10) = QHBoxLayout::vftable;
    pQVar14 = pQVar15;
  }
  QLayout::setContentsMargins((QLayout *)pQVar14,0,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar14,0);
  pQVar5 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar13 = pQVar21;
  local_res8 = (QHBoxLayout *)pQVar5;
  if (pQVar5 != (QLabel *)0x0) {
    QLabel::QLabel(pQVar5,*(undefined8 *)(param_1 + 0x98));
    *(undefined ***)pQVar5 = QLabel::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QLabel::vftable;
    pQVar13 = pQVar5;
  }
  *(QLabel **)(param_1 + 0xa0) = pQVar13;
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("fillHolesDiameterLabel",0x16);
  QObject::setObjectName((QObject *)pQVar13,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar13 = *(QLabel **)(param_1 + 0xa0);
  pQVar10 = (QString *)QObject::tr((char *)&local_res10,&DAT_14107f8e8,0);
  QLabel::setText(pQVar13,pQVar10);
  QString::~QString((QString *)&local_res10);
  pQVar18 = (QPushButton *)thunk_FUN_140bd99d4(0x30);
  pQVar23 = (QPushButton *)pQVar21;
  local_res8 = (QHBoxLayout *)pQVar18;
  if (pQVar18 != (QPushButton *)0x0) {
    QPushButton::QPushButton(pQVar18,*(QWidget **)(param_1 + 0x98));
    *(undefined ***)pQVar18 = QPushButton::vftable;
    *(undefined ***)(pQVar18 + 0x10) = QPushButton::vftable;
    pQVar23 = pQVar18;
  }
  *(QPushButton **)(param_1 + 0xa8) = pQVar23;
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("fillHolesDiameterResetBtn",0x19);
  QObject::setObjectName((QObject *)pQVar23,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  pQVar22 = *(QWidget **)(param_1 + 0xa8);
  pQVar10 = (QString *)QObject::tr((char *)&local_res10,&DAT_14107e494,0);
  QWidget::setToolTip(pQVar22,pQVar10);
  QString::~QString((QString *)&local_res10);
  QBoxLayout::addWidget((QBoxLayout *)pQVar14,*(undefined8 *)(param_1 + 0xa0));
  QBoxLayout::addSpacing((QBoxLayout *)pQVar14,10);
  QBoxLayout::addWidget((QBoxLayout *)pQVar14);
  QBoxLayout::addStretch((QBoxLayout *)pQVar14,0);
  local_res8 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x88);
  pQVar13 = pQVar21;
  if (local_res8 != (QHBoxLayout *)0x0) {
    pQVar13 = (QLabel *)
              thunk_FUN_14039c090(local_res8,*(undefined8 *)(param_1 + 0x98),DAT_141072f50,
                                  DAT_141059158,uVar29,0);
  }
  *(QLabel **)(param_1 + 0xb0) = pQVar13;
  thunk_FUN_14039d840(pQVar13,0xb4);
  thunk_FUN_14039d930(*(undefined8 *)(param_1 + 0xb0));
  pQVar2 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar24 = (QVBoxLayout *)pQVar21;
  local_res8 = (QHBoxLayout *)pQVar2;
  if (pQVar2 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar2,*(QWidget **)(param_1 + 0x98));
    *(undefined ***)pQVar2 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar2 + 0x10) = QVBoxLayout::vftable;
    pQVar24 = pQVar2;
  }
  QLayout::setContentsMargins((QLayout *)pQVar24,0,0,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar24,0);
  QBoxLayout::addSpacing((QBoxLayout *)pQVar24,0x14);
  QBoxLayout::addLayout((QBoxLayout *)pQVar24,(QLayout *)pQVar14,0);
  QBoxLayout::addSpacing((QBoxLayout *)pQVar24,0xc);
  QBoxLayout::addWidget((QBoxLayout *)pQVar24,*(undefined8 *)(param_1 + 0xb0));
  lVar17 = thunk_FUN_140bd99d4(0x30);
  pQVar13 = pQVar21;
  local_78 = (QLabel *)lVar17;
  if (lVar17 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0xb8);
    uVar11 = QObject::tr((char *)&local_res10,&DAT_141059efc,0);
    local_res8 = (QHBoxLayout *)(CONCAT44(local_res8._4_4_,uVar26) | 0x200000);
    pQVar13 = (QLabel *)thunk_FUN_1406c6430(lVar17,uVar11,uVar7);
    uVar26 = uVar26 | 0x200000;
  }
  *(QLabel **)(param_1 + 0x120) = pQVar13;
  if ((uVar26 >> 0x15 & 1) != 0) {
    uVar26 = uVar26 & 0xffdfffff;
    QString::~QString((QString *)&local_res10);
  }
  QWidget::setFixedHeight(*(QWidget **)(param_1 + 0x120),0x26);
  QWidget::setAttribute(*(QWidget **)(param_1 + 0x120),0x5c,true);
  pQVar2 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar24 = (QVBoxLayout *)pQVar21;
  local_res8 = (QHBoxLayout *)pQVar2;
  if (pQVar2 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar2,*(QWidget **)(param_1 + 0xc0));
    *(undefined ***)pQVar2 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar2 + 0x10) = QVBoxLayout::vftable;
    pQVar24 = pQVar2;
  }
  QLayout::setContentsMargins((QLayout *)pQVar24,0,0x10,0,0);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar24,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar24,local_res18,0,0);
  QBoxLayout::addSpacing((QBoxLayout *)pQVar24,0x14);
  QBoxLayout::addWidget((QBoxLayout *)pQVar24,*(undefined8 *)(param_1 + 0xf0),0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar24,*(undefined8 *)(param_1 + 0x38),0,0);
  QBoxLayout::addSpacing((QBoxLayout *)pQVar24,0x14);
  QBoxLayout::addLayout((QBoxLayout *)pQVar24,(QLayout *)pQVar8,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar24,*(undefined8 *)(param_1 + 0x78),0,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar24,*(undefined8 *)(param_1 + 0x98),0,0);
  pQVar2 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar24 = (QVBoxLayout *)pQVar21;
  local_res8 = (QHBoxLayout *)pQVar2;
  if (pQVar2 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar2,*(QWidget **)(param_1 + 0xb8));
    *(undefined ***)pQVar2 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar2 + 0x10) = QVBoxLayout::vftable;
    pQVar24 = pQVar2;
  }
  QLayout::setContentsMargins((QLayout *)pQVar24,0x10,0x10,0x10,0x10);
  QBoxLayout::setSpacing((QBoxLayout *)pQVar24,0);
  QBoxLayout::addWidget((QBoxLayout *)pQVar24,*(undefined8 *)(param_1 + 200));
  QBoxLayout::addWidget((QBoxLayout *)pQVar24,*(undefined8 *)(param_1 + 0xc0));
  QBoxLayout::addSpacing((QBoxLayout *)pQVar24,0x14);
  QBoxLayout::addWidget((QBoxLayout *)pQVar24,*(undefined8 *)(param_1 + 0x120));
  pQVar20 = (QFrame *)thunk_FUN_140bd99d4(0x30);
  pQVar16 = (QFrame *)pQVar21;
  local_res8 = (QHBoxLayout *)pQVar20;
  if (pQVar20 != (QFrame *)0x0) {
    QFrame::QFrame(pQVar20,param_1);
    *(undefined ***)pQVar20 = QFrame::vftable;
    *(undefined ***)(pQVar20 + 0x10) = QFrame::vftable;
    pQVar16 = pQVar20;
  }
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("editPageSplitLine",0x11);
  QObject::setObjectName((QObject *)pQVar16,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QFrame::setFrameShape(pQVar16,4);
  QWidget::setFixedHeight((QWidget *)pQVar16,1);
  pQVar5 = (QLabel *)thunk_FUN_140bd99d4(0x30);
  pQVar13 = pQVar21;
  local_res18 = (QFrame *)pQVar5;
  if (pQVar5 != (QLabel *)0x0) {
    uVar7 = QObject::tr((char *)&local_res10,&DAT_14107c4e0,0);
    local_res8 = (QHBoxLayout *)(CONCAT44(local_res8._4_4_,uVar26) | 0x400000);
    QLabel::QLabel(pQVar5,uVar7);
    *(undefined ***)pQVar5 = QLabel::vftable;
    *(undefined ***)(pQVar5 + 0x10) = QLabel::vftable;
    pQVar13 = pQVar5;
    uVar26 = 0x400000;
  }
  *(QLabel **)(param_1 + 0x128) = pQVar13;
  if ((uVar26 >> 0x16 & 1) != 0) {
    QString::~QString((QString *)&local_res10);
  }
  pQVar19 = *(QObject **)(param_1 + 0x128);
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("editPageInstructionLabel",0x18);
  QObject::setObjectName(pQVar19,(QString *)&local_res8);
  QString::~QString((QString *)&local_res8);
  QBoxLayout::addLayout(*(QBoxLayout **)(param_1 + 0x148),(QLayout *)local_res20,0);
  QBoxLayout::addSpacing(*(QBoxLayout **)(param_1 + 0x148),0xc);
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 0x148),*(undefined8 *)(param_1 + 0xb8));
  QBoxLayout::addSpacing(*(QBoxLayout **)(param_1 + 0x148),0x18);
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 0x148),pQVar16);
  QBoxLayout::addSpacing(*(QBoxLayout **)(param_1 + 0x148),0x14);
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x128));
  QBoxLayout::addSpacing(*(QBoxLayout **)(param_1 + 0x148),0xc);
  pQVar2 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  pQVar24 = (QVBoxLayout *)pQVar21;
  local_res8 = (QHBoxLayout *)pQVar2;
  if (pQVar2 != (QVBoxLayout *)0x0) {
    QVBoxLayout::QVBoxLayout(pQVar2);
    *(undefined ***)pQVar2 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar2 + 0x10) = QVBoxLayout::vftable;
    pQVar24 = pQVar2;
  }
  *(QVBoxLayout **)(param_1 + 0x150) = pQVar24;
  QLayout::setContentsMargins((QLayout *)pQVar24,0,0,0,0);
  QBoxLayout::addLayout(*(QBoxLayout **)(param_1 + 0x148),*(QLayout **)(param_1 + 0x150),0);
  local_res8 = (QHBoxLayout *)thunk_FUN_140bd99d4(0x30);
  if (local_res8 != (QHBoxLayout *)0x0) {
    pQVar21 = (QLabel *)thunk_FUN_140695fd0(local_res8,param_1);
  }
  *(QLabel **)(param_1 + 0x130) = pQVar21;
  QBoxLayout::addWidget(*(QBoxLayout **)(param_1 + 0x150),pQVar21,0,0);
  local_res8 = (QHBoxLayout *)QString::fromAscii_helper("meshingpage",0xb);
  thunk_FUN_1406487e0(local_98,&local_res8);
  QString::~QString((QString *)&local_res8);
  plVar1 = *(longlong **)(param_1 + 0x130);
  pcVar30 = *(code **)(*plVar1 + 0x1b0);
  QUrl::fromUserInput((QString *)&local_res10);
  (*pcVar30)(plVar1);
  QUrl::~QUrl((QUrl *)&local_res10);
  QBoxLayout::addStretch(*(QBoxLayout **)(param_1 + 0x148),0);
  QString::~QString(local_98);
  return;
}


