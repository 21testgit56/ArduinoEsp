#include <Arduino.h>
#include <Servo.h>
#define RED 4
#define YELLOW 16 
#define GREEN 17
#define R 4
#define G 16
#define B 17

int Pins[8] = {2, 4, 16, 17, 5, 18, 19, 21};
static Servo myservo = Servo();

void LEDPruh2Inf(){
  for(int i=0; i < 8; i++){
  digitalWrite(Pins[i], 1);
  };
  int i = 0;
  while (i<36){
  if(i<33){
    digitalWrite(Pins[i], 0);
  };
  if(i>=3){
    digitalWrite(Pins[i - 3], 1);
  };
  delay(50);
  i++;
  if(i == 11){
    i = 0;
  }
};

};

void LEDPruh1(int pocet){
  for (int j = 1; j < pocet; j++){
    for (int i = 0; i < 12; i++){
      if(i<8){
        digitalWrite(Pins[i], 1);
      };
      if(i >= 4) {
        digitalWrite(Pins[i-4], 0);
      };
      delay(50);
  };
};
};

void LEDGradualPowerUp(){
  for (int i = 0; i < 8; i++){
    digitalWrite(Pins[i], 1);
    delay(100);
  }
};

void LEDSerieCheck(){
  digitalWrite(0, 1);
  digitalWrite(4, 1);
  digitalWrite(16, 1);
  digitalWrite(17, 1);
  digitalWrite(5, 1);
  digitalWrite(18, 1);
  digitalWrite(19, 1);
  digitalWrite(21, 1);
  delay(1000);
  digitalWrite(0, 0);
  digitalWrite(4, 0);
  digitalWrite(16, 0);
  digitalWrite(17, 0);
  digitalWrite(5, 0);
  digitalWrite(18, 0);
  digitalWrite(19, 0);
  digitalWrite(21, 0);
  delay(1000);
};

void Blink(int diodeNum){
  delay(1);
  digitalWrite(diodeNum, 1);
  delay(1000);
  digitalWrite(diodeNum, 0);
  delay(1);
};

void Blink2(int diodeNum){
  delay(1);
  digitalWrite(diodeNum, 1);
  delay(50);
  digitalWrite(diodeNum, 0);
  delay(50);
};

void Blink3(int diodeNum, int delayTime){
  delay(1);
  digitalWrite(diodeNum, 1);
  delay(delayTime);
  digitalWrite(diodeNum, 0);
  delay(delayTime);
};

void Blink4(int pin, int delayTime, unsigned long& nextTime){
  if (millis() - nextTime >= delayTime){
    digitalWrite(pin, !digitalRead(pin));
    nextTime = millis(); 
  }
}

void Blink2A(int diodeNum, int intensity){
  delay(1);
  analogWrite(diodeNum, intensity);
  delay(50);
  analogWrite(diodeNum, 0);
  delay(50);
};

void BlinkInc(){
  digitalWrite(RED, 0);
  digitalWrite(YELLOW, 0);
  digitalWrite(GREEN, 0);
  for (int i=1; i <= 4; i++){
  delay(30);
  digitalWrite(RED, 1);
  digitalWrite(YELLOW, 1);
  digitalWrite(GREEN, 1);
  delay(30);
  digitalWrite(RED, 0);
  digitalWrite(YELLOW, 0);
  digitalWrite(GREEN, 0);
  }
};

void Blikni (){
  Blink(RED);
  Blink(YELLOW);
  Blink(GREEN);
  Blink(YELLOW);
  Blink(RED);
};

void Slope(int diodeNum, int min, int max, int T, int inc = 1){
  if (max > 255){
    max = 255;
  };
  for (int i = min; i <= max; i = i + inc){
    delay(T/(inc*(max - min)));
    analogWrite(diodeNum, i);
  };
};

void DeSlope(int diodeNum, int max, int min, int T, int dec = 1){
  if (max > 255){
    max = 255;
  };
  for (int i = max; i >= min; i = i - dec){
    delay(T/(dec*(max - min)));
    analogWrite(diodeNum, i);
  };
};

void sinusovka(int offset, int A, int T, int Pin){
  unsigned long t = millis();
  int value = offset + A * sin(2 * PI * t / T);
  //Serial.printf("t= %d, omega= %f, value= %d\n", t, 2 * PI / T,0);
  myservo.write(Pin, value);
  delay(1); 
}