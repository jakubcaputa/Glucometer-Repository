/*
*File: main.c
*Project: Glucometer
*Author: Patryk Okruta, Jakub Caputa
*/

#include "MKL46Z4.h"

#include "SPI.h"
#include "SH1106.h"
#include "delay.h"
#include "ADC.h"
#include "PIT.h"
#include "buzzer.h"

int main(void){
	
	clearArray();
	adcInit();
	spiInit();
	oledInit();
	sendArray();
	pitInit();
	
	buzzerInit();
	
	while(1){
		

		//sendArray();
		
	//	delay(1000);
		
	}
}	
