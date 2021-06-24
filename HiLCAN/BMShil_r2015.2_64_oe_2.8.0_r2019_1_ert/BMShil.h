/*
 *****************************************************************************
 *
 *  File:                     BMShil.h
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
#ifndef RTW_HEADER_BMShil_h_
#define RTW_HEADER_BMShil_h_
#ifndef BMShil_COMMON_INCLUDES_
# define BMShil_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#endif                                 /* BMShil_COMMON_INCLUDES_ */

#include "BMShil_types.h"

/* Shared type includes */
#include "model_reference_types.h"

/* Child system includes */
#include "sop.h"
#include "soh.h"
#include "VITM.h"
#include "SOC.h"
#include "CC.h"
#include "CB.h"
#include "BTC.h"
#include "BSC.h"
#include "BMO.h"

/* Includes for objects with custom storage classes. */
#include "global.h"
#include "rtGetInf.h"
#include "rtGetNaN.h"
#include "look1_binlx.h"
#include "rt_nonfinite.h"

/********* Macros *********/

/* Include all OpenECU platform headers. */
#include "openecu.h"

/* Include all auto-generated platform headers. */
#include "BMShil_api.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
# define rtmGetErrorStatusPointer(rtm) ((const char_T **)(&((rtm)->errorStatus)))
#endif

/********* Global structure definitions *********/

/* Block signals (auto storage) */
typedef struct {
  FREAL pcx_CANdb_ReceiveMessage_o4;   /* '<S5>/pcx_CANdb_ReceiveMessage' */
  FREAL pcx_CANdb_ReceiveMessage5_o4;  /* '<S3>/pcx_CANdb_ReceiveMessage5' */
  FREAL pcx_CANdb_ReceiveMessage9_o4;  /* '<S11>/pcx_CANdb_ReceiveMessage9' */
  FREAL pcx_CANdb_ReceiveMessage9_o5;  /* '<S11>/pcx_CANdb_ReceiveMessage9' */
  FREAL pcx_CANdb_ReceiveMessage9_o6;  /* '<S11>/pcx_CANdb_ReceiveMessage9' */
  FREAL pcx_CANdb_ReceiveMessage9_o7;  /* '<S11>/pcx_CANdb_ReceiveMessage9' */
  FREAL pcx_CANdb_ReceiveMessage8_o4;  /* '<S11>/pcx_CANdb_ReceiveMessage8' */
  FREAL pcx_CANdb_ReceiveMessage8_o5;  /* '<S11>/pcx_CANdb_ReceiveMessage8' */
  FREAL pcx_CANdb_ReceiveMessage8_o6;  /* '<S11>/pcx_CANdb_ReceiveMessage8' */
  FREAL pcx_CANdb_ReceiveMessage8_o7;  /* '<S11>/pcx_CANdb_ReceiveMessage8' */
  FREAL pcx_CANdb_ReceiveMessage7_o4;  /* '<S11>/pcx_CANdb_ReceiveMessage7' */
  FREAL pcx_CANdb_ReceiveMessage7_o5;  /* '<S11>/pcx_CANdb_ReceiveMessage7' */
  FREAL pcx_CANdb_ReceiveMessage7_o6;  /* '<S11>/pcx_CANdb_ReceiveMessage7' */
  FREAL pcx_CANdb_ReceiveMessage7_o7;  /* '<S11>/pcx_CANdb_ReceiveMessage7' */
  FREAL pcx_CANdb_ReceiveMessage6_o4;  /* '<S11>/pcx_CANdb_ReceiveMessage6' */
  FREAL pcx_CANdb_ReceiveMessage6_o5;  /* '<S11>/pcx_CANdb_ReceiveMessage6' */
  FREAL pcx_CANdb_ReceiveMessage6_o6;  /* '<S11>/pcx_CANdb_ReceiveMessage6' */
  FREAL pcx_CANdb_ReceiveMessage6_o7;  /* '<S11>/pcx_CANdb_ReceiveMessage6' */
  FREAL pcx_CANdb_ReceiveMessage5_o4_p;/* '<S11>/pcx_CANdb_ReceiveMessage5' */
  FREAL pcx_CANdb_ReceiveMessage5_o5;  /* '<S11>/pcx_CANdb_ReceiveMessage5' */
  FREAL pcx_CANdb_ReceiveMessage5_o6;  /* '<S11>/pcx_CANdb_ReceiveMessage5' */
  FREAL pcx_CANdb_ReceiveMessage5_o7;  /* '<S11>/pcx_CANdb_ReceiveMessage5' */
  FREAL pcx_CANdb_ReceiveMessage4_o4;  /* '<S11>/pcx_CANdb_ReceiveMessage4' */
  FREAL pcx_CANdb_ReceiveMessage4_o5;  /* '<S11>/pcx_CANdb_ReceiveMessage4' */
  FREAL pcx_CANdb_ReceiveMessage4_o6;  /* '<S11>/pcx_CANdb_ReceiveMessage4' */
  FREAL pcx_CANdb_ReceiveMessage4_o7;  /* '<S11>/pcx_CANdb_ReceiveMessage4' */
  FREAL pcx_CANdb_ReceiveMessage3_o4;  /* '<S11>/pcx_CANdb_ReceiveMessage3' */
  FREAL pcx_CANdb_ReceiveMessage3_o5;  /* '<S11>/pcx_CANdb_ReceiveMessage3' */
  FREAL pcx_CANdb_ReceiveMessage3_o6;  /* '<S11>/pcx_CANdb_ReceiveMessage3' */
  FREAL pcx_CANdb_ReceiveMessage3_o7;  /* '<S11>/pcx_CANdb_ReceiveMessage3' */
  FREAL pcx_CANdb_ReceiveMessage2_o4;  /* '<S11>/pcx_CANdb_ReceiveMessage2' */
  FREAL pcx_CANdb_ReceiveMessage2_o5;  /* '<S11>/pcx_CANdb_ReceiveMessage2' */
  FREAL pcx_CANdb_ReceiveMessage2_o6;  /* '<S11>/pcx_CANdb_ReceiveMessage2' */
  FREAL pcx_CANdb_ReceiveMessage2_o7;  /* '<S11>/pcx_CANdb_ReceiveMessage2' */
  FREAL pcx_CANdb_ReceiveMessage1_o4;  /* '<S11>/pcx_CANdb_ReceiveMessage1' */
  FREAL pcx_CANdb_ReceiveMessage1_o5;  /* '<S11>/pcx_CANdb_ReceiveMessage1' */
  FREAL pcx_CANdb_ReceiveMessage1_o6;  /* '<S11>/pcx_CANdb_ReceiveMessage1' */
  FREAL pcx_CANdb_ReceiveMessage1_o7;  /* '<S11>/pcx_CANdb_ReceiveMessage1' */
  FREAL pcx_CANdb_ReceiveMessage_o5;   /* '<S11>/pcx_CANdb_ReceiveMessage' */
  FREAL pcx_CANdb_ReceiveMessage_o6;   /* '<S11>/pcx_CANdb_ReceiveMessage' */
  FREAL pcx_CANdb_ReceiveMessage_o7;   /* '<S11>/pcx_CANdb_ReceiveMessage' */
  FREAL pcx_CANdb_ReceiveMessage_o4_a; /* '<S1>/pcx_CANdb_ReceiveMessage' */
  FREAL pcx_CANdb_ReceiveMessage1_o6_b;/* '<S1>/pcx_CANdb_ReceiveMessage1' */
  FREAL pcx_CANdb_ReceiveMessage14_o4; /* '<S10>/pcx_CANdb_ReceiveMessage14' */
  FREAL pcx_CANdb_ReceiveMessage14_o5; /* '<S10>/pcx_CANdb_ReceiveMessage14' */
  FREAL pcx_CANdb_ReceiveMessage14_o6; /* '<S10>/pcx_CANdb_ReceiveMessage14' */
  FREAL pcx_CANdb_ReceiveMessage14_o7; /* '<S10>/pcx_CANdb_ReceiveMessage14' */
  FREAL pcx_CANdb_ReceiveMessage13_o4; /* '<S10>/pcx_CANdb_ReceiveMessage13' */
  FREAL pcx_CANdb_ReceiveMessage13_o5; /* '<S10>/pcx_CANdb_ReceiveMessage13' */
  FREAL pcx_CANdb_ReceiveMessage13_o6; /* '<S10>/pcx_CANdb_ReceiveMessage13' */
  FREAL pcx_CANdb_ReceiveMessage13_o7; /* '<S10>/pcx_CANdb_ReceiveMessage13' */
  FREAL pcx_CANdb_ReceiveMessage12_o4; /* '<S10>/pcx_CANdb_ReceiveMessage12' */
  FREAL pcx_CANdb_ReceiveMessage12_o5; /* '<S10>/pcx_CANdb_ReceiveMessage12' */
  FREAL pcx_CANdb_ReceiveMessage12_o6; /* '<S10>/pcx_CANdb_ReceiveMessage12' */
  FREAL pcx_CANdb_ReceiveMessage12_o7; /* '<S10>/pcx_CANdb_ReceiveMessage12' */
  FREAL pcx_CANdb_ReceiveMessage11_o4; /* '<S10>/pcx_CANdb_ReceiveMessage11' */
  FREAL pcx_CANdb_ReceiveMessage11_o5; /* '<S10>/pcx_CANdb_ReceiveMessage11' */
  FREAL pcx_CANdb_ReceiveMessage11_o6; /* '<S10>/pcx_CANdb_ReceiveMessage11' */
  FREAL pcx_CANdb_ReceiveMessage11_o7; /* '<S10>/pcx_CANdb_ReceiveMessage11' */
  FREAL pcx_CANdb_ReceiveMessage10_o4; /* '<S10>/pcx_CANdb_ReceiveMessage10' */
  FREAL pcx_CANdb_ReceiveMessage10_o5; /* '<S10>/pcx_CANdb_ReceiveMessage10' */
  FREAL pcx_CANdb_ReceiveMessage10_o6; /* '<S10>/pcx_CANdb_ReceiveMessage10' */
  FREAL pcx_CANdb_ReceiveMessage10_o7; /* '<S10>/pcx_CANdb_ReceiveMessage10' */
  FREAL pcx_CANdb_ReceiveMessage9_o4_h;/* '<S10>/pcx_CANdb_ReceiveMessage9' */
  FREAL pcx_CANdb_ReceiveMessage9_o5_n;/* '<S10>/pcx_CANdb_ReceiveMessage9' */
  FREAL pcx_CANdb_ReceiveMessage9_o6_f;/* '<S10>/pcx_CANdb_ReceiveMessage9' */
  FREAL pcx_CANdb_ReceiveMessage9_o7_e;/* '<S10>/pcx_CANdb_ReceiveMessage9' */
  FREAL pcx_CANdb_ReceiveMessage8_o4_c;/* '<S10>/pcx_CANdb_ReceiveMessage8' */
  FREAL pcx_CANdb_ReceiveMessage8_o5_e;/* '<S10>/pcx_CANdb_ReceiveMessage8' */
  FREAL pcx_CANdb_ReceiveMessage8_o6_j;/* '<S10>/pcx_CANdb_ReceiveMessage8' */
  FREAL pcx_CANdb_ReceiveMessage8_o7_l;/* '<S10>/pcx_CANdb_ReceiveMessage8' */
  FREAL pcx_CANdb_ReceiveMessage7_o4_c;/* '<S10>/pcx_CANdb_ReceiveMessage7' */
  FREAL pcx_CANdb_ReceiveMessage7_o5_e;/* '<S10>/pcx_CANdb_ReceiveMessage7' */
  FREAL pcx_CANdb_ReceiveMessage7_o6_p;/* '<S10>/pcx_CANdb_ReceiveMessage7' */
  FREAL pcx_CANdb_ReceiveMessage7_o7_n;/* '<S10>/pcx_CANdb_ReceiveMessage7' */
  FREAL pcx_CANdb_ReceiveMessage6_o4_e;/* '<S10>/pcx_CANdb_ReceiveMessage6' */
  FREAL pcx_CANdb_ReceiveMessage6_o5_b;/* '<S10>/pcx_CANdb_ReceiveMessage6' */
  FREAL pcx_CANdb_ReceiveMessage6_o6_k;/* '<S10>/pcx_CANdb_ReceiveMessage6' */
  FREAL pcx_CANdb_ReceiveMessage6_o7_p;/* '<S10>/pcx_CANdb_ReceiveMessage6' */
  FREAL pcx_CANdb_ReceiveMessage5_o5_o;/* '<S10>/pcx_CANdb_ReceiveMessage5' */
  FREAL pcx_CANdb_ReceiveMessage5_o6_e;/* '<S10>/pcx_CANdb_ReceiveMessage5' */
  FREAL pcx_CANdb_ReceiveMessage5_o7_n;/* '<S10>/pcx_CANdb_ReceiveMessage5' */
  FREAL uDLookupTable;                 /* '<S7>/1-D Lookup Table' */
  FREAL pcx_CANdb_ReceiveMessage1_o4_b;/* '<Root>/pcx_CANdb_ReceiveMessage1' */
  FREAL put_Reset_o8;                  /* '<Root>/put_Reset' */
  FREAL BattPwLimDischarge;            /* '<S2>/SOP' */
  FREAL BattCurrLimDischarge;          /* '<S2>/SOP' */
  FREAL BattPwLimCharge;               /* '<S2>/SOP' */
  FREAL BattCurrLimCharge;             /* '<S2>/SOP' */
  FREAL SOH_o2[40];                    /* '<S2>/SOH' */
  FREAL SOH_o4[40];                    /* '<S2>/SOH' */
  FREAL soh_customer_index;            /* '<S2>/SOH' */
  FREAL btc_batt_target_temp;          /* '<S2>/BTC' */
  FREAL btc_batt_actual_temp;          /* '<S2>/BTC' */
  FREAL SOC_o1[40];                    /* '<S2>/SOC' */
  FREAL soc_pack_customer;             /* '<S2>/SOC' */
  FREAL soc_cell_max;                  /* '<S2>/SOC' */
  FREAL soc_cell_min;                  /* '<S2>/SOC' */
  FREAL SOC_o7[40];                    /* '<S2>/SOC' */
  FREAL vitm_CellsMaxTemperature;      /* '<S2>/VITM' */
  FREAL vitm_CellsMinTemperature;      /* '<S2>/VITM' */
  FREAL vitm_CellsAvgTemperature;      /* '<S2>/VITM' */
  FREAL vitm_CellsMinVoltage;          /* '<S2>/VITM' */
  FREAL vitm_CellsMaxVoltage;          /* '<S2>/VITM' */
  FREAL vitm_CellsAvgVoltage;          /* '<S2>/VITM' */
  FREAL vitm_PackVoltageFiltered;      /* '<S2>/VITM' */
  FREAL vitm_CoolantDeltaTemp;         /* '<S2>/VITM' */
  FREAL vitm_CoolantInletTFiltered;    /* '<S2>/VITM' */
  FREAL vitm_CoolantOutletTFiltered;   /* '<S2>/VITM' */
  FREAL VITM_o21[40];                  /* '<S2>/VITM' */
  FREAL VITM_o22[40];                  /* '<S2>/VITM' */
  FREAL VITM_o23;                      /* '<S2>/VITM' */
  U8 Delay1;                           /* '<Root>/Delay1' */
  U8 DataTypeConversion2;              /* '<Root>/Data Type Conversion2' */
  U8 DataTypeConversion6;              /* '<Root>/Data Type Conversion6' */
  U8 DataTypeConversion1;              /* '<Root>/Data Type Conversion1' */
  U8 bmo_mode;                         /* '<S2>/BMO' */
  U8 CC_o5;                            /* '<S2>/CC' */
  U8 BSC_o6;                           /* '<S2>/BSC' */
  U8 BSC_o7;                           /* '<S2>/BSC' */
  U8 vitm_CellsTemperatureLowFault;    /* '<S2>/VITM' */
  U8 vitm_CellsTemperatureHighFault;   /* '<S2>/VITM' */
  U8 vitm_CellsVoltageLowFault;        /* '<S2>/VITM' */
  U8 vitm_CellsVoltageHighFault;       /* '<S2>/VITM' */
  U8 vitm_PackVoltageFault;            /* '<S2>/VITM' */
  U8 vitm_PackCurrentFault;            /* '<S2>/VITM' */
  U8 vitm_CoolantInletTempFault;       /* '<S2>/VITM' */
  U8 vitm_CoolantOutlletTempFault;     /* '<S2>/VITM' */
  U8 vitm_HVILFault;                   /* '<S2>/VITM' */
  U8 pcx_CANdb_ReceiveMessage_o1;      /* '<S5>/pcx_CANdb_ReceiveMessage' */
  U8 pcx_CANdb_ReceiveMessage_o2;      /* '<S5>/pcx_CANdb_ReceiveMessage' */
  U8 pcx_CANdb_ReceiveMessage_o3;      /* '<S5>/pcx_CANdb_ReceiveMessage' */
  U8 pcx_CANdb_ReceiveMessage5_o3;     /* '<S3>/pcx_CANdb_ReceiveMessage5' */
  U8 pcx_CANdb_ReceiveMessage9_o1;     /* '<S11>/pcx_CANdb_ReceiveMessage9' */
  U8 pcx_CANdb_ReceiveMessage9_o2;     /* '<S11>/pcx_CANdb_ReceiveMessage9' */
  U8 pcx_CANdb_ReceiveMessage9_o3;     /* '<S11>/pcx_CANdb_ReceiveMessage9' */
  U8 pcx_CANdb_ReceiveMessage8_o1;     /* '<S11>/pcx_CANdb_ReceiveMessage8' */
  U8 pcx_CANdb_ReceiveMessage8_o2;     /* '<S11>/pcx_CANdb_ReceiveMessage8' */
  U8 pcx_CANdb_ReceiveMessage8_o3;     /* '<S11>/pcx_CANdb_ReceiveMessage8' */
  U8 pcx_CANdb_ReceiveMessage7_o1;     /* '<S11>/pcx_CANdb_ReceiveMessage7' */
  U8 pcx_CANdb_ReceiveMessage7_o2;     /* '<S11>/pcx_CANdb_ReceiveMessage7' */
  U8 pcx_CANdb_ReceiveMessage7_o3;     /* '<S11>/pcx_CANdb_ReceiveMessage7' */
  U8 pcx_CANdb_ReceiveMessage6_o1;     /* '<S11>/pcx_CANdb_ReceiveMessage6' */
  U8 pcx_CANdb_ReceiveMessage6_o2;     /* '<S11>/pcx_CANdb_ReceiveMessage6' */
  U8 pcx_CANdb_ReceiveMessage6_o3;     /* '<S11>/pcx_CANdb_ReceiveMessage6' */
  U8 pcx_CANdb_ReceiveMessage5_o1;     /* '<S11>/pcx_CANdb_ReceiveMessage5' */
  U8 pcx_CANdb_ReceiveMessage5_o2;     /* '<S11>/pcx_CANdb_ReceiveMessage5' */
  U8 pcx_CANdb_ReceiveMessage5_o3_i;   /* '<S11>/pcx_CANdb_ReceiveMessage5' */
  U8 pcx_CANdb_ReceiveMessage4_o1;     /* '<S11>/pcx_CANdb_ReceiveMessage4' */
  U8 pcx_CANdb_ReceiveMessage4_o2;     /* '<S11>/pcx_CANdb_ReceiveMessage4' */
  U8 pcx_CANdb_ReceiveMessage4_o3;     /* '<S11>/pcx_CANdb_ReceiveMessage4' */
  U8 pcx_CANdb_ReceiveMessage3_o1;     /* '<S11>/pcx_CANdb_ReceiveMessage3' */
  U8 pcx_CANdb_ReceiveMessage3_o2;     /* '<S11>/pcx_CANdb_ReceiveMessage3' */
  U8 pcx_CANdb_ReceiveMessage3_o3;     /* '<S11>/pcx_CANdb_ReceiveMessage3' */
  U8 pcx_CANdb_ReceiveMessage2_o1;     /* '<S11>/pcx_CANdb_ReceiveMessage2' */
  U8 pcx_CANdb_ReceiveMessage2_o2;     /* '<S11>/pcx_CANdb_ReceiveMessage2' */
  U8 pcx_CANdb_ReceiveMessage2_o3;     /* '<S11>/pcx_CANdb_ReceiveMessage2' */
  U8 pcx_CANdb_ReceiveMessage1_o1;     /* '<S11>/pcx_CANdb_ReceiveMessage1' */
  U8 pcx_CANdb_ReceiveMessage1_o2;     /* '<S11>/pcx_CANdb_ReceiveMessage1' */
  U8 pcx_CANdb_ReceiveMessage1_o3;     /* '<S11>/pcx_CANdb_ReceiveMessage1' */
  U8 pcx_CANdb_ReceiveMessage_o1_n;    /* '<S11>/pcx_CANdb_ReceiveMessage' */
  U8 pcx_CANdb_ReceiveMessage_o2_h;    /* '<S11>/pcx_CANdb_ReceiveMessage' */
  U8 pcx_CANdb_ReceiveMessage_o3_k;    /* '<S11>/pcx_CANdb_ReceiveMessage' */
  U8 pcx_CANdb_ReceiveMessage_o1_d;    /* '<S1>/pcx_CANdb_ReceiveMessage' */
  U8 pcx_CANdb_ReceiveMessage_o2_p;    /* '<S1>/pcx_CANdb_ReceiveMessage' */
  U8 pcx_CANdb_ReceiveMessage_o3_e;    /* '<S1>/pcx_CANdb_ReceiveMessage' */
  U8 pcx_CANdb_ReceiveMessage1_o1_j;   /* '<S1>/pcx_CANdb_ReceiveMessage1' */
  U8 pcx_CANdb_ReceiveMessage1_o2_a;   /* '<S1>/pcx_CANdb_ReceiveMessage1' */
  U8 pcx_CANdb_ReceiveMessage1_o3_o;   /* '<S1>/pcx_CANdb_ReceiveMessage1' */
  U8 pcx_CANdb_ReceiveMessage14_o1;    /* '<S10>/pcx_CANdb_ReceiveMessage14' */
  U8 pcx_CANdb_ReceiveMessage14_o2;    /* '<S10>/pcx_CANdb_ReceiveMessage14' */
  U8 pcx_CANdb_ReceiveMessage14_o3;    /* '<S10>/pcx_CANdb_ReceiveMessage14' */
  U8 pcx_CANdb_ReceiveMessage13_o1;    /* '<S10>/pcx_CANdb_ReceiveMessage13' */
  U8 pcx_CANdb_ReceiveMessage13_o2;    /* '<S10>/pcx_CANdb_ReceiveMessage13' */
  U8 pcx_CANdb_ReceiveMessage13_o3;    /* '<S10>/pcx_CANdb_ReceiveMessage13' */
  U8 pcx_CANdb_ReceiveMessage12_o1;    /* '<S10>/pcx_CANdb_ReceiveMessage12' */
  U8 pcx_CANdb_ReceiveMessage12_o2;    /* '<S10>/pcx_CANdb_ReceiveMessage12' */
  U8 pcx_CANdb_ReceiveMessage12_o3;    /* '<S10>/pcx_CANdb_ReceiveMessage12' */
  U8 pcx_CANdb_ReceiveMessage11_o1;    /* '<S10>/pcx_CANdb_ReceiveMessage11' */
  U8 pcx_CANdb_ReceiveMessage11_o2;    /* '<S10>/pcx_CANdb_ReceiveMessage11' */
  U8 pcx_CANdb_ReceiveMessage11_o3;    /* '<S10>/pcx_CANdb_ReceiveMessage11' */
  U8 pcx_CANdb_ReceiveMessage10_o1;    /* '<S10>/pcx_CANdb_ReceiveMessage10' */
  U8 pcx_CANdb_ReceiveMessage10_o2;    /* '<S10>/pcx_CANdb_ReceiveMessage10' */
  U8 pcx_CANdb_ReceiveMessage10_o3;    /* '<S10>/pcx_CANdb_ReceiveMessage10' */
  U8 pcx_CANdb_ReceiveMessage9_o1_d;   /* '<S10>/pcx_CANdb_ReceiveMessage9' */
  U8 pcx_CANdb_ReceiveMessage9_o2_c;   /* '<S10>/pcx_CANdb_ReceiveMessage9' */
  U8 pcx_CANdb_ReceiveMessage9_o3_g;   /* '<S10>/pcx_CANdb_ReceiveMessage9' */
  U8 pcx_CANdb_ReceiveMessage8_o1_o;   /* '<S10>/pcx_CANdb_ReceiveMessage8' */
  U8 pcx_CANdb_ReceiveMessage8_o2_p;   /* '<S10>/pcx_CANdb_ReceiveMessage8' */
  U8 pcx_CANdb_ReceiveMessage8_o3_i;   /* '<S10>/pcx_CANdb_ReceiveMessage8' */
  U8 pcx_CANdb_ReceiveMessage7_o1_c;   /* '<S10>/pcx_CANdb_ReceiveMessage7' */
  U8 pcx_CANdb_ReceiveMessage7_o2_g;   /* '<S10>/pcx_CANdb_ReceiveMessage7' */
  U8 pcx_CANdb_ReceiveMessage7_o3_g;   /* '<S10>/pcx_CANdb_ReceiveMessage7' */
  U8 pcx_CANdb_ReceiveMessage6_o1_a;   /* '<S10>/pcx_CANdb_ReceiveMessage6' */
  U8 pcx_CANdb_ReceiveMessage6_o2_i;   /* '<S10>/pcx_CANdb_ReceiveMessage6' */
  U8 pcx_CANdb_ReceiveMessage6_o3_k;   /* '<S10>/pcx_CANdb_ReceiveMessage6' */
  U8 pcx_CANdb_ReceiveMessage5_o1_k;   /* '<S10>/pcx_CANdb_ReceiveMessage5' */
  U8 pcx_CANdb_ReceiveMessage5_o2_n;   /* '<S10>/pcx_CANdb_ReceiveMessage5' */
  U8 pcx_CANdb_ReceiveMessage5_o3_k;   /* '<S10>/pcx_CANdb_ReceiveMessage5' */
  U8 pcx_CANdb_TransmitMessage;        /* '<S4>/pcx_CANdb_TransmitMessage' */
  U8 pcx_CANdb_TransmitMessage1;       /* '<S4>/pcx_CANdb_TransmitMessage1' */
  U8 pcx_CANdb_TransmitMessage2;       /* '<S4>/pcx_CANdb_TransmitMessage2' */
  U8 pcx_CANdb_TransmitMessage3;       /* '<S4>/pcx_CANdb_TransmitMessage3' */
  U8 pcx_CANdb_TransmitMessage4;       /* '<S4>/pcx_CANdb_TransmitMessage4' */
  U8 pcx_CANdb_TransmitMessage5;       /* '<S4>/pcx_CANdb_TransmitMessage5' */
  U8 pcx_CANdb_TransmitMessage6;       /* '<S4>/pcx_CANdb_TransmitMessage6' */
  U8 pcx_CANdb_TransmitMessage7;       /* '<S4>/pcx_CANdb_TransmitMessage7' */
  U8 pcx_CANdb_TransmitMessage8;       /* '<S4>/pcx_CANdb_TransmitMessage8' */
  U8 pcx_CANdb_TransmitMessage9;       /* '<S4>/pcx_CANdb_TransmitMessage9' */
  U8 pcx_CANdb_TransmitMessage1_l;     /* '<S6>/pcx_CANdb_TransmitMessage1' */
  U8 pcx_CANdb_TransmitMessage_j;      /* '<S6>/pcx_CANdb_TransmitMessage' */
  U8 pcx_CANdb_TransmitMessage1_j;     /* '<S7>/pcx_CANdb_TransmitMessage1' */
  U8 pcx_CANdb_ReceiveMessage1_o1_b;   /* '<Root>/pcx_CANdb_ReceiveMessage1' */
  U8 pcx_CANdb_ReceiveMessage1_o2_m;   /* '<Root>/pcx_CANdb_ReceiveMessage1' */
  U8 pcx_CANdb_ReceiveMessage1_o3_p;   /* '<Root>/pcx_CANdb_ReceiveMessage1' */
  U8 DataTypeConversion3;              /* '<Root>/Data Type Conversion3' */
  U8 put_Reset_o1;                     /* '<Root>/put_Reset' */
  U8 put_Reset_o2;                     /* '<Root>/put_Reset' */
  U8 put_Reset_o3;                     /* '<Root>/put_Reset' */
  U8 put_Reset_o4;                     /* '<Root>/put_Reset' */
  U8 put_Reset_o5;                     /* '<Root>/put_Reset' */
  U8 put_Reset_o6;                     /* '<Root>/put_Reset' */
  U8 put_Reset_o7;                     /* '<Root>/put_Reset' */
  U8 CB_o1[40];                        /* '<S2>/CB' */
  U8 cb_status;                        /* '<S2>/CB' */
  U8 btc_batt_request_status;          /* '<S2>/BTC' */
  U8 btc_thermal_condition;            /* '<S2>/BTC' */
  U8 BMO_o2;                           /* '<S2>/BMO' */
  U8 BMO_o3;                           /* '<S2>/BMO' */
  U8 CC_o1;                            /* '<S2>/CC' */
  U8 CC_o4;                            /* '<S2>/CC' */
  U8 BSC_o1;                           /* '<S2>/BSC' */
  U8 BSC_o2;                           /* '<S2>/BSC' */
  U8 BSC_o3;                           /* '<S2>/BSC' */
  U8 BSC_o4;                           /* '<S2>/BSC' */
  U8 soc_rate_high;                    /* '<S2>/SOC' */
} BlockIO_BMShil;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  FREAL end_count;                     /* '<S2>/Chart' */
  rtMdlrefDWork_CB CB_DWORK1;          /* '<S2>/CB' */
  rtMdlrefDWork_sop SOP_DWORK1;        /* '<S2>/SOP' */
  rtMdlrefDWork_soh SOH_DWORK1;        /* '<S2>/SOH' */
  rtMdlrefDWork_BTC BTC_DWORK1;        /* '<S2>/BTC' */
  rtMdlrefDWork_BMO BMO_DWORK1;        /* '<S2>/BMO' */
  rtMdlrefDWork_CC CC_DWORK1;          /* '<S2>/CC' */
  rtMdlrefDWork_BSC BSC_DWORK1;        /* '<S2>/BSC' */
  rtMdlrefDWork_SOC SOC_DWORK1;        /* '<S2>/SOC' */
  rtMdlrefDWork_VITM VITM_DWORK1;      /* '<S2>/VITM' */
  struct {
    UINT is_c3_BMShil:3;               /* '<S2>/Chart' */
    UINT is_active_c3_BMShil:1;        /* '<S2>/Chart' */
  } bitsForTID0;

  U8 Delay_DSTATE[2];                  /* '<Root>/Delay' */
  U8 Delay1_DSTATE[2];                 /* '<Root>/Delay1' */
} D_Work_BMShil;

/* Real-time Model Data Structure */
struct tag_RTM_BMShil {
  const char_T * volatile errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    U32 clockTick0;
  } Timing;
};

/********* Global variables and prototypes *********/

/* Block signals (auto storage) */
extern BlockIO_BMShil BMShil_B;

/* Block states (auto storage) */
extern D_Work_BMShil BMShil_DWork;

/* External data declarations for dependent source files */
extern const FREAL BMShil_RGND;        /* FREAL ground */

/* Model entry point functions */
extern void BMShil_initialize(void);
extern void BMShil_step(void);
extern PCX_HANDLE_T pcx_CANdb_ReceiveMessage_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_ReceiveMessage5_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_ReceiveMessage9_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_ReceiveMessage8_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_ReceiveMessage7_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_ReceiveMessage6_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_ReceiveMessage5_b_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_ReceiveMessage4_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_ReceiveMessage3_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_ReceiveMessage2_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_ReceiveMessage1_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_ReceiveMessage_p_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_ReceiveMessage_pz_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_ReceiveMessage1_j_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_ReceiveMessage14_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_ReceiveMessage13_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_ReceiveMessage12_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_ReceiveMessage11_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_ReceiveMessage10_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_ReceiveMessage9_n_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_ReceiveMessage8_f_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_ReceiveMessage7_o_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_ReceiveMessage6_p_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_ReceiveMessage5_a_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_TransmitMessage_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_TransmitMessage1_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_TransmitMessage2_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_TransmitMessage3_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_TransmitMessage4_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_TransmitMessage5_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_TransmitMessage6_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_TransmitMessage7_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_TransmitMessage8_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_TransmitMessage9_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_TransmitMessage1_k_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_TransmitMessage_a_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_TransmitMessage1_f_msg_handle;
extern PCX_HANDLE_T pcx_CANdb_ReceiveMessage1_jb_msg_handle;

/* Real-time Model object */
extern RT_MODEL_BMShil *const BMShil_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S2>/Constant' : Unused code path elimination
 * Block '<S2>/Scope' : Unused code path elimination
 * Block '<Root>/Constant' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'BMShil'
 * '<S1>'   : 'BMShil/Analog_Inputs'
 * '<S2>'   : 'BMShil/BMS'
 * '<S3>'   : 'BMShil/CAN_Read'
 * '<S4>'   : 'BMShil/CAN_Write'
 * '<S5>'   : 'BMShil/Digital_Inputs'
 * '<S6>'   : 'BMShil/Digital_Outputs'
 * '<S7>'   : 'BMShil/PWM//Analog_ Output'
 * '<S8>'   : 'BMShil/pcp_CCPConfiguration'
 * '<S9>'   : 'BMShil/BMS/Chart'
 * '<S10>'  : 'BMShil/CAN_Read/Cell_Temperatures'
 * '<S11>'  : 'BMShil/CAN_Read/Cell_Voltages'
 */
#endif                                 /* RTW_HEADER_BMShil_h_ */

/* end of file */
