int ledpin = 4;
int buttonpin = 8;
int buttont;
int buttonread;
int dt = 100;
void setup()
{
  Serial.begin(9600);
  pinMode(ledpin, OUTPUT);
  pinMode(buttonpin, INPUT);
}

void loop()
{
	buttonread = digitalRead(buttonpin);
  	Serial.println(buttonread);
  	delay(dt);
    if (buttonread == 0){
      buttont = 1;
      buttonread = digitalRead(buttonpin);
      delay(dt);
      while(buttont == 1){
       digitalWrite(ledpin, 1);
       buttonread = digitalRead(buttonpin);
       delay(dt);
       if (buttonread == 0 || buttont == 0){
         buttont =0;
       	}
      }
    }
     if (buttonread == 1){
       digitalWrite(ledpin, 0); 
     }
}