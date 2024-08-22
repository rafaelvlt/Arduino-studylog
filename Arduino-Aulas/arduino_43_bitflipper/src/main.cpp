#include <Arduino.h>
int latchpin = 11;
int clockpin = 9;
int datapin = 12;
int dt = 1000;
byte LEDS =  B10000001;
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
  shiftOut(datapin, clockpin, LSBFIRST, LEDS);
  digitalWrite(latchpin, 1);
  delay(dt);
  //bitflipper é simples de se fazer, basta pegar o numero total possivel e subtrair pelos byte q quer flipar
  LEDS = 0xFF - LEDS;
  }