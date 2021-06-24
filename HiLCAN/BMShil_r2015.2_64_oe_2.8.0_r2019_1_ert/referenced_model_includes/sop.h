/*
 *****************************************************************************
 *
 *  File:                     sop.h
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
#ifndef RTW_HEADER_sop_h_
#define RTW_HEADER_sop_h_
#ifndef sop_COMMON_INCLUDES_
# define sop_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* sop_COMMON_INCLUDES_ */

#include "sop_types.h"

/* Shared type includes */
#include "model_reference_types.h"

/* Includes for objects with custom storage classes. */
#include "global.h"
#include "look1_binlx.h"
#include "look2_binlx.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/********* Macros *********/

/********* Global structure definitions *********/

/* Real-time Model Data Structure */
struct tag_RTM_sop {
  const char_T **errorStatus;
};

typedef struct {
  RT_MODEL_sop rtm;
} rtMdlrefDWork_sop;

/********* Global variables and prototypes *********/

/* Model reference registration function */
extern void sop_initialize(const char_T **rt_errorStatus, RT_MODEL_sop *const
  sop_M);
extern void sop(const FREAL rtu_cell_temp[40], const FREAL rtu_cell_SOC[40],
                const U8 *rtu_charging_status, const U8 *rtu_discharging_status,
                const U8 *rtu_cell_temp_high_Fault, const U8
                *rtu_pack_current_fault, const U8 *rtu_pack_voltage_fault, const
                U8 *rtu_low_fault, const FREAL rtu_internal_resis_scaling_fact
                [40], FREAL *rty_discharge_power_limit, FREAL
                *rty_discharge_current_limit, FREAL *rty_charge_power_limit,
                FREAL *rty_charge_current_limit);

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
 * '<Root>' : 'sop'
 * '<S1>'   : 'sop/SOP'
 */
#endif                                 /* RTW_HEADER_sop_h_ */

/* end of file */
