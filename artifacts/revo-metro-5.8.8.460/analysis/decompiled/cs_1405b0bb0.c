// 1405b0bb0  FUN_1405b0bb0  size=0x18b  calls ~QUrl (site 1405b0ce5)

void FUN_1405b0bb0(undefined8 *param_1,QVBoxLayout *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  QVBoxLayout *pQVar3;
  longlong *plVar4;
  QVBoxLayout *local_res10;
  QString local_res18 [8];
  QString local_res20 [8];
  QDialog local_88 [112];
  
  local_res10 = param_2;
  thunk_FUN_140393d50(local_88,0);
  uVar2 = QObject::tr((char *)&local_res10,&DAT_14108d118,0);
  thunk_FUN_140396d80(local_88,uVar2);
  QString::~QString((QString *)&local_res10);
  pQVar3 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
  local_res10 = pQVar3;
  if (pQVar3 == (QVBoxLayout *)0x0) {
    pQVar3 = (QVBoxLayout *)0x0;
  }
  else {
    QVBoxLayout::QVBoxLayout(pQVar3);
    *(undefined ***)pQVar3 = QVBoxLayout::vftable;
    *(undefined ***)(pQVar3 + 0x10) = QVBoxLayout::vftable;
  }
  local_res10 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x30);
  if (local_res10 == (QVBoxLayout *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)thunk_FUN_140695fd0(local_res10,*param_1);
  }
  local_res10 = (QVBoxLayout *)QString::fromAscii_helper("meshingpage",0xb);
  thunk_FUN_1406487e0(local_res18,&local_res10);
  QString::~QString((QString *)&local_res10);
  pcVar1 = *(code **)(*plVar4 + 0x1b0);
  uVar2 = QUrl::fromUserInput(local_res20);
  (*pcVar1)(plVar4,uVar2);
  QUrl::~QUrl((QUrl *)local_res20);
  QBoxLayout::addWidget((QBoxLayout *)pQVar3,plVar4,0,0);
  thunk_FUN_140396630(local_88,pQVar3);
  QDialog::exec(local_88);
  QString::~QString(local_res18);
  QDialog::~QDialog(local_88);
  return;
}


