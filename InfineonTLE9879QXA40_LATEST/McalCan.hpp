#pragma once
/******************************************************************************/
/* File   : McalCan.hpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstMcalCan.hpp"
#include "CfgMcalCan.hpp"
#include "McalCan_core.hpp"
#include "infMcalCan_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_McalCan:
      INTERFACES_EXMCALPORTED_MCALCAN
      public abstract_module
   ,  public class_McalCan_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstMcalCan_Type* lptrConst = (ConstMcalCan_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, MCALCAN_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, MCALCAN_CONST,       MCALCAN_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALCAN_CONFIG_DATA, MCALCAN_APPL_CONST) lptrCfgModule
      );
      FUNC(void, MCALCAN_CODE) DeInitFunction      (void);
      FUNC(void, MCALCAN_CODE) MainFunction        (void);
      MCALCAN_CORE_FUNCTIONALITIES

      FUNC(void, MCALCAN_CODE) MainFunction_Write  (void);
      FUNC(void, MCALCAN_CODE) MainFunction_Read   (void);
      FUNC(void, MCALCAN_CODE) MainFunction_BusOff (void);
      FUNC(void, MCALCAN_CODE) MainFunction_Wakeup (void);
      FUNC(void, MCALCAN_CODE) MainFunction_Mode   (void);
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_McalCan, MCALCAN_VAR) McalCan;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

