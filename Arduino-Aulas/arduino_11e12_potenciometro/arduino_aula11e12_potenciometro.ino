int aPin = A3;
float volts;
int voltAnalog;
int waitT = 500;
void setup()
{
  pinMode(aPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
 voltAnalog = analogRead(aPin);
 volts = (5./1023.)*voltAnalog;
 Serial.print("The voltage on the potenciometer is: ");
 Serial.println(volts);
 delay(waitT);
}