/*
 *****************************************************************************
 *
 *  File:                     global.h
 *  Description:              Real-Time Workshop code generated for Simulink
 *                            model BMShil.
 *
 *  Model name:               BMShil
 *  Model date:               Sat Sep 05 12:41:31 2009
 *  Model version:            1.364
 *  Model author:             jtough
 *  Model description:
 *
 *  Model at code generation: nctzv8 - Wed Apr 14 09:38:50 2021
 *  Model comment:
 *  Last saved modification:  nctzv8 - Tue Apr 13 19:06:12 2021
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
 *============================================================================*/
/********* Includes *********/
#ifndef RTW_HEADER_global_h_
#define RTW_HEADER_global_h_
#include "rtwtypes.h"

/********* Macros *********/

/********* Global structure definitions *********/

/********* Global variables and prototypes *********/

/* Exported data declaration */
extern OE_CAL FREAL BMSc_airTemperature;/* (not defined) */
extern OE_CAL FREAL SOCc_CapacityFilterCoeff;/* (not defined) */
extern OE_CAL FREAL SOCv_InitalSOC[40];/* (not defined) */
extern OE_CAL FREAL SOCv_factoryInitSohC[40];/* (not defined) */
extern OE_CAL FREAL bmsc_CellMaxVolt; /* (not defined) */
extern OE_CAL FREAL bmsc_CellMinVolt; /* (not defined) */
extern OE_CAL FREAL bmsc_NumberInPara;/* (not defined) */
extern OE_CAL FREAL bmsc_NumberInSeries;/* (not defined) */
extern OE_CAL U8 bscv_LowFaultType[7];/* (not defined) */
extern OE_CAL U8 bscv_MediumFaultType[3];/* (not defined) */
extern OE_CAL U8 bscv_SevereFaultType;/* (not defined) */
extern OE_CAL FREAL btcc_Ki;          /* Ki for PI to control fan cmd */
extern OE_CAL FREAL btcc_Kp;          /* Kp for PI to control fan cmd */
extern OE_CAL FREAL btcc_ambient_temp_highth;/* ambient high temperature threshold */
extern OE_CAL FREAL btcc_ambient_temp_lowth;/* ambient low temperature threshold */
extern OE_CAL FREAL btcc_cell_temp_diffth;/* maximum allowable temperature difference between cells */
extern OE_CAL FREAL btcc_full_soc;    /* Minimum voltage before damage to battery pack. */
extern OE_CAL FREAL btcc_max_temp_highth;/* maximum battery temperature high threshold */
extern OE_CAL FREAL btcc_max_temp_lowth;/* maximum battery temperature low threshold */
extern OE_CAL FREAL btcc_min_temp_highth;/* minimum battery temperature high threshold */
extern OE_CAL FREAL btcc_min_temp_lowth;/* minimum battery temperature low threshold */
extern OE_CAL FREAL btcc_number_in_series;/* Number of logical cells wired in series in the battery pack */
extern OE_CAL FREAL btcc_pack_in_parallel;/* Number of logical cells wired in parallel in the battery pack */
extern OE_CAL FREAL cblc_battChargingMode;/* (not defined) */
extern OE_CAL FREAL cblc_deltaSocThreshBalance;/* (not defined) */
extern OE_CAL FREAL cblc_socThreshBalance;/* (not defined) */
extern OE_CAL FREAL sohc_current_threshold;/* (not defined) */
extern OE_CAL FREAL sohc_customer_filter_coeff;/* (not defined) */
extern OE_CAL FREAL sohc_filter_coeff;/* (not defined) */
extern OE_CAL FREAL sohc_pct_R_limit; /* (not defined) */
extern OE_CAL FREAL sohv_factoryInit_sohc[40];/* (not defined) */
extern OE_CAL FREAL sohv_factoryInit_sohr[40];/* (not defined) */
extern OE_CAL FREAL sopc_ChargeDerate;/* (not defined) */
extern OE_CAL FREAL sopc_ChgFaultDerate;/* (not defined) */
extern OE_CAL FREAL sopc_DischargeDerate;/* (not defined) */
extern OE_CAL FREAL sopc_DischgFaultDerate;/* (not defined) */
extern OE_CAL FREAL vitc_CellPackVolTol;/* max difference between sum of cell voltages and pack voltage to trigger pack voltage fault */
extern OE_CAL FREAL vitc_CellTempFaultTimer;/* time duration to trigger cell temperature fault */
extern OE_CAL FREAL vitc_CellTempFilterC;/* the constant for cell temperature filter */
extern OE_CAL U8 vitc_CellTempHighFaultReset;/* calibration to reset high cell temperature fault */
extern OE_CAL U8 vitc_CellTempLowFaultReset;/* calibration to reset low cell temperature fault */
extern OE_CAL FREAL vitc_CellTempMax; /* minimum allowable cell temperature */
extern OE_CAL FREAL vitc_CellTempMin; /* maximum allowable cell temperature */
extern OE_CAL FREAL vitc_CellVolFilterC;/* the constant for cell voltage filter */
extern OE_CAL FREAL vitc_CellVoltageFaultTimer;/* time duration to trigger cell voltage fault */
extern OE_CAL U8 vitc_CellVoltageHighFaultReset;/* calibration to reset the cell voltage high fault */
extern OE_CAL U8 vitc_CellVoltageLowFaultReset;/* calibration to reset the cell voltage low fault */
extern OE_CAL FREAL vitc_CellVoltageMax;/* maximum voltage before damage to battery pack. */
extern OE_CAL FREAL vitc_CellVoltageMin;/* minimum voltage before damage to battery pack. */
extern OE_CAL U8 vitc_CoolantInletTFaultReset;/* calibration to reset coolant inlet temperature fault */
extern OE_CAL FREAL vitc_CoolantInletTLowerLim;/* minimum allowable coolant inlet temperature */
extern OE_CAL FREAL vitc_CoolantInletTUpperLim;/* maximum allowable coolant inlet temperature */
extern OE_CAL U8 vitc_CoolantOutletTFaultReset;/* calibration to reset coolant outlet temperature fault */
extern OE_CAL FREAL vitc_CoolantOutletTLowerLim;/* minimum allowable coolant outlet temperature */
extern OE_CAL FREAL vitc_CoolantOutletTUpperLim;/* maximum allowable coolant outlet temperature */
extern OE_CAL FREAL vitc_CoolantTFilterC;/* the constant for coolant inlet and outlet tempeature filter */
extern OE_CAL FREAL vitc_CoolantTempFaultCounter;/* time duration to trigger coolant inlet and outlet temperature fault */
extern OE_CAL FREAL vitc_HVILFaultCounter;/* (not defined) */
extern OE_CAL U8 vitc_HVILFaultReset;/* (not defined) */
extern OE_CAL FREAL vitc_PackCurFilterC;/* the constant for pack curent filter */
extern OE_CAL U8 vitc_PackCurrentFaultReset;/* calibration to reset the pack current fault */
extern OE_CAL FREAL vitc_PackCurrentFaultTimer;/* time duration to trigger pack current fault */
extern OE_CAL FREAL vitc_PackCurrentLimit;/* maximum allowable pack current */
extern OE_CAL FREAL vitc_PackVolFilterC;/* the constant for pack voltage filter */
extern OE_CAL U8 vitc_PackVoltageFaultReset;/* calibration to reset the pack voltage fault */
extern OE_CAL FREAL vitc_PackVoltageFaultTimer;/* time duration to trigger pack voltage fault */
extern OE_CAL FREAL vitc_VehVolFilterC;/* the constant for vehicle side voltage filter */
extern FREAL BMS_CellTemp;            /* Cell1 Temperature */
extern FREAL BMS_CellVoltage;         /* Cell1 Voltage */
extern FREAL BMS_MedFault;            /* (not defined) */
extern FREAL BMS_RawPackCurrent;      /* Raw Pack Current */
extern FREAL BMS_RawPackVoltage;      /* Raw Pack Voltage */
extern FREAL BMS_RawVehSideVoltage;   /* Raw Vehicle Side Voltage */
extern U8 BMS_error;            /* (not defined) */
extern U8 BMS_overrun;            /* (not defined) */
extern U8 BMS_trig;             /* (not defined) */
extern U8 bsc_ChargerValue;       /* Charger Signal */
extern U8 bsc_ChgContactorCmd;  /* Charger contactor cmd */
extern U8 bsc_FaultType;          /* Fault Type */
extern U8 bsc_KeyValue;           /* Key Value */
extern U8 bsc_MainContactorCmd; /* Main contactor cmd */
extern U8 bsc_ReasonToOpen;       /* Main contactor cmd */
extern U8 bsc_VehiclePSR;         /* Vehicle PSR signal */
extern FREAL btc_coolant_flow_pct;    /* (not defined) */
extern FREAL soc_pack_actual;         /* Actual SOC */
extern FREAL soh_C_index;             /* (not defined) */
extern FREAL soh_R_index;             /* (not defined) */

#endif                                 /* RTW_HEADER_global_h_ */

/* end of file */
