// 14065c8c0  FUN_14065c8c0  size=0x31  calls ~QUrl (site 14065c8e6)

void FUN_14065c8c0(void)

{
  QUrl *pQVar1;
  QString local_res8 [32];
  
  pQVar1 = (QUrl *)QUrl::fromLocalFile(local_res8);
  QDesktopServices::openUrl(pQVar1);
  QUrl::~QUrl((QUrl *)local_res8);
  return;
}


