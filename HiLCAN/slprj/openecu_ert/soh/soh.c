/*
 *****************************************************************************
 *
 *  File:                     soh.c
 *  Description:              Real-Time Workshop code generated for Simulink
 *                            model soh.
 *
 *  Model name:               soh
 *  Model date:
 *  Model version:            1.268
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
#include "soh.h"
#include "soh_private.h"

/********* Macros *********/

/* Named constants for Chart: '<S1>/Chart' */
#define soh_IN_dataStore               ((U8)1U)
#define soh_IN_end                     ((U8)2U)
#define soh_IN_key_ON                  ((U8)3U)
#define soh_IN_sohr                    ((U8)4U)

/********* Static structure definitions *********/

/********* Global variables *********/

/********* Static Variables *********/

/********* External references *********/
/********* Functions *********/

/* Output and update for function-call system: '<S1>/deltaCalc' */
void soh_deltaCalc(const FREAL *rtu_PackCurrent, const FREAL rtu_CellVoltages[40],
                   const FREAL rtu_CellSOC[40], const FREAL rtu_CellTemp[40],
                   const U8 rtu_cb_cmds[40], rtB_deltaCalc_soh *localB,
                   rtDW_deltaCalc_soh *localDW)
{
  S32 i;
  FREAL rtb_Sum;
  for (i = 0; i < 40; i++) {
    /* Sum: '<S5>/Sum' incorporates:
     *  Constant: '<S5>/Constant4'
     *  DataTypeConversion: '<S5>/Data Type Conversion'
     *  Product: '<S5>/Divide1'
     *  Product: '<S5>/Divide2'
     *  Product: '<S5>/Divide4'
     */
    rtb_Sum = *rtu_PackCurrent - rtu_CellVoltages[i] * (FREAL)rtu_cb_cmds[i] /
      1.1;

    /* Sum: '<S5>/Subtract' incorporates:
     *  Delay: '<S5>/Delay2'
     */
    localB->Subtract[i] = rtb_Sum - localDW->Delay2_DSTATE[i];

    /* Sum: '<S5>/Subtract1' incorporates:
     *  Delay: '<S5>/Delay3'
     */
    localB->Subtract1[i] = rtu_CellVoltages[i] - localDW->Delay3_DSTATE[i];

    /* Lookup_n-D: '<S5>/2-D Lookup Table1' */
    localB->uDLookupTable1[i] = look2_binlx(rtu_CellTemp[i], rtu_CellSOC[i],
      rtCP_uDLookupTable1_bp01Data, rtCP_uDLookupTable1_bp02Data,
      rtCP_uDLookupTable1_tableData, rtCP_uDLookupTable1_maxIndex, 3U);

    /* Update for Delay: '<S5>/Delay2' */
    localDW->Delay2_DSTATE[i] = rtb_Sum;

    /* Update for Delay: '<S5>/Delay3' */
    localDW->Delay3_DSTATE[i] = rtu_CellVoltages[i];
  }
}

/* Initial conditions for function-call system: '<S1>/key_on' */
void soh_key_on_Init(rtDW_key_on_soh *localDW)
{
  /* InitializeConditions for Delay: '<S7>/Delay1' incorporates:
   *  InitializeConditions for Delay: '<S7>/Delay3'
   */
  memcpy(&localDW->Delay1_DSTATE[0], (&(sohv_factoryInit_sohc[0])), 40U * sizeof
         (FREAL));

  /* InitializeConditions for Delay: '<S7>/Delay3' incorporates:
   *  InitializeConditions for Delay: '<S7>/Delay1'
   */
  memcpy(&localDW->Delay3_DSTATE[0], (&(sohv_factoryInit_sohr[0])), 40U * sizeof
         (FREAL));
}

/* Output and update for function-call system: '<S1>/key_on' */
void soh_key_on(const FREAL rtu_initR_factors[40], const FREAL
                rtu_init_Cfactors[40], FREAL *rty_soh_customer_index,
                rtDW_key_on_soh *localDW)
{
  FREAL minV;
  FREAL minV_0;
  FREAL rtb_Sum2[40];
  FREAL rtb_Sum1[40];
  S32 i;

  /* Sum: '<S7>/Sum2' incorporates:
   *  Delay: '<S7>/Delay3'
   *  Gain: '<S7>/Gain6'
   *  Gain: '<S7>/Gain7'
   */
  for (i = 0; i < 40; i++) {
    rtb_Sum2[i] = (1.0 - sohc_customer_filter_coeff) * rtu_initR_factors[i] +
      sohc_customer_filter_coeff * localDW->Delay3_DSTATE[i];
  }

  /* End of Sum: '<S7>/Sum2' */

  /* MinMax: '<S7>/MinMax' */
  minV = rtb_Sum2[0];
  for (i = 0; i < 39; i++) {
    if (!((minV <= rtb_Sum2[i + 1]) || rtIsNaN(rtb_Sum2[i + 1]))) {
      minV = rtb_Sum2[i + 1];
    }
  }

  /* Sum: '<S7>/Sum1' incorporates:
   *  Delay: '<S7>/Delay1'
   *  Gain: '<S7>/Gain1'
   *  Gain: '<S7>/Gain2'
   */
  for (i = 0; i < 40; i++) {
    rtb_Sum1[i] = (1.0 - sohc_customer_filter_coeff) * rtu_init_Cfactors[i] +
      sohc_customer_filter_coeff * localDW->Delay1_DSTATE[i];
  }

  /* End of Sum: '<S7>/Sum1' */

  /* MinMax: '<S7>/MinMax1' */
  minV_0 = rtb_Sum1[0];
  for (i = 0; i < 39; i++) {
    if (!((minV_0 <= rtb_Sum1[i + 1]) || rtIsNaN(rtb_Sum1[i + 1]))) {
      minV_0 = rtb_Sum1[i + 1];
    }
  }

  /* MinMax: '<S7>/MinMax2' incorporates:
   *  MinMax: '<S7>/MinMax'
   *  MinMax: '<S7>/MinMax1'
   */
  if ((minV <= minV_0) || rtIsNaN(minV_0)) {
    minV_0 = minV;
  }

  /* Gain: '<S7>/Gain' incorporates:
   *  MinMax: '<S7>/MinMax2'
   */
  *rty_soh_customer_index = 100.0 * minV_0;

  /* Update for Delay: '<S7>/Delay1' incorporates:
   *  Update for Delay: '<S7>/Delay3'
   */
  memcpy(&localDW->Delay1_DSTATE[0], &rtb_Sum1[0], 40U * sizeof(FREAL));

  /* Update for Delay: '<S7>/Delay3' incorporates:
   *  Update for Delay: '<S7>/Delay1'
   */
  memcpy(&localDW->Delay3_DSTATE[0], &rtb_Sum2[0], 40U * sizeof(FREAL));
}

/* Start for function-call system: '<S1>/SOH' */
void soh_SOH_Start(rtDW_SOH_soh *localDW)
{
  /* InitializeConditions for Enabled SubSystem: '<S4>/SOHRcalc' */
  /* InitializeConditions for Delay: '<S8>/Delay3' */
  localDW->icLoad = 1U;

  /* End of InitializeConditions for SubSystem: '<S4>/SOHRcalc' */
}

/* Output and update for function-call system: '<S1>/SOH' */
void soh_SOH(const FREAL rtu_deltaI[40], const FREAL rtu_deltaV[40], const FREAL
             rtu_nominalR[40], FREAL rtu_init_keyon_reset, const FREAL
             rtu_init_sohr_factors[40], const FREAL rtu_soc_C_factors[40], FREAL
             *rty_soh_R_index, FREAL rty_soh_R_factor[40], FREAL
             *rty_soh_C_index, FREAL rty_soh_C_factors[40], rtDW_SOH_soh
             *localDW, rtZCE_SOH_soh *localZCE)
{
  FREAL y;
  U8 rtb_RelationalOperator3[40];
  U8 rtb_LogicalOperator1[40];
  U8 rtb_LogicalOperator5[40];
  FREAL rtb_Switch2[40];
  S32 i;
  FREAL rtb_Switch;
  FREAL rtb_Switch2_o;
  FREAL u1;
  for (i = 0; i < 40; i++) {
    /* RelationalOperator: '<S9>/Relational Operator3' incorporates:
     *  Constant: '<S9>/Constant3'
     */
    rtb_RelationalOperator3[i] = (rtu_deltaI[i] > 0.0);

    /* RelationalOperator: '<S9>/Relational Operator1' incorporates:
     *  Constant: '<S9>/Constant1'
     */
    rtb_LogicalOperator1[i] = (rtu_deltaV[i] > 0.0);
  }

  /* Logic: '<S9>/Logical Operator5' */
  for (i = 0; i < 40; i++) {
    rtb_LogicalOperator5[i] = (rtb_RelationalOperator3[i] &&
      rtb_LogicalOperator1[0] && rtb_LogicalOperator1[1] &&
      rtb_LogicalOperator1[2] && rtb_LogicalOperator1[3] &&
      rtb_LogicalOperator1[4] && rtb_LogicalOperator1[5] &&
      rtb_LogicalOperator1[6] && rtb_LogicalOperator1[7] &&
      rtb_LogicalOperator1[8] && rtb_LogicalOperator1[9] &&
      rtb_LogicalOperator1[10] && rtb_LogicalOperator1[11] &&
      rtb_LogicalOperator1[12] && rtb_LogicalOperator1[13] &&
      rtb_LogicalOperator1[14] && rtb_LogicalOperator1[15] &&
      rtb_LogicalOperator1[16] && rtb_LogicalOperator1[17] &&
      rtb_LogicalOperator1[18] && rtb_LogicalOperator1[19] &&
      rtb_LogicalOperator1[20] && rtb_LogicalOperator1[21] &&
      rtb_LogicalOperator1[22] && rtb_LogicalOperator1[23] &&
      rtb_LogicalOperator1[24] && rtb_LogicalOperator1[25] &&
      rtb_LogicalOperator1[26] && rtb_LogicalOperator1[27] &&
      rtb_LogicalOperator1[28] && rtb_LogicalOperator1[29] &&
      rtb_LogicalOperator1[30] && rtb_LogicalOperator1[31] &&
      rtb_LogicalOperator1[32] && rtb_LogicalOperator1[33] &&
      rtb_LogicalOperator1[34] && rtb_LogicalOperator1[35] &&
      rtb_LogicalOperator1[36] && rtb_LogicalOperator1[37] &&
      rtb_LogicalOperator1[38] && rtb_LogicalOperator1[39]);
  }

  /* End of Logic: '<S9>/Logical Operator5' */

  /* Logic: '<S9>/Logical Operator1' */
  for (i = 0; i < 40; i++) {
    rtb_LogicalOperator1[i] = !rtb_LogicalOperator1[i];
  }

  /* End of Logic: '<S9>/Logical Operator1' */

  /* Logic: '<S9>/Logical Operator4' incorporates:
   *  Abs: '<S9>/Abs'
   *  Constant: '<S9>/Constant2'
   *  Logic: '<S9>/Logical Operator3'
   *  Logic: '<S9>/Logical Operator6'
   *  Logic: '<S9>/Logical Operator7'
   *  RelationalOperator: '<S9>/Relational Operator2'
   */
  for (i = 0; i < 40; i++) {
    rtb_LogicalOperator5[i] = ((fabs(rtu_deltaI[i]) >= sohc_current_threshold) &&
      (rtb_LogicalOperator5[i] || ((!rtb_RelationalOperator3[i]) &&
      rtb_LogicalOperator1[0] && rtb_LogicalOperator1[1] &&
      rtb_LogicalOperator1[2] && rtb_LogicalOperator1[3] &&
      rtb_LogicalOperator1[4] && rtb_LogicalOperator1[5] &&
      rtb_LogicalOperator1[6] && rtb_LogicalOperator1[7] &&
      rtb_LogicalOperator1[8] && rtb_LogicalOperator1[9] &&
      rtb_LogicalOperator1[10] && rtb_LogicalOperator1[11] &&
      rtb_LogicalOperator1[12] && rtb_LogicalOperator1[13] &&
      rtb_LogicalOperator1[14] && rtb_LogicalOperator1[15] &&
      rtb_LogicalOperator1[16] && rtb_LogicalOperator1[17] &&
      rtb_LogicalOperator1[18] && rtb_LogicalOperator1[19] &&
      rtb_LogicalOperator1[20] && rtb_LogicalOperator1[21] &&
      rtb_LogicalOperator1[22] && rtb_LogicalOperator1[23] &&
      rtb_LogicalOperator1[24] && rtb_LogicalOperator1[25] &&
      rtb_LogicalOperator1[26] && rtb_LogicalOperator1[27] &&
      rtb_LogicalOperator1[28] && rtb_LogicalOperator1[29] &&
      rtb_LogicalOperator1[30] && rtb_LogicalOperator1[31] &&
      rtb_LogicalOperator1[32] && rtb_LogicalOperator1[33] &&
      rtb_LogicalOperator1[34] && rtb_LogicalOperator1[35] &&
      rtb_LogicalOperator1[36] && rtb_LogicalOperator1[37] &&
      rtb_LogicalOperator1[38] && rtb_LogicalOperator1[39])));
  }

  /* End of Logic: '<S9>/Logical Operator4' */

  /* Outputs for Enabled SubSystem: '<S4>/SOHRcalc' incorporates:
   *  EnablePort: '<S8>/Enable'
   */
  if (rtb_LogicalOperator5[0] || rtb_LogicalOperator5[1] ||
      rtb_LogicalOperator5[2] || rtb_LogicalOperator5[3] ||
      rtb_LogicalOperator5[4] || rtb_LogicalOperator5[5] ||
      rtb_LogicalOperator5[6] || rtb_LogicalOperator5[7] ||
      rtb_LogicalOperator5[8] || rtb_LogicalOperator5[9] ||
      rtb_LogicalOperator5[10] || rtb_LogicalOperator5[11] ||
      rtb_LogicalOperator5[12] || rtb_LogicalOperator5[13] ||
      rtb_LogicalOperator5[14] || rtb_LogicalOperator5[15] ||
      rtb_LogicalOperator5[16] || rtb_LogicalOperator5[17] ||
      rtb_LogicalOperator5[18] || rtb_LogicalOperator5[19] ||
      rtb_LogicalOperator5[20] || rtb_LogicalOperator5[21] ||
      rtb_LogicalOperator5[22] || rtb_LogicalOperator5[23] ||
      rtb_LogicalOperator5[24] || rtb_LogicalOperator5[25] ||
      rtb_LogicalOperator5[26] || rtb_LogicalOperator5[27] ||
      rtb_LogicalOperator5[28] || rtb_LogicalOperator5[29] ||
      rtb_LogicalOperator5[30] || rtb_LogicalOperator5[31] ||
      rtb_LogicalOperator5[32] || rtb_LogicalOperator5[33] ||
      rtb_LogicalOperator5[34] || rtb_LogicalOperator5[35] ||
      rtb_LogicalOperator5[36] || rtb_LogicalOperator5[37] ||
      rtb_LogicalOperator5[38] || rtb_LogicalOperator5[39]) {
    /* Delay: '<S8>/Delay3' */
    if (rt_ZCFcn(RISING_ZERO_CROSSING,&localZCE->Delay3_Reset_ZCE,
                 (rtu_init_keyon_reset)) != NO_ZCEVENT) {
      localDW->icLoad = 1U;
    }

    /* Gain: '<S8>/Gain8' */
    y = sohc_pct_R_limit / 100.0;
    for (i = 0; i < 40; i++) {
      /* Delay: '<S8>/Delay3' */
      if (localDW->icLoad != 0) {
        localDW->Delay3_DSTATE[i] = rtu_init_sohr_factors[i];
      }

      /* Product: '<S8>/Divide4' incorporates:
       *  Product: '<S8>/Divide'
       */
      u1 = rtu_nominalR[i] / (rtu_deltaV[i] / rtu_deltaI[i]);

      /* Gain: '<S8>/Gain8' incorporates:
       *  Delay: '<S8>/Delay3'
       */
      rtb_Switch = y * localDW->Delay3_DSTATE[i];

      /* Sum: '<S8>/Sum4' incorporates:
       *  Delay: '<S8>/Delay3'
       */
      rtb_Switch2_o = rtb_Switch + localDW->Delay3_DSTATE[i];

      /* Sum: '<S8>/Sum3' incorporates:
       *  Delay: '<S8>/Delay3'
       */
      rtb_Switch = localDW->Delay3_DSTATE[i] - rtb_Switch;

      /* Switch: '<S10>/Switch' incorporates:
       *  RelationalOperator: '<S10>/UpperRelop'
       */
      if (!(u1 < rtb_Switch)) {
        rtb_Switch = u1;
      }

      /* End of Switch: '<S10>/Switch' */

      /* Switch: '<S10>/Switch2' incorporates:
       *  RelationalOperator: '<S10>/LowerRelop1'
       */
      if (!(u1 > rtb_Switch2_o)) {
        rtb_Switch2_o = rtb_Switch;
      }

      /* End of Switch: '<S10>/Switch2' */

      /* Sum: '<S8>/Sum2' incorporates:
       *  Delay: '<S8>/Delay3'
       *  Gain: '<S8>/Gain6'
       *  Gain: '<S8>/Gain7'
       */
      rtb_Switch2_o = (1.0 - sohc_filter_coeff) * rtb_Switch2_o +
        sohc_filter_coeff * localDW->Delay3_DSTATE[i];

      /* Saturate: '<S8>/Saturation' */
      if (rtb_Switch2_o > 1.0) {
        rty_soh_R_factor[i] = 1.0;
      } else if (rtb_Switch2_o < 0.0) {
        rty_soh_R_factor[i] = 0.0;
      } else {
        rty_soh_R_factor[i] = rtb_Switch2_o;
      }

      /* End of Saturate: '<S8>/Saturation' */

      /* Sum: '<S8>/Sum4' */
      rtb_Switch2[i] = rtb_Switch2_o;
    }

    /* MinMax: '<S8>/MinMax' */
    y = rty_soh_R_factor[0];
    for (i = 0; i < 39; i++) {
      u1 = rty_soh_R_factor[i + 1];
      if (!((y <= u1) || rtIsNaN(u1))) {
        y = u1;
      }
    }

    /* Gain: '<S8>/Gain3' incorporates:
     *  MinMax: '<S8>/MinMax'
     */
    *rty_soh_R_index = 100.0 * y;

    /* Update for Delay: '<S8>/Delay3' */
    localDW->icLoad = 0U;
    memcpy(&localDW->Delay3_DSTATE[0], &rtb_Switch2[0], 40U * sizeof(FREAL));
  }

  /* End of Outputs for SubSystem: '<S4>/SOHRcalc' */

  /* Gain: '<S4>/Gain' */
  memcpy(&rty_soh_C_factors[0], &rtu_soc_C_factors[0], 40U * sizeof(FREAL));

  /* MinMax: '<S4>/MinMax' */
  y = rty_soh_C_factors[0];
  for (i = 0; i < 39; i++) {
    u1 = rty_soh_C_factors[i + 1];
    if (!((y <= u1) || rtIsNaN(u1))) {
      y = u1;
    }
  }

  /* Saturate: '<S4>/Saturation' incorporates:
   *  MinMax: '<S4>/MinMax'
   */
  if (y > 1.0) {
    y = 1.0;
  } else {
    if (y < 0.0) {
      y = 0.0;
    }
  }

  /* Gain: '<S4>/Gain3' incorporates:
   *  Saturate: '<S4>/Saturation'
   */
  *rty_soh_C_index = 100.0 * y;
}

/* Initial conditions for referenced model: 'soh' */
void soh_Init(rtDW_soh *localDW)
{
  /* InitializeConditions for Atomic SubSystem: '<Root>/soh' */

  /* InitializeConditions for Chart: '<S1>/Chart' incorporates:
   *  InitializeConditions for SubSystem: '<S1>/key_on'
   */
  soh_key_on_Init(&localDW->key_on);

  /* End of InitializeConditions for SubSystem: '<Root>/soh' */
}

/* Start for referenced model: 'soh' */
void soh_Start(FREAL rty_soh_C_factors[40], rtDW_soh *localDW)
{
  /* Start for Atomic SubSystem: '<Root>/soh' */
  /* Start for Chart: '<S1>/Chart' incorporates:
   *  Start for SubSystem: '<S1>/SOH'
   */
  soh_SOH_Start(&localDW->SOH);

  /* Start for DataStoreMemory: '<S1>/Data Store Memory1' incorporates:
   *  VirtualOutportStart for Outport: '<Root>/soh_C_factors'
   */
  memcpy(&localDW->memStore_Rfactors[0], (&(sohv_factoryInit_sohr[0])), 40U *
         sizeof(FREAL));

  /* VirtualOutportStart for Outport: '<Root>/soh_C_factors' incorporates:
   *  Start for DataStoreMemory: '<S1>/Data Store Memory1'
   */
  memcpy(&rty_soh_C_factors[0], (&(sohv_factoryInit_sohc[0])), 40U * sizeof
         (FREAL));

  /* End of Start for SubSystem: '<Root>/soh' */
}

/* Output and update for referenced model: 'soh' */
void soh(const FREAL *rtu_vitm_pack_current, const FREAL rtu_vitm_cell_voltages
         [40], const FREAL rtu_soc_cells_pct[40], const FREAL
         rtu_vitm_cells_temp[40], const FREAL rtu_soc_C_factors[40], const U8
         *rtu_cc_main_contactor, const U8 *rtu_cc_charger_contactor, const U8
         *rtu_cc_prechg_contactor, const U8 rtu_cb_cmds[40], FREAL
         *rty_soh_R_index, FREAL rty_soh_R_factors[40], FREAL *rty_soh_C_index,
         FREAL rty_soh_C_factors[40], FREAL *rty_soh_customer_index, rtB_soh
         *localB, rtDW_soh *localDW, rtZCE_soh *localZCE)
{
  U8 rtb_LogicalOperator;

  /* Outputs for Atomic SubSystem: '<Root>/soh' */
  /* Logic: '<S1>/Logical Operator' */
  rtb_LogicalOperator = ((*rtu_cc_main_contactor) || (*rtu_cc_charger_contactor));

  /* Chart: '<S1>/Chart' */
  /* Gateway: soh/Chart */
  /* During: soh/Chart */
  if (localDW->bitsForTID0.is_active_c3_soh == 0U) {
    /* Entry: soh/Chart */
    localDW->bitsForTID0.is_active_c3_soh = 1U;

    /* Entry Internal: soh/Chart */
    /* Transition: '<S2>:68' */
    localDW->bitsForTID0.is_c3_soh = soh_IN_key_ON;

    /* Entry 'key_ON': '<S2>:14' */
    localB->init_keyon_reset = 1.0;

    /* Outputs for Function Call SubSystem: '<S1>/init' */
    /* DataStoreRead: '<S6>/Data Store Read1' */
    /* Entry Internal 'key_ON': '<S2>:14' */
    /* Transition: '<S2>:64' */
    /* Transition: '<S2>:63' */
    /* Event: '<S2>:50' */
    memcpy(&localB->DataStoreRead1[0], &localDW->memStore_Rfactors[0], 40U *
           sizeof(FREAL));

    /* End of Outputs for SubSystem: '<S1>/init' */

    /* Outputs for Function Call SubSystem: '<S1>/key_on' */

    /* Transition: '<S2>:32' */
    /* Event: '<S2>:52' */
    soh_key_on(localB->DataStoreRead1, rtu_soc_C_factors, rty_soh_customer_index,
               &localDW->key_on);

    /* End of Outputs for SubSystem: '<S1>/key_on' */

    /* Outputs for Function Call SubSystem: '<S1>/deltaCalc' */

    /* Transition: '<S2>:38' */
    /* Event: '<S2>:51' */
    soh_deltaCalc(rtu_vitm_pack_current, rtu_vitm_cell_voltages,
                  rtu_soc_cells_pct, rtu_vitm_cells_temp, rtu_cb_cmds,
                  &localB->deltaCalc, &localDW->deltaCalc);

    /* End of Outputs for SubSystem: '<S1>/deltaCalc' */

    /* Outputs for Function Call SubSystem: '<S1>/SOH' */

    /* Transition: '<S2>:62' */
    /* Event: '<S2>:53' */
    soh_SOH(localB->deltaCalc.Subtract, localB->deltaCalc.Subtract1,
            localB->deltaCalc.uDLookupTable1, localB->init_keyon_reset,
            localB->DataStoreRead1, rtu_soc_C_factors, rty_soh_R_index,
            rty_soh_R_factors, rty_soh_C_index, rty_soh_C_factors, &localDW->SOH,
            &localZCE->SOH);

    /* End of Outputs for SubSystem: '<S1>/SOH' */
  } else {
    switch (localDW->bitsForTID0.is_c3_soh) {
     case soh_IN_dataStore:
      /* During 'dataStore': '<S2>:16' */
      /* Transition: '<S2>:70' */
      localDW->bitsForTID0.is_c3_soh = soh_IN_end;

      /* Entry 'end': '<S2>:69' */
      break;

     case soh_IN_end:
      /* During 'end': '<S2>:69' */
      if ((*rtu_cc_prechg_contactor) || rtb_LogicalOperator) {
        /* Transition: '<S2>:26' */
        localDW->bitsForTID0.is_c3_soh = soh_IN_key_ON;

        /* Entry 'key_ON': '<S2>:14' */
        localB->init_keyon_reset = 1.0;

        /* Outputs for Function Call SubSystem: '<S1>/init' */
        /* DataStoreRead: '<S6>/Data Store Read1' */
        /* Entry Internal 'key_ON': '<S2>:14' */
        /* Transition: '<S2>:64' */
        /* Transition: '<S2>:63' */
        /* Event: '<S2>:50' */
        memcpy(&localB->DataStoreRead1[0], &localDW->memStore_Rfactors[0], 40U *
               sizeof(FREAL));

        /* End of Outputs for SubSystem: '<S1>/init' */

        /* Outputs for Function Call SubSystem: '<S1>/key_on' */

        /* Transition: '<S2>:32' */
        /* Event: '<S2>:52' */
        soh_key_on(localB->DataStoreRead1, rtu_soc_C_factors,
                   rty_soh_customer_index, &localDW->key_on);

        /* End of Outputs for SubSystem: '<S1>/key_on' */

        /* Outputs for Function Call SubSystem: '<S1>/deltaCalc' */

        /* Transition: '<S2>:38' */
        /* Event: '<S2>:51' */
        soh_deltaCalc(rtu_vitm_pack_current, rtu_vitm_cell_voltages,
                      rtu_soc_cells_pct, rtu_vitm_cells_temp, rtu_cb_cmds,
                      &localB->deltaCalc, &localDW->deltaCalc);

        /* End of Outputs for SubSystem: '<S1>/deltaCalc' */

        /* Outputs for Function Call SubSystem: '<S1>/SOH' */

        /* Transition: '<S2>:62' */
        /* Event: '<S2>:53' */
        soh_SOH(localB->deltaCalc.Subtract, localB->deltaCalc.Subtract1,
                localB->deltaCalc.uDLookupTable1, localB->init_keyon_reset,
                localB->DataStoreRead1, rtu_soc_C_factors, rty_soh_R_index,
                rty_soh_R_factors, rty_soh_C_index, rty_soh_C_factors,
                &localDW->SOH, &localZCE->SOH);

        /* End of Outputs for SubSystem: '<S1>/SOH' */
      }
      break;

     case soh_IN_key_ON:
      /* During 'key_ON': '<S2>:14' */
      if ((*rtu_cc_prechg_contactor) || rtb_LogicalOperator) {
        /* Transition: '<S2>:9' */
        localDW->bitsForTID0.is_c3_soh = soh_IN_sohr;

        /* Entry 'sohr': '<S2>:7' */
        localB->init_keyon_reset = 0.0;

        /* Outputs for Function Call SubSystem: '<S1>/deltaCalc' */

        /* Entry Internal 'sohr': '<S2>:7' */
        /* Transition: '<S2>:19' */
        /* Transition: '<S2>:15' */
        /* Event: '<S2>:51' */
        soh_deltaCalc(rtu_vitm_pack_current, rtu_vitm_cell_voltages,
                      rtu_soc_cells_pct, rtu_vitm_cells_temp, rtu_cb_cmds,
                      &localB->deltaCalc, &localDW->deltaCalc);

        /* End of Outputs for SubSystem: '<S1>/deltaCalc' */

        /* Outputs for Function Call SubSystem: '<S1>/SOH' */

        /* Transition: '<S2>:40' */
        /* Event: '<S2>:53' */
        soh_SOH(localB->deltaCalc.Subtract, localB->deltaCalc.Subtract1,
                localB->deltaCalc.uDLookupTable1, localB->init_keyon_reset,
                localB->DataStoreRead1, rtu_soc_C_factors, rty_soh_R_index,
                rty_soh_R_factors, rty_soh_C_index, rty_soh_C_factors,
                &localDW->SOH, &localZCE->SOH);

        /* End of Outputs for SubSystem: '<S1>/SOH' */
      } else {
        /* Outputs for Function Call SubSystem: '<S1>/init' */
        /* DataStoreRead: '<S6>/Data Store Read1' */
        /* Transition: '<S2>:64' */
        /* Transition: '<S2>:63' */
        /* Event: '<S2>:50' */
        memcpy(&localB->DataStoreRead1[0], &localDW->memStore_Rfactors[0], 40U *
               sizeof(FREAL));

        /* End of Outputs for SubSystem: '<S1>/init' */

        /* Outputs for Function Call SubSystem: '<S1>/key_on' */

        /* Transition: '<S2>:32' */
        /* Event: '<S2>:52' */
        soh_key_on(localB->DataStoreRead1, rtu_soc_C_factors,
                   rty_soh_customer_index, &localDW->key_on);

        /* End of Outputs for SubSystem: '<S1>/key_on' */

        /* Outputs for Function Call SubSystem: '<S1>/deltaCalc' */

        /* Transition: '<S2>:38' */
        /* Event: '<S2>:51' */
        soh_deltaCalc(rtu_vitm_pack_current, rtu_vitm_cell_voltages,
                      rtu_soc_cells_pct, rtu_vitm_cells_temp, rtu_cb_cmds,
                      &localB->deltaCalc, &localDW->deltaCalc);

        /* End of Outputs for SubSystem: '<S1>/deltaCalc' */

        /* Outputs for Function Call SubSystem: '<S1>/SOH' */

        /* Transition: '<S2>:62' */
        /* Event: '<S2>:53' */
        soh_SOH(localB->deltaCalc.Subtract, localB->deltaCalc.Subtract1,
                localB->deltaCalc.uDLookupTable1, localB->init_keyon_reset,
                localB->DataStoreRead1, rtu_soc_C_factors, rty_soh_R_index,
                rty_soh_R_factors, rty_soh_C_index, rty_soh_C_factors,
                &localDW->SOH, &localZCE->SOH);

        /* End of Outputs for SubSystem: '<S1>/SOH' */
      }
      break;

     default:
      /* During 'sohr': '<S2>:7' */
      if ((!rtb_LogicalOperator) && (!*rtu_cc_prechg_contactor)) {
        /* Transition: '<S2>:34' */
        localDW->bitsForTID0.is_c3_soh = soh_IN_dataStore;

        /* Entry 'dataStore': '<S2>:16' */
        localB->init_keyon_reset = 0.0;

        /* Outputs for Function Call SubSystem: '<S1>/DataStore' */
        /* DataStoreWrite: '<S3>/Data Store Write1' */
        /* Entry Internal 'dataStore': '<S2>:16' */
        /* Transition: '<S2>:43' */
        /* Transition: '<S2>:44' */
        /* Event: '<S2>:54' */
        memcpy(&localDW->memStore_Rfactors[0], &rty_soh_R_factors[0], 40U *
               sizeof(FREAL));

        /* End of Outputs for SubSystem: '<S1>/DataStore' */
      } else {
        /* Outputs for Function Call SubSystem: '<S1>/deltaCalc' */

        /* Transition: '<S2>:19' */
        /* Transition: '<S2>:15' */
        /* Event: '<S2>:51' */
        soh_deltaCalc(rtu_vitm_pack_current, rtu_vitm_cell_voltages,
                      rtu_soc_cells_pct, rtu_vitm_cells_temp, rtu_cb_cmds,
                      &localB->deltaCalc, &localDW->deltaCalc);

        /* End of Outputs for SubSystem: '<S1>/deltaCalc' */

        /* Outputs for Function Call SubSystem: '<S1>/SOH' */

        /* Transition: '<S2>:40' */
        /* Event: '<S2>:53' */
        soh_SOH(localB->deltaCalc.Subtract, localB->deltaCalc.Subtract1,
                localB->deltaCalc.uDLookupTable1, localB->init_keyon_reset,
                localB->DataStoreRead1, rtu_soc_C_factors, rty_soh_R_index,
                rty_soh_R_factors, rty_soh_C_index, rty_soh_C_factors,
                &localDW->SOH, &localZCE->SOH);

        /* End of Outputs for SubSystem: '<S1>/SOH' */
      }
      break;
    }
  }

  /* End of Chart: '<S1>/Chart' */
  /* End of Outputs for SubSystem: '<Root>/soh' */
}

/* Model initialize function */
void soh_initialize(const char_T **rt_errorStatus, RT_MODEL_soh *const soh_M,
                    rtZCE_soh *localZCE)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(FREAL));

  /* initialize error status */
  rtmSetErrorStatusPointer(soh_M, rt_errorStatus);
  localZCE->SOH.Delay3_Reset_ZCE = UNINITIALIZED_ZCSIG;
}

/* end of file */
