// 14069ba60  FUN_14069ba60  size=0x5d  calls ~QUrl (site 14069ba9c)

void FUN_14069ba60(undefined8 *param_1,undefined8 param_2)

{
  QString *pQVar1;
  QUrl *pQVar2;
  QString local_res8 [8];
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  pQVar1 = (QString *)thunk_FUN_14069bba0(*param_1,local_res8);
  pQVar2 = (QUrl *)QUrl::QUrl((QUrl *)local_res10,pQVar1,0);
  QDesktopServices::openUrl(pQVar2);
  QUrl::~QUrl((QUrl *)local_res10);
  QString::~QString(local_res8);
                    /* WARNING: Could not recover jumptable at 0x00014069bab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QWidget::close((QWidget *)*param_1);
  return;
}


