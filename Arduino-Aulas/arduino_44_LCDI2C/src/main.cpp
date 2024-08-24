#include <Arduino.h>
#include <Wire.h>
#include <LCD_I2C.h>
LCD_I2C lcd(0x27, 16, 2);
uint8_t happy[8] =
{
    0b00000,
    0b10001,
    0b00000,
    0b00000,
    0b10001,
    0b01110,
    0b00000,
    0b00000,
};
String msg1;
String msg2;
int dt = 1500;
void setup() {
  Serial.begin(9600);
  lcd.begin();  // Inicializa o LCD com 16 colunas e 2 linhas
  lcd.backlight();
}

void loop() {
lcd.setCursor(0, 0);
lcd.print("Hello World!");
lcd.setCursor(0, 1);
lcd.print("on LCD ");
lcd.write(0);
delay(dt);
lcd.clear();
}