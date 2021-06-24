/*
 *****************************************************************************
 *
 *  File:                     CB.h
 *  Description:              Real-Time Workshop code generated for Simulink
 *                            model CB.
 *
 *  Model name:               CB
 *  Model date:
 *  Model version:            1.33
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
#ifndef RTW_HEADER_CB_h_
#define RTW_HEADER_CB_h_
#ifndef CB_COMMON_INCLUDES_
# define CB_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* CB_COMMON_INCLUDES_ */

#include "CB_types.h"

/* Shared type includes */
#include "model_reference_types.h"

/* Includes for objects with custom storage classes. */
#include "global.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/********* Macros *********/

/********* Global structure definitions *********/

/* Real-time Model Data Structure */
struct tag_RTM_CB {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_CB rtm;
} rtMdlrefDWork_CB;

/********* Global variables and prototypes *********/

/* Model reference registration function */
extern void CB_initialize(const char_T **rt_errorStatus, RT_MODEL_CB *const CB_M);
extern void CB(const FREAL rtu_cell_soc[40], const U8 *rtu_batt_mode, U8
               rty_CB_cmd[40], U8 *rty_CB_status);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Constant' : Unused code path elimination
 * Block '<S1>/MinMax' : Unused code path elimination
 * Block '<S1>/RelationalOperator5' : Unused code path elimination
 * Block '<S1>/Subtract' : Unused code path elimination
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
 * '<Root>' : 'CB'
 * '<S1>'   : 'CB/Cell Balancing'
 */
#endif                                 /* RTW_HEADER_CB_h_ */

/* end of file */
