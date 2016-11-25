#include<msp430.h>

const int GREEN_LED = BIT6;
const int RED_LED = BIT0; 
const int BUTTON = BIT3;


void toggleGreen(){
    P1OUT ^= GREEN_LED;
}

void setUp(){
    P1DIR |= GREEN_LED;
    P1REN |= BUTTON;
    P1OUT |= BUTTON;
}

void main(){
   WDTCTL = WDTPW | WDTHOLD;
   setUp();
   while(1){
    if ((P1IN & BUTTON) == 0){ __delay_cycles(5000);
    if ((P1IN & BUTTON) == 0) toggleGreen();
    }
    while((P1IN & BUTTON ) == 0);
   }
    
}
