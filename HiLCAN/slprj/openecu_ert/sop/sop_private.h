/*
 *****************************************************************************
 *
 *  File:                     sop_private.h
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
#ifndef RTW_HEADER_sop_private_h_
#define RTW_HEADER_sop_private_h_
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
extern const FREAL rtCP_pooled_l4T2uMd4WbDc[101];
extern const FREAL rtCP_pooled_y0kYFIWCa3nN[303];
extern const U32 rtCP_pooled_JXRUI9h3ixHt[2];

#define rtCP_dischg_internal_resistance_tabl rtCP_pooled_hoBTSi5HXHjx/* Expression: bmsc_InternalDischgResistZ
                                                                      * Referenced by: '<S1>/dischg_internal_resistance_table'
                                                                      */
#define rtCP_dischg_internal_resistance_ta_k rtCP_pooled_zfGSF9vZXj7x/* Expression: bmsc_InternalDischgResistX
                                                                      * Referenced by: '<S1>/dischg_internal_resistance_table'
                                                                      */
#define rtCP_dischg_internal_resistance_ta_g rtCP_pooled_rHx3pp1Yztcu/* Expression: bmsc_InternalDischgResistY
                                                                      * Referenced by: '<S1>/dischg_internal_resistance_table'
                                                                      */
#define rtCP_SOCversusOCVtable_tableData rtCP_pooled_l4T2uMd4WbDc/* Expression: sopc_SOCVsOCVY
                                                                  * Referenced by: '<S1>/SOC versus OCV table'
                                                                  */
#define rtCP_SOCversusOCVtable_bp01Data rtCP_pooled_rHx3pp1Yztcu /* Expression: sopc_SOCVsOCVX
                                                                  * Referenced by: '<S1>/SOC versus OCV table'
                                                                  */
#define rtCP_chg_internal_resistance_table_t rtCP_pooled_y0kYFIWCa3nN/* Expression: bmsc_InternalChgResistZ
                                                                      * Referenced by: '<S1>/chg_internal_resistance_table'
                                                                      */
#define rtCP_chg_internal_resistance_table_b rtCP_pooled_zfGSF9vZXj7x/* Expression: bmsc_InternalChgResistX
                                                                      * Referenced by: '<S1>/chg_internal_resistance_table'
                                                                      */
#define rtCP_chg_internal_resistance_table_e rtCP_pooled_rHx3pp1Yztcu/* Expression: bmsc_InternalChgResistY
                                                                      * Referenced by: '<S1>/chg_internal_resistance_table'
                                                                      */
#define rtCP_dischg_internal_resistance_ta_o rtCP_pooled_JXRUI9h3ixHt/* Computed Parameter: dischg_internal_resistance_ta_o
                                                                      * Referenced by: '<S1>/dischg_internal_resistance_table'
                                                                      */
#define rtCP_chg_internal_resistance_table_m rtCP_pooled_JXRUI9h3ixHt/* Computed Parameter: chg_internal_resistance_table_m
                                                                      * Referenced by: '<S1>/chg_internal_resistance_table'
                                                                      */
#endif                                 /* RTW_HEADER_sop_private_h_ */

/* end of file */
