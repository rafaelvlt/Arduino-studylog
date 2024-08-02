int myVar;
int redpin = 11;
String ask = "Por favor, de um numero de vezes que o LED deve piscar";
int j;
String end = "Pronto!";
int delayt = 500;
void setup()
{
  pinMode(redpin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(ask);
  while (Serial.available() == 0) {
    
  }
  myVar = Serial.parseInt();
  for (j = 1; j <= myVar; j = j + 1) {
   	 digitalWrite(redpin, HIGH);
   	 delay(delayt);
     digitalWrite(redpin, LOW);
     delay(delayt);
  }
  Serial.println(end);
}