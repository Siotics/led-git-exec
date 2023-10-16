#include "ledLibrary.h"

const uint8_t led = 3, led1 = 4, led2 = 5;
int source = 1;

void setup()
{
    Serial.begin(9600);
    pinMode(led, OUTPUT);
}

void loop()
{
    TurnExec(led, 1);
    TurnExec(led, 0);
    TurnLoop(3, 5, 1);
    ChangePointer(source, 5);
}
