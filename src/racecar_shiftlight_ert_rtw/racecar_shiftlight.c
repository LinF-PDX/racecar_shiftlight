/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: racecar_shiftlight.c
 *
 * Code generated for Simulink model 'racecar_shiftlight'.
 *
 * Model version                  : 1.58
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Fri Mar 14 18:49:57 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "racecar_shiftlight.h"
#include "rtwtypes.h"
#include <math.h>
#include "rt_nonfinite.h"
#include <string.h>
#include "racecar_shiftlight_private.h"
#define racecar_shif_IN_NO_ACTIVE_CHILD (0U)
#define racecar_shiftlight_IN_blue     (1U)
#define racecar_shiftlight_IN_green    (2U)
#define racecar_shiftlight_IN_red      (3U)

/* Exported block states */
uint16_T duty_cycle_table[396];        /* '<Root>/Data Store Memory' */

/* Block states (default storage) */
DW_racecar_shiftlight_T racecar_shiftlight_DW;

/* Real-time model */
static RT_MODEL_racecar_shiftlight_T racecar_shiftlight_M_;
RT_MODEL_racecar_shiftlight_T *const racecar_shiftlight_M =
  &racecar_shiftlight_M_;

/* Model step function */
void racecar_shiftlight_step(void)
{
  real_T tmp;
  int16_T i;
  int16_T rtb_sel;

  /* Chart: '<S1>/Chart1' */
  if (racecar_shiftlight_DW.temporalCounter_i1 < 1023U) {
    racecar_shiftlight_DW.temporalCounter_i1++;
  }

  if (racecar_shiftlight_DW.is_active_c5_racecar_shiftlight == 0U) {
    racecar_shiftlight_DW.is_active_c5_racecar_shiftlight = 1U;
    racecar_shiftlight_DW.temporalCounter_i1 = 0U;
    racecar_shiftlight_DW.is_c5_racecar_shiftlight = racecar_shiftlight_IN_red;
    rtb_sel = 0;
  } else {
    switch (racecar_shiftlight_DW.is_c5_racecar_shiftlight) {
     case racecar_shiftlight_IN_blue:
      if (racecar_shiftlight_DW.temporalCounter_i1 >= 1000U) {
        racecar_shiftlight_DW.temporalCounter_i1 = 0U;
        racecar_shiftlight_DW.is_c5_racecar_shiftlight =
          racecar_shiftlight_IN_red;
        rtb_sel = 0;
      } else {
        rtb_sel = 2;
      }
      break;

     case racecar_shiftlight_IN_green:
      if (racecar_shiftlight_DW.temporalCounter_i1 >= 1000U) {
        racecar_shiftlight_DW.temporalCounter_i1 = 0U;
        racecar_shiftlight_DW.is_c5_racecar_shiftlight =
          racecar_shiftlight_IN_blue;
        rtb_sel = 2;
      } else {
        rtb_sel = 1;
      }
      break;

     default:
      /* case IN_red: */
      if (racecar_shiftlight_DW.temporalCounter_i1 >= 1000U) {
        racecar_shiftlight_DW.temporalCounter_i1 = 0U;
        racecar_shiftlight_DW.is_c5_racecar_shiftlight =
          racecar_shiftlight_IN_green;
        rtb_sel = 1;
      } else {
        rtb_sel = 0;
      }
      break;
    }
  }

  /* End of Chart: '<S1>/Chart1' */

  /* MultiPortSwitch: '<S1>/Multiport Switch1' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S1>/Constant12'
   *  DataStoreWrite: '<S1>/Data Store Write'
   */
  for (i = 0; i < 396; i++) {
    switch (rtb_sel) {
     case 0:
      tmp = floor(racecar_shiftlight_P.all_red[i]);
      if (rtIsNaN(tmp) || rtIsInf(tmp)) {
        tmp = 0.0;
      } else {
        tmp = fmod(tmp, 65536.0);
      }

      duty_cycle_table[i] = tmp < 0.0 ? (uint16_T)-(int16_T)(uint16_T)-tmp :
        (uint16_T)tmp;
      break;

     case 1:
      tmp = floor(racecar_shiftlight_P.all_green[i]);
      if (rtIsNaN(tmp) || rtIsInf(tmp)) {
        tmp = 0.0;
      } else {
        tmp = fmod(tmp, 65536.0);
      }

      duty_cycle_table[i] = tmp < 0.0 ? (uint16_T)-(int16_T)(uint16_T)-tmp :
        (uint16_T)tmp;
      break;

     default:
      tmp = floor(racecar_shiftlight_P.all_blue[i]);
      if (rtIsNaN(tmp) || rtIsInf(tmp)) {
        tmp = 0.0;
      } else {
        tmp = fmod(tmp, 65536.0);
      }

      duty_cycle_table[i] = tmp < 0.0 ? (uint16_T)-(int16_T)(uint16_T)-tmp :
        (uint16_T)tmp;
      break;
    }
  }

  /* End of MultiPortSwitch: '<S1>/Multiport Switch1' */

  /* S-Function (c280xgpio_do): '<Root>/Digital Output' incorporates:
   *  Constant: '<Root>/Constant'
   */
  {
    if (racecar_shiftlight_P.Constant_Value) {
      GpioDataRegs.GPASET.bit.GPIO31 = 1U;
    } else {
      GpioDataRegs.GPACLEAR.bit.GPIO31 = 1U;
    }
  }

  /* S-Function (c280xgpio_do): '<Root>/Digital Output1' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  {
    if (racecar_shiftlight_P.Constant1_Value) {
      GpioDataRegs.GPBSET.bit.GPIO34 = 1U;
    } else {
      GpioDataRegs.GPBCLEAR.bit.GPIO34 = 1U;
    }
  }
}

/* Model initialize function */
void racecar_shiftlight_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(racecar_shiftlight_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&racecar_shiftlight_DW, 0,
                sizeof(DW_racecar_shiftlight_T));

  /* exported global states */
  (void) memset(&duty_cycle_table, 0,
                396U*sizeof(uint16_T));

  /* Start for S-Function (c280xgpio_do): '<Root>/Digital Output' */
  EALLOW;
  GpioCtrlRegs.GPAMUX2.all &= 0x3FFFFFFFU;
  GpioCtrlRegs.GPADIR.all |= 0x80000000U;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<Root>/Digital Output1' */
  EALLOW;
  GpioCtrlRegs.GPBMUX1.all &= 0xFFFFFFCFU;
  GpioCtrlRegs.GPBDIR.all |= 0x4U;
  EDIS;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
  memcpy(&duty_cycle_table[0], &racecar_shiftlight_P.all_off[0], 396U * sizeof
         (uint16_T));

  /* Start for S-Function (c2802xpwm): '<Root>/ePWM' */

  /*** Initialize ePWM8 modules ***/
  {
    /*  // Time Base Control Register
       EPwm8Regs.TBCTL.bit.CTRMODE              = 2U;          // Counter Mode
       EPwm8Regs.TBCTL.bit.SYNCOSEL             = 3U;          // Sync Output Select
       EPwm8Regs.TBCTL2.bit.SYNCOSELX           = 0U;          // Sync Output Select - additional options

       EPwm8Regs.TBCTL.bit.PRDLD                = 0U;          // Shadow select

       EPwm8Regs.TBCTL2.bit.PRDLDSYNC           = 0U;          // Shadow select

       EPwm8Regs.TBCTL.bit.PHSEN                = 0U;          // Phase Load Enable
       EPwm8Regs.TBCTL.bit.PHSDIR               = 0U;          // Phase Direction Bit
       EPwm8Regs.TBCTL.bit.HSPCLKDIV            = 0U;          // High Speed TBCLK Pre-scaler
       EPwm8Regs.TBCTL.bit.CLKDIV               = 0U;          // Time Base Clock Pre-scaler
     */
    EPwm8Regs.TBCTL.all = (EPwm8Regs.TBCTL.all & ~0x3FFFU) | 0x32U;
    EPwm8Regs.TBCTL2.all = (EPwm8Regs.TBCTL2.all & ~0xF000U) | 0x0U;

    /*-- Setup Time-Base (TB) Submodule --*/
    EPwm8Regs.TBPRD = 63U;             // Time Base Period Register

    /* // Time-Base Phase Register
       EPwm8Regs.TBPHS.bit.TBPHS               = 0U;          // Phase offset register
     */
    EPwm8Regs.TBPHS.all = (EPwm8Regs.TBPHS.all & ~0xFFFF0000U) | 0x0U;

    // Time Base Counter Register
    EPwm8Regs.TBCTR = 0x0000U;         /* Clear counter*/

    /*-- Setup Counter_Compare (CC) Submodule --*/
    /*	// Counter Compare Control Register

       EPwm8Regs.CMPCTL.bit.LOADASYNC           = 0U;          // Active Compare A Load SYNC Option
       EPwm8Regs.CMPCTL.bit.LOADBSYNC           = 0U;          // Active Compare B Load SYNC Option
       EPwm8Regs.CMPCTL.bit.LOADAMODE           = 0U;          // Active Compare A Load
       EPwm8Regs.CMPCTL.bit.LOADBMODE           = 0U;          // Active Compare B Load
       EPwm8Regs.CMPCTL.bit.SHDWAMODE           = 0U;          // Compare A Register Block Operating Mode
       EPwm8Regs.CMPCTL.bit.SHDWBMODE           = 0U;          // Compare B Register Block Operating Mode
     */
    EPwm8Regs.CMPCTL.all = (EPwm8Regs.CMPCTL.all & ~0x3C5FU) | 0x0U;

    /* EPwm8Regs.CMPCTL2.bit.SHDWCMODE           = 0U;          // Compare C Register Block Operating Mode
       EPwm8Regs.CMPCTL2.bit.SHDWDMODE           = 0U;          // Compare D Register Block Operating Mode
       EPwm8Regs.CMPCTL2.bit.LOADCSYNC           = 0U;          // Active Compare C Load SYNC Option
       EPwm8Regs.CMPCTL2.bit.LOADDSYNC           = 0U;          // Active Compare D Load SYNC Option
       EPwm8Regs.CMPCTL2.bit.LOADCMODE           = 0U;          // Active Compare C Load
       EPwm8Regs.CMPCTL2.bit.LOADDMODE           = 0U;          // Active Compare D Load
     */
    EPwm8Regs.CMPCTL2.all = (EPwm8Regs.CMPCTL2.all & ~0x3C5FU) | 0x0U;
    EPwm8Regs.CMPA.bit.CMPA = 31U;     // Counter Compare A Register
    EPwm8Regs.CMPB.bit.CMPB = 32000U;  // Counter Compare B Register
    EPwm8Regs.CMPC = 32000U;           // Counter Compare C Register
    EPwm8Regs.CMPD = 32000U;           // Counter Compare D Register

    /*-- Setup Action-Qualifier (AQ) Submodule --*/
    EPwm8Regs.AQCTLA.all = 150U;
                               // Action Qualifier Control Register For Output A
    EPwm8Regs.AQCTLB.all = 150U;
                               // Action Qualifier Control Register For Output B

    /*	// Action Qualifier Software Force Register
       EPwm8Regs.AQSFRC.bit.RLDCSF              = 0U;          // Reload from Shadow Options
     */
    EPwm8Regs.AQSFRC.all = (EPwm8Regs.AQSFRC.all & ~0xC0U) | 0x0U;

    /*	// Action Qualifier Continuous S/W Force Register
       EPwm8Regs.AQCSFRC.bit.CSFA               = 0U;          // Continuous Software Force on output A
       EPwm8Regs.AQCSFRC.bit.CSFB               = 0U;          // Continuous Software Force on output B
     */
    EPwm8Regs.AQCSFRC.all = (EPwm8Regs.AQCSFRC.all & ~0xFU) | 0x0U;

    /*-- Setup Dead-Band Generator (DB) Submodule --*/
    /*	// Dead-Band Generator Control Register
       EPwm8Regs.DBCTL.bit.OUT_MODE             = 0U;          // Dead Band Output Mode Control
       EPwm8Regs.DBCTL.bit.IN_MODE              = 0U;          // Dead Band Input Select Mode Control
       EPwm8Regs.DBCTL.bit.POLSEL               = 0;          // Polarity Select Control
       EPwm8Regs.DBCTL.bit.HALFCYCLE            = 0U;          // Half Cycle Clocking Enable
       EPwm8Regs.DBCTL.bit.SHDWDBREDMODE        = 0U;          // DBRED shadow mode
       EPwm8Regs.DBCTL.bit.SHDWDBFEDMODE        = 0U;          // DBFED shadow mode
       EPwm8Regs.DBCTL.bit.LOADREDMODE          = 4U;        // DBRED load
       EPwm8Regs.DBCTL.bit.LOADFEDMODE          = 4U;        // DBFED load
     */
    EPwm8Regs.DBCTL.all = (EPwm8Regs.DBCTL.all & ~0x8FFFU) | 0x0U;
    EPwm8Regs.DBRED.bit.DBRED = (uint16_T)(0);
                         // Dead-Band Generator Rising Edge Delay Count Register
    EPwm8Regs.DBFED.bit.DBFED = (uint16_T)(0);
                        // Dead-Band Generator Falling Edge Delay Count Register

    /*-- Setup Event-Trigger (ET) Submodule --*/
    /*	// Event Trigger Selection and Pre-Scale Register
       EPwm8Regs.ETSEL.bit.SOCAEN               = 1U;          // Start of Conversion A Enable
       EPwm8Regs.ETSEL.bit.SOCASELCMP           = 0U;
       EPwm8Regs.ETSEL.bit.SOCASEL              = 2U;          // Start of Conversion A Select
       EPwm8Regs.ETPS.bit.SOCPSSEL              = 1U;          // EPWM8SOC Period Select
       EPwm8Regs.ETSOCPS.bit.SOCAPRD2           = 1U;
       EPwm8Regs.ETSEL.bit.SOCBEN               = 0U;          // Start of Conversion B Enable
       EPwm8Regs.ETSEL.bit.SOCBSELCMP           = 0U;
       EPwm8Regs.ETSEL.bit.SOCBSEL              = 1U;          // Start of Conversion A Select
       EPwm8Regs.ETPS.bit.SOCPSSEL              = 1;          // EPWM8SOCB Period Select
       EPwm8Regs.ETSOCPS.bit.SOCBPRD2           = 1U;
       EPwm8Regs.ETSEL.bit.INTEN                = 0U;          // EPWM8INTn Enable
       EPwm8Regs.ETSEL.bit.INTSELCMP            = 0U;
       EPwm8Regs.ETSEL.bit.INTSEL               = 1U;          // Start of Conversion A Select
       EPwm8Regs.ETPS.bit.INTPSSEL              = 1U;          // EPWM8INTn Period Select
       EPwm8Regs.ETINTPS.bit.INTPRD2            = 1U;
     */
    EPwm8Regs.ETSEL.all = (EPwm8Regs.ETSEL.all & ~0xFF7FU) | 0x1A01U;
    EPwm8Regs.ETPS.all = (EPwm8Regs.ETPS.all & ~0x30U) | 0x30U;
    EPwm8Regs.ETSOCPS.all = (EPwm8Regs.ETSOCPS.all & ~0xF0FU) | 0x101U;
    EPwm8Regs.ETINTPS.all = (EPwm8Regs.ETINTPS.all & ~0xFU) | 0x1U;

    /*-- Setup PWM-Chopper (PC) Submodule --*/
    /*	// PWM Chopper Control Register
       EPwm8Regs.PCCTL.bit.CHPEN                = 0U;          // PWM chopping enable
       EPwm8Regs.PCCTL.bit.CHPFREQ              = 0U;          // Chopping clock frequency
       EPwm8Regs.PCCTL.bit.OSHTWTH              = 0U;          // One-shot pulse width
       EPwm8Regs.PCCTL.bit.CHPDUTY              = 0U;          // Chopping clock Duty cycle
     */
    EPwm8Regs.PCCTL.all = (EPwm8Regs.PCCTL.all & ~0x7FFU) | 0x0U;

    /*-- Set up Trip-Zone (TZ) Submodule --*/
    EALLOW;
    EPwm8Regs.TZSEL.all = 0U;          // Trip Zone Select Register

    /*	// Trip Zone Control Register
       EPwm8Regs.TZCTL.bit.TZA                  = 3U;          // TZ1 to TZ6 Trip Action On EPWM8A
       EPwm8Regs.TZCTL.bit.TZB                  = 3U;          // TZ1 to TZ6 Trip Action On EPWM8B
       EPwm8Regs.TZCTL.bit.DCAEVT1              = 3U;          // EPWM8A action on DCAEVT1
       EPwm8Regs.TZCTL.bit.DCAEVT2              = 3U;          // EPWM8A action on DCAEVT2
       EPwm8Regs.TZCTL.bit.DCBEVT1              = 3U;          // EPWM8B action on DCBEVT1
       EPwm8Regs.TZCTL.bit.DCBEVT2              = 3U;          // EPWM8B action on DCBEVT2
     */
    EPwm8Regs.TZCTL.all = (EPwm8Regs.TZCTL.all & ~0xFFFU) | 0xFFFU;

    /*	// Trip Zone Enable Interrupt Register
       EPwm8Regs.TZEINT.bit.OST                 = 0U;          // Trip Zones One Shot Int Enable
       EPwm8Regs.TZEINT.bit.CBC                 = 0U;          // Trip Zones Cycle By Cycle Int Enable
       EPwm8Regs.TZEINT.bit.DCAEVT1             = 0U;          // Digital Compare A Event 1 Int Enable
       EPwm8Regs.TZEINT.bit.DCAEVT2             = 0U;          // Digital Compare A Event 2 Int Enable
       EPwm8Regs.TZEINT.bit.DCBEVT1             = 0U;          // Digital Compare B Event 1 Int Enable
       EPwm8Regs.TZEINT.bit.DCBEVT2             = 0U;          // Digital Compare B Event 2 Int Enable
     */
    EPwm8Regs.TZEINT.all = (EPwm8Regs.TZEINT.all & ~0x7EU) | 0x0U;

    /*	// Digital Compare A Control Register
       EPwm8Regs.DCACTL.bit.EVT1SYNCE           = 0U;          // DCAEVT1 SYNC Enable
       EPwm8Regs.DCACTL.bit.EVT1SOCE            = 1U;          // DCAEVT1 SOC Enable
       EPwm8Regs.DCACTL.bit.EVT1FRCSYNCSEL      = 0U;          // DCAEVT1 Force Sync Signal
       EPwm8Regs.DCACTL.bit.EVT1SRCSEL          = 0U;          // DCAEVT1 Source Signal
       EPwm8Regs.DCACTL.bit.EVT2FRCSYNCSEL      = 0U;          // DCAEVT2 Force Sync Signal
       EPwm8Regs.DCACTL.bit.EVT2SRCSEL          = 0U;          // DCAEVT2 Source Signal
     */
    EPwm8Regs.DCACTL.all = (EPwm8Regs.DCACTL.all & ~0x30FU) | 0x4U;

    /*	// Digital Compare B Control Register
       EPwm8Regs.DCBCTL.bit.EVT1SYNCE           = 0U;          // DCBEVT1 SYNC Enable
       EPwm8Regs.DCBCTL.bit.EVT1SOCE            = 0U;          // DCBEVT1 SOC Enable
       EPwm8Regs.DCBCTL.bit.EVT1FRCSYNCSEL      = 0U;          // DCBEVT1 Force Sync Signal
       EPwm8Regs.DCBCTL.bit.EVT1SRCSEL          = 0U;          // DCBEVT1 Source Signal
       EPwm8Regs.DCBCTL.bit.EVT2FRCSYNCSEL      = 0U;          // DCBEVT2 Force Sync Signal
       EPwm8Regs.DCBCTL.bit.EVT2SRCSEL          = 0U;          // DCBEVT2 Source Signal
     */
    EPwm8Regs.DCBCTL.all = (EPwm8Regs.DCBCTL.all & ~0x30FU) | 0x0U;

    /*	// Digital Compare Trip Select Register
       EPwm8Regs.DCTRIPSEL.bit.DCAHCOMPSEL      = 0U;          // Digital Compare A High COMP Input Select

       EPwm8Regs.DCTRIPSEL.bit.DCALCOMPSEL      = 1U;          // Digital Compare A Low COMP Input Select
       EPwm8Regs.DCTRIPSEL.bit.DCBHCOMPSEL      = 0U;          // Digital Compare B High COMP Input Select
       EPwm8Regs.DCTRIPSEL.bit.DCBLCOMPSEL      = 1U;          // Digital Compare B Low COMP Input Select
     */
    EPwm8Regs.DCTRIPSEL.all = (EPwm8Regs.DCTRIPSEL.all & ~ 0xFFFFU) | 0x1010U;

    /*	// Trip Zone Digital Comparator Select Register
       EPwm8Regs.TZDCSEL.bit.DCAEVT1            = 0U;          // Digital Compare Output A Event 1
       EPwm8Regs.TZDCSEL.bit.DCAEVT2            = 0U;          // Digital Compare Output A Event 2
       EPwm8Regs.TZDCSEL.bit.DCBEVT1            = 0U;          // Digital Compare Output B Event 1
       EPwm8Regs.TZDCSEL.bit.DCBEVT2            = 0U;          // Digital Compare Output B Event 2
     */
    EPwm8Regs.TZDCSEL.all = (EPwm8Regs.TZDCSEL.all & ~0xFFFU) | 0x0U;

    /*	// Digital Compare Filter Control Register
       EPwm8Regs.DCFCTL.bit.BLANKE              = 0U;          // Blanking Enable/Disable
       EPwm8Regs.DCFCTL.bit.PULSESEL            = 1U;          // Pulse Select for Blanking & Capture Alignment
       EPwm8Regs.DCFCTL.bit.BLANKINV            = 0U;          // Blanking Window Inversion
       EPwm8Regs.DCFCTL.bit.SRCSEL              = 0U;          // Filter Block Signal Source Select
     */
    EPwm8Regs.DCFCTL.all = (EPwm8Regs.DCFCTL.all & ~0x3FU) | 0x10U;
    EPwm8Regs.DCFOFFSET = 0U;          // Digital Compare Filter Offset Register
    EPwm8Regs.DCFWINDOW = 0U;          // Digital Compare Filter Window Register

    /*	// Digital Compare Capture Control Register
       EPwm8Regs.DCCAPCTL.bit.CAPE              = 0U;          // Counter Capture Enable
     */
    EPwm8Regs.DCCAPCTL.all = (EPwm8Regs.DCCAPCTL.all & ~0x1U) | 0x0U;

    /*	// HRPWM Configuration Register
       EPwm8Regs.HRCNFG.bit.SWAPAB              = 0U;          // Swap EPWMA and EPWMB Outputs Bit
       EPwm8Regs.HRCNFG.bit.SELOUTB             = 0U;          // EPWMB Output Selection Bit
     */
    EPwm8Regs.HRCNFG.all = (EPwm8Regs.HRCNFG.all & ~0xA0U) | 0x0U;

    /* Update the Link Registers with the link value for all the Compare values and TBPRD */
    /* No error is thrown if the ePWM register exists in the model or not */
    EPwm8Regs.EPWMXLINK.bit.TBPRDLINK = 7U;
    EPwm8Regs.EPWMXLINK.bit.CMPALINK = 7U;
    EPwm8Regs.EPWMXLINK.bit.CMPBLINK = 7U;
    EPwm8Regs.EPWMXLINK.bit.CMPCLINK = 7U;
    EPwm8Regs.EPWMXLINK.bit.CMPDLINK = 7U;

    /* SYNCPER - Peripheral synchronization output event
       EPwm8Regs.HRPCTL.bit.PWMSYNCSEL            = 0U;          // EPWMSYNCPER selection
       EPwm8Regs.HRPCTL.bit.PWMSYNCSELX           = 0U;          //  EPWMSYNCPER selection
     */
    EPwm8Regs.HRPCTL.all = (EPwm8Regs.HRPCTL.all & ~0x72U) | 0x0U;
    EDIS;
  }

  /* SystemInitialize for Chart: '<S1>/Chart1' */
  racecar_shiftlight_DW.temporalCounter_i1 = 0U;
  racecar_shiftlight_DW.is_active_c5_racecar_shiftlight = 0U;
  racecar_shiftlight_DW.is_c5_racecar_shiftlight =
    racecar_shif_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void racecar_shiftlight_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
