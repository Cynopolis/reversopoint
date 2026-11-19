// 14073a210  FUN_14073a210  size=0x3f0  calls ~QUrl (site 14073a5b4)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14073a210(QObject *param_1,QString *param_2,QWidget *param_3)

{
  QWidget *this;
  QMessageLogger *this_00;
  QDebug *this_01;
  QWebEngineView *this_02;
  QWebEngineSettings *this_03;
  QWebChannel *this_04;
  QWebEnginePage *pQVar1;
  QRect *this_05;
  QSize *pQVar2;
  QString *pQVar3;
  QUrl *pQVar4;
  QWebEngineView *pQVar5;
  QWebChannel *this_06;
  undefined1 auStackY_b8 [32];
  undefined *local_88;
  QTypedArrayData<unsigned_short> *local_80;
  undefined4 local_78;
  QString local_70 [8];
  QString local_68 [8];
  QString local_60 [16];
  QWebEngineView *local_50 [4];
  ulonglong local_30;
  
  local_30 = DAT_141a19280 ^ (ulonglong)auStackY_b8;
  this_06 = (QWebChannel *)0x0;
  local_78 = 0;
  this_00 = (QMessageLogger *)
            QMessageLogger::QMessageLogger
                      ((QMessageLogger *)local_50,
                       "D:\\jenkins_home\\workspace\\RevoMetro\\source\\ui\\guide\\guideview.cpp",
                       100,
                       "void __cdecl GuideView::showGuide(const class QString &,class QWidget *)");
  this_01 = (QDebug *)QMessageLogger::debug(this_00);
  QDebug::operator<<(this_01,"showGuide");
  QDebug::~QDebug((QDebug *)&local_88);
  thunk_FUN_140739ab0(param_1);
  *(QWidget **)(param_1 + 0x28) = param_3;
  QString::operator=((QString *)(param_1 + 0x20),param_2);
  this_02 = (QWebEngineView *)thunk_FUN_140bd99d4(0x38);
  pQVar5 = (QWebEngineView *)this_06;
  local_50[0] = this_02;
  if (this_02 != (QWebEngineView *)0x0) {
    QWebEngineView::QWebEngineView(this_02,(QWidget *)0x0);
    *(undefined ***)this_02 = QWebEngineView::vftable;
    *(undefined ***)(this_02 + 0x10) = QWebEngineView::vftable;
    pQVar5 = this_02;
  }
  *(QWebEngineView **)(param_1 + 0x18) = pQVar5;
  this_03 = QWebEngineView::settings(pQVar5);
  local_80 = QString::fromAscii_helper("Source Han Sans CN Medium",0x19);
  QWebEngineSettings::setFontFamily(this_03,0,(QString *)&local_80);
  QWebEngineSettings::setFontFamily(this_03,1,(QString *)&local_80);
  QWebEngineSettings::setFontFamily(this_03,2,(QString *)&local_80);
  QWebEngineSettings::setFontFamily(this_03,3,(QString *)&local_80);
  QWebEngineSettings::setFontFamily(this_03,4,(QString *)&local_80);
  QWebEngineSettings::setFontFamily(this_03,5,(QString *)&local_80);
  QWebEngineSettings::setFontFamily(this_03,6,(QString *)&local_80);
  QWebEngineSettings::setFontSize(this_03,0,0xe);
  QWebEngineSettings::setFontSize(this_03,1,0xe);
  QWebEngineSettings::setFontSize(this_03,2,0xe);
  QWebEngineSettings::setFontSize(this_03,3,0xe);
  this_04 = (QWebChannel *)thunk_FUN_140bd99d4(0x10);
  local_50[0] = (QWebEngineView *)this_04;
  if (this_04 != (QWebChannel *)0x0) {
    QWebChannel::QWebChannel(this_04,*(QObject **)(param_1 + 0x18));
    *(undefined ***)this_04 = QWebChannel::vftable;
    this_06 = this_04;
  }
  local_88 = &DAT_141a17280;
  QWebChannel::registerObject(this_06,(QString *)&local_88,param_1);
  QString::~QString((QString *)&local_88);
  pQVar1 = QWebEngineView::page(*(QWebEngineView **)(param_1 + 0x18));
  QWebEnginePage::setWebChannel(pQVar1,this_06);
  pQVar1 = QWebEngineView::page(*(QWebEngineView **)(param_1 + 0x18));
  QColor::QColor((QColor *)local_50,0x13);
  QWebEnginePage::setBackgroundColor(pQVar1,(QColor *)local_50);
  QWidget::setContextMenuPolicy(*(QWidget **)(param_1 + 0x18),0);
  QWidget::grabGesture(*(QWidget **)(param_1 + 0x18),4,4);
  QObject::connect((QObject *)&local_88,*(char **)(param_1 + 0x18),(QObject *)"2loadFinished(bool)",
                   (char *)param_1,0x410ab390);
  QMetaObject::Connection::~Connection((Connection *)&local_88);
  QWidget::setParent(*(QWidget **)(param_1 + 0x18),param_3);
  local_88 = (undefined *)0x0;
  QWidget::move(*(QWidget **)(param_1 + 0x18),(QPoint *)&local_88);
  this = *(QWidget **)(param_1 + 0x18);
  this_05 = (QRect *)QWidget::frameGeometry(param_3);
  pQVar2 = (QSize *)QRect::size(this_05);
  QWidget::setFixedSize(this,pQVar2);
  pQVar5 = *(QWebEngineView **)(param_1 + 0x18);
  pQVar3 = (QString *)QCoreApplication::applicationDirPath();
  QString::QString((QString *)&local_88,pQVar3);
  local_78 = 1;
  pQVar3 = (QString *)QString::fromUtf8((char *)local_68,0x41053a22);
  QString::append((QString *)&local_88,pQVar3);
  QString::~QString(local_68);
  QString::QString(local_70,(QString *)&local_88);
  local_78 = 3;
  pQVar3 = (QString *)QString::fromUtf8((char *)local_68,0x410ab3c8);
  QString::append(local_70,pQVar3);
  QString::~QString(local_68);
  pQVar4 = (QUrl *)QUrl::fromLocalFile(local_60);
  QWebEngineView::setUrl(pQVar5,pQVar4);
  QUrl::~QUrl((QUrl *)local_60);
  QString::~QString(local_70);
  QString::~QString((QString *)&local_88);
  QString::~QString((QString *)local_50);
  QString::~QString((QString *)&local_80);
  return;
}


