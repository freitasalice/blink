/*
 * File:   main.c
 * Author: 21192692
 *
 * Created on 12 de Fevereiro de 2021, 15:51
 */


#include <xc.h>
#include "config.h"

void main(void) 
{
    TRISDbits.TRISD1 = 0 ;
    
    while (1)
    {
            PORTDbits.RD1 = 1 ;
            __delay_ms (500) ;
            PORTDbits.RD1 = 0 ;
            __delay_ms (500) ;
    }      
        
}
