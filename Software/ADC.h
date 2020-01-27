#include "MKL46Z4.h"

#define stripDetectChannel 0b00001
#define bloodDetectChannel 0b00101
#define glucoseMeasureChannel 0b00010

void adcInit(void);
void adcCalibration(void);
uint8_t adcRead(uint8_t);
