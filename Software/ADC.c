#include "ADC.h"

void adcInit(void){

	
	SIM->SCGC5 |= SIM_SCGC5_PORTE_MASK;	
	
	SIM->SCGC6 |= SIM_SCGC6_ADC0_MASK;
	
	ADC0->CFG1 |= ADC_CFG1_ADICLK(0b01);
	
	ADC0->CFG1 |= ADC_CFG1_ADIV(0b01);
	
	ADC0->CFG1 |= ADC_CFG1_ADLSMP_MASK;
	
	ADC0->CFG2 |= ADC_CFG2_ADHSC_MASK;
	
	ADC0->CFG2 |= ADC_CFG2_ADLSTS(0b11);
	
	ADC0->SC2 |= ADC_SC2_REFSEL(0b00);
	
	ADC0->SC3 |= ADC_SC3_AVGE_MASK;
	
	ADC0->SC3 |= ADC_SC3_AVGS(0b01);
		
	adcCalibration();

}
			
void adcCalibration(void){
	uint32_t cal;	
	
	while(1){
		ADC0->SC3 |= ADC_SC3_CAL_MASK;
		while(ADC0->SC3 & ADC_SC3_CAL_MASK){}
		if (!(ADC0->SC3 & ADC_SC3_CALF_MASK))
			break;
	}
	
	cal = ADC0->CLP0 + ADC0->CLP1 + ADC0->CLP2 + ADC0->CLP3 + ADC0->CLP4 + ADC0->CLPD + ADC0->CLPS;
	cal = cal/2;
	cal |= (1UL << 15);
	ADC0->PG = ADC_PG_PG(cal);
	
	cal = ADC0->CLM0+ ADC0->CLM1 + ADC0->CLM2 + ADC0->CLM3 + ADC0->CLM4 + ADC0->CLMD + ADC0->CLMS;
	cal = cal/2;
	cal |= (1UL << 15);
	ADC0->MG = ADC_MG_MG(cal);
	
	ADC0->CFG1 |= ADC_CFG1_MODE(0b00);
	ADC0->SC1[0] &= ~ADC_SC1_DIFF_MASK;

	
	//ADC0->SC1[0] = ADC_SC1_ADCH(0b11010);
	//ADC0->SC1[0] |= ADC_SC1_AIEN_MASK;
	
	
}

uint8_t adcRead(uint8_t channel){

	ADC0->SC1[0] = ADC_SC1_ADCH(channel);
	
	while (!(ADC0->SC1[0] & ADC_SC1_COCO_MASK));
	
	return (ADC0->R[0]);

}
