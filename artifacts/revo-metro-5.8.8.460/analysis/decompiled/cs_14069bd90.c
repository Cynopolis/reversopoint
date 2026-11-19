// 14069bd90  FUN_14069bd90  size=0x81  calls ~QUrl (site 14069bdd2)

void FUN_14069bd90(int param_1,longlong param_2)

{
  QString *pQVar1;
  QUrl *pQVar2;
  QUrl local_18 [8];
  QString local_10 [8];
  
  if (param_1 == 0) {
    if (param_2 != 0) {
      FUN_140036f43(param_2,0x18);
      return;
    }
  }
  else if (param_1 == 1) {
    pQVar1 = (QString *)thunk_FUN_14069bba0(*(undefined8 *)(param_2 + 0x10),local_10);
    pQVar2 = (QUrl *)QUrl::QUrl(local_18,pQVar1,0);
    QDesktopServices::openUrl(pQVar2);
    QUrl::~QUrl(local_18);
    QString::~QString(local_10);
                    /* WARNING: Could not recover jumptable at 0x00014069bded. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    QWidget::close(*(QWidget **)(param_2 + 0x10));
    return;
  }
  return;
}


