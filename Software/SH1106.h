/*
	*Project: Glucometer
	*Author: Patryk Okruta, Jakub Caputa
*/

#include "MKL46Z4.h"
#include "SPI.h"
#define CMD    0
#define DAT    1

#define WIDTH    128
#define HEIGHT   64

static int8_t pixelArray[128][8];

void oledInit(void);
void sendData(int8_t, int8_t);
void drawPixel(int, int);
void fillArray(int8_t);
void sendArray(void);
