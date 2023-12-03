#include "keypad_4x4.h"
#include <xc.h>

char keypressed()
{
    while (1)
    {
    if ((RB4==1)&&(RB0==1))
        return '1';
    if ((RB4==1)&&(RB1==1))
        return '2';
    if ((RB4==1)&&(RB2==1))
        return '3';
    if ((RB4==1)&&(RB3==1))
        return 'A';
    if ((RB5==1)&&(RB0==1))
        return '4';
    if ((RB5==1)&&(RB1==1))
        return '5';
    if ((RB5==1)&&(RB2==1))
        return '6';
    if ((RB5==1)&&(RB3==1))
        return 'B';
    if ((RB6==1)&&(RB0==1))
        return '7';
    if ((RB6==1)&&(RB1==1))
        return '8';
    if ((RB6==1)&&(RB2==1))
        return '9';
    if ((RB6==1)&&(RB3==1))
        return 'C';
    if ((RB7==1)&&(RB0==1))
        return '*';
    if ((RB7==1)&&(RB1==1))
        return '0';
    if ((RB7==1)&&(RB2==1))
        return '#';
    if ((RB7==1)&&(RB3==1))
        return 'D';
    }
}

