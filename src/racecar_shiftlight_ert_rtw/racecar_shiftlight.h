/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: racecar_shiftlight.h
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

#ifndef RTW_HEADER_racecar_shiftlight_h_
#define RTW_HEADER_racecar_shiftlight_h_
#ifndef racecar_shiftlight_COMMON_INCLUDES_
#define racecar_shiftlight_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "c2000BoardSupport.h"
#include "MW_f2837xD_includes.h"
#include "can_message.h"
#include "F2837xD_device.h"
#include "IQmathLib.h"
#endif                                 /* racecar_shiftlight_COMMON_INCLUDES_ */

#include <stddef.h>
#include "racecar_shiftlight_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

extern void init_eCAN_B ( uint16_T bitRatePrescaler, uint16_T timeSeg1, uint16_T
  timeSeg2, uint16_T sbg, uint16_T sjw, uint16_T sam);
extern void config_ePWMSyncSource(void);
extern void config_ePWM_GPIO (void);
extern void config_ePWM_TBSync (void);
extern void config_ePWM_XBAR(void);
extern void StartDMA();
extern void initDMA_ch1(void);

/* user code (top of export header file) */
#include "can_message.h"

/* Block signals (default storage) */
typedef struct {
  CAN_DATATYPE CANReceive_o2;          /* '<Root>/CAN Receive' */
  real_T CANUnpack1;                   /* '<S2>/CAN Unpack1' */
} B_racecar_shiftlight_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int32_T clockTickCounter;            /* '<Root>/Pulse Generator' */
  int32_T DigitalOutput_FRAC_LEN;      /* '<Root>/Digital Output' */
  int32_T DigitalOutput1_FRAC_LEN;     /* '<Root>/Digital Output1' */
  int_T CANUnpack1_ModeSignalID;       /* '<S2>/CAN Unpack1' */
  int_T CANUnpack1_StatusPortID;       /* '<S2>/CAN Unpack1' */
  uint16_T is_active_c3_racecar_shiftlight;/* '<Root>/Chart' */
  uint16_T is_c3_racecar_shiftlight;   /* '<Root>/Chart' */
} DW_racecar_shiftlight_T;

/* Parameters (default storage) */
struct P_racecar_shiftlight_T_ {
  uint16_T all_off[396];               /* Variable: all_off
                                        * Referenced by:
                                        *   '<Root>/Data Store Memory'
                                        *   '<Root>/Constant11'
                                        *   '<Root>/Constant8'
                                        */
  uint16_T red_day_all[396];           /* Variable: red_day_all
                                        * Referenced by: '<Root>/Constant4'
                                        */
  uint16_T stage1_day[396];            /* Variable: stage1_day
                                        * Referenced by: '<Root>/Constant2'
                                        */
  uint16_T stage2_day[396];            /* Variable: stage2_day
                                        * Referenced by: '<Root>/Constant3'
                                        */
  uint16_T stage3_day[396];            /* Variable: stage3_day
                                        * Referenced by: '<Root>/Constant5'
                                        */
  uint16_T stage4_day[396];            /* Variable: stage4_day
                                        * Referenced by: '<Root>/Constant6'
                                        */
  uint16_T stage5_day[396];            /* Variable: stage5_day
                                        * Referenced by: '<Root>/Constant7'
                                        */
  uint16_T stage6_day[396];            /* Variable: stage6_day
                                        * Referenced by: '<Root>/Constant9'
                                        */
  uint16_T stage7_day[396];            /* Variable: stage7_day
                                        * Referenced by: '<Root>/Constant10'
                                        */
  real_T engine_rpm_Y0;                /* Computed Parameter: engine_rpm_Y0
                                        * Referenced by: '<S2>/engine_rpm'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<Root>/Switch'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;     /* Computed Parameter: PulseGenerator_Period
                                     * Referenced by: '<Root>/Pulse Generator'
                                     */
  real_T PulseGenerator_Duty;         /* Computed Parameter: PulseGenerator_Duty
                                       * Referenced by: '<Root>/Pulse Generator'
                                       */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<Root>/Pulse Generator'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_racecar_shiftlight_T {
  const char_T * volatile errorStatus;
};

extern CAN_DATATYPE CAN_DATATYPE_GROUND;
extern CAN_DATATYPE CAN_DATATYPE_GROUND;
extern CAN_DATATYPE CAN_DATATYPE_GROUND;

/* Block parameters (default storage) */
extern P_racecar_shiftlight_T racecar_shiftlight_P;

/* Block signals (default storage) */
extern B_racecar_shiftlight_T racecar_shiftlight_B;

/* Block states (default storage) */
extern DW_racecar_shiftlight_T racecar_shiftlight_DW;

/*
 * Exported States
 *
 * Note: Exported states are block states with an exported global
 * storage class designation.  Code generation will declare the memory for these
 * states and exports their symbols.
 *
 */
extern uint16_T duty_cycle_table[396]; /* '<Root>/Data Store Memory' */

/* Model entry point functions */
extern void racecar_shiftlight_initialize(void);
extern void racecar_shiftlight_step(void);
extern void racecar_shiftlight_terminate(void);

/* Real-time Model object */
extern RT_MODEL_racecar_shiftlight_T *const racecar_shiftlight_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'racecar_shiftlight'
 * '<S1>'   : 'racecar_shiftlight/Chart'
 * '<S2>'   : 'racecar_shiftlight/Function-Call Subsystem'
 */
#endif                                 /* RTW_HEADER_racecar_shiftlight_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
