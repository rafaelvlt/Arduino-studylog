int readPin = A5;
int baudRate = 9600;
int readValue = 0;
float voltagem = 0;
int delayT = 500;
void setup()
{
  pinMode(readPin, INPUT);
  Serial.begin(baudRate);
}

void loop()
{
  readValue = analogRead(readPin);
  voltagem = (5./1023.)*readValue;
  Serial.println(voltagem);
  delay(delayT);
}