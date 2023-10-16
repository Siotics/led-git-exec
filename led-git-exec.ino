#include "ledLibrary.h"

const uint8_t led = 3, led1 = 4, led2 = 5;

void setup()
{
    pinMode(led, OUTPUT);
}

void loop()
{
    TurnExec(led, 1);
    TurnExec(led, 0);
    TurnLoop(3, 5, 1);
}
