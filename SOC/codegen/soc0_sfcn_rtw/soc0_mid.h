/*
 * soc0_mid.h
 *
 * Code generation for model "soc0_sf".
 *
 * Model version              : 1.325
 * Simulink Coder version : 8.9 (R2015b) 13-Aug-2015
 * C source code generated on : Fri Jun 12 21:30:17 2020
 *
 * Target selection: rtwsfcn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Freescale->32-bit PowerPC
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 *
 * SOURCES: soc0_sf.c
 */

#include "simstruc.h"
#include "soc0_sf.h"
#if defined(MATLAB_MEX_FILE) || defined(RT_MALLOC)

static int_T RegNumInputPorts(SimStruct *S, int_T nInputPorts)
{
  _ssSetNumInputPorts(S,nInputPorts);
  return true;
}

static int_T RegNumOutputPorts(SimStruct *S, int_T nOutputPorts)
{
  _ssSetNumOutputPorts(S,nOutputPorts);
  return true;
}

static int_T FcnSetErrorStatus(const SimStruct *S, DTypeId arg2)
{
  static char msg[256];
  if (strlen(ssGetModelName(S)) < 128) {
    sprintf(msg,
            "S-function %s does not have a tlc file. It cannot use macros that access regDataType field in simstruct.",
            ssGetModelName(S));
  } else {
    sprintf(msg,
            "A S-function does not have a tlc file. It cannot use macros that access regDataType field in simstruct.");
  }

  ssSetErrorStatus(S, msg);
  UNUSED_PARAMETER(arg2);
  return 0;
}

#endif

/* Instance data for model: soc0 */
void *soc0_malloc(SimStruct *rts)
{
  /* Local SimStruct for the generated S-Function */
  LocalS *lS = (LocalS *) malloc(sizeof(LocalS));
  ss_VALIDATE_MEMORY(rts,lS);
  (void) memset((char *) lS, 0,
                sizeof(LocalS));
  ssSetUserData(rts, lS);

  /* block I/O */
  {
    void *b = malloc(sizeof(B_soc0_T));
    ss_VALIDATE_MEMORY(rts,b);
    ssSetLocalBlockIO(rts, b);
    (void) memset(b, 0,
                  sizeof(B_soc0_T));
  }

  /* model parameters */
  ssSetLocalDefaultParam(rts, (real_T *) &soc0_DefaultP);

  /* model checksums */
  ssSetChecksumVal(rts, 0, 1568611474U);
  ssSetChecksumVal(rts, 1, 1384992118U);
  ssSetChecksumVal(rts, 2, 3639592553U);
  ssSetChecksumVal(rts, 3, 378150217U);

  {
    /* non-finite (run-time) assignments */
    (((real_T *)mxGetData(C_SocTable(rts)))[0]) = rtNaN;
    (((real_T *)mxGetData(C_SocTable(rts)))[1]) = rtNaN;
    (((real_T *)mxGetData(C_SocTable(rts)))[2]) = rtNaN;
    (((real_T *)mxGetData(C_SocTable(rts)))[3]) = rtNaN;
    (((real_T *)mxGetData(C_SocTable(rts)))[4]) = rtNaN;
    (((real_T *)mxGetData(C_SocTable(rts)))[5]) = rtNaN;
    (((real_T *)mxGetData(C_SocTable(rts)))[6]) = rtNaN;
    (((real_T *)mxGetData(C_SocTable(rts)))[7]) = rtNaN;
    (((real_T *)mxGetData(C_SocTable(rts)))[8]) = rtNaN;
    (((real_T *)mxGetData(C_SocTable(rts)))[9]) = rtNaN;
    (((real_T *)mxGetData(C_SocTable(rts)))[10]) = rtNaN;
    (((real_T *)mxGetData(C_SocTable(rts)))[11]) = rtNaN;
    (((real_T *)mxGetData(C_SocTable(rts)))[12]) = rtNaN;
    (((real_T *)mxGetData(C_SocTable(rts)))[13]) = rtNaN;
    (((real_T *)mxGetData(C_SocTable(rts)))[14]) = rtNaN;
    (((real_T *)mxGetData(C_SocTable(rts)))[15]) = rtNaN;
    (((real_T *)mxGetData(C_SocTable(rts)))[16]) = rtNaN;
    (((real_T *)mxGetData(C_SocTable(rts)))[17]) = rtNaN;
    (((real_T *)mxGetData(C_SocTable(rts)))[18]) = rtNaN;
    (((real_T *)mxGetData(C_SocTable(rts)))[19]) = rtNaN;
    (((real_T *)mxGetData(C_SocTable(rts)))[20]) = rtNaN;
    (((real_T *)mxGetData(C_SocTable(rts)))[21]) = rtNaN;
    (((real_T *)mxGetData(C_SocTable(rts)))[22]) = rtNaN;
    (((real_T *)mxGetData(C_SocTable(rts)))[149]) = rtNaN;
    (((real_T *)mxGetData(C_SocTable(rts)))[150]) = rtNaN;
  }

  return (NULL);
}
