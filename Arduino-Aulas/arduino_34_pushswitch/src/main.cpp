#include <Arduino.h>
int buttonPin = 2;
int buttonVal;
void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  //internamente, agora ele sempre está como 1, e age como um pullup resistor, quando pressionado, irá conectar com o gnd e irá dar 0 
  digitalWrite(buttonPin, HIGH);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonVal = digitalRead(buttonPin);
  Serial.print("O valor do botão é igual a: ");
  Serial.println(buttonVal);
  delay(150);
}

