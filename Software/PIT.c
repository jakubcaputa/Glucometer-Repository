#include "PIT.h"
#include "buzzer.h"
#include "delay.h"

#define PIT_IRQ_NBR (IRQn_Type)22

uint8_t insertStrip = 0;
uint8_t measuring = 0;
uint8_t insertBlood = 0;

void pitInit(void){

	SIM->SCGC6 |= SIM_SCGC6_PIT_MASK;    	// enable clock to PIT module

	PIT->CHANNEL[0].LDVAL = 2399999;			// load starting value
	
	PIT->CHANNEL[1].LDVAL = 99999999;
	
	NVIC_ClearPendingIRQ(PIT_IRQ_NBR);				/* Clear NVIC any pending interrupts on PIT */
	
	NVIC_EnableIRQ(PIT_IRQ_NBR);							/* Enable NVIC interrupts source for PIT */
	
	NVIC_SetPriority (PIT_IRQ_NBR, 1);			/* Set PIT interrupt priority level  */
	
	PIT->MCR &= ~PIT_MCR_MDIS_MASK;
	
	PIT->MCR |= PIT_MCR_FRZ_MASK;
	
	PIT->CHANNEL[0].TCTRL &= PIT_TCTRL_CHN_MASK;
	
	PIT->CHANNEL[1].TCTRL &= PIT_TCTRL_CHN_MASK;
	
	
	PIT->CHANNEL[0].TCTRL |= PIT_TCTRL_TIE_MASK;
	
	PIT->CHANNEL[1].TCTRL |= PIT_TCTRL_TIE_MASK;

	PIT->CHANNEL[0].TCTRL |= PIT_TCTRL_TEN_MASK;
	
	
	sendCmd(SSD1306_DISPLAYOFF);
	
	sendCmd(SSD1306_DISPLAYON);
	
	
	
	
               
}



void PIT_IRQHandler(void){
           
   
    if((PIT->CHANNEL[0].TFLG & PIT_TFLG_TIF_MASK) == PIT_TFLG_TIF_MASK){
       
        if(adcRead(stripDetectChannel) < stripDetectValue){  
			
			
				if(measuring == 1){
				
					insertBlood = 0;
					measuring = 0;
				}
			
				if(insertStrip == 0){
				
					insertBlood = 0;
					
					insertStrip = 1;
					
					measuring = 0;
					
					sendCmd(SSD1306_DISPLAYOFF);
		   
					sendArray();
		   
					sendCmd(SSD1306_DISPLAYON);
			   
					sendString("glucometer", 45, 7);
			   
					sendString("insert", 35, 3);
					
					sendString("teststrip", 60, 3);
				}
				
				
			}
         if(adcRead(stripDetectChannel) > stripDetectValue){
		 
			if(insertBlood == 0){
			
				insertBlood = 1;
				
				insertStrip = 0;
				
				measuring = 0;
				
				sendCmd(SSD1306_DISPLAYOFF);
		   
				sendArray();
		   
				sendCmd(SSD1306_DISPLAYON);
			   
				sendString("glucometer", 45, 7);
			   
				sendString("insert", 40, 3);
				
				sendString("blood", 70, 3);
			}
		 
		 }
       
            if(adcRead(bloodDetectChannel) > bloodDetectValue){
   
				
				
				if(measuring == 0){
					
				//	buzz(10);
				
					measuring = 1;
					
					insertStrip = 0;
					
					insertBlood = 1;
					
					sendCmd(SSD1306_DISPLAYOFF);
				   
					sendArray();
		   
					sendCmd(SSD1306_DISPLAYON);
			   
					sendString("glucometer", 45, 7);
			   
					sendString("measuring", 43, 3);
					
					PIT->CHANNEL[1].TCTRL |= PIT_TCTRL_TEN_MASK;
				}
			
			}
      
        PIT->CHANNEL[0].TFLG &= PIT_TFLG_TIF_MASK; 
   
	}
    if((PIT->CHANNEL[1].TFLG & PIT_TFLG_TIF_MASK) == PIT_TFLG_TIF_MASK){
       
		
			measuring = 1;
					
			insertStrip = 0;
		
            sendCmd(SSD1306_DISPLAYOFF);
		
			sendArray();
       
            sendCmd(SSD1306_DISPLAYON);
           
            sendGlucoseResult(adcRead(glucoseMeasureChannel), 0, 4);
       
            sendString("glucometer", 45, 7);
       
            sendString("mgdl", 90, 3);
		
		    PIT->CHANNEL[1].TCTRL &= ~PIT_TCTRL_TEN_MASK;
       
            PIT->CHANNEL[1].TFLG &= PIT_TFLG_TIF_MASK;
       

    }
}