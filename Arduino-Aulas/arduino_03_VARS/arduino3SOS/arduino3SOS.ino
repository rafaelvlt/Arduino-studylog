int redLED = 12;
int dot = 150;
int dash = 500;
int endD = 3000
void setup()
{
  pinMode(redLED, OUTPUT);
}

void loop()
{
  digitalWrite(redLED, HIGH);
  delay(dot);
  digitalWrite(redLED, LOW);
  delay(dot);
  digitalWrite(redLED, HIGH);
  delay(dot);
  digitalWrite(redLED, LOW);
  delay(dot);
  digitalWrite(redLED, HIGH);
  delay(dot);
  digitalWrite(redLED, LOW);
  delay(dot);
  //S
  digitalWrite(redLED, HIGH);
  delay(dash);
  digitalWrite(redLED, LOW);
  delay(dash);
  digitalWrite(redLED, HIGH);
  delay(dash);
  digitalWrite(redLED, LOW);
  delay(dash);
  digitalWrite(redLED, HIGH);
  delay(dash);
  digitalWrite(redLED, LOW);
  delay(dash);
  //O
  digitalWrite(redLED, HIGH);
  delay(dot);
  digitalWrite(redLED, LOW);
  delay(dot);
  digitalWrite(redLED, HIGH);
  delay(dot);
  digitalWrite(redLED, LOW);
  delay(dot);
  digitalWrite(redLED, HIGH);
  delay(dot);
  digitalWrite(redLED, LOW);
  delay(endD);
  //S
}