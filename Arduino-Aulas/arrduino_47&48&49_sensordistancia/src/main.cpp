#include <Arduino.h>
#include <Wire.h>
#include <LCD_I2C.h>
//SCL é no A5
LCD_I2C lcd(0x27, 16, 2);
int triggerPin = 12;
int echoPin = 11;
double pingTT;
float distancia;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin();
  lcd.backlight();
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //código para liberação de rajadas de som
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(10);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  //detecta em microsegundos
  pingTT = pulseIn(echoPin, HIGH);
  delay(25);
  //conversão de microsegundos para segundos
  pingTT = pingTT / 1000000;
  //calculo de distancia de acordo com a velocidade do som
  distancia = (34000 * pingTT) / 2;
  //escrevendo no LCD a distância calculada
  lcd.setCursor(0, 0);
  lcd.print("Distancia ate");
  lcd.setCursor(0, 1);
  lcd.print("O alvo: ");
  lcd.print(distancia);
  lcd.print("cm");
  delay(750);
  lcd.clear();
}
