// 140479cc0  FUN_140479cc0  size=0x211  calls ~QUrl (site 140479eb4)

void FUN_140479cc0(longlong param_1)

{
  QLabel *pQVar1;
  QAbstractButton *pQVar2;
  longlong *plVar3;
  code *pcVar4;
  QString *pQVar5;
  undefined8 uVar6;
  QTypedArrayData<unsigned_short> *local_res8;
  QString local_res10 [8];
  QString local_res18 [8];
  
  pQVar1 = *(QLabel **)(param_1 + 0x38);
  pQVar5 = (QString *)QObject::tr((char *)&local_res8,&DAT_14105d3c0,0);
  QLabel::setText(pQVar1,pQVar5);
  QString::~QString((QString *)&local_res8);
  pQVar2 = *(QAbstractButton **)(param_1 + 0x48);
  pQVar5 = (QString *)QObject::tr((char *)&local_res8,&DAT_14107c478,0);
  QAbstractButton::setText(pQVar2,pQVar5);
  QString::~QString((QString *)&local_res8);
  pQVar2 = *(QAbstractButton **)(param_1 + 0x50);
  pQVar5 = (QString *)QObject::tr((char *)&local_res8,&DAT_14107c488,0);
  QAbstractButton::setText(pQVar2,pQVar5);
  QString::~QString((QString *)&local_res8);
  pQVar2 = *(QAbstractButton **)(param_1 + 0x58);
  pQVar5 = (QString *)QObject::tr((char *)&local_res8,&DAT_14107c4b0,0);
  QAbstractButton::setText(pQVar2,pQVar5);
  QString::~QString((QString *)&local_res8);
  pQVar2 = *(QAbstractButton **)(param_1 + 0x60);
  pQVar5 = (QString *)QObject::tr((char *)&local_res8,&DAT_14107c4d0,0);
  QAbstractButton::setText(pQVar2,pQVar5);
  QString::~QString((QString *)&local_res8);
  pQVar2 = *(QAbstractButton **)(param_1 + 0x68);
  pQVar5 = (QString *)QObject::tr((char *)&local_res8,&DAT_14107c4c4,0);
  QAbstractButton::setText(pQVar2,pQVar5);
  QString::~QString((QString *)&local_res8);
  pQVar1 = *(QLabel **)(param_1 + 0x70);
  pQVar5 = (QString *)QObject::tr((char *)&local_res8,&DAT_14107c4e0,0);
  QLabel::setText(pQVar1,pQVar5);
  QString::~QString((QString *)&local_res8);
  local_res8 = QString::fromAscii_helper("alignmentpage",0xd);
  thunk_FUN_1406487e0(local_res10,&local_res8);
  QString::~QString((QString *)&local_res8);
  plVar3 = *(longlong **)(param_1 + 0x78);
  pcVar4 = *(code **)(*plVar3 + 0x1b0);
  uVar6 = QUrl::fromUserInput(local_res18);
  (*pcVar4)(plVar3,uVar6);
  QUrl::~QUrl((QUrl *)local_res18);
  QString::~QString(local_res10);
  return;
}


