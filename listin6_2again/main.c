#include <msp430.h> 

int sum(int,int);
/*
 * main.c
 */
int main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
    int a = 1;
    int b = 2;
    int c = sum(a,b);
    return 0;
}

int sum(int a, int b){
    return a+b;
}
