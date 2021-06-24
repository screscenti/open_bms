/*
 *****************************************************************************
 *
 *  File:                     BMO.c
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
#include "BMO.h"
#include "BMO_private.h"

/********* Macros *********/

/* Named constants for Chart: '<S1>/Chart' */
#define BMO_IN_Charging                ((U8)1U)
#define BMO_IN_Charging_Sleep          ((U8)1U)
#define BMO_IN_Closing_Contactors      ((U8)2U)
#define BMO_IN_Closing_MainContactors  ((U8)3U)
#define BMO_IN_Discharging             ((U8)2U)
#define BMO_IN_NO_ACTIVE_CHILD         ((U8)0U)
#define BMO_IN_Opening_Contactors      ((U8)4U)
#define BMO_IN_Power_Closed            ((U8)5U)
#define BMO_IN_Power_Closed_Default    ((U8)3U)
#define BMO_IN_Power_OFF               ((U8)6U)
#define BMO_IN_Power_ON                ((U8)7U)

/********* Static structure definitions *********/

/********* Global variables *********/

/********* Static Variables *********/

/********* External references *********/
/********* Functions *********/

/* Output and update for referenced model: 'BMO' */
void BMO(const FREAL *rtu_vitm_pack_current, const U8 *rtu_key, const U8
         *rtu_charger_button, const U8 *rtu_cc_pre_cmd, const U8
         *rtu_cc_main_cmd, const U8 *rtu_cc_chg_cmd, const U8
         *rtu_bsc_sleep_status, U8 *rty_bmo_mode, U8 *rty_bmo_charging_status,
         U8 *rty_bmo_discharging_status, rtDW_BMO *localDW)
{
  U8 rtb_DataTypeConversion1;
  U8 rtb_LogicalOperator;

  /* Outputs for Atomic SubSystem: '<Root>/BMO' */
  /* DataTypeConversion: '<S1>/Data Type Conversion1' incorporates:
   *  Logic: '<S1>/Logical Operator1'
   */
  rtb_DataTypeConversion1 = (U8)((*rtu_key != 0) || (*rtu_charger_button != 0));

  /* Logic: '<S1>/Logical Operator' */
  rtb_LogicalOperator = ((*rtu_cc_main_cmd) || (*rtu_cc_chg_cmd));

  /* Chart: '<S1>/Chart' */
  /* Gateway: BMO/Chart */
  /* During: BMO/Chart */
  if (localDW->bitsForTID0.is_active_c1_BMO == 0U) {
    /* Entry: BMO/Chart */
    localDW->bitsForTID0.is_active_c1_BMO = 1U;

    /* Entry Internal: BMO/Chart */
    /* Transition: '<S2>:8' */
    localDW->bitsForTID0.is_c1_BMO = BMO_IN_Power_OFF;

    /* Entry 'Power_OFF': '<S2>:2' */
    *rty_bmo_mode = 0U;
  } else {
    switch (localDW->bitsForTID0.is_c1_BMO) {
     case BMO_IN_Charging_Sleep:
      /* During 'Charging_Sleep': '<S2>:80' */
      if (!*rtu_bsc_sleep_status) {
        /* Transition: '<S2>:79' */
        localDW->bitsForTID0.is_c1_BMO = BMO_IN_Power_ON;

        /* Entry 'Power_ON': '<S2>:1' */
        *rty_bmo_mode = 1U;
      }
      break;

     case BMO_IN_Closing_Contactors:
      /* During 'Closing_Contactors': '<S2>:3' */
      if (rtb_LogicalOperator) {
        /* Transition: '<S2>:12' */
        localDW->bitsForTID0.is_c1_BMO = BMO_IN_Power_Closed;

        /* Entry Internal 'Power_Closed': '<S2>:5' */
        /* Transition: '<S2>:29' */
        localDW->bitsForTID0.is_Power_Closed = BMO_IN_Power_Closed_Default;

        /* Entry 'Power_Closed_Default': '<S2>:27' */
        *rty_bmo_mode = 3U;
      }
      break;

     case BMO_IN_Closing_MainContactors:
      /* During 'Closing_MainContactors': '<S2>:82' */
      /* Transition: '<S2>:83' */
      localDW->bitsForTID0.is_c1_BMO = BMO_IN_Power_Closed;

      /* Entry Internal 'Power_Closed': '<S2>:5' */
      /* Transition: '<S2>:29' */
      localDW->bitsForTID0.is_Power_Closed = BMO_IN_Power_Closed_Default;

      /* Entry 'Power_Closed_Default': '<S2>:27' */
      *rty_bmo_mode = 3U;
      break;

     case BMO_IN_Opening_Contactors:
      /* During 'Opening_Contactors': '<S2>:4' */
      if (rtb_DataTypeConversion1 == 0) {
        /* Transition: '<S2>:17' */
        localDW->bitsForTID0.is_c1_BMO = BMO_IN_Power_OFF;

        /* Entry 'Power_OFF': '<S2>:2' */
        *rty_bmo_mode = 0U;
      } else {
        if (!rtb_LogicalOperator) {
          /* Transition: '<S2>:47' */
          localDW->bitsForTID0.is_c1_BMO = BMO_IN_Power_ON;

          /* Entry 'Power_ON': '<S2>:1' */
          *rty_bmo_mode = 1U;
        }
      }
      break;

     case BMO_IN_Power_Closed:
      /* During 'Power_Closed': '<S2>:5' */
      /* Transition: '<S2>:45' */
      if (!rtb_LogicalOperator) {
        /* Transition: '<S2>:46' */
        /* Exit Internal 'Power_Closed': '<S2>:5' */
        localDW->bitsForTID0.is_Power_Closed = BMO_IN_NO_ACTIVE_CHILD;
        localDW->bitsForTID0.is_c1_BMO = BMO_IN_Opening_Contactors;

        /* Entry 'Opening_Contactors': '<S2>:4' */
        *rty_bmo_mode = 4U;
      } else {
        switch (localDW->bitsForTID0.is_Power_Closed) {
         case BMO_IN_Charging:
          /* During 'Charging': '<S2>:6' */
          /* Transition: '<S2>:78' */
          if (*rtu_vitm_pack_current < -1.0) {
            /* Transition: '<S2>:36' */
            localDW->bitsForTID0.is_Power_Closed = BMO_IN_Discharging;

            /* Entry 'Discharging': '<S2>:7' */
            *rty_bmo_mode = 7U;
          } else if (*rtu_vitm_pack_current > 1.0) {
            /* Transition: '<S2>:37' */
            localDW->bitsForTID0.is_Power_Closed = BMO_IN_Charging;

            /* Entry 'Charging': '<S2>:6' */
            *rty_bmo_mode = 5U;
          } else {
            /* Transition: '<S2>:39' */
            localDW->bitsForTID0.is_Power_Closed = BMO_IN_Power_Closed_Default;

            /* Entry 'Power_Closed_Default': '<S2>:27' */
            *rty_bmo_mode = 3U;
          }
          break;

         case BMO_IN_Discharging:
          /* During 'Discharging': '<S2>:7' */
          /* Transition: '<S2>:32' */
          if (*rtu_vitm_pack_current < -1.0) {
            /* Transition: '<S2>:36' */
            localDW->bitsForTID0.is_Power_Closed = BMO_IN_Discharging;

            /* Entry 'Discharging': '<S2>:7' */
            *rty_bmo_mode = 7U;
          } else if (*rtu_vitm_pack_current > 1.0) {
            /* Transition: '<S2>:37' */
            localDW->bitsForTID0.is_Power_Closed = BMO_IN_Charging;

            /* Entry 'Charging': '<S2>:6' */
            *rty_bmo_mode = 5U;
          } else {
            /* Transition: '<S2>:39' */
            localDW->bitsForTID0.is_Power_Closed = BMO_IN_Power_Closed_Default;

            /* Entry 'Power_Closed_Default': '<S2>:27' */
            *rty_bmo_mode = 3U;
          }
          break;

         default:
          /* During 'Power_Closed_Default': '<S2>:27' */
          /* Transition: '<S2>:31' */
          if (*rtu_vitm_pack_current < -1.0) {
            /* Transition: '<S2>:36' */
            localDW->bitsForTID0.is_Power_Closed = BMO_IN_Discharging;

            /* Entry 'Discharging': '<S2>:7' */
            *rty_bmo_mode = 7U;
          } else if (*rtu_vitm_pack_current > 1.0) {
            /* Transition: '<S2>:37' */
            localDW->bitsForTID0.is_Power_Closed = BMO_IN_Charging;

            /* Entry 'Charging': '<S2>:6' */
            *rty_bmo_mode = 5U;
          } else {
            /* Transition: '<S2>:39' */
            localDW->bitsForTID0.is_Power_Closed = BMO_IN_Power_Closed_Default;

            /* Entry 'Power_Closed_Default': '<S2>:27' */
            *rty_bmo_mode = 3U;
          }
          break;
        }
      }
      break;

     case BMO_IN_Power_OFF:
      /* During 'Power_OFF': '<S2>:2' */
      if (rtb_DataTypeConversion1 == 1) {
        /* Transition: '<S2>:10' */
        localDW->bitsForTID0.is_c1_BMO = BMO_IN_Power_ON;

        /* Entry 'Power_ON': '<S2>:1' */
        *rty_bmo_mode = 1U;
      }
      break;

     default:
      /* During 'Power_ON': '<S2>:1' */
      if (*rtu_cc_pre_cmd) {
        /* Transition: '<S2>:11' */
        localDW->bitsForTID0.is_c1_BMO = BMO_IN_Closing_Contactors;

        /* Entry 'Closing_Contactors': '<S2>:3' */
        *rty_bmo_mode = 2U;
      } else if (rtb_DataTypeConversion1 == 0) {
        /* Transition: '<S2>:67' */
        localDW->bitsForTID0.is_c1_BMO = BMO_IN_Power_OFF;

        /* Entry 'Power_OFF': '<S2>:2' */
        *rty_bmo_mode = 0U;
      } else if (rtb_LogicalOperator) {
        /* Transition: '<S2>:71' */
        localDW->bitsForTID0.is_c1_BMO = BMO_IN_Closing_MainContactors;

        /* Entry 'Closing_MainContactors': '<S2>:82' */
        *rty_bmo_mode = 2U;
      } else {
        if (*rtu_bsc_sleep_status) {
          /* Transition: '<S2>:81' */
          localDW->bitsForTID0.is_c1_BMO = BMO_IN_Charging_Sleep;

          /* Entry 'Charging_Sleep': '<S2>:80' */
          *rty_bmo_mode = 6U;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S1>/Chart' */

  /* RelationalOperator: '<S3>/Compare' incorporates:
   *  Constant: '<S3>/Constant'
   */
  *rty_bmo_charging_status = (*rty_bmo_mode == 5);

  /* RelationalOperator: '<S4>/Compare' incorporates:
   *  Constant: '<S4>/Constant'
   */
  *rty_bmo_discharging_status = (*rty_bmo_mode == 7);

  /* End of Outputs for SubSystem: '<Root>/BMO' */
}

/* Model initialize function */
void BMO_initialize(const char_T **rt_errorStatus, RT_MODEL_BMO *const BMO_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(BMO_M, rt_errorStatus);
}

/* end of file */
