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
  if (myLed == "vermelho" || "Vermelho"){
  digitalWrite(redpin, HIGH);
  digitalWrite(greenpin, LOW);
  digitalWrite(bluepin, LOW);
  }
  if (myLed == "verde" || "Verde"){
  digitalWrite(redpin, LOW);
  digitalWrite(greenpin, HIGH);
  digitalWrite(bluepin, LOW);
  }
  if (myLed == "azul" || "Azul") {
  digitalWrite(redpin, LOW);
  digitalWrite(greenpin, LOW);
  digitalWrite(bluepin, HIGH);
  }
}