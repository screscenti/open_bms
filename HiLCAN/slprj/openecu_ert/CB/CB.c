/*
 *****************************************************************************
 *
 *  File:                     CB.c
 *  Description:              Real-Time Workshop code generated for Simulink
 *                            model CB.
 *
 *  Model name:               CB
 *  Model date:
 *  Model version:            1.33
 *  Model author:
 *  Model description:
 *
 *  Model at code generation:  -
 *  Model comment:
 *  Last saved modification:   -
 *  History:
 *
 *
 *  Abstract:
 *
 *
 *  Notes:
 *
 *
 *  Copyright (C) 2013 Pi Innovo
 *
 *  This document (program) contains proprietary information
 *  which is the property of Pi Innovo.
 *  The contents of this document (program) must not be copied
 *  or disclosed to a third party without the prior agreement
 *  of an authorised officer of Pi Innovo.
 *
 *****************************************************************************
 */

/********* Includes *********/
#include "CB.h"
#include "CB_private.h"

/********* Macros *********/

/********* Static structure definitions *********/

/********* Global variables *********/

/********* Static Variables *********/

/********* External references *********/
/********* Functions *********/

/* Output and update for referenced model: 'CB' */
void CB(const FREAL rtu_cell_soc[40], const U8 *rtu_batt_mode, U8 rty_CB_cmd[40],
        U8 *rty_CB_status)
{
  FREAL minV;
  U8 rtb_LogicalOperator2;
  U32 tmp;
  S32 i;

  /* Outputs for Atomic SubSystem: '<Root>/Cell Balancing' */
  /* MinMax: '<S1>/MinMax1' */
  minV = rtu_cell_soc[0];
  for (i = 0; i < 39; i++) {
    if (!((minV <= rtu_cell_soc[i + 1]) || rtIsNaN(rtu_cell_soc[i + 1]))) {
      minV = rtu_cell_soc[i + 1];
    }
  }

  /* Logic: '<S1>/LogicalOperator2' incorporates:
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S1>/Constant6'
   *  MinMax: '<S1>/MinMax1'
   *  RelationalOperator: '<S1>/RelationalOperator2'
   *  RelationalOperator: '<S1>/RelationalOperator4'
   */
  rtb_LogicalOperator2 = ((*rtu_batt_mode == cblc_battChargingMode) && (minV >=
    cblc_socThreshBalance));

  /* Logic: '<S1>/LogicalOperator' incorporates:
   *  Constant: '<S1>/Constant2'
   *  MinMax: '<S1>/MinMax1'
   *  RelationalOperator: '<S1>/RelationalOperator1'
   *  Sum: '<S1>/Subtract1'
   */
  for (i = 0; i < 40; i++) {
    rty_CB_cmd[i] = ((rtu_cell_soc[i] - minV >= cblc_deltaSocThreshBalance) &&
                     rtb_LogicalOperator2);
  }

  /* End of Logic: '<S1>/LogicalOperator' */

  /* Sum: '<S1>/Sum of Elements' */
  tmp = rty_CB_cmd[0];
  for (i = 0; i < 39; i++) {
    tmp += rty_CB_cmd[i + 1];
  }

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S1>/Constant3'
   *  RelationalOperator: '<S1>/RelationalOperator3'
   *  Sum: '<S1>/Sum of Elements'
   */
  *rty_CB_status = ((U8)tmp >= 0.5);

  /* End of Outputs for SubSystem: '<Root>/Cell Balancing' */
}

/* Model initialize function */
void CB_initialize(const char_T **rt_errorStatus, RT_MODEL_CB *const CB_M)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(FREAL));

  /* initialize error status */
  rtmSetErrorStatusPointer(CB_M, rt_errorStatus);
}

/* end of file */
