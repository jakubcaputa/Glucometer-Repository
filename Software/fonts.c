#include "fonts.h"
#include "SH1106.h"

void setLetterInArray(char c, uint8_t columnAddress, uint8_t pageAddress){
	
	int16_t startAddress2 = (pageAddress+1) * WIDTH + columnAddress;
	
	int16_t startAddress = (pageAddress) * WIDTH + columnAddress;
	
	int16_t i;
	
	uint8_t letter = (int8_t) c;
	
	int8_t letterStart = Arial9ptInfo[letter-97].charStart;
	
	int8_t letterWidth = Arial9ptInfo[letter-97].charWidth;
	
	
	for(i = letterStart + 1; i < (letterStart+ 2*letterWidth); i = i + 2){
	
		set(startAddress2,Arial9ptBitmaps[i]);
		
		startAddress2++;
	}
	
	for(i = letterStart; i < (letterStart + 2*letterWidth); i = i + 2){
	
		set(startAddress,Arial9ptBitmaps[i]);
		
		startAddress++;
	}
}
void sendLetter(char c, uint8_t columnAddress, uint8_t pageAddress){

	uint8_t letter = (uint8_t) c;
	
	uint8_t letterWidth = Arial9ptInfo[letter - 97].charWidth;
	
	if((columnAddress + letterWidth) > 127) return;
	
	uint8_t letterStart = Arial9ptInfo[letter - 97].charStart;
	
	sendCmd(pageAddresses[pageAddress-1]);
	
	setColumnAddress(columnAddress);
	
	uint8_t i;
	
	for(i = letterStart + 1; i < (letterStart + 2 * letterWidth); i = i + 2){
	
		sendData(Arial9ptBitmaps[i]);
	}
	
	sendCmd(pageAddresses[pageAddress]);
	
	setColumnAddress(columnAddress);
	
	uint8_t j;
	
	for(j = letterStart; j < (letterStart + 2 * letterWidth); j = j + 2){
	
		sendData(Arial9ptBitmaps[j]);	
	}	
}

void sendString(char *letters, uint8_t columnAddress, uint8_t pageAddress){

	if(*letters != '\0'){
		
		sendLetter(*letters, columnAddress, pageAddress);
	}

	columnAddress = columnAddress + Arial9ptInfo[((uint8_t) *letters) - 97].charWidth;
	
	letters++;

	int i;
	
	while(*letters != '\0'){
		
		sendLetter(*letters, columnAddress, pageAddress);
		
		columnAddress = columnAddress + Arial9ptInfo[(uint8_t) *letters - 97].charWidth;
		
		letters++;
	}
	
}

void sendGlucoseResult(uint16_t number, uint8_t columnAddress, uint8_t pageAddress){

	//const uint8_t digitLength = 5;
	
	uint8_t i;
	
	uint8_t digits[] = {(number/100)%10, (number/10)%10, number%10};
	
	if (number > 99) i = 3;
	
	else {
		i = 2; 
		columnAddress = columnAddress + 25;
	}
	
	uint8_t k;
	
	int16_t w;
		
	while(i > 0){
		
		for(k = 0; k < 5; k++){
		
			sendCmd(pageAddresses[pageAddress - k]);
			
			setColumnAddress(columnAddress);
			
			uint16_t digitStart = Arial36ptInfo[digits[3-i]].charStart;
			
			uint8_t digitWidth =  Arial36ptInfo[digits[3-i]].charWidth;
			
			for(w = digitStart + k; w < (digitStart + 5 * digitWidth); w = w + 5){
			
				sendData(Arial36ptBitmaps[w]);
			}
		}
	
		columnAddress = columnAddress + 25;
		
		i --; 
		
	}
	
}

