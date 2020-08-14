#include <avr/io.h>
#ifdef _SIMULATE
#include simAVRHeader.h
#endif

int main(void){



        DDRA = 0x00;
        PORTA = 0x02;// 0000 0001 means door is open
        // 0000 0010 means light is sensed
        DDRB = 0xFF;    // Configure port B's 8 pins as outputs.
        PORTB = 0x00;
        inputB0 = PINB & 0x01;
        PA0 = dooropen;
        PA1 = lightsensed;
        PB0 = LEDilluminated;

        unsigned char doorsensor = 0;
        unsigned char lightsensor = 0;
        unsigned char led = 0;

        while(1){

        if (doorsensor = 2 && lightsensor = 1){
                led = 1;
        }
                else{
                led = 0;
        }





        PORTB = led;
        }

return 1;



}
