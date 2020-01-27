/*
*File: SPI.c
*Project: Glucometer
*Author: Patryk Okruta, Jakub Caputa
*/

#include "SPI.h"
#include "MKL46Z4.h"
#include "SH1106.h"

void spiInit(void){
	
	SIM->SCGC4 |= SIM_SCGC4_SPI0_MASK;		// enable clock to spi0 module
	
	SIM->SCGC5 |= SIM_SCGC5_PORTA_MASK;		// enable clock to portA
	
	DC_MUX;									// pin6 in portA is gpio - used as Data/Command signal
	
	RST_MUX;								// pin7 in portA is gpio - used as Reset signal
	
	MOSI_MUX;								// pin16 in portA is SPI0 MOSI
	
	SCLK_MUX;								// pin15 in portA is SPI0 SCLK
	
	CS_MUX;									// pin14 in portA is CS
	
	DC_DDDR;								// direction - output
	
	RST_DDDR;								// direction - output
	
	CS_DDDR;
	
	CS_LO;

	SPI0->C1 |= SPI_C1_SPE_MASK;		// SPI System Enable
	
	SPI0->C1 |= SPI_C1_MSTR_MASK;		// Master mode selected
	
	SPI0->C1 &= ~SPI_C1_CPOL_MASK;		// Clock polarity - active high
	
	SPI0->C1 &= ~SPI_C1_CPHA_MASK;		// middle of the transmission
	
	SPI0->C2 &= ~SPI_C2_SPIMODE_MASK;	// 8 bit mode
	
	SPI0->C2 &= ~SPI_C2_SPC0_MASK;		// not bidirectional
	
	SPI0->C1 &= ~SPI_C1_LSBFE_MASK;		// transmission starts with msb
	
	SPI0->BR |= SPI_BR_SPPR(0b000);		// baud rates..
	
	SPI0->BR |= SPI_BR_SPR(0b110);		// ...
	
	SPI0->C2 &= ~SPI_C2_MODFEN_MASK;		// slave select
	
	SPI0->C1 |= SPI_C1_SSOE_MASK;		// is gpio
	
}

