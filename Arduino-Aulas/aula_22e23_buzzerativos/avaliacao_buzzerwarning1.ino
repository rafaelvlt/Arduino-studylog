int buzzPin = 12;
int potPin = A3;
int potVal;
String msg ="A voltagem do potenciometro e igual a : "; 
int dt = 500;
void setup()
{
 Serial.begin(9600);
 pinMode(buzzPin, OUTPUT);
 pinMode(potPin, INPUT);
}

void loop()
{
	potVal = analogRead(potPin);
  	Serial.print(msg);
  	Serial.println(potVal);
  	while(potVal >= 1000){
      digitalWrite(buzzPin, HIGH);
      potVal = analogRead(potPin);
      Serial.print(msg);
      Serial.println(potVal);
      delay(dt);
  }
  digitalWrite(buzzPin, LOW);
}