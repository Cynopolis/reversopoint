// 1405b43d0  FUN_1405b43d0  size=0x19a  calls ~QUrl (site 1405b44f9)

void FUN_1405b43d0(int param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  QVBoxLayout *pQVar3;
  longlong *plVar4;
  QTypedArrayData<unsigned_short> *local_98;
  QVBoxLayout *local_90;
  QString local_88 [16];
  QDialog local_78 [112];
  
  if (param_1 == 0) {
    if (param_2 != 0) {
      FUN_140036f43(param_2,0x18);
    }
  }
  else if (param_1 == 1) {
    thunk_FUN_140393d50(local_78,0);
    uVar2 = QObject::tr((char *)&local_98,&DAT_14108d118,0);
    thunk_FUN_140396d80(local_78,uVar2);
    QString::~QString((QString *)&local_98);
    pQVar3 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x20);
    local_90 = pQVar3;
    if (pQVar3 == (QVBoxLayout *)0x0) {
      pQVar3 = (QVBoxLayout *)0x0;
    }
    else {
      QVBoxLayout::QVBoxLayout(pQVar3);
      *(undefined ***)pQVar3 = QVBoxLayout::vftable;
      *(undefined ***)(pQVar3 + 0x10) = QVBoxLayout::vftable;
    }
    local_90 = (QVBoxLayout *)thunk_FUN_140bd99d4(0x30);
    if (local_90 == (QVBoxLayout *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)thunk_FUN_140695fd0(local_90,*(undefined8 *)(param_2 + 0x10));
    }
    local_98 = QString::fromAscii_helper("meshingpage",0xb);
    thunk_FUN_1406487e0(local_88,&local_98);
    QString::~QString((QString *)&local_98);
    pcVar1 = *(code **)(*plVar4 + 0x1b0);
    uVar2 = QUrl::fromUserInput((QString *)&local_90);
    (*pcVar1)(plVar4,uVar2);
    QUrl::~QUrl((QUrl *)&local_90);
    QBoxLayout::addWidget((QBoxLayout *)pQVar3,plVar4,0,0);
    thunk_FUN_140396630(local_78,pQVar3);
    QDialog::exec(local_78);
    QString::~QString(local_88);
    QDialog::~QDialog(local_78);
  }
  return;
}


