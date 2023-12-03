#include <xc.h>
#include "config.h"
#include "keypad_4x4.h"

//Display buttons pressed
//Display SIM900A status
//Eeprom save
//UI
int save_phone(char phone)
{
return 0;    
}
int menu(char k)
{
   
}
int main()
{
    //Keypad vars
    char key;
    TRISB = keypad_dir;
    
    while(1) //In setting mode
    {
        key = keypressed();
        
    }
    while(1) //In alarm mode
    {
        
    }
    return 0;
}
                