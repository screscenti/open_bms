/*
 *****************************************************************************
 *
 *  File:                     SOC.c
 *  Description:              Real-Time Workshop code generated for Simulink
 *                            model SOC.
 *
 *  Model name:               SOC
 *  Model date:
 *  Model version:            1.297
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
#include "SOC.h"
#include "SOC_private.h"

/********* Macros *********/

/* Named constants for Chart: '<S8>/Chart' */
#define SOC_IN_keyON                   ((U8)1U)

/* Named constants for Chart: '<S1>/Chart' */
#define SOC_IN_coulomb_counting        ((U8)1U)
#define SOC_IN_dataStore               ((U8)2U)
#define SOC_IN_end                     ((U8)3U)
#define SOC_IN_init                    ((U8)4U)
#define SOC_IN_key_ON                  ((U8)5U)

/********* Static structure definitions *********/

/********* Global variables *********/

/********* Static Variables *********/

/********* External references *********/
/********* Functions *********/

/* Output and update for function-call system: '<S1>/Init' */
void SOC_Init(const FREAL rtu_cell_voltages[40], FREAL rty_soc_cells_pct[40],
              FREAL *rty_cc_integration_reset)
{
  S32 iU;
  U32 bpIdx;
  FREAL frac;

  /* Lookup_n-D: '<S6>/OCV - SOC Lookup' */
  for (iU = 0; iU < 40; iU++) {
    bpIdx = plook_evenc(rtu_cell_voltages[iU], 2.7, 0.0099999999999997868, 150U,
                        &frac);
    rty_soc_cells_pct[iU] = intrp1d_l(bpIdx, frac, SOC_ConstWithInitP.pooled1);
  }

  /* End of Lookup_n-D: '<S6>/OCV - SOC Lookup' */

  /* Constant: '<S6>/Constant' */
  *rty_cc_integration_reset = 0.0;
}

/* Output and update for function-call system: '<S8>/Subsystem' */
void SOC_Subsystem(const FREAL rtu_cell_voltages[40], FREAL rty_soc_cells_pct[40],
                   FREAL *rty_cc_integration_reset, rtB_Subsystem_SOC *localB,
                   FREAL rtd_CCounting_soc_store[40])
{
  FREAL maxV;
  U32 bpIdx;
  FREAL rtb_Abs[40];
  U8 rtb_RelationalOperator3;
  S32 i;

  /* Lookup_n-D: '<S11>/OCV - SOC Lookup' */
  for (i = 0; i < 40; i++) {
    bpIdx = plook_evenc(rtu_cell_voltages[i], 2.7, 0.0099999999999997868, 150U,
                        &maxV);
    localB->OCVSOCLookup[i] = intrp1d_l(bpIdx, maxV, SOC_ConstWithInitP.pooled1);
  }

  /* End of Lookup_n-D: '<S11>/OCV - SOC Lookup' */

  /* Abs: '<S11>/Abs' incorporates:
   *  DataStoreRead: '<S11>/Data Store Read'
   *  Sum: '<S11>/Subtract'
   */
  for (i = 0; i < 40; i++) {
    rtb_Abs[i] = fabs(localB->OCVSOCLookup[i] - rtd_CCounting_soc_store[i]);
  }

  /* End of Abs: '<S11>/Abs' */

  /* MinMax: '<S11>/max' */
  maxV = rtb_Abs[0];
  for (i = 0; i < 39; i++) {
    if (!((maxV >= rtb_Abs[i + 1]) || rtIsNaN(rtb_Abs[i + 1]))) {
      maxV = rtb_Abs[i + 1];
    }
  }

  /* RelationalOperator: '<S11>/Relational Operator3' incorporates:
   *  Constant: '<S11>/soc_diff_threshold'
   *  MinMax: '<S11>/max'
   */
  rtb_RelationalOperator3 = (maxV >= 1.0);

  /* Switch: '<S11>/Switch1' incorporates:
   *  Constant: '<S11>/Constant'
   *  DataStoreRead: '<S11>/Data Store Read'
   *  Switch: '<S11>/Switch'
   */
  if (rtb_RelationalOperator3) {
    memcpy(&rty_soc_cells_pct[0], &localB->OCVSOCLookup[0], 40U * sizeof(FREAL));
    *rty_cc_integration_reset = 1.0;
  } else {
    memcpy(&rty_soc_cells_pct[0], &rtd_CCounting_soc_store[0], 40U * sizeof
           (FREAL));
    *rty_cc_integration_reset = 0.0;
  }

  /* End of Switch: '<S11>/Switch1' */
}

/* Initial conditions for function-call system: '<S8>/CdegradeCalc' */
void SOC_CdegradeCalc_Init(rtDW_CdegradeCalc_SOC *localDW)
{
  /* InitializeConditions for Delay: '<S9>/Delay' */
  localDW->icLoad = 1U;
}

/* Start for function-call system: '<S8>/CdegradeCalc' */
void SOC_CdegradeCalc_Start(FREAL rty_Out1[40])
{
  S32 i;

  /* VirtualOutportStart for Outport: '<S9>/Out1' */
  for (i = 0; i < 40; i++) {
    rty_Out1[i] = 1.0;
  }

  /* End of VirtualOutportStart for Outport: '<S9>/Out1' */
}

/* Output and update for function-call system: '<S8>/CdegradeCalc' */
void SOC_CdegradeCalc(const FREAL rtu_keyON_ocvsoc[40], const FREAL
                      rtu_lastChgInitsoc[40], const FREAL rtu_lastChgCCsoc[40],
                      const FREAL rtu_soh_C_factors[40], FREAL rty_Out1[40],
                      rtDW_CdegradeCalc_SOC *localDW)
{
  S32 i;
  for (i = 0; i < 40; i++) {
    /* Delay: '<S9>/Delay' incorporates:
     *  Constant: '<S9>/Constant'
     */
    if (localDW->icLoad != 0) {
      localDW->Delay_DSTATE[i] = SOCv_factoryInitSohC[i];
    }

    /* Sum: '<S9>/Sum' incorporates:
     *  Delay: '<S9>/Delay'
     *  Gain: '<S9>/Gain'
     *  Gain: '<S9>/Gain1'
     *  Product: '<S9>/Divide'
     *  Product: '<S9>/Mul'
     *  Sum: '<S9>/Subtract'
     *  Sum: '<S9>/Subtract1'
     */
    rty_Out1[i] = (rtu_lastChgCCsoc[i] - rtu_lastChgInitsoc[i]) /
      (rtu_keyON_ocvsoc[i] - rtu_lastChgInitsoc[i]) * rtu_soh_C_factors[i] *
      (1.0 - SOCc_CapacityFilterCoeff) + SOCc_CapacityFilterCoeff *
      localDW->Delay_DSTATE[i];

    /* Update for Delay: '<S9>/Delay' */
    localDW->Delay_DSTATE[i] = rty_Out1[i];
  }

  /* Update for Delay: '<S9>/Delay' */
  localDW->icLoad = 0U;
}

/* Output and update for function-call system: '<S8>/lastCycleUpdate' */
void SOC_lastCycleUpdate(const U8 *rtu_chargingC, FREAL *rtd_last_cycle_charging)
{
  /* DataStoreWrite: '<S12>/Data Store Write' incorporates:
   *  Switch: '<S12>/Switch'
   */
  *rtd_last_cycle_charging = *rtu_chargingC;
}

/* Initial conditions for function-call system: '<S1>/key_on' */
void SOC_key_on_Init(rtDW_key_on_SOC *localDW)
{
  /* InitializeConditions for Chart: '<S8>/Chart' incorporates:
   *  InitializeConditions for SubSystem: '<S8>/CdegradeCalc'
   */
  SOC_CdegradeCalc_Init(&localDW->CdegradeCalc);
}

/* Start for function-call system: '<S1>/key_on' */
void SOC_key_on_Start(FREAL rty_capacity_degrade_factor[40])
{
  S32 i;

  /* Start for Chart: '<S8>/Chart' incorporates:
   *  Start for SubSystem: '<S8>/CdegradeCalc'
   */
  SOC_CdegradeCalc_Start(rty_capacity_degrade_factor);

  /* VirtualOutportStart for Outport: '<S8>/capacity_degrade_factor' */
  for (i = 0; i < 40; i++) {
    rty_capacity_degrade_factor[i] = 1.0;
  }

  /* End of VirtualOutportStart for Outport: '<S8>/capacity_degrade_factor' */
}

/* Output and update for function-call system: '<S1>/key_on' */
void SOC_key_on(const FREAL rtu_cell_voltages[40], const U8 *rtu_chg_c, FREAL
                rty_soc_cells_pct[40], FREAL *rty_cc_integration_reset, FREAL
                rty_capacity_degrade_factor[40], rtB_key_on_SOC *localB,
                rtDW_key_on_SOC *localDW, FREAL rtd_CCounting_soc_store[40],
                FREAL rtd_charging_initial_soc[40], FREAL
                *rtd_last_cycle_charging, FREAL rtd_memStore_Cfactors[40])
{
  FREAL DataStoreRead1[40];
  FREAL *DataStoreRead2;
  FREAL *DataStoreRead3;

  /* DataStoreRead: '<S8>/Data Store Read2' incorporates:
   *  DataStoreRead: '<S8>/Data Store Read1'
   *  DataStoreRead: '<S8>/Data Store Read3'
   */
  DataStoreRead2 = &rtd_charging_initial_soc[0];

  /* DataStoreRead: '<S8>/Data Store Read1' incorporates:
   *  DataStoreRead: '<S8>/Data Store Read2'
   *  DataStoreRead: '<S8>/Data Store Read3'
   */
  memcpy(&DataStoreRead1[0], &rtd_CCounting_soc_store[0], 40U * sizeof(FREAL));

  /* DataStoreRead: '<S8>/Data Store Read3' incorporates:
   *  DataStoreRead: '<S8>/Data Store Read1'
   *  DataStoreRead: '<S8>/Data Store Read2'
   */
  DataStoreRead3 = &rtd_memStore_Cfactors[0];

  /* Chart: '<S8>/Chart' incorporates:
   *  DataStoreRead: '<S8>/Data Store Read'
   */
  /* Gateway: soc/key_on/Chart */
  /* During: soc/key_on/Chart */
  if (localDW->bitsForTID0.is_active_c1_SOC == 0U) {
    /* Entry: soc/key_on/Chart */
    localDW->bitsForTID0.is_active_c1_SOC = 1U;

    /* Entry Internal: soc/key_on/Chart */
    /* Transition: '<S10>:2' */
    localDW->bitsForTID0.is_c1_SOC = SOC_IN_keyON;

    /* Outputs for Function Call SubSystem: '<S8>/Subsystem' */

    /* Entry Internal 'keyON': '<S10>:1' */
    /* Transition: '<S10>:37' */
    /* Transition: '<S10>:5' */
    /* Event: '<S10>:33' */
    SOC_Subsystem(rtu_cell_voltages, rty_soc_cells_pct, rty_cc_integration_reset,
                  &localB->Subsystem, rtd_CCounting_soc_store);

    /* End of Outputs for SubSystem: '<S8>/Subsystem' */
    if (*rtd_last_cycle_charging == 1.0) {
      /* Outputs for Function Call SubSystem: '<S8>/CdegradeCalc' */

      /* Transition: '<S10>:17' */
      /* Transition: '<S10>:21' */
      /* Event: '<S10>:34' */
      SOC_CdegradeCalc(localB->Subsystem.OCVSOCLookup, DataStoreRead2,
                       DataStoreRead1, DataStoreRead3,
                       rty_capacity_degrade_factor, &localDW->CdegradeCalc);

      /* End of Outputs for SubSystem: '<S8>/CdegradeCalc' */

      /* Transition: '<S10>:19' */
    } else {
      /* Transition: '<S10>:18' */
    }

    /* Transition: '<S10>:20' */
    if (*rtu_chg_c) {
      /* Outputs for Function Call SubSystem: '<S8>/saveChgInitSoc' */
      /* DataStoreWrite: '<S13>/Data Store Write' */
      /* Transition: '<S10>:9' */
      /* Transition: '<S10>:11' */
      /* Event: '<S10>:35' */
      memcpy(&rtd_charging_initial_soc[0], &localB->Subsystem.OCVSOCLookup[0],
             40U * sizeof(FREAL));

      /* End of Outputs for SubSystem: '<S8>/saveChgInitSoc' */
      /* Transition: '<S10>:22' */
    } else {
      /* Transition: '<S10>:12' */
    }

    /* Outputs for Function Call SubSystem: '<S8>/lastCycleUpdate' */

    /* Transition: '<S10>:25' */
    /* Event: '<S10>:36' */
    SOC_lastCycleUpdate(rtu_chg_c, rtd_last_cycle_charging);

    /* End of Outputs for SubSystem: '<S8>/lastCycleUpdate' */
  } else {
    /* Outputs for Function Call SubSystem: '<S8>/Subsystem' */

    /* During 'keyON': '<S10>:1' */
    /* Transition: '<S10>:37' */
    /* Transition: '<S10>:5' */
    /* Event: '<S10>:33' */
    SOC_Subsystem(rtu_cell_voltages, rty_soc_cells_pct, rty_cc_integration_reset,
                  &localB->Subsystem, rtd_CCounting_soc_store);

    /* End of Outputs for SubSystem: '<S8>/Subsystem' */
    if (*rtd_last_cycle_charging == 1.0) {
      /* Outputs for Function Call SubSystem: '<S8>/CdegradeCalc' */

      /* Transition: '<S10>:17' */
      /* Transition: '<S10>:21' */
      /* Event: '<S10>:34' */
      SOC_CdegradeCalc(localB->Subsystem.OCVSOCLookup, DataStoreRead2,
                       DataStoreRead1, DataStoreRead3,
                       rty_capacity_degrade_factor, &localDW->CdegradeCalc);

      /* End of Outputs for SubSystem: '<S8>/CdegradeCalc' */

      /* Transition: '<S10>:19' */
    } else {
      /* Transition: '<S10>:18' */
    }

    /* Transition: '<S10>:20' */
    if (*rtu_chg_c) {
      /* Outputs for Function Call SubSystem: '<S8>/saveChgInitSoc' */
      /* DataStoreWrite: '<S13>/Data Store Write' */
      /* Transition: '<S10>:9' */
      /* Transition: '<S10>:11' */
      /* Event: '<S10>:35' */
      memcpy(&rtd_charging_initial_soc[0], &localB->Subsystem.OCVSOCLookup[0],
             40U * sizeof(FREAL));

      /* End of Outputs for SubSystem: '<S8>/saveChgInitSoc' */
      /* Transition: '<S10>:22' */
    } else {
      /* Transition: '<S10>:12' */
    }

    /* Outputs for Function Call SubSystem: '<S8>/lastCycleUpdate' */

    /* Transition: '<S10>:25' */
    /* Event: '<S10>:36' */
    SOC_lastCycleUpdate(rtu_chg_c, rtd_last_cycle_charging);

    /* End of Outputs for SubSystem: '<S8>/lastCycleUpdate' */
  }

  /* End of Chart: '<S8>/Chart' */
}

/* Initial conditions for function-call system: '<S1>/CC_counting' */
void SOC_CC_counting_Init(rtDW_CC_counting_SOC *localDW)
{
  /* InitializeConditions for DiscreteIntegrator: '<S3>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_IC_LOADI = 1U;
  localDW->DiscreteTimeIntegrator_PrevRese = 2;
}

/* Output and update for function-call system: '<S1>/CC_counting' */
void SOC_CC_counting(const FREAL *rtu_pack_current, const FREAL
                     rtu_soh_C_factor[40], const FREAL rtu_cell_voltages[40],
                     const U8 rtu_cb_cmds[40], const FREAL
                     rtu_integration_initial_soc[40], FREAL
                     rtu_integration_reset, FREAL rty_soc_cells_pct[40], FREAL
                     *rty_cc_integration_reset, rtDW_CC_counting_SOC *localDW)
{
  FREAL rtb_mul1[40];
  S32 i;
  FREAL DiscreteTimeIntegrator;

  /* Product: '<S3>/mul1' incorporates:
   *  Constant: '<S3>/Constant'
   *  Constant: '<S3>/Constant4'
   *  Constant: '<S3>/Constant5'
   *  Constant: '<S3>/Constant7'
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   *  Product: '<S3>/Divide'
   *  Product: '<S3>/Divide1'
   *  Product: '<S3>/Divide2'
   *  Product: '<S3>/Divide3'
   *  Product: '<S3>/Divide4'
   *  Product: '<S3>/mul'
   *  Sum: '<S3>/Sum'
   */
  for (i = 0; i < 40; i++) {
    rtb_mul1[i] = (*rtu_pack_current - rtu_cell_voltages[i] * (FREAL)
                   rtu_cb_cmds[i] / 1.1) / (8.0 * rtu_soh_C_factor[i]) / 3600.0 *
      0.1;
  }

  /* End of Product: '<S3>/mul1' */

  /* DiscreteIntegrator: '<S3>/Discrete-Time Integrator' */
  if (localDW->DiscreteTimeIntegrator_IC_LOADI != 0) {
    memcpy(&localDW->DiscreteTimeIntegrator_DSTATE[0],
           &rtu_integration_initial_soc[0], 40U * sizeof(FREAL));
  }

  /* Constant: '<S3>/Constant2' */
  *rty_cc_integration_reset = 0.0;

  /* Update for DiscreteIntegrator: '<S3>/Discrete-Time Integrator' */
  localDW->DiscreteTimeIntegrator_IC_LOADI = 0U;
  for (i = 0; i < 40; i++) {
    /* DiscreteIntegrator: '<S3>/Discrete-Time Integrator' */
    if ((rtu_integration_reset > 0.0) &&
        (localDW->DiscreteTimeIntegrator_PrevRese <= 0)) {
      localDW->DiscreteTimeIntegrator_DSTATE[i] = rtu_integration_initial_soc[i];
    }

    DiscreteTimeIntegrator = 0.5 * rtb_mul1[i] +
      localDW->DiscreteTimeIntegrator_DSTATE[i];

    /* Product: '<S3>/Product' incorporates:
     *  Constant: '<S3>/Constant1'
     */
    rty_soc_cells_pct[i] = DiscreteTimeIntegrator * 100.0;

    /* Update for DiscreteIntegrator: '<S3>/Discrete-Time Integrator' */
    localDW->DiscreteTimeIntegrator_DSTATE[i] = 0.5 * rtb_mul1[i] +
      DiscreteTimeIntegrator;
  }

  /* Update for DiscreteIntegrator: '<S3>/Discrete-Time Integrator' */
  if (rtu_integration_reset > 0.0) {
    localDW->DiscreteTimeIntegrator_PrevRese = 1;
  } else if (rtu_integration_reset < 0.0) {
    localDW->DiscreteTimeIntegrator_PrevRese = -1;
  } else if (rtu_integration_reset == 0.0) {
    localDW->DiscreteTimeIntegrator_PrevRese = 0;
  } else {
    localDW->DiscreteTimeIntegrator_PrevRese = 2;
  }
}

/* Initial conditions for referenced model: 'SOC' */
void SOC_c_Init(rtDW_SOC *localDW)
{
  /* InitializeConditions for Atomic SubSystem: '<Root>/soc' */
  /* InitializeConditions for Delay: '<S1>/Delay' */
  memcpy(&localDW->Delay_DSTATE[0], (&(SOCv_InitalSOC[0])), 40U * sizeof(FREAL));

  /* InitializeConditions for Chart: '<S1>/Chart' incorporates:
   *  InitializeConditions for SubSystem: '<S1>/key_on'
   */
  SOC_key_on_Init(&localDW->key_on);

  /* InitializeConditions for Chart: '<S1>/Chart' incorporates:
   *  InitializeConditions for SubSystem: '<S1>/CC_counting'
   */
  SOC_CC_counting_Init(&localDW->CC_counting);

  /* End of InitializeConditions for SubSystem: '<Root>/soc' */
}

/* Start for referenced model: 'SOC' */
void SOC_Start(FREAL rty_soc_C_factor[40], rtDW_SOC *localDW)
{
  S32 i;

  /* Start for Atomic SubSystem: '<Root>/soc' */
  /* Start for Chart: '<S1>/Chart' incorporates:
   *  Start for SubSystem: '<S1>/key_on'
   */
  SOC_key_on_Start(rty_soc_C_factor);
  for (i = 0; i < 40; i++) {
    /* Start for DataStoreMemory: '<S1>/Data Store Memory' */
    localDW->CCounting_soc_store[i] = SOCv_InitalSOC[i];

    /* Start for DataStoreMemory: '<S1>/Data Store Memory1' */
    localDW->charging_initial_soc[i] = SOCv_InitalSOC[i];

    /* Start for DataStoreMemory: '<S1>/Data Store Memory3' */
    localDW->memStore_Cfactors[i] = SOCv_factoryInitSohC[i];

    /* VirtualOutportStart for Outport: '<Root>/soc_C_factor' */
    rty_soc_C_factor[i] = 1.0;
  }

  /* End of Start for SubSystem: '<Root>/soc' */
}

/* Output and update for referenced model: 'SOC' */
void SOC(const FREAL *rtu_vitm_pack_current, const FREAL rtu_vitm_cell_voltages
         [40], const U8 *rtu_cc_main_contactor, const U8 *rtu_cc_chg_contactor,
         const U8 *rtu_cc_pre_chg_contactor, const FREAL rtu_soh_C_factors[40],
         const U8 *rtu_bsc_chg_cc_cmd, const U8 rtu_cb_cmds[40], FREAL
         rty_soc_cells_pct[40], FREAL *rty_soc_pack_customer, FREAL
         *rty_soc_cells_max, FREAL *rty_soc_cells_min, FREAL
         *rty_soc_pack_actual, U8 *rty_soc_rate_high, FREAL rty_soc_C_factor[40],
         rtB_SOC *localB, rtDW_SOC *localDW)
{
  U8 rtb_LogicalOperator;
  FREAL rtb_Uk1;
  FREAL Delay[40];
  S32 i;
  FREAL u1;

  /* Outputs for Atomic SubSystem: '<Root>/soc' */
  /* Logic: '<S1>/Logical Operator' */
  rtb_LogicalOperator = ((*rtu_cc_main_contactor) || (*rtu_cc_chg_contactor));

  /* Delay: '<S1>/Delay' */
  memcpy(&Delay[0], &localDW->Delay_DSTATE[0], 40U * sizeof(FREAL));

  /* Chart: '<S1>/Chart' incorporates:
   *  Delay: '<S1>/Delay1'
   */
  /* Gateway: soc/Chart */
  /* During: soc/Chart */
  if (localDW->bitsForTID0.is_active_c3_SOC == 0U) {
    /* Entry: soc/Chart */
    localDW->bitsForTID0.is_active_c3_SOC = 1U;

    /* Entry Internal: soc/Chart */
    /* Transition: '<S4>:8' */
    localDW->bitsForTID0.is_c3_SOC = SOC_IN_init;

    /* Outputs for Function Call SubSystem: '<S1>/Init' */

    /* Entry Internal 'init': '<S4>:1' */
    /* Transition: '<S4>:44' */
    /* Transition: '<S4>:42' */
    /* Event: '<S4>:2' */
    SOC_Init(rtu_vitm_cell_voltages, rty_soc_cells_pct, &localB->Merge1);

    /* End of Outputs for SubSystem: '<S1>/Init' */
  } else {
    switch (localDW->bitsForTID0.is_c3_SOC) {
     case SOC_IN_coulomb_counting:
      /* During 'coulomb_counting': '<S4>:4' */
      if ((!rtb_LogicalOperator) && (!*rtu_cc_pre_chg_contactor)) {
        /* Transition: '<S4>:30' */
        localDW->bitsForTID0.is_c3_SOC = SOC_IN_dataStore;

        /* Outputs for Function Call SubSystem: '<S1>/dataStore' */
        /* DataStoreWrite: '<S7>/Data Store Write' */
        /* Entry Internal 'dataStore': '<S4>:21' */
        /* Transition: '<S4>:78' */
        /* Transition: '<S4>:76' */
        /* Event: '<S4>:79' */
        memcpy(&localDW->memStore_Cfactors[0], &rtu_soh_C_factors[0], 40U *
               sizeof(FREAL));

        /* End of Outputs for SubSystem: '<S1>/dataStore' */
      } else {
        /* Outputs for Function Call SubSystem: '<S1>/CC_counting' */

        /* Transition: '<S4>:50' */
        /* Transition: '<S4>:49' */
        /* Event: '<S4>:3' */
        SOC_CC_counting(rtu_vitm_pack_current, rtu_soh_C_factors,
                        rtu_vitm_cell_voltages, rtu_cb_cmds, Delay,
                        localB->Merge1, rty_soc_cells_pct, &localB->Merge1,
                        &localDW->CC_counting);

        /* End of Outputs for SubSystem: '<S1>/CC_counting' */
      }
      break;

     case SOC_IN_dataStore:
      /* During 'dataStore': '<S4>:21' */
      /* Transition: '<S4>:81' */
      localDW->bitsForTID0.is_c3_SOC = SOC_IN_end;
      break;

     case SOC_IN_end:
      /* During 'end': '<S4>:80' */
      if ((*rtu_cc_pre_chg_contactor) || rtb_LogicalOperator) {
        /* Transition: '<S4>:55' */
        localDW->bitsForTID0.is_c3_SOC = SOC_IN_key_ON;

        /* Outputs for Function Call SubSystem: '<S1>/key_on' */

        /* Entry Internal 'key_ON': '<S4>:52' */
        /* Transition: '<S4>:60' */
        /* Transition: '<S4>:59' */
        /* Event: '<S4>:61' */
        SOC_key_on(rtu_vitm_cell_voltages, rtu_bsc_chg_cc_cmd, rty_soc_cells_pct,
                   &localB->Merge1, rty_soc_C_factor, &localB->key_on,
                   &localDW->key_on, localDW->CCounting_soc_store,
                   localDW->charging_initial_soc, &localDW->last_cycle_charging,
                   localDW->memStore_Cfactors);

        /* End of Outputs for SubSystem: '<S1>/key_on' */
      }
      break;

     case SOC_IN_init:
      /* During 'init': '<S4>:1' */
      if ((*rtu_cc_pre_chg_contactor) || rtb_LogicalOperator) {
        /* Transition: '<S4>:54' */
        localDW->bitsForTID0.is_c3_SOC = SOC_IN_key_ON;

        /* Outputs for Function Call SubSystem: '<S1>/key_on' */

        /* Entry Internal 'key_ON': '<S4>:52' */
        /* Transition: '<S4>:60' */
        /* Transition: '<S4>:59' */
        /* Event: '<S4>:61' */
        SOC_key_on(rtu_vitm_cell_voltages, rtu_bsc_chg_cc_cmd, rty_soc_cells_pct,
                   &localB->Merge1, rty_soc_C_factor, &localB->key_on,
                   &localDW->key_on, localDW->CCounting_soc_store,
                   localDW->charging_initial_soc, &localDW->last_cycle_charging,
                   localDW->memStore_Cfactors);

        /* End of Outputs for SubSystem: '<S1>/key_on' */
      } else {
        /* Outputs for Function Call SubSystem: '<S1>/Init' */

        /* Transition: '<S4>:44' */
        /* Transition: '<S4>:42' */
        /* Event: '<S4>:2' */
        SOC_Init(rtu_vitm_cell_voltages, rty_soc_cells_pct, &localB->Merge1);

        /* End of Outputs for SubSystem: '<S1>/Init' */
      }
      break;

     default:
      /* During 'key_ON': '<S4>:52' */
      if ((*rtu_cc_pre_chg_contactor) || rtb_LogicalOperator) {
        /* Transition: '<S4>:53' */
        localDW->bitsForTID0.is_c3_SOC = SOC_IN_coulomb_counting;

        /* Outputs for Function Call SubSystem: '<S1>/CC_counting' */

        /* Entry Internal 'coulomb_counting': '<S4>:4' */
        /* Transition: '<S4>:50' */
        /* Transition: '<S4>:49' */
        /* Event: '<S4>:3' */
        SOC_CC_counting(rtu_vitm_pack_current, rtu_soh_C_factors,
                        rtu_vitm_cell_voltages, rtu_cb_cmds, Delay,
                        localB->Merge1, rty_soc_cells_pct, &localB->Merge1,
                        &localDW->CC_counting);

        /* End of Outputs for SubSystem: '<S1>/CC_counting' */
      } else {
        /* Outputs for Function Call SubSystem: '<S1>/key_on' */

        /* Transition: '<S4>:60' */
        /* Transition: '<S4>:59' */
        /* Event: '<S4>:61' */
        SOC_key_on(rtu_vitm_cell_voltages, rtu_bsc_chg_cc_cmd, rty_soc_cells_pct,
                   &localB->Merge1, rty_soc_C_factor, &localB->key_on,
                   &localDW->key_on, localDW->CCounting_soc_store,
                   localDW->charging_initial_soc, &localDW->last_cycle_charging,
                   localDW->memStore_Cfactors);

        /* End of Outputs for SubSystem: '<S1>/key_on' */
      }
      break;
    }
  }

  /* End of Chart: '<S1>/Chart' */

  /* DataStoreWrite: '<S1>/Data Store Write' */
  memcpy(&localDW->CCounting_soc_store[0], &rty_soc_cells_pct[0], 40U * sizeof
         (FREAL));

  /* Sum: '<S1>/Sum of Elements' */
  rtb_Uk1 = rty_soc_cells_pct[0];
  for (i = 0; i < 39; i++) {
    rtb_Uk1 += rty_soc_cells_pct[i + 1];
  }

  /* End of Sum: '<S1>/Sum of Elements' */

  /* Product: '<S1>/Divide1' incorporates:
   *  Constant: '<S1>/Constant3'
   */
  *rty_soc_pack_actual = rtb_Uk1 / 40.0;

  /* RelationalOperator: '<S2>/Compare' incorporates:
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S2>/Constant'
   *  Product: '<S1>/Divide2'
   *  Sum: '<S5>/Diff'
   *  UnitDelay: '<S5>/UD'
   *
   * Block description for '<S5>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S5>/UD':
   *
   *  Store in Global RAM
   */
  *rty_soc_rate_high = ((*rty_soc_pack_actual - localDW->UD_DSTATE) / 0.1 <=
                        -1.0);

  /* MinMax: '<S1>/MinMax' */
  rtb_Uk1 = rty_soc_cells_pct[0];
  for (i = 0; i < 39; i++) {
    u1 = rty_soc_cells_pct[i + 1];
    if (!((rtb_Uk1 >= u1) || rtIsNaN(u1))) {
      rtb_Uk1 = u1;
    }
  }

  *rty_soc_cells_max = rtb_Uk1;

  /* End of MinMax: '<S1>/MinMax' */

  /* MinMax: '<S1>/MinMax1' */
  rtb_Uk1 = rty_soc_cells_pct[0];
  for (i = 0; i < 39; i++) {
    u1 = rty_soc_cells_pct[i + 1];
    if (!((rtb_Uk1 <= u1) || rtIsNaN(u1))) {
      rtb_Uk1 = u1;
    }
  }

  *rty_soc_cells_min = rtb_Uk1;

  /* End of MinMax: '<S1>/MinMax1' */

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S1>/Constant6'
   *  RelationalOperator: '<S1>/RelationalOperator'
   */
  if (*rty_soc_cells_max < 80.0) {
    /* Switch: '<S1>/Switch1' incorporates:
     *  Constant: '<S1>/Constant4'
     *  Constant: '<S1>/Constant5'
     *  Lookup_n-D: '<S1>/Customer interpolation'
     *  RelationalOperator: '<S1>/RelationalOperator1'
     */
    if (*rty_soc_cells_min <= 20.0) {
      rtb_Uk1 = 0.0;
    } else {
      rtb_Uk1 = look1_binlx(*rty_soc_pack_actual,
                            rtCP_Customerinterpolation_bp01Data,
                            rtCP_Customerinterpolation_tableData, 1U);
    }

    /* End of Switch: '<S1>/Switch1' */
    *rty_soc_pack_customer = rtb_Uk1;
  } else {
    *rty_soc_pack_customer = 100.0;
  }

  /* End of Switch: '<S1>/Switch' */

  /* Update for Delay: '<S1>/Delay' incorporates:
   *  Gain: '<S1>/Gain'
   */
  for (i = 0; i < 40; i++) {
    localDW->Delay_DSTATE[i] = 0.01 * rty_soc_cells_pct[i];
  }

  /* End of Update for Delay: '<S1>/Delay' */

  /* Update for UnitDelay: '<S5>/UD'
   *
   * Block description for '<S5>/UD':
   *
   *  Store in Global RAM
   */
  localDW->UD_DSTATE = *rty_soc_pack_actual;

  /* End of Outputs for SubSystem: '<Root>/soc' */
}

/* Model initialize function */
void SOC_initialize(const char_T **rt_errorStatus, RT_MODEL_SOC *const SOC_M)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(FREAL));

  /* non-finite (run-time) assignments */
  SOC_ConstWithInitP.pooled1[0] = rtNaN;
  SOC_ConstWithInitP.pooled1[1] = rtNaN;
  SOC_ConstWithInitP.pooled1[2] = rtNaN;
  SOC_ConstWithInitP.pooled1[3] = rtNaN;
  SOC_ConstWithInitP.pooled1[4] = rtNaN;
  SOC_ConstWithInitP.pooled1[5] = rtNaN;
  SOC_ConstWithInitP.pooled1[6] = rtNaN;
  SOC_ConstWithInitP.pooled1[7] = rtNaN;
  SOC_ConstWithInitP.pooled1[8] = rtNaN;
  SOC_ConstWithInitP.pooled1[9] = rtNaN;
  SOC_ConstWithInitP.pooled1[10] = rtNaN;
  SOC_ConstWithInitP.pooled1[11] = rtNaN;
  SOC_ConstWithInitP.pooled1[12] = rtNaN;
  SOC_ConstWithInitP.pooled1[13] = rtNaN;
  SOC_ConstWithInitP.pooled1[14] = rtNaN;
  SOC_ConstWithInitP.pooled1[15] = rtNaN;
  SOC_ConstWithInitP.pooled1[16] = rtNaN;
  SOC_ConstWithInitP.pooled1[17] = rtNaN;
  SOC_ConstWithInitP.pooled1[18] = rtNaN;
  SOC_ConstWithInitP.pooled1[19] = rtNaN;
  SOC_ConstWithInitP.pooled1[20] = rtNaN;
  SOC_ConstWithInitP.pooled1[21] = rtNaN;
  SOC_ConstWithInitP.pooled1[22] = rtNaN;
  SOC_ConstWithInitP.pooled1[149] = rtNaN;
  SOC_ConstWithInitP.pooled1[150] = rtNaN;

  /* initialize error status */
  rtmSetErrorStatusPointer(SOC_M, rt_errorStatus);
}

/* end of file */
