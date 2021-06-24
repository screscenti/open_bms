/*
 * soc0_sf.c
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

#include <math.h>
#include "soc0_sf.h"
#include "soc0_sf_private.h"
#include "simstruc.h"
#include "fixedpoint.h"

/* Named constants for Chart: '<S8>/Chart' */
#define soc0_IN_NO_ACTIVE_CHILD        ((uint8_T)0U)
#define soc0_IN_keyON                  ((uint8_T)1U)

/* Named constants for Chart: '<S1>/Chart' */
#define soc0_IN_NO_ACTIVE_CHILD_f      ((uint8_T)0U)
#define soc0_IN_coulomb_counting       ((uint8_T)1U)
#define soc0_IN_dataStore              ((uint8_T)2U)
#define soc0_IN_end                    ((uint8_T)3U)
#define soc0_IN_init                   ((uint8_T)4U)
#define soc0_IN_key_ON                 ((uint8_T)5U)
#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)

extern void *soc0_malloc(SimStruct *S);

#endif

#ifndef __RTW_UTFREE__
#if defined (MATLAB_MEX_FILE)

extern void * utMalloc(size_t);
extern void utFree(void *);

#endif
#endif                                 /* #ifndef __RTW_UTFREE__ */

#if defined(MATLAB_MEX_FILE)
#include "rt_nonfinite.c"
#endif

static const char_T *RT_MEMORY_ALLOCATION_ERROR =
  "memory allocation error in generated S-Function";
uint32_T soc0_plook_evenc(real_T u, real_T bp0, real_T bpSpace, uint32_T
  maxIndex, real_T *fraction)
{
  uint32_T bpIndex;
  real_T invSpc;
  real_T fbpIndex;

  /* Prelookup - Index and Fraction
     Index Search method: 'even'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u <= bp0) {
    bpIndex = 0U;
    *fraction = 0.0;
  } else {
    invSpc = 1.0 / bpSpace;
    fbpIndex = (u - bp0) * invSpc;
    if (fbpIndex < maxIndex) {
      bpIndex = (uint32_T)fbpIndex;
      *fraction = (u - ((real_T)bpIndex * bpSpace + bp0)) * invSpc;
    } else {
      bpIndex = maxIndex - 1U;
      *fraction = 1.0;
    }
  }

  return bpIndex;
}

real_T soc0_intrp1d_l(uint32_T bpIndex, real_T frac, const real_T table[])
{
  /* Interpolation 1-D
     Interpolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'wrapping'
   */
  return (table[bpIndex + 1U] - table[bpIndex]) * frac + table[bpIndex];
}

real_T soc0_look1_binlx(real_T u0, const real_T bp0[], const real_T table[],
  uint32_T maxIndex)
{
  real_T frac;
  uint32_T iRght;
  uint32_T iLeft;
  uint32_T bpIdx;

  /* Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Interpolation 1-D
     Interpolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'wrapping'
   */
  return (table[iLeft + 1U] - table[iLeft]) * frac + table[iLeft];
}

/* Output and update for function-call system: '<S1>/Init' */
void soc0_Init(SimStruct * const S, const real_T rtu_cell_voltages[40], real_T
               rty_soc_cells_pct[40], real_T *rty_cc_integration_reset)
{
  int32_T iU;
  uint32_T bpIdx;
  real_T frac;

  /* Lookup_n-D: '<S6>/OCV - SOC Lookup' */
  for (iU = 0; iU < 40; iU++) {
    bpIdx = soc0_plook_evenc(rtu_cell_voltages[iU], (((real_T *)mxGetData
      (C_OcvTable(S)))[0]), (((real_T *)mxGetData(C_OcvTable(S)))[1]) -
      (((real_T *)mxGetData(C_OcvTable(S)))[0]), 150U, &frac);
    rty_soc_cells_pct[iU] = soc0_intrp1d_l(bpIdx, frac, ((real_T *)mxGetData
      (C_SocTable(S))));
  }

  /* End of Lookup_n-D: '<S6>/OCV - SOC Lookup' */

  /* Constant: '<S6>/Constant' */
  *rty_cc_integration_reset = 0.0;
}

/* Termination for function-call system: '<S1>/Init' */
void soc0_Init_Term(SimStruct *const S)
{
}

/* Start for function-call system: '<S8>/Subsystem' */
void soc0_Subsystem_Start(B_Subsystem_soc0_T *localB)
{
  int32_T i;

  /* VirtualOutportStart for Outport: '<S11>/cc_integration_reset' */
  localB->Switch1 = 0.0;
  for (i = 0; i < 40; i++) {
    /* VirtualOutportStart for Outport: '<S11>/soc_cells_pct' */
    localB->Switch[i] = 0.0;

    /* VirtualOutportStart for Outport: '<S11>/keyON_ocvsoc' */
    localB->OCVSOCLookup[i] = 0.0;
  }
}

/* Output and update for function-call system: '<S8>/Subsystem' */
void soc0_Subsystem(SimStruct * const S, const real_T rtu_cell_voltages[40],
                    B_Subsystem_soc0_T *localB, real_T rtd_CCounting_soc_store
                    [40])
{
  real_T maxV;
  uint32_T bpIdx;
  real_T rtb_Abs[40];
  boolean_T rtb_RelationalOperator3;
  int32_T i;

  /* Lookup_n-D: '<S11>/OCV - SOC Lookup' */
  for (i = 0; i < 40; i++) {
    bpIdx = soc0_plook_evenc(rtu_cell_voltages[i], (((real_T *)mxGetData
      (C_OcvTable(S)))[0]), (((real_T *)mxGetData(C_OcvTable(S)))[1]) -
      (((real_T *)mxGetData(C_OcvTable(S)))[0]), 150U, &maxV);
    localB->OCVSOCLookup[i] = soc0_intrp1d_l(bpIdx, maxV, ((real_T *)mxGetData
      (C_SocTable(S))));
  }

  /* End of Lookup_n-D: '<S11>/OCV - SOC Lookup' */

  /* Abs: '<S11>/Abs' incorporates:
   *  DataStoreRead: '<S11>/Data Store Read'
   *  Sum: '<S11>/Subtract'
   */
  for (i = 0; i < 40; i++) {
    rtb_Abs[i] = fabs(localB->OCVSOCLookup[i] - rtd_CCounting_soc_store[i]);
  }

  /* End of Abs: '<S11>/Abs' */

  /* MinMax: '<S11>/max' */
  maxV = rtb_Abs[0];
  for (i = 0; i < 39; i++) {
    if (!((maxV >= rtb_Abs[i + 1]) || rtIsNaN(rtb_Abs[i + 1]))) {
      maxV = rtb_Abs[i + 1];
    }
  }

  /* RelationalOperator: '<S11>/Relational Operator3' incorporates:
   *  Constant: '<S11>/soc_diff_threshold'
   *  MinMax: '<S11>/max'
   */
  rtb_RelationalOperator3 = (maxV >= 1.0);

  /* Switch: '<S11>/Switch1' incorporates:
   *  Constant: '<S11>/Constant'
   *  DataStoreRead: '<S11>/Data Store Read'
   *  Switch: '<S11>/Switch'
   */
  if (rtb_RelationalOperator3) {
    memcpy(&localB->Switch[0], &localB->OCVSOCLookup[0], 40U * sizeof(real_T));
    localB->Switch1 = 1.0;
  } else {
    memcpy(&localB->Switch[0], &rtd_CCounting_soc_store[0], 40U * sizeof(real_T));
    localB->Switch1 = 0.0;
  }

  /* End of Switch: '<S11>/Switch1' */
}

/* Termination for function-call system: '<S8>/Subsystem' */
void soc0_Subsystem_Term(SimStruct *const S)
{
}

/* Initial conditions for function-call system: '<S8>/CdegradeCalc' */
void soc0_CdegradeCalc_Init(SimStruct * const S)
{
  /* InitializeConditions for Delay: '<S9>/Delay' */
  ((uint8_T *)ssGetDWork(S, 15))[0] = 1U;
}

/* Start for function-call system: '<S8>/CdegradeCalc' */
void soc0_CdegradeCalc_Start(B_CdegradeCalc_soc0_T *localB)
{
  int32_T i;

  /* VirtualOutportStart for Outport: '<S9>/Out1' */
  for (i = 0; i < 40; i++) {
    localB->Sum[i] = 1.0;
  }

  /* End of VirtualOutportStart for Outport: '<S9>/Out1' */
}

/* Output and update for function-call system: '<S8>/CdegradeCalc' */
void soc0_CdegradeCalc(SimStruct * const S, const real_T rtu_keyON_ocvsoc[40],
  const real_T rtu_lastChgInitsoc[40], const real_T rtu_lastChgCCsoc[40], const
  real_T rtu_soh_C_factors[40], B_CdegradeCalc_soc0_T *localB)
{
  int32_T i;
  for (i = 0; i < 40; i++) {
    /* Delay: '<S9>/Delay' incorporates:
     *  Constant: '<S9>/Constant'
     */
    if (((uint8_T *)ssGetDWork(S, 15))[0] != 0) {
      ((real_T *)ssGetDWork(S, 14))[i] = (((real_T *)mxGetData
        (SOCv_factoryInitSohC(S)))[i]);
    }

    /* Sum: '<S9>/Sum' incorporates:
     *  Delay: '<S9>/Delay'
     *  Gain: '<S9>/Gain'
     *  Gain: '<S9>/Gain1'
     *  Product: '<S9>/Divide'
     *  Product: '<S9>/Mul'
     *  Sum: '<S9>/Subtract'
     *  Sum: '<S9>/Subtract1'
     */
    localB->Sum[i] = (rtu_lastChgCCsoc[i] - rtu_lastChgInitsoc[i]) /
      (rtu_keyON_ocvsoc[i] - rtu_lastChgInitsoc[i]) * rtu_soh_C_factors[i] *
      (1.0 - (*(real_T *)(mxGetData(SOCc_CapacityFilterCoeff(S))))) + (*(real_T *)
      (mxGetData(SOCc_CapacityFilterCoeff(S)))) * ((real_T *)ssGetDWork(S, 14))
      [i];

    /* Update for Delay: '<S9>/Delay' */
    ((real_T *)ssGetDWork(S, 14))[i] = localB->Sum[i];
  }

  /* Update for Delay: '<S9>/Delay' */
  ((uint8_T *)ssGetDWork(S, 15))[0] = 0U;
}

/* Termination for function-call system: '<S8>/CdegradeCalc' */
void soc0_CdegradeCalc_Term(SimStruct *const S)
{
}

/* Output and update for function-call system: '<S8>/saveChgInitSoc' */
void soc0_saveChgInitSoc(const real_T rtu_keyON_ocvsoc[40], real_T
  rtd_charging_initial_soc[40])
{
  /* DataStoreWrite: '<S13>/Data Store Write' */
  memcpy(&rtd_charging_initial_soc[0], &rtu_keyON_ocvsoc[0], 40U * sizeof(real_T));
}

/* Termination for function-call system: '<S8>/saveChgInitSoc' */
void soc0_saveChgInitSoc_Term(SimStruct *const S)
{
}

/* Output and update for function-call system: '<S8>/lastCycleUpdate' */
void soc0_lastCycleUpdate(boolean_T rtu_chargingC, real_T
  *rtd_last_cycle_charging)
{
  /* DataStoreWrite: '<S12>/Data Store Write' incorporates:
   *  Switch: '<S12>/Switch'
   */
  *rtd_last_cycle_charging = rtu_chargingC;
}

/* Termination for function-call system: '<S8>/lastCycleUpdate' */
void soc0_lastCycleUpdate_Term(SimStruct *const S)
{
}

/* Initial conditions for function-call system: '<S1>/key_on' */
void soc0_key_on_Init(SimStruct * const S)
{
  ((uint8_T *)ssGetDWork(S, 9))[0] = 0U;
  ((uint8_T *)ssGetDWork(S, 10))[0] = soc0_IN_NO_ACTIVE_CHILD;

  /* InitializeConditions for Chart: '<S8>/Chart' incorporates:
   *  InitializeConditions for SubSystem: '<S8>/CdegradeCalc'
   */
  soc0_CdegradeCalc_Init(S);
}

/* Start for function-call system: '<S1>/key_on' */
void soc0_key_on_Start(SimStruct * const S)
{
  int32_T i;
  B_soc0_T *_rtB;
  _rtB = ((B_soc0_T *) ssGetLocalBlockIO(S));

  /* Start for Chart: '<S8>/Chart' incorporates:
   *  Start for SubSystem: '<S8>/Subsystem'
   */
  soc0_Subsystem_Start(&_rtB->Subsystem);

  /* Start for Chart: '<S8>/Chart' incorporates:
   *  Start for SubSystem: '<S8>/CdegradeCalc'
   */
  soc0_CdegradeCalc_Start(&_rtB->CdegradeCalc);

  /* VirtualOutportStart for Outport: '<S8>/capacity_degrade_factor' */
  for (i = 0; i < 40; i++) {
    _rtB->OutportBufferForcapacity_degrad[i] = 1.0;
  }

  /* End of VirtualOutportStart for Outport: '<S8>/capacity_degrade_factor' */
}

/* Output and update for function-call system: '<S1>/key_on' */
void soc0_key_on(SimStruct * const S)
{
  int32_T i;
  B_soc0_T *_rtB;
  _rtB = ((B_soc0_T *) ssGetLocalBlockIO(S));

  /* DataStoreRead: '<S8>/Data Store Read2' incorporates:
   *  DataStoreRead: '<S8>/Data Store Read1'
   *  DataStoreRead: '<S8>/Data Store Read3'
   */
  memcpy(&_rtB->DataStoreRead2[0], &((real_T *)ssGetDWork(S, 4))[0], 40U *
         sizeof(real_T));

  /* DataStoreRead: '<S8>/Data Store Read1' incorporates:
   *  DataStoreRead: '<S8>/Data Store Read2'
   *  DataStoreRead: '<S8>/Data Store Read3'
   */
  memcpy(&_rtB->DataStoreRead1[0], &((real_T *)ssGetDWork(S, 3))[0], 40U *
         sizeof(real_T));

  /* DataStoreRead: '<S8>/Data Store Read3' incorporates:
   *  DataStoreRead: '<S8>/Data Store Read1'
   *  DataStoreRead: '<S8>/Data Store Read2'
   */
  memcpy(&_rtB->DataStoreRead3[0], &((real_T *)ssGetDWork(S, 6))[0], 40U *
         sizeof(real_T));

  /* Chart: '<S8>/Chart' incorporates:
   *  DataStoreRead: '<S8>/Data Store Read'
   *  Inport: '<Root>/bsc_chg_cc_cmd'
   *  Inport: '<Root>/cell_voltages'
   */
  /* Gateway: soc/key_on/Chart */
  /* During: soc/key_on/Chart */
  if (((uint8_T *)ssGetDWork(S, 9))[0] == 0U) {
    /* Entry: soc/key_on/Chart */
    ((uint8_T *)ssGetDWork(S, 9))[0] = 1U;

    /* Entry Internal: soc/key_on/Chart */
    /* Transition: '<S10>:2' */
    ((uint8_T *)ssGetDWork(S, 10))[0] = soc0_IN_keyON;

    /* Outputs for Function Call SubSystem: '<S8>/Subsystem' */

    /* Entry Internal 'keyON': '<S10>:1' */
    /* Transition: '<S10>:37' */
    /* Transition: '<S10>:5' */
    /* Event: '<S10>:33' */
    soc0_Subsystem(S, ((const real_T **)ssGetInputPortSignalPtrs(S, 1))[0],
                   &_rtB->Subsystem, &((real_T *)ssGetDWork(S, 3))[0]);

    /* End of Outputs for SubSystem: '<S8>/Subsystem' */
    if (((real_T *)ssGetDWork(S, 5))[0] == 1.0) {
      /* Outputs for Function Call SubSystem: '<S8>/CdegradeCalc' */

      /* Transition: '<S10>:17' */
      /* Transition: '<S10>:21' */
      /* Event: '<S10>:34' */
      soc0_CdegradeCalc(S, _rtB->Subsystem.OCVSOCLookup, _rtB->DataStoreRead2,
                        _rtB->DataStoreRead1, _rtB->DataStoreRead3,
                        &_rtB->CdegradeCalc);

      /* End of Outputs for SubSystem: '<S8>/CdegradeCalc' */

      /* Transition: '<S10>:19' */
    } else {
      /* Transition: '<S10>:18' */
    }

    /* Transition: '<S10>:20' */
    if (*((const boolean_T **)ssGetInputPortSignalPtrs(S, 6))[0]) {
      /* Outputs for Function Call SubSystem: '<S8>/saveChgInitSoc' */

      /* Transition: '<S10>:9' */
      /* Transition: '<S10>:11' */
      /* Event: '<S10>:35' */
      soc0_saveChgInitSoc(_rtB->Subsystem.OCVSOCLookup, &((real_T *)ssGetDWork(S,
        4))[0]);

      /* End of Outputs for SubSystem: '<S8>/saveChgInitSoc' */

      /* Transition: '<S10>:22' */
    } else {
      /* Transition: '<S10>:12' */
    }

    /* Outputs for Function Call SubSystem: '<S8>/lastCycleUpdate' */

    /* Transition: '<S10>:25' */
    /* Event: '<S10>:36' */
    soc0_lastCycleUpdate(*((const boolean_T **)ssGetInputPortSignalPtrs(S, 6))[0],
                         &((real_T *)ssGetDWork(S, 5))[0]);

    /* End of Outputs for SubSystem: '<S8>/lastCycleUpdate' */
  } else {
    /* Outputs for Function Call SubSystem: '<S8>/Subsystem' */

    /* During 'keyON': '<S10>:1' */
    /* Transition: '<S10>:37' */
    /* Transition: '<S10>:5' */
    /* Event: '<S10>:33' */
    soc0_Subsystem(S, ((const real_T **)ssGetInputPortSignalPtrs(S, 1))[0],
                   &_rtB->Subsystem, &((real_T *)ssGetDWork(S, 3))[0]);

    /* End of Outputs for SubSystem: '<S8>/Subsystem' */
    if (((real_T *)ssGetDWork(S, 5))[0] == 1.0) {
      /* Outputs for Function Call SubSystem: '<S8>/CdegradeCalc' */

      /* Transition: '<S10>:17' */
      /* Transition: '<S10>:21' */
      /* Event: '<S10>:34' */
      soc0_CdegradeCalc(S, _rtB->Subsystem.OCVSOCLookup, _rtB->DataStoreRead2,
                        _rtB->DataStoreRead1, _rtB->DataStoreRead3,
                        &_rtB->CdegradeCalc);

      /* End of Outputs for SubSystem: '<S8>/CdegradeCalc' */

      /* Transition: '<S10>:19' */
    } else {
      /* Transition: '<S10>:18' */
    }

    /* Transition: '<S10>:20' */
    if (*((const boolean_T **)ssGetInputPortSignalPtrs(S, 6))[0]) {
      /* Outputs for Function Call SubSystem: '<S8>/saveChgInitSoc' */

      /* Transition: '<S10>:9' */
      /* Transition: '<S10>:11' */
      /* Event: '<S10>:35' */
      soc0_saveChgInitSoc(_rtB->Subsystem.OCVSOCLookup, &((real_T *)ssGetDWork(S,
        4))[0]);

      /* End of Outputs for SubSystem: '<S8>/saveChgInitSoc' */

      /* Transition: '<S10>:22' */
    } else {
      /* Transition: '<S10>:12' */
    }

    /* Outputs for Function Call SubSystem: '<S8>/lastCycleUpdate' */

    /* Transition: '<S10>:25' */
    /* Event: '<S10>:36' */
    soc0_lastCycleUpdate(*((const boolean_T **)ssGetInputPortSignalPtrs(S, 6))[0],
                         &((real_T *)ssGetDWork(S, 5))[0]);

    /* End of Outputs for SubSystem: '<S8>/lastCycleUpdate' */
  }

  /* End of Chart: '<S8>/Chart' */

  /* SignalConversion: '<S8>/OutportBufferForcc_integration_reset' */
  _rtB->Merge1 = _rtB->Subsystem.Switch1;
  for (i = 0; i < 40; i++) {
    /* SignalConversion: '<S8>/OutportBufferForcapacity_degrade_factor' */
    _rtB->OutportBufferForcapacity_degrad[i] = _rtB->CdegradeCalc.Sum[i];

    /* SignalConversion: '<S8>/OutportBufferForsoc_cells_pct' */
    _rtB->Merge2[i] = _rtB->Subsystem.Switch[i];

    /* Outport: '<Root>/soc_C_factor' incorporates:
     *  Outport: '<S8>/capacity_degrade_factor'
     */
    ((real_T *)ssGetOutputPortSignal(S, 6))[i] =
      _rtB->OutportBufferForcapacity_degrad[i];
  }
}

/* Termination for function-call system: '<S1>/key_on' */
void soc0_key_on_Term(SimStruct *const S)
{
}

/* Initial conditions for function-call system: '<S1>/CC_counting' */
void soc0_CC_counting_Init(SimStruct * const S)
{
  /* InitializeConditions for DiscreteIntegrator: '<S3>/Discrete-Time Integrator' */
  ((uint8_T *)ssGetDWork(S, 13))[0] = 1U;
  ((int8_T *)ssGetDWork(S, 12))[0] = 2;
}

/* Output and update for function-call system: '<S1>/CC_counting' */
void soc0_CC_counting(SimStruct * const S, real_T rtu_pack_current, const real_T
                      rtu_soh_C_factor[40], const real_T rtu_cell_voltages[40],
                      const boolean_T rtu_cb_cmds[40], const real_T
                      rtu_integration_initial_soc[40], real_T
                      rtu_integration_reset, real_T rty_soc_cells_pct[40],
                      real_T *rty_cc_integration_reset)
{
  real_T rtb_mul1[40];
  int32_T i;
  real_T DiscreteTimeIntegrator;

  /* Product: '<S3>/mul1' incorporates:
   *  Constant: '<S3>/Constant'
   *  Constant: '<S3>/Constant4'
   *  Constant: '<S3>/Constant5'
   *  Constant: '<S3>/Constant7'
   *  DataTypeConversion: '<S3>/Data Type Conversion'
   *  Product: '<S3>/Divide'
   *  Product: '<S3>/Divide1'
   *  Product: '<S3>/Divide2'
   *  Product: '<S3>/Divide3'
   *  Product: '<S3>/Divide4'
   *  Product: '<S3>/mul'
   *  Sum: '<S3>/Sum'
   */
  for (i = 0; i < 40; i++) {
    rtb_mul1[i] = (rtu_pack_current - rtu_cell_voltages[i] * (real_T)
                   rtu_cb_cmds[i] / (*(real_T *)(mxGetData
      (SOCk_CellBalancingResistor(S))))) / ((*(real_T *)(mxGetData
      (SOCk_CellCapacity(S)))) * rtu_soh_C_factor[i]) / (*(real_T *)(mxGetData
      (SOCk_HrsToSec(S)))) * (*(real_T *)(mxGetData(SOCk_stepSize(S))));
  }

  /* End of Product: '<S3>/mul1' */

  /* DiscreteIntegrator: '<S3>/Discrete-Time Integrator' */
  if (((uint8_T *)ssGetDWork(S, 13))[0] != 0) {
    memcpy(&((real_T *)ssGetDWork(S, 11))[0], &rtu_integration_initial_soc[0],
           40U * sizeof(real_T));
  }

  /* Constant: '<S3>/Constant2' */
  *rty_cc_integration_reset = 0.0;

  /* Update for DiscreteIntegrator: '<S3>/Discrete-Time Integrator' */
  ((uint8_T *)ssGetDWork(S, 13))[0] = 0U;
  for (i = 0; i < 40; i++) {
    /* DiscreteIntegrator: '<S3>/Discrete-Time Integrator' */
    if ((rtu_integration_reset > 0.0) && (((int8_T *)ssGetDWork(S, 12))[0] <= 0))
    {
      ((real_T *)ssGetDWork(S, 11))[i] = rtu_integration_initial_soc[i];
    }

    DiscreteTimeIntegrator = 0.5 * rtb_mul1[i] + ((real_T *)ssGetDWork(S, 11))[i];

    /* Product: '<S3>/Product' incorporates:
     *  Constant: '<S3>/Constant1'
     */
    rty_soc_cells_pct[i] = DiscreteTimeIntegrator * (*(real_T *)(mxGetData
      (SOCk_ToPercentage(S))));

    /* Update for DiscreteIntegrator: '<S3>/Discrete-Time Integrator' */
    ((real_T *)ssGetDWork(S, 11))[i] = 0.5 * rtb_mul1[i] +
      DiscreteTimeIntegrator;
  }

  /* Update for DiscreteIntegrator: '<S3>/Discrete-Time Integrator' */
  if (rtu_integration_reset > 0.0) {
    ((int8_T *)ssGetDWork(S, 12))[0] = 1;
  } else if (rtu_integration_reset < 0.0) {
    ((int8_T *)ssGetDWork(S, 12))[0] = -1;
  } else if (rtu_integration_reset == 0.0) {
    ((int8_T *)ssGetDWork(S, 12))[0] = 0;
  } else {
    ((int8_T *)ssGetDWork(S, 12))[0] = 2;
  }
}

/* Termination for function-call system: '<S1>/CC_counting' */
void soc0_CC_counting_Term(SimStruct *const S)
{
}

/* Initial conditions for root system: '<Root>' */
#define MDL_INITIALIZE_CONDITIONS

static void mdlInitializeConditions(SimStruct *S)
{
  /* InitializeConditions for Atomic SubSystem: '<Root>/soc' */
  /* InitializeConditions for Delay: '<S1>/Delay' */
  memcpy(&((real_T *)ssGetDWork(S, 0))[0], ((real_T *)mxGetData(SOCv_InitalSOC(S))),
         40U * sizeof(real_T));

  /* InitializeConditions for Delay: '<S1>/Delay1' */
  ((real_T *)ssGetDWork(S, 1))[0] = 0.0;

  /* InitializeConditions for Chart: '<S1>/Chart' */
  ((uint8_T *)ssGetDWork(S, 8))[0] = 0U;
  ((uint8_T *)ssGetDWork(S, 7))[0] = soc0_IN_NO_ACTIVE_CHILD_f;
  if (ssIsFirstInitCond(S)) {
    /* InitializeConditions for Function Call SubSystem: '<S1>/key_on' */
    soc0_key_on_Init(S);

    /* End of InitializeConditions for SubSystem: '<S1>/key_on' */

    /* InitializeConditions for Function Call SubSystem: '<S1>/CC_counting' */
    soc0_CC_counting_Init(S);

    /* End of InitializeConditions for SubSystem: '<S1>/CC_counting' */
  }

  /* End of InitializeConditions for Chart: '<S1>/Chart' */

  /* InitializeConditions for UnitDelay: '<S5>/UD' */
  ((real_T *)ssGetDWork(S, 2))[0] = 0.0;

  /* End of InitializeConditions for SubSystem: '<Root>/soc' */
}

/* Start for root system: '<Root>' */
#define MDL_START

static void mdlStart(SimStruct *S)
{
  /* instance underlying S-Function data */
#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)
#  if defined(MATLAB_MEX_FILE)

  /* non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

#  endif

  soc0_malloc(S);
  if (ssGetErrorStatus(S) != (NULL) ) {
    return;
  }

#endif

  {
    int32_T i;
    B_soc0_T *_rtB;
    _rtB = ((B_soc0_T *) ssGetLocalBlockIO(S));

    /* Start for Atomic SubSystem: '<Root>/soc' */
    /* Start for Chart: '<S1>/Chart' incorporates:
     *  Start for SubSystem: '<S1>/key_on'
     */
    soc0_key_on_Start(S);

    /* Start for Merge: '<S1>/Merge1' */
    _rtB->Merge1 = 0.0;

    /* Start for DataStoreMemory: '<S1>/Data Store Memory2' */
    ((real_T *)ssGetDWork(S, 5))[0] = 0.0;
    for (i = 0; i < 40; i++) {
      /* Start for Merge: '<S1>/Merge2' */
      _rtB->Merge2[i] = 0.0;

      /* Start for DataStoreMemory: '<S1>/Data Store Memory' */
      ((real_T *)ssGetDWork(S, 3))[i] = (((real_T *)mxGetData(SOCv_InitalSOC(S)))
        [i]);

      /* Start for DataStoreMemory: '<S1>/Data Store Memory1' */
      ((real_T *)ssGetDWork(S, 4))[i] = (((real_T *)mxGetData(SOCv_InitalSOC(S)))
        [i]);

      /* Start for DataStoreMemory: '<S1>/Data Store Memory3' */
      ((real_T *)ssGetDWork(S, 6))[i] = (((real_T *)mxGetData
        (SOCv_factoryInitSohC(S)))[i]);

      /* Start for Outport: '<Root>/soc_C_factor' */
      ((real_T *)ssGetOutputPortSignal(S, 6))[i] =
        _rtB->OutportBufferForcapacity_degrad[i];
    }

    /* End of Start for SubSystem: '<Root>/soc' */
  }
}

/* Outputs for root system: '<Root>' */
static void mdlOutputs(SimStruct *S, int_T tid)
{
  real_T minV;
  boolean_T rtb_LogicalOperator;
  real_T rtb_SumofElements;
  int32_T i;
  B_soc0_T *_rtB;
  _rtB = ((B_soc0_T *) ssGetLocalBlockIO(S));

  /* Outputs for Atomic SubSystem: '<Root>/soc' */
  /* Logic: '<S1>/Logical Operator' incorporates:
   *  Inport: '<Root>/charger_contactor'
   *  Inport: '<Root>/main_contactor'
   */
  rtb_LogicalOperator = ((*((const boolean_T **)ssGetInputPortSignalPtrs(S, 2))
    [0]) || (*((const boolean_T **)ssGetInputPortSignalPtrs(S, 3))[0]));

  /* Delay: '<S1>/Delay' */
  memcpy(&_rtB->Delay[0], &((real_T *)ssGetDWork(S, 0))[0], 40U * sizeof(real_T));

  /* Delay: '<S1>/Delay1' */
  _rtB->Delay1 = ((real_T *)ssGetDWork(S, 1))[0];

  /* Chart: '<S1>/Chart' incorporates:
   *  Inport: '<Root>/cb_cmds'
   *  Inport: '<Root>/cell_voltages'
   *  Inport: '<Root>/pre_chg_contactor'
   *  Inport: '<Root>/soh_C_factors'
   *  Inport: '<Root>/vitm_pack_current'
   */
  /* Gateway: soc/Chart */
  /* During: soc/Chart */
  if (((uint8_T *)ssGetDWork(S, 8))[0] == 0U) {
    /* Entry: soc/Chart */
    ((uint8_T *)ssGetDWork(S, 8))[0] = 1U;

    /* Entry Internal: soc/Chart */
    /* Transition: '<S4>:8' */
    ((uint8_T *)ssGetDWork(S, 7))[0] = soc0_IN_init;

    /* Outputs for Function Call SubSystem: '<S1>/Init' */

    /* Entry Internal 'init': '<S4>:1' */
    /* Transition: '<S4>:44' */
    /* Transition: '<S4>:42' */
    /* Event: '<S4>:2' */
    soc0_Init(S, ((const real_T **)ssGetInputPortSignalPtrs(S, 1))[0],
              _rtB->Merge2, &_rtB->Merge1);

    /* End of Outputs for SubSystem: '<S1>/Init' */
  } else {
    switch (((uint8_T *)ssGetDWork(S, 7))[0]) {
     case soc0_IN_coulomb_counting:
      /* During 'coulomb_counting': '<S4>:4' */
      if ((!rtb_LogicalOperator) && (!*((const boolean_T **)
            ssGetInputPortSignalPtrs(S, 4))[0])) {
        /* Transition: '<S4>:30' */
        ((uint8_T *)ssGetDWork(S, 7))[0] = soc0_IN_dataStore;

        /* Outputs for Function Call SubSystem: '<S1>/dataStore' */
        /* DataStoreWrite: '<S7>/Data Store Write' incorporates:
         *  Inport: '<Root>/soh_C_factors'
         */
        /* Entry Internal 'dataStore': '<S4>:21' */
        /* Transition: '<S4>:78' */
        /* Transition: '<S4>:76' */
        /* Event: '<S4>:79' */
        memcpy(&((real_T *)ssGetDWork(S, 6))[0], ((const real_T **)
                ssGetInputPortSignalPtrs(S, 5))[0], 40U * sizeof(real_T));

        /* End of Outputs for SubSystem: '<S1>/dataStore' */
      } else {
        /* Outputs for Function Call SubSystem: '<S1>/CC_counting' */

        /* Transition: '<S4>:50' */
        /* Transition: '<S4>:49' */
        /* Event: '<S4>:3' */
        soc0_CC_counting(S, *((const real_T **)ssGetInputPortSignalPtrs(S, 0))[0],
                         ((const real_T **)ssGetInputPortSignalPtrs(S, 5))[0],
                         ((const real_T **)ssGetInputPortSignalPtrs(S, 1))[0],
                         ((const boolean_T **)ssGetInputPortSignalPtrs(S, 7))[0],
                         _rtB->Delay, _rtB->Delay1, _rtB->Merge2, &_rtB->Merge1);

        /* End of Outputs for SubSystem: '<S1>/CC_counting' */
      }
      break;

     case soc0_IN_dataStore:
      /* During 'dataStore': '<S4>:21' */
      /* Transition: '<S4>:81' */
      ((uint8_T *)ssGetDWork(S, 7))[0] = soc0_IN_end;
      break;

     case soc0_IN_end:
      /* During 'end': '<S4>:80' */
      if ((*((const boolean_T **)ssGetInputPortSignalPtrs(S, 4))[0]) ||
          rtb_LogicalOperator) {
        /* Transition: '<S4>:55' */
        ((uint8_T *)ssGetDWork(S, 7))[0] = soc0_IN_key_ON;

        /* Outputs for Function Call SubSystem: '<S1>/key_on' */

        /* Entry Internal 'key_ON': '<S4>:52' */
        /* Transition: '<S4>:60' */
        /* Transition: '<S4>:59' */
        /* Event: '<S4>:61' */
        soc0_key_on(S);

        /* End of Outputs for SubSystem: '<S1>/key_on' */
      }
      break;

     case soc0_IN_init:
      /* During 'init': '<S4>:1' */
      if ((*((const boolean_T **)ssGetInputPortSignalPtrs(S, 4))[0]) ||
          rtb_LogicalOperator) {
        /* Transition: '<S4>:54' */
        ((uint8_T *)ssGetDWork(S, 7))[0] = soc0_IN_key_ON;

        /* Outputs for Function Call SubSystem: '<S1>/key_on' */

        /* Entry Internal 'key_ON': '<S4>:52' */
        /* Transition: '<S4>:60' */
        /* Transition: '<S4>:59' */
        /* Event: '<S4>:61' */
        soc0_key_on(S);

        /* End of Outputs for SubSystem: '<S1>/key_on' */
      } else {
        /* Outputs for Function Call SubSystem: '<S1>/Init' */

        /* Transition: '<S4>:44' */
        /* Transition: '<S4>:42' */
        /* Event: '<S4>:2' */
        soc0_Init(S, ((const real_T **)ssGetInputPortSignalPtrs(S, 1))[0],
                  _rtB->Merge2, &_rtB->Merge1);

        /* End of Outputs for SubSystem: '<S1>/Init' */
      }
      break;

     default:
      /* During 'key_ON': '<S4>:52' */
      if ((*((const boolean_T **)ssGetInputPortSignalPtrs(S, 4))[0]) ||
          rtb_LogicalOperator) {
        /* Transition: '<S4>:53' */
        ((uint8_T *)ssGetDWork(S, 7))[0] = soc0_IN_coulomb_counting;

        /* Outputs for Function Call SubSystem: '<S1>/CC_counting' */

        /* Entry Internal 'coulomb_counting': '<S4>:4' */
        /* Transition: '<S4>:50' */
        /* Transition: '<S4>:49' */
        /* Event: '<S4>:3' */
        soc0_CC_counting(S, *((const real_T **)ssGetInputPortSignalPtrs(S, 0))[0],
                         ((const real_T **)ssGetInputPortSignalPtrs(S, 5))[0],
                         ((const real_T **)ssGetInputPortSignalPtrs(S, 1))[0],
                         ((const boolean_T **)ssGetInputPortSignalPtrs(S, 7))[0],
                         _rtB->Delay, _rtB->Delay1, _rtB->Merge2, &_rtB->Merge1);

        /* End of Outputs for SubSystem: '<S1>/CC_counting' */
      } else {
        /* Outputs for Function Call SubSystem: '<S1>/key_on' */

        /* Transition: '<S4>:60' */
        /* Transition: '<S4>:59' */
        /* Event: '<S4>:61' */
        soc0_key_on(S);

        /* End of Outputs for SubSystem: '<S1>/key_on' */
      }
      break;
    }
  }

  /* End of Chart: '<S1>/Chart' */

  /* DataStoreWrite: '<S1>/Data Store Write' */
  memcpy(&((real_T *)ssGetDWork(S, 3))[0], &_rtB->Merge2[0], 40U * sizeof(real_T));

  /* Sum: '<S1>/Sum of Elements' */
  rtb_SumofElements = _rtB->Merge2[0];
  for (i = 0; i < 39; i++) {
    rtb_SumofElements += _rtB->Merge2[i + 1];
  }

  /* End of Sum: '<S1>/Sum of Elements' */

  /* Product: '<S1>/Divide1' incorporates:
   *  Constant: '<S1>/Constant3'
   */
  _rtB->Divide1 = rtb_SumofElements / (*(real_T *)(mxGetData(SOCk_NumberInSeries
    (S))));

  /* Gain: '<S1>/Gain' */
  for (i = 0; i < 40; i++) {
    _rtB->Gain[i] = (*(real_T *)(mxGetData(SOCk_ToFractionFromPercentage(S)))) *
      _rtB->Merge2[i];
  }

  /* End of Gain: '<S1>/Gain' */

  /* MinMax: '<S1>/MinMax' */
  rtb_SumofElements = _rtB->Merge2[0];

  /* MinMax: '<S1>/MinMax1' */
  minV = _rtB->Merge2[0];
  for (i = 0; i < 39; i++) {
    /* MinMax: '<S1>/MinMax' */
    if (!((rtb_SumofElements >= _rtB->Merge2[i + 1]) || rtIsNaN(_rtB->Merge2[i +
          1]))) {
      rtb_SumofElements = _rtB->Merge2[i + 1];
    }

    /* MinMax: '<S1>/MinMax1' */
    if (!((minV <= _rtB->Merge2[i + 1]) || rtIsNaN(_rtB->Merge2[i + 1]))) {
      minV = _rtB->Merge2[i + 1];
    }
  }

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<S1>/Constant2'
   *  MinMax: '<S1>/MinMax'
   *  RelationalOperator: '<S1>/RelationalOperator'
   */
  if (rtb_SumofElements < (*(real_T *)(mxGetData(SOCk_SocMaxPercentage(S))))) {
    /* Switch: '<S1>/Switch1' incorporates:
     *  Constant: '<S1>/Constant4'
     *  MinMax: '<S1>/MinMax1'
     *  RelationalOperator: '<S1>/RelationalOperator1'
     */
    if (minV <= (*(real_T *)(mxGetData(SOCk_SocMinPercentage(S))))) {
      /* Outport: '<Root>/soc_pack_customer' incorporates:
       *  Constant: '<S1>/Constant5'
       */
      ((real_T *)ssGetOutputPortSignal(S, 1))[0] = 0.0;
    } else {
      /* Outport: '<Root>/soc_pack_customer' incorporates:
       *  Lookup_n-D: '<S1>/Customer interpolation'
       */
      ((real_T *)ssGetOutputPortSignal(S, 1))[0] = soc0_look1_binlx
        (_rtB->Divide1, soc0_ConstP.Customerinterpolation_bp01Data,
         soc0_ConstP.Customerinterpolation_tableData, 1U);
    }
  } else {
    /* Outport: '<Root>/soc_pack_customer' incorporates:
     *  Constant: '<S1>/Constant6'
     *  Switch: '<S1>/Switch1'
     */
    ((real_T *)ssGetOutputPortSignal(S, 1))[0] = 100.0;
  }

  /* End of Switch: '<S1>/Switch' */
  /* End of Outputs for SubSystem: '<Root>/soc' */

  /* Outport: '<Root>/soc_cells_pct' */
  memcpy(&((real_T *)ssGetOutputPortSignal(S, 0))[0], &_rtB->Merge2[0], 40U *
         sizeof(real_T));

  /* Outputs for Atomic SubSystem: '<Root>/soc' */
  /* Outport: '<Root>/soc_cell_max' incorporates:
   *  MinMax: '<S1>/MinMax'
   */
  ((real_T *)ssGetOutputPortSignal(S, 2))[0] = rtb_SumofElements;

  /* Outport: '<Root>/soc_cell_min' incorporates:
   *  MinMax: '<S1>/MinMax1'
   */
  ((real_T *)ssGetOutputPortSignal(S, 3))[0] = minV;

  /* End of Outputs for SubSystem: '<Root>/soc' */

  /* Outport: '<Root>/soc_pack_actual' */
  ((real_T *)ssGetOutputPortSignal(S, 4))[0] = _rtB->Divide1;

  /* Outputs for Atomic SubSystem: '<Root>/soc' */
  /* Outport: '<Root>/soc_rate_high' incorporates:
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S2>/Constant'
   *  Product: '<S1>/Divide2'
   *  RelationalOperator: '<S2>/Compare'
   *  Sum: '<S5>/Diff'
   *  UnitDelay: '<S5>/UD'
   */
  ((boolean_T *)ssGetOutputPortSignal(S, 5))[0] = ((_rtB->Divide1 - ((real_T *)
    ssGetDWork(S, 2))[0]) / (*(real_T *)(mxGetData(SOCk_stepSize(S)))) <= -1.0);

  /* End of Outputs for SubSystem: '<Root>/soc' */
  UNUSED_PARAMETER(tid);
}

/* Update for root system: '<Root>' */
#define MDL_UPDATE

static void mdlUpdate(SimStruct *S, int_T tid)
{
  B_soc0_T *_rtB;
  _rtB = ((B_soc0_T *) ssGetLocalBlockIO(S));

  /* Update for Atomic SubSystem: '<Root>/soc' */
  /* Update for Delay: '<S1>/Delay' */
  memcpy(&((real_T *)ssGetDWork(S, 0))[0], &_rtB->Gain[0], 40U * sizeof(real_T));

  /* Update for Delay: '<S1>/Delay1' */
  ((real_T *)ssGetDWork(S, 1))[0] = _rtB->Merge1;

  /* Update for UnitDelay: '<S5>/UD' */
  ((real_T *)ssGetDWork(S, 2))[0] = _rtB->Divide1;

  /* End of Update for SubSystem: '<Root>/soc' */
  UNUSED_PARAMETER(tid);
}

/* Termination for root system: '<Root>' */
static void mdlTerminate(SimStruct *S)
{

#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)

  if (ssGetUserData(S) != (NULL) ) {
    rt_FREE(ssGetLocalBlockIO(S));
  }

  rt_FREE(ssGetUserData(S));

#endif

}

/* This function checks the attributes of tunable parameters. */
#define MDL_CHECK_PARAMETERS
#if defined(MDL_CHECK_PARAMETERS) && defined(MATLAB_MEX_FILE)

static void mdlCheckParameters(SimStruct *S)
{
  /* Parameter check for 'C_OcvTable' */
  if (mxIsComplex(ssGetSFcnParam(S, 0))) {
    ssSetErrorStatus(S,"Parameter 'C_OcvTable' has to be a non complex array.");
    return;
  }

  if (!mxIsDouble(ssGetSFcnParam(S, 0))) {
    ssSetErrorStatus(S,"Parameter 'C_OcvTable' has to be a double array.");
    return;
  }

  if ((mxGetNumberOfDimensions(ssGetSFcnParam(S, 0)) != 2) ||
      (mxGetDimensions(ssGetSFcnParam(S, 0))[0] != 1) ||
      (mxGetDimensions(ssGetSFcnParam(S, 0))[1] != 151) ) {
    ssSetErrorStatus(S,"Parameter 'C_OcvTable' has to be a [1x151] array.");
    return;
  }

  /* Parameter check for 'C_SocTable' */
  if (mxIsComplex(ssGetSFcnParam(S, 1))) {
    ssSetErrorStatus(S,"Parameter 'C_SocTable' has to be a non complex array.");
    return;
  }

  if (!mxIsDouble(ssGetSFcnParam(S, 1))) {
    ssSetErrorStatus(S,"Parameter 'C_SocTable' has to be a double array.");
    return;
  }

  if ((mxGetNumberOfDimensions(ssGetSFcnParam(S, 1)) != 2) ||
      (mxGetDimensions(ssGetSFcnParam(S, 1))[0] != 1) ||
      (mxGetDimensions(ssGetSFcnParam(S, 1))[1] != 151) ) {
    ssSetErrorStatus(S,"Parameter 'C_SocTable' has to be a [1x151] array.");
    return;
  }

  /* Parameter check for 'SOCc_CapacityFilterCoeff' */
  if (mxIsComplex(ssGetSFcnParam(S, 2))) {
    ssSetErrorStatus(S,
                     "Parameter 'SOCc_CapacityFilterCoeff' has to be a non complex array.");
    return;
  }

  if (!mxIsDouble(ssGetSFcnParam(S, 2))) {
    ssSetErrorStatus(S,
                     "Parameter 'SOCc_CapacityFilterCoeff' has to be a double array.");
    return;
  }

  if ((mxGetNumberOfDimensions(ssGetSFcnParam(S, 2)) != 2) ||
      (mxGetDimensions(ssGetSFcnParam(S, 2))[0] != 1) ||
      (mxGetDimensions(ssGetSFcnParam(S, 2))[1] != 1) ) {
    ssSetErrorStatus(S,
                     "Parameter 'SOCc_CapacityFilterCoeff' has to be a [1x1] array.");
    return;
  }

  /* Parameter check for 'SOCk_CellBalancingResistor' */
  if (mxIsComplex(ssGetSFcnParam(S, 3))) {
    ssSetErrorStatus(S,
                     "Parameter 'SOCk_CellBalancingResistor' has to be a non complex array.");
    return;
  }

  if (!mxIsDouble(ssGetSFcnParam(S, 3))) {
    ssSetErrorStatus(S,
                     "Parameter 'SOCk_CellBalancingResistor' has to be a double array.");
    return;
  }

  if ((mxGetNumberOfDimensions(ssGetSFcnParam(S, 3)) != 2) ||
      (mxGetDimensions(ssGetSFcnParam(S, 3))[0] != 1) ||
      (mxGetDimensions(ssGetSFcnParam(S, 3))[1] != 1) ) {
    ssSetErrorStatus(S,
                     "Parameter 'SOCk_CellBalancingResistor' has to be a [1x1] array.");
    return;
  }

  /* Parameter check for 'SOCk_CellCapacity' */
  if (mxIsComplex(ssGetSFcnParam(S, 4))) {
    ssSetErrorStatus(S,
                     "Parameter 'SOCk_CellCapacity' has to be a non complex array.");
    return;
  }

  if (!mxIsDouble(ssGetSFcnParam(S, 4))) {
    ssSetErrorStatus(S,"Parameter 'SOCk_CellCapacity' has to be a double array.");
    return;
  }

  if ((mxGetNumberOfDimensions(ssGetSFcnParam(S, 4)) != 2) ||
      (mxGetDimensions(ssGetSFcnParam(S, 4))[0] != 1) ||
      (mxGetDimensions(ssGetSFcnParam(S, 4))[1] != 1) ) {
    ssSetErrorStatus(S,"Parameter 'SOCk_CellCapacity' has to be a [1x1] array.");
    return;
  }

  /* Parameter check for 'SOCk_HrsToSec' */
  if (mxIsComplex(ssGetSFcnParam(S, 5))) {
    ssSetErrorStatus(S,
                     "Parameter 'SOCk_HrsToSec' has to be a non complex array.");
    return;
  }

  if (!mxIsDouble(ssGetSFcnParam(S, 5))) {
    ssSetErrorStatus(S,"Parameter 'SOCk_HrsToSec' has to be a double array.");
    return;
  }

  if ((mxGetNumberOfDimensions(ssGetSFcnParam(S, 5)) != 2) ||
      (mxGetDimensions(ssGetSFcnParam(S, 5))[0] != 1) ||
      (mxGetDimensions(ssGetSFcnParam(S, 5))[1] != 1) ) {
    ssSetErrorStatus(S,"Parameter 'SOCk_HrsToSec' has to be a [1x1] array.");
    return;
  }

  /* Parameter check for 'SOCk_NumberInSeries' */
  if (mxIsComplex(ssGetSFcnParam(S, 6))) {
    ssSetErrorStatus(S,
                     "Parameter 'SOCk_NumberInSeries' has to be a non complex array.");
    return;
  }

  if (!mxIsDouble(ssGetSFcnParam(S, 6))) {
    ssSetErrorStatus(S,
                     "Parameter 'SOCk_NumberInSeries' has to be a double array.");
    return;
  }

  if ((mxGetNumberOfDimensions(ssGetSFcnParam(S, 6)) != 2) ||
      (mxGetDimensions(ssGetSFcnParam(S, 6))[0] != 1) ||
      (mxGetDimensions(ssGetSFcnParam(S, 6))[1] != 1) ) {
    ssSetErrorStatus(S,
                     "Parameter 'SOCk_NumberInSeries' has to be a [1x1] array.");
    return;
  }

  /* Parameter check for 'SOCk_SocMaxPercentage' */
  if (mxIsComplex(ssGetSFcnParam(S, 7))) {
    ssSetErrorStatus(S,
                     "Parameter 'SOCk_SocMaxPercentage' has to be a non complex array.");
    return;
  }

  if (!mxIsDouble(ssGetSFcnParam(S, 7))) {
    ssSetErrorStatus(S,
                     "Parameter 'SOCk_SocMaxPercentage' has to be a double array.");
    return;
  }

  if ((mxGetNumberOfDimensions(ssGetSFcnParam(S, 7)) != 2) ||
      (mxGetDimensions(ssGetSFcnParam(S, 7))[0] != 1) ||
      (mxGetDimensions(ssGetSFcnParam(S, 7))[1] != 1) ) {
    ssSetErrorStatus(S,
                     "Parameter 'SOCk_SocMaxPercentage' has to be a [1x1] array.");
    return;
  }

  /* Parameter check for 'SOCk_SocMinPercentage' */
  if (mxIsComplex(ssGetSFcnParam(S, 8))) {
    ssSetErrorStatus(S,
                     "Parameter 'SOCk_SocMinPercentage' has to be a non complex array.");
    return;
  }

  if (!mxIsDouble(ssGetSFcnParam(S, 8))) {
    ssSetErrorStatus(S,
                     "Parameter 'SOCk_SocMinPercentage' has to be a double array.");
    return;
  }

  if ((mxGetNumberOfDimensions(ssGetSFcnParam(S, 8)) != 2) ||
      (mxGetDimensions(ssGetSFcnParam(S, 8))[0] != 1) ||
      (mxGetDimensions(ssGetSFcnParam(S, 8))[1] != 1) ) {
    ssSetErrorStatus(S,
                     "Parameter 'SOCk_SocMinPercentage' has to be a [1x1] array.");
    return;
  }

  /* Parameter check for 'SOCk_ToFractionFromPercentage' */
  if (mxIsComplex(ssGetSFcnParam(S, 9))) {
    ssSetErrorStatus(S,
                     "Parameter 'SOCk_ToFractionFromPercentage' has to be a non complex array.");
    return;
  }

  if (!mxIsDouble(ssGetSFcnParam(S, 9))) {
    ssSetErrorStatus(S,
                     "Parameter 'SOCk_ToFractionFromPercentage' has to be a double array.");
    return;
  }

  if ((mxGetNumberOfDimensions(ssGetSFcnParam(S, 9)) != 2) ||
      (mxGetDimensions(ssGetSFcnParam(S, 9))[0] != 1) ||
      (mxGetDimensions(ssGetSFcnParam(S, 9))[1] != 1) ) {
    ssSetErrorStatus(S,
                     "Parameter 'SOCk_ToFractionFromPercentage' has to be a [1x1] array.");
    return;
  }

  /* Parameter check for 'SOCk_ToPercentage' */
  if (mxIsComplex(ssGetSFcnParam(S, 10))) {
    ssSetErrorStatus(S,
                     "Parameter 'SOCk_ToPercentage' has to be a non complex array.");
    return;
  }

  if (!mxIsDouble(ssGetSFcnParam(S, 10))) {
    ssSetErrorStatus(S,"Parameter 'SOCk_ToPercentage' has to be a double array.");
    return;
  }

  if ((mxGetNumberOfDimensions(ssGetSFcnParam(S, 10)) != 2) ||
      (mxGetDimensions(ssGetSFcnParam(S, 10))[0] != 1) ||
      (mxGetDimensions(ssGetSFcnParam(S, 10))[1] != 1) ) {
    ssSetErrorStatus(S,"Parameter 'SOCk_ToPercentage' has to be a [1x1] array.");
    return;
  }

  /* Parameter check for 'SOCk_stepSize' */
  if (mxIsComplex(ssGetSFcnParam(S, 11))) {
    ssSetErrorStatus(S,
                     "Parameter 'SOCk_stepSize' has to be a non complex array.");
    return;
  }

  if (!mxIsDouble(ssGetSFcnParam(S, 11))) {
    ssSetErrorStatus(S,"Parameter 'SOCk_stepSize' has to be a double array.");
    return;
  }

  if ((mxGetNumberOfDimensions(ssGetSFcnParam(S, 11)) != 2) ||
      (mxGetDimensions(ssGetSFcnParam(S, 11))[0] != 1) ||
      (mxGetDimensions(ssGetSFcnParam(S, 11))[1] != 1) ) {
    ssSetErrorStatus(S,"Parameter 'SOCk_stepSize' has to be a [1x1] array.");
    return;
  }

  /* Parameter check for 'SOCv_InitalSOC' */
  if (mxIsComplex(ssGetSFcnParam(S, 12))) {
    ssSetErrorStatus(S,
                     "Parameter 'SOCv_InitalSOC' has to be a non complex array.");
    return;
  }

  if (!mxIsDouble(ssGetSFcnParam(S, 12))) {
    ssSetErrorStatus(S,"Parameter 'SOCv_InitalSOC' has to be a double array.");
    return;
  }

  if ((mxGetNumberOfDimensions(ssGetSFcnParam(S, 12)) != 2) ||
      (mxGetDimensions(ssGetSFcnParam(S, 12))[0] != 1) ||
      (mxGetDimensions(ssGetSFcnParam(S, 12))[1] != 40) ) {
    ssSetErrorStatus(S,"Parameter 'SOCv_InitalSOC' has to be a [1x40] array.");
    return;
  }

  /* Parameter check for 'SOCv_factoryInitSohC' */
  if (mxIsComplex(ssGetSFcnParam(S, 13))) {
    ssSetErrorStatus(S,
                     "Parameter 'SOCv_factoryInitSohC' has to be a non complex array.");
    return;
  }

  if (!mxIsDouble(ssGetSFcnParam(S, 13))) {
    ssSetErrorStatus(S,
                     "Parameter 'SOCv_factoryInitSohC' has to be a double array.");
    return;
  }

  if ((mxGetNumberOfDimensions(ssGetSFcnParam(S, 13)) != 2) ||
      (mxGetDimensions(ssGetSFcnParam(S, 13))[0] != 40) ||
      (mxGetDimensions(ssGetSFcnParam(S, 13))[1] != 1) ) {
    ssSetErrorStatus(S,
                     "Parameter 'SOCv_factoryInitSohC' has to be a [40x1] array.");
    return;
  }
}

#endif                                 /* MDL_CHECK_PARAMETERS */

#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)
#  include "soc0_mid.h"
#endif

/* Function to initialize sizes. */
static void mdlInitializeSizes(SimStruct *S)
{
  ssSetNumSampleTimes(S, 1);           /* Number of sample times */
  ssSetNumContStates(S, 0);            /* Number of continuous states */
  ssSetNumNonsampledZCs(S, 0);         /* Number of nonsampled ZCs */

  /* Number of output ports */
  if (!ssSetNumOutputPorts(S, 7))
    return;

  /* outport number: 0 */
  if (!ssSetOutputPortVectorDimension(S, 0, 40))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 0, SS_DOUBLE);
  }

  ssSetOutputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);

  /* outport number: 1 */
  if (!ssSetOutputPortVectorDimension(S, 1, 1))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 1, SS_DOUBLE);
  }

  ssSetOutputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);

  /* outport number: 2 */
  if (!ssSetOutputPortVectorDimension(S, 2, 1))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 2, SS_DOUBLE);
  }

  ssSetOutputPortOptimOpts(S, 2, SS_REUSABLE_AND_LOCAL);

  /* outport number: 3 */
  if (!ssSetOutputPortVectorDimension(S, 3, 1))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 3, SS_DOUBLE);
  }

  ssSetOutputPortOptimOpts(S, 3, SS_REUSABLE_AND_LOCAL);

  /* outport number: 4 */
  if (!ssSetOutputPortVectorDimension(S, 4, 1))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 4, SS_DOUBLE);
  }

  ssSetOutputPortOptimOpts(S, 4, SS_REUSABLE_AND_LOCAL);

  /* outport number: 5 */
  if (!ssSetOutputPortVectorDimension(S, 5, 1))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 5, SS_BOOLEAN);
  }

  ssSetOutputPortOptimOpts(S, 5, SS_REUSABLE_AND_LOCAL);

  /* outport number: 6 */
  if (!ssSetOutputPortVectorDimension(S, 6, 40))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 6, SS_DOUBLE);
  }

  ssSetOutputPortOptimOpts(S, 6, SS_REUSABLE_AND_LOCAL);

  /* Number of input ports */
  if (!ssSetNumInputPorts(S, 8))
    return;

  /* inport number: 0 */
  {
    if (!ssSetInputPortVectorDimension(S, 0, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 0, SS_DOUBLE);
    }

    ssSetInputPortDirectFeedThrough(S, 0, 1);
    ssSetInputPortOverWritable(S, 0, 0);
    ssSetInputPortOptimOpts(S, 0, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 1 */
  {
    if (!ssSetInputPortVectorDimension(S, 1, 40))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 1, SS_DOUBLE);
    }

    ssSetInputPortDirectFeedThrough(S, 1, 1);
    ssSetInputPortOverWritable(S, 1, 0);
    ssSetInputPortOptimOpts(S, 1, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 2 */
  {
    if (!ssSetInputPortVectorDimension(S, 2, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 2, SS_BOOLEAN);
    }

    ssSetInputPortDirectFeedThrough(S, 2, 1);
    ssSetInputPortOverWritable(S, 2, 0);
    ssSetInputPortOptimOpts(S, 2, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 3 */
  {
    if (!ssSetInputPortVectorDimension(S, 3, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 3, SS_BOOLEAN);
    }

    ssSetInputPortDirectFeedThrough(S, 3, 1);
    ssSetInputPortOverWritable(S, 3, 0);
    ssSetInputPortOptimOpts(S, 3, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 4 */
  {
    if (!ssSetInputPortVectorDimension(S, 4, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 4, SS_BOOLEAN);
    }

    ssSetInputPortDirectFeedThrough(S, 4, 1);
    ssSetInputPortOverWritable(S, 4, 0);
    ssSetInputPortOptimOpts(S, 4, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 5 */
  {
    if (!ssSetInputPortVectorDimension(S, 5, 40))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 5, SS_DOUBLE);
    }

    ssSetInputPortDirectFeedThrough(S, 5, 1);
    ssSetInputPortOverWritable(S, 5, 0);
    ssSetInputPortOptimOpts(S, 5, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 6 */
  {
    if (!ssSetInputPortVectorDimension(S, 6, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 6, SS_BOOLEAN);
    }

    ssSetInputPortDirectFeedThrough(S, 6, 1);
    ssSetInputPortOverWritable(S, 6, 0);
    ssSetInputPortOptimOpts(S, 6, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 7 */
  {
    if (!ssSetInputPortVectorDimension(S, 7, 40))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 7, SS_BOOLEAN);
    }

    ssSetInputPortDirectFeedThrough(S, 7, 1);
    ssSetInputPortOverWritable(S, 7, 0);
    ssSetInputPortOptimOpts(S, 7, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  ssSetRTWGeneratedSFcn(S, 1);         /* Generated S-function */

  /* DWork */
  if (!ssSetNumDWork(S, 16)) {
    return;
  }

  /* '<S1>/Delay': DSTATE */
  ssSetDWorkName(S, 0, "DWORK0");
  ssSetDWorkWidth(S, 0, 40);
  ssSetDWorkUsedAsDState(S, 0, 1);

  /* '<S1>/Delay1': DSTATE */
  ssSetDWorkName(S, 1, "DWORK1");
  ssSetDWorkWidth(S, 1, 1);
  ssSetDWorkUsedAsDState(S, 1, 1);

  /* '<S5>/UD': DSTATE */
  ssSetDWorkName(S, 2, "DWORK2");
  ssSetDWorkWidth(S, 2, 1);
  ssSetDWorkUsedAsDState(S, 2, 1);

  /* '<S1>/Data Store Memory': dsmMem */
  ssSetDWorkName(S, 3, "DWORK3");
  ssSetDWorkWidth(S, 3, 40);

  /* '<S1>/Data Store Memory1': dsmMem */
  ssSetDWorkName(S, 4, "DWORK4");
  ssSetDWorkWidth(S, 4, 40);

  /* '<S1>/Data Store Memory2': dsmMem */
  ssSetDWorkName(S, 5, "DWORK5");
  ssSetDWorkWidth(S, 5, 1);

  /* '<S1>/Data Store Memory3': dsmMem */
  ssSetDWorkName(S, 6, "DWORK6");
  ssSetDWorkWidth(S, 6, 40);

  /* '<S1>/Chart': DWORK2 */
  ssSetDWorkName(S, 7, "DWORK7");
  ssSetDWorkWidth(S, 7, 1);
  ssSetDWorkDataType(S, 7, SS_UINT8);

  /* '<S1>/Chart': DWORK1 */
  ssSetDWorkName(S, 8, "DWORK8");
  ssSetDWorkWidth(S, 8, 1);
  ssSetDWorkDataType(S, 8, SS_UINT8);

  /* '<S8>/Chart': DWORK1 */
  ssSetDWorkName(S, 9, "DWORK9");
  ssSetDWorkWidth(S, 9, 1);
  ssSetDWorkDataType(S, 9, SS_UINT8);

  /* '<S8>/Chart': DWORK2 */
  ssSetDWorkName(S, 10, "DWORK10");
  ssSetDWorkWidth(S, 10, 1);
  ssSetDWorkDataType(S, 10, SS_UINT8);

  /* '<S3>/Discrete-Time Integrator': DSTATE */
  ssSetDWorkName(S, 11, "DWORK11");
  ssSetDWorkWidth(S, 11, 40);
  ssSetDWorkUsedAsDState(S, 11, 1);

  /* '<S3>/Discrete-Time Integrator': PrevResetState */
  ssSetDWorkName(S, 12, "DWORK12");
  ssSetDWorkWidth(S, 12, 1);
  ssSetDWorkDataType(S, 12, SS_INT8);

  /* '<S3>/Discrete-Time Integrator': IC_LOADING */
  ssSetDWorkName(S, 13, "DWORK13");
  ssSetDWorkWidth(S, 13, 1);
  ssSetDWorkDataType(S, 13, SS_UINT8);

  /* '<S9>/Delay': DSTATE */
  ssSetDWorkName(S, 14, "DWORK14");
  ssSetDWorkWidth(S, 14, 40);
  ssSetDWorkUsedAsDState(S, 14, 1);

  /* '<S9>/Delay': icLoad */
  ssSetDWorkName(S, 15, "DWORK15");
  ssSetDWorkWidth(S, 15, 1);
  ssSetDWorkDataType(S, 15, SS_UINT8);

  /* Tunable Parameters */
  ssSetNumSFcnParams(S, 14);

  /* Number of expected parameters */
#if defined(MATLAB_MEX_FILE)

  if (ssGetNumSFcnParams(S) == ssGetSFcnParamsCount(S)) {

#if defined(MDL_CHECK_PARAMETERS)

    mdlCheckParameters(S);

#endif                                 /* MDL_CHECK_PARAMETERS */

    if (ssGetErrorStatus(S) != (NULL) ) {
      return;
    }
  } else {
    return;                            /* Parameter mismatch will be reported by Simulink */
  }

#endif                                 /* MATLAB_MEX_FILE */

  /* Options */
  ssSetOptions(S, (SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE |
                   SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME ));

#if SS_SFCN_FOR_SIM

  {
    ssSupportsMultipleExecInstances(S, false);
    ssRegisterMsgForNotSupportingMultiExecInst(S,
      "<diag_root><diag id=\"Simulink:blocks:BlockDoesNotSupportMultiExecInstances\"><arguments><arg type=\"encoded\">cwBvAGMAMAAvAHMAbwBjAC8AawBlAHkAXwBvAG4ALwBEAGEAdABhACAAUwB0AG8AcgBlACAAUgBlAGEAZAAAAA==</arg><arg type=\"encoded\">PABfAF8AaQBpAFMAUwBfAF8APgA8AC8AXwBfAGkAaQBTAFMAXwBfAD4AAAA=</arg><arg type=\"encoded\">PABfAF8AaQB0AGUAcgBCAGwAawBfAF8APgA8AC8AXwBfAGkAdABlAHIAQgBsAGsAXwBfAD4AAAA=</arg></arguments></diag>\n</diag_root>");
    ssHasStateInsideForEachSS(S, false);
    ssSetModelReferenceSampleTimeInheritanceRule(S,
      USE_DEFAULT_FOR_DISCRETE_INHERITANCE);
  }

#endif

}

/* Function to initialize sample times. */
static void mdlInitializeSampleTimes(SimStruct *S)
{
  ssSetSampleTime(S, 0, INHERITED_SAMPLE_TIME);
  ssSetOffsetTime(S, 0, 0.0);
}

#if defined(MATLAB_MEX_FILE)
# include "fixedpoint.c"
# include "simulink.c"
#else
# undef S_FUNCTION_NAME
# define S_FUNCTION_NAME               soc0_sf
# include "cg_sfun.h"
#endif                                 /* defined(MATLAB_MEX_FILE) */
