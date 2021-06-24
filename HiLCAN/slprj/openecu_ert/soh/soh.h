/*
 *****************************************************************************
 *
 *  File:                     soh.h
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
#ifndef RTW_HEADER_soh_h_
#define RTW_HEADER_soh_h_
#include <math.h>
#include <string.h>
#ifndef soh_COMMON_INCLUDES_
# define soh_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#endif                                 /* soh_COMMON_INCLUDES_ */

#include "soh_types.h"

/* Shared type includes */
#include "model_reference_types.h"

/* Includes for objects with custom storage classes. */
#include "global.h"
#include "rt_zcfcn.h"
#include "look2_binlx.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/********* Macros *********/

/********* Global structure definitions *********/

/* Block signals for system '<S1>/deltaCalc' */
typedef struct {
  FREAL Subtract[40];                  /* '<S5>/Subtract' */
  FREAL Subtract1[40];                 /* '<S5>/Subtract1' */
  FREAL uDLookupTable1[40];            /* '<S5>/2-D Lookup Table1' */
} rtB_deltaCalc_soh;

/* Block states (auto storage) for system '<S1>/deltaCalc' */
typedef struct {
  FREAL Delay2_DSTATE[40];             /* '<S5>/Delay2' */
  FREAL Delay3_DSTATE[40];             /* '<S5>/Delay3' */
} rtDW_deltaCalc_soh;

/* Block states (auto storage) for system '<S1>/key_on' */
typedef struct {
  FREAL Delay1_DSTATE[40];             /* '<S7>/Delay1' */
  FREAL Delay3_DSTATE[40];             /* '<S7>/Delay3' */
} rtDW_key_on_soh;

/* Block states (auto storage) for system '<S1>/SOH' */
typedef struct {
  FREAL Delay3_DSTATE[40];             /* '<S8>/Delay3' */
  U8 icLoad;                           /* '<S8>/Delay3' */
} rtDW_SOH_soh;

/* Zero-crossing (trigger) state for system '<S1>/SOH' */
typedef struct {
  ZCSigState Delay3_Reset_ZCE;         /* '<S8>/Delay3' */
} rtZCE_SOH_soh;

/* Block signals for model 'soh' */
typedef struct {
  FREAL init_keyon_reset;              /* '<S1>/Chart' */
  FREAL DataStoreRead1[40];            /* '<S6>/Data Store Read1' */
  rtB_deltaCalc_soh deltaCalc;         /* '<S1>/deltaCalc' */
} rtB_soh;

/* Block states (auto storage) for model 'soh' */
typedef struct {
  FREAL memStore_Rfactors[40];         /* '<S1>/Data Store Memory1' */
  struct {
    UINT is_c3_soh:3;                  /* '<S1>/Chart' */
    UINT is_active_c3_soh:1;           /* '<S1>/Chart' */
  } bitsForTID0;

  rtDW_SOH_soh SOH;                    /* '<S1>/SOH' */
  rtDW_key_on_soh key_on;              /* '<S1>/key_on' */
  rtDW_deltaCalc_soh deltaCalc;        /* '<S1>/deltaCalc' */
} rtDW_soh;

/* Zero-crossing (trigger) state for model 'soh' */
typedef struct {
  rtZCE_SOH_soh SOH;                   /* '<S1>/SOH' */
} rtZCE_soh;

/* Real-time Model Data Structure */
struct tag_RTM_soh {
  const char_T **errorStatus;
};

typedef struct {
  rtB_soh rtb;
  rtDW_soh rtdw;
  RT_MODEL_soh rtm;
  rtZCE_soh rtzce;
} rtMdlrefDWork_soh;

/********* Global variables and prototypes *********/

/* Model reference registration function */
extern void soh_initialize(const char_T **rt_errorStatus, RT_MODEL_soh *const
  soh_M, rtZCE_soh *localZCE);
extern void soh_deltaCalc(const FREAL *rtu_PackCurrent, const FREAL
  rtu_CellVoltages[40], const FREAL rtu_CellSOC[40], const FREAL rtu_CellTemp[40],
  const U8 rtu_cb_cmds[40], rtB_deltaCalc_soh *localB, rtDW_deltaCalc_soh
  *localDW);
extern void soh_key_on_Init(rtDW_key_on_soh *localDW);
extern void soh_key_on(const FREAL rtu_initR_factors[40], const FREAL
  rtu_init_Cfactors[40], FREAL *rty_soh_customer_index, rtDW_key_on_soh *localDW);
extern void soh_SOH_Start(rtDW_SOH_soh *localDW);
extern void soh_SOH(const FREAL rtu_deltaI[40], const FREAL rtu_deltaV[40],
                    const FREAL rtu_nominalR[40], FREAL rtu_init_keyon_reset,
                    const FREAL rtu_init_sohr_factors[40], const FREAL
                    rtu_soc_C_factors[40], FREAL *rty_soh_R_index, FREAL
                    rty_soh_R_factor[40], FREAL *rty_soh_C_index, FREAL
                    rty_soh_C_factors[40], rtDW_SOH_soh *localDW, rtZCE_SOH_soh *
                    localZCE);
extern void soh_Init(rtDW_soh *localDW);
extern void soh_Start(FREAL rty_soh_C_factors[40], rtDW_soh *localDW);
extern void soh(const FREAL *rtu_vitm_pack_current, const FREAL
                rtu_vitm_cell_voltages[40], const FREAL rtu_soc_cells_pct[40],
                const FREAL rtu_vitm_cells_temp[40], const FREAL
                rtu_soc_C_factors[40], const U8 *rtu_cc_main_contactor, const U8
                *rtu_cc_charger_contactor, const U8 *rtu_cc_prechg_contactor,
                const U8 rtu_cb_cmds[40], FREAL *rty_soh_R_index, FREAL
                rty_soh_R_factors[40], FREAL *rty_soh_C_index, FREAL
                rty_soh_C_factors[40], FREAL *rty_soh_customer_index, rtB_soh
                *localB, rtDW_soh *localDW, rtZCE_soh *localZCE);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S10>/Data Type Duplicate' : Unused code path elimination
 * Block '<S10>/Data Type Propagation' : Unused code path elimination
 * Block '<S9>/Abs2' : Unused code path elimination
 * Block '<S9>/Abs3' : Unused code path elimination
 * Block '<S9>/Constant5' : Unused code path elimination
 * Block '<S9>/Constant6' : Unused code path elimination
 * Block '<S9>/Logical Operator2' : Unused code path elimination
 * Block '<S9>/Relational Operator4' : Unused code path elimination
 * Block '<S9>/Relational Operator6' : Unused code path elimination
 * Block '<S5>/2-D Lookup Table' : Unused code path elimination
 * Block '<S5>/Delay4' : Unused code path elimination
 * Block '<S5>/Switch1' : Unused code path elimination
 * Block '<S5>/Switch2' : Unused code path elimination
 * Block '<S5>/Switch3' : Unused code path elimination
 */

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
 * '<Root>' : 'soh'
 * '<S1>'   : 'soh/soh'
 * '<S2>'   : 'soh/soh/Chart'
 * '<S3>'   : 'soh/soh/DataStore'
 * '<S4>'   : 'soh/soh/SOH'
 * '<S5>'   : 'soh/soh/deltaCalc'
 * '<S6>'   : 'soh/soh/init'
 * '<S7>'   : 'soh/soh/key_on'
 * '<S8>'   : 'soh/soh/SOH/SOHRcalc'
 * '<S9>'   : 'soh/soh/SOH/SOHRtrigger'
 * '<S10>'  : 'soh/soh/SOH/SOHRcalc/Saturation Dynamic'
 */
#endif                                 /* RTW_HEADER_soh_h_ */

/* end of file */
