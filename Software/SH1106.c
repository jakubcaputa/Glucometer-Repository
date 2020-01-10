/*
	*Project: Glucometer
	*Author: Patryk Okruta, Jakub Caputa
*/

#include "SH1106.h"
#include "delay.h"

void oledInit(){
	
	resetSET();
	delay(1000);
	resetCLR();
	delay(1000);
	resetSET();
	sendData(0xAE, CMD); // Set display OFF
	sendData(0xD5, CMD); //Set display clock divide ratio/oscillator frequency
	sendData(0x80, CMD);
	sendData(0xA8, CMD); //Set multiplex ratio
	sendData(0x3F, CMD);
	sendData(0xD3, CMD); //Set display offset
	sendData(0x00, CMD);
	sendData(0x40, CMD); //Set display start line
	sendData(0x8D, CMD); //Set charge pump
	sendData(0x14, CMD); //VCC generated by internal DC/DC circuit
	sendData(0xA1, CMD); //Set segment re-map
	sendData(0xC0, CMD); //Set COM output scan direction
	sendData(0xDA, CMD); //Set COM pins hardware configuration
	sendData(0x12, CMD);
	sendData(0x81, CMD); //Set contrast control
	sendData(0xCF, CMD);
	sendData(0xD9, CMD); //Set pre-changed period
	sendData(0xF1, CMD);
	sendData(0xDB, CMD); //Set VCOMH Deselected level
	sendData(0x40, CMD);
	sendData(0xA4, CMD); //Set entire display on/off
	sendData(0xA6, CMD); //Set normal display
	sendData(0x20, CMD); //Set memory address mode
	sendData(0x00, CMD); //Horizontal
	sendData(0x00, CMD); //Set lower column start address for page addressing mode
	sendData(0x10, CMD); //Set higher column start address for page addressing mode
	sendData(0x40, CMD); //Set display start line
	sendData(0x33, CMD);
	sendData(0xAF, CMD); //Set display on
	delay(100);

}

void sendData(int8_t data, int8_t dc){

	if(dc == CMD){	// command

		cmdSET();
		delay(10);
		while((SPI0->S & SPI_S_SPTEF_MASK) == SPI_S_SPTEF_MASK) SPI0->DL = data;
	}
	else{			// data

		dataSET();
		delay(10);
		while((SPI0->S & SPI_S_SPTEF_MASK) == SPI_S_SPTEF_MASK) SPI0->DL = data;
	}
}

void drawPixel(int x, int y){

  if((x < 0) || (x >= WIDTH) || (y < 0) || (y >= HEIGHT)){

    return;
  }

  else{
		int8_t pixel = 0x00;
		int8_t shiftdata = 0x01;
		pixel |= shiftdata << (y%8 - 1);
		pixelArray[x-1][y/8] |= pixel;
		sendArray();
  }
}

void fillArray(int8_t data){

	int i,j;

	for(i = 0; i < (HEIGHT/8); i++){
		for(j = 0; j < WIDTH; j++){
			pixelArray[j][i] = data;
		}
	}
}

void sendArray(){

	int w,k;

	for(w = 0; w < 8; w++){

		for(k = 0; k < 128; k++){

			sendData(pixelArray[k][w], DAT);
		}
	}
}

