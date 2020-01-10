/*
	*Project: Glucometer
	*Author: Patryk Okruta, Jakub Caputa
*/

#include "delay.h"

void delay(uint32_t value){
	uint32_t delay, x;
	
	for(x=0; x < value; x++){
		for(delay=0; delay < 10000; delay++){};
	}
}
