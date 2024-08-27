#include <Arduino.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>
#define TYPE DHT11
//DHT SETUP
// pino da esquerda no sensor, tem de ser o pino 2 devido a biblioteca
int sensorPin = 2;
//pino central é o 5v, pino da direita vai para o gnd
//scriamos o objeto do HT, dando como parametros o pino e o tipo de DHT
DHT HT(sensorPin, TYPE);
//criamos as variáveis de medição como floats
float humidity;
float tempC;
float tempF;
int dt = 1000;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //inicializamos o objeto e damos um delay para a biblio
  HT.begin();
  delay(dt);
}

void loop() {
  // put your main code here, to run repeatedly:
  humidity = HT.readHumidity();
  //parametro true para ler em fahrenheint, false para celsius
  tempC = HT.readTemperature();
  tempF = HT.readTemperature(true);
  Serial.print("Umidade: ");
  Serial.print(humidity);
  Serial.print(" Celsius: ");
  Serial.print(tempC);
  Serial.print(" Fahrenheint: ");
  Serial.println(tempF);
  delay(dt);
}