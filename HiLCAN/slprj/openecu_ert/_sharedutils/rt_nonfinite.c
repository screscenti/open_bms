/*
 *****************************************************************************
 *
 *  File:                     rt_nonfinite.c
 *  Description:              Real-Time Workshop code generated for Simulink
 *                            model BTC.
 *
 *  Model name:               BTC
 *  Model date:
 *  Model version:            1.54
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

/*
 * Abstract:
 *      Function to intialize non-finites,
 *      (Inf, NaN and -Inf).
 */
#include "rt_nonfinite.h"
#include "rtGetNaN.h"
#include "rtGetInf.h"

/********* Macros *********/

/********* Static structure definitions *********/

/********* Global variables *********/
FREAL rtInf;
FREAL rtMinusInf;
FREAL rtNaN;
F32 rtInfF;
F32 rtMinusInfF;
F32 rtNaNF;

/********* Static Variables *********/

/********* External references *********/
/********* Functions *********/

/*
 * Initialize the rtInf, rtMinusInf, and rtNaN needed by the
 * generated code. NaN is initialized as non-signaling. Assumes IEEE.
 */
void rt_InitInfAndNaN(size_t realSize)
{
  (void) (realSize);
  rtNaN = rtGetNaN();
  rtNaNF = rtGetNaNF();
  rtInf = rtGetInf();
  rtInfF = rtGetInfF();
  rtMinusInf = rtGetMinusInf();
  rtMinusInfF = rtGetMinusInfF();
}

/* Test if value is infinite */
U8 rtIsInf(FREAL value)
{
  return (U8)((value==rtInf || value==rtMinusInf) ? 1U : 0U);
}

/* Test if single-precision value is infinite */
U8 rtIsInfF(F32 value)
{
  return (U8)(((value)==rtInfF || (value)==rtMinusInfF) ? 1U : 0U);
}

/* Test if value is not a number */
U8 rtIsNaN(FREAL value)
{
  return (U8)((value!=value) ? 1U : 0U);
}

/* Test if single-precision value is not a number */
U8 rtIsNaNF(F32 value)
{
  return (U8)(((value!=value) ? 1U : 0U));
}

/* end of file */
