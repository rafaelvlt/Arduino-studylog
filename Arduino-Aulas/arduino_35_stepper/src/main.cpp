#include <Arduino.h>
#include <Stepper.h>
int buttonPin = 2;
int buttonVal;
int stepsPerRev =2048;
Stepper pMotor(stepsPerRev, 8, 10, 9, 11);
int motSpeed = 3;
int dt = 500;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pMotor.setSpeed(motSpeed);
  pinMode(buttonPin, INPUT);
  digitalWrite(buttonPin, 1);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (buttonVal == 0){
    pMotor.step(-stepsPerRev/512);
  }
  if (buttonVal == 1){
    pMotor.step(stepsPerRev/512);
  }
  buttonVal = digitalRead(buttonPin);
  Serial.println(buttonVal);
}
