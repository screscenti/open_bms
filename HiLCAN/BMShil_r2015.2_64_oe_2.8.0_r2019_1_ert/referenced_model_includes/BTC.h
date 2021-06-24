/*
 *****************************************************************************
 *
 *  File:                     BTC.h
 *  Description:              Real-Time Workshop code generated for Simulink
 *                            model BTC.
 *
 *  Model name:               BTC
 *  Model date:
 *  Model version:            1.54
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
#ifndef RTW_HEADER_BTC_h_
#define RTW_HEADER_BTC_h_
#include <math.h>
#ifndef BTC_COMMON_INCLUDES_
# define BTC_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* BTC_COMMON_INCLUDES_ */

#include "BTC_types.h"

/* Shared type includes */
#include "model_reference_types.h"

/* Includes for objects with custom storage classes. */
#include "global.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/********* Macros *********/

/********* Global structure definitions *********/

/* Block states (auto storage) for model 'BTC' */
typedef struct {
  FREAL Delay_DSTATE;                  /* '<S3>/Delay' */
  FREAL DiscreteTimeIntegrator_DSTATE; /* '<S4>/Discrete-Time Integrator' */
  U8 Delay1_DSTATE[2];                 /* '<S3>/Delay1' */
} rtDW_BTC;

/* Real-time Model Data Structure */
struct tag_RTM_BTC {
  const char_T **errorStatus;
};

typedef struct {
  rtDW_BTC rtdw;
  RT_MODEL_BTC rtm;
} rtMdlrefDWork_BTC;

/********* Global variables and prototypes *********/

/* Model reference registration function */
extern void BTC_initialize(const char_T **rt_errorStatus, RT_MODEL_BTC *const
  BTC_M);
extern void BTC_Init(rtDW_BTC *localDW);
extern void BTC(const FREAL rtu_Cell_temperature[40], const FREAL rtu_Cell_SOC
                [40], const U8 *rtu_Charging_status, const FREAL
                *rtu_Ambient_temperature, const U8 *rtu_Discharging_status,
                const U8 *rtu_Coolant_inlet_temp_fault, const U8
                *rtu_Coolant_outlet_temp_fault, const U8
                *rtu_Cell_temp_high_fault, const U8 *rtu_Cell_temp_low_fault,
                FREAL *rty_coolant_flow_percentage, FREAL
                *rty_battery_target_temperature, FREAL
                *rty_battery_actual_temperature, U8 *rty_battery_reqest_status,
                U8 *rty_battery_thermal_condition, rtDW_BTC *localDW);

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
 * '<Root>' : 'BTC'
 * '<S1>'   : 'BTC/BTC'
 * '<S2>'   : 'BTC/BTC/Actual Battery Temperature Calculation'
 * '<S3>'   : 'BTC/BTC/Battery target temperature determination'
 * '<S4>'   : 'BTC/BTC/Discrete PI'
 */
#endif                                 /* RTW_HEADER_BTC_h_ */

/* end of file */
