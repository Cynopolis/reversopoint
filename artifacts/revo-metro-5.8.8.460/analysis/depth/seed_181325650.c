// FUN_181325650 @ 181325650  size=450
// seed 0x181325650

undefined8
FUN_181325650(longlong param_1,float *param_2,double param_3,double param_4,double param_5,
             double *param_6,double *param_7,double *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  double dVar10;
  
  fVar1 = param_2[8];
  fVar2 = param_2[4];
  param_3 = param_3 / (double)*(float *)(param_1 + 0xcc);
  fVar3 = param_2[6];
  param_5 = param_5 / (double)*(float *)(param_1 + 0xd4);
  param_4 = param_4 / (double)*(float *)(param_1 + 0xd0);
  fVar4 = param_2[5];
  fVar5 = param_2[7];
  fVar6 = param_2[10];
  fVar7 = param_2[9];
  fVar8 = param_2[0xb];
  dVar10 = DAT_183239460 /
           ((double)param_2[0xc] * param_3 + (double)param_2[0xd] * param_4 +
            (double)param_2[0xe] * param_5 + (double)param_2[0xf]);
  *param_6 = ((double)param_2[1] * param_4 + (double)*param_2 * param_3 +
              (double)param_2[2] * param_5 + (double)param_2[3]) * dVar10;
  *param_7 = dVar10 * ((double)fVar2 * param_3 + (double)fVar4 * param_4 + (double)fVar3 * param_5 +
                      (double)fVar5);
  bVar9 = (double)CONCAT44((uint)((ulonglong)(param_5 - DAT_183257718) >> 0x20) &
                           DAT_18323ce70._4_4_,
                           SUB84(param_5 - DAT_183257718,0) & (uint)DAT_18323ce70) <= DAT_183257680;
  *param_8 = dVar10 * ((double)fVar1 * param_3 + (double)fVar7 * param_4 + (double)fVar6 * param_5 +
                      (double)fVar8);
  if (bVar9) {
    *param_8 = -NAN;
  }
  return 0;
}


