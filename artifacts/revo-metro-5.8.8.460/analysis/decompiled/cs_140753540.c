// 140753540  FUN_140753540  size=0x76  calls QNetworkAccessManager (site 140753590)

QObject * FUN_140753540(QObject *param_1,QObject *param_2)

{
  QNetworkAccessManager *this;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = HttpRequest::vftable;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  this = (QNetworkAccessManager *)thunk_FUN_140bd99d4(0x10);
  if (this == (QNetworkAccessManager *)0x0) {
    this = (QNetworkAccessManager *)0x0;
  }
  else {
    QNetworkAccessManager::QNetworkAccessManager(this,param_1);
    *(undefined ***)this = QNetworkAccessManager::vftable;
  }
  *(QNetworkAccessManager **)(param_1 + 0x10) = this;
  return param_1;
}


