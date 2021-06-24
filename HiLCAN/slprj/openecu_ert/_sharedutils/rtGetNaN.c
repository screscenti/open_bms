/*
 *****************************************************************************
 *
 *  File:                     rtGetNaN.c
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
 *      Function to intialize non-finite, NaN
 */
#include "rtGetNaN.h"

/********* Macros *********/
#define NumBitsPerChar                 8U

/********* Static structure definitions *********/

/********* Global variables *********/

/********* Static Variables *********/

/********* External references *********/
/********* Functions *********/

/*
 * Initialize rtNaN needed by the generated code.
 * NaN is initialized as non-signaling. Assumes IEEE.
 */
FREAL rtGetNaN(void)
{
  size_t bitsPerReal = sizeof(FREAL) * (NumBitsPerChar);
  FREAL nan = 0.0;
  if (bitsPerReal == 32U) {
    nan = rtGetNaNF();
  } else {
    union {
      BigEndianIEEEDouble bitVal;
      FREAL fltVal;
    } tmpVal;

    tmpVal.bitVal.words.wordH = 0x7FFFFFFFU;
    tmpVal.bitVal.words.wordL = 0xFFFFFFFFU;
    nan = tmpVal.fltVal;
  }

  return nan;
}

/*
 * Initialize rtNaNF needed by the generated code.
 * NaN is initialized as non-signaling. Assumes IEEE.
 */
F32 rtGetNaNF(void)
{
  IEEESingle nanF = { { 0 } };

  nanF.wordL.wordLuint = 0x7FFFFFFFU;
  return nanF.wordL.wordLreal;
}

/* end of file */
