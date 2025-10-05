/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: racecar_shiftlight.h
 *
 * Code generated for Simulink model 'racecar_shiftlight'.
 *
 * Model version                  : 1.79
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sat Oct  4 21:01:07 2025
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
  CAN_DATATYPE CANReceive3_o2;         /* '<Root>/CAN Receive3' */
  CAN_DATATYPE CANReceive1_o2;         /* '<Root>/CAN Receive1' */
  real_T D0_IN;                        /* '<S4>/Chart' */
  real_T D1_IN;                        /* '<S4>/Chart' */
  real_T D2_IN;                        /* '<S4>/Chart' */
  real_T D3_IN;                        /* '<S4>/Chart' */
  real_T CANUnpack1_o1;                /* '<S3>/CAN Unpack1' */
  real_T ws_fl;                        /* '<S3>/CAN Unpack1' */
  real_T ws_fr;                        /* '<S3>/CAN Unpack1' */
  real_T ws_rl;                        /* '<S3>/CAN Unpack1' */
  real_T ws_rr;                        /* '<S3>/CAN Unpack1' */
  real_T CANUnpack1_o1_c;              /* '<S2>/CAN Unpack1' */
  real_T CANUnpack1_o2;                /* '<S2>/CAN Unpack1' */
  real_T CANUnpack1_o3;                /* '<S2>/CAN Unpack1' */
  real_T CANUnpack1_o4;                /* '<S2>/CAN Unpack1' */
  real_T CANUnpack1_o1_o;              /* '<S1>/CAN Unpack1' */
  real_T CANUnpack1_o2_k;              /* '<S1>/CAN Unpack1' */
  real_T CANUnpack1_o3_h;              /* '<S1>/CAN Unpack1' */
  real_T CANUnpack1_o4_e;              /* '<S1>/CAN Unpack1' */
  real_T brake_pressed;                /* '<S1>/CAN Unpack1' */
  real_T brake_switch;                 /* '<S1>/CAN Unpack1' */
  real_T CANUnpack1_o7;                /* '<S1>/CAN Unpack1' */
  real_T CANUnpack1_o8;                /* '<S1>/CAN Unpack1' */
  real_T CANUnpack1_o9;                /* '<S1>/CAN Unpack1' */
  real_T gas_pressed;                  /* '<S1>/CAN Unpack1' */
  real_T pedal_gas;                    /* '<S1>/CAN Unpack1' */
} B_racecar_shiftlight_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int32_T clockTickCounter;            /* '<S6>/Pulse Generator' */
  int32_T DigitalOutput2_FRAC_LEN;     /* '<Root>/Digital Output2' */
  int32_T DigitalOutput3_FRAC_LEN;     /* '<Root>/Digital Output3' */
  int32_T DigitalOutput4_FRAC_LEN;     /* '<Root>/Digital Output4' */
  int32_T DigitalOutput5_FRAC_LEN;     /* '<Root>/Digital Output5' */
  int32_T DigitalOutput_FRAC_LEN;      /* '<Root>/Digital Output' */
  int32_T DigitalOutput1_FRAC_LEN;     /* '<Root>/Digital Output1' */
  int_T CANUnpack1_ModeSignalID;       /* '<S3>/CAN Unpack1' */
  int_T CANUnpack1_StatusPortID;       /* '<S3>/CAN Unpack1' */
  int_T CANUnpack1_ModeSignalID_n;     /* '<S2>/CAN Unpack1' */
  int_T CANUnpack1_StatusPortID_g;     /* '<S2>/CAN Unpack1' */
  int_T CANUnpack1_ModeSignalID_e;     /* '<S1>/CAN Unpack1' */
  int_T CANUnpack1_StatusPortID_n;     /* '<S1>/CAN Unpack1' */
  uint16_T is_active_c3_racecar_shiftlight;/* '<S6>/Chart' */
  uint16_T is_c3_racecar_shiftlight;   /* '<S6>/Chart' */
  uint16_T is_active_c7_racecar_shiftlight;/* '<S5>/clutch_debounce' */
  uint16_T is_c7_racecar_shiftlight;   /* '<S5>/clutch_debounce' */
  uint16_T is_Wait;                    /* '<S5>/clutch_debounce' */
  uint16_T temporalCounter_i1;         /* '<S5>/clutch_debounce' */
  uint16_T is_active_c6_racecar_shiftlight;/* '<S5>/Chart' */
  uint16_T is_c6_racecar_shiftlight;   /* '<S5>/Chart' */
  uint16_T is_Gear_Out;                /* '<S5>/Chart' */
  uint16_T temporalCounter_i1_n;       /* '<S5>/Chart' */
  uint16_T is_active_c8_racecar_shiftlight;/* '<S4>/Chart' */
  uint16_T is_c8_racecar_shiftlight;   /* '<S4>/Chart' */
} DW_racecar_shiftlight_T;

/* Parameters (default storage) */
struct P_racecar_shiftlight_T_ {
  real_T final_drive_ratio;            /* Variable: final_drive_ratio
                                        * Referenced by: '<S5>/Multiply2'
                                        */
  real_T tire_radius;                  /* Variable: tire_radius
                                        * Referenced by: '<S5>/Constant'
                                        */
  uint16_T all_off[396];               /* Variable: all_off
                                        * Referenced by:
                                        *   '<Root>/Data Store Memory'
                                        *   '<S6>/Constant11'
                                        *   '<S6>/Constant8'
                                        */
  uint16_T red_day_all[396];           /* Variable: red_day_all
                                        * Referenced by: '<S6>/Constant4'
                                        */
  uint16_T stage1_day[396];            /* Variable: stage1_day
                                        * Referenced by: '<S6>/Constant2'
                                        */
  uint16_T stage2_day[396];            /* Variable: stage2_day
                                        * Referenced by: '<S6>/Constant3'
                                        */
  uint16_T stage3_day[396];            /* Variable: stage3_day
                                        * Referenced by: '<S6>/Constant5'
                                        */
  uint16_T stage4_day[396];            /* Variable: stage4_day
                                        * Referenced by: '<S6>/Constant6'
                                        */
  uint16_T stage5_day[396];            /* Variable: stage5_day
                                        * Referenced by: '<S6>/Constant7'
                                        */
  uint16_T stage6_day[396];            /* Variable: stage6_day
                                        * Referenced by: '<S6>/Constant9'
                                        */
  uint16_T stage7_day[396];            /* Variable: stage7_day
                                        * Referenced by: '<S6>/Constant10'
                                        */
  real_T checksecond_lowlimit;         /* Mask Parameter: checksecond_lowlimit
                                        * Referenced by: '<S12>/Lower Limit'
                                        */
  real_T checkfirst_lowlimit;          /* Mask Parameter: checkfirst_lowlimit
                                        * Referenced by: '<S10>/Lower Limit'
                                        */
  real_T checkthird_lowlimit;          /* Mask Parameter: checkthird_lowlimit
                                        * Referenced by: '<S14>/Lower Limit'
                                        */
  real_T checkforth_lowlimit;          /* Mask Parameter: checkforth_lowlimit
                                        * Referenced by: '<S11>/Lower Limit'
                                        */
  real_T checkfifth_lowlimit;          /* Mask Parameter: checkfifth_lowlimit
                                        * Referenced by: '<S9>/Lower Limit'
                                        */
  real_T checksixth_lowlimit;          /* Mask Parameter: checksixth_lowlimit
                                        * Referenced by: '<S13>/Lower Limit'
                                        */
  real_T checksecond_uplimit;          /* Mask Parameter: checksecond_uplimit
                                        * Referenced by: '<S12>/Upper Limit'
                                        */
  real_T checkfirst_uplimit;           /* Mask Parameter: checkfirst_uplimit
                                        * Referenced by: '<S10>/Upper Limit'
                                        */
  real_T checkthird_uplimit;           /* Mask Parameter: checkthird_uplimit
                                        * Referenced by: '<S14>/Upper Limit'
                                        */
  real_T checkforth_uplimit;           /* Mask Parameter: checkforth_uplimit
                                        * Referenced by: '<S11>/Upper Limit'
                                        */
  real_T checkfifth_uplimit;           /* Mask Parameter: checkfifth_uplimit
                                        * Referenced by: '<S9>/Upper Limit'
                                        */
  real_T checksixth_uplimit;           /* Mask Parameter: checksixth_uplimit
                                        * Referenced by: '<S13>/Upper Limit'
                                        */
  real_T engine_rpm_Y0;                /* Computed Parameter: engine_rpm_Y0
                                        * Referenced by: '<S1>/engine_rpm'
                                        */
  real_T clutch_status_Y0;             /* Computed Parameter: clutch_status_Y0
                                        * Referenced by: '<S2>/clutch_status'
                                        */
  real_T wheelspeed_fl_Y0;             /* Computed Parameter: wheelspeed_fl_Y0
                                        * Referenced by: '<S3>/wheelspeed_fl'
                                        */
  real_T wheelspeed_fr_Y0;             /* Computed Parameter: wheelspeed_fr_Y0
                                        * Referenced by: '<S3>/wheelspeed_fr'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S6>/Switch'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<S6>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;     /* Computed Parameter: PulseGenerator_Period
                                     * Referenced by: '<S6>/Pulse Generator'
                                     */
  real_T PulseGenerator_Duty;         /* Computed Parameter: PulseGenerator_Duty
                                       * Referenced by: '<S6>/Pulse Generator'
                                       */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<S6>/Pulse Generator'
                                        */
  real_T Multiply1_Gain;               /* Expression: 2*pi
                                        * Referenced by: '<S5>/Multiply1'
                                        */
  real_T Constant1_Value;              /* Expression: 60
                                        * Referenced by: '<S5>/Constant1'
                                        */
  real_T Gain1_Gain;                   /* Expression: 0.5
                                        * Referenced by: '<Root>/Gain1'
                                        */
  real_T Multiply_Gain;                /* Expression: 1/3.6
                                        * Referenced by: '<S5>/Multiply'
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
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S9>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S10>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S11>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S12>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S13>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S14>/FixPt Data Type Duplicate' : Unused code path elimination
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
 * '<S3>'   : 'racecar_shiftlight/Function-Call Subsystem3'
 * '<S4>'   : 'racecar_shiftlight/Subsystem'
 * '<S5>'   : 'racecar_shiftlight/gear calc2'
 * '<S6>'   : 'racecar_shiftlight/shiftlight control'
 * '<S7>'   : 'racecar_shiftlight/Subsystem/Chart'
 * '<S8>'   : 'racecar_shiftlight/gear calc2/Chart'
 * '<S9>'   : 'racecar_shiftlight/gear calc2/check fifth'
 * '<S10>'  : 'racecar_shiftlight/gear calc2/check first'
 * '<S11>'  : 'racecar_shiftlight/gear calc2/check forth'
 * '<S12>'  : 'racecar_shiftlight/gear calc2/check second'
 * '<S13>'  : 'racecar_shiftlight/gear calc2/check sixth'
 * '<S14>'  : 'racecar_shiftlight/gear calc2/check third'
 * '<S15>'  : 'racecar_shiftlight/gear calc2/clutch_debounce'
 * '<S16>'  : 'racecar_shiftlight/shiftlight control/Chart'
 */
#endif                                 /* RTW_HEADER_racecar_shiftlight_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
