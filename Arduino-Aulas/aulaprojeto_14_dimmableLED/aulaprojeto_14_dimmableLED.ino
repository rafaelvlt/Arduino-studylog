int potPin = A3;
int ledPin = 10;
int potVal;
float ledVal;
void setup()
{
	pinMode(potPin, INPUT);
  	pinMode(ledPin, OUTPUT);
}
void loop()
{
	potVal = analogRead(potPin);
  	ledVal = (255./1023.)*potVal;
  	analogWrite(ledPin, ledVal);
}