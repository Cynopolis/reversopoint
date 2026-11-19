// 14065ca30  FUN_14065ca30  size=0x59  calls ~QUrl (site 14065ca63)

void FUN_14065ca30(int param_1,longlong param_2)

{
  QUrl *pQVar1;
  QString local_18 [24];
  
  if (param_1 == 0) {
    if (param_2 != 0) {
      FUN_140036f43(param_2,0x18);
      return;
    }
  }
  else if (param_1 == 1) {
    pQVar1 = (QUrl *)QUrl::fromLocalFile(local_18);
    QDesktopServices::openUrl(pQVar1);
    QUrl::~QUrl((QUrl *)local_18);
    return;
  }
  return;
}


