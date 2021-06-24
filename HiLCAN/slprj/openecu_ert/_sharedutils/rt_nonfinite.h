/*
 *****************************************************************************
 *
 *  File:                     rt_nonfinite.h
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
#ifndef RTW_HEADER_rt_nonfinite_h_
#define RTW_HEADER_rt_nonfinite_h_
#include <stddef.h>
#include "rtwtypes.h"

/********* Macros *********/

/********* Global structure definitions *********/

/********* Global variables and prototypes *********/
extern FREAL rtInf;
extern FREAL rtMinusInf;
extern FREAL rtNaN;
extern F32 rtInfF;
extern F32 rtMinusInfF;
extern F32 rtNaNF;
extern void rt_InitInfAndNaN(size_t realSize);
extern U8 rtIsInf(FREAL value);
extern U8 rtIsInfF(F32 value);
extern U8 rtIsNaN(FREAL value);
extern U8 rtIsNaNF(F32 value);
typedef struct {
  struct {
    U32 wordH;
    U32 wordL;
  } words;
} BigEndianIEEEDouble;

typedef struct {
  struct {
    U32 wordL;
    U32 wordH;
  } words;
} LittleEndianIEEEDouble;

typedef struct {
  union {
    F32 wordLreal;
    U32 wordLuint;
  } wordL;
} IEEESingle;

#endif                                 /* RTW_HEADER_rt_nonfinite_h_ */

/* end of file */
