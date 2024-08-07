int lightpin = A0;
int lightval;
int redled = 6;
int greenled = 7;
int dt = 500;
void setup()
{
  pinMode(lightpin, INPUT);
  pinMode(redled, OUTPUT);
  pinMode(greenled, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
	lightval = analogRead(lightpin);
  	Serial.println(lightval);
  if (lightval < 500){
  	digitalWrite(greenled, HIGH);
    digitalWrite(redled, LOW);
  }
  if (lightval >= 500) {
   	digitalWrite(greenled, LOW);
    digitalWrite(redled, HIGH);
  }
}