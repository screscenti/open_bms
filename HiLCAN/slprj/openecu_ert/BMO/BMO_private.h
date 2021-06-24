/*
 *****************************************************************************
 *
 *  File:                     BMO_private.h
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
#ifndef RTW_HEADER_BMO_private_h_
#define RTW_HEADER_BMO_private_h_
#include "rtwtypes.h"
#include "model_reference_types.h"

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
#endif                                 /* RTW_HEADER_BMO_private_h_ */

/* end of file */
