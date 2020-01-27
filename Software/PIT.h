#include "MKL46Z4.h"
#include "SH1106.h"
#include "fonts.h"
#include "ADC.h"

#define stripDetectValue 50
#define bloodDetectValue 70

enum detections {none, stripInsterted, bloodInsterted};
void pitInit(void);
void PIT_IRQHandler(void);
