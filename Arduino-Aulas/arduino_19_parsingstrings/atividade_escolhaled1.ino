int redpin = 12;
int bluepin = 11;
int greenpin = 10;
String myLed;
String ask="Qual LED deseja acender?";
String sair="Envie qualquer letra para sair!";

void setup(){
	pinMode(redpin, OUTPUT);
	pinMode(greenpin, OUTPUT);
	pinMode(bluepin, OUTPUT);
	Serial.begin(9600);
}

void loop(){
  Serial.println(ask);
  while (Serial.available() == 0){
  }
  myLed = Serial.readString();
  if (myLed == "vermelho"){
  digitalWrite(redpin, HIGH);
  }
  if (myLed == "verde"){
  digitalWrite(greenpin, HIGH);
  }
  if (myLed == "azul") {
   digitalWrite(bluepin, HIGH);
  }
  
  Serial.println(sair);
  while(Serial.available() == 0){
    
  }
  digitalWrite(redpin, LOW);
  digitalWrite(bluepin, LOW);
  digitalWrite(greenpin, LOW);
  delay(2000);
}