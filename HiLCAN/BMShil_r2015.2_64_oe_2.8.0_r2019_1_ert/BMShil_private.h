/*
 *****************************************************************************
 *
 *  File:                     BMShil_private.h
 *  Description:              Real-Time Workshop code generated for Simulink
 *                            model BMShil.
 *
 *  Model name:               BMShil
 *  Model date:               Sat Sep 05 12:41:31 2009
 *  Model version:            1.369
 *  Model author:             jtough
 *  Model description:
 *
 *  Model at code generation: nctzv8 - Mon Apr 19 14:40:45 2021
 *  Model comment:
 *  Last saved modification:  nctzv8 - Mon Apr 19 14:40:10 2021
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

/*======================== TOOL VERSION INFORMATION ==========================*
 * MATLAB 8.6 (R2015b)13-Aug-2015                                             *
 * Simulink 8.6 (R2015b)13-Aug-2015                                           *
 * Simulink Coder 8.9 (R2015b)13-Aug-2015                                     *
 * Embedded Coder 6.9 (R2015b)13-Aug-2015                                     *
 * Fixed-Point Designer 5.1 (R2015b)13-Aug-2015                               *
 *============================================================================*/

/*======================= LICENSE IN USE INFORMATION =========================*
 * matlab                                                                     *
 * matlab_coder                                                               *
 * real-time_workshop                                                         *
 * rtw_embedded_coder                                                         *
 * simulink                                                                   *
 * stateflow                                                                  *
 * vehicle_network_toolbox                                                    *
 *============================================================================*/
/********* Includes *********/
#ifndef RTW_HEADER_BMShil_private_h_
#define RTW_HEADER_BMShil_private_h_
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "zero_crossing_types.h"

/********* Macros *********/

/********* Global structure definitions *********/

/********* Global variables and prototypes *********/
extern const FREAL rtCP_pooled_zsPZAb8R8DoC;
extern const FREAL rtCP_pooled_Yr23f5kvj2p0;
extern const FREAL rtCP_pooled_msDYPDR9xq0x[2];
extern const FREAL rtCP_pooled_crmsjf9AvgoG[2];
extern const U8 rtCP_pooled_DW8BfQUitOnV;

#define rtCP_Constant_Value            rtCP_pooled_zsPZAb8R8DoC  /* Expression: 1
                                                                  * Referenced by: '<S5>/Constant'
                                                                  */
#define rtCP_Constant2_Value           rtCP_pooled_Yr23f5kvj2p0  /* Expression: 0
                                                                  * Referenced by: '<S2>/Constant2'
                                                                  */
#define rtCP_uDLookupTable_tableData   rtCP_pooled_msDYPDR9xq0x  /* Expression: [0 5]
                                                                  * Referenced by: '<S7>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp01Data    rtCP_pooled_crmsjf9AvgoG  /* Expression: [0 100]
                                                                  * Referenced by: '<S7>/1-D Lookup Table'
                                                                  */
#define rtCP_Constant1_Value           rtCP_pooled_DW8BfQUitOnV  /* Computed Parameter: Constant1_Value
                                                                  * Referenced by: '<S2>/Constant1'
                                                                  */
#endif                                 /* RTW_HEADER_BMShil_private_h_ */

/* end of file */
