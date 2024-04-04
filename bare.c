#include<util/delay.h>
#include<stdbool.h>
#include "bare.h"
#define PORTB *((unsigned char*)0x25)

void l(bool go,int num){
	if(go){
		if(num % 2 == 0){
			PORTB = 32; 
			
		}else{
			PORTB = 8;
		}
	}else{
		PORTB = 0;
	}
}
