#include <Arduino.h>

const int tiltPin = 2;
const int blueLed = 9;
const int redLed = 8;
int tiltVal;
int dt = 200;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(tiltPin, INPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  digitalWrite(tiltPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  tiltVal = digitalRead(tiltPin);
  if (tiltVal == 0) {
    Serial.println("O estado de inclinacao é: Reto");
    digitalWrite(blueLed, 1);
    digitalWrite(redLed, 0);
  }else{
    Serial.println("O estado de inclinação é: Inclinado");
      digitalWrite(blueLed, 0);
    digitalWrite(redLed, 1);
  }
  Serial.println(tiltVal);
  delay(dt);
}

