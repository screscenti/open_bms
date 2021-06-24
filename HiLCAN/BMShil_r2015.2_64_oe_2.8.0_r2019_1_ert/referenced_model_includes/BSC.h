/*
 *****************************************************************************
 *
 *  File:                     BSC.h
 *  Description:              Real-Time Workshop code generated for Simulink
 *                            model BSC.
 *
 *  Model name:               BSC
 *  Model date:
 *  Model version:            1.220
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
#ifndef RTW_HEADER_BSC_h_
#define RTW_HEADER_BSC_h_
#ifndef BSC_COMMON_INCLUDES_
# define BSC_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#endif                                 /* BSC_COMMON_INCLUDES_ */

#include "BSC_types.h"

/* Shared type includes */
#include "model_reference_types.h"

/* Includes for objects with custom storage classes. */
#include "global.h"

/********* Macros *********/

/********* Global structure definitions *********/

/* Block signals for system '<S1>/Fault_level' */
typedef struct {
  U8 MinMax;                           /* '<S3>/MinMax' */
  U8 MinMax1;                          /* '<S3>/MinMax1' */
} rtB_Fault_level_BSC;

/* Block signals for system '<S1>/key_cycle' */
typedef struct {
  U8 key_cycle;                        /* '<S6>/key_cycle_chart' */
} rtB_key_cycle_BSC;

/* Block states (auto storage) for system '<S1>/key_cycle' */
typedef struct {
  S32 sfEvent;                         /* '<S6>/key_cycle_chart' */
  struct {
    UINT is_c1_BSC:2;                  /* '<S6>/key_cycle_chart' */
    UINT is_active_c1_BSC:1;           /* '<S6>/key_cycle_chart' */
  } bitsForTID0;

  U8 off_store;                        /* '<S6>/key_cycle_chart' */
  U8 on_store;                         /* '<S6>/key_cycle_chart' */
  U8 off_fault;                        /* '<S6>/key_cycle_chart' */
  U8 on_fault;                         /* '<S6>/key_cycle_chart' */
} rtDW_key_cycle_BSC;

/* Zero-crossing (trigger) state for system '<S1>/key_cycle' */
typedef struct {
  ZCSigState key_cycle_chart_Trig_ZCE[2];/* '<S6>/key_cycle_chart' */
} rtZCE_key_cycle_BSC;

/* Zero-crossing (trigger) state for system '<S1>/rsnToOpenCC' */
typedef struct {
  ZCSigState TriggeredSubsystem_Trig_ZCE;/* '<S7>/Triggered Subsystem' */
} rtZCE_rsnToOpenCC_BSC;

/* Block signals for model 'BSC' */
typedef struct {
  rtB_key_cycle_BSC key_cycle;         /* '<S1>/key_cycle' */
  rtB_Fault_level_BSC Fault_level;     /* '<S1>/Fault_level' */
} rtB_BSC;

/* Block states (auto storage) for model 'BSC' */
typedef struct {
  struct {
    UINT is_active_c2_BSC:1;           /* '<S1>/Chart2' */
    UINT is_c2_BSC:1;                  /* '<S1>/Chart2' */
  } bitsForTID0;

  rtDW_key_cycle_BSC key_cycle;        /* '<S1>/key_cycle' */
} rtDW_BSC;

/* Zero-crossing (trigger) state for model 'BSC' */
typedef struct {
  rtZCE_rsnToOpenCC_BSC rsnToOpenCC;   /* '<S1>/rsnToOpenCC' */
  rtZCE_key_cycle_BSC key_cycle;       /* '<S1>/key_cycle' */
} rtZCE_BSC;

/* Real-time Model Data Structure */
struct tag_RTM_BSC {
  const char_T **errorStatus;
};

typedef struct {
  rtB_BSC rtb;
  rtDW_BSC rtdw;
  RT_MODEL_BSC rtm;
  rtZCE_BSC rtzce;
} rtMdlrefDWork_BSC;

/********* Global variables and prototypes *********/

/* Model reference registration function */
extern void BSC_initialize(const char_T **rt_errorStatus, RT_MODEL_BSC *const
  BSC_M, rtZCE_BSC *localZCE);
extern void BSC_check_type_Init(U8 *rty_Out1);
extern void BSC_check_type(const U8 *rtu_In1, const U8 *rtu_In2, const U8
  *rtu_In3, const U8 *rtu_In4, const U8 *rtu_In5, const U8 *rtu_In6, const U8
  *rtu_In7, const U8 *rtu_In8, const U8 *rtu_In9, const U8 *rtu_In10, const U8
  *rtu_In11, U8 *rty_Out1);
extern void BSC_Fault_level(U8 rtu_TypeofFault, U8 *rty_lowlevelfault,
  rtB_Fault_level_BSC *localB);
extern void BSC_key_cycle_Init(rtB_key_cycle_BSC *localB);
extern void BSC_key_cycle(U8 rtu_med_fault, const U8 *rtu_key, rtB_key_cycle_BSC
  *localB, rtDW_key_cycle_BSC *localDW, rtZCE_key_cycle_BSC *localZCE);
extern void BSC_sleepCheck(const U8 *rtu_CPSR, const FREAL *rtu_soc, U8
  *rty_SleepMode);
extern void BSC_cc_cmd(const U8 *rtu_VPSR, U8 rtu_cycled_after_fault, U8
  rtu_severe_fault, const U8 *rtu_CPSR, U8 rtu_sleep_mode, U8 *rty_main_cc_cmd,
  U8 *rty_chg_cc_cmd);
extern void BSC_rsnToOpenCC(U8 rtu_cycleKey_after_fault, U8 rtu_severe_fault, U8
  rtu_med_fault, U8 rtu_type_of_fault, U8 *rty_reason_to_open_contactor, U8
  *rty_severemedfault, rtZCE_rsnToOpenCC_BSC *localZCE);
extern void BSC_Init(U8 *rty_bsc_fault_type, rtB_BSC *localB);
extern void BSC(const U8 *rtu_vehicle_PSR, const U8 *rtu_charger_PSR, const U8
                *rtu_key, const FREAL *rtu_soc_pack_actual, const U8
                *rtu_high_level_faultType1, const U8
                *rtu_medium_level_faultType2, const U8 *rtu_low_level_faultType3,
                const U8 *rtu_vitm_CellsTemperatureLowFau, const U8
                *rtu_vitm_CellsTemperatureHighFa, const U8
                *rtu_vitm_CellsVoltageLowFaultTy, const U8
                *rtu_vitm_CellsVoltageHightFault, const U8
                *rtu_vitm_PackVoltageFaultType8, const U8
                *rtu_vitm_PackCurrentFaultType9, const U8
                *rtu_vitm_HVILFaultType10, const U8 *rtu_cc_PrechargeFaultType11,
                U8 *rty_bsc_CVTN_supply_signal, U8 *rty_bsc_main_cc_cmd, U8
                *rty_bsc_chg_cc_cmd, U8 *rty_bsc_sleep_status, U8
                *rty_bsc_reason_to_open_CAN, U8 *rty_bsc_severemed_fault, U8
                *rty_bsc_low_fault, U8 *rty_bsc_fault_type, rtB_BSC *localB,
                rtDW_BSC *localDW, rtZCE_BSC *localZCE);

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
 * '<Root>' : 'BSC'
 * '<S1>'   : 'BSC/BSC'
 * '<S2>'   : 'BSC/BSC/Chart2'
 * '<S3>'   : 'BSC/BSC/Fault_level'
 * '<S4>'   : 'BSC/BSC/cc_c  md'
 * '<S5>'   : 'BSC/BSC/check_type'
 * '<S6>'   : 'BSC/BSC/key_cycle'
 * '<S7>'   : 'BSC/BSC/rsnToOpenCC'
 * '<S8>'   : 'BSC/BSC/sleepCheck'
 * '<S9>'   : 'BSC/BSC/Fault_level/Compare To Constant'
 * '<S10>'  : 'BSC/BSC/Fault_level/Compare To Constant1'
 * '<S11>'  : 'BSC/BSC/Fault_level/Compare To Constant2'
 * '<S12>'  : 'BSC/BSC/check_type/check_faults'
 * '<S13>'  : 'BSC/BSC/key_cycle/key_cycle_chart'
 * '<S14>'  : 'BSC/BSC/rsnToOpenCC/Triggered Subsystem'
 * '<S15>'  : 'BSC/BSC/rsnToOpenCC/Triggered Subsystem/If Action Subsystem'
 * '<S16>'  : 'BSC/BSC/rsnToOpenCC/Triggered Subsystem/If Action Subsystem1'
 * '<S17>'  : 'BSC/BSC/sleepCheck/Compare To Constant1'
 */
#endif                                 /* RTW_HEADER_BSC_h_ */

/* end of file */
