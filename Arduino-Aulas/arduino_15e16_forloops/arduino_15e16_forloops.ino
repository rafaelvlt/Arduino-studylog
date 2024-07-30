int redLed = 9;
int yellowLed = 6;
int waitT = 500;
int yellowBlink = 3;
int redBlink = 5;
int j;
void setup()
{
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  for(j=1;j<=yellowBlink;j=j+1) {
  digitalWrite(yellowLed, HIGH);
  delay(waitT);
  digitalWrite(yellowLed, LOW);
  delay(waitT);
  }
  for (j=1;j<=redBlink;j=j+1) {
  digitalWrite(redLed, HIGH);
  delay(waitT);
  digitalWrite(redLed, LOW);
  delay(waitT);
  }
  
  for(j = 10; j>=1;j=j-1){
    Serial.println(j);
    delay(waitT);
  }
}