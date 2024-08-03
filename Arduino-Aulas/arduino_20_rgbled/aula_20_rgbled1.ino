int redpin = 9;
int bluepin = 11;
int greenpin = 10;
String minhaCor;
String ask = "Qual cor voce deseja? para desligar escreva desligue";
void setup()
{
  pinMode(redpin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 Serial.println(ask);
  while (Serial.available() == 0) {
  }
 minhaCor = Serial.readString();
  if (minhaCor == "vermelho") {
   digitalWrite(redpin, HIGH);
   digitalWrite(greenpin, LOW);
   digitalWrite(bluepin, LOW);
  }
   if (minhaCor == "azul") {
   digitalWrite(redpin, LOW);
   digitalWrite(greenpin, LOW);
   digitalWrite(bluepin, HIGH);
  }
   if (minhaCor == "verde") {
   digitalWrite(redpin, LOW);
   digitalWrite(greenpin, HIGH);
   digitalWrite(bluepin, LOW);
  }
   if (minhaCor == "desligue") {
   digitalWrite(redpin, LOW);
   digitalWrite(greenpin, LOW);
   digitalWrite(bluepin, LOW);
  }
   	if (minhaCor == "aqua") {
   digitalWrite(redpin, LOW);
   analogWrite(greenpin, 255);
   analogWrite(bluepin, 125);
    } 
}