//include this .c file's header file
#include "Robot.h"

//static function prototypes, functions only called in this file

int main(void)
{
  DDRA = 0xFF;//put PORTA into output mode
  PORTA = 0; 

  while(1)//main loop
  {
    for (int i=0; i<2; i++)// Loops through pins 0 to 7 to blink 8 LEDs
    {
      _delay_ms(500);     //500 millisecond delay
      PORTA |= (1<<i);  //writes HIGH to pin i of PORTA, turn LED on 
                        // this line is equivalent to PORTA = PORTA | 0b00001000   which writes a HIGH to pin 3 of PORTA
      _delay_ms(500);   //500 millisecond delay
      PORTA &= ~(1<<i); //writes LOW to pin i of PORTA, turn LED off
    }
  }
  return(1);
}//end main