#include <Arduino.h>
#include <Wire.h>
#include <LCD_I2C.h>
LCD_I2C lcd(0x27, 16, 2);
int dt = 4000;
float number1;
float number2;
String operador;
float result;
void setup() {
  Serial.begin(9600);
  lcd.begin();
  lcd.backlight();
}

void loop() {
  //reseta o lcd para novo loop
  lcd.clear();
  //pede primeiro número
  lcd.setCursor(0, 0);
  lcd.print("Escolha seu");
  lcd.setCursor(0, 1);
  lcd.print("primeiro numero");
  //espera resposta do usuário pelo serial monitor e lê o numero, alocando ele a uma var
  while(Serial.available() == 0){}
  number1 = Serial.parseFloat();

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Escolha seu");
  lcd.setCursor(0, 1);
  lcd.print("segundo numero");
  while(Serial.available() == 0){}
  number2 = Serial.parseFloat();

  //seleção de operador
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Qual operador?");
  lcd.setCursor(0, 1);
  lcd.print("   + - * /  ");
  while(Serial.available() == 0){}
  operador = Serial.readString();
  Serial.println(number1);
  Serial.println(number2);
  Serial.println(operador);
  //faz a operação e guarda em uma var
  if (operador == "+"){
    result = number1 + number2;
  }
  if (operador == "-"){
    result = number1 - number2;
  }
  if (operador == "*"){
    result = number1 * number2;
  }
  if (operador == "/"){
    result = number1/number2;
  }

  //mostra o resultado no LCD com a formatação correta
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("O resultado e :");
  lcd.setCursor(0, 1);
  lcd.print(number1);
  lcd.print(" ");
  lcd.print(operador);
  lcd.print(" ");
  lcd.print(number2);
  lcd.print(" = ");
  lcd.print(result);
  delay(dt);
  }
  