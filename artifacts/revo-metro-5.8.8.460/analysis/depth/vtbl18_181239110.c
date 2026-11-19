// vtable slot 18 (thunk 0x18000426e) -> FUN_181239110 @ 0x181239110  size=1702

undefined8
FUN_181239110(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,int param_5)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  undefined1 local_50;
  
  cVar6 = thunk_FUN_18122f510();
  if (cVar6 == '\0') {
    thunk_FUN_18317f440("[SDK ERROR] Camera::getPairedFrame, Camera status was disconnect\r\n");
    uVar9 = 3;
  }
  else {
    *(undefined1 *)(param_1 + 0x128) = 1;
    local_58 = param_1 + 0x138;
    local_50 = 0;
    iVar7 = _Mtx_lock(local_58);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(5);
    }
    if (*(int *)(param_1 + 0x184) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0x184) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(6);
    }
    local_50 = 1;
    local_88 = (longlong *)(longlong)param_5;
    plVar10 = (longlong *)thunk_FUN_1811aefe0(&local_78,&local_88);
    while ((uVar13 = *(ulonglong *)(param_1 + 400), uVar13 == 0 ||
           (*(longlong *)(param_1 + 0x1a0) == 0))) {
      do {
        lVar11 = _Query_perf_frequency();
        lVar12 = _Query_perf_counter();
        if (lVar11 == 10000000) {
          lVar12 = lVar12 * 100;
        }
        else if (lVar11 == 24000000) {
          lVar11 = SUB168(SEXT816(-0x4d0b03f86b6f730d) * SEXT816(lVar12),8) + lVar12;
          lVar14 = (lVar11 >> 0x18) - (lVar11 >> 0x3f);
          lVar11 = (lVar12 + lVar14 * -24000000) * 1000000000;
          lVar11 = SUB168(SEXT816(-0x4d0b03f86b6f730d) * SEXT816(lVar11),8) + lVar11;
          lVar12 = ((lVar11 >> 0x18) - (lVar11 >> 0x3f)) + lVar14 * 1000000000;
        }
        else {
          lVar12 = ((lVar12 % lVar11) * 1000000000) / lVar11 + (lVar12 / lVar11) * 1000000000;
        }
        if (*plVar10 <= lVar12) {
          uVar13 = *(ulonglong *)(param_1 + 400);
          if ((uVar13 == 0) || (*(longlong *)(param_1 + 0x1a0) == 0)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) {
            thunk_FUN_18317f440("[SDK ERROR] getPairedFrame frame group timeout(%d)\n",param_5);
            uVar9 = 7;
            goto LAB_181239775;
          }
          if ((uVar13 != 0) && (*(longlong *)(param_1 + 0x1a0) != 0)) goto LAB_1812392fe;
          uVar9 = 9;
          goto LAB_181239775;
        }
        local_88 = (longlong *)(*plVar10 - lVar12);
        uVar8 = thunk_FUN_1811adb20(&local_88);
        iVar7 = thunk_FUN_1831867a4(param_1 + 0xbf8,local_58,uVar8);
      } while (iVar7 != 0);
    }
LAB_1812392fe:
    if (*(int *)(param_1 + 0xbc) - 0x20U < 2) {
      if (uVar13 < 2) {
        thunk_FUN_18317f440("[SDK ERROR] getPairedFrame: m_pairedFrames size < 2\r\n");
        uVar9 = 0x12;
      }
      else {
        plVar10 = (longlong *)**(longlong **)(param_1 + 0x188);
        if (plVar10[3] != 0) {
          LOCK();
          piVar1 = (int *)(plVar10[3] + 8);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        plVar2 = (longlong *)plVar10[2];
        local_80 = (longlong *)plVar10[3];
        lVar11 = *plVar10;
        if (*(longlong *)(lVar11 + 0x18) != 0) {
          LOCK();
          piVar1 = (int *)(*(longlong *)(lVar11 + 0x18) + 8);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        local_78 = *(undefined8 *)(lVar11 + 0x10);
        plVar10 = *(longlong **)(lVar11 + 0x18);
        lVar11 = **(longlong **)(param_1 + 0x198);
        plVar15 = *(longlong **)**(undefined8 **)(lVar11 + 0x10);
        local_88 = plVar2;
        local_70 = plVar10;
        dVar17 = (double)(**(code **)(*plVar2 + 0x10))(plVar2);
        dVar18 = (double)(**(code **)(*plVar15 + 0x10))(plVar15);
        if (dVar18 <= dVar17) {
          lVar11 = (**(code **)(*plVar2 + 0x50))(plVar2);
          cVar6 = *(char *)(lVar11 + 0x12);
          plVar15 = (longlong *)**(longlong **)(param_1 + 0x198);
          if (plVar15 != *(longlong **)(param_1 + 0x198)) {
            do {
              puVar3 = *(undefined8 **)plVar15[2];
              if (puVar3[1] != 0) {
                LOCK();
                piVar1 = (int *)(puVar3[1] + 8);
                *piVar1 = *piVar1 + 1;
                UNLOCK();
              }
              plVar4 = (longlong *)*puVar3;
              plVar10 = (longlong *)puVar3[1];
              local_68 = plVar4;
              local_60 = plVar10;
              lVar11 = (**(code **)(*plVar4 + 0x50))(plVar4);
              if (*(char *)(lVar11 + 0x12) == cVar6) {
                dVar18 = (double)(**(code **)(*plVar2 + 0x10))(plVar2);
                dVar17 = (double)(**(code **)(*plVar4 + 0x10))(plVar4);
                if (dVar18 == dVar17) {
                  plVar2 = (longlong *)plVar15[2];
                  if (param_4 != plVar2) {
                    thunk_FUN_181200b00(param_4,*plVar2,plVar2[1] - *plVar2 >> 4);
                  }
                  *(longlong *)plVar15[1] = *plVar15;
                  *(longlong *)(*plVar15 + 8) = plVar15[1];
                  *(longlong *)(param_1 + 0x1a0) = *(longlong *)(param_1 + 0x1a0) + -1;
                  plVar2 = (longlong *)plVar15[3];
                  if (plVar2 != (longlong *)0x0) {
                    LOCK();
                    plVar10 = plVar2 + 1;
                    lVar11 = *plVar10;
                    *(int *)plVar10 = (int)*plVar10 + -1;
                    UNLOCK();
                    plVar10 = local_60;
                    if ((int)lVar11 == 1) {
                      (**(code **)*plVar2)(plVar2);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar2 + 0xc);
                      iVar7 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      plVar10 = local_60;
                      if (iVar7 == 1) {
                        (**(code **)(*plVar2 + 8))(plVar2);
                        plVar10 = local_60;
                      }
                    }
                  }
                  FUN_18001e0e2(plVar15,0x20);
                  plVar2 = local_60;
                  if (plVar10 != (longlong *)0x0) {
                    LOCK();
                    plVar10 = plVar10 + 1;
                    lVar11 = *plVar10;
                    *(int *)plVar10 = (int)*plVar10 + -1;
                    UNLOCK();
                    if ((int)lVar11 == 1) {
                      (**(code **)*local_60)(local_60);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar2 + 0xc);
                      iVar7 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar7 == 1) {
                        (**(code **)(*local_60 + 8))();
                      }
                    }
                  }
                  thunk_FUN_1811ce270(param_2,&local_88);
                  thunk_FUN_1811ce270(param_3,&local_78);
                  thunk_FUN_1811d3200(param_1 + 0x188);
                  thunk_FUN_1811d3200(param_1 + 0x188);
                  plVar10 = local_70;
                  if (local_70 != (longlong *)0x0) {
                    LOCK();
                    plVar2 = local_70 + 1;
                    lVar11 = *plVar2;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    UNLOCK();
                    if ((int)lVar11 == 1) {
                      (**(code **)*local_70)(local_70);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar10 + 0xc);
                      iVar7 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar7 == 1) {
                        (**(code **)(*local_70 + 8))();
                      }
                    }
                  }
                  plVar10 = local_80;
                  if (local_80 != (longlong *)0x0) {
                    LOCK();
                    plVar2 = local_80 + 1;
                    lVar11 = *plVar2;
                    *(int *)plVar2 = (int)*plVar2 + -1;
                    UNLOCK();
                    if ((int)lVar11 == 1) {
                      (**(code **)*local_80)(local_80);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar10 + 0xc);
                      iVar7 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar7 == 1) {
                        (**(code **)(*local_80 + 8))();
                      }
                    }
                  }
                  uVar9 = 0;
                  goto LAB_181239775;
                }
              }
              if (plVar10 != (longlong *)0x0) {
                LOCK();
                plVar4 = plVar10 + 1;
                lVar11 = *plVar4;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)lVar11 == 1) {
                  (**(code **)*plVar10)(plVar10);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar10 + 0xc);
                  iVar7 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*plVar10 + 8))(plVar10);
                  }
                }
              }
              plVar15 = (longlong *)*plVar15;
              plVar10 = local_70;
            } while (plVar15 != (longlong *)*(longlong *)(param_1 + 0x198));
          }
          thunk_FUN_18317f440("[SDK ERROR] LC frame not match Laser group frames\r\n");
        }
        else {
          thunk_FUN_1811d3200(param_1 + 0x188);
          thunk_FUN_1811d3200(param_1 + 0x188);
          uVar8 = (**(code **)(**(longlong **)**(undefined8 **)(lVar11 + 0x10) + 0x10))();
          uVar16 = (**(code **)(*plVar2 + 0x10))(plVar2);
          thunk_FUN_18317f440("[SDK ERROR] drop LC frame, not match Laser group frames, depthTimeStamp = %f, laserTimeStamp = %f\r\n"
                              ,uVar16,uVar8);
        }
        plVar2 = local_70;
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar10 + 1;
          lVar11 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_70 + 8))();
            }
          }
        }
        plVar10 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_80 + 1;
          lVar11 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*local_80 + 8))();
            }
          }
        }
        uVar9 = 0x12;
      }
    }
    else {
      thunk_FUN_1811ce270(param_2,**(longlong **)(param_1 + 0x188) + 0x10);
      thunk_FUN_1811d3200(param_1 + 0x188);
      thunk_FUN_1811ce270(param_3,**(longlong **)(param_1 + 0x188) + 0x10);
      thunk_FUN_1811d3200(param_1 + 0x188);
      plVar10 = *(longlong **)(**(longlong **)(param_1 + 0x198) + 0x10);
      if (param_4 != plVar10) {
        thunk_FUN_181200b00(param_4,*plVar10,plVar10[1] - *plVar10 >> 4);
      }
      plVar10 = (longlong *)**(longlong **)(param_1 + 0x198);
      lVar11 = *plVar10;
      *(longlong *)(param_1 + 0x1a0) = *(longlong *)(param_1 + 0x1a0) + -1;
      *(longlong *)plVar10[1] = lVar11;
      *(longlong *)(lVar11 + 8) = plVar10[1];
      plVar2 = (longlong *)plVar10[3];
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar15 = plVar2 + 1;
        lVar11 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2);
          }
        }
      }
      FUN_18001e0e2(plVar10,0x20);
      uVar9 = 0;
    }
LAB_181239775:
    _Mtx_unlock(local_58);
  }
  return uVar9;
}


