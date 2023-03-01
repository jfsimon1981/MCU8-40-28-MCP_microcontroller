/******************************************************************************/
/* Files to Include                                                           */
/******************************************************************************/

#if defined(__XC)
    #include <xc.h>         /* XC8 General Include File */
#elif defined(HI_TECH_C)
    #include <htc.h>        /* HiTech General Include File */
#endif

#include <stdint.h>         /* For uint8_t definition */
#include <stdbool.h>        /* For true/false definition */

#include "user.h"

/******************************************************************************/
/* User Functions                                                             */
/******************************************************************************/

/* <Initialize variables in user.h and insert code for user algorithms.> */

void InitApp(void)
{
    /* Setup analog functionality and port direction */
    
    ANSEL=0x00;
    ANSELH=0x00;    
    
    // PORTA=0x00;
    // TRISA=0b00000000;
    
    // PORTC=0x00;
    // TRISC=0b11111111;
    TRISC5 = 0;

    // PORTB=0x00;
    // TRISB=0b11000000;

    /* Initialize peripherals */

    T2CON=0b01001110; // POSTSCALER 10 TMR2 ON PRESCALER 16
    PR2=124; // 125 x 5 x 16 = 10000 Cycles = 10 ms Fosc 8 MHz
    TRISB=0b00000000;

    /* Prescaler WDT 1:128 */
    /* PSA=1;
    PS2=1;
    PS1=1;
    PS0=1; */
    
    /* Enable interrupts */

    T0IE=0;
    TMR1IE=0;
    TMR2IE=1;
    PEIE=1;
    GIE=1;
}

