int Potval;
int redpin = 11;
int potpin = A0;
int dt = 200;
void setup()
{
  pinMode(redpin, OUTPUT);
  pinMode(potpin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  Potval = analogRead(potpin);
  Serial.println(Potval);
  while (Potval > 1000){
   digitalWrite(redpin, HIGH);
   Potval = analogRead(potpin);
   Serial.println(Potval);
   delay(dt);
  }
  digitalWrite(redpin, LOW);
}