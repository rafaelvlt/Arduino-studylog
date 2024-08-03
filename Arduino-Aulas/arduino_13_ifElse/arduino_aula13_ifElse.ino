int pinoA = A3;
int valorAnalog;
float voltagem;
int espera = 500;
int redLed = 10;

void setup()
{
  pinMode(pinoA, INPUT);
  pinMode(redLed, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
	valorAnalog = analogRead(pinoA);
  	voltagem = (5./1023.)*valorAnalog;
  	Serial.print("Voltagem: ");
  	Serial.println(voltagem);
  if (voltagem<3.0 && voltagem>2.0){
     digitalWrite(redLed, HIGH);
  }
  if (voltagem<2 || voltagem>3.0){
    digitalWrite(redLed, LOW);
  } 
  	delay(espera);
  
}