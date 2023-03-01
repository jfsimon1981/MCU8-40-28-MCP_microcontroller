/******************************************************************************/
/*Files to Include                                                            */
/******************************************************************************/

#if defined(__XC)
    #include <xc.h>         /* XC8 General Include File */
#elif defined(HI_TECH_C)
    #include <htc.h>        /* HiTech General Include File */
#endif

#include <stdint.h>         /* For uint8_t definition */
#include <stdbool.h>        /* For true/false definition */

/******************************************************************************/
/* Interrupt Routines                                                         */
/******************************************************************************/

/* Baseline devices don't have interrupts. Note that some PIC16's 
 * are baseline devices.  Unfortunately the baseline detection macro is 
 * _PIC12 */
#ifndef _PIC12

void __interrupt() isr(void)
{

#if 1
    
    if(TMR2IF)
    {
        TMR2IF=0; /* Clear Interrupt Flag */
        // Toggle user LED
        {
            static bool led_state = 0;
            static uint8_t counter = 0;
            if (counter++ == 100) {
                counter = 0;
                if (!led_state) {
                    led_state = 1;
                    RC5 = 1;
                } else {
                    led_state = 0;
                    RC5 = 0;
                }
            }
        }
    }
    else
    {
        /* Unhandled interrupts */
    }

#endif

}
#endif


