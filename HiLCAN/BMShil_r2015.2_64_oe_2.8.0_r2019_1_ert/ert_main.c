/*
 *****************************************************************************
 *
 *  File:                     ert_main.c
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
#include <stddef.h>
#include <stdio.h>                     /* This ert_main.c example uses printf/fflush */
#include "BMShil.h"                    /* Model's header file */
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "zero_crossing_types.h"

/********* Macros *********/

/********* Static structure definitions *********/

/********* Global variables *********/

/********* Static Variables *********/

/********* External references *********/
/********* Functions *********/

/*
 * Associating rt_OneStep with a real-time clock or interrupt service routine
 * is what makes the generated code "real-time".  The function rt_OneStep is
 * always associated with the base rate of the model.  Subrates are managed
 * by the base rate from inside the generated code.  Enabling/disabling
 * interrupts and floating point context switches are target specific.  This
 * example code indicates where these should take place relative to executing
 * the generated code step function.  Overrun behavior should be tailored to
 * your application needs.  This example simply sets an error status in the
 * real-time model and returns from rt_OneStep.
 */
void rt_OneStep(void);
void rt_OneStep(void)
{
  static U8 OverrunFlag = false;

  /* Disable interrupts here */

  /* Check for overrun */
  if (OverrunFlag) {
    rtmSetErrorStatus(BMShil_M, "Overrun");
    return;
  }

  OverrunFlag = true;

  /* Save FPU context here (if necessary) */
  /* Re-enable timer or interrupt here */
  /* Set model inputs here */

  /* Step the model */
  BMShil_step();

  /* Get model outputs here */

  /* Indicate task complete */
  OverrunFlag = false;

  /* Disable interrupts here */
  /* Restore FPU context here (if necessary) */
  /* Enable interrupts here */
}

/*
 * The example "main" function illustrates what is required by your
 * application code to initialize, execute, and terminate the generated code.
 * Attaching rt_OneStep to a real-time clock is target specific.  This example
 * illustates how you do this relative to initializing the model.
 */
INT main(INT argc, const char *argv[])
{
  /* Unused arguments */
  (void)(argc);
  (void)(argv);

  /* Initialize model */
  BMShil_initialize();

  /* Attach rt_OneStep to a timer or interrupt service routine with
   * period 0.1 seconds (the model's base sample time) here.  The
   * call syntax for rt_OneStep is
   *
   *  rt_OneStep();
   */
  printf("Warning: The simulation will run forever. "
         "Generated ERT main won't simulate model step behavior. "
         "To change this behavior select the 'MAT-file logging' option.\n");
  fflush((NULL));
  while (rtmGetErrorStatus(BMShil_M) == (NULL)) {
    /*  Perform other application tasks here */
  }

  /* Disable rt_OneStep() here */
  return 0;
}

/* end of file */
