// 1403df5a0  FUN_1403df5a0  size=0x58d  calls ~QNetworkRequest (site 1403df75c)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1403df5a0(QObject *param_1)

{
  longlong *_Str;
  char *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  QTypedArrayData<unsigned_short> *pQVar5;
  undefined8 ***pppuVar6;
  ulonglong uVar7;
  bool bVar8;
  int iVar9;
  QObject *pQVar10;
  QVariant *this;
  QListData *this_00;
  uint *puVar11;
  void **ppvVar12;
  int *piVar13;
  QNetworkRequest *this_01;
  QUrl *pQVar14;
  undefined8 uVar15;
  QCoreApplication *pQVar16;
  size_t sVar17;
  undefined8 ****_Buf1;
  QString *pQVar18;
  QString *this_02;
  longlong *plVar19;
  longlong *plVar20;
  undefined1 auStackY_f8 [32];
  QTypedArrayData<unsigned_short> *local_c8;
  Data *local_c0;
  QString local_b8 [8];
  QTypedArrayData<unsigned_short> *local_b0;
  QTypedArrayData<unsigned_short> *local_a8;
  QTypedArrayData<unsigned_short> *local_a0;
  QDir local_98 [8];
  longlong *local_90 [2];
  QFile local_80 [16];
  QTypedArrayData<unsigned_short> **local_70;
  QTypedArrayData<unsigned_short> **local_68;
  QTypedArrayData<unsigned_short> **local_60;
  undefined8 ***local_50 [2];
  size_t local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_141a19280 ^ (ulonglong)auStackY_f8;
  local_c8 = (QTypedArrayData<unsigned_short> *)((ulonglong)local_c8 & 0xffffffff00000000);
  pQVar10 = QObject::sender(param_1);
  pQVar10 = QMetaObject::cast((QMetaObject *)staticMetaObject_exref,pQVar10);
  this = (QVariant *)QNetworkReply::attribute((QNetworkReply *)pQVar10,(Attribute)local_90);
  iVar9 = QVariant::toInt(this,(bool *)0x0);
  QVariant::~QVariant((QVariant *)local_90);
  this_00 = (QListData *)QStandardPaths::standardLocations((StandardLocation)&local_c0);
  puVar11 = (uint *)thunk_FUN_14020a900(*(undefined8 *)this_00);
  if (1 < *puVar11) {
    thunk_FUN_140266420(this_00,*(undefined4 *)(*(longlong *)this_00 + 4));
  }
  ppvVar12 = QListData::begin(this_00);
  thunk_FUN_14025f9b0(local_b8,ppvVar12,"/images/");
  piVar13 = (int *)thunk_FUN_14020a900(local_c0);
  if (*piVar13 == 0) {
LAB_1403df695:
    iVar2 = *(int *)(local_c0 + 8);
    pQVar18 = (QString *)(local_c0 + ((longlong)*(int *)(local_c0 + 0xc) + 2) * 8);
    while (pQVar18 != (QString *)(local_c0 + ((longlong)iVar2 + 2) * 8)) {
      pQVar18 = pQVar18 + -8;
      QString::~QString(pQVar18);
    }
    QListData::dispose(local_c0);
  }
  else if (*piVar13 != -1) {
    piVar13 = (int *)thunk_FUN_14020a910(local_c0);
    LOCK();
    iVar2 = *piVar13;
    *piVar13 = *piVar13 + -1;
    UNLOCK();
    if (iVar2 == 1) goto LAB_1403df695;
  }
  QDir::QDir(local_98,local_b8);
  bVar8 = QDir::exists(local_98);
  if (!bVar8) {
    QDir::mkpath(local_98,local_b8);
  }
  if ((iVar9 != 200) && (iVar9 != 0x12e)) goto LAB_1403dfaec;
  this_01 = (QNetworkRequest *)QNetworkReply::request((QNetworkReply *)pQVar10);
  pQVar14 = (QUrl *)QNetworkRequest::url(this_01);
  QUrl::fileName(pQVar14,&local_c0,0x7f00000);
  QUrl::~QUrl((QUrl *)&local_a0);
  QNetworkRequest::~QNetworkRequest((QNetworkRequest *)&local_a8);
  QString::QString((QString *)&local_b0,local_b8);
  local_c8 = (QTypedArrayData<unsigned_short> *)CONCAT44(local_c8._4_4_,2);
  QString::append((QString *)&local_b0,(QString *)&local_c0);
  QFile::QFile(local_80,(QString *)&local_b0);
  QString::~QString((QString *)&local_b0);
  bVar8 = QFile::open(local_80,2);
  if (bVar8) {
    QIODevice::readAll((QIODevice *)pQVar10);
    QIODevice::write((QIODevice *)local_80,(QByteArray *)&local_c8);
    QFileDevice::close((QFileDevice *)local_80);
    QByteArray::~QByteArray((QByteArray *)&local_c8);
  }
  local_c8 = QString::fromAscii_helper(".zip",4);
  bVar8 = QString::endsWith((QString *)&local_c0,(QString *)&local_c8,1);
  QString::~QString((QString *)&local_c8);
  if (bVar8) {
    local_70 = &local_a0;
    QString::QString((QString *)&local_a0,local_b8);
    uVar15 = thunk_FUN_14027ac40(&local_a8,local_b8,&local_c0);
    thunk_FUN_1406d89e0(&local_c8,uVar15);
    piVar13 = (int *)thunk_FUN_14020a900(local_c8);
    if (*piVar13 == 0) {
LAB_1403df888:
      pQVar5 = local_c8;
      pQVar18 = (QString *)(local_c8 + ((longlong)*(int *)(local_c8 + 8) + 2) * 8);
      this_02 = (QString *)(local_c8 + ((longlong)*(int *)(local_c8 + 0xc) + 2) * 8);
      while (this_02 != pQVar18) {
        this_02 = this_02 + -8;
        QString::~QString(this_02);
      }
      QListData::dispose((Data *)pQVar5);
    }
    else if (*piVar13 != -1) {
      piVar13 = (int *)thunk_FUN_14020a910(local_c8);
      LOCK();
      iVar9 = *piVar13;
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (iVar9 == 1) goto LAB_1403df888;
    }
    pQVar16 = QCoreApplication::instance();
    uVar15 = thunk_FUN_140265990(pQVar16);
    thunk_FUN_14054d7d0(uVar15,local_50);
    if (local_40 != 0) {
      pQVar16 = QCoreApplication::instance();
      uVar15 = thunk_FUN_140265990(pQVar16);
      thunk_FUN_14054d870(uVar15,local_90);
      uVar7 = local_38;
      pppuVar6 = local_50[0];
      plVar20 = local_90[0];
      for (plVar19 = (longlong *)*local_90[0]; plVar19 != plVar20; plVar19 = (longlong *)*plVar19) {
        _Str = plVar19 + 6;
        sVar17 = strlen((char *)_Str);
        _Buf1 = local_50;
        if (0xf < uVar7) {
          _Buf1 = (undefined8 ****)pppuVar6;
        }
        if ((local_40 == sVar17) &&
           ((local_40 == 0 || (iVar9 = memcmp(_Buf1,_Str,local_40), iVar9 == 0)))) {
          local_68 = &local_b0;
          pcVar1 = (char *)((longlong)plVar19 + 0x74);
          if (pcVar1 == (char *)0x0) {
            iVar9 = -1;
          }
          else {
            sVar17 = strlen(pcVar1);
            iVar9 = (int)sVar17;
          }
          local_b0 = QString::fromAscii_helper(pcVar1,iVar9);
          local_70 = &local_c8;
          pcVar1 = (char *)((longlong)plVar19 + 0x54);
          if (pcVar1 == (char *)0x0) {
            iVar9 = -1;
          }
          else {
            sVar17 = strlen(pcVar1);
            iVar9 = (int)sVar17;
          }
          local_c8 = QString::fromAscii_helper(pcVar1,iVar9);
          local_60 = &local_a8;
          if (_Str == (longlong *)0x0) {
            iVar9 = -1;
          }
          else {
            sVar17 = strlen((char *)_Str);
            iVar9 = (int)sVar17;
          }
          local_a8 = QString::fromAscii_helper((char *)_Str,iVar9);
          plVar19 = plVar19 + 2;
          if (plVar19 == (longlong *)0x0) {
            iVar9 = -1;
          }
          else {
            sVar17 = strlen((char *)plVar19);
            iVar9 = (int)sVar17;
          }
          local_a0 = QString::fromAscii_helper((char *)plVar19,iVar9);
          thunk_FUN_1403e4520(param_1,&local_a0);
          plVar20 = local_90[0];
          break;
        }
      }
      *(undefined8 *)plVar20[1] = 0;
      puVar4 = (undefined8 *)*plVar20;
      while (puVar4 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*puVar4;
        FUN_140036f43(puVar4,0xb8);
        puVar4 = puVar3;
      }
      FUN_140036f43(local_90[0],0xb8);
    }
    if (0xf < local_38) {
      if ((0xfff < local_38 + 1) &&
         (0x1f < (ulonglong)((longlong)local_50[0] + (-8 - (longlong)local_50[0][-1])))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_140036f43();
    }
  }
  QFile::~QFile(local_80);
  QString::~QString((QString *)&local_c0);
LAB_1403dfaec:
  QDir::~QDir(local_98);
  QString::~QString(local_b8);
  return;
}


