#include <Arduino.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>
#define TYPE DHT11
//LCD SETUP
#include <Wire.h>
#include <LCD_I2C.h>
LCD_I2C lcd(0x27, 16, 2);

//DHT SETUP
int sensorPin = 2;
DHT HT(sensorPin, TYPE);
float humidity;
float tempC;

int dt = 500;
void setup() {
  //inicialização dos objetos e monitor
  Serial.begin(9600);
  lcd.begin();
  lcd.backlight();
  HT.begin();
  delay(dt);
}

void loop() {
  lcd.clear();
  humidity = HT.readHumidity();
  tempC = HT.readTemperature();
  lcd.setCursor(0, 0);
  lcd.print("Celsius: ");
  lcd.print(tempC);
  lcd.setCursor(0, 1);
  lcd.print("Umidade: ");
  lcd.print(humidity);
  delay(dt);

}
