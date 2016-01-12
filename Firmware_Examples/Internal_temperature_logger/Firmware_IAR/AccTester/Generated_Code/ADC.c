/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : ADC.c
**     Project     : AccTester
**     Processor   : SKEAZN64MLC2
**     Component   : Init_ADC
**     Version     : Component 01.000, Driver 01.00, CPU db: 3.00.000
**     Repository  : Kinetis
**     Compiler    : IAR ARM C Compiler
**     Date/Time   : 2016-01-10, 18:21, # CodeGen: 14
**     Abstract    :
**          This file implements the ADC (ADC) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
**     Settings    :
**          Component name                                 : ADC
**          Device                                         : ADC
**          Settings                                       :
**            Clock gate                                   : Enabled
**            Clock settings                               :
**              Input clock select                         : Bus clock/2
**              Prescaler                                  : 8
**              Frequency                                  : 1000 kHz
**              Long sample time                           : Disabled
**            Conversion mode                              : Single
**            Result data format                           : 12-bit right
**            Low power mode                               : Disabled
**            Conversion trigger                           : HW
**            Single conversion time - Single-ended        : 23.31 us
**            Single conversion time - Differential        : Differential mode not supported
**            Additional conversion time - Single-ended    : 20.00 us
**            Additional conversion time - Differential    : Differential mode not supported
**            Compare settings                             :
**              Compare                                    : Disabled
**              Compare value 1                            : 0
**              Compare function                           : Result < CV1
**            Voltage reference                            : Default reference pin pair
**          FIFO settings                                  :
**            FIFO depth                                   : 5-level FIFO
**            FIFO scan mode                               : Enabled
**            FIFO compare function                        : OR
**          Pins/Signals                                   :
**            Channel 0                                    : Disabled
**            Channel 1                                    : Disabled
**            Channel 2                                    : Disabled
**            Channel 3                                    : Disabled
**            Channel 4                                    : Disabled
**            Channel 5                                    : Disabled
**            Channel 6                                    : Disabled
**            Channel 7                                    : Disabled
**            Channel 8                                    : Disabled
**            Channel 9                                    : Enabled
**              Single input                               : Enabled
**                Channel 9 single input                   : PTC1/FTM2_CH1/ADC0_SE9
**                Channel 9 single input signal            :
**            Channel 10                                   : Enabled
**              Single input                               : Enabled
**                Channel 10 single input                  : PTC2/FTM2_CH2/ADC0_SE10
**                Channel 10 single input signal           :
**            Channel 11                                   : Enabled
**              Single input                               : Enabled
**                Channel 11 single input                  : PTC3/FTM2_CH3/ADC0_SE11
**                Channel 11 single input signal           :
**            Channel 12                                   : Disabled
**            Channel 13                                   : Disabled
**            Channel 14                                   : Disabled
**            Channel 15                                   : Disabled
**            Channel 16                                   : Disabled
**            Channel 17                                   : Disabled
**            Channel 18                                   : Disabled
**            Channel 19                                   : Disabled
**            Channel 20                                   : Disabled
**            Channel 21                                   : Disabled
**            Channel 22                                   : Enabled
**              Single input                               : Enabled
**                Channel 22 single input                  : TempSensor
**                Channel 22 single input signal           :
**            Channel 23                                   : Enabled
**              Single input                               : Enabled
**                Channel 23 single input                  : IntBandgap
**                Channel 23 single input signal           :
**            Channel 24                                   : Disabled
**            Channel 25                                   : Disabled
**            Channel 26                                   : Disabled
**            Channel 27                                   : Disabled
**            Channel 28                                   : Disabled
**            Channel 29                                   : Disabled
**            Channel 30                                   : Disabled
**            Trigger                                      : Disabled
**          Interrupts/DMA                                 :
**            Interrupt                                    : INT_ADC0
**            Interrupt request                            : Enabled
**            Interrupt priority                           : 0 (Highest)
**            ISR name                                     : ADC_Isr
**            Conversion complete interrupt                : Enabled
**          Initialization                                 :
**            Measurement preparation                      : Enabled
**              Channel FIFO initialization                : 5
**                Channel FIFO input0                      :
**                  Initial channel for FIFO input 0       : Channel 9
**                Channel FIFO input1                      :
**                  Initial channel for FIFO input 0       : Channel 10
**                Channel FIFO input2                      :
**                  Initial channel for FIFO input 0       : Channel 11
**                Channel FIFO input3                      :
**                  Initial channel for FIFO input 0       : Channel 22
**                Channel FIFO input4                      :
**                  Initial channel for FIFO input 0       : Channel 23
**            Call Init method                             : yes
**     Contents    :
**         Init - void ADC_Init(void);
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
** @file ADC.c
** @version 01.00
** @brief
**          This file implements the ADC (ADC) module initialization
**          according to the Peripheral Initialization settings, and
**          defines interrupt service routines prototypes.
*/
/*!
**  @addtogroup ADC_module ADC module documentation
**  @{
*/

/* MODULE ADC. */

#include "ADC.h"
  /* Including shared modules, which are used in the whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Cpu.h"


/*
** ===================================================================
**     Method      :  ADC_Init (component Init_ADC)
**     Description :
**         This method initializes registers of the ADC module
**         according to the Peripheral Initialization settings.
**         Call this method in user code to initialize the module. By
**         default, the method is called by PE automatically; see "Call
**         Init method" property of the component for more details.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
void ADC_Init(void)
{
  /* SIM_SCGC: ADC=1 */
  SIM_SCGC |= SIM_SCGC_ADC_MASK;
  /* ADC_APCTL1: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,ADPC=0x0E00 */
  ADC_APCTL1 = ADC_APCTL1_ADPC(0x0E00);
  /* ADC_SC4: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,ASCANE=1,ACFSEL=0,??=0,??=0,AFDEP=4 */
  ADC_SC4 = (ADC_SC4_ASCANE_MASK | ADC_SC4_AFDEP(0x03));
  /* ADC_CV: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,CV=0 */
  ADC_CV = ADC_CV_CV(0x00);
  /* ADC_SC3: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,ADLPC=0,ADIV=3,ADLSMP=0,MODE=2,ADICLK=1 */
  ADC_SC3 = (ADC_SC3_ADIV(0x03) | ADC_SC3_MODE(0x02) | ADC_SC3_ADICLK(0x01));
  /* ADC_SC2: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,ADTRG=1,ACFE=0,ACFGT=0,REFSEL=0 */
  ADC_SC2 = (uint32_t)((ADC_SC2 & (uint32_t)~(uint32_t)(
             ADC_SC2_ACFE_MASK |
             ADC_SC2_ACFGT_MASK |
             ADC_SC2_REFSEL(0x03) |
             0xFFFFFF00U
            )) | (uint32_t)(
             ADC_SC2_ADTRG_MASK
            ));
  ADC_SC1 = ADC_SC1_ADCH(9);
  ADC_SC1 = ADC_SC1_ADCH(10);
  ADC_SC1 = ADC_SC1_ADCH(11);
  ADC_SC1 = ADC_SC1_AIEN_MASK | ADC_SC1_ADCH(22);
}

/*
** ###################################################################
**
**  The interrupt service routine(s) must be implemented
**  by user in one of the following user modules.
**
**  If the "Generate ISR" option is enabled, Processor Expert generates
**  ISR templates in the CPU event module.
**
**  User modules:
**      main.c
**      Events.c
**
** ###################################################################
PE_ISR(ADC_Isr)
{
// NOTE: The routine should include actions to clear the appropriate
//       interrupt flags.
//
}
*/


/* END ADC. */
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
