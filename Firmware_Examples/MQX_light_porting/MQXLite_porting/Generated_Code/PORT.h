/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : PORT.h
**     Project     : MQXLite_porting
**     Processor   : SKEAZN64MLC2
**     Component   : Init_PORT
**     Version     : Component 01.000, Driver 01.00, CPU db: 3.00.000
**     Repository  : Kinetis
**     Compiler    : IAR ARM C Compiler
**     Date/Time   : 2016-01-20, 22:06, # CodeGen: 0
**     Abstract    :
**          This file implements the PORT (PORT) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
**     Settings    :
**          Component name                                 : PORT
**          Device                                         : PORT
**          Settings                                       : 
**            PTA                                          : 
**              Pin 0                                      : Initialize
**                Pullup                                   : No initialization
**              Pin 1                                      : Initialize
**                Pullup                                   : No initialization
**              Pin 2                                      : Initialize
**                Pullup                                   : No initialization
**              Pin 3                                      : Initialize
**                Pullup                                   : No initialization
**              Pin 4                                      : Do not initialize
**              Pin 5                                      : Do not initialize
**              Pin 6                                      : Initialize
**                Pullup                                   : No initialization
**              Pin 7                                      : Initialize
**                Pullup                                   : No initialization
**            PTB                                          : 
**              Pin 0                                      : Initialize
**                Pullup                                   : No initialization
**              Pin 1                                      : Initialize
**                Pullup                                   : No initialization
**              Pin 2                                      : Initialize
**                Pullup                                   : No initialization
**              Pin 3                                      : Initialize
**                Pullup                                   : No initialization
**              Pin 4                                      : Initialize
**                Pullup                                   : No initialization
**                High drive                               : No initialization
**              Pin 5                                      : Initialize
**                Pullup                                   : No initialization
**                High drive                               : No initialization
**              Pin 6                                      : Initialize
**                Pullup                                   : No initialization
**              Pin 7                                      : Initialize
**                Pullup                                   : No initialization
**            PTC                                          : 
**              Pin 0                                      : Initialize
**                Pullup                                   : No initialization
**              Pin 1                                      : Initialize
**                Pullup                                   : No initialization
**              Pin 2                                      : Initialize
**                Pullup                                   : No initialization
**              Pin 3                                      : Initialize
**                Pullup                                   : No initialization
**              Pin 4                                      : Do not initialize
**              Pin 5                                      : Initialize
**                Pullup                                   : No initialization
**              Pin 6                                      : Initialize
**                Pullup                                   : No initialization
**              Pin 7                                      : Initialize
**                Pullup                                   : No initialization
**            PTD                                          : 
**              Pin 0                                      : Initialize
**                Pullup                                   : No initialization
**                High drive                               : No initialization
**              Pin 1                                      : Initialize
**                Pullup                                   : No initialization
**                High drive                               : Enable
**              Pin 2                                      : Initialize
**                Pullup                                   : No initialization
**              Pin 3                                      : Initialize
**                Pullup                                   : No initialization
**            Filters                                      : 
**              Filter division                            : 
**                Set 1                                    : BUSCLK/2
**                Set 2                                    : BUSCLK/32
**                Set 3                                    : LPOCLK
**              Filter selection                           : 
**                PTA                                      : BUSCLK
**                PTB                                      : BUSCLK
**                PTC                                      : BUSCLK
**                PTD                                      : BUSCLK
**                KBI0                                     : No filter
**                KBI1                                     : No filter
**                NMI                                      : FLTDIV3
**                RST                                      : No filter
**          Initialization                                 : 
**            Call Init method                             : yes
**     Contents    :
**         Init - void PORT_Init(void);
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file PORT.h
** @version 01.00
** @brief
**          This file implements the PORT (PORT) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
*/         
/*!
**  @addtogroup PORT_module PORT module documentation
**  @{
*/         

#ifndef PORT_H_
#define PORT_H_

/* MODULE PORT. */

/* Including shared modules, which are used in the whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Cpu.h"

/* Peripheral base address parameter */
#define PORT_DEVICE PORT_BASE_PTR


/*
** ===================================================================
**     Method      :  PORT_Init (component Init_PORT)
**     Description :
**         This method initializes registers of the PORT module
**         according to the Peripheral Initialization settings.
**         Call this method in user code to initialize the module. By
**         default, the method is called by PE automatically; see "Call
**         Init method" property of the component for more details.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void PORT_Init(void);


/* END PORT. */
#endif /* #ifndef __PORT_H_ */
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
