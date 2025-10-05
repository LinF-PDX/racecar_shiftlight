/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: racecar_shiftlight.c
 *
 * Code generated for Simulink model 'racecar_shiftlight'.
 *
 * Model version                  : 1.78
 * Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
 * C/C++ source code generated on : Sat Oct  4 20:32:53 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "racecar_shiftlight.h"
#include "rtwtypes.h"
#include "racecar_shiftlight_private.h"
#include <string.h>
#define racecar_shif_IN_NO_ACTIVE_CHILD (0U)
#define racecar_shiftlig_IN_Second_Gear (5U)
#define racecar_shiftligh_IN_Clutch_Out (2U)
#define racecar_shiftligh_IN_Fifth_Gear (1U)
#define racecar_shiftligh_IN_First_Gear (2U)
#define racecar_shiftligh_IN_Forth_Gear (3U)
#define racecar_shiftligh_IN_Sixth_Gear (6U)
#define racecar_shiftligh_IN_Third_Gear (7U)
#define racecar_shiftlight_IN_Clutch_In (1U)
#define racecar_shiftlight_IN_Gear_Out (3U)
#define racecar_shiftlight_IN_In_Fifth (1U)
#define racecar_shiftlight_IN_In_First (2U)
#define racecar_shiftlight_IN_In_Fourth (3U)
#define racecar_shiftlight_IN_In_Second (4U)
#define racecar_shiftlight_IN_In_Sixth (5U)
#define racecar_shiftlight_IN_In_Third (6U)
#define racecar_shiftlight_IN_Init     (1U)
#define racecar_shiftlight_IN_Neutral  (4U)
#define racecar_shiftlight_IN_No_Gear  (4U)
#define racecar_shiftlight_IN_Off      (1U)
#define racecar_shiftlight_IN_On       (2U)
#define racecar_shiftlight_IN_To_off   (1U)
#define racecar_shiftlight_IN_To_on    (2U)
#define racecar_shiftlight_IN_Wait     (3U)
#define racecar_shiftlight_IN_stage1   (2U)
#define racecar_shiftlight_IN_stage2   (3U)
#define racecar_shiftlight_IN_stage3   (4U)
#define racecar_shiftlight_IN_stage4   (5U)
#define racecar_shiftlight_IN_stage5   (6U)
#define racecar_shiftlight_IN_stage6   (7U)
#define racecar_shiftlight_IN_stage7   (8U)
#define racecar_shiftlight_IN_stage8   (9U)

/* Exported block states */
uint16_T duty_cycle_table[396];        /* '<Root>/Data Store Memory' */

/* Block signals (default storage) */
B_racecar_shiftlight_T racecar_shiftlight_B;

/* Block states (default storage) */
DW_racecar_shiftlight_T racecar_shiftlight_DW;

/* Real-time model */
static RT_MODEL_racecar_shiftlight_T racecar_shiftlight_M_;
RT_MODEL_racecar_shiftlight_T *const racecar_shiftlight_M =
  &racecar_shiftlight_M_;

/* Model step function */
void racecar_shiftlight_step(void)
{
  real_T rtb_Divide1;
  real_T rtb_PulseGenerator;
  int16_T i;
  int16_T rtb_shiftlight_stage;
  boolean_T rtb_AND;
  boolean_T rtb_AND_fd;
  boolean_T rtb_AND_g;
  boolean_T rtb_AND_j;
  boolean_T rtb_AND_n;
  boolean_T rtb_AND_o;
  boolean_T rtb_NOT;

  /* S-Function (c280xcanrcv): '<Root>/CAN Receive' */
  {
    unsigned char ucRXMsgData[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint16_T status = 0;
    CAN_MsgFrameType frameType;
    uint32_T messageID = 0;
    uint32_T reqNewDataRegValue = (((uint32_T)0x1)<<0);
    uint32_T newDataReg = CAN_getNewDataFlags(CANB_BASE) & reqNewDataRegValue;
    if (newDataReg == reqNewDataRegValue) {
      status = CAN_readMessageWithID(CANB_BASE, 1, &frameType, &messageID,
        (uint16_T*)ucRXMsgData);
    }

    if ((newDataReg == reqNewDataRegValue)&&(status > 0)) {
      racecar_shiftlight_B.CANReceive_o2.Extended = frameType;
      racecar_shiftlight_B.CANReceive_o2.Length = ((HWREG(CANB_BASE +
        CAN_O_IF2MCTL)) & CAN_IF2MCTL_DLC_M);
      racecar_shiftlight_B.CANReceive_o2.ID = messageID;
      racecar_shiftlight_B.CANReceive_o2.Data[0] = ucRXMsgData[0];
      racecar_shiftlight_B.CANReceive_o2.Data[1] = ucRXMsgData[1];
      racecar_shiftlight_B.CANReceive_o2.Data[2] = ucRXMsgData[2];
      racecar_shiftlight_B.CANReceive_o2.Data[3] = ucRXMsgData[3];
      racecar_shiftlight_B.CANReceive_o2.Data[4] = ucRXMsgData[4];
      racecar_shiftlight_B.CANReceive_o2.Data[5] = ucRXMsgData[5];
      racecar_shiftlight_B.CANReceive_o2.Data[6] = ucRXMsgData[6];
      racecar_shiftlight_B.CANReceive_o2.Data[7] = ucRXMsgData[7];

      /* -- Call CAN RX Fcn-Call_0 -- */

      /* Output and update for function-call system: '<Root>/Function-Call Subsystem' */

      /* S-Function (scanunpack): '<S1>/CAN Unpack1' */
      {
        /* S-Function (scanunpack): '<S1>/CAN Unpack1' */
        if ((8 == racecar_shiftlight_B.CANReceive_o2.Length) &&
            (racecar_shiftlight_B.CANReceive_o2.ID != INVALID_CAN_ID) ) {
          if ((380 == racecar_shiftlight_B.CANReceive_o2.ID) && (0U ==
               racecar_shiftlight_B.CANReceive_o2.Extended) ) {
            {
              /* --------------- START Unpacking signal 0 ------------------
               *  startBit                = 38
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
               * -----------------------------------------------------------------------*/
              /*
               * Signal is not connected or connected to terminator.
               * No unpacking code generated.
               */

              /* --------------- START Unpacking signal 1 ------------------
               *  startBit                = 54
               *  length                  = 10
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
               * -----------------------------------------------------------------------*/
              /*
               * Signal is not connected or connected to terminator.
               * No unpacking code generated.
               */

              /* --------------- START Unpacking signal 2 ------------------
               *  startBit                = 48
               *  length                  = 5
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
               * -----------------------------------------------------------------------*/
              /*
               * Signal is not connected or connected to terminator.
               * No unpacking code generated.
               */

              /* --------------- START Unpacking signal 3 ------------------
               *  startBit                = 33
               *  length                  = 5
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
               * -----------------------------------------------------------------------*/
              /*
               * Signal is not connected or connected to terminator.
               * No unpacking code generated.
               */

              /* --------------- START Unpacking signal 4 ------------------
               *  startBit                = 53
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
               * -----------------------------------------------------------------------*/
              /*
               * Signal is not connected or connected to terminator.
               * No unpacking code generated.
               */

              /* --------------- START Unpacking signal 5 ------------------
               *  startBit                = 32
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
               * -----------------------------------------------------------------------*/
              /*
               * Signal is not connected or connected to terminator.
               * No unpacking code generated.
               */

              /* --------------- START Unpacking signal 6 ------------------
               *  startBit                = 56
               *  length                  = 4
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
               * -----------------------------------------------------------------------*/
              /*
               * Signal is not connected or connected to terminator.
               * No unpacking code generated.
               */

              /* --------------- START Unpacking signal 7 ------------------
               *  startBit                = 60
               *  length                  = 2
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
               * -----------------------------------------------------------------------*/
              /*
               * Signal is not connected or connected to terminator.
               * No unpacking code generated.
               */

              /* --------------- START Unpacking signal 8 ------------------
               *  startBit                = 24
               *  length                  = 16
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
               * -----------------------------------------------------------------------*/
              {
                real_T outValue = 0;

                {
                  uint16_T unpackedValue = 0;

                  {
                    uint16_T tempValue = (uint16_T) (0);

                    {
                      tempValue = tempValue | (uint16_T)
                        (racecar_shiftlight_B.CANReceive_o2.Data[3]);
                      tempValue = tempValue | (uint16_T)((uint16_T)
                        (racecar_shiftlight_B.CANReceive_o2.Data[2]) << 8);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real_T) (unpackedValue);
                }

                {
                  real_T result = (real_T) outValue;
                  racecar_shiftlight_B.CANUnpack1_o9 = result;
                }
              }

              /* --------------- START Unpacking signal 9 ------------------
               *  startBit                = 39
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
               * -----------------------------------------------------------------------*/
              /*
               * Signal is not connected or connected to terminator.
               * No unpacking code generated.
               */

              /* --------------- START Unpacking signal 10 ------------------
               *  startBit                = 0
               *  length                  = 8
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
               * -----------------------------------------------------------------------*/
              /*
               * Signal is not connected or connected to terminator.
               * No unpacking code generated.
               */
            }
          }
        }
      }
    }
  }

  /* End of Outputs for S-Function (c280xcanrcv): '<Root>/CAN Receive' */

  /* Chart: '<S6>/Chart' */
  if (racecar_shiftlight_DW.is_active_c3_racecar_shiftlight == 0U) {
    racecar_shiftlight_DW.is_active_c3_racecar_shiftlight = 1U;
    racecar_shiftlight_DW.is_c3_racecar_shiftlight = racecar_shiftlight_IN_Init;
    rtb_shiftlight_stage = 0;
  } else {
    switch (racecar_shiftlight_DW.is_c3_racecar_shiftlight) {
     case racecar_shiftlight_IN_Init:
      if (racecar_shiftlight_B.CANUnpack1_o9 >= 5400.0) {
        racecar_shiftlight_DW.is_c3_racecar_shiftlight =
          racecar_shiftlight_IN_stage1;
        rtb_shiftlight_stage = 1;
      } else {
        rtb_shiftlight_stage = 0;
      }
      break;

     case racecar_shiftlight_IN_stage1:
      if (racecar_shiftlight_B.CANUnpack1_o9 >= 5600.0) {
        racecar_shiftlight_DW.is_c3_racecar_shiftlight =
          racecar_shiftlight_IN_stage2;
        rtb_shiftlight_stage = 2;
      } else if (racecar_shiftlight_B.CANUnpack1_o9 < 5400.0) {
        racecar_shiftlight_DW.is_c3_racecar_shiftlight =
          racecar_shiftlight_IN_Init;
        rtb_shiftlight_stage = 0;
      } else {
        rtb_shiftlight_stage = 1;
      }
      break;

     case racecar_shiftlight_IN_stage2:
      if (racecar_shiftlight_B.CANUnpack1_o9 < 5600.0) {
        racecar_shiftlight_DW.is_c3_racecar_shiftlight =
          racecar_shiftlight_IN_stage1;
        rtb_shiftlight_stage = 1;
      } else if (racecar_shiftlight_B.CANUnpack1_o9 >= 5800.0) {
        racecar_shiftlight_DW.is_c3_racecar_shiftlight =
          racecar_shiftlight_IN_stage3;
        rtb_shiftlight_stage = 3;
      } else {
        rtb_shiftlight_stage = 2;
      }
      break;

     case racecar_shiftlight_IN_stage3:
      if (racecar_shiftlight_B.CANUnpack1_o9 < 5800.0) {
        racecar_shiftlight_DW.is_c3_racecar_shiftlight =
          racecar_shiftlight_IN_stage2;
        rtb_shiftlight_stage = 2;
      } else if (racecar_shiftlight_B.CANUnpack1_o9 >= 6000.0) {
        racecar_shiftlight_DW.is_c3_racecar_shiftlight =
          racecar_shiftlight_IN_stage4;
        rtb_shiftlight_stage = 4;
      } else {
        rtb_shiftlight_stage = 3;
      }
      break;

     case racecar_shiftlight_IN_stage4:
      if (racecar_shiftlight_B.CANUnpack1_o9 < 6000.0) {
        racecar_shiftlight_DW.is_c3_racecar_shiftlight =
          racecar_shiftlight_IN_stage3;
        rtb_shiftlight_stage = 3;
      } else if (racecar_shiftlight_B.CANUnpack1_o9 >= 6200.0) {
        racecar_shiftlight_DW.is_c3_racecar_shiftlight =
          racecar_shiftlight_IN_stage5;
        rtb_shiftlight_stage = 5;
      } else {
        rtb_shiftlight_stage = 4;
      }
      break;

     case racecar_shiftlight_IN_stage5:
      if (racecar_shiftlight_B.CANUnpack1_o9 < 6200.0) {
        racecar_shiftlight_DW.is_c3_racecar_shiftlight =
          racecar_shiftlight_IN_stage4;
        rtb_shiftlight_stage = 4;
      } else if (racecar_shiftlight_B.CANUnpack1_o9 >= 6400.0) {
        racecar_shiftlight_DW.is_c3_racecar_shiftlight =
          racecar_shiftlight_IN_stage6;
        rtb_shiftlight_stage = 6;
      } else {
        rtb_shiftlight_stage = 5;
      }
      break;

     case racecar_shiftlight_IN_stage6:
      if (racecar_shiftlight_B.CANUnpack1_o9 < 6400.0) {
        racecar_shiftlight_DW.is_c3_racecar_shiftlight =
          racecar_shiftlight_IN_stage5;
        rtb_shiftlight_stage = 5;
      } else if (racecar_shiftlight_B.CANUnpack1_o9 >= 6600.0) {
        racecar_shiftlight_DW.is_c3_racecar_shiftlight =
          racecar_shiftlight_IN_stage7;
        rtb_shiftlight_stage = 7;
      } else {
        rtb_shiftlight_stage = 6;
      }
      break;

     case racecar_shiftlight_IN_stage7:
      if (racecar_shiftlight_B.CANUnpack1_o9 < 6600.0) {
        racecar_shiftlight_DW.is_c3_racecar_shiftlight =
          racecar_shiftlight_IN_stage6;
        rtb_shiftlight_stage = 6;
      } else if (racecar_shiftlight_B.CANUnpack1_o9 >= 6800.0) {
        racecar_shiftlight_DW.is_c3_racecar_shiftlight =
          racecar_shiftlight_IN_stage8;
        rtb_shiftlight_stage = 8;
      } else {
        rtb_shiftlight_stage = 7;
      }
      break;

     default:
      /* case IN_stage8: */
      if (racecar_shiftlight_B.CANUnpack1_o9 < 6800.0) {
        racecar_shiftlight_DW.is_c3_racecar_shiftlight =
          racecar_shiftlight_IN_stage7;
        rtb_shiftlight_stage = 7;
      } else {
        rtb_shiftlight_stage = 8;
      }
      break;
    }
  }

  /* End of Chart: '<S6>/Chart' */

  /* DiscretePulseGenerator: '<S6>/Pulse Generator' */
  rtb_PulseGenerator = (racecar_shiftlight_DW.clockTickCounter <
                        racecar_shiftlight_P.PulseGenerator_Duty) &&
    (racecar_shiftlight_DW.clockTickCounter >= 0L) ?
    racecar_shiftlight_P.PulseGenerator_Amp : 0.0;
  if (racecar_shiftlight_DW.clockTickCounter >=
      racecar_shiftlight_P.PulseGenerator_Period - 1.0) {
    racecar_shiftlight_DW.clockTickCounter = 0L;
  } else {
    racecar_shiftlight_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<S6>/Pulse Generator' */

  /* MultiPortSwitch: '<S6>/Multiport Switch' incorporates:
   *  Constant: '<S6>/Constant10'
   *  Constant: '<S6>/Constant11'
   *  Constant: '<S6>/Constant2'
   *  Constant: '<S6>/Constant3'
   *  Constant: '<S6>/Constant5'
   *  Constant: '<S6>/Constant6'
   *  Constant: '<S6>/Constant7'
   *  Constant: '<S6>/Constant9'
   *  DataStoreWrite: '<S6>/Data Store Write'
   */
  for (i = 0; i < 396; i++) {
    switch (rtb_shiftlight_stage) {
     case 1:
      duty_cycle_table[i] = racecar_shiftlight_P.stage1_day[i];
      break;

     case 2:
      duty_cycle_table[i] = racecar_shiftlight_P.stage2_day[i];
      break;

     case 3:
      duty_cycle_table[i] = racecar_shiftlight_P.stage3_day[i];
      break;

     case 4:
      duty_cycle_table[i] = racecar_shiftlight_P.stage4_day[i];
      break;

     case 5:
      duty_cycle_table[i] = racecar_shiftlight_P.stage5_day[i];
      break;

     case 6:
      duty_cycle_table[i] = racecar_shiftlight_P.stage6_day[i];
      break;

     case 7:
      duty_cycle_table[i] = racecar_shiftlight_P.stage7_day[i];
      break;

     case 8:
      /* Switch: '<S6>/Switch' incorporates:
       *  Constant: '<S6>/Constant4'
       *  Constant: '<S6>/Constant8'
       *  DataStoreWrite: '<S6>/Data Store Write'
       */
      if (rtb_PulseGenerator > racecar_shiftlight_P.Switch_Threshold) {
        duty_cycle_table[i] = racecar_shiftlight_P.red_day_all[i];
      } else {
        duty_cycle_table[i] = racecar_shiftlight_P.all_off[i];
      }

      /* End of Switch: '<S6>/Switch' */
      break;

     default:
      duty_cycle_table[i] = racecar_shiftlight_P.all_off[i];
      break;
    }
  }

  /* End of MultiPortSwitch: '<S6>/Multiport Switch' */

  /* Product: '<S5>/Divide1' incorporates:
   *  Constant: '<S5>/Constant1'
   *  Gain: '<S5>/Multiply1'
   */
  rtb_Divide1 = racecar_shiftlight_P.Multiply1_Gain *
    racecar_shiftlight_B.CANUnpack1_o9 / racecar_shiftlight_P.Constant1_Value;

  /* S-Function (c280xcanrcv): '<Root>/CAN Receive3' */
  {
    unsigned char ucRXMsgData[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint16_T status = 0;
    CAN_MsgFrameType frameType;
    uint32_T messageID = 0;
    uint32_T reqNewDataRegValue = (((uint32_T)0x1)<<3);
    uint32_T newDataReg = CAN_getNewDataFlags(CANB_BASE) & reqNewDataRegValue;
    if (newDataReg == reqNewDataRegValue) {
      status = CAN_readMessageWithID(CANB_BASE, 4, &frameType, &messageID,
        (uint16_T*)ucRXMsgData);
    }

    if ((newDataReg == reqNewDataRegValue)&&(status > 0)) {
      racecar_shiftlight_B.CANReceive3_o2.Extended = frameType;
      racecar_shiftlight_B.CANReceive3_o2.Length = ((HWREG(CANB_BASE +
        CAN_O_IF2MCTL)) & CAN_IF2MCTL_DLC_M);
      racecar_shiftlight_B.CANReceive3_o2.ID = messageID;
      racecar_shiftlight_B.CANReceive3_o2.Data[0] = ucRXMsgData[0];
      racecar_shiftlight_B.CANReceive3_o2.Data[1] = ucRXMsgData[1];
      racecar_shiftlight_B.CANReceive3_o2.Data[2] = ucRXMsgData[2];
      racecar_shiftlight_B.CANReceive3_o2.Data[3] = ucRXMsgData[3];
      racecar_shiftlight_B.CANReceive3_o2.Data[4] = ucRXMsgData[4];
      racecar_shiftlight_B.CANReceive3_o2.Data[5] = ucRXMsgData[5];
      racecar_shiftlight_B.CANReceive3_o2.Data[6] = ucRXMsgData[6];
      racecar_shiftlight_B.CANReceive3_o2.Data[7] = ucRXMsgData[7];

      /* -- Call CAN RX Fcn-Call_0 -- */

      /* Output and update for function-call system: '<Root>/Function-Call Subsystem3' */

      /* S-Function (scanunpack): '<S3>/CAN Unpack1' */
      {
        /* S-Function (scanunpack): '<S3>/CAN Unpack1' */
        if ((8 == racecar_shiftlight_B.CANReceive3_o2.Length) &&
            (racecar_shiftlight_B.CANReceive3_o2.ID != INVALID_CAN_ID) ) {
          if ((464 == racecar_shiftlight_B.CANReceive3_o2.ID) && (0U ==
               racecar_shiftlight_B.CANReceive3_o2.Extended) ) {
            {
              /* --------------- START Unpacking signal 0 ------------------
               *  startBit                = 56
               *  length                  = 4
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
               * -----------------------------------------------------------------------*/
              /*
               * Signal is not connected or connected to terminator.
               * No unpacking code generated.
               */

              /* --------------- START Unpacking signal 1 ------------------
               *  startBit                = 9
               *  length                  = 15
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 0.01
               *  offset                  = 0.0
               * -----------------------------------------------------------------------*/
              {
                real_T outValue = 0;

                {
                  uint16_T unpackedValue = 0;

                  {
                    uint16_T tempValue = (uint16_T) (0);

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        (racecar_shiftlight_B.CANReceive3_o2.Data[1]) &
                        (uint16_T)(0xFEU)) >> 1);
                      tempValue = tempValue | (uint16_T)((uint16_T)
                        (racecar_shiftlight_B.CANReceive3_o2.Data[0]) << 7);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real_T) (unpackedValue);
                }

                {
                  real_T result = (real_T) outValue;
                  result = result * 0.01;
                  racecar_shiftlight_B.ws_fl = result;
                }
              }

              /* --------------- START Unpacking signal 2 ------------------
               *  startBit                = 26
               *  length                  = 15
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 0.01
               *  offset                  = 0.0
               * -----------------------------------------------------------------------*/
              {
                real_T outValue = 0;

                {
                  uint16_T unpackedValue = 0;

                  {
                    uint16_T tempValue = (uint16_T) (0);

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        (racecar_shiftlight_B.CANReceive3_o2.Data[3]) &
                        (uint16_T)(0xFCU)) >> 2);
                      tempValue = tempValue | (uint16_T)((uint16_T)
                        (racecar_shiftlight_B.CANReceive3_o2.Data[2]) << 6);
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        (racecar_shiftlight_B.CANReceive3_o2.Data[1]) &
                        (uint16_T)(0x1U)) << 14);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real_T) (unpackedValue);
                }

                {
                  real_T result = (real_T) outValue;
                  result = result * 0.01;
                  racecar_shiftlight_B.ws_fr = result;
                }
              }

              /* --------------- START Unpacking signal 3 ------------------
               *  startBit                = 43
               *  length                  = 15
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 0.01
               *  offset                  = 0.0
               * -----------------------------------------------------------------------*/
              /*
               * Signal is not connected or connected to terminator.
               * No unpacking code generated.
               */

              /* --------------- START Unpacking signal 4 ------------------
               *  startBit                = 60
               *  length                  = 15
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 0.01
               *  offset                  = 0.0
               * -----------------------------------------------------------------------*/
              /*
               * Signal is not connected or connected to terminator.
               * No unpacking code generated.
               */
            }
          }
        }
      }
    }
  }

  /* End of Outputs for S-Function (c280xcanrcv): '<Root>/CAN Receive3' */

  /* Gain: '<Root>/Gain1' incorporates:
   *  Sum: '<Root>/Add1'
   */
  rtb_PulseGenerator = (racecar_shiftlight_B.ws_fl + racecar_shiftlight_B.ws_fr)
    * racecar_shiftlight_P.Gain1_Gain;

  /* Product: '<S5>/Divide2' incorporates:
   *  Constant: '<S5>/Constant'
   *  Gain: '<S5>/Multiply'
   *  Gain: '<S5>/Multiply2'
   *  Product: '<S5>/Divide'
   */
  rtb_Divide1 /= racecar_shiftlight_P.Multiply_Gain * rtb_PulseGenerator /
    racecar_shiftlight_P.tire_radius * racecar_shiftlight_P.final_drive_ratio;

  /* Logic: '<S12>/AND' incorporates:
   *  Constant: '<S12>/Lower Limit'
   *  Constant: '<S12>/Upper Limit'
   *  RelationalOperator: '<S12>/Lower Test'
   *  RelationalOperator: '<S12>/Upper Test'
   */
  rtb_AND = ((racecar_shiftlight_P.checksecond_lowlimit <= rtb_Divide1) &&
             (rtb_Divide1 <= racecar_shiftlight_P.checksecond_uplimit));

  /* Logic: '<S10>/AND' incorporates:
   *  Constant: '<S10>/Lower Limit'
   *  Constant: '<S10>/Upper Limit'
   *  RelationalOperator: '<S10>/Lower Test'
   *  RelationalOperator: '<S10>/Upper Test'
   */
  rtb_AND_j = ((racecar_shiftlight_P.checkfirst_lowlimit <= rtb_Divide1) &&
               (rtb_Divide1 <= racecar_shiftlight_P.checkfirst_uplimit));

  /* Logic: '<S14>/AND' incorporates:
   *  Constant: '<S14>/Lower Limit'
   *  Constant: '<S14>/Upper Limit'
   *  RelationalOperator: '<S14>/Lower Test'
   *  RelationalOperator: '<S14>/Upper Test'
   */
  rtb_AND_o = ((racecar_shiftlight_P.checkthird_lowlimit <= rtb_Divide1) &&
               (rtb_Divide1 <= racecar_shiftlight_P.checkthird_uplimit));

  /* Logic: '<S11>/AND' incorporates:
   *  Constant: '<S11>/Lower Limit'
   *  Constant: '<S11>/Upper Limit'
   *  RelationalOperator: '<S11>/Lower Test'
   *  RelationalOperator: '<S11>/Upper Test'
   */
  rtb_AND_n = ((racecar_shiftlight_P.checkforth_lowlimit <= rtb_Divide1) &&
               (rtb_Divide1 <= racecar_shiftlight_P.checkforth_uplimit));

  /* Logic: '<S9>/AND' incorporates:
   *  Constant: '<S9>/Lower Limit'
   *  Constant: '<S9>/Upper Limit'
   *  RelationalOperator: '<S9>/Lower Test'
   *  RelationalOperator: '<S9>/Upper Test'
   */
  rtb_AND_fd = ((racecar_shiftlight_P.checkfifth_lowlimit <= rtb_Divide1) &&
                (rtb_Divide1 <= racecar_shiftlight_P.checkfifth_uplimit));

  /* Logic: '<S13>/AND' incorporates:
   *  Constant: '<S13>/Lower Limit'
   *  Constant: '<S13>/Upper Limit'
   *  RelationalOperator: '<S13>/Lower Test'
   *  RelationalOperator: '<S13>/Upper Test'
   */
  rtb_AND_g = ((racecar_shiftlight_P.checksixth_lowlimit <= rtb_Divide1) &&
               (rtb_Divide1 <= racecar_shiftlight_P.checksixth_uplimit));

  /* S-Function (c280xcanrcv): '<Root>/CAN Receive1' */
  {
    unsigned char ucRXMsgData[8]= { 0, 0, 0, 0, 0, 0, 0, 0 };

    uint16_T status = 0;
    CAN_MsgFrameType frameType;
    uint32_T messageID = 0;
    uint32_T reqNewDataRegValue = (((uint32_T)0x1)<<2);
    uint32_T newDataReg = CAN_getNewDataFlags(CANB_BASE) & reqNewDataRegValue;
    if (newDataReg == reqNewDataRegValue) {
      status = CAN_readMessageWithID(CANB_BASE, 3, &frameType, &messageID,
        (uint16_T*)ucRXMsgData);
    }

    if ((newDataReg == reqNewDataRegValue)&&(status > 0)) {
      racecar_shiftlight_B.CANReceive1_o2.Extended = frameType;
      racecar_shiftlight_B.CANReceive1_o2.Length = ((HWREG(CANB_BASE +
        CAN_O_IF2MCTL)) & CAN_IF2MCTL_DLC_M);
      racecar_shiftlight_B.CANReceive1_o2.ID = messageID;
      racecar_shiftlight_B.CANReceive1_o2.Data[0] = ucRXMsgData[0];
      racecar_shiftlight_B.CANReceive1_o2.Data[1] = ucRXMsgData[1];
      racecar_shiftlight_B.CANReceive1_o2.Data[2] = ucRXMsgData[2];
      racecar_shiftlight_B.CANReceive1_o2.Data[3] = ucRXMsgData[3];
      racecar_shiftlight_B.CANReceive1_o2.Data[4] = ucRXMsgData[4];
      racecar_shiftlight_B.CANReceive1_o2.Data[5] = ucRXMsgData[5];
      racecar_shiftlight_B.CANReceive1_o2.Data[6] = ucRXMsgData[6];
      racecar_shiftlight_B.CANReceive1_o2.Data[7] = ucRXMsgData[7];

      /* -- Call CAN RX Fcn-Call_0 -- */

      /* Output and update for function-call system: '<Root>/Function-Call Subsystem1' */

      /* S-Function (scanunpack): '<S2>/CAN Unpack1' */
      {
        /* S-Function (scanunpack): '<S2>/CAN Unpack1' */
        if ((8 == racecar_shiftlight_B.CANReceive1_o2.Length) &&
            (racecar_shiftlight_B.CANReceive1_o2.ID != INVALID_CAN_ID) ) {
          if ((316 == racecar_shiftlight_B.CANReceive1_o2.ID) && (0U ==
               racecar_shiftlight_B.CANReceive1_o2.Extended) ) {
            {
              /* --------------- START Unpacking signal 0 ------------------
               *  startBit                = 32
               *  length                  = 8
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
               * -----------------------------------------------------------------------*/
              /*
               * Signal is not connected or connected to terminator.
               * No unpacking code generated.
               */

              /* --------------- START Unpacking signal 1 ------------------
               *  startBit                = 56
               *  length                  = 4
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
               * -----------------------------------------------------------------------*/
              /*
               * Signal is not connected or connected to terminator.
               * No unpacking code generated.
               */

              /* --------------- START Unpacking signal 2 ------------------
               *  startBit                = 50
               *  length                  = 1
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
               * -----------------------------------------------------------------------*/
              {
                real_T outValue = 0;

                {
                  uint16_T unpackedValue = 0;

                  {
                    uint16_T tempValue = (uint16_T) (0);

                    {
                      tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                        (racecar_shiftlight_B.CANReceive1_o2.Data[6]) &
                        (uint16_T)(0x4U)) >> 2);
                    }

                    unpackedValue = tempValue;
                  }

                  outValue = (real_T) (unpackedValue);
                }

                {
                  real_T result = (real_T) outValue;
                  racecar_shiftlight_B.CANUnpack1_o3 = result;
                }
              }

              /* --------------- START Unpacking signal 3 ------------------
               *  startBit                = 60
               *  length                  = 2
               *  desiredSignalByteLayout = BIGENDIAN
               *  dataType                = UNSIGNED
               *  factor                  = 1.0
               *  offset                  = 0.0
               * -----------------------------------------------------------------------*/
              /*
               * Signal is not connected or connected to terminator.
               * No unpacking code generated.
               */
            }
          }
        }
      }

      /* Logic: '<S2>/NOT' */
      racecar_shiftlight_B.NOT = !(racecar_shiftlight_B.CANUnpack1_o3 != 0.0);
    }
  }

  /* End of Outputs for S-Function (c280xcanrcv): '<Root>/CAN Receive1' */

  /* Logic: '<S5>/NOT' */
  rtb_NOT = !racecar_shiftlight_B.NOT;

  /* Chart: '<S5>/clutch_debounce' */
  if (racecar_shiftlight_DW.temporalCounter_i1 < 255U) {
    racecar_shiftlight_DW.temporalCounter_i1 = (uint16_T)((int16_T)
      racecar_shiftlight_DW.temporalCounter_i1 + 1) & 255U;
  }

  if (racecar_shiftlight_DW.is_active_c7_racecar_shiftlight == 0U) {
    racecar_shiftlight_DW.is_active_c7_racecar_shiftlight = 1U;
    racecar_shiftlight_DW.is_c7_racecar_shiftlight = racecar_shiftlight_IN_Off;
    rtb_shiftlight_stage = 0;
  } else {
    switch (racecar_shiftlight_DW.is_c7_racecar_shiftlight) {
     case racecar_shiftlight_IN_Off:
      if (rtb_NOT) {
        racecar_shiftlight_DW.is_c7_racecar_shiftlight =
          racecar_shiftlight_IN_Wait;
        racecar_shiftlight_DW.temporalCounter_i1 = 0U;
        racecar_shiftlight_DW.is_Wait = racecar_shiftlight_IN_To_on;
        rtb_shiftlight_stage = 0;
      } else {
        rtb_shiftlight_stage = 0;
      }
      break;

     case racecar_shiftlight_IN_On:
      if (!rtb_NOT) {
        racecar_shiftlight_DW.is_c7_racecar_shiftlight =
          racecar_shiftlight_IN_Wait;
        racecar_shiftlight_DW.temporalCounter_i1 = 0U;
        racecar_shiftlight_DW.is_Wait = racecar_shiftlight_IN_To_off;
        rtb_shiftlight_stage = 1;
      } else {
        rtb_shiftlight_stage = 1;
      }
      break;

     default:
      /* case IN_Wait: */
      if (racecar_shiftlight_DW.is_Wait == 1U) {
        if (rtb_NOT) {
          racecar_shiftlight_DW.is_Wait = racecar_shif_IN_NO_ACTIVE_CHILD;
          racecar_shiftlight_DW.is_c7_racecar_shiftlight =
            racecar_shiftlight_IN_On;
          rtb_shiftlight_stage = 1;
        } else if (racecar_shiftlight_DW.temporalCounter_i1 >= 200U) {
          racecar_shiftlight_DW.is_Wait = racecar_shif_IN_NO_ACTIVE_CHILD;
          racecar_shiftlight_DW.is_c7_racecar_shiftlight =
            racecar_shiftlight_IN_Off;
          rtb_shiftlight_stage = 0;
        } else {
          rtb_shiftlight_stage = 1;
        }

        /* case IN_To_on: */
      } else if (!rtb_NOT) {
        racecar_shiftlight_DW.is_Wait = racecar_shif_IN_NO_ACTIVE_CHILD;
        racecar_shiftlight_DW.is_c7_racecar_shiftlight =
          racecar_shiftlight_IN_Off;
        rtb_shiftlight_stage = 0;
      } else if (racecar_shiftlight_DW.temporalCounter_i1 >= 200U) {
        racecar_shiftlight_DW.is_Wait = racecar_shif_IN_NO_ACTIVE_CHILD;
        racecar_shiftlight_DW.is_c7_racecar_shiftlight =
          racecar_shiftlight_IN_On;
        rtb_shiftlight_stage = 1;
      } else {
        rtb_shiftlight_stage = 0;
      }
      break;
    }
  }

  /* End of Chart: '<S5>/clutch_debounce' */

  /* Chart: '<S5>/Chart' incorporates:
   *  DataTypeConversion: '<S5>/Cast'
   */
  if (racecar_shiftlight_DW.temporalCounter_i1_n < 255U) {
    racecar_shiftlight_DW.temporalCounter_i1_n = (uint16_T)((int16_T)
      racecar_shiftlight_DW.temporalCounter_i1_n + 1) & 255U;
  }

  if (racecar_shiftlight_DW.is_active_c6_racecar_shiftlight == 0U) {
    racecar_shiftlight_DW.is_active_c6_racecar_shiftlight = 1U;
    racecar_shiftlight_DW.is_c6_racecar_shiftlight =
      racecar_shiftlight_IN_Neutral;
    rtb_shiftlight_stage = 0;
  } else {
    switch (racecar_shiftlight_DW.is_c6_racecar_shiftlight) {
     case racecar_shiftlight_IN_Clutch_In:
      if (rtb_AND_j) {
        racecar_shiftlight_DW.is_c6_racecar_shiftlight =
          racecar_shiftlight_IN_Gear_Out;
        racecar_shiftlight_DW.is_Gear_Out = racecar_shiftlight_IN_In_First;
        rtb_shiftlight_stage = 1;
      } else if (rtb_AND) {
        racecar_shiftlight_DW.is_c6_racecar_shiftlight =
          racecar_shiftlight_IN_Gear_Out;
        racecar_shiftlight_DW.is_Gear_Out = racecar_shiftlight_IN_In_Second;
        rtb_shiftlight_stage = 2;
      } else if (rtb_AND_o) {
        racecar_shiftlight_DW.is_c6_racecar_shiftlight =
          racecar_shiftlight_IN_Gear_Out;
        racecar_shiftlight_DW.is_Gear_Out = racecar_shiftlight_IN_In_Third;
        rtb_shiftlight_stage = 3;
      } else if (rtb_AND_n) {
        racecar_shiftlight_DW.is_c6_racecar_shiftlight =
          racecar_shiftlight_IN_Gear_Out;
        racecar_shiftlight_DW.is_Gear_Out = racecar_shiftlight_IN_In_Fourth;
        rtb_shiftlight_stage = 4;
      } else if (rtb_AND_fd) {
        racecar_shiftlight_DW.is_c6_racecar_shiftlight =
          racecar_shiftlight_IN_Gear_Out;
        racecar_shiftlight_DW.is_Gear_Out = racecar_shiftlight_IN_In_Fifth;
        rtb_shiftlight_stage = 5;
      } else if (rtb_AND_g) {
        racecar_shiftlight_DW.is_c6_racecar_shiftlight =
          racecar_shiftlight_IN_Gear_Out;
        racecar_shiftlight_DW.is_Gear_Out = racecar_shiftlight_IN_In_Sixth;
        rtb_shiftlight_stage = 6;
      } else if (rtb_shiftlight_stage != 0) {
        racecar_shiftlight_DW.is_c6_racecar_shiftlight =
          racecar_shiftligh_IN_Clutch_Out;
        rtb_shiftlight_stage = 0;
      } else if (racecar_shiftlight_DW.temporalCounter_i1_n >= 200U) {
        racecar_shiftlight_DW.is_c6_racecar_shiftlight =
          racecar_shiftlight_IN_Neutral;
        rtb_shiftlight_stage = 0;
      } else {
        rtb_shiftlight_stage = 0;
      }
      break;

     case racecar_shiftligh_IN_Clutch_Out:
      if ((rtb_shiftlight_stage == 0) && (rtb_PulseGenerator >= 5.0)) {
        racecar_shiftlight_DW.temporalCounter_i1_n = 0U;
        racecar_shiftlight_DW.is_c6_racecar_shiftlight =
          racecar_shiftlight_IN_Clutch_In;
        rtb_shiftlight_stage = 0;
      } else {
        rtb_shiftlight_stage = 0;
      }
      break;

     case racecar_shiftlight_IN_Gear_Out:
      if (rtb_shiftlight_stage != 0) {
        racecar_shiftlight_DW.is_Gear_Out = racecar_shif_IN_NO_ACTIVE_CHILD;
        racecar_shiftlight_DW.is_c6_racecar_shiftlight =
          racecar_shiftligh_IN_Clutch_Out;
        rtb_shiftlight_stage = 0;
      } else {
        switch (racecar_shiftlight_DW.is_Gear_Out) {
         case racecar_shiftlight_IN_In_Fifth:
          if (!rtb_AND_fd) {
            racecar_shiftlight_DW.is_Gear_Out = racecar_shif_IN_NO_ACTIVE_CHILD;
            racecar_shiftlight_DW.temporalCounter_i1_n = 0U;
            racecar_shiftlight_DW.is_c6_racecar_shiftlight =
              racecar_shiftlight_IN_Clutch_In;
            rtb_shiftlight_stage = 0;
          } else {
            rtb_shiftlight_stage = 5;
          }
          break;

         case racecar_shiftlight_IN_In_First:
          if (!rtb_AND_j) {
            racecar_shiftlight_DW.is_Gear_Out = racecar_shif_IN_NO_ACTIVE_CHILD;
            racecar_shiftlight_DW.temporalCounter_i1_n = 0U;
            racecar_shiftlight_DW.is_c6_racecar_shiftlight =
              racecar_shiftlight_IN_Clutch_In;
            rtb_shiftlight_stage = 0;
          } else {
            rtb_shiftlight_stage = 1;
          }
          break;

         case racecar_shiftlight_IN_In_Fourth:
          if (!rtb_AND_n) {
            racecar_shiftlight_DW.is_Gear_Out = racecar_shif_IN_NO_ACTIVE_CHILD;
            racecar_shiftlight_DW.temporalCounter_i1_n = 0U;
            racecar_shiftlight_DW.is_c6_racecar_shiftlight =
              racecar_shiftlight_IN_Clutch_In;
            rtb_shiftlight_stage = 0;
          } else {
            rtb_shiftlight_stage = 4;
          }
          break;

         case racecar_shiftlight_IN_In_Second:
          if (!rtb_AND) {
            racecar_shiftlight_DW.is_Gear_Out = racecar_shif_IN_NO_ACTIVE_CHILD;
            racecar_shiftlight_DW.temporalCounter_i1_n = 0U;
            racecar_shiftlight_DW.is_c6_racecar_shiftlight =
              racecar_shiftlight_IN_Clutch_In;
            rtb_shiftlight_stage = 0;
          } else {
            rtb_shiftlight_stage = 2;
          }
          break;

         case racecar_shiftlight_IN_In_Sixth:
          if (!rtb_AND_g) {
            racecar_shiftlight_DW.is_Gear_Out = racecar_shif_IN_NO_ACTIVE_CHILD;
            racecar_shiftlight_DW.temporalCounter_i1_n = 0U;
            racecar_shiftlight_DW.is_c6_racecar_shiftlight =
              racecar_shiftlight_IN_Clutch_In;
            rtb_shiftlight_stage = 0;
          } else {
            rtb_shiftlight_stage = 6;
          }
          break;

         default:
          /* case IN_In_Third: */
          if (!rtb_AND_o) {
            racecar_shiftlight_DW.is_Gear_Out = racecar_shif_IN_NO_ACTIVE_CHILD;
            racecar_shiftlight_DW.temporalCounter_i1_n = 0U;
            racecar_shiftlight_DW.is_c6_racecar_shiftlight =
              racecar_shiftlight_IN_Clutch_In;
            rtb_shiftlight_stage = 0;
          } else {
            rtb_shiftlight_stage = 3;
          }
          break;
        }
      }
      break;

     default:
      /* case IN_Neutral: */
      if (rtb_shiftlight_stage != 0) {
        racecar_shiftlight_DW.is_c6_racecar_shiftlight =
          racecar_shiftligh_IN_Clutch_Out;
        rtb_shiftlight_stage = 0;
      } else {
        rtb_shiftlight_stage = 0;
      }
      break;
    }
  }

  /* End of Chart: '<S5>/Chart' */

  /* Chart: '<S4>/Chart' */
  if (racecar_shiftlight_DW.is_active_c8_racecar_shiftlight == 0U) {
    racecar_shiftlight_DW.is_active_c8_racecar_shiftlight = 1U;
    racecar_shiftlight_DW.is_c8_racecar_shiftlight =
      racecar_shiftlight_IN_No_Gear;
    racecar_shiftlight_B.D0_IN = 0.0;
    racecar_shiftlight_B.D1_IN = 0.0;
    racecar_shiftlight_B.D2_IN = 0.0;
    racecar_shiftlight_B.D3_IN = 0.0;
  } else {
    switch (racecar_shiftlight_DW.is_c8_racecar_shiftlight) {
     case racecar_shiftligh_IN_Fifth_Gear:
      if (rtb_shiftlight_stage != 5) {
        racecar_shiftlight_DW.is_c8_racecar_shiftlight =
          racecar_shiftlight_IN_No_Gear;
        racecar_shiftlight_B.D0_IN = 0.0;
        racecar_shiftlight_B.D1_IN = 0.0;
        racecar_shiftlight_B.D2_IN = 0.0;
        racecar_shiftlight_B.D3_IN = 0.0;
      } else {
        racecar_shiftlight_B.D0_IN = 0.0;
        racecar_shiftlight_B.D1_IN = 1.0;
        racecar_shiftlight_B.D2_IN = 0.0;
        racecar_shiftlight_B.D3_IN = 1.0;
      }
      break;

     case racecar_shiftligh_IN_First_Gear:
      if (rtb_shiftlight_stage != 1) {
        racecar_shiftlight_DW.is_c8_racecar_shiftlight =
          racecar_shiftlight_IN_No_Gear;
        racecar_shiftlight_B.D0_IN = 0.0;
        racecar_shiftlight_B.D1_IN = 0.0;
        racecar_shiftlight_B.D2_IN = 0.0;
        racecar_shiftlight_B.D3_IN = 0.0;
      } else {
        racecar_shiftlight_B.D0_IN = 0.0;
        racecar_shiftlight_B.D1_IN = 1.0;
        racecar_shiftlight_B.D2_IN = 1.0;
        racecar_shiftlight_B.D3_IN = 1.0;
      }
      break;

     case racecar_shiftligh_IN_Forth_Gear:
      if (rtb_shiftlight_stage != 4) {
        racecar_shiftlight_DW.is_c8_racecar_shiftlight =
          racecar_shiftlight_IN_No_Gear;
        racecar_shiftlight_B.D0_IN = 0.0;
        racecar_shiftlight_B.D1_IN = 0.0;
        racecar_shiftlight_B.D2_IN = 0.0;
        racecar_shiftlight_B.D3_IN = 0.0;
      } else {
        racecar_shiftlight_B.D0_IN = 1.0;
        racecar_shiftlight_B.D1_IN = 1.0;
        racecar_shiftlight_B.D2_IN = 0.0;
        racecar_shiftlight_B.D3_IN = 1.0;
      }
      break;

     case racecar_shiftlight_IN_No_Gear:
      if (rtb_shiftlight_stage == 1) {
        racecar_shiftlight_DW.is_c8_racecar_shiftlight =
          racecar_shiftligh_IN_First_Gear;
        racecar_shiftlight_B.D0_IN = 0.0;
        racecar_shiftlight_B.D1_IN = 1.0;
        racecar_shiftlight_B.D2_IN = 1.0;
        racecar_shiftlight_B.D3_IN = 1.0;
      } else if (rtb_shiftlight_stage == 2) {
        racecar_shiftlight_DW.is_c8_racecar_shiftlight =
          racecar_shiftlig_IN_Second_Gear;
        racecar_shiftlight_B.D0_IN = 1.0;
        racecar_shiftlight_B.D1_IN = 0.0;
        racecar_shiftlight_B.D2_IN = 1.0;
        racecar_shiftlight_B.D3_IN = 1.0;
      } else if (rtb_shiftlight_stage == 3) {
        racecar_shiftlight_DW.is_c8_racecar_shiftlight =
          racecar_shiftligh_IN_Third_Gear;
        racecar_shiftlight_B.D0_IN = 0.0;
        racecar_shiftlight_B.D1_IN = 0.0;
        racecar_shiftlight_B.D2_IN = 1.0;
        racecar_shiftlight_B.D3_IN = 1.0;
      } else if (rtb_shiftlight_stage == 4) {
        racecar_shiftlight_DW.is_c8_racecar_shiftlight =
          racecar_shiftligh_IN_Forth_Gear;
        racecar_shiftlight_B.D0_IN = 1.0;
        racecar_shiftlight_B.D1_IN = 1.0;
        racecar_shiftlight_B.D2_IN = 0.0;
        racecar_shiftlight_B.D3_IN = 1.0;
      } else if (rtb_shiftlight_stage == 5) {
        racecar_shiftlight_DW.is_c8_racecar_shiftlight =
          racecar_shiftligh_IN_Fifth_Gear;
        racecar_shiftlight_B.D0_IN = 0.0;
        racecar_shiftlight_B.D1_IN = 1.0;
        racecar_shiftlight_B.D2_IN = 0.0;
        racecar_shiftlight_B.D3_IN = 1.0;
      } else if (rtb_shiftlight_stage == 6) {
        racecar_shiftlight_DW.is_c8_racecar_shiftlight =
          racecar_shiftligh_IN_Sixth_Gear;
        racecar_shiftlight_B.D0_IN = 1.0;
        racecar_shiftlight_B.D1_IN = 0.0;
        racecar_shiftlight_B.D2_IN = 0.0;
        racecar_shiftlight_B.D3_IN = 1.0;
      } else {
        racecar_shiftlight_B.D0_IN = 0.0;
        racecar_shiftlight_B.D1_IN = 0.0;
        racecar_shiftlight_B.D2_IN = 0.0;
        racecar_shiftlight_B.D3_IN = 0.0;
      }
      break;

     case racecar_shiftlig_IN_Second_Gear:
      if (rtb_shiftlight_stage != 2) {
        racecar_shiftlight_DW.is_c8_racecar_shiftlight =
          racecar_shiftlight_IN_No_Gear;
        racecar_shiftlight_B.D0_IN = 0.0;
        racecar_shiftlight_B.D1_IN = 0.0;
        racecar_shiftlight_B.D2_IN = 0.0;
        racecar_shiftlight_B.D3_IN = 0.0;
      } else {
        racecar_shiftlight_B.D0_IN = 1.0;
        racecar_shiftlight_B.D1_IN = 0.0;
        racecar_shiftlight_B.D2_IN = 1.0;
        racecar_shiftlight_B.D3_IN = 1.0;
      }
      break;

     case racecar_shiftligh_IN_Sixth_Gear:
      if (rtb_shiftlight_stage != 6) {
        racecar_shiftlight_DW.is_c8_racecar_shiftlight =
          racecar_shiftlight_IN_No_Gear;
        racecar_shiftlight_B.D0_IN = 0.0;
        racecar_shiftlight_B.D1_IN = 0.0;
        racecar_shiftlight_B.D2_IN = 0.0;
        racecar_shiftlight_B.D3_IN = 0.0;
      } else {
        racecar_shiftlight_B.D0_IN = 1.0;
        racecar_shiftlight_B.D1_IN = 0.0;
        racecar_shiftlight_B.D2_IN = 0.0;
        racecar_shiftlight_B.D3_IN = 1.0;
      }
      break;

     default:
      /* case IN_Third_Gear: */
      if (rtb_shiftlight_stage != 3) {
        racecar_shiftlight_DW.is_c8_racecar_shiftlight =
          racecar_shiftlight_IN_No_Gear;
        racecar_shiftlight_B.D0_IN = 0.0;
        racecar_shiftlight_B.D1_IN = 0.0;
        racecar_shiftlight_B.D2_IN = 0.0;
        racecar_shiftlight_B.D3_IN = 0.0;
      } else {
        racecar_shiftlight_B.D0_IN = 0.0;
        racecar_shiftlight_B.D1_IN = 0.0;
        racecar_shiftlight_B.D2_IN = 1.0;
        racecar_shiftlight_B.D3_IN = 1.0;
      }
      break;
    }
  }

  /* End of Chart: '<S4>/Chart' */

  /* S-Function (c280xgpio_do): '<Root>/Digital Output2' */
  {
    if (racecar_shiftlight_B.D3_IN) {
      GpioDataRegs.GPBSET.bit.GPIO58 = 1U;
    } else {
      GpioDataRegs.GPBCLEAR.bit.GPIO58 = 1U;
    }
  }

  /* S-Function (c280xgpio_do): '<Root>/Digital Output3' */
  {
    if (racecar_shiftlight_B.D2_IN) {
      GpioDataRegs.GPBSET.bit.GPIO59 = 1U;
    } else {
      GpioDataRegs.GPBCLEAR.bit.GPIO59 = 1U;
    }
  }

  /* S-Function (c280xgpio_do): '<Root>/Digital Output4' */
  {
    if (racecar_shiftlight_B.D1_IN) {
      GpioDataRegs.GPDSET.bit.GPIO124 = 1U;
    } else {
      GpioDataRegs.GPDCLEAR.bit.GPIO124 = 1U;
    }
  }

  /* S-Function (c280xgpio_do): '<Root>/Digital Output5' */
  {
    if (racecar_shiftlight_B.D0_IN) {
      GpioDataRegs.GPDSET.bit.GPIO125 = 1U;
    } else {
      GpioDataRegs.GPDCLEAR.bit.GPIO125 = 1U;
    }
  }

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
    if (racecar_shiftlight_P.Constant1_Value_e) {
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

  /* initialize error status */
  rtmSetErrorStatus(racecar_shiftlight_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &racecar_shiftlight_B), 0,
                sizeof(B_racecar_shiftlight_T));

  {
    racecar_shiftlight_B.CANReceive_o2 = CAN_DATATYPE_GROUND;
    racecar_shiftlight_B.CANReceive3_o2 = CAN_DATATYPE_GROUND;
    racecar_shiftlight_B.CANReceive1_o2 = CAN_DATATYPE_GROUND;
  }

  /* states (dwork) */
  (void) memset((void *)&racecar_shiftlight_DW, 0,
                sizeof(DW_racecar_shiftlight_T));

  /* exported global states */
  (void) memset(&duty_cycle_table, 0,
                396U*sizeof(uint16_T));

  /* Start for DiscretePulseGenerator: '<S6>/Pulse Generator' */
  racecar_shiftlight_DW.clockTickCounter = 0L;

  /* Start for S-Function (c280xgpio_do): '<Root>/Digital Output2' */
  EALLOW;
  GpioCtrlRegs.GPBMUX2.all &= 0xFFCFFFFFU;
  GpioCtrlRegs.GPBDIR.all |= 0x4000000U;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<Root>/Digital Output3' */
  EALLOW;
  GpioCtrlRegs.GPBMUX2.all &= 0xFF3FFFFFU;
  GpioCtrlRegs.GPBDIR.all |= 0x8000000U;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<Root>/Digital Output4' */
  EALLOW;
  GpioCtrlRegs.GPDMUX2.all &= 0xFCFFFFFFU;
  GpioCtrlRegs.GPDDIR.all |= 0x10000000U;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<Root>/Digital Output5' */
  EALLOW;
  GpioCtrlRegs.GPDMUX2.all &= 0xF3FFFFFFU;
  GpioCtrlRegs.GPDDIR.all |= 0x20000000U;
  EDIS;

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

  /* SystemInitialize for S-Function (c280xcanrcv): '<Root>/CAN Receive' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem'
   */

  /* System initialize for function-call system: '<Root>/Function-Call Subsystem' */

  /* Start for S-Function (scanunpack): '<S1>/CAN Unpack1' */

  /*-----------S-Function Block: <S1>/CAN Unpack1 -----------------*/

  /* SystemInitialize for S-Function (scanunpack): '<S1>/CAN Unpack1' incorporates:
   *  Outport: '<S1>/engine_rpm'
   */
  racecar_shiftlight_B.CANUnpack1_o9 = racecar_shiftlight_P.engine_rpm_Y0;

  {
    uint32_t ui32Flags;
    ui32Flags = CAN_MSG_OBJ_NO_FLAGS;
    CAN_setupMessageObject(CANB_BASE, 1, 0x17C, CAN_MSG_FRAME_STD,
      CAN_MSG_OBJ_TYPE_RX, 0, ui32Flags, sizeof(unsigned char) * 8);
  }

  /* Initialize out port */
  {
    racecar_shiftlight_B.CANReceive_o2.Extended = 0;
    racecar_shiftlight_B.CANReceive_o2.Length = 8;
    racecar_shiftlight_B.CANReceive_o2.ID = 0x17C;
    racecar_shiftlight_B.CANReceive_o2.Timestamp = 0;
    racecar_shiftlight_B.CANReceive_o2.Error = 0;
    racecar_shiftlight_B.CANReceive_o2.Remote = 0;
    racecar_shiftlight_B.CANReceive_o2.Data[0] = (uint8_T)0.0;
    racecar_shiftlight_B.CANReceive_o2.Data[1] = (uint8_T)0.0;
    racecar_shiftlight_B.CANReceive_o2.Data[2] = (uint8_T)0.0;
    racecar_shiftlight_B.CANReceive_o2.Data[3] = (uint8_T)0.0;
    racecar_shiftlight_B.CANReceive_o2.Data[4] = (uint8_T)0.0;
    racecar_shiftlight_B.CANReceive_o2.Data[5] = (uint8_T)0.0;
    racecar_shiftlight_B.CANReceive_o2.Data[6] = (uint8_T)0.0;
    racecar_shiftlight_B.CANReceive_o2.Data[7] = (uint8_T)0.0;
  }

  /* End of SystemInitialize for S-Function (c280xcanrcv): '<Root>/CAN Receive' */

  /* SystemInitialize for Chart: '<S6>/Chart' */
  racecar_shiftlight_DW.is_active_c3_racecar_shiftlight = 0U;
  racecar_shiftlight_DW.is_c3_racecar_shiftlight =
    racecar_shif_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for S-Function (c280xcanrcv): '<Root>/CAN Receive3' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem3'
   */

  /* System initialize for function-call system: '<Root>/Function-Call Subsystem3' */

  /* Start for S-Function (scanunpack): '<S3>/CAN Unpack1' */

  /*-----------S-Function Block: <S3>/CAN Unpack1 -----------------*/

  /* SystemInitialize for S-Function (scanunpack): '<S3>/CAN Unpack1' incorporates:
   *  Outport: '<S3>/wheelspeed_fl'
   */
  racecar_shiftlight_B.ws_fl = racecar_shiftlight_P.wheelspeed_fl_Y0;

  /* SystemInitialize for S-Function (scanunpack): '<S3>/CAN Unpack1' incorporates:
   *  Outport: '<S3>/wheelspeed_fr'
   */
  racecar_shiftlight_B.ws_fr = racecar_shiftlight_P.wheelspeed_fr_Y0;

  {
    uint32_t ui32Flags;
    ui32Flags = CAN_MSG_OBJ_NO_FLAGS;
    CAN_setupMessageObject(CANB_BASE, 4, 0x1D0, CAN_MSG_FRAME_STD,
      CAN_MSG_OBJ_TYPE_RX, 0, ui32Flags, sizeof(unsigned char) * 8);
  }

  /* Initialize out port */
  {
    racecar_shiftlight_B.CANReceive3_o2.Extended = 0;
    racecar_shiftlight_B.CANReceive3_o2.Length = 8;
    racecar_shiftlight_B.CANReceive3_o2.ID = 0x1D0;
    racecar_shiftlight_B.CANReceive3_o2.Timestamp = 0;
    racecar_shiftlight_B.CANReceive3_o2.Error = 0;
    racecar_shiftlight_B.CANReceive3_o2.Remote = 0;
    racecar_shiftlight_B.CANReceive3_o2.Data[0] = (uint8_T)0.0;
    racecar_shiftlight_B.CANReceive3_o2.Data[1] = (uint8_T)0.0;
    racecar_shiftlight_B.CANReceive3_o2.Data[2] = (uint8_T)0.0;
    racecar_shiftlight_B.CANReceive3_o2.Data[3] = (uint8_T)0.0;
    racecar_shiftlight_B.CANReceive3_o2.Data[4] = (uint8_T)0.0;
    racecar_shiftlight_B.CANReceive3_o2.Data[5] = (uint8_T)0.0;
    racecar_shiftlight_B.CANReceive3_o2.Data[6] = (uint8_T)0.0;
    racecar_shiftlight_B.CANReceive3_o2.Data[7] = (uint8_T)0.0;
  }

  /* End of SystemInitialize for S-Function (c280xcanrcv): '<Root>/CAN Receive3' */

  /* SystemInitialize for S-Function (c280xcanrcv): '<Root>/CAN Receive1' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem1'
   */

  /* System initialize for function-call system: '<Root>/Function-Call Subsystem1' */

  /* Start for S-Function (scanunpack): '<S2>/CAN Unpack1' */

  /*-----------S-Function Block: <S2>/CAN Unpack1 -----------------*/

  /* SystemInitialize for Logic: '<S2>/NOT' incorporates:
   *  Outport: '<S2>/clutch_status'
   */
  racecar_shiftlight_B.NOT = racecar_shiftlight_P.clutch_status_Y0;

  {
    uint32_t ui32Flags;
    ui32Flags = CAN_MSG_OBJ_NO_FLAGS;
    CAN_setupMessageObject(CANB_BASE, 3, 0x13C, CAN_MSG_FRAME_STD,
      CAN_MSG_OBJ_TYPE_RX, 0, ui32Flags, sizeof(unsigned char) * 8);
  }

  /* Initialize out port */
  {
    racecar_shiftlight_B.CANReceive1_o2.Extended = 0;
    racecar_shiftlight_B.CANReceive1_o2.Length = 8;
    racecar_shiftlight_B.CANReceive1_o2.ID = 0x13C;
    racecar_shiftlight_B.CANReceive1_o2.Timestamp = 0;
    racecar_shiftlight_B.CANReceive1_o2.Error = 0;
    racecar_shiftlight_B.CANReceive1_o2.Remote = 0;
    racecar_shiftlight_B.CANReceive1_o2.Data[0] = (uint8_T)0.0;
    racecar_shiftlight_B.CANReceive1_o2.Data[1] = (uint8_T)0.0;
    racecar_shiftlight_B.CANReceive1_o2.Data[2] = (uint8_T)0.0;
    racecar_shiftlight_B.CANReceive1_o2.Data[3] = (uint8_T)0.0;
    racecar_shiftlight_B.CANReceive1_o2.Data[4] = (uint8_T)0.0;
    racecar_shiftlight_B.CANReceive1_o2.Data[5] = (uint8_T)0.0;
    racecar_shiftlight_B.CANReceive1_o2.Data[6] = (uint8_T)0.0;
    racecar_shiftlight_B.CANReceive1_o2.Data[7] = (uint8_T)0.0;
  }

  /* End of SystemInitialize for S-Function (c280xcanrcv): '<Root>/CAN Receive1' */

  /* SystemInitialize for Chart: '<S5>/clutch_debounce' */
  racecar_shiftlight_DW.temporalCounter_i1 = 0U;
  racecar_shiftlight_DW.is_active_c7_racecar_shiftlight = 0U;
  racecar_shiftlight_DW.is_c7_racecar_shiftlight =
    racecar_shif_IN_NO_ACTIVE_CHILD;
  racecar_shiftlight_DW.is_Wait = racecar_shif_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S5>/Chart' */
  racecar_shiftlight_DW.temporalCounter_i1_n = 0U;
  racecar_shiftlight_DW.is_active_c6_racecar_shiftlight = 0U;
  racecar_shiftlight_DW.is_c6_racecar_shiftlight =
    racecar_shif_IN_NO_ACTIVE_CHILD;
  racecar_shiftlight_DW.is_Gear_Out = racecar_shif_IN_NO_ACTIVE_CHILD;

  /* SystemInitialize for Chart: '<S4>/Chart' */
  racecar_shiftlight_DW.is_active_c8_racecar_shiftlight = 0U;
  racecar_shiftlight_DW.is_c8_racecar_shiftlight =
    racecar_shif_IN_NO_ACTIVE_CHILD;
  racecar_shiftlight_B.D0_IN = 0.0;
  racecar_shiftlight_B.D1_IN = 0.0;
  racecar_shiftlight_B.D2_IN = 0.0;
  racecar_shiftlight_B.D3_IN = 0.0;
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
