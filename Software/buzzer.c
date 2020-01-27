#include "buzzer.h"


void buzzerInit(void){

	SIM->SCGC5 |= SIM_SCGC5_PORTE_MASK;
	
	PORTE->PCR[2] |= PORT_PCR_MUX(1); 
	
	PTE->PDDR |= 1UL << 2; 
	
	//PTE->PCOR |= 1UL << 6;  

}

void buzz(uint8_t period){

	PTE->PSOR = 1UL << 2; 
	
	delay(period);
	
	PTE->PCOR = 1UL << 2;
}


