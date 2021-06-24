/*
 * soc0_sf_private.h
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

#ifndef RTW_HEADER_soc0_sf_private_h_
#define RTW_HEADER_soc0_sf_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#if !defined(ss_VALIDATE_MEMORY)
#define ss_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
 ssSetErrorStatus(S, RT_MEMORY_ALLOCATION_ERROR);\
 }
#endif

#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)                   if((ptr) != (NULL)) {\
 free((ptr));\
 (ptr) = (NULL);\
 }
#else

/* Visual and other windows compilers declare free without const */
#define rt_FREE(ptr)                   if((ptr) != (NULL)) {\
 free((void *)(ptr));\
 (ptr) = (NULL);\
 }
#endif
#endif

/*
 * Tunable Parameters
 *
 * Note: Tunable parameters with Auto storage class are treated as S-Function
 * parameters in the generated S-Function Target.  The generated
 * s-function will declare them as parameters and verify correct data
 * types/sizes are maintained.  The parameters are propagated to nested
 * non-inlined S-Functions
 *
 */
#if !defined(RTW_GENERATED_SFCN_TUNABLE_PRMS_soc0_sf)
#define C_OcvTable(S)                  _ssGetSFcnParam(S,0)
#define C_SocTable(S)                  _ssGetSFcnParam(S,1)
#define SOCc_CapacityFilterCoeff(S)    _ssGetSFcnParam(S,2)
#define SOCk_CellBalancingResistor(S)  _ssGetSFcnParam(S,3)
#define SOCk_CellCapacity(S)           _ssGetSFcnParam(S,4)
#define SOCk_HrsToSec(S)               _ssGetSFcnParam(S,5)
#define SOCk_NumberInSeries(S)         _ssGetSFcnParam(S,6)
#define SOCk_SocMaxPercentage(S)       _ssGetSFcnParam(S,7)
#define SOCk_SocMinPercentage(S)       _ssGetSFcnParam(S,8)
#define SOCk_ToFractionFromPercentage(S) _ssGetSFcnParam(S,9)
#define SOCk_ToPercentage(S)           _ssGetSFcnParam(S,10)
#define SOCk_stepSize(S)               _ssGetSFcnParam(S,11)
#define SOCv_InitalSOC(S)              _ssGetSFcnParam(S,12)
#define SOCv_factoryInitSohC(S)        _ssGetSFcnParam(S,13)
#endif                                 /* RTW_GENERATED_SFCN_TUNABLE_PRMS_soc0_sf */

extern uint32_T soc0_plook_evenc(real_T u, real_T bp0, real_T bpSpace, uint32_T
  maxIndex, real_T *fraction);
extern real_T soc0_intrp1d_l(uint32_T bpIndex, real_T frac, const real_T table[]);
extern real_T soc0_look1_binlx(real_T u0, const real_T bp0[], const real_T
  table[], uint32_T maxIndex);
void soc0_Init(SimStruct * const S, const real_T rtu_cell_voltages[40], real_T
               rty_soc_cells_pct[40], real_T *rty_cc_integration_reset);
void soc0_Subsystem_Start(B_Subsystem_soc0_T *localB);
void soc0_Subsystem(SimStruct * const S, const real_T rtu_cell_voltages[40],
                    B_Subsystem_soc0_T *localB, real_T rtd_CCounting_soc_store
                    [40]);
void soc0_CdegradeCalc_Init(SimStruct * const S);
void soc0_CdegradeCalc_Start(B_CdegradeCalc_soc0_T *localB);
void soc0_CdegradeCalc(SimStruct * const S, const real_T rtu_keyON_ocvsoc[40],
  const real_T rtu_lastChgInitsoc[40], const real_T rtu_lastChgCCsoc[40], const
  real_T rtu_soh_C_factors[40], B_CdegradeCalc_soc0_T *localB);
void soc0_saveChgInitSoc(const real_T rtu_keyON_ocvsoc[40], real_T
  rtd_charging_initial_soc[40]);
void soc0_lastCycleUpdate(boolean_T rtu_chargingC, real_T
  *rtd_last_cycle_charging);
void soc0_CC_counting_Init(SimStruct * const S);
void soc0_CC_counting(SimStruct * const S, real_T rtu_pack_current, const real_T
                      rtu_soh_C_factor[40], const real_T rtu_cell_voltages[40],
                      const boolean_T rtu_cb_cmds[40], const real_T
                      rtu_integration_initial_soc[40], real_T
                      rtu_integration_reset, real_T rty_soc_cells_pct[40],
                      real_T *rty_cc_integration_reset);
void soc0_key_on_Init(SimStruct * const S);
void soc0_key_on_Start(SimStruct * const S);
void soc0_key_on(SimStruct * const S);

#endif                                 /* RTW_HEADER_soc0_sf_private_h_ */
