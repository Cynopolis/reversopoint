// 1407f1c40  FUN_1407f1c40  size=0x46  calls ~QUrl (site 1407f1c71)

void FUN_1407f1c40(longlong *param_1)

{
  QUrl *pQVar1;
  QUrl local_res8 [32];
  
  pQVar1 = (QUrl *)QUrl::QUrl(local_res8,(QString *)(*param_1 + 0x88),0);
  QDesktopServices::openUrl(pQVar1);
  QUrl::~QUrl(local_res8);
                    /* WARNING: Could not recover jumptable at 0x0001407f1c7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  QWidget::close((QWidget *)*param_1);
  return;
}


