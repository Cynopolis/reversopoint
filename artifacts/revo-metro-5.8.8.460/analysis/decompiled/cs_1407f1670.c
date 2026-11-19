// 1407f1670  FUN_1407f1670  size=0x4a  calls ~QUrl (site 1407f16a5)

void FUN_1407f1670(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  QUrl *pQVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  pQVar1 = (QUrl *)QUrl::QUrl((QUrl *)local_res18,(QString *)(*param_1 + 0x88),0);
  QDesktopServices::openUrl(pQVar1);
  QUrl::~QUrl((QUrl *)local_res18);
                    /* WARNING: Could not recover jumptable at 0x0001407f16b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QWidget::close((QWidget *)*param_1);
  return;
}


