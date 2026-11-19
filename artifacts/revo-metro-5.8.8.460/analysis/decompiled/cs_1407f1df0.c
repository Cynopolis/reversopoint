// 1407f1df0  FUN_1407f1df0  size=0x6e  calls ~QUrl (site 1407f1e2b)

void FUN_1407f1df0(int param_1,longlong param_2)

{
  QUrl *pQVar1;
  QUrl local_18 [16];
  
  if (param_1 == 0) {
    if (param_2 != 0) {
      FUN_140036f43(param_2,0x18);
      return;
    }
  }
  else if (param_1 == 1) {
    pQVar1 = (QUrl *)QUrl::QUrl(local_18,(QString *)(*(longlong *)(param_2 + 0x10) + 0x88),0);
    QDesktopServices::openUrl(pQVar1);
    QUrl::~QUrl(local_18);
                    /* WARNING: Could not recover jumptable at 0x0001407f1e3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    QWidget::close(*(QWidget **)(param_2 + 0x10));
    return;
  }
  return;
}


