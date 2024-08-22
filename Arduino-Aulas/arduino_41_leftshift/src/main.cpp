#include <Arduino.h>
int latchpin = 11;
int clockpin = 9;
int datapin = 12;
int dt = 500;
byte LEDS =  B10101010;
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
  delay(dt);
  //como estando lidando com base 2, jeito mais simples de se colocar os caracteres para esquerda é multiplicar por dois, devido a base
  LEDS = LEDS * 2;
  }