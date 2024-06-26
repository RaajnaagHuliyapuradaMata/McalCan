#ifndef _TYPES_MCALCAN_H
#define _TYPES_MCALCAN_H
/******************************************************************************/
/* File   : Types_McalCan.h                                                   */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ComStack_Cfg.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
typedef enum{
      CAN_OK
   ,  CAN_NOT_OK
   ,  CAN_BUSY
} Type_McalCan_eReturn;

typedef enum{
      CAN_T_START,
      CAN_T_STOP,
      CAN_T_SLEEP,
      CAN_T_WAKEUP,
      CAN_T_MAXTRANSITION
}Type_McalCan_eStateTransition;

typedef uint16 Type_McalCan_HwHandle;
typedef uint32 Type_McalCan_Id;

typedef struct{
   uint8*          sdu;
   Type_McalCan_Id id;
   Type_tIdPdu     swPduHandle;
   uint8           length;
}Type_McalCan_Pdu;

typedef struct{
   Type_McalCan_Id       CanId;
   Type_McalCan_HwHandle Hoh;
   uint8                 ControllerId;
}Can_HwType;

typedef enum{
      CANTRCV_TRCVMODE_NORMAL = 0,
      CANTRCV_TRCVMODE_SLEEP,
      CANTRCV_TRCVMODE_STANDBY
}CanTrcv_TrcvModeType;

typedef enum{
      CANTRCV_WUMODE_ENABLE = 0,
      CANTRCV_WUMODE_DISABLE,
      CANTRCV_WUMODE_CLEAR
}CanTrcv_TrcvWakeupModeType;

typedef enum{
      CANTRCV_WU_ERROR = 0,
      CANTRCV_WU_NOT_SUPPORTED,
      CANTRCV_WU_BY_BUS,
      CANTRCV_WU_INTERNALLY,
      CANTRCV_WU_RESET,
      CANTRCV_WU_POWER_ON,
      CANTRCV_WU_BY_PIN
}CanTrcv_TrcvWakeupReasonType;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
#endif

