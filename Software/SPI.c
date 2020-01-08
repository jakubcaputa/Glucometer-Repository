#include "SPI.h"
#include "MKL46Z4.h"


void spiInit(void){
	
	SIM->SCGC4 |= SIM_SCGC4_SPI0_MASK;		// enable clock to spi0 module
	
	SIM->SCGC5 |= SIM_SCGC5_PORTA_MASK;		// enable clock to portA
	
	PORTA->PCR[6] |= PORT_PCR_MUX(1);		// pin6 in portA is gpio - used as Data/Command signal
	
	PORTA->PCR[7] |= PORT_PCR_MUX(1);		// pin7 in portA is gpio - used as Reset signal
	
	PORTA->PCR[16] |= PORT_PCR_MUX(2);		// pin16 in portA is SPI0 MOSI
	
	PORTA->PCR[15] |= PORT_PCR_MUX(2);		// pin15 in portA is SPI0 SCLK
	
	PORTA->PCR[14] |= PORT_PCR_MUX(1);		// pin14 in portA is SS
	
	PTA->PDDR |= 1UL << DATA_CMD;			// direction - output
	
	PTA->PDDR |= 1UL << RESET;				// direction - output
	
	PTA->PDDR |= 1UL << SLAVE;
	
	PTA->PCOR |= 1UL << SLAVE;

	SPI0->C1 |= SPI_C1_SPE_MASK;		// SPI System Enable
	
	SPI0->C1 |= SPI_C1_MSTR_MASK;		// Master mode selected
	
	SPI0->C1 &= ~SPI_C1_CPOL_MASK;		// Clock polarity - active high
	
	SPI0->C1 &= ~SPI_C1_CPHA_MASK;		// middle of the transmission
	
	SPI0->C2 &= ~SPI_C2_SPIMODE_MASK;	// 8 bit mode
	
	SPI0->C2 &= ~SPI_C2_SPC0_MASK;		// not bidirectional
	
	SPI0->C1 &= ~SPI_C1_LSBFE_MASK;		// transmission startsccc with msb
	
	SPI0->BR |= SPI_BR_SPPR(0b000);		// baud rates..
	
	SPI0->BR |= SPI_BR_SPR(0b0110);		// ...
	
	SPI0->C2 &= ~SPI_C2_MODFEN_MASK;		// slave select
	
	SPI0->C1 |= SPI_C1_SSOE_MASK;		// is gpio
	
}
