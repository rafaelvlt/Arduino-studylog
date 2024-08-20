#include <Arduino.h>
int latchpin = 11;
int clockpin = 9;
int datapin = 12;
int dt = 150;
byte LEDS =  0x00;
void setup() {
  // put your setup code here, to run once:
  pinMode(latchpin, OUTPUT);
  pinMode(datapin, OUTPUT);
  pinMode(clockpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(latchpin, 0);
  shiftOut(datapin, clockpin, MSBFIRST, LEDS);
  digitalWrite(latchpin, 1);
  LEDS += 1;
  delay(dt);
}
