#include "ledLibrary.h"

void TurnExec(uint8_t led, uint8_t act)
{
    digitalWrite(led, act);
}

void TurnLoop(uint8_t start, uint8_t end, int increment)
{
    if (start < end)
    {
        Serial.println("Start cannot be smaller");
    }
    for (int i = start; i <= end; i += increment)
    {
        digitalWrite(i, 1);
        delay(500);
        digitalWrite(i, 0);
    }
}

int ChangePointer(int &source, int change)
{
    return source = change;
}