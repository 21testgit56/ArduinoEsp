#include "DisplejCitac.hpp"
#include <Arduino.h>

DisplejCitac::DisplejCitac(int pin1, int pin2, int pin3){
    pins[0] = pin1;
    pins[1] = pin2;
    pins[2] = pin3;
}

void DisplejCitac::init(){
    for (int i = 0; i < 3; ++i){
        pinMode(pins[i], OUTPUT);
    }
}

void DisplejCitac::setNumber(int n){
    count = n; // store the number to be displayed
    for (int i = 0; i < 3; ++i){
        if (n & (1 << i)) { // jiný zápis 2^i
            digitalWrite(pins[i], HIGH); // set pin on 1 if the number is a non-zero
        }
        else {
            digitalWrite(pins[i], LOW);
        }
    }
}

void DisplejCitac::update(){
    setNumber(count+1);
}