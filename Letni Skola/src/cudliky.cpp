#include <Arduino.h>

bool isBtnPressed(int Pin){
  return digitalRead(Pin);
};