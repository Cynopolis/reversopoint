// 140753740  FUN_140753740  size=0x2db  calls ~QNetworkRequest (site 1407539fe)

undefined1 FUN_140753740(void **param_1,QUrl *param_2,QByteArray *param_3)

{
  void **ppvVar1;
  bool bVar2;
  undefined1 uVar3;
  NetworkAccessibility NVar4;
  QUrl *pQVar5;
  QNetworkReply *pQVar6;
  undefined4 *puVar7;
  QNetworkRequest local_res8 [8];
  code *local_res20;
  uint in_stack_ffffffffffffffac;
  code *local_38;
  QUrl local_30 [8];
  QObject local_28 [8];
  undefined4 *local_20;
  
  puVar7 = (undefined4 *)0x0;
  if ((param_1[3] == (QNetworkReply *)0x0) ||
     (bVar2 = QNetworkReply::isFinished(param_1[3]), uVar3 = 0, bVar2)) {
    pQVar5 = (QUrl *)QUrl::QUrl(local_30);
    QNetworkRequest::QNetworkRequest(local_res8,pQVar5);
    QUrl::~QUrl(local_30);
    QNetworkRequest::setUrl(local_res8,param_2);
    QByteArray::QByteArray((QByteArray *)&local_38,"*/*",-1);
    QByteArray::QByteArray((QByteArray *)&local_res20,"accept",-1);
    QNetworkRequest::setRawHeader(local_res8,(QByteArray *)&local_res20,(QByteArray *)&local_38);
    QByteArray::~QByteArray((QByteArray *)&local_res20);
    QByteArray::~QByteArray((QByteArray *)&local_38);
    QByteArray::QByteArray((QByteArray *)&local_38,"application/json",-1);
    QByteArray::QByteArray((QByteArray *)&local_res20,"Content-Type",-1);
    QNetworkRequest::setRawHeader(local_res8,(QByteArray *)&local_res20,(QByteArray *)&local_38);
    QByteArray::~QByteArray((QByteArray *)&local_res20);
    QByteArray::~QByteArray((QByteArray *)&local_38);
    QByteArray::QByteArray((QByteArray *)&local_38,"gzip, deflate, br",-1);
    QByteArray::QByteArray((QByteArray *)&local_res20,"Accept-Encoding",-1);
    QNetworkRequest::setRawHeader(local_res8,(QByteArray *)&local_res20,(QByteArray *)&local_38);
    QByteArray::~QByteArray((QByteArray *)&local_res20);
    QByteArray::~QByteArray((QByteArray *)&local_38);
    QByteArray::QByteArray((QByteArray *)&local_38,"zh-CN",-1);
    QByteArray::QByteArray((QByteArray *)&local_res20,"Accept-Language",-1);
    QNetworkRequest::setRawHeader(local_res8,(QByteArray *)&local_res20,(QByteArray *)&local_38);
    QByteArray::~QByteArray((QByteArray *)&local_res20);
    QByteArray::~QByteArray((QByteArray *)&local_38);
    NVar4 = QNetworkAccessManager::networkAccessible(param_1[2]);
    if (NVar4 == 0) {
      QNetworkAccessManager::setNetworkAccessible(param_1[2],1);
    }
    pQVar6 = QNetworkAccessManager::post(param_1[2],local_res8,param_3);
    param_1[3] = pQVar6;
    QObject::connect((QObject *)&local_res20,(char *)pQVar6,(QObject *)"2finished()",(char *)param_1
                     ,0x410ad508);
    QMetaObject::Connection::~Connection((Connection *)&local_res20);
    local_res20 = FUN_140048a59;
    local_38 = error_exref;
    ppvVar1 = param_1[3];
    local_20 = (undefined4 *)thunk_FUN_140bd99d4(0x18);
    if (local_20 != (undefined4 *)0x0) {
      *local_20 = 1;
      *(undefined1 **)(local_20 + 2) = &LAB_14001fc71;
      *(code **)(local_20 + 4) = local_res20;
      puVar7 = local_20;
    }
    QObject::connectImpl
              (local_28,ppvVar1,(QObject *)&local_38,param_1,(QSlotObjectBase *)&local_res20,
               (ConnectionType)puVar7,(int *)((ulonglong)in_stack_ffffffffffffffac << 0x20),
               (QMetaObject *)0x0);
    QMetaObject::Connection::~Connection((Connection *)local_28);
    QNetworkRequest::~QNetworkRequest(local_res8);
    uVar3 = 1;
  }
  return uVar3;
}


