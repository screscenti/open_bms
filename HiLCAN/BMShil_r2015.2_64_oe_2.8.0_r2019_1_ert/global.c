/*
 *****************************************************************************
 *
 *  File:                     global.c
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
#include "BMShil.h"
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "zero_crossing_types.h"
#include "BMShil_types.h"

/********* Macros *********/

/********* Static structure definitions *********/

/********* Global variables *********/

/* Exported data definition */
OE_CAL FREAL BMSc_airTemperature = 35.0;/* (not defined) */
OE_CAL FREAL SOCc_CapacityFilterCoeff = 0.0;/* (not defined) */
OE_CAL FREAL SOCv_InitalSOC[40] = { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
  0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
  0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 } ;/* (not defined) */

OE_CAL FREAL SOCv_factoryInitSohC[40] = { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
  1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
  1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0
} ;                                    /* (not defined) */

OE_CAL FREAL bmsc_CellMaxVolt = 4.2;   /* (not defined) */
OE_CAL FREAL bmsc_CellMinVolt = 2.7;   /* (not defined) */
OE_CAL FREAL bmsc_NumberInPara = 1.0;  /* (not defined) */
OE_CAL FREAL bmsc_NumberInSeries = 40.0;/* (not defined) */
OE_CAL U8 bscv_LowFaultType[7] = { 3U, 4U, 5U, 6U, 7U, 8U, 9U } ;/* (not defined) */

OE_CAL U8 bscv_MediumFaultType[3] = { 2U, 10U, 11U } ;/* (not defined) */

OE_CAL U8 bscv_SevereFaultType = 1U;   /* (not defined) */
OE_CAL FREAL btcc_Ki = 0.5;            /* Ki for PI to control fan cmd */
OE_CAL FREAL btcc_Kp = 2.0;            /* Kp for PI to control fan cmd */
OE_CAL FREAL btcc_ambient_temp_highth = 45.0;/* ambient high temperature threshold */
OE_CAL FREAL btcc_ambient_temp_lowth = -30.0;/* ambient low temperature threshold */
OE_CAL FREAL btcc_cell_temp_diffth = 5.0;/* maximum allowable temperature difference between cells */
OE_CAL FREAL btcc_full_soc = 95.0;     /* Minimum voltage before damage to battery pack. */
OE_CAL FREAL btcc_max_temp_highth = 40.0;/* maximum battery temperature high threshold */
OE_CAL FREAL btcc_max_temp_lowth = 35.0;/* maximum battery temperature low threshold */
OE_CAL FREAL btcc_min_temp_highth = 25.0;/* minimum battery temperature high threshold */
OE_CAL FREAL btcc_min_temp_lowth = 20.0;/* minimum battery temperature low threshold */
OE_CAL FREAL btcc_number_in_series = 40.0;/* Number of logical cells wired in series in the battery pack */
OE_CAL FREAL btcc_pack_in_parallel = 1.0;/* Number of logical cells wired in parallel in the battery pack */
OE_CAL FREAL cblc_battChargingMode = 5.0;/* (not defined) */
OE_CAL FREAL cblc_deltaSocThreshBalance = 0.1;/* (not defined) */
OE_CAL FREAL cblc_socThreshBalance = 50.0;/* (not defined) */
OE_CAL FREAL sohc_current_threshold = 0.1;/* (not defined) */
OE_CAL FREAL sohc_customer_filter_coeff = 0.9;/* (not defined) */
OE_CAL FREAL sohc_filter_coeff = 0.9995;/* (not defined) */
OE_CAL FREAL sohc_pct_R_limit = 30.0;  /* (not defined) */
OE_CAL FREAL sohv_factoryInit_sohc[40] = { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
  1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
  1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
  1.0 } ;                              /* (not defined) */

OE_CAL FREAL sohv_factoryInit_sohr[40] = { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
  1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
  1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
  1.0 } ;                              /* (not defined) */

OE_CAL FREAL sopc_ChargeDerate = 0.9;  /* (not defined) */
OE_CAL FREAL sopc_ChgFaultDerate = 0.5;/* (not defined) */
OE_CAL FREAL sopc_DischargeDerate = 0.9;/* (not defined) */
OE_CAL FREAL sopc_DischgFaultDerate = 0.5;/* (not defined) */
OE_CAL FREAL vitc_CellPackVolTol = 12.0;/* max difference between sum of cell voltages and pack voltage to trigger pack voltage fault */
OE_CAL FREAL vitc_CellTempFaultTimer = 5.0;/* time duration to trigger cell temperature fault */
OE_CAL FREAL vitc_CellTempFilterC = 1.0;/* the constant for cell temperature filter */
OE_CAL U8 vitc_CellTempHighFaultReset = 0;/* calibration to reset high cell temperature fault */
OE_CAL U8 vitc_CellTempLowFaultReset = 0;/* calibration to reset low cell temperature fault */
OE_CAL FREAL vitc_CellTempMax = 70.0;  /* minimum allowable cell temperature */
OE_CAL FREAL vitc_CellTempMin = -40.0; /* maximum allowable cell temperature */
OE_CAL FREAL vitc_CellVolFilterC = 1.0;/* the constant for cell voltage filter */
OE_CAL FREAL vitc_CellVoltageFaultTimer = 1.0;/* time duration to trigger cell voltage fault */
OE_CAL U8 vitc_CellVoltageHighFaultReset = 0;/* calibration to reset the cell voltage high fault */
OE_CAL U8 vitc_CellVoltageLowFaultReset = 0;/* calibration to reset the cell voltage low fault */
OE_CAL FREAL vitc_CellVoltageMax = 4.2;/* maximum voltage before damage to battery pack. */
OE_CAL FREAL vitc_CellVoltageMin = 2.7;/* minimum voltage before damage to battery pack. */
OE_CAL U8 vitc_CoolantInletTFaultReset = 0;/* calibration to reset coolant inlet temperature fault */
OE_CAL FREAL vitc_CoolantInletTLowerLim = -40.0;/* minimum allowable coolant inlet temperature */
OE_CAL FREAL vitc_CoolantInletTUpperLim = 70.0;/* maximum allowable coolant inlet temperature */
OE_CAL U8 vitc_CoolantOutletTFaultReset = 0;/* calibration to reset coolant outlet temperature fault */
OE_CAL FREAL vitc_CoolantOutletTLowerLim = -40.0;/* minimum allowable coolant outlet temperature */
OE_CAL FREAL vitc_CoolantOutletTUpperLim = 70.0;/* maximum allowable coolant outlet temperature */
OE_CAL FREAL vitc_CoolantTFilterC = 1.0;/* the constant for coolant inlet and outlet tempeature filter */
OE_CAL FREAL vitc_CoolantTempFaultCounter = 5.0;/* time duration to trigger coolant inlet and outlet temperature fault */
OE_CAL FREAL vitc_HVILFaultCounter = 5.0;/* (not defined) */
OE_CAL U8 vitc_HVILFaultReset = 0;     /* (not defined) */
OE_CAL FREAL vitc_PackCurFilterC = 1.0;/* the constant for pack curent filter */
OE_CAL U8 vitc_PackCurrentFaultReset = 0;/* calibration to reset the pack current fault */
OE_CAL FREAL vitc_PackCurrentFaultTimer = 0.1;/* time duration to trigger pack current fault */
OE_CAL FREAL vitc_PackCurrentLimit = 300.0;/* maximum allowable pack current */
OE_CAL FREAL vitc_PackVolFilterC = 1.0;/* the constant for pack voltage filter */
OE_CAL U8 vitc_PackVoltageFaultReset = 0;/* calibration to reset the pack voltage fault */
OE_CAL FREAL vitc_PackVoltageFaultTimer = 1.0;/* time duration to trigger pack voltage fault */
OE_CAL FREAL vitc_VehVolFilterC = 1.0; /* the constant for vehicle side voltage filter */
FREAL BMS_CellTemp;                    /* Cell1 Temperature */
FREAL BMS_CellVoltage;                 /* Cell1 Voltage */
FREAL BMS_MedFault;                    /* (not defined) */
FREAL BMS_RawPackCurrent;              /* Raw Pack Current */
FREAL BMS_RawPackVoltage;              /* Raw Pack Voltage */
FREAL BMS_RawVehSideVoltage;           /* Raw Vehicle Side Voltage */
U8 BMS_error;                          /* (not defined) */
U8 BMS_overrun;                        /* (not defined) */
U8 BMS_trig;                           /* (not defined) */
U8 bsc_ChargerValue;                   /* Charger Signal */
U8 bsc_ChgContactorCmd;                /* Charger contactor cmd */
U8 bsc_FaultType;                      /* Fault Type */
U8 bsc_KeyValue;                       /* Key Value */
U8 bsc_MainContactorCmd;               /* Main contactor cmd */
U8 bsc_ReasonToOpen;                   /* Main contactor cmd */
U8 bsc_VehiclePSR;                     /* Vehicle PSR signal */
FREAL btc_coolant_flow_pct;            /* (not defined) */
FREAL soc_pack_actual;                 /* Actual SOC */
FREAL soh_C_index;                     /* (not defined) */
FREAL soh_R_index;                     /* (not defined) */

/********* Static Variables *********/

/********* External references *********/
/********* Functions *********/

/* end of file */
