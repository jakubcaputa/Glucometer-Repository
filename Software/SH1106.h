/*
	*Project: Glucometer
	*Author: Patryk Okruta, Jakub Caputa
*/

#include "MKL46Z4.h"
#include "SPI.h"

#define MOSI 16
#define SCLK 15
#define CS	 14
#define DC	6
#define RST	7

#define COLUMNOFFSET 0x02

#define WIDTH    128
#define HEIGHT   64

#define MOSI_PORT		PTA
#define MOSI_PORTx		PORTA
#define MOSI_MUX		MOSI_PORTx->PCR[MOSI] =  PORT_PCR_MUX(2)
#define MOSI_DDDR		MOSI_PORT->PDDR |= (1UL << MOSI)

#define SCLK_PORT		PTA
#define SCLK_PORTx		PORTA
#define SCLK_MUX		SCLK_PORTx->PCR[SCLK] = PORT_PCR_MUX(2)
#define SCLK_DDDR		SCLK_PORT->PDDR |= (1UL << SCLK)

#define CS_PORT			PTA
#define CS_PORTx		PORTA
#define CS_MUX			CS_PORTx->PCR[CS] = PORT_PCR_MUX(1)
#define CS_DDDR			CS_PORT->PDDR |= (1UL << CS)

#define DC_PORT			PTA
#define DC_PORTx		PORTA
#define DC_MUX			DC_PORTx->PCR[DC] = PORT_PCR_MUX(1)
#define DC_DDDR			DC_PORT->PDDR |= (1UL << DC)

#define RST_PORT		PTA
#define RST_PORTx		PORTA
#define RST_MUX			RST_PORTx->PCR[RST] = PORT_PCR_MUX(1)
#define RST_DDDR		RST_PORT->PDDR |= (1UL << RST)

#define CS_LO			CS_PORT->PCOR |= (1UL << CS)
#define CS_HI			CS_PORT->PSOR |= (1UL << CS)

#define DC_LO			DC_PORT->PCOR |= (1UL << DC)
#define DC_HI			DC_PORT->PSOR |= (1UL << DC)

#define RST_LO			RST_PORT->PCOR |= (1UL << RST)
#define RST_HI			RST_PORT->PSOR |= (1UL << RST)

#define REFRESH_MIN		0x80
#define REFRESH_MID		0xB0
#define REFRESH_MAX		0xF0
	
#define SSD1306_SETCONTRAST 			0x81
#define SSD1306_DISPLAYALLON_RESUME		0xA4
#define SSD1306_DISPLAYALLON			0xA5
#define SSD1306_NORMALDISPLAY			0xA6
#define SSD1306_INVERTDISPLAY			0xA7
#define SSD1306_DISPLAYOFF				0xAE
#define SSD1306_DISPLAYON				0xAF

#define SSD1306_SETDISPLAYOFFSET		0xD3
#define SSD1306_SETCOMPINS				0xDA

#define SSD1306_SETVCOMDETECT			0xDB

#define SSD1306_SETDISPLAYCLOCKDIV		0xD5
#define SSD1306_SETPRECHARGE			0xD9

#define SSD1306_SETMULTIPLEX			0xA8

#define SSD1306_SETLOWCOLUMN			0x00
#define SSD1306_SETHIGHCOLUMN			0x10

#define SSD1306_SETSTARTLINE			0x40

#define SSD1306_MEMORYMODE				0x20

#define SSD1306_COMSCANINC				0xC0
#define SSD1306_COMSCANDEC				0xC8

#define SSD1306_SEGREMAP				0xA0

#define SSD1306_CHARGEPUMP				0x8D

#define SSD1306_EXTERNALVCC				0x1
#define SSD1306_SWITCHCAPVCC			0x2

#define SSD1306_ACTIVATE_SCROLL			0x2F
#define SSD1306_DEACTIVATE_SCROLL		0x2E
#define SSD1306_SET_VERTICAL_SCROLL_AREA	0xA3
#define SSD1306_RIGHT_HORIZONTAL_SCROLL		0x26
#define SSD1306_LEFT_HORIZONTAL_SCROLL		0x27
#define SSD1306_VERTICAL_AND_RIGHT_HORIZONTAL_SCROLL	0x29
#define SSD1306_VERTICAL_AND_LEFT_HORIZONTAL_SCROLL		0x2A

static uint8_t pixelArray[WIDTH*HEIGHT/8];


void oledInit(void);
void sendData(uint8_t);
void sendCmd(uint8_t);
void clearArray(void);
void sendArray(void);
void set(int16_t, uint8_t);
void setColumnAddress(uint8_t);
