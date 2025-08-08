#include "TridniDioda.hpp"
#include <Arduino.h>

TridniDioda::TridniDioda(int PinInit, int periodInit)
{
    Pin = PinInit;
    Period = periodInit;
    nextTime = Period;
}
void TridniDioda::update(){
    if (millis() - nextTime >= Period){
        digitalWrite(Pin, !digitalRead(Pin));
        nextTime = millis();
    }
}