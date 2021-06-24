/*
 *****************************************************************************
 *
 *  File:                     BTC.c
 *  Description:              Real-Time Workshop code generated for Simulink
 *                            model BTC.
 *
 *  Model name:               BTC
 *  Model date:
 *  Model version:            1.54
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
#include "BTC.h"
#include "BTC_private.h"

/********* Macros *********/

/********* Static structure definitions *********/

/********* Global variables *********/

/********* Static Variables *********/

/********* External references *********/
/********* Functions *********/

/* Initial conditions for referenced model: 'BTC' */
void BTC_Init(rtDW_BTC *localDW)
{
  /* InitializeConditions for Atomic SubSystem: '<Root>/BTC' */
  /* InitializeConditions for Delay: '<S3>/Delay' */
  localDW->Delay_DSTATE = 26.0;

  /* End of InitializeConditions for SubSystem: '<Root>/BTC' */
}

/* Output and update for referenced model: 'BTC' */
void BTC(const FREAL rtu_Cell_temperature[40], const FREAL rtu_Cell_SOC[40],
         const U8 *rtu_Charging_status, const FREAL *rtu_Ambient_temperature,
         const U8 *rtu_Discharging_status, const U8
         *rtu_Coolant_inlet_temp_fault, const U8 *rtu_Coolant_outlet_temp_fault,
         const U8 *rtu_Cell_temp_high_fault, const U8 *rtu_Cell_temp_low_fault,
         FREAL *rty_coolant_flow_percentage, FREAL
         *rty_battery_target_temperature, FREAL *rty_battery_actual_temperature,
         U8 *rty_battery_reqest_status, U8 *rty_battery_thermal_condition,
         rtDW_BTC *localDW)
{
  U8 rtb_DataTypeConversion1;
  U8 rtb_DataTypeConversion;
  U8 rtb_RelationalOperator2;
  FREAL rtb_Switch2_o;
  FREAL rtb_Switch2;
  S32 i;

  /* Outputs for Atomic SubSystem: '<Root>/BTC' */
  /* MinMax: '<S3>/MinMax1' */
  rtb_Switch2 = rtu_Cell_temperature[0];

  /* MinMax: '<S3>/MinMax2' */
  rtb_Switch2_o = rtu_Cell_SOC[0];
  for (i = 0; i < 39; i++) {
    /* MinMax: '<S3>/MinMax1' */
    if (!((rtb_Switch2 >= rtu_Cell_temperature[i + 1]) || rtIsNaN
          (rtu_Cell_temperature[i + 1]))) {
      rtb_Switch2 = rtu_Cell_temperature[i + 1];
    }

    /* MinMax: '<S3>/MinMax2' */
    if (!((rtb_Switch2_o <= rtu_Cell_SOC[i + 1]) || rtIsNaN(rtu_Cell_SOC[i + 1])))
    {
      rtb_Switch2_o = rtu_Cell_SOC[i + 1];
    }
  }

  /* RelationalOperator: '<S3>/Relational Operator3' incorporates:
   *  Constant: '<S3>/Constant7'
   *  MinMax: '<S3>/MinMax2'
   */
  rtb_DataTypeConversion1 = (rtb_Switch2_o >= btcc_full_soc);

  /* Logic: '<S3>/Logical Operator4' incorporates:
   *  Constant: '<S3>/Constant2'
   *  Constant: '<S3>/Constant9'
   *  Logic: '<S3>/Logical Operator2'
   *  MinMax: '<S3>/MinMax1'
   *  RelationalOperator: '<S3>/Relational Operator1'
   *  RelationalOperator: '<S3>/Relational Operator5'
   */
  rtb_DataTypeConversion = ((rtb_Switch2 >= btcc_max_temp_highth) ||
    (rtb_DataTypeConversion1 && (*rtu_Charging_status) &&
     (*rtu_Ambient_temperature <= btcc_ambient_temp_lowth)));

  /* MinMax: '<S3>/MinMax' */
  rtb_Switch2_o = rtu_Cell_temperature[0];
  for (i = 0; i < 39; i++) {
    if (!((rtb_Switch2_o <= rtu_Cell_temperature[i + 1]) || rtIsNaN
          (rtu_Cell_temperature[i + 1]))) {
      rtb_Switch2_o = rtu_Cell_temperature[i + 1];
    }
  }

  /* Logic: '<S3>/Logical Operator3' incorporates:
   *  Constant: '<S3>/Constant'
   *  Constant: '<S3>/Constant8'
   *  Logic: '<S3>/Logical Operator1'
   *  MinMax: '<S3>/MinMax'
   *  RelationalOperator: '<S3>/Relational Operator'
   *  RelationalOperator: '<S3>/Relational Operator4'
   */
  rtb_DataTypeConversion1 = ((rtb_Switch2_o <= btcc_min_temp_lowth) ||
    (rtb_DataTypeConversion1 && (*rtu_Charging_status) &&
     (*rtu_Ambient_temperature >= btcc_ambient_temp_highth)));

  /* RelationalOperator: '<S3>/Relational Operator2' incorporates:
   *  Constant: '<S3>/Constant4'
   *  MinMax: '<S3>/MinMax'
   *  MinMax: '<S3>/MinMax1'
   *  Sum: '<S3>/Add'
   */
  rtb_RelationalOperator2 = (rtb_Switch2 - rtb_Switch2_o >=
    btcc_cell_temp_diffth);

  /* Switch: '<S3>/Switch1' incorporates:
   *  Constant: '<S3>/Constant3'
   *  Switch: '<S3>/Switch'
   *  Switch: '<S3>/Switch2'
   */
  if (rtb_DataTypeConversion) {
    *rty_battery_target_temperature = btcc_max_temp_lowth;
  } else {
    if (rtb_DataTypeConversion1) {
      /* Switch: '<S3>/Switch' incorporates:
       *  Constant: '<S3>/Constant1'
       */
      rtb_Switch2 = btcc_min_temp_highth;
    } else if (rtb_RelationalOperator2) {
      /* Sum: '<S3>/Sum of Elements1' incorporates:
       *  Switch: '<S3>/Switch'
       *  Switch: '<S3>/Switch2'
       */
      rtb_Switch2 = rtu_Cell_temperature[0];
      for (i = 0; i < 39; i++) {
        rtb_Switch2 += rtu_Cell_temperature[i + 1];
      }

      /* End of Sum: '<S3>/Sum of Elements1' */

      /* Switch: '<S3>/Switch2' incorporates:
       *  Constant: '<S3>/Constant5'
       *  Constant: '<S3>/Constant6'
       *  Product: '<S3>/Divide'
       *  Product: '<S3>/Divide1'
       *  Switch: '<S3>/Switch'
       */
      rtb_Switch2 = rtb_Switch2 / btcc_pack_in_parallel / btcc_number_in_series;
    } else {
      /* Switch: '<S3>/Switch2' incorporates:
       *  Delay: '<S3>/Delay'
       *  Switch: '<S3>/Switch'
       */
      rtb_Switch2 = localDW->Delay_DSTATE;
    }

    *rty_battery_target_temperature = rtb_Switch2;
  }

  /* End of Switch: '<S3>/Switch1' */

  /* MinMax: '<S2>/MinMax' */
  rtb_Switch2_o = rtu_Cell_temperature[0];
  for (i = 0; i < 39; i++) {
    if (!((rtb_Switch2_o <= rtu_Cell_temperature[i + 1]) || rtIsNaN
          (rtu_Cell_temperature[i + 1]))) {
      rtb_Switch2_o = rtu_Cell_temperature[i + 1];
    }
  }

  /* Switch: '<S2>/Switch1' incorporates:
   *  Constant: '<S2>/Constant9'
   *  MinMax: '<S2>/MinMax'
   *  MinMax: '<S2>/MinMax1'
   *  RelationalOperator: '<S2>/Relational Operator4'
   */
  if (rtb_Switch2_o <= btcc_min_temp_lowth) {
    *rty_battery_actual_temperature = rtb_Switch2_o;
  } else {
    /* MinMax: '<S2>/MinMax1' */
    rtb_Switch2 = rtu_Cell_temperature[0];
    for (i = 0; i < 39; i++) {
      if (!((rtb_Switch2 >= rtu_Cell_temperature[i + 1]) || rtIsNaN
            (rtu_Cell_temperature[i + 1]))) {
        rtb_Switch2 = rtu_Cell_temperature[i + 1];
      }
    }

    *rty_battery_actual_temperature = rtb_Switch2;
  }

  /* End of Switch: '<S2>/Switch1' */

  /* Sum: '<S1>/Subtract' */
  rtb_Switch2 = *rty_battery_target_temperature -
    *rty_battery_actual_temperature;

  /* Delay: '<S3>/Delay1' */
  *rty_battery_reqest_status = localDW->Delay1_DSTATE[0];

  /* Logic: '<S1>/Logical Operator' incorporates:
   *  DataTypeConversion: '<S1>/Data Type Conversion'
   *  DataTypeConversion: '<S1>/Data Type Conversion1'
   */
  *rty_battery_thermal_condition = ((*rtu_Coolant_inlet_temp_fault) ||
    (*rtu_Coolant_outlet_temp_fault) || (*rtu_Cell_temp_high_fault != 0) ||
    (*rtu_Cell_temp_low_fault != 0));

  /* Switch: '<S1>/Switch1' incorporates:
   *  Constant: '<S1>/Constant1'
   *  Logic: '<S1>/Logical Operator1'
   *  Logic: '<S1>/Logical Operator2'
   *  Switch: '<S1>/Switch2'
   */
  if (*rty_battery_thermal_condition) {
    *rty_coolant_flow_percentage = 50.0;
  } else {
    if ((*rty_battery_reqest_status) && ((*rtu_Charging_status) ||
         (*rtu_Discharging_status))) {
      /* Sum: '<S4>/Sum' incorporates:
       *  DiscreteIntegrator: '<S4>/Discrete-Time Integrator'
       *  Gain: '<S4>/BTC_Kp'
       *  Switch: '<S1>/Switch2'
       */
      rtb_Switch2_o = btcc_Kp * rtb_Switch2 +
        localDW->DiscreteTimeIntegrator_DSTATE;

      /* Saturate: '<S4>/Saturation' incorporates:
       *  Switch: '<S1>/Switch2'
       */
      if (rtb_Switch2_o > 100.0) {
        rtb_Switch2_o = 100.0;
      } else {
        if (rtb_Switch2_o < -100.0) {
          rtb_Switch2_o = -100.0;
        }
      }

      /* Switch: '<S1>/Switch2' incorporates:
       *  Abs: '<S1>/Abs'
       *  Saturate: '<S4>/Saturation'
       */
      rtb_Switch2_o = fabs(rtb_Switch2_o);
    } else {
      /* Switch: '<S1>/Switch2' incorporates:
       *  Constant: '<S1>/Constant'
       */
      rtb_Switch2_o = 0.0;
    }

    *rty_coolant_flow_percentage = rtb_Switch2_o;
  }

  /* End of Switch: '<S1>/Switch1' */

  /* Update for Delay: '<S3>/Delay' */
  localDW->Delay_DSTATE = *rty_battery_target_temperature;

  /* Update for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S4>/Constant5'
   *  Gain: '<S4>/BTC_Ki'
   *  Product: '<S4>/mul1'
   */
  localDW->DiscreteTimeIntegrator_DSTATE += btcc_Ki * rtb_Switch2 * 0.1;

  /* Update for Delay: '<S3>/Delay1' incorporates:
   *  Logic: '<S3>/Logical Operator'
   */
  localDW->Delay1_DSTATE[0] = localDW->Delay1_DSTATE[1];
  localDW->Delay1_DSTATE[1] = (rtb_DataTypeConversion1 ||
    rtb_RelationalOperator2 || rtb_DataTypeConversion);

  /* End of Outputs for SubSystem: '<Root>/BTC' */
}

/* Model initialize function */
void BTC_initialize(const char_T **rt_errorStatus, RT_MODEL_BTC *const BTC_M)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(FREAL));

  /* initialize error status */
  rtmSetErrorStatusPointer(BTC_M, rt_errorStatus);
}

/* end of file */
