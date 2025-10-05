/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: racecar_shiftlight_data.c
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

/* Block parameters (default storage) */
P_racecar_shiftlight_T racecar_shiftlight_P = {
  /* Variable: final_drive_ratio
   * Referenced by: '<S5>/Multiply2'
   */
  4.765,

  /* Variable: tire_radius
   * Referenced by: '<S5>/Constant'
   */
  0.31265,

  /* Variable: all_off
   * Referenced by:
   *   '<Root>/Data Store Memory'
   *   '<S6>/Constant11'
   *   '<S6>/Constant8'
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
   * Referenced by: '<S6>/Constant4'
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
   * Referenced by: '<S6>/Constant2'
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
   * Referenced by: '<S6>/Constant3'
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
   * Referenced by: '<S6>/Constant5'
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
   * Referenced by: '<S6>/Constant6'
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
   * Referenced by: '<S6>/Constant7'
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
   * Referenced by: '<S6>/Constant9'
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
   * Referenced by: '<S6>/Constant10'
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

  /* Mask Parameter: checksecond_lowlimit
   * Referenced by: '<S12>/Lower Limit'
   */
  1.94,

  /* Mask Parameter: checkfirst_lowlimit
   * Referenced by: '<S10>/Lower Limit'
   */
  3.1,

  /* Mask Parameter: checkthird_lowlimit
   * Referenced by: '<S14>/Lower Limit'
   */
  1.4,

  /* Mask Parameter: checkforth_lowlimit
   * Referenced by: '<S11>/Lower Limit'
   */
  1.05,

  /* Mask Parameter: checkfifth_lowlimit
   * Referenced by: '<S9>/Lower Limit'
   */
  0.82,

  /* Mask Parameter: checksixth_lowlimit
   * Referenced by: '<S13>/Lower Limit'
   */
  0.63,

  /* Mask Parameter: checksecond_uplimit
   * Referenced by: '<S12>/Upper Limit'
   */
  2.19,

  /* Mask Parameter: checkfirst_uplimit
   * Referenced by: '<S10>/Upper Limit'
   */
  3.5,

  /* Mask Parameter: checkthird_uplimit
   * Referenced by: '<S14>/Upper Limit'
   */
  1.55,

  /* Mask Parameter: checkforth_uplimit
   * Referenced by: '<S11>/Upper Limit'
   */
  1.15,

  /* Mask Parameter: checkfifth_uplimit
   * Referenced by: '<S9>/Upper Limit'
   */
  0.88,

  /* Mask Parameter: checksixth_uplimit
   * Referenced by: '<S13>/Upper Limit'
   */
  0.69,

  /* Computed Parameter: engine_rpm_Y0
   * Referenced by: '<S1>/engine_rpm'
   */
  0.0,

  /* Computed Parameter: wheelspeed_fl_Y0
   * Referenced by: '<S3>/wheelspeed_fl'
   */
  0.0,

  /* Computed Parameter: wheelspeed_fr_Y0
   * Referenced by: '<S3>/wheelspeed_fr'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S6>/Switch'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S6>/Pulse Generator'
   */
  1.0,

  /* Computed Parameter: PulseGenerator_Period
   * Referenced by: '<S6>/Pulse Generator'
   */
  150.0,

  /* Computed Parameter: PulseGenerator_Duty
   * Referenced by: '<S6>/Pulse Generator'
   */
  75.0,

  /* Expression: 0
   * Referenced by: '<S6>/Pulse Generator'
   */
  0.0,

  /* Expression: 2*pi
   * Referenced by: '<S5>/Multiply1'
   */
  6.2831853071795862,

  /* Expression: 60
   * Referenced by: '<S5>/Constant1'
   */
  60.0,

  /* Expression: 0.5
   * Referenced by: '<Root>/Gain1'
   */
  0.5,

  /* Expression: 1/3.6
   * Referenced by: '<S5>/Multiply'
   */
  0.27777777777777779,

  /* Expression: 1
   * Referenced by: '<Root>/Constant'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant1'
   */
  1.0,

  /* Computed Parameter: clutch_status_Y0
   * Referenced by: '<S2>/clutch_status'
   */
  false
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
