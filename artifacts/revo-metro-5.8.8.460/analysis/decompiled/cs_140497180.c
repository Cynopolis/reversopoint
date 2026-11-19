// 140497180  FUN_140497180  size=0x1a1  calls ~QUrl (site 140497304)

void FUN_140497180(longlong param_1)

{
  QLabel *pQVar1;
  QAbstractButton *this;
  QWidget *this_00;
  longlong *plVar2;
  code *pcVar3;
  QString *pQVar4;
  undefined8 uVar5;
  QTypedArrayData<unsigned_short> *local_res8;
  QString local_res10 [8];
  QString local_res18 [8];
  
  pQVar1 = *(QLabel **)(param_1 + 0x38);
  pQVar4 = (QString *)QObject::tr((char *)&local_res8,&DAT_14105d374,0);
  QLabel::setText(pQVar1,pQVar4);
  QString::~QString((QString *)&local_res8);
  pQVar1 = *(QLabel **)(param_1 + 0x40);
  pQVar4 = (QString *)QObject::tr((char *)&local_res8,&DAT_14107ee68,0);
  QLabel::setText(pQVar1,pQVar4);
  QString::~QString((QString *)&local_res8);
  this = *(QAbstractButton **)(param_1 + 0x58);
  pQVar4 = (QString *)QObject::tr((char *)&local_res8,&DAT_141059efc,0);
  QAbstractButton::setText(this,pQVar4);
  QString::~QString((QString *)&local_res8);
  pQVar1 = *(QLabel **)(param_1 + 0x60);
  pQVar4 = (QString *)QObject::tr((char *)&local_res8,&DAT_14107c4e0,0);
  QLabel::setText(pQVar1,pQVar4);
  QString::~QString((QString *)&local_res8);
  this_00 = *(QWidget **)(param_1 + 0x48);
  pQVar4 = (QString *)QObject::tr((char *)&local_res8,&DAT_14107e494,0);
  QWidget::setToolTip(this_00,pQVar4);
  QString::~QString((QString *)&local_res8);
  local_res8 = QString::fromAscii_helper("meshsimplifypage",0x10);
  thunk_FUN_1406487e0(local_res10,&local_res8);
  QString::~QString((QString *)&local_res8);
  plVar2 = *(longlong **)(param_1 + 0x68);
  pcVar3 = *(code **)(*plVar2 + 0x1b0);
  uVar5 = QUrl::fromUserInput(local_res18);
  (*pcVar3)(plVar2,uVar5);
  QUrl::~QUrl((QUrl *)local_res18);
  QString::~QString(local_res10);
  return;
}


