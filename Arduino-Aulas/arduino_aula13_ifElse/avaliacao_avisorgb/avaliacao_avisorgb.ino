int pinoA = A3;
int valorAnalog;
float voltagem;
int espera = 500;
int redLed = 3;
int yLed = 12;
int gLed = 13;

void setup()
{
  pinMode(pinoA, INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(yLed, OUTPUT);
  pinMode(gLed, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
	valorAnalog = analogRead(pinoA);
  	voltagem = (5./1023.)*valorAnalog;
  	Serial.print("Voltagem: ");
  	Serial.println(voltagem);
  
    if (voltagem < 2.0) {
      digitalWrite(gLed, HIGH);
      digitalWrite(yLed, LOW);
      digitalWrite(redLed, LOW);
    }
    if (voltagem >= 2.0 && voltagem <= 4.0){
      digitalWrite(gLed, LOW);
      digitalWrite(yLed, HIGH);
      digitalWrite(redLed, LOW);
    }
    if (voltagem > 4.0){
      digitalWrite(gLed, LOW);
      digitalWrite(yLed, LOW);
      digitalWrite(redLed, HIGH);
    } 
    delay(espera);

}