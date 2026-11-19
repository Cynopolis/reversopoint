// 1407f1d80  FUN_1407f1d80  size=0x4a  calls ~QUrl (site 1407f1db5)

void FUN_1407f1d80(longlong *param_1,undefined8 param_2)

{
  QUrl *pQVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  pQVar1 = (QUrl *)QUrl::QUrl((QUrl *)local_res10,(QString *)(*param_1 + 0x88),0);
  QDesktopServices::openUrl(pQVar1);
  QUrl::~QUrl((QUrl *)local_res10);
                    /* WARNING: Could not recover jumptable at 0x0001407f1dc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QWidget::close((QWidget *)*param_1);
  return;
}


