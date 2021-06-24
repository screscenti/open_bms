/*
 *****************************************************************************
 *
 *  File:                     SOC.h
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
#ifndef RTW_HEADER_SOC_h_
#define RTW_HEADER_SOC_h_
#include <math.h>
#include <string.h>
#ifndef SOC_COMMON_INCLUDES_
# define SOC_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* SOC_COMMON_INCLUDES_ */

#include "SOC_types.h"

/* Shared type includes */
#include "model_reference_types.h"

/* Includes for objects with custom storage classes. */
#include "global.h"
#include "intrp1d_l.h"
#include "look1_binlx.h"
#include "plook_evenc.h"
#include "rt_nonfinite.h"
#include "rtGetNaN.h"
#include "rtGetInf.h"

/********* Macros *********/

/********* Global structure definitions *********/

/* Block signals for system '<S8>/Subsystem' */
typedef struct {
  FREAL OCVSOCLookup[40];              /* '<S11>/OCV - SOC Lookup' */
} rtB_Subsystem_SOC;

/* Block states (auto storage) for system '<S8>/CdegradeCalc' */
typedef struct {
  FREAL Delay_DSTATE[40];              /* '<S9>/Delay' */
  U8 icLoad;                           /* '<S9>/Delay' */
} rtDW_CdegradeCalc_SOC;

/* Block signals for system '<S1>/key_on' */
typedef struct {
  rtB_Subsystem_SOC Subsystem;         /* '<S8>/Subsystem' */
} rtB_key_on_SOC;

/* Block states (auto storage) for system '<S1>/key_on' */
typedef struct {
  struct {
    UINT is_active_c1_SOC:1;           /* '<S8>/Chart' */
    UINT is_c1_SOC:1;                  /* '<S8>/Chart' */
  } bitsForTID0;

  rtDW_CdegradeCalc_SOC CdegradeCalc;  /* '<S8>/CdegradeCalc' */
} rtDW_key_on_SOC;

/* Block states (auto storage) for system '<S1>/CC_counting' */
typedef struct {
  FREAL DiscreteTimeIntegrator_DSTATE[40];/* '<S3>/Discrete-Time Integrator' */
  S8 DiscreteTimeIntegrator_PrevRese;  /* '<S3>/Discrete-Time Integrator' */
  U8 DiscreteTimeIntegrator_IC_LOADI;  /* '<S3>/Discrete-Time Integrator' */
} rtDW_CC_counting_SOC;

/* Block signals for model 'SOC' */
typedef struct {
  FREAL Merge1;                        /* '<S1>/Merge1' */
  rtB_key_on_SOC key_on;               /* '<S1>/key_on' */
} rtB_SOC;

/* Block states (auto storage) for model 'SOC' */
typedef struct {
  FREAL Delay_DSTATE[40];              /* '<S1>/Delay' */
  FREAL CCounting_soc_store[40];       /* '<S1>/Data Store Memory' */
  FREAL charging_initial_soc[40];      /* '<S1>/Data Store Memory1' */
  FREAL memStore_Cfactors[40];         /* '<S1>/Data Store Memory3' */
  FREAL UD_DSTATE;                     /* '<S5>/UD' */
  FREAL last_cycle_charging;           /* '<S1>/Data Store Memory2' */
  struct {
    UINT is_c3_SOC:3;                  /* '<S1>/Chart' */
    UINT is_active_c3_SOC:1;           /* '<S1>/Chart' */
  } bitsForTID0;

  rtDW_CC_counting_SOC CC_counting;    /* '<S1>/CC_counting' */
  rtDW_key_on_SOC key_on;              /* '<S1>/key_on' */
} rtDW_SOC;

/* Real-time Model Data Structure */
struct tag_RTM_SOC {
  const char_T **errorStatus;
};

typedef struct {
  rtB_SOC rtb;
  rtDW_SOC rtdw;
  RT_MODEL_SOC rtm;
} rtMdlrefDWork_SOC;

/********* Global variables and prototypes *********/

/* Model reference registration function */
extern void SOC_initialize(const char_T **rt_errorStatus, RT_MODEL_SOC *const
  SOC_M);
extern void SOC_Init(const FREAL rtu_cell_voltages[40], FREAL rty_soc_cells_pct
                     [40], FREAL *rty_cc_integration_reset);
extern void SOC_Subsystem(const FREAL rtu_cell_voltages[40], FREAL
  rty_soc_cells_pct[40], FREAL *rty_cc_integration_reset, rtB_Subsystem_SOC
  *localB, FREAL rtd_CCounting_soc_store[40]);
extern void SOC_CdegradeCalc_Init(rtDW_CdegradeCalc_SOC *localDW);
extern void SOC_CdegradeCalc_Start(FREAL rty_Out1[40]);
extern void SOC_CdegradeCalc(const FREAL rtu_keyON_ocvsoc[40], const FREAL
  rtu_lastChgInitsoc[40], const FREAL rtu_lastChgCCsoc[40], const FREAL
  rtu_soh_C_factors[40], FREAL rty_Out1[40], rtDW_CdegradeCalc_SOC *localDW);
extern void SOC_lastCycleUpdate(const U8 *rtu_chargingC, FREAL
  *rtd_last_cycle_charging);
extern void SOC_key_on_Init(rtDW_key_on_SOC *localDW);
extern void SOC_key_on_Start(FREAL rty_capacity_degrade_factor[40]);
extern void SOC_key_on(const FREAL rtu_cell_voltages[40], const U8 *rtu_chg_c,
  FREAL rty_soc_cells_pct[40], FREAL *rty_cc_integration_reset, FREAL
  rty_capacity_degrade_factor[40], rtB_key_on_SOC *localB, rtDW_key_on_SOC
  *localDW, FREAL rtd_CCounting_soc_store[40], FREAL rtd_charging_initial_soc[40],
  FREAL *rtd_last_cycle_charging, FREAL rtd_memStore_Cfactors[40]);
extern void SOC_CC_counting_Init(rtDW_CC_counting_SOC *localDW);
extern void SOC_CC_counting(const FREAL *rtu_pack_current, const FREAL
  rtu_soh_C_factor[40], const FREAL rtu_cell_voltages[40], const U8 rtu_cb_cmds
  [40], const FREAL rtu_integration_initial_soc[40], FREAL rtu_integration_reset,
  FREAL rty_soc_cells_pct[40], FREAL *rty_cc_integration_reset,
  rtDW_CC_counting_SOC *localDW);
extern void SOC_c_Init(rtDW_SOC *localDW);
extern void SOC_Start(FREAL rty_soc_C_factor[40], rtDW_SOC *localDW);
extern void SOC(const FREAL *rtu_vitm_pack_current, const FREAL
                rtu_vitm_cell_voltages[40], const U8 *rtu_cc_main_contactor,
                const U8 *rtu_cc_chg_contactor, const U8
                *rtu_cc_pre_chg_contactor, const FREAL rtu_soh_C_factors[40],
                const U8 *rtu_bsc_chg_cc_cmd, const U8 rtu_cb_cmds[40], FREAL
                rty_soc_cells_pct[40], FREAL *rty_soc_pack_customer, FREAL
                *rty_soc_cells_max, FREAL *rty_soc_cells_min, FREAL
                *rty_soc_pack_actual, U8 *rty_soc_rate_high, FREAL
                rty_soc_C_factor[40], rtB_SOC *localB, rtDW_SOC *localDW);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'SOC'
 * '<S1>'   : 'SOC/soc'
 * '<S2>'   : 'SOC/soc/1% per second only while discharging'
 * '<S3>'   : 'SOC/soc/CC_counting'
 * '<S4>'   : 'SOC/soc/Chart'
 * '<S5>'   : 'SOC/soc/Difference'
 * '<S6>'   : 'SOC/soc/Init'
 * '<S7>'   : 'SOC/soc/dataStore'
 * '<S8>'   : 'SOC/soc/key_on'
 * '<S9>'   : 'SOC/soc/key_on/CdegradeCalc'
 * '<S10>'  : 'SOC/soc/key_on/Chart'
 * '<S11>'  : 'SOC/soc/key_on/Subsystem'
 * '<S12>'  : 'SOC/soc/key_on/lastCycleUpdate'
 * '<S13>'  : 'SOC/soc/key_on/saveChgInitSoc'
 */
#endif                                 /* RTW_HEADER_SOC_h_ */

/* end of file */
