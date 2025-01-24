/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ert_main.c
 *
 * Code generated for Simulink model 'racecar_shiftlight'.
 *
 * Model version                  : 1.29
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Thu Jan 23 21:26:02 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "racecar_shiftlight.h"
#include "rtwtypes.h"
#include "MW_target_hardware_resources.h"

volatile int IsrOverrun = 0;
static boolean_T OverrunFlag = 0;
void rt_OneStep(void)
{
  /* Check for overrun. Protect OverrunFlag against preemption */
  if (OverrunFlag++) {
    IsrOverrun = 1;
    OverrunFlag--;
    return;
  }

  enableTimer0Interrupt();
  racecar_shiftlight_step();

  /* Get model outputs here */
  disableTimer0Interrupt();
  OverrunFlag--;
}

volatile boolean_T stopRequested;
volatile boolean_T runModel;
int main(void)
{
  float modelBaseRate = 0.001;
  float systemClock = 200;

  /* Initialize variables */
  stopRequested = false;
  runModel = false;
  c2000_flash_init();
  init_board();

#if defined(MW_EXEC_PROFILER_ON) || (defined(MW_EXTMODE_RUNNING) && !defined(XCP_TIMESTAMP_BASED_ON_SIMULATION_TIME))

  hardwareTimer1Init();

#endif

  ;
  rtmSetErrorStatus(racecar_shiftlight_M, 0);
  racecar_shiftlight_initialize();
  globalInterruptDisable();
  configureTimer0(modelBaseRate, systemClock);
  runModel = rtmGetErrorStatus(racecar_shiftlight_M) == (NULL);
  enableTimer0Interrupt();
  config_ePWM_TBSync();
  StartDMA();
  globalInterruptEnable();
  while (runModel) {
    stopRequested = !(rtmGetErrorStatus(racecar_shiftlight_M) == (NULL));
  }

  /* Terminate model */
  racecar_shiftlight_terminate();
  globalInterruptDisable();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
