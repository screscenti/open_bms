/*
 * soc0_sf.h
 *
 * Code generation for model "soc0_sf".
 *
 * Model version              : 1.325
 * Simulink Coder version : 8.9 (R2015b) 13-Aug-2015
 * C source code generated on : Fri Jun 12 21:30:17 2020
 *
 * Target selection: rtwsfcn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Freescale->32-bit PowerPC
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_soc0_sf_h_
#define RTW_HEADER_soc0_sf_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef soc0_sf_COMMON_INCLUDES_
# define soc0_sf_COMMON_INCLUDES_
#include <stdlib.h>
#define S_FUNCTION_NAME                soc0_sf
#define S_FUNCTION_LEVEL               2
#define RTW_GENERATED_S_FUNCTION
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#if !defined(MATLAB_MEX_FILE)
#include "rt_matrx.h"
#endif

#if !defined(RTW_SFUNCTION_DEFINES)
#define RTW_SFUNCTION_DEFINES

typedef struct {
  void *blockIO;
  void *defaultParam;
  void *nonContDerivSig;
} LocalS;

#define ssSetLocalBlockIO(S, io)       ((LocalS *)ssGetUserData(S))->blockIO = ((void *)(io))
#define ssGetLocalBlockIO(S)           ((LocalS *)ssGetUserData(S))->blockIO
#define ssSetLocalDefaultParam(S, paramVector) ((LocalS *)ssGetUserData(S))->defaultParam = (paramVector)
#define ssGetLocalDefaultParam(S)      ((LocalS *)ssGetUserData(S))->defaultParam
#define ssSetLocalNonContDerivSig(S, pSig) ((LocalS *)ssGetUserData(S))->nonContDerivSig = (pSig)
#define ssGetLocalNonContDerivSig(S)   ((LocalS *)ssGetUserData(S))->nonContDerivSig
#endif
#endif                                 /* soc0_sf_COMMON_INCLUDES_ */

#include "soc0_sf_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetNaN.h"
#include "rtGetInf.h"
#include "rt_defines.h"

/* Block signals for system '<S8>/Subsystem' */
typedef struct {
  real_T OCVSOCLookup[40];             /* '<S11>/OCV - SOC Lookup' */
  real_T Switch[40];                   /* '<S11>/Switch' */
  real_T Switch1;                      /* '<S11>/Switch1' */
} B_Subsystem_soc0_T;

/* Block signals for system '<S8>/CdegradeCalc' */
typedef struct {
  real_T Sum[40];                      /* '<S9>/Sum' */
} B_CdegradeCalc_soc0_T;

/* Block signals (auto storage) */
typedef struct {
  real_T Delay[40];                    /* '<S1>/Delay' */
  real_T Delay1;                       /* '<S1>/Delay1' */
  real_T Merge2[40];                   /* '<S1>/Merge2' */
  real_T Divide1;                      /* '<S1>/Divide1' */
  real_T Gain[40];                     /* '<S1>/Gain' */
  real_T Merge1;                       /* '<S1>/Merge1' */
  real_T DataStoreRead2[40];           /* '<S8>/Data Store Read2' */
  real_T DataStoreRead1[40];           /* '<S8>/Data Store Read1' */
  real_T DataStoreRead3[40];           /* '<S8>/Data Store Read3' */
  real_T OutportBufferForcapacity_degrad[40];/* '<S8>/CdegradeCalc' */
  B_CdegradeCalc_soc0_T CdegradeCalc;  /* '<S8>/CdegradeCalc' */
  B_Subsystem_soc0_T Subsystem;        /* '<S8>/Subsystem' */
} B_soc0_T;

/* Constant parameters (auto storage) */
typedef struct {
  /* Expression: [0 100]
   * Referenced by: '<S1>/Customer interpolation'
   */
  real_T Customerinterpolation_tableData[2];

  /* Expression: [SOCk_SocMinPercentage SOCk_SocMaxPercentage]
   * Referenced by: '<S1>/Customer interpolation'
   */
  real_T Customerinterpolation_bp01Data[2];
} ConstP_soc0_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T *vitm_pack_current;           /* '<Root>/vitm_pack_current' */
  real_T *cell_voltages[40];           /* '<Root>/cell_voltages' */
  boolean_T *main_contactor;           /* '<Root>/main_contactor' */
  boolean_T *charger_contactor;        /* '<Root>/charger_contactor' */
  boolean_T *pre_chg_contactor;        /* '<Root>/pre_chg_contactor' */
  real_T *soh_C_factors[40];           /* '<Root>/soh_C_factors' */
  boolean_T *bsc_chg_cc_cmd;           /* '<Root>/bsc_chg_cc_cmd' */
  boolean_T *cb_cmds[40];              /* '<Root>/cb_cmds' */
} ExternalUPtrs_soc0_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T *soc_cells_pct[40];           /* '<Root>/soc_cells_pct' */
  real_T *soc_pack_customer;           /* '<Root>/soc_pack_customer' */
  real_T *soc_cell_max;                /* '<Root>/soc_cell_max' */
  real_T *soc_cell_min;                /* '<Root>/soc_cell_min' */
  real_T *soc_pack_actual;             /* '<Root>/soc_pack_actual' */
  boolean_T *soc_rate_high;            /* '<Root>/soc_rate_high' */
  real_T *soc_C_factor[40];            /* '<Root>/soc_C_factor' */
} ExtY_soc0_T;

/* Parameters (auto storage) */
struct P_soc0_T_ {
  real_T C_OcvTable[151];              /* Variable: C_OcvTable
                                        * Referenced by:
                                        *   '<S6>/OCV - SOC Lookup'
                                        *   '<S11>/OCV - SOC Lookup'
                                        */
  real_T C_SocTable[151];              /* Variable: C_SocTable
                                        * Referenced by:
                                        *   '<S6>/OCV - SOC Lookup'
                                        *   '<S11>/OCV - SOC Lookup'
                                        */
  real_T SOCc_CapacityFilterCoeff;     /* Variable: SOCc_CapacityFilterCoeff
                                        * Referenced by:
                                        *   '<S9>/Gain'
                                        *   '<S9>/Gain1'
                                        */
  real_T SOCk_CellBalancingResistor;   /* Variable: SOCk_CellBalancingResistor
                                        * Referenced by: '<S3>/Constant4'
                                        */
  real_T SOCk_CellCapacity;            /* Variable: SOCk_CellCapacity
                                        * Referenced by: '<S3>/Constant'
                                        */
  real_T SOCk_HrsToSec;                /* Variable: SOCk_HrsToSec
                                        * Referenced by: '<S3>/Constant7'
                                        */
  real_T SOCk_NumberInSeries;          /* Variable: SOCk_NumberInSeries
                                        * Referenced by: '<S1>/Constant3'
                                        */
  real_T SOCk_SocMaxPercentage;        /* Variable: SOCk_SocMaxPercentage
                                        * Referenced by: '<S1>/Constant2'
                                        */
  real_T SOCk_SocMinPercentage;        /* Variable: SOCk_SocMinPercentage
                                        * Referenced by: '<S1>/Constant4'
                                        */
  real_T SOCk_ToFractionFromPercentage;/* Variable: SOCk_ToFractionFromPercentage
                                        * Referenced by: '<S1>/Gain'
                                        */
  real_T SOCk_ToPercentage;            /* Variable: SOCk_ToPercentage
                                        * Referenced by: '<S3>/Constant1'
                                        */
  real_T SOCk_stepSize;                /* Variable: SOCk_stepSize
                                        * Referenced by:
                                        *   '<S1>/Constant1'
                                        *   '<S3>/Constant5'
                                        */
  real_T SOCv_InitalSOC[40];           /* Variable: SOCv_InitalSOC
                                        * Referenced by:
                                        *   '<S1>/Data Store Memory'
                                        *   '<S1>/Data Store Memory1'
                                        *   '<S1>/Delay'
                                        */
  real_T SOCv_factoryInitSohC[40];     /* Variable: SOCv_factoryInitSohC
                                        * Referenced by:
                                        *   '<S1>/Data Store Memory3'
                                        *   '<S9>/Constant'
                                        */
};

extern P_soc0_T soc0_DefaultP;

/* Constant parameters (auto storage) */
extern const ConstP_soc0_T soc0_ConstP;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('SOC_codegen/soc')    - opens subsystem SOC_codegen/soc
 * hilite_system('SOC_codegen/soc/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'SOC_codegen'
 * '<S1>'   : 'SOC_codegen/soc'
 * '<S2>'   : 'SOC_codegen/soc/1% per second only while discharging'
 * '<S3>'   : 'SOC_codegen/soc/CC_counting'
 * '<S4>'   : 'SOC_codegen/soc/Chart'
 * '<S5>'   : 'SOC_codegen/soc/Difference'
 * '<S6>'   : 'SOC_codegen/soc/Init'
 * '<S7>'   : 'SOC_codegen/soc/dataStore'
 * '<S8>'   : 'SOC_codegen/soc/key_on'
 * '<S9>'   : 'SOC_codegen/soc/key_on/CdegradeCalc'
 * '<S10>'  : 'SOC_codegen/soc/key_on/Chart'
 * '<S11>'  : 'SOC_codegen/soc/key_on/Subsystem'
 * '<S12>'  : 'SOC_codegen/soc/key_on/lastCycleUpdate'
 * '<S13>'  : 'SOC_codegen/soc/key_on/saveChgInitSoc'
 */
#endif                                 /* RTW_HEADER_soc0_sf_h_ */
