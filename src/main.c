
#include <avr/io.h>
#include <avr/power.h>
// #include <stdio.h>
#include <util/delay.h>
#include <compat/deprecated.h>

int main(void)
{
   // This will divide the Main Clock by 2
//    clock_prescale_set(clock_div_2);

   // Set up LED on board and toggle twice
   sbi(DDRE,6);

    while (1)
    {
        sbi(PORTE,6);
        _delay_ms(500);
        cbi(PORTE,6);
        _delay_ms(500);
    }
}
