/*
*File: SH1106.c
*Project: Glucometer
*Author: Patryk Okruta, Jakub Caputa
*/

#include "SH1106.h"
#include "delay.h"

void oledInit(){
	
	RST_HI;
	delay(100);
	RST_LO;
	delay(100);
	RST_HI;
	sendCmd(SSD1306_DISPLAYOFF);
	sendCmd(SSD1306_SETDISPLAYCLOCKDIV);
	sendCmd(REFRESH_MAX);
	sendCmd(SSD1306_SETDISPLAYOFFSET);
	sendCmd(0x0);
	sendCmd(SSD1306_SETSTARTLINE | 0x0);
	sendCmd(SSD1306_CHARGEPUMP);
	sendCmd(0x14);
	sendCmd(SSD1306_MEMORYMODE);
	sendCmd(0x00);
	sendCmd(SSD1306_SEGREMAP | 0x1);
	sendCmd(SSD1306_COMSCANINC);
	sendCmd(SSD1306_SETCONTRAST);
	sendCmd(0xCF);
	sendCmd(SSD1306_SETPRECHARGE);
	sendCmd(SSD1306_SETMULTIPLEX);
	sendCmd(0x3F);
	sendCmd(SSD1306_SETCOMPINS);
	sendCmd(0x12);
	sendCmd(SSD1306_DISPLAYALLON_RESUME);
	sendCmd(SSD1306_NORMALDISPLAY);
	
	sendCmd(SSD1306_DISPLAYON);
	
	setColumnAddress(0x00);
	
	sendCmd(SSD1306_SETSTARTLINE | 0x00);
}

void sendData(uint8_t data){
	
	DC_HI;
	
	if((SPI0->S & SPI_S_SPTEF_MASK) == SPI_S_SPTEF_MASK) SPI0->DL = data;
	
	delay(1);
}

void sendCmd(uint8_t cmd){
	
	DC_LO;

	if((SPI0->S & SPI_S_SPTEF_MASK) == SPI_S_SPTEF_MASK) SPI0->DL = cmd;

	delay(1);
}


void setColumnAddress(uint8_t columnAddress){

	columnAddress = columnAddress + COLUMNOFFSET;
	
	uint8_t lowerColumnAddress = (columnAddress & 0x0F);
	
	uint8_t higherColumnAddress = (columnAddress & 0xF0);
	
	sendCmd(SSD1306_SETLOWCOLUMN | lowerColumnAddress);
	
	sendCmd(SSD1306_SETHIGHCOLUMN | (higherColumnAddress >> 4));
}

void clearArray(){

	uint16_t i;
	
	for(i = 0; i < WIDTH*HEIGHT/8; i++){
		
		pixelArray[i] = 0x00;
	}
}

void sendArray(){

	uint16_t i = 0;
	
	uint8_t j = 0xB7;
	
	sendCmd(j);
	
	while(i < HEIGHT*WIDTH/8){
		
		if(i % WIDTH == 0){
			
			sendCmd(j);
			
			setColumnAddress(0x00);
			
			j--;
		}
		
		sendData(pixelArray[i]);
		
		i++;
	}
}
void set(int16_t xd, uint8_t xd2){

	pixelArray[xd] = xd2;
}

/*
void setDisplayHeaders(){
	
}

void setGlucoseAmount(uint8_t glucose){

}
*/

