#include <Arduino.h>
#include <Servo.h>
Servo Seta;
int servopin = 9;
int servopos;
int buzzerpin = 11;
int xpin = A0;
int ypin = A1;
int spin = 6;
int xval;
int yval;
int sval; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Seta.attach(servopin);
  pinMode(xpin, INPUT);
  pinMode(ypin, INPUT);
  pinMode(spin, INPUT);
  pinMode(buzzerpin, OUTPUT);
  digitalWrite(spin, 1);
}

void loop() {
  xval = analogRead(xpin);
  yval = analogRead(ypin);
  sval = digitalRead(spin);
  Serial.print("X: ");
  Serial.print(xval);
  Serial.print(" Y: ");
  Serial.print(yval);
  Serial.print(" Switch: ");
  Serial.print(sval);
  
  servopos = (180./1023.)*xval ;
  Seta.write(servopos);
  Serial.print(" Angulo: ");
  Serial.println(servopos);
  if (sval == 1){
    digitalWrite(buzzerpin, LOW);
  }else{
    digitalWrite(buzzerpin, HIGH);
  }
}

