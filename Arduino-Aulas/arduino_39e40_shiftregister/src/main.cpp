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
  LEDS += 1;
  }