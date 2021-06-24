/*
 *****************************************************************************
 *
 *  File:                     VITM.c
 *  Description:              Real-Time Workshop code generated for Simulink
 *                            model VITM.
 *
 *  Model name:               VITM
 *  Model date:
 *  Model version:            1.124
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
#include "VITM.h"
#include "VITM_private.h"

/********* Macros *********/

/********* Static structure definitions *********/

/********* Global variables *********/

/********* Static Variables *********/

/********* External references *********/
/********* Functions *********/

/* Output and update for referenced model: 'VITM' */
void VITM(const FREAL rtu_CellVoltages[40], const FREAL *rtu_PackVoltage, const
          FREAL *rtu_VehSideVoltage, const FREAL *rtu_PackCurrent, const FREAL
          *rtu_CoolantInletT, const FREAL *rtu_CoolantOutletT, const FREAL
          rtu_CellsTemperature[40], const FREAL *rtu_HVILReturn, FREAL
          *rty_vitm_CellsMaxTemperature, FREAL *rty_vitm_CellsMinTemperature,
          FREAL *rty_vitm_CellsAvgTemperature, U8
          *rty_vitm_CellsTemperatureLowFau, U8 *rty_vitm_CellsTemperatureHighFa,
          U8 *rty_vitm_CellsVoltageLowFault, U8 *rty_vitm_CellsVoltageHighFault,
          U8 *rty_vitm_PackVoltageFault, FREAL *rty_vitm_CellsMinVoltage, FREAL *
          rty_vitm_CellsMaxVoltage, FREAL *rty_vitm_CellsAvgVoltage, FREAL
          *rty_vitm_PackVoltageFiltered, FREAL *rty_vitm_PackCurrentFiltered, U8
          *rty_vitm_PackCurrentFault, FREAL *rty_vitm_CoolantDeltaTemp, U8
          *rty_vitm_CoolantInletTempFault, U8 *rty_vitm_CoolantOutlletTempFaul,
          FREAL *rty_vitm_CoolantInletTFiltered, FREAL
          *rty_vitm_CoolantOutletTFiltered, U8 *rty_vitm_HVILFault, FREAL
          rty_vitm_CellsTemperatureFilter[40], FREAL
          rty_vitm_CellsVoltageFiltered[40], FREAL
          *rty_vitm_VehSideVoltageFiltered, rtDW_VITM *localDW, rtZCE_VITM
          *localZCE)
{
  FREAL rtb_ResettableDelay3;
  FREAL rtb_Delay;
  FREAL rtb_Add;
  FREAL rtb_Add1;
  FREAL rtb_Add_j;
  FREAL rtb_Add1_d;
  FREAL rtb_Add3_p;
  FREAL rtb_Add3_f;
  FREAL rtb_Add3_l;
  S32 i;
  FREAL *rtb_Delay1_0;

  /* Outputs for Atomic SubSystem: '<Root>/VITM' */
  /* Sum: '<S10>/Add1' incorporates:
   *  Delay: '<S10>/Delay1'
   *  Gain: '<S10>/Gain2'
   */
  for (i = 0; i < 40; i++) {
    rty_vitm_CellsTemperatureFilter[i] = vitc_CellTempFilterC *
      rtu_CellsTemperature[i] + localDW->Delay1_DSTATE[i];
  }

  /* End of Sum: '<S10>/Add1' */

  /* MinMax: '<S5>/MinMax' */
  rtb_Delay = rty_vitm_CellsTemperatureFilter[0];
  for (i = 0; i < 39; i++) {
    rtb_ResettableDelay3 = rty_vitm_CellsTemperatureFilter[i + 1];
    if (!((rtb_Delay <= rtb_ResettableDelay3) || rtIsNaN(rtb_ResettableDelay3)))
    {
      rtb_Delay = rtb_ResettableDelay3;
    }
  }

  /* Delay: '<S5>/Resettable Delay' incorporates:
   *  Constant: '<S5>/Constant4'
   */
  if (vitc_CellTempLowFaultReset && (localZCE->ResettableDelay_Reset_ZCE !=
       POS_ZCSIG)) {
    localDW->ResettableDelay_DSTATE = 0.0;
  }

  localZCE->ResettableDelay_Reset_ZCE = vitc_CellTempLowFaultReset;

  /* Sum: '<S5>/Add' incorporates:
   *  Constant: '<S5>/Constant'
   *  Delay: '<S5>/Resettable Delay'
   *  MinMax: '<S5>/MinMax'
   *  RelationalOperator: '<S5>/Relational Operator'
   */
  rtb_Add = (FREAL)(rtb_Delay <= vitc_CellTempMin) +
    localDW->ResettableDelay_DSTATE;

  /* MinMax: '<S5>/MinMax1' */
  rtb_Delay = rty_vitm_CellsTemperatureFilter[0];
  for (i = 0; i < 39; i++) {
    rtb_ResettableDelay3 = rty_vitm_CellsTemperatureFilter[i + 1];
    if (!((rtb_Delay >= rtb_ResettableDelay3) || rtIsNaN(rtb_ResettableDelay3)))
    {
      rtb_Delay = rtb_ResettableDelay3;
    }
  }

  /* Switch: '<S5>/Switch2' incorporates:
   *  Constant: '<S5>/Constant1'
   *  MinMax: '<S5>/MinMax1'
   *  RelationalOperator: '<S5>/Relational Operator1'
   */
  rtb_Delay = (rtb_Delay >= vitc_CellTempMax);

  /* Delay: '<S5>/Resettable Delay1' incorporates:
   *  Constant: '<S5>/Constant10'
   */
  if (vitc_CellTempHighFaultReset && (localZCE->ResettableDelay1_Reset_ZCE !=
       POS_ZCSIG)) {
    localDW->ResettableDelay1_DSTATE = 0.0;
  }

  localZCE->ResettableDelay1_Reset_ZCE = vitc_CellTempHighFaultReset;

  /* Sum: '<S5>/Add1' incorporates:
   *  Delay: '<S5>/Resettable Delay1'
   */
  rtb_Add1 = rtb_Delay + localDW->ResettableDelay1_DSTATE;

  /* Sum: '<S5>/Sum of Elements' */
  rtb_Delay = rty_vitm_CellsTemperatureFilter[0];
  for (i = 0; i < 39; i++) {
    rtb_Delay += rty_vitm_CellsTemperatureFilter[i + 1];
  }

  /* End of Sum: '<S5>/Sum of Elements' */

  /* Product: '<S5>/Divide1' incorporates:
   *  Constant: '<S5>/Constant14'
   *  Product: '<S5>/Divide'
   */
  *rty_vitm_CellsAvgTemperature = rtb_Delay / 40.0;

  /* MinMax: '<S5>/MinMax2' */
  rtb_Delay = rty_vitm_CellsTemperatureFilter[0];
  for (i = 0; i < 39; i++) {
    rtb_ResettableDelay3 = rty_vitm_CellsTemperatureFilter[i + 1];
    if (!((rtb_Delay <= rtb_ResettableDelay3) || rtIsNaN(rtb_ResettableDelay3)))
    {
      rtb_Delay = rtb_ResettableDelay3;
    }
  }

  *rty_vitm_CellsMinTemperature = rtb_Delay;

  /* End of MinMax: '<S5>/MinMax2' */

  /* MinMax: '<S5>/MinMax3' */
  rtb_Delay = rty_vitm_CellsTemperatureFilter[0];
  for (i = 0; i < 39; i++) {
    rtb_ResettableDelay3 = rty_vitm_CellsTemperatureFilter[i + 1];
    if (!((rtb_Delay >= rtb_ResettableDelay3) || rtIsNaN(rtb_ResettableDelay3)))
    {
      rtb_Delay = rtb_ResettableDelay3;
    }
  }

  *rty_vitm_CellsMaxTemperature = rtb_Delay;

  /* End of MinMax: '<S5>/MinMax3' */

  /* Switch: '<S5>/Switch1' incorporates:
   *  Constant: '<S5>/Constant5'
   *  RelationalOperator: '<S5>/Relational Operator2'
   */
  *rty_vitm_CellsTemperatureLowFau = (U8)(rtb_Add >= vitc_CellTempFaultTimer /
    0.1);

  /* Switch: '<S5>/Switch3' incorporates:
   *  Constant: '<S5>/Constant11'
   *  RelationalOperator: '<S5>/Relational Operator3'
   */
  *rty_vitm_CellsTemperatureHighFa = (U8)(rtb_Add1 >= vitc_CellTempFaultTimer /
    0.1);

  /* Sum: '<S2>/Add' incorporates:
   *  Delay: '<S2>/Delay'
   *  Gain: '<S2>/Gain'
   */
  for (i = 0; i < 40; i++) {
    rty_vitm_CellsVoltageFiltered[i] = vitc_CellVolFilterC * rtu_CellVoltages[i]
      + localDW->Delay_DSTATE[i];
  }

  /* End of Sum: '<S2>/Add' */

  /* Sum: '<S3>/Add' incorporates:
   *  Delay: '<S3>/Delay'
   *  Gain: '<S3>/Gain'
   */
  *rty_vitm_PackVoltageFiltered = vitc_PackVolFilterC * *rtu_PackVoltage +
    localDW->Delay_DSTATE_a;

  /* MinMax: '<S6>/MinMax' */
  rtb_Delay = rty_vitm_CellsVoltageFiltered[0];
  for (i = 0; i < 39; i++) {
    rtb_ResettableDelay3 = rty_vitm_CellsVoltageFiltered[i + 1];
    if (!((rtb_Delay <= rtb_ResettableDelay3) || rtIsNaN(rtb_ResettableDelay3)))
    {
      rtb_Delay = rtb_ResettableDelay3;
    }
  }

  /* Delay: '<S6>/Resettable Delay' incorporates:
   *  Constant: '<S6>/Constant4'
   */
  if (vitc_CellVoltageLowFaultReset && (localZCE->ResettableDelay_Reset_ZCE_a !=
       POS_ZCSIG)) {
    localDW->ResettableDelay_DSTATE_a = 0.0;
  }

  localZCE->ResettableDelay_Reset_ZCE_a = vitc_CellVoltageLowFaultReset;

  /* Sum: '<S6>/Add' incorporates:
   *  Constant: '<S6>/Constant'
   *  Delay: '<S6>/Resettable Delay'
   *  MinMax: '<S6>/MinMax'
   *  RelationalOperator: '<S6>/Relational Operator'
   */
  rtb_Add_j = (FREAL)(rtb_Delay <= vitc_CellVoltageMin) +
    localDW->ResettableDelay_DSTATE_a;

  /* MinMax: '<S6>/MinMax1' */
  rtb_Delay = rty_vitm_CellsVoltageFiltered[0];
  for (i = 0; i < 39; i++) {
    rtb_ResettableDelay3 = rty_vitm_CellsVoltageFiltered[i + 1];
    if (!((rtb_Delay >= rtb_ResettableDelay3) || rtIsNaN(rtb_ResettableDelay3)))
    {
      rtb_Delay = rtb_ResettableDelay3;
    }
  }

  /* Switch: '<S6>/Switch2' incorporates:
   *  Constant: '<S6>/Constant1'
   *  MinMax: '<S6>/MinMax1'
   *  RelationalOperator: '<S6>/Relational Operator1'
   */
  rtb_Delay = (rtb_Delay >= vitc_CellVoltageMax);

  /* Delay: '<S6>/Resettable Delay1' incorporates:
   *  Constant: '<S6>/Constant10'
   */
  if (vitc_CellVoltageHighFaultReset && (localZCE->ResettableDelay1_Reset_ZCE_n
       != POS_ZCSIG)) {
    localDW->ResettableDelay1_DSTATE_m = 0.0;
  }

  localZCE->ResettableDelay1_Reset_ZCE_n = vitc_CellVoltageHighFaultReset;

  /* Sum: '<S6>/Add1' incorporates:
   *  Delay: '<S6>/Resettable Delay1'
   */
  rtb_Add1_d = rtb_Delay + localDW->ResettableDelay1_DSTATE_m;

  /* Sum: '<S6>/Sum of Elements' */
  rtb_Delay = rty_vitm_CellsVoltageFiltered[0];
  for (i = 0; i < 39; i++) {
    rtb_Delay += rty_vitm_CellsVoltageFiltered[i + 1];
  }

  /* End of Sum: '<S6>/Sum of Elements' */

  /* Product: '<S6>/Divide1' incorporates:
   *  Constant: '<S6>/Constant14'
   *  Product: '<S6>/Divide'
   */
  *rty_vitm_CellsAvgVoltage = rtb_Delay / 40.0;

  /* MinMax: '<S6>/MinMax2' */
  rtb_Delay = rty_vitm_CellsVoltageFiltered[0];
  for (i = 0; i < 39; i++) {
    rtb_ResettableDelay3 = rty_vitm_CellsVoltageFiltered[i + 1];
    if (!((rtb_Delay <= rtb_ResettableDelay3) || rtIsNaN(rtb_ResettableDelay3)))
    {
      rtb_Delay = rtb_ResettableDelay3;
    }
  }

  *rty_vitm_CellsMinVoltage = rtb_Delay;

  /* End of MinMax: '<S6>/MinMax2' */

  /* MinMax: '<S6>/MinMax3' */
  rtb_Delay = rty_vitm_CellsVoltageFiltered[0];
  for (i = 0; i < 39; i++) {
    rtb_ResettableDelay3 = rty_vitm_CellsVoltageFiltered[i + 1];
    if (!((rtb_Delay >= rtb_ResettableDelay3) || rtIsNaN(rtb_ResettableDelay3)))
    {
      rtb_Delay = rtb_ResettableDelay3;
    }
  }

  *rty_vitm_CellsMaxVoltage = rtb_Delay;

  /* End of MinMax: '<S6>/MinMax3' */

  /* Switch: '<S6>/Switch1' incorporates:
   *  Constant: '<S6>/Constant5'
   *  RelationalOperator: '<S6>/Relational Operator2'
   */
  *rty_vitm_CellsVoltageLowFault = (U8)(rtb_Add_j >= vitc_CellVoltageFaultTimer /
    0.1);

  /* Switch: '<S6>/Switch3' incorporates:
   *  Constant: '<S6>/Constant11'
   *  RelationalOperator: '<S6>/Relational Operator3'
   */
  *rty_vitm_CellsVoltageHighFault = (U8)(rtb_Add1_d >=
    vitc_CellVoltageFaultTimer / 0.1);

  /* Delay: '<S15>/Delay1' */
  rtb_Delay1_0 = &localDW->Delay1_DSTATE_i[0];

  /* Sum: '<S15>/Sum of Elements' */
  rtb_ResettableDelay3 = rtb_Delay1_0[0];
  for (i = 0; i < 39; i++) {
    rtb_ResettableDelay3 += rtb_Delay1_0[i + 1];
  }

  /* End of Sum: '<S15>/Sum of Elements' */

  /* Delay: '<S15>/Resettable Delay2' incorporates:
   *  Constant: '<S15>/Constant15'
   */
  if (vitc_PackVoltageFaultReset && (localZCE->ResettableDelay2_Reset_ZCE !=
       POS_ZCSIG)) {
    localDW->ResettableDelay2_DSTATE = 0.0;
  }

  localZCE->ResettableDelay2_Reset_ZCE = vitc_PackVoltageFaultReset;

  /* Switch: '<S15>/Switch4' incorporates:
   *  Abs: '<S15>/Abs'
   *  Constant: '<S15>/Constant14'
   *  Constant: '<S15>/Constant19'
   *  Constant: '<S15>/Constant20'
   *  Delay: '<S15>/Delay'
   *  RelationalOperator: '<S15>/Relational Operator4'
   *  Sum: '<S15>/Subtract'
   */
  if (fabs(localDW->Delay_DSTATE_b - rtb_ResettableDelay3) >=
      vitc_CellPackVolTol) {
    i = 1;
  } else {
    i = 0;
  }

  /* End of Switch: '<S15>/Switch4' */

  /* Sum: '<S15>/Add2' incorporates:
   *  Delay: '<S15>/Resettable Delay2'
   */
  rtb_ResettableDelay3 = (FREAL)i + localDW->ResettableDelay2_DSTATE;

  /* Switch: '<S15>/Switch5' incorporates:
   *  Constant: '<S15>/Constant16'
   *  RelationalOperator: '<S15>/Relational Operator5'
   */
  *rty_vitm_PackVoltageFault = (U8)(rtb_ResettableDelay3 >=
    vitc_PackVoltageFaultTimer / 0.1);

  /* Sum: '<S9>/Add1' incorporates:
   *  Delay: '<S9>/Delay1'
   *  Gain: '<S9>/Gain2'
   */
  *rty_vitm_PackCurrentFiltered = vitc_PackCurFilterC * *rtu_PackCurrent +
    localDW->Delay1_DSTATE_ia;

  /* Delay: '<S14>/Resettable Delay3' incorporates:
   *  Constant: '<S14>/Constant22'
   */
  if (vitc_PackCurrentFaultReset && (localZCE->ResettableDelay3_Reset_ZCE !=
       POS_ZCSIG)) {
    localDW->ResettableDelay3_DSTATE = 0.0;
  }

  localZCE->ResettableDelay3_Reset_ZCE = vitc_PackCurrentFaultReset;

  /* Switch: '<S14>/Switch6' incorporates:
   *  Abs: '<S14>/Abs'
   *  Constant: '<S14>/Constant21'
   *  Constant: '<S14>/Constant26'
   *  Constant: '<S14>/Constant27'
   *  RelationalOperator: '<S14>/Relational Operator6'
   */
  if (fabs(*rty_vitm_PackCurrentFiltered) >= vitc_PackCurrentLimit) {
    i = 1;
  } else {
    i = 0;
  }

  /* End of Switch: '<S14>/Switch6' */

  /* Sum: '<S14>/Add3' incorporates:
   *  Delay: '<S14>/Resettable Delay3'
   */
  rtb_Delay = (FREAL)i + localDW->ResettableDelay3_DSTATE;

  /* Switch: '<S14>/Switch7' incorporates:
   *  Constant: '<S14>/Constant23'
   *  RelationalOperator: '<S14>/Relational Operator7'
   */
  *rty_vitm_PackCurrentFault = (U8)(rtb_Delay >= vitc_PackCurrentFaultTimer /
    0.1);

  /* Sum: '<S11>/Add1' incorporates:
   *  Delay: '<S11>/Delay1'
   *  Gain: '<S11>/Gain'
   */
  *rty_vitm_CoolantInletTFiltered = vitc_CoolantTFilterC * *rtu_CoolantInletT +
    localDW->Delay1_DSTATE_k;

  /* Delay: '<S7>/Resettable Delay3' incorporates:
   *  Constant: '<S7>/Constant22'
   */
  if (vitc_CoolantInletTFaultReset && (localZCE->ResettableDelay3_Reset_ZCE_g !=
       POS_ZCSIG)) {
    localDW->ResettableDelay3_DSTATE_i = 0.0;
  }

  localZCE->ResettableDelay3_Reset_ZCE_g = vitc_CoolantInletTFaultReset;

  /* Sum: '<S7>/Add3' incorporates:
   *  Constant: '<S7>/Constant2'
   *  Constant: '<S7>/Constant3'
   *  Delay: '<S7>/Resettable Delay3'
   *  Logic: '<S7>/Logical Operator'
   *  RelationalOperator: '<S7>/Relational Operator1'
   *  RelationalOperator: '<S7>/Relational Operator2'
   */
  rtb_Add3_p = (FREAL)((*rty_vitm_CoolantInletTFiltered >=
                        vitc_CoolantInletTUpperLim) ||
                       (*rty_vitm_CoolantInletTFiltered <=
                        vitc_CoolantInletTLowerLim)) +
    localDW->ResettableDelay3_DSTATE_i;

  /* Switch: '<S7>/Switch7' incorporates:
   *  Constant: '<S7>/Constant23'
   *  RelationalOperator: '<S7>/Relational Operator7'
   */
  *rty_vitm_CoolantInletTempFault = (U8)(rtb_Add3_p >=
    vitc_CoolantTempFaultCounter / 0.1);

  /* Sum: '<S12>/Add1' incorporates:
   *  Delay: '<S12>/Delay1'
   *  Gain: '<S12>/Gain'
   */
  *rty_vitm_CoolantOutletTFiltered = vitc_CoolantTFilterC * *rtu_CoolantOutletT
    + localDW->Delay1_DSTATE_e;

  /* Delay: '<S8>/Resettable Delay3' incorporates:
   *  Constant: '<S8>/Constant22'
   */
  if (vitc_CoolantOutletTFaultReset && (localZCE->ResettableDelay3_Reset_ZCE_gq
       != POS_ZCSIG)) {
    localDW->ResettableDelay3_DSTATE_c = 0.0;
  }

  localZCE->ResettableDelay3_Reset_ZCE_gq = vitc_CoolantOutletTFaultReset;

  /* Sum: '<S8>/Add3' incorporates:
   *  Constant: '<S8>/Constant2'
   *  Constant: '<S8>/Constant3'
   *  Delay: '<S8>/Resettable Delay3'
   *  Logic: '<S8>/Logical Operator'
   *  RelationalOperator: '<S8>/Relational Operator1'
   *  RelationalOperator: '<S8>/Relational Operator2'
   */
  rtb_Add3_f = (FREAL)((*rty_vitm_CoolantOutletTFiltered >=
                        vitc_CoolantOutletTUpperLim) ||
                       (*rty_vitm_CoolantOutletTFiltered <=
                        vitc_CoolantOutletTLowerLim)) +
    localDW->ResettableDelay3_DSTATE_c;

  /* Switch: '<S8>/Switch7' incorporates:
   *  Constant: '<S8>/Constant23'
   *  RelationalOperator: '<S8>/Relational Operator7'
   */
  *rty_vitm_CoolantOutlletTempFaul = (U8)(rtb_Add3_f >=
    vitc_CoolantTempFaultCounter / 0.1);

  /* Sum: '<S1>/Sum' */
  *rty_vitm_CoolantDeltaTemp = *rty_vitm_CoolantInletTFiltered -
    *rty_vitm_CoolantOutletTFiltered;

  /* Delay: '<S13>/Resettable Delay3' incorporates:
   *  Constant: '<S13>/Constant22'
   */
  if (vitc_HVILFaultReset && (localZCE->ResettableDelay3_Reset_ZCE_f !=
       POS_ZCSIG)) {
    localDW->ResettableDelay3_DSTATE_n = 0.0;
  }

  localZCE->ResettableDelay3_Reset_ZCE_f = vitc_HVILFaultReset;

  /* Sum: '<S13>/Add3' incorporates:
   *  Constant: '<S13>/Constant'
   *  Delay: '<S13>/Resettable Delay3'
   *  RelationalOperator: '<S13>/Relational Operator'
   */
  rtb_Add3_l = (FREAL)(*rtu_HVILReturn < 1.0) +
    localDW->ResettableDelay3_DSTATE_n;

  /* Switch: '<S13>/Switch7' incorporates:
   *  Constant: '<S13>/Constant23'
   *  RelationalOperator: '<S13>/Relational Operator7'
   */
  *rty_vitm_HVILFault = (U8)(rtb_Add3_l >= vitc_HVILFaultCounter / 0.1);

  /* Sum: '<S4>/Add' incorporates:
   *  Delay: '<S4>/Delay'
   *  Gain: '<S4>/Gain'
   */
  *rty_vitm_VehSideVoltageFiltered = vitc_VehVolFilterC * *rtu_VehSideVoltage +
    localDW->Delay_DSTATE_l;

  /* Update for Delay: '<S5>/Resettable Delay' */
  localDW->ResettableDelay_DSTATE = rtb_Add;

  /* Update for Delay: '<S5>/Resettable Delay1' */
  localDW->ResettableDelay1_DSTATE = rtb_Add1;

  /* Update for Delay: '<S3>/Delay' incorporates:
   *  Gain: '<S3>/Gain1'
   */
  localDW->Delay_DSTATE_a = (1.0 - vitc_PackVolFilterC) *
    *rty_vitm_PackVoltageFiltered;

  /* Update for Delay: '<S6>/Resettable Delay' */
  localDW->ResettableDelay_DSTATE_a = rtb_Add_j;

  /* Update for Delay: '<S6>/Resettable Delay1' */
  localDW->ResettableDelay1_DSTATE_m = rtb_Add1_d;

  /* Update for Delay: '<S15>/Delay' */
  localDW->Delay_DSTATE_b = *rty_vitm_PackVoltageFiltered;
  for (i = 0; i < 40; i++) {
    /* Update for Delay: '<S10>/Delay1' incorporates:
     *  Gain: '<S10>/Gain3'
     */
    localDW->Delay1_DSTATE[i] = (1.0 - vitc_CellTempFilterC) *
      rty_vitm_CellsTemperatureFilter[i];

    /* Update for Delay: '<S2>/Delay' incorporates:
     *  Gain: '<S2>/Gain1'
     */
    localDW->Delay_DSTATE[i] = (1.0 - vitc_CellVolFilterC) *
      rty_vitm_CellsVoltageFiltered[i];

    /* Update for Delay: '<S15>/Delay1' */
    localDW->Delay1_DSTATE_i[i] = rty_vitm_CellsVoltageFiltered[i];
  }

  /* Update for Delay: '<S15>/Resettable Delay2' */
  localDW->ResettableDelay2_DSTATE = rtb_ResettableDelay3;

  /* Update for Delay: '<S9>/Delay1' incorporates:
   *  Gain: '<S9>/Gain3'
   */
  localDW->Delay1_DSTATE_ia = (1.0 - vitc_PackCurFilterC) *
    *rty_vitm_PackCurrentFiltered;

  /* Update for Delay: '<S14>/Resettable Delay3' */
  localDW->ResettableDelay3_DSTATE = rtb_Delay;

  /* Update for Delay: '<S11>/Delay1' incorporates:
   *  Gain: '<S11>/Gain1'
   */
  localDW->Delay1_DSTATE_k = (1.0 - vitc_CoolantTFilterC) *
    *rty_vitm_CoolantInletTFiltered;

  /* Update for Delay: '<S7>/Resettable Delay3' */
  localDW->ResettableDelay3_DSTATE_i = rtb_Add3_p;

  /* Update for Delay: '<S12>/Delay1' incorporates:
   *  Gain: '<S12>/Gain3'
   */
  localDW->Delay1_DSTATE_e = (1.0 - vitc_CoolantTFilterC) *
    *rty_vitm_CoolantOutletTFiltered;

  /* Update for Delay: '<S8>/Resettable Delay3' */
  localDW->ResettableDelay3_DSTATE_c = rtb_Add3_f;

  /* Update for Delay: '<S13>/Resettable Delay3' */
  localDW->ResettableDelay3_DSTATE_n = rtb_Add3_l;

  /* Update for Delay: '<S4>/Delay' incorporates:
   *  Gain: '<S4>/Gain1'
   */
  localDW->Delay_DSTATE_l = (1.0 - vitc_VehVolFilterC) *
    *rty_vitm_VehSideVoltageFiltered;

  /* End of Outputs for SubSystem: '<Root>/VITM' */
}

/* Model initialize function */
void VITM_initialize(const char_T **rt_errorStatus, RT_MODEL_VITM *const VITM_M,
                     rtZCE_VITM *localZCE)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(FREAL));

  /* initialize error status */
  rtmSetErrorStatusPointer(VITM_M, rt_errorStatus);
  localZCE->ResettableDelay_Reset_ZCE = POS_ZCSIG;
  localZCE->ResettableDelay1_Reset_ZCE = POS_ZCSIG;
  localZCE->ResettableDelay_Reset_ZCE_a = POS_ZCSIG;
  localZCE->ResettableDelay1_Reset_ZCE_n = POS_ZCSIG;
  localZCE->ResettableDelay2_Reset_ZCE = POS_ZCSIG;
  localZCE->ResettableDelay3_Reset_ZCE = POS_ZCSIG;
  localZCE->ResettableDelay3_Reset_ZCE_g = POS_ZCSIG;
  localZCE->ResettableDelay3_Reset_ZCE_gq = POS_ZCSIG;
  localZCE->ResettableDelay3_Reset_ZCE_f = POS_ZCSIG;
}

/* end of file */
