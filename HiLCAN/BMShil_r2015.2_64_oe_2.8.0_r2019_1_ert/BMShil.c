/*
 *****************************************************************************
 *
 *  File:                     BMShil.c
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
#include "BMShil_private.h"

/********* Macros *********/

/* Named constants for Chart: '<S2>/Chart' */
#define BMShil_IN_end_chg              ((U8)1U)
#define BMShil_IN_end_key              ((U8)2U)
#define BMShil_IN_init_chg             ((U8)3U)
#define BMShil_IN_init_key             ((U8)4U)
#define BMShil_IN_main_chg             ((U8)5U)
#define BMShil_IN_main_key             ((U8)6U)
#define BMShil_IN_no_power             ((U8)7U)

/********* Static structure definitions *********/

/********* Global variables *********/
const FREAL BMShil_RGND = 0.0;         /* FREAL ground */

/* Block signals (auto storage) */
BlockIO_BMShil BMShil_B;

/* Block states (auto storage) */
D_Work_BMShil BMShil_DWork;

/* Real-time model */
RT_MODEL_BMShil BMShil_M_;
RT_MODEL_BMShil *const BMShil_M = &BMShil_M_;
PCX_HANDLE_T pcx_CANdb_ReceiveMessage_msg_handle;
PCX_HANDLE_T pcx_CANdb_ReceiveMessage5_msg_handle;
PCX_HANDLE_T pcx_CANdb_ReceiveMessage9_msg_handle;
PCX_HANDLE_T pcx_CANdb_ReceiveMessage8_msg_handle;
PCX_HANDLE_T pcx_CANdb_ReceiveMessage7_msg_handle;
PCX_HANDLE_T pcx_CANdb_ReceiveMessage6_msg_handle;
PCX_HANDLE_T pcx_CANdb_ReceiveMessage5_b_msg_handle;
PCX_HANDLE_T pcx_CANdb_ReceiveMessage4_msg_handle;
PCX_HANDLE_T pcx_CANdb_ReceiveMessage3_msg_handle;
PCX_HANDLE_T pcx_CANdb_ReceiveMessage2_msg_handle;
PCX_HANDLE_T pcx_CANdb_ReceiveMessage1_msg_handle;
PCX_HANDLE_T pcx_CANdb_ReceiveMessage_p_msg_handle;
PCX_HANDLE_T pcx_CANdb_ReceiveMessage_pz_msg_handle;
PCX_HANDLE_T pcx_CANdb_ReceiveMessage1_j_msg_handle;
PCX_HANDLE_T pcx_CANdb_ReceiveMessage14_msg_handle;
PCX_HANDLE_T pcx_CANdb_ReceiveMessage13_msg_handle;
PCX_HANDLE_T pcx_CANdb_ReceiveMessage12_msg_handle;
PCX_HANDLE_T pcx_CANdb_ReceiveMessage11_msg_handle;
PCX_HANDLE_T pcx_CANdb_ReceiveMessage10_msg_handle;
PCX_HANDLE_T pcx_CANdb_ReceiveMessage9_n_msg_handle;
PCX_HANDLE_T pcx_CANdb_ReceiveMessage8_f_msg_handle;
PCX_HANDLE_T pcx_CANdb_ReceiveMessage7_o_msg_handle;
PCX_HANDLE_T pcx_CANdb_ReceiveMessage6_p_msg_handle;
PCX_HANDLE_T pcx_CANdb_ReceiveMessage5_a_msg_handle;
PCX_HANDLE_T pcx_CANdb_TransmitMessage_msg_handle;
PCX_HANDLE_T pcx_CANdb_TransmitMessage1_msg_handle;
PCX_HANDLE_T pcx_CANdb_TransmitMessage2_msg_handle;
PCX_HANDLE_T pcx_CANdb_TransmitMessage3_msg_handle;
PCX_HANDLE_T pcx_CANdb_TransmitMessage4_msg_handle;
PCX_HANDLE_T pcx_CANdb_TransmitMessage5_msg_handle;
PCX_HANDLE_T pcx_CANdb_TransmitMessage6_msg_handle;
PCX_HANDLE_T pcx_CANdb_TransmitMessage7_msg_handle;
PCX_HANDLE_T pcx_CANdb_TransmitMessage8_msg_handle;
PCX_HANDLE_T pcx_CANdb_TransmitMessage9_msg_handle;
PCX_HANDLE_T pcx_CANdb_TransmitMessage1_k_msg_handle;
PCX_HANDLE_T pcx_CANdb_TransmitMessage_a_msg_handle;
PCX_HANDLE_T pcx_CANdb_TransmitMessage1_f_msg_handle;
PCX_HANDLE_T pcx_CANdb_ReceiveMessage1_jb_msg_handle;

/********* Static Variables *********/

/********* External references *********/
/********* Functions *********/

/* Model step function */
void BMShil_step(void)
{
  /* local block i/o variables */
  FREAL rtb_TmpSignalConversionAtVITMIn[40];
  FREAL rtb_TmpSignalConversionAtVITM_h[40];

  /* S-Function Block: <Root>/pkn_TaskPeriodOverrun
   * [$Id: pkn_task_period_overrun.tlc 55277 2017-04-06 15:24:31Z jtough $]
   */
  BMS_overrun = (U8) pkn_get_task_overrun_count(pkn_task_100ms_periodic_hdl);

  /* S-Function Block: <S5>/pcx_CANdb_ReceiveMessage
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    U32 timestamp;
    S8 pcxf_rx_receive_status;
    F32 pcx_CANdb_ReceiveMessage_out_port_buffer[1];
    F32 * pcx_CANdb_ReceiveMessage_out_port[1];
    static const U8 pcx_CANdb_ReceiveMessage_field_start_pos[1] = {
      7, };

    static const U8 pcx_CANdb_ReceiveMessage_field_width[1] = {
      1, };

    static const U8 pcx_CANdb_ReceiveMessage_field_is_signed[1] = {
      0, };

    static const U8 pcx_CANdb_ReceiveMessage_field_valtype[1] = {
      0, };

    static const U8 pcx_CANdb_ReceiveMessage_field_order[1] = {
      0, };

    static const F32 pcx_CANdb_ReceiveMessage_field_eng_min[1] = {
      0.0, };

    static const F32 pcx_CANdb_ReceiveMessage_field_eng_max[1] = {
      1.0, };

    static const F32 pcx_CANdb_ReceiveMessage_field_scale[1] = {
      1.0, };

    static const F32 pcx_CANdb_ReceiveMessage_field_offset[1] = {
      0.0, };

    if (pcx_CANdb_ReceiveMessage_msg_handle != PCX_CONFIG_ERROR) {
      pcxf_rx_receive_status = pcx_receive(pcx_CANdb_ReceiveMessage_msg_handle,
        data, &timestamp);
      BMShil_B.pcx_CANdb_ReceiveMessage_o1 = (0 != (pcxf_rx_receive_status &
        PCX_RX_ERROR));
      BMShil_B.pcx_CANdb_ReceiveMessage_o3 = (0 != (pcxf_rx_receive_status &
        PCX_RX_OVERRUN));

      /* decompose message into fields */
      if (pcxf_rx_receive_status & PCX_RX_DATA) {
        BMShil_B.pcx_CANdb_ReceiveMessage_o2 = 1;
        pcx_CANdb_ReceiveMessage_out_port[0] = (F32*)
          &pcx_CANdb_ReceiveMessage_out_port_buffer[0];
        pcx_vdb_unpack_msg(&pcx_CANdb_ReceiveMessage_out_port[0], NULL, &data[0],
                           pcx_CANdb_ReceiveMessage_field_start_pos,
                           pcx_CANdb_ReceiveMessage_field_width,
                           pcx_CANdb_ReceiveMessage_field_is_signed,
                           pcx_CANdb_ReceiveMessage_field_valtype,
                           pcx_CANdb_ReceiveMessage_field_order,
                           pcx_CANdb_ReceiveMessage_field_eng_min,
                           pcx_CANdb_ReceiveMessage_field_eng_max,
                           pcx_CANdb_ReceiveMessage_field_scale,
                           pcx_CANdb_ReceiveMessage_field_offset, 0, 1, 1);
        BMShil_B.pcx_CANdb_ReceiveMessage_o4 =
          pcx_CANdb_ReceiveMessage_out_port_buffer[0];
      } else {
        BMShil_B.pcx_CANdb_ReceiveMessage_o2 = 0;
      }
    } else {
      /* error: pcx_declare_message was unsuccessful */
      BMShil_B.pcx_CANdb_ReceiveMessage_o1 = 1;
      BMShil_B.pcx_CANdb_ReceiveMessage_o2 = 0;
      BMShil_B.pcx_CANdb_ReceiveMessage_o3 = 0;
    }
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion' */
  bsc_KeyValue = (U8)BMShil_B.pcx_CANdb_ReceiveMessage_o4;

  /* S-Function Block: <S3>/pcx_CANdb_ReceiveMessage5
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    U32 timestamp;
    S8 pcxf_rx_receive_status;
    F32 pcx_CANdb_ReceiveMessage5_out_port_buffer[1];
    F32 * pcx_CANdb_ReceiveMessage5_out_port[1];
    static const U8 pcx_CANdb_ReceiveMessage5_field_start_pos[1] = {
      7, };

    static const U8 pcx_CANdb_ReceiveMessage5_field_width[1] = {
      1, };

    static const U8 pcx_CANdb_ReceiveMessage5_field_is_signed[1] = {
      0, };

    static const U8 pcx_CANdb_ReceiveMessage5_field_valtype[1] = {
      0, };

    static const U8 pcx_CANdb_ReceiveMessage5_field_order[1] = {
      0, };

    static const F32 pcx_CANdb_ReceiveMessage5_field_eng_min[1] = {
      0.0, };

    static const F32 pcx_CANdb_ReceiveMessage5_field_eng_max[1] = {
      1.0, };

    static const F32 pcx_CANdb_ReceiveMessage5_field_scale[1] = {
      1.0, };

    static const F32 pcx_CANdb_ReceiveMessage5_field_offset[1] = {
      0.0, };

    if (pcx_CANdb_ReceiveMessage5_msg_handle != PCX_CONFIG_ERROR) {
      pcxf_rx_receive_status = pcx_receive(pcx_CANdb_ReceiveMessage5_msg_handle,
        data, &timestamp);
      BMS_error = (0 != (pcxf_rx_receive_status & PCX_RX_ERROR));
      BMShil_B.pcx_CANdb_ReceiveMessage5_o3 = (0 != (pcxf_rx_receive_status &
        PCX_RX_OVERRUN));

      /* decompose message into fields */
      if (pcxf_rx_receive_status & PCX_RX_DATA) {
        BMS_trig = 1;
        pcx_CANdb_ReceiveMessage5_out_port[0] = (F32*)
          &pcx_CANdb_ReceiveMessage5_out_port_buffer[0];
        pcx_vdb_unpack_msg(&pcx_CANdb_ReceiveMessage5_out_port[0], NULL, &data[0],
                           pcx_CANdb_ReceiveMessage5_field_start_pos,
                           pcx_CANdb_ReceiveMessage5_field_width,
                           pcx_CANdb_ReceiveMessage5_field_is_signed,
                           pcx_CANdb_ReceiveMessage5_field_valtype,
                           pcx_CANdb_ReceiveMessage5_field_order,
                           pcx_CANdb_ReceiveMessage5_field_eng_min,
                           pcx_CANdb_ReceiveMessage5_field_eng_max,
                           pcx_CANdb_ReceiveMessage5_field_scale,
                           pcx_CANdb_ReceiveMessage5_field_offset, 0, 1, 1);
        BMShil_B.pcx_CANdb_ReceiveMessage5_o4 =
          pcx_CANdb_ReceiveMessage5_out_port_buffer[0];
      } else {
        BMS_trig = 0;
      }
    } else {
      /* error: pcx_declare_message was unsuccessful */
      BMS_error = 1;
      BMS_trig = 0;
      BMShil_B.pcx_CANdb_ReceiveMessage5_o3 = 0;
    }
  }

  /* DataTypeConversion: '<S3>/Data Type Conversion' */
  bsc_ChargerValue = (U8)BMShil_B.pcx_CANdb_ReceiveMessage5_o4;

  /* Delay: '<Root>/Delay' */
  bsc_VehiclePSR = BMShil_DWork.Delay_DSTATE[0];

  /* Delay: '<Root>/Delay1' */
  BMShil_B.Delay1 = BMShil_DWork.Delay1_DSTATE[0];

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage9
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    U32 timestamp;
    S8 pcxf_rx_receive_status;
    F32 pcx_CANdb_ReceiveMessage9_out_port_buffer[4];
    F32 * pcx_CANdb_ReceiveMessage9_out_port[4];
    static const U8 pcx_CANdb_ReceiveMessage9_field_start_pos[4] = {
      7, 23, 39, 55, };

    static const U8 pcx_CANdb_ReceiveMessage9_field_width[4] = {
      16, 16, 16, 16, };

    static const U8 pcx_CANdb_ReceiveMessage9_field_is_signed[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage9_field_valtype[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage9_field_order[4] = {
      0, 0, 0, 0, };

    static const F32 pcx_CANdb_ReceiveMessage9_field_eng_min[4] = {
      0.0, 0.0, 0.0, 0.0, };

    static const F32 pcx_CANdb_ReceiveMessage9_field_eng_max[4] = {
      5.0, 5.0, 5.0, 5.0, };

    static const F32 pcx_CANdb_ReceiveMessage9_field_scale[4] = {
      0.0001, 0.0001, 0.0001, 0.0001, };

    static const F32 pcx_CANdb_ReceiveMessage9_field_offset[4] = {
      0.0, 0.0, 0.0, 0.0, };

    if (pcx_CANdb_ReceiveMessage9_msg_handle != PCX_CONFIG_ERROR) {
      pcxf_rx_receive_status = pcx_receive(pcx_CANdb_ReceiveMessage9_msg_handle,
        data, &timestamp);
      BMShil_B.pcx_CANdb_ReceiveMessage9_o1 = (0 != (pcxf_rx_receive_status &
        PCX_RX_ERROR));
      BMShil_B.pcx_CANdb_ReceiveMessage9_o3 = (0 != (pcxf_rx_receive_status &
        PCX_RX_OVERRUN));

      /* decompose message into fields */
      if (pcxf_rx_receive_status & PCX_RX_DATA) {
        BMShil_B.pcx_CANdb_ReceiveMessage9_o2 = 1;
        pcx_CANdb_ReceiveMessage9_out_port[0] = (F32*)
          &pcx_CANdb_ReceiveMessage9_out_port_buffer[0];
        pcx_CANdb_ReceiveMessage9_out_port[1] = (F32*)
          &pcx_CANdb_ReceiveMessage9_out_port_buffer[1];
        pcx_CANdb_ReceiveMessage9_out_port[2] = (F32*)
          &pcx_CANdb_ReceiveMessage9_out_port_buffer[2];
        pcx_CANdb_ReceiveMessage9_out_port[3] = (F32*)
          &pcx_CANdb_ReceiveMessage9_out_port_buffer[3];
        pcx_vdb_unpack_msg(&pcx_CANdb_ReceiveMessage9_out_port[0], NULL, &data[0],
                           pcx_CANdb_ReceiveMessage9_field_start_pos,
                           pcx_CANdb_ReceiveMessage9_field_width,
                           pcx_CANdb_ReceiveMessage9_field_is_signed,
                           pcx_CANdb_ReceiveMessage9_field_valtype,
                           pcx_CANdb_ReceiveMessage9_field_order,
                           pcx_CANdb_ReceiveMessage9_field_eng_min,
                           pcx_CANdb_ReceiveMessage9_field_eng_max,
                           pcx_CANdb_ReceiveMessage9_field_scale,
                           pcx_CANdb_ReceiveMessage9_field_offset, 0, 1, 4);
        BMShil_B.pcx_CANdb_ReceiveMessage9_o4 =
          pcx_CANdb_ReceiveMessage9_out_port_buffer[0];
        BMShil_B.pcx_CANdb_ReceiveMessage9_o5 =
          pcx_CANdb_ReceiveMessage9_out_port_buffer[1];
        BMShil_B.pcx_CANdb_ReceiveMessage9_o6 =
          pcx_CANdb_ReceiveMessage9_out_port_buffer[2];
        BMShil_B.pcx_CANdb_ReceiveMessage9_o7 =
          pcx_CANdb_ReceiveMessage9_out_port_buffer[3];
      } else {
        BMShil_B.pcx_CANdb_ReceiveMessage9_o2 = 0;
      }
    } else {
      /* error: pcx_declare_message was unsuccessful */
      BMShil_B.pcx_CANdb_ReceiveMessage9_o1 = 1;
      BMShil_B.pcx_CANdb_ReceiveMessage9_o2 = 0;
      BMShil_B.pcx_CANdb_ReceiveMessage9_o3 = 0;
    }
  }

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage8
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    U32 timestamp;
    S8 pcxf_rx_receive_status;
    F32 pcx_CANdb_ReceiveMessage8_out_port_buffer[4];
    F32 * pcx_CANdb_ReceiveMessage8_out_port[4];
    static const U8 pcx_CANdb_ReceiveMessage8_field_start_pos[4] = {
      7, 23, 39, 55, };

    static const U8 pcx_CANdb_ReceiveMessage8_field_width[4] = {
      16, 16, 16, 16, };

    static const U8 pcx_CANdb_ReceiveMessage8_field_is_signed[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage8_field_valtype[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage8_field_order[4] = {
      0, 0, 0, 0, };

    static const F32 pcx_CANdb_ReceiveMessage8_field_eng_min[4] = {
      0.0, 0.0, 0.0, 0.0, };

    static const F32 pcx_CANdb_ReceiveMessage8_field_eng_max[4] = {
      5.0, 5.0, 5.0, 5.0, };

    static const F32 pcx_CANdb_ReceiveMessage8_field_scale[4] = {
      0.0001, 0.0001, 0.0001, 0.0001, };

    static const F32 pcx_CANdb_ReceiveMessage8_field_offset[4] = {
      0.0, 0.0, 0.0, 0.0, };

    if (pcx_CANdb_ReceiveMessage8_msg_handle != PCX_CONFIG_ERROR) {
      pcxf_rx_receive_status = pcx_receive(pcx_CANdb_ReceiveMessage8_msg_handle,
        data, &timestamp);
      BMShil_B.pcx_CANdb_ReceiveMessage8_o1 = (0 != (pcxf_rx_receive_status &
        PCX_RX_ERROR));
      BMShil_B.pcx_CANdb_ReceiveMessage8_o3 = (0 != (pcxf_rx_receive_status &
        PCX_RX_OVERRUN));

      /* decompose message into fields */
      if (pcxf_rx_receive_status & PCX_RX_DATA) {
        BMShil_B.pcx_CANdb_ReceiveMessage8_o2 = 1;
        pcx_CANdb_ReceiveMessage8_out_port[0] = (F32*)
          &pcx_CANdb_ReceiveMessage8_out_port_buffer[0];
        pcx_CANdb_ReceiveMessage8_out_port[1] = (F32*)
          &pcx_CANdb_ReceiveMessage8_out_port_buffer[1];
        pcx_CANdb_ReceiveMessage8_out_port[2] = (F32*)
          &pcx_CANdb_ReceiveMessage8_out_port_buffer[2];
        pcx_CANdb_ReceiveMessage8_out_port[3] = (F32*)
          &pcx_CANdb_ReceiveMessage8_out_port_buffer[3];
        pcx_vdb_unpack_msg(&pcx_CANdb_ReceiveMessage8_out_port[0], NULL, &data[0],
                           pcx_CANdb_ReceiveMessage8_field_start_pos,
                           pcx_CANdb_ReceiveMessage8_field_width,
                           pcx_CANdb_ReceiveMessage8_field_is_signed,
                           pcx_CANdb_ReceiveMessage8_field_valtype,
                           pcx_CANdb_ReceiveMessage8_field_order,
                           pcx_CANdb_ReceiveMessage8_field_eng_min,
                           pcx_CANdb_ReceiveMessage8_field_eng_max,
                           pcx_CANdb_ReceiveMessage8_field_scale,
                           pcx_CANdb_ReceiveMessage8_field_offset, 0, 1, 4);
        BMShil_B.pcx_CANdb_ReceiveMessage8_o4 =
          pcx_CANdb_ReceiveMessage8_out_port_buffer[0];
        BMShil_B.pcx_CANdb_ReceiveMessage8_o5 =
          pcx_CANdb_ReceiveMessage8_out_port_buffer[1];
        BMShil_B.pcx_CANdb_ReceiveMessage8_o6 =
          pcx_CANdb_ReceiveMessage8_out_port_buffer[2];
        BMShil_B.pcx_CANdb_ReceiveMessage8_o7 =
          pcx_CANdb_ReceiveMessage8_out_port_buffer[3];
      } else {
        BMShil_B.pcx_CANdb_ReceiveMessage8_o2 = 0;
      }
    } else {
      /* error: pcx_declare_message was unsuccessful */
      BMShil_B.pcx_CANdb_ReceiveMessage8_o1 = 1;
      BMShil_B.pcx_CANdb_ReceiveMessage8_o2 = 0;
      BMShil_B.pcx_CANdb_ReceiveMessage8_o3 = 0;
    }
  }

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage7
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    U32 timestamp;
    S8 pcxf_rx_receive_status;
    F32 pcx_CANdb_ReceiveMessage7_out_port_buffer[4];
    F32 * pcx_CANdb_ReceiveMessage7_out_port[4];
    static const U8 pcx_CANdb_ReceiveMessage7_field_start_pos[4] = {
      7, 23, 39, 55, };

    static const U8 pcx_CANdb_ReceiveMessage7_field_width[4] = {
      16, 16, 16, 16, };

    static const U8 pcx_CANdb_ReceiveMessage7_field_is_signed[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage7_field_valtype[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage7_field_order[4] = {
      0, 0, 0, 0, };

    static const F32 pcx_CANdb_ReceiveMessage7_field_eng_min[4] = {
      0.0, 0.0, 0.0, 0.0, };

    static const F32 pcx_CANdb_ReceiveMessage7_field_eng_max[4] = {
      5.0, 5.0, 5.0, 5.0, };

    static const F32 pcx_CANdb_ReceiveMessage7_field_scale[4] = {
      0.0001, 0.0001, 0.0001, 0.0001, };

    static const F32 pcx_CANdb_ReceiveMessage7_field_offset[4] = {
      0.0, 0.0, 0.0, 0.0, };

    if (pcx_CANdb_ReceiveMessage7_msg_handle != PCX_CONFIG_ERROR) {
      pcxf_rx_receive_status = pcx_receive(pcx_CANdb_ReceiveMessage7_msg_handle,
        data, &timestamp);
      BMShil_B.pcx_CANdb_ReceiveMessage7_o1 = (0 != (pcxf_rx_receive_status &
        PCX_RX_ERROR));
      BMShil_B.pcx_CANdb_ReceiveMessage7_o3 = (0 != (pcxf_rx_receive_status &
        PCX_RX_OVERRUN));

      /* decompose message into fields */
      if (pcxf_rx_receive_status & PCX_RX_DATA) {
        BMShil_B.pcx_CANdb_ReceiveMessage7_o2 = 1;
        pcx_CANdb_ReceiveMessage7_out_port[0] = (F32*)
          &pcx_CANdb_ReceiveMessage7_out_port_buffer[0];
        pcx_CANdb_ReceiveMessage7_out_port[1] = (F32*)
          &pcx_CANdb_ReceiveMessage7_out_port_buffer[1];
        pcx_CANdb_ReceiveMessage7_out_port[2] = (F32*)
          &pcx_CANdb_ReceiveMessage7_out_port_buffer[2];
        pcx_CANdb_ReceiveMessage7_out_port[3] = (F32*)
          &pcx_CANdb_ReceiveMessage7_out_port_buffer[3];
        pcx_vdb_unpack_msg(&pcx_CANdb_ReceiveMessage7_out_port[0], NULL, &data[0],
                           pcx_CANdb_ReceiveMessage7_field_start_pos,
                           pcx_CANdb_ReceiveMessage7_field_width,
                           pcx_CANdb_ReceiveMessage7_field_is_signed,
                           pcx_CANdb_ReceiveMessage7_field_valtype,
                           pcx_CANdb_ReceiveMessage7_field_order,
                           pcx_CANdb_ReceiveMessage7_field_eng_min,
                           pcx_CANdb_ReceiveMessage7_field_eng_max,
                           pcx_CANdb_ReceiveMessage7_field_scale,
                           pcx_CANdb_ReceiveMessage7_field_offset, 0, 1, 4);
        BMShil_B.pcx_CANdb_ReceiveMessage7_o4 =
          pcx_CANdb_ReceiveMessage7_out_port_buffer[0];
        BMShil_B.pcx_CANdb_ReceiveMessage7_o5 =
          pcx_CANdb_ReceiveMessage7_out_port_buffer[1];
        BMShil_B.pcx_CANdb_ReceiveMessage7_o6 =
          pcx_CANdb_ReceiveMessage7_out_port_buffer[2];
        BMShil_B.pcx_CANdb_ReceiveMessage7_o7 =
          pcx_CANdb_ReceiveMessage7_out_port_buffer[3];
      } else {
        BMShil_B.pcx_CANdb_ReceiveMessage7_o2 = 0;
      }
    } else {
      /* error: pcx_declare_message was unsuccessful */
      BMShil_B.pcx_CANdb_ReceiveMessage7_o1 = 1;
      BMShil_B.pcx_CANdb_ReceiveMessage7_o2 = 0;
      BMShil_B.pcx_CANdb_ReceiveMessage7_o3 = 0;
    }
  }

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage6
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    U32 timestamp;
    S8 pcxf_rx_receive_status;
    F32 pcx_CANdb_ReceiveMessage6_out_port_buffer[4];
    F32 * pcx_CANdb_ReceiveMessage6_out_port[4];
    static const U8 pcx_CANdb_ReceiveMessage6_field_start_pos[4] = {
      7, 23, 39, 55, };

    static const U8 pcx_CANdb_ReceiveMessage6_field_width[4] = {
      16, 16, 16, 16, };

    static const U8 pcx_CANdb_ReceiveMessage6_field_is_signed[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage6_field_valtype[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage6_field_order[4] = {
      0, 0, 0, 0, };

    static const F32 pcx_CANdb_ReceiveMessage6_field_eng_min[4] = {
      0.0, 0.0, 0.0, 0.0, };

    static const F32 pcx_CANdb_ReceiveMessage6_field_eng_max[4] = {
      5.0, 5.0, 5.0, 5.0, };

    static const F32 pcx_CANdb_ReceiveMessage6_field_scale[4] = {
      0.0001, 0.0001, 0.0001, 0.0001, };

    static const F32 pcx_CANdb_ReceiveMessage6_field_offset[4] = {
      0.0, 0.0, 0.0, 0.0, };

    if (pcx_CANdb_ReceiveMessage6_msg_handle != PCX_CONFIG_ERROR) {
      pcxf_rx_receive_status = pcx_receive(pcx_CANdb_ReceiveMessage6_msg_handle,
        data, &timestamp);
      BMShil_B.pcx_CANdb_ReceiveMessage6_o1 = (0 != (pcxf_rx_receive_status &
        PCX_RX_ERROR));
      BMShil_B.pcx_CANdb_ReceiveMessage6_o3 = (0 != (pcxf_rx_receive_status &
        PCX_RX_OVERRUN));

      /* decompose message into fields */
      if (pcxf_rx_receive_status & PCX_RX_DATA) {
        BMShil_B.pcx_CANdb_ReceiveMessage6_o2 = 1;
        pcx_CANdb_ReceiveMessage6_out_port[0] = (F32*)
          &pcx_CANdb_ReceiveMessage6_out_port_buffer[0];
        pcx_CANdb_ReceiveMessage6_out_port[1] = (F32*)
          &pcx_CANdb_ReceiveMessage6_out_port_buffer[1];
        pcx_CANdb_ReceiveMessage6_out_port[2] = (F32*)
          &pcx_CANdb_ReceiveMessage6_out_port_buffer[2];
        pcx_CANdb_ReceiveMessage6_out_port[3] = (F32*)
          &pcx_CANdb_ReceiveMessage6_out_port_buffer[3];
        pcx_vdb_unpack_msg(&pcx_CANdb_ReceiveMessage6_out_port[0], NULL, &data[0],
                           pcx_CANdb_ReceiveMessage6_field_start_pos,
                           pcx_CANdb_ReceiveMessage6_field_width,
                           pcx_CANdb_ReceiveMessage6_field_is_signed,
                           pcx_CANdb_ReceiveMessage6_field_valtype,
                           pcx_CANdb_ReceiveMessage6_field_order,
                           pcx_CANdb_ReceiveMessage6_field_eng_min,
                           pcx_CANdb_ReceiveMessage6_field_eng_max,
                           pcx_CANdb_ReceiveMessage6_field_scale,
                           pcx_CANdb_ReceiveMessage6_field_offset, 0, 1, 4);
        BMShil_B.pcx_CANdb_ReceiveMessage6_o4 =
          pcx_CANdb_ReceiveMessage6_out_port_buffer[0];
        BMShil_B.pcx_CANdb_ReceiveMessage6_o5 =
          pcx_CANdb_ReceiveMessage6_out_port_buffer[1];
        BMShil_B.pcx_CANdb_ReceiveMessage6_o6 =
          pcx_CANdb_ReceiveMessage6_out_port_buffer[2];
        BMShil_B.pcx_CANdb_ReceiveMessage6_o7 =
          pcx_CANdb_ReceiveMessage6_out_port_buffer[3];
      } else {
        BMShil_B.pcx_CANdb_ReceiveMessage6_o2 = 0;
      }
    } else {
      /* error: pcx_declare_message was unsuccessful */
      BMShil_B.pcx_CANdb_ReceiveMessage6_o1 = 1;
      BMShil_B.pcx_CANdb_ReceiveMessage6_o2 = 0;
      BMShil_B.pcx_CANdb_ReceiveMessage6_o3 = 0;
    }
  }

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage5
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    U32 timestamp;
    S8 pcxf_rx_receive_status;
    F32 pcx_CANdb_ReceiveMessage5_b_out_port_buffer[4];
    F32 * pcx_CANdb_ReceiveMessage5_b_out_port[4];
    static const U8 pcx_CANdb_ReceiveMessage5_b_field_start_pos[4] = {
      7, 23, 39, 55, };

    static const U8 pcx_CANdb_ReceiveMessage5_b_field_width[4] = {
      16, 16, 16, 16, };

    static const U8 pcx_CANdb_ReceiveMessage5_b_field_is_signed[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage5_b_field_valtype[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage5_b_field_order[4] = {
      0, 0, 0, 0, };

    static const F32 pcx_CANdb_ReceiveMessage5_b_field_eng_min[4] = {
      0.0, 0.0, 0.0, 0.0, };

    static const F32 pcx_CANdb_ReceiveMessage5_b_field_eng_max[4] = {
      5.0, 5.0, 5.0, 5.0, };

    static const F32 pcx_CANdb_ReceiveMessage5_b_field_scale[4] = {
      0.0001, 0.0001, 0.0001, 0.0001, };

    static const F32 pcx_CANdb_ReceiveMessage5_b_field_offset[4] = {
      0.0, 0.0, 0.0, 0.0, };

    if (pcx_CANdb_ReceiveMessage5_b_msg_handle != PCX_CONFIG_ERROR) {
      pcxf_rx_receive_status = pcx_receive
        (pcx_CANdb_ReceiveMessage5_b_msg_handle, data, &timestamp);
      BMShil_B.pcx_CANdb_ReceiveMessage5_o1 = (0 != (pcxf_rx_receive_status &
        PCX_RX_ERROR));
      BMShil_B.pcx_CANdb_ReceiveMessage5_o3_i = (0 != (pcxf_rx_receive_status &
        PCX_RX_OVERRUN));

      /* decompose message into fields */
      if (pcxf_rx_receive_status & PCX_RX_DATA) {
        BMShil_B.pcx_CANdb_ReceiveMessage5_o2 = 1;
        pcx_CANdb_ReceiveMessage5_b_out_port[0] = (F32*)
          &pcx_CANdb_ReceiveMessage5_b_out_port_buffer[0];
        pcx_CANdb_ReceiveMessage5_b_out_port[1] = (F32*)
          &pcx_CANdb_ReceiveMessage5_b_out_port_buffer[1];
        pcx_CANdb_ReceiveMessage5_b_out_port[2] = (F32*)
          &pcx_CANdb_ReceiveMessage5_b_out_port_buffer[2];
        pcx_CANdb_ReceiveMessage5_b_out_port[3] = (F32*)
          &pcx_CANdb_ReceiveMessage5_b_out_port_buffer[3];
        pcx_vdb_unpack_msg(&pcx_CANdb_ReceiveMessage5_b_out_port[0], NULL,
                           &data[0], pcx_CANdb_ReceiveMessage5_b_field_start_pos,
                           pcx_CANdb_ReceiveMessage5_b_field_width,
                           pcx_CANdb_ReceiveMessage5_b_field_is_signed,
                           pcx_CANdb_ReceiveMessage5_b_field_valtype,
                           pcx_CANdb_ReceiveMessage5_b_field_order,
                           pcx_CANdb_ReceiveMessage5_b_field_eng_min,
                           pcx_CANdb_ReceiveMessage5_b_field_eng_max,
                           pcx_CANdb_ReceiveMessage5_b_field_scale,
                           pcx_CANdb_ReceiveMessage5_b_field_offset, 0, 1, 4);
        BMShil_B.pcx_CANdb_ReceiveMessage5_o4_p =
          pcx_CANdb_ReceiveMessage5_b_out_port_buffer[0];
        BMShil_B.pcx_CANdb_ReceiveMessage5_o5 =
          pcx_CANdb_ReceiveMessage5_b_out_port_buffer[1];
        BMShil_B.pcx_CANdb_ReceiveMessage5_o6 =
          pcx_CANdb_ReceiveMessage5_b_out_port_buffer[2];
        BMShil_B.pcx_CANdb_ReceiveMessage5_o7 =
          pcx_CANdb_ReceiveMessage5_b_out_port_buffer[3];
      } else {
        BMShil_B.pcx_CANdb_ReceiveMessage5_o2 = 0;
      }
    } else {
      /* error: pcx_declare_message was unsuccessful */
      BMShil_B.pcx_CANdb_ReceiveMessage5_o1 = 1;
      BMShil_B.pcx_CANdb_ReceiveMessage5_o2 = 0;
      BMShil_B.pcx_CANdb_ReceiveMessage5_o3_i = 0;
    }
  }

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage4
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    U32 timestamp;
    S8 pcxf_rx_receive_status;
    F32 pcx_CANdb_ReceiveMessage4_out_port_buffer[4];
    F32 * pcx_CANdb_ReceiveMessage4_out_port[4];
    static const U8 pcx_CANdb_ReceiveMessage4_field_start_pos[4] = {
      7, 23, 39, 55, };

    static const U8 pcx_CANdb_ReceiveMessage4_field_width[4] = {
      16, 16, 16, 16, };

    static const U8 pcx_CANdb_ReceiveMessage4_field_is_signed[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage4_field_valtype[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage4_field_order[4] = {
      0, 0, 0, 0, };

    static const F32 pcx_CANdb_ReceiveMessage4_field_eng_min[4] = {
      0.0, 0.0, 0.0, 0.0, };

    static const F32 pcx_CANdb_ReceiveMessage4_field_eng_max[4] = {
      5.0, 5.0, 5.0, 5.0, };

    static const F32 pcx_CANdb_ReceiveMessage4_field_scale[4] = {
      0.0001, 0.0001, 0.0001, 0.0001, };

    static const F32 pcx_CANdb_ReceiveMessage4_field_offset[4] = {
      0.0, 0.0, 0.0, 0.0, };

    if (pcx_CANdb_ReceiveMessage4_msg_handle != PCX_CONFIG_ERROR) {
      pcxf_rx_receive_status = pcx_receive(pcx_CANdb_ReceiveMessage4_msg_handle,
        data, &timestamp);
      BMShil_B.pcx_CANdb_ReceiveMessage4_o1 = (0 != (pcxf_rx_receive_status &
        PCX_RX_ERROR));
      BMShil_B.pcx_CANdb_ReceiveMessage4_o3 = (0 != (pcxf_rx_receive_status &
        PCX_RX_OVERRUN));

      /* decompose message into fields */
      if (pcxf_rx_receive_status & PCX_RX_DATA) {
        BMShil_B.pcx_CANdb_ReceiveMessage4_o2 = 1;
        pcx_CANdb_ReceiveMessage4_out_port[0] = (F32*)
          &pcx_CANdb_ReceiveMessage4_out_port_buffer[0];
        pcx_CANdb_ReceiveMessage4_out_port[1] = (F32*)
          &pcx_CANdb_ReceiveMessage4_out_port_buffer[1];
        pcx_CANdb_ReceiveMessage4_out_port[2] = (F32*)
          &pcx_CANdb_ReceiveMessage4_out_port_buffer[2];
        pcx_CANdb_ReceiveMessage4_out_port[3] = (F32*)
          &pcx_CANdb_ReceiveMessage4_out_port_buffer[3];
        pcx_vdb_unpack_msg(&pcx_CANdb_ReceiveMessage4_out_port[0], NULL, &data[0],
                           pcx_CANdb_ReceiveMessage4_field_start_pos,
                           pcx_CANdb_ReceiveMessage4_field_width,
                           pcx_CANdb_ReceiveMessage4_field_is_signed,
                           pcx_CANdb_ReceiveMessage4_field_valtype,
                           pcx_CANdb_ReceiveMessage4_field_order,
                           pcx_CANdb_ReceiveMessage4_field_eng_min,
                           pcx_CANdb_ReceiveMessage4_field_eng_max,
                           pcx_CANdb_ReceiveMessage4_field_scale,
                           pcx_CANdb_ReceiveMessage4_field_offset, 0, 1, 4);
        BMShil_B.pcx_CANdb_ReceiveMessage4_o4 =
          pcx_CANdb_ReceiveMessage4_out_port_buffer[0];
        BMShil_B.pcx_CANdb_ReceiveMessage4_o5 =
          pcx_CANdb_ReceiveMessage4_out_port_buffer[1];
        BMShil_B.pcx_CANdb_ReceiveMessage4_o6 =
          pcx_CANdb_ReceiveMessage4_out_port_buffer[2];
        BMShil_B.pcx_CANdb_ReceiveMessage4_o7 =
          pcx_CANdb_ReceiveMessage4_out_port_buffer[3];
      } else {
        BMShil_B.pcx_CANdb_ReceiveMessage4_o2 = 0;
      }
    } else {
      /* error: pcx_declare_message was unsuccessful */
      BMShil_B.pcx_CANdb_ReceiveMessage4_o1 = 1;
      BMShil_B.pcx_CANdb_ReceiveMessage4_o2 = 0;
      BMShil_B.pcx_CANdb_ReceiveMessage4_o3 = 0;
    }
  }

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage3
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    U32 timestamp;
    S8 pcxf_rx_receive_status;
    F32 pcx_CANdb_ReceiveMessage3_out_port_buffer[4];
    F32 * pcx_CANdb_ReceiveMessage3_out_port[4];
    static const U8 pcx_CANdb_ReceiveMessage3_field_start_pos[4] = {
      7, 23, 39, 55, };

    static const U8 pcx_CANdb_ReceiveMessage3_field_width[4] = {
      16, 16, 16, 16, };

    static const U8 pcx_CANdb_ReceiveMessage3_field_is_signed[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage3_field_valtype[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage3_field_order[4] = {
      0, 0, 0, 0, };

    static const F32 pcx_CANdb_ReceiveMessage3_field_eng_min[4] = {
      0.0, 0.0, 0.0, 0.0, };

    static const F32 pcx_CANdb_ReceiveMessage3_field_eng_max[4] = {
      5.0, 5.0, 5.0, 5.0, };

    static const F32 pcx_CANdb_ReceiveMessage3_field_scale[4] = {
      0.0001, 0.0001, 0.0001, 0.0001, };

    static const F32 pcx_CANdb_ReceiveMessage3_field_offset[4] = {
      0.0, 0.0, 0.0, 0.0, };

    if (pcx_CANdb_ReceiveMessage3_msg_handle != PCX_CONFIG_ERROR) {
      pcxf_rx_receive_status = pcx_receive(pcx_CANdb_ReceiveMessage3_msg_handle,
        data, &timestamp);
      BMShil_B.pcx_CANdb_ReceiveMessage3_o1 = (0 != (pcxf_rx_receive_status &
        PCX_RX_ERROR));
      BMShil_B.pcx_CANdb_ReceiveMessage3_o3 = (0 != (pcxf_rx_receive_status &
        PCX_RX_OVERRUN));

      /* decompose message into fields */
      if (pcxf_rx_receive_status & PCX_RX_DATA) {
        BMShil_B.pcx_CANdb_ReceiveMessage3_o2 = 1;
        pcx_CANdb_ReceiveMessage3_out_port[0] = (F32*)
          &pcx_CANdb_ReceiveMessage3_out_port_buffer[0];
        pcx_CANdb_ReceiveMessage3_out_port[1] = (F32*)
          &pcx_CANdb_ReceiveMessage3_out_port_buffer[1];
        pcx_CANdb_ReceiveMessage3_out_port[2] = (F32*)
          &pcx_CANdb_ReceiveMessage3_out_port_buffer[2];
        pcx_CANdb_ReceiveMessage3_out_port[3] = (F32*)
          &pcx_CANdb_ReceiveMessage3_out_port_buffer[3];
        pcx_vdb_unpack_msg(&pcx_CANdb_ReceiveMessage3_out_port[0], NULL, &data[0],
                           pcx_CANdb_ReceiveMessage3_field_start_pos,
                           pcx_CANdb_ReceiveMessage3_field_width,
                           pcx_CANdb_ReceiveMessage3_field_is_signed,
                           pcx_CANdb_ReceiveMessage3_field_valtype,
                           pcx_CANdb_ReceiveMessage3_field_order,
                           pcx_CANdb_ReceiveMessage3_field_eng_min,
                           pcx_CANdb_ReceiveMessage3_field_eng_max,
                           pcx_CANdb_ReceiveMessage3_field_scale,
                           pcx_CANdb_ReceiveMessage3_field_offset, 0, 1, 4);
        BMShil_B.pcx_CANdb_ReceiveMessage3_o4 =
          pcx_CANdb_ReceiveMessage3_out_port_buffer[0];
        BMShil_B.pcx_CANdb_ReceiveMessage3_o5 =
          pcx_CANdb_ReceiveMessage3_out_port_buffer[1];
        BMShil_B.pcx_CANdb_ReceiveMessage3_o6 =
          pcx_CANdb_ReceiveMessage3_out_port_buffer[2];
        BMShil_B.pcx_CANdb_ReceiveMessage3_o7 =
          pcx_CANdb_ReceiveMessage3_out_port_buffer[3];
      } else {
        BMShil_B.pcx_CANdb_ReceiveMessage3_o2 = 0;
      }
    } else {
      /* error: pcx_declare_message was unsuccessful */
      BMShil_B.pcx_CANdb_ReceiveMessage3_o1 = 1;
      BMShil_B.pcx_CANdb_ReceiveMessage3_o2 = 0;
      BMShil_B.pcx_CANdb_ReceiveMessage3_o3 = 0;
    }
  }

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage2
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    U32 timestamp;
    S8 pcxf_rx_receive_status;
    F32 pcx_CANdb_ReceiveMessage2_out_port_buffer[4];
    F32 * pcx_CANdb_ReceiveMessage2_out_port[4];
    static const U8 pcx_CANdb_ReceiveMessage2_field_start_pos[4] = {
      7, 23, 39, 55, };

    static const U8 pcx_CANdb_ReceiveMessage2_field_width[4] = {
      16, 16, 16, 16, };

    static const U8 pcx_CANdb_ReceiveMessage2_field_is_signed[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage2_field_valtype[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage2_field_order[4] = {
      0, 0, 0, 0, };

    static const F32 pcx_CANdb_ReceiveMessage2_field_eng_min[4] = {
      0.0, 0.0, 0.0, 0.0, };

    static const F32 pcx_CANdb_ReceiveMessage2_field_eng_max[4] = {
      5.0, 5.0, 5.0, 5.0, };

    static const F32 pcx_CANdb_ReceiveMessage2_field_scale[4] = {
      0.0001, 0.0001, 0.0001, 0.0001, };

    static const F32 pcx_CANdb_ReceiveMessage2_field_offset[4] = {
      0.0, 0.0, 0.0, 0.0, };

    if (pcx_CANdb_ReceiveMessage2_msg_handle != PCX_CONFIG_ERROR) {
      pcxf_rx_receive_status = pcx_receive(pcx_CANdb_ReceiveMessage2_msg_handle,
        data, &timestamp);
      BMShil_B.pcx_CANdb_ReceiveMessage2_o1 = (0 != (pcxf_rx_receive_status &
        PCX_RX_ERROR));
      BMShil_B.pcx_CANdb_ReceiveMessage2_o3 = (0 != (pcxf_rx_receive_status &
        PCX_RX_OVERRUN));

      /* decompose message into fields */
      if (pcxf_rx_receive_status & PCX_RX_DATA) {
        BMShil_B.pcx_CANdb_ReceiveMessage2_o2 = 1;
        pcx_CANdb_ReceiveMessage2_out_port[0] = (F32*)
          &pcx_CANdb_ReceiveMessage2_out_port_buffer[0];
        pcx_CANdb_ReceiveMessage2_out_port[1] = (F32*)
          &pcx_CANdb_ReceiveMessage2_out_port_buffer[1];
        pcx_CANdb_ReceiveMessage2_out_port[2] = (F32*)
          &pcx_CANdb_ReceiveMessage2_out_port_buffer[2];
        pcx_CANdb_ReceiveMessage2_out_port[3] = (F32*)
          &pcx_CANdb_ReceiveMessage2_out_port_buffer[3];
        pcx_vdb_unpack_msg(&pcx_CANdb_ReceiveMessage2_out_port[0], NULL, &data[0],
                           pcx_CANdb_ReceiveMessage2_field_start_pos,
                           pcx_CANdb_ReceiveMessage2_field_width,
                           pcx_CANdb_ReceiveMessage2_field_is_signed,
                           pcx_CANdb_ReceiveMessage2_field_valtype,
                           pcx_CANdb_ReceiveMessage2_field_order,
                           pcx_CANdb_ReceiveMessage2_field_eng_min,
                           pcx_CANdb_ReceiveMessage2_field_eng_max,
                           pcx_CANdb_ReceiveMessage2_field_scale,
                           pcx_CANdb_ReceiveMessage2_field_offset, 0, 1, 4);
        BMShil_B.pcx_CANdb_ReceiveMessage2_o4 =
          pcx_CANdb_ReceiveMessage2_out_port_buffer[0];
        BMShil_B.pcx_CANdb_ReceiveMessage2_o5 =
          pcx_CANdb_ReceiveMessage2_out_port_buffer[1];
        BMShil_B.pcx_CANdb_ReceiveMessage2_o6 =
          pcx_CANdb_ReceiveMessage2_out_port_buffer[2];
        BMShil_B.pcx_CANdb_ReceiveMessage2_o7 =
          pcx_CANdb_ReceiveMessage2_out_port_buffer[3];
      } else {
        BMShil_B.pcx_CANdb_ReceiveMessage2_o2 = 0;
      }
    } else {
      /* error: pcx_declare_message was unsuccessful */
      BMShil_B.pcx_CANdb_ReceiveMessage2_o1 = 1;
      BMShil_B.pcx_CANdb_ReceiveMessage2_o2 = 0;
      BMShil_B.pcx_CANdb_ReceiveMessage2_o3 = 0;
    }
  }

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage1
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    U32 timestamp;
    S8 pcxf_rx_receive_status;
    F32 pcx_CANdb_ReceiveMessage1_out_port_buffer[4];
    F32 * pcx_CANdb_ReceiveMessage1_out_port[4];
    static const U8 pcx_CANdb_ReceiveMessage1_field_start_pos[4] = {
      7, 23, 39, 55, };

    static const U8 pcx_CANdb_ReceiveMessage1_field_width[4] = {
      16, 16, 16, 16, };

    static const U8 pcx_CANdb_ReceiveMessage1_field_is_signed[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage1_field_valtype[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage1_field_order[4] = {
      0, 0, 0, 0, };

    static const F32 pcx_CANdb_ReceiveMessage1_field_eng_min[4] = {
      0.0, 0.0, 0.0, 0.0, };

    static const F32 pcx_CANdb_ReceiveMessage1_field_eng_max[4] = {
      5.0, 5.0, 5.0, 5.0, };

    static const F32 pcx_CANdb_ReceiveMessage1_field_scale[4] = {
      0.0001, 0.0001, 0.0001, 0.0001, };

    static const F32 pcx_CANdb_ReceiveMessage1_field_offset[4] = {
      0.0, 0.0, 0.0, 0.0, };

    if (pcx_CANdb_ReceiveMessage1_msg_handle != PCX_CONFIG_ERROR) {
      pcxf_rx_receive_status = pcx_receive(pcx_CANdb_ReceiveMessage1_msg_handle,
        data, &timestamp);
      BMShil_B.pcx_CANdb_ReceiveMessage1_o1 = (0 != (pcxf_rx_receive_status &
        PCX_RX_ERROR));
      BMShil_B.pcx_CANdb_ReceiveMessage1_o3 = (0 != (pcxf_rx_receive_status &
        PCX_RX_OVERRUN));

      /* decompose message into fields */
      if (pcxf_rx_receive_status & PCX_RX_DATA) {
        BMShil_B.pcx_CANdb_ReceiveMessage1_o2 = 1;
        pcx_CANdb_ReceiveMessage1_out_port[0] = (F32*)
          &pcx_CANdb_ReceiveMessage1_out_port_buffer[0];
        pcx_CANdb_ReceiveMessage1_out_port[1] = (F32*)
          &pcx_CANdb_ReceiveMessage1_out_port_buffer[1];
        pcx_CANdb_ReceiveMessage1_out_port[2] = (F32*)
          &pcx_CANdb_ReceiveMessage1_out_port_buffer[2];
        pcx_CANdb_ReceiveMessage1_out_port[3] = (F32*)
          &pcx_CANdb_ReceiveMessage1_out_port_buffer[3];
        pcx_vdb_unpack_msg(&pcx_CANdb_ReceiveMessage1_out_port[0], NULL, &data[0],
                           pcx_CANdb_ReceiveMessage1_field_start_pos,
                           pcx_CANdb_ReceiveMessage1_field_width,
                           pcx_CANdb_ReceiveMessage1_field_is_signed,
                           pcx_CANdb_ReceiveMessage1_field_valtype,
                           pcx_CANdb_ReceiveMessage1_field_order,
                           pcx_CANdb_ReceiveMessage1_field_eng_min,
                           pcx_CANdb_ReceiveMessage1_field_eng_max,
                           pcx_CANdb_ReceiveMessage1_field_scale,
                           pcx_CANdb_ReceiveMessage1_field_offset, 0, 1, 4);
        BMShil_B.pcx_CANdb_ReceiveMessage1_o4 =
          pcx_CANdb_ReceiveMessage1_out_port_buffer[0];
        BMShil_B.pcx_CANdb_ReceiveMessage1_o5 =
          pcx_CANdb_ReceiveMessage1_out_port_buffer[1];
        BMShil_B.pcx_CANdb_ReceiveMessage1_o6 =
          pcx_CANdb_ReceiveMessage1_out_port_buffer[2];
        BMShil_B.pcx_CANdb_ReceiveMessage1_o7 =
          pcx_CANdb_ReceiveMessage1_out_port_buffer[3];
      } else {
        BMShil_B.pcx_CANdb_ReceiveMessage1_o2 = 0;
      }
    } else {
      /* error: pcx_declare_message was unsuccessful */
      BMShil_B.pcx_CANdb_ReceiveMessage1_o1 = 1;
      BMShil_B.pcx_CANdb_ReceiveMessage1_o2 = 0;
      BMShil_B.pcx_CANdb_ReceiveMessage1_o3 = 0;
    }
  }

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    U32 timestamp;
    S8 pcxf_rx_receive_status;
    F32 pcx_CANdb_ReceiveMessage_p_out_port_buffer[4];
    F32 * pcx_CANdb_ReceiveMessage_p_out_port[4];
    static const U8 pcx_CANdb_ReceiveMessage_p_field_start_pos[4] = {
      7, 23, 39, 55, };

    static const U8 pcx_CANdb_ReceiveMessage_p_field_width[4] = {
      16, 16, 16, 16, };

    static const U8 pcx_CANdb_ReceiveMessage_p_field_is_signed[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage_p_field_valtype[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage_p_field_order[4] = {
      0, 0, 0, 0, };

    static const F32 pcx_CANdb_ReceiveMessage_p_field_eng_min[4] = {
      0.0, 0.0, 0.0, 0.0, };

    static const F32 pcx_CANdb_ReceiveMessage_p_field_eng_max[4] = {
      5.0, 5.0, 5.0, 5.0, };

    static const F32 pcx_CANdb_ReceiveMessage_p_field_scale[4] = {
      0.0001, 0.0001, 0.0001, 0.0001, };

    static const F32 pcx_CANdb_ReceiveMessage_p_field_offset[4] = {
      0.0, 0.0, 0.0, 0.0, };

    if (pcx_CANdb_ReceiveMessage_p_msg_handle != PCX_CONFIG_ERROR) {
      pcxf_rx_receive_status = pcx_receive(pcx_CANdb_ReceiveMessage_p_msg_handle,
        data, &timestamp);
      BMShil_B.pcx_CANdb_ReceiveMessage_o1_n = (0 != (pcxf_rx_receive_status &
        PCX_RX_ERROR));
      BMShil_B.pcx_CANdb_ReceiveMessage_o3_k = (0 != (pcxf_rx_receive_status &
        PCX_RX_OVERRUN));

      /* decompose message into fields */
      if (pcxf_rx_receive_status & PCX_RX_DATA) {
        BMShil_B.pcx_CANdb_ReceiveMessage_o2_h = 1;
        pcx_CANdb_ReceiveMessage_p_out_port[0] = (F32*)
          &pcx_CANdb_ReceiveMessage_p_out_port_buffer[0];
        pcx_CANdb_ReceiveMessage_p_out_port[1] = (F32*)
          &pcx_CANdb_ReceiveMessage_p_out_port_buffer[1];
        pcx_CANdb_ReceiveMessage_p_out_port[2] = (F32*)
          &pcx_CANdb_ReceiveMessage_p_out_port_buffer[2];
        pcx_CANdb_ReceiveMessage_p_out_port[3] = (F32*)
          &pcx_CANdb_ReceiveMessage_p_out_port_buffer[3];
        pcx_vdb_unpack_msg(&pcx_CANdb_ReceiveMessage_p_out_port[0], NULL, &data
                           [0], pcx_CANdb_ReceiveMessage_p_field_start_pos,
                           pcx_CANdb_ReceiveMessage_p_field_width,
                           pcx_CANdb_ReceiveMessage_p_field_is_signed,
                           pcx_CANdb_ReceiveMessage_p_field_valtype,
                           pcx_CANdb_ReceiveMessage_p_field_order,
                           pcx_CANdb_ReceiveMessage_p_field_eng_min,
                           pcx_CANdb_ReceiveMessage_p_field_eng_max,
                           pcx_CANdb_ReceiveMessage_p_field_scale,
                           pcx_CANdb_ReceiveMessage_p_field_offset, 0, 1, 4);
        BMS_CellVoltage = pcx_CANdb_ReceiveMessage_p_out_port_buffer[0];
        BMShil_B.pcx_CANdb_ReceiveMessage_o5 =
          pcx_CANdb_ReceiveMessage_p_out_port_buffer[1];
        BMShil_B.pcx_CANdb_ReceiveMessage_o6 =
          pcx_CANdb_ReceiveMessage_p_out_port_buffer[2];
        BMShil_B.pcx_CANdb_ReceiveMessage_o7 =
          pcx_CANdb_ReceiveMessage_p_out_port_buffer[3];
      } else {
        BMShil_B.pcx_CANdb_ReceiveMessage_o2_h = 0;
      }
    } else {
      /* error: pcx_declare_message was unsuccessful */
      BMShil_B.pcx_CANdb_ReceiveMessage_o1_n = 1;
      BMShil_B.pcx_CANdb_ReceiveMessage_o2_h = 0;
      BMShil_B.pcx_CANdb_ReceiveMessage_o3_k = 0;
    }
  }

  /* S-Function Block: <S1>/pcx_CANdb_ReceiveMessage
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    U32 timestamp;
    S8 pcxf_rx_receive_status;
    F32 pcx_CANdb_ReceiveMessage_pz_out_port_buffer[2];
    F32 * pcx_CANdb_ReceiveMessage_pz_out_port[2];
    static const U8 pcx_CANdb_ReceiveMessage_pz_field_start_pos[2] = {
      7, 31, };

    static const U8 pcx_CANdb_ReceiveMessage_pz_field_width[2] = {
      24, 24, };

    static const U8 pcx_CANdb_ReceiveMessage_pz_field_is_signed[2] = {
      1, 0, };

    static const U8 pcx_CANdb_ReceiveMessage_pz_field_valtype[2] = {
      0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage_pz_field_order[2] = {
      0, 0, };

    static const F32 pcx_CANdb_ReceiveMessage_pz_field_eng_min[2] = {
      -200.0, 0.0, };

    static const F32 pcx_CANdb_ReceiveMessage_pz_field_eng_max[2] = {
      200.0, 200.0, };

    static const F32 pcx_CANdb_ReceiveMessage_pz_field_scale[2] = {
      0.001, 0.001, };

    static const F32 pcx_CANdb_ReceiveMessage_pz_field_offset[2] = {
      0.0, 0.0, };

    if (pcx_CANdb_ReceiveMessage_pz_msg_handle != PCX_CONFIG_ERROR) {
      pcxf_rx_receive_status = pcx_receive
        (pcx_CANdb_ReceiveMessage_pz_msg_handle, data, &timestamp);
      BMShil_B.pcx_CANdb_ReceiveMessage_o1_d = (0 != (pcxf_rx_receive_status &
        PCX_RX_ERROR));
      BMShil_B.pcx_CANdb_ReceiveMessage_o3_e = (0 != (pcxf_rx_receive_status &
        PCX_RX_OVERRUN));

      /* decompose message into fields */
      if (pcxf_rx_receive_status & PCX_RX_DATA) {
        BMShil_B.pcx_CANdb_ReceiveMessage_o2_p = 1;
        pcx_CANdb_ReceiveMessage_pz_out_port[0] = (F32*)
          &pcx_CANdb_ReceiveMessage_pz_out_port_buffer[0];
        pcx_CANdb_ReceiveMessage_pz_out_port[1] = (F32*)
          &pcx_CANdb_ReceiveMessage_pz_out_port_buffer[1];
        pcx_vdb_unpack_msg(&pcx_CANdb_ReceiveMessage_pz_out_port[0], NULL,
                           &data[0], pcx_CANdb_ReceiveMessage_pz_field_start_pos,
                           pcx_CANdb_ReceiveMessage_pz_field_width,
                           pcx_CANdb_ReceiveMessage_pz_field_is_signed,
                           pcx_CANdb_ReceiveMessage_pz_field_valtype,
                           pcx_CANdb_ReceiveMessage_pz_field_order,
                           pcx_CANdb_ReceiveMessage_pz_field_eng_min,
                           pcx_CANdb_ReceiveMessage_pz_field_eng_max,
                           pcx_CANdb_ReceiveMessage_pz_field_scale,
                           pcx_CANdb_ReceiveMessage_pz_field_offset, 0, 1, 2);
        BMShil_B.pcx_CANdb_ReceiveMessage_o4_a =
          pcx_CANdb_ReceiveMessage_pz_out_port_buffer[0];
        BMS_RawPackVoltage = pcx_CANdb_ReceiveMessage_pz_out_port_buffer[1];
      } else {
        BMShil_B.pcx_CANdb_ReceiveMessage_o2_p = 0;
      }
    } else {
      /* error: pcx_declare_message was unsuccessful */
      BMShil_B.pcx_CANdb_ReceiveMessage_o1_d = 1;
      BMShil_B.pcx_CANdb_ReceiveMessage_o2_p = 0;
      BMShil_B.pcx_CANdb_ReceiveMessage_o3_e = 0;
    }
  }

  /* S-Function Block: <S1>/pcx_CANdb_ReceiveMessage1
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    U32 timestamp;
    S8 pcxf_rx_receive_status;
    F32 pcx_CANdb_ReceiveMessage1_j_out_port_buffer[3];
    F32 * pcx_CANdb_ReceiveMessage1_j_out_port[3];
    static const U8 pcx_CANdb_ReceiveMessage1_j_field_start_pos[3] = {
      7, 31, 30, };

    static const U8 pcx_CANdb_ReceiveMessage1_j_field_width[3] = {
      24, 1, 1, };

    static const U8 pcx_CANdb_ReceiveMessage1_j_field_is_signed[3] = {
      0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage1_j_field_valtype[3] = {
      0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage1_j_field_order[3] = {
      0, 0, 0, };

    static const F32 pcx_CANdb_ReceiveMessage1_j_field_eng_min[3] = {
      0.0, 0.0, 0.0, };

    static const F32 pcx_CANdb_ReceiveMessage1_j_field_eng_max[3] = {
      200.0, 1.0, 1.0, };

    static const F32 pcx_CANdb_ReceiveMessage1_j_field_scale[3] = {
      1.0, 1.0, 1.0, };

    static const F32 pcx_CANdb_ReceiveMessage1_j_field_offset[3] = {
      0.0, 0.0, 0.0, };

    if (pcx_CANdb_ReceiveMessage1_j_msg_handle != PCX_CONFIG_ERROR) {
      pcxf_rx_receive_status = pcx_receive
        (pcx_CANdb_ReceiveMessage1_j_msg_handle, data, &timestamp);
      BMShil_B.pcx_CANdb_ReceiveMessage1_o1_j = (0 != (pcxf_rx_receive_status &
        PCX_RX_ERROR));
      BMShil_B.pcx_CANdb_ReceiveMessage1_o3_o = (0 != (pcxf_rx_receive_status &
        PCX_RX_OVERRUN));

      /* decompose message into fields */
      if (pcxf_rx_receive_status & PCX_RX_DATA) {
        BMShil_B.pcx_CANdb_ReceiveMessage1_o2_a = 1;
        pcx_CANdb_ReceiveMessage1_j_out_port[0] = (F32*)
          &pcx_CANdb_ReceiveMessage1_j_out_port_buffer[0];
        pcx_CANdb_ReceiveMessage1_j_out_port[1] = (F32*)
          &pcx_CANdb_ReceiveMessage1_j_out_port_buffer[1];
        pcx_CANdb_ReceiveMessage1_j_out_port[2] = (F32*)
          &pcx_CANdb_ReceiveMessage1_j_out_port_buffer[2];
        pcx_vdb_unpack_msg(&pcx_CANdb_ReceiveMessage1_j_out_port[0], NULL,
                           &data[0], pcx_CANdb_ReceiveMessage1_j_field_start_pos,
                           pcx_CANdb_ReceiveMessage1_j_field_width,
                           pcx_CANdb_ReceiveMessage1_j_field_is_signed,
                           pcx_CANdb_ReceiveMessage1_j_field_valtype,
                           pcx_CANdb_ReceiveMessage1_j_field_order,
                           pcx_CANdb_ReceiveMessage1_j_field_eng_min,
                           pcx_CANdb_ReceiveMessage1_j_field_eng_max,
                           pcx_CANdb_ReceiveMessage1_j_field_scale,
                           pcx_CANdb_ReceiveMessage1_j_field_offset, 0, 1, 3);
        BMS_RawVehSideVoltage = pcx_CANdb_ReceiveMessage1_j_out_port_buffer[0];
        BMS_MedFault = pcx_CANdb_ReceiveMessage1_j_out_port_buffer[1];
        BMShil_B.pcx_CANdb_ReceiveMessage1_o6_b =
          pcx_CANdb_ReceiveMessage1_j_out_port_buffer[2];
      } else {
        BMShil_B.pcx_CANdb_ReceiveMessage1_o2_a = 0;
      }
    } else {
      /* error: pcx_declare_message was unsuccessful */
      BMShil_B.pcx_CANdb_ReceiveMessage1_o1_j = 1;
      BMShil_B.pcx_CANdb_ReceiveMessage1_o2_a = 0;
      BMShil_B.pcx_CANdb_ReceiveMessage1_o3_o = 0;
    }
  }

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage14
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    U32 timestamp;
    S8 pcxf_rx_receive_status;
    F32 pcx_CANdb_ReceiveMessage14_out_port_buffer[4];
    F32 * pcx_CANdb_ReceiveMessage14_out_port[4];
    static const U8 pcx_CANdb_ReceiveMessage14_field_start_pos[4] = {
      7, 23, 39, 55, };

    static const U8 pcx_CANdb_ReceiveMessage14_field_width[4] = {
      16, 16, 16, 16, };

    static const U8 pcx_CANdb_ReceiveMessage14_field_is_signed[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage14_field_valtype[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage14_field_order[4] = {
      0, 0, 0, 0, };

    static const F32 pcx_CANdb_ReceiveMessage14_field_eng_min[4] = {
      -20.0, -20.0, -20.0, -20.0, };

    static const F32 pcx_CANdb_ReceiveMessage14_field_eng_max[4] = {
      80.0, 80.0, 80.0, 80.0, };

    static const F32 pcx_CANdb_ReceiveMessage14_field_scale[4] = {
      0.001, 0.001, 0.001, 0.001, };

    static const F32 pcx_CANdb_ReceiveMessage14_field_offset[4] = {
      -20.0, -20.0, -20.0, -20.0, };

    if (pcx_CANdb_ReceiveMessage14_msg_handle != PCX_CONFIG_ERROR) {
      pcxf_rx_receive_status = pcx_receive(pcx_CANdb_ReceiveMessage14_msg_handle,
        data, &timestamp);
      BMShil_B.pcx_CANdb_ReceiveMessage14_o1 = (0 != (pcxf_rx_receive_status &
        PCX_RX_ERROR));
      BMShil_B.pcx_CANdb_ReceiveMessage14_o3 = (0 != (pcxf_rx_receive_status &
        PCX_RX_OVERRUN));

      /* decompose message into fields */
      if (pcxf_rx_receive_status & PCX_RX_DATA) {
        BMShil_B.pcx_CANdb_ReceiveMessage14_o2 = 1;
        pcx_CANdb_ReceiveMessage14_out_port[0] = (F32*)
          &pcx_CANdb_ReceiveMessage14_out_port_buffer[0];
        pcx_CANdb_ReceiveMessage14_out_port[1] = (F32*)
          &pcx_CANdb_ReceiveMessage14_out_port_buffer[1];
        pcx_CANdb_ReceiveMessage14_out_port[2] = (F32*)
          &pcx_CANdb_ReceiveMessage14_out_port_buffer[2];
        pcx_CANdb_ReceiveMessage14_out_port[3] = (F32*)
          &pcx_CANdb_ReceiveMessage14_out_port_buffer[3];
        pcx_vdb_unpack_msg(&pcx_CANdb_ReceiveMessage14_out_port[0], NULL, &data
                           [0], pcx_CANdb_ReceiveMessage14_field_start_pos,
                           pcx_CANdb_ReceiveMessage14_field_width,
                           pcx_CANdb_ReceiveMessage14_field_is_signed,
                           pcx_CANdb_ReceiveMessage14_field_valtype,
                           pcx_CANdb_ReceiveMessage14_field_order,
                           pcx_CANdb_ReceiveMessage14_field_eng_min,
                           pcx_CANdb_ReceiveMessage14_field_eng_max,
                           pcx_CANdb_ReceiveMessage14_field_scale,
                           pcx_CANdb_ReceiveMessage14_field_offset, 0, 1, 4);
        BMShil_B.pcx_CANdb_ReceiveMessage14_o4 =
          pcx_CANdb_ReceiveMessage14_out_port_buffer[0];
        BMShil_B.pcx_CANdb_ReceiveMessage14_o5 =
          pcx_CANdb_ReceiveMessage14_out_port_buffer[1];
        BMShil_B.pcx_CANdb_ReceiveMessage14_o6 =
          pcx_CANdb_ReceiveMessage14_out_port_buffer[2];
        BMShil_B.pcx_CANdb_ReceiveMessage14_o7 =
          pcx_CANdb_ReceiveMessage14_out_port_buffer[3];
      } else {
        BMShil_B.pcx_CANdb_ReceiveMessage14_o2 = 0;
      }
    } else {
      /* error: pcx_declare_message was unsuccessful */
      BMShil_B.pcx_CANdb_ReceiveMessage14_o1 = 1;
      BMShil_B.pcx_CANdb_ReceiveMessage14_o2 = 0;
      BMShil_B.pcx_CANdb_ReceiveMessage14_o3 = 0;
    }
  }

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage13
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    U32 timestamp;
    S8 pcxf_rx_receive_status;
    F32 pcx_CANdb_ReceiveMessage13_out_port_buffer[4];
    F32 * pcx_CANdb_ReceiveMessage13_out_port[4];
    static const U8 pcx_CANdb_ReceiveMessage13_field_start_pos[4] = {
      7, 23, 39, 55, };

    static const U8 pcx_CANdb_ReceiveMessage13_field_width[4] = {
      16, 16, 16, 16, };

    static const U8 pcx_CANdb_ReceiveMessage13_field_is_signed[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage13_field_valtype[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage13_field_order[4] = {
      0, 0, 0, 0, };

    static const F32 pcx_CANdb_ReceiveMessage13_field_eng_min[4] = {
      -20.0, -20.0, -20.0, -20.0, };

    static const F32 pcx_CANdb_ReceiveMessage13_field_eng_max[4] = {
      80.0, 80.0, 80.0, 80.0, };

    static const F32 pcx_CANdb_ReceiveMessage13_field_scale[4] = {
      0.001, 0.001, 0.001, 0.001, };

    static const F32 pcx_CANdb_ReceiveMessage13_field_offset[4] = {
      -20.0, -20.0, -20.0, -20.0, };

    if (pcx_CANdb_ReceiveMessage13_msg_handle != PCX_CONFIG_ERROR) {
      pcxf_rx_receive_status = pcx_receive(pcx_CANdb_ReceiveMessage13_msg_handle,
        data, &timestamp);
      BMShil_B.pcx_CANdb_ReceiveMessage13_o1 = (0 != (pcxf_rx_receive_status &
        PCX_RX_ERROR));
      BMShil_B.pcx_CANdb_ReceiveMessage13_o3 = (0 != (pcxf_rx_receive_status &
        PCX_RX_OVERRUN));

      /* decompose message into fields */
      if (pcxf_rx_receive_status & PCX_RX_DATA) {
        BMShil_B.pcx_CANdb_ReceiveMessage13_o2 = 1;
        pcx_CANdb_ReceiveMessage13_out_port[0] = (F32*)
          &pcx_CANdb_ReceiveMessage13_out_port_buffer[0];
        pcx_CANdb_ReceiveMessage13_out_port[1] = (F32*)
          &pcx_CANdb_ReceiveMessage13_out_port_buffer[1];
        pcx_CANdb_ReceiveMessage13_out_port[2] = (F32*)
          &pcx_CANdb_ReceiveMessage13_out_port_buffer[2];
        pcx_CANdb_ReceiveMessage13_out_port[3] = (F32*)
          &pcx_CANdb_ReceiveMessage13_out_port_buffer[3];
        pcx_vdb_unpack_msg(&pcx_CANdb_ReceiveMessage13_out_port[0], NULL, &data
                           [0], pcx_CANdb_ReceiveMessage13_field_start_pos,
                           pcx_CANdb_ReceiveMessage13_field_width,
                           pcx_CANdb_ReceiveMessage13_field_is_signed,
                           pcx_CANdb_ReceiveMessage13_field_valtype,
                           pcx_CANdb_ReceiveMessage13_field_order,
                           pcx_CANdb_ReceiveMessage13_field_eng_min,
                           pcx_CANdb_ReceiveMessage13_field_eng_max,
                           pcx_CANdb_ReceiveMessage13_field_scale,
                           pcx_CANdb_ReceiveMessage13_field_offset, 0, 1, 4);
        BMShil_B.pcx_CANdb_ReceiveMessage13_o4 =
          pcx_CANdb_ReceiveMessage13_out_port_buffer[0];
        BMShil_B.pcx_CANdb_ReceiveMessage13_o5 =
          pcx_CANdb_ReceiveMessage13_out_port_buffer[1];
        BMShil_B.pcx_CANdb_ReceiveMessage13_o6 =
          pcx_CANdb_ReceiveMessage13_out_port_buffer[2];
        BMShil_B.pcx_CANdb_ReceiveMessage13_o7 =
          pcx_CANdb_ReceiveMessage13_out_port_buffer[3];
      } else {
        BMShil_B.pcx_CANdb_ReceiveMessage13_o2 = 0;
      }
    } else {
      /* error: pcx_declare_message was unsuccessful */
      BMShil_B.pcx_CANdb_ReceiveMessage13_o1 = 1;
      BMShil_B.pcx_CANdb_ReceiveMessage13_o2 = 0;
      BMShil_B.pcx_CANdb_ReceiveMessage13_o3 = 0;
    }
  }

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage12
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    U32 timestamp;
    S8 pcxf_rx_receive_status;
    F32 pcx_CANdb_ReceiveMessage12_out_port_buffer[4];
    F32 * pcx_CANdb_ReceiveMessage12_out_port[4];
    static const U8 pcx_CANdb_ReceiveMessage12_field_start_pos[4] = {
      7, 23, 39, 55, };

    static const U8 pcx_CANdb_ReceiveMessage12_field_width[4] = {
      16, 16, 16, 16, };

    static const U8 pcx_CANdb_ReceiveMessage12_field_is_signed[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage12_field_valtype[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage12_field_order[4] = {
      0, 0, 0, 0, };

    static const F32 pcx_CANdb_ReceiveMessage12_field_eng_min[4] = {
      -20.0, -20.0, -20.0, -20.0, };

    static const F32 pcx_CANdb_ReceiveMessage12_field_eng_max[4] = {
      80.0, 80.0, 80.0, 80.0, };

    static const F32 pcx_CANdb_ReceiveMessage12_field_scale[4] = {
      0.001, 0.001, 0.001, 0.001, };

    static const F32 pcx_CANdb_ReceiveMessage12_field_offset[4] = {
      -20.0, -20.0, -20.0, -20.0, };

    if (pcx_CANdb_ReceiveMessage12_msg_handle != PCX_CONFIG_ERROR) {
      pcxf_rx_receive_status = pcx_receive(pcx_CANdb_ReceiveMessage12_msg_handle,
        data, &timestamp);
      BMShil_B.pcx_CANdb_ReceiveMessage12_o1 = (0 != (pcxf_rx_receive_status &
        PCX_RX_ERROR));
      BMShil_B.pcx_CANdb_ReceiveMessage12_o3 = (0 != (pcxf_rx_receive_status &
        PCX_RX_OVERRUN));

      /* decompose message into fields */
      if (pcxf_rx_receive_status & PCX_RX_DATA) {
        BMShil_B.pcx_CANdb_ReceiveMessage12_o2 = 1;
        pcx_CANdb_ReceiveMessage12_out_port[0] = (F32*)
          &pcx_CANdb_ReceiveMessage12_out_port_buffer[0];
        pcx_CANdb_ReceiveMessage12_out_port[1] = (F32*)
          &pcx_CANdb_ReceiveMessage12_out_port_buffer[1];
        pcx_CANdb_ReceiveMessage12_out_port[2] = (F32*)
          &pcx_CANdb_ReceiveMessage12_out_port_buffer[2];
        pcx_CANdb_ReceiveMessage12_out_port[3] = (F32*)
          &pcx_CANdb_ReceiveMessage12_out_port_buffer[3];
        pcx_vdb_unpack_msg(&pcx_CANdb_ReceiveMessage12_out_port[0], NULL, &data
                           [0], pcx_CANdb_ReceiveMessage12_field_start_pos,
                           pcx_CANdb_ReceiveMessage12_field_width,
                           pcx_CANdb_ReceiveMessage12_field_is_signed,
                           pcx_CANdb_ReceiveMessage12_field_valtype,
                           pcx_CANdb_ReceiveMessage12_field_order,
                           pcx_CANdb_ReceiveMessage12_field_eng_min,
                           pcx_CANdb_ReceiveMessage12_field_eng_max,
                           pcx_CANdb_ReceiveMessage12_field_scale,
                           pcx_CANdb_ReceiveMessage12_field_offset, 0, 1, 4);
        BMShil_B.pcx_CANdb_ReceiveMessage12_o4 =
          pcx_CANdb_ReceiveMessage12_out_port_buffer[0];
        BMShil_B.pcx_CANdb_ReceiveMessage12_o5 =
          pcx_CANdb_ReceiveMessage12_out_port_buffer[1];
        BMShil_B.pcx_CANdb_ReceiveMessage12_o6 =
          pcx_CANdb_ReceiveMessage12_out_port_buffer[2];
        BMShil_B.pcx_CANdb_ReceiveMessage12_o7 =
          pcx_CANdb_ReceiveMessage12_out_port_buffer[3];
      } else {
        BMShil_B.pcx_CANdb_ReceiveMessage12_o2 = 0;
      }
    } else {
      /* error: pcx_declare_message was unsuccessful */
      BMShil_B.pcx_CANdb_ReceiveMessage12_o1 = 1;
      BMShil_B.pcx_CANdb_ReceiveMessage12_o2 = 0;
      BMShil_B.pcx_CANdb_ReceiveMessage12_o3 = 0;
    }
  }

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage11
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    U32 timestamp;
    S8 pcxf_rx_receive_status;
    F32 pcx_CANdb_ReceiveMessage11_out_port_buffer[4];
    F32 * pcx_CANdb_ReceiveMessage11_out_port[4];
    static const U8 pcx_CANdb_ReceiveMessage11_field_start_pos[4] = {
      7, 23, 39, 55, };

    static const U8 pcx_CANdb_ReceiveMessage11_field_width[4] = {
      16, 16, 16, 16, };

    static const U8 pcx_CANdb_ReceiveMessage11_field_is_signed[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage11_field_valtype[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage11_field_order[4] = {
      0, 0, 0, 0, };

    static const F32 pcx_CANdb_ReceiveMessage11_field_eng_min[4] = {
      -20.0, -20.0, -20.0, -20.0, };

    static const F32 pcx_CANdb_ReceiveMessage11_field_eng_max[4] = {
      80.0, 80.0, 80.0, 80.0, };

    static const F32 pcx_CANdb_ReceiveMessage11_field_scale[4] = {
      0.001, 0.001, 0.001, 0.001, };

    static const F32 pcx_CANdb_ReceiveMessage11_field_offset[4] = {
      -20.0, -20.0, -20.0, -20.0, };

    if (pcx_CANdb_ReceiveMessage11_msg_handle != PCX_CONFIG_ERROR) {
      pcxf_rx_receive_status = pcx_receive(pcx_CANdb_ReceiveMessage11_msg_handle,
        data, &timestamp);
      BMShil_B.pcx_CANdb_ReceiveMessage11_o1 = (0 != (pcxf_rx_receive_status &
        PCX_RX_ERROR));
      BMShil_B.pcx_CANdb_ReceiveMessage11_o3 = (0 != (pcxf_rx_receive_status &
        PCX_RX_OVERRUN));

      /* decompose message into fields */
      if (pcxf_rx_receive_status & PCX_RX_DATA) {
        BMShil_B.pcx_CANdb_ReceiveMessage11_o2 = 1;
        pcx_CANdb_ReceiveMessage11_out_port[0] = (F32*)
          &pcx_CANdb_ReceiveMessage11_out_port_buffer[0];
        pcx_CANdb_ReceiveMessage11_out_port[1] = (F32*)
          &pcx_CANdb_ReceiveMessage11_out_port_buffer[1];
        pcx_CANdb_ReceiveMessage11_out_port[2] = (F32*)
          &pcx_CANdb_ReceiveMessage11_out_port_buffer[2];
        pcx_CANdb_ReceiveMessage11_out_port[3] = (F32*)
          &pcx_CANdb_ReceiveMessage11_out_port_buffer[3];
        pcx_vdb_unpack_msg(&pcx_CANdb_ReceiveMessage11_out_port[0], NULL, &data
                           [0], pcx_CANdb_ReceiveMessage11_field_start_pos,
                           pcx_CANdb_ReceiveMessage11_field_width,
                           pcx_CANdb_ReceiveMessage11_field_is_signed,
                           pcx_CANdb_ReceiveMessage11_field_valtype,
                           pcx_CANdb_ReceiveMessage11_field_order,
                           pcx_CANdb_ReceiveMessage11_field_eng_min,
                           pcx_CANdb_ReceiveMessage11_field_eng_max,
                           pcx_CANdb_ReceiveMessage11_field_scale,
                           pcx_CANdb_ReceiveMessage11_field_offset, 0, 1, 4);
        BMShil_B.pcx_CANdb_ReceiveMessage11_o4 =
          pcx_CANdb_ReceiveMessage11_out_port_buffer[0];
        BMShil_B.pcx_CANdb_ReceiveMessage11_o5 =
          pcx_CANdb_ReceiveMessage11_out_port_buffer[1];
        BMShil_B.pcx_CANdb_ReceiveMessage11_o6 =
          pcx_CANdb_ReceiveMessage11_out_port_buffer[2];
        BMShil_B.pcx_CANdb_ReceiveMessage11_o7 =
          pcx_CANdb_ReceiveMessage11_out_port_buffer[3];
      } else {
        BMShil_B.pcx_CANdb_ReceiveMessage11_o2 = 0;
      }
    } else {
      /* error: pcx_declare_message was unsuccessful */
      BMShil_B.pcx_CANdb_ReceiveMessage11_o1 = 1;
      BMShil_B.pcx_CANdb_ReceiveMessage11_o2 = 0;
      BMShil_B.pcx_CANdb_ReceiveMessage11_o3 = 0;
    }
  }

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage10
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    U32 timestamp;
    S8 pcxf_rx_receive_status;
    F32 pcx_CANdb_ReceiveMessage10_out_port_buffer[4];
    F32 * pcx_CANdb_ReceiveMessage10_out_port[4];
    static const U8 pcx_CANdb_ReceiveMessage10_field_start_pos[4] = {
      7, 23, 39, 55, };

    static const U8 pcx_CANdb_ReceiveMessage10_field_width[4] = {
      16, 16, 16, 16, };

    static const U8 pcx_CANdb_ReceiveMessage10_field_is_signed[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage10_field_valtype[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage10_field_order[4] = {
      0, 0, 0, 0, };

    static const F32 pcx_CANdb_ReceiveMessage10_field_eng_min[4] = {
      -20.0, -20.0, -20.0, -20.0, };

    static const F32 pcx_CANdb_ReceiveMessage10_field_eng_max[4] = {
      80.0, 80.0, 80.0, 80.0, };

    static const F32 pcx_CANdb_ReceiveMessage10_field_scale[4] = {
      0.001, 0.001, 0.001, 0.001, };

    static const F32 pcx_CANdb_ReceiveMessage10_field_offset[4] = {
      -20.0, -20.0, -20.0, -20.0, };

    if (pcx_CANdb_ReceiveMessage10_msg_handle != PCX_CONFIG_ERROR) {
      pcxf_rx_receive_status = pcx_receive(pcx_CANdb_ReceiveMessage10_msg_handle,
        data, &timestamp);
      BMShil_B.pcx_CANdb_ReceiveMessage10_o1 = (0 != (pcxf_rx_receive_status &
        PCX_RX_ERROR));
      BMShil_B.pcx_CANdb_ReceiveMessage10_o3 = (0 != (pcxf_rx_receive_status &
        PCX_RX_OVERRUN));

      /* decompose message into fields */
      if (pcxf_rx_receive_status & PCX_RX_DATA) {
        BMShil_B.pcx_CANdb_ReceiveMessage10_o2 = 1;
        pcx_CANdb_ReceiveMessage10_out_port[0] = (F32*)
          &pcx_CANdb_ReceiveMessage10_out_port_buffer[0];
        pcx_CANdb_ReceiveMessage10_out_port[1] = (F32*)
          &pcx_CANdb_ReceiveMessage10_out_port_buffer[1];
        pcx_CANdb_ReceiveMessage10_out_port[2] = (F32*)
          &pcx_CANdb_ReceiveMessage10_out_port_buffer[2];
        pcx_CANdb_ReceiveMessage10_out_port[3] = (F32*)
          &pcx_CANdb_ReceiveMessage10_out_port_buffer[3];
        pcx_vdb_unpack_msg(&pcx_CANdb_ReceiveMessage10_out_port[0], NULL, &data
                           [0], pcx_CANdb_ReceiveMessage10_field_start_pos,
                           pcx_CANdb_ReceiveMessage10_field_width,
                           pcx_CANdb_ReceiveMessage10_field_is_signed,
                           pcx_CANdb_ReceiveMessage10_field_valtype,
                           pcx_CANdb_ReceiveMessage10_field_order,
                           pcx_CANdb_ReceiveMessage10_field_eng_min,
                           pcx_CANdb_ReceiveMessage10_field_eng_max,
                           pcx_CANdb_ReceiveMessage10_field_scale,
                           pcx_CANdb_ReceiveMessage10_field_offset, 0, 1, 4);
        BMShil_B.pcx_CANdb_ReceiveMessage10_o4 =
          pcx_CANdb_ReceiveMessage10_out_port_buffer[0];
        BMShil_B.pcx_CANdb_ReceiveMessage10_o5 =
          pcx_CANdb_ReceiveMessage10_out_port_buffer[1];
        BMShil_B.pcx_CANdb_ReceiveMessage10_o6 =
          pcx_CANdb_ReceiveMessage10_out_port_buffer[2];
        BMShil_B.pcx_CANdb_ReceiveMessage10_o7 =
          pcx_CANdb_ReceiveMessage10_out_port_buffer[3];
      } else {
        BMShil_B.pcx_CANdb_ReceiveMessage10_o2 = 0;
      }
    } else {
      /* error: pcx_declare_message was unsuccessful */
      BMShil_B.pcx_CANdb_ReceiveMessage10_o1 = 1;
      BMShil_B.pcx_CANdb_ReceiveMessage10_o2 = 0;
      BMShil_B.pcx_CANdb_ReceiveMessage10_o3 = 0;
    }
  }

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage9
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    U32 timestamp;
    S8 pcxf_rx_receive_status;
    F32 pcx_CANdb_ReceiveMessage9_n_out_port_buffer[4];
    F32 * pcx_CANdb_ReceiveMessage9_n_out_port[4];
    static const U8 pcx_CANdb_ReceiveMessage9_n_field_start_pos[4] = {
      7, 23, 39, 55, };

    static const U8 pcx_CANdb_ReceiveMessage9_n_field_width[4] = {
      16, 16, 16, 16, };

    static const U8 pcx_CANdb_ReceiveMessage9_n_field_is_signed[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage9_n_field_valtype[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage9_n_field_order[4] = {
      0, 0, 0, 0, };

    static const F32 pcx_CANdb_ReceiveMessage9_n_field_eng_min[4] = {
      -20.0, -20.0, -20.0, -20.0, };

    static const F32 pcx_CANdb_ReceiveMessage9_n_field_eng_max[4] = {
      80.0, 80.0, 80.0, 80.0, };

    static const F32 pcx_CANdb_ReceiveMessage9_n_field_scale[4] = {
      0.001, 0.001, 0.001, 0.001, };

    static const F32 pcx_CANdb_ReceiveMessage9_n_field_offset[4] = {
      -20.0, -20.0, -20.0, -20.0, };

    if (pcx_CANdb_ReceiveMessage9_n_msg_handle != PCX_CONFIG_ERROR) {
      pcxf_rx_receive_status = pcx_receive
        (pcx_CANdb_ReceiveMessage9_n_msg_handle, data, &timestamp);
      BMShil_B.pcx_CANdb_ReceiveMessage9_o1_d = (0 != (pcxf_rx_receive_status &
        PCX_RX_ERROR));
      BMShil_B.pcx_CANdb_ReceiveMessage9_o3_g = (0 != (pcxf_rx_receive_status &
        PCX_RX_OVERRUN));

      /* decompose message into fields */
      if (pcxf_rx_receive_status & PCX_RX_DATA) {
        BMShil_B.pcx_CANdb_ReceiveMessage9_o2_c = 1;
        pcx_CANdb_ReceiveMessage9_n_out_port[0] = (F32*)
          &pcx_CANdb_ReceiveMessage9_n_out_port_buffer[0];
        pcx_CANdb_ReceiveMessage9_n_out_port[1] = (F32*)
          &pcx_CANdb_ReceiveMessage9_n_out_port_buffer[1];
        pcx_CANdb_ReceiveMessage9_n_out_port[2] = (F32*)
          &pcx_CANdb_ReceiveMessage9_n_out_port_buffer[2];
        pcx_CANdb_ReceiveMessage9_n_out_port[3] = (F32*)
          &pcx_CANdb_ReceiveMessage9_n_out_port_buffer[3];
        pcx_vdb_unpack_msg(&pcx_CANdb_ReceiveMessage9_n_out_port[0], NULL,
                           &data[0], pcx_CANdb_ReceiveMessage9_n_field_start_pos,
                           pcx_CANdb_ReceiveMessage9_n_field_width,
                           pcx_CANdb_ReceiveMessage9_n_field_is_signed,
                           pcx_CANdb_ReceiveMessage9_n_field_valtype,
                           pcx_CANdb_ReceiveMessage9_n_field_order,
                           pcx_CANdb_ReceiveMessage9_n_field_eng_min,
                           pcx_CANdb_ReceiveMessage9_n_field_eng_max,
                           pcx_CANdb_ReceiveMessage9_n_field_scale,
                           pcx_CANdb_ReceiveMessage9_n_field_offset, 0, 1, 4);
        BMShil_B.pcx_CANdb_ReceiveMessage9_o4_h =
          pcx_CANdb_ReceiveMessage9_n_out_port_buffer[0];
        BMShil_B.pcx_CANdb_ReceiveMessage9_o5_n =
          pcx_CANdb_ReceiveMessage9_n_out_port_buffer[1];
        BMShil_B.pcx_CANdb_ReceiveMessage9_o6_f =
          pcx_CANdb_ReceiveMessage9_n_out_port_buffer[2];
        BMShil_B.pcx_CANdb_ReceiveMessage9_o7_e =
          pcx_CANdb_ReceiveMessage9_n_out_port_buffer[3];
      } else {
        BMShil_B.pcx_CANdb_ReceiveMessage9_o2_c = 0;
      }
    } else {
      /* error: pcx_declare_message was unsuccessful */
      BMShil_B.pcx_CANdb_ReceiveMessage9_o1_d = 1;
      BMShil_B.pcx_CANdb_ReceiveMessage9_o2_c = 0;
      BMShil_B.pcx_CANdb_ReceiveMessage9_o3_g = 0;
    }
  }

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage8
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    U32 timestamp;
    S8 pcxf_rx_receive_status;
    F32 pcx_CANdb_ReceiveMessage8_f_out_port_buffer[4];
    F32 * pcx_CANdb_ReceiveMessage8_f_out_port[4];
    static const U8 pcx_CANdb_ReceiveMessage8_f_field_start_pos[4] = {
      7, 23, 39, 55, };

    static const U8 pcx_CANdb_ReceiveMessage8_f_field_width[4] = {
      16, 16, 16, 16, };

    static const U8 pcx_CANdb_ReceiveMessage8_f_field_is_signed[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage8_f_field_valtype[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage8_f_field_order[4] = {
      0, 0, 0, 0, };

    static const F32 pcx_CANdb_ReceiveMessage8_f_field_eng_min[4] = {
      -20.0, -20.0, -20.0, -20.0, };

    static const F32 pcx_CANdb_ReceiveMessage8_f_field_eng_max[4] = {
      80.0, 80.0, 80.0, 80.0, };

    static const F32 pcx_CANdb_ReceiveMessage8_f_field_scale[4] = {
      0.001, 0.001, 0.001, 0.001, };

    static const F32 pcx_CANdb_ReceiveMessage8_f_field_offset[4] = {
      -20.0, -20.0, -20.0, -20.0, };

    if (pcx_CANdb_ReceiveMessage8_f_msg_handle != PCX_CONFIG_ERROR) {
      pcxf_rx_receive_status = pcx_receive
        (pcx_CANdb_ReceiveMessage8_f_msg_handle, data, &timestamp);
      BMShil_B.pcx_CANdb_ReceiveMessage8_o1_o = (0 != (pcxf_rx_receive_status &
        PCX_RX_ERROR));
      BMShil_B.pcx_CANdb_ReceiveMessage8_o3_i = (0 != (pcxf_rx_receive_status &
        PCX_RX_OVERRUN));

      /* decompose message into fields */
      if (pcxf_rx_receive_status & PCX_RX_DATA) {
        BMShil_B.pcx_CANdb_ReceiveMessage8_o2_p = 1;
        pcx_CANdb_ReceiveMessage8_f_out_port[0] = (F32*)
          &pcx_CANdb_ReceiveMessage8_f_out_port_buffer[0];
        pcx_CANdb_ReceiveMessage8_f_out_port[1] = (F32*)
          &pcx_CANdb_ReceiveMessage8_f_out_port_buffer[1];
        pcx_CANdb_ReceiveMessage8_f_out_port[2] = (F32*)
          &pcx_CANdb_ReceiveMessage8_f_out_port_buffer[2];
        pcx_CANdb_ReceiveMessage8_f_out_port[3] = (F32*)
          &pcx_CANdb_ReceiveMessage8_f_out_port_buffer[3];
        pcx_vdb_unpack_msg(&pcx_CANdb_ReceiveMessage8_f_out_port[0], NULL,
                           &data[0], pcx_CANdb_ReceiveMessage8_f_field_start_pos,
                           pcx_CANdb_ReceiveMessage8_f_field_width,
                           pcx_CANdb_ReceiveMessage8_f_field_is_signed,
                           pcx_CANdb_ReceiveMessage8_f_field_valtype,
                           pcx_CANdb_ReceiveMessage8_f_field_order,
                           pcx_CANdb_ReceiveMessage8_f_field_eng_min,
                           pcx_CANdb_ReceiveMessage8_f_field_eng_max,
                           pcx_CANdb_ReceiveMessage8_f_field_scale,
                           pcx_CANdb_ReceiveMessage8_f_field_offset, 0, 1, 4);
        BMShil_B.pcx_CANdb_ReceiveMessage8_o4_c =
          pcx_CANdb_ReceiveMessage8_f_out_port_buffer[0];
        BMShil_B.pcx_CANdb_ReceiveMessage8_o5_e =
          pcx_CANdb_ReceiveMessage8_f_out_port_buffer[1];
        BMShil_B.pcx_CANdb_ReceiveMessage8_o6_j =
          pcx_CANdb_ReceiveMessage8_f_out_port_buffer[2];
        BMShil_B.pcx_CANdb_ReceiveMessage8_o7_l =
          pcx_CANdb_ReceiveMessage8_f_out_port_buffer[3];
      } else {
        BMShil_B.pcx_CANdb_ReceiveMessage8_o2_p = 0;
      }
    } else {
      /* error: pcx_declare_message was unsuccessful */
      BMShil_B.pcx_CANdb_ReceiveMessage8_o1_o = 1;
      BMShil_B.pcx_CANdb_ReceiveMessage8_o2_p = 0;
      BMShil_B.pcx_CANdb_ReceiveMessage8_o3_i = 0;
    }
  }

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage7
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    U32 timestamp;
    S8 pcxf_rx_receive_status;
    F32 pcx_CANdb_ReceiveMessage7_o_out_port_buffer[4];
    F32 * pcx_CANdb_ReceiveMessage7_o_out_port[4];
    static const U8 pcx_CANdb_ReceiveMessage7_o_field_start_pos[4] = {
      7, 23, 39, 55, };

    static const U8 pcx_CANdb_ReceiveMessage7_o_field_width[4] = {
      16, 16, 16, 16, };

    static const U8 pcx_CANdb_ReceiveMessage7_o_field_is_signed[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage7_o_field_valtype[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage7_o_field_order[4] = {
      0, 0, 0, 0, };

    static const F32 pcx_CANdb_ReceiveMessage7_o_field_eng_min[4] = {
      -20.0, -20.0, -20.0, -20.0, };

    static const F32 pcx_CANdb_ReceiveMessage7_o_field_eng_max[4] = {
      80.0, 80.0, 80.0, 80.0, };

    static const F32 pcx_CANdb_ReceiveMessage7_o_field_scale[4] = {
      0.001, 0.001, 0.001, 0.001, };

    static const F32 pcx_CANdb_ReceiveMessage7_o_field_offset[4] = {
      -20.0, -20.0, -20.0, -20.0, };

    if (pcx_CANdb_ReceiveMessage7_o_msg_handle != PCX_CONFIG_ERROR) {
      pcxf_rx_receive_status = pcx_receive
        (pcx_CANdb_ReceiveMessage7_o_msg_handle, data, &timestamp);
      BMShil_B.pcx_CANdb_ReceiveMessage7_o1_c = (0 != (pcxf_rx_receive_status &
        PCX_RX_ERROR));
      BMShil_B.pcx_CANdb_ReceiveMessage7_o3_g = (0 != (pcxf_rx_receive_status &
        PCX_RX_OVERRUN));

      /* decompose message into fields */
      if (pcxf_rx_receive_status & PCX_RX_DATA) {
        BMShil_B.pcx_CANdb_ReceiveMessage7_o2_g = 1;
        pcx_CANdb_ReceiveMessage7_o_out_port[0] = (F32*)
          &pcx_CANdb_ReceiveMessage7_o_out_port_buffer[0];
        pcx_CANdb_ReceiveMessage7_o_out_port[1] = (F32*)
          &pcx_CANdb_ReceiveMessage7_o_out_port_buffer[1];
        pcx_CANdb_ReceiveMessage7_o_out_port[2] = (F32*)
          &pcx_CANdb_ReceiveMessage7_o_out_port_buffer[2];
        pcx_CANdb_ReceiveMessage7_o_out_port[3] = (F32*)
          &pcx_CANdb_ReceiveMessage7_o_out_port_buffer[3];
        pcx_vdb_unpack_msg(&pcx_CANdb_ReceiveMessage7_o_out_port[0], NULL,
                           &data[0], pcx_CANdb_ReceiveMessage7_o_field_start_pos,
                           pcx_CANdb_ReceiveMessage7_o_field_width,
                           pcx_CANdb_ReceiveMessage7_o_field_is_signed,
                           pcx_CANdb_ReceiveMessage7_o_field_valtype,
                           pcx_CANdb_ReceiveMessage7_o_field_order,
                           pcx_CANdb_ReceiveMessage7_o_field_eng_min,
                           pcx_CANdb_ReceiveMessage7_o_field_eng_max,
                           pcx_CANdb_ReceiveMessage7_o_field_scale,
                           pcx_CANdb_ReceiveMessage7_o_field_offset, 0, 1, 4);
        BMShil_B.pcx_CANdb_ReceiveMessage7_o4_c =
          pcx_CANdb_ReceiveMessage7_o_out_port_buffer[0];
        BMShil_B.pcx_CANdb_ReceiveMessage7_o5_e =
          pcx_CANdb_ReceiveMessage7_o_out_port_buffer[1];
        BMShil_B.pcx_CANdb_ReceiveMessage7_o6_p =
          pcx_CANdb_ReceiveMessage7_o_out_port_buffer[2];
        BMShil_B.pcx_CANdb_ReceiveMessage7_o7_n =
          pcx_CANdb_ReceiveMessage7_o_out_port_buffer[3];
      } else {
        BMShil_B.pcx_CANdb_ReceiveMessage7_o2_g = 0;
      }
    } else {
      /* error: pcx_declare_message was unsuccessful */
      BMShil_B.pcx_CANdb_ReceiveMessage7_o1_c = 1;
      BMShil_B.pcx_CANdb_ReceiveMessage7_o2_g = 0;
      BMShil_B.pcx_CANdb_ReceiveMessage7_o3_g = 0;
    }
  }

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage6
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    U32 timestamp;
    S8 pcxf_rx_receive_status;
    F32 pcx_CANdb_ReceiveMessage6_p_out_port_buffer[4];
    F32 * pcx_CANdb_ReceiveMessage6_p_out_port[4];
    static const U8 pcx_CANdb_ReceiveMessage6_p_field_start_pos[4] = {
      7, 23, 39, 55, };

    static const U8 pcx_CANdb_ReceiveMessage6_p_field_width[4] = {
      16, 16, 16, 16, };

    static const U8 pcx_CANdb_ReceiveMessage6_p_field_is_signed[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage6_p_field_valtype[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage6_p_field_order[4] = {
      0, 0, 0, 0, };

    static const F32 pcx_CANdb_ReceiveMessage6_p_field_eng_min[4] = {
      -20.0, -20.0, -20.0, -20.0, };

    static const F32 pcx_CANdb_ReceiveMessage6_p_field_eng_max[4] = {
      80.0, 80.0, 80.0, 80.0, };

    static const F32 pcx_CANdb_ReceiveMessage6_p_field_scale[4] = {
      0.001, 0.001, 0.001, 0.001, };

    static const F32 pcx_CANdb_ReceiveMessage6_p_field_offset[4] = {
      -20.0, -20.0, -20.0, -20.0, };

    if (pcx_CANdb_ReceiveMessage6_p_msg_handle != PCX_CONFIG_ERROR) {
      pcxf_rx_receive_status = pcx_receive
        (pcx_CANdb_ReceiveMessage6_p_msg_handle, data, &timestamp);
      BMShil_B.pcx_CANdb_ReceiveMessage6_o1_a = (0 != (pcxf_rx_receive_status &
        PCX_RX_ERROR));
      BMShil_B.pcx_CANdb_ReceiveMessage6_o3_k = (0 != (pcxf_rx_receive_status &
        PCX_RX_OVERRUN));

      /* decompose message into fields */
      if (pcxf_rx_receive_status & PCX_RX_DATA) {
        BMShil_B.pcx_CANdb_ReceiveMessage6_o2_i = 1;
        pcx_CANdb_ReceiveMessage6_p_out_port[0] = (F32*)
          &pcx_CANdb_ReceiveMessage6_p_out_port_buffer[0];
        pcx_CANdb_ReceiveMessage6_p_out_port[1] = (F32*)
          &pcx_CANdb_ReceiveMessage6_p_out_port_buffer[1];
        pcx_CANdb_ReceiveMessage6_p_out_port[2] = (F32*)
          &pcx_CANdb_ReceiveMessage6_p_out_port_buffer[2];
        pcx_CANdb_ReceiveMessage6_p_out_port[3] = (F32*)
          &pcx_CANdb_ReceiveMessage6_p_out_port_buffer[3];
        pcx_vdb_unpack_msg(&pcx_CANdb_ReceiveMessage6_p_out_port[0], NULL,
                           &data[0], pcx_CANdb_ReceiveMessage6_p_field_start_pos,
                           pcx_CANdb_ReceiveMessage6_p_field_width,
                           pcx_CANdb_ReceiveMessage6_p_field_is_signed,
                           pcx_CANdb_ReceiveMessage6_p_field_valtype,
                           pcx_CANdb_ReceiveMessage6_p_field_order,
                           pcx_CANdb_ReceiveMessage6_p_field_eng_min,
                           pcx_CANdb_ReceiveMessage6_p_field_eng_max,
                           pcx_CANdb_ReceiveMessage6_p_field_scale,
                           pcx_CANdb_ReceiveMessage6_p_field_offset, 0, 1, 4);
        BMShil_B.pcx_CANdb_ReceiveMessage6_o4_e =
          pcx_CANdb_ReceiveMessage6_p_out_port_buffer[0];
        BMShil_B.pcx_CANdb_ReceiveMessage6_o5_b =
          pcx_CANdb_ReceiveMessage6_p_out_port_buffer[1];
        BMShil_B.pcx_CANdb_ReceiveMessage6_o6_k =
          pcx_CANdb_ReceiveMessage6_p_out_port_buffer[2];
        BMShil_B.pcx_CANdb_ReceiveMessage6_o7_p =
          pcx_CANdb_ReceiveMessage6_p_out_port_buffer[3];
      } else {
        BMShil_B.pcx_CANdb_ReceiveMessage6_o2_i = 0;
      }
    } else {
      /* error: pcx_declare_message was unsuccessful */
      BMShil_B.pcx_CANdb_ReceiveMessage6_o1_a = 1;
      BMShil_B.pcx_CANdb_ReceiveMessage6_o2_i = 0;
      BMShil_B.pcx_CANdb_ReceiveMessage6_o3_k = 0;
    }
  }

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage5
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    U32 timestamp;
    S8 pcxf_rx_receive_status;
    F32 pcx_CANdb_ReceiveMessage5_a_out_port_buffer[4];
    F32 * pcx_CANdb_ReceiveMessage5_a_out_port[4];
    static const U8 pcx_CANdb_ReceiveMessage5_a_field_start_pos[4] = {
      7, 23, 39, 55, };

    static const U8 pcx_CANdb_ReceiveMessage5_a_field_width[4] = {
      16, 16, 16, 16, };

    static const U8 pcx_CANdb_ReceiveMessage5_a_field_is_signed[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage5_a_field_valtype[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_ReceiveMessage5_a_field_order[4] = {
      0, 0, 0, 0, };

    static const F32 pcx_CANdb_ReceiveMessage5_a_field_eng_min[4] = {
      -20.0, -20.0, -20.0, -20.0, };

    static const F32 pcx_CANdb_ReceiveMessage5_a_field_eng_max[4] = {
      80.0, 80.0, 80.0, 80.0, };

    static const F32 pcx_CANdb_ReceiveMessage5_a_field_scale[4] = {
      0.001, 0.001, 0.001, 0.001, };

    static const F32 pcx_CANdb_ReceiveMessage5_a_field_offset[4] = {
      -20.0, -20.0, -20.0, -20.0, };

    if (pcx_CANdb_ReceiveMessage5_a_msg_handle != PCX_CONFIG_ERROR) {
      pcxf_rx_receive_status = pcx_receive
        (pcx_CANdb_ReceiveMessage5_a_msg_handle, data, &timestamp);
      BMShil_B.pcx_CANdb_ReceiveMessage5_o1_k = (0 != (pcxf_rx_receive_status &
        PCX_RX_ERROR));
      BMShil_B.pcx_CANdb_ReceiveMessage5_o3_k = (0 != (pcxf_rx_receive_status &
        PCX_RX_OVERRUN));

      /* decompose message into fields */
      if (pcxf_rx_receive_status & PCX_RX_DATA) {
        BMShil_B.pcx_CANdb_ReceiveMessage5_o2_n = 1;
        pcx_CANdb_ReceiveMessage5_a_out_port[0] = (F32*)
          &pcx_CANdb_ReceiveMessage5_a_out_port_buffer[0];
        pcx_CANdb_ReceiveMessage5_a_out_port[1] = (F32*)
          &pcx_CANdb_ReceiveMessage5_a_out_port_buffer[1];
        pcx_CANdb_ReceiveMessage5_a_out_port[2] = (F32*)
          &pcx_CANdb_ReceiveMessage5_a_out_port_buffer[2];
        pcx_CANdb_ReceiveMessage5_a_out_port[3] = (F32*)
          &pcx_CANdb_ReceiveMessage5_a_out_port_buffer[3];
        pcx_vdb_unpack_msg(&pcx_CANdb_ReceiveMessage5_a_out_port[0], NULL,
                           &data[0], pcx_CANdb_ReceiveMessage5_a_field_start_pos,
                           pcx_CANdb_ReceiveMessage5_a_field_width,
                           pcx_CANdb_ReceiveMessage5_a_field_is_signed,
                           pcx_CANdb_ReceiveMessage5_a_field_valtype,
                           pcx_CANdb_ReceiveMessage5_a_field_order,
                           pcx_CANdb_ReceiveMessage5_a_field_eng_min,
                           pcx_CANdb_ReceiveMessage5_a_field_eng_max,
                           pcx_CANdb_ReceiveMessage5_a_field_scale,
                           pcx_CANdb_ReceiveMessage5_a_field_offset, 0, 1, 4);
        BMS_CellTemp = pcx_CANdb_ReceiveMessage5_a_out_port_buffer[0];
        BMShil_B.pcx_CANdb_ReceiveMessage5_o5_o =
          pcx_CANdb_ReceiveMessage5_a_out_port_buffer[1];
        BMShil_B.pcx_CANdb_ReceiveMessage5_o6_e =
          pcx_CANdb_ReceiveMessage5_a_out_port_buffer[2];
        BMShil_B.pcx_CANdb_ReceiveMessage5_o7_n =
          pcx_CANdb_ReceiveMessage5_a_out_port_buffer[3];
      } else {
        BMShil_B.pcx_CANdb_ReceiveMessage5_o2_n = 0;
      }
    } else {
      /* error: pcx_declare_message was unsuccessful */
      BMShil_B.pcx_CANdb_ReceiveMessage5_o1_k = 1;
      BMShil_B.pcx_CANdb_ReceiveMessage5_o2_n = 0;
      BMShil_B.pcx_CANdb_ReceiveMessage5_o3_k = 0;
    }
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  BMShil_B.DataTypeConversion2 = (U8)BMShil_B.pcx_CANdb_ReceiveMessage1_o6_b;

  /* DataTypeConversion: '<Root>/Data Type Conversion6' incorporates:
   *  Step: '<Root>/Severe Fault'
   */
  BMShil_B.DataTypeConversion6 = 0U;

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  BMShil_B.DataTypeConversion1 = (U8)BMS_MedFault;

  /* Chart: '<S2>/Chart' incorporates:
   *  Constant: '<S2>/Constant1'
   *  Constant: '<S2>/Constant2'
   *  Constant: '<S2>/Max Efficiency Temperature degC'
   *  Constant: '<S5>/Constant'
   */
  /* Gateway: BMS/Chart */
  /* During: BMS/Chart */
  if (BMShil_DWork.bitsForTID0.is_active_c3_BMShil == 0U) {
    /* Entry: BMS/Chart */
    BMShil_DWork.bitsForTID0.is_active_c3_BMShil = 1U;

    /* Entry Internal: BMS/Chart */
    /* Transition: '<S9>:46' */
    BMShil_DWork.bitsForTID0.is_c3_BMShil = BMShil_IN_no_power;

    /* Entry 'no_power': '<S9>:45' */
    BMShil_DWork.end_count = 0.0;
  } else {
    switch (BMShil_DWork.bitsForTID0.is_c3_BMShil) {
     case BMShil_IN_end_chg:
      /* During 'end_chg': '<S9>:512' */
      if (BMShil_DWork.end_count < 10.0) {
        /* Transition: '<S9>:515' */
        /* Exit 'end_chg': '<S9>:512' */
        BMShil_DWork.end_count++;
        BMShil_DWork.bitsForTID0.is_c3_BMShil = BMShil_IN_end_chg;

        /* SignalConversion: '<S2>/VITM' */
        /* Entry Internal 'end_chg': '<S9>:512' */
        /* Transition: '<S9>:630' */
        /* Transition: '<S9>:621' */
        /* Event: '<S9>:25' */
        rtb_TmpSignalConversionAtVITMIn[0] = BMS_CellVoltage;
        rtb_TmpSignalConversionAtVITMIn[1] =
          BMShil_B.pcx_CANdb_ReceiveMessage_o5;
        rtb_TmpSignalConversionAtVITMIn[2] =
          BMShil_B.pcx_CANdb_ReceiveMessage_o6;
        rtb_TmpSignalConversionAtVITMIn[3] =
          BMShil_B.pcx_CANdb_ReceiveMessage_o7;
        rtb_TmpSignalConversionAtVITMIn[4] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o4;
        rtb_TmpSignalConversionAtVITMIn[5] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o5;
        rtb_TmpSignalConversionAtVITMIn[6] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o6;
        rtb_TmpSignalConversionAtVITMIn[7] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o7;
        rtb_TmpSignalConversionAtVITMIn[8] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o4;
        rtb_TmpSignalConversionAtVITMIn[9] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o5;
        rtb_TmpSignalConversionAtVITMIn[10] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o6;
        rtb_TmpSignalConversionAtVITMIn[11] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o7;
        rtb_TmpSignalConversionAtVITMIn[12] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o4;
        rtb_TmpSignalConversionAtVITMIn[13] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o5;
        rtb_TmpSignalConversionAtVITMIn[14] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o6;
        rtb_TmpSignalConversionAtVITMIn[15] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o7;
        rtb_TmpSignalConversionAtVITMIn[16] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o4;
        rtb_TmpSignalConversionAtVITMIn[17] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o5;
        rtb_TmpSignalConversionAtVITMIn[18] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o6;
        rtb_TmpSignalConversionAtVITMIn[19] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o7;
        rtb_TmpSignalConversionAtVITMIn[20] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o4_p;
        rtb_TmpSignalConversionAtVITMIn[21] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o5;
        rtb_TmpSignalConversionAtVITMIn[22] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o6;
        rtb_TmpSignalConversionAtVITMIn[23] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o7;
        rtb_TmpSignalConversionAtVITMIn[24] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o4;
        rtb_TmpSignalConversionAtVITMIn[25] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o5;
        rtb_TmpSignalConversionAtVITMIn[26] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o6;
        rtb_TmpSignalConversionAtVITMIn[27] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o7;
        rtb_TmpSignalConversionAtVITMIn[28] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o4;
        rtb_TmpSignalConversionAtVITMIn[29] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o5;
        rtb_TmpSignalConversionAtVITMIn[30] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o6;
        rtb_TmpSignalConversionAtVITMIn[31] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o7;
        rtb_TmpSignalConversionAtVITMIn[32] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o4;
        rtb_TmpSignalConversionAtVITMIn[33] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o5;
        rtb_TmpSignalConversionAtVITMIn[34] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o6;
        rtb_TmpSignalConversionAtVITMIn[35] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o7;
        rtb_TmpSignalConversionAtVITMIn[36] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o4;
        rtb_TmpSignalConversionAtVITMIn[37] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o5;
        rtb_TmpSignalConversionAtVITMIn[38] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o6;
        rtb_TmpSignalConversionAtVITMIn[39] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o7;

        /* SignalConversion: '<S2>/VITM' */
        rtb_TmpSignalConversionAtVITM_h[0] = BMS_CellTemp;
        rtb_TmpSignalConversionAtVITM_h[1] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o5_o;
        rtb_TmpSignalConversionAtVITM_h[2] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o6_e;
        rtb_TmpSignalConversionAtVITM_h[3] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o7_n;
        rtb_TmpSignalConversionAtVITM_h[4] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o4_e;
        rtb_TmpSignalConversionAtVITM_h[5] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o5_b;
        rtb_TmpSignalConversionAtVITM_h[6] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o6_k;
        rtb_TmpSignalConversionAtVITM_h[7] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o7_p;
        rtb_TmpSignalConversionAtVITM_h[8] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o4_c;
        rtb_TmpSignalConversionAtVITM_h[9] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o5_e;
        rtb_TmpSignalConversionAtVITM_h[10] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o6_p;
        rtb_TmpSignalConversionAtVITM_h[11] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o7_n;
        rtb_TmpSignalConversionAtVITM_h[12] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o4_c;
        rtb_TmpSignalConversionAtVITM_h[13] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o5_e;
        rtb_TmpSignalConversionAtVITM_h[14] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o6_j;
        rtb_TmpSignalConversionAtVITM_h[15] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o7_l;
        rtb_TmpSignalConversionAtVITM_h[16] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o4_h;
        rtb_TmpSignalConversionAtVITM_h[17] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o5_n;
        rtb_TmpSignalConversionAtVITM_h[18] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o6_f;
        rtb_TmpSignalConversionAtVITM_h[19] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o7_e;
        rtb_TmpSignalConversionAtVITM_h[20] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o4;
        rtb_TmpSignalConversionAtVITM_h[21] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o5;
        rtb_TmpSignalConversionAtVITM_h[22] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o6;
        rtb_TmpSignalConversionAtVITM_h[23] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o7;
        rtb_TmpSignalConversionAtVITM_h[24] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o4;
        rtb_TmpSignalConversionAtVITM_h[25] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o5;
        rtb_TmpSignalConversionAtVITM_h[26] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o6;
        rtb_TmpSignalConversionAtVITM_h[27] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o7;
        rtb_TmpSignalConversionAtVITM_h[28] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o4;
        rtb_TmpSignalConversionAtVITM_h[29] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o5;
        rtb_TmpSignalConversionAtVITM_h[30] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o6;
        rtb_TmpSignalConversionAtVITM_h[31] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o7;
        rtb_TmpSignalConversionAtVITM_h[32] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o4;
        rtb_TmpSignalConversionAtVITM_h[33] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o5;
        rtb_TmpSignalConversionAtVITM_h[34] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o6;
        rtb_TmpSignalConversionAtVITM_h[35] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o7;
        rtb_TmpSignalConversionAtVITM_h[36] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o4;
        rtb_TmpSignalConversionAtVITM_h[37] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o5;
        rtb_TmpSignalConversionAtVITM_h[38] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o6;
        rtb_TmpSignalConversionAtVITM_h[39] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o7;

        /* ModelReference: '<S2>/VITM' */
        VITM(&rtb_TmpSignalConversionAtVITMIn[0], (&(BMS_RawPackVoltage)),
             (&(BMS_RawVehSideVoltage)), &BMShil_B.pcx_CANdb_ReceiveMessage_o4_a,
             (FREAL*)&BMShil_RGND, (FREAL*)&BMShil_RGND,
             &rtb_TmpSignalConversionAtVITM_h[0], &rtCP_Constant_Value,
             &BMShil_B.vitm_CellsMaxTemperature,
             &BMShil_B.vitm_CellsMinTemperature,
             &BMShil_B.vitm_CellsAvgTemperature,
             &BMShil_B.vitm_CellsTemperatureLowFault,
             &BMShil_B.vitm_CellsTemperatureHighFault,
             &BMShil_B.vitm_CellsVoltageLowFault,
             &BMShil_B.vitm_CellsVoltageHighFault,
             &BMShil_B.vitm_PackVoltageFault, &BMShil_B.vitm_CellsMinVoltage,
             &BMShil_B.vitm_CellsMaxVoltage, &BMShil_B.vitm_CellsAvgVoltage,
             &BMShil_B.vitm_PackVoltageFiltered, (&(BMS_RawPackCurrent)),
             &BMShil_B.vitm_PackCurrentFault, &BMShil_B.vitm_CoolantDeltaTemp,
             &BMShil_B.vitm_CoolantInletTempFault,
             &BMShil_B.vitm_CoolantOutlletTempFault,
             &BMShil_B.vitm_CoolantInletTFiltered,
             &BMShil_B.vitm_CoolantOutletTFiltered, &BMShil_B.vitm_HVILFault,
             &BMShil_B.VITM_o21[0], &BMShil_B.VITM_o22[0], &BMShil_B.VITM_o23,
             &(BMShil_DWork.VITM_DWORK1.rtdw), &(BMShil_DWork.VITM_DWORK1.rtzce));

        /* Transition: '<S9>:629' */
        /* Event: '<S9>:27' */

        /* ModelReference: '<S2>/SOC' */
        SOC((&(BMS_RawPackCurrent)), &BMShil_B.VITM_o22[0],
            (&(bsc_MainContactorCmd)), (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4,
            &BMShil_B.SOH_o4[0], &BMShil_B.BSC_o3, &BMShil_B.CB_o1[0],
            &BMShil_B.SOC_o1[0], &BMShil_B.soc_pack_customer,
            &BMShil_B.soc_cell_max, &BMShil_B.soc_cell_min, (&(soc_pack_actual)),
            &BMShil_B.soc_rate_high, &BMShil_B.SOC_o7[0],
            &(BMShil_DWork.SOC_DWORK1.rtb), &(BMShil_DWork.SOC_DWORK1.rtdw));

        /* Transition: '<S9>:616' */
        /* Event: '<S9>:28' */

        /* ModelReference: '<S2>/BSC' */
        BSC((&(bsc_VehiclePSR)), &BMShil_B.Delay1, (&(bsc_KeyValue)),
            (&(soc_pack_actual)), &BMShil_B.DataTypeConversion6,
            &BMShil_B.DataTypeConversion1, &BMShil_B.DataTypeConversion2,
            &BMShil_B.vitm_CellsTemperatureLowFault,
            &BMShil_B.vitm_CellsTemperatureHighFault,
            &BMShil_B.vitm_CellsVoltageLowFault,
            &BMShil_B.vitm_CellsVoltageHighFault,
            &BMShil_B.vitm_PackVoltageFault, &BMShil_B.vitm_PackCurrentFault,
            &BMShil_B.vitm_HVILFault, &BMShil_B.CC_o5, &BMShil_B.BSC_o1,
            &BMShil_B.BSC_o2, &BMShil_B.BSC_o3, &BMShil_B.BSC_o4,
            (&(bsc_ReasonToOpen)), &BMShil_B.BSC_o6, &BMShil_B.BSC_o7,
            (&(bsc_FaultType)), &(BMShil_DWork.BSC_DWORK1.rtb),
            &(BMShil_DWork.BSC_DWORK1.rtdw), &(BMShil_DWork.BSC_DWORK1.rtzce));

        /* Transition: '<S9>:632' */
        /* Event: '<S9>:194' */

        /* ModelReference: '<S2>/SOH' */
        soh((&(BMS_RawPackCurrent)), &BMShil_B.VITM_o22[0], &BMShil_B.SOC_o1[0],
            &BMShil_B.VITM_o21[0], &BMShil_B.SOC_o7[0], (&(bsc_MainContactorCmd)),
            (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4, &BMShil_B.CB_o1[0],
            (&(soh_R_index)), &BMShil_B.SOH_o2[0], (&(soh_C_index)),
            &BMShil_B.SOH_o4[0], &BMShil_B.soh_customer_index,
            &(BMShil_DWork.SOH_DWORK1.rtb), &(BMShil_DWork.SOH_DWORK1.rtdw),
            &(BMShil_DWork.SOH_DWORK1.rtzce));

        /* Transition: '<S9>:622' */
        /* Event: '<S9>:29' */

        /* ModelReference: '<S2>/CC' */
        CC(&BMShil_B.BSC_o2, &BMShil_B.BSC_o3,
           &BMShil_B.vitm_PackVoltageFiltered, &BMShil_B.VITM_o23,
           &rtCP_Constant2_Value, &BMShil_B.CC_o1, (&(bsc_MainContactorCmd)),
           (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4, &BMShil_B.CC_o5,
           &(BMShil_DWork.CC_DWORK1.rtdw), &(BMShil_DWork.CC_DWORK1.rtzce));

        /* Transition: '<S9>:631' */
        /* Event: '<S9>:30' */

        /* ModelReference: '<S2>/BMO' */
        BMO((&(BMS_RawPackCurrent)), (&(bsc_KeyValue)), (&(bsc_ChargerValue)),
            &BMShil_B.CC_o4, (&(bsc_MainContactorCmd)), (&(bsc_ChgContactorCmd)),
            &BMShil_B.BSC_o4, &BMShil_B.bmo_mode, &BMShil_B.BMO_o2,
            &BMShil_B.BMO_o3, &(BMShil_DWork.BMO_DWORK1.rtdw));

        /* Transition: '<S9>:623' */
        /* Event: '<S9>:131' */

        /* ModelReference: '<S2>/BTC' */
        BTC(&BMShil_B.VITM_o21[0], &BMShil_B.SOC_o1[0], &BMShil_B.BMO_o2,
            (&(BMSc_airTemperature)), &BMShil_B.BMO_o3, &rtCP_Constant1_Value,
            &rtCP_Constant1_Value, &BMShil_B.vitm_CellsTemperatureHighFault,
            &BMShil_B.vitm_CellsTemperatureLowFault, (&(btc_coolant_flow_pct)),
            &BMShil_B.btc_batt_target_temp, &BMShil_B.btc_batt_actual_temp,
            &BMShil_B.btc_batt_request_status, &BMShil_B.btc_thermal_condition,
            &(BMShil_DWork.BTC_DWORK1.rtdw));

        /* Transition: '<S9>:624' */
        /* Event: '<S9>:235' */

        /* ModelReference: '<S2>/SOP' */
        sop(&BMShil_B.VITM_o21[0], &BMShil_B.SOC_o1[0], &BMShil_B.BMO_o2,
            &BMShil_B.BMO_o3, &BMShil_B.vitm_CellsTemperatureHighFault,
            &BMShil_B.vitm_PackCurrentFault, &BMShil_B.vitm_PackVoltageFault,
            &BMShil_B.DataTypeConversion2, &BMShil_B.SOH_o2[0],
            &BMShil_B.BattPwLimDischarge, &BMShil_B.BattCurrLimDischarge,
            &BMShil_B.BattPwLimCharge, &BMShil_B.BattCurrLimCharge);

        /* Transition: '<S9>:617' */
        /* Event: '<S9>:301' */

        /* ModelReference: '<S2>/CB' */
        CB(&BMShil_B.SOC_o1[0], &BMShil_B.bmo_mode, &BMShil_B.CB_o1[0],
           &BMShil_B.cb_status);
      } else {
        /* Transition: '<S9>:524' */
        /* Exit 'end_chg': '<S9>:512' */
        BMShil_DWork.bitsForTID0.is_c3_BMShil = BMShil_IN_no_power;

        /* Entry 'no_power': '<S9>:45' */
        BMShil_DWork.end_count = 0.0;
      }
      break;

     case BMShil_IN_end_key:
      /* During 'end_key': '<S9>:145' */
      if (BMShil_DWork.end_count < 10.0) {
        /* Transition: '<S9>:155' */
        /* Exit 'end_key': '<S9>:145' */
        BMShil_DWork.end_count++;
        BMShil_DWork.bitsForTID0.is_c3_BMShil = BMShil_IN_end_key;

        /* SignalConversion: '<S2>/VITM' */
        /* Entry Internal 'end_key': '<S9>:145' */
        /* Transition: '<S9>:567' */
        /* Transition: '<S9>:558' */
        /* Event: '<S9>:25' */
        rtb_TmpSignalConversionAtVITMIn[0] = BMS_CellVoltage;
        rtb_TmpSignalConversionAtVITMIn[1] =
          BMShil_B.pcx_CANdb_ReceiveMessage_o5;
        rtb_TmpSignalConversionAtVITMIn[2] =
          BMShil_B.pcx_CANdb_ReceiveMessage_o6;
        rtb_TmpSignalConversionAtVITMIn[3] =
          BMShil_B.pcx_CANdb_ReceiveMessage_o7;
        rtb_TmpSignalConversionAtVITMIn[4] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o4;
        rtb_TmpSignalConversionAtVITMIn[5] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o5;
        rtb_TmpSignalConversionAtVITMIn[6] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o6;
        rtb_TmpSignalConversionAtVITMIn[7] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o7;
        rtb_TmpSignalConversionAtVITMIn[8] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o4;
        rtb_TmpSignalConversionAtVITMIn[9] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o5;
        rtb_TmpSignalConversionAtVITMIn[10] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o6;
        rtb_TmpSignalConversionAtVITMIn[11] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o7;
        rtb_TmpSignalConversionAtVITMIn[12] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o4;
        rtb_TmpSignalConversionAtVITMIn[13] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o5;
        rtb_TmpSignalConversionAtVITMIn[14] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o6;
        rtb_TmpSignalConversionAtVITMIn[15] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o7;
        rtb_TmpSignalConversionAtVITMIn[16] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o4;
        rtb_TmpSignalConversionAtVITMIn[17] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o5;
        rtb_TmpSignalConversionAtVITMIn[18] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o6;
        rtb_TmpSignalConversionAtVITMIn[19] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o7;
        rtb_TmpSignalConversionAtVITMIn[20] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o4_p;
        rtb_TmpSignalConversionAtVITMIn[21] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o5;
        rtb_TmpSignalConversionAtVITMIn[22] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o6;
        rtb_TmpSignalConversionAtVITMIn[23] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o7;
        rtb_TmpSignalConversionAtVITMIn[24] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o4;
        rtb_TmpSignalConversionAtVITMIn[25] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o5;
        rtb_TmpSignalConversionAtVITMIn[26] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o6;
        rtb_TmpSignalConversionAtVITMIn[27] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o7;
        rtb_TmpSignalConversionAtVITMIn[28] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o4;
        rtb_TmpSignalConversionAtVITMIn[29] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o5;
        rtb_TmpSignalConversionAtVITMIn[30] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o6;
        rtb_TmpSignalConversionAtVITMIn[31] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o7;
        rtb_TmpSignalConversionAtVITMIn[32] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o4;
        rtb_TmpSignalConversionAtVITMIn[33] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o5;
        rtb_TmpSignalConversionAtVITMIn[34] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o6;
        rtb_TmpSignalConversionAtVITMIn[35] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o7;
        rtb_TmpSignalConversionAtVITMIn[36] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o4;
        rtb_TmpSignalConversionAtVITMIn[37] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o5;
        rtb_TmpSignalConversionAtVITMIn[38] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o6;
        rtb_TmpSignalConversionAtVITMIn[39] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o7;

        /* SignalConversion: '<S2>/VITM' */
        rtb_TmpSignalConversionAtVITM_h[0] = BMS_CellTemp;
        rtb_TmpSignalConversionAtVITM_h[1] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o5_o;
        rtb_TmpSignalConversionAtVITM_h[2] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o6_e;
        rtb_TmpSignalConversionAtVITM_h[3] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o7_n;
        rtb_TmpSignalConversionAtVITM_h[4] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o4_e;
        rtb_TmpSignalConversionAtVITM_h[5] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o5_b;
        rtb_TmpSignalConversionAtVITM_h[6] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o6_k;
        rtb_TmpSignalConversionAtVITM_h[7] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o7_p;
        rtb_TmpSignalConversionAtVITM_h[8] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o4_c;
        rtb_TmpSignalConversionAtVITM_h[9] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o5_e;
        rtb_TmpSignalConversionAtVITM_h[10] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o6_p;
        rtb_TmpSignalConversionAtVITM_h[11] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o7_n;
        rtb_TmpSignalConversionAtVITM_h[12] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o4_c;
        rtb_TmpSignalConversionAtVITM_h[13] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o5_e;
        rtb_TmpSignalConversionAtVITM_h[14] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o6_j;
        rtb_TmpSignalConversionAtVITM_h[15] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o7_l;
        rtb_TmpSignalConversionAtVITM_h[16] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o4_h;
        rtb_TmpSignalConversionAtVITM_h[17] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o5_n;
        rtb_TmpSignalConversionAtVITM_h[18] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o6_f;
        rtb_TmpSignalConversionAtVITM_h[19] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o7_e;
        rtb_TmpSignalConversionAtVITM_h[20] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o4;
        rtb_TmpSignalConversionAtVITM_h[21] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o5;
        rtb_TmpSignalConversionAtVITM_h[22] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o6;
        rtb_TmpSignalConversionAtVITM_h[23] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o7;
        rtb_TmpSignalConversionAtVITM_h[24] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o4;
        rtb_TmpSignalConversionAtVITM_h[25] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o5;
        rtb_TmpSignalConversionAtVITM_h[26] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o6;
        rtb_TmpSignalConversionAtVITM_h[27] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o7;
        rtb_TmpSignalConversionAtVITM_h[28] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o4;
        rtb_TmpSignalConversionAtVITM_h[29] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o5;
        rtb_TmpSignalConversionAtVITM_h[30] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o6;
        rtb_TmpSignalConversionAtVITM_h[31] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o7;
        rtb_TmpSignalConversionAtVITM_h[32] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o4;
        rtb_TmpSignalConversionAtVITM_h[33] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o5;
        rtb_TmpSignalConversionAtVITM_h[34] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o6;
        rtb_TmpSignalConversionAtVITM_h[35] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o7;
        rtb_TmpSignalConversionAtVITM_h[36] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o4;
        rtb_TmpSignalConversionAtVITM_h[37] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o5;
        rtb_TmpSignalConversionAtVITM_h[38] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o6;
        rtb_TmpSignalConversionAtVITM_h[39] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o7;

        /* ModelReference: '<S2>/VITM' */
        VITM(&rtb_TmpSignalConversionAtVITMIn[0], (&(BMS_RawPackVoltage)),
             (&(BMS_RawVehSideVoltage)), &BMShil_B.pcx_CANdb_ReceiveMessage_o4_a,
             (FREAL*)&BMShil_RGND, (FREAL*)&BMShil_RGND,
             &rtb_TmpSignalConversionAtVITM_h[0], &rtCP_Constant_Value,
             &BMShil_B.vitm_CellsMaxTemperature,
             &BMShil_B.vitm_CellsMinTemperature,
             &BMShil_B.vitm_CellsAvgTemperature,
             &BMShil_B.vitm_CellsTemperatureLowFault,
             &BMShil_B.vitm_CellsTemperatureHighFault,
             &BMShil_B.vitm_CellsVoltageLowFault,
             &BMShil_B.vitm_CellsVoltageHighFault,
             &BMShil_B.vitm_PackVoltageFault, &BMShil_B.vitm_CellsMinVoltage,
             &BMShil_B.vitm_CellsMaxVoltage, &BMShil_B.vitm_CellsAvgVoltage,
             &BMShil_B.vitm_PackVoltageFiltered, (&(BMS_RawPackCurrent)),
             &BMShil_B.vitm_PackCurrentFault, &BMShil_B.vitm_CoolantDeltaTemp,
             &BMShil_B.vitm_CoolantInletTempFault,
             &BMShil_B.vitm_CoolantOutlletTempFault,
             &BMShil_B.vitm_CoolantInletTFiltered,
             &BMShil_B.vitm_CoolantOutletTFiltered, &BMShil_B.vitm_HVILFault,
             &BMShil_B.VITM_o21[0], &BMShil_B.VITM_o22[0], &BMShil_B.VITM_o23,
             &(BMShil_DWork.VITM_DWORK1.rtdw), &(BMShil_DWork.VITM_DWORK1.rtzce));

        /* Transition: '<S9>:566' */
        /* Event: '<S9>:27' */

        /* ModelReference: '<S2>/SOC' */
        SOC((&(BMS_RawPackCurrent)), &BMShil_B.VITM_o22[0],
            (&(bsc_MainContactorCmd)), (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4,
            &BMShil_B.SOH_o4[0], &BMShil_B.BSC_o3, &BMShil_B.CB_o1[0],
            &BMShil_B.SOC_o1[0], &BMShil_B.soc_pack_customer,
            &BMShil_B.soc_cell_max, &BMShil_B.soc_cell_min, (&(soc_pack_actual)),
            &BMShil_B.soc_rate_high, &BMShil_B.SOC_o7[0],
            &(BMShil_DWork.SOC_DWORK1.rtb), &(BMShil_DWork.SOC_DWORK1.rtdw));

        /* Transition: '<S9>:553' */
        /* Event: '<S9>:28' */

        /* ModelReference: '<S2>/BSC' */
        BSC((&(bsc_VehiclePSR)), &BMShil_B.Delay1, (&(bsc_KeyValue)),
            (&(soc_pack_actual)), &BMShil_B.DataTypeConversion6,
            &BMShil_B.DataTypeConversion1, &BMShil_B.DataTypeConversion2,
            &BMShil_B.vitm_CellsTemperatureLowFault,
            &BMShil_B.vitm_CellsTemperatureHighFault,
            &BMShil_B.vitm_CellsVoltageLowFault,
            &BMShil_B.vitm_CellsVoltageHighFault,
            &BMShil_B.vitm_PackVoltageFault, &BMShil_B.vitm_PackCurrentFault,
            &BMShil_B.vitm_HVILFault, &BMShil_B.CC_o5, &BMShil_B.BSC_o1,
            &BMShil_B.BSC_o2, &BMShil_B.BSC_o3, &BMShil_B.BSC_o4,
            (&(bsc_ReasonToOpen)), &BMShil_B.BSC_o6, &BMShil_B.BSC_o7,
            (&(bsc_FaultType)), &(BMShil_DWork.BSC_DWORK1.rtb),
            &(BMShil_DWork.BSC_DWORK1.rtdw), &(BMShil_DWork.BSC_DWORK1.rtzce));

        /* Transition: '<S9>:569' */
        /* Event: '<S9>:194' */

        /* ModelReference: '<S2>/SOH' */
        soh((&(BMS_RawPackCurrent)), &BMShil_B.VITM_o22[0], &BMShil_B.SOC_o1[0],
            &BMShil_B.VITM_o21[0], &BMShil_B.SOC_o7[0], (&(bsc_MainContactorCmd)),
            (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4, &BMShil_B.CB_o1[0],
            (&(soh_R_index)), &BMShil_B.SOH_o2[0], (&(soh_C_index)),
            &BMShil_B.SOH_o4[0], &BMShil_B.soh_customer_index,
            &(BMShil_DWork.SOH_DWORK1.rtb), &(BMShil_DWork.SOH_DWORK1.rtdw),
            &(BMShil_DWork.SOH_DWORK1.rtzce));

        /* Transition: '<S9>:559' */
        /* Event: '<S9>:29' */

        /* ModelReference: '<S2>/CC' */
        CC(&BMShil_B.BSC_o2, &BMShil_B.BSC_o3,
           &BMShil_B.vitm_PackVoltageFiltered, &BMShil_B.VITM_o23,
           &rtCP_Constant2_Value, &BMShil_B.CC_o1, (&(bsc_MainContactorCmd)),
           (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4, &BMShil_B.CC_o5,
           &(BMShil_DWork.CC_DWORK1.rtdw), &(BMShil_DWork.CC_DWORK1.rtzce));

        /* Transition: '<S9>:568' */
        /* Event: '<S9>:30' */

        /* ModelReference: '<S2>/BMO' */
        BMO((&(BMS_RawPackCurrent)), (&(bsc_KeyValue)), (&(bsc_ChargerValue)),
            &BMShil_B.CC_o4, (&(bsc_MainContactorCmd)), (&(bsc_ChgContactorCmd)),
            &BMShil_B.BSC_o4, &BMShil_B.bmo_mode, &BMShil_B.BMO_o2,
            &BMShil_B.BMO_o3, &(BMShil_DWork.BMO_DWORK1.rtdw));

        /* Transition: '<S9>:560' */
        /* Event: '<S9>:131' */

        /* ModelReference: '<S2>/BTC' */
        BTC(&BMShil_B.VITM_o21[0], &BMShil_B.SOC_o1[0], &BMShil_B.BMO_o2,
            (&(BMSc_airTemperature)), &BMShil_B.BMO_o3, &rtCP_Constant1_Value,
            &rtCP_Constant1_Value, &BMShil_B.vitm_CellsTemperatureHighFault,
            &BMShil_B.vitm_CellsTemperatureLowFault, (&(btc_coolant_flow_pct)),
            &BMShil_B.btc_batt_target_temp, &BMShil_B.btc_batt_actual_temp,
            &BMShil_B.btc_batt_request_status, &BMShil_B.btc_thermal_condition,
            &(BMShil_DWork.BTC_DWORK1.rtdw));

        /* Transition: '<S9>:561' */
        /* Event: '<S9>:235' */

        /* ModelReference: '<S2>/SOP' */
        sop(&BMShil_B.VITM_o21[0], &BMShil_B.SOC_o1[0], &BMShil_B.BMO_o2,
            &BMShil_B.BMO_o3, &BMShil_B.vitm_CellsTemperatureHighFault,
            &BMShil_B.vitm_PackCurrentFault, &BMShil_B.vitm_PackVoltageFault,
            &BMShil_B.DataTypeConversion2, &BMShil_B.SOH_o2[0],
            &BMShil_B.BattPwLimDischarge, &BMShil_B.BattCurrLimDischarge,
            &BMShil_B.BattPwLimCharge, &BMShil_B.BattCurrLimCharge);

        /* Transition: '<S9>:554' */
        /* Event: '<S9>:301' */

        /* ModelReference: '<S2>/CB' */
        CB(&BMShil_B.SOC_o1[0], &BMShil_B.bmo_mode, &BMShil_B.CB_o1[0],
           &BMShil_B.cb_status);
      } else {
        /* Transition: '<S9>:156' */
        /* Exit 'end_key': '<S9>:145' */
        BMShil_DWork.bitsForTID0.is_c3_BMShil = BMShil_IN_no_power;

        /* Entry 'no_power': '<S9>:45' */
        BMShil_DWork.end_count = 0.0;
      }
      break;

     case BMShil_IN_init_chg:
      /* During 'init_chg': '<S9>:457' */
      /* Transition: '<S9>:521' */
      BMShil_DWork.bitsForTID0.is_c3_BMShil = BMShil_IN_main_chg;

      /* SignalConversion: '<S2>/VITM' */
      /* Entry Internal 'main_chg': '<S9>:461' */
      /* Transition: '<S9>:609' */
      /* Transition: '<S9>:600' */
      /* Event: '<S9>:25' */
      rtb_TmpSignalConversionAtVITMIn[0] = BMS_CellVoltage;
      rtb_TmpSignalConversionAtVITMIn[1] = BMShil_B.pcx_CANdb_ReceiveMessage_o5;
      rtb_TmpSignalConversionAtVITMIn[2] = BMShil_B.pcx_CANdb_ReceiveMessage_o6;
      rtb_TmpSignalConversionAtVITMIn[3] = BMShil_B.pcx_CANdb_ReceiveMessage_o7;
      rtb_TmpSignalConversionAtVITMIn[4] = BMShil_B.pcx_CANdb_ReceiveMessage1_o4;
      rtb_TmpSignalConversionAtVITMIn[5] = BMShil_B.pcx_CANdb_ReceiveMessage1_o5;
      rtb_TmpSignalConversionAtVITMIn[6] = BMShil_B.pcx_CANdb_ReceiveMessage1_o6;
      rtb_TmpSignalConversionAtVITMIn[7] = BMShil_B.pcx_CANdb_ReceiveMessage1_o7;
      rtb_TmpSignalConversionAtVITMIn[8] = BMShil_B.pcx_CANdb_ReceiveMessage2_o4;
      rtb_TmpSignalConversionAtVITMIn[9] = BMShil_B.pcx_CANdb_ReceiveMessage2_o5;
      rtb_TmpSignalConversionAtVITMIn[10] =
        BMShil_B.pcx_CANdb_ReceiveMessage2_o6;
      rtb_TmpSignalConversionAtVITMIn[11] =
        BMShil_B.pcx_CANdb_ReceiveMessage2_o7;
      rtb_TmpSignalConversionAtVITMIn[12] =
        BMShil_B.pcx_CANdb_ReceiveMessage3_o4;
      rtb_TmpSignalConversionAtVITMIn[13] =
        BMShil_B.pcx_CANdb_ReceiveMessage3_o5;
      rtb_TmpSignalConversionAtVITMIn[14] =
        BMShil_B.pcx_CANdb_ReceiveMessage3_o6;
      rtb_TmpSignalConversionAtVITMIn[15] =
        BMShil_B.pcx_CANdb_ReceiveMessage3_o7;
      rtb_TmpSignalConversionAtVITMIn[16] =
        BMShil_B.pcx_CANdb_ReceiveMessage4_o4;
      rtb_TmpSignalConversionAtVITMIn[17] =
        BMShil_B.pcx_CANdb_ReceiveMessage4_o5;
      rtb_TmpSignalConversionAtVITMIn[18] =
        BMShil_B.pcx_CANdb_ReceiveMessage4_o6;
      rtb_TmpSignalConversionAtVITMIn[19] =
        BMShil_B.pcx_CANdb_ReceiveMessage4_o7;
      rtb_TmpSignalConversionAtVITMIn[20] =
        BMShil_B.pcx_CANdb_ReceiveMessage5_o4_p;
      rtb_TmpSignalConversionAtVITMIn[21] =
        BMShil_B.pcx_CANdb_ReceiveMessage5_o5;
      rtb_TmpSignalConversionAtVITMIn[22] =
        BMShil_B.pcx_CANdb_ReceiveMessage5_o6;
      rtb_TmpSignalConversionAtVITMIn[23] =
        BMShil_B.pcx_CANdb_ReceiveMessage5_o7;
      rtb_TmpSignalConversionAtVITMIn[24] =
        BMShil_B.pcx_CANdb_ReceiveMessage6_o4;
      rtb_TmpSignalConversionAtVITMIn[25] =
        BMShil_B.pcx_CANdb_ReceiveMessage6_o5;
      rtb_TmpSignalConversionAtVITMIn[26] =
        BMShil_B.pcx_CANdb_ReceiveMessage6_o6;
      rtb_TmpSignalConversionAtVITMIn[27] =
        BMShil_B.pcx_CANdb_ReceiveMessage6_o7;
      rtb_TmpSignalConversionAtVITMIn[28] =
        BMShil_B.pcx_CANdb_ReceiveMessage7_o4;
      rtb_TmpSignalConversionAtVITMIn[29] =
        BMShil_B.pcx_CANdb_ReceiveMessage7_o5;
      rtb_TmpSignalConversionAtVITMIn[30] =
        BMShil_B.pcx_CANdb_ReceiveMessage7_o6;
      rtb_TmpSignalConversionAtVITMIn[31] =
        BMShil_B.pcx_CANdb_ReceiveMessage7_o7;
      rtb_TmpSignalConversionAtVITMIn[32] =
        BMShil_B.pcx_CANdb_ReceiveMessage8_o4;
      rtb_TmpSignalConversionAtVITMIn[33] =
        BMShil_B.pcx_CANdb_ReceiveMessage8_o5;
      rtb_TmpSignalConversionAtVITMIn[34] =
        BMShil_B.pcx_CANdb_ReceiveMessage8_o6;
      rtb_TmpSignalConversionAtVITMIn[35] =
        BMShil_B.pcx_CANdb_ReceiveMessage8_o7;
      rtb_TmpSignalConversionAtVITMIn[36] =
        BMShil_B.pcx_CANdb_ReceiveMessage9_o4;
      rtb_TmpSignalConversionAtVITMIn[37] =
        BMShil_B.pcx_CANdb_ReceiveMessage9_o5;
      rtb_TmpSignalConversionAtVITMIn[38] =
        BMShil_B.pcx_CANdb_ReceiveMessage9_o6;
      rtb_TmpSignalConversionAtVITMIn[39] =
        BMShil_B.pcx_CANdb_ReceiveMessage9_o7;

      /* SignalConversion: '<S2>/VITM' */
      rtb_TmpSignalConversionAtVITM_h[0] = BMS_CellTemp;
      rtb_TmpSignalConversionAtVITM_h[1] =
        BMShil_B.pcx_CANdb_ReceiveMessage5_o5_o;
      rtb_TmpSignalConversionAtVITM_h[2] =
        BMShil_B.pcx_CANdb_ReceiveMessage5_o6_e;
      rtb_TmpSignalConversionAtVITM_h[3] =
        BMShil_B.pcx_CANdb_ReceiveMessage5_o7_n;
      rtb_TmpSignalConversionAtVITM_h[4] =
        BMShil_B.pcx_CANdb_ReceiveMessage6_o4_e;
      rtb_TmpSignalConversionAtVITM_h[5] =
        BMShil_B.pcx_CANdb_ReceiveMessage6_o5_b;
      rtb_TmpSignalConversionAtVITM_h[6] =
        BMShil_B.pcx_CANdb_ReceiveMessage6_o6_k;
      rtb_TmpSignalConversionAtVITM_h[7] =
        BMShil_B.pcx_CANdb_ReceiveMessage6_o7_p;
      rtb_TmpSignalConversionAtVITM_h[8] =
        BMShil_B.pcx_CANdb_ReceiveMessage7_o4_c;
      rtb_TmpSignalConversionAtVITM_h[9] =
        BMShil_B.pcx_CANdb_ReceiveMessage7_o5_e;
      rtb_TmpSignalConversionAtVITM_h[10] =
        BMShil_B.pcx_CANdb_ReceiveMessage7_o6_p;
      rtb_TmpSignalConversionAtVITM_h[11] =
        BMShil_B.pcx_CANdb_ReceiveMessage7_o7_n;
      rtb_TmpSignalConversionAtVITM_h[12] =
        BMShil_B.pcx_CANdb_ReceiveMessage8_o4_c;
      rtb_TmpSignalConversionAtVITM_h[13] =
        BMShil_B.pcx_CANdb_ReceiveMessage8_o5_e;
      rtb_TmpSignalConversionAtVITM_h[14] =
        BMShil_B.pcx_CANdb_ReceiveMessage8_o6_j;
      rtb_TmpSignalConversionAtVITM_h[15] =
        BMShil_B.pcx_CANdb_ReceiveMessage8_o7_l;
      rtb_TmpSignalConversionAtVITM_h[16] =
        BMShil_B.pcx_CANdb_ReceiveMessage9_o4_h;
      rtb_TmpSignalConversionAtVITM_h[17] =
        BMShil_B.pcx_CANdb_ReceiveMessage9_o5_n;
      rtb_TmpSignalConversionAtVITM_h[18] =
        BMShil_B.pcx_CANdb_ReceiveMessage9_o6_f;
      rtb_TmpSignalConversionAtVITM_h[19] =
        BMShil_B.pcx_CANdb_ReceiveMessage9_o7_e;
      rtb_TmpSignalConversionAtVITM_h[20] =
        BMShil_B.pcx_CANdb_ReceiveMessage10_o4;
      rtb_TmpSignalConversionAtVITM_h[21] =
        BMShil_B.pcx_CANdb_ReceiveMessage10_o5;
      rtb_TmpSignalConversionAtVITM_h[22] =
        BMShil_B.pcx_CANdb_ReceiveMessage10_o6;
      rtb_TmpSignalConversionAtVITM_h[23] =
        BMShil_B.pcx_CANdb_ReceiveMessage10_o7;
      rtb_TmpSignalConversionAtVITM_h[24] =
        BMShil_B.pcx_CANdb_ReceiveMessage11_o4;
      rtb_TmpSignalConversionAtVITM_h[25] =
        BMShil_B.pcx_CANdb_ReceiveMessage11_o5;
      rtb_TmpSignalConversionAtVITM_h[26] =
        BMShil_B.pcx_CANdb_ReceiveMessage11_o6;
      rtb_TmpSignalConversionAtVITM_h[27] =
        BMShil_B.pcx_CANdb_ReceiveMessage11_o7;
      rtb_TmpSignalConversionAtVITM_h[28] =
        BMShil_B.pcx_CANdb_ReceiveMessage12_o4;
      rtb_TmpSignalConversionAtVITM_h[29] =
        BMShil_B.pcx_CANdb_ReceiveMessage12_o5;
      rtb_TmpSignalConversionAtVITM_h[30] =
        BMShil_B.pcx_CANdb_ReceiveMessage12_o6;
      rtb_TmpSignalConversionAtVITM_h[31] =
        BMShil_B.pcx_CANdb_ReceiveMessage12_o7;
      rtb_TmpSignalConversionAtVITM_h[32] =
        BMShil_B.pcx_CANdb_ReceiveMessage13_o4;
      rtb_TmpSignalConversionAtVITM_h[33] =
        BMShil_B.pcx_CANdb_ReceiveMessage13_o5;
      rtb_TmpSignalConversionAtVITM_h[34] =
        BMShil_B.pcx_CANdb_ReceiveMessage13_o6;
      rtb_TmpSignalConversionAtVITM_h[35] =
        BMShil_B.pcx_CANdb_ReceiveMessage13_o7;
      rtb_TmpSignalConversionAtVITM_h[36] =
        BMShil_B.pcx_CANdb_ReceiveMessage14_o4;
      rtb_TmpSignalConversionAtVITM_h[37] =
        BMShil_B.pcx_CANdb_ReceiveMessage14_o5;
      rtb_TmpSignalConversionAtVITM_h[38] =
        BMShil_B.pcx_CANdb_ReceiveMessage14_o6;
      rtb_TmpSignalConversionAtVITM_h[39] =
        BMShil_B.pcx_CANdb_ReceiveMessage14_o7;

      /* ModelReference: '<S2>/VITM' */
      VITM(&rtb_TmpSignalConversionAtVITMIn[0], (&(BMS_RawPackVoltage)),
           (&(BMS_RawVehSideVoltage)), &BMShil_B.pcx_CANdb_ReceiveMessage_o4_a,
           (FREAL*)&BMShil_RGND, (FREAL*)&BMShil_RGND,
           &rtb_TmpSignalConversionAtVITM_h[0], &rtCP_Constant_Value,
           &BMShil_B.vitm_CellsMaxTemperature,
           &BMShil_B.vitm_CellsMinTemperature,
           &BMShil_B.vitm_CellsAvgTemperature,
           &BMShil_B.vitm_CellsTemperatureLowFault,
           &BMShil_B.vitm_CellsTemperatureHighFault,
           &BMShil_B.vitm_CellsVoltageLowFault,
           &BMShil_B.vitm_CellsVoltageHighFault, &BMShil_B.vitm_PackVoltageFault,
           &BMShil_B.vitm_CellsMinVoltage, &BMShil_B.vitm_CellsMaxVoltage,
           &BMShil_B.vitm_CellsAvgVoltage, &BMShil_B.vitm_PackVoltageFiltered, (
            &(BMS_RawPackCurrent)), &BMShil_B.vitm_PackCurrentFault,
           &BMShil_B.vitm_CoolantDeltaTemp, &BMShil_B.vitm_CoolantInletTempFault,
           &BMShil_B.vitm_CoolantOutlletTempFault,
           &BMShil_B.vitm_CoolantInletTFiltered,
           &BMShil_B.vitm_CoolantOutletTFiltered, &BMShil_B.vitm_HVILFault,
           &BMShil_B.VITM_o21[0], &BMShil_B.VITM_o22[0], &BMShil_B.VITM_o23,
           &(BMShil_DWork.VITM_DWORK1.rtdw), &(BMShil_DWork.VITM_DWORK1.rtzce));

      /* Transition: '<S9>:608' */
      /* Event: '<S9>:27' */

      /* ModelReference: '<S2>/SOC' */
      SOC((&(BMS_RawPackCurrent)), &BMShil_B.VITM_o22[0],
          (&(bsc_MainContactorCmd)), (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4,
          &BMShil_B.SOH_o4[0], &BMShil_B.BSC_o3, &BMShil_B.CB_o1[0],
          &BMShil_B.SOC_o1[0], &BMShil_B.soc_pack_customer,
          &BMShil_B.soc_cell_max, &BMShil_B.soc_cell_min, (&(soc_pack_actual)),
          &BMShil_B.soc_rate_high, &BMShil_B.SOC_o7[0],
          &(BMShil_DWork.SOC_DWORK1.rtb), &(BMShil_DWork.SOC_DWORK1.rtdw));

      /* Transition: '<S9>:595' */
      /* Event: '<S9>:28' */

      /* ModelReference: '<S2>/BSC' */
      BSC((&(bsc_VehiclePSR)), &BMShil_B.Delay1, (&(bsc_KeyValue)),
          (&(soc_pack_actual)), &BMShil_B.DataTypeConversion6,
          &BMShil_B.DataTypeConversion1, &BMShil_B.DataTypeConversion2,
          &BMShil_B.vitm_CellsTemperatureLowFault,
          &BMShil_B.vitm_CellsTemperatureHighFault,
          &BMShil_B.vitm_CellsVoltageLowFault,
          &BMShil_B.vitm_CellsVoltageHighFault, &BMShil_B.vitm_PackVoltageFault,
          &BMShil_B.vitm_PackCurrentFault, &BMShil_B.vitm_HVILFault,
          &BMShil_B.CC_o5, &BMShil_B.BSC_o1, &BMShil_B.BSC_o2, &BMShil_B.BSC_o3,
          &BMShil_B.BSC_o4, (&(bsc_ReasonToOpen)), &BMShil_B.BSC_o6,
          &BMShil_B.BSC_o7, (&(bsc_FaultType)), &(BMShil_DWork.BSC_DWORK1.rtb),
          &(BMShil_DWork.BSC_DWORK1.rtdw), &(BMShil_DWork.BSC_DWORK1.rtzce));

      /* Transition: '<S9>:611' */
      /* Event: '<S9>:194' */

      /* ModelReference: '<S2>/SOH' */
      soh((&(BMS_RawPackCurrent)), &BMShil_B.VITM_o22[0], &BMShil_B.SOC_o1[0],
          &BMShil_B.VITM_o21[0], &BMShil_B.SOC_o7[0], (&(bsc_MainContactorCmd)),
          (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4, &BMShil_B.CB_o1[0],
          (&(soh_R_index)), &BMShil_B.SOH_o2[0], (&(soh_C_index)),
          &BMShil_B.SOH_o4[0], &BMShil_B.soh_customer_index,
          &(BMShil_DWork.SOH_DWORK1.rtb), &(BMShil_DWork.SOH_DWORK1.rtdw),
          &(BMShil_DWork.SOH_DWORK1.rtzce));

      /* Transition: '<S9>:601' */
      /* Event: '<S9>:29' */

      /* ModelReference: '<S2>/CC' */
      CC(&BMShil_B.BSC_o2, &BMShil_B.BSC_o3, &BMShil_B.vitm_PackVoltageFiltered,
         &BMShil_B.VITM_o23, &rtCP_Constant2_Value, &BMShil_B.CC_o1,
         (&(bsc_MainContactorCmd)), (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4,
         &BMShil_B.CC_o5, &(BMShil_DWork.CC_DWORK1.rtdw),
         &(BMShil_DWork.CC_DWORK1.rtzce));

      /* Transition: '<S9>:610' */
      /* Event: '<S9>:30' */

      /* ModelReference: '<S2>/BMO' */
      BMO((&(BMS_RawPackCurrent)), (&(bsc_KeyValue)), (&(bsc_ChargerValue)),
          &BMShil_B.CC_o4, (&(bsc_MainContactorCmd)), (&(bsc_ChgContactorCmd)),
          &BMShil_B.BSC_o4, &BMShil_B.bmo_mode, &BMShil_B.BMO_o2,
          &BMShil_B.BMO_o3, &(BMShil_DWork.BMO_DWORK1.rtdw));

      /* Transition: '<S9>:602' */
      /* Event: '<S9>:131' */

      /* ModelReference: '<S2>/BTC' */
      BTC(&BMShil_B.VITM_o21[0], &BMShil_B.SOC_o1[0], &BMShil_B.BMO_o2,
          (&(BMSc_airTemperature)), &BMShil_B.BMO_o3, &rtCP_Constant1_Value,
          &rtCP_Constant1_Value, &BMShil_B.vitm_CellsTemperatureHighFault,
          &BMShil_B.vitm_CellsTemperatureLowFault, (&(btc_coolant_flow_pct)),
          &BMShil_B.btc_batt_target_temp, &BMShil_B.btc_batt_actual_temp,
          &BMShil_B.btc_batt_request_status, &BMShil_B.btc_thermal_condition,
          &(BMShil_DWork.BTC_DWORK1.rtdw));

      /* Transition: '<S9>:603' */
      /* Event: '<S9>:235' */

      /* ModelReference: '<S2>/SOP' */
      sop(&BMShil_B.VITM_o21[0], &BMShil_B.SOC_o1[0], &BMShil_B.BMO_o2,
          &BMShil_B.BMO_o3, &BMShil_B.vitm_CellsTemperatureHighFault,
          &BMShil_B.vitm_PackCurrentFault, &BMShil_B.vitm_PackVoltageFault,
          &BMShil_B.DataTypeConversion2, &BMShil_B.SOH_o2[0],
          &BMShil_B.BattPwLimDischarge, &BMShil_B.BattCurrLimDischarge,
          &BMShil_B.BattPwLimCharge, &BMShil_B.BattCurrLimCharge);

      /* Transition: '<S9>:596' */
      /* Event: '<S9>:301' */

      /* ModelReference: '<S2>/CB' */
      CB(&BMShil_B.SOC_o1[0], &BMShil_B.bmo_mode, &BMShil_B.CB_o1[0],
         &BMShil_B.cb_status);
      break;

     case BMShil_IN_init_key:
      /* During 'init_key': '<S9>:1' */
      /* Transition: '<S9>:44' */
      BMShil_DWork.bitsForTID0.is_c3_BMShil = BMShil_IN_main_key;

      /* SignalConversion: '<S2>/VITM' */
      /* Entry Internal 'main_key': '<S9>:4' */
      /* Transition: '<S9>:546' */
      /* Transition: '<S9>:537' */
      /* Event: '<S9>:25' */
      rtb_TmpSignalConversionAtVITMIn[0] = BMS_CellVoltage;
      rtb_TmpSignalConversionAtVITMIn[1] = BMShil_B.pcx_CANdb_ReceiveMessage_o5;
      rtb_TmpSignalConversionAtVITMIn[2] = BMShil_B.pcx_CANdb_ReceiveMessage_o6;
      rtb_TmpSignalConversionAtVITMIn[3] = BMShil_B.pcx_CANdb_ReceiveMessage_o7;
      rtb_TmpSignalConversionAtVITMIn[4] = BMShil_B.pcx_CANdb_ReceiveMessage1_o4;
      rtb_TmpSignalConversionAtVITMIn[5] = BMShil_B.pcx_CANdb_ReceiveMessage1_o5;
      rtb_TmpSignalConversionAtVITMIn[6] = BMShil_B.pcx_CANdb_ReceiveMessage1_o6;
      rtb_TmpSignalConversionAtVITMIn[7] = BMShil_B.pcx_CANdb_ReceiveMessage1_o7;
      rtb_TmpSignalConversionAtVITMIn[8] = BMShil_B.pcx_CANdb_ReceiveMessage2_o4;
      rtb_TmpSignalConversionAtVITMIn[9] = BMShil_B.pcx_CANdb_ReceiveMessage2_o5;
      rtb_TmpSignalConversionAtVITMIn[10] =
        BMShil_B.pcx_CANdb_ReceiveMessage2_o6;
      rtb_TmpSignalConversionAtVITMIn[11] =
        BMShil_B.pcx_CANdb_ReceiveMessage2_o7;
      rtb_TmpSignalConversionAtVITMIn[12] =
        BMShil_B.pcx_CANdb_ReceiveMessage3_o4;
      rtb_TmpSignalConversionAtVITMIn[13] =
        BMShil_B.pcx_CANdb_ReceiveMessage3_o5;
      rtb_TmpSignalConversionAtVITMIn[14] =
        BMShil_B.pcx_CANdb_ReceiveMessage3_o6;
      rtb_TmpSignalConversionAtVITMIn[15] =
        BMShil_B.pcx_CANdb_ReceiveMessage3_o7;
      rtb_TmpSignalConversionAtVITMIn[16] =
        BMShil_B.pcx_CANdb_ReceiveMessage4_o4;
      rtb_TmpSignalConversionAtVITMIn[17] =
        BMShil_B.pcx_CANdb_ReceiveMessage4_o5;
      rtb_TmpSignalConversionAtVITMIn[18] =
        BMShil_B.pcx_CANdb_ReceiveMessage4_o6;
      rtb_TmpSignalConversionAtVITMIn[19] =
        BMShil_B.pcx_CANdb_ReceiveMessage4_o7;
      rtb_TmpSignalConversionAtVITMIn[20] =
        BMShil_B.pcx_CANdb_ReceiveMessage5_o4_p;
      rtb_TmpSignalConversionAtVITMIn[21] =
        BMShil_B.pcx_CANdb_ReceiveMessage5_o5;
      rtb_TmpSignalConversionAtVITMIn[22] =
        BMShil_B.pcx_CANdb_ReceiveMessage5_o6;
      rtb_TmpSignalConversionAtVITMIn[23] =
        BMShil_B.pcx_CANdb_ReceiveMessage5_o7;
      rtb_TmpSignalConversionAtVITMIn[24] =
        BMShil_B.pcx_CANdb_ReceiveMessage6_o4;
      rtb_TmpSignalConversionAtVITMIn[25] =
        BMShil_B.pcx_CANdb_ReceiveMessage6_o5;
      rtb_TmpSignalConversionAtVITMIn[26] =
        BMShil_B.pcx_CANdb_ReceiveMessage6_o6;
      rtb_TmpSignalConversionAtVITMIn[27] =
        BMShil_B.pcx_CANdb_ReceiveMessage6_o7;
      rtb_TmpSignalConversionAtVITMIn[28] =
        BMShil_B.pcx_CANdb_ReceiveMessage7_o4;
      rtb_TmpSignalConversionAtVITMIn[29] =
        BMShil_B.pcx_CANdb_ReceiveMessage7_o5;
      rtb_TmpSignalConversionAtVITMIn[30] =
        BMShil_B.pcx_CANdb_ReceiveMessage7_o6;
      rtb_TmpSignalConversionAtVITMIn[31] =
        BMShil_B.pcx_CANdb_ReceiveMessage7_o7;
      rtb_TmpSignalConversionAtVITMIn[32] =
        BMShil_B.pcx_CANdb_ReceiveMessage8_o4;
      rtb_TmpSignalConversionAtVITMIn[33] =
        BMShil_B.pcx_CANdb_ReceiveMessage8_o5;
      rtb_TmpSignalConversionAtVITMIn[34] =
        BMShil_B.pcx_CANdb_ReceiveMessage8_o6;
      rtb_TmpSignalConversionAtVITMIn[35] =
        BMShil_B.pcx_CANdb_ReceiveMessage8_o7;
      rtb_TmpSignalConversionAtVITMIn[36] =
        BMShil_B.pcx_CANdb_ReceiveMessage9_o4;
      rtb_TmpSignalConversionAtVITMIn[37] =
        BMShil_B.pcx_CANdb_ReceiveMessage9_o5;
      rtb_TmpSignalConversionAtVITMIn[38] =
        BMShil_B.pcx_CANdb_ReceiveMessage9_o6;
      rtb_TmpSignalConversionAtVITMIn[39] =
        BMShil_B.pcx_CANdb_ReceiveMessage9_o7;

      /* SignalConversion: '<S2>/VITM' */
      rtb_TmpSignalConversionAtVITM_h[0] = BMS_CellTemp;
      rtb_TmpSignalConversionAtVITM_h[1] =
        BMShil_B.pcx_CANdb_ReceiveMessage5_o5_o;
      rtb_TmpSignalConversionAtVITM_h[2] =
        BMShil_B.pcx_CANdb_ReceiveMessage5_o6_e;
      rtb_TmpSignalConversionAtVITM_h[3] =
        BMShil_B.pcx_CANdb_ReceiveMessage5_o7_n;
      rtb_TmpSignalConversionAtVITM_h[4] =
        BMShil_B.pcx_CANdb_ReceiveMessage6_o4_e;
      rtb_TmpSignalConversionAtVITM_h[5] =
        BMShil_B.pcx_CANdb_ReceiveMessage6_o5_b;
      rtb_TmpSignalConversionAtVITM_h[6] =
        BMShil_B.pcx_CANdb_ReceiveMessage6_o6_k;
      rtb_TmpSignalConversionAtVITM_h[7] =
        BMShil_B.pcx_CANdb_ReceiveMessage6_o7_p;
      rtb_TmpSignalConversionAtVITM_h[8] =
        BMShil_B.pcx_CANdb_ReceiveMessage7_o4_c;
      rtb_TmpSignalConversionAtVITM_h[9] =
        BMShil_B.pcx_CANdb_ReceiveMessage7_o5_e;
      rtb_TmpSignalConversionAtVITM_h[10] =
        BMShil_B.pcx_CANdb_ReceiveMessage7_o6_p;
      rtb_TmpSignalConversionAtVITM_h[11] =
        BMShil_B.pcx_CANdb_ReceiveMessage7_o7_n;
      rtb_TmpSignalConversionAtVITM_h[12] =
        BMShil_B.pcx_CANdb_ReceiveMessage8_o4_c;
      rtb_TmpSignalConversionAtVITM_h[13] =
        BMShil_B.pcx_CANdb_ReceiveMessage8_o5_e;
      rtb_TmpSignalConversionAtVITM_h[14] =
        BMShil_B.pcx_CANdb_ReceiveMessage8_o6_j;
      rtb_TmpSignalConversionAtVITM_h[15] =
        BMShil_B.pcx_CANdb_ReceiveMessage8_o7_l;
      rtb_TmpSignalConversionAtVITM_h[16] =
        BMShil_B.pcx_CANdb_ReceiveMessage9_o4_h;
      rtb_TmpSignalConversionAtVITM_h[17] =
        BMShil_B.pcx_CANdb_ReceiveMessage9_o5_n;
      rtb_TmpSignalConversionAtVITM_h[18] =
        BMShil_B.pcx_CANdb_ReceiveMessage9_o6_f;
      rtb_TmpSignalConversionAtVITM_h[19] =
        BMShil_B.pcx_CANdb_ReceiveMessage9_o7_e;
      rtb_TmpSignalConversionAtVITM_h[20] =
        BMShil_B.pcx_CANdb_ReceiveMessage10_o4;
      rtb_TmpSignalConversionAtVITM_h[21] =
        BMShil_B.pcx_CANdb_ReceiveMessage10_o5;
      rtb_TmpSignalConversionAtVITM_h[22] =
        BMShil_B.pcx_CANdb_ReceiveMessage10_o6;
      rtb_TmpSignalConversionAtVITM_h[23] =
        BMShil_B.pcx_CANdb_ReceiveMessage10_o7;
      rtb_TmpSignalConversionAtVITM_h[24] =
        BMShil_B.pcx_CANdb_ReceiveMessage11_o4;
      rtb_TmpSignalConversionAtVITM_h[25] =
        BMShil_B.pcx_CANdb_ReceiveMessage11_o5;
      rtb_TmpSignalConversionAtVITM_h[26] =
        BMShil_B.pcx_CANdb_ReceiveMessage11_o6;
      rtb_TmpSignalConversionAtVITM_h[27] =
        BMShil_B.pcx_CANdb_ReceiveMessage11_o7;
      rtb_TmpSignalConversionAtVITM_h[28] =
        BMShil_B.pcx_CANdb_ReceiveMessage12_o4;
      rtb_TmpSignalConversionAtVITM_h[29] =
        BMShil_B.pcx_CANdb_ReceiveMessage12_o5;
      rtb_TmpSignalConversionAtVITM_h[30] =
        BMShil_B.pcx_CANdb_ReceiveMessage12_o6;
      rtb_TmpSignalConversionAtVITM_h[31] =
        BMShil_B.pcx_CANdb_ReceiveMessage12_o7;
      rtb_TmpSignalConversionAtVITM_h[32] =
        BMShil_B.pcx_CANdb_ReceiveMessage13_o4;
      rtb_TmpSignalConversionAtVITM_h[33] =
        BMShil_B.pcx_CANdb_ReceiveMessage13_o5;
      rtb_TmpSignalConversionAtVITM_h[34] =
        BMShil_B.pcx_CANdb_ReceiveMessage13_o6;
      rtb_TmpSignalConversionAtVITM_h[35] =
        BMShil_B.pcx_CANdb_ReceiveMessage13_o7;
      rtb_TmpSignalConversionAtVITM_h[36] =
        BMShil_B.pcx_CANdb_ReceiveMessage14_o4;
      rtb_TmpSignalConversionAtVITM_h[37] =
        BMShil_B.pcx_CANdb_ReceiveMessage14_o5;
      rtb_TmpSignalConversionAtVITM_h[38] =
        BMShil_B.pcx_CANdb_ReceiveMessage14_o6;
      rtb_TmpSignalConversionAtVITM_h[39] =
        BMShil_B.pcx_CANdb_ReceiveMessage14_o7;

      /* ModelReference: '<S2>/VITM' */
      VITM(&rtb_TmpSignalConversionAtVITMIn[0], (&(BMS_RawPackVoltage)),
           (&(BMS_RawVehSideVoltage)), &BMShil_B.pcx_CANdb_ReceiveMessage_o4_a,
           (FREAL*)&BMShil_RGND, (FREAL*)&BMShil_RGND,
           &rtb_TmpSignalConversionAtVITM_h[0], &rtCP_Constant_Value,
           &BMShil_B.vitm_CellsMaxTemperature,
           &BMShil_B.vitm_CellsMinTemperature,
           &BMShil_B.vitm_CellsAvgTemperature,
           &BMShil_B.vitm_CellsTemperatureLowFault,
           &BMShil_B.vitm_CellsTemperatureHighFault,
           &BMShil_B.vitm_CellsVoltageLowFault,
           &BMShil_B.vitm_CellsVoltageHighFault, &BMShil_B.vitm_PackVoltageFault,
           &BMShil_B.vitm_CellsMinVoltage, &BMShil_B.vitm_CellsMaxVoltage,
           &BMShil_B.vitm_CellsAvgVoltage, &BMShil_B.vitm_PackVoltageFiltered, (
            &(BMS_RawPackCurrent)), &BMShil_B.vitm_PackCurrentFault,
           &BMShil_B.vitm_CoolantDeltaTemp, &BMShil_B.vitm_CoolantInletTempFault,
           &BMShil_B.vitm_CoolantOutlletTempFault,
           &BMShil_B.vitm_CoolantInletTFiltered,
           &BMShil_B.vitm_CoolantOutletTFiltered, &BMShil_B.vitm_HVILFault,
           &BMShil_B.VITM_o21[0], &BMShil_B.VITM_o22[0], &BMShil_B.VITM_o23,
           &(BMShil_DWork.VITM_DWORK1.rtdw), &(BMShil_DWork.VITM_DWORK1.rtzce));

      /* Transition: '<S9>:545' */
      /* Event: '<S9>:27' */

      /* ModelReference: '<S2>/SOC' */
      SOC((&(BMS_RawPackCurrent)), &BMShil_B.VITM_o22[0],
          (&(bsc_MainContactorCmd)), (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4,
          &BMShil_B.SOH_o4[0], &BMShil_B.BSC_o3, &BMShil_B.CB_o1[0],
          &BMShil_B.SOC_o1[0], &BMShil_B.soc_pack_customer,
          &BMShil_B.soc_cell_max, &BMShil_B.soc_cell_min, (&(soc_pack_actual)),
          &BMShil_B.soc_rate_high, &BMShil_B.SOC_o7[0],
          &(BMShil_DWork.SOC_DWORK1.rtb), &(BMShil_DWork.SOC_DWORK1.rtdw));

      /* Transition: '<S9>:532' */
      /* Event: '<S9>:28' */

      /* ModelReference: '<S2>/BSC' */
      BSC((&(bsc_VehiclePSR)), &BMShil_B.Delay1, (&(bsc_KeyValue)),
          (&(soc_pack_actual)), &BMShil_B.DataTypeConversion6,
          &BMShil_B.DataTypeConversion1, &BMShil_B.DataTypeConversion2,
          &BMShil_B.vitm_CellsTemperatureLowFault,
          &BMShil_B.vitm_CellsTemperatureHighFault,
          &BMShil_B.vitm_CellsVoltageLowFault,
          &BMShil_B.vitm_CellsVoltageHighFault, &BMShil_B.vitm_PackVoltageFault,
          &BMShil_B.vitm_PackCurrentFault, &BMShil_B.vitm_HVILFault,
          &BMShil_B.CC_o5, &BMShil_B.BSC_o1, &BMShil_B.BSC_o2, &BMShil_B.BSC_o3,
          &BMShil_B.BSC_o4, (&(bsc_ReasonToOpen)), &BMShil_B.BSC_o6,
          &BMShil_B.BSC_o7, (&(bsc_FaultType)), &(BMShil_DWork.BSC_DWORK1.rtb),
          &(BMShil_DWork.BSC_DWORK1.rtdw), &(BMShil_DWork.BSC_DWORK1.rtzce));

      /* Transition: '<S9>:548' */
      /* Event: '<S9>:194' */

      /* ModelReference: '<S2>/SOH' */
      soh((&(BMS_RawPackCurrent)), &BMShil_B.VITM_o22[0], &BMShil_B.SOC_o1[0],
          &BMShil_B.VITM_o21[0], &BMShil_B.SOC_o7[0], (&(bsc_MainContactorCmd)),
          (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4, &BMShil_B.CB_o1[0],
          (&(soh_R_index)), &BMShil_B.SOH_o2[0], (&(soh_C_index)),
          &BMShil_B.SOH_o4[0], &BMShil_B.soh_customer_index,
          &(BMShil_DWork.SOH_DWORK1.rtb), &(BMShil_DWork.SOH_DWORK1.rtdw),
          &(BMShil_DWork.SOH_DWORK1.rtzce));

      /* Transition: '<S9>:538' */
      /* Event: '<S9>:29' */

      /* ModelReference: '<S2>/CC' */
      CC(&BMShil_B.BSC_o2, &BMShil_B.BSC_o3, &BMShil_B.vitm_PackVoltageFiltered,
         &BMShil_B.VITM_o23, &rtCP_Constant2_Value, &BMShil_B.CC_o1,
         (&(bsc_MainContactorCmd)), (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4,
         &BMShil_B.CC_o5, &(BMShil_DWork.CC_DWORK1.rtdw),
         &(BMShil_DWork.CC_DWORK1.rtzce));

      /* Transition: '<S9>:547' */
      /* Event: '<S9>:30' */

      /* ModelReference: '<S2>/BMO' */
      BMO((&(BMS_RawPackCurrent)), (&(bsc_KeyValue)), (&(bsc_ChargerValue)),
          &BMShil_B.CC_o4, (&(bsc_MainContactorCmd)), (&(bsc_ChgContactorCmd)),
          &BMShil_B.BSC_o4, &BMShil_B.bmo_mode, &BMShil_B.BMO_o2,
          &BMShil_B.BMO_o3, &(BMShil_DWork.BMO_DWORK1.rtdw));

      /* Transition: '<S9>:539' */
      /* Event: '<S9>:131' */

      /* ModelReference: '<S2>/BTC' */
      BTC(&BMShil_B.VITM_o21[0], &BMShil_B.SOC_o1[0], &BMShil_B.BMO_o2,
          (&(BMSc_airTemperature)), &BMShil_B.BMO_o3, &rtCP_Constant1_Value,
          &rtCP_Constant1_Value, &BMShil_B.vitm_CellsTemperatureHighFault,
          &BMShil_B.vitm_CellsTemperatureLowFault, (&(btc_coolant_flow_pct)),
          &BMShil_B.btc_batt_target_temp, &BMShil_B.btc_batt_actual_temp,
          &BMShil_B.btc_batt_request_status, &BMShil_B.btc_thermal_condition,
          &(BMShil_DWork.BTC_DWORK1.rtdw));

      /* Transition: '<S9>:540' */
      /* Event: '<S9>:235' */

      /* ModelReference: '<S2>/SOP' */
      sop(&BMShil_B.VITM_o21[0], &BMShil_B.SOC_o1[0], &BMShil_B.BMO_o2,
          &BMShil_B.BMO_o3, &BMShil_B.vitm_CellsTemperatureHighFault,
          &BMShil_B.vitm_PackCurrentFault, &BMShil_B.vitm_PackVoltageFault,
          &BMShil_B.DataTypeConversion2, &BMShil_B.SOH_o2[0],
          &BMShil_B.BattPwLimDischarge, &BMShil_B.BattCurrLimDischarge,
          &BMShil_B.BattPwLimCharge, &BMShil_B.BattCurrLimCharge);

      /* Transition: '<S9>:533' */
      /* Event: '<S9>:301' */

      /* ModelReference: '<S2>/CB' */
      CB(&BMShil_B.SOC_o1[0], &BMShil_B.bmo_mode, &BMShil_B.CB_o1[0],
         &BMShil_B.cb_status);
      break;

     case BMShil_IN_main_chg:
      /* During 'main_chg': '<S9>:461' */
      if (BMShil_B.Delay1 < 0.5) {
        /* Transition: '<S9>:523' */
        BMShil_DWork.bitsForTID0.is_c3_BMShil = BMShil_IN_end_chg;

        /* SignalConversion: '<S2>/VITM' */
        /* Entry Internal 'end_chg': '<S9>:512' */
        /* Transition: '<S9>:630' */
        /* Transition: '<S9>:621' */
        /* Event: '<S9>:25' */
        rtb_TmpSignalConversionAtVITMIn[0] = BMS_CellVoltage;
        rtb_TmpSignalConversionAtVITMIn[1] =
          BMShil_B.pcx_CANdb_ReceiveMessage_o5;
        rtb_TmpSignalConversionAtVITMIn[2] =
          BMShil_B.pcx_CANdb_ReceiveMessage_o6;
        rtb_TmpSignalConversionAtVITMIn[3] =
          BMShil_B.pcx_CANdb_ReceiveMessage_o7;
        rtb_TmpSignalConversionAtVITMIn[4] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o4;
        rtb_TmpSignalConversionAtVITMIn[5] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o5;
        rtb_TmpSignalConversionAtVITMIn[6] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o6;
        rtb_TmpSignalConversionAtVITMIn[7] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o7;
        rtb_TmpSignalConversionAtVITMIn[8] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o4;
        rtb_TmpSignalConversionAtVITMIn[9] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o5;
        rtb_TmpSignalConversionAtVITMIn[10] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o6;
        rtb_TmpSignalConversionAtVITMIn[11] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o7;
        rtb_TmpSignalConversionAtVITMIn[12] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o4;
        rtb_TmpSignalConversionAtVITMIn[13] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o5;
        rtb_TmpSignalConversionAtVITMIn[14] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o6;
        rtb_TmpSignalConversionAtVITMIn[15] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o7;
        rtb_TmpSignalConversionAtVITMIn[16] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o4;
        rtb_TmpSignalConversionAtVITMIn[17] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o5;
        rtb_TmpSignalConversionAtVITMIn[18] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o6;
        rtb_TmpSignalConversionAtVITMIn[19] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o7;
        rtb_TmpSignalConversionAtVITMIn[20] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o4_p;
        rtb_TmpSignalConversionAtVITMIn[21] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o5;
        rtb_TmpSignalConversionAtVITMIn[22] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o6;
        rtb_TmpSignalConversionAtVITMIn[23] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o7;
        rtb_TmpSignalConversionAtVITMIn[24] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o4;
        rtb_TmpSignalConversionAtVITMIn[25] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o5;
        rtb_TmpSignalConversionAtVITMIn[26] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o6;
        rtb_TmpSignalConversionAtVITMIn[27] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o7;
        rtb_TmpSignalConversionAtVITMIn[28] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o4;
        rtb_TmpSignalConversionAtVITMIn[29] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o5;
        rtb_TmpSignalConversionAtVITMIn[30] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o6;
        rtb_TmpSignalConversionAtVITMIn[31] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o7;
        rtb_TmpSignalConversionAtVITMIn[32] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o4;
        rtb_TmpSignalConversionAtVITMIn[33] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o5;
        rtb_TmpSignalConversionAtVITMIn[34] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o6;
        rtb_TmpSignalConversionAtVITMIn[35] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o7;
        rtb_TmpSignalConversionAtVITMIn[36] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o4;
        rtb_TmpSignalConversionAtVITMIn[37] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o5;
        rtb_TmpSignalConversionAtVITMIn[38] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o6;
        rtb_TmpSignalConversionAtVITMIn[39] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o7;

        /* SignalConversion: '<S2>/VITM' */
        rtb_TmpSignalConversionAtVITM_h[0] = BMS_CellTemp;
        rtb_TmpSignalConversionAtVITM_h[1] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o5_o;
        rtb_TmpSignalConversionAtVITM_h[2] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o6_e;
        rtb_TmpSignalConversionAtVITM_h[3] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o7_n;
        rtb_TmpSignalConversionAtVITM_h[4] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o4_e;
        rtb_TmpSignalConversionAtVITM_h[5] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o5_b;
        rtb_TmpSignalConversionAtVITM_h[6] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o6_k;
        rtb_TmpSignalConversionAtVITM_h[7] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o7_p;
        rtb_TmpSignalConversionAtVITM_h[8] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o4_c;
        rtb_TmpSignalConversionAtVITM_h[9] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o5_e;
        rtb_TmpSignalConversionAtVITM_h[10] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o6_p;
        rtb_TmpSignalConversionAtVITM_h[11] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o7_n;
        rtb_TmpSignalConversionAtVITM_h[12] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o4_c;
        rtb_TmpSignalConversionAtVITM_h[13] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o5_e;
        rtb_TmpSignalConversionAtVITM_h[14] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o6_j;
        rtb_TmpSignalConversionAtVITM_h[15] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o7_l;
        rtb_TmpSignalConversionAtVITM_h[16] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o4_h;
        rtb_TmpSignalConversionAtVITM_h[17] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o5_n;
        rtb_TmpSignalConversionAtVITM_h[18] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o6_f;
        rtb_TmpSignalConversionAtVITM_h[19] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o7_e;
        rtb_TmpSignalConversionAtVITM_h[20] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o4;
        rtb_TmpSignalConversionAtVITM_h[21] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o5;
        rtb_TmpSignalConversionAtVITM_h[22] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o6;
        rtb_TmpSignalConversionAtVITM_h[23] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o7;
        rtb_TmpSignalConversionAtVITM_h[24] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o4;
        rtb_TmpSignalConversionAtVITM_h[25] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o5;
        rtb_TmpSignalConversionAtVITM_h[26] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o6;
        rtb_TmpSignalConversionAtVITM_h[27] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o7;
        rtb_TmpSignalConversionAtVITM_h[28] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o4;
        rtb_TmpSignalConversionAtVITM_h[29] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o5;
        rtb_TmpSignalConversionAtVITM_h[30] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o6;
        rtb_TmpSignalConversionAtVITM_h[31] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o7;
        rtb_TmpSignalConversionAtVITM_h[32] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o4;
        rtb_TmpSignalConversionAtVITM_h[33] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o5;
        rtb_TmpSignalConversionAtVITM_h[34] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o6;
        rtb_TmpSignalConversionAtVITM_h[35] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o7;
        rtb_TmpSignalConversionAtVITM_h[36] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o4;
        rtb_TmpSignalConversionAtVITM_h[37] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o5;
        rtb_TmpSignalConversionAtVITM_h[38] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o6;
        rtb_TmpSignalConversionAtVITM_h[39] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o7;

        /* ModelReference: '<S2>/VITM' */
        VITM(&rtb_TmpSignalConversionAtVITMIn[0], (&(BMS_RawPackVoltage)),
             (&(BMS_RawVehSideVoltage)), &BMShil_B.pcx_CANdb_ReceiveMessage_o4_a,
             (FREAL*)&BMShil_RGND, (FREAL*)&BMShil_RGND,
             &rtb_TmpSignalConversionAtVITM_h[0], &rtCP_Constant_Value,
             &BMShil_B.vitm_CellsMaxTemperature,
             &BMShil_B.vitm_CellsMinTemperature,
             &BMShil_B.vitm_CellsAvgTemperature,
             &BMShil_B.vitm_CellsTemperatureLowFault,
             &BMShil_B.vitm_CellsTemperatureHighFault,
             &BMShil_B.vitm_CellsVoltageLowFault,
             &BMShil_B.vitm_CellsVoltageHighFault,
             &BMShil_B.vitm_PackVoltageFault, &BMShil_B.vitm_CellsMinVoltage,
             &BMShil_B.vitm_CellsMaxVoltage, &BMShil_B.vitm_CellsAvgVoltage,
             &BMShil_B.vitm_PackVoltageFiltered, (&(BMS_RawPackCurrent)),
             &BMShil_B.vitm_PackCurrentFault, &BMShil_B.vitm_CoolantDeltaTemp,
             &BMShil_B.vitm_CoolantInletTempFault,
             &BMShil_B.vitm_CoolantOutlletTempFault,
             &BMShil_B.vitm_CoolantInletTFiltered,
             &BMShil_B.vitm_CoolantOutletTFiltered, &BMShil_B.vitm_HVILFault,
             &BMShil_B.VITM_o21[0], &BMShil_B.VITM_o22[0], &BMShil_B.VITM_o23,
             &(BMShil_DWork.VITM_DWORK1.rtdw), &(BMShil_DWork.VITM_DWORK1.rtzce));

        /* Transition: '<S9>:629' */
        /* Event: '<S9>:27' */

        /* ModelReference: '<S2>/SOC' */
        SOC((&(BMS_RawPackCurrent)), &BMShil_B.VITM_o22[0],
            (&(bsc_MainContactorCmd)), (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4,
            &BMShil_B.SOH_o4[0], &BMShil_B.BSC_o3, &BMShil_B.CB_o1[0],
            &BMShil_B.SOC_o1[0], &BMShil_B.soc_pack_customer,
            &BMShil_B.soc_cell_max, &BMShil_B.soc_cell_min, (&(soc_pack_actual)),
            &BMShil_B.soc_rate_high, &BMShil_B.SOC_o7[0],
            &(BMShil_DWork.SOC_DWORK1.rtb), &(BMShil_DWork.SOC_DWORK1.rtdw));

        /* Transition: '<S9>:616' */
        /* Event: '<S9>:28' */

        /* ModelReference: '<S2>/BSC' */
        BSC((&(bsc_VehiclePSR)), &BMShil_B.Delay1, (&(bsc_KeyValue)),
            (&(soc_pack_actual)), &BMShil_B.DataTypeConversion6,
            &BMShil_B.DataTypeConversion1, &BMShil_B.DataTypeConversion2,
            &BMShil_B.vitm_CellsTemperatureLowFault,
            &BMShil_B.vitm_CellsTemperatureHighFault,
            &BMShil_B.vitm_CellsVoltageLowFault,
            &BMShil_B.vitm_CellsVoltageHighFault,
            &BMShil_B.vitm_PackVoltageFault, &BMShil_B.vitm_PackCurrentFault,
            &BMShil_B.vitm_HVILFault, &BMShil_B.CC_o5, &BMShil_B.BSC_o1,
            &BMShil_B.BSC_o2, &BMShil_B.BSC_o3, &BMShil_B.BSC_o4,
            (&(bsc_ReasonToOpen)), &BMShil_B.BSC_o6, &BMShil_B.BSC_o7,
            (&(bsc_FaultType)), &(BMShil_DWork.BSC_DWORK1.rtb),
            &(BMShil_DWork.BSC_DWORK1.rtdw), &(BMShil_DWork.BSC_DWORK1.rtzce));

        /* Transition: '<S9>:632' */
        /* Event: '<S9>:194' */

        /* ModelReference: '<S2>/SOH' */
        soh((&(BMS_RawPackCurrent)), &BMShil_B.VITM_o22[0], &BMShil_B.SOC_o1[0],
            &BMShil_B.VITM_o21[0], &BMShil_B.SOC_o7[0], (&(bsc_MainContactorCmd)),
            (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4, &BMShil_B.CB_o1[0],
            (&(soh_R_index)), &BMShil_B.SOH_o2[0], (&(soh_C_index)),
            &BMShil_B.SOH_o4[0], &BMShil_B.soh_customer_index,
            &(BMShil_DWork.SOH_DWORK1.rtb), &(BMShil_DWork.SOH_DWORK1.rtdw),
            &(BMShil_DWork.SOH_DWORK1.rtzce));

        /* Transition: '<S9>:622' */
        /* Event: '<S9>:29' */

        /* ModelReference: '<S2>/CC' */
        CC(&BMShil_B.BSC_o2, &BMShil_B.BSC_o3,
           &BMShil_B.vitm_PackVoltageFiltered, &BMShil_B.VITM_o23,
           &rtCP_Constant2_Value, &BMShil_B.CC_o1, (&(bsc_MainContactorCmd)),
           (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4, &BMShil_B.CC_o5,
           &(BMShil_DWork.CC_DWORK1.rtdw), &(BMShil_DWork.CC_DWORK1.rtzce));

        /* Transition: '<S9>:631' */
        /* Event: '<S9>:30' */

        /* ModelReference: '<S2>/BMO' */
        BMO((&(BMS_RawPackCurrent)), (&(bsc_KeyValue)), (&(bsc_ChargerValue)),
            &BMShil_B.CC_o4, (&(bsc_MainContactorCmd)), (&(bsc_ChgContactorCmd)),
            &BMShil_B.BSC_o4, &BMShil_B.bmo_mode, &BMShil_B.BMO_o2,
            &BMShil_B.BMO_o3, &(BMShil_DWork.BMO_DWORK1.rtdw));

        /* Transition: '<S9>:623' */
        /* Event: '<S9>:131' */

        /* ModelReference: '<S2>/BTC' */
        BTC(&BMShil_B.VITM_o21[0], &BMShil_B.SOC_o1[0], &BMShil_B.BMO_o2,
            (&(BMSc_airTemperature)), &BMShil_B.BMO_o3, &rtCP_Constant1_Value,
            &rtCP_Constant1_Value, &BMShil_B.vitm_CellsTemperatureHighFault,
            &BMShil_B.vitm_CellsTemperatureLowFault, (&(btc_coolant_flow_pct)),
            &BMShil_B.btc_batt_target_temp, &BMShil_B.btc_batt_actual_temp,
            &BMShil_B.btc_batt_request_status, &BMShil_B.btc_thermal_condition,
            &(BMShil_DWork.BTC_DWORK1.rtdw));

        /* Transition: '<S9>:624' */
        /* Event: '<S9>:235' */

        /* ModelReference: '<S2>/SOP' */
        sop(&BMShil_B.VITM_o21[0], &BMShil_B.SOC_o1[0], &BMShil_B.BMO_o2,
            &BMShil_B.BMO_o3, &BMShil_B.vitm_CellsTemperatureHighFault,
            &BMShil_B.vitm_PackCurrentFault, &BMShil_B.vitm_PackVoltageFault,
            &BMShil_B.DataTypeConversion2, &BMShil_B.SOH_o2[0],
            &BMShil_B.BattPwLimDischarge, &BMShil_B.BattCurrLimDischarge,
            &BMShil_B.BattPwLimCharge, &BMShil_B.BattCurrLimCharge);

        /* Transition: '<S9>:617' */
        /* Event: '<S9>:301' */

        /* ModelReference: '<S2>/CB' */
        CB(&BMShil_B.SOC_o1[0], &BMShil_B.bmo_mode, &BMShil_B.CB_o1[0],
           &BMShil_B.cb_status);
      } else {
        /* SignalConversion: '<S2>/VITM' */
        /* Transition: '<S9>:609' */
        /* Transition: '<S9>:600' */
        /* Event: '<S9>:25' */
        rtb_TmpSignalConversionAtVITMIn[0] = BMS_CellVoltage;
        rtb_TmpSignalConversionAtVITMIn[1] =
          BMShil_B.pcx_CANdb_ReceiveMessage_o5;
        rtb_TmpSignalConversionAtVITMIn[2] =
          BMShil_B.pcx_CANdb_ReceiveMessage_o6;
        rtb_TmpSignalConversionAtVITMIn[3] =
          BMShil_B.pcx_CANdb_ReceiveMessage_o7;
        rtb_TmpSignalConversionAtVITMIn[4] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o4;
        rtb_TmpSignalConversionAtVITMIn[5] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o5;
        rtb_TmpSignalConversionAtVITMIn[6] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o6;
        rtb_TmpSignalConversionAtVITMIn[7] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o7;
        rtb_TmpSignalConversionAtVITMIn[8] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o4;
        rtb_TmpSignalConversionAtVITMIn[9] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o5;
        rtb_TmpSignalConversionAtVITMIn[10] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o6;
        rtb_TmpSignalConversionAtVITMIn[11] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o7;
        rtb_TmpSignalConversionAtVITMIn[12] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o4;
        rtb_TmpSignalConversionAtVITMIn[13] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o5;
        rtb_TmpSignalConversionAtVITMIn[14] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o6;
        rtb_TmpSignalConversionAtVITMIn[15] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o7;
        rtb_TmpSignalConversionAtVITMIn[16] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o4;
        rtb_TmpSignalConversionAtVITMIn[17] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o5;
        rtb_TmpSignalConversionAtVITMIn[18] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o6;
        rtb_TmpSignalConversionAtVITMIn[19] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o7;
        rtb_TmpSignalConversionAtVITMIn[20] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o4_p;
        rtb_TmpSignalConversionAtVITMIn[21] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o5;
        rtb_TmpSignalConversionAtVITMIn[22] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o6;
        rtb_TmpSignalConversionAtVITMIn[23] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o7;
        rtb_TmpSignalConversionAtVITMIn[24] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o4;
        rtb_TmpSignalConversionAtVITMIn[25] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o5;
        rtb_TmpSignalConversionAtVITMIn[26] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o6;
        rtb_TmpSignalConversionAtVITMIn[27] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o7;
        rtb_TmpSignalConversionAtVITMIn[28] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o4;
        rtb_TmpSignalConversionAtVITMIn[29] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o5;
        rtb_TmpSignalConversionAtVITMIn[30] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o6;
        rtb_TmpSignalConversionAtVITMIn[31] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o7;
        rtb_TmpSignalConversionAtVITMIn[32] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o4;
        rtb_TmpSignalConversionAtVITMIn[33] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o5;
        rtb_TmpSignalConversionAtVITMIn[34] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o6;
        rtb_TmpSignalConversionAtVITMIn[35] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o7;
        rtb_TmpSignalConversionAtVITMIn[36] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o4;
        rtb_TmpSignalConversionAtVITMIn[37] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o5;
        rtb_TmpSignalConversionAtVITMIn[38] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o6;
        rtb_TmpSignalConversionAtVITMIn[39] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o7;

        /* SignalConversion: '<S2>/VITM' */
        rtb_TmpSignalConversionAtVITM_h[0] = BMS_CellTemp;
        rtb_TmpSignalConversionAtVITM_h[1] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o5_o;
        rtb_TmpSignalConversionAtVITM_h[2] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o6_e;
        rtb_TmpSignalConversionAtVITM_h[3] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o7_n;
        rtb_TmpSignalConversionAtVITM_h[4] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o4_e;
        rtb_TmpSignalConversionAtVITM_h[5] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o5_b;
        rtb_TmpSignalConversionAtVITM_h[6] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o6_k;
        rtb_TmpSignalConversionAtVITM_h[7] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o7_p;
        rtb_TmpSignalConversionAtVITM_h[8] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o4_c;
        rtb_TmpSignalConversionAtVITM_h[9] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o5_e;
        rtb_TmpSignalConversionAtVITM_h[10] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o6_p;
        rtb_TmpSignalConversionAtVITM_h[11] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o7_n;
        rtb_TmpSignalConversionAtVITM_h[12] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o4_c;
        rtb_TmpSignalConversionAtVITM_h[13] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o5_e;
        rtb_TmpSignalConversionAtVITM_h[14] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o6_j;
        rtb_TmpSignalConversionAtVITM_h[15] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o7_l;
        rtb_TmpSignalConversionAtVITM_h[16] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o4_h;
        rtb_TmpSignalConversionAtVITM_h[17] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o5_n;
        rtb_TmpSignalConversionAtVITM_h[18] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o6_f;
        rtb_TmpSignalConversionAtVITM_h[19] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o7_e;
        rtb_TmpSignalConversionAtVITM_h[20] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o4;
        rtb_TmpSignalConversionAtVITM_h[21] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o5;
        rtb_TmpSignalConversionAtVITM_h[22] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o6;
        rtb_TmpSignalConversionAtVITM_h[23] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o7;
        rtb_TmpSignalConversionAtVITM_h[24] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o4;
        rtb_TmpSignalConversionAtVITM_h[25] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o5;
        rtb_TmpSignalConversionAtVITM_h[26] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o6;
        rtb_TmpSignalConversionAtVITM_h[27] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o7;
        rtb_TmpSignalConversionAtVITM_h[28] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o4;
        rtb_TmpSignalConversionAtVITM_h[29] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o5;
        rtb_TmpSignalConversionAtVITM_h[30] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o6;
        rtb_TmpSignalConversionAtVITM_h[31] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o7;
        rtb_TmpSignalConversionAtVITM_h[32] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o4;
        rtb_TmpSignalConversionAtVITM_h[33] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o5;
        rtb_TmpSignalConversionAtVITM_h[34] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o6;
        rtb_TmpSignalConversionAtVITM_h[35] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o7;
        rtb_TmpSignalConversionAtVITM_h[36] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o4;
        rtb_TmpSignalConversionAtVITM_h[37] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o5;
        rtb_TmpSignalConversionAtVITM_h[38] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o6;
        rtb_TmpSignalConversionAtVITM_h[39] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o7;

        /* ModelReference: '<S2>/VITM' */
        VITM(&rtb_TmpSignalConversionAtVITMIn[0], (&(BMS_RawPackVoltage)),
             (&(BMS_RawVehSideVoltage)), &BMShil_B.pcx_CANdb_ReceiveMessage_o4_a,
             (FREAL*)&BMShil_RGND, (FREAL*)&BMShil_RGND,
             &rtb_TmpSignalConversionAtVITM_h[0], &rtCP_Constant_Value,
             &BMShil_B.vitm_CellsMaxTemperature,
             &BMShil_B.vitm_CellsMinTemperature,
             &BMShil_B.vitm_CellsAvgTemperature,
             &BMShil_B.vitm_CellsTemperatureLowFault,
             &BMShil_B.vitm_CellsTemperatureHighFault,
             &BMShil_B.vitm_CellsVoltageLowFault,
             &BMShil_B.vitm_CellsVoltageHighFault,
             &BMShil_B.vitm_PackVoltageFault, &BMShil_B.vitm_CellsMinVoltage,
             &BMShil_B.vitm_CellsMaxVoltage, &BMShil_B.vitm_CellsAvgVoltage,
             &BMShil_B.vitm_PackVoltageFiltered, (&(BMS_RawPackCurrent)),
             &BMShil_B.vitm_PackCurrentFault, &BMShil_B.vitm_CoolantDeltaTemp,
             &BMShil_B.vitm_CoolantInletTempFault,
             &BMShil_B.vitm_CoolantOutlletTempFault,
             &BMShil_B.vitm_CoolantInletTFiltered,
             &BMShil_B.vitm_CoolantOutletTFiltered, &BMShil_B.vitm_HVILFault,
             &BMShil_B.VITM_o21[0], &BMShil_B.VITM_o22[0], &BMShil_B.VITM_o23,
             &(BMShil_DWork.VITM_DWORK1.rtdw), &(BMShil_DWork.VITM_DWORK1.rtzce));

        /* Transition: '<S9>:608' */
        /* Event: '<S9>:27' */

        /* ModelReference: '<S2>/SOC' */
        SOC((&(BMS_RawPackCurrent)), &BMShil_B.VITM_o22[0],
            (&(bsc_MainContactorCmd)), (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4,
            &BMShil_B.SOH_o4[0], &BMShil_B.BSC_o3, &BMShil_B.CB_o1[0],
            &BMShil_B.SOC_o1[0], &BMShil_B.soc_pack_customer,
            &BMShil_B.soc_cell_max, &BMShil_B.soc_cell_min, (&(soc_pack_actual)),
            &BMShil_B.soc_rate_high, &BMShil_B.SOC_o7[0],
            &(BMShil_DWork.SOC_DWORK1.rtb), &(BMShil_DWork.SOC_DWORK1.rtdw));

        /* Transition: '<S9>:595' */
        /* Event: '<S9>:28' */

        /* ModelReference: '<S2>/BSC' */
        BSC((&(bsc_VehiclePSR)), &BMShil_B.Delay1, (&(bsc_KeyValue)),
            (&(soc_pack_actual)), &BMShil_B.DataTypeConversion6,
            &BMShil_B.DataTypeConversion1, &BMShil_B.DataTypeConversion2,
            &BMShil_B.vitm_CellsTemperatureLowFault,
            &BMShil_B.vitm_CellsTemperatureHighFault,
            &BMShil_B.vitm_CellsVoltageLowFault,
            &BMShil_B.vitm_CellsVoltageHighFault,
            &BMShil_B.vitm_PackVoltageFault, &BMShil_B.vitm_PackCurrentFault,
            &BMShil_B.vitm_HVILFault, &BMShil_B.CC_o5, &BMShil_B.BSC_o1,
            &BMShil_B.BSC_o2, &BMShil_B.BSC_o3, &BMShil_B.BSC_o4,
            (&(bsc_ReasonToOpen)), &BMShil_B.BSC_o6, &BMShil_B.BSC_o7,
            (&(bsc_FaultType)), &(BMShil_DWork.BSC_DWORK1.rtb),
            &(BMShil_DWork.BSC_DWORK1.rtdw), &(BMShil_DWork.BSC_DWORK1.rtzce));

        /* Transition: '<S9>:611' */
        /* Event: '<S9>:194' */

        /* ModelReference: '<S2>/SOH' */
        soh((&(BMS_RawPackCurrent)), &BMShil_B.VITM_o22[0], &BMShil_B.SOC_o1[0],
            &BMShil_B.VITM_o21[0], &BMShil_B.SOC_o7[0], (&(bsc_MainContactorCmd)),
            (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4, &BMShil_B.CB_o1[0],
            (&(soh_R_index)), &BMShil_B.SOH_o2[0], (&(soh_C_index)),
            &BMShil_B.SOH_o4[0], &BMShil_B.soh_customer_index,
            &(BMShil_DWork.SOH_DWORK1.rtb), &(BMShil_DWork.SOH_DWORK1.rtdw),
            &(BMShil_DWork.SOH_DWORK1.rtzce));

        /* Transition: '<S9>:601' */
        /* Event: '<S9>:29' */

        /* ModelReference: '<S2>/CC' */
        CC(&BMShil_B.BSC_o2, &BMShil_B.BSC_o3,
           &BMShil_B.vitm_PackVoltageFiltered, &BMShil_B.VITM_o23,
           &rtCP_Constant2_Value, &BMShil_B.CC_o1, (&(bsc_MainContactorCmd)),
           (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4, &BMShil_B.CC_o5,
           &(BMShil_DWork.CC_DWORK1.rtdw), &(BMShil_DWork.CC_DWORK1.rtzce));

        /* Transition: '<S9>:610' */
        /* Event: '<S9>:30' */

        /* ModelReference: '<S2>/BMO' */
        BMO((&(BMS_RawPackCurrent)), (&(bsc_KeyValue)), (&(bsc_ChargerValue)),
            &BMShil_B.CC_o4, (&(bsc_MainContactorCmd)), (&(bsc_ChgContactorCmd)),
            &BMShil_B.BSC_o4, &BMShil_B.bmo_mode, &BMShil_B.BMO_o2,
            &BMShil_B.BMO_o3, &(BMShil_DWork.BMO_DWORK1.rtdw));

        /* Transition: '<S9>:602' */
        /* Event: '<S9>:131' */

        /* ModelReference: '<S2>/BTC' */
        BTC(&BMShil_B.VITM_o21[0], &BMShil_B.SOC_o1[0], &BMShil_B.BMO_o2,
            (&(BMSc_airTemperature)), &BMShil_B.BMO_o3, &rtCP_Constant1_Value,
            &rtCP_Constant1_Value, &BMShil_B.vitm_CellsTemperatureHighFault,
            &BMShil_B.vitm_CellsTemperatureLowFault, (&(btc_coolant_flow_pct)),
            &BMShil_B.btc_batt_target_temp, &BMShil_B.btc_batt_actual_temp,
            &BMShil_B.btc_batt_request_status, &BMShil_B.btc_thermal_condition,
            &(BMShil_DWork.BTC_DWORK1.rtdw));

        /* Transition: '<S9>:603' */
        /* Event: '<S9>:235' */

        /* ModelReference: '<S2>/SOP' */
        sop(&BMShil_B.VITM_o21[0], &BMShil_B.SOC_o1[0], &BMShil_B.BMO_o2,
            &BMShil_B.BMO_o3, &BMShil_B.vitm_CellsTemperatureHighFault,
            &BMShil_B.vitm_PackCurrentFault, &BMShil_B.vitm_PackVoltageFault,
            &BMShil_B.DataTypeConversion2, &BMShil_B.SOH_o2[0],
            &BMShil_B.BattPwLimDischarge, &BMShil_B.BattCurrLimDischarge,
            &BMShil_B.BattPwLimCharge, &BMShil_B.BattCurrLimCharge);

        /* Transition: '<S9>:596' */
        /* Event: '<S9>:301' */

        /* ModelReference: '<S2>/CB' */
        CB(&BMShil_B.SOC_o1[0], &BMShil_B.bmo_mode, &BMShil_B.CB_o1[0],
           &BMShil_B.cb_status);
      }
      break;

     case BMShil_IN_main_key:
      /* During 'main_key': '<S9>:4' */
      if (bsc_VehiclePSR < 0.5) {
        /* Transition: '<S9>:152' */
        BMShil_DWork.bitsForTID0.is_c3_BMShil = BMShil_IN_end_key;

        /* SignalConversion: '<S2>/VITM' */
        /* Entry Internal 'end_key': '<S9>:145' */
        /* Transition: '<S9>:567' */
        /* Transition: '<S9>:558' */
        /* Event: '<S9>:25' */
        rtb_TmpSignalConversionAtVITMIn[0] = BMS_CellVoltage;
        rtb_TmpSignalConversionAtVITMIn[1] =
          BMShil_B.pcx_CANdb_ReceiveMessage_o5;
        rtb_TmpSignalConversionAtVITMIn[2] =
          BMShil_B.pcx_CANdb_ReceiveMessage_o6;
        rtb_TmpSignalConversionAtVITMIn[3] =
          BMShil_B.pcx_CANdb_ReceiveMessage_o7;
        rtb_TmpSignalConversionAtVITMIn[4] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o4;
        rtb_TmpSignalConversionAtVITMIn[5] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o5;
        rtb_TmpSignalConversionAtVITMIn[6] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o6;
        rtb_TmpSignalConversionAtVITMIn[7] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o7;
        rtb_TmpSignalConversionAtVITMIn[8] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o4;
        rtb_TmpSignalConversionAtVITMIn[9] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o5;
        rtb_TmpSignalConversionAtVITMIn[10] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o6;
        rtb_TmpSignalConversionAtVITMIn[11] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o7;
        rtb_TmpSignalConversionAtVITMIn[12] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o4;
        rtb_TmpSignalConversionAtVITMIn[13] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o5;
        rtb_TmpSignalConversionAtVITMIn[14] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o6;
        rtb_TmpSignalConversionAtVITMIn[15] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o7;
        rtb_TmpSignalConversionAtVITMIn[16] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o4;
        rtb_TmpSignalConversionAtVITMIn[17] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o5;
        rtb_TmpSignalConversionAtVITMIn[18] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o6;
        rtb_TmpSignalConversionAtVITMIn[19] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o7;
        rtb_TmpSignalConversionAtVITMIn[20] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o4_p;
        rtb_TmpSignalConversionAtVITMIn[21] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o5;
        rtb_TmpSignalConversionAtVITMIn[22] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o6;
        rtb_TmpSignalConversionAtVITMIn[23] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o7;
        rtb_TmpSignalConversionAtVITMIn[24] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o4;
        rtb_TmpSignalConversionAtVITMIn[25] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o5;
        rtb_TmpSignalConversionAtVITMIn[26] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o6;
        rtb_TmpSignalConversionAtVITMIn[27] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o7;
        rtb_TmpSignalConversionAtVITMIn[28] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o4;
        rtb_TmpSignalConversionAtVITMIn[29] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o5;
        rtb_TmpSignalConversionAtVITMIn[30] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o6;
        rtb_TmpSignalConversionAtVITMIn[31] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o7;
        rtb_TmpSignalConversionAtVITMIn[32] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o4;
        rtb_TmpSignalConversionAtVITMIn[33] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o5;
        rtb_TmpSignalConversionAtVITMIn[34] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o6;
        rtb_TmpSignalConversionAtVITMIn[35] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o7;
        rtb_TmpSignalConversionAtVITMIn[36] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o4;
        rtb_TmpSignalConversionAtVITMIn[37] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o5;
        rtb_TmpSignalConversionAtVITMIn[38] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o6;
        rtb_TmpSignalConversionAtVITMIn[39] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o7;

        /* SignalConversion: '<S2>/VITM' */
        rtb_TmpSignalConversionAtVITM_h[0] = BMS_CellTemp;
        rtb_TmpSignalConversionAtVITM_h[1] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o5_o;
        rtb_TmpSignalConversionAtVITM_h[2] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o6_e;
        rtb_TmpSignalConversionAtVITM_h[3] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o7_n;
        rtb_TmpSignalConversionAtVITM_h[4] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o4_e;
        rtb_TmpSignalConversionAtVITM_h[5] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o5_b;
        rtb_TmpSignalConversionAtVITM_h[6] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o6_k;
        rtb_TmpSignalConversionAtVITM_h[7] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o7_p;
        rtb_TmpSignalConversionAtVITM_h[8] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o4_c;
        rtb_TmpSignalConversionAtVITM_h[9] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o5_e;
        rtb_TmpSignalConversionAtVITM_h[10] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o6_p;
        rtb_TmpSignalConversionAtVITM_h[11] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o7_n;
        rtb_TmpSignalConversionAtVITM_h[12] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o4_c;
        rtb_TmpSignalConversionAtVITM_h[13] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o5_e;
        rtb_TmpSignalConversionAtVITM_h[14] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o6_j;
        rtb_TmpSignalConversionAtVITM_h[15] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o7_l;
        rtb_TmpSignalConversionAtVITM_h[16] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o4_h;
        rtb_TmpSignalConversionAtVITM_h[17] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o5_n;
        rtb_TmpSignalConversionAtVITM_h[18] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o6_f;
        rtb_TmpSignalConversionAtVITM_h[19] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o7_e;
        rtb_TmpSignalConversionAtVITM_h[20] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o4;
        rtb_TmpSignalConversionAtVITM_h[21] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o5;
        rtb_TmpSignalConversionAtVITM_h[22] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o6;
        rtb_TmpSignalConversionAtVITM_h[23] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o7;
        rtb_TmpSignalConversionAtVITM_h[24] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o4;
        rtb_TmpSignalConversionAtVITM_h[25] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o5;
        rtb_TmpSignalConversionAtVITM_h[26] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o6;
        rtb_TmpSignalConversionAtVITM_h[27] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o7;
        rtb_TmpSignalConversionAtVITM_h[28] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o4;
        rtb_TmpSignalConversionAtVITM_h[29] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o5;
        rtb_TmpSignalConversionAtVITM_h[30] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o6;
        rtb_TmpSignalConversionAtVITM_h[31] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o7;
        rtb_TmpSignalConversionAtVITM_h[32] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o4;
        rtb_TmpSignalConversionAtVITM_h[33] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o5;
        rtb_TmpSignalConversionAtVITM_h[34] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o6;
        rtb_TmpSignalConversionAtVITM_h[35] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o7;
        rtb_TmpSignalConversionAtVITM_h[36] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o4;
        rtb_TmpSignalConversionAtVITM_h[37] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o5;
        rtb_TmpSignalConversionAtVITM_h[38] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o6;
        rtb_TmpSignalConversionAtVITM_h[39] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o7;

        /* ModelReference: '<S2>/VITM' */
        VITM(&rtb_TmpSignalConversionAtVITMIn[0], (&(BMS_RawPackVoltage)),
             (&(BMS_RawVehSideVoltage)), &BMShil_B.pcx_CANdb_ReceiveMessage_o4_a,
             (FREAL*)&BMShil_RGND, (FREAL*)&BMShil_RGND,
             &rtb_TmpSignalConversionAtVITM_h[0], &rtCP_Constant_Value,
             &BMShil_B.vitm_CellsMaxTemperature,
             &BMShil_B.vitm_CellsMinTemperature,
             &BMShil_B.vitm_CellsAvgTemperature,
             &BMShil_B.vitm_CellsTemperatureLowFault,
             &BMShil_B.vitm_CellsTemperatureHighFault,
             &BMShil_B.vitm_CellsVoltageLowFault,
             &BMShil_B.vitm_CellsVoltageHighFault,
             &BMShil_B.vitm_PackVoltageFault, &BMShil_B.vitm_CellsMinVoltage,
             &BMShil_B.vitm_CellsMaxVoltage, &BMShil_B.vitm_CellsAvgVoltage,
             &BMShil_B.vitm_PackVoltageFiltered, (&(BMS_RawPackCurrent)),
             &BMShil_B.vitm_PackCurrentFault, &BMShil_B.vitm_CoolantDeltaTemp,
             &BMShil_B.vitm_CoolantInletTempFault,
             &BMShil_B.vitm_CoolantOutlletTempFault,
             &BMShil_B.vitm_CoolantInletTFiltered,
             &BMShil_B.vitm_CoolantOutletTFiltered, &BMShil_B.vitm_HVILFault,
             &BMShil_B.VITM_o21[0], &BMShil_B.VITM_o22[0], &BMShil_B.VITM_o23,
             &(BMShil_DWork.VITM_DWORK1.rtdw), &(BMShil_DWork.VITM_DWORK1.rtzce));

        /* Transition: '<S9>:566' */
        /* Event: '<S9>:27' */

        /* ModelReference: '<S2>/SOC' */
        SOC((&(BMS_RawPackCurrent)), &BMShil_B.VITM_o22[0],
            (&(bsc_MainContactorCmd)), (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4,
            &BMShil_B.SOH_o4[0], &BMShil_B.BSC_o3, &BMShil_B.CB_o1[0],
            &BMShil_B.SOC_o1[0], &BMShil_B.soc_pack_customer,
            &BMShil_B.soc_cell_max, &BMShil_B.soc_cell_min, (&(soc_pack_actual)),
            &BMShil_B.soc_rate_high, &BMShil_B.SOC_o7[0],
            &(BMShil_DWork.SOC_DWORK1.rtb), &(BMShil_DWork.SOC_DWORK1.rtdw));

        /* Transition: '<S9>:553' */
        /* Event: '<S9>:28' */

        /* ModelReference: '<S2>/BSC' */
        BSC((&(bsc_VehiclePSR)), &BMShil_B.Delay1, (&(bsc_KeyValue)),
            (&(soc_pack_actual)), &BMShil_B.DataTypeConversion6,
            &BMShil_B.DataTypeConversion1, &BMShil_B.DataTypeConversion2,
            &BMShil_B.vitm_CellsTemperatureLowFault,
            &BMShil_B.vitm_CellsTemperatureHighFault,
            &BMShil_B.vitm_CellsVoltageLowFault,
            &BMShil_B.vitm_CellsVoltageHighFault,
            &BMShil_B.vitm_PackVoltageFault, &BMShil_B.vitm_PackCurrentFault,
            &BMShil_B.vitm_HVILFault, &BMShil_B.CC_o5, &BMShil_B.BSC_o1,
            &BMShil_B.BSC_o2, &BMShil_B.BSC_o3, &BMShil_B.BSC_o4,
            (&(bsc_ReasonToOpen)), &BMShil_B.BSC_o6, &BMShil_B.BSC_o7,
            (&(bsc_FaultType)), &(BMShil_DWork.BSC_DWORK1.rtb),
            &(BMShil_DWork.BSC_DWORK1.rtdw), &(BMShil_DWork.BSC_DWORK1.rtzce));

        /* Transition: '<S9>:569' */
        /* Event: '<S9>:194' */

        /* ModelReference: '<S2>/SOH' */
        soh((&(BMS_RawPackCurrent)), &BMShil_B.VITM_o22[0], &BMShil_B.SOC_o1[0],
            &BMShil_B.VITM_o21[0], &BMShil_B.SOC_o7[0], (&(bsc_MainContactorCmd)),
            (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4, &BMShil_B.CB_o1[0],
            (&(soh_R_index)), &BMShil_B.SOH_o2[0], (&(soh_C_index)),
            &BMShil_B.SOH_o4[0], &BMShil_B.soh_customer_index,
            &(BMShil_DWork.SOH_DWORK1.rtb), &(BMShil_DWork.SOH_DWORK1.rtdw),
            &(BMShil_DWork.SOH_DWORK1.rtzce));

        /* Transition: '<S9>:559' */
        /* Event: '<S9>:29' */

        /* ModelReference: '<S2>/CC' */
        CC(&BMShil_B.BSC_o2, &BMShil_B.BSC_o3,
           &BMShil_B.vitm_PackVoltageFiltered, &BMShil_B.VITM_o23,
           &rtCP_Constant2_Value, &BMShil_B.CC_o1, (&(bsc_MainContactorCmd)),
           (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4, &BMShil_B.CC_o5,
           &(BMShil_DWork.CC_DWORK1.rtdw), &(BMShil_DWork.CC_DWORK1.rtzce));

        /* Transition: '<S9>:568' */
        /* Event: '<S9>:30' */

        /* ModelReference: '<S2>/BMO' */
        BMO((&(BMS_RawPackCurrent)), (&(bsc_KeyValue)), (&(bsc_ChargerValue)),
            &BMShil_B.CC_o4, (&(bsc_MainContactorCmd)), (&(bsc_ChgContactorCmd)),
            &BMShil_B.BSC_o4, &BMShil_B.bmo_mode, &BMShil_B.BMO_o2,
            &BMShil_B.BMO_o3, &(BMShil_DWork.BMO_DWORK1.rtdw));

        /* Transition: '<S9>:560' */
        /* Event: '<S9>:131' */

        /* ModelReference: '<S2>/BTC' */
        BTC(&BMShil_B.VITM_o21[0], &BMShil_B.SOC_o1[0], &BMShil_B.BMO_o2,
            (&(BMSc_airTemperature)), &BMShil_B.BMO_o3, &rtCP_Constant1_Value,
            &rtCP_Constant1_Value, &BMShil_B.vitm_CellsTemperatureHighFault,
            &BMShil_B.vitm_CellsTemperatureLowFault, (&(btc_coolant_flow_pct)),
            &BMShil_B.btc_batt_target_temp, &BMShil_B.btc_batt_actual_temp,
            &BMShil_B.btc_batt_request_status, &BMShil_B.btc_thermal_condition,
            &(BMShil_DWork.BTC_DWORK1.rtdw));

        /* Transition: '<S9>:561' */
        /* Event: '<S9>:235' */

        /* ModelReference: '<S2>/SOP' */
        sop(&BMShil_B.VITM_o21[0], &BMShil_B.SOC_o1[0], &BMShil_B.BMO_o2,
            &BMShil_B.BMO_o3, &BMShil_B.vitm_CellsTemperatureHighFault,
            &BMShil_B.vitm_PackCurrentFault, &BMShil_B.vitm_PackVoltageFault,
            &BMShil_B.DataTypeConversion2, &BMShil_B.SOH_o2[0],
            &BMShil_B.BattPwLimDischarge, &BMShil_B.BattCurrLimDischarge,
            &BMShil_B.BattPwLimCharge, &BMShil_B.BattCurrLimCharge);

        /* Transition: '<S9>:554' */
        /* Event: '<S9>:301' */

        /* ModelReference: '<S2>/CB' */
        CB(&BMShil_B.SOC_o1[0], &BMShil_B.bmo_mode, &BMShil_B.CB_o1[0],
           &BMShil_B.cb_status);
      } else {
        /* SignalConversion: '<S2>/VITM' */
        /* Transition: '<S9>:546' */
        /* Transition: '<S9>:537' */
        /* Event: '<S9>:25' */
        rtb_TmpSignalConversionAtVITMIn[0] = BMS_CellVoltage;
        rtb_TmpSignalConversionAtVITMIn[1] =
          BMShil_B.pcx_CANdb_ReceiveMessage_o5;
        rtb_TmpSignalConversionAtVITMIn[2] =
          BMShil_B.pcx_CANdb_ReceiveMessage_o6;
        rtb_TmpSignalConversionAtVITMIn[3] =
          BMShil_B.pcx_CANdb_ReceiveMessage_o7;
        rtb_TmpSignalConversionAtVITMIn[4] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o4;
        rtb_TmpSignalConversionAtVITMIn[5] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o5;
        rtb_TmpSignalConversionAtVITMIn[6] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o6;
        rtb_TmpSignalConversionAtVITMIn[7] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o7;
        rtb_TmpSignalConversionAtVITMIn[8] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o4;
        rtb_TmpSignalConversionAtVITMIn[9] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o5;
        rtb_TmpSignalConversionAtVITMIn[10] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o6;
        rtb_TmpSignalConversionAtVITMIn[11] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o7;
        rtb_TmpSignalConversionAtVITMIn[12] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o4;
        rtb_TmpSignalConversionAtVITMIn[13] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o5;
        rtb_TmpSignalConversionAtVITMIn[14] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o6;
        rtb_TmpSignalConversionAtVITMIn[15] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o7;
        rtb_TmpSignalConversionAtVITMIn[16] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o4;
        rtb_TmpSignalConversionAtVITMIn[17] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o5;
        rtb_TmpSignalConversionAtVITMIn[18] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o6;
        rtb_TmpSignalConversionAtVITMIn[19] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o7;
        rtb_TmpSignalConversionAtVITMIn[20] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o4_p;
        rtb_TmpSignalConversionAtVITMIn[21] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o5;
        rtb_TmpSignalConversionAtVITMIn[22] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o6;
        rtb_TmpSignalConversionAtVITMIn[23] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o7;
        rtb_TmpSignalConversionAtVITMIn[24] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o4;
        rtb_TmpSignalConversionAtVITMIn[25] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o5;
        rtb_TmpSignalConversionAtVITMIn[26] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o6;
        rtb_TmpSignalConversionAtVITMIn[27] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o7;
        rtb_TmpSignalConversionAtVITMIn[28] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o4;
        rtb_TmpSignalConversionAtVITMIn[29] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o5;
        rtb_TmpSignalConversionAtVITMIn[30] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o6;
        rtb_TmpSignalConversionAtVITMIn[31] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o7;
        rtb_TmpSignalConversionAtVITMIn[32] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o4;
        rtb_TmpSignalConversionAtVITMIn[33] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o5;
        rtb_TmpSignalConversionAtVITMIn[34] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o6;
        rtb_TmpSignalConversionAtVITMIn[35] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o7;
        rtb_TmpSignalConversionAtVITMIn[36] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o4;
        rtb_TmpSignalConversionAtVITMIn[37] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o5;
        rtb_TmpSignalConversionAtVITMIn[38] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o6;
        rtb_TmpSignalConversionAtVITMIn[39] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o7;

        /* SignalConversion: '<S2>/VITM' */
        rtb_TmpSignalConversionAtVITM_h[0] = BMS_CellTemp;
        rtb_TmpSignalConversionAtVITM_h[1] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o5_o;
        rtb_TmpSignalConversionAtVITM_h[2] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o6_e;
        rtb_TmpSignalConversionAtVITM_h[3] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o7_n;
        rtb_TmpSignalConversionAtVITM_h[4] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o4_e;
        rtb_TmpSignalConversionAtVITM_h[5] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o5_b;
        rtb_TmpSignalConversionAtVITM_h[6] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o6_k;
        rtb_TmpSignalConversionAtVITM_h[7] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o7_p;
        rtb_TmpSignalConversionAtVITM_h[8] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o4_c;
        rtb_TmpSignalConversionAtVITM_h[9] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o5_e;
        rtb_TmpSignalConversionAtVITM_h[10] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o6_p;
        rtb_TmpSignalConversionAtVITM_h[11] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o7_n;
        rtb_TmpSignalConversionAtVITM_h[12] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o4_c;
        rtb_TmpSignalConversionAtVITM_h[13] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o5_e;
        rtb_TmpSignalConversionAtVITM_h[14] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o6_j;
        rtb_TmpSignalConversionAtVITM_h[15] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o7_l;
        rtb_TmpSignalConversionAtVITM_h[16] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o4_h;
        rtb_TmpSignalConversionAtVITM_h[17] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o5_n;
        rtb_TmpSignalConversionAtVITM_h[18] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o6_f;
        rtb_TmpSignalConversionAtVITM_h[19] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o7_e;
        rtb_TmpSignalConversionAtVITM_h[20] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o4;
        rtb_TmpSignalConversionAtVITM_h[21] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o5;
        rtb_TmpSignalConversionAtVITM_h[22] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o6;
        rtb_TmpSignalConversionAtVITM_h[23] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o7;
        rtb_TmpSignalConversionAtVITM_h[24] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o4;
        rtb_TmpSignalConversionAtVITM_h[25] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o5;
        rtb_TmpSignalConversionAtVITM_h[26] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o6;
        rtb_TmpSignalConversionAtVITM_h[27] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o7;
        rtb_TmpSignalConversionAtVITM_h[28] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o4;
        rtb_TmpSignalConversionAtVITM_h[29] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o5;
        rtb_TmpSignalConversionAtVITM_h[30] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o6;
        rtb_TmpSignalConversionAtVITM_h[31] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o7;
        rtb_TmpSignalConversionAtVITM_h[32] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o4;
        rtb_TmpSignalConversionAtVITM_h[33] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o5;
        rtb_TmpSignalConversionAtVITM_h[34] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o6;
        rtb_TmpSignalConversionAtVITM_h[35] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o7;
        rtb_TmpSignalConversionAtVITM_h[36] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o4;
        rtb_TmpSignalConversionAtVITM_h[37] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o5;
        rtb_TmpSignalConversionAtVITM_h[38] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o6;
        rtb_TmpSignalConversionAtVITM_h[39] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o7;

        /* ModelReference: '<S2>/VITM' */
        VITM(&rtb_TmpSignalConversionAtVITMIn[0], (&(BMS_RawPackVoltage)),
             (&(BMS_RawVehSideVoltage)), &BMShil_B.pcx_CANdb_ReceiveMessage_o4_a,
             (FREAL*)&BMShil_RGND, (FREAL*)&BMShil_RGND,
             &rtb_TmpSignalConversionAtVITM_h[0], &rtCP_Constant_Value,
             &BMShil_B.vitm_CellsMaxTemperature,
             &BMShil_B.vitm_CellsMinTemperature,
             &BMShil_B.vitm_CellsAvgTemperature,
             &BMShil_B.vitm_CellsTemperatureLowFault,
             &BMShil_B.vitm_CellsTemperatureHighFault,
             &BMShil_B.vitm_CellsVoltageLowFault,
             &BMShil_B.vitm_CellsVoltageHighFault,
             &BMShil_B.vitm_PackVoltageFault, &BMShil_B.vitm_CellsMinVoltage,
             &BMShil_B.vitm_CellsMaxVoltage, &BMShil_B.vitm_CellsAvgVoltage,
             &BMShil_B.vitm_PackVoltageFiltered, (&(BMS_RawPackCurrent)),
             &BMShil_B.vitm_PackCurrentFault, &BMShil_B.vitm_CoolantDeltaTemp,
             &BMShil_B.vitm_CoolantInletTempFault,
             &BMShil_B.vitm_CoolantOutlletTempFault,
             &BMShil_B.vitm_CoolantInletTFiltered,
             &BMShil_B.vitm_CoolantOutletTFiltered, &BMShil_B.vitm_HVILFault,
             &BMShil_B.VITM_o21[0], &BMShil_B.VITM_o22[0], &BMShil_B.VITM_o23,
             &(BMShil_DWork.VITM_DWORK1.rtdw), &(BMShil_DWork.VITM_DWORK1.rtzce));

        /* Transition: '<S9>:545' */
        /* Event: '<S9>:27' */

        /* ModelReference: '<S2>/SOC' */
        SOC((&(BMS_RawPackCurrent)), &BMShil_B.VITM_o22[0],
            (&(bsc_MainContactorCmd)), (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4,
            &BMShil_B.SOH_o4[0], &BMShil_B.BSC_o3, &BMShil_B.CB_o1[0],
            &BMShil_B.SOC_o1[0], &BMShil_B.soc_pack_customer,
            &BMShil_B.soc_cell_max, &BMShil_B.soc_cell_min, (&(soc_pack_actual)),
            &BMShil_B.soc_rate_high, &BMShil_B.SOC_o7[0],
            &(BMShil_DWork.SOC_DWORK1.rtb), &(BMShil_DWork.SOC_DWORK1.rtdw));

        /* Transition: '<S9>:532' */
        /* Event: '<S9>:28' */

        /* ModelReference: '<S2>/BSC' */
        BSC((&(bsc_VehiclePSR)), &BMShil_B.Delay1, (&(bsc_KeyValue)),
            (&(soc_pack_actual)), &BMShil_B.DataTypeConversion6,
            &BMShil_B.DataTypeConversion1, &BMShil_B.DataTypeConversion2,
            &BMShil_B.vitm_CellsTemperatureLowFault,
            &BMShil_B.vitm_CellsTemperatureHighFault,
            &BMShil_B.vitm_CellsVoltageLowFault,
            &BMShil_B.vitm_CellsVoltageHighFault,
            &BMShil_B.vitm_PackVoltageFault, &BMShil_B.vitm_PackCurrentFault,
            &BMShil_B.vitm_HVILFault, &BMShil_B.CC_o5, &BMShil_B.BSC_o1,
            &BMShil_B.BSC_o2, &BMShil_B.BSC_o3, &BMShil_B.BSC_o4,
            (&(bsc_ReasonToOpen)), &BMShil_B.BSC_o6, &BMShil_B.BSC_o7,
            (&(bsc_FaultType)), &(BMShil_DWork.BSC_DWORK1.rtb),
            &(BMShil_DWork.BSC_DWORK1.rtdw), &(BMShil_DWork.BSC_DWORK1.rtzce));

        /* Transition: '<S9>:548' */
        /* Event: '<S9>:194' */

        /* ModelReference: '<S2>/SOH' */
        soh((&(BMS_RawPackCurrent)), &BMShil_B.VITM_o22[0], &BMShil_B.SOC_o1[0],
            &BMShil_B.VITM_o21[0], &BMShil_B.SOC_o7[0], (&(bsc_MainContactorCmd)),
            (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4, &BMShil_B.CB_o1[0],
            (&(soh_R_index)), &BMShil_B.SOH_o2[0], (&(soh_C_index)),
            &BMShil_B.SOH_o4[0], &BMShil_B.soh_customer_index,
            &(BMShil_DWork.SOH_DWORK1.rtb), &(BMShil_DWork.SOH_DWORK1.rtdw),
            &(BMShil_DWork.SOH_DWORK1.rtzce));

        /* Transition: '<S9>:538' */
        /* Event: '<S9>:29' */

        /* ModelReference: '<S2>/CC' */
        CC(&BMShil_B.BSC_o2, &BMShil_B.BSC_o3,
           &BMShil_B.vitm_PackVoltageFiltered, &BMShil_B.VITM_o23,
           &rtCP_Constant2_Value, &BMShil_B.CC_o1, (&(bsc_MainContactorCmd)),
           (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4, &BMShil_B.CC_o5,
           &(BMShil_DWork.CC_DWORK1.rtdw), &(BMShil_DWork.CC_DWORK1.rtzce));

        /* Transition: '<S9>:547' */
        /* Event: '<S9>:30' */

        /* ModelReference: '<S2>/BMO' */
        BMO((&(BMS_RawPackCurrent)), (&(bsc_KeyValue)), (&(bsc_ChargerValue)),
            &BMShil_B.CC_o4, (&(bsc_MainContactorCmd)), (&(bsc_ChgContactorCmd)),
            &BMShil_B.BSC_o4, &BMShil_B.bmo_mode, &BMShil_B.BMO_o2,
            &BMShil_B.BMO_o3, &(BMShil_DWork.BMO_DWORK1.rtdw));

        /* Transition: '<S9>:539' */
        /* Event: '<S9>:131' */

        /* ModelReference: '<S2>/BTC' */
        BTC(&BMShil_B.VITM_o21[0], &BMShil_B.SOC_o1[0], &BMShil_B.BMO_o2,
            (&(BMSc_airTemperature)), &BMShil_B.BMO_o3, &rtCP_Constant1_Value,
            &rtCP_Constant1_Value, &BMShil_B.vitm_CellsTemperatureHighFault,
            &BMShil_B.vitm_CellsTemperatureLowFault, (&(btc_coolant_flow_pct)),
            &BMShil_B.btc_batt_target_temp, &BMShil_B.btc_batt_actual_temp,
            &BMShil_B.btc_batt_request_status, &BMShil_B.btc_thermal_condition,
            &(BMShil_DWork.BTC_DWORK1.rtdw));

        /* Transition: '<S9>:540' */
        /* Event: '<S9>:235' */

        /* ModelReference: '<S2>/SOP' */
        sop(&BMShil_B.VITM_o21[0], &BMShil_B.SOC_o1[0], &BMShil_B.BMO_o2,
            &BMShil_B.BMO_o3, &BMShil_B.vitm_CellsTemperatureHighFault,
            &BMShil_B.vitm_PackCurrentFault, &BMShil_B.vitm_PackVoltageFault,
            &BMShil_B.DataTypeConversion2, &BMShil_B.SOH_o2[0],
            &BMShil_B.BattPwLimDischarge, &BMShil_B.BattCurrLimDischarge,
            &BMShil_B.BattPwLimCharge, &BMShil_B.BattCurrLimCharge);

        /* Transition: '<S9>:533' */
        /* Event: '<S9>:301' */

        /* ModelReference: '<S2>/CB' */
        CB(&BMShil_B.SOC_o1[0], &BMShil_B.bmo_mode, &BMShil_B.CB_o1[0],
           &BMShil_B.cb_status);
      }
      break;

     default:
      /* During 'no_power': '<S9>:45' */
      if (bsc_KeyValue > 0.5) {
        /* Transition: '<S9>:97' */
        BMShil_DWork.bitsForTID0.is_c3_BMShil = BMShil_IN_init_key;

        /* SignalConversion: '<S2>/VITM' */
        /* Entry Internal 'init_key': '<S9>:1' */
        /* Transition: '<S9>:95' */
        /* Transition: '<S9>:84' */
        /* Event: '<S9>:25' */
        rtb_TmpSignalConversionAtVITMIn[0] = BMS_CellVoltage;
        rtb_TmpSignalConversionAtVITMIn[1] =
          BMShil_B.pcx_CANdb_ReceiveMessage_o5;
        rtb_TmpSignalConversionAtVITMIn[2] =
          BMShil_B.pcx_CANdb_ReceiveMessage_o6;
        rtb_TmpSignalConversionAtVITMIn[3] =
          BMShil_B.pcx_CANdb_ReceiveMessage_o7;
        rtb_TmpSignalConversionAtVITMIn[4] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o4;
        rtb_TmpSignalConversionAtVITMIn[5] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o5;
        rtb_TmpSignalConversionAtVITMIn[6] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o6;
        rtb_TmpSignalConversionAtVITMIn[7] =
          BMShil_B.pcx_CANdb_ReceiveMessage1_o7;
        rtb_TmpSignalConversionAtVITMIn[8] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o4;
        rtb_TmpSignalConversionAtVITMIn[9] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o5;
        rtb_TmpSignalConversionAtVITMIn[10] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o6;
        rtb_TmpSignalConversionAtVITMIn[11] =
          BMShil_B.pcx_CANdb_ReceiveMessage2_o7;
        rtb_TmpSignalConversionAtVITMIn[12] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o4;
        rtb_TmpSignalConversionAtVITMIn[13] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o5;
        rtb_TmpSignalConversionAtVITMIn[14] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o6;
        rtb_TmpSignalConversionAtVITMIn[15] =
          BMShil_B.pcx_CANdb_ReceiveMessage3_o7;
        rtb_TmpSignalConversionAtVITMIn[16] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o4;
        rtb_TmpSignalConversionAtVITMIn[17] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o5;
        rtb_TmpSignalConversionAtVITMIn[18] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o6;
        rtb_TmpSignalConversionAtVITMIn[19] =
          BMShil_B.pcx_CANdb_ReceiveMessage4_o7;
        rtb_TmpSignalConversionAtVITMIn[20] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o4_p;
        rtb_TmpSignalConversionAtVITMIn[21] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o5;
        rtb_TmpSignalConversionAtVITMIn[22] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o6;
        rtb_TmpSignalConversionAtVITMIn[23] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o7;
        rtb_TmpSignalConversionAtVITMIn[24] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o4;
        rtb_TmpSignalConversionAtVITMIn[25] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o5;
        rtb_TmpSignalConversionAtVITMIn[26] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o6;
        rtb_TmpSignalConversionAtVITMIn[27] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o7;
        rtb_TmpSignalConversionAtVITMIn[28] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o4;
        rtb_TmpSignalConversionAtVITMIn[29] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o5;
        rtb_TmpSignalConversionAtVITMIn[30] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o6;
        rtb_TmpSignalConversionAtVITMIn[31] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o7;
        rtb_TmpSignalConversionAtVITMIn[32] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o4;
        rtb_TmpSignalConversionAtVITMIn[33] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o5;
        rtb_TmpSignalConversionAtVITMIn[34] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o6;
        rtb_TmpSignalConversionAtVITMIn[35] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o7;
        rtb_TmpSignalConversionAtVITMIn[36] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o4;
        rtb_TmpSignalConversionAtVITMIn[37] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o5;
        rtb_TmpSignalConversionAtVITMIn[38] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o6;
        rtb_TmpSignalConversionAtVITMIn[39] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o7;

        /* SignalConversion: '<S2>/VITM' */
        rtb_TmpSignalConversionAtVITM_h[0] = BMS_CellTemp;
        rtb_TmpSignalConversionAtVITM_h[1] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o5_o;
        rtb_TmpSignalConversionAtVITM_h[2] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o6_e;
        rtb_TmpSignalConversionAtVITM_h[3] =
          BMShil_B.pcx_CANdb_ReceiveMessage5_o7_n;
        rtb_TmpSignalConversionAtVITM_h[4] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o4_e;
        rtb_TmpSignalConversionAtVITM_h[5] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o5_b;
        rtb_TmpSignalConversionAtVITM_h[6] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o6_k;
        rtb_TmpSignalConversionAtVITM_h[7] =
          BMShil_B.pcx_CANdb_ReceiveMessage6_o7_p;
        rtb_TmpSignalConversionAtVITM_h[8] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o4_c;
        rtb_TmpSignalConversionAtVITM_h[9] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o5_e;
        rtb_TmpSignalConversionAtVITM_h[10] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o6_p;
        rtb_TmpSignalConversionAtVITM_h[11] =
          BMShil_B.pcx_CANdb_ReceiveMessage7_o7_n;
        rtb_TmpSignalConversionAtVITM_h[12] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o4_c;
        rtb_TmpSignalConversionAtVITM_h[13] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o5_e;
        rtb_TmpSignalConversionAtVITM_h[14] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o6_j;
        rtb_TmpSignalConversionAtVITM_h[15] =
          BMShil_B.pcx_CANdb_ReceiveMessage8_o7_l;
        rtb_TmpSignalConversionAtVITM_h[16] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o4_h;
        rtb_TmpSignalConversionAtVITM_h[17] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o5_n;
        rtb_TmpSignalConversionAtVITM_h[18] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o6_f;
        rtb_TmpSignalConversionAtVITM_h[19] =
          BMShil_B.pcx_CANdb_ReceiveMessage9_o7_e;
        rtb_TmpSignalConversionAtVITM_h[20] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o4;
        rtb_TmpSignalConversionAtVITM_h[21] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o5;
        rtb_TmpSignalConversionAtVITM_h[22] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o6;
        rtb_TmpSignalConversionAtVITM_h[23] =
          BMShil_B.pcx_CANdb_ReceiveMessage10_o7;
        rtb_TmpSignalConversionAtVITM_h[24] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o4;
        rtb_TmpSignalConversionAtVITM_h[25] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o5;
        rtb_TmpSignalConversionAtVITM_h[26] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o6;
        rtb_TmpSignalConversionAtVITM_h[27] =
          BMShil_B.pcx_CANdb_ReceiveMessage11_o7;
        rtb_TmpSignalConversionAtVITM_h[28] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o4;
        rtb_TmpSignalConversionAtVITM_h[29] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o5;
        rtb_TmpSignalConversionAtVITM_h[30] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o6;
        rtb_TmpSignalConversionAtVITM_h[31] =
          BMShil_B.pcx_CANdb_ReceiveMessage12_o7;
        rtb_TmpSignalConversionAtVITM_h[32] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o4;
        rtb_TmpSignalConversionAtVITM_h[33] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o5;
        rtb_TmpSignalConversionAtVITM_h[34] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o6;
        rtb_TmpSignalConversionAtVITM_h[35] =
          BMShil_B.pcx_CANdb_ReceiveMessage13_o7;
        rtb_TmpSignalConversionAtVITM_h[36] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o4;
        rtb_TmpSignalConversionAtVITM_h[37] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o5;
        rtb_TmpSignalConversionAtVITM_h[38] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o6;
        rtb_TmpSignalConversionAtVITM_h[39] =
          BMShil_B.pcx_CANdb_ReceiveMessage14_o7;

        /* ModelReference: '<S2>/VITM' */
        VITM(&rtb_TmpSignalConversionAtVITMIn[0], (&(BMS_RawPackVoltage)),
             (&(BMS_RawVehSideVoltage)), &BMShil_B.pcx_CANdb_ReceiveMessage_o4_a,
             (FREAL*)&BMShil_RGND, (FREAL*)&BMShil_RGND,
             &rtb_TmpSignalConversionAtVITM_h[0], &rtCP_Constant_Value,
             &BMShil_B.vitm_CellsMaxTemperature,
             &BMShil_B.vitm_CellsMinTemperature,
             &BMShil_B.vitm_CellsAvgTemperature,
             &BMShil_B.vitm_CellsTemperatureLowFault,
             &BMShil_B.vitm_CellsTemperatureHighFault,
             &BMShil_B.vitm_CellsVoltageLowFault,
             &BMShil_B.vitm_CellsVoltageHighFault,
             &BMShil_B.vitm_PackVoltageFault, &BMShil_B.vitm_CellsMinVoltage,
             &BMShil_B.vitm_CellsMaxVoltage, &BMShil_B.vitm_CellsAvgVoltage,
             &BMShil_B.vitm_PackVoltageFiltered, (&(BMS_RawPackCurrent)),
             &BMShil_B.vitm_PackCurrentFault, &BMShil_B.vitm_CoolantDeltaTemp,
             &BMShil_B.vitm_CoolantInletTempFault,
             &BMShil_B.vitm_CoolantOutlletTempFault,
             &BMShil_B.vitm_CoolantInletTFiltered,
             &BMShil_B.vitm_CoolantOutletTFiltered, &BMShil_B.vitm_HVILFault,
             &BMShil_B.VITM_o21[0], &BMShil_B.VITM_o22[0], &BMShil_B.VITM_o23,
             &(BMShil_DWork.VITM_DWORK1.rtdw), &(BMShil_DWork.VITM_DWORK1.rtzce));

        /* Transition: '<S9>:100' */
        /* Event: '<S9>:27' */

        /* ModelReference: '<S2>/SOC' */
        SOC((&(BMS_RawPackCurrent)), &BMShil_B.VITM_o22[0],
            (&(bsc_MainContactorCmd)), (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4,
            &BMShil_B.SOH_o4[0], &BMShil_B.BSC_o3, &BMShil_B.CB_o1[0],
            &BMShil_B.SOC_o1[0], &BMShil_B.soc_pack_customer,
            &BMShil_B.soc_cell_max, &BMShil_B.soc_cell_min, (&(soc_pack_actual)),
            &BMShil_B.soc_rate_high, &BMShil_B.SOC_o7[0],
            &(BMShil_DWork.SOC_DWORK1.rtb), &(BMShil_DWork.SOC_DWORK1.rtdw));

        /* Transition: '<S9>:86' */
        /* Event: '<S9>:28' */

        /* ModelReference: '<S2>/BSC' */
        BSC((&(bsc_VehiclePSR)), &BMShil_B.Delay1, (&(bsc_KeyValue)),
            (&(soc_pack_actual)), &BMShil_B.DataTypeConversion6,
            &BMShil_B.DataTypeConversion1, &BMShil_B.DataTypeConversion2,
            &BMShil_B.vitm_CellsTemperatureLowFault,
            &BMShil_B.vitm_CellsTemperatureHighFault,
            &BMShil_B.vitm_CellsVoltageLowFault,
            &BMShil_B.vitm_CellsVoltageHighFault,
            &BMShil_B.vitm_PackVoltageFault, &BMShil_B.vitm_PackCurrentFault,
            &BMShil_B.vitm_HVILFault, &BMShil_B.CC_o5, &BMShil_B.BSC_o1,
            &BMShil_B.BSC_o2, &BMShil_B.BSC_o3, &BMShil_B.BSC_o4,
            (&(bsc_ReasonToOpen)), &BMShil_B.BSC_o6, &BMShil_B.BSC_o7,
            (&(bsc_FaultType)), &(BMShil_DWork.BSC_DWORK1.rtb),
            &(BMShil_DWork.BSC_DWORK1.rtdw), &(BMShil_DWork.BSC_DWORK1.rtzce));

        /* Transition: '<S9>:528' */
        /* Event: '<S9>:194' */

        /* ModelReference: '<S2>/SOH' */
        soh((&(BMS_RawPackCurrent)), &BMShil_B.VITM_o22[0], &BMShil_B.SOC_o1[0],
            &BMShil_B.VITM_o21[0], &BMShil_B.SOC_o7[0], (&(bsc_MainContactorCmd)),
            (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4, &BMShil_B.CB_o1[0],
            (&(soh_R_index)), &BMShil_B.SOH_o2[0], (&(soh_C_index)),
            &BMShil_B.SOH_o4[0], &BMShil_B.soh_customer_index,
            &(BMShil_DWork.SOH_DWORK1.rtb), &(BMShil_DWork.SOH_DWORK1.rtdw),
            &(BMShil_DWork.SOH_DWORK1.rtzce));

        /* Transition: '<S9>:91' */
        /* Event: '<S9>:29' */

        /* ModelReference: '<S2>/CC' */
        CC(&BMShil_B.BSC_o2, &BMShil_B.BSC_o3,
           &BMShil_B.vitm_PackVoltageFiltered, &BMShil_B.VITM_o23,
           &rtCP_Constant2_Value, &BMShil_B.CC_o1, (&(bsc_MainContactorCmd)),
           (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4, &BMShil_B.CC_o5,
           &(BMShil_DWork.CC_DWORK1.rtdw), &(BMShil_DWork.CC_DWORK1.rtzce));

        /* Transition: '<S9>:93' */
        /* Event: '<S9>:30' */

        /* ModelReference: '<S2>/BMO' */
        BMO((&(BMS_RawPackCurrent)), (&(bsc_KeyValue)), (&(bsc_ChargerValue)),
            &BMShil_B.CC_o4, (&(bsc_MainContactorCmd)), (&(bsc_ChgContactorCmd)),
            &BMShil_B.BSC_o4, &BMShil_B.bmo_mode, &BMShil_B.BMO_o2,
            &BMShil_B.BMO_o3, &(BMShil_DWork.BMO_DWORK1.rtdw));

        /* Transition: '<S9>:92' */
        /* Event: '<S9>:131' */

        /* ModelReference: '<S2>/BTC' */
        BTC(&BMShil_B.VITM_o21[0], &BMShil_B.SOC_o1[0], &BMShil_B.BMO_o2,
            (&(BMSc_airTemperature)), &BMShil_B.BMO_o3, &rtCP_Constant1_Value,
            &rtCP_Constant1_Value, &BMShil_B.vitm_CellsTemperatureHighFault,
            &BMShil_B.vitm_CellsTemperatureLowFault, (&(btc_coolant_flow_pct)),
            &BMShil_B.btc_batt_target_temp, &BMShil_B.btc_batt_actual_temp,
            &BMShil_B.btc_batt_request_status, &BMShil_B.btc_thermal_condition,
            &(BMShil_DWork.BTC_DWORK1.rtdw));

        /* Transition: '<S9>:196' */
        /* Event: '<S9>:235' */

        /* ModelReference: '<S2>/SOP' */
        sop(&BMShil_B.VITM_o21[0], &BMShil_B.SOC_o1[0], &BMShil_B.BMO_o2,
            &BMShil_B.BMO_o3, &BMShil_B.vitm_CellsTemperatureHighFault,
            &BMShil_B.vitm_PackCurrentFault, &BMShil_B.vitm_PackVoltageFault,
            &BMShil_B.DataTypeConversion2, &BMShil_B.SOH_o2[0],
            &BMShil_B.BattPwLimDischarge, &BMShil_B.BattCurrLimDischarge,
            &BMShil_B.BattPwLimCharge, &BMShil_B.BattCurrLimCharge);

        /* Transition: '<S9>:237' */
        /* Event: '<S9>:301' */

        /* ModelReference: '<S2>/CB' */
        CB(&BMShil_B.SOC_o1[0], &BMShil_B.bmo_mode, &BMShil_B.CB_o1[0],
           &BMShil_B.cb_status);
      } else {
        if (bsc_ChargerValue > 0.5) {
          /* Transition: '<S9>:525' */
          BMShil_DWork.bitsForTID0.is_c3_BMShil = BMShil_IN_init_chg;

          /* SignalConversion: '<S2>/VITM' */
          /* Entry Internal 'init_chg': '<S9>:457' */
          /* Transition: '<S9>:588' */
          /* Transition: '<S9>:579' */
          /* Event: '<S9>:25' */
          rtb_TmpSignalConversionAtVITMIn[0] = BMS_CellVoltage;
          rtb_TmpSignalConversionAtVITMIn[1] =
            BMShil_B.pcx_CANdb_ReceiveMessage_o5;
          rtb_TmpSignalConversionAtVITMIn[2] =
            BMShil_B.pcx_CANdb_ReceiveMessage_o6;
          rtb_TmpSignalConversionAtVITMIn[3] =
            BMShil_B.pcx_CANdb_ReceiveMessage_o7;
          rtb_TmpSignalConversionAtVITMIn[4] =
            BMShil_B.pcx_CANdb_ReceiveMessage1_o4;
          rtb_TmpSignalConversionAtVITMIn[5] =
            BMShil_B.pcx_CANdb_ReceiveMessage1_o5;
          rtb_TmpSignalConversionAtVITMIn[6] =
            BMShil_B.pcx_CANdb_ReceiveMessage1_o6;
          rtb_TmpSignalConversionAtVITMIn[7] =
            BMShil_B.pcx_CANdb_ReceiveMessage1_o7;
          rtb_TmpSignalConversionAtVITMIn[8] =
            BMShil_B.pcx_CANdb_ReceiveMessage2_o4;
          rtb_TmpSignalConversionAtVITMIn[9] =
            BMShil_B.pcx_CANdb_ReceiveMessage2_o5;
          rtb_TmpSignalConversionAtVITMIn[10] =
            BMShil_B.pcx_CANdb_ReceiveMessage2_o6;
          rtb_TmpSignalConversionAtVITMIn[11] =
            BMShil_B.pcx_CANdb_ReceiveMessage2_o7;
          rtb_TmpSignalConversionAtVITMIn[12] =
            BMShil_B.pcx_CANdb_ReceiveMessage3_o4;
          rtb_TmpSignalConversionAtVITMIn[13] =
            BMShil_B.pcx_CANdb_ReceiveMessage3_o5;
          rtb_TmpSignalConversionAtVITMIn[14] =
            BMShil_B.pcx_CANdb_ReceiveMessage3_o6;
          rtb_TmpSignalConversionAtVITMIn[15] =
            BMShil_B.pcx_CANdb_ReceiveMessage3_o7;
          rtb_TmpSignalConversionAtVITMIn[16] =
            BMShil_B.pcx_CANdb_ReceiveMessage4_o4;
          rtb_TmpSignalConversionAtVITMIn[17] =
            BMShil_B.pcx_CANdb_ReceiveMessage4_o5;
          rtb_TmpSignalConversionAtVITMIn[18] =
            BMShil_B.pcx_CANdb_ReceiveMessage4_o6;
          rtb_TmpSignalConversionAtVITMIn[19] =
            BMShil_B.pcx_CANdb_ReceiveMessage4_o7;
          rtb_TmpSignalConversionAtVITMIn[20] =
            BMShil_B.pcx_CANdb_ReceiveMessage5_o4_p;
          rtb_TmpSignalConversionAtVITMIn[21] =
            BMShil_B.pcx_CANdb_ReceiveMessage5_o5;
          rtb_TmpSignalConversionAtVITMIn[22] =
            BMShil_B.pcx_CANdb_ReceiveMessage5_o6;
          rtb_TmpSignalConversionAtVITMIn[23] =
            BMShil_B.pcx_CANdb_ReceiveMessage5_o7;
          rtb_TmpSignalConversionAtVITMIn[24] =
            BMShil_B.pcx_CANdb_ReceiveMessage6_o4;
          rtb_TmpSignalConversionAtVITMIn[25] =
            BMShil_B.pcx_CANdb_ReceiveMessage6_o5;
          rtb_TmpSignalConversionAtVITMIn[26] =
            BMShil_B.pcx_CANdb_ReceiveMessage6_o6;
          rtb_TmpSignalConversionAtVITMIn[27] =
            BMShil_B.pcx_CANdb_ReceiveMessage6_o7;
          rtb_TmpSignalConversionAtVITMIn[28] =
            BMShil_B.pcx_CANdb_ReceiveMessage7_o4;
          rtb_TmpSignalConversionAtVITMIn[29] =
            BMShil_B.pcx_CANdb_ReceiveMessage7_o5;
          rtb_TmpSignalConversionAtVITMIn[30] =
            BMShil_B.pcx_CANdb_ReceiveMessage7_o6;
          rtb_TmpSignalConversionAtVITMIn[31] =
            BMShil_B.pcx_CANdb_ReceiveMessage7_o7;
          rtb_TmpSignalConversionAtVITMIn[32] =
            BMShil_B.pcx_CANdb_ReceiveMessage8_o4;
          rtb_TmpSignalConversionAtVITMIn[33] =
            BMShil_B.pcx_CANdb_ReceiveMessage8_o5;
          rtb_TmpSignalConversionAtVITMIn[34] =
            BMShil_B.pcx_CANdb_ReceiveMessage8_o6;
          rtb_TmpSignalConversionAtVITMIn[35] =
            BMShil_B.pcx_CANdb_ReceiveMessage8_o7;
          rtb_TmpSignalConversionAtVITMIn[36] =
            BMShil_B.pcx_CANdb_ReceiveMessage9_o4;
          rtb_TmpSignalConversionAtVITMIn[37] =
            BMShil_B.pcx_CANdb_ReceiveMessage9_o5;
          rtb_TmpSignalConversionAtVITMIn[38] =
            BMShil_B.pcx_CANdb_ReceiveMessage9_o6;
          rtb_TmpSignalConversionAtVITMIn[39] =
            BMShil_B.pcx_CANdb_ReceiveMessage9_o7;

          /* SignalConversion: '<S2>/VITM' */
          rtb_TmpSignalConversionAtVITM_h[0] = BMS_CellTemp;
          rtb_TmpSignalConversionAtVITM_h[1] =
            BMShil_B.pcx_CANdb_ReceiveMessage5_o5_o;
          rtb_TmpSignalConversionAtVITM_h[2] =
            BMShil_B.pcx_CANdb_ReceiveMessage5_o6_e;
          rtb_TmpSignalConversionAtVITM_h[3] =
            BMShil_B.pcx_CANdb_ReceiveMessage5_o7_n;
          rtb_TmpSignalConversionAtVITM_h[4] =
            BMShil_B.pcx_CANdb_ReceiveMessage6_o4_e;
          rtb_TmpSignalConversionAtVITM_h[5] =
            BMShil_B.pcx_CANdb_ReceiveMessage6_o5_b;
          rtb_TmpSignalConversionAtVITM_h[6] =
            BMShil_B.pcx_CANdb_ReceiveMessage6_o6_k;
          rtb_TmpSignalConversionAtVITM_h[7] =
            BMShil_B.pcx_CANdb_ReceiveMessage6_o7_p;
          rtb_TmpSignalConversionAtVITM_h[8] =
            BMShil_B.pcx_CANdb_ReceiveMessage7_o4_c;
          rtb_TmpSignalConversionAtVITM_h[9] =
            BMShil_B.pcx_CANdb_ReceiveMessage7_o5_e;
          rtb_TmpSignalConversionAtVITM_h[10] =
            BMShil_B.pcx_CANdb_ReceiveMessage7_o6_p;
          rtb_TmpSignalConversionAtVITM_h[11] =
            BMShil_B.pcx_CANdb_ReceiveMessage7_o7_n;
          rtb_TmpSignalConversionAtVITM_h[12] =
            BMShil_B.pcx_CANdb_ReceiveMessage8_o4_c;
          rtb_TmpSignalConversionAtVITM_h[13] =
            BMShil_B.pcx_CANdb_ReceiveMessage8_o5_e;
          rtb_TmpSignalConversionAtVITM_h[14] =
            BMShil_B.pcx_CANdb_ReceiveMessage8_o6_j;
          rtb_TmpSignalConversionAtVITM_h[15] =
            BMShil_B.pcx_CANdb_ReceiveMessage8_o7_l;
          rtb_TmpSignalConversionAtVITM_h[16] =
            BMShil_B.pcx_CANdb_ReceiveMessage9_o4_h;
          rtb_TmpSignalConversionAtVITM_h[17] =
            BMShil_B.pcx_CANdb_ReceiveMessage9_o5_n;
          rtb_TmpSignalConversionAtVITM_h[18] =
            BMShil_B.pcx_CANdb_ReceiveMessage9_o6_f;
          rtb_TmpSignalConversionAtVITM_h[19] =
            BMShil_B.pcx_CANdb_ReceiveMessage9_o7_e;
          rtb_TmpSignalConversionAtVITM_h[20] =
            BMShil_B.pcx_CANdb_ReceiveMessage10_o4;
          rtb_TmpSignalConversionAtVITM_h[21] =
            BMShil_B.pcx_CANdb_ReceiveMessage10_o5;
          rtb_TmpSignalConversionAtVITM_h[22] =
            BMShil_B.pcx_CANdb_ReceiveMessage10_o6;
          rtb_TmpSignalConversionAtVITM_h[23] =
            BMShil_B.pcx_CANdb_ReceiveMessage10_o7;
          rtb_TmpSignalConversionAtVITM_h[24] =
            BMShil_B.pcx_CANdb_ReceiveMessage11_o4;
          rtb_TmpSignalConversionAtVITM_h[25] =
            BMShil_B.pcx_CANdb_ReceiveMessage11_o5;
          rtb_TmpSignalConversionAtVITM_h[26] =
            BMShil_B.pcx_CANdb_ReceiveMessage11_o6;
          rtb_TmpSignalConversionAtVITM_h[27] =
            BMShil_B.pcx_CANdb_ReceiveMessage11_o7;
          rtb_TmpSignalConversionAtVITM_h[28] =
            BMShil_B.pcx_CANdb_ReceiveMessage12_o4;
          rtb_TmpSignalConversionAtVITM_h[29] =
            BMShil_B.pcx_CANdb_ReceiveMessage12_o5;
          rtb_TmpSignalConversionAtVITM_h[30] =
            BMShil_B.pcx_CANdb_ReceiveMessage12_o6;
          rtb_TmpSignalConversionAtVITM_h[31] =
            BMShil_B.pcx_CANdb_ReceiveMessage12_o7;
          rtb_TmpSignalConversionAtVITM_h[32] =
            BMShil_B.pcx_CANdb_ReceiveMessage13_o4;
          rtb_TmpSignalConversionAtVITM_h[33] =
            BMShil_B.pcx_CANdb_ReceiveMessage13_o5;
          rtb_TmpSignalConversionAtVITM_h[34] =
            BMShil_B.pcx_CANdb_ReceiveMessage13_o6;
          rtb_TmpSignalConversionAtVITM_h[35] =
            BMShil_B.pcx_CANdb_ReceiveMessage13_o7;
          rtb_TmpSignalConversionAtVITM_h[36] =
            BMShil_B.pcx_CANdb_ReceiveMessage14_o4;
          rtb_TmpSignalConversionAtVITM_h[37] =
            BMShil_B.pcx_CANdb_ReceiveMessage14_o5;
          rtb_TmpSignalConversionAtVITM_h[38] =
            BMShil_B.pcx_CANdb_ReceiveMessage14_o6;
          rtb_TmpSignalConversionAtVITM_h[39] =
            BMShil_B.pcx_CANdb_ReceiveMessage14_o7;

          /* ModelReference: '<S2>/VITM' */
          VITM(&rtb_TmpSignalConversionAtVITMIn[0], (&(BMS_RawPackVoltage)),
               (&(BMS_RawVehSideVoltage)),
               &BMShil_B.pcx_CANdb_ReceiveMessage_o4_a, (FREAL*)&BMShil_RGND,
               (FREAL*)&BMShil_RGND, &rtb_TmpSignalConversionAtVITM_h[0],
               &rtCP_Constant_Value, &BMShil_B.vitm_CellsMaxTemperature,
               &BMShil_B.vitm_CellsMinTemperature,
               &BMShil_B.vitm_CellsAvgTemperature,
               &BMShil_B.vitm_CellsTemperatureLowFault,
               &BMShil_B.vitm_CellsTemperatureHighFault,
               &BMShil_B.vitm_CellsVoltageLowFault,
               &BMShil_B.vitm_CellsVoltageHighFault,
               &BMShil_B.vitm_PackVoltageFault, &BMShil_B.vitm_CellsMinVoltage,
               &BMShil_B.vitm_CellsMaxVoltage, &BMShil_B.vitm_CellsAvgVoltage,
               &BMShil_B.vitm_PackVoltageFiltered, (&(BMS_RawPackCurrent)),
               &BMShil_B.vitm_PackCurrentFault, &BMShil_B.vitm_CoolantDeltaTemp,
               &BMShil_B.vitm_CoolantInletTempFault,
               &BMShil_B.vitm_CoolantOutlletTempFault,
               &BMShil_B.vitm_CoolantInletTFiltered,
               &BMShil_B.vitm_CoolantOutletTFiltered, &BMShil_B.vitm_HVILFault,
               &BMShil_B.VITM_o21[0], &BMShil_B.VITM_o22[0], &BMShil_B.VITM_o23,
               &(BMShil_DWork.VITM_DWORK1.rtdw),
               &(BMShil_DWork.VITM_DWORK1.rtzce));

          /* Transition: '<S9>:587' */
          /* Event: '<S9>:27' */

          /* ModelReference: '<S2>/SOC' */
          SOC((&(BMS_RawPackCurrent)), &BMShil_B.VITM_o22[0],
              (&(bsc_MainContactorCmd)), (&(bsc_ChgContactorCmd)),
              &BMShil_B.CC_o4, &BMShil_B.SOH_o4[0], &BMShil_B.BSC_o3,
              &BMShil_B.CB_o1[0], &BMShil_B.SOC_o1[0],
              &BMShil_B.soc_pack_customer, &BMShil_B.soc_cell_max,
              &BMShil_B.soc_cell_min, (&(soc_pack_actual)),
              &BMShil_B.soc_rate_high, &BMShil_B.SOC_o7[0],
              &(BMShil_DWork.SOC_DWORK1.rtb), &(BMShil_DWork.SOC_DWORK1.rtdw));

          /* Transition: '<S9>:574' */
          /* Event: '<S9>:28' */

          /* ModelReference: '<S2>/BSC' */
          BSC((&(bsc_VehiclePSR)), &BMShil_B.Delay1, (&(bsc_KeyValue)),
              (&(soc_pack_actual)), &BMShil_B.DataTypeConversion6,
              &BMShil_B.DataTypeConversion1, &BMShil_B.DataTypeConversion2,
              &BMShil_B.vitm_CellsTemperatureLowFault,
              &BMShil_B.vitm_CellsTemperatureHighFault,
              &BMShil_B.vitm_CellsVoltageLowFault,
              &BMShil_B.vitm_CellsVoltageHighFault,
              &BMShil_B.vitm_PackVoltageFault, &BMShil_B.vitm_PackCurrentFault,
              &BMShil_B.vitm_HVILFault, &BMShil_B.CC_o5, &BMShil_B.BSC_o1,
              &BMShil_B.BSC_o2, &BMShil_B.BSC_o3, &BMShil_B.BSC_o4,
              (&(bsc_ReasonToOpen)), &BMShil_B.BSC_o6, &BMShil_B.BSC_o7,
              (&(bsc_FaultType)), &(BMShil_DWork.BSC_DWORK1.rtb),
              &(BMShil_DWork.BSC_DWORK1.rtdw), &(BMShil_DWork.BSC_DWORK1.rtzce));

          /* Transition: '<S9>:590' */
          /* Event: '<S9>:194' */

          /* ModelReference: '<S2>/SOH' */
          soh((&(BMS_RawPackCurrent)), &BMShil_B.VITM_o22[0], &BMShil_B.SOC_o1[0],
              &BMShil_B.VITM_o21[0], &BMShil_B.SOC_o7[0],
              (&(bsc_MainContactorCmd)), (&(bsc_ChgContactorCmd)),
              &BMShil_B.CC_o4, &BMShil_B.CB_o1[0], (&(soh_R_index)),
              &BMShil_B.SOH_o2[0], (&(soh_C_index)), &BMShil_B.SOH_o4[0],
              &BMShil_B.soh_customer_index, &(BMShil_DWork.SOH_DWORK1.rtb),
              &(BMShil_DWork.SOH_DWORK1.rtdw), &(BMShil_DWork.SOH_DWORK1.rtzce));

          /* Transition: '<S9>:580' */
          /* Event: '<S9>:29' */

          /* ModelReference: '<S2>/CC' */
          CC(&BMShil_B.BSC_o2, &BMShil_B.BSC_o3,
             &BMShil_B.vitm_PackVoltageFiltered, &BMShil_B.VITM_o23,
             &rtCP_Constant2_Value, &BMShil_B.CC_o1, (&(bsc_MainContactorCmd)),
             (&(bsc_ChgContactorCmd)), &BMShil_B.CC_o4, &BMShil_B.CC_o5,
             &(BMShil_DWork.CC_DWORK1.rtdw), &(BMShil_DWork.CC_DWORK1.rtzce));

          /* Transition: '<S9>:589' */
          /* Event: '<S9>:30' */

          /* ModelReference: '<S2>/BMO' */
          BMO((&(BMS_RawPackCurrent)), (&(bsc_KeyValue)), (&(bsc_ChargerValue)),
              &BMShil_B.CC_o4, (&(bsc_MainContactorCmd)), (&(bsc_ChgContactorCmd)),
              &BMShil_B.BSC_o4, &BMShil_B.bmo_mode, &BMShil_B.BMO_o2,
              &BMShil_B.BMO_o3, &(BMShil_DWork.BMO_DWORK1.rtdw));

          /* Transition: '<S9>:581' */
          /* Event: '<S9>:131' */

          /* ModelReference: '<S2>/BTC' */
          BTC(&BMShil_B.VITM_o21[0], &BMShil_B.SOC_o1[0], &BMShil_B.BMO_o2,
              (&(BMSc_airTemperature)), &BMShil_B.BMO_o3, &rtCP_Constant1_Value,
              &rtCP_Constant1_Value, &BMShil_B.vitm_CellsTemperatureHighFault,
              &BMShil_B.vitm_CellsTemperatureLowFault, (&(btc_coolant_flow_pct)),
              &BMShil_B.btc_batt_target_temp, &BMShil_B.btc_batt_actual_temp,
              &BMShil_B.btc_batt_request_status, &BMShil_B.btc_thermal_condition,
              &(BMShil_DWork.BTC_DWORK1.rtdw));

          /* Transition: '<S9>:582' */
          /* Event: '<S9>:235' */

          /* ModelReference: '<S2>/SOP' */
          sop(&BMShil_B.VITM_o21[0], &BMShil_B.SOC_o1[0], &BMShil_B.BMO_o2,
              &BMShil_B.BMO_o3, &BMShil_B.vitm_CellsTemperatureHighFault,
              &BMShil_B.vitm_PackCurrentFault, &BMShil_B.vitm_PackVoltageFault,
              &BMShil_B.DataTypeConversion2, &BMShil_B.SOH_o2[0],
              &BMShil_B.BattPwLimDischarge, &BMShil_B.BattCurrLimDischarge,
              &BMShil_B.BattPwLimCharge, &BMShil_B.BattCurrLimCharge);

          /* Transition: '<S9>:575' */
          /* Event: '<S9>:301' */

          /* ModelReference: '<S2>/CB' */
          CB(&BMShil_B.SOC_o1[0], &BMShil_B.bmo_mode, &BMShil_B.CB_o1[0],
             &BMShil_B.cb_status);
        }
      }
      break;
    }
  }

  /* End of Chart: '<S2>/Chart' */
  /* S-Function Block: <S4>/pcx_CANdb_TransmitMessage
   * [$Id: pcx_candb_transmit_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    BOOL retval;
    F32 pcx_CANdb_TransmitMessage_in_port_buffer[4];
    F32 * pcx_CANdb_TransmitMessage_in_port_ptr[4];
    static const U8 pcx_CANdb_TransmitMessage_field_start_pos[4] = {
      7, 23, 39, 55, };

    static const U8 pcx_CANdb_TransmitMessage_field_width[4] = {
      16, 16, 16, 16, };

    static const U8 pcx_CANdb_TransmitMessage_field_is_signed[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_TransmitMessage_field_valtype[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_TransmitMessage_field_order[4] = {
      0, 0, 0, 0, };

    static const F32 pcx_CANdb_TransmitMessage_field_eng_min[4] = {
      0.0, 0.0, 0.0, 0.0, };

    static const F32 pcx_CANdb_TransmitMessage_field_eng_max[4] = {
      100.0, 100.0, 100.0, 100.0, };

    static const F32 pcx_CANdb_TransmitMessage_field_scale[4] = {
      0.01, 0.01, 0.01, 0.01, };

    static const F32 pcx_CANdb_TransmitMessage_field_offset[4] = {
      0.0, 0.0, 0.0, 0.0, };

    if (pcx_CANdb_TransmitMessage_msg_handle != PCX_CONFIG_ERROR) {
      pcx_CANdb_TransmitMessage_in_port_buffer[0] = BMShil_B.soc_pack_customer;
      pcx_CANdb_TransmitMessage_in_port_ptr[0] =
        &pcx_CANdb_TransmitMessage_in_port_buffer[0];
      pcx_CANdb_TransmitMessage_in_port_buffer[1] = soc_pack_actual;
      pcx_CANdb_TransmitMessage_in_port_ptr[1] =
        &pcx_CANdb_TransmitMessage_in_port_buffer[1];
      pcx_CANdb_TransmitMessage_in_port_buffer[2] = BMShil_B.soc_cell_min;
      pcx_CANdb_TransmitMessage_in_port_ptr[2] =
        &pcx_CANdb_TransmitMessage_in_port_buffer[2];
      pcx_CANdb_TransmitMessage_in_port_buffer[3] = BMShil_B.soc_cell_max;
      pcx_CANdb_TransmitMessage_in_port_ptr[3] =
        &pcx_CANdb_TransmitMessage_in_port_buffer[3];
      pcx_vdb_pack_msg((const F32 * const *)
                       &pcx_CANdb_TransmitMessage_in_port_ptr[0], &data[0],
                       pcx_CANdb_TransmitMessage_field_start_pos,
                       pcx_CANdb_TransmitMessage_field_width,
                       pcx_CANdb_TransmitMessage_field_is_signed,
                       pcx_CANdb_TransmitMessage_field_valtype,
                       pcx_CANdb_TransmitMessage_field_order,
                       pcx_CANdb_TransmitMessage_field_eng_min,
                       pcx_CANdb_TransmitMessage_field_eng_max,
                       pcx_CANdb_TransmitMessage_field_scale,
                       pcx_CANdb_TransmitMessage_field_offset, 0, 1, 4);

      /* Do a transmit every time we are called, (CT2) */
      retval = pcx_transmit(pcx_CANdb_TransmitMessage_msg_handle, data);
    } else {
      /* error: pcx_declare_message was unsuccessful */
      retval = FALSE;
    }

    BMShil_B.pcx_CANdb_TransmitMessage = !retval;
  }

  /* S-Function Block: <S4>/pcx_CANdb_TransmitMessage1
   * [$Id: pcx_candb_transmit_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    BOOL retval;
    F32 pcx_CANdb_TransmitMessage1_in_port_buffer[3];
    F32 * pcx_CANdb_TransmitMessage1_in_port_ptr[3];
    static const U8 pcx_CANdb_TransmitMessage1_field_start_pos[3] = {
      7, 15, 23, };

    static const U8 pcx_CANdb_TransmitMessage1_field_width[3] = {
      8, 8, 1, };

    static const U8 pcx_CANdb_TransmitMessage1_field_is_signed[3] = {
      0, 0, 0, };

    static const U8 pcx_CANdb_TransmitMessage1_field_valtype[3] = {
      0, 0, 0, };

    static const U8 pcx_CANdb_TransmitMessage1_field_order[3] = {
      0, 0, 0, };

    static const F32 pcx_CANdb_TransmitMessage1_field_eng_min[3] = {
      0.0, 0.0, 0.0, };

    static const F32 pcx_CANdb_TransmitMessage1_field_eng_max[3] = {
      20.0, 20.0, 1.0, };

    static const F32 pcx_CANdb_TransmitMessage1_field_scale[3] = {
      1.0, 1.0, 1.0, };

    static const F32 pcx_CANdb_TransmitMessage1_field_offset[3] = {
      0.0, 0.0, 0.0, };

    if (pcx_CANdb_TransmitMessage1_msg_handle != PCX_CONFIG_ERROR) {
      pcx_CANdb_TransmitMessage1_in_port_buffer[0] = bsc_ReasonToOpen;
      pcx_CANdb_TransmitMessage1_in_port_ptr[0] =
        &pcx_CANdb_TransmitMessage1_in_port_buffer[0];
      pcx_CANdb_TransmitMessage1_in_port_buffer[1] = bsc_FaultType;
      pcx_CANdb_TransmitMessage1_in_port_ptr[1] =
        &pcx_CANdb_TransmitMessage1_in_port_buffer[1];
      pcx_CANdb_TransmitMessage1_in_port_buffer[2] = BMShil_B.BSC_o4;
      pcx_CANdb_TransmitMessage1_in_port_ptr[2] =
        &pcx_CANdb_TransmitMessage1_in_port_buffer[2];
      pcx_vdb_pack_msg((const F32 * const *)
                       &pcx_CANdb_TransmitMessage1_in_port_ptr[0], &data[0],
                       pcx_CANdb_TransmitMessage1_field_start_pos,
                       pcx_CANdb_TransmitMessage1_field_width,
                       pcx_CANdb_TransmitMessage1_field_is_signed,
                       pcx_CANdb_TransmitMessage1_field_valtype,
                       pcx_CANdb_TransmitMessage1_field_order,
                       pcx_CANdb_TransmitMessage1_field_eng_min,
                       pcx_CANdb_TransmitMessage1_field_eng_max,
                       pcx_CANdb_TransmitMessage1_field_scale,
                       pcx_CANdb_TransmitMessage1_field_offset, 0, 1, 3);

      /* Do a transmit every time we are called, (CT2) */
      retval = pcx_transmit(pcx_CANdb_TransmitMessage1_msg_handle, data);
    } else {
      /* error: pcx_declare_message was unsuccessful */
      retval = FALSE;
    }

    BMShil_B.pcx_CANdb_TransmitMessage1 = !retval;
  }

  /* S-Function Block: <S4>/pcx_CANdb_TransmitMessage2
   * [$Id: pcx_candb_transmit_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    BOOL retval;
    F32 pcx_CANdb_TransmitMessage2_in_port_buffer[4];
    F32 * pcx_CANdb_TransmitMessage2_in_port_ptr[4];
    static const U8 pcx_CANdb_TransmitMessage2_field_start_pos[4] = {
      7, 23, 39, 55, };

    static const U8 pcx_CANdb_TransmitMessage2_field_width[4] = {
      16, 16, 16, 16, };

    static const U8 pcx_CANdb_TransmitMessage2_field_is_signed[4] = {
      1, 1, 1, 0, };

    static const U8 pcx_CANdb_TransmitMessage2_field_valtype[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_TransmitMessage2_field_order[4] = {
      0, 0, 0, 0, };

    static const F32 pcx_CANdb_TransmitMessage2_field_eng_min[4] = {
      -100.0, -100.0, -100.0, 0.0, };

    static const F32 pcx_CANdb_TransmitMessage2_field_eng_max[4] = {
      120.0, 120.0, 120.0, 5.0, };

    static const F32 pcx_CANdb_TransmitMessage2_field_scale[4] = {
      0.01, 0.01, 0.01, 0.01, };

    static const F32 pcx_CANdb_TransmitMessage2_field_offset[4] = {
      0.0, 0.0, 0.0, 0.0, };

    if (pcx_CANdb_TransmitMessage2_msg_handle != PCX_CONFIG_ERROR) {
      pcx_CANdb_TransmitMessage2_in_port_buffer[0] =
        BMShil_B.vitm_CellsMaxTemperature;
      pcx_CANdb_TransmitMessage2_in_port_ptr[0] =
        &pcx_CANdb_TransmitMessage2_in_port_buffer[0];
      pcx_CANdb_TransmitMessage2_in_port_buffer[1] =
        BMShil_B.vitm_CellsMinTemperature;
      pcx_CANdb_TransmitMessage2_in_port_ptr[1] =
        &pcx_CANdb_TransmitMessage2_in_port_buffer[1];
      pcx_CANdb_TransmitMessage2_in_port_buffer[2] =
        BMShil_B.vitm_CellsAvgTemperature;
      pcx_CANdb_TransmitMessage2_in_port_ptr[2] =
        &pcx_CANdb_TransmitMessage2_in_port_buffer[2];
      pcx_CANdb_TransmitMessage2_in_port_buffer[3] =
        BMShil_B.vitm_CellsMaxVoltage;
      pcx_CANdb_TransmitMessage2_in_port_ptr[3] =
        &pcx_CANdb_TransmitMessage2_in_port_buffer[3];
      pcx_vdb_pack_msg((const F32 * const *)
                       &pcx_CANdb_TransmitMessage2_in_port_ptr[0], &data[0],
                       pcx_CANdb_TransmitMessage2_field_start_pos,
                       pcx_CANdb_TransmitMessage2_field_width,
                       pcx_CANdb_TransmitMessage2_field_is_signed,
                       pcx_CANdb_TransmitMessage2_field_valtype,
                       pcx_CANdb_TransmitMessage2_field_order,
                       pcx_CANdb_TransmitMessage2_field_eng_min,
                       pcx_CANdb_TransmitMessage2_field_eng_max,
                       pcx_CANdb_TransmitMessage2_field_scale,
                       pcx_CANdb_TransmitMessage2_field_offset, 0, 1, 4);

      /* Do a transmit every time we are called, (CT2) */
      retval = pcx_transmit(pcx_CANdb_TransmitMessage2_msg_handle, data);
    } else {
      /* error: pcx_declare_message was unsuccessful */
      retval = FALSE;
    }

    BMShil_B.pcx_CANdb_TransmitMessage2 = !retval;
  }

  /* S-Function Block: <S4>/pcx_CANdb_TransmitMessage3
   * [$Id: pcx_candb_transmit_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    BOOL retval;
    F32 pcx_CANdb_TransmitMessage3_in_port_buffer[4];
    F32 * pcx_CANdb_TransmitMessage3_in_port_ptr[4];
    static const U8 pcx_CANdb_TransmitMessage3_field_start_pos[4] = {
      7, 23, 39, 55, };

    static const U8 pcx_CANdb_TransmitMessage3_field_width[4] = {
      16, 16, 16, 16, };

    static const U8 pcx_CANdb_TransmitMessage3_field_is_signed[4] = {
      0, 0, 0, 1, };

    static const U8 pcx_CANdb_TransmitMessage3_field_valtype[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_TransmitMessage3_field_order[4] = {
      0, 0, 0, 0, };

    static const F32 pcx_CANdb_TransmitMessage3_field_eng_min[4] = {
      0.0, 0.0, 0.0, -300.0, };

    static const F32 pcx_CANdb_TransmitMessage3_field_eng_max[4] = {
      5.0, 5.0, 200.0, 300.0, };

    static const F32 pcx_CANdb_TransmitMessage3_field_scale[4] = {
      0.01, 0.01, 0.01, 0.01, };

    static const F32 pcx_CANdb_TransmitMessage3_field_offset[4] = {
      0.0, 0.0, 0.0, 0.0, };

    if (pcx_CANdb_TransmitMessage3_msg_handle != PCX_CONFIG_ERROR) {
      pcx_CANdb_TransmitMessage3_in_port_buffer[0] =
        BMShil_B.vitm_CellsMinVoltage;
      pcx_CANdb_TransmitMessage3_in_port_ptr[0] =
        &pcx_CANdb_TransmitMessage3_in_port_buffer[0];
      pcx_CANdb_TransmitMessage3_in_port_buffer[1] =
        BMShil_B.vitm_CellsAvgVoltage;
      pcx_CANdb_TransmitMessage3_in_port_ptr[1] =
        &pcx_CANdb_TransmitMessage3_in_port_buffer[1];
      pcx_CANdb_TransmitMessage3_in_port_buffer[2] =
        BMShil_B.vitm_PackVoltageFiltered;
      pcx_CANdb_TransmitMessage3_in_port_ptr[2] =
        &pcx_CANdb_TransmitMessage3_in_port_buffer[2];
      pcx_CANdb_TransmitMessage3_in_port_buffer[3] = BMS_RawPackCurrent;
      pcx_CANdb_TransmitMessage3_in_port_ptr[3] =
        &pcx_CANdb_TransmitMessage3_in_port_buffer[3];
      pcx_vdb_pack_msg((const F32 * const *)
                       &pcx_CANdb_TransmitMessage3_in_port_ptr[0], &data[0],
                       pcx_CANdb_TransmitMessage3_field_start_pos,
                       pcx_CANdb_TransmitMessage3_field_width,
                       pcx_CANdb_TransmitMessage3_field_is_signed,
                       pcx_CANdb_TransmitMessage3_field_valtype,
                       pcx_CANdb_TransmitMessage3_field_order,
                       pcx_CANdb_TransmitMessage3_field_eng_min,
                       pcx_CANdb_TransmitMessage3_field_eng_max,
                       pcx_CANdb_TransmitMessage3_field_scale,
                       pcx_CANdb_TransmitMessage3_field_offset, 0, 1, 4);

      /* Do a transmit every time we are called, (CT2) */
      retval = pcx_transmit(pcx_CANdb_TransmitMessage3_msg_handle, data);
    } else {
      /* error: pcx_declare_message was unsuccessful */
      retval = FALSE;
    }

    BMShil_B.pcx_CANdb_TransmitMessage3 = !retval;
  }

  /* S-Function Block: <S4>/pcx_CANdb_TransmitMessage4
   * [$Id: pcx_candb_transmit_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    BOOL retval;
    F32 pcx_CANdb_TransmitMessage4_in_port_buffer[5];
    F32 * pcx_CANdb_TransmitMessage4_in_port_ptr[5];
    static const U8 pcx_CANdb_TransmitMessage4_field_start_pos[5] = {
      7, 6, 15, 31, 39, };

    static const U8 pcx_CANdb_TransmitMessage4_field_width[5] = {
      1, 1, 16, 8, 16, };

    static const U8 pcx_CANdb_TransmitMessage4_field_is_signed[5] = {
      0, 0, 1, 0, 1, };

    static const U8 pcx_CANdb_TransmitMessage4_field_valtype[5] = {
      0, 0, 0, 0, 0, };

    static const U8 pcx_CANdb_TransmitMessage4_field_order[5] = {
      0, 0, 0, 0, 0, };

    static const F32 pcx_CANdb_TransmitMessage4_field_eng_min[5] = {
      0.0, 0.0, -50.0, 0.0, -50.0,
    };

    static const F32 pcx_CANdb_TransmitMessage4_field_eng_max[5] = {
      1.0, 1.0, 80.0, 100.0, 80.0,
    };

    static const F32 pcx_CANdb_TransmitMessage4_field_scale[5] = {
      1.0, 1.0, 0.5, 1.0, 0.5,
    };

    static const F32 pcx_CANdb_TransmitMessage4_field_offset[5] = {
      0.0, 0.0, 0.0, 0.0, 0.0,
    };

    if (pcx_CANdb_TransmitMessage4_msg_handle != PCX_CONFIG_ERROR) {
      pcx_CANdb_TransmitMessage4_in_port_buffer[0] =
        BMShil_B.btc_batt_request_status;
      pcx_CANdb_TransmitMessage4_in_port_ptr[0] =
        &pcx_CANdb_TransmitMessage4_in_port_buffer[0];
      pcx_CANdb_TransmitMessage4_in_port_buffer[1] =
        BMShil_B.btc_thermal_condition;
      pcx_CANdb_TransmitMessage4_in_port_ptr[1] =
        &pcx_CANdb_TransmitMessage4_in_port_buffer[1];
      pcx_CANdb_TransmitMessage4_in_port_buffer[2] =
        BMShil_B.btc_batt_actual_temp;
      pcx_CANdb_TransmitMessage4_in_port_ptr[2] =
        &pcx_CANdb_TransmitMessage4_in_port_buffer[2];
      pcx_CANdb_TransmitMessage4_in_port_buffer[3] = btc_coolant_flow_pct;
      pcx_CANdb_TransmitMessage4_in_port_ptr[3] =
        &pcx_CANdb_TransmitMessage4_in_port_buffer[3];
      pcx_CANdb_TransmitMessage4_in_port_buffer[4] =
        BMShil_B.btc_batt_target_temp;
      pcx_CANdb_TransmitMessage4_in_port_ptr[4] =
        &pcx_CANdb_TransmitMessage4_in_port_buffer[4];
      pcx_vdb_pack_msg((const F32 * const *)
                       &pcx_CANdb_TransmitMessage4_in_port_ptr[0], &data[0],
                       pcx_CANdb_TransmitMessage4_field_start_pos,
                       pcx_CANdb_TransmitMessage4_field_width,
                       pcx_CANdb_TransmitMessage4_field_is_signed,
                       pcx_CANdb_TransmitMessage4_field_valtype,
                       pcx_CANdb_TransmitMessage4_field_order,
                       pcx_CANdb_TransmitMessage4_field_eng_min,
                       pcx_CANdb_TransmitMessage4_field_eng_max,
                       pcx_CANdb_TransmitMessage4_field_scale,
                       pcx_CANdb_TransmitMessage4_field_offset, 0, 1, 5);

      /* Do a transmit every time we are called, (CT2) */
      retval = pcx_transmit(pcx_CANdb_TransmitMessage4_msg_handle, data);
    } else {
      /* error: pcx_declare_message was unsuccessful */
      retval = FALSE;
    }

    BMShil_B.pcx_CANdb_TransmitMessage4 = !retval;
  }

  /* S-Function Block: <S4>/pcx_CANdb_TransmitMessage5
   * [$Id: pcx_candb_transmit_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    BOOL retval;
    F32 pcx_CANdb_TransmitMessage5_in_port_buffer[2];
    F32 * pcx_CANdb_TransmitMessage5_in_port_ptr[2];
    static const U8 pcx_CANdb_TransmitMessage5_field_start_pos[2] = {
      7, 15, };

    static const U8 pcx_CANdb_TransmitMessage5_field_width[2] = {
      8, 1, };

    static const U8 pcx_CANdb_TransmitMessage5_field_is_signed[2] = {
      0, 0, };

    static const U8 pcx_CANdb_TransmitMessage5_field_valtype[2] = {
      0, 0, };

    static const U8 pcx_CANdb_TransmitMessage5_field_order[2] = {
      0, 0, };

    static const F32 pcx_CANdb_TransmitMessage5_field_eng_min[2] = {
      0.0, 0.0, };

    static const F32 pcx_CANdb_TransmitMessage5_field_eng_max[2] = {
      10.0, 1.0, };

    static const F32 pcx_CANdb_TransmitMessage5_field_scale[2] = {
      1.0, 1.0, };

    static const F32 pcx_CANdb_TransmitMessage5_field_offset[2] = {
      0.0, 0.0, };

    if (pcx_CANdb_TransmitMessage5_msg_handle != PCX_CONFIG_ERROR) {
      pcx_CANdb_TransmitMessage5_in_port_buffer[0] = BMShil_B.bmo_mode;
      pcx_CANdb_TransmitMessage5_in_port_ptr[0] =
        &pcx_CANdb_TransmitMessage5_in_port_buffer[0];
      pcx_CANdb_TransmitMessage5_in_port_buffer[1] = BMShil_B.soc_rate_high;
      pcx_CANdb_TransmitMessage5_in_port_ptr[1] =
        &pcx_CANdb_TransmitMessage5_in_port_buffer[1];
      pcx_vdb_pack_msg((const F32 * const *)
                       &pcx_CANdb_TransmitMessage5_in_port_ptr[0], &data[0],
                       pcx_CANdb_TransmitMessage5_field_start_pos,
                       pcx_CANdb_TransmitMessage5_field_width,
                       pcx_CANdb_TransmitMessage5_field_is_signed,
                       pcx_CANdb_TransmitMessage5_field_valtype,
                       pcx_CANdb_TransmitMessage5_field_order,
                       pcx_CANdb_TransmitMessage5_field_eng_min,
                       pcx_CANdb_TransmitMessage5_field_eng_max,
                       pcx_CANdb_TransmitMessage5_field_scale,
                       pcx_CANdb_TransmitMessage5_field_offset, 0, 1, 2);

      /* Do a transmit every time we are called, (CT2) */
      retval = pcx_transmit(pcx_CANdb_TransmitMessage5_msg_handle, data);
    } else {
      /* error: pcx_declare_message was unsuccessful */
      retval = FALSE;
    }

    BMShil_B.pcx_CANdb_TransmitMessage5 = !retval;
  }

  /* S-Function Block: <S4>/pcx_CANdb_TransmitMessage6
   * [$Id: pcx_candb_transmit_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    BOOL retval;
    F32 pcx_CANdb_TransmitMessage6_in_port_buffer[3];
    F32 * pcx_CANdb_TransmitMessage6_in_port_ptr[3];
    static const U8 pcx_CANdb_TransmitMessage6_field_start_pos[3] = {
      7, 23, 39, };

    static const U8 pcx_CANdb_TransmitMessage6_field_width[3] = {
      16, 16, 16, };

    static const U8 pcx_CANdb_TransmitMessage6_field_is_signed[3] = {
      0, 0, 0, };

    static const U8 pcx_CANdb_TransmitMessage6_field_valtype[3] = {
      0, 0, 0, };

    static const U8 pcx_CANdb_TransmitMessage6_field_order[3] = {
      0, 0, 0, };

    static const F32 pcx_CANdb_TransmitMessage6_field_eng_min[3] = {
      0.0, 0.0, 0.0, };

    static const F32 pcx_CANdb_TransmitMessage6_field_eng_max[3] = {
      100.0, 100.0, 100.0, };

    static const F32 pcx_CANdb_TransmitMessage6_field_scale[3] = {
      0.01, 0.01, 0.01, };

    static const F32 pcx_CANdb_TransmitMessage6_field_offset[3] = {
      0.0, 0.0, 0.0, };

    if (pcx_CANdb_TransmitMessage6_msg_handle != PCX_CONFIG_ERROR) {
      pcx_CANdb_TransmitMessage6_in_port_buffer[0] = BMShil_B.soh_customer_index;
      pcx_CANdb_TransmitMessage6_in_port_ptr[0] =
        &pcx_CANdb_TransmitMessage6_in_port_buffer[0];
      pcx_CANdb_TransmitMessage6_in_port_buffer[1] = soh_R_index;
      pcx_CANdb_TransmitMessage6_in_port_ptr[1] =
        &pcx_CANdb_TransmitMessage6_in_port_buffer[1];
      pcx_CANdb_TransmitMessage6_in_port_buffer[2] = soh_C_index;
      pcx_CANdb_TransmitMessage6_in_port_ptr[2] =
        &pcx_CANdb_TransmitMessage6_in_port_buffer[2];
      pcx_vdb_pack_msg((const F32 * const *)
                       &pcx_CANdb_TransmitMessage6_in_port_ptr[0], &data[0],
                       pcx_CANdb_TransmitMessage6_field_start_pos,
                       pcx_CANdb_TransmitMessage6_field_width,
                       pcx_CANdb_TransmitMessage6_field_is_signed,
                       pcx_CANdb_TransmitMessage6_field_valtype,
                       pcx_CANdb_TransmitMessage6_field_order,
                       pcx_CANdb_TransmitMessage6_field_eng_min,
                       pcx_CANdb_TransmitMessage6_field_eng_max,
                       pcx_CANdb_TransmitMessage6_field_scale,
                       pcx_CANdb_TransmitMessage6_field_offset, 0, 1, 3);

      /* Do a transmit every time we are called, (CT2) */
      retval = pcx_transmit(pcx_CANdb_TransmitMessage6_msg_handle, data);
    } else {
      /* error: pcx_declare_message was unsuccessful */
      retval = FALSE;
    }

    BMShil_B.pcx_CANdb_TransmitMessage6 = !retval;
  }

  /* S-Function Block: <S4>/pcx_CANdb_TransmitMessage7
   * [$Id: pcx_candb_transmit_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    BOOL retval;
    F32 pcx_CANdb_TransmitMessage7_in_port_buffer[4];
    F32 * pcx_CANdb_TransmitMessage7_in_port_ptr[4];
    static const U8 pcx_CANdb_TransmitMessage7_field_start_pos[4] = {
      7, 23, 39, 55, };

    static const U8 pcx_CANdb_TransmitMessage7_field_width[4] = {
      16, 16, 16, 16, };

    static const U8 pcx_CANdb_TransmitMessage7_field_is_signed[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_TransmitMessage7_field_valtype[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_TransmitMessage7_field_order[4] = {
      0, 0, 0, 0, };

    static const F32 pcx_CANdb_TransmitMessage7_field_eng_min[4] = {
      0.0, 0.0, 0.0, 0.0, };

    static const F32 pcx_CANdb_TransmitMessage7_field_eng_max[4] = {
      256000.0, 256000.0, 512.0, 512.0, };

    static const F32 pcx_CANdb_TransmitMessage7_field_scale[4] = {
      4.0, 4.0, 0.05, 0.05, };

    static const F32 pcx_CANdb_TransmitMessage7_field_offset[4] = {
      0.0, 0.0, 0.0, 0.0, };

    if (pcx_CANdb_TransmitMessage7_msg_handle != PCX_CONFIG_ERROR) {
      pcx_CANdb_TransmitMessage7_in_port_buffer[0] = BMShil_B.BattPwLimCharge;
      pcx_CANdb_TransmitMessage7_in_port_ptr[0] =
        &pcx_CANdb_TransmitMessage7_in_port_buffer[0];
      pcx_CANdb_TransmitMessage7_in_port_buffer[1] = BMShil_B.BattPwLimDischarge;
      pcx_CANdb_TransmitMessage7_in_port_ptr[1] =
        &pcx_CANdb_TransmitMessage7_in_port_buffer[1];
      pcx_CANdb_TransmitMessage7_in_port_buffer[2] = BMShil_B.BattCurrLimCharge;
      pcx_CANdb_TransmitMessage7_in_port_ptr[2] =
        &pcx_CANdb_TransmitMessage7_in_port_buffer[2];
      pcx_CANdb_TransmitMessage7_in_port_buffer[3] =
        BMShil_B.BattCurrLimDischarge;
      pcx_CANdb_TransmitMessage7_in_port_ptr[3] =
        &pcx_CANdb_TransmitMessage7_in_port_buffer[3];
      pcx_vdb_pack_msg((const F32 * const *)
                       &pcx_CANdb_TransmitMessage7_in_port_ptr[0], &data[0],
                       pcx_CANdb_TransmitMessage7_field_start_pos,
                       pcx_CANdb_TransmitMessage7_field_width,
                       pcx_CANdb_TransmitMessage7_field_is_signed,
                       pcx_CANdb_TransmitMessage7_field_valtype,
                       pcx_CANdb_TransmitMessage7_field_order,
                       pcx_CANdb_TransmitMessage7_field_eng_min,
                       pcx_CANdb_TransmitMessage7_field_eng_max,
                       pcx_CANdb_TransmitMessage7_field_scale,
                       pcx_CANdb_TransmitMessage7_field_offset, 0, 1, 4);

      /* Do a transmit every time we are called, (CT2) */
      retval = pcx_transmit(pcx_CANdb_TransmitMessage7_msg_handle, data);
    } else {
      /* error: pcx_declare_message was unsuccessful */
      retval = FALSE;
    }

    BMShil_B.pcx_CANdb_TransmitMessage7 = !retval;
  }

  /* S-Function Block: <S4>/pcx_CANdb_TransmitMessage8
   * [$Id: pcx_candb_transmit_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    BOOL retval;
    F32 pcx_CANdb_TransmitMessage8_in_port_buffer[1];
    F32 * pcx_CANdb_TransmitMessage8_in_port_ptr[1];
    static const U8 pcx_CANdb_TransmitMessage8_field_start_pos[1] = {
      7, };

    static const U8 pcx_CANdb_TransmitMessage8_field_width[1] = {
      1, };

    static const U8 pcx_CANdb_TransmitMessage8_field_is_signed[1] = {
      0, };

    static const U8 pcx_CANdb_TransmitMessage8_field_valtype[1] = {
      0, };

    static const U8 pcx_CANdb_TransmitMessage8_field_order[1] = {
      0, };

    static const F32 pcx_CANdb_TransmitMessage8_field_eng_min[1] = {
      0.0, };

    static const F32 pcx_CANdb_TransmitMessage8_field_eng_max[1] = {
      1.0, };

    static const F32 pcx_CANdb_TransmitMessage8_field_scale[1] = {
      1.0, };

    static const F32 pcx_CANdb_TransmitMessage8_field_offset[1] = {
      0.0, };

    if (pcx_CANdb_TransmitMessage8_msg_handle != PCX_CONFIG_ERROR) {
      pcx_CANdb_TransmitMessage8_in_port_buffer[0] = BMShil_B.cb_status;
      pcx_CANdb_TransmitMessage8_in_port_ptr[0] =
        &pcx_CANdb_TransmitMessage8_in_port_buffer[0];
      pcx_vdb_pack_msg((const F32 * const *)
                       &pcx_CANdb_TransmitMessage8_in_port_ptr[0], &data[0],
                       pcx_CANdb_TransmitMessage8_field_start_pos,
                       pcx_CANdb_TransmitMessage8_field_width,
                       pcx_CANdb_TransmitMessage8_field_is_signed,
                       pcx_CANdb_TransmitMessage8_field_valtype,
                       pcx_CANdb_TransmitMessage8_field_order,
                       pcx_CANdb_TransmitMessage8_field_eng_min,
                       pcx_CANdb_TransmitMessage8_field_eng_max,
                       pcx_CANdb_TransmitMessage8_field_scale,
                       pcx_CANdb_TransmitMessage8_field_offset, 0, 1, 1);

      /* Do a transmit every time we are called, (CT2) */
      retval = pcx_transmit(pcx_CANdb_TransmitMessage8_msg_handle, data);
    } else {
      /* error: pcx_declare_message was unsuccessful */
      retval = FALSE;
    }

    BMShil_B.pcx_CANdb_TransmitMessage8 = !retval;
  }

  /* S-Function Block: <S4>/pcx_CANdb_TransmitMessage9
   * [$Id: pcx_candb_transmit_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    BOOL retval;
    F32 pcx_CANdb_TransmitMessage9_in_port_buffer[40];
    F32 * pcx_CANdb_TransmitMessage9_in_port_ptr[40];
    static const U8 pcx_CANdb_TransmitMessage9_field_start_pos[40] = {
      7, 6, 5, 4, 3, 2, 1, 0, 15, 14,
      13, 12, 11, 10, 9, 8, 23, 22, 21, 20,
      19, 18, 17, 16, 31, 30, 29, 28, 27, 26,
      25, 24, 39, 38, 37, 36, 35, 34, 33, 32,
    };

    static const U8 pcx_CANdb_TransmitMessage9_field_width[40] = {
      1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
      1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
      1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
      1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    };

    static const U8 pcx_CANdb_TransmitMessage9_field_is_signed[40] = {
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    static const U8 pcx_CANdb_TransmitMessage9_field_valtype[40] = {
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    static const U8 pcx_CANdb_TransmitMessage9_field_order[40] = {
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };

    static const F32 pcx_CANdb_TransmitMessage9_field_eng_min[40] = {
      0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0,
    };

    static const F32 pcx_CANdb_TransmitMessage9_field_eng_max[40] = {
      1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0,
    };

    static const F32 pcx_CANdb_TransmitMessage9_field_scale[40] = {
      1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0,
      1.0, 1.0, 1.0, 1.0, 1.0,
    };

    static const F32 pcx_CANdb_TransmitMessage9_field_offset[40] = {
      0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0,
    };

    if (pcx_CANdb_TransmitMessage9_msg_handle != PCX_CONFIG_ERROR) {
      pcx_CANdb_TransmitMessage9_in_port_buffer[0] = BMShil_B.CB_o1[0];
      pcx_CANdb_TransmitMessage9_in_port_ptr[0] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[0];
      pcx_CANdb_TransmitMessage9_in_port_buffer[1] = BMShil_B.CB_o1[1];
      pcx_CANdb_TransmitMessage9_in_port_ptr[1] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[1];
      pcx_CANdb_TransmitMessage9_in_port_buffer[2] = BMShil_B.CB_o1[2];
      pcx_CANdb_TransmitMessage9_in_port_ptr[2] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[2];
      pcx_CANdb_TransmitMessage9_in_port_buffer[3] = BMShil_B.CB_o1[3];
      pcx_CANdb_TransmitMessage9_in_port_ptr[3] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[3];
      pcx_CANdb_TransmitMessage9_in_port_buffer[4] = BMShil_B.CB_o1[4];
      pcx_CANdb_TransmitMessage9_in_port_ptr[4] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[4];
      pcx_CANdb_TransmitMessage9_in_port_buffer[5] = BMShil_B.CB_o1[5];
      pcx_CANdb_TransmitMessage9_in_port_ptr[5] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[5];
      pcx_CANdb_TransmitMessage9_in_port_buffer[6] = BMShil_B.CB_o1[6];
      pcx_CANdb_TransmitMessage9_in_port_ptr[6] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[6];
      pcx_CANdb_TransmitMessage9_in_port_buffer[7] = BMShil_B.CB_o1[7];
      pcx_CANdb_TransmitMessage9_in_port_ptr[7] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[7];
      pcx_CANdb_TransmitMessage9_in_port_buffer[8] = BMShil_B.CB_o1[8];
      pcx_CANdb_TransmitMessage9_in_port_ptr[8] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[8];
      pcx_CANdb_TransmitMessage9_in_port_buffer[9] = BMShil_B.CB_o1[9];
      pcx_CANdb_TransmitMessage9_in_port_ptr[9] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[9];
      pcx_CANdb_TransmitMessage9_in_port_buffer[10] = BMShil_B.CB_o1[10];
      pcx_CANdb_TransmitMessage9_in_port_ptr[10] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[10];
      pcx_CANdb_TransmitMessage9_in_port_buffer[11] = BMShil_B.CB_o1[11];
      pcx_CANdb_TransmitMessage9_in_port_ptr[11] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[11];
      pcx_CANdb_TransmitMessage9_in_port_buffer[12] = BMShil_B.CB_o1[12];
      pcx_CANdb_TransmitMessage9_in_port_ptr[12] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[12];
      pcx_CANdb_TransmitMessage9_in_port_buffer[13] = BMShil_B.CB_o1[13];
      pcx_CANdb_TransmitMessage9_in_port_ptr[13] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[13];
      pcx_CANdb_TransmitMessage9_in_port_buffer[14] = BMShil_B.CB_o1[14];
      pcx_CANdb_TransmitMessage9_in_port_ptr[14] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[14];
      pcx_CANdb_TransmitMessage9_in_port_buffer[15] = BMShil_B.CB_o1[15];
      pcx_CANdb_TransmitMessage9_in_port_ptr[15] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[15];
      pcx_CANdb_TransmitMessage9_in_port_buffer[16] = BMShil_B.CB_o1[16];
      pcx_CANdb_TransmitMessage9_in_port_ptr[16] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[16];
      pcx_CANdb_TransmitMessage9_in_port_buffer[17] = BMShil_B.CB_o1[17];
      pcx_CANdb_TransmitMessage9_in_port_ptr[17] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[17];
      pcx_CANdb_TransmitMessage9_in_port_buffer[18] = BMShil_B.CB_o1[18];
      pcx_CANdb_TransmitMessage9_in_port_ptr[18] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[18];
      pcx_CANdb_TransmitMessage9_in_port_buffer[19] = BMShil_B.CB_o1[19];
      pcx_CANdb_TransmitMessage9_in_port_ptr[19] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[19];
      pcx_CANdb_TransmitMessage9_in_port_buffer[20] = BMShil_B.CB_o1[20];
      pcx_CANdb_TransmitMessage9_in_port_ptr[20] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[20];
      pcx_CANdb_TransmitMessage9_in_port_buffer[21] = BMShil_B.CB_o1[21];
      pcx_CANdb_TransmitMessage9_in_port_ptr[21] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[21];
      pcx_CANdb_TransmitMessage9_in_port_buffer[22] = BMShil_B.CB_o1[22];
      pcx_CANdb_TransmitMessage9_in_port_ptr[22] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[22];
      pcx_CANdb_TransmitMessage9_in_port_buffer[23] = BMShil_B.CB_o1[23];
      pcx_CANdb_TransmitMessage9_in_port_ptr[23] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[23];
      pcx_CANdb_TransmitMessage9_in_port_buffer[24] = BMShil_B.CB_o1[24];
      pcx_CANdb_TransmitMessage9_in_port_ptr[24] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[24];
      pcx_CANdb_TransmitMessage9_in_port_buffer[25] = BMShil_B.CB_o1[25];
      pcx_CANdb_TransmitMessage9_in_port_ptr[25] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[25];
      pcx_CANdb_TransmitMessage9_in_port_buffer[26] = BMShil_B.CB_o1[26];
      pcx_CANdb_TransmitMessage9_in_port_ptr[26] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[26];
      pcx_CANdb_TransmitMessage9_in_port_buffer[27] = BMShil_B.CB_o1[27];
      pcx_CANdb_TransmitMessage9_in_port_ptr[27] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[27];
      pcx_CANdb_TransmitMessage9_in_port_buffer[28] = BMShil_B.CB_o1[28];
      pcx_CANdb_TransmitMessage9_in_port_ptr[28] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[28];
      pcx_CANdb_TransmitMessage9_in_port_buffer[29] = BMShil_B.CB_o1[29];
      pcx_CANdb_TransmitMessage9_in_port_ptr[29] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[29];
      pcx_CANdb_TransmitMessage9_in_port_buffer[30] = BMShil_B.CB_o1[30];
      pcx_CANdb_TransmitMessage9_in_port_ptr[30] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[30];
      pcx_CANdb_TransmitMessage9_in_port_buffer[31] = BMShil_B.CB_o1[31];
      pcx_CANdb_TransmitMessage9_in_port_ptr[31] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[31];
      pcx_CANdb_TransmitMessage9_in_port_buffer[32] = BMShil_B.CB_o1[32];
      pcx_CANdb_TransmitMessage9_in_port_ptr[32] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[32];
      pcx_CANdb_TransmitMessage9_in_port_buffer[33] = BMShil_B.CB_o1[33];
      pcx_CANdb_TransmitMessage9_in_port_ptr[33] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[33];
      pcx_CANdb_TransmitMessage9_in_port_buffer[34] = BMShil_B.CB_o1[34];
      pcx_CANdb_TransmitMessage9_in_port_ptr[34] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[34];
      pcx_CANdb_TransmitMessage9_in_port_buffer[35] = BMShil_B.CB_o1[35];
      pcx_CANdb_TransmitMessage9_in_port_ptr[35] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[35];
      pcx_CANdb_TransmitMessage9_in_port_buffer[36] = BMShil_B.CB_o1[36];
      pcx_CANdb_TransmitMessage9_in_port_ptr[36] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[36];
      pcx_CANdb_TransmitMessage9_in_port_buffer[37] = BMShil_B.CB_o1[37];
      pcx_CANdb_TransmitMessage9_in_port_ptr[37] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[37];
      pcx_CANdb_TransmitMessage9_in_port_buffer[38] = BMShil_B.CB_o1[38];
      pcx_CANdb_TransmitMessage9_in_port_ptr[38] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[38];
      pcx_CANdb_TransmitMessage9_in_port_buffer[39] = BMShil_B.CB_o1[39];
      pcx_CANdb_TransmitMessage9_in_port_ptr[39] =
        &pcx_CANdb_TransmitMessage9_in_port_buffer[39];
      pcx_vdb_pack_msg((const F32 * const *)
                       &pcx_CANdb_TransmitMessage9_in_port_ptr[0], &data[0],
                       pcx_CANdb_TransmitMessage9_field_start_pos,
                       pcx_CANdb_TransmitMessage9_field_width,
                       pcx_CANdb_TransmitMessage9_field_is_signed,
                       pcx_CANdb_TransmitMessage9_field_valtype,
                       pcx_CANdb_TransmitMessage9_field_order,
                       pcx_CANdb_TransmitMessage9_field_eng_min,
                       pcx_CANdb_TransmitMessage9_field_eng_max,
                       pcx_CANdb_TransmitMessage9_field_scale,
                       pcx_CANdb_TransmitMessage9_field_offset, 0, 1, 40);

      /* Do a transmit every time we are called, (CT2) */
      retval = pcx_transmit(pcx_CANdb_TransmitMessage9_msg_handle, data);
    } else {
      /* error: pcx_declare_message was unsuccessful */
      retval = FALSE;
    }

    BMShil_B.pcx_CANdb_TransmitMessage9 = !retval;
  }

  /* S-Function Block: <S6>/pcx_CANdb_TransmitMessage1
   * [$Id: pcx_candb_transmit_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    BOOL retval;
    F32 pcx_CANdb_TransmitMessage1_k_in_port_buffer[4];
    F32 * pcx_CANdb_TransmitMessage1_k_in_port_ptr[4];
    static const U8 pcx_CANdb_TransmitMessage1_k_field_start_pos[4] = {
      7, 6, 5, 4, };

    static const U8 pcx_CANdb_TransmitMessage1_k_field_width[4] = {
      1, 1, 1, 1, };

    static const U8 pcx_CANdb_TransmitMessage1_k_field_is_signed[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_TransmitMessage1_k_field_valtype[4] = {
      0, 0, 0, 0, };

    static const U8 pcx_CANdb_TransmitMessage1_k_field_order[4] = {
      0, 0, 0, 0, };

    static const F32 pcx_CANdb_TransmitMessage1_k_field_eng_min[4] = {
      0.0, 0.0, 0.0, 0.0, };

    static const F32 pcx_CANdb_TransmitMessage1_k_field_eng_max[4] = {
      1.0, 1.0, 1.0, 1.0, };

    static const F32 pcx_CANdb_TransmitMessage1_k_field_scale[4] = {
      1.0, 1.0, 1.0, 1.0, };

    static const F32 pcx_CANdb_TransmitMessage1_k_field_offset[4] = {
      0.0, 0.0, 0.0, 0.0, };

    if (pcx_CANdb_TransmitMessage1_k_msg_handle != PCX_CONFIG_ERROR) {
      pcx_CANdb_TransmitMessage1_k_in_port_buffer[0] = bsc_MainContactorCmd;
      pcx_CANdb_TransmitMessage1_k_in_port_ptr[0] =
        &pcx_CANdb_TransmitMessage1_k_in_port_buffer[0];
      pcx_CANdb_TransmitMessage1_k_in_port_buffer[1] = BMShil_B.CC_o4;
      pcx_CANdb_TransmitMessage1_k_in_port_ptr[1] =
        &pcx_CANdb_TransmitMessage1_k_in_port_buffer[1];
      pcx_CANdb_TransmitMessage1_k_in_port_buffer[2] = BMShil_B.CC_o1;
      pcx_CANdb_TransmitMessage1_k_in_port_ptr[2] =
        &pcx_CANdb_TransmitMessage1_k_in_port_buffer[2];
      pcx_CANdb_TransmitMessage1_k_in_port_buffer[3] = BMShil_B.BSC_o1;
      pcx_CANdb_TransmitMessage1_k_in_port_ptr[3] =
        &pcx_CANdb_TransmitMessage1_k_in_port_buffer[3];
      pcx_vdb_pack_msg((const F32 * const *)
                       &pcx_CANdb_TransmitMessage1_k_in_port_ptr[0], &data[0],
                       pcx_CANdb_TransmitMessage1_k_field_start_pos,
                       pcx_CANdb_TransmitMessage1_k_field_width,
                       pcx_CANdb_TransmitMessage1_k_field_is_signed,
                       pcx_CANdb_TransmitMessage1_k_field_valtype,
                       pcx_CANdb_TransmitMessage1_k_field_order,
                       pcx_CANdb_TransmitMessage1_k_field_eng_min,
                       pcx_CANdb_TransmitMessage1_k_field_eng_max,
                       pcx_CANdb_TransmitMessage1_k_field_scale,
                       pcx_CANdb_TransmitMessage1_k_field_offset, 0, 1, 4);

      /* Do a transmit every time we are called, (CT2) */
      retval = pcx_transmit(pcx_CANdb_TransmitMessage1_k_msg_handle, data);
    } else {
      /* error: pcx_declare_message was unsuccessful */
      retval = FALSE;
    }

    BMShil_B.pcx_CANdb_TransmitMessage1_l = !retval;
  }

  /* S-Function Block: <S6>/pcx_CANdb_TransmitMessage
   * [$Id: pcx_candb_transmit_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    BOOL retval;
    F32 pcx_CANdb_TransmitMessage_a_in_port_buffer[1];
    F32 * pcx_CANdb_TransmitMessage_a_in_port_ptr[1];
    static const U8 pcx_CANdb_TransmitMessage_a_field_start_pos[1] = {
      7, };

    static const U8 pcx_CANdb_TransmitMessage_a_field_width[1] = {
      1, };

    static const U8 pcx_CANdb_TransmitMessage_a_field_is_signed[1] = {
      0, };

    static const U8 pcx_CANdb_TransmitMessage_a_field_valtype[1] = {
      0, };

    static const U8 pcx_CANdb_TransmitMessage_a_field_order[1] = {
      0, };

    static const F32 pcx_CANdb_TransmitMessage_a_field_eng_min[1] = {
      0.0, };

    static const F32 pcx_CANdb_TransmitMessage_a_field_eng_max[1] = {
      1.0, };

    static const F32 pcx_CANdb_TransmitMessage_a_field_scale[1] = {
      1.0, };

    static const F32 pcx_CANdb_TransmitMessage_a_field_offset[1] = {
      0.0, };

    if (pcx_CANdb_TransmitMessage_a_msg_handle != PCX_CONFIG_ERROR) {
      pcx_CANdb_TransmitMessage_a_in_port_buffer[0] = bsc_ChgContactorCmd;
      pcx_CANdb_TransmitMessage_a_in_port_ptr[0] =
        &pcx_CANdb_TransmitMessage_a_in_port_buffer[0];
      pcx_vdb_pack_msg((const F32 * const *)
                       &pcx_CANdb_TransmitMessage_a_in_port_ptr[0], &data[0],
                       pcx_CANdb_TransmitMessage_a_field_start_pos,
                       pcx_CANdb_TransmitMessage_a_field_width,
                       pcx_CANdb_TransmitMessage_a_field_is_signed,
                       pcx_CANdb_TransmitMessage_a_field_valtype,
                       pcx_CANdb_TransmitMessage_a_field_order,
                       pcx_CANdb_TransmitMessage_a_field_eng_min,
                       pcx_CANdb_TransmitMessage_a_field_eng_max,
                       pcx_CANdb_TransmitMessage_a_field_scale,
                       pcx_CANdb_TransmitMessage_a_field_offset, 0, 1, 1);

      /* Do a transmit every time we are called, (CT2) */
      retval = pcx_transmit(pcx_CANdb_TransmitMessage_a_msg_handle, data);
    } else {
      /* error: pcx_declare_message was unsuccessful */
      retval = FALSE;
    }

    BMShil_B.pcx_CANdb_TransmitMessage_j = !retval;
  }

  /* Lookup_n-D: '<S7>/1-D Lookup Table' */
  BMShil_B.uDLookupTable = look1_binlx(btc_coolant_flow_pct,
    rtCP_uDLookupTable_bp01Data, rtCP_uDLookupTable_tableData, 1U);

  /* S-Function Block: <S7>/pcx_CANdb_TransmitMessage1
   * [$Id: pcx_candb_transmit_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    BOOL retval;
    F32 pcx_CANdb_TransmitMessage1_f_in_port_buffer[1];
    F32 * pcx_CANdb_TransmitMessage1_f_in_port_ptr[1];
    static const U8 pcx_CANdb_TransmitMessage1_f_field_start_pos[1] = {
      7, };

    static const U8 pcx_CANdb_TransmitMessage1_f_field_width[1] = {
      10, };

    static const U8 pcx_CANdb_TransmitMessage1_f_field_is_signed[1] = {
      0, };

    static const U8 pcx_CANdb_TransmitMessage1_f_field_valtype[1] = {
      0, };

    static const U8 pcx_CANdb_TransmitMessage1_f_field_order[1] = {
      0, };

    static const F32 pcx_CANdb_TransmitMessage1_f_field_eng_min[1] = {
      0.0, };

    static const F32 pcx_CANdb_TransmitMessage1_f_field_eng_max[1] = {
      100.0, };

    static const F32 pcx_CANdb_TransmitMessage1_f_field_scale[1] = {
      0.1, };

    static const F32 pcx_CANdb_TransmitMessage1_f_field_offset[1] = {
      0.0, };

    if (pcx_CANdb_TransmitMessage1_f_msg_handle != PCX_CONFIG_ERROR) {
      pcx_CANdb_TransmitMessage1_f_in_port_buffer[0] = BMShil_B.uDLookupTable;
      pcx_CANdb_TransmitMessage1_f_in_port_ptr[0] =
        &pcx_CANdb_TransmitMessage1_f_in_port_buffer[0];
      pcx_vdb_pack_msg((const F32 * const *)
                       &pcx_CANdb_TransmitMessage1_f_in_port_ptr[0], &data[0],
                       pcx_CANdb_TransmitMessage1_f_field_start_pos,
                       pcx_CANdb_TransmitMessage1_f_field_width,
                       pcx_CANdb_TransmitMessage1_f_field_is_signed,
                       pcx_CANdb_TransmitMessage1_f_field_valtype,
                       pcx_CANdb_TransmitMessage1_f_field_order,
                       pcx_CANdb_TransmitMessage1_f_field_eng_min,
                       pcx_CANdb_TransmitMessage1_f_field_eng_max,
                       pcx_CANdb_TransmitMessage1_f_field_scale,
                       pcx_CANdb_TransmitMessage1_f_field_offset, 0, 1, 1);

      /* Do a transmit every time we are called, (CT2) */
      retval = pcx_transmit(pcx_CANdb_TransmitMessage1_f_msg_handle, data);
    } else {
      /* error: pcx_declare_message was unsuccessful */
      retval = FALSE;
    }

    BMShil_B.pcx_CANdb_TransmitMessage1_j = !retval;
  }

  /* S-Function Block: <Root>/pcx_CANdb_ReceiveMessage1
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  {
    U8 data[8];
    U32 timestamp;
    S8 pcxf_rx_receive_status;
    F32 pcx_CANdb_ReceiveMessage1_jb_out_port_buffer[1];
    F32 * pcx_CANdb_ReceiveMessage1_jb_out_port[1];
    static const U8 pcx_CANdb_ReceiveMessage1_jb_field_start_pos[1] = {
      7, };

    static const U8 pcx_CANdb_ReceiveMessage1_jb_field_width[1] = {
      1, };

    static const U8 pcx_CANdb_ReceiveMessage1_jb_field_is_signed[1] = {
      0, };

    static const U8 pcx_CANdb_ReceiveMessage1_jb_field_valtype[1] = {
      0, };

    static const U8 pcx_CANdb_ReceiveMessage1_jb_field_order[1] = {
      0, };

    static const F32 pcx_CANdb_ReceiveMessage1_jb_field_eng_min[1] = {
      0.0, };

    static const F32 pcx_CANdb_ReceiveMessage1_jb_field_eng_max[1] = {
      1.0, };

    static const F32 pcx_CANdb_ReceiveMessage1_jb_field_scale[1] = {
      1.0, };

    static const F32 pcx_CANdb_ReceiveMessage1_jb_field_offset[1] = {
      0.0, };

    if (pcx_CANdb_ReceiveMessage1_jb_msg_handle != PCX_CONFIG_ERROR) {
      pcxf_rx_receive_status = pcx_receive
        (pcx_CANdb_ReceiveMessage1_jb_msg_handle, data, &timestamp);
      BMShil_B.pcx_CANdb_ReceiveMessage1_o1_b = (0 != (pcxf_rx_receive_status &
        PCX_RX_ERROR));
      BMShil_B.pcx_CANdb_ReceiveMessage1_o3_p = (0 != (pcxf_rx_receive_status &
        PCX_RX_OVERRUN));

      /* decompose message into fields */
      if (pcxf_rx_receive_status & PCX_RX_DATA) {
        BMShil_B.pcx_CANdb_ReceiveMessage1_o2_m = 1;
        pcx_CANdb_ReceiveMessage1_jb_out_port[0] = (F32*)
          &pcx_CANdb_ReceiveMessage1_jb_out_port_buffer[0];
        pcx_vdb_unpack_msg(&pcx_CANdb_ReceiveMessage1_jb_out_port[0], NULL,
                           &data[0],
                           pcx_CANdb_ReceiveMessage1_jb_field_start_pos,
                           pcx_CANdb_ReceiveMessage1_jb_field_width,
                           pcx_CANdb_ReceiveMessage1_jb_field_is_signed,
                           pcx_CANdb_ReceiveMessage1_jb_field_valtype,
                           pcx_CANdb_ReceiveMessage1_jb_field_order,
                           pcx_CANdb_ReceiveMessage1_jb_field_eng_min,
                           pcx_CANdb_ReceiveMessage1_jb_field_eng_max,
                           pcx_CANdb_ReceiveMessage1_jb_field_scale,
                           pcx_CANdb_ReceiveMessage1_jb_field_offset, 1, 1, 1);
        BMShil_B.pcx_CANdb_ReceiveMessage1_o4_b =
          pcx_CANdb_ReceiveMessage1_jb_out_port_buffer[0];
      } else {
        BMShil_B.pcx_CANdb_ReceiveMessage1_o2_m = 0;
      }
    } else {
      /* error: pcx_declare_message was unsuccessful */
      BMShil_B.pcx_CANdb_ReceiveMessage1_o1_b = 1;
      BMShil_B.pcx_CANdb_ReceiveMessage1_o2_m = 0;
      BMShil_B.pcx_CANdb_ReceiveMessage1_o3_p = 0;
    }
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion3' */
  BMShil_B.DataTypeConversion3 = (BMShil_B.pcx_CANdb_ReceiveMessage1_o4_b != 0.0);

  /* S-Function (put_reset): '<Root>/put_Reset' */
  /*
   * put_Reset Block: <Root>/put_Reset
   * [$Id: put_reset.tlc 52056 2016-06-06 17:14:50Z tmccardell $]
   */
  {
    BOOL power_reset;
    BOOL watchdog_reset;
    BOOL access_reset;
    BOOL fp_reset;
    BOOL mem_reset;
    BOOL forced_reset;
    BOOL other_reset;
    F32 boot_duration;
    static BOOL put_reset_prev = 1;
    if (BMShil_B.DataTypeConversion3 && !put_reset_prev) {
      psc_force_box_reset();
    }

    put_reset_prev = BMShil_B.DataTypeConversion3;
    psc_decode_reset(&power_reset,
                     &watchdog_reset,
                     &access_reset,
                     &fp_reset,
                     &mem_reset,
                     &forced_reset,
                     &other_reset,
                     &boot_duration);
    BMShil_B.put_Reset_o1 = power_reset;
    BMShil_B.put_Reset_o2 = watchdog_reset;
    BMShil_B.put_Reset_o3 = access_reset;
    BMShil_B.put_Reset_o4 = fp_reset;
    BMShil_B.put_Reset_o5 = mem_reset;
    BMShil_B.put_Reset_o6 = forced_reset;
    BMShil_B.put_Reset_o7 = other_reset;
    BMShil_B.put_Reset_o8 = boot_duration;
  }

  /* Update for Delay: '<Root>/Delay' */
  BMShil_DWork.Delay_DSTATE[0] = BMShil_DWork.Delay_DSTATE[1];
  BMShil_DWork.Delay_DSTATE[1] = bsc_KeyValue;

  /* Update for Delay: '<Root>/Delay1' */
  BMShil_DWork.Delay1_DSTATE[0] = BMShil_DWork.Delay1_DSTATE[1];
  BMShil_DWork.Delay1_DSTATE[1] = bsc_ChargerValue;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.1, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   */
  BMShil_M->Timing.clockTick0++;
}

/* Model initialize function */
void BMShil_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(FREAL));

  /* Model Initialize fcn for ModelReference Block: '<S2>/BMO' */
  BMO_initialize(rtmGetErrorStatusPointer(BMShil_M),
                 &(BMShil_DWork.BMO_DWORK1.rtm));

  /* Model Initialize fcn for ModelReference Block: '<S2>/BSC' */
  BSC_initialize(rtmGetErrorStatusPointer(BMShil_M),
                 &(BMShil_DWork.BSC_DWORK1.rtm), &(BMShil_DWork.BSC_DWORK1.rtzce));

  /* Model Initialize fcn for ModelReference Block: '<S2>/BTC' */
  BTC_initialize(rtmGetErrorStatusPointer(BMShil_M),
                 &(BMShil_DWork.BTC_DWORK1.rtm));

  /* Model Initialize fcn for ModelReference Block: '<S2>/CB' */
  CB_initialize(rtmGetErrorStatusPointer(BMShil_M), &(BMShil_DWork.CB_DWORK1.rtm));

  /* Model Initialize fcn for ModelReference Block: '<S2>/CC' */
  CC_initialize(rtmGetErrorStatusPointer(BMShil_M), &(BMShil_DWork.CC_DWORK1.rtm),
                &(BMShil_DWork.CC_DWORK1.rtzce));

  /* Model Initialize fcn for ModelReference Block: '<S2>/SOC' */
  SOC_initialize(rtmGetErrorStatusPointer(BMShil_M),
                 &(BMShil_DWork.SOC_DWORK1.rtm));

  /* Model Initialize fcn for ModelReference Block: '<S2>/SOH' */
  soh_initialize(rtmGetErrorStatusPointer(BMShil_M),
                 &(BMShil_DWork.SOH_DWORK1.rtm), &(BMShil_DWork.SOH_DWORK1.rtzce));

  /* Model Initialize fcn for ModelReference Block: '<S2>/SOP' */
  sop_initialize(rtmGetErrorStatusPointer(BMShil_M),
                 &(BMShil_DWork.SOP_DWORK1.rtm));

  /* Model Initialize fcn for ModelReference Block: '<S2>/VITM' */
  VITM_initialize(rtmGetErrorStatusPointer(BMShil_M),
                  &(BMShil_DWork.VITM_DWORK1.rtm),
                  &(BMShil_DWork.VITM_DWORK1.rtzce));

  /* user code (Start function Body) */

  /*
   * [$Id: put_identification.tlc 48772 2015-11-04 16:51:23Z sborders $]
   */

  /* S-Function Block: <S5>/pcx_CANdb_ReceiveMessage
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_ReceiveMessage_msg_handle = pcx_declare_message(PCX_RX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    56);

  /* S-Function Block: <S3>/pcx_CANdb_ReceiveMessage5
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_ReceiveMessage5_msg_handle = pcx_declare_message(PCX_RX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    35);

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage9
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_ReceiveMessage9_msg_handle = pcx_declare_message(PCX_RX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    17);

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage8
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_ReceiveMessage8_msg_handle = pcx_declare_message(PCX_RX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    16);

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage7
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_ReceiveMessage7_msg_handle = pcx_declare_message(PCX_RX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    9);

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage6
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_ReceiveMessage6_msg_handle = pcx_declare_message(PCX_RX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    8);

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage5
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_ReceiveMessage5_b_msg_handle = pcx_declare_message(PCX_RX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    7);

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage4
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_ReceiveMessage4_msg_handle = pcx_declare_message(PCX_RX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    6);

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage3
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_ReceiveMessage3_msg_handle = pcx_declare_message(PCX_RX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    5);

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage2
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_ReceiveMessage2_msg_handle = pcx_declare_message(PCX_RX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    4);

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage1
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_ReceiveMessage1_msg_handle = pcx_declare_message(PCX_RX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    3);

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_ReceiveMessage_p_msg_handle = pcx_declare_message(PCX_RX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    2);

  /* S-Function Block: <S1>/pcx_CANdb_ReceiveMessage
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_ReceiveMessage_pz_msg_handle = pcx_declare_message(PCX_RX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    36);

  /* S-Function Block: <S1>/pcx_CANdb_ReceiveMessage1
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_ReceiveMessage1_j_msg_handle = pcx_declare_message(PCX_RX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    37);

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage14
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_ReceiveMessage14_msg_handle = pcx_declare_message(PCX_RX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    33);

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage13
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_ReceiveMessage13_msg_handle = pcx_declare_message(PCX_RX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    32);

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage12
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_ReceiveMessage12_msg_handle = pcx_declare_message(PCX_RX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    25);

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage11
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_ReceiveMessage11_msg_handle = pcx_declare_message(PCX_RX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    24);

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage10
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_ReceiveMessage10_msg_handle = pcx_declare_message(PCX_RX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    23);

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage9
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_ReceiveMessage9_n_msg_handle = pcx_declare_message(PCX_RX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    22);

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage8
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_ReceiveMessage8_f_msg_handle = pcx_declare_message(PCX_RX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    21);

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage7
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_ReceiveMessage7_o_msg_handle = pcx_declare_message(PCX_RX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    20);

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage6
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_ReceiveMessage6_p_msg_handle = pcx_declare_message(PCX_RX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    19);

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage5
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_ReceiveMessage5_a_msg_handle = pcx_declare_message(PCX_RX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    18);

  /* Start for ModelReference: '<S2>/SOC' */
  SOC_Start(&BMShil_B.SOC_o7[0], &(BMShil_DWork.SOC_DWORK1.rtdw));

  /* Start for ModelReference: '<S2>/SOH' */
  soh_Start(&BMShil_B.SOH_o4[0], &(BMShil_DWork.SOH_DWORK1.rtdw));

  /* S-Function Block: <S4>/pcx_CANdb_TransmitMessage
   * [$Id: pcx_candb_transmit_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_TransmitMessage_msg_handle = pcx_declare_message(PCX_TX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    40);

  /* S-Function Block: <S4>/pcx_CANdb_TransmitMessage1
   * [$Id: pcx_candb_transmit_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_TransmitMessage1_msg_handle = pcx_declare_message(PCX_TX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    41);

  /* S-Function Block: <S4>/pcx_CANdb_TransmitMessage2
   * [$Id: pcx_candb_transmit_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_TransmitMessage2_msg_handle = pcx_declare_message(PCX_TX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    49);

  /* S-Function Block: <S4>/pcx_CANdb_TransmitMessage3
   * [$Id: pcx_candb_transmit_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_TransmitMessage3_msg_handle = pcx_declare_message(PCX_TX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    50);

  /* S-Function Block: <S4>/pcx_CANdb_TransmitMessage4
   * [$Id: pcx_candb_transmit_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_TransmitMessage4_msg_handle = pcx_declare_message(PCX_TX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    51);

  /* S-Function Block: <S4>/pcx_CANdb_TransmitMessage5
   * [$Id: pcx_candb_transmit_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_TransmitMessage5_msg_handle = pcx_declare_message(PCX_TX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    48);

  /* S-Function Block: <S4>/pcx_CANdb_TransmitMessage6
   * [$Id: pcx_candb_transmit_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_TransmitMessage6_msg_handle = pcx_declare_message(PCX_TX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    52);

  /* S-Function Block: <S4>/pcx_CANdb_TransmitMessage7
   * [$Id: pcx_candb_transmit_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_TransmitMessage7_msg_handle = pcx_declare_message(PCX_TX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    53);

  /* S-Function Block: <S4>/pcx_CANdb_TransmitMessage8
   * [$Id: pcx_candb_transmit_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_TransmitMessage8_msg_handle = pcx_declare_message(PCX_TX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    54);

  /* S-Function Block: <S4>/pcx_CANdb_TransmitMessage9
   * [$Id: pcx_candb_transmit_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_TransmitMessage9_msg_handle = pcx_declare_message(PCX_TX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    34);

  /* S-Function Block: <S6>/pcx_CANdb_TransmitMessage1
   * [$Id: pcx_candb_transmit_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_TransmitMessage1_k_msg_handle = pcx_declare_message(PCX_TX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    38);

  /* S-Function Block: <S6>/pcx_CANdb_TransmitMessage
   * [$Id: pcx_candb_transmit_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_TransmitMessage_a_msg_handle = pcx_declare_message(PCX_TX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    55);

  /* S-Function Block: <S7>/pcx_CANdb_TransmitMessage1
   * [$Id: pcx_candb_transmit_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_TransmitMessage1_f_msg_handle = pcx_declare_message(PCX_TX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    39);

  /* S-Function Block: <Root>/pcx_CANdb_ReceiveMessage1
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  pcx_CANdb_ReceiveMessage1_jb_msg_handle = pcx_declare_message(PCX_RX_MSG,
    PIO_CAN_A10_A9_A,
    0,
    8,
    57);

  /* S-Function Block: <Root>/pcx_CANConfiguration1
   * [$Id: pcx_can_config.tlc 30151 2012-08-08 15:30:35Z gbartlett $]
   */
  pcx_config(PIO_CAN_A10_A9_A, PIO_CBAUD_500_KBPS);

  /* S-Function Block: <S5>/pcx_CANdb_ReceiveMessage
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  BMShil_B.pcx_CANdb_ReceiveMessage_o4 = 0;

  /* S-Function Block: <S3>/pcx_CANdb_ReceiveMessage5
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  BMShil_B.pcx_CANdb_ReceiveMessage5_o4 = 0;

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage9
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  BMShil_B.pcx_CANdb_ReceiveMessage9_o4 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage9_o5 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage9_o6 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage9_o7 = 0;

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage8
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  BMShil_B.pcx_CANdb_ReceiveMessage8_o4 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage8_o5 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage8_o6 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage8_o7 = 0;

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage7
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  BMShil_B.pcx_CANdb_ReceiveMessage7_o4 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage7_o5 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage7_o6 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage7_o7 = 0;

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage6
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  BMShil_B.pcx_CANdb_ReceiveMessage6_o4 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage6_o5 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage6_o6 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage6_o7 = 0;

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage5
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  BMShil_B.pcx_CANdb_ReceiveMessage5_o4_p = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage5_o5 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage5_o6 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage5_o7 = 0;

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage4
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  BMShil_B.pcx_CANdb_ReceiveMessage4_o4 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage4_o5 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage4_o6 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage4_o7 = 0;

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage3
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  BMShil_B.pcx_CANdb_ReceiveMessage3_o4 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage3_o5 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage3_o6 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage3_o7 = 0;

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage2
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  BMShil_B.pcx_CANdb_ReceiveMessage2_o4 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage2_o5 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage2_o6 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage2_o7 = 0;

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage1
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  BMShil_B.pcx_CANdb_ReceiveMessage1_o4 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage1_o5 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage1_o6 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage1_o7 = 0;

  /* S-Function Block: <S11>/pcx_CANdb_ReceiveMessage
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  BMS_CellVoltage = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage_o5 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage_o6 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage_o7 = 0;

  /* S-Function Block: <S1>/pcx_CANdb_ReceiveMessage
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  BMShil_B.pcx_CANdb_ReceiveMessage_o4_a = 0;
  BMS_RawPackVoltage = 0;

  /* S-Function Block: <S1>/pcx_CANdb_ReceiveMessage1
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  BMS_RawVehSideVoltage = 0;
  BMS_MedFault = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage1_o6_b = 0;

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage14
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  BMShil_B.pcx_CANdb_ReceiveMessage14_o4 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage14_o5 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage14_o6 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage14_o7 = 0;

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage13
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  BMShil_B.pcx_CANdb_ReceiveMessage13_o4 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage13_o5 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage13_o6 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage13_o7 = 0;

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage12
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  BMShil_B.pcx_CANdb_ReceiveMessage12_o4 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage12_o5 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage12_o6 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage12_o7 = 0;

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage11
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  BMShil_B.pcx_CANdb_ReceiveMessage11_o4 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage11_o5 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage11_o6 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage11_o7 = 0;

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage10
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  BMShil_B.pcx_CANdb_ReceiveMessage10_o4 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage10_o5 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage10_o6 = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage10_o7 = 0;

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage9
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  BMShil_B.pcx_CANdb_ReceiveMessage9_o4_h = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage9_o5_n = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage9_o6_f = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage9_o7_e = 0;

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage8
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  BMShil_B.pcx_CANdb_ReceiveMessage8_o4_c = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage8_o5_e = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage8_o6_j = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage8_o7_l = 0;

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage7
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  BMShil_B.pcx_CANdb_ReceiveMessage7_o4_c = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage7_o5_e = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage7_o6_p = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage7_o7_n = 0;

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage6
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  BMShil_B.pcx_CANdb_ReceiveMessage6_o4_e = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage6_o5_b = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage6_o6_k = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage6_o7_p = 0;

  /* S-Function Block: <S10>/pcx_CANdb_ReceiveMessage5
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  BMS_CellTemp = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage5_o5_o = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage5_o6_e = 0;
  BMShil_B.pcx_CANdb_ReceiveMessage5_o7_n = 0;

  /* InitializeConditions for ModelReference: '<S2>/SOC' */
  SOC_c_Init(&(BMShil_DWork.SOC_DWORK1.rtdw));

  /* InitializeConditions for ModelReference: '<S2>/BSC' */
  BSC_Init((&(bsc_FaultType)), &(BMShil_DWork.BSC_DWORK1.rtb));

  /* InitializeConditions for ModelReference: '<S2>/CC' */
  CC_Init(&(BMShil_DWork.CC_DWORK1.rtdw));

  /* InitializeConditions for ModelReference: '<S2>/BTC' */
  BTC_Init(&(BMShil_DWork.BTC_DWORK1.rtdw));

  /* InitializeConditions for ModelReference: '<S2>/SOH' */
  soh_Init(&(BMShil_DWork.SOH_DWORK1.rtdw));

  /* S-Function Block: <Root>/pcx_CANdb_ReceiveMessage1
   * [$Id: pcx_candb_receive_message.tlc 66187 2018-12-04 21:39:33Z csmith $]
   */
  BMShil_B.pcx_CANdb_ReceiveMessage1_o4_b = 0;
}

/*
 *****************************************************************************
 *  Purpose:        Initialise the model prior to performing any iterations.
 *  Returns:        void
 *  Notes:          None.
 *****************************************************************************
 */
void psc_initialise_app(void)
{
  /* Initialise the model code */
  BMShil_initialize();
}

/*
 *****************************************************************************
 *  Purpose:        Handle any background processing for the application.
 *                  For Simulink models there is nothing to do.
 *  Returns:        void
 *  Notes:          None.
 *****************************************************************************
 */
void psc_background_app(void)
{
  /* Nothing to do for Simulink models. */
}

/*
 *****************************************************************************
 *  Purpose:        Handle the TDC-firing asynchronous function-call trigger
 *                  (if required) by calling the model appropriately.
 *  Returns:        void
 *  Notes:          None.
 *****************************************************************************
 */
void pkn_angular_model_task(void)
{
  /* No angular functionality, task declared for linkage only. */
}

/*
 *****************************************************************************
 *  Purpose:        Handle a periodic rate iteration of the model.
 *  Returns:        void
 *  Notes:          None.
 *****************************************************************************
 */
void pkn_100ms_model_task(void)
{
  BMShil_step();

  /* Get model outputs here */
}

/* end of file */
