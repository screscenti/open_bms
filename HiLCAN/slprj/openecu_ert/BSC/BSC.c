/*
 *****************************************************************************
 *
 *  File:                     BSC.c
 *  Description:              Real-Time Workshop code generated for Simulink
 *                            model BSC.
 *
 *  Model name:               BSC
 *  Model date:
 *  Model version:            1.220
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
#include "BSC.h"
#include "BSC_private.h"

/********* Macros *********/

/* Named constants for Chart: '<S6>/key_cycle_chart' */
#define BSC_IN_Key_OFF                 ((U8)1U)
#define BSC_IN_Key_ON                  ((U8)2U)
#define BSC_IN_inital_key_off_fault    ((U8)3U)
#define BSC_event_fault_change         (1)
#define BSC_event_key_change           (0)

/* Named constants for Chart: '<S1>/Chart2' */
#define BSC_IN_main                    ((U8)1U)

/********* Static structure definitions *********/

/********* Global variables *********/

/* Forward declaration for local functions */
static void BSC_enter_internal_Key_ON(U8 rtu_med_fault, rtB_key_cycle_BSC
  *localB, rtDW_key_cycle_BSC *localDW);
static void BSC_enter_internal_Key_OFF(U8 rtu_med_fault, rtB_key_cycle_BSC
  *localB, rtDW_key_cycle_BSC *localDW);
static void BSC_chartstep_c1_BSC(U8 rtu_med_fault, rtB_key_cycle_BSC *localB,
  rtDW_key_cycle_BSC *localDW);

/********* Static Variables *********/

/********* External references *********/
/********* Functions *********/

/* Initial conditions for function-call system: '<S1>/check_type' */
void BSC_check_type_Init(U8 *rty_Out1)
{
  /* InitializeConditions for Chart: '<S5>/check_faults' */
  *rty_Out1 = 0U;
}

/* Output and update for function-call system: '<S1>/check_type' */
void BSC_check_type(const U8 *rtu_In1, const U8 *rtu_In2, const U8 *rtu_In3,
                    const U8 *rtu_In4, const U8 *rtu_In5, const U8 *rtu_In6,
                    const U8 *rtu_In7, const U8 *rtu_In8, const U8 *rtu_In9,
                    const U8 *rtu_In10, const U8 *rtu_In11, U8 *rty_Out1)
{
  /* Chart: '<S5>/check_faults' */
  /* Gateway: BSC/check_type/check_faults */
  /* During: BSC/check_type/check_faults */
  /* Entry Internal: BSC/check_type/check_faults */
  /* Transition: '<S12>:170' */
  if (*rtu_In1 != 0) {
    /* Transition: '<S12>:75' */
    /* Transition: '<S12>:77' */
    *rty_Out1 = 1U;

    /* Transition: '<S12>:142' */
    /* Transition: '<S12>:139' */
    /* Transition: '<S12>:146' */
    /* Transition: '<S12>:151' */
    /* Transition: '<S12>:156' */
    /* Transition: '<S12>:157' */
    /* Transition: '<S12>:136' */
    /* Transition: '<S12>:135' */
    /* Transition: '<S12>:177' */
    /* Transition: '<S12>:190' */
    /* Transition: '<S12>:189' */
  } else {
    /* Transition: '<S12>:76' */
    if (*rtu_In2 != 0) {
      /* Transition: '<S12>:78' */
      /* Transition: '<S12>:126' */
      *rty_Out1 = 2U;

      /* Transition: '<S12>:139' */
      /* Transition: '<S12>:146' */
      /* Transition: '<S12>:151' */
      /* Transition: '<S12>:156' */
      /* Transition: '<S12>:157' */
      /* Transition: '<S12>:136' */
      /* Transition: '<S12>:135' */
      /* Transition: '<S12>:177' */
      /* Transition: '<S12>:190' */
      /* Transition: '<S12>:189' */
    } else {
      /* Transition: '<S12>:79' */
      if (*rtu_In3 != 0) {
        /* Transition: '<S12>:81' */
        /* Transition: '<S12>:127' */
        *rty_Out1 = 3U;

        /* Transition: '<S12>:146' */
        /* Transition: '<S12>:151' */
        /* Transition: '<S12>:156' */
        /* Transition: '<S12>:157' */
        /* Transition: '<S12>:136' */
        /* Transition: '<S12>:135' */
        /* Transition: '<S12>:177' */
        /* Transition: '<S12>:190' */
        /* Transition: '<S12>:189' */
      } else {
        /* Transition: '<S12>:108' */
        if (*rtu_In4 != 0) {
          /* Transition: '<S12>:101' */
          /* Transition: '<S12>:128' */
          *rty_Out1 = 4U;

          /* Transition: '<S12>:151' */
          /* Transition: '<S12>:156' */
          /* Transition: '<S12>:157' */
          /* Transition: '<S12>:136' */
          /* Transition: '<S12>:135' */
          /* Transition: '<S12>:177' */
          /* Transition: '<S12>:190' */
          /* Transition: '<S12>:189' */
        } else {
          /* Transition: '<S12>:109' */
          if (*rtu_In5 != 0) {
            /* Transition: '<S12>:105' */
            /* Transition: '<S12>:129' */
            *rty_Out1 = 5U;

            /* Transition: '<S12>:156' */
            /* Transition: '<S12>:157' */
            /* Transition: '<S12>:136' */
            /* Transition: '<S12>:135' */
            /* Transition: '<S12>:177' */
            /* Transition: '<S12>:190' */
            /* Transition: '<S12>:189' */
          } else {
            /* Transition: '<S12>:122' */
            if (*rtu_In6 != 0) {
              /* Transition: '<S12>:111' */
              /* Transition: '<S12>:130' */
              *rty_Out1 = 6U;

              /* Transition: '<S12>:157' */
              /* Transition: '<S12>:136' */
              /* Transition: '<S12>:135' */
              /* Transition: '<S12>:177' */
              /* Transition: '<S12>:190' */
              /* Transition: '<S12>:189' */
            } else {
              /* Transition: '<S12>:123' */
              if (*rtu_In7 != 0) {
                /* Transition: '<S12>:114' */
                /* Transition: '<S12>:131' */
                *rty_Out1 = 7U;

                /* Transition: '<S12>:136' */
                /* Transition: '<S12>:135' */
                /* Transition: '<S12>:177' */
                /* Transition: '<S12>:190' */
                /* Transition: '<S12>:189' */
              } else {
                /* Transition: '<S12>:124' */
                if (*rtu_In8 != 0) {
                  /* Transition: '<S12>:118' */
                  /* Transition: '<S12>:132' */
                  *rty_Out1 = 8U;

                  /* Transition: '<S12>:135' */
                  /* Transition: '<S12>:177' */
                  /* Transition: '<S12>:190' */
                  /* Transition: '<S12>:189' */
                } else {
                  /* Transition: '<S12>:125' */
                  if (*rtu_In9 != 0) {
                    /* Transition: '<S12>:121' */
                    /* Transition: '<S12>:133' */
                    *rty_Out1 = 9U;

                    /* Transition: '<S12>:177' */
                    /* Transition: '<S12>:190' */
                    /* Transition: '<S12>:189' */
                  } else {
                    /* Transition: '<S12>:174' */
                    if (*rtu_In10 != 0) {
                      /* Transition: '<S12>:176' */
                      /* Transition: '<S12>:175' */
                      *rty_Out1 = 10U;

                      /* Transition: '<S12>:190' */
                      /* Transition: '<S12>:189' */
                    } else {
                      /* Transition: '<S12>:187' */
                      if (*rtu_In11 != 0) {
                        /* Transition: '<S12>:185' */
                        /* Transition: '<S12>:186' */
                        *rty_Out1 = 11U;

                        /* Transition: '<S12>:189' */
                      } else {
                        /* Transition: '<S12>:188' */
                        /* Transition: '<S12>:165' */
                        *rty_Out1 = 0U;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  /* End of Chart: '<S5>/check_faults' */
  /* Transition: '<S12>:181' */
}

/* Output and update for function-call system: '<S1>/Fault_level' */
void BSC_Fault_level(U8 rtu_TypeofFault, U8 *rty_lowlevelfault,
                     rtB_Fault_level_BSC *localB)
{
  S8 rtb_Compare_i[7];
  S32 i;
  U8 rtb_Compare_e_idx_0;

  /* RelationalOperator: '<S10>/Compare' incorporates:
   *  Constant: '<S10>/Constant'
   */
  rtb_Compare_e_idx_0 = (U8)(rtu_TypeofFault == bscv_MediumFaultType[0]);

  /* RelationalOperator: '<S11>/Compare' incorporates:
   *  Constant: '<S11>/Constant'
   */
  for (i = 0; i < 7; i++) {
    rtb_Compare_i[i] = (S8)(rtu_TypeofFault == bscv_LowFaultType[i]);
  }

  /* End of RelationalOperator: '<S11>/Compare' */

  /* MinMax: '<S3>/MinMax' incorporates:
   *  Constant: '<S9>/Constant'
   *  RelationalOperator: '<S9>/Compare'
   */
  localB->MinMax = (U8)(rtu_TypeofFault == bscv_SevereFaultType);

  /* MinMax: '<S3>/MinMax1' incorporates:
   *  Constant: '<S10>/Constant'
   *  RelationalOperator: '<S10>/Compare'
   */
  if (!(rtb_Compare_e_idx_0 >= (rtu_TypeofFault == bscv_MediumFaultType[1]))) {
    rtb_Compare_e_idx_0 = 1U;
  }

  if (!(rtb_Compare_e_idx_0 >= (rtu_TypeofFault == bscv_MediumFaultType[2]))) {
    rtb_Compare_e_idx_0 = 1U;
  }

  localB->MinMax1 = rtb_Compare_e_idx_0;

  /* End of MinMax: '<S3>/MinMax1' */

  /* MinMax: '<S3>/MinMax2' */
  rtb_Compare_e_idx_0 = (U8)rtb_Compare_i[0];
  for (i = 0; i < 6; i++) {
    if (!(rtb_Compare_e_idx_0 >= (U8)rtb_Compare_i[i + 1])) {
      rtb_Compare_e_idx_0 = 1U;
    }
  }

  *rty_lowlevelfault = rtb_Compare_e_idx_0;

  /* End of MinMax: '<S3>/MinMax2' */
}

/* Function for Chart: '<S6>/key_cycle_chart' */
static void BSC_enter_internal_Key_ON(U8 rtu_med_fault, rtB_key_cycle_BSC
  *localB, rtDW_key_cycle_BSC *localDW)
{
  S32 tmp;

  /* Entry Internal 'Key_ON': '<S13>:17' */
  /* Transition: '<S13>:123' */
  if ((localDW->sfEvent == BSC_event_key_change) && (localDW->off_fault == 0)) {
    /* Transition: '<S13>:124' */
    /* Transition: '<S13>:119' */
    tmp = localDW->on_store + 1;
    if (tmp > 255) {
      tmp = 255;
    }

    localDW->on_store = (U8)tmp;

    /* Transition: '<S13>:129' */
  } else {
    /* Transition: '<S13>:120' */
  }

  /* Transition: '<S13>:115' */
  if (localDW->on_store > 1) {
    /* Transition: '<S13>:131' */
    /* Transition: '<S13>:130' */
    localDW->on_store = 1U;

    /* Transition: '<S13>:132' */
  } else {
    /* Transition: '<S13>:133' */
  }

  /* Transition: '<S13>:139' */
  /* Transition: '<S13>:140' */
  if (rtu_med_fault == 1) {
    /* Transition: '<S13>:105' */
    /* Transition: '<S13>:102' */
    localB->key_cycle = 0U;
    localDW->on_store = 0U;
    localDW->off_store = 0U;
    localDW->on_fault = 1U;

    /* Transition: '<S13>:103' */
  } else {
    /* Transition: '<S13>:110' */
    if (localDW->on_store == 1) {
      /* Transition: '<S13>:117' */
      /* Transition: '<S13>:126' */
      localB->key_cycle = 1U;

      /* Transition: '<S13>:125' */
    } else {
      /* Transition: '<S13>:114' */
    }

    /* Transition: '<S13>:111' */
  }

  /* Transition: '<S13>:108' */
}

/* Function for Chart: '<S6>/key_cycle_chart' */
static void BSC_enter_internal_Key_OFF(U8 rtu_med_fault, rtB_key_cycle_BSC
  *localB, rtDW_key_cycle_BSC *localDW)
{
  S32 tmp;

  /* Entry Internal 'Key_OFF': '<S13>:14' */
  /* Transition: '<S13>:85' */
  if ((localDW->sfEvent == BSC_event_key_change) && (localDW->on_fault == 0)) {
    /* Transition: '<S13>:80' */
    /* Transition: '<S13>:79' */
    tmp = localDW->off_store + 1;
    if (tmp > 255) {
      tmp = 255;
    }

    localDW->off_store = (U8)tmp;

    /* Transition: '<S13>:81' */
  } else {
    /* Transition: '<S13>:82' */
  }

  /* Transition: '<S13>:88' */
  if (localDW->off_store > 1) {
    /* Transition: '<S13>:68' */
    /* Transition: '<S13>:70' */
    localDW->off_store = 1U;

    /* Transition: '<S13>:71' */
  } else {
    /* Transition: '<S13>:69' */
  }

  /* Transition: '<S13>:72' */
  /* Transition: '<S13>:78' */
  if (rtu_med_fault == 1) {
    /* Transition: '<S13>:35' */
    /* Transition: '<S13>:37' */
    localB->key_cycle = 0U;
    localDW->off_store = 0U;
    localDW->on_store = 0U;
    localDW->off_fault = 1U;

    /* Transition: '<S13>:38' */
  } else {
    /* Transition: '<S13>:99' */
    if (localDW->off_store == 1) {
      /* Transition: '<S13>:97' */
      /* Transition: '<S13>:92' */
      localB->key_cycle = 1U;

      /* Transition: '<S13>:98' */
    } else {
      /* Transition: '<S13>:93' */
    }

    /* Transition: '<S13>:100' */
  }

  /* Transition: '<S13>:39' */
}

/* Function for Chart: '<S6>/key_cycle_chart' */
static void BSC_chartstep_c1_BSC(U8 rtu_med_fault, rtB_key_cycle_BSC *localB,
  rtDW_key_cycle_BSC *localDW)
{
  /* During: BSC/key_cycle/key_cycle_chart */
  if (localDW->bitsForTID0.is_active_c1_BSC == 0U) {
    /* Entry: BSC/key_cycle/key_cycle_chart */
    localDW->bitsForTID0.is_active_c1_BSC = 1U;

    /* Entry Internal: BSC/key_cycle/key_cycle_chart */
    if (localDW->sfEvent == BSC_event_key_change) {
      /* Transition: '<S13>:59' */
      localDW->bitsForTID0.is_c1_BSC = BSC_IN_Key_ON;

      /* Chart: '<S6>/key_cycle_chart' incorporates:
       *  TriggerPort: '<S13>/input events'
       */
      /* Entry 'Key_ON': '<S13>:17' */
      BSC_enter_internal_Key_ON(rtu_med_fault, localB, localDW);
    } else {
      /* Transition: '<S13>:63' */
      localDW->bitsForTID0.is_c1_BSC = BSC_IN_inital_key_off_fault;

      /* Entry 'inital_key_off_fault': '<S13>:62' */
      localB->key_cycle = 0U;
      localDW->off_fault = 1U;
    }
  } else {
    switch (localDW->bitsForTID0.is_c1_BSC) {
     case BSC_IN_Key_OFF:
      /* During 'Key_OFF': '<S13>:14' */
      if (localDW->sfEvent == BSC_event_key_change) {
        /* Transition: '<S13>:15' */
        /* Exit 'Key_OFF': '<S13>:14' */
        localDW->on_fault = 0U;
        localDW->bitsForTID0.is_c1_BSC = BSC_IN_Key_ON;

        /* Chart: '<S6>/key_cycle_chart' incorporates:
         *  TriggerPort: '<S13>/input events'
         */
        /* Entry 'Key_ON': '<S13>:17' */
        BSC_enter_internal_Key_ON(rtu_med_fault, localB, localDW);
      } else {
        if (localDW->sfEvent == BSC_event_fault_change) {
          /* Transition: '<S13>:65' */
          /* Exit 'Key_OFF': '<S13>:14' */
          localDW->on_fault = 0U;
          localDW->bitsForTID0.is_c1_BSC = BSC_IN_Key_OFF;

          /* Chart: '<S6>/key_cycle_chart' incorporates:
           *  TriggerPort: '<S13>/input events'
           */
          /* Entry 'Key_OFF': '<S13>:14' */
          BSC_enter_internal_Key_OFF(rtu_med_fault, localB, localDW);
        }
      }
      break;

     case BSC_IN_Key_ON:
      /* During 'Key_ON': '<S13>:17' */
      if (localDW->sfEvent == BSC_event_key_change) {
        /* Transition: '<S13>:11' */
        /* Exit 'Key_ON': '<S13>:17' */
        localDW->off_fault = 0U;
        localDW->bitsForTID0.is_c1_BSC = BSC_IN_Key_OFF;

        /* Chart: '<S6>/key_cycle_chart' incorporates:
         *  TriggerPort: '<S13>/input events'
         */
        /* Entry 'Key_OFF': '<S13>:14' */
        BSC_enter_internal_Key_OFF(rtu_med_fault, localB, localDW);
      } else {
        if (localDW->sfEvent == BSC_event_fault_change) {
          /* Transition: '<S13>:66' */
          /* Exit 'Key_ON': '<S13>:17' */
          localDW->off_fault = 0U;
          localDW->bitsForTID0.is_c1_BSC = BSC_IN_Key_ON;

          /* Chart: '<S6>/key_cycle_chart' incorporates:
           *  TriggerPort: '<S13>/input events'
           */
          /* Entry 'Key_ON': '<S13>:17' */
          BSC_enter_internal_Key_ON(rtu_med_fault, localB, localDW);
        }
      }
      break;

     default:
      /* During 'inital_key_off_fault': '<S13>:62' */
      if (localDW->sfEvent == BSC_event_key_change) {
        /* Transition: '<S13>:64' */
        localDW->bitsForTID0.is_c1_BSC = BSC_IN_Key_ON;

        /* Chart: '<S6>/key_cycle_chart' incorporates:
         *  TriggerPort: '<S13>/input events'
         */
        /* Entry 'Key_ON': '<S13>:17' */
        BSC_enter_internal_Key_ON(rtu_med_fault, localB, localDW);
      }
      break;
    }
  }
}

/* Initial conditions for function-call system: '<S1>/key_cycle' */
void BSC_key_cycle_Init(rtB_key_cycle_BSC *localB)
{
  /* InitializeConditions for Chart: '<S6>/key_cycle_chart' */
  localB->key_cycle = 1U;
}

/* Output and update for function-call system: '<S1>/key_cycle' */
void BSC_key_cycle(U8 rtu_med_fault, const U8 *rtu_key, rtB_key_cycle_BSC
                   *localB, rtDW_key_cycle_BSC *localDW, rtZCE_key_cycle_BSC
                   *localZCE)
{
  U8 zcEvent_idx_0;
  U8 zcEvent_idx_1;

  /* Chart: '<S6>/key_cycle_chart' incorporates:
   *  TriggerPort: '<S13>/input events'
   */
  zcEvent_idx_0 = (((*rtu_key > 0) != (localZCE->key_cycle_chart_Trig_ZCE[0] ==
    POS_ZCSIG)) && (localZCE->key_cycle_chart_Trig_ZCE[0] != UNINITIALIZED_ZCSIG));
  zcEvent_idx_1 = (((rtu_med_fault > 0) != (localZCE->key_cycle_chart_Trig_ZCE[1]
    == POS_ZCSIG)) && (localZCE->key_cycle_chart_Trig_ZCE[1] !=
                       UNINITIALIZED_ZCSIG));
  if (zcEvent_idx_0 || zcEvent_idx_1) {
    /* Gateway: BSC/key_cycle/key_cycle_chart */
    if ((S8)(zcEvent_idx_0 ? *rtu_key > 0 ? RISING_ZCEVENT : FALLING_ZCEVENT :
             NO_ZCEVENT) != 0) {
      /* Event: '<S13>:8' */
      localDW->sfEvent = BSC_event_key_change;
      BSC_chartstep_c1_BSC(rtu_med_fault, localB, localDW);
    }

    if ((S8)(zcEvent_idx_1 ? rtu_med_fault > 0 ? RISING_ZCEVENT :
             FALLING_ZCEVENT : NO_ZCEVENT) != 0) {
      /* Event: '<S13>:56' */
      localDW->sfEvent = BSC_event_fault_change;
      BSC_chartstep_c1_BSC(rtu_med_fault, localB, localDW);
    }
  }

  localZCE->key_cycle_chart_Trig_ZCE[0] = (U8)(*rtu_key > 0);
  localZCE->key_cycle_chart_Trig_ZCE[1] = (U8)(rtu_med_fault > 0);
}

/* Output and update for function-call system: '<S1>/sleepCheck' */
void BSC_sleepCheck(const U8 *rtu_CPSR, const FREAL *rtu_soc, U8 *rty_SleepMode)
{
  /* Logic: '<S8>/Logical Operator3' incorporates:
   *  Constant: '<S17>/Constant'
   *  RelationalOperator: '<S17>/Compare'
   */
  *rty_SleepMode = ((*rtu_CPSR != 0) && (*rtu_soc >= 95.0));
}

/* Output and update for function-call system: '<S1>/cc_c  md' */
void BSC_cc_cmd(const U8 *rtu_VPSR, U8 rtu_cycled_after_fault, U8
                rtu_severe_fault, const U8 *rtu_CPSR, U8 rtu_sleep_mode, U8
                *rty_main_cc_cmd, U8 *rty_chg_cc_cmd)
{
  /* Logic: '<S4>/Logical Operator16' incorporates:
   *  Logic: '<S4>/Logical Operator1'
   *  Logic: '<S4>/Logical Operator7'
   */
  *rty_chg_cc_cmd = ((*rtu_CPSR != 0) && (rtu_cycled_after_fault != 0) &&
                     (!rtu_sleep_mode) && (!(rtu_severe_fault != 0)));

  /* Logic: '<S4>/Logical Operator2' incorporates:
   *  Logic: '<S4>/Logical Operator8'
   */
  *rty_main_cc_cmd = ((*rtu_VPSR != 0) && (rtu_cycled_after_fault != 0) &&
                      (!(rtu_severe_fault != 0)));
}

/* Output and update for function-call system: '<S1>/rsnToOpenCC' */
void BSC_rsnToOpenCC(U8 rtu_cycleKey_after_fault, U8 rtu_severe_fault, U8
                     rtu_med_fault, U8 rtu_type_of_fault, U8
                     *rty_reason_to_open_contactor, U8 *rty_severemedfault,
                     rtZCE_rsnToOpenCC_BSC *localZCE)
{
  /* Sum: '<S7>/Add' */
  *rty_severemedfault = (U8)((U32)rtu_severe_fault + rtu_med_fault);

  /* Outputs for Triggered SubSystem: '<S7>/Triggered Subsystem' incorporates:
   *  TriggerPort: '<S14>/Trigger'
   */
  if (((rtu_cycleKey_after_fault > 0) != (localZCE->TriggeredSubsystem_Trig_ZCE ==
        POS_ZCSIG)) && (localZCE->TriggeredSubsystem_Trig_ZCE !=
                        UNINITIALIZED_ZCSIG)) {
    /* If: '<S14>/If' incorporates:
     *  Constant: '<S14>/Constant'
     *  Inport: '<S15>/In1'
     *  Inport: '<S16>/In1'
     */
    if (*rty_severemedfault > 0) {
      /* Outputs for IfAction SubSystem: '<S14>/If Action Subsystem' incorporates:
       *  ActionPort: '<S15>/Action Port'
       */
      *rty_reason_to_open_contactor = rtu_type_of_fault;

      /* End of Outputs for SubSystem: '<S14>/If Action Subsystem' */
    } else {
      /* Outputs for IfAction SubSystem: '<S14>/If Action Subsystem' incorporates:
       *  ActionPort: '<S15>/Action Port'
       */
      /* Outputs for IfAction SubSystem: '<S14>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S16>/Action Port'
       */
      *rty_reason_to_open_contactor = 0U;

      /* End of Outputs for SubSystem: '<S14>/If Action Subsystem1' */
      /* End of Outputs for SubSystem: '<S14>/If Action Subsystem' */
    }

    /* End of If: '<S14>/If' */
  }

  localZCE->TriggeredSubsystem_Trig_ZCE = (U8)(rtu_cycleKey_after_fault > 0);

  /* End of Outputs for SubSystem: '<S7>/Triggered Subsystem' */
}

/* Initial conditions for referenced model: 'BSC' */
void BSC_Init(U8 *rty_bsc_fault_type, rtB_BSC *localB)
{
  /* InitializeConditions for Atomic SubSystem: '<Root>/BSC' */

  /* InitializeConditions for Chart: '<S1>/Chart2' incorporates:
   *  InitializeConditions for SubSystem: '<S1>/check_type'
   */
  BSC_check_type_Init(rty_bsc_fault_type);

  /* InitializeConditions for Chart: '<S1>/Chart2' incorporates:
   *  InitializeConditions for SubSystem: '<S1>/key_cycle'
   */
  BSC_key_cycle_Init(&localB->key_cycle);

  /* End of InitializeConditions for SubSystem: '<Root>/BSC' */
}

/* Output and update for referenced model: 'BSC' */
void BSC(const U8 *rtu_vehicle_PSR, const U8 *rtu_charger_PSR, const U8 *rtu_key,
         const FREAL *rtu_soc_pack_actual, const U8 *rtu_high_level_faultType1,
         const U8 *rtu_medium_level_faultType2, const U8
         *rtu_low_level_faultType3, const U8 *rtu_vitm_CellsTemperatureLowFau,
         const U8 *rtu_vitm_CellsTemperatureHighFa, const U8
         *rtu_vitm_CellsVoltageLowFaultTy, const U8
         *rtu_vitm_CellsVoltageHightFault, const U8
         *rtu_vitm_PackVoltageFaultType8, const U8
         *rtu_vitm_PackCurrentFaultType9, const U8 *rtu_vitm_HVILFaultType10,
         const U8 *rtu_cc_PrechargeFaultType11, U8 *rty_bsc_CVTN_supply_signal,
         U8 *rty_bsc_main_cc_cmd, U8 *rty_bsc_chg_cc_cmd, U8
         *rty_bsc_sleep_status, U8 *rty_bsc_reason_to_open_CAN, U8
         *rty_bsc_severemed_fault, U8 *rty_bsc_low_fault, U8 *rty_bsc_fault_type,
         rtB_BSC *localB, rtDW_BSC *localDW, rtZCE_BSC *localZCE)
{
  /* Outputs for Atomic SubSystem: '<Root>/BSC' */
  /* Chart: '<S1>/Chart2' */
  /* Gateway: BSC/Chart2 */
  /* During: BSC/Chart2 */
  if (localDW->bitsForTID0.is_active_c2_BSC == 0U) {
    /* Entry: BSC/Chart2 */
    localDW->bitsForTID0.is_active_c2_BSC = 1U;

    /* Entry Internal: BSC/Chart2 */
    localDW->bitsForTID0.is_c2_BSC = BSC_IN_main;

    /* Outputs for Function Call SubSystem: '<S1>/check_type' */

    /* Entry Internal 'main': '<S2>:2' */
    /* Transition: '<S2>:12' */
    /* Transition: '<S2>:4' */
    /* Event: '<S2>:43' */
    BSC_check_type(rtu_high_level_faultType1, rtu_medium_level_faultType2,
                   rtu_low_level_faultType3, rtu_vitm_CellsTemperatureLowFau,
                   rtu_vitm_CellsTemperatureHighFa,
                   rtu_vitm_CellsVoltageLowFaultTy,
                   rtu_vitm_CellsVoltageHightFault,
                   rtu_vitm_PackVoltageFaultType8,
                   rtu_vitm_PackCurrentFaultType9, rtu_vitm_HVILFaultType10,
                   rtu_cc_PrechargeFaultType11, rty_bsc_fault_type);

    /* End of Outputs for SubSystem: '<S1>/check_type' */

    /* Outputs for Function Call SubSystem: '<S1>/Fault_level' */

    /* Transition: '<S2>:15' */
    /* Event: '<S2>:37' */
    BSC_Fault_level(*rty_bsc_fault_type, rty_bsc_low_fault, &localB->Fault_level);

    /* End of Outputs for SubSystem: '<S1>/Fault_level' */

    /* Outputs for Function Call SubSystem: '<S1>/key_cycle' */

    /* Transition: '<S2>:30' */
    /* Event: '<S2>:39' */
    BSC_key_cycle(localB->Fault_level.MinMax1, rtu_key, &localB->key_cycle,
                  &localDW->key_cycle, &localZCE->key_cycle);

    /* End of Outputs for SubSystem: '<S1>/key_cycle' */

    /* Outputs for Function Call SubSystem: '<S1>/sleepCheck' */

    /* Transition: '<S2>:33' */
    /* Event: '<S2>:41' */
    BSC_sleepCheck(rtu_charger_PSR, rtu_soc_pack_actual, rty_bsc_sleep_status);

    /* End of Outputs for SubSystem: '<S1>/sleepCheck' */

    /* Outputs for Function Call SubSystem: '<S1>/cc_c  md' */

    /* Transition: '<S2>:8' */
    /* Event: '<S2>:40' */
    BSC_cc_cmd(rtu_vehicle_PSR, localB->key_cycle.key_cycle,
               localB->Fault_level.MinMax, rtu_charger_PSR,
               *rty_bsc_sleep_status, rty_bsc_main_cc_cmd, rty_bsc_chg_cc_cmd);

    /* End of Outputs for SubSystem: '<S1>/cc_c  md' */

    /* Outputs for Function Call SubSystem: '<S1>/rsnToOpenCC' */

    /* Transition: '<S2>:10' */
    /* Event: '<S2>:38' */
    BSC_rsnToOpenCC(localB->key_cycle.key_cycle, localB->Fault_level.MinMax,
                    localB->Fault_level.MinMax1, *rty_bsc_fault_type,
                    rty_bsc_reason_to_open_CAN, rty_bsc_severemed_fault,
                    &localZCE->rsnToOpenCC);

    /* End of Outputs for SubSystem: '<S1>/rsnToOpenCC' */
  } else {
    /* Outputs for Function Call SubSystem: '<S1>/check_type' */

    /* During 'main': '<S2>:2' */
    /* Transition: '<S2>:12' */
    /* Transition: '<S2>:4' */
    /* Event: '<S2>:43' */
    BSC_check_type(rtu_high_level_faultType1, rtu_medium_level_faultType2,
                   rtu_low_level_faultType3, rtu_vitm_CellsTemperatureLowFau,
                   rtu_vitm_CellsTemperatureHighFa,
                   rtu_vitm_CellsVoltageLowFaultTy,
                   rtu_vitm_CellsVoltageHightFault,
                   rtu_vitm_PackVoltageFaultType8,
                   rtu_vitm_PackCurrentFaultType9, rtu_vitm_HVILFaultType10,
                   rtu_cc_PrechargeFaultType11, rty_bsc_fault_type);

    /* End of Outputs for SubSystem: '<S1>/check_type' */

    /* Outputs for Function Call SubSystem: '<S1>/Fault_level' */

    /* Transition: '<S2>:15' */
    /* Event: '<S2>:37' */
    BSC_Fault_level(*rty_bsc_fault_type, rty_bsc_low_fault, &localB->Fault_level);

    /* End of Outputs for SubSystem: '<S1>/Fault_level' */

    /* Outputs for Function Call SubSystem: '<S1>/key_cycle' */

    /* Transition: '<S2>:30' */
    /* Event: '<S2>:39' */
    BSC_key_cycle(localB->Fault_level.MinMax1, rtu_key, &localB->key_cycle,
                  &localDW->key_cycle, &localZCE->key_cycle);

    /* End of Outputs for SubSystem: '<S1>/key_cycle' */

    /* Outputs for Function Call SubSystem: '<S1>/sleepCheck' */

    /* Transition: '<S2>:33' */
    /* Event: '<S2>:41' */
    BSC_sleepCheck(rtu_charger_PSR, rtu_soc_pack_actual, rty_bsc_sleep_status);

    /* End of Outputs for SubSystem: '<S1>/sleepCheck' */

    /* Outputs for Function Call SubSystem: '<S1>/cc_c  md' */

    /* Transition: '<S2>:8' */
    /* Event: '<S2>:40' */
    BSC_cc_cmd(rtu_vehicle_PSR, localB->key_cycle.key_cycle,
               localB->Fault_level.MinMax, rtu_charger_PSR,
               *rty_bsc_sleep_status, rty_bsc_main_cc_cmd, rty_bsc_chg_cc_cmd);

    /* End of Outputs for SubSystem: '<S1>/cc_c  md' */

    /* Outputs for Function Call SubSystem: '<S1>/rsnToOpenCC' */

    /* Transition: '<S2>:10' */
    /* Event: '<S2>:38' */
    BSC_rsnToOpenCC(localB->key_cycle.key_cycle, localB->Fault_level.MinMax,
                    localB->Fault_level.MinMax1, *rty_bsc_fault_type,
                    rty_bsc_reason_to_open_CAN, rty_bsc_severemed_fault,
                    &localZCE->rsnToOpenCC);

    /* End of Outputs for SubSystem: '<S1>/rsnToOpenCC' */
  }

  /* End of Chart: '<S1>/Chart2' */

  /* Logic: '<S1>/Logical Operator5' */
  *rty_bsc_CVTN_supply_signal = ((*rtu_vehicle_PSR != 0) || (*rtu_charger_PSR !=
    0));

  /* End of Outputs for SubSystem: '<Root>/BSC' */
}

/* Model initialize function */
void BSC_initialize(const char_T **rt_errorStatus, RT_MODEL_BSC *const BSC_M,
                    rtZCE_BSC *localZCE)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(BSC_M, rt_errorStatus);
  localZCE->rsnToOpenCC.TriggeredSubsystem_Trig_ZCE = UNINITIALIZED_ZCSIG;
  localZCE->key_cycle.key_cycle_chart_Trig_ZCE[0] = UNINITIALIZED_ZCSIG;
  localZCE->key_cycle.key_cycle_chart_Trig_ZCE[1] = UNINITIALIZED_ZCSIG;
}

/* end of file */
