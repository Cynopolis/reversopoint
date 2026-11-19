// 1404922c0  FUN_1404922c0  size=0x20b  calls ~QUrl (site 1404924b1)

void FUN_1404922c0(longlong param_1)

{
  QLabel *pQVar1;
  QAbstractButton *pQVar2;
  QWidget *this;
  longlong *plVar3;
  code *pcVar4;
  QString *pQVar5;
  undefined8 uVar6;
  uint uVar7;
  QTypedArrayData<unsigned_short> *local_res8;
  QString local_res10 [8];
  QString local_res18 [8];
  QString local_res20 [8];
  
  local_res8 = (QTypedArrayData<unsigned_short> *)((ulonglong)local_res8 & 0xffffffff00000000);
  pQVar1 = *(QLabel **)(param_1 + 0x30);
  pQVar5 = (QString *)QObject::tr((char *)local_res18,&DAT_14105d360,0);
  QLabel::setText(pQVar1,pQVar5);
  QString::~QString(local_res18);
  pQVar1 = *(QLabel **)(param_1 + 0x38);
  pQVar5 = (QString *)QObject::tr((char *)local_res18,&DAT_14107e450,0);
  QLabel::setText(pQVar1,pQVar5);
  QString::~QString(local_res18);
  pQVar2 = *(QAbstractButton **)(param_1 + 0x50);
  if (*(char *)(param_1 + 0x78) == '\0') {
    pQVar5 = (QString *)QObject::tr((char *)local_res18,&DAT_14107de50,0);
    uVar7 = 2;
  }
  else {
    pQVar5 = (QString *)QObject::tr((char *)local_res20,&DAT_14107df98,0);
    uVar7 = 1;
  }
  local_res8 = (QTypedArrayData<unsigned_short> *)CONCAT44(local_res8._4_4_,uVar7);
  QAbstractButton::setText(pQVar2,pQVar5);
  if ((uVar7 & 2) != 0) {
    uVar7 = uVar7 & 0xfffffffd;
    QString::~QString(local_res18);
  }
  if ((uVar7 & 1) != 0) {
    QString::~QString(local_res20);
  }
  pQVar2 = *(QAbstractButton **)(param_1 + 0x58);
  pQVar5 = (QString *)QObject::tr((char *)&local_res8,&DAT_141059efc,0);
  QAbstractButton::setText(pQVar2,pQVar5);
  QString::~QString((QString *)&local_res8);
  pQVar1 = *(QLabel **)(param_1 + 0x60);
  pQVar5 = (QString *)QObject::tr((char *)&local_res8,&DAT_14107c4e0,0);
  QLabel::setText(pQVar1,pQVar5);
  QString::~QString((QString *)&local_res8);
  this = *(QWidget **)(param_1 + 0x40);
  pQVar5 = (QString *)QObject::tr((char *)&local_res8,&DAT_14107e494,0);
  QWidget::setToolTip(this,pQVar5);
  QString::~QString((QString *)&local_res8);
  local_res8 = QString::fromAscii_helper("meshisolatepage",0xf);
  thunk_FUN_1406487e0(local_res10,&local_res8);
  QString::~QString((QString *)&local_res8);
  plVar3 = *(longlong **)(param_1 + 0x68);
  pcVar4 = *(code **)(*plVar3 + 0x1b0);
  uVar6 = QUrl::fromUserInput(local_res18);
  (*pcVar4)(plVar3,uVar6);
  QUrl::~QUrl((QUrl *)local_res18);
  QString::~QString(local_res10);
  return;
}


