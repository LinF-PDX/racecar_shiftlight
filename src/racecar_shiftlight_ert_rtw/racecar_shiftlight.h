/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: racecar_shiftlight.h
 *
 * Code generated for Simulink model 'racecar_shiftlight'.
 *
 * Model version                  : 1.52
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Wed Feb  5 20:17:15 2025
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
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "c2000BoardSupport.h"
#include "MW_f2837xD_includes.h"
#include "can_message.h"
#include "F2837xD_device.h"
#include "IQmathLib.h"
#endif                                 /* racecar_shiftlight_COMMON_INCLUDES_ */

#include <stddef.h>
#include "racecar_shiftlight_types.h"
#include "rt_nonfinite.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
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
  CAN_DATATYPE CANReceive1_o2;         /* '<Root>/CAN Receive1' */
  CAN_DATATYPE CANReceive2_o2;         /* '<Root>/CAN Receive2' */
  CAN_DATATYPE CANReceive3_o2;         /* '<Root>/CAN Receive3' */
  CAN_DATATYPE CANReceive4_o2;         /* '<Root>/CAN Receive4' */
  CAN_DATATYPE CANReceive5_o2;         /* '<Root>/CAN Receive5' */
  real_T calculated_gear_ratio;        /* '<S8>/Divide2' */
  real_T CANUnpack1_o1;                /* '<S6>/CAN Unpack1' */
  real_T ws_fl;                        /* '<S6>/CAN Unpack1' */
  real_T steer_angle;                  /* '<S6>/CAN Unpack1' */
  real_T steer_rate;                   /* '<S6>/CAN Unpack1' */
  real_T CANUnpack1_o1_p;              /* '<S5>/CAN Unpack1' */
  real_T ws_fl_b;                      /* '<S5>/CAN Unpack1' */
  real_T lat_acc;                      /* '<S5>/CAN Unpack1' */
  real_T long_acc;                     /* '<S5>/CAN Unpack1' */
  real_T CANUnpack1_o1_d;              /* '<S4>/CAN Unpack1' */
  real_T ws_fl_p;                      /* '<S4>/CAN Unpack1' */
  real_T ws_fr;                        /* '<S4>/CAN Unpack1' */
  real_T ws_rl;                        /* '<S4>/CAN Unpack1' */
  real_T ws_rr;                        /* '<S4>/CAN Unpack1' */
  real_T CANUnpack1_o1_k;              /* '<S3>/CAN Unpack1' */
  real_T CANUnpack1_o2;                /* '<S3>/CAN Unpack1' */
  real_T CANUnpack1_o3;                /* '<S3>/CAN Unpack1' */
  real_T CANUnpack1_o4;                /* '<S3>/CAN Unpack1' */
  real_T CANUnpack1_o5;                /* '<S3>/CAN Unpack1' */
  real_T CANUnpack1_o6;                /* '<S3>/CAN Unpack1' */
  real_T CANUnpack1_o7;                /* '<S3>/CAN Unpack1' */
  real_T CANUnpack1_o8;                /* '<S3>/CAN Unpack1' */
  real_T CANUnpack1_o1_c;              /* '<S2>/CAN Unpack1' */
  real_T CANUnpack1_o2_a;              /* '<S2>/CAN Unpack1' */
  real_T CANUnpack1_o3_n;              /* '<S2>/CAN Unpack1' */
  real_T CANUnpack1_o4_d;              /* '<S2>/CAN Unpack1' */
  real_T CANUnpack1_o1_o;              /* '<S1>/CAN Unpack1' */
  real_T CANUnpack1_o2_k;              /* '<S1>/CAN Unpack1' */
  real_T CANUnpack1_o3_h;              /* '<S1>/CAN Unpack1' */
  real_T CANUnpack1_o4_e;              /* '<S1>/CAN Unpack1' */
  real_T brake_pressed;                /* '<S1>/CAN Unpack1' */
  real_T brake_switch;                 /* '<S1>/CAN Unpack1' */
  real_T CANUnpack1_o7_d;              /* '<S1>/CAN Unpack1' */
  real_T CANUnpack1_o8_d;              /* '<S1>/CAN Unpack1' */
  real_T CANUnpack1_o9;                /* '<S1>/CAN Unpack1' */
  real_T gas_pressed;                  /* '<S1>/CAN Unpack1' */
  real_T pedal_gas;                    /* '<S1>/CAN Unpack1' */
} B_racecar_shiftlight_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int32_T clockTickCounter;            /* '<S9>/Pulse Generator' */
  int32_T DigitalOutput_FRAC_LEN;      /* '<Root>/Digital Output' */
  int32_T DigitalOutput1_FRAC_LEN;     /* '<Root>/Digital Output1' */
  uint32_T is_c3_racecar_shiftlight;   /* '<S9>/Chart' */
  int_T CANUnpack1_ModeSignalID;       /* '<S6>/CAN Unpack1' */
  int_T CANUnpack1_StatusPortID;       /* '<S6>/CAN Unpack1' */
  int_T CANUnpack1_ModeSignalID_p;     /* '<S5>/CAN Unpack1' */
  int_T CANUnpack1_StatusPortID_c;     /* '<S5>/CAN Unpack1' */
  int_T CANUnpack1_ModeSignalID_c;     /* '<S4>/CAN Unpack1' */
  int_T CANUnpack1_StatusPortID_b;     /* '<S4>/CAN Unpack1' */
  int_T CANUnpack1_ModeSignalID_e;     /* '<S3>/CAN Unpack1' */
  int_T CANUnpack1_StatusPortID_f;     /* '<S3>/CAN Unpack1' */
  int_T CANUnpack1_ModeSignalID_n;     /* '<S2>/CAN Unpack1' */
  int_T CANUnpack1_StatusPortID_g;     /* '<S2>/CAN Unpack1' */
  int_T CANUnpack1_ModeSignalID_ee;    /* '<S1>/CAN Unpack1' */
  int_T CANUnpack1_StatusPortID_n;     /* '<S1>/CAN Unpack1' */
  int16_T FunctionCallSubsystem5_SubsysRa;/* '<Root>/Function-Call Subsystem5' */
  int16_T FunctionCallSubsystem4_SubsysRa;/* '<Root>/Function-Call Subsystem4' */
  int16_T FunctionCallSubsystem3_SubsysRa;/* '<Root>/Function-Call Subsystem3' */
  int16_T FunctionCallSubsystem2_SubsysRa;/* '<Root>/Function-Call Subsystem2' */
  int16_T FunctionCallSubsystem1_SubsysRa;/* '<Root>/Function-Call Subsystem1' */
  int16_T FunctionCallSubsystem_SubsysRan;/* '<Root>/Function-Call Subsystem' */
  uint16_T is_active_c3_racecar_shiftlight;/* '<S9>/Chart' */
  uint16_T is_active_c2_racecar_shiftlight;/* '<Root>/decimal to bin' */
} DW_racecar_shiftlight_T;

/* Parameters (default storage) */
struct P_racecar_shiftlight_T_ {
  real_T final_drive_ratio;            /* Variable: final_drive_ratio
                                        * Referenced by: '<S8>/Multiply2'
                                        */
  real_T tire_radius;                  /* Variable: tire_radius
                                        * Referenced by: '<S8>/Constant'
                                        */
  uint16_T all_off[396];               /* Variable: all_off
                                        * Referenced by:
                                        *   '<Root>/Data Store Memory'
                                        *   '<S9>/Constant11'
                                        *   '<S9>/Constant8'
                                        */
  uint16_T red_day_all[396];           /* Variable: red_day_all
                                        * Referenced by: '<S9>/Constant4'
                                        */
  uint16_T stage1_day[396];            /* Variable: stage1_day
                                        * Referenced by: '<S9>/Constant2'
                                        */
  uint16_T stage2_day[396];            /* Variable: stage2_day
                                        * Referenced by: '<S9>/Constant3'
                                        */
  uint16_T stage3_day[396];            /* Variable: stage3_day
                                        * Referenced by: '<S9>/Constant5'
                                        */
  uint16_T stage4_day[396];            /* Variable: stage4_day
                                        * Referenced by: '<S9>/Constant6'
                                        */
  uint16_T stage5_day[396];            /* Variable: stage5_day
                                        * Referenced by: '<S9>/Constant7'
                                        */
  uint16_T stage6_day[396];            /* Variable: stage6_day
                                        * Referenced by: '<S9>/Constant9'
                                        */
  uint16_T stage7_day[396];            /* Variable: stage7_day
                                        * Referenced by: '<S9>/Constant10'
                                        */
  real_T engine_rpm_Y0;                /* Computed Parameter: engine_rpm_Y0
                                        * Referenced by: '<S1>/engine_rpm'
                                        */
  real_T clutch_status_Y0;             /* Computed Parameter: clutch_status_Y0
                                        * Referenced by: '<S2>/clutch_status'
                                        */
  real_T vehicle_speed_Y0;             /* Computed Parameter: vehicle_speed_Y0
                                        * Referenced by: '<S3>/vehicle_speed'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S9>/Switch'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<S9>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;     /* Computed Parameter: PulseGenerator_Period
                                     * Referenced by: '<S9>/Pulse Generator'
                                     */
  real_T PulseGenerator_Duty;         /* Computed Parameter: PulseGenerator_Duty
                                       * Referenced by: '<S9>/Pulse Generator'
                                       */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<S9>/Pulse Generator'
                                        */
  real_T Multiply1_Gain;               /* Expression: 2*pi
                                        * Referenced by: '<S8>/Multiply1'
                                        */
  real_T Constant1_Value;              /* Expression: 60
                                        * Referenced by: '<S8>/Constant1'
                                        */
  real_T Multiply_Gain;                /* Expression: 1/3.6
                                        * Referenced by: '<S8>/Multiply'
                                        */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Constant1_Value_e;            /* Expression: 1
                                        * Referenced by: '<Root>/Constant1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_racecar_shiftlight_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
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
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S10>/AND' : Unused code path elimination
 * Block '<S10>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S10>/Lower Limit' : Unused code path elimination
 * Block '<S10>/Lower Test' : Unused code path elimination
 * Block '<S10>/Upper Limit' : Unused code path elimination
 * Block '<S10>/Upper Test' : Unused code path elimination
 * Block '<S11>/AND' : Unused code path elimination
 * Block '<S11>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S11>/Lower Limit' : Unused code path elimination
 * Block '<S11>/Lower Test' : Unused code path elimination
 * Block '<S11>/Upper Limit' : Unused code path elimination
 * Block '<S11>/Upper Test' : Unused code path elimination
 * Block '<S12>/AND' : Unused code path elimination
 * Block '<S12>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S12>/Lower Limit' : Unused code path elimination
 * Block '<S12>/Lower Test' : Unused code path elimination
 * Block '<S12>/Upper Limit' : Unused code path elimination
 * Block '<S12>/Upper Test' : Unused code path elimination
 * Block '<S13>/AND' : Unused code path elimination
 * Block '<S13>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S13>/Lower Limit' : Unused code path elimination
 * Block '<S13>/Lower Test' : Unused code path elimination
 * Block '<S13>/Upper Limit' : Unused code path elimination
 * Block '<S13>/Upper Test' : Unused code path elimination
 * Block '<S14>/AND' : Unused code path elimination
 * Block '<S14>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S14>/Lower Limit' : Unused code path elimination
 * Block '<S14>/Lower Test' : Unused code path elimination
 * Block '<S14>/Upper Limit' : Unused code path elimination
 * Block '<S14>/Upper Test' : Unused code path elimination
 * Block '<S15>/AND' : Unused code path elimination
 * Block '<S15>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S15>/Lower Limit' : Unused code path elimination
 * Block '<S15>/Lower Test' : Unused code path elimination
 * Block '<S15>/Upper Limit' : Unused code path elimination
 * Block '<S15>/Upper Test' : Unused code path elimination
 */

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
 * '<S1>'   : 'racecar_shiftlight/Function-Call Subsystem'
 * '<S2>'   : 'racecar_shiftlight/Function-Call Subsystem1'
 * '<S3>'   : 'racecar_shiftlight/Function-Call Subsystem2'
 * '<S4>'   : 'racecar_shiftlight/Function-Call Subsystem3'
 * '<S5>'   : 'racecar_shiftlight/Function-Call Subsystem4'
 * '<S6>'   : 'racecar_shiftlight/Function-Call Subsystem5'
 * '<S7>'   : 'racecar_shiftlight/decimal to bin'
 * '<S8>'   : 'racecar_shiftlight/gear calc'
 * '<S9>'   : 'racecar_shiftlight/shiftlight control'
 * '<S10>'  : 'racecar_shiftlight/gear calc/check fifth'
 * '<S11>'  : 'racecar_shiftlight/gear calc/check first'
 * '<S12>'  : 'racecar_shiftlight/gear calc/check forth'
 * '<S13>'  : 'racecar_shiftlight/gear calc/check second'
 * '<S14>'  : 'racecar_shiftlight/gear calc/check sixth'
 * '<S15>'  : 'racecar_shiftlight/gear calc/check third'
 * '<S16>'  : 'racecar_shiftlight/shiftlight control/Chart'
 */
#endif                                 /* RTW_HEADER_racecar_shiftlight_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
