/*
 *****************************************************************************
 *
 *  File:                     CC.c
 *  Description:              Real-Time Workshop code generated for Simulink
 *                            model CC.
 *
 *  Model name:               CC
 *  Model date:
 *  Model version:            1.108
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
#include "CC.h"
#include "CC_private.h"

/********* Macros *********/

/********* Static structure definitions *********/

/********* Global variables *********/

/********* Static Variables *********/

/********* External references *********/
/********* Functions *********/

/* Initial conditions for referenced model: 'CC' */
void CC_Init(rtDW_CC *localDW)
{
  /* InitializeConditions for Atomic SubSystem: '<Root>/CC' */
  /* InitializeConditions for Delay: '<S1>/Resettable Delay' */
  localDW->icLoad = 1U;

  /* End of InitializeConditions for SubSystem: '<Root>/CC' */
}

/* Output and update for referenced model: 'CC' */
void CC(const U8 *rtu_bsc_main_cc_cmd, const U8 *rtu_bsc_chg_cc_cmd, const FREAL
        *rtu_vitm_pack_voltage, const FREAL *rtu_vitm_veh_voltage, const FREAL
        *rtu_pre_chg_fault_reset, U8 *rty_cc_neg_cmd, U8 *rty_cc_main_cmd, U8
        *rty_cc_chg_cmd, U8 *rty_cc_pre_cmd, U8 *rty_cc_precharge_fault, rtDW_CC
        *localDW, rtZCE_CC *localZCE)
{
  U8 rtb_RelationalOperator5;
  S32 rtb_Switch1;
  U8 rtb_LogicalOperator2;

  /* Outputs for Atomic SubSystem: '<Root>/CC' */
  /* RelationalOperator: '<S1>/Relational Operator5' incorporates:
   *  Constant: '<S1>/Constant'
   *  Sum: '<S1>/Subtract'
   */
  rtb_RelationalOperator5 = (*rtu_vitm_veh_voltage >= *rtu_vitm_pack_voltage -
    2.0);

  /* Delay: '<S1>/Resettable Delay' incorporates:
   *  Constant: '<S1>/Constant10'
   */
  if (rt_ZCFcn(RISING_ZERO_CROSSING,&localZCE->ResettableDelay_Reset_ZCE,
               (*rtu_pre_chg_fault_reset)) != NO_ZCEVENT) {
    localDW->icLoad = 1U;
  }

  if (localDW->icLoad != 0) {
    localDW->ResettableDelay_DSTATE = 0.0;
  }

  /* Switch: '<S1>/Switch1' incorporates:
   *  Constant: '<S1>/Constant6'
   *  Delay: '<S1>/Delay2'
   *  Logic: '<S1>/Logical Operator9'
   */
  if (localDW->Delay2_DSTATE) {
    rtb_Switch1 = !rtb_RelationalOperator5;
  } else {
    rtb_Switch1 = 0;
  }

  /* End of Switch: '<S1>/Switch1' */

  /* Sum: '<S1>/Add' incorporates:
   *  Delay: '<S1>/Resettable Delay'
   */
  rtb_Switch1 = (U16)((U32)rtb_Switch1 + (U16)localDW->ResettableDelay_DSTATE);

  /* DataTypeConversion: '<S1>/Data Type Conversion2' incorporates:
   *  Delay: '<S1>/Delay1'
   */
  *rty_cc_precharge_fault = localDW->Delay1_DSTATE;

  /* Delay: '<S1>/Delay' */
  *rty_cc_pre_cmd = localDW->Delay_DSTATE;

  /* Logic: '<S1>/Logical O perator7' incorporates:
   *  Delay: '<S1>/Delay1'
   *  Logic: '<S1>/Logical Operator'
   *  Logic: '<S1>/Logical Operator8'
   */
  *rty_cc_neg_cmd = (((*rtu_bsc_main_cc_cmd) || (*rtu_bsc_chg_cc_cmd)) &&
                     (!localDW->Delay1_DSTATE));

  /* Logic: '<S1>/Logical Operator1' */
  *rty_cc_main_cmd = ((*rtu_bsc_main_cc_cmd) && rtb_RelationalOperator5);

  /* Logic: '<S1>/Logical Operator2' incorporates:
   *  Logic: '<S1>/Logical Operator3'
   *  Logic: '<S1>/Logical Operator6'
   */
  rtb_LogicalOperator2 = (((*rtu_bsc_main_cc_cmd) || (*rtu_bsc_chg_cc_cmd)) && (
    !rtb_RelationalOperator5));

  /* Logic: '<S1>/Logical Operator5' */
  *rty_cc_chg_cmd = ((*rtu_bsc_chg_cc_cmd) && rtb_RelationalOperator5);

  /* Update for Delay: '<S1>/Delay2' */
  localDW->Delay2_DSTATE = rtb_LogicalOperator2;

  /* Update for Delay: '<S1>/Resettable Delay' */
  localDW->icLoad = 0U;
  localDW->ResettableDelay_DSTATE = rtb_Switch1;

  /* Update for Delay: '<S1>/Delay1' incorporates:
   *  Constant: '<S1>/Constant8'
   *  RelationalOperator: '<S1>/Relational Operator4'
   */
  localDW->Delay1_DSTATE = (rtb_Switch1 >= 10);

  /* Update for Delay: '<S1>/Delay' */
  localDW->Delay_DSTATE = rtb_LogicalOperator2;

  /* End of Outputs for SubSystem: '<Root>/CC' */
}

/* Model initialize function */
void CC_initialize(const char_T **rt_errorStatus, RT_MODEL_CC *const CC_M,
                   rtZCE_CC *localZCE)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(CC_M, rt_errorStatus);
  localZCE->ResettableDelay_Reset_ZCE = UNINITIALIZED_ZCSIG;
}

/* end of file */
