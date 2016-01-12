/* ###################################################################
**     Filename    : Events.c
**     Project     : AccTester
**     Processor   : SKEAZN64MLC2
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : IAR ARM C Compiler
**     Date/Time   : 2016-01-08, 13:59, # CodeGen: 0
**     Abstract    :
**         This is user's event module.
**         Put your event handler code here.
**     Contents    :
**         Cpu_OnNMIINT - void Cpu_OnNMIINT(void);
**
** ###################################################################*/
/*!
** @file Events.c
** @version 01.00
** @brief
**         This is user's event module.
**         Put your event handler code here.
*/
/*!
**  @addtogroup Events_module Events module documentation
**  @{
*/
/* MODULE Events */

#include "Cpu.h"
#include "Events.h"
#include "SysTick_PDD.h"
#include "App.h"

#ifdef __cplusplus
extern "C" {
#endif


/* User includes (#include below this line is not maintained by Processor Expert) */

/*
** ===================================================================
**     Event       :  Cpu_OnNMIINT (module Events)
**
**     Component   :  Cpu [MKE02Z64QH2]
*/
/*!
**     @brief
**         This event is called when the Non maskable interrupt had
**         occurred. This event is automatically enabled when the [NMI
**         interrupt] property is set to 'Enabled'.
*/
/* ===================================================================*/
void Cpu_OnNMIINT(void)
{
  /* Write your code here ... */
}



PE_ISR(SysTick_ISR)
{
  SysTick_PDD_ClearInterruptFlag(SysTick_BASE_PTR);

  SysTick_ISR_procedure(  );

}

PE_ISR(ADC_Isr)
{
  ADC_isr_procedure();
}

/* END Events */

#ifdef __cplusplus
}  /* extern "C" */
#endif

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
