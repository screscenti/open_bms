/*
 *****************************************************************************
 *
 *  File:                     model_reference_types.h
 *  Description:              Real-Time Workshop code generated for Simulink
 *                            model BMO.
 *
 *  Model name:               BMO
 *  Model date:
 *  Model version:            1.59
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

/********* Macros *********/
#ifndef __MODEL_REFERENCE_TYPES_H__
#define __MODEL_REFERENCE_TYPES_H__
#include "rtwtypes.h"
#ifndef __MODEL_REFERENCE_TYPES__
#define __MODEL_REFERENCE_TYPES__

/*===========================================================================*
 * Model reference type definitions                                          *
 *===========================================================================*/
/*
 * This structure is used by model reference to
 * communicate timing information through the hierarchy.
 */
typedef struct _rtTimingBridge_tag rtTimingBridge;
struct _rtTimingBridge_tag {
  U32 nTasks;
  U32** clockTick;
  U32** clockTickH;
  U32* taskCounter;
  FREAL** taskTime;
  U8** rateTransition;
  U8 *firstInitCond;
};

#endif                                 /* __MODEL_REFERENCE_TYPES__ */
#endif                                 /* __MODEL_REFERENCE_TYPES_H__ */

/********* Global structure definitions *********/

/********* Global variables and prototypes *********/

/* end of file */
