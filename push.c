#include<util/delay.h>
#include<stdbool.h>
#include "bare.h"

#define PORTB *((volatile uint8_t*)0x25)
#define PINB *((volatile uint8_t*)0x23)
#define DDRB *((volatile uint8_t*)0x24)






int main(int argc, char *argv[]) {
    bool go = true;
    DDRB = 40;  
    int num = 0;
    while(1) {
        if(PINB & (1<<4)) {
            if(PINB & (1<<4)) {
                if(go) {
                    	go = false;
                } else {
                	num++;
                	go = true;
                }
                while(PINB & (1<<4)) {
                    _delay_ms(10);
                }
            }
        }
        l(go,num);
    }
    return 0;
}




