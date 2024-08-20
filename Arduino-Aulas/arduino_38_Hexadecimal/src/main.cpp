#include <Arduino.h>
byte hexa = 0xFF;
int dt = 500;
void setup() {
  Serial.begin(9600);
}

void loop() {
  hexa -= 16;
  Serial.print(hexa, DEC);
  Serial.print("  ");
  Serial.print(hexa, BIN);
  Serial.print("  ");
  Serial.println(hexa, HEX);
  delay(dt);
}
