/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: racecar_shiftlight.h
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

#ifndef RTW_HEADER_racecar_shiftlight_h_
#define RTW_HEADER_racecar_shiftlight_h_
#ifndef racecar_shiftlight_COMMON_INCLUDES_
#define racecar_shiftlight_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "c2000BoardSupport.h"
#include "MW_f2837xD_includes.h"
#include "IQmathLib.h"
#endif                                 /* racecar_shiftlight_COMMON_INCLUDES_ */

#include <stddef.h>
#include "racecar_shiftlight_types.h"
#include <string.h>
#include "rt_nonfinite.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

extern void config_ePWMSyncSource(void);
extern void config_ePWM_GPIO (void);
extern void config_ePWM_TBSync (void);
extern void config_ePWM_XBAR(void);
extern void StartDMA();
extern void initDMA_ch1(void);

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int32_T DigitalOutput_FRAC_LEN;      /* '<Root>/Digital Output' */
  int32_T DigitalOutput1_FRAC_LEN;     /* '<Root>/Digital Output1' */
  uint16_T temporalCounter_i1;         /* '<S1>/Chart1' */
  uint16_T is_active_c5_racecar_shiftlight;/* '<S1>/Chart1' */
  uint16_T is_c5_racecar_shiftlight;   /* '<S1>/Chart1' */
} DW_racecar_shiftlight_T;

/* Parameters (default storage) */
struct P_racecar_shiftlight_T_ {
  real_T all_blue[396];                /* Variable: all_blue
                                        * Referenced by: '<S1>/Constant12'
                                        */
  real_T all_green[396];               /* Variable: all_green
                                        * Referenced by: '<S1>/Constant1'
                                        */
  real_T all_red[396];                 /* Variable: all_red
                                        * Referenced by: '<S1>/Constant'
                                        */
  uint16_T all_off[396];               /* Variable: all_off
                                        * Referenced by: '<Root>/Data Store Memory'
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

/* Block parameters (default storage) */
extern P_racecar_shiftlight_T racecar_shiftlight_P;

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
 * '<S1>'   : 'racecar_shiftlight/shiftlight control'
 * '<S2>'   : 'racecar_shiftlight/shiftlight control/Chart1'
 */
#endif                                 /* RTW_HEADER_racecar_shiftlight_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
