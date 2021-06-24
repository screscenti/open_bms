/*
 *****************************************************************************
 *
 *  File:                     soh_private.h
 *  Description:              Real-Time Workshop code generated for Simulink
 *                            model soh.
 *
 *  Model name:               soh
 *  Model date:
 *  Model version:            1.268
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
#ifndef RTW_HEADER_soh_private_h_
#define RTW_HEADER_soh_private_h_
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

/********* Global variables and prototypes *********/
extern const FREAL rtCP_pooled_hoBTSi5HXHjx[303];
extern const FREAL rtCP_pooled_zfGSF9vZXj7x[3];
extern const FREAL rtCP_pooled_rHx3pp1Yztcu[101];
extern const U32 rtCP_pooled_JXRUI9h3ixHt[2];

#define rtCP_uDLookupTable1_tableData  rtCP_pooled_hoBTSi5HXHjx  /* Expression: bmsc_InternalDischgResistZ
                                                                  * Referenced by: '<S5>/2-D Lookup Table1'
                                                                  */
#define rtCP_uDLookupTable1_bp01Data   rtCP_pooled_zfGSF9vZXj7x  /* Expression: bmsc_InternalDischgResistX
                                                                  * Referenced by: '<S5>/2-D Lookup Table1'
                                                                  */
#define rtCP_uDLookupTable1_bp02Data   rtCP_pooled_rHx3pp1Yztcu  /* Expression: bmsc_InternalDischgResistY
                                                                  * Referenced by: '<S5>/2-D Lookup Table1'
                                                                  */
#define rtCP_uDLookupTable1_maxIndex   rtCP_pooled_JXRUI9h3ixHt  /* Computed Parameter: uDLookupTable1_maxIndex
                                                                  * Referenced by: '<S5>/2-D Lookup Table1'
                                                                  */
#endif                                 /* RTW_HEADER_soh_private_h_ */

/* end of file */
