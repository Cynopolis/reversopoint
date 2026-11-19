// 1403ce3a0  FUN_1403ce3a0  size=0x1c0  calls ~QNetworkRequest (site 1403ce53f)

void FUN_1403ce3a0(void **param_1)

{
  QString *pQVar1;
  QUrl *pQVar2;
  QNetworkReply *pQVar3;
  undefined4 *puVar4;
  code *local_res8;
  QString local_res10 [8];
  QNetworkRequest local_res18 [8];
  QTypedArrayData<unsigned_short> *local_res20;
  uint in_stack_ffffffffffffff8c;
  QString local_58 [8];
  QUrl local_50 [8];
  code *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar4 = (undefined4 *)0x0;
  local_res8 = (code *)((ulonglong)local_res8 & 0xffffffff00000000);
  if (param_1[0x5c] != (void *)0x0) {
    local_res20 = QString::fromAscii_helper
                            ("https://ssrstatic.infly3d.com/video/resource_download/device/",0x3d);
    QString::QString(local_res10,(QString *)&local_res20);
    local_res8 = (code *)CONCAT44(local_res8._4_4_,1);
    pQVar1 = (QString *)QString::fromUtf8((char *)local_58,0x41072200);
    QString::append(local_res10,pQVar1);
    QString::~QString(local_58);
    pQVar2 = (QUrl *)QUrl::QUrl(local_50,local_res10,0);
    QNetworkRequest::QNetworkRequest(local_res18,pQVar2);
    QUrl::~QUrl(local_50);
    QString::~QString(local_res10);
    pQVar3 = QNetworkAccessManager::get(param_1[0x5c],local_res18);
    local_48 = thunk_FUN_1403df5a0;
    uStack_40 = 0;
    local_38 = 0x40001c53;
    uStack_34 = 1;
    uStack_30 = 0;
    uStack_2c = uStack_3c;
    local_res8 = finished_exref;
    local_48 = (code *)thunk_FUN_140bd99d4(0x20);
    if (local_48 != (code *)0x0) {
      *(undefined4 *)local_48 = 1;
      *(undefined1 **)((longlong)local_48 + 8) = &LAB_140043e96;
      *(ulonglong *)((longlong)local_48 + 0x10) = CONCAT44(uStack_34,local_38);
      *(ulonglong *)((longlong)local_48 + 0x18) = CONCAT44(uStack_2c,uStack_30);
      puVar4 = (undefined4 *)local_48;
    }
    QObject::connectImpl
              ((QObject *)local_58,(void **)pQVar3,(QObject *)&local_res8,param_1,
               (QSlotObjectBase *)&local_38,(ConnectionType)puVar4,
               (int *)((ulonglong)in_stack_ffffffffffffff8c << 0x20),(QMetaObject *)0x0);
    QMetaObject::Connection::~Connection((Connection *)local_58);
    QNetworkRequest::~QNetworkRequest(local_res18);
    QString::~QString((QString *)&local_res20);
  }
  return;
}


