/*
 *****************************************************************************
 *
 *  File:                     intrp1d_l.c
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
#include "intrp1d_l.h"

/********* Macros *********/

/********* Static structure definitions *********/

/********* Global variables *********/

/********* Static Variables *********/

/********* External references *********/
/********* Functions *********/
FREAL intrp1d_l(U32 bpIndex, FREAL frac, const FREAL table[])
{
  /* Interpolation 1-D
     Interpolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'wrapping'
   */
  return (table[bpIndex + 1U] - table[bpIndex]) * frac + table[bpIndex];
}

/* end of file */
