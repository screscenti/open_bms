/*
 *****************************************************************************
 *
 *  File:                     BMO.h
 *  Description:              Real-Time Workshop code generated for Simulink
 *                            model BMO.
 *
 *  Model name:               BMO
 *  Model date:
 *  Model version:            1.59
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
#ifndef RTW_HEADER_BMO_h_
#define RTW_HEADER_BMO_h_
#ifndef BMO_COMMON_INCLUDES_
# define BMO_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* BMO_COMMON_INCLUDES_ */

#include "BMO_types.h"

/* Shared type includes */
#include "model_reference_types.h"

/********* Macros *********/

/********* Global structure definitions *********/

/* Block states (auto storage) for model 'BMO' */
typedef struct {
  struct {
    UINT is_c1_BMO:3;                  /* '<S1>/Chart' */
    UINT is_Power_Closed:2;            /* '<S1>/Chart' */
    UINT is_active_c1_BMO:1;           /* '<S1>/Chart' */
  } bitsForTID0;
} rtDW_BMO;

/* Real-time Model Data Structure */
struct tag_RTM_BMO {
  const char_T **errorStatus;
};

typedef struct {
  rtDW_BMO rtdw;
  RT_MODEL_BMO rtm;
} rtMdlrefDWork_BMO;

/********* Global variables and prototypes *********/

/* Model reference registration function */
extern void BMO_initialize(const char_T **rt_errorStatus, RT_MODEL_BMO *const
  BMO_M);
extern void BMO(const FREAL *rtu_vitm_pack_current, const U8 *rtu_key, const U8 *
                rtu_charger_button, const U8 *rtu_cc_pre_cmd, const U8
                *rtu_cc_main_cmd, const U8 *rtu_cc_chg_cmd, const U8
                *rtu_bsc_sleep_status, U8 *rty_bmo_mode, U8
                *rty_bmo_charging_status, U8 *rty_bmo_discharging_status,
                rtDW_BMO *localDW);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion2' : Eliminate redundant data type conversion
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
 * '<Root>' : 'BMO'
 * '<S1>'   : 'BMO/BMO'
 * '<S2>'   : 'BMO/BMO/Chart'
 * '<S3>'   : 'BMO/BMO/Compare To Constant'
 * '<S4>'   : 'BMO/BMO/Compare To Constant1'
 */
#endif                                 /* RTW_HEADER_BMO_h_ */

/* end of file */
