#include <Servo.h>
int servopin = 9;
int servopos;
int fotopin = A0;
int fotoval;
int dt=250;
Servo myServo;

void setup()
{
  Serial.begin(9600);
  myServo.attach(servopin);
  pinMode(fotopin, INPUT);
}

void loop()
{
  fotoval = analogRead(fotopin);
  servopos = (-(180./920.)*fotoval) + 189;
  myServo.write(servopos);
  Serial.print("A posição do servo: ");
  Serial.println(servopos);
  Serial.print("A resistência do fotoresistor: ");
  Serial.println(fotoval);
}