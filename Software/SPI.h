/*
	*Project: Glucometer
	*Author: Patryk Okruta, Jakub Caputa
*/

#define DATA_CMD  6
#define RESET  7
#define SLAVE 14

void spiInit(void);
void resetSET(void);
void resetCLR(void);
void dataSET(void);
void cmdSET(void);
