##############################################################################
##
##  Project:        OpenECU
##  Version:        $Id: soh.mk 49241 2015-12-07 18:03:38Z cforhart $
##  File:           $URL: https://aetius.ps.local/svn/OpenECU/development/platform/branches/release-2.8.0-r2019-1-rc2/openecu/rtw/c/openecu_ert/soh.mk $
##  Description:    RTW template makefile for building an OpenECU model
##                  (specifically for R2015b).
##
##  Copyright (C) 2015 Pi Innovo
##  This document (program) contains proprietary information
##  which is the property of Pi Innovo
##  The contents of this document (program) must not be copied
##  or disclosed to a third party without the prior agreement
##  of an authorised officer of Pi Innovo
##
##  Notes:          This template makefile is automatically parsed by
##                  the RTW build procedure to create "<model>.mk"
##
##############################################################################

##============== RTW template portion ==========================================
##

#------------------------ Macros read by make_rtw ------------------------------
#
# The following macros are read by the Real-Time Workshop build procedure:
#
#  MAKECMD         - This is the command used to invoke the make utility
#  HOST            - What platform this template makefile is targeted for
#                    (i.e. PC or UNIX)
#  BUILD           - Invoke make from the Real-Time Workshop build procedure
#                    (yes/no)?
#  SYS_TARGET_FILE - Name of system target file.

MAKECMD =                       "%MATLAB%\bin\win64\gmake"
HOST =                          PC
BUILD =                         yes
SYS_TARGET_FILE =               openecu_ert.tlc
COMPILER_TOOL_CHAIN =           default

#---------------------- Tokens expanded by make_rtw ----------------------------
#
# The following tokens, when wrapped with "|>" and "<|" are expanded by the
# Real-Time Workshop build procedure.
#
#  MODEL               - Name of the Simulink block diagram
#  MODULES             - Any additional generated source modules
#  MAKEFILE            - Name of makefile created from template makefile <model>.mk
#  MATLAB_ROOT         - Path to were MATLAB is installed.
#  MATLAB_BIN          - Path to MATLAB executable.
#  S_FUNCTIONS         - List of S-functions.
#  S_FUNCTIONS_LIB     - List of S-functions libraries to link.
#  SOLVER              - Solver source file name
#  NUMST               - Number of sample times
#  TID01EQ             - yes (1) r no (0): Are sampling rates of continuous task
#                        (tid=0) and 1st discrete task equal.
#  NCSTATES            - Number of continuous states
#  BUILDARGS           - Options passed in at the command line.
#  MULTITASKING        - yes (1) or no (0): Is solver mode multitasking
#  ADD_INCLUDES        - series of include directories for s-functions etc.
#  INTEGER_CODE        - yes (1) or no (0): Is generated code purely integer
#  MULTI_INSTANCE_CODE - Is the generated code multi instantiable (1/0)?
#  PORTABLE_WORDSIZES  - Is this build intented for SIL simulation with portable word sizes (1/0)?
#  SHRLIBTARGET        - Is this build intended for generation of a shared library instead
#                        of executable (1/0)?

MODEL                         = soh
MODULES                       = soh.c 
MAKEFILE                      = soh.mk
MATLAB_ROOT                   = C:\Program Files\MATLAB\R2015b
MATLAB_BIN                    = C:\Program Files\MATLAB\R2015b\bin
S_FUNCTIONS                   = 
S_FUNCTIONS_LIB               = 
SOLVER                        = 
NUMST                         = 1
TID01EQ                       = 0
NCSTATES                      = 0
BUILDARGS                     = optimized_floating_point=1 INCLUDE_MDL_TERMINATE_FCN=0 MAT_FILE=0 GENERATE_ASAP2=0 EXT_MODE=0 EXTMODE_STATIC_ALLOC=0 EXTMODE_STATIC_ALLOC_SIZE=1000000 EXTMODE_TRANSPORT=0 TMW_EXTMODE_TESTING=0 MAX_DD_LENGTH=31 CONT_IF_VISION_STRATEGY_FAILS=0 ISPROTECTINGMODEL=NOTPROTECTING OPTS="-DSLMSG_ALLOW_SYSTEM_ALLOC"
MULTITASKING                  = 0
GEN_IMAGE_SRECORD             = 1
GEN_IMAGE_HEX                 = 1
GEN_ASAP_GENERIC              = 1
GEN_ASAP_VISION               = 1
GEN_ASAP_INCA                 = 1
GEN_ASAP_CANAPE               = 1
GEN_DTC_DDES                  = 0
GEN_ASAP_OLD                  = 0
GEN_IMAGE_VISION_STRATEGY     = 1
GEN_ASAP_NEED_FLASH_VOLTS     = 0
ADD_INCLUDES                  =  D:\Projects\BMS\P006n\08_Work_in_progress\Repo_Sync_folder\HiLCAN\slprj\openecu_ert\soh  D:\Projects\BMS\P006n\08_Work_in_progress\Repo_Sync_folder\HiLCAN  D:\Projects\BMS\P006n\08_Work_in_progress\Repo_Sync_folder\SOH 
INTEGER_CODE                  = 0
ONESTEPFCN                    = 1
B_ERTSFCN                     = 0
MEXEXT                        = mexw64
MULTI_INSTANCE_CODE           = 0
MEX_OPT_FILE                  = -f 
PORTABLE_WORDSIZES            = 0
SHRLIBTARGET                  = 0

# Model Reference related tokens
MODELREFS                     = 
MODELLIB                      = soh_rtwlib.a
MODELREF_LINK_LIBS            = 
MODELREF_LINK_RSPFILE         = soh_ref.rsp
MODELREF_INC_PATH             = 
RELATIVE_PATH_TO_ANCHOR       = ..\..\..
MODELREF_TARGET_TYPE          = RTW


# Support for shared utilities

SHARED_SRC      = ..\..\..\slprj\openecu_ert\_sharedutils\*.c*
SHARED_SRC_DIR  = ..\..\..\slprj\openecu_ert\_sharedutils
SHARED_BIN_DIR  = ..\..\..\slprj\openecu_ert\_sharedutils
SHARED_LIB      = ..\..\..\slprj\openecu_ert\_sharedutils\rtwshared.a

# Accept the alternative root and bin directories to resolve directory names with
# spaces.

ALT_MATLAB_ROOT               = C:\PROGRA~1\MATLAB\R2015b
ALT_MATLAB_BIN                = C:\PROGRA~1\MATLAB\R2015b\bin

#-- In the case when directory name contains space ---
ifneq ($(MATLAB_ROOT),$(ALT_MATLAB_ROOT))
MATLAB_ROOT := $(ALT_MATLAB_ROOT)
endif
ifneq ($(MATLAB_BIN),$(ALT_MATLAB_BIN))
MATLAB_BIN := $(ALT_MATLAB_BIN)
endif

# Determine if generating an S-function or application
SFCN = 0
ifeq ($(MODELREF_TARGET_TYPE),SIM)
  SFCN = 1
endif
ifeq ($(B_ERTSFCN),1)
  SFCN = 1
endif

##
##============== End of RTW template portion ===================================

GEN_RTW_LIBRARY = 0
PLAT_C_SRC      =
RTW_C_SRC       =
MODEL_TUNE_SRC  = $(MODEL).c
USE_RTMODEL     = 1

include $(MODEL)_sup.mk
include $(PLATFORM_ROOT)\mk_model_$(COMPILER).mk

##==============================================================================
## EOF: soh.mk

