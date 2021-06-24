#include "__cf_OL_HiLData.h"
#include <math.h>
#include "OL_HiLData_acc.h"
#include "OL_HiLData_acc_private.h"
#include <stdio.h>
#include "slexec_vm_simstruct_bridge.h"
#include "slexec_vm_zc_functions.h"
#include "simstruc.h"
#include "fixedpoint.h"
#define CodeFormat S-Function
#define AccDefine1 Accelerator_S-Function
real_T look1_binlxpw ( real_T u0 , const real_T bp0 [ ] , const real_T table
[ ] , uint32_T maxIndex ) { real_T frac ; uint32_T iRght ; uint32_T iLeft ;
uint32_T bpIdx ; if ( u0 <= bp0 [ 0U ] ) { iLeft = 0U ; frac = ( u0 - bp0 [
0U ] ) / ( bp0 [ 1U ] - bp0 [ 0U ] ) ; } else if ( u0 < bp0 [ maxIndex ] ) {
bpIdx = maxIndex >> 1U ; iLeft = 0U ; iRght = maxIndex ; while ( iRght -
iLeft > 1U ) { if ( u0 < bp0 [ bpIdx ] ) { iRght = bpIdx ; } else { iLeft =
bpIdx ; } bpIdx = ( iRght + iLeft ) >> 1U ; } frac = ( u0 - bp0 [ iLeft ] ) /
( bp0 [ iLeft + 1U ] - bp0 [ iLeft ] ) ; } else { iLeft = maxIndex - 1U ;
frac = ( u0 - bp0 [ maxIndex - 1U ] ) / ( bp0 [ maxIndex ] - bp0 [ maxIndex -
1U ] ) ; } return ( table [ iLeft + 1U ] - table [ iLeft ] ) * frac + table [
iLeft ] ; } static void mdlOutputs ( SimStruct * S , int_T tid ) { real_T
nx2cpamho2 ; char_T * sErr ; void * inputMsgRef ; int32_T isMsgAvailable ;
int32_T isMsgReceived ; real_T h2lktdts32 ; h3yzyoq5l5 * _rtB ; arab5wc1hw *
_rtP ; ifox4g5gjt * _rtDW ; _rtDW = ( ( ifox4g5gjt * ) ssGetRootDWork ( S ) )
; _rtP = ( ( arab5wc1hw * ) ssGetDefaultParam ( S ) ) ; _rtB = ( ( h3yzyoq5l5
* ) _ssGetBlockIO ( S ) ) ; ssCallAccelRunBlock ( S , 1 , 0 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 1 , SS_CALL_MDL_OUTPUTS
) ; _rtB -> m23ap401rp . ID = 36U ; _rtB -> m23ap401rp . Length = 8U ; _rtB
-> m23ap401rp . Extended = 0U ; _rtB -> m23ap401rp . Remote = 0 ; _rtB ->
m23ap401rp . Data [ 0 ] = 0 ; _rtB -> m23ap401rp . Data [ 1 ] = 0 ; _rtB ->
m23ap401rp . Data [ 2 ] = 0 ; _rtB -> m23ap401rp . Data [ 3 ] = 0 ; _rtB ->
m23ap401rp . Data [ 4 ] = 0 ; _rtB -> m23ap401rp . Data [ 5 ] = 0 ; _rtB ->
m23ap401rp . Data [ 6 ] = 0 ; _rtB -> m23ap401rp . Data [ 7 ] = 0 ; { { {
real64_T outValue = 0 ; { real64_T result = _rtB -> izjlwcw4oj ; if ( result
< - 200.0 ) { result = - 200.0 ; } if ( result > 200.0 ) { result = 200.0 ; }
result = result / 0.001 ; outValue = result ; } { { int32_T packedValue ;
int32_T scaledValue ; scaledValue = ( int32_T ) ( outValue ) ; if (
scaledValue > ( int32_T ) ( 8388607 ) ) { packedValue = 8388607 ; } else if (
scaledValue < ( int32_T ) ( ( - ( 8388607 ) - 1 ) ) ) { packedValue = ( - (
8388607 ) - 1 ) ; } else { packedValue = ( int32_T ) ( scaledValue ) ; } {
uint32_T tempValue = ( uint32_T ) ( packedValue ) ; { _rtB -> m23ap401rp .
Data [ 2 ] = _rtB -> m23ap401rp . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint32_T ) ( tempValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 0 ) ) >> 0
) << 0 ) ; } { _rtB -> m23ap401rp . Data [ 2 ] = _rtB -> m23ap401rp . Data [
2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( tempValue & ( uint32_T ) ( (
( uint32_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> m23ap401rp . Data [
2 ] = _rtB -> m23ap401rp . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint32_T ) ( tempValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 2 ) ) >> 2
) << 2 ) ; } { _rtB -> m23ap401rp . Data [ 2 ] = _rtB -> m23ap401rp . Data [
2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( tempValue & ( uint32_T ) ( (
( uint32_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> m23ap401rp . Data [
2 ] = _rtB -> m23ap401rp . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint32_T ) ( tempValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 4 ) ) >> 4
) << 4 ) ; } { _rtB -> m23ap401rp . Data [ 2 ] = _rtB -> m23ap401rp . Data [
2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( tempValue & ( uint32_T ) ( (
( uint32_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> m23ap401rp . Data [
2 ] = _rtB -> m23ap401rp . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint32_T ) ( tempValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 6 ) ) >> 6
) << 6 ) ; } { _rtB -> m23ap401rp . Data [ 2 ] = _rtB -> m23ap401rp . Data [
2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( tempValue & ( uint32_T ) ( (
( uint32_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> m23ap401rp . Data [
1 ] = _rtB -> m23ap401rp . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint32_T ) ( tempValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 8 ) ) >> 8
) << 0 ) ; } { _rtB -> m23ap401rp . Data [ 1 ] = _rtB -> m23ap401rp . Data [
1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( tempValue & ( uint32_T ) ( (
( uint32_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> m23ap401rp . Data [
1 ] = _rtB -> m23ap401rp . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint32_T ) ( tempValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> m23ap401rp . Data [ 1 ] = _rtB -> m23ap401rp . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( tempValue & ( uint32_T ) (
( ( uint32_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> m23ap401rp .
Data [ 1 ] = _rtB -> m23ap401rp . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint32_T ) ( tempValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> m23ap401rp . Data [ 1 ] = _rtB -> m23ap401rp . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( tempValue & ( uint32_T ) (
( ( uint32_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> m23ap401rp .
Data [ 1 ] = _rtB -> m23ap401rp . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint32_T ) ( tempValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> m23ap401rp . Data [ 1 ] = _rtB -> m23ap401rp . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( tempValue & ( uint32_T ) (
( ( uint32_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } { _rtB -> m23ap401rp .
Data [ 0 ] = _rtB -> m23ap401rp . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint32_T ) ( tempValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 16 ) ) >>
16 ) << 0 ) ; } { _rtB -> m23ap401rp . Data [ 0 ] = _rtB -> m23ap401rp . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( tempValue & ( uint32_T ) (
( ( uint32_T ) ( 1 ) ) << 17 ) ) >> 17 ) << 1 ) ; } { _rtB -> m23ap401rp .
Data [ 0 ] = _rtB -> m23ap401rp . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint32_T ) ( tempValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 18 ) ) >>
18 ) << 2 ) ; } { _rtB -> m23ap401rp . Data [ 0 ] = _rtB -> m23ap401rp . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( tempValue & ( uint32_T ) (
( ( uint32_T ) ( 1 ) ) << 19 ) ) >> 19 ) << 3 ) ; } { _rtB -> m23ap401rp .
Data [ 0 ] = _rtB -> m23ap401rp . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint32_T ) ( tempValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 20 ) ) >>
20 ) << 4 ) ; } { _rtB -> m23ap401rp . Data [ 0 ] = _rtB -> m23ap401rp . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( tempValue & ( uint32_T ) (
( ( uint32_T ) ( 1 ) ) << 21 ) ) >> 21 ) << 5 ) ; } { _rtB -> m23ap401rp .
Data [ 0 ] = _rtB -> m23ap401rp . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint32_T ) ( tempValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 22 ) ) >>
22 ) << 6 ) ; } { _rtB -> m23ap401rp . Data [ 0 ] = _rtB -> m23ap401rp . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( tempValue & ( uint32_T ) (
( ( uint32_T ) ( 1 ) ) << 23 ) ) >> 23 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> pqlcywevsz ; if ( result > 200.0 )
{ result = 200.0 ; } result = result / 0.001 ; outValue = result ; } { {
uint32_T packedValue ; if ( outValue > ( real64_T ) ( 16777215 ) ) {
packedValue = ( uint32_T ) 16777215 ; } else if ( outValue < ( real64_T ) ( 0
) ) { packedValue = ( uint32_T ) 0 ; } else { packedValue = ( uint32_T ) (
outValue ) ; } { { _rtB -> m23ap401rp . Data [ 5 ] = _rtB -> m23ap401rp .
Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( packedValue & (
uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB ->
m23ap401rp . Data [ 5 ] = _rtB -> m23ap401rp . Data [ 5 ] | ( uint8_T ) ( (
uint8_T ) ( ( uint32_T ) ( packedValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 )
) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> m23ap401rp . Data [ 5 ] = _rtB ->
m23ap401rp . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) (
packedValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ;
} { _rtB -> m23ap401rp . Data [ 5 ] = _rtB -> m23ap401rp . Data [ 5 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( packedValue & ( uint32_T ) ( ( (
uint32_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> m23ap401rp . Data [ 5
] = _rtB -> m23ap401rp . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T
) ( packedValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4
) ; } { _rtB -> m23ap401rp . Data [ 5 ] = _rtB -> m23ap401rp . Data [ 5 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( packedValue & ( uint32_T ) ( ( (
uint32_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> m23ap401rp . Data [ 5
] = _rtB -> m23ap401rp . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T
) ( packedValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6
) ; } { _rtB -> m23ap401rp . Data [ 5 ] = _rtB -> m23ap401rp . Data [ 5 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( packedValue & ( uint32_T ) ( ( (
uint32_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> m23ap401rp . Data [ 4
] = _rtB -> m23ap401rp . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T
) ( packedValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0
) ; } { _rtB -> m23ap401rp . Data [ 4 ] = _rtB -> m23ap401rp . Data [ 4 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( packedValue & ( uint32_T ) ( ( (
uint32_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> m23ap401rp . Data [ 4
] = _rtB -> m23ap401rp . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T
) ( packedValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 10 ) ) >> 10 ) <<
2 ) ; } { _rtB -> m23ap401rp . Data [ 4 ] = _rtB -> m23ap401rp . Data [ 4 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( packedValue & ( uint32_T ) ( ( (
uint32_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> m23ap401rp . Data [
4 ] = _rtB -> m23ap401rp . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint32_T ) ( packedValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> m23ap401rp . Data [ 4 ] = _rtB -> m23ap401rp . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( packedValue & ( uint32_T )
( ( ( uint32_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> m23ap401rp .
Data [ 4 ] = _rtB -> m23ap401rp . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint32_T ) ( packedValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> m23ap401rp . Data [ 4 ] = _rtB -> m23ap401rp . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( packedValue & ( uint32_T )
( ( ( uint32_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } { _rtB -> m23ap401rp .
Data [ 3 ] = _rtB -> m23ap401rp . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint32_T ) ( packedValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 16 ) ) >>
16 ) << 0 ) ; } { _rtB -> m23ap401rp . Data [ 3 ] = _rtB -> m23ap401rp . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( packedValue & ( uint32_T )
( ( ( uint32_T ) ( 1 ) ) << 17 ) ) >> 17 ) << 1 ) ; } { _rtB -> m23ap401rp .
Data [ 3 ] = _rtB -> m23ap401rp . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint32_T ) ( packedValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 18 ) ) >>
18 ) << 2 ) ; } { _rtB -> m23ap401rp . Data [ 3 ] = _rtB -> m23ap401rp . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( packedValue & ( uint32_T )
( ( ( uint32_T ) ( 1 ) ) << 19 ) ) >> 19 ) << 3 ) ; } { _rtB -> m23ap401rp .
Data [ 3 ] = _rtB -> m23ap401rp . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint32_T ) ( packedValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 20 ) ) >>
20 ) << 4 ) ; } { _rtB -> m23ap401rp . Data [ 3 ] = _rtB -> m23ap401rp . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( packedValue & ( uint32_T )
( ( ( uint32_T ) ( 1 ) ) << 21 ) ) >> 21 ) << 5 ) ; } { _rtB -> m23ap401rp .
Data [ 3 ] = _rtB -> m23ap401rp . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint32_T ) ( packedValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 22 ) ) >>
22 ) << 6 ) ; } { _rtB -> m23ap401rp . Data [ 3 ] = _rtB -> m23ap401rp . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( packedValue & ( uint32_T )
( ( ( uint32_T ) ( 1 ) ) << 23 ) ) >> 23 ) << 7 ) ; } } } } } } } sErr =
GetErrorBuffer ( & _rtDW -> gtw3dab1lt [ 0U ] ) ; inputMsgRef = & _rtB ->
m23ap401rp ; LibOutputs_CANTransmit ( & _rtDW -> gtw3dab1lt [ 0U ] ,
inputMsgRef , 1 ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( S , sErr ) ;
ssSetStopRequested ( S , 1 ) ; } ssCallAccelRunBlock ( S , 1 , 4 ,
SS_CALL_MDL_OUTPUTS ) ; ssCallAccelRunBlock ( S , 1 , 5 , SS_CALL_MDL_OUTPUTS
) ; ssCallAccelRunBlock ( S , 1 , 6 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
llq4xumbdn . ID = 37U ; _rtB -> llq4xumbdn . Length = 8U ; _rtB -> llq4xumbdn
. Extended = 0U ; _rtB -> llq4xumbdn . Remote = 0 ; _rtB -> llq4xumbdn . Data
[ 0 ] = 0 ; _rtB -> llq4xumbdn . Data [ 1 ] = 0 ; _rtB -> llq4xumbdn . Data [
2 ] = 0 ; _rtB -> llq4xumbdn . Data [ 3 ] = 0 ; _rtB -> llq4xumbdn . Data [ 4
] = 0 ; _rtB -> llq4xumbdn . Data [ 5 ] = 0 ; _rtB -> llq4xumbdn . Data [ 6 ]
= 0 ; _rtB -> llq4xumbdn . Data [ 7 ] = 0 ; { { { real64_T outValue = 0 ; {
real64_T result = _rtB -> iflrvlnmco ; outValue = result ; } { { uint8_T
packedValue ; if ( outValue > ( real64_T ) ( 1 ) ) { packedValue = ( uint8_T
) 1 ; } else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint8_T )
0 ; } else { packedValue = ( uint8_T ) ( outValue ) ; } { { _rtB ->
llq4xumbdn . Data [ 3 ] = _rtB -> llq4xumbdn . Data [ 3 ] | ( uint8_T ) ( (
uint8_T ) ( ( uint8_T ) ( packedValue & ( uint8_T ) ( ( ( uint8_T ) ( 1 ) )
<< 0 ) ) >> 0 ) << 6 ) ; } } } } } } { { real64_T outValue = 0 ; { real64_T
result = _rtB -> otegveweee ; outValue = result ; } { { uint8_T packedValue ;
if ( outValue > ( real64_T ) ( 1 ) ) { packedValue = ( uint8_T ) 1 ; } else
if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint8_T ) 0 ; } else {
packedValue = ( uint8_T ) ( outValue ) ; } { { _rtB -> llq4xumbdn . Data [ 3
] = _rtB -> llq4xumbdn . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint8_T )
( packedValue & ( uint8_T ) ( ( ( uint8_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 7 ) ;
} } } } } } { { real64_T outValue = 0 ; { real64_T result = _rtB ->
bhm0y04fsf ; if ( result > 200.0 ) { result = 200.0 ; } outValue = result ; }
{ { uint32_T packedValue ; if ( outValue > ( real64_T ) ( 16777215 ) ) {
packedValue = ( uint32_T ) 16777215 ; } else if ( outValue < ( real64_T ) ( 0
) ) { packedValue = ( uint32_T ) 0 ; } else { packedValue = ( uint32_T ) (
outValue ) ; } { { _rtB -> llq4xumbdn . Data [ 2 ] = _rtB -> llq4xumbdn .
Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( packedValue & (
uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB ->
llq4xumbdn . Data [ 2 ] = _rtB -> llq4xumbdn . Data [ 2 ] | ( uint8_T ) ( (
uint8_T ) ( ( uint32_T ) ( packedValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 )
) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> llq4xumbdn . Data [ 2 ] = _rtB ->
llq4xumbdn . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) (
packedValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ;
} { _rtB -> llq4xumbdn . Data [ 2 ] = _rtB -> llq4xumbdn . Data [ 2 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( packedValue & ( uint32_T ) ( ( (
uint32_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> llq4xumbdn . Data [ 2
] = _rtB -> llq4xumbdn . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T
) ( packedValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4
) ; } { _rtB -> llq4xumbdn . Data [ 2 ] = _rtB -> llq4xumbdn . Data [ 2 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( packedValue & ( uint32_T ) ( ( (
uint32_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> llq4xumbdn . Data [ 2
] = _rtB -> llq4xumbdn . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T
) ( packedValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6
) ; } { _rtB -> llq4xumbdn . Data [ 2 ] = _rtB -> llq4xumbdn . Data [ 2 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( packedValue & ( uint32_T ) ( ( (
uint32_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> llq4xumbdn . Data [ 1
] = _rtB -> llq4xumbdn . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T
) ( packedValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0
) ; } { _rtB -> llq4xumbdn . Data [ 1 ] = _rtB -> llq4xumbdn . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( packedValue & ( uint32_T ) ( ( (
uint32_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> llq4xumbdn . Data [ 1
] = _rtB -> llq4xumbdn . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T
) ( packedValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 10 ) ) >> 10 ) <<
2 ) ; } { _rtB -> llq4xumbdn . Data [ 1 ] = _rtB -> llq4xumbdn . Data [ 1 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( packedValue & ( uint32_T ) ( ( (
uint32_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> llq4xumbdn . Data [
1 ] = _rtB -> llq4xumbdn . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint32_T ) ( packedValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> llq4xumbdn . Data [ 1 ] = _rtB -> llq4xumbdn . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( packedValue & ( uint32_T )
( ( ( uint32_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> llq4xumbdn .
Data [ 1 ] = _rtB -> llq4xumbdn . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint32_T ) ( packedValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> llq4xumbdn . Data [ 1 ] = _rtB -> llq4xumbdn . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( packedValue & ( uint32_T )
( ( ( uint32_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } { _rtB -> llq4xumbdn .
Data [ 0 ] = _rtB -> llq4xumbdn . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint32_T ) ( packedValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 16 ) ) >>
16 ) << 0 ) ; } { _rtB -> llq4xumbdn . Data [ 0 ] = _rtB -> llq4xumbdn . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( packedValue & ( uint32_T )
( ( ( uint32_T ) ( 1 ) ) << 17 ) ) >> 17 ) << 1 ) ; } { _rtB -> llq4xumbdn .
Data [ 0 ] = _rtB -> llq4xumbdn . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint32_T ) ( packedValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 18 ) ) >>
18 ) << 2 ) ; } { _rtB -> llq4xumbdn . Data [ 0 ] = _rtB -> llq4xumbdn . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( packedValue & ( uint32_T )
( ( ( uint32_T ) ( 1 ) ) << 19 ) ) >> 19 ) << 3 ) ; } { _rtB -> llq4xumbdn .
Data [ 0 ] = _rtB -> llq4xumbdn . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint32_T ) ( packedValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 20 ) ) >>
20 ) << 4 ) ; } { _rtB -> llq4xumbdn . Data [ 0 ] = _rtB -> llq4xumbdn . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( packedValue & ( uint32_T )
( ( ( uint32_T ) ( 1 ) ) << 21 ) ) >> 21 ) << 5 ) ; } { _rtB -> llq4xumbdn .
Data [ 0 ] = _rtB -> llq4xumbdn . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint32_T ) ( packedValue & ( uint32_T ) ( ( ( uint32_T ) ( 1 ) ) << 22 ) ) >>
22 ) << 6 ) ; } { _rtB -> llq4xumbdn . Data [ 0 ] = _rtB -> llq4xumbdn . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint32_T ) ( packedValue & ( uint32_T )
( ( ( uint32_T ) ( 1 ) ) << 23 ) ) >> 23 ) << 7 ) ; } } } } } } } sErr =
GetErrorBuffer ( & _rtDW -> k5ghihqxgn [ 0U ] ) ; inputMsgRef = & _rtB ->
llq4xumbdn ; LibOutputs_CANTransmit ( & _rtDW -> k5ghihqxgn [ 0U ] ,
inputMsgRef , 1 ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( S , sErr ) ;
ssSetStopRequested ( S , 1 ) ; } ssCallAccelRunBlock ( S , 1 , 9 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> mcuhkxrhjz = ( _rtB -> o4zz2qb3b2 != 0.0 ) ;
_rtB -> krjh3adlgt . ID = 56U ; _rtB -> krjh3adlgt . Length = 8U ; _rtB ->
krjh3adlgt . Extended = 0U ; _rtB -> krjh3adlgt . Remote = 0 ; _rtB ->
krjh3adlgt . Data [ 0 ] = 0 ; _rtB -> krjh3adlgt . Data [ 1 ] = 0 ; _rtB ->
krjh3adlgt . Data [ 2 ] = 0 ; _rtB -> krjh3adlgt . Data [ 3 ] = 0 ; _rtB ->
krjh3adlgt . Data [ 4 ] = 0 ; _rtB -> krjh3adlgt . Data [ 5 ] = 0 ; _rtB ->
krjh3adlgt . Data [ 6 ] = 0 ; _rtB -> krjh3adlgt . Data [ 7 ] = 0 ; { { {
uint32_T packingValue = 0 ; { uint32_T result = ( uint32_T ) ( _rtB ->
mcuhkxrhjz ) ; packingValue = result ; } { { uint8_T packedValue ; if (
packingValue > ( boolean_T ) ( 1 ) ) { packedValue = ( uint8_T ) 1 ; } else
if ( packingValue < ( boolean_T ) ( 0 ) ) { packedValue = ( uint8_T ) 0 ; }
else { packedValue = ( uint8_T ) ( packingValue ) ; } { { _rtB -> krjh3adlgt
. Data [ 0 ] = _rtB -> krjh3adlgt . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) (
( uint8_T ) ( packedValue & ( uint8_T ) ( ( ( uint8_T ) ( 1 ) ) << 0 ) ) >> 0
) << 7 ) ; } } } } } } } sErr = GetErrorBuffer ( & _rtDW -> kjr0weftqr [ 0U ]
) ; inputMsgRef = & _rtB -> krjh3adlgt ; LibOutputs_CANTransmit ( & _rtDW ->
kjr0weftqr [ 0U ] , inputMsgRef , 1 ) ; if ( * sErr != 0 ) { ssSetErrorStatus
( S , sErr ) ; ssSetStopRequested ( S , 1 ) ; } nx2cpamho2 = ssGetT ( S ) ;
_rtB -> b2dmqznl0a = ( nx2cpamho2 == _rtP -> P_35 ) ; _rtB -> jvif2j3dzv . ID
= 57U ; _rtB -> jvif2j3dzv . Length = 8U ; _rtB -> jvif2j3dzv . Extended = 0U
; _rtB -> jvif2j3dzv . Remote = 0 ; _rtB -> jvif2j3dzv . Data [ 0 ] = 0 ;
_rtB -> jvif2j3dzv . Data [ 1 ] = 0 ; _rtB -> jvif2j3dzv . Data [ 2 ] = 0 ;
_rtB -> jvif2j3dzv . Data [ 3 ] = 0 ; _rtB -> jvif2j3dzv . Data [ 4 ] = 0 ;
_rtB -> jvif2j3dzv . Data [ 5 ] = 0 ; _rtB -> jvif2j3dzv . Data [ 6 ] = 0 ;
_rtB -> jvif2j3dzv . Data [ 7 ] = 0 ; { { { real64_T outValue = 0 ; {
real64_T result = _rtB -> b2dmqznl0a ; outValue = result ; } { { uint8_T
packedValue ; if ( outValue > ( real64_T ) ( 1 ) ) { packedValue = ( uint8_T
) 1 ; } else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint8_T )
0 ; } else { packedValue = ( uint8_T ) ( outValue ) ; } { { _rtB ->
jvif2j3dzv . Data [ 0 ] = _rtB -> jvif2j3dzv . Data [ 0 ] | ( uint8_T ) ( (
uint8_T ) ( ( uint8_T ) ( packedValue & ( uint8_T ) ( ( ( uint8_T ) ( 1 ) )
<< 0 ) ) >> 0 ) << 7 ) ; } } } } } } } sErr = GetErrorBuffer ( & _rtDW ->
mwsi4v24uz [ 0U ] ) ; inputMsgRef = & _rtB -> jvif2j3dzv ;
LibOutputs_CANTransmit ( & _rtDW -> mwsi4v24uz [ 0U ] , inputMsgRef , 1 ) ;
if ( * sErr != 0 ) { ssSetErrorStatus ( S , sErr ) ; ssSetStopRequested ( S ,
1 ) ; } ssCallAccelRunBlock ( S , 1 , 19 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
fg0hncpsr2 . ID = 2U ; _rtB -> fg0hncpsr2 . Length = 8U ; _rtB -> fg0hncpsr2
. Extended = 0U ; _rtB -> fg0hncpsr2 . Remote = 0 ; _rtB -> fg0hncpsr2 . Data
[ 0 ] = 0 ; _rtB -> fg0hncpsr2 . Data [ 1 ] = 0 ; _rtB -> fg0hncpsr2 . Data [
2 ] = 0 ; _rtB -> fg0hncpsr2 . Data [ 3 ] = 0 ; _rtB -> fg0hncpsr2 . Data [ 4
] = 0 ; _rtB -> fg0hncpsr2 . Data [ 5 ] = 0 ; _rtB -> fg0hncpsr2 . Data [ 6 ]
= 0 ; _rtB -> fg0hncpsr2 . Data [ 7 ] = 0 ; { { { real64_T outValue = 0 ; {
real64_T result = _rtB -> j11p4rlchf [ 0 ] ; if ( result > 5.0 ) { result =
5.0 ; } result = result / 0.0001 ; outValue = result ; } { { uint16_T
packedValue ; if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = (
uint16_T ) 65535 ; } else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue
= ( uint16_T ) 0 ; } else { packedValue = ( uint16_T ) ( outValue ) ; } { {
_rtB -> fg0hncpsr2 . Data [ 1 ] = _rtB -> fg0hncpsr2 . Data [ 1 ] | ( uint8_T
) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T )
( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB -> fg0hncpsr2 . Data [ 1 ] = _rtB
-> fg0hncpsr2 . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) (
packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ;
} { _rtB -> fg0hncpsr2 . Data [ 1 ] = _rtB -> fg0hncpsr2 . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ; } { _rtB -> fg0hncpsr2 . Data [ 1
] = _rtB -> fg0hncpsr2 . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3
) ; } { _rtB -> fg0hncpsr2 . Data [ 1 ] = _rtB -> fg0hncpsr2 . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4 ) ; } { _rtB -> fg0hncpsr2 . Data [ 1
] = _rtB -> fg0hncpsr2 . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5
) ; } { _rtB -> fg0hncpsr2 . Data [ 1 ] = _rtB -> fg0hncpsr2 . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6 ) ; } { _rtB -> fg0hncpsr2 . Data [ 1
] = _rtB -> fg0hncpsr2 . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7
) ; } { _rtB -> fg0hncpsr2 . Data [ 0 ] = _rtB -> fg0hncpsr2 . Data [ 0 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0 ) ; } { _rtB -> fg0hncpsr2 . Data [ 0
] = _rtB -> fg0hncpsr2 . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1
) ; } { _rtB -> fg0hncpsr2 . Data [ 0 ] = _rtB -> fg0hncpsr2 . Data [ 0 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) << 2 ) ; } { _rtB -> fg0hncpsr2 . Data [
0 ] = _rtB -> fg0hncpsr2 . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >>
11 ) << 3 ) ; } { _rtB -> fg0hncpsr2 . Data [ 0 ] = _rtB -> fg0hncpsr2 . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >> 12 ) << 4 ) ; } { _rtB -> fg0hncpsr2 .
Data [ 0 ] = _rtB -> fg0hncpsr2 . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >>
13 ) << 5 ) ; } { _rtB -> fg0hncpsr2 . Data [ 0 ] = _rtB -> fg0hncpsr2 . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >> 14 ) << 6 ) ; } { _rtB -> fg0hncpsr2 .
Data [ 0 ] = _rtB -> fg0hncpsr2 . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >>
15 ) << 7 ) ; } } } } } } { { real64_T outValue = 0 ; { real64_T result =
_rtB -> j11p4rlchf [ 1 ] ; if ( result > 5.0 ) { result = 5.0 ; } result =
result / 0.0001 ; outValue = result ; } { { uint16_T packedValue ; if (
outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ; }
else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ; }
else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> fg0hncpsr2 .
Data [ 3 ] = _rtB -> fg0hncpsr2 . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> fg0hncpsr2 . Data [ 3 ] = _rtB -> fg0hncpsr2 . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> fg0hncpsr2 .
Data [ 3 ] = _rtB -> fg0hncpsr2 . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> fg0hncpsr2 . Data [ 3 ] = _rtB -> fg0hncpsr2 . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> fg0hncpsr2 .
Data [ 3 ] = _rtB -> fg0hncpsr2 . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> fg0hncpsr2 . Data [ 3 ] = _rtB -> fg0hncpsr2 . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> fg0hncpsr2 .
Data [ 3 ] = _rtB -> fg0hncpsr2 . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> fg0hncpsr2 . Data [ 3 ] = _rtB -> fg0hncpsr2 . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> fg0hncpsr2 .
Data [ 2 ] = _rtB -> fg0hncpsr2 . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> fg0hncpsr2 . Data [ 2 ] = _rtB -> fg0hncpsr2 . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> fg0hncpsr2 .
Data [ 2 ] = _rtB -> fg0hncpsr2 . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> fg0hncpsr2 . Data [ 2 ] = _rtB -> fg0hncpsr2 . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> fg0hncpsr2 .
Data [ 2 ] = _rtB -> fg0hncpsr2 . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> fg0hncpsr2 . Data [ 2 ] = _rtB -> fg0hncpsr2 . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> fg0hncpsr2 .
Data [ 2 ] = _rtB -> fg0hncpsr2 . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> fg0hncpsr2 . Data [ 2 ] = _rtB -> fg0hncpsr2 . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> j11p4rlchf [ 2 ] ; if ( result >
5.0 ) { result = 5.0 ; } result = result / 0.0001 ; outValue = result ; } { {
uint16_T packedValue ; if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue
= ( uint16_T ) 65535 ; } else if ( outValue < ( real64_T ) ( 0 ) ) {
packedValue = ( uint16_T ) 0 ; } else { packedValue = ( uint16_T ) ( outValue
) ; } { { _rtB -> fg0hncpsr2 . Data [ 5 ] = _rtB -> fg0hncpsr2 . Data [ 5 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB -> fg0hncpsr2 . Data [ 5
] = _rtB -> fg0hncpsr2 . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1
) ; } { _rtB -> fg0hncpsr2 . Data [ 5 ] = _rtB -> fg0hncpsr2 . Data [ 5 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ; } { _rtB -> fg0hncpsr2 . Data [ 5
] = _rtB -> fg0hncpsr2 . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3
) ; } { _rtB -> fg0hncpsr2 . Data [ 5 ] = _rtB -> fg0hncpsr2 . Data [ 5 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4 ) ; } { _rtB -> fg0hncpsr2 . Data [ 5
] = _rtB -> fg0hncpsr2 . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5
) ; } { _rtB -> fg0hncpsr2 . Data [ 5 ] = _rtB -> fg0hncpsr2 . Data [ 5 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6 ) ; } { _rtB -> fg0hncpsr2 . Data [ 5
] = _rtB -> fg0hncpsr2 . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7
) ; } { _rtB -> fg0hncpsr2 . Data [ 4 ] = _rtB -> fg0hncpsr2 . Data [ 4 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0 ) ; } { _rtB -> fg0hncpsr2 . Data [ 4
] = _rtB -> fg0hncpsr2 . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1
) ; } { _rtB -> fg0hncpsr2 . Data [ 4 ] = _rtB -> fg0hncpsr2 . Data [ 4 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) << 2 ) ; } { _rtB -> fg0hncpsr2 . Data [
4 ] = _rtB -> fg0hncpsr2 . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >>
11 ) << 3 ) ; } { _rtB -> fg0hncpsr2 . Data [ 4 ] = _rtB -> fg0hncpsr2 . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >> 12 ) << 4 ) ; } { _rtB -> fg0hncpsr2 .
Data [ 4 ] = _rtB -> fg0hncpsr2 . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >>
13 ) << 5 ) ; } { _rtB -> fg0hncpsr2 . Data [ 4 ] = _rtB -> fg0hncpsr2 . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >> 14 ) << 6 ) ; } { _rtB -> fg0hncpsr2 .
Data [ 4 ] = _rtB -> fg0hncpsr2 . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >>
15 ) << 7 ) ; } } } } } } { { real64_T outValue = 0 ; { real64_T result =
_rtB -> j11p4rlchf [ 3 ] ; if ( result > 5.0 ) { result = 5.0 ; } result =
result / 0.0001 ; outValue = result ; } { { uint16_T packedValue ; if (
outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ; }
else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ; }
else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> fg0hncpsr2 .
Data [ 7 ] = _rtB -> fg0hncpsr2 . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> fg0hncpsr2 . Data [ 7 ] = _rtB -> fg0hncpsr2 . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> fg0hncpsr2 .
Data [ 7 ] = _rtB -> fg0hncpsr2 . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> fg0hncpsr2 . Data [ 7 ] = _rtB -> fg0hncpsr2 . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> fg0hncpsr2 .
Data [ 7 ] = _rtB -> fg0hncpsr2 . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> fg0hncpsr2 . Data [ 7 ] = _rtB -> fg0hncpsr2 . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> fg0hncpsr2 .
Data [ 7 ] = _rtB -> fg0hncpsr2 . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> fg0hncpsr2 . Data [ 7 ] = _rtB -> fg0hncpsr2 . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> fg0hncpsr2 .
Data [ 6 ] = _rtB -> fg0hncpsr2 . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> fg0hncpsr2 . Data [ 6 ] = _rtB -> fg0hncpsr2 . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> fg0hncpsr2 .
Data [ 6 ] = _rtB -> fg0hncpsr2 . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> fg0hncpsr2 . Data [ 6 ] = _rtB -> fg0hncpsr2 . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> fg0hncpsr2 .
Data [ 6 ] = _rtB -> fg0hncpsr2 . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> fg0hncpsr2 . Data [ 6 ] = _rtB -> fg0hncpsr2 . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> fg0hncpsr2 .
Data [ 6 ] = _rtB -> fg0hncpsr2 . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> fg0hncpsr2 . Data [ 6 ] = _rtB -> fg0hncpsr2 . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } } sErr =
GetErrorBuffer ( & _rtDW -> pst1hgnmii [ 0U ] ) ; inputMsgRef = & _rtB ->
fg0hncpsr2 ; LibOutputs_CANTransmit ( & _rtDW -> pst1hgnmii [ 0U ] ,
inputMsgRef , 1 ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( S , sErr ) ;
ssSetStopRequested ( S , 1 ) ; } _rtB -> p5mldi5qn5 . ID = 3U ; _rtB ->
p5mldi5qn5 . Length = 8U ; _rtB -> p5mldi5qn5 . Extended = 0U ; _rtB ->
p5mldi5qn5 . Remote = 0 ; _rtB -> p5mldi5qn5 . Data [ 0 ] = 0 ; _rtB ->
p5mldi5qn5 . Data [ 1 ] = 0 ; _rtB -> p5mldi5qn5 . Data [ 2 ] = 0 ; _rtB ->
p5mldi5qn5 . Data [ 3 ] = 0 ; _rtB -> p5mldi5qn5 . Data [ 4 ] = 0 ; _rtB ->
p5mldi5qn5 . Data [ 5 ] = 0 ; _rtB -> p5mldi5qn5 . Data [ 6 ] = 0 ; _rtB ->
p5mldi5qn5 . Data [ 7 ] = 0 ; { { { real64_T outValue = 0 ; { real64_T result
= _rtB -> j11p4rlchf [ 4 ] ; if ( result > 5.0 ) { result = 5.0 ; } result =
result / 0.0001 ; outValue = result ; } { { uint16_T packedValue ; if (
outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ; }
else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ; }
else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> p5mldi5qn5 .
Data [ 1 ] = _rtB -> p5mldi5qn5 . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> p5mldi5qn5 . Data [ 1 ] = _rtB -> p5mldi5qn5 . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> p5mldi5qn5 .
Data [ 1 ] = _rtB -> p5mldi5qn5 . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> p5mldi5qn5 . Data [ 1 ] = _rtB -> p5mldi5qn5 . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> p5mldi5qn5 .
Data [ 1 ] = _rtB -> p5mldi5qn5 . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> p5mldi5qn5 . Data [ 1 ] = _rtB -> p5mldi5qn5 . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> p5mldi5qn5 .
Data [ 1 ] = _rtB -> p5mldi5qn5 . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> p5mldi5qn5 . Data [ 1 ] = _rtB -> p5mldi5qn5 . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> p5mldi5qn5 .
Data [ 0 ] = _rtB -> p5mldi5qn5 . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> p5mldi5qn5 . Data [ 0 ] = _rtB -> p5mldi5qn5 . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> p5mldi5qn5 .
Data [ 0 ] = _rtB -> p5mldi5qn5 . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> p5mldi5qn5 . Data [ 0 ] = _rtB -> p5mldi5qn5 . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> p5mldi5qn5 .
Data [ 0 ] = _rtB -> p5mldi5qn5 . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> p5mldi5qn5 . Data [ 0 ] = _rtB -> p5mldi5qn5 . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> p5mldi5qn5 .
Data [ 0 ] = _rtB -> p5mldi5qn5 . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> p5mldi5qn5 . Data [ 0 ] = _rtB -> p5mldi5qn5 . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> j11p4rlchf [ 5 ] ; if ( result >
5.0 ) { result = 5.0 ; } result = result / 0.0001 ; outValue = result ; } { {
uint16_T packedValue ; if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue
= ( uint16_T ) 65535 ; } else if ( outValue < ( real64_T ) ( 0 ) ) {
packedValue = ( uint16_T ) 0 ; } else { packedValue = ( uint16_T ) ( outValue
) ; } { { _rtB -> p5mldi5qn5 . Data [ 3 ] = _rtB -> p5mldi5qn5 . Data [ 3 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB -> p5mldi5qn5 . Data [ 3
] = _rtB -> p5mldi5qn5 . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1
) ; } { _rtB -> p5mldi5qn5 . Data [ 3 ] = _rtB -> p5mldi5qn5 . Data [ 3 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ; } { _rtB -> p5mldi5qn5 . Data [ 3
] = _rtB -> p5mldi5qn5 . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3
) ; } { _rtB -> p5mldi5qn5 . Data [ 3 ] = _rtB -> p5mldi5qn5 . Data [ 3 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4 ) ; } { _rtB -> p5mldi5qn5 . Data [ 3
] = _rtB -> p5mldi5qn5 . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5
) ; } { _rtB -> p5mldi5qn5 . Data [ 3 ] = _rtB -> p5mldi5qn5 . Data [ 3 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6 ) ; } { _rtB -> p5mldi5qn5 . Data [ 3
] = _rtB -> p5mldi5qn5 . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7
) ; } { _rtB -> p5mldi5qn5 . Data [ 2 ] = _rtB -> p5mldi5qn5 . Data [ 2 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0 ) ; } { _rtB -> p5mldi5qn5 . Data [ 2
] = _rtB -> p5mldi5qn5 . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1
) ; } { _rtB -> p5mldi5qn5 . Data [ 2 ] = _rtB -> p5mldi5qn5 . Data [ 2 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) << 2 ) ; } { _rtB -> p5mldi5qn5 . Data [
2 ] = _rtB -> p5mldi5qn5 . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >>
11 ) << 3 ) ; } { _rtB -> p5mldi5qn5 . Data [ 2 ] = _rtB -> p5mldi5qn5 . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >> 12 ) << 4 ) ; } { _rtB -> p5mldi5qn5 .
Data [ 2 ] = _rtB -> p5mldi5qn5 . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >>
13 ) << 5 ) ; } { _rtB -> p5mldi5qn5 . Data [ 2 ] = _rtB -> p5mldi5qn5 . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >> 14 ) << 6 ) ; } { _rtB -> p5mldi5qn5 .
Data [ 2 ] = _rtB -> p5mldi5qn5 . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >>
15 ) << 7 ) ; } } } } } } { { real64_T outValue = 0 ; { real64_T result =
_rtB -> j11p4rlchf [ 6 ] ; if ( result > 5.0 ) { result = 5.0 ; } result =
result / 0.0001 ; outValue = result ; } { { uint16_T packedValue ; if (
outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ; }
else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ; }
else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> p5mldi5qn5 .
Data [ 5 ] = _rtB -> p5mldi5qn5 . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> p5mldi5qn5 . Data [ 5 ] = _rtB -> p5mldi5qn5 . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> p5mldi5qn5 .
Data [ 5 ] = _rtB -> p5mldi5qn5 . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> p5mldi5qn5 . Data [ 5 ] = _rtB -> p5mldi5qn5 . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> p5mldi5qn5 .
Data [ 5 ] = _rtB -> p5mldi5qn5 . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> p5mldi5qn5 . Data [ 5 ] = _rtB -> p5mldi5qn5 . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> p5mldi5qn5 .
Data [ 5 ] = _rtB -> p5mldi5qn5 . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> p5mldi5qn5 . Data [ 5 ] = _rtB -> p5mldi5qn5 . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> p5mldi5qn5 .
Data [ 4 ] = _rtB -> p5mldi5qn5 . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> p5mldi5qn5 . Data [ 4 ] = _rtB -> p5mldi5qn5 . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> p5mldi5qn5 .
Data [ 4 ] = _rtB -> p5mldi5qn5 . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> p5mldi5qn5 . Data [ 4 ] = _rtB -> p5mldi5qn5 . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> p5mldi5qn5 .
Data [ 4 ] = _rtB -> p5mldi5qn5 . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> p5mldi5qn5 . Data [ 4 ] = _rtB -> p5mldi5qn5 . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> p5mldi5qn5 .
Data [ 4 ] = _rtB -> p5mldi5qn5 . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> p5mldi5qn5 . Data [ 4 ] = _rtB -> p5mldi5qn5 . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> j11p4rlchf [ 7 ] ; if ( result >
5.0 ) { result = 5.0 ; } result = result / 0.0001 ; outValue = result ; } { {
uint16_T packedValue ; if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue
= ( uint16_T ) 65535 ; } else if ( outValue < ( real64_T ) ( 0 ) ) {
packedValue = ( uint16_T ) 0 ; } else { packedValue = ( uint16_T ) ( outValue
) ; } { { _rtB -> p5mldi5qn5 . Data [ 7 ] = _rtB -> p5mldi5qn5 . Data [ 7 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB -> p5mldi5qn5 . Data [ 7
] = _rtB -> p5mldi5qn5 . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1
) ; } { _rtB -> p5mldi5qn5 . Data [ 7 ] = _rtB -> p5mldi5qn5 . Data [ 7 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ; } { _rtB -> p5mldi5qn5 . Data [ 7
] = _rtB -> p5mldi5qn5 . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3
) ; } { _rtB -> p5mldi5qn5 . Data [ 7 ] = _rtB -> p5mldi5qn5 . Data [ 7 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4 ) ; } { _rtB -> p5mldi5qn5 . Data [ 7
] = _rtB -> p5mldi5qn5 . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5
) ; } { _rtB -> p5mldi5qn5 . Data [ 7 ] = _rtB -> p5mldi5qn5 . Data [ 7 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6 ) ; } { _rtB -> p5mldi5qn5 . Data [ 7
] = _rtB -> p5mldi5qn5 . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7
) ; } { _rtB -> p5mldi5qn5 . Data [ 6 ] = _rtB -> p5mldi5qn5 . Data [ 6 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0 ) ; } { _rtB -> p5mldi5qn5 . Data [ 6
] = _rtB -> p5mldi5qn5 . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1
) ; } { _rtB -> p5mldi5qn5 . Data [ 6 ] = _rtB -> p5mldi5qn5 . Data [ 6 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) << 2 ) ; } { _rtB -> p5mldi5qn5 . Data [
6 ] = _rtB -> p5mldi5qn5 . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >>
11 ) << 3 ) ; } { _rtB -> p5mldi5qn5 . Data [ 6 ] = _rtB -> p5mldi5qn5 . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >> 12 ) << 4 ) ; } { _rtB -> p5mldi5qn5 .
Data [ 6 ] = _rtB -> p5mldi5qn5 . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >>
13 ) << 5 ) ; } { _rtB -> p5mldi5qn5 . Data [ 6 ] = _rtB -> p5mldi5qn5 . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >> 14 ) << 6 ) ; } { _rtB -> p5mldi5qn5 .
Data [ 6 ] = _rtB -> p5mldi5qn5 . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >>
15 ) << 7 ) ; } } } } } } } sErr = GetErrorBuffer ( & _rtDW -> bzi4u4unwf [
0U ] ) ; inputMsgRef = & _rtB -> p5mldi5qn5 ; LibOutputs_CANTransmit ( &
_rtDW -> bzi4u4unwf [ 0U ] , inputMsgRef , 1 ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( S , sErr ) ; ssSetStopRequested ( S , 1 ) ; } _rtB ->
dizsfv3es2 . ID = 4U ; _rtB -> dizsfv3es2 . Length = 8U ; _rtB -> dizsfv3es2
. Extended = 0U ; _rtB -> dizsfv3es2 . Remote = 0 ; _rtB -> dizsfv3es2 . Data
[ 0 ] = 0 ; _rtB -> dizsfv3es2 . Data [ 1 ] = 0 ; _rtB -> dizsfv3es2 . Data [
2 ] = 0 ; _rtB -> dizsfv3es2 . Data [ 3 ] = 0 ; _rtB -> dizsfv3es2 . Data [ 4
] = 0 ; _rtB -> dizsfv3es2 . Data [ 5 ] = 0 ; _rtB -> dizsfv3es2 . Data [ 6 ]
= 0 ; _rtB -> dizsfv3es2 . Data [ 7 ] = 0 ; { { { real64_T outValue = 0 ; {
real64_T result = _rtB -> j11p4rlchf [ 9 ] ; if ( result > 5.0 ) { result =
5.0 ; } result = result / 0.0001 ; outValue = result ; } { { uint16_T
packedValue ; if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = (
uint16_T ) 65535 ; } else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue
= ( uint16_T ) 0 ; } else { packedValue = ( uint16_T ) ( outValue ) ; } { {
_rtB -> dizsfv3es2 . Data [ 3 ] = _rtB -> dizsfv3es2 . Data [ 3 ] | ( uint8_T
) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T )
( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB -> dizsfv3es2 . Data [ 3 ] = _rtB
-> dizsfv3es2 . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) (
packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ;
} { _rtB -> dizsfv3es2 . Data [ 3 ] = _rtB -> dizsfv3es2 . Data [ 3 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ; } { _rtB -> dizsfv3es2 . Data [ 3
] = _rtB -> dizsfv3es2 . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3
) ; } { _rtB -> dizsfv3es2 . Data [ 3 ] = _rtB -> dizsfv3es2 . Data [ 3 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4 ) ; } { _rtB -> dizsfv3es2 . Data [ 3
] = _rtB -> dizsfv3es2 . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5
) ; } { _rtB -> dizsfv3es2 . Data [ 3 ] = _rtB -> dizsfv3es2 . Data [ 3 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6 ) ; } { _rtB -> dizsfv3es2 . Data [ 3
] = _rtB -> dizsfv3es2 . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7
) ; } { _rtB -> dizsfv3es2 . Data [ 2 ] = _rtB -> dizsfv3es2 . Data [ 2 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0 ) ; } { _rtB -> dizsfv3es2 . Data [ 2
] = _rtB -> dizsfv3es2 . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1
) ; } { _rtB -> dizsfv3es2 . Data [ 2 ] = _rtB -> dizsfv3es2 . Data [ 2 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) << 2 ) ; } { _rtB -> dizsfv3es2 . Data [
2 ] = _rtB -> dizsfv3es2 . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >>
11 ) << 3 ) ; } { _rtB -> dizsfv3es2 . Data [ 2 ] = _rtB -> dizsfv3es2 . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >> 12 ) << 4 ) ; } { _rtB -> dizsfv3es2 .
Data [ 2 ] = _rtB -> dizsfv3es2 . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >>
13 ) << 5 ) ; } { _rtB -> dizsfv3es2 . Data [ 2 ] = _rtB -> dizsfv3es2 . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >> 14 ) << 6 ) ; } { _rtB -> dizsfv3es2 .
Data [ 2 ] = _rtB -> dizsfv3es2 . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >>
15 ) << 7 ) ; } } } } } } { { real64_T outValue = 0 ; { real64_T result =
_rtB -> j11p4rlchf [ 10 ] ; if ( result > 5.0 ) { result = 5.0 ; } result =
result / 0.0001 ; outValue = result ; } { { uint16_T packedValue ; if (
outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ; }
else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ; }
else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> dizsfv3es2 .
Data [ 5 ] = _rtB -> dizsfv3es2 . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> dizsfv3es2 . Data [ 5 ] = _rtB -> dizsfv3es2 . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> dizsfv3es2 .
Data [ 5 ] = _rtB -> dizsfv3es2 . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> dizsfv3es2 . Data [ 5 ] = _rtB -> dizsfv3es2 . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> dizsfv3es2 .
Data [ 5 ] = _rtB -> dizsfv3es2 . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> dizsfv3es2 . Data [ 5 ] = _rtB -> dizsfv3es2 . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> dizsfv3es2 .
Data [ 5 ] = _rtB -> dizsfv3es2 . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> dizsfv3es2 . Data [ 5 ] = _rtB -> dizsfv3es2 . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> dizsfv3es2 .
Data [ 4 ] = _rtB -> dizsfv3es2 . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> dizsfv3es2 . Data [ 4 ] = _rtB -> dizsfv3es2 . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> dizsfv3es2 .
Data [ 4 ] = _rtB -> dizsfv3es2 . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> dizsfv3es2 . Data [ 4 ] = _rtB -> dizsfv3es2 . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> dizsfv3es2 .
Data [ 4 ] = _rtB -> dizsfv3es2 . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> dizsfv3es2 . Data [ 4 ] = _rtB -> dizsfv3es2 . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> dizsfv3es2 .
Data [ 4 ] = _rtB -> dizsfv3es2 . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> dizsfv3es2 . Data [ 4 ] = _rtB -> dizsfv3es2 . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> j11p4rlchf [ 11 ] ; if ( result >
5.0 ) { result = 5.0 ; } result = result / 0.0001 ; outValue = result ; } { {
uint16_T packedValue ; if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue
= ( uint16_T ) 65535 ; } else if ( outValue < ( real64_T ) ( 0 ) ) {
packedValue = ( uint16_T ) 0 ; } else { packedValue = ( uint16_T ) ( outValue
) ; } { { _rtB -> dizsfv3es2 . Data [ 7 ] = _rtB -> dizsfv3es2 . Data [ 7 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB -> dizsfv3es2 . Data [ 7
] = _rtB -> dizsfv3es2 . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1
) ; } { _rtB -> dizsfv3es2 . Data [ 7 ] = _rtB -> dizsfv3es2 . Data [ 7 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ; } { _rtB -> dizsfv3es2 . Data [ 7
] = _rtB -> dizsfv3es2 . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3
) ; } { _rtB -> dizsfv3es2 . Data [ 7 ] = _rtB -> dizsfv3es2 . Data [ 7 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4 ) ; } { _rtB -> dizsfv3es2 . Data [ 7
] = _rtB -> dizsfv3es2 . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5
) ; } { _rtB -> dizsfv3es2 . Data [ 7 ] = _rtB -> dizsfv3es2 . Data [ 7 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6 ) ; } { _rtB -> dizsfv3es2 . Data [ 7
] = _rtB -> dizsfv3es2 . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7
) ; } { _rtB -> dizsfv3es2 . Data [ 6 ] = _rtB -> dizsfv3es2 . Data [ 6 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0 ) ; } { _rtB -> dizsfv3es2 . Data [ 6
] = _rtB -> dizsfv3es2 . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1
) ; } { _rtB -> dizsfv3es2 . Data [ 6 ] = _rtB -> dizsfv3es2 . Data [ 6 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) << 2 ) ; } { _rtB -> dizsfv3es2 . Data [
6 ] = _rtB -> dizsfv3es2 . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >>
11 ) << 3 ) ; } { _rtB -> dizsfv3es2 . Data [ 6 ] = _rtB -> dizsfv3es2 . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >> 12 ) << 4 ) ; } { _rtB -> dizsfv3es2 .
Data [ 6 ] = _rtB -> dizsfv3es2 . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >>
13 ) << 5 ) ; } { _rtB -> dizsfv3es2 . Data [ 6 ] = _rtB -> dizsfv3es2 . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >> 14 ) << 6 ) ; } { _rtB -> dizsfv3es2 .
Data [ 6 ] = _rtB -> dizsfv3es2 . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >>
15 ) << 7 ) ; } } } } } } { { real64_T outValue = 0 ; { real64_T result =
_rtB -> j11p4rlchf [ 8 ] ; if ( result > 5.0 ) { result = 5.0 ; } result =
result / 0.0001 ; outValue = result ; } { { uint16_T packedValue ; if (
outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ; }
else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ; }
else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> dizsfv3es2 .
Data [ 1 ] = _rtB -> dizsfv3es2 . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> dizsfv3es2 . Data [ 1 ] = _rtB -> dizsfv3es2 . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> dizsfv3es2 .
Data [ 1 ] = _rtB -> dizsfv3es2 . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> dizsfv3es2 . Data [ 1 ] = _rtB -> dizsfv3es2 . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> dizsfv3es2 .
Data [ 1 ] = _rtB -> dizsfv3es2 . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> dizsfv3es2 . Data [ 1 ] = _rtB -> dizsfv3es2 . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> dizsfv3es2 .
Data [ 1 ] = _rtB -> dizsfv3es2 . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> dizsfv3es2 . Data [ 1 ] = _rtB -> dizsfv3es2 . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> dizsfv3es2 .
Data [ 0 ] = _rtB -> dizsfv3es2 . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> dizsfv3es2 . Data [ 0 ] = _rtB -> dizsfv3es2 . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> dizsfv3es2 .
Data [ 0 ] = _rtB -> dizsfv3es2 . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> dizsfv3es2 . Data [ 0 ] = _rtB -> dizsfv3es2 . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> dizsfv3es2 .
Data [ 0 ] = _rtB -> dizsfv3es2 . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> dizsfv3es2 . Data [ 0 ] = _rtB -> dizsfv3es2 . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> dizsfv3es2 .
Data [ 0 ] = _rtB -> dizsfv3es2 . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> dizsfv3es2 . Data [ 0 ] = _rtB -> dizsfv3es2 . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } } sErr =
GetErrorBuffer ( & _rtDW -> abaoghns1z [ 0U ] ) ; inputMsgRef = & _rtB ->
dizsfv3es2 ; LibOutputs_CANTransmit ( & _rtDW -> abaoghns1z [ 0U ] ,
inputMsgRef , 1 ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( S , sErr ) ;
ssSetStopRequested ( S , 1 ) ; } _rtB -> bqybmlx3aq . ID = 5U ; _rtB ->
bqybmlx3aq . Length = 8U ; _rtB -> bqybmlx3aq . Extended = 0U ; _rtB ->
bqybmlx3aq . Remote = 0 ; _rtB -> bqybmlx3aq . Data [ 0 ] = 0 ; _rtB ->
bqybmlx3aq . Data [ 1 ] = 0 ; _rtB -> bqybmlx3aq . Data [ 2 ] = 0 ; _rtB ->
bqybmlx3aq . Data [ 3 ] = 0 ; _rtB -> bqybmlx3aq . Data [ 4 ] = 0 ; _rtB ->
bqybmlx3aq . Data [ 5 ] = 0 ; _rtB -> bqybmlx3aq . Data [ 6 ] = 0 ; _rtB ->
bqybmlx3aq . Data [ 7 ] = 0 ; { { { real64_T outValue = 0 ; { real64_T result
= _rtB -> j11p4rlchf [ 12 ] ; if ( result > 5.0 ) { result = 5.0 ; } result =
result / 0.0001 ; outValue = result ; } { { uint16_T packedValue ; if (
outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ; }
else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ; }
else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> bqybmlx3aq .
Data [ 1 ] = _rtB -> bqybmlx3aq . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> bqybmlx3aq . Data [ 1 ] = _rtB -> bqybmlx3aq . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> bqybmlx3aq .
Data [ 1 ] = _rtB -> bqybmlx3aq . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> bqybmlx3aq . Data [ 1 ] = _rtB -> bqybmlx3aq . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> bqybmlx3aq .
Data [ 1 ] = _rtB -> bqybmlx3aq . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> bqybmlx3aq . Data [ 1 ] = _rtB -> bqybmlx3aq . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> bqybmlx3aq .
Data [ 1 ] = _rtB -> bqybmlx3aq . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> bqybmlx3aq . Data [ 1 ] = _rtB -> bqybmlx3aq . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> bqybmlx3aq .
Data [ 0 ] = _rtB -> bqybmlx3aq . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> bqybmlx3aq . Data [ 0 ] = _rtB -> bqybmlx3aq . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> bqybmlx3aq .
Data [ 0 ] = _rtB -> bqybmlx3aq . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> bqybmlx3aq . Data [ 0 ] = _rtB -> bqybmlx3aq . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> bqybmlx3aq .
Data [ 0 ] = _rtB -> bqybmlx3aq . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> bqybmlx3aq . Data [ 0 ] = _rtB -> bqybmlx3aq . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> bqybmlx3aq .
Data [ 0 ] = _rtB -> bqybmlx3aq . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> bqybmlx3aq . Data [ 0 ] = _rtB -> bqybmlx3aq . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> j11p4rlchf [ 13 ] ; if ( result >
5.0 ) { result = 5.0 ; } result = result / 0.0001 ; outValue = result ; } { {
uint16_T packedValue ; if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue
= ( uint16_T ) 65535 ; } else if ( outValue < ( real64_T ) ( 0 ) ) {
packedValue = ( uint16_T ) 0 ; } else { packedValue = ( uint16_T ) ( outValue
) ; } { { _rtB -> bqybmlx3aq . Data [ 3 ] = _rtB -> bqybmlx3aq . Data [ 3 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB -> bqybmlx3aq . Data [ 3
] = _rtB -> bqybmlx3aq . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1
) ; } { _rtB -> bqybmlx3aq . Data [ 3 ] = _rtB -> bqybmlx3aq . Data [ 3 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ; } { _rtB -> bqybmlx3aq . Data [ 3
] = _rtB -> bqybmlx3aq . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3
) ; } { _rtB -> bqybmlx3aq . Data [ 3 ] = _rtB -> bqybmlx3aq . Data [ 3 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4 ) ; } { _rtB -> bqybmlx3aq . Data [ 3
] = _rtB -> bqybmlx3aq . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5
) ; } { _rtB -> bqybmlx3aq . Data [ 3 ] = _rtB -> bqybmlx3aq . Data [ 3 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6 ) ; } { _rtB -> bqybmlx3aq . Data [ 3
] = _rtB -> bqybmlx3aq . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7
) ; } { _rtB -> bqybmlx3aq . Data [ 2 ] = _rtB -> bqybmlx3aq . Data [ 2 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0 ) ; } { _rtB -> bqybmlx3aq . Data [ 2
] = _rtB -> bqybmlx3aq . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1
) ; } { _rtB -> bqybmlx3aq . Data [ 2 ] = _rtB -> bqybmlx3aq . Data [ 2 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) << 2 ) ; } { _rtB -> bqybmlx3aq . Data [
2 ] = _rtB -> bqybmlx3aq . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >>
11 ) << 3 ) ; } { _rtB -> bqybmlx3aq . Data [ 2 ] = _rtB -> bqybmlx3aq . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >> 12 ) << 4 ) ; } { _rtB -> bqybmlx3aq .
Data [ 2 ] = _rtB -> bqybmlx3aq . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >>
13 ) << 5 ) ; } { _rtB -> bqybmlx3aq . Data [ 2 ] = _rtB -> bqybmlx3aq . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >> 14 ) << 6 ) ; } { _rtB -> bqybmlx3aq .
Data [ 2 ] = _rtB -> bqybmlx3aq . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >>
15 ) << 7 ) ; } } } } } } { { real64_T outValue = 0 ; { real64_T result =
_rtB -> j11p4rlchf [ 14 ] ; if ( result > 5.0 ) { result = 5.0 ; } result =
result / 0.0001 ; outValue = result ; } { { uint16_T packedValue ; if (
outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ; }
else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ; }
else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> bqybmlx3aq .
Data [ 5 ] = _rtB -> bqybmlx3aq . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> bqybmlx3aq . Data [ 5 ] = _rtB -> bqybmlx3aq . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> bqybmlx3aq .
Data [ 5 ] = _rtB -> bqybmlx3aq . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> bqybmlx3aq . Data [ 5 ] = _rtB -> bqybmlx3aq . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> bqybmlx3aq .
Data [ 5 ] = _rtB -> bqybmlx3aq . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> bqybmlx3aq . Data [ 5 ] = _rtB -> bqybmlx3aq . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> bqybmlx3aq .
Data [ 5 ] = _rtB -> bqybmlx3aq . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> bqybmlx3aq . Data [ 5 ] = _rtB -> bqybmlx3aq . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> bqybmlx3aq .
Data [ 4 ] = _rtB -> bqybmlx3aq . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> bqybmlx3aq . Data [ 4 ] = _rtB -> bqybmlx3aq . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> bqybmlx3aq .
Data [ 4 ] = _rtB -> bqybmlx3aq . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> bqybmlx3aq . Data [ 4 ] = _rtB -> bqybmlx3aq . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> bqybmlx3aq .
Data [ 4 ] = _rtB -> bqybmlx3aq . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> bqybmlx3aq . Data [ 4 ] = _rtB -> bqybmlx3aq . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> bqybmlx3aq .
Data [ 4 ] = _rtB -> bqybmlx3aq . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> bqybmlx3aq . Data [ 4 ] = _rtB -> bqybmlx3aq . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> j11p4rlchf [ 15 ] ; if ( result >
5.0 ) { result = 5.0 ; } result = result / 0.0001 ; outValue = result ; } { {
uint16_T packedValue ; if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue
= ( uint16_T ) 65535 ; } else if ( outValue < ( real64_T ) ( 0 ) ) {
packedValue = ( uint16_T ) 0 ; } else { packedValue = ( uint16_T ) ( outValue
) ; } { { _rtB -> bqybmlx3aq . Data [ 7 ] = _rtB -> bqybmlx3aq . Data [ 7 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB -> bqybmlx3aq . Data [ 7
] = _rtB -> bqybmlx3aq . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1
) ; } { _rtB -> bqybmlx3aq . Data [ 7 ] = _rtB -> bqybmlx3aq . Data [ 7 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ; } { _rtB -> bqybmlx3aq . Data [ 7
] = _rtB -> bqybmlx3aq . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3
) ; } { _rtB -> bqybmlx3aq . Data [ 7 ] = _rtB -> bqybmlx3aq . Data [ 7 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4 ) ; } { _rtB -> bqybmlx3aq . Data [ 7
] = _rtB -> bqybmlx3aq . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5
) ; } { _rtB -> bqybmlx3aq . Data [ 7 ] = _rtB -> bqybmlx3aq . Data [ 7 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6 ) ; } { _rtB -> bqybmlx3aq . Data [ 7
] = _rtB -> bqybmlx3aq . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7
) ; } { _rtB -> bqybmlx3aq . Data [ 6 ] = _rtB -> bqybmlx3aq . Data [ 6 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0 ) ; } { _rtB -> bqybmlx3aq . Data [ 6
] = _rtB -> bqybmlx3aq . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1
) ; } { _rtB -> bqybmlx3aq . Data [ 6 ] = _rtB -> bqybmlx3aq . Data [ 6 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) << 2 ) ; } { _rtB -> bqybmlx3aq . Data [
6 ] = _rtB -> bqybmlx3aq . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >>
11 ) << 3 ) ; } { _rtB -> bqybmlx3aq . Data [ 6 ] = _rtB -> bqybmlx3aq . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >> 12 ) << 4 ) ; } { _rtB -> bqybmlx3aq .
Data [ 6 ] = _rtB -> bqybmlx3aq . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >>
13 ) << 5 ) ; } { _rtB -> bqybmlx3aq . Data [ 6 ] = _rtB -> bqybmlx3aq . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >> 14 ) << 6 ) ; } { _rtB -> bqybmlx3aq .
Data [ 6 ] = _rtB -> bqybmlx3aq . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >>
15 ) << 7 ) ; } } } } } } } sErr = GetErrorBuffer ( & _rtDW -> eoi4qxsius [
0U ] ) ; inputMsgRef = & _rtB -> bqybmlx3aq ; LibOutputs_CANTransmit ( &
_rtDW -> eoi4qxsius [ 0U ] , inputMsgRef , 1 ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( S , sErr ) ; ssSetStopRequested ( S , 1 ) ; } _rtB ->
dvcf3ixgk3 . ID = 6U ; _rtB -> dvcf3ixgk3 . Length = 8U ; _rtB -> dvcf3ixgk3
. Extended = 0U ; _rtB -> dvcf3ixgk3 . Remote = 0 ; _rtB -> dvcf3ixgk3 . Data
[ 0 ] = 0 ; _rtB -> dvcf3ixgk3 . Data [ 1 ] = 0 ; _rtB -> dvcf3ixgk3 . Data [
2 ] = 0 ; _rtB -> dvcf3ixgk3 . Data [ 3 ] = 0 ; _rtB -> dvcf3ixgk3 . Data [ 4
] = 0 ; _rtB -> dvcf3ixgk3 . Data [ 5 ] = 0 ; _rtB -> dvcf3ixgk3 . Data [ 6 ]
= 0 ; _rtB -> dvcf3ixgk3 . Data [ 7 ] = 0 ; { { { real64_T outValue = 0 ; {
real64_T result = _rtB -> j11p4rlchf [ 16 ] ; if ( result > 5.0 ) { result =
5.0 ; } result = result / 0.0001 ; outValue = result ; } { { uint16_T
packedValue ; if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = (
uint16_T ) 65535 ; } else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue
= ( uint16_T ) 0 ; } else { packedValue = ( uint16_T ) ( outValue ) ; } { {
_rtB -> dvcf3ixgk3 . Data [ 1 ] = _rtB -> dvcf3ixgk3 . Data [ 1 ] | ( uint8_T
) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T )
( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 1 ] = _rtB
-> dvcf3ixgk3 . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) (
packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ;
} { _rtB -> dvcf3ixgk3 . Data [ 1 ] = _rtB -> dvcf3ixgk3 . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 1
] = _rtB -> dvcf3ixgk3 . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3
) ; } { _rtB -> dvcf3ixgk3 . Data [ 1 ] = _rtB -> dvcf3ixgk3 . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 1
] = _rtB -> dvcf3ixgk3 . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5
) ; } { _rtB -> dvcf3ixgk3 . Data [ 1 ] = _rtB -> dvcf3ixgk3 . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 1
] = _rtB -> dvcf3ixgk3 . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7
) ; } { _rtB -> dvcf3ixgk3 . Data [ 0 ] = _rtB -> dvcf3ixgk3 . Data [ 0 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 0
] = _rtB -> dvcf3ixgk3 . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1
) ; } { _rtB -> dvcf3ixgk3 . Data [ 0 ] = _rtB -> dvcf3ixgk3 . Data [ 0 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) << 2 ) ; } { _rtB -> dvcf3ixgk3 . Data [
0 ] = _rtB -> dvcf3ixgk3 . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >>
11 ) << 3 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 0 ] = _rtB -> dvcf3ixgk3 . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >> 12 ) << 4 ) ; } { _rtB -> dvcf3ixgk3 .
Data [ 0 ] = _rtB -> dvcf3ixgk3 . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >>
13 ) << 5 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 0 ] = _rtB -> dvcf3ixgk3 . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >> 14 ) << 6 ) ; } { _rtB -> dvcf3ixgk3 .
Data [ 0 ] = _rtB -> dvcf3ixgk3 . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >>
15 ) << 7 ) ; } } } } } } { { real64_T outValue = 0 ; { real64_T result =
_rtB -> j11p4rlchf [ 17 ] ; if ( result > 5.0 ) { result = 5.0 ; } result =
result / 0.0001 ; outValue = result ; } { { uint16_T packedValue ; if (
outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ; }
else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ; }
else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> dvcf3ixgk3 .
Data [ 3 ] = _rtB -> dvcf3ixgk3 . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 3 ] = _rtB -> dvcf3ixgk3 . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> dvcf3ixgk3 .
Data [ 3 ] = _rtB -> dvcf3ixgk3 . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 3 ] = _rtB -> dvcf3ixgk3 . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> dvcf3ixgk3 .
Data [ 3 ] = _rtB -> dvcf3ixgk3 . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 3 ] = _rtB -> dvcf3ixgk3 . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> dvcf3ixgk3 .
Data [ 3 ] = _rtB -> dvcf3ixgk3 . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 3 ] = _rtB -> dvcf3ixgk3 . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> dvcf3ixgk3 .
Data [ 2 ] = _rtB -> dvcf3ixgk3 . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 2 ] = _rtB -> dvcf3ixgk3 . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> dvcf3ixgk3 .
Data [ 2 ] = _rtB -> dvcf3ixgk3 . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 2 ] = _rtB -> dvcf3ixgk3 . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> dvcf3ixgk3 .
Data [ 2 ] = _rtB -> dvcf3ixgk3 . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 2 ] = _rtB -> dvcf3ixgk3 . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> dvcf3ixgk3 .
Data [ 2 ] = _rtB -> dvcf3ixgk3 . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 2 ] = _rtB -> dvcf3ixgk3 . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> j11p4rlchf [ 18 ] ; if ( result >
5.0 ) { result = 5.0 ; } result = result / 0.0001 ; outValue = result ; } { {
uint16_T packedValue ; if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue
= ( uint16_T ) 65535 ; } else if ( outValue < ( real64_T ) ( 0 ) ) {
packedValue = ( uint16_T ) 0 ; } else { packedValue = ( uint16_T ) ( outValue
) ; } { { _rtB -> dvcf3ixgk3 . Data [ 5 ] = _rtB -> dvcf3ixgk3 . Data [ 5 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 5
] = _rtB -> dvcf3ixgk3 . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1
) ; } { _rtB -> dvcf3ixgk3 . Data [ 5 ] = _rtB -> dvcf3ixgk3 . Data [ 5 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 5
] = _rtB -> dvcf3ixgk3 . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3
) ; } { _rtB -> dvcf3ixgk3 . Data [ 5 ] = _rtB -> dvcf3ixgk3 . Data [ 5 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 5
] = _rtB -> dvcf3ixgk3 . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5
) ; } { _rtB -> dvcf3ixgk3 . Data [ 5 ] = _rtB -> dvcf3ixgk3 . Data [ 5 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 5
] = _rtB -> dvcf3ixgk3 . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7
) ; } { _rtB -> dvcf3ixgk3 . Data [ 4 ] = _rtB -> dvcf3ixgk3 . Data [ 4 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 4
] = _rtB -> dvcf3ixgk3 . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1
) ; } { _rtB -> dvcf3ixgk3 . Data [ 4 ] = _rtB -> dvcf3ixgk3 . Data [ 4 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) << 2 ) ; } { _rtB -> dvcf3ixgk3 . Data [
4 ] = _rtB -> dvcf3ixgk3 . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >>
11 ) << 3 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 4 ] = _rtB -> dvcf3ixgk3 . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >> 12 ) << 4 ) ; } { _rtB -> dvcf3ixgk3 .
Data [ 4 ] = _rtB -> dvcf3ixgk3 . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >>
13 ) << 5 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 4 ] = _rtB -> dvcf3ixgk3 . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >> 14 ) << 6 ) ; } { _rtB -> dvcf3ixgk3 .
Data [ 4 ] = _rtB -> dvcf3ixgk3 . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >>
15 ) << 7 ) ; } } } } } } { { real64_T outValue = 0 ; { real64_T result =
_rtB -> j11p4rlchf [ 19 ] ; if ( result > 5.0 ) { result = 5.0 ; } result =
result / 0.0001 ; outValue = result ; } { { uint16_T packedValue ; if (
outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ; }
else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ; }
else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> dvcf3ixgk3 .
Data [ 7 ] = _rtB -> dvcf3ixgk3 . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 7 ] = _rtB -> dvcf3ixgk3 . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> dvcf3ixgk3 .
Data [ 7 ] = _rtB -> dvcf3ixgk3 . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 7 ] = _rtB -> dvcf3ixgk3 . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> dvcf3ixgk3 .
Data [ 7 ] = _rtB -> dvcf3ixgk3 . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 7 ] = _rtB -> dvcf3ixgk3 . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> dvcf3ixgk3 .
Data [ 7 ] = _rtB -> dvcf3ixgk3 . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 7 ] = _rtB -> dvcf3ixgk3 . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> dvcf3ixgk3 .
Data [ 6 ] = _rtB -> dvcf3ixgk3 . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 6 ] = _rtB -> dvcf3ixgk3 . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> dvcf3ixgk3 .
Data [ 6 ] = _rtB -> dvcf3ixgk3 . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 6 ] = _rtB -> dvcf3ixgk3 . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> dvcf3ixgk3 .
Data [ 6 ] = _rtB -> dvcf3ixgk3 . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 6 ] = _rtB -> dvcf3ixgk3 . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> dvcf3ixgk3 .
Data [ 6 ] = _rtB -> dvcf3ixgk3 . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> dvcf3ixgk3 . Data [ 6 ] = _rtB -> dvcf3ixgk3 . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } } sErr =
GetErrorBuffer ( & _rtDW -> min5xp5u0a [ 0U ] ) ; inputMsgRef = & _rtB ->
dvcf3ixgk3 ; LibOutputs_CANTransmit ( & _rtDW -> min5xp5u0a [ 0U ] ,
inputMsgRef , 1 ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( S , sErr ) ;
ssSetStopRequested ( S , 1 ) ; } _rtB -> i5xoiftlqb . ID = 7U ; _rtB ->
i5xoiftlqb . Length = 8U ; _rtB -> i5xoiftlqb . Extended = 0U ; _rtB ->
i5xoiftlqb . Remote = 0 ; _rtB -> i5xoiftlqb . Data [ 0 ] = 0 ; _rtB ->
i5xoiftlqb . Data [ 1 ] = 0 ; _rtB -> i5xoiftlqb . Data [ 2 ] = 0 ; _rtB ->
i5xoiftlqb . Data [ 3 ] = 0 ; _rtB -> i5xoiftlqb . Data [ 4 ] = 0 ; _rtB ->
i5xoiftlqb . Data [ 5 ] = 0 ; _rtB -> i5xoiftlqb . Data [ 6 ] = 0 ; _rtB ->
i5xoiftlqb . Data [ 7 ] = 0 ; { { { real64_T outValue = 0 ; { real64_T result
= _rtB -> j11p4rlchf [ 20 ] ; if ( result > 5.0 ) { result = 5.0 ; } result =
result / 0.0001 ; outValue = result ; } { { uint16_T packedValue ; if (
outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ; }
else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ; }
else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> i5xoiftlqb .
Data [ 1 ] = _rtB -> i5xoiftlqb . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> i5xoiftlqb . Data [ 1 ] = _rtB -> i5xoiftlqb . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> i5xoiftlqb .
Data [ 1 ] = _rtB -> i5xoiftlqb . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> i5xoiftlqb . Data [ 1 ] = _rtB -> i5xoiftlqb . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> i5xoiftlqb .
Data [ 1 ] = _rtB -> i5xoiftlqb . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> i5xoiftlqb . Data [ 1 ] = _rtB -> i5xoiftlqb . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> i5xoiftlqb .
Data [ 1 ] = _rtB -> i5xoiftlqb . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> i5xoiftlqb . Data [ 1 ] = _rtB -> i5xoiftlqb . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> i5xoiftlqb .
Data [ 0 ] = _rtB -> i5xoiftlqb . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> i5xoiftlqb . Data [ 0 ] = _rtB -> i5xoiftlqb . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> i5xoiftlqb .
Data [ 0 ] = _rtB -> i5xoiftlqb . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> i5xoiftlqb . Data [ 0 ] = _rtB -> i5xoiftlqb . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> i5xoiftlqb .
Data [ 0 ] = _rtB -> i5xoiftlqb . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> i5xoiftlqb . Data [ 0 ] = _rtB -> i5xoiftlqb . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> i5xoiftlqb .
Data [ 0 ] = _rtB -> i5xoiftlqb . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> i5xoiftlqb . Data [ 0 ] = _rtB -> i5xoiftlqb . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> j11p4rlchf [ 21 ] ; if ( result >
5.0 ) { result = 5.0 ; } result = result / 0.0001 ; outValue = result ; } { {
uint16_T packedValue ; if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue
= ( uint16_T ) 65535 ; } else if ( outValue < ( real64_T ) ( 0 ) ) {
packedValue = ( uint16_T ) 0 ; } else { packedValue = ( uint16_T ) ( outValue
) ; } { { _rtB -> i5xoiftlqb . Data [ 3 ] = _rtB -> i5xoiftlqb . Data [ 3 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB -> i5xoiftlqb . Data [ 3
] = _rtB -> i5xoiftlqb . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1
) ; } { _rtB -> i5xoiftlqb . Data [ 3 ] = _rtB -> i5xoiftlqb . Data [ 3 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ; } { _rtB -> i5xoiftlqb . Data [ 3
] = _rtB -> i5xoiftlqb . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3
) ; } { _rtB -> i5xoiftlqb . Data [ 3 ] = _rtB -> i5xoiftlqb . Data [ 3 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4 ) ; } { _rtB -> i5xoiftlqb . Data [ 3
] = _rtB -> i5xoiftlqb . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5
) ; } { _rtB -> i5xoiftlqb . Data [ 3 ] = _rtB -> i5xoiftlqb . Data [ 3 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6 ) ; } { _rtB -> i5xoiftlqb . Data [ 3
] = _rtB -> i5xoiftlqb . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7
) ; } { _rtB -> i5xoiftlqb . Data [ 2 ] = _rtB -> i5xoiftlqb . Data [ 2 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0 ) ; } { _rtB -> i5xoiftlqb . Data [ 2
] = _rtB -> i5xoiftlqb . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1
) ; } { _rtB -> i5xoiftlqb . Data [ 2 ] = _rtB -> i5xoiftlqb . Data [ 2 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) << 2 ) ; } { _rtB -> i5xoiftlqb . Data [
2 ] = _rtB -> i5xoiftlqb . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >>
11 ) << 3 ) ; } { _rtB -> i5xoiftlqb . Data [ 2 ] = _rtB -> i5xoiftlqb . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >> 12 ) << 4 ) ; } { _rtB -> i5xoiftlqb .
Data [ 2 ] = _rtB -> i5xoiftlqb . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >>
13 ) << 5 ) ; } { _rtB -> i5xoiftlqb . Data [ 2 ] = _rtB -> i5xoiftlqb . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >> 14 ) << 6 ) ; } { _rtB -> i5xoiftlqb .
Data [ 2 ] = _rtB -> i5xoiftlqb . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >>
15 ) << 7 ) ; } } } } } } { { real64_T outValue = 0 ; { real64_T result =
_rtB -> j11p4rlchf [ 22 ] ; if ( result > 5.0 ) { result = 5.0 ; } result =
result / 0.0001 ; outValue = result ; } { { uint16_T packedValue ; if (
outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ; }
else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ; }
else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> i5xoiftlqb .
Data [ 5 ] = _rtB -> i5xoiftlqb . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> i5xoiftlqb . Data [ 5 ] = _rtB -> i5xoiftlqb . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> i5xoiftlqb .
Data [ 5 ] = _rtB -> i5xoiftlqb . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> i5xoiftlqb . Data [ 5 ] = _rtB -> i5xoiftlqb . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> i5xoiftlqb .
Data [ 5 ] = _rtB -> i5xoiftlqb . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> i5xoiftlqb . Data [ 5 ] = _rtB -> i5xoiftlqb . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> i5xoiftlqb .
Data [ 5 ] = _rtB -> i5xoiftlqb . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> i5xoiftlqb . Data [ 5 ] = _rtB -> i5xoiftlqb . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> i5xoiftlqb .
Data [ 4 ] = _rtB -> i5xoiftlqb . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> i5xoiftlqb . Data [ 4 ] = _rtB -> i5xoiftlqb . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> i5xoiftlqb .
Data [ 4 ] = _rtB -> i5xoiftlqb . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> i5xoiftlqb . Data [ 4 ] = _rtB -> i5xoiftlqb . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> i5xoiftlqb .
Data [ 4 ] = _rtB -> i5xoiftlqb . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> i5xoiftlqb . Data [ 4 ] = _rtB -> i5xoiftlqb . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> i5xoiftlqb .
Data [ 4 ] = _rtB -> i5xoiftlqb . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> i5xoiftlqb . Data [ 4 ] = _rtB -> i5xoiftlqb . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> j11p4rlchf [ 23 ] ; if ( result >
5.0 ) { result = 5.0 ; } result = result / 0.0001 ; outValue = result ; } { {
uint16_T packedValue ; if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue
= ( uint16_T ) 65535 ; } else if ( outValue < ( real64_T ) ( 0 ) ) {
packedValue = ( uint16_T ) 0 ; } else { packedValue = ( uint16_T ) ( outValue
) ; } { { _rtB -> i5xoiftlqb . Data [ 7 ] = _rtB -> i5xoiftlqb . Data [ 7 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB -> i5xoiftlqb . Data [ 7
] = _rtB -> i5xoiftlqb . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1
) ; } { _rtB -> i5xoiftlqb . Data [ 7 ] = _rtB -> i5xoiftlqb . Data [ 7 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ; } { _rtB -> i5xoiftlqb . Data [ 7
] = _rtB -> i5xoiftlqb . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3
) ; } { _rtB -> i5xoiftlqb . Data [ 7 ] = _rtB -> i5xoiftlqb . Data [ 7 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4 ) ; } { _rtB -> i5xoiftlqb . Data [ 7
] = _rtB -> i5xoiftlqb . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5
) ; } { _rtB -> i5xoiftlqb . Data [ 7 ] = _rtB -> i5xoiftlqb . Data [ 7 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6 ) ; } { _rtB -> i5xoiftlqb . Data [ 7
] = _rtB -> i5xoiftlqb . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7
) ; } { _rtB -> i5xoiftlqb . Data [ 6 ] = _rtB -> i5xoiftlqb . Data [ 6 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0 ) ; } { _rtB -> i5xoiftlqb . Data [ 6
] = _rtB -> i5xoiftlqb . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1
) ; } { _rtB -> i5xoiftlqb . Data [ 6 ] = _rtB -> i5xoiftlqb . Data [ 6 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) << 2 ) ; } { _rtB -> i5xoiftlqb . Data [
6 ] = _rtB -> i5xoiftlqb . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >>
11 ) << 3 ) ; } { _rtB -> i5xoiftlqb . Data [ 6 ] = _rtB -> i5xoiftlqb . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >> 12 ) << 4 ) ; } { _rtB -> i5xoiftlqb .
Data [ 6 ] = _rtB -> i5xoiftlqb . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >>
13 ) << 5 ) ; } { _rtB -> i5xoiftlqb . Data [ 6 ] = _rtB -> i5xoiftlqb . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >> 14 ) << 6 ) ; } { _rtB -> i5xoiftlqb .
Data [ 6 ] = _rtB -> i5xoiftlqb . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >>
15 ) << 7 ) ; } } } } } } } sErr = GetErrorBuffer ( & _rtDW -> g1iawiozyx [
0U ] ) ; inputMsgRef = & _rtB -> i5xoiftlqb ; LibOutputs_CANTransmit ( &
_rtDW -> g1iawiozyx [ 0U ] , inputMsgRef , 1 ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( S , sErr ) ; ssSetStopRequested ( S , 1 ) ; } _rtB ->
mmhhlevhaj . ID = 8U ; _rtB -> mmhhlevhaj . Length = 8U ; _rtB -> mmhhlevhaj
. Extended = 0U ; _rtB -> mmhhlevhaj . Remote = 0 ; _rtB -> mmhhlevhaj . Data
[ 0 ] = 0 ; _rtB -> mmhhlevhaj . Data [ 1 ] = 0 ; _rtB -> mmhhlevhaj . Data [
2 ] = 0 ; _rtB -> mmhhlevhaj . Data [ 3 ] = 0 ; _rtB -> mmhhlevhaj . Data [ 4
] = 0 ; _rtB -> mmhhlevhaj . Data [ 5 ] = 0 ; _rtB -> mmhhlevhaj . Data [ 6 ]
= 0 ; _rtB -> mmhhlevhaj . Data [ 7 ] = 0 ; { { { real64_T outValue = 0 ; {
real64_T result = _rtB -> j11p4rlchf [ 24 ] ; if ( result > 5.0 ) { result =
5.0 ; } result = result / 0.0001 ; outValue = result ; } { { uint16_T
packedValue ; if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = (
uint16_T ) 65535 ; } else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue
= ( uint16_T ) 0 ; } else { packedValue = ( uint16_T ) ( outValue ) ; } { {
_rtB -> mmhhlevhaj . Data [ 1 ] = _rtB -> mmhhlevhaj . Data [ 1 ] | ( uint8_T
) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T )
( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB -> mmhhlevhaj . Data [ 1 ] = _rtB
-> mmhhlevhaj . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) (
packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ;
} { _rtB -> mmhhlevhaj . Data [ 1 ] = _rtB -> mmhhlevhaj . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ; } { _rtB -> mmhhlevhaj . Data [ 1
] = _rtB -> mmhhlevhaj . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3
) ; } { _rtB -> mmhhlevhaj . Data [ 1 ] = _rtB -> mmhhlevhaj . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4 ) ; } { _rtB -> mmhhlevhaj . Data [ 1
] = _rtB -> mmhhlevhaj . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5
) ; } { _rtB -> mmhhlevhaj . Data [ 1 ] = _rtB -> mmhhlevhaj . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6 ) ; } { _rtB -> mmhhlevhaj . Data [ 1
] = _rtB -> mmhhlevhaj . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7
) ; } { _rtB -> mmhhlevhaj . Data [ 0 ] = _rtB -> mmhhlevhaj . Data [ 0 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0 ) ; } { _rtB -> mmhhlevhaj . Data [ 0
] = _rtB -> mmhhlevhaj . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1
) ; } { _rtB -> mmhhlevhaj . Data [ 0 ] = _rtB -> mmhhlevhaj . Data [ 0 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) << 2 ) ; } { _rtB -> mmhhlevhaj . Data [
0 ] = _rtB -> mmhhlevhaj . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >>
11 ) << 3 ) ; } { _rtB -> mmhhlevhaj . Data [ 0 ] = _rtB -> mmhhlevhaj . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >> 12 ) << 4 ) ; } { _rtB -> mmhhlevhaj .
Data [ 0 ] = _rtB -> mmhhlevhaj . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >>
13 ) << 5 ) ; } { _rtB -> mmhhlevhaj . Data [ 0 ] = _rtB -> mmhhlevhaj . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >> 14 ) << 6 ) ; } { _rtB -> mmhhlevhaj .
Data [ 0 ] = _rtB -> mmhhlevhaj . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >>
15 ) << 7 ) ; } } } } } } { { real64_T outValue = 0 ; { real64_T result =
_rtB -> j11p4rlchf [ 25 ] ; if ( result > 5.0 ) { result = 5.0 ; } result =
result / 0.0001 ; outValue = result ; } { { uint16_T packedValue ; if (
outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ; }
else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ; }
else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> mmhhlevhaj .
Data [ 3 ] = _rtB -> mmhhlevhaj . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> mmhhlevhaj . Data [ 3 ] = _rtB -> mmhhlevhaj . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> mmhhlevhaj .
Data [ 3 ] = _rtB -> mmhhlevhaj . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> mmhhlevhaj . Data [ 3 ] = _rtB -> mmhhlevhaj . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> mmhhlevhaj .
Data [ 3 ] = _rtB -> mmhhlevhaj . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> mmhhlevhaj . Data [ 3 ] = _rtB -> mmhhlevhaj . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> mmhhlevhaj .
Data [ 3 ] = _rtB -> mmhhlevhaj . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> mmhhlevhaj . Data [ 3 ] = _rtB -> mmhhlevhaj . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> mmhhlevhaj .
Data [ 2 ] = _rtB -> mmhhlevhaj . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> mmhhlevhaj . Data [ 2 ] = _rtB -> mmhhlevhaj . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> mmhhlevhaj .
Data [ 2 ] = _rtB -> mmhhlevhaj . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> mmhhlevhaj . Data [ 2 ] = _rtB -> mmhhlevhaj . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> mmhhlevhaj .
Data [ 2 ] = _rtB -> mmhhlevhaj . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> mmhhlevhaj . Data [ 2 ] = _rtB -> mmhhlevhaj . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> mmhhlevhaj .
Data [ 2 ] = _rtB -> mmhhlevhaj . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> mmhhlevhaj . Data [ 2 ] = _rtB -> mmhhlevhaj . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> j11p4rlchf [ 26 ] ; if ( result >
5.0 ) { result = 5.0 ; } result = result / 0.0001 ; outValue = result ; } { {
uint16_T packedValue ; if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue
= ( uint16_T ) 65535 ; } else if ( outValue < ( real64_T ) ( 0 ) ) {
packedValue = ( uint16_T ) 0 ; } else { packedValue = ( uint16_T ) ( outValue
) ; } { { _rtB -> mmhhlevhaj . Data [ 5 ] = _rtB -> mmhhlevhaj . Data [ 5 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB -> mmhhlevhaj . Data [ 5
] = _rtB -> mmhhlevhaj . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1
) ; } { _rtB -> mmhhlevhaj . Data [ 5 ] = _rtB -> mmhhlevhaj . Data [ 5 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ; } { _rtB -> mmhhlevhaj . Data [ 5
] = _rtB -> mmhhlevhaj . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3
) ; } { _rtB -> mmhhlevhaj . Data [ 5 ] = _rtB -> mmhhlevhaj . Data [ 5 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4 ) ; } { _rtB -> mmhhlevhaj . Data [ 5
] = _rtB -> mmhhlevhaj . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5
) ; } { _rtB -> mmhhlevhaj . Data [ 5 ] = _rtB -> mmhhlevhaj . Data [ 5 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6 ) ; } { _rtB -> mmhhlevhaj . Data [ 5
] = _rtB -> mmhhlevhaj . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7
) ; } { _rtB -> mmhhlevhaj . Data [ 4 ] = _rtB -> mmhhlevhaj . Data [ 4 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0 ) ; } { _rtB -> mmhhlevhaj . Data [ 4
] = _rtB -> mmhhlevhaj . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1
) ; } { _rtB -> mmhhlevhaj . Data [ 4 ] = _rtB -> mmhhlevhaj . Data [ 4 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) << 2 ) ; } { _rtB -> mmhhlevhaj . Data [
4 ] = _rtB -> mmhhlevhaj . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >>
11 ) << 3 ) ; } { _rtB -> mmhhlevhaj . Data [ 4 ] = _rtB -> mmhhlevhaj . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >> 12 ) << 4 ) ; } { _rtB -> mmhhlevhaj .
Data [ 4 ] = _rtB -> mmhhlevhaj . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >>
13 ) << 5 ) ; } { _rtB -> mmhhlevhaj . Data [ 4 ] = _rtB -> mmhhlevhaj . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >> 14 ) << 6 ) ; } { _rtB -> mmhhlevhaj .
Data [ 4 ] = _rtB -> mmhhlevhaj . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >>
15 ) << 7 ) ; } } } } } } { { real64_T outValue = 0 ; { real64_T result =
_rtB -> j11p4rlchf [ 27 ] ; if ( result > 5.0 ) { result = 5.0 ; } result =
result / 0.0001 ; outValue = result ; } { { uint16_T packedValue ; if (
outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ; }
else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ; }
else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> mmhhlevhaj .
Data [ 7 ] = _rtB -> mmhhlevhaj . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> mmhhlevhaj . Data [ 7 ] = _rtB -> mmhhlevhaj . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> mmhhlevhaj .
Data [ 7 ] = _rtB -> mmhhlevhaj . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> mmhhlevhaj . Data [ 7 ] = _rtB -> mmhhlevhaj . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> mmhhlevhaj .
Data [ 7 ] = _rtB -> mmhhlevhaj . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> mmhhlevhaj . Data [ 7 ] = _rtB -> mmhhlevhaj . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> mmhhlevhaj .
Data [ 7 ] = _rtB -> mmhhlevhaj . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> mmhhlevhaj . Data [ 7 ] = _rtB -> mmhhlevhaj . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> mmhhlevhaj .
Data [ 6 ] = _rtB -> mmhhlevhaj . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> mmhhlevhaj . Data [ 6 ] = _rtB -> mmhhlevhaj . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> mmhhlevhaj .
Data [ 6 ] = _rtB -> mmhhlevhaj . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> mmhhlevhaj . Data [ 6 ] = _rtB -> mmhhlevhaj . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> mmhhlevhaj .
Data [ 6 ] = _rtB -> mmhhlevhaj . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> mmhhlevhaj . Data [ 6 ] = _rtB -> mmhhlevhaj . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> mmhhlevhaj .
Data [ 6 ] = _rtB -> mmhhlevhaj . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> mmhhlevhaj . Data [ 6 ] = _rtB -> mmhhlevhaj . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } } sErr =
GetErrorBuffer ( & _rtDW -> hiub3pobg3 [ 0U ] ) ; inputMsgRef = & _rtB ->
mmhhlevhaj ; LibOutputs_CANTransmit ( & _rtDW -> hiub3pobg3 [ 0U ] ,
inputMsgRef , 1 ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( S , sErr ) ;
ssSetStopRequested ( S , 1 ) ; } _rtB -> cwjeib4rig . ID = 9U ; _rtB ->
cwjeib4rig . Length = 8U ; _rtB -> cwjeib4rig . Extended = 0U ; _rtB ->
cwjeib4rig . Remote = 0 ; _rtB -> cwjeib4rig . Data [ 0 ] = 0 ; _rtB ->
cwjeib4rig . Data [ 1 ] = 0 ; _rtB -> cwjeib4rig . Data [ 2 ] = 0 ; _rtB ->
cwjeib4rig . Data [ 3 ] = 0 ; _rtB -> cwjeib4rig . Data [ 4 ] = 0 ; _rtB ->
cwjeib4rig . Data [ 5 ] = 0 ; _rtB -> cwjeib4rig . Data [ 6 ] = 0 ; _rtB ->
cwjeib4rig . Data [ 7 ] = 0 ; { { { real64_T outValue = 0 ; { real64_T result
= _rtB -> j11p4rlchf [ 28 ] ; if ( result > 5.0 ) { result = 5.0 ; } result =
result / 0.0001 ; outValue = result ; } { { uint16_T packedValue ; if (
outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ; }
else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ; }
else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> cwjeib4rig .
Data [ 1 ] = _rtB -> cwjeib4rig . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> cwjeib4rig . Data [ 1 ] = _rtB -> cwjeib4rig . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> cwjeib4rig .
Data [ 1 ] = _rtB -> cwjeib4rig . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> cwjeib4rig . Data [ 1 ] = _rtB -> cwjeib4rig . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> cwjeib4rig .
Data [ 1 ] = _rtB -> cwjeib4rig . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> cwjeib4rig . Data [ 1 ] = _rtB -> cwjeib4rig . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> cwjeib4rig .
Data [ 1 ] = _rtB -> cwjeib4rig . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> cwjeib4rig . Data [ 1 ] = _rtB -> cwjeib4rig . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> cwjeib4rig .
Data [ 0 ] = _rtB -> cwjeib4rig . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> cwjeib4rig . Data [ 0 ] = _rtB -> cwjeib4rig . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> cwjeib4rig .
Data [ 0 ] = _rtB -> cwjeib4rig . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> cwjeib4rig . Data [ 0 ] = _rtB -> cwjeib4rig . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> cwjeib4rig .
Data [ 0 ] = _rtB -> cwjeib4rig . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> cwjeib4rig . Data [ 0 ] = _rtB -> cwjeib4rig . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> cwjeib4rig .
Data [ 0 ] = _rtB -> cwjeib4rig . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> cwjeib4rig . Data [ 0 ] = _rtB -> cwjeib4rig . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> j11p4rlchf [ 29 ] ; if ( result >
5.0 ) { result = 5.0 ; } result = result / 0.0001 ; outValue = result ; } { {
uint16_T packedValue ; if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue
= ( uint16_T ) 65535 ; } else if ( outValue < ( real64_T ) ( 0 ) ) {
packedValue = ( uint16_T ) 0 ; } else { packedValue = ( uint16_T ) ( outValue
) ; } { { _rtB -> cwjeib4rig . Data [ 3 ] = _rtB -> cwjeib4rig . Data [ 3 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB -> cwjeib4rig . Data [ 3
] = _rtB -> cwjeib4rig . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1
) ; } { _rtB -> cwjeib4rig . Data [ 3 ] = _rtB -> cwjeib4rig . Data [ 3 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ; } { _rtB -> cwjeib4rig . Data [ 3
] = _rtB -> cwjeib4rig . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3
) ; } { _rtB -> cwjeib4rig . Data [ 3 ] = _rtB -> cwjeib4rig . Data [ 3 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4 ) ; } { _rtB -> cwjeib4rig . Data [ 3
] = _rtB -> cwjeib4rig . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5
) ; } { _rtB -> cwjeib4rig . Data [ 3 ] = _rtB -> cwjeib4rig . Data [ 3 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6 ) ; } { _rtB -> cwjeib4rig . Data [ 3
] = _rtB -> cwjeib4rig . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7
) ; } { _rtB -> cwjeib4rig . Data [ 2 ] = _rtB -> cwjeib4rig . Data [ 2 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0 ) ; } { _rtB -> cwjeib4rig . Data [ 2
] = _rtB -> cwjeib4rig . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1
) ; } { _rtB -> cwjeib4rig . Data [ 2 ] = _rtB -> cwjeib4rig . Data [ 2 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) << 2 ) ; } { _rtB -> cwjeib4rig . Data [
2 ] = _rtB -> cwjeib4rig . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >>
11 ) << 3 ) ; } { _rtB -> cwjeib4rig . Data [ 2 ] = _rtB -> cwjeib4rig . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >> 12 ) << 4 ) ; } { _rtB -> cwjeib4rig .
Data [ 2 ] = _rtB -> cwjeib4rig . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >>
13 ) << 5 ) ; } { _rtB -> cwjeib4rig . Data [ 2 ] = _rtB -> cwjeib4rig . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >> 14 ) << 6 ) ; } { _rtB -> cwjeib4rig .
Data [ 2 ] = _rtB -> cwjeib4rig . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >>
15 ) << 7 ) ; } } } } } } { { real64_T outValue = 0 ; { real64_T result =
_rtB -> j11p4rlchf [ 30 ] ; if ( result > 5.0 ) { result = 5.0 ; } result =
result / 0.0001 ; outValue = result ; } { { uint16_T packedValue ; if (
outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ; }
else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ; }
else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> cwjeib4rig .
Data [ 5 ] = _rtB -> cwjeib4rig . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> cwjeib4rig . Data [ 5 ] = _rtB -> cwjeib4rig . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> cwjeib4rig .
Data [ 5 ] = _rtB -> cwjeib4rig . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> cwjeib4rig . Data [ 5 ] = _rtB -> cwjeib4rig . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> cwjeib4rig .
Data [ 5 ] = _rtB -> cwjeib4rig . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> cwjeib4rig . Data [ 5 ] = _rtB -> cwjeib4rig . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> cwjeib4rig .
Data [ 5 ] = _rtB -> cwjeib4rig . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> cwjeib4rig . Data [ 5 ] = _rtB -> cwjeib4rig . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> cwjeib4rig .
Data [ 4 ] = _rtB -> cwjeib4rig . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> cwjeib4rig . Data [ 4 ] = _rtB -> cwjeib4rig . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> cwjeib4rig .
Data [ 4 ] = _rtB -> cwjeib4rig . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> cwjeib4rig . Data [ 4 ] = _rtB -> cwjeib4rig . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> cwjeib4rig .
Data [ 4 ] = _rtB -> cwjeib4rig . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> cwjeib4rig . Data [ 4 ] = _rtB -> cwjeib4rig . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> cwjeib4rig .
Data [ 4 ] = _rtB -> cwjeib4rig . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> cwjeib4rig . Data [ 4 ] = _rtB -> cwjeib4rig . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> j11p4rlchf [ 31 ] ; if ( result >
5.0 ) { result = 5.0 ; } result = result / 0.0001 ; outValue = result ; } { {
uint16_T packedValue ; if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue
= ( uint16_T ) 65535 ; } else if ( outValue < ( real64_T ) ( 0 ) ) {
packedValue = ( uint16_T ) 0 ; } else { packedValue = ( uint16_T ) ( outValue
) ; } { { _rtB -> cwjeib4rig . Data [ 7 ] = _rtB -> cwjeib4rig . Data [ 7 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB -> cwjeib4rig . Data [ 7
] = _rtB -> cwjeib4rig . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1
) ; } { _rtB -> cwjeib4rig . Data [ 7 ] = _rtB -> cwjeib4rig . Data [ 7 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ; } { _rtB -> cwjeib4rig . Data [ 7
] = _rtB -> cwjeib4rig . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3
) ; } { _rtB -> cwjeib4rig . Data [ 7 ] = _rtB -> cwjeib4rig . Data [ 7 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4 ) ; } { _rtB -> cwjeib4rig . Data [ 7
] = _rtB -> cwjeib4rig . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5
) ; } { _rtB -> cwjeib4rig . Data [ 7 ] = _rtB -> cwjeib4rig . Data [ 7 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6 ) ; } { _rtB -> cwjeib4rig . Data [ 7
] = _rtB -> cwjeib4rig . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7
) ; } { _rtB -> cwjeib4rig . Data [ 6 ] = _rtB -> cwjeib4rig . Data [ 6 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0 ) ; } { _rtB -> cwjeib4rig . Data [ 6
] = _rtB -> cwjeib4rig . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1
) ; } { _rtB -> cwjeib4rig . Data [ 6 ] = _rtB -> cwjeib4rig . Data [ 6 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) << 2 ) ; } { _rtB -> cwjeib4rig . Data [
6 ] = _rtB -> cwjeib4rig . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >>
11 ) << 3 ) ; } { _rtB -> cwjeib4rig . Data [ 6 ] = _rtB -> cwjeib4rig . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >> 12 ) << 4 ) ; } { _rtB -> cwjeib4rig .
Data [ 6 ] = _rtB -> cwjeib4rig . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >>
13 ) << 5 ) ; } { _rtB -> cwjeib4rig . Data [ 6 ] = _rtB -> cwjeib4rig . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >> 14 ) << 6 ) ; } { _rtB -> cwjeib4rig .
Data [ 6 ] = _rtB -> cwjeib4rig . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >>
15 ) << 7 ) ; } } } } } } } sErr = GetErrorBuffer ( & _rtDW -> o4mplrtae2 [
0U ] ) ; inputMsgRef = & _rtB -> cwjeib4rig ; LibOutputs_CANTransmit ( &
_rtDW -> o4mplrtae2 [ 0U ] , inputMsgRef , 1 ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( S , sErr ) ; ssSetStopRequested ( S , 1 ) ; } _rtB ->
erucoerwnh . ID = 16U ; _rtB -> erucoerwnh . Length = 8U ; _rtB -> erucoerwnh
. Extended = 0U ; _rtB -> erucoerwnh . Remote = 0 ; _rtB -> erucoerwnh . Data
[ 0 ] = 0 ; _rtB -> erucoerwnh . Data [ 1 ] = 0 ; _rtB -> erucoerwnh . Data [
2 ] = 0 ; _rtB -> erucoerwnh . Data [ 3 ] = 0 ; _rtB -> erucoerwnh . Data [ 4
] = 0 ; _rtB -> erucoerwnh . Data [ 5 ] = 0 ; _rtB -> erucoerwnh . Data [ 6 ]
= 0 ; _rtB -> erucoerwnh . Data [ 7 ] = 0 ; { { { real64_T outValue = 0 ; {
real64_T result = _rtB -> j11p4rlchf [ 32 ] ; if ( result > 5.0 ) { result =
5.0 ; } result = result / 0.0001 ; outValue = result ; } { { uint16_T
packedValue ; if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = (
uint16_T ) 65535 ; } else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue
= ( uint16_T ) 0 ; } else { packedValue = ( uint16_T ) ( outValue ) ; } { {
_rtB -> erucoerwnh . Data [ 1 ] = _rtB -> erucoerwnh . Data [ 1 ] | ( uint8_T
) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T )
( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB -> erucoerwnh . Data [ 1 ] = _rtB
-> erucoerwnh . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) (
packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ;
} { _rtB -> erucoerwnh . Data [ 1 ] = _rtB -> erucoerwnh . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ; } { _rtB -> erucoerwnh . Data [ 1
] = _rtB -> erucoerwnh . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3
) ; } { _rtB -> erucoerwnh . Data [ 1 ] = _rtB -> erucoerwnh . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4 ) ; } { _rtB -> erucoerwnh . Data [ 1
] = _rtB -> erucoerwnh . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5
) ; } { _rtB -> erucoerwnh . Data [ 1 ] = _rtB -> erucoerwnh . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6 ) ; } { _rtB -> erucoerwnh . Data [ 1
] = _rtB -> erucoerwnh . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7
) ; } { _rtB -> erucoerwnh . Data [ 0 ] = _rtB -> erucoerwnh . Data [ 0 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0 ) ; } { _rtB -> erucoerwnh . Data [ 0
] = _rtB -> erucoerwnh . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1
) ; } { _rtB -> erucoerwnh . Data [ 0 ] = _rtB -> erucoerwnh . Data [ 0 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) << 2 ) ; } { _rtB -> erucoerwnh . Data [
0 ] = _rtB -> erucoerwnh . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >>
11 ) << 3 ) ; } { _rtB -> erucoerwnh . Data [ 0 ] = _rtB -> erucoerwnh . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >> 12 ) << 4 ) ; } { _rtB -> erucoerwnh .
Data [ 0 ] = _rtB -> erucoerwnh . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >>
13 ) << 5 ) ; } { _rtB -> erucoerwnh . Data [ 0 ] = _rtB -> erucoerwnh . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >> 14 ) << 6 ) ; } { _rtB -> erucoerwnh .
Data [ 0 ] = _rtB -> erucoerwnh . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >>
15 ) << 7 ) ; } } } } } } { { real64_T outValue = 0 ; { real64_T result =
_rtB -> j11p4rlchf [ 33 ] ; if ( result > 5.0 ) { result = 5.0 ; } result =
result / 0.0001 ; outValue = result ; } { { uint16_T packedValue ; if (
outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ; }
else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ; }
else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> erucoerwnh .
Data [ 3 ] = _rtB -> erucoerwnh . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> erucoerwnh . Data [ 3 ] = _rtB -> erucoerwnh . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> erucoerwnh .
Data [ 3 ] = _rtB -> erucoerwnh . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> erucoerwnh . Data [ 3 ] = _rtB -> erucoerwnh . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> erucoerwnh .
Data [ 3 ] = _rtB -> erucoerwnh . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> erucoerwnh . Data [ 3 ] = _rtB -> erucoerwnh . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> erucoerwnh .
Data [ 3 ] = _rtB -> erucoerwnh . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> erucoerwnh . Data [ 3 ] = _rtB -> erucoerwnh . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> erucoerwnh .
Data [ 2 ] = _rtB -> erucoerwnh . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> erucoerwnh . Data [ 2 ] = _rtB -> erucoerwnh . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> erucoerwnh .
Data [ 2 ] = _rtB -> erucoerwnh . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> erucoerwnh . Data [ 2 ] = _rtB -> erucoerwnh . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> erucoerwnh .
Data [ 2 ] = _rtB -> erucoerwnh . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> erucoerwnh . Data [ 2 ] = _rtB -> erucoerwnh . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> erucoerwnh .
Data [ 2 ] = _rtB -> erucoerwnh . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> erucoerwnh . Data [ 2 ] = _rtB -> erucoerwnh . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> j11p4rlchf [ 34 ] ; if ( result >
5.0 ) { result = 5.0 ; } result = result / 0.0001 ; outValue = result ; } { {
uint16_T packedValue ; if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue
= ( uint16_T ) 65535 ; } else if ( outValue < ( real64_T ) ( 0 ) ) {
packedValue = ( uint16_T ) 0 ; } else { packedValue = ( uint16_T ) ( outValue
) ; } { { _rtB -> erucoerwnh . Data [ 5 ] = _rtB -> erucoerwnh . Data [ 5 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB -> erucoerwnh . Data [ 5
] = _rtB -> erucoerwnh . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1
) ; } { _rtB -> erucoerwnh . Data [ 5 ] = _rtB -> erucoerwnh . Data [ 5 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ; } { _rtB -> erucoerwnh . Data [ 5
] = _rtB -> erucoerwnh . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3
) ; } { _rtB -> erucoerwnh . Data [ 5 ] = _rtB -> erucoerwnh . Data [ 5 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4 ) ; } { _rtB -> erucoerwnh . Data [ 5
] = _rtB -> erucoerwnh . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5
) ; } { _rtB -> erucoerwnh . Data [ 5 ] = _rtB -> erucoerwnh . Data [ 5 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6 ) ; } { _rtB -> erucoerwnh . Data [ 5
] = _rtB -> erucoerwnh . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7
) ; } { _rtB -> erucoerwnh . Data [ 4 ] = _rtB -> erucoerwnh . Data [ 4 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0 ) ; } { _rtB -> erucoerwnh . Data [ 4
] = _rtB -> erucoerwnh . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1
) ; } { _rtB -> erucoerwnh . Data [ 4 ] = _rtB -> erucoerwnh . Data [ 4 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) << 2 ) ; } { _rtB -> erucoerwnh . Data [
4 ] = _rtB -> erucoerwnh . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >>
11 ) << 3 ) ; } { _rtB -> erucoerwnh . Data [ 4 ] = _rtB -> erucoerwnh . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >> 12 ) << 4 ) ; } { _rtB -> erucoerwnh .
Data [ 4 ] = _rtB -> erucoerwnh . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >>
13 ) << 5 ) ; } { _rtB -> erucoerwnh . Data [ 4 ] = _rtB -> erucoerwnh . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >> 14 ) << 6 ) ; } { _rtB -> erucoerwnh .
Data [ 4 ] = _rtB -> erucoerwnh . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >>
15 ) << 7 ) ; } } } } } } { { real64_T outValue = 0 ; { real64_T result =
_rtB -> j11p4rlchf [ 35 ] ; if ( result > 5.0 ) { result = 5.0 ; } result =
result / 0.0001 ; outValue = result ; } { { uint16_T packedValue ; if (
outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ; }
else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ; }
else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> erucoerwnh .
Data [ 7 ] = _rtB -> erucoerwnh . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> erucoerwnh . Data [ 7 ] = _rtB -> erucoerwnh . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> erucoerwnh .
Data [ 7 ] = _rtB -> erucoerwnh . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> erucoerwnh . Data [ 7 ] = _rtB -> erucoerwnh . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> erucoerwnh .
Data [ 7 ] = _rtB -> erucoerwnh . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> erucoerwnh . Data [ 7 ] = _rtB -> erucoerwnh . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> erucoerwnh .
Data [ 7 ] = _rtB -> erucoerwnh . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> erucoerwnh . Data [ 7 ] = _rtB -> erucoerwnh . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> erucoerwnh .
Data [ 6 ] = _rtB -> erucoerwnh . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> erucoerwnh . Data [ 6 ] = _rtB -> erucoerwnh . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> erucoerwnh .
Data [ 6 ] = _rtB -> erucoerwnh . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> erucoerwnh . Data [ 6 ] = _rtB -> erucoerwnh . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> erucoerwnh .
Data [ 6 ] = _rtB -> erucoerwnh . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> erucoerwnh . Data [ 6 ] = _rtB -> erucoerwnh . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> erucoerwnh .
Data [ 6 ] = _rtB -> erucoerwnh . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> erucoerwnh . Data [ 6 ] = _rtB -> erucoerwnh . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } } sErr =
GetErrorBuffer ( & _rtDW -> ojtikvgrcd [ 0U ] ) ; inputMsgRef = & _rtB ->
erucoerwnh ; LibOutputs_CANTransmit ( & _rtDW -> ojtikvgrcd [ 0U ] ,
inputMsgRef , 1 ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( S , sErr ) ;
ssSetStopRequested ( S , 1 ) ; } _rtB -> inuphyimvz . ID = 17U ; _rtB ->
inuphyimvz . Length = 8U ; _rtB -> inuphyimvz . Extended = 0U ; _rtB ->
inuphyimvz . Remote = 0 ; _rtB -> inuphyimvz . Data [ 0 ] = 0 ; _rtB ->
inuphyimvz . Data [ 1 ] = 0 ; _rtB -> inuphyimvz . Data [ 2 ] = 0 ; _rtB ->
inuphyimvz . Data [ 3 ] = 0 ; _rtB -> inuphyimvz . Data [ 4 ] = 0 ; _rtB ->
inuphyimvz . Data [ 5 ] = 0 ; _rtB -> inuphyimvz . Data [ 6 ] = 0 ; _rtB ->
inuphyimvz . Data [ 7 ] = 0 ; { { { real64_T outValue = 0 ; { real64_T result
= _rtB -> j11p4rlchf [ 36 ] ; if ( result > 5.0 ) { result = 5.0 ; } result =
result / 0.0001 ; outValue = result ; } { { uint16_T packedValue ; if (
outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ; }
else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ; }
else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> inuphyimvz .
Data [ 1 ] = _rtB -> inuphyimvz . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> inuphyimvz . Data [ 1 ] = _rtB -> inuphyimvz . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> inuphyimvz .
Data [ 1 ] = _rtB -> inuphyimvz . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> inuphyimvz . Data [ 1 ] = _rtB -> inuphyimvz . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> inuphyimvz .
Data [ 1 ] = _rtB -> inuphyimvz . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> inuphyimvz . Data [ 1 ] = _rtB -> inuphyimvz . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> inuphyimvz .
Data [ 1 ] = _rtB -> inuphyimvz . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> inuphyimvz . Data [ 1 ] = _rtB -> inuphyimvz . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> inuphyimvz .
Data [ 0 ] = _rtB -> inuphyimvz . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> inuphyimvz . Data [ 0 ] = _rtB -> inuphyimvz . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> inuphyimvz .
Data [ 0 ] = _rtB -> inuphyimvz . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> inuphyimvz . Data [ 0 ] = _rtB -> inuphyimvz . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> inuphyimvz .
Data [ 0 ] = _rtB -> inuphyimvz . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> inuphyimvz . Data [ 0 ] = _rtB -> inuphyimvz . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> inuphyimvz .
Data [ 0 ] = _rtB -> inuphyimvz . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> inuphyimvz . Data [ 0 ] = _rtB -> inuphyimvz . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> j11p4rlchf [ 37 ] ; if ( result >
5.0 ) { result = 5.0 ; } result = result / 0.0001 ; outValue = result ; } { {
uint16_T packedValue ; if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue
= ( uint16_T ) 65535 ; } else if ( outValue < ( real64_T ) ( 0 ) ) {
packedValue = ( uint16_T ) 0 ; } else { packedValue = ( uint16_T ) ( outValue
) ; } { { _rtB -> inuphyimvz . Data [ 3 ] = _rtB -> inuphyimvz . Data [ 3 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB -> inuphyimvz . Data [ 3
] = _rtB -> inuphyimvz . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1
) ; } { _rtB -> inuphyimvz . Data [ 3 ] = _rtB -> inuphyimvz . Data [ 3 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ; } { _rtB -> inuphyimvz . Data [ 3
] = _rtB -> inuphyimvz . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3
) ; } { _rtB -> inuphyimvz . Data [ 3 ] = _rtB -> inuphyimvz . Data [ 3 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4 ) ; } { _rtB -> inuphyimvz . Data [ 3
] = _rtB -> inuphyimvz . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5
) ; } { _rtB -> inuphyimvz . Data [ 3 ] = _rtB -> inuphyimvz . Data [ 3 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6 ) ; } { _rtB -> inuphyimvz . Data [ 3
] = _rtB -> inuphyimvz . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7
) ; } { _rtB -> inuphyimvz . Data [ 2 ] = _rtB -> inuphyimvz . Data [ 2 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0 ) ; } { _rtB -> inuphyimvz . Data [ 2
] = _rtB -> inuphyimvz . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1
) ; } { _rtB -> inuphyimvz . Data [ 2 ] = _rtB -> inuphyimvz . Data [ 2 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) << 2 ) ; } { _rtB -> inuphyimvz . Data [
2 ] = _rtB -> inuphyimvz . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >>
11 ) << 3 ) ; } { _rtB -> inuphyimvz . Data [ 2 ] = _rtB -> inuphyimvz . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >> 12 ) << 4 ) ; } { _rtB -> inuphyimvz .
Data [ 2 ] = _rtB -> inuphyimvz . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >>
13 ) << 5 ) ; } { _rtB -> inuphyimvz . Data [ 2 ] = _rtB -> inuphyimvz . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >> 14 ) << 6 ) ; } { _rtB -> inuphyimvz .
Data [ 2 ] = _rtB -> inuphyimvz . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >>
15 ) << 7 ) ; } } } } } } { { real64_T outValue = 0 ; { real64_T result =
_rtB -> j11p4rlchf [ 38 ] ; if ( result > 5.0 ) { result = 5.0 ; } result =
result / 0.0001 ; outValue = result ; } { { uint16_T packedValue ; if (
outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ; }
else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ; }
else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> inuphyimvz .
Data [ 5 ] = _rtB -> inuphyimvz . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> inuphyimvz . Data [ 5 ] = _rtB -> inuphyimvz . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> inuphyimvz .
Data [ 5 ] = _rtB -> inuphyimvz . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> inuphyimvz . Data [ 5 ] = _rtB -> inuphyimvz . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> inuphyimvz .
Data [ 5 ] = _rtB -> inuphyimvz . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> inuphyimvz . Data [ 5 ] = _rtB -> inuphyimvz . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> inuphyimvz .
Data [ 5 ] = _rtB -> inuphyimvz . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> inuphyimvz . Data [ 5 ] = _rtB -> inuphyimvz . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> inuphyimvz .
Data [ 4 ] = _rtB -> inuphyimvz . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> inuphyimvz . Data [ 4 ] = _rtB -> inuphyimvz . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> inuphyimvz .
Data [ 4 ] = _rtB -> inuphyimvz . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> inuphyimvz . Data [ 4 ] = _rtB -> inuphyimvz . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> inuphyimvz .
Data [ 4 ] = _rtB -> inuphyimvz . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> inuphyimvz . Data [ 4 ] = _rtB -> inuphyimvz . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> inuphyimvz .
Data [ 4 ] = _rtB -> inuphyimvz . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> inuphyimvz . Data [ 4 ] = _rtB -> inuphyimvz . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> j11p4rlchf [ 39 ] ; if ( result >
5.0 ) { result = 5.0 ; } result = result / 0.0001 ; outValue = result ; } { {
uint16_T packedValue ; if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue
= ( uint16_T ) 65535 ; } else if ( outValue < ( real64_T ) ( 0 ) ) {
packedValue = ( uint16_T ) 0 ; } else { packedValue = ( uint16_T ) ( outValue
) ; } { { _rtB -> inuphyimvz . Data [ 7 ] = _rtB -> inuphyimvz . Data [ 7 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB -> inuphyimvz . Data [ 7
] = _rtB -> inuphyimvz . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1
) ; } { _rtB -> inuphyimvz . Data [ 7 ] = _rtB -> inuphyimvz . Data [ 7 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ; } { _rtB -> inuphyimvz . Data [ 7
] = _rtB -> inuphyimvz . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3
) ; } { _rtB -> inuphyimvz . Data [ 7 ] = _rtB -> inuphyimvz . Data [ 7 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4 ) ; } { _rtB -> inuphyimvz . Data [ 7
] = _rtB -> inuphyimvz . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5
) ; } { _rtB -> inuphyimvz . Data [ 7 ] = _rtB -> inuphyimvz . Data [ 7 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6 ) ; } { _rtB -> inuphyimvz . Data [ 7
] = _rtB -> inuphyimvz . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7
) ; } { _rtB -> inuphyimvz . Data [ 6 ] = _rtB -> inuphyimvz . Data [ 6 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0 ) ; } { _rtB -> inuphyimvz . Data [ 6
] = _rtB -> inuphyimvz . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1
) ; } { _rtB -> inuphyimvz . Data [ 6 ] = _rtB -> inuphyimvz . Data [ 6 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) << 2 ) ; } { _rtB -> inuphyimvz . Data [
6 ] = _rtB -> inuphyimvz . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >>
11 ) << 3 ) ; } { _rtB -> inuphyimvz . Data [ 6 ] = _rtB -> inuphyimvz . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >> 12 ) << 4 ) ; } { _rtB -> inuphyimvz .
Data [ 6 ] = _rtB -> inuphyimvz . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >>
13 ) << 5 ) ; } { _rtB -> inuphyimvz . Data [ 6 ] = _rtB -> inuphyimvz . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >> 14 ) << 6 ) ; } { _rtB -> inuphyimvz .
Data [ 6 ] = _rtB -> inuphyimvz . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >>
15 ) << 7 ) ; } } } } } } } sErr = GetErrorBuffer ( & _rtDW -> jxgaqjbb4v [
0U ] ) ; inputMsgRef = & _rtB -> inuphyimvz ; LibOutputs_CANTransmit ( &
_rtDW -> jxgaqjbb4v [ 0U ] , inputMsgRef , 1 ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( S , sErr ) ; ssSetStopRequested ( S , 1 ) ; }
ssCallAccelRunBlock ( S , 1 , 40 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> aec2cpbqa4
. ID = 18U ; _rtB -> aec2cpbqa4 . Length = 8U ; _rtB -> aec2cpbqa4 . Extended
= 0U ; _rtB -> aec2cpbqa4 . Remote = 0 ; _rtB -> aec2cpbqa4 . Data [ 0 ] = 0
; _rtB -> aec2cpbqa4 . Data [ 1 ] = 0 ; _rtB -> aec2cpbqa4 . Data [ 2 ] = 0 ;
_rtB -> aec2cpbqa4 . Data [ 3 ] = 0 ; _rtB -> aec2cpbqa4 . Data [ 4 ] = 0 ;
_rtB -> aec2cpbqa4 . Data [ 5 ] = 0 ; _rtB -> aec2cpbqa4 . Data [ 6 ] = 0 ;
_rtB -> aec2cpbqa4 . Data [ 7 ] = 0 ; { { { real64_T outValue = 0 ; {
real64_T result = _rtB -> n5lf1vghfl [ 0 ] ; result = ( result - - 20.0 ) /
0.001 ; outValue = result ; } { { uint16_T packedValue ; if ( outValue > (
real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ; } else if (
outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ; } else {
packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> aec2cpbqa4 . Data [ 1
] = _rtB -> aec2cpbqa4 . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0
) ; } { _rtB -> aec2cpbqa4 . Data [ 1 ] = _rtB -> aec2cpbqa4 . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> aec2cpbqa4 . Data [ 1
] = _rtB -> aec2cpbqa4 . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2
) ; } { _rtB -> aec2cpbqa4 . Data [ 1 ] = _rtB -> aec2cpbqa4 . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> aec2cpbqa4 . Data [ 1
] = _rtB -> aec2cpbqa4 . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4
) ; } { _rtB -> aec2cpbqa4 . Data [ 1 ] = _rtB -> aec2cpbqa4 . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> aec2cpbqa4 . Data [ 1
] = _rtB -> aec2cpbqa4 . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6
) ; } { _rtB -> aec2cpbqa4 . Data [ 1 ] = _rtB -> aec2cpbqa4 . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> aec2cpbqa4 . Data [ 0
] = _rtB -> aec2cpbqa4 . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0
) ; } { _rtB -> aec2cpbqa4 . Data [ 0 ] = _rtB -> aec2cpbqa4 . Data [ 0 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> aec2cpbqa4 . Data [ 0
] = _rtB -> aec2cpbqa4 . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) <<
2 ) ; } { _rtB -> aec2cpbqa4 . Data [ 0 ] = _rtB -> aec2cpbqa4 . Data [ 0 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> aec2cpbqa4 . Data [
0 ] = _rtB -> aec2cpbqa4 . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> aec2cpbqa4 . Data [ 0 ] = _rtB -> aec2cpbqa4 . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> aec2cpbqa4 .
Data [ 0 ] = _rtB -> aec2cpbqa4 . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> aec2cpbqa4 . Data [ 0 ] = _rtB -> aec2cpbqa4 . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 1 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> aec2cpbqa4 .
Data [ 3 ] = _rtB -> aec2cpbqa4 . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> aec2cpbqa4 . Data [ 3 ] = _rtB -> aec2cpbqa4 . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> aec2cpbqa4 .
Data [ 3 ] = _rtB -> aec2cpbqa4 . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> aec2cpbqa4 . Data [ 3 ] = _rtB -> aec2cpbqa4 . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> aec2cpbqa4 .
Data [ 3 ] = _rtB -> aec2cpbqa4 . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> aec2cpbqa4 . Data [ 3 ] = _rtB -> aec2cpbqa4 . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> aec2cpbqa4 .
Data [ 3 ] = _rtB -> aec2cpbqa4 . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> aec2cpbqa4 . Data [ 3 ] = _rtB -> aec2cpbqa4 . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> aec2cpbqa4 .
Data [ 2 ] = _rtB -> aec2cpbqa4 . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> aec2cpbqa4 . Data [ 2 ] = _rtB -> aec2cpbqa4 . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> aec2cpbqa4 .
Data [ 2 ] = _rtB -> aec2cpbqa4 . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> aec2cpbqa4 . Data [ 2 ] = _rtB -> aec2cpbqa4 . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> aec2cpbqa4 .
Data [ 2 ] = _rtB -> aec2cpbqa4 . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> aec2cpbqa4 . Data [ 2 ] = _rtB -> aec2cpbqa4 . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> aec2cpbqa4 .
Data [ 2 ] = _rtB -> aec2cpbqa4 . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> aec2cpbqa4 . Data [ 2 ] = _rtB -> aec2cpbqa4 . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 2 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> aec2cpbqa4 .
Data [ 5 ] = _rtB -> aec2cpbqa4 . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> aec2cpbqa4 . Data [ 5 ] = _rtB -> aec2cpbqa4 . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> aec2cpbqa4 .
Data [ 5 ] = _rtB -> aec2cpbqa4 . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> aec2cpbqa4 . Data [ 5 ] = _rtB -> aec2cpbqa4 . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> aec2cpbqa4 .
Data [ 5 ] = _rtB -> aec2cpbqa4 . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> aec2cpbqa4 . Data [ 5 ] = _rtB -> aec2cpbqa4 . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> aec2cpbqa4 .
Data [ 5 ] = _rtB -> aec2cpbqa4 . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> aec2cpbqa4 . Data [ 5 ] = _rtB -> aec2cpbqa4 . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> aec2cpbqa4 .
Data [ 4 ] = _rtB -> aec2cpbqa4 . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> aec2cpbqa4 . Data [ 4 ] = _rtB -> aec2cpbqa4 . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> aec2cpbqa4 .
Data [ 4 ] = _rtB -> aec2cpbqa4 . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> aec2cpbqa4 . Data [ 4 ] = _rtB -> aec2cpbqa4 . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> aec2cpbqa4 .
Data [ 4 ] = _rtB -> aec2cpbqa4 . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> aec2cpbqa4 . Data [ 4 ] = _rtB -> aec2cpbqa4 . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> aec2cpbqa4 .
Data [ 4 ] = _rtB -> aec2cpbqa4 . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> aec2cpbqa4 . Data [ 4 ] = _rtB -> aec2cpbqa4 . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 3 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> aec2cpbqa4 .
Data [ 7 ] = _rtB -> aec2cpbqa4 . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> aec2cpbqa4 . Data [ 7 ] = _rtB -> aec2cpbqa4 . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> aec2cpbqa4 .
Data [ 7 ] = _rtB -> aec2cpbqa4 . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> aec2cpbqa4 . Data [ 7 ] = _rtB -> aec2cpbqa4 . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> aec2cpbqa4 .
Data [ 7 ] = _rtB -> aec2cpbqa4 . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> aec2cpbqa4 . Data [ 7 ] = _rtB -> aec2cpbqa4 . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> aec2cpbqa4 .
Data [ 7 ] = _rtB -> aec2cpbqa4 . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> aec2cpbqa4 . Data [ 7 ] = _rtB -> aec2cpbqa4 . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> aec2cpbqa4 .
Data [ 6 ] = _rtB -> aec2cpbqa4 . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> aec2cpbqa4 . Data [ 6 ] = _rtB -> aec2cpbqa4 . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> aec2cpbqa4 .
Data [ 6 ] = _rtB -> aec2cpbqa4 . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> aec2cpbqa4 . Data [ 6 ] = _rtB -> aec2cpbqa4 . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> aec2cpbqa4 .
Data [ 6 ] = _rtB -> aec2cpbqa4 . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> aec2cpbqa4 . Data [ 6 ] = _rtB -> aec2cpbqa4 . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> aec2cpbqa4 .
Data [ 6 ] = _rtB -> aec2cpbqa4 . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> aec2cpbqa4 . Data [ 6 ] = _rtB -> aec2cpbqa4 . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } } sErr =
GetErrorBuffer ( & _rtDW -> m2h3bpnrwa [ 0U ] ) ; inputMsgRef = & _rtB ->
aec2cpbqa4 ; LibOutputs_CANTransmit ( & _rtDW -> m2h3bpnrwa [ 0U ] ,
inputMsgRef , 1 ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( S , sErr ) ;
ssSetStopRequested ( S , 1 ) ; } _rtB -> ehf4bo1b21 . ID = 19U ; _rtB ->
ehf4bo1b21 . Length = 8U ; _rtB -> ehf4bo1b21 . Extended = 0U ; _rtB ->
ehf4bo1b21 . Remote = 0 ; _rtB -> ehf4bo1b21 . Data [ 0 ] = 0 ; _rtB ->
ehf4bo1b21 . Data [ 1 ] = 0 ; _rtB -> ehf4bo1b21 . Data [ 2 ] = 0 ; _rtB ->
ehf4bo1b21 . Data [ 3 ] = 0 ; _rtB -> ehf4bo1b21 . Data [ 4 ] = 0 ; _rtB ->
ehf4bo1b21 . Data [ 5 ] = 0 ; _rtB -> ehf4bo1b21 . Data [ 6 ] = 0 ; _rtB ->
ehf4bo1b21 . Data [ 7 ] = 0 ; { { { real64_T outValue = 0 ; { real64_T result
= _rtB -> n5lf1vghfl [ 4 ] ; result = ( result - - 20.0 ) / 0.001 ; outValue
= result ; } { { uint16_T packedValue ; if ( outValue > ( real64_T ) ( 65535
) ) { packedValue = ( uint16_T ) 65535 ; } else if ( outValue < ( real64_T )
( 0 ) ) { packedValue = ( uint16_T ) 0 ; } else { packedValue = ( uint16_T )
( outValue ) ; } { { _rtB -> ehf4bo1b21 . Data [ 1 ] = _rtB -> ehf4bo1b21 .
Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & (
uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB ->
ehf4bo1b21 . Data [ 1 ] = _rtB -> ehf4bo1b21 . Data [ 1 ] | ( uint8_T ) ( (
uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 )
) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> ehf4bo1b21 . Data [ 1 ] = _rtB ->
ehf4bo1b21 . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) (
packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ;
} { _rtB -> ehf4bo1b21 . Data [ 1 ] = _rtB -> ehf4bo1b21 . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> ehf4bo1b21 . Data [ 1
] = _rtB -> ehf4bo1b21 . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4
) ; } { _rtB -> ehf4bo1b21 . Data [ 1 ] = _rtB -> ehf4bo1b21 . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> ehf4bo1b21 . Data [ 1
] = _rtB -> ehf4bo1b21 . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6
) ; } { _rtB -> ehf4bo1b21 . Data [ 1 ] = _rtB -> ehf4bo1b21 . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> ehf4bo1b21 . Data [ 0
] = _rtB -> ehf4bo1b21 . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0
) ; } { _rtB -> ehf4bo1b21 . Data [ 0 ] = _rtB -> ehf4bo1b21 . Data [ 0 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> ehf4bo1b21 . Data [ 0
] = _rtB -> ehf4bo1b21 . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) <<
2 ) ; } { _rtB -> ehf4bo1b21 . Data [ 0 ] = _rtB -> ehf4bo1b21 . Data [ 0 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> ehf4bo1b21 . Data [
0 ] = _rtB -> ehf4bo1b21 . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> ehf4bo1b21 . Data [ 0 ] = _rtB -> ehf4bo1b21 . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> ehf4bo1b21 .
Data [ 0 ] = _rtB -> ehf4bo1b21 . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> ehf4bo1b21 . Data [ 0 ] = _rtB -> ehf4bo1b21 . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 5 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> ehf4bo1b21 .
Data [ 3 ] = _rtB -> ehf4bo1b21 . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> ehf4bo1b21 . Data [ 3 ] = _rtB -> ehf4bo1b21 . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> ehf4bo1b21 .
Data [ 3 ] = _rtB -> ehf4bo1b21 . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> ehf4bo1b21 . Data [ 3 ] = _rtB -> ehf4bo1b21 . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> ehf4bo1b21 .
Data [ 3 ] = _rtB -> ehf4bo1b21 . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> ehf4bo1b21 . Data [ 3 ] = _rtB -> ehf4bo1b21 . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> ehf4bo1b21 .
Data [ 3 ] = _rtB -> ehf4bo1b21 . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> ehf4bo1b21 . Data [ 3 ] = _rtB -> ehf4bo1b21 . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> ehf4bo1b21 .
Data [ 2 ] = _rtB -> ehf4bo1b21 . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> ehf4bo1b21 . Data [ 2 ] = _rtB -> ehf4bo1b21 . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> ehf4bo1b21 .
Data [ 2 ] = _rtB -> ehf4bo1b21 . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> ehf4bo1b21 . Data [ 2 ] = _rtB -> ehf4bo1b21 . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> ehf4bo1b21 .
Data [ 2 ] = _rtB -> ehf4bo1b21 . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> ehf4bo1b21 . Data [ 2 ] = _rtB -> ehf4bo1b21 . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> ehf4bo1b21 .
Data [ 2 ] = _rtB -> ehf4bo1b21 . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> ehf4bo1b21 . Data [ 2 ] = _rtB -> ehf4bo1b21 . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 6 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> ehf4bo1b21 .
Data [ 5 ] = _rtB -> ehf4bo1b21 . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> ehf4bo1b21 . Data [ 5 ] = _rtB -> ehf4bo1b21 . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> ehf4bo1b21 .
Data [ 5 ] = _rtB -> ehf4bo1b21 . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> ehf4bo1b21 . Data [ 5 ] = _rtB -> ehf4bo1b21 . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> ehf4bo1b21 .
Data [ 5 ] = _rtB -> ehf4bo1b21 . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> ehf4bo1b21 . Data [ 5 ] = _rtB -> ehf4bo1b21 . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> ehf4bo1b21 .
Data [ 5 ] = _rtB -> ehf4bo1b21 . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> ehf4bo1b21 . Data [ 5 ] = _rtB -> ehf4bo1b21 . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> ehf4bo1b21 .
Data [ 4 ] = _rtB -> ehf4bo1b21 . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> ehf4bo1b21 . Data [ 4 ] = _rtB -> ehf4bo1b21 . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> ehf4bo1b21 .
Data [ 4 ] = _rtB -> ehf4bo1b21 . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> ehf4bo1b21 . Data [ 4 ] = _rtB -> ehf4bo1b21 . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> ehf4bo1b21 .
Data [ 4 ] = _rtB -> ehf4bo1b21 . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> ehf4bo1b21 . Data [ 4 ] = _rtB -> ehf4bo1b21 . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> ehf4bo1b21 .
Data [ 4 ] = _rtB -> ehf4bo1b21 . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> ehf4bo1b21 . Data [ 4 ] = _rtB -> ehf4bo1b21 . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 7 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> ehf4bo1b21 .
Data [ 7 ] = _rtB -> ehf4bo1b21 . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> ehf4bo1b21 . Data [ 7 ] = _rtB -> ehf4bo1b21 . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> ehf4bo1b21 .
Data [ 7 ] = _rtB -> ehf4bo1b21 . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> ehf4bo1b21 . Data [ 7 ] = _rtB -> ehf4bo1b21 . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> ehf4bo1b21 .
Data [ 7 ] = _rtB -> ehf4bo1b21 . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> ehf4bo1b21 . Data [ 7 ] = _rtB -> ehf4bo1b21 . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> ehf4bo1b21 .
Data [ 7 ] = _rtB -> ehf4bo1b21 . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> ehf4bo1b21 . Data [ 7 ] = _rtB -> ehf4bo1b21 . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> ehf4bo1b21 .
Data [ 6 ] = _rtB -> ehf4bo1b21 . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> ehf4bo1b21 . Data [ 6 ] = _rtB -> ehf4bo1b21 . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> ehf4bo1b21 .
Data [ 6 ] = _rtB -> ehf4bo1b21 . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> ehf4bo1b21 . Data [ 6 ] = _rtB -> ehf4bo1b21 . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> ehf4bo1b21 .
Data [ 6 ] = _rtB -> ehf4bo1b21 . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> ehf4bo1b21 . Data [ 6 ] = _rtB -> ehf4bo1b21 . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> ehf4bo1b21 .
Data [ 6 ] = _rtB -> ehf4bo1b21 . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> ehf4bo1b21 . Data [ 6 ] = _rtB -> ehf4bo1b21 . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } } sErr =
GetErrorBuffer ( & _rtDW -> ijthgmpvwe [ 0U ] ) ; inputMsgRef = & _rtB ->
ehf4bo1b21 ; LibOutputs_CANTransmit ( & _rtDW -> ijthgmpvwe [ 0U ] ,
inputMsgRef , 1 ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( S , sErr ) ;
ssSetStopRequested ( S , 1 ) ; } _rtB -> elhrspa4yw . ID = 20U ; _rtB ->
elhrspa4yw . Length = 8U ; _rtB -> elhrspa4yw . Extended = 0U ; _rtB ->
elhrspa4yw . Remote = 0 ; _rtB -> elhrspa4yw . Data [ 0 ] = 0 ; _rtB ->
elhrspa4yw . Data [ 1 ] = 0 ; _rtB -> elhrspa4yw . Data [ 2 ] = 0 ; _rtB ->
elhrspa4yw . Data [ 3 ] = 0 ; _rtB -> elhrspa4yw . Data [ 4 ] = 0 ; _rtB ->
elhrspa4yw . Data [ 5 ] = 0 ; _rtB -> elhrspa4yw . Data [ 6 ] = 0 ; _rtB ->
elhrspa4yw . Data [ 7 ] = 0 ; { { { real64_T outValue = 0 ; { real64_T result
= _rtB -> n5lf1vghfl [ 9 ] ; result = ( result - - 20.0 ) / 0.001 ; outValue
= result ; } { { uint16_T packedValue ; if ( outValue > ( real64_T ) ( 65535
) ) { packedValue = ( uint16_T ) 65535 ; } else if ( outValue < ( real64_T )
( 0 ) ) { packedValue = ( uint16_T ) 0 ; } else { packedValue = ( uint16_T )
( outValue ) ; } { { _rtB -> elhrspa4yw . Data [ 3 ] = _rtB -> elhrspa4yw .
Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & (
uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB ->
elhrspa4yw . Data [ 3 ] = _rtB -> elhrspa4yw . Data [ 3 ] | ( uint8_T ) ( (
uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 )
) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> elhrspa4yw . Data [ 3 ] = _rtB ->
elhrspa4yw . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) (
packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ;
} { _rtB -> elhrspa4yw . Data [ 3 ] = _rtB -> elhrspa4yw . Data [ 3 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> elhrspa4yw . Data [ 3
] = _rtB -> elhrspa4yw . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4
) ; } { _rtB -> elhrspa4yw . Data [ 3 ] = _rtB -> elhrspa4yw . Data [ 3 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> elhrspa4yw . Data [ 3
] = _rtB -> elhrspa4yw . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6
) ; } { _rtB -> elhrspa4yw . Data [ 3 ] = _rtB -> elhrspa4yw . Data [ 3 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> elhrspa4yw . Data [ 2
] = _rtB -> elhrspa4yw . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0
) ; } { _rtB -> elhrspa4yw . Data [ 2 ] = _rtB -> elhrspa4yw . Data [ 2 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> elhrspa4yw . Data [ 2
] = _rtB -> elhrspa4yw . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) <<
2 ) ; } { _rtB -> elhrspa4yw . Data [ 2 ] = _rtB -> elhrspa4yw . Data [ 2 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> elhrspa4yw . Data [
2 ] = _rtB -> elhrspa4yw . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> elhrspa4yw . Data [ 2 ] = _rtB -> elhrspa4yw . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> elhrspa4yw .
Data [ 2 ] = _rtB -> elhrspa4yw . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> elhrspa4yw . Data [ 2 ] = _rtB -> elhrspa4yw . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 10 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> elhrspa4yw .
Data [ 5 ] = _rtB -> elhrspa4yw . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> elhrspa4yw . Data [ 5 ] = _rtB -> elhrspa4yw . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> elhrspa4yw .
Data [ 5 ] = _rtB -> elhrspa4yw . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> elhrspa4yw . Data [ 5 ] = _rtB -> elhrspa4yw . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> elhrspa4yw .
Data [ 5 ] = _rtB -> elhrspa4yw . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> elhrspa4yw . Data [ 5 ] = _rtB -> elhrspa4yw . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> elhrspa4yw .
Data [ 5 ] = _rtB -> elhrspa4yw . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> elhrspa4yw . Data [ 5 ] = _rtB -> elhrspa4yw . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> elhrspa4yw .
Data [ 4 ] = _rtB -> elhrspa4yw . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> elhrspa4yw . Data [ 4 ] = _rtB -> elhrspa4yw . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> elhrspa4yw .
Data [ 4 ] = _rtB -> elhrspa4yw . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> elhrspa4yw . Data [ 4 ] = _rtB -> elhrspa4yw . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> elhrspa4yw .
Data [ 4 ] = _rtB -> elhrspa4yw . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> elhrspa4yw . Data [ 4 ] = _rtB -> elhrspa4yw . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> elhrspa4yw .
Data [ 4 ] = _rtB -> elhrspa4yw . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> elhrspa4yw . Data [ 4 ] = _rtB -> elhrspa4yw . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 11 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> elhrspa4yw .
Data [ 7 ] = _rtB -> elhrspa4yw . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> elhrspa4yw . Data [ 7 ] = _rtB -> elhrspa4yw . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> elhrspa4yw .
Data [ 7 ] = _rtB -> elhrspa4yw . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> elhrspa4yw . Data [ 7 ] = _rtB -> elhrspa4yw . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> elhrspa4yw .
Data [ 7 ] = _rtB -> elhrspa4yw . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> elhrspa4yw . Data [ 7 ] = _rtB -> elhrspa4yw . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> elhrspa4yw .
Data [ 7 ] = _rtB -> elhrspa4yw . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> elhrspa4yw . Data [ 7 ] = _rtB -> elhrspa4yw . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> elhrspa4yw .
Data [ 6 ] = _rtB -> elhrspa4yw . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> elhrspa4yw . Data [ 6 ] = _rtB -> elhrspa4yw . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> elhrspa4yw .
Data [ 6 ] = _rtB -> elhrspa4yw . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> elhrspa4yw . Data [ 6 ] = _rtB -> elhrspa4yw . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> elhrspa4yw .
Data [ 6 ] = _rtB -> elhrspa4yw . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> elhrspa4yw . Data [ 6 ] = _rtB -> elhrspa4yw . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> elhrspa4yw .
Data [ 6 ] = _rtB -> elhrspa4yw . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> elhrspa4yw . Data [ 6 ] = _rtB -> elhrspa4yw . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 8 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> elhrspa4yw .
Data [ 1 ] = _rtB -> elhrspa4yw . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> elhrspa4yw . Data [ 1 ] = _rtB -> elhrspa4yw . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> elhrspa4yw .
Data [ 1 ] = _rtB -> elhrspa4yw . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> elhrspa4yw . Data [ 1 ] = _rtB -> elhrspa4yw . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> elhrspa4yw .
Data [ 1 ] = _rtB -> elhrspa4yw . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> elhrspa4yw . Data [ 1 ] = _rtB -> elhrspa4yw . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> elhrspa4yw .
Data [ 1 ] = _rtB -> elhrspa4yw . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> elhrspa4yw . Data [ 1 ] = _rtB -> elhrspa4yw . Data
[ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> elhrspa4yw .
Data [ 0 ] = _rtB -> elhrspa4yw . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> elhrspa4yw . Data [ 0 ] = _rtB -> elhrspa4yw . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> elhrspa4yw .
Data [ 0 ] = _rtB -> elhrspa4yw . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> elhrspa4yw . Data [ 0 ] = _rtB -> elhrspa4yw . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> elhrspa4yw .
Data [ 0 ] = _rtB -> elhrspa4yw . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> elhrspa4yw . Data [ 0 ] = _rtB -> elhrspa4yw . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> elhrspa4yw .
Data [ 0 ] = _rtB -> elhrspa4yw . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> elhrspa4yw . Data [ 0 ] = _rtB -> elhrspa4yw . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } } sErr =
GetErrorBuffer ( & _rtDW -> jynnve244q [ 0U ] ) ; inputMsgRef = & _rtB ->
elhrspa4yw ; LibOutputs_CANTransmit ( & _rtDW -> jynnve244q [ 0U ] ,
inputMsgRef , 1 ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( S , sErr ) ;
ssSetStopRequested ( S , 1 ) ; } _rtB -> i1rnmp4kbb . ID = 21U ; _rtB ->
i1rnmp4kbb . Length = 8U ; _rtB -> i1rnmp4kbb . Extended = 0U ; _rtB ->
i1rnmp4kbb . Remote = 0 ; _rtB -> i1rnmp4kbb . Data [ 0 ] = 0 ; _rtB ->
i1rnmp4kbb . Data [ 1 ] = 0 ; _rtB -> i1rnmp4kbb . Data [ 2 ] = 0 ; _rtB ->
i1rnmp4kbb . Data [ 3 ] = 0 ; _rtB -> i1rnmp4kbb . Data [ 4 ] = 0 ; _rtB ->
i1rnmp4kbb . Data [ 5 ] = 0 ; _rtB -> i1rnmp4kbb . Data [ 6 ] = 0 ; _rtB ->
i1rnmp4kbb . Data [ 7 ] = 0 ; { { { real64_T outValue = 0 ; { real64_T result
= _rtB -> n5lf1vghfl [ 12 ] ; result = ( result - - 20.0 ) / 0.001 ; outValue
= result ; } { { uint16_T packedValue ; if ( outValue > ( real64_T ) ( 65535
) ) { packedValue = ( uint16_T ) 65535 ; } else if ( outValue < ( real64_T )
( 0 ) ) { packedValue = ( uint16_T ) 0 ; } else { packedValue = ( uint16_T )
( outValue ) ; } { { _rtB -> i1rnmp4kbb . Data [ 1 ] = _rtB -> i1rnmp4kbb .
Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & (
uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB ->
i1rnmp4kbb . Data [ 1 ] = _rtB -> i1rnmp4kbb . Data [ 1 ] | ( uint8_T ) ( (
uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 )
) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> i1rnmp4kbb . Data [ 1 ] = _rtB ->
i1rnmp4kbb . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) (
packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ;
} { _rtB -> i1rnmp4kbb . Data [ 1 ] = _rtB -> i1rnmp4kbb . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> i1rnmp4kbb . Data [ 1
] = _rtB -> i1rnmp4kbb . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4
) ; } { _rtB -> i1rnmp4kbb . Data [ 1 ] = _rtB -> i1rnmp4kbb . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> i1rnmp4kbb . Data [ 1
] = _rtB -> i1rnmp4kbb . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6
) ; } { _rtB -> i1rnmp4kbb . Data [ 1 ] = _rtB -> i1rnmp4kbb . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> i1rnmp4kbb . Data [ 0
] = _rtB -> i1rnmp4kbb . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0
) ; } { _rtB -> i1rnmp4kbb . Data [ 0 ] = _rtB -> i1rnmp4kbb . Data [ 0 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> i1rnmp4kbb . Data [ 0
] = _rtB -> i1rnmp4kbb . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) <<
2 ) ; } { _rtB -> i1rnmp4kbb . Data [ 0 ] = _rtB -> i1rnmp4kbb . Data [ 0 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> i1rnmp4kbb . Data [
0 ] = _rtB -> i1rnmp4kbb . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> i1rnmp4kbb . Data [ 0 ] = _rtB -> i1rnmp4kbb . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> i1rnmp4kbb .
Data [ 0 ] = _rtB -> i1rnmp4kbb . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> i1rnmp4kbb . Data [ 0 ] = _rtB -> i1rnmp4kbb . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 13 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> i1rnmp4kbb .
Data [ 3 ] = _rtB -> i1rnmp4kbb . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> i1rnmp4kbb . Data [ 3 ] = _rtB -> i1rnmp4kbb . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> i1rnmp4kbb .
Data [ 3 ] = _rtB -> i1rnmp4kbb . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> i1rnmp4kbb . Data [ 3 ] = _rtB -> i1rnmp4kbb . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> i1rnmp4kbb .
Data [ 3 ] = _rtB -> i1rnmp4kbb . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> i1rnmp4kbb . Data [ 3 ] = _rtB -> i1rnmp4kbb . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> i1rnmp4kbb .
Data [ 3 ] = _rtB -> i1rnmp4kbb . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> i1rnmp4kbb . Data [ 3 ] = _rtB -> i1rnmp4kbb . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> i1rnmp4kbb .
Data [ 2 ] = _rtB -> i1rnmp4kbb . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> i1rnmp4kbb . Data [ 2 ] = _rtB -> i1rnmp4kbb . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> i1rnmp4kbb .
Data [ 2 ] = _rtB -> i1rnmp4kbb . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> i1rnmp4kbb . Data [ 2 ] = _rtB -> i1rnmp4kbb . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> i1rnmp4kbb .
Data [ 2 ] = _rtB -> i1rnmp4kbb . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> i1rnmp4kbb . Data [ 2 ] = _rtB -> i1rnmp4kbb . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> i1rnmp4kbb .
Data [ 2 ] = _rtB -> i1rnmp4kbb . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> i1rnmp4kbb . Data [ 2 ] = _rtB -> i1rnmp4kbb . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 14 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> i1rnmp4kbb .
Data [ 5 ] = _rtB -> i1rnmp4kbb . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> i1rnmp4kbb . Data [ 5 ] = _rtB -> i1rnmp4kbb . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> i1rnmp4kbb .
Data [ 5 ] = _rtB -> i1rnmp4kbb . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> i1rnmp4kbb . Data [ 5 ] = _rtB -> i1rnmp4kbb . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> i1rnmp4kbb .
Data [ 5 ] = _rtB -> i1rnmp4kbb . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> i1rnmp4kbb . Data [ 5 ] = _rtB -> i1rnmp4kbb . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> i1rnmp4kbb .
Data [ 5 ] = _rtB -> i1rnmp4kbb . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> i1rnmp4kbb . Data [ 5 ] = _rtB -> i1rnmp4kbb . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> i1rnmp4kbb .
Data [ 4 ] = _rtB -> i1rnmp4kbb . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> i1rnmp4kbb . Data [ 4 ] = _rtB -> i1rnmp4kbb . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> i1rnmp4kbb .
Data [ 4 ] = _rtB -> i1rnmp4kbb . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> i1rnmp4kbb . Data [ 4 ] = _rtB -> i1rnmp4kbb . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> i1rnmp4kbb .
Data [ 4 ] = _rtB -> i1rnmp4kbb . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> i1rnmp4kbb . Data [ 4 ] = _rtB -> i1rnmp4kbb . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> i1rnmp4kbb .
Data [ 4 ] = _rtB -> i1rnmp4kbb . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> i1rnmp4kbb . Data [ 4 ] = _rtB -> i1rnmp4kbb . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 15 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> i1rnmp4kbb .
Data [ 7 ] = _rtB -> i1rnmp4kbb . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> i1rnmp4kbb . Data [ 7 ] = _rtB -> i1rnmp4kbb . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> i1rnmp4kbb .
Data [ 7 ] = _rtB -> i1rnmp4kbb . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> i1rnmp4kbb . Data [ 7 ] = _rtB -> i1rnmp4kbb . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> i1rnmp4kbb .
Data [ 7 ] = _rtB -> i1rnmp4kbb . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> i1rnmp4kbb . Data [ 7 ] = _rtB -> i1rnmp4kbb . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> i1rnmp4kbb .
Data [ 7 ] = _rtB -> i1rnmp4kbb . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> i1rnmp4kbb . Data [ 7 ] = _rtB -> i1rnmp4kbb . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> i1rnmp4kbb .
Data [ 6 ] = _rtB -> i1rnmp4kbb . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> i1rnmp4kbb . Data [ 6 ] = _rtB -> i1rnmp4kbb . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> i1rnmp4kbb .
Data [ 6 ] = _rtB -> i1rnmp4kbb . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> i1rnmp4kbb . Data [ 6 ] = _rtB -> i1rnmp4kbb . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> i1rnmp4kbb .
Data [ 6 ] = _rtB -> i1rnmp4kbb . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> i1rnmp4kbb . Data [ 6 ] = _rtB -> i1rnmp4kbb . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> i1rnmp4kbb .
Data [ 6 ] = _rtB -> i1rnmp4kbb . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> i1rnmp4kbb . Data [ 6 ] = _rtB -> i1rnmp4kbb . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } } sErr =
GetErrorBuffer ( & _rtDW -> jp3irkydhs [ 0U ] ) ; inputMsgRef = & _rtB ->
i1rnmp4kbb ; LibOutputs_CANTransmit ( & _rtDW -> jp3irkydhs [ 0U ] ,
inputMsgRef , 1 ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( S , sErr ) ;
ssSetStopRequested ( S , 1 ) ; } _rtB -> ojaf2sfqbm . ID = 22U ; _rtB ->
ojaf2sfqbm . Length = 8U ; _rtB -> ojaf2sfqbm . Extended = 0U ; _rtB ->
ojaf2sfqbm . Remote = 0 ; _rtB -> ojaf2sfqbm . Data [ 0 ] = 0 ; _rtB ->
ojaf2sfqbm . Data [ 1 ] = 0 ; _rtB -> ojaf2sfqbm . Data [ 2 ] = 0 ; _rtB ->
ojaf2sfqbm . Data [ 3 ] = 0 ; _rtB -> ojaf2sfqbm . Data [ 4 ] = 0 ; _rtB ->
ojaf2sfqbm . Data [ 5 ] = 0 ; _rtB -> ojaf2sfqbm . Data [ 6 ] = 0 ; _rtB ->
ojaf2sfqbm . Data [ 7 ] = 0 ; { { { real64_T outValue = 0 ; { real64_T result
= _rtB -> n5lf1vghfl [ 16 ] ; result = ( result - - 20.0 ) / 0.001 ; outValue
= result ; } { { uint16_T packedValue ; if ( outValue > ( real64_T ) ( 65535
) ) { packedValue = ( uint16_T ) 65535 ; } else if ( outValue < ( real64_T )
( 0 ) ) { packedValue = ( uint16_T ) 0 ; } else { packedValue = ( uint16_T )
( outValue ) ; } { { _rtB -> ojaf2sfqbm . Data [ 1 ] = _rtB -> ojaf2sfqbm .
Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & (
uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB ->
ojaf2sfqbm . Data [ 1 ] = _rtB -> ojaf2sfqbm . Data [ 1 ] | ( uint8_T ) ( (
uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 )
) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> ojaf2sfqbm . Data [ 1 ] = _rtB ->
ojaf2sfqbm . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) (
packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ;
} { _rtB -> ojaf2sfqbm . Data [ 1 ] = _rtB -> ojaf2sfqbm . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> ojaf2sfqbm . Data [ 1
] = _rtB -> ojaf2sfqbm . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4
) ; } { _rtB -> ojaf2sfqbm . Data [ 1 ] = _rtB -> ojaf2sfqbm . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> ojaf2sfqbm . Data [ 1
] = _rtB -> ojaf2sfqbm . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6
) ; } { _rtB -> ojaf2sfqbm . Data [ 1 ] = _rtB -> ojaf2sfqbm . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> ojaf2sfqbm . Data [ 0
] = _rtB -> ojaf2sfqbm . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0
) ; } { _rtB -> ojaf2sfqbm . Data [ 0 ] = _rtB -> ojaf2sfqbm . Data [ 0 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> ojaf2sfqbm . Data [ 0
] = _rtB -> ojaf2sfqbm . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) <<
2 ) ; } { _rtB -> ojaf2sfqbm . Data [ 0 ] = _rtB -> ojaf2sfqbm . Data [ 0 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> ojaf2sfqbm . Data [
0 ] = _rtB -> ojaf2sfqbm . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> ojaf2sfqbm . Data [ 0 ] = _rtB -> ojaf2sfqbm . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> ojaf2sfqbm .
Data [ 0 ] = _rtB -> ojaf2sfqbm . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> ojaf2sfqbm . Data [ 0 ] = _rtB -> ojaf2sfqbm . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 17 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> ojaf2sfqbm .
Data [ 3 ] = _rtB -> ojaf2sfqbm . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> ojaf2sfqbm . Data [ 3 ] = _rtB -> ojaf2sfqbm . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> ojaf2sfqbm .
Data [ 3 ] = _rtB -> ojaf2sfqbm . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> ojaf2sfqbm . Data [ 3 ] = _rtB -> ojaf2sfqbm . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> ojaf2sfqbm .
Data [ 3 ] = _rtB -> ojaf2sfqbm . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> ojaf2sfqbm . Data [ 3 ] = _rtB -> ojaf2sfqbm . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> ojaf2sfqbm .
Data [ 3 ] = _rtB -> ojaf2sfqbm . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> ojaf2sfqbm . Data [ 3 ] = _rtB -> ojaf2sfqbm . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> ojaf2sfqbm .
Data [ 2 ] = _rtB -> ojaf2sfqbm . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> ojaf2sfqbm . Data [ 2 ] = _rtB -> ojaf2sfqbm . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> ojaf2sfqbm .
Data [ 2 ] = _rtB -> ojaf2sfqbm . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> ojaf2sfqbm . Data [ 2 ] = _rtB -> ojaf2sfqbm . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> ojaf2sfqbm .
Data [ 2 ] = _rtB -> ojaf2sfqbm . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> ojaf2sfqbm . Data [ 2 ] = _rtB -> ojaf2sfqbm . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> ojaf2sfqbm .
Data [ 2 ] = _rtB -> ojaf2sfqbm . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> ojaf2sfqbm . Data [ 2 ] = _rtB -> ojaf2sfqbm . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 18 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> ojaf2sfqbm .
Data [ 5 ] = _rtB -> ojaf2sfqbm . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> ojaf2sfqbm . Data [ 5 ] = _rtB -> ojaf2sfqbm . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> ojaf2sfqbm .
Data [ 5 ] = _rtB -> ojaf2sfqbm . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> ojaf2sfqbm . Data [ 5 ] = _rtB -> ojaf2sfqbm . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> ojaf2sfqbm .
Data [ 5 ] = _rtB -> ojaf2sfqbm . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> ojaf2sfqbm . Data [ 5 ] = _rtB -> ojaf2sfqbm . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> ojaf2sfqbm .
Data [ 5 ] = _rtB -> ojaf2sfqbm . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> ojaf2sfqbm . Data [ 5 ] = _rtB -> ojaf2sfqbm . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> ojaf2sfqbm .
Data [ 4 ] = _rtB -> ojaf2sfqbm . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> ojaf2sfqbm . Data [ 4 ] = _rtB -> ojaf2sfqbm . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> ojaf2sfqbm .
Data [ 4 ] = _rtB -> ojaf2sfqbm . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> ojaf2sfqbm . Data [ 4 ] = _rtB -> ojaf2sfqbm . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> ojaf2sfqbm .
Data [ 4 ] = _rtB -> ojaf2sfqbm . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> ojaf2sfqbm . Data [ 4 ] = _rtB -> ojaf2sfqbm . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> ojaf2sfqbm .
Data [ 4 ] = _rtB -> ojaf2sfqbm . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> ojaf2sfqbm . Data [ 4 ] = _rtB -> ojaf2sfqbm . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 19 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> ojaf2sfqbm .
Data [ 7 ] = _rtB -> ojaf2sfqbm . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> ojaf2sfqbm . Data [ 7 ] = _rtB -> ojaf2sfqbm . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> ojaf2sfqbm .
Data [ 7 ] = _rtB -> ojaf2sfqbm . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> ojaf2sfqbm . Data [ 7 ] = _rtB -> ojaf2sfqbm . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> ojaf2sfqbm .
Data [ 7 ] = _rtB -> ojaf2sfqbm . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> ojaf2sfqbm . Data [ 7 ] = _rtB -> ojaf2sfqbm . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> ojaf2sfqbm .
Data [ 7 ] = _rtB -> ojaf2sfqbm . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> ojaf2sfqbm . Data [ 7 ] = _rtB -> ojaf2sfqbm . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> ojaf2sfqbm .
Data [ 6 ] = _rtB -> ojaf2sfqbm . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> ojaf2sfqbm . Data [ 6 ] = _rtB -> ojaf2sfqbm . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> ojaf2sfqbm .
Data [ 6 ] = _rtB -> ojaf2sfqbm . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> ojaf2sfqbm . Data [ 6 ] = _rtB -> ojaf2sfqbm . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> ojaf2sfqbm .
Data [ 6 ] = _rtB -> ojaf2sfqbm . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> ojaf2sfqbm . Data [ 6 ] = _rtB -> ojaf2sfqbm . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> ojaf2sfqbm .
Data [ 6 ] = _rtB -> ojaf2sfqbm . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> ojaf2sfqbm . Data [ 6 ] = _rtB -> ojaf2sfqbm . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } } sErr =
GetErrorBuffer ( & _rtDW -> b1hbw1by5b [ 0U ] ) ; inputMsgRef = & _rtB ->
ojaf2sfqbm ; LibOutputs_CANTransmit ( & _rtDW -> b1hbw1by5b [ 0U ] ,
inputMsgRef , 1 ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( S , sErr ) ;
ssSetStopRequested ( S , 1 ) ; } _rtB -> gpruhtvght . ID = 23U ; _rtB ->
gpruhtvght . Length = 8U ; _rtB -> gpruhtvght . Extended = 0U ; _rtB ->
gpruhtvght . Remote = 0 ; _rtB -> gpruhtvght . Data [ 0 ] = 0 ; _rtB ->
gpruhtvght . Data [ 1 ] = 0 ; _rtB -> gpruhtvght . Data [ 2 ] = 0 ; _rtB ->
gpruhtvght . Data [ 3 ] = 0 ; _rtB -> gpruhtvght . Data [ 4 ] = 0 ; _rtB ->
gpruhtvght . Data [ 5 ] = 0 ; _rtB -> gpruhtvght . Data [ 6 ] = 0 ; _rtB ->
gpruhtvght . Data [ 7 ] = 0 ; { { { real64_T outValue = 0 ; { real64_T result
= _rtB -> n5lf1vghfl [ 20 ] ; result = ( result - - 20.0 ) / 0.001 ; outValue
= result ; } { { uint16_T packedValue ; if ( outValue > ( real64_T ) ( 65535
) ) { packedValue = ( uint16_T ) 65535 ; } else if ( outValue < ( real64_T )
( 0 ) ) { packedValue = ( uint16_T ) 0 ; } else { packedValue = ( uint16_T )
( outValue ) ; } { { _rtB -> gpruhtvght . Data [ 1 ] = _rtB -> gpruhtvght .
Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & (
uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB ->
gpruhtvght . Data [ 1 ] = _rtB -> gpruhtvght . Data [ 1 ] | ( uint8_T ) ( (
uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 )
) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> gpruhtvght . Data [ 1 ] = _rtB ->
gpruhtvght . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) (
packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ;
} { _rtB -> gpruhtvght . Data [ 1 ] = _rtB -> gpruhtvght . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> gpruhtvght . Data [ 1
] = _rtB -> gpruhtvght . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4
) ; } { _rtB -> gpruhtvght . Data [ 1 ] = _rtB -> gpruhtvght . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> gpruhtvght . Data [ 1
] = _rtB -> gpruhtvght . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6
) ; } { _rtB -> gpruhtvght . Data [ 1 ] = _rtB -> gpruhtvght . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> gpruhtvght . Data [ 0
] = _rtB -> gpruhtvght . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0
) ; } { _rtB -> gpruhtvght . Data [ 0 ] = _rtB -> gpruhtvght . Data [ 0 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> gpruhtvght . Data [ 0
] = _rtB -> gpruhtvght . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) <<
2 ) ; } { _rtB -> gpruhtvght . Data [ 0 ] = _rtB -> gpruhtvght . Data [ 0 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> gpruhtvght . Data [
0 ] = _rtB -> gpruhtvght . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> gpruhtvght . Data [ 0 ] = _rtB -> gpruhtvght . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> gpruhtvght .
Data [ 0 ] = _rtB -> gpruhtvght . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> gpruhtvght . Data [ 0 ] = _rtB -> gpruhtvght . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 21 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> gpruhtvght .
Data [ 3 ] = _rtB -> gpruhtvght . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> gpruhtvght . Data [ 3 ] = _rtB -> gpruhtvght . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> gpruhtvght .
Data [ 3 ] = _rtB -> gpruhtvght . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> gpruhtvght . Data [ 3 ] = _rtB -> gpruhtvght . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> gpruhtvght .
Data [ 3 ] = _rtB -> gpruhtvght . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> gpruhtvght . Data [ 3 ] = _rtB -> gpruhtvght . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> gpruhtvght .
Data [ 3 ] = _rtB -> gpruhtvght . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> gpruhtvght . Data [ 3 ] = _rtB -> gpruhtvght . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> gpruhtvght .
Data [ 2 ] = _rtB -> gpruhtvght . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> gpruhtvght . Data [ 2 ] = _rtB -> gpruhtvght . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> gpruhtvght .
Data [ 2 ] = _rtB -> gpruhtvght . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> gpruhtvght . Data [ 2 ] = _rtB -> gpruhtvght . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> gpruhtvght .
Data [ 2 ] = _rtB -> gpruhtvght . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> gpruhtvght . Data [ 2 ] = _rtB -> gpruhtvght . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> gpruhtvght .
Data [ 2 ] = _rtB -> gpruhtvght . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> gpruhtvght . Data [ 2 ] = _rtB -> gpruhtvght . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 22 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> gpruhtvght .
Data [ 5 ] = _rtB -> gpruhtvght . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> gpruhtvght . Data [ 5 ] = _rtB -> gpruhtvght . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> gpruhtvght .
Data [ 5 ] = _rtB -> gpruhtvght . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> gpruhtvght . Data [ 5 ] = _rtB -> gpruhtvght . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> gpruhtvght .
Data [ 5 ] = _rtB -> gpruhtvght . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> gpruhtvght . Data [ 5 ] = _rtB -> gpruhtvght . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> gpruhtvght .
Data [ 5 ] = _rtB -> gpruhtvght . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> gpruhtvght . Data [ 5 ] = _rtB -> gpruhtvght . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> gpruhtvght .
Data [ 4 ] = _rtB -> gpruhtvght . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> gpruhtvght . Data [ 4 ] = _rtB -> gpruhtvght . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> gpruhtvght .
Data [ 4 ] = _rtB -> gpruhtvght . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> gpruhtvght . Data [ 4 ] = _rtB -> gpruhtvght . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> gpruhtvght .
Data [ 4 ] = _rtB -> gpruhtvght . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> gpruhtvght . Data [ 4 ] = _rtB -> gpruhtvght . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> gpruhtvght .
Data [ 4 ] = _rtB -> gpruhtvght . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> gpruhtvght . Data [ 4 ] = _rtB -> gpruhtvght . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 23 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> gpruhtvght .
Data [ 7 ] = _rtB -> gpruhtvght . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> gpruhtvght . Data [ 7 ] = _rtB -> gpruhtvght . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> gpruhtvght .
Data [ 7 ] = _rtB -> gpruhtvght . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> gpruhtvght . Data [ 7 ] = _rtB -> gpruhtvght . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> gpruhtvght .
Data [ 7 ] = _rtB -> gpruhtvght . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> gpruhtvght . Data [ 7 ] = _rtB -> gpruhtvght . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> gpruhtvght .
Data [ 7 ] = _rtB -> gpruhtvght . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> gpruhtvght . Data [ 7 ] = _rtB -> gpruhtvght . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> gpruhtvght .
Data [ 6 ] = _rtB -> gpruhtvght . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> gpruhtvght . Data [ 6 ] = _rtB -> gpruhtvght . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> gpruhtvght .
Data [ 6 ] = _rtB -> gpruhtvght . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> gpruhtvght . Data [ 6 ] = _rtB -> gpruhtvght . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> gpruhtvght .
Data [ 6 ] = _rtB -> gpruhtvght . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> gpruhtvght . Data [ 6 ] = _rtB -> gpruhtvght . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> gpruhtvght .
Data [ 6 ] = _rtB -> gpruhtvght . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> gpruhtvght . Data [ 6 ] = _rtB -> gpruhtvght . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } } sErr =
GetErrorBuffer ( & _rtDW -> mu2422td4g [ 0U ] ) ; inputMsgRef = & _rtB ->
gpruhtvght ; LibOutputs_CANTransmit ( & _rtDW -> mu2422td4g [ 0U ] ,
inputMsgRef , 1 ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( S , sErr ) ;
ssSetStopRequested ( S , 1 ) ; } _rtB -> j3ppf23mls . ID = 24U ; _rtB ->
j3ppf23mls . Length = 8U ; _rtB -> j3ppf23mls . Extended = 0U ; _rtB ->
j3ppf23mls . Remote = 0 ; _rtB -> j3ppf23mls . Data [ 0 ] = 0 ; _rtB ->
j3ppf23mls . Data [ 1 ] = 0 ; _rtB -> j3ppf23mls . Data [ 2 ] = 0 ; _rtB ->
j3ppf23mls . Data [ 3 ] = 0 ; _rtB -> j3ppf23mls . Data [ 4 ] = 0 ; _rtB ->
j3ppf23mls . Data [ 5 ] = 0 ; _rtB -> j3ppf23mls . Data [ 6 ] = 0 ; _rtB ->
j3ppf23mls . Data [ 7 ] = 0 ; { { { real64_T outValue = 0 ; { real64_T result
= _rtB -> n5lf1vghfl [ 24 ] ; result = ( result - - 20.0 ) / 0.001 ; outValue
= result ; } { { uint16_T packedValue ; if ( outValue > ( real64_T ) ( 65535
) ) { packedValue = ( uint16_T ) 65535 ; } else if ( outValue < ( real64_T )
( 0 ) ) { packedValue = ( uint16_T ) 0 ; } else { packedValue = ( uint16_T )
( outValue ) ; } { { _rtB -> j3ppf23mls . Data [ 1 ] = _rtB -> j3ppf23mls .
Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & (
uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB ->
j3ppf23mls . Data [ 1 ] = _rtB -> j3ppf23mls . Data [ 1 ] | ( uint8_T ) ( (
uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 )
) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> j3ppf23mls . Data [ 1 ] = _rtB ->
j3ppf23mls . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) (
packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ;
} { _rtB -> j3ppf23mls . Data [ 1 ] = _rtB -> j3ppf23mls . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> j3ppf23mls . Data [ 1
] = _rtB -> j3ppf23mls . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4
) ; } { _rtB -> j3ppf23mls . Data [ 1 ] = _rtB -> j3ppf23mls . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> j3ppf23mls . Data [ 1
] = _rtB -> j3ppf23mls . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6
) ; } { _rtB -> j3ppf23mls . Data [ 1 ] = _rtB -> j3ppf23mls . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> j3ppf23mls . Data [ 0
] = _rtB -> j3ppf23mls . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0
) ; } { _rtB -> j3ppf23mls . Data [ 0 ] = _rtB -> j3ppf23mls . Data [ 0 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> j3ppf23mls . Data [ 0
] = _rtB -> j3ppf23mls . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) <<
2 ) ; } { _rtB -> j3ppf23mls . Data [ 0 ] = _rtB -> j3ppf23mls . Data [ 0 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> j3ppf23mls . Data [
0 ] = _rtB -> j3ppf23mls . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> j3ppf23mls . Data [ 0 ] = _rtB -> j3ppf23mls . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> j3ppf23mls .
Data [ 0 ] = _rtB -> j3ppf23mls . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> j3ppf23mls . Data [ 0 ] = _rtB -> j3ppf23mls . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 25 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> j3ppf23mls .
Data [ 3 ] = _rtB -> j3ppf23mls . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> j3ppf23mls . Data [ 3 ] = _rtB -> j3ppf23mls . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> j3ppf23mls .
Data [ 3 ] = _rtB -> j3ppf23mls . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> j3ppf23mls . Data [ 3 ] = _rtB -> j3ppf23mls . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> j3ppf23mls .
Data [ 3 ] = _rtB -> j3ppf23mls . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> j3ppf23mls . Data [ 3 ] = _rtB -> j3ppf23mls . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> j3ppf23mls .
Data [ 3 ] = _rtB -> j3ppf23mls . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> j3ppf23mls . Data [ 3 ] = _rtB -> j3ppf23mls . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> j3ppf23mls .
Data [ 2 ] = _rtB -> j3ppf23mls . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> j3ppf23mls . Data [ 2 ] = _rtB -> j3ppf23mls . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> j3ppf23mls .
Data [ 2 ] = _rtB -> j3ppf23mls . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> j3ppf23mls . Data [ 2 ] = _rtB -> j3ppf23mls . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> j3ppf23mls .
Data [ 2 ] = _rtB -> j3ppf23mls . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> j3ppf23mls . Data [ 2 ] = _rtB -> j3ppf23mls . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> j3ppf23mls .
Data [ 2 ] = _rtB -> j3ppf23mls . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> j3ppf23mls . Data [ 2 ] = _rtB -> j3ppf23mls . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 26 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> j3ppf23mls .
Data [ 5 ] = _rtB -> j3ppf23mls . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> j3ppf23mls . Data [ 5 ] = _rtB -> j3ppf23mls . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> j3ppf23mls .
Data [ 5 ] = _rtB -> j3ppf23mls . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> j3ppf23mls . Data [ 5 ] = _rtB -> j3ppf23mls . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> j3ppf23mls .
Data [ 5 ] = _rtB -> j3ppf23mls . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> j3ppf23mls . Data [ 5 ] = _rtB -> j3ppf23mls . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> j3ppf23mls .
Data [ 5 ] = _rtB -> j3ppf23mls . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> j3ppf23mls . Data [ 5 ] = _rtB -> j3ppf23mls . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> j3ppf23mls .
Data [ 4 ] = _rtB -> j3ppf23mls . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> j3ppf23mls . Data [ 4 ] = _rtB -> j3ppf23mls . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> j3ppf23mls .
Data [ 4 ] = _rtB -> j3ppf23mls . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> j3ppf23mls . Data [ 4 ] = _rtB -> j3ppf23mls . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> j3ppf23mls .
Data [ 4 ] = _rtB -> j3ppf23mls . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> j3ppf23mls . Data [ 4 ] = _rtB -> j3ppf23mls . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> j3ppf23mls .
Data [ 4 ] = _rtB -> j3ppf23mls . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> j3ppf23mls . Data [ 4 ] = _rtB -> j3ppf23mls . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 27 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> j3ppf23mls .
Data [ 7 ] = _rtB -> j3ppf23mls . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> j3ppf23mls . Data [ 7 ] = _rtB -> j3ppf23mls . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> j3ppf23mls .
Data [ 7 ] = _rtB -> j3ppf23mls . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> j3ppf23mls . Data [ 7 ] = _rtB -> j3ppf23mls . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> j3ppf23mls .
Data [ 7 ] = _rtB -> j3ppf23mls . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> j3ppf23mls . Data [ 7 ] = _rtB -> j3ppf23mls . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> j3ppf23mls .
Data [ 7 ] = _rtB -> j3ppf23mls . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> j3ppf23mls . Data [ 7 ] = _rtB -> j3ppf23mls . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> j3ppf23mls .
Data [ 6 ] = _rtB -> j3ppf23mls . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> j3ppf23mls . Data [ 6 ] = _rtB -> j3ppf23mls . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> j3ppf23mls .
Data [ 6 ] = _rtB -> j3ppf23mls . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> j3ppf23mls . Data [ 6 ] = _rtB -> j3ppf23mls . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> j3ppf23mls .
Data [ 6 ] = _rtB -> j3ppf23mls . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> j3ppf23mls . Data [ 6 ] = _rtB -> j3ppf23mls . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> j3ppf23mls .
Data [ 6 ] = _rtB -> j3ppf23mls . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> j3ppf23mls . Data [ 6 ] = _rtB -> j3ppf23mls . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } } sErr =
GetErrorBuffer ( & _rtDW -> hneb1zztka [ 0U ] ) ; inputMsgRef = & _rtB ->
j3ppf23mls ; LibOutputs_CANTransmit ( & _rtDW -> hneb1zztka [ 0U ] ,
inputMsgRef , 1 ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( S , sErr ) ;
ssSetStopRequested ( S , 1 ) ; } _rtB -> fvkyalnnkk . ID = 25U ; _rtB ->
fvkyalnnkk . Length = 8U ; _rtB -> fvkyalnnkk . Extended = 0U ; _rtB ->
fvkyalnnkk . Remote = 0 ; _rtB -> fvkyalnnkk . Data [ 0 ] = 0 ; _rtB ->
fvkyalnnkk . Data [ 1 ] = 0 ; _rtB -> fvkyalnnkk . Data [ 2 ] = 0 ; _rtB ->
fvkyalnnkk . Data [ 3 ] = 0 ; _rtB -> fvkyalnnkk . Data [ 4 ] = 0 ; _rtB ->
fvkyalnnkk . Data [ 5 ] = 0 ; _rtB -> fvkyalnnkk . Data [ 6 ] = 0 ; _rtB ->
fvkyalnnkk . Data [ 7 ] = 0 ; { { { real64_T outValue = 0 ; { real64_T result
= _rtB -> n5lf1vghfl [ 28 ] ; result = ( result - - 20.0 ) / 0.001 ; outValue
= result ; } { { uint16_T packedValue ; if ( outValue > ( real64_T ) ( 65535
) ) { packedValue = ( uint16_T ) 65535 ; } else if ( outValue < ( real64_T )
( 0 ) ) { packedValue = ( uint16_T ) 0 ; } else { packedValue = ( uint16_T )
( outValue ) ; } { { _rtB -> fvkyalnnkk . Data [ 1 ] = _rtB -> fvkyalnnkk .
Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & (
uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB ->
fvkyalnnkk . Data [ 1 ] = _rtB -> fvkyalnnkk . Data [ 1 ] | ( uint8_T ) ( (
uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 )
) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> fvkyalnnkk . Data [ 1 ] = _rtB ->
fvkyalnnkk . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) (
packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ;
} { _rtB -> fvkyalnnkk . Data [ 1 ] = _rtB -> fvkyalnnkk . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> fvkyalnnkk . Data [ 1
] = _rtB -> fvkyalnnkk . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4
) ; } { _rtB -> fvkyalnnkk . Data [ 1 ] = _rtB -> fvkyalnnkk . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> fvkyalnnkk . Data [ 1
] = _rtB -> fvkyalnnkk . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6
) ; } { _rtB -> fvkyalnnkk . Data [ 1 ] = _rtB -> fvkyalnnkk . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> fvkyalnnkk . Data [ 0
] = _rtB -> fvkyalnnkk . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0
) ; } { _rtB -> fvkyalnnkk . Data [ 0 ] = _rtB -> fvkyalnnkk . Data [ 0 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> fvkyalnnkk . Data [ 0
] = _rtB -> fvkyalnnkk . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) <<
2 ) ; } { _rtB -> fvkyalnnkk . Data [ 0 ] = _rtB -> fvkyalnnkk . Data [ 0 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> fvkyalnnkk . Data [
0 ] = _rtB -> fvkyalnnkk . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> fvkyalnnkk . Data [ 0 ] = _rtB -> fvkyalnnkk . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> fvkyalnnkk .
Data [ 0 ] = _rtB -> fvkyalnnkk . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> fvkyalnnkk . Data [ 0 ] = _rtB -> fvkyalnnkk . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 29 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> fvkyalnnkk .
Data [ 3 ] = _rtB -> fvkyalnnkk . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> fvkyalnnkk . Data [ 3 ] = _rtB -> fvkyalnnkk . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> fvkyalnnkk .
Data [ 3 ] = _rtB -> fvkyalnnkk . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> fvkyalnnkk . Data [ 3 ] = _rtB -> fvkyalnnkk . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> fvkyalnnkk .
Data [ 3 ] = _rtB -> fvkyalnnkk . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> fvkyalnnkk . Data [ 3 ] = _rtB -> fvkyalnnkk . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> fvkyalnnkk .
Data [ 3 ] = _rtB -> fvkyalnnkk . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> fvkyalnnkk . Data [ 3 ] = _rtB -> fvkyalnnkk . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> fvkyalnnkk .
Data [ 2 ] = _rtB -> fvkyalnnkk . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> fvkyalnnkk . Data [ 2 ] = _rtB -> fvkyalnnkk . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> fvkyalnnkk .
Data [ 2 ] = _rtB -> fvkyalnnkk . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> fvkyalnnkk . Data [ 2 ] = _rtB -> fvkyalnnkk . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> fvkyalnnkk .
Data [ 2 ] = _rtB -> fvkyalnnkk . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> fvkyalnnkk . Data [ 2 ] = _rtB -> fvkyalnnkk . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> fvkyalnnkk .
Data [ 2 ] = _rtB -> fvkyalnnkk . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> fvkyalnnkk . Data [ 2 ] = _rtB -> fvkyalnnkk . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 30 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> fvkyalnnkk .
Data [ 5 ] = _rtB -> fvkyalnnkk . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> fvkyalnnkk . Data [ 5 ] = _rtB -> fvkyalnnkk . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> fvkyalnnkk .
Data [ 5 ] = _rtB -> fvkyalnnkk . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> fvkyalnnkk . Data [ 5 ] = _rtB -> fvkyalnnkk . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> fvkyalnnkk .
Data [ 5 ] = _rtB -> fvkyalnnkk . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> fvkyalnnkk . Data [ 5 ] = _rtB -> fvkyalnnkk . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> fvkyalnnkk .
Data [ 5 ] = _rtB -> fvkyalnnkk . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> fvkyalnnkk . Data [ 5 ] = _rtB -> fvkyalnnkk . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> fvkyalnnkk .
Data [ 4 ] = _rtB -> fvkyalnnkk . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> fvkyalnnkk . Data [ 4 ] = _rtB -> fvkyalnnkk . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> fvkyalnnkk .
Data [ 4 ] = _rtB -> fvkyalnnkk . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> fvkyalnnkk . Data [ 4 ] = _rtB -> fvkyalnnkk . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> fvkyalnnkk .
Data [ 4 ] = _rtB -> fvkyalnnkk . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> fvkyalnnkk . Data [ 4 ] = _rtB -> fvkyalnnkk . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> fvkyalnnkk .
Data [ 4 ] = _rtB -> fvkyalnnkk . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> fvkyalnnkk . Data [ 4 ] = _rtB -> fvkyalnnkk . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 31 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> fvkyalnnkk .
Data [ 7 ] = _rtB -> fvkyalnnkk . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> fvkyalnnkk . Data [ 7 ] = _rtB -> fvkyalnnkk . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> fvkyalnnkk .
Data [ 7 ] = _rtB -> fvkyalnnkk . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> fvkyalnnkk . Data [ 7 ] = _rtB -> fvkyalnnkk . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> fvkyalnnkk .
Data [ 7 ] = _rtB -> fvkyalnnkk . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> fvkyalnnkk . Data [ 7 ] = _rtB -> fvkyalnnkk . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> fvkyalnnkk .
Data [ 7 ] = _rtB -> fvkyalnnkk . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> fvkyalnnkk . Data [ 7 ] = _rtB -> fvkyalnnkk . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> fvkyalnnkk .
Data [ 6 ] = _rtB -> fvkyalnnkk . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> fvkyalnnkk . Data [ 6 ] = _rtB -> fvkyalnnkk . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> fvkyalnnkk .
Data [ 6 ] = _rtB -> fvkyalnnkk . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> fvkyalnnkk . Data [ 6 ] = _rtB -> fvkyalnnkk . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> fvkyalnnkk .
Data [ 6 ] = _rtB -> fvkyalnnkk . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> fvkyalnnkk . Data [ 6 ] = _rtB -> fvkyalnnkk . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> fvkyalnnkk .
Data [ 6 ] = _rtB -> fvkyalnnkk . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> fvkyalnnkk . Data [ 6 ] = _rtB -> fvkyalnnkk . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } } sErr =
GetErrorBuffer ( & _rtDW -> lb0btemk4t [ 0U ] ) ; inputMsgRef = & _rtB ->
fvkyalnnkk ; LibOutputs_CANTransmit ( & _rtDW -> lb0btemk4t [ 0U ] ,
inputMsgRef , 1 ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( S , sErr ) ;
ssSetStopRequested ( S , 1 ) ; } _rtB -> nfana1popm . ID = 32U ; _rtB ->
nfana1popm . Length = 8U ; _rtB -> nfana1popm . Extended = 0U ; _rtB ->
nfana1popm . Remote = 0 ; _rtB -> nfana1popm . Data [ 0 ] = 0 ; _rtB ->
nfana1popm . Data [ 1 ] = 0 ; _rtB -> nfana1popm . Data [ 2 ] = 0 ; _rtB ->
nfana1popm . Data [ 3 ] = 0 ; _rtB -> nfana1popm . Data [ 4 ] = 0 ; _rtB ->
nfana1popm . Data [ 5 ] = 0 ; _rtB -> nfana1popm . Data [ 6 ] = 0 ; _rtB ->
nfana1popm . Data [ 7 ] = 0 ; { { { real64_T outValue = 0 ; { real64_T result
= _rtB -> n5lf1vghfl [ 32 ] ; result = ( result - - 20.0 ) / 0.001 ; outValue
= result ; } { { uint16_T packedValue ; if ( outValue > ( real64_T ) ( 65535
) ) { packedValue = ( uint16_T ) 65535 ; } else if ( outValue < ( real64_T )
( 0 ) ) { packedValue = ( uint16_T ) 0 ; } else { packedValue = ( uint16_T )
( outValue ) ; } { { _rtB -> nfana1popm . Data [ 1 ] = _rtB -> nfana1popm .
Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & (
uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB ->
nfana1popm . Data [ 1 ] = _rtB -> nfana1popm . Data [ 1 ] | ( uint8_T ) ( (
uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 )
) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> nfana1popm . Data [ 1 ] = _rtB ->
nfana1popm . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) (
packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ;
} { _rtB -> nfana1popm . Data [ 1 ] = _rtB -> nfana1popm . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> nfana1popm . Data [ 1
] = _rtB -> nfana1popm . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4
) ; } { _rtB -> nfana1popm . Data [ 1 ] = _rtB -> nfana1popm . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> nfana1popm . Data [ 1
] = _rtB -> nfana1popm . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6
) ; } { _rtB -> nfana1popm . Data [ 1 ] = _rtB -> nfana1popm . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> nfana1popm . Data [ 0
] = _rtB -> nfana1popm . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0
) ; } { _rtB -> nfana1popm . Data [ 0 ] = _rtB -> nfana1popm . Data [ 0 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> nfana1popm . Data [ 0
] = _rtB -> nfana1popm . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) <<
2 ) ; } { _rtB -> nfana1popm . Data [ 0 ] = _rtB -> nfana1popm . Data [ 0 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> nfana1popm . Data [
0 ] = _rtB -> nfana1popm . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> nfana1popm . Data [ 0 ] = _rtB -> nfana1popm . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> nfana1popm .
Data [ 0 ] = _rtB -> nfana1popm . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> nfana1popm . Data [ 0 ] = _rtB -> nfana1popm . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 33 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> nfana1popm .
Data [ 3 ] = _rtB -> nfana1popm . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> nfana1popm . Data [ 3 ] = _rtB -> nfana1popm . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> nfana1popm .
Data [ 3 ] = _rtB -> nfana1popm . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> nfana1popm . Data [ 3 ] = _rtB -> nfana1popm . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> nfana1popm .
Data [ 3 ] = _rtB -> nfana1popm . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> nfana1popm . Data [ 3 ] = _rtB -> nfana1popm . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> nfana1popm .
Data [ 3 ] = _rtB -> nfana1popm . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> nfana1popm . Data [ 3 ] = _rtB -> nfana1popm . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> nfana1popm .
Data [ 2 ] = _rtB -> nfana1popm . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> nfana1popm . Data [ 2 ] = _rtB -> nfana1popm . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> nfana1popm .
Data [ 2 ] = _rtB -> nfana1popm . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> nfana1popm . Data [ 2 ] = _rtB -> nfana1popm . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> nfana1popm .
Data [ 2 ] = _rtB -> nfana1popm . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> nfana1popm . Data [ 2 ] = _rtB -> nfana1popm . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> nfana1popm .
Data [ 2 ] = _rtB -> nfana1popm . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> nfana1popm . Data [ 2 ] = _rtB -> nfana1popm . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 34 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> nfana1popm .
Data [ 5 ] = _rtB -> nfana1popm . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> nfana1popm . Data [ 5 ] = _rtB -> nfana1popm . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> nfana1popm .
Data [ 5 ] = _rtB -> nfana1popm . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> nfana1popm . Data [ 5 ] = _rtB -> nfana1popm . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> nfana1popm .
Data [ 5 ] = _rtB -> nfana1popm . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> nfana1popm . Data [ 5 ] = _rtB -> nfana1popm . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> nfana1popm .
Data [ 5 ] = _rtB -> nfana1popm . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> nfana1popm . Data [ 5 ] = _rtB -> nfana1popm . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> nfana1popm .
Data [ 4 ] = _rtB -> nfana1popm . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> nfana1popm . Data [ 4 ] = _rtB -> nfana1popm . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> nfana1popm .
Data [ 4 ] = _rtB -> nfana1popm . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> nfana1popm . Data [ 4 ] = _rtB -> nfana1popm . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> nfana1popm .
Data [ 4 ] = _rtB -> nfana1popm . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> nfana1popm . Data [ 4 ] = _rtB -> nfana1popm . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> nfana1popm .
Data [ 4 ] = _rtB -> nfana1popm . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> nfana1popm . Data [ 4 ] = _rtB -> nfana1popm . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 35 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> nfana1popm .
Data [ 7 ] = _rtB -> nfana1popm . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> nfana1popm . Data [ 7 ] = _rtB -> nfana1popm . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> nfana1popm .
Data [ 7 ] = _rtB -> nfana1popm . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> nfana1popm . Data [ 7 ] = _rtB -> nfana1popm . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> nfana1popm .
Data [ 7 ] = _rtB -> nfana1popm . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> nfana1popm . Data [ 7 ] = _rtB -> nfana1popm . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> nfana1popm .
Data [ 7 ] = _rtB -> nfana1popm . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> nfana1popm . Data [ 7 ] = _rtB -> nfana1popm . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> nfana1popm .
Data [ 6 ] = _rtB -> nfana1popm . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> nfana1popm . Data [ 6 ] = _rtB -> nfana1popm . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> nfana1popm .
Data [ 6 ] = _rtB -> nfana1popm . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> nfana1popm . Data [ 6 ] = _rtB -> nfana1popm . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> nfana1popm .
Data [ 6 ] = _rtB -> nfana1popm . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> nfana1popm . Data [ 6 ] = _rtB -> nfana1popm . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> nfana1popm .
Data [ 6 ] = _rtB -> nfana1popm . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> nfana1popm . Data [ 6 ] = _rtB -> nfana1popm . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } } sErr =
GetErrorBuffer ( & _rtDW -> mklenyspuz [ 0U ] ) ; inputMsgRef = & _rtB ->
nfana1popm ; LibOutputs_CANTransmit ( & _rtDW -> mklenyspuz [ 0U ] ,
inputMsgRef , 1 ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( S , sErr ) ;
ssSetStopRequested ( S , 1 ) ; } _rtB -> chu4lsvwwt . ID = 33U ; _rtB ->
chu4lsvwwt . Length = 8U ; _rtB -> chu4lsvwwt . Extended = 0U ; _rtB ->
chu4lsvwwt . Remote = 0 ; _rtB -> chu4lsvwwt . Data [ 0 ] = 0 ; _rtB ->
chu4lsvwwt . Data [ 1 ] = 0 ; _rtB -> chu4lsvwwt . Data [ 2 ] = 0 ; _rtB ->
chu4lsvwwt . Data [ 3 ] = 0 ; _rtB -> chu4lsvwwt . Data [ 4 ] = 0 ; _rtB ->
chu4lsvwwt . Data [ 5 ] = 0 ; _rtB -> chu4lsvwwt . Data [ 6 ] = 0 ; _rtB ->
chu4lsvwwt . Data [ 7 ] = 0 ; { { { real64_T outValue = 0 ; { real64_T result
= _rtB -> n5lf1vghfl [ 36 ] ; result = ( result - - 20.0 ) / 0.001 ; outValue
= result ; } { { uint16_T packedValue ; if ( outValue > ( real64_T ) ( 65535
) ) { packedValue = ( uint16_T ) 65535 ; } else if ( outValue < ( real64_T )
( 0 ) ) { packedValue = ( uint16_T ) 0 ; } else { packedValue = ( uint16_T )
( outValue ) ; } { { _rtB -> chu4lsvwwt . Data [ 1 ] = _rtB -> chu4lsvwwt .
Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & (
uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 0 ) ; } { _rtB ->
chu4lsvwwt . Data [ 1 ] = _rtB -> chu4lsvwwt . Data [ 1 ] | ( uint8_T ) ( (
uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 )
) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> chu4lsvwwt . Data [ 1 ] = _rtB ->
chu4lsvwwt . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) (
packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >> 2 ) << 2 ) ;
} { _rtB -> chu4lsvwwt . Data [ 1 ] = _rtB -> chu4lsvwwt . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> chu4lsvwwt . Data [ 1
] = _rtB -> chu4lsvwwt . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >> 4 ) << 4
) ; } { _rtB -> chu4lsvwwt . Data [ 1 ] = _rtB -> chu4lsvwwt . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> chu4lsvwwt . Data [ 1
] = _rtB -> chu4lsvwwt . Data [ 1 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >> 6 ) << 6
) ; } { _rtB -> chu4lsvwwt . Data [ 1 ] = _rtB -> chu4lsvwwt . Data [ 1 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> chu4lsvwwt . Data [ 0
] = _rtB -> chu4lsvwwt . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >> 8 ) << 0
) ; } { _rtB -> chu4lsvwwt . Data [ 0 ] = _rtB -> chu4lsvwwt . Data [ 0 ] | (
uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> chu4lsvwwt . Data [ 0
] = _rtB -> chu4lsvwwt . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T
) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >> 10 ) <<
2 ) ; } { _rtB -> chu4lsvwwt . Data [ 0 ] = _rtB -> chu4lsvwwt . Data [ 0 ] |
( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T ) ( ( (
uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> chu4lsvwwt . Data [
0 ] = _rtB -> chu4lsvwwt . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> chu4lsvwwt . Data [ 0 ] = _rtB -> chu4lsvwwt . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> chu4lsvwwt .
Data [ 0 ] = _rtB -> chu4lsvwwt . Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> chu4lsvwwt . Data [ 0 ] = _rtB -> chu4lsvwwt . Data
[ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 37 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> chu4lsvwwt .
Data [ 3 ] = _rtB -> chu4lsvwwt . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> chu4lsvwwt . Data [ 3 ] = _rtB -> chu4lsvwwt . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> chu4lsvwwt .
Data [ 3 ] = _rtB -> chu4lsvwwt . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> chu4lsvwwt . Data [ 3 ] = _rtB -> chu4lsvwwt . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> chu4lsvwwt .
Data [ 3 ] = _rtB -> chu4lsvwwt . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> chu4lsvwwt . Data [ 3 ] = _rtB -> chu4lsvwwt . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> chu4lsvwwt .
Data [ 3 ] = _rtB -> chu4lsvwwt . Data [ 3 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> chu4lsvwwt . Data [ 3 ] = _rtB -> chu4lsvwwt . Data
[ 3 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> chu4lsvwwt .
Data [ 2 ] = _rtB -> chu4lsvwwt . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> chu4lsvwwt . Data [ 2 ] = _rtB -> chu4lsvwwt . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> chu4lsvwwt .
Data [ 2 ] = _rtB -> chu4lsvwwt . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> chu4lsvwwt . Data [ 2 ] = _rtB -> chu4lsvwwt . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> chu4lsvwwt .
Data [ 2 ] = _rtB -> chu4lsvwwt . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> chu4lsvwwt . Data [ 2 ] = _rtB -> chu4lsvwwt . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> chu4lsvwwt .
Data [ 2 ] = _rtB -> chu4lsvwwt . Data [ 2 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> chu4lsvwwt . Data [ 2 ] = _rtB -> chu4lsvwwt . Data
[ 2 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 38 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> chu4lsvwwt .
Data [ 5 ] = _rtB -> chu4lsvwwt . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> chu4lsvwwt . Data [ 5 ] = _rtB -> chu4lsvwwt . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> chu4lsvwwt .
Data [ 5 ] = _rtB -> chu4lsvwwt . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> chu4lsvwwt . Data [ 5 ] = _rtB -> chu4lsvwwt . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> chu4lsvwwt .
Data [ 5 ] = _rtB -> chu4lsvwwt . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> chu4lsvwwt . Data [ 5 ] = _rtB -> chu4lsvwwt . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> chu4lsvwwt .
Data [ 5 ] = _rtB -> chu4lsvwwt . Data [ 5 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> chu4lsvwwt . Data [ 5 ] = _rtB -> chu4lsvwwt . Data
[ 5 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> chu4lsvwwt .
Data [ 4 ] = _rtB -> chu4lsvwwt . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> chu4lsvwwt . Data [ 4 ] = _rtB -> chu4lsvwwt . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> chu4lsvwwt .
Data [ 4 ] = _rtB -> chu4lsvwwt . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> chu4lsvwwt . Data [ 4 ] = _rtB -> chu4lsvwwt . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> chu4lsvwwt .
Data [ 4 ] = _rtB -> chu4lsvwwt . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> chu4lsvwwt . Data [ 4 ] = _rtB -> chu4lsvwwt . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> chu4lsvwwt .
Data [ 4 ] = _rtB -> chu4lsvwwt . Data [ 4 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> chu4lsvwwt . Data [ 4 ] = _rtB -> chu4lsvwwt . Data
[ 4 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } { { real64_T
outValue = 0 ; { real64_T result = _rtB -> n5lf1vghfl [ 39 ] ; result = (
result - - 20.0 ) / 0.001 ; outValue = result ; } { { uint16_T packedValue ;
if ( outValue > ( real64_T ) ( 65535 ) ) { packedValue = ( uint16_T ) 65535 ;
} else if ( outValue < ( real64_T ) ( 0 ) ) { packedValue = ( uint16_T ) 0 ;
} else { packedValue = ( uint16_T ) ( outValue ) ; } { { _rtB -> chu4lsvwwt .
Data [ 7 ] = _rtB -> chu4lsvwwt . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 0 ) ) >>
0 ) << 0 ) ; } { _rtB -> chu4lsvwwt . Data [ 7 ] = _rtB -> chu4lsvwwt . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 1 ) ) >> 1 ) << 1 ) ; } { _rtB -> chu4lsvwwt .
Data [ 7 ] = _rtB -> chu4lsvwwt . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 2 ) ) >>
2 ) << 2 ) ; } { _rtB -> chu4lsvwwt . Data [ 7 ] = _rtB -> chu4lsvwwt . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 3 ) ) >> 3 ) << 3 ) ; } { _rtB -> chu4lsvwwt .
Data [ 7 ] = _rtB -> chu4lsvwwt . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 4 ) ) >>
4 ) << 4 ) ; } { _rtB -> chu4lsvwwt . Data [ 7 ] = _rtB -> chu4lsvwwt . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 5 ) ) >> 5 ) << 5 ) ; } { _rtB -> chu4lsvwwt .
Data [ 7 ] = _rtB -> chu4lsvwwt . Data [ 7 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 6 ) ) >>
6 ) << 6 ) ; } { _rtB -> chu4lsvwwt . Data [ 7 ] = _rtB -> chu4lsvwwt . Data
[ 7 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 7 ) ) >> 7 ) << 7 ) ; } { _rtB -> chu4lsvwwt .
Data [ 6 ] = _rtB -> chu4lsvwwt . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 8 ) ) >>
8 ) << 0 ) ; } { _rtB -> chu4lsvwwt . Data [ 6 ] = _rtB -> chu4lsvwwt . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 9 ) ) >> 9 ) << 1 ) ; } { _rtB -> chu4lsvwwt .
Data [ 6 ] = _rtB -> chu4lsvwwt . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 10 ) ) >>
10 ) << 2 ) ; } { _rtB -> chu4lsvwwt . Data [ 6 ] = _rtB -> chu4lsvwwt . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 11 ) ) >> 11 ) << 3 ) ; } { _rtB -> chu4lsvwwt .
Data [ 6 ] = _rtB -> chu4lsvwwt . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 12 ) ) >>
12 ) << 4 ) ; } { _rtB -> chu4lsvwwt . Data [ 6 ] = _rtB -> chu4lsvwwt . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 13 ) ) >> 13 ) << 5 ) ; } { _rtB -> chu4lsvwwt .
Data [ 6 ] = _rtB -> chu4lsvwwt . Data [ 6 ] | ( uint8_T ) ( ( uint8_T ) ( (
uint16_T ) ( packedValue & ( uint16_T ) ( ( ( uint16_T ) ( 1 ) ) << 14 ) ) >>
14 ) << 6 ) ; } { _rtB -> chu4lsvwwt . Data [ 6 ] = _rtB -> chu4lsvwwt . Data
[ 6 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint16_T ) ( packedValue & ( uint16_T )
( ( ( uint16_T ) ( 1 ) ) << 15 ) ) >> 15 ) << 7 ) ; } } } } } } } sErr =
GetErrorBuffer ( & _rtDW -> jtwuutqnr5 [ 0U ] ) ; inputMsgRef = & _rtB ->
chu4lsvwwt ; LibOutputs_CANTransmit ( & _rtDW -> jtwuutqnr5 [ 0U ] ,
inputMsgRef , 1 ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( S , sErr ) ;
ssSetStopRequested ( S , 1 ) ; } ssCallAccelRunBlock ( S , 1 , 61 ,
SS_CALL_MDL_OUTPUTS ) ; _rtB -> f13ywr3xrq . ID = 35U ; _rtB -> f13ywr3xrq .
Length = 8U ; _rtB -> f13ywr3xrq . Extended = 0U ; _rtB -> f13ywr3xrq .
Remote = 0 ; _rtB -> f13ywr3xrq . Data [ 0 ] = 0 ; _rtB -> f13ywr3xrq . Data
[ 1 ] = 0 ; _rtB -> f13ywr3xrq . Data [ 2 ] = 0 ; _rtB -> f13ywr3xrq . Data [
3 ] = 0 ; _rtB -> f13ywr3xrq . Data [ 4 ] = 0 ; _rtB -> f13ywr3xrq . Data [ 5
] = 0 ; _rtB -> f13ywr3xrq . Data [ 6 ] = 0 ; _rtB -> f13ywr3xrq . Data [ 7 ]
= 0 ; { { { real64_T outValue = 0 ; { real64_T result = _rtB -> kpsxa5ty3u ;
outValue = result ; } { { uint8_T packedValue ; if ( outValue > ( real64_T )
( 1 ) ) { packedValue = ( uint8_T ) 1 ; } else if ( outValue < ( real64_T ) (
0 ) ) { packedValue = ( uint8_T ) 0 ; } else { packedValue = ( uint8_T ) (
outValue ) ; } { { _rtB -> f13ywr3xrq . Data [ 0 ] = _rtB -> f13ywr3xrq .
Data [ 0 ] | ( uint8_T ) ( ( uint8_T ) ( ( uint8_T ) ( packedValue & (
uint8_T ) ( ( ( uint8_T ) ( 1 ) ) << 0 ) ) >> 0 ) << 7 ) ; } } } } } } } sErr
= GetErrorBuffer ( & _rtDW -> heelfqvbx5 [ 0U ] ) ; inputMsgRef = & _rtB ->
f13ywr3xrq ; LibOutputs_CANTransmit ( & _rtDW -> heelfqvbx5 [ 0U ] ,
inputMsgRef , 1 ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( S , sErr ) ;
ssSetStopRequested ( S , 1 ) ; } sErr = GetErrorBuffer ( & _rtDW ->
k4brez2owj [ 0U ] ) ; isMsgAvailable = 1 ; isMsgReceived = 0 ; inputMsgRef =
& _rtB -> kl5yf0znsk ; while ( isMsgAvailable == 1 ) { LibOutputs_CANReceive
( & _rtDW -> k4brez2owj [ 0U ] , inputMsgRef , 2 , & isMsgReceived , &
isMsgAvailable ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( S , sErr ) ;
ssSetStopRequested ( S , 1 ) ; } if ( isMsgReceived == 1 ) { isMsgReceived =
0 ; { if ( ( 8 == _rtB -> kl5yf0znsk . Length ) && ( _rtB -> kl5yf0znsk . ID
!= INVALID_CAN_ID ) ) { if ( ( 40U == _rtB -> kl5yf0znsk . ID ) && ( 0U ==
_rtB -> kl5yf0znsk . Extended ) ) { { { { real64_T outValue = 0 ; { {
uint16_T unpackedValue = 0 ; { uint16_T tempValue = ( uint16_T ) ( 0 ) ; {
tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB
-> kl5yf0znsk . Data [ 1 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 0 ) ) >>
0 ) << 0 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 1 ) ) >> 1 ) << 1 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 ) << 2 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 3 ) ) >> 3 ) << 3 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 1 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 )
<< 4 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 1 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 5 ) ) >> 5 ) << 5 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 6 ) ) >> 6 ) << 6 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 7 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 0 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 0 ) ) >> 0 )
<< 8 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 1 ) ) >> 1 ) << 9 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 ) << 10 ) ; } { tempValue = tempValue |
( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0
] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 3 ) ) >> 3 ) << 11 ) ; } {
tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB
-> kl5yf0znsk . Data [ 0 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >>
4 ) << 12 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 5 ) ) >> 5 ) << 13 ) ; } { tempValue = tempValue | ( uint16_T ) (
( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & (
uint16_T ) ( ( uint16_T ) ( 1 ) << 6 ) ) >> 6 ) << 14 ) ; } { tempValue =
tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk
. Data [ 0 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 15 ) ;
} unpackedValue = tempValue ; } outValue = ( real64_T ) ( unpackedValue ) ; }
} { real64_T result = ( real64_T ) outValue ; result = result * 0.01 ; if (
result > 100.0 ) { result = 100.0 ; } _rtB -> iwmuxbz051 = result ; } } } { {
real64_T outValue = 0 ; { { uint16_T unpackedValue = 0 ; { uint16_T tempValue
= ( uint16_T ) ( 0 ) ; { tempValue = tempValue | ( uint16_T ) ( ( uint16_T )
( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 7 ] ) & ( uint16_T ) ( (
uint16_T ) ( 1 ) << 0 ) ) >> 0 ) << 0 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 7 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 ) << 1 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 7 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 )
<< 2 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 7 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 3 ) ) >> 3 ) << 3 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 7 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 ) << 4 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 7 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >> 5 ) << 5 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 7 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 6 ) ) >> 6 )
<< 6 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 7 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 7 ) ) >> 7 ) << 7 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 6 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 0 ) ) >> 0 ) << 8 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 6 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 ) << 9 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 6 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 )
<< 10 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 6 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 3 ) ) >> 3 ) << 11 ) ; } { tempValue = tempValue | ( uint16_T ) (
( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 6 ] ) & (
uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 ) << 12 ) ; } { tempValue =
tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk
. Data [ 6 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >> 5 ) << 13 ) ;
} { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( (
_rtB -> kl5yf0znsk . Data [ 6 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 6 )
) >> 6 ) << 14 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) (
( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 6 ] ) & ( uint16_T ) ( (
uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 15 ) ; } unpackedValue = tempValue ; }
outValue = ( real64_T ) ( unpackedValue ) ; } } { real64_T result = (
real64_T ) outValue ; result = result * 0.01 ; if ( result > 100.0 ) { result
= 100.0 ; } _rtB -> hrgxkgwtpq = result ; } } } { { real64_T outValue = 0 ; {
{ uint16_T unpackedValue = 0 ; { uint16_T tempValue = ( uint16_T ) ( 0 ) ; {
tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB
-> kl5yf0znsk . Data [ 5 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 0 ) ) >>
0 ) << 0 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 5 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 1 ) ) >> 1 ) << 1 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 5 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 ) << 2 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 5 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 3 ) ) >> 3 ) << 3 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 5 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 )
<< 4 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 5 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 5 ) ) >> 5 ) << 5 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 5 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 6 ) ) >> 6 ) << 6 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 5 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 7 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 4 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 0 ) ) >> 0 )
<< 8 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 4 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 1 ) ) >> 1 ) << 9 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 4 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 ) << 10 ) ; } { tempValue = tempValue |
( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 4
] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 3 ) ) >> 3 ) << 11 ) ; } {
tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB
-> kl5yf0znsk . Data [ 4 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >>
4 ) << 12 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 4 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 5 ) ) >> 5 ) << 13 ) ; } { tempValue = tempValue | ( uint16_T ) (
( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 4 ] ) & (
uint16_T ) ( ( uint16_T ) ( 1 ) << 6 ) ) >> 6 ) << 14 ) ; } { tempValue =
tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk
. Data [ 4 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 15 ) ;
} unpackedValue = tempValue ; } outValue = ( real64_T ) ( unpackedValue ) ; }
} { real64_T result = ( real64_T ) outValue ; result = result * 0.01 ; if (
result > 100.0 ) { result = 100.0 ; } _rtB -> oqlv3bofwz = result ; } } } { {
real64_T outValue = 0 ; { { uint16_T unpackedValue = 0 ; { uint16_T tempValue
= ( uint16_T ) ( 0 ) ; { tempValue = tempValue | ( uint16_T ) ( ( uint16_T )
( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 3 ] ) & ( uint16_T ) ( (
uint16_T ) ( 1 ) << 0 ) ) >> 0 ) << 0 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 3 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 ) << 1 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 3 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 )
<< 2 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 3 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 3 ) ) >> 3 ) << 3 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 3 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 ) << 4 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 3 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >> 5 ) << 5 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 3 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 6 ) ) >> 6 )
<< 6 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 3 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 7 ) ) >> 7 ) << 7 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 2 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 0 ) ) >> 0 ) << 8 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 2 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 ) << 9 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 2 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 )
<< 10 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 2 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 3 ) ) >> 3 ) << 11 ) ; } { tempValue = tempValue | ( uint16_T ) (
( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 2 ] ) & (
uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 ) << 12 ) ; } { tempValue =
tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk
. Data [ 2 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >> 5 ) << 13 ) ;
} { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( (
_rtB -> kl5yf0znsk . Data [ 2 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 6 )
) >> 6 ) << 14 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) (
( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 2 ] ) & ( uint16_T ) ( (
uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 15 ) ; } unpackedValue = tempValue ; }
outValue = ( real64_T ) ( unpackedValue ) ; } } { real64_T result = (
real64_T ) outValue ; result = result * 0.01 ; if ( result > 100.0 ) { result
= 100.0 ; } _rtB -> i23jmqm5z4 = result ; } } } } } } } { if ( ( 8 == _rtB ->
kl5yf0znsk . Length ) && ( _rtB -> kl5yf0znsk . ID != INVALID_CAN_ID ) ) { if
( ( 41U == _rtB -> kl5yf0znsk . ID ) && ( 0U == _rtB -> kl5yf0znsk . Extended
) ) { { { { real64_T outValue = 0 ; { { uint8_T unpackedValue = 0 ; { uint8_T
tempValue = ( uint8_T ) ( 0 ) ; { tempValue = tempValue | ( uint8_T ) ( (
uint8_T ) ( ( uint8_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ] ) & ( uint8_T ) (
( uint8_T ) ( 1 ) << 0 ) ) >> 0 ) << 0 ) ; } { tempValue = tempValue | (
uint8_T ) ( ( uint8_T ) ( ( uint8_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ] ) &
( uint8_T ) ( ( uint8_T ) ( 1 ) << 1 ) ) >> 1 ) << 1 ) ; } { tempValue =
tempValue | ( uint8_T ) ( ( uint8_T ) ( ( uint8_T ) ( ( _rtB -> kl5yf0znsk .
Data [ 1 ] ) & ( uint8_T ) ( ( uint8_T ) ( 1 ) << 2 ) ) >> 2 ) << 2 ) ; } {
tempValue = tempValue | ( uint8_T ) ( ( uint8_T ) ( ( uint8_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 1 ] ) & ( uint8_T ) ( ( uint8_T ) ( 1 ) << 3 ) ) >> 3 )
<< 3 ) ; } { tempValue = tempValue | ( uint8_T ) ( ( uint8_T ) ( ( uint8_T )
( ( _rtB -> kl5yf0znsk . Data [ 1 ] ) & ( uint8_T ) ( ( uint8_T ) ( 1 ) << 4
) ) >> 4 ) << 4 ) ; } { tempValue = tempValue | ( uint8_T ) ( ( uint8_T ) ( (
uint8_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ] ) & ( uint8_T ) ( ( uint8_T ) (
1 ) << 5 ) ) >> 5 ) << 5 ) ; } { tempValue = tempValue | ( uint8_T ) ( (
uint8_T ) ( ( uint8_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ] ) & ( uint8_T ) (
( uint8_T ) ( 1 ) << 6 ) ) >> 6 ) << 6 ) ; } { tempValue = tempValue | (
uint8_T ) ( ( uint8_T ) ( ( uint8_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ] ) &
( uint8_T ) ( ( uint8_T ) ( 1 ) << 7 ) ) >> 7 ) << 7 ) ; } unpackedValue =
tempValue ; } outValue = ( real64_T ) ( unpackedValue ) ; } } { real64_T
result = ( real64_T ) outValue ; if ( result > 20.0 ) { result = 20.0 ; }
_rtB -> fuzdifzmaf = result ; } } } { { real64_T outValue = 0 ; { { uint8_T
unpackedValue = 0 ; { uint8_T tempValue = ( uint8_T ) ( 0 ) ; { tempValue =
tempValue | ( uint8_T ) ( ( uint8_T ) ( ( uint8_T ) ( ( _rtB -> kl5yf0znsk .
Data [ 0 ] ) & ( uint8_T ) ( ( uint8_T ) ( 1 ) << 0 ) ) >> 0 ) << 0 ) ; } {
tempValue = tempValue | ( uint8_T ) ( ( uint8_T ) ( ( uint8_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 0 ] ) & ( uint8_T ) ( ( uint8_T ) ( 1 ) << 1 ) ) >> 1 )
<< 1 ) ; } { tempValue = tempValue | ( uint8_T ) ( ( uint8_T ) ( ( uint8_T )
( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint8_T ) ( ( uint8_T ) ( 1 ) << 2
) ) >> 2 ) << 2 ) ; } { tempValue = tempValue | ( uint8_T ) ( ( uint8_T ) ( (
uint8_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint8_T ) ( ( uint8_T ) (
1 ) << 3 ) ) >> 3 ) << 3 ) ; } { tempValue = tempValue | ( uint8_T ) ( (
uint8_T ) ( ( uint8_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint8_T ) (
( uint8_T ) ( 1 ) << 4 ) ) >> 4 ) << 4 ) ; } { tempValue = tempValue | (
uint8_T ) ( ( uint8_T ) ( ( uint8_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) &
( uint8_T ) ( ( uint8_T ) ( 1 ) << 5 ) ) >> 5 ) << 5 ) ; } { tempValue =
tempValue | ( uint8_T ) ( ( uint8_T ) ( ( uint8_T ) ( ( _rtB -> kl5yf0znsk .
Data [ 0 ] ) & ( uint8_T ) ( ( uint8_T ) ( 1 ) << 6 ) ) >> 6 ) << 6 ) ; } {
tempValue = tempValue | ( uint8_T ) ( ( uint8_T ) ( ( uint8_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 0 ] ) & ( uint8_T ) ( ( uint8_T ) ( 1 ) << 7 ) ) >> 7 )
<< 7 ) ; } unpackedValue = tempValue ; } outValue = ( real64_T ) (
unpackedValue ) ; } } { real64_T result = ( real64_T ) outValue ; if ( result
> 20.0 ) { result = 20.0 ; } _rtB -> pqqszpqhy0 = result ; } } } { { real64_T
outValue = 0 ; { { uint8_T unpackedValue = 0 ; { uint8_T tempValue = (
uint8_T ) ( 0 ) ; { tempValue = tempValue | ( uint8_T ) ( ( uint8_T ) ( (
uint8_T ) ( ( _rtB -> kl5yf0znsk . Data [ 2 ] ) & ( uint8_T ) ( ( uint8_T ) (
1 ) << 7 ) ) >> 7 ) << 0 ) ; } unpackedValue = tempValue ; } outValue = (
real64_T ) ( unpackedValue ) ; } } { real64_T result = ( real64_T ) outValue
; _rtB -> j0zzmp34zc = result ; } } } } } } } { if ( ( 8 == _rtB ->
kl5yf0znsk . Length ) && ( _rtB -> kl5yf0znsk . ID != INVALID_CAN_ID ) ) { if
( ( 39U == _rtB -> kl5yf0znsk . ID ) && ( 0U == _rtB -> kl5yf0znsk . Extended
) ) { { { { real64_T outValue = 0 ; { { uint16_T unpackedValue = 0 ; {
uint16_T tempValue = ( uint16_T ) ( 0 ) ; { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 6 ) ) >> 6 ) << 0 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 1 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 7 ) ) >> 7 )
<< 1 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 0 ) ) >> 0 ) << 2 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 ) << 3 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 ) << 4 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 0 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 3 ) ) >> 3 )
<< 5 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 4 ) ) >> 4 ) << 6 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 5 ) ) >> 5 ) << 7 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 6 ) ) >> 6 ) << 8 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 0 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 7 ) ) >> 7 )
<< 9 ) ; } unpackedValue = tempValue ; } outValue = ( real64_T ) (
unpackedValue ) ; } } { real64_T result = ( real64_T ) outValue ; result =
result * 0.1 ; if ( result > 100.0 ) { result = 100.0 ; } _rtB -> nayo1vncoi
= result ; } } } } } } } { if ( ( 8 == _rtB -> kl5yf0znsk . Length ) && (
_rtB -> kl5yf0znsk . ID != INVALID_CAN_ID ) ) { if ( ( 48U == _rtB ->
kl5yf0znsk . ID ) && ( 0U == _rtB -> kl5yf0znsk . Extended ) ) { { { {
real64_T outValue = 0 ; { { uint8_T unpackedValue = 0 ; { uint8_T tempValue =
( uint8_T ) ( 0 ) ; { tempValue = tempValue | ( uint8_T ) ( ( uint8_T ) ( (
uint8_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint8_T ) ( ( uint8_T ) (
1 ) << 0 ) ) >> 0 ) << 0 ) ; } { tempValue = tempValue | ( uint8_T ) ( (
uint8_T ) ( ( uint8_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint8_T ) (
( uint8_T ) ( 1 ) << 1 ) ) >> 1 ) << 1 ) ; } { tempValue = tempValue | (
uint8_T ) ( ( uint8_T ) ( ( uint8_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) &
( uint8_T ) ( ( uint8_T ) ( 1 ) << 2 ) ) >> 2 ) << 2 ) ; } { tempValue =
tempValue | ( uint8_T ) ( ( uint8_T ) ( ( uint8_T ) ( ( _rtB -> kl5yf0znsk .
Data [ 0 ] ) & ( uint8_T ) ( ( uint8_T ) ( 1 ) << 3 ) ) >> 3 ) << 3 ) ; } {
tempValue = tempValue | ( uint8_T ) ( ( uint8_T ) ( ( uint8_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 0 ] ) & ( uint8_T ) ( ( uint8_T ) ( 1 ) << 4 ) ) >> 4 )
<< 4 ) ; } { tempValue = tempValue | ( uint8_T ) ( ( uint8_T ) ( ( uint8_T )
( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint8_T ) ( ( uint8_T ) ( 1 ) << 5
) ) >> 5 ) << 5 ) ; } { tempValue = tempValue | ( uint8_T ) ( ( uint8_T ) ( (
uint8_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint8_T ) ( ( uint8_T ) (
1 ) << 6 ) ) >> 6 ) << 6 ) ; } { tempValue = tempValue | ( uint8_T ) ( (
uint8_T ) ( ( uint8_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint8_T ) (
( uint8_T ) ( 1 ) << 7 ) ) >> 7 ) << 7 ) ; } unpackedValue = tempValue ; }
outValue = ( real64_T ) ( unpackedValue ) ; } } { real64_T result = (
real64_T ) outValue ; if ( result > 10.0 ) { result = 10.0 ; } _rtB ->
gkuzcoifdz = result ; } } } } } } } { if ( ( 8 == _rtB -> kl5yf0znsk . Length
) && ( _rtB -> kl5yf0znsk . ID != INVALID_CAN_ID ) ) { if ( ( 49U == _rtB ->
kl5yf0znsk . ID ) && ( 0U == _rtB -> kl5yf0znsk . Extended ) ) { { { {
real64_T outValue = 0 ; { { int16_T unpackedValue = 0 ; { uint16_T tempValue
= ( uint16_T ) ( 0 ) ; { tempValue = tempValue | ( uint16_T ) ( ( uint16_T )
( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 5 ] ) & ( uint16_T ) ( (
uint16_T ) ( 1 ) << 0 ) ) >> 0 ) << 0 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 5 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 ) << 1 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 5 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 )
<< 2 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 5 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 3 ) ) >> 3 ) << 3 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 5 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 ) << 4 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 5 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >> 5 ) << 5 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 5 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 6 ) ) >> 6 )
<< 6 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 5 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 7 ) ) >> 7 ) << 7 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 4 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 0 ) ) >> 0 ) << 8 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 4 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 ) << 9 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 4 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 )
<< 10 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 4 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 3 ) ) >> 3 ) << 11 ) ; } { tempValue = tempValue | ( uint16_T ) (
( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 4 ] ) & (
uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 ) << 12 ) ; } { tempValue =
tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk
. Data [ 4 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >> 5 ) << 13 ) ;
} { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( (
_rtB -> kl5yf0znsk . Data [ 4 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 6 )
) >> 6 ) << 14 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) (
( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 4 ] ) & ( uint16_T ) ( (
uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 15 ) ; } unpackedValue = ( int16_T )
tempValue ; } outValue = ( real64_T ) ( unpackedValue ) ; } } { real64_T
result = ( real64_T ) outValue ; result = result * 0.01 ; if ( result < -
100.0 ) { result = - 100.0 ; } if ( result > 120.0 ) { result = 120.0 ; }
_rtB -> jq2ekrqarp = result ; } } } { { real64_T outValue = 0 ; { { int16_T
unpackedValue = 0 ; { uint16_T tempValue = ( uint16_T ) ( 0 ) ; { tempValue =
tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk
. Data [ 1 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 0 ) ) >> 0 ) << 0 ) ; }
{ tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB
-> kl5yf0znsk . Data [ 1 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 1 ) ) >>
1 ) << 1 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 2 ) ) >> 2 ) << 2 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 3 ) ) >> 3 ) << 3 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 ) << 4 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 1 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >> 5 )
<< 5 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 1 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 6 ) ) >> 6 ) << 6 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 7 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 0 ) ) >> 0 ) << 8 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 0 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 )
<< 9 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 2 ) ) >> 2 ) << 10 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 3 ) ) >> 3 ) << 11 ) ; } { tempValue = tempValue |
( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0
] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 ) << 12 ) ; } {
tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB
-> kl5yf0znsk . Data [ 0 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >>
5 ) << 13 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 6 ) ) >> 6 ) << 14 ) ; } { tempValue = tempValue | ( uint16_T ) (
( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & (
uint16_T ) ( ( uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 15 ) ; } unpackedValue = (
int16_T ) tempValue ; } outValue = ( real64_T ) ( unpackedValue ) ; } } {
real64_T result = ( real64_T ) outValue ; result = result * 0.01 ; if (
result < - 100.0 ) { result = - 100.0 ; } if ( result > 120.0 ) { result =
120.0 ; } _rtB -> k41jkaqxve = result ; } } } { { real64_T outValue = 0 ; { {
uint16_T unpackedValue = 0 ; { uint16_T tempValue = ( uint16_T ) ( 0 ) ; {
tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB
-> kl5yf0znsk . Data [ 7 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 0 ) ) >>
0 ) << 0 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 7 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 1 ) ) >> 1 ) << 1 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 7 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 ) << 2 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 7 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 3 ) ) >> 3 ) << 3 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 7 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 )
<< 4 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 7 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 5 ) ) >> 5 ) << 5 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 7 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 6 ) ) >> 6 ) << 6 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 7 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 7 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 6 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 0 ) ) >> 0 )
<< 8 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 6 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 1 ) ) >> 1 ) << 9 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 6 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 ) << 10 ) ; } { tempValue = tempValue |
( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 6
] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 3 ) ) >> 3 ) << 11 ) ; } {
tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB
-> kl5yf0znsk . Data [ 6 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >>
4 ) << 12 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 6 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 5 ) ) >> 5 ) << 13 ) ; } { tempValue = tempValue | ( uint16_T ) (
( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 6 ] ) & (
uint16_T ) ( ( uint16_T ) ( 1 ) << 6 ) ) >> 6 ) << 14 ) ; } { tempValue =
tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk
. Data [ 6 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 15 ) ;
} unpackedValue = tempValue ; } outValue = ( real64_T ) ( unpackedValue ) ; }
} { real64_T result = ( real64_T ) outValue ; result = result * 0.01 ; if (
result > 5.0 ) { result = 5.0 ; } _rtB -> j3yslhu15q = result ; } } } { {
real64_T outValue = 0 ; { { int16_T unpackedValue = 0 ; { uint16_T tempValue
= ( uint16_T ) ( 0 ) ; { tempValue = tempValue | ( uint16_T ) ( ( uint16_T )
( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 3 ] ) & ( uint16_T ) ( (
uint16_T ) ( 1 ) << 0 ) ) >> 0 ) << 0 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 3 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 ) << 1 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 3 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 )
<< 2 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 3 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 3 ) ) >> 3 ) << 3 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 3 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 ) << 4 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 3 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >> 5 ) << 5 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 3 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 6 ) ) >> 6 )
<< 6 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 3 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 7 ) ) >> 7 ) << 7 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 2 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 0 ) ) >> 0 ) << 8 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 2 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 ) << 9 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 2 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 )
<< 10 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 2 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 3 ) ) >> 3 ) << 11 ) ; } { tempValue = tempValue | ( uint16_T ) (
( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 2 ] ) & (
uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 ) << 12 ) ; } { tempValue =
tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk
. Data [ 2 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >> 5 ) << 13 ) ;
} { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( (
_rtB -> kl5yf0znsk . Data [ 2 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 6 )
) >> 6 ) << 14 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) (
( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 2 ] ) & ( uint16_T ) ( (
uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 15 ) ; } unpackedValue = ( int16_T )
tempValue ; } outValue = ( real64_T ) ( unpackedValue ) ; } } { real64_T
result = ( real64_T ) outValue ; result = result * 0.01 ; if ( result < -
100.0 ) { result = - 100.0 ; } if ( result > 120.0 ) { result = 120.0 ; }
_rtB -> eokzinugd1 = result ; } } } } } } } { if ( ( 8 == _rtB -> kl5yf0znsk
. Length ) && ( _rtB -> kl5yf0znsk . ID != INVALID_CAN_ID ) ) { if ( ( 50U ==
_rtB -> kl5yf0znsk . ID ) && ( 0U == _rtB -> kl5yf0znsk . Extended ) ) { { {
{ real64_T outValue = 0 ; { { uint16_T unpackedValue = 0 ; { uint16_T
tempValue = ( uint16_T ) ( 0 ) ; { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 3 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 0 ) ) >> 0 ) << 0 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 3 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 ) << 1 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 3 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 )
<< 2 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 3 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 3 ) ) >> 3 ) << 3 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 3 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 ) << 4 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 3 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >> 5 ) << 5 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 3 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 6 ) ) >> 6 )
<< 6 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 3 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 7 ) ) >> 7 ) << 7 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 2 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 0 ) ) >> 0 ) << 8 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 2 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 ) << 9 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 2 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 )
<< 10 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 2 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 3 ) ) >> 3 ) << 11 ) ; } { tempValue = tempValue | ( uint16_T ) (
( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 2 ] ) & (
uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 ) << 12 ) ; } { tempValue =
tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk
. Data [ 2 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >> 5 ) << 13 ) ;
} { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( (
_rtB -> kl5yf0znsk . Data [ 2 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 6 )
) >> 6 ) << 14 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) (
( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 2 ] ) & ( uint16_T ) ( (
uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 15 ) ; } unpackedValue = tempValue ; }
outValue = ( real64_T ) ( unpackedValue ) ; } } { real64_T result = (
real64_T ) outValue ; result = result * 0.01 ; if ( result > 5.0 ) { result =
5.0 ; } _rtB -> jko0pgof4i = result ; } } } { { real64_T outValue = 0 ; { {
uint16_T unpackedValue = 0 ; { uint16_T tempValue = ( uint16_T ) ( 0 ) ; {
tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB
-> kl5yf0znsk . Data [ 1 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 0 ) ) >>
0 ) << 0 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 1 ) ) >> 1 ) << 1 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 ) << 2 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 3 ) ) >> 3 ) << 3 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 1 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 )
<< 4 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 1 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 5 ) ) >> 5 ) << 5 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 6 ) ) >> 6 ) << 6 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 7 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 0 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 0 ) ) >> 0 )
<< 8 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 1 ) ) >> 1 ) << 9 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 ) << 10 ) ; } { tempValue = tempValue |
( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0
] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 3 ) ) >> 3 ) << 11 ) ; } {
tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB
-> kl5yf0znsk . Data [ 0 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >>
4 ) << 12 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 5 ) ) >> 5 ) << 13 ) ; } { tempValue = tempValue | ( uint16_T ) (
( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & (
uint16_T ) ( ( uint16_T ) ( 1 ) << 6 ) ) >> 6 ) << 14 ) ; } { tempValue =
tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk
. Data [ 0 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 15 ) ;
} unpackedValue = tempValue ; } outValue = ( real64_T ) ( unpackedValue ) ; }
} { real64_T result = ( real64_T ) outValue ; result = result * 0.01 ; if (
result > 5.0 ) { result = 5.0 ; } _rtB -> en1xdkkhph = result ; } } } { {
real64_T outValue = 0 ; { { int16_T unpackedValue = 0 ; { uint16_T tempValue
= ( uint16_T ) ( 0 ) ; { tempValue = tempValue | ( uint16_T ) ( ( uint16_T )
( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 7 ] ) & ( uint16_T ) ( (
uint16_T ) ( 1 ) << 0 ) ) >> 0 ) << 0 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 7 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 ) << 1 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 7 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 )
<< 2 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 7 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 3 ) ) >> 3 ) << 3 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 7 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 ) << 4 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 7 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >> 5 ) << 5 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 7 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 6 ) ) >> 6 )
<< 6 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 7 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 7 ) ) >> 7 ) << 7 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 6 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 0 ) ) >> 0 ) << 8 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 6 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 ) << 9 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 6 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 )
<< 10 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 6 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 3 ) ) >> 3 ) << 11 ) ; } { tempValue = tempValue | ( uint16_T ) (
( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 6 ] ) & (
uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 ) << 12 ) ; } { tempValue =
tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk
. Data [ 6 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >> 5 ) << 13 ) ;
} { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( (
_rtB -> kl5yf0znsk . Data [ 6 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 6 )
) >> 6 ) << 14 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) (
( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 6 ] ) & ( uint16_T ) ( (
uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 15 ) ; } unpackedValue = ( int16_T )
tempValue ; } outValue = ( real64_T ) ( unpackedValue ) ; } } { real64_T
result = ( real64_T ) outValue ; result = result * 0.01 ; if ( result < -
300.0 ) { result = - 300.0 ; } if ( result > 300.0 ) { result = 300.0 ; }
_rtB -> exfaie4dxn = result ; } } } { { real64_T outValue = 0 ; { { uint16_T
unpackedValue = 0 ; { uint16_T tempValue = ( uint16_T ) ( 0 ) ; { tempValue =
tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk
. Data [ 5 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 0 ) ) >> 0 ) << 0 ) ; }
{ tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB
-> kl5yf0znsk . Data [ 5 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 1 ) ) >>
1 ) << 1 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 5 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 2 ) ) >> 2 ) << 2 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 5 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 3 ) ) >> 3 ) << 3 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 5 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 ) << 4 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 5 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >> 5 )
<< 5 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 5 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 6 ) ) >> 6 ) << 6 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 5 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 7 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 4 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 0 ) ) >> 0 ) << 8 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 4 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 )
<< 9 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 4 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 2 ) ) >> 2 ) << 10 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 4 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 3 ) ) >> 3 ) << 11 ) ; } { tempValue = tempValue |
( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 4
] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 ) << 12 ) ; } {
tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB
-> kl5yf0znsk . Data [ 4 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >>
5 ) << 13 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 4 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 6 ) ) >> 6 ) << 14 ) ; } { tempValue = tempValue | ( uint16_T ) (
( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 4 ] ) & (
uint16_T ) ( ( uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 15 ) ; } unpackedValue =
tempValue ; } outValue = ( real64_T ) ( unpackedValue ) ; } } { real64_T
result = ( real64_T ) outValue ; result = result * 0.01 ; if ( result > 200.0
) { result = 200.0 ; } _rtB -> oyggjlagdg = result ; } } } } } } } { if ( ( 8
== _rtB -> kl5yf0znsk . Length ) && ( _rtB -> kl5yf0znsk . ID !=
INVALID_CAN_ID ) ) { if ( ( 52U == _rtB -> kl5yf0znsk . ID ) && ( 0U == _rtB
-> kl5yf0znsk . Extended ) ) { { { { real64_T outValue = 0 ; { { uint16_T
unpackedValue = 0 ; { uint16_T tempValue = ( uint16_T ) ( 0 ) ; { tempValue =
tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk
. Data [ 1 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 0 ) ) >> 0 ) << 0 ) ; }
{ tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB
-> kl5yf0znsk . Data [ 1 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 1 ) ) >>
1 ) << 1 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 2 ) ) >> 2 ) << 2 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 3 ) ) >> 3 ) << 3 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 ) << 4 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 1 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >> 5 )
<< 5 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 1 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 6 ) ) >> 6 ) << 6 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 7 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 0 ) ) >> 0 ) << 8 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 0 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 )
<< 9 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 2 ) ) >> 2 ) << 10 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 3 ) ) >> 3 ) << 11 ) ; } { tempValue = tempValue |
( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0
] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 ) << 12 ) ; } {
tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB
-> kl5yf0znsk . Data [ 0 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >>
5 ) << 13 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 6 ) ) >> 6 ) << 14 ) ; } { tempValue = tempValue | ( uint16_T ) (
( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & (
uint16_T ) ( ( uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 15 ) ; } unpackedValue =
tempValue ; } outValue = ( real64_T ) ( unpackedValue ) ; } } { real64_T
result = ( real64_T ) outValue ; result = result * 0.01 ; if ( result > 100.0
) { result = 100.0 ; } _rtB -> gf5x024mdm = result ; } } } { { real64_T
outValue = 0 ; { { uint16_T unpackedValue = 0 ; { uint16_T tempValue = (
uint16_T ) ( 0 ) ; { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 5 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 0 ) ) >> 0 ) << 0 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 5 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 ) << 1 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 5 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 ) << 2 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 5 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 3 ) ) >> 3 )
<< 3 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 5 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 4 ) ) >> 4 ) << 4 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 5 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 5 ) ) >> 5 ) << 5 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 5 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 6 ) ) >> 6 ) << 6 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 5 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 7 ) ) >> 7 )
<< 7 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 4 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 0 ) ) >> 0 ) << 8 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 4 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 ) << 9 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 4 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 ) << 10 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 4 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 3 ) ) >> 3 )
<< 11 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 4 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 4 ) ) >> 4 ) << 12 ) ; } { tempValue = tempValue | ( uint16_T ) (
( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 4 ] ) & (
uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >> 5 ) << 13 ) ; } { tempValue =
tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk
. Data [ 4 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 6 ) ) >> 6 ) << 14 ) ;
} { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( (
_rtB -> kl5yf0znsk . Data [ 4 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 7 )
) >> 7 ) << 15 ) ; } unpackedValue = tempValue ; } outValue = ( real64_T ) (
unpackedValue ) ; } } { real64_T result = ( real64_T ) outValue ; result =
result * 0.01 ; if ( result > 100.0 ) { result = 100.0 ; } _rtB -> fq2vay5ody
= result ; } } } { { real64_T outValue = 0 ; { { uint16_T unpackedValue = 0 ;
{ uint16_T tempValue = ( uint16_T ) ( 0 ) ; { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 3 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 0 ) ) >> 0 ) << 0 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 3 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 )
<< 1 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 3 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 2 ) ) >> 2 ) << 2 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 3 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 3 ) ) >> 3 ) << 3 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 3 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 ) << 4 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 3 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >> 5 )
<< 5 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 3 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 6 ) ) >> 6 ) << 6 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 3 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 7 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 2 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 0 ) ) >> 0 ) << 8 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 2 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 )
<< 9 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 2 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 2 ) ) >> 2 ) << 10 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 2 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 3 ) ) >> 3 ) << 11 ) ; } { tempValue = tempValue |
( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 2
] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 ) << 12 ) ; } {
tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB
-> kl5yf0znsk . Data [ 2 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >>
5 ) << 13 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 2 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 6 ) ) >> 6 ) << 14 ) ; } { tempValue = tempValue | ( uint16_T ) (
( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 2 ] ) & (
uint16_T ) ( ( uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 15 ) ; } unpackedValue =
tempValue ; } outValue = ( real64_T ) ( unpackedValue ) ; } } { real64_T
result = ( real64_T ) outValue ; result = result * 0.01 ; if ( result > 100.0
) { result = 100.0 ; } _rtB -> oct5i3dclr = result ; } } } } } } } { if ( ( 8
== _rtB -> kl5yf0znsk . Length ) && ( _rtB -> kl5yf0znsk . ID !=
INVALID_CAN_ID ) ) { if ( ( 53U == _rtB -> kl5yf0znsk . ID ) && ( 0U == _rtB
-> kl5yf0znsk . Extended ) ) { { { { real64_T outValue = 0 ; { { uint16_T
unpackedValue = 0 ; { uint16_T tempValue = ( uint16_T ) ( 0 ) ; { tempValue =
tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk
. Data [ 5 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 0 ) ) >> 0 ) << 0 ) ; }
{ tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB
-> kl5yf0znsk . Data [ 5 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 1 ) ) >>
1 ) << 1 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 5 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 2 ) ) >> 2 ) << 2 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 5 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 3 ) ) >> 3 ) << 3 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 5 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 ) << 4 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 5 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >> 5 )
<< 5 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 5 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 6 ) ) >> 6 ) << 6 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 5 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 7 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 4 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 0 ) ) >> 0 ) << 8 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 4 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 )
<< 9 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 4 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 2 ) ) >> 2 ) << 10 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 4 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 3 ) ) >> 3 ) << 11 ) ; } { tempValue = tempValue |
( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 4
] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 ) << 12 ) ; } {
tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB
-> kl5yf0znsk . Data [ 4 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >>
5 ) << 13 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 4 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 6 ) ) >> 6 ) << 14 ) ; } { tempValue = tempValue | ( uint16_T ) (
( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 4 ] ) & (
uint16_T ) ( ( uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 15 ) ; } unpackedValue =
tempValue ; } outValue = ( real64_T ) ( unpackedValue ) ; } } { real64_T
result = ( real64_T ) outValue ; result = result * 0.05 ; if ( result > 512.0
) { result = 512.0 ; } _rtB -> lpggkfrtle = result ; } } } { { real64_T
outValue = 0 ; { { uint16_T unpackedValue = 0 ; { uint16_T tempValue = (
uint16_T ) ( 0 ) ; { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 7 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 0 ) ) >> 0 ) << 0 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 7 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 ) << 1 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 7 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 ) << 2 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 7 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 3 ) ) >> 3 )
<< 3 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 7 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 4 ) ) >> 4 ) << 4 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 7 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 5 ) ) >> 5 ) << 5 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 7 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 6 ) ) >> 6 ) << 6 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 7 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 7 ) ) >> 7 )
<< 7 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 6 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 0 ) ) >> 0 ) << 8 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 6 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 ) << 9 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 6 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 ) << 10 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 6 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 3 ) ) >> 3 )
<< 11 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 6 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 4 ) ) >> 4 ) << 12 ) ; } { tempValue = tempValue | ( uint16_T ) (
( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 6 ] ) & (
uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >> 5 ) << 13 ) ; } { tempValue =
tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk
. Data [ 6 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 6 ) ) >> 6 ) << 14 ) ;
} { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( (
_rtB -> kl5yf0znsk . Data [ 6 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 7 )
) >> 7 ) << 15 ) ; } unpackedValue = tempValue ; } outValue = ( real64_T ) (
unpackedValue ) ; } } { real64_T result = ( real64_T ) outValue ; result =
result * 0.05 ; if ( result > 512.0 ) { result = 512.0 ; } _rtB -> bh5y31fggg
= result ; } } } { { real64_T outValue = 0 ; { { uint16_T unpackedValue = 0 ;
{ uint16_T tempValue = ( uint16_T ) ( 0 ) ; { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 0 ) ) >> 0 ) << 0 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 1 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 )
<< 1 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 1 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 2 ) ) >> 2 ) << 2 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 3 ) ) >> 3 ) << 3 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 ) << 4 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 1 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >> 5 )
<< 5 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 1 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 6 ) ) >> 6 ) << 6 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 1 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 7 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 0 ) ) >> 0 ) << 8 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 0 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 )
<< 9 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 2 ) ) >> 2 ) << 10 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 3 ) ) >> 3 ) << 11 ) ; } { tempValue = tempValue |
( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0
] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 ) << 12 ) ; } {
tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB
-> kl5yf0znsk . Data [ 0 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >>
5 ) << 13 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 6 ) ) >> 6 ) << 14 ) ; } { tempValue = tempValue | ( uint16_T ) (
( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 0 ] ) & (
uint16_T ) ( ( uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 15 ) ; } unpackedValue =
tempValue ; } outValue = ( real64_T ) ( unpackedValue ) ; } } { real64_T
result = ( real64_T ) outValue ; result = result * 4.0 ; if ( result >
256000.0 ) { result = 256000.0 ; } _rtB -> iedqu3wyv3 = result ; } } } { {
real64_T outValue = 0 ; { { uint16_T unpackedValue = 0 ; { uint16_T tempValue
= ( uint16_T ) ( 0 ) ; { tempValue = tempValue | ( uint16_T ) ( ( uint16_T )
( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 3 ] ) & ( uint16_T ) ( (
uint16_T ) ( 1 ) << 0 ) ) >> 0 ) << 0 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 3 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 ) << 1 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 3 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 )
<< 2 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 3 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 3 ) ) >> 3 ) << 3 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 3 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 ) << 4 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 3 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >> 5 ) << 5 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 3 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 6 ) ) >> 6 )
<< 6 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T
) ( ( _rtB -> kl5yf0znsk . Data [ 3 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 )
<< 7 ) ) >> 7 ) << 7 ) ; } { tempValue = tempValue | ( uint16_T ) ( (
uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 2 ] ) & ( uint16_T
) ( ( uint16_T ) ( 1 ) << 0 ) ) >> 0 ) << 8 ) ; } { tempValue = tempValue | (
uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 2 ]
) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 1 ) ) >> 1 ) << 9 ) ; } { tempValue
= tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB ->
kl5yf0znsk . Data [ 2 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 2 ) ) >> 2 )
<< 10 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( (
uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 2 ] ) & ( uint16_T ) ( ( uint16_T
) ( 1 ) << 3 ) ) >> 3 ) << 11 ) ; } { tempValue = tempValue | ( uint16_T ) (
( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 2 ] ) & (
uint16_T ) ( ( uint16_T ) ( 1 ) << 4 ) ) >> 4 ) << 12 ) ; } { tempValue =
tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( ( _rtB -> kl5yf0znsk
. Data [ 2 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 5 ) ) >> 5 ) << 13 ) ;
} { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) ( ( uint16_T ) ( (
_rtB -> kl5yf0znsk . Data [ 2 ] ) & ( uint16_T ) ( ( uint16_T ) ( 1 ) << 6 )
) >> 6 ) << 14 ) ; } { tempValue = tempValue | ( uint16_T ) ( ( uint16_T ) (
( uint16_T ) ( ( _rtB -> kl5yf0znsk . Data [ 2 ] ) & ( uint16_T ) ( (
uint16_T ) ( 1 ) << 7 ) ) >> 7 ) << 15 ) ; } unpackedValue = tempValue ; }
outValue = ( real64_T ) ( unpackedValue ) ; } } { real64_T result = (
real64_T ) outValue ; result = result * 4.0 ; if ( result > 256000.0 ) {
result = 256000.0 ; } _rtB -> aqr1qgvxlh = result ; } } } } } } } { if ( ( 8
== _rtB -> kl5yf0znsk . Length ) && ( _rtB -> kl5yf0znsk . ID !=
INVALID_CAN_ID ) ) { if ( ( 54U == _rtB -> kl5yf0znsk . ID ) && ( 0U == _rtB
-> kl5yf0znsk . Extended ) ) { { { { real64_T outValue = 0 ; { { uint8_T
unpackedValue = 0 ; { uint8_T tempValue = ( uint8_T ) ( 0 ) ; { tempValue =
tempValue | ( uint8_T ) ( ( uint8_T ) ( ( uint8_T ) ( ( _rtB -> kl5yf0znsk .
Data [ 0 ] ) & ( uint8_T ) ( ( uint8_T ) ( 1 ) << 7 ) ) >> 7 ) << 0 ) ; }
unpackedValue = tempValue ; } outValue = ( real64_T ) ( unpackedValue ) ; } }
{ real64_T result = ( real64_T ) outValue ; _rtB -> cbv12yahsp = result ; } }
} } } } } _rtDW -> adslwfyjax = 4 ; } } h2lktdts32 = look1_binlxpw ( _rtB ->
nayo1vncoi , _rtP -> P_37 , _rtP -> P_36 , 1U ) ; _rtB -> o4zz2qb3b2 = _rtP
-> P_38 * h2lktdts32 ; ssCallAccelRunBlock ( S , 1 , 68 , SS_CALL_MDL_OUTPUTS
) ; UNUSED_PARAMETER ( tid ) ; }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { ssCallAccelRunBlock ( S
, 1 , 70 , SS_CALL_MDL_UPDATE ) ; UNUSED_PARAMETER ( tid ) ; } static void
mdlInitializeSizes ( SimStruct * S ) { ssSetChecksumVal ( S , 0 , 2843244625U
) ; ssSetChecksumVal ( S , 1 , 1351101090U ) ; ssSetChecksumVal ( S , 2 ,
3951500832U ) ; ssSetChecksumVal ( S , 3 , 3375902078U ) ; { mxArray *
slVerStructMat = NULL ; mxArray * slStrMat = mxCreateString ( "simulink" ) ;
char slVerChar [ 10 ] ; int status = mexCallMATLAB ( 1 , & slVerStructMat , 1
, & slStrMat , "ver" ) ; if ( status == 0 ) { mxArray * slVerMat = mxGetField
( slVerStructMat , 0 , "Version" ) ; if ( slVerMat == NULL ) { status = 1 ; }
else { status = mxGetString ( slVerMat , slVerChar , 10 ) ; } }
mxDestroyArray ( slStrMat ) ; mxDestroyArray ( slVerStructMat ) ; if ( (
status == 1 ) || ( strcmp ( slVerChar , "8.6" ) != 0 ) ) { return ; } }
ssSetOptions ( S , SS_OPTION_EXCEPTION_FREE_CODE ) ; if ( ssGetSizeofDWork (
S ) != sizeof ( ifox4g5gjt ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal DWork sizes do "
"not match for accelerator mex file." ) ; } if ( ssGetSizeofGlobalBlockIO ( S
) != sizeof ( h3yzyoq5l5 ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal BlockIO sizes do "
"not match for accelerator mex file." ) ; } { int ssSizeofParams ;
ssGetSizeofParams ( S , & ssSizeofParams ) ; if ( ssSizeofParams != sizeof (
arab5wc1hw ) ) { static char msg [ 256 ] ; sprintf ( msg ,
"Unexpected error: Internal Parameters sizes do "
"not match for accelerator mex file." ) ; } } _ssSetDefaultParam ( S , (
real_T * ) & pdmidj5fkp ) ; } static void mdlInitializeSampleTimes (
SimStruct * S ) { } static void mdlTerminate ( SimStruct * S ) { }
#include "simulink.c"
