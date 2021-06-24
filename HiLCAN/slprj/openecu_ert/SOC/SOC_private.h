/*
 *****************************************************************************
 *
 *  File:                     SOC_private.h
 *  Description:              Real-Time Workshop code generated for Simulink
 *                            model SOC.
 *
 *  Model name:               SOC
 *  Model date:
 *  Model version:            1.297
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
#ifndef RTW_HEADER_SOC_private_h_
#define RTW_HEADER_SOC_private_h_
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "zero_crossing_types.h"

/********* Macros *********/

/********* Global structure definitions *********/

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        (*((rtm)->errorStatus))
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   (*((rtm)->errorStatus) = (val))
#endif

#ifndef rtmGetErrorStatusPointer
# define rtmGetErrorStatusPointer(rtm) (rtm)->errorStatus
#endif

#ifndef rtmSetErrorStatusPointer
# define rtmSetErrorStatusPointer(rtm, val) ((rtm)->errorStatus = (val))
#endif

/* Constant parameters with dynamic initialization (auto storage) */
typedef struct {
  /* Pooled Parameter (Expression: C_SocTable)
   * Referenced by:
   *   '<S6>/OCV - SOC Lookup'
   *   '<S11>/OCV - SOC Lookup'
   */
  FREAL pooled1[151];
} ConstParamWithInit_SOC;

/********* Global variables and prototypes *********/
extern const FREAL rtCP_pooled_crmsjf9AvgoG[2];
extern const FREAL rtCP_pooled_6eAXXCL9mytV[2];

#define rtCP_Customerinterpolation_tableData rtCP_pooled_crmsjf9AvgoG/* Expression: [0 100]
                                                                      * Referenced by: '<S1>/Customer interpolation'
                                                                      */
#define rtCP_Customerinterpolation_bp01Data rtCP_pooled_6eAXXCL9mytV/* Expression: [SOCk_SocMinPercentage SOCk_SocMaxPercentage]
                                                                     * Referenced by: '<S1>/Customer interpolation'
                                                                     */

/* Constant parameters with dynamic initialization (auto storage) */
extern ConstParamWithInit_SOC SOC_ConstWithInitP;

#endif                                 /* RTW_HEADER_SOC_private_h_ */

/* end of file */
