#ifndef LED_LIBRARY
#define LED_LIBRARY

void TurnExec(uint8_t led, uint8_t act);
void TurnLoop(uint8_t start, uint8_t end, int increment);
int ChangePointer(int &source, int change);

#endif