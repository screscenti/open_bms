/*
 *****************************************************************************
 *
 *  File:                     VITM.h
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
#ifndef RTW_HEADER_VITM_h_
#define RTW_HEADER_VITM_h_
#include <math.h>
#ifndef VITM_COMMON_INCLUDES_
# define VITM_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#endif                                 /* VITM_COMMON_INCLUDES_ */

#include "VITM_types.h"

/* Shared type includes */
#include "model_reference_types.h"

/* Includes for objects with custom storage classes. */
#include "global.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/********* Macros *********/

/********* Global structure definitions *********/

/* Block states (auto storage) for model 'VITM' */
typedef struct {
  FREAL Delay1_DSTATE[40];             /* '<S10>/Delay1' */
  FREAL ResettableDelay_DSTATE;        /* '<S5>/Resettable Delay' */
  FREAL ResettableDelay1_DSTATE;       /* '<S5>/Resettable Delay1' */
  FREAL Delay_DSTATE[40];              /* '<S2>/Delay' */
  FREAL Delay_DSTATE_a;                /* '<S3>/Delay' */
  FREAL ResettableDelay_DSTATE_a;      /* '<S6>/Resettable Delay' */
  FREAL ResettableDelay1_DSTATE_m;     /* '<S6>/Resettable Delay1' */
  FREAL Delay_DSTATE_b;                /* '<S15>/Delay' */
  FREAL Delay1_DSTATE_i[40];           /* '<S15>/Delay1' */
  FREAL ResettableDelay2_DSTATE;       /* '<S15>/Resettable Delay2' */
  FREAL Delay1_DSTATE_ia;              /* '<S9>/Delay1' */
  FREAL ResettableDelay3_DSTATE;       /* '<S14>/Resettable Delay3' */
  FREAL Delay1_DSTATE_k;               /* '<S11>/Delay1' */
  FREAL ResettableDelay3_DSTATE_i;     /* '<S7>/Resettable Delay3' */
  FREAL Delay1_DSTATE_e;               /* '<S12>/Delay1' */
  FREAL ResettableDelay3_DSTATE_c;     /* '<S8>/Resettable Delay3' */
  FREAL ResettableDelay3_DSTATE_n;     /* '<S13>/Resettable Delay3' */
  FREAL Delay_DSTATE_l;                /* '<S4>/Delay' */
} rtDW_VITM;

/* Zero-crossing (trigger) state for model 'VITM' */
typedef struct {
  ZCSigState ResettableDelay_Reset_ZCE;/* '<S5>/Resettable Delay' */
  ZCSigState ResettableDelay1_Reset_ZCE;/* '<S5>/Resettable Delay1' */
  ZCSigState ResettableDelay_Reset_ZCE_a;/* '<S6>/Resettable Delay' */
  ZCSigState ResettableDelay1_Reset_ZCE_n;/* '<S6>/Resettable Delay1' */
  ZCSigState ResettableDelay2_Reset_ZCE;/* '<S15>/Resettable Delay2' */
  ZCSigState ResettableDelay3_Reset_ZCE;/* '<S14>/Resettable Delay3' */
  ZCSigState ResettableDelay3_Reset_ZCE_g;/* '<S7>/Resettable Delay3' */
  ZCSigState ResettableDelay3_Reset_ZCE_gq;/* '<S8>/Resettable Delay3' */
  ZCSigState ResettableDelay3_Reset_ZCE_f;/* '<S13>/Resettable Delay3' */
} rtZCE_VITM;

/* Real-time Model Data Structure */
struct tag_RTM_VITM {
  const char_T **errorStatus;
};

typedef struct {
  rtDW_VITM rtdw;
  RT_MODEL_VITM rtm;
  rtZCE_VITM rtzce;
} rtMdlrefDWork_VITM;

/********* Global variables and prototypes *********/

/* Model reference registration function */
extern void VITM_initialize(const char_T **rt_errorStatus, RT_MODEL_VITM *const
  VITM_M, rtZCE_VITM *localZCE);
extern void VITM(const FREAL rtu_CellVoltages[40], const FREAL *rtu_PackVoltage,
                 const FREAL *rtu_VehSideVoltage, const FREAL *rtu_PackCurrent,
                 const FREAL *rtu_CoolantInletT, const FREAL *rtu_CoolantOutletT,
                 const FREAL rtu_CellsTemperature[40], const FREAL
                 *rtu_HVILReturn, FREAL *rty_vitm_CellsMaxTemperature, FREAL
                 *rty_vitm_CellsMinTemperature, FREAL
                 *rty_vitm_CellsAvgTemperature, U8
                 *rty_vitm_CellsTemperatureLowFau, U8
                 *rty_vitm_CellsTemperatureHighFa, U8
                 *rty_vitm_CellsVoltageLowFault, U8
                 *rty_vitm_CellsVoltageHighFault, U8 *rty_vitm_PackVoltageFault,
                 FREAL *rty_vitm_CellsMinVoltage, FREAL
                 *rty_vitm_CellsMaxVoltage, FREAL *rty_vitm_CellsAvgVoltage,
                 FREAL *rty_vitm_PackVoltageFiltered, FREAL
                 *rty_vitm_PackCurrentFiltered, U8 *rty_vitm_PackCurrentFault,
                 FREAL *rty_vitm_CoolantDeltaTemp, U8
                 *rty_vitm_CoolantInletTempFault, U8
                 *rty_vitm_CoolantOutlletTempFaul, FREAL
                 *rty_vitm_CoolantInletTFiltered, FREAL
                 *rty_vitm_CoolantOutletTFiltered, U8 *rty_vitm_HVILFault, FREAL
                 rty_vitm_CellsTemperatureFilter[40], FREAL
                 rty_vitm_CellsVoltageFiltered[40], FREAL
                 *rty_vitm_VehSideVoltageFiltered, rtDW_VITM *localDW,
                 rtZCE_VITM *localZCE);

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S10>/Constant14' : Unused code path elimination
 * Block '<S10>/Constant15' : Unused code path elimination
 * Block '<S10>/Divide' : Unused code path elimination
 * Block '<S10>/Divide1' : Unused code path elimination
 * Block '<S10>/Sum of Elements' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<Root>/XY Graph' : Eliminate redundant data type conversion
 * Block '<Root>/XY Graph' : Eliminate redundant data type conversion
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
 * '<Root>' : 'VITM'
 * '<S1>'   : 'VITM/VITM'
 * '<S2>'   : 'VITM/VITM/ Filter for Cell Voltages'
 * '<S3>'   : 'VITM/VITM/ Filter for Pack Voltage'
 * '<S4>'   : 'VITM/VITM/ Filter for Pack Voltage1'
 * '<S5>'   : 'VITM/VITM/Cell Temperature Fault Detection'
 * '<S6>'   : 'VITM/VITM/Cell Voltage Fault Detection'
 * '<S7>'   : 'VITM/VITM/Coolant  Inlet Temp Fault Detection'
 * '<S8>'   : 'VITM/VITM/Coolant  Outlet Temp Fault Detection'
 * '<S9>'   : 'VITM/VITM/Filter  for Pack Current'
 * '<S10>'  : 'VITM/VITM/Filter for Cell Temperature'
 * '<S11>'  : 'VITM/VITM/Filter for Coolant Inlet Temperature'
 * '<S12>'  : 'VITM/VITM/Filter for Coolant outlet Temperature'
 * '<S13>'  : 'VITM/VITM/HVIL Fault'
 * '<S14>'  : 'VITM/VITM/Pack Current Fault Detection'
 * '<S15>'  : 'VITM/VITM/Pack Voltage Fault Detection'
 */
#endif                                 /* RTW_HEADER_VITM_h_ */

/* end of file */
