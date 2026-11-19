// 14069b060  FUN_14069b060  size=0x5d  calls ~QUrl (site 14069b09c)

void FUN_14069b060(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  QString *pQVar1;
  QUrl *pQVar2;
  QString local_res8 [16];
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  pQVar1 = (QString *)thunk_FUN_14069bba0(*param_1,local_res8);
  pQVar2 = (QUrl *)QUrl::QUrl((QUrl *)local_res18,pQVar1,0);
  QDesktopServices::openUrl(pQVar2);
  QUrl::~QUrl((QUrl *)local_res18);
  QString::~QString(local_res8);
                    /* WARNING: Could not recover jumptable at 0x00014069b0b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QWidget::close((QWidget *)*param_1);
  return;
}


