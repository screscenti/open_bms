/*
 *****************************************************************************
 *
 *  File:                     plook_evenc.c
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
#include "rtwtypes.h"
#include "plook_evenc.h"

/********* Macros *********/

/********* Static structure definitions *********/

/********* Global variables *********/

/********* Static Variables *********/

/********* External references *********/
/********* Functions *********/
U32 plook_evenc(FREAL u, FREAL bp0, FREAL bpSpace, U32 maxIndex,
                     FREAL *fraction)
{
  U32 bpIndex;
  FREAL invSpc;
  FREAL fbpIndex;

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
      bpIndex = (U32)fbpIndex;
      *fraction = (u - ((FREAL)bpIndex * bpSpace + bp0)) * invSpc;
    } else {
      bpIndex = maxIndex - 1U;
      *fraction = 1.0;
    }
  }

  return bpIndex;
}

/* end of file */
