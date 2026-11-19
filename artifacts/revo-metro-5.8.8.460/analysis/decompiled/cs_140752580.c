// 140752580  FUN_140752580  size=0x3db  calls ~QNetworkRequest (site 140752932)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140752580(void **param_1,QUrl *param_2,QString *param_3)

{
  void **ppvVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  NetworkAccessibility NVar5;
  QString *pQVar6;
  longlong *plVar7;
  QUrl *pQVar8;
  QNetworkReply *pQVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined8 uVar12;
  longlong lVar13;
  char *pcVar14;
  int iVar15;
  undefined1 auStackY_238 [32];
  uint in_stack_fffffffffffffdfc;
  QTypedArrayData<unsigned_short> *local_1e8;
  code *local_1e0;
  QString local_1d8 [8];
  QNetworkRequest local_1d0 [8];
  QObject local_1c8 [8];
  undefined4 *local_1c0;
  undefined1 local_1b8 [32];
  undefined1 local_198 [336];
  ulonglong local_48;
  
  local_48 = DAT_141a19280 ^ (ulonglong)auStackY_238;
  puVar10 = (undefined4 *)0x0;
  local_1e8 = (QTypedArrayData<unsigned_short> *)((ulonglong)local_1e8 & 0xffffffff00000000);
  if ((param_1[3] != (QNetworkReply *)0x0) &&
     (bVar2 = QNetworkReply::isFinished(param_1[3]), !bVar2)) {
    return 0;
  }
  bVar2 = QUrl::isValid(param_2);
  if (!bVar2) {
    iVar15 = 0x25;
    pcVar14 = "Error:URL has specify a invalid name.";
    goto LAB_1407525e8;
  }
  pQVar6 = (QString *)QUrl::scheme(param_2);
  bVar2 = false;
  local_1e8 = (QTypedArrayData<unsigned_short> *)CONCAT44(local_1e8._4_4_,1);
  bVar3 = QString::operator!=(pQVar6,"http");
  if (bVar3) {
    pQVar6 = (QString *)QUrl::scheme(param_2);
    bVar2 = true;
    local_1e8 = (QTypedArrayData<unsigned_short> *)CONCAT44(local_1e8._4_4_,3);
    bVar3 = QString::operator!=(pQVar6,"https");
    if (!bVar3) goto LAB_14075266f;
    bVar3 = true;
  }
  else {
LAB_14075266f:
    bVar3 = false;
  }
  if (bVar2) {
    QString::~QString((QString *)&local_1e0);
  }
  QString::~QString(local_1d8);
  if (bVar3) {
    iVar15 = 0x21;
    pcVar14 = "Error:URL must start with \'http:\'";
  }
  else {
    plVar7 = (longlong *)QUrl::path(param_2,local_1d8,0x7f00000);
    iVar15 = *(int *)(*plVar7 + 4);
    QString::~QString(local_1d8);
    if (iVar15 == 0) {
      iVar15 = 0x1a;
      pcVar14 = "Error:URL\'s path is empty.";
    }
    else if (*(int *)(*(longlong *)param_3 + 4) == 0) {
      iVar15 = 0x17;
      pcVar14 = "Error:invalid filePath.";
    }
    else {
      QFile::setFileName((QFile *)(param_1 + 5),param_3);
      cVar4 = (**(code **)((longlong)param_1[5] + 0x60))(param_1 + 5,3);
      if (cVar4 != '\0') {
        QString::operator=((QString *)(param_1 + 8),param_3);
        pQVar8 = (QUrl *)QUrl::QUrl((QUrl *)local_1d8);
        QNetworkRequest::QNetworkRequest(local_1d0,pQVar8);
        QUrl::~QUrl((QUrl *)local_1d8);
        QNetworkRequest::setUrl(local_1d0,param_2);
        QNetworkAccessManager::clearAccessCache(param_1[2]);
        QNetworkAccessManager::clearConnectionCache(param_1[2]);
        NVar5 = QNetworkAccessManager::networkAccessible(param_1[2]);
        if (NVar5 == 0) {
          QNetworkAccessManager::setNetworkAccessible(param_1[2],1);
        }
        pQVar9 = QNetworkAccessManager::get(param_1[2],local_1d0);
        param_1[3] = pQVar9;
        QObject::connect((QObject *)&local_1e0,(char *)pQVar9,(QObject *)"2readyRead()",
                         (char *)param_1,0x410ad2d8);
        QMetaObject::Connection::~Connection((Connection *)&local_1e0);
        QObject::connect((QObject *)&local_1e0,param_1[3],
                         (QObject *)"2downloadProgress(qint64, qint64)",(char *)param_1,0x410ad300);
        QMetaObject::Connection::~Connection((Connection *)&local_1e0);
        local_1e8 = (QTypedArrayData<unsigned_short> *)thunk_FUN_140752b40;
        local_1e0 = error_exref;
        ppvVar1 = param_1[3];
        local_1c0 = (undefined4 *)thunk_FUN_140bd99d4(0x18);
        if (local_1c0 != (undefined4 *)0x0) {
          *local_1c0 = 1;
          *(undefined1 **)(local_1c0 + 2) = &LAB_140030576;
          *(QTypedArrayData<unsigned_short> **)(local_1c0 + 4) = local_1e8;
          puVar10 = local_1c0;
        }
        QObject::connectImpl
                  (local_1c8,ppvVar1,(QObject *)&local_1e0,param_1,(QSlotObjectBase *)&local_1e8,
                   (ConnectionType)puVar10,(int *)((ulonglong)in_stack_fffffffffffffdfc << 0x20),
                   (QMetaObject *)0x0);
        QMetaObject::Connection::~Connection((Connection *)local_1c8);
        pcVar14 = 
        "D:\\jenkins_home\\workspace\\RevoMetro\\source\\ui\\ota\\download\\HttpDownload.cpp";
        pcVar11 = strrchr("D:\\jenkins_home\\workspace\\RevoMetro\\source\\ui\\ota\\download\\HttpDownload.cpp"
                          ,0x5c);
        if (pcVar11 != (char *)0x0) {
          pcVar14 = strrchr("D:\\jenkins_home\\workspace\\RevoMetro\\source\\ui\\ota\\download\\HttpDownload.cpp"
                            ,0x5c);
          pcVar14 = pcVar14 + 1;
        }
        uVar12 = thunk_FUN_14020d7a0(local_1b8,pcVar14);
        lVar13 = thunk_FUN_14025d640(local_198,2,uVar12,0x5b);
        thunk_FUN_14023f8d0(lVar13 + 0x60,"timer start");
        thunk_FUN_14025e9d0(local_198);
        QTimer::start(param_1[7],30000);
        QNetworkRequest::~QNetworkRequest(local_1d0);
        return 1;
      }
      iVar15 = 0x17;
      pcVar14 = "Error:Cannot open file.";
    }
  }
LAB_1407525e8:
  local_1e8 = QString::fromAscii_helper(pcVar14,iVar15);
  thunk_FUN_140752b30(param_1,&local_1e8);
  QString::~QString((QString *)&local_1e8);
  return 0;
}


