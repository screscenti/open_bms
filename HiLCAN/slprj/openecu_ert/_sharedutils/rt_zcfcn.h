/*
 *****************************************************************************
 *
 *  File:                     rt_zcfcn.h
 *  Description:              Real-Time Workshop code generated for Simulink
 *                            model CC.
 *
 *  Model name:               CC
 *  Model date:
 *  Model version:            1.108
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
#ifndef RTW_HEADER_rt_zcfcn_h_
#define RTW_HEADER_rt_zcfcn_h_
#include "rtwtypes.h"

/********* Macros *********/
#include "solver_zc.h"
#include "zero_crossing_types.h"
#ifndef slZcHadEvent
#define slZcHadEvent(ev, zcsDir)       (((ev) & (zcsDir)) != 0x00 )
#endif

#ifndef slZcUnAliasEvents
#define slZcUnAliasEvents(evL, evR)    ((((slZcHadEvent((evL), (SL_ZCS_EVENT_N2Z)) && slZcHadEvent((evR), (SL_ZCS_EVENT_Z2P))) || (slZcHadEvent((evL), (SL_ZCS_EVENT_P2Z)) && slZcHadEvent((evR), (SL_ZCS_EVENT_Z2N)))) ? (SL_ZCS_EVENT_NUL) : (evR)))
#endif

/********* Global structure definitions *********/

/********* Global variables and prototypes *********/
extern ZCEventType rt_ZCFcn(ZCDirection zcDir, ZCSigState *prevZc, FREAL
  currValue);

#endif                                 /* RTW_HEADER_rt_zcfcn_h_ */

/* end of file */
