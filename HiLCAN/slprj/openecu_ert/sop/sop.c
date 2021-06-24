/*
 *****************************************************************************
 *
 *  File:                     sop.c
 *  Description:              Real-Time Workshop code generated for Simulink
 *                            model sop.
 *
 *  Model name:               sop
 *  Model date:
 *  Model version:            1.49
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
#include "sop.h"
#include "sop_private.h"

/********* Macros *********/

/********* Static structure definitions *********/

/********* Global variables *********/

/********* Static Variables *********/

/********* External references *********/
/********* Functions *********/

/* Output and update for referenced model: 'sop' */
void sop(const FREAL rtu_cell_temp[40], const FREAL rtu_cell_SOC[40], const U8
         *rtu_charging_status, const U8 *rtu_discharging_status, const U8
         *rtu_cell_temp_high_Fault, const U8 *rtu_pack_current_fault, const U8
         *rtu_pack_voltage_fault, const U8 *rtu_low_fault, const FREAL
         rtu_internal_resis_scaling_fact[40], FREAL *rty_discharge_power_limit,
         FREAL *rty_discharge_current_limit, FREAL *rty_charge_power_limit,
         FREAL *rty_charge_current_limit)
{
  S32 iU;
  U8 rtb_LogicalOperator;
  FREAL rtb_SOCversusOCVtable[40];
  FREAL rtb_Divide10[40];
  FREAL rtb_Product;
  FREAL rtu_discharging_status_0;

  /* Outputs for Atomic SubSystem: '<Root>/SOP' */
  for (iU = 0; iU < 40; iU++) {
    /* Lookup_n-D: '<S1>/dischg_internal_resistance_table' */
    rtu_discharging_status_0 = look2_binlx(rtu_cell_temp[iU], rtu_cell_SOC[iU],
      rtCP_dischg_internal_resistance_ta_k, rtCP_dischg_internal_resistance_ta_g,
      rtCP_dischg_internal_resistance_tabl, rtCP_dischg_internal_resistance_ta_o,
      3U);

    /* Product: '<S1>/Divide10' */
    rtb_Product = rtu_discharging_status_0 / rtu_internal_resis_scaling_fact[iU];

    /* Lookup_n-D: '<S1>/SOC versus OCV table' */
    rtu_discharging_status_0 = look1_binlx(rtu_cell_SOC[iU],
      rtCP_SOCversusOCVtable_bp01Data, rtCP_SOCversusOCVtable_tableData, 100U);

    /* Product: '<S1>/Divide4' incorporates:
     *  Constant: '<S1>/Constant4'
     *  Sum: '<S1>/Sum'
     */
    rtb_Product = 1.0 / rtb_Product * (rtu_discharging_status_0 -
      bmsc_CellMinVolt);

    /* Lookup_n-D: '<S1>/dischg_internal_resistance_table' */
    rtb_SOCversusOCVtable[iU] = rtu_discharging_status_0;

    /* Product: '<S1>/Divide10' */
    rtb_Divide10[iU] = rtb_Product;
  }

  /* MinMax: '<S1>/MinMax' */
  rtb_Product = rtb_Divide10[0];
  for (iU = 0; iU < 39; iU++) {
    if (!((rtb_Product <= rtb_Divide10[iU + 1]) || rtIsNaN(rtb_Divide10[iU + 1])))
    {
      rtb_Product = rtb_Divide10[iU + 1];
    }
  }

  /* Logic: '<S1>/Logical Operator' incorporates:
   *  DataTypeConversion: '<S1>/Data Type Conversion'
   *  DataTypeConversion: '<S1>/Data Type Conversion1'
   *  DataTypeConversion: '<S1>/Data Type Conversion2'
   *  DataTypeConversion: '<S1>/Data Type Conversion3'
   */
  rtb_LogicalOperator = ((*rtu_cell_temp_high_Fault != 0) ||
    (*rtu_pack_current_fault != 0) || (*rtu_pack_voltage_fault != 0) ||
    (*rtu_low_fault != 0));

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S1>/Constant12'
   *  Constant: '<S1>/Constant13'
   *  Logic: '<S1>/Logical Operator1'
   */
  if ((*rtu_discharging_status) && rtb_LogicalOperator) {
    rtu_discharging_status_0 = sopc_DischgFaultDerate;
  } else {
    rtu_discharging_status_0 = 1.0;
  }

  /* End of Switch: '<S1>/Switch' */

  /* Product: '<S1>/Product1' incorporates:
   *  Constant: '<S1>/Constant5'
   *  Constant: '<S1>/Constant6'
   *  Constant: '<S1>/Constant7'
   *  Gain: '<S1>/Gain'
   *  MinMax: '<S1>/MinMax'
   *  Product: '<S1>/Divide5'
   *  Product: '<S1>/Divide6'
   */
  *rty_discharge_power_limit = rtb_Product * bmsc_CellMinVolt *
    bmsc_NumberInSeries * bmsc_NumberInPara * sopc_DischargeDerate *
    rtu_discharging_status_0;

  /* Product: '<S1>/Divide1' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  Product: '<S1>/Divide'
   */
  *rty_discharge_current_limit = *rty_discharge_power_limit /
    (bmsc_NumberInSeries * bmsc_NumberInPara) / bmsc_CellMinVolt;
  for (iU = 0; iU < 40; iU++) {
    /* Lookup_n-D: '<S1>/chg_internal_resistance_table' */
    rtb_Product = look2_binlx(rtu_cell_temp[iU], rtu_cell_SOC[iU],
      rtCP_chg_internal_resistance_table_b, rtCP_chg_internal_resistance_table_e,
      rtCP_chg_internal_resistance_table_t, rtCP_chg_internal_resistance_table_m,
      3U);

    /* Product: '<S1>/Divide7' incorporates:
     *  Constant: '<S1>/Constant8'
     *  Product: '<S1>/Divide11'
     *  Sum: '<S1>/Sum1'
     */
    rtb_Product = (rtb_SOCversusOCVtable[iU] - bmsc_CellMaxVolt) / (rtb_Product /
      rtu_internal_resis_scaling_fact[iU]);

    /* Lookup_n-D: '<S1>/chg_internal_resistance_table' */
    rtb_Divide10[iU] = rtb_Product;
  }

  /* MinMax: '<S1>/MinMax1' */
  rtb_Product = rtb_Divide10[0];
  for (iU = 0; iU < 39; iU++) {
    if (!((rtb_Product >= rtb_Divide10[iU + 1]) || rtIsNaN(rtb_Divide10[iU + 1])))
    {
      rtb_Product = rtb_Divide10[iU + 1];
    }
  }

  /* Switch: '<S1>/Switch1' incorporates:
   *  Constant: '<S1>/Constant14'
   *  Constant: '<S1>/Constant15'
   *  Logic: '<S1>/Logical Operator2'
   */
  if ((*rtu_charging_status) && rtb_LogicalOperator) {
    rtu_discharging_status_0 = sopc_ChgFaultDerate;
  } else {
    rtu_discharging_status_0 = 1.0;
  }

  /* End of Switch: '<S1>/Switch1' */

  /* Product: '<S1>/Product' incorporates:
   *  Constant: '<S1>/Constant10'
   *  Constant: '<S1>/Constant11'
   *  Constant: '<S1>/Constant9'
   *  Gain: '<S1>/Gain1'
   *  MinMax: '<S1>/MinMax1'
   *  Product: '<S1>/Divide8'
   *  Product: '<S1>/Divide9'
   */
  rtb_Product = rtb_Product * bmsc_CellMaxVolt * bmsc_NumberInSeries *
    bmsc_NumberInPara * sopc_ChargeDerate * rtu_discharging_status_0;

  /* Gain: '<S1>/Gain2' incorporates:
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S1>/Constant3'
   *  Product: '<S1>/Divide2'
   *  Product: '<S1>/Divide3'
   */
  *rty_charge_current_limit = -(rtb_Product / (bmsc_NumberInSeries *
    bmsc_NumberInPara) / bmsc_CellMaxVolt);

  /* Gain: '<S1>/Gain3' */
  *rty_charge_power_limit = -rtb_Product;

  /* End of Outputs for SubSystem: '<Root>/SOP' */
}

/* Model initialize function */
void sop_initialize(const char_T **rt_errorStatus, RT_MODEL_sop *const sop_M)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(FREAL));

  /* initialize error status */
  rtmSetErrorStatusPointer(sop_M, rt_errorStatus);
}

/* end of file */
