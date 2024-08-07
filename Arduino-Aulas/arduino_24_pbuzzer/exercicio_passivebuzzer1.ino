int buzzpin = 11;
int potpin = A2;
int potval;
float delayt;
void setup()
{
  pinMode(buzzpin, OUTPUT);
  pinMode(potpin, INPUT);
  Serial.begin(9600);
}

void loop()
{
 potval = analogRead(potpin);
 delayt = (9940/1023.)*potval + 60;
 Serial.println(delayt);
  
 digitalWrite(buzzpin, HIGH);
 delayMicroseconds(delayt);
 digitalWrite(buzzpin, LOW);
 delayMicroseconds(delayt);
}