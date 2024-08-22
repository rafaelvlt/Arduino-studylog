#include <Arduino.h>
int latchpin = 11;
int clockpin = 9;
int datapin = 12;
int dt = 1000;
byte LEDS = B11101010;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(latchpin, OUTPUT);
  pinMode(datapin, OUTPUT);
  pinMode(clockpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedl
  digitalWrite(latchpin, 0);
  shiftOut(datapin, clockpin, MSBFIRST, LEDS);
  digitalWrite(latchpin, 1);
  // poderia ter feito como LEDS = LEDS/128 + LEDS * 2; | Deixarei o método mais eficiente, mas o método original que fiz antes de ver a resposta fica salvo
  LEDS = LEDS/128 + LEDS * 2;
  delay(dt);
 /* LEDS = LEDS * 2;
  delay(dt);
    if (LEDS > 0x0FE){
      LEDS = LEDS - 0xFF;
      digitalWrite(latchpin, 0);
      shiftOut(datapin, clockpin, MSBFIRST, LEDS);
      digitalWrite(latchpin, 1);
    } */
  Serial.println(LEDS);
}