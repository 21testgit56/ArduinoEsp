#include <Arduino.h>
#include <cudliky.hpp>
#include <ledky.hpp>
#include <Servo.h>
#include <TridniDioda.hpp>
#include <DisplejCitac.hpp>
#define REDP 4
#define BLUE 2
#define REDL 15
 
Servo myservo = Servo();

int servoPin = 16;
int val = 18;
void sinusovka(int, int, int, int);
unsigned long nextTime = 0;
unsigned long nextTimeD1 = 0;
unsigned long nextTimeD2 = 0;
TridniDioda LED1 = TridniDioda(4, 1000);
TridniDioda LED2 = TridniDioda(2, 400);

DisplejCitac display(16, 17, 18);

// put function declarations here:
void Blink4(int pin, int delayTime, unsigned long& ChangeTime);

void setup() {
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(21, OUTPUT);
  pinMode(13, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  Serial.begin(9600);
  display.init();
  display.setNumber(15);
  delay(1000);
};

void loop() {
  
  display.update();
  delay(1000);

  /*
  int y = 90;
  int x = sin(y * 2*PI / 180);
  printf("%d\n", x);
  */
};








  /*
  // (isBtnPressed(13) && isBtnPressed(12)) ? digitalWrite(4, 1) : digitalWrite(4, 0);
  if(!isBtnPressed(13) && !isBtnPressed(12)){
    digitalWrite(4, 1);
  }
  else{
    digitalWrite(4, 0);
  }
  
  delay(1000);
  LEDPruh1(3);
  delay(1000);
  LEDPruh2Inf();

  
  delay(1000);
  int i = 0;
  for (int j = 10; j<=220; j+= 5){
    if (j<50){
      delay(250);
      Blink2A(RED, j);
      Blink2A(YELLOW, j);
      Blink2A(GREEN, j);
    }
    else if (j>50){
      j+=25;
      delay(250);
      Blink2A(RED, j);
      Blink2A(YELLOW, j);
      Blink2A(GREEN, j);
  };
  };


  Slope(RED, 10, 100, 50, 4);
  analogWrite(RED, 100);
  DeSlope(RED, 100, 10, 100, 4);
 // Up R, Up G, Up B, Down B, 
  Slope(R, 0, 255, 1000, 1);
  Slope(G, 0, 255, 1000, 1);
  Slope(B, 0, 255, 1000, 1);
  DeSlope(B, 255, 0, 1000, 1);
  DeSlope(R, 255, 0, 1000, 1);
  DeSlope(G, 255, 0, 1000, 1);
  Slope(B, 0, 255, 1000, 1);
  Slope(R, 0, 255, 1000, 1);
  DeSlope(B, 255, 0, 1000, 1);
  DeSlope(R, 255, 0, 1000, 1);
  */
         


  /*
  digitalWrite(RED, 0);
  delay(10);
  digitalWrite(YELLOW, 0);
  delay(10);
  digitalWrite(GREEN, 0);
  delay(1000);
  digitalWrite(RED, 1);
  delay(10);
  digitalWrite(YELLOW, 1);
  delay(10);
  digitalWrite(GREEN, 1);
  delay(5000);
  BlinkInc();
  Blink(RED);
  Blink(YELLOW);
  Blink(GREEN);
  BlinkInc();
  */


// put function definitions here:






