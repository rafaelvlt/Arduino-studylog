int readPin = A3;
float vRes = 0;
int baudRate = 9600;
int prDelay = 500;
int readVal = 0;
void setup()
{
 pinMode(readPin, INPUT);
 Serial.begin(9600);
}

void loop()
{
	readVal = analogRead(readPin);
  vRes = (5./1023.)*readVal;
  Serial.println(vRes);
  delay(prDelay);
}