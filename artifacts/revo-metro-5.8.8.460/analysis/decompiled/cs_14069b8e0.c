// 14069b8e0  FUN_14069b8e0  size=0x59  calls ~QUrl (site 14069b918)

void FUN_14069b8e0(undefined8 *param_1)

{
  QString *pQVar1;
  QUrl *pQVar2;
  QUrl local_res8 [8];
  QString local_res10 [24];
  
  pQVar1 = (QString *)thunk_FUN_14069bba0(*param_1,local_res10);
  pQVar2 = (QUrl *)QUrl::QUrl(local_res8,pQVar1,0);
  QDesktopServices::openUrl(pQVar2);
  QUrl::~QUrl(local_res8);
  QString::~QString(local_res10);
                    /* WARNING: Could not recover jumptable at 0x00014069b932. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QWidget::close((QWidget *)*param_1);
  return;
}


