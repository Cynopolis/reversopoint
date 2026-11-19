// 1407521d0  FUN_1407521d0  size=0x1c0  calls QNetworkAccessManager (site 140752240)

QObject * FUN_1407521d0(QObject *param_1,QObject *param_2)

{
  void **ppvVar1;
  QNetworkAccessManager *this;
  QTimer *this_00;
  QTimer *pQVar2;
  QNetworkAccessManager *this_01;
  QTimer *pQVar3;
  QNetworkAccessManager *local_res18;
  code *local_res20;
  uint in_stack_ffffffffffffffbc;
  QObject local_28 [8];
  QTimer *local_20;
  
  pQVar2 = (QTimer *)0x0;
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = HttpDownload::vftable;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  QString::QString((QString *)(param_1 + 0x20));
  QFile::QFile((QFile *)(param_1 + 0x28));
  QString::QString((QString *)(param_1 + 0x40));
  this = (QNetworkAccessManager *)thunk_FUN_140bd99d4(0x10);
  this_01 = (QNetworkAccessManager *)pQVar2;
  local_res18 = this;
  if (this != (QNetworkAccessManager *)0x0) {
    QNetworkAccessManager::QNetworkAccessManager(this,param_1);
    *(undefined ***)this = QNetworkAccessManager::vftable;
    this_01 = this;
  }
  *(QNetworkAccessManager **)(param_1 + 0x10) = this_01;
  QNetworkAccessManager::setRedirectPolicy(this_01,1);
  this_00 = (QTimer *)thunk_FUN_140bd99d4(0x20);
  pQVar3 = pQVar2;
  local_res18 = (QNetworkAccessManager *)this_00;
  if (this_00 != (QTimer *)0x0) {
    QTimer::QTimer(this_00,param_1);
    *(undefined ***)this_00 = QTimer::vftable;
    pQVar3 = this_00;
  }
  *(QTimer **)(param_1 + 0x38) = pQVar3;
  QObject::connect((QObject *)&local_res18,(char *)pQVar3,(QObject *)"2timeout()",(char *)param_1,
                   0x410ad208);
  QMetaObject::Connection::~Connection((Connection *)&local_res18);
  local_res18 = (QNetworkAccessManager *)thunk_FUN_140752d50;
  local_res20 = finished_exref;
  ppvVar1 = *(void ***)(param_1 + 0x10);
  local_20 = (QTimer *)thunk_FUN_140bd99d4(0x18);
  if (local_20 != (QTimer *)0x0) {
    *(undefined4 *)local_20 = 1;
    *(undefined1 **)(local_20 + 8) = &LAB_140013dae;
    *(QNetworkAccessManager **)(local_20 + 0x10) = local_res18;
    pQVar2 = local_20;
  }
  QObject::connectImpl
            (local_28,ppvVar1,(QObject *)&local_res20,(void **)param_1,
             (QSlotObjectBase *)&local_res18,(ConnectionType)pQVar2,
             (int *)((ulonglong)in_stack_ffffffffffffffbc << 0x20),(QMetaObject *)0x0);
  QMetaObject::Connection::~Connection((Connection *)local_28);
  return param_1;
}


