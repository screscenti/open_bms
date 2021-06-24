/*
 *****************************************************************************
 *
 *  File:                     CC.h
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
#ifndef RTW_HEADER_CC_h_
#define RTW_HEADER_CC_h_
#ifndef CC_COMMON_INCLUDES_
# define CC_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#endif                                 /* CC_COMMON_INCLUDES_ */

#include "CC_types.h"

/* Shared type includes */
#include "model_reference_types.h"
#include "rt_zcfcn.h"

/********* Macros *********/

/********* Global structure definitions *********/

/* Block states (auto storage) for model 'CC' */
typedef struct {
  FREAL ResettableDelay_DSTATE;        /* '<S1>/Resettable Delay' */
  U8 Delay2_DSTATE;                    /* '<S1>/Delay2' */
  U8 Delay1_DSTATE;                    /* '<S1>/Delay1' */
  U8 Delay_DSTATE;                     /* '<S1>/Delay' */
  U8 icLoad;                           /* '<S1>/Resettable Delay' */
} rtDW_CC;

/* Zero-crossing (trigger) state for model 'CC' */
typedef struct {
  ZCSigState ResettableDelay_Reset_ZCE;/* '<S1>/Resettable Delay' */
} rtZCE_CC;

/* Real-time Model Data Structure */
struct tag_RTM_CC {
  const char_T **errorStatus;
};

typedef struct {
  rtDW_CC rtdw;
  RT_MODEL_CC rtm;
  rtZCE_CC rtzce;
} rtMdlrefDWork_CC;

/********* Global variables and prototypes *********/

/* Model reference registration function */
extern void CC_initialize(const char_T **rt_errorStatus, RT_MODEL_CC *const CC_M,
  rtZCE_CC *localZCE);
extern void CC_Init(rtDW_CC *localDW);
extern void CC(const U8 *rtu_bsc_main_cc_cmd, const U8 *rtu_bsc_chg_cc_cmd,
               const FREAL *rtu_vitm_pack_voltage, const FREAL
               *rtu_vitm_veh_voltage, const FREAL *rtu_pre_chg_fault_reset, U8
               *rty_cc_neg_cmd, U8 *rty_cc_main_cmd, U8 *rty_cc_chg_cmd, U8
               *rty_cc_pre_cmd, U8 *rty_cc_precharge_fault, rtDW_CC *localDW,
               rtZCE_CC *localZCE);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion5' : Eliminate redundant data type conversion
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
 * '<Root>' : 'CC'
 * '<S1>'   : 'CC/CC'
 */
#endif                                 /* RTW_HEADER_CC_h_ */

/* end of file */
