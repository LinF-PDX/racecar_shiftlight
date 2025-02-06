/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: racecar_shiftlight_data.c
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

#include "racecar_shiftlight.h"

/* Block parameters (default storage) */
P_racecar_shiftlight_T racecar_shiftlight_P = {
  /* Variable: final_drive_ratio
   * Referenced by: '<S8>/Multiply2'
   */
  4.765,

  /* Variable: tire_radius
   * Referenced by: '<S8>/Constant'
   */
  0.31265,

  /* Variable: all_off
   * Referenced by:
   *   '<Root>/Data Store Memory'
   *   '<S9>/Constant11'
   *   '<S9>/Constant8'
   */
  { 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },

  /* Variable: red_day_all
   * Referenced by: '<S9>/Constant4'
   */
  { 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U,
    40U, 40U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 40U, 40U, 40U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U,
    40U, 40U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 40U, 40U, 40U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U,
    40U, 40U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },

  /* Variable: stage1_day
   * Referenced by: '<S9>/Constant2'
   */
  { 20U, 20U, 20U, 40U, 40U, 20U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    40U, 40U, 20U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },

  /* Variable: stage2_day
   * Referenced by: '<S9>/Constant3'
   */
  { 20U, 20U, 20U, 40U, 40U, 20U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 20U,
    40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 20U, 40U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    40U, 40U, 20U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },

  /* Variable: stage3_day
   * Referenced by: '<S9>/Constant5'
   */
  { 20U, 20U, 20U, 40U, 40U, 20U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 20U,
    40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U,
    40U, 40U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 20U, 40U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    40U, 40U, 20U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },

  /* Variable: stage4_day
   * Referenced by: '<S9>/Constant6'
   */
  { 20U, 20U, 20U, 40U, 40U, 20U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 20U,
    40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U,
    40U, 40U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 20U, 40U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    40U, 40U, 20U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },

  /* Variable: stage5_day
   * Referenced by: '<S9>/Constant7'
   */
  { 20U, 20U, 20U, 40U, 40U, 20U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 20U,
    40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U,
    40U, 40U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 20U, 40U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    40U, 40U, 20U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },

  /* Variable: stage6_day
   * Referenced by: '<S9>/Constant9'
   */
  { 20U, 20U, 20U, 40U, 40U, 20U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 20U,
    40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U,
    40U, 40U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 40U, 40U, 40U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 20U, 40U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    40U, 40U, 20U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },

  /* Variable: stage7_day
   * Referenced by: '<S9>/Constant10'
   */
  { 20U, 20U, 20U, 40U, 40U, 20U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 20U,
    40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U,
    40U, 40U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U,
    40U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 40U, 40U, 40U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 40U, 40U, 40U, 40U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 40U, 40U, 20U, 40U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    40U, 40U, 20U, 40U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },

  /* Computed Parameter: engine_rpm_Y0
   * Referenced by: '<S1>/engine_rpm'
   */
  0.0,

  /* Computed Parameter: clutch_status_Y0
   * Referenced by: '<S2>/clutch_status'
   */
  0.0,

  /* Computed Parameter: vehicle_speed_Y0
   * Referenced by: '<S3>/vehicle_speed'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S9>/Switch'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S9>/Pulse Generator'
   */
  1.0,

  /* Computed Parameter: PulseGenerator_Period
   * Referenced by: '<S9>/Pulse Generator'
   */
  150.0,

  /* Computed Parameter: PulseGenerator_Duty
   * Referenced by: '<S9>/Pulse Generator'
   */
  75.0,

  /* Expression: 0
   * Referenced by: '<S9>/Pulse Generator'
   */
  0.0,

  /* Expression: 2*pi
   * Referenced by: '<S8>/Multiply1'
   */
  6.2831853071795862,

  /* Expression: 60
   * Referenced by: '<S8>/Constant1'
   */
  60.0,

  /* Expression: 1/3.6
   * Referenced by: '<S8>/Multiply'
   */
  0.27777777777777779,

  /* Expression: 1
   * Referenced by: '<Root>/Constant'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant1'
   */
  1.0
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
