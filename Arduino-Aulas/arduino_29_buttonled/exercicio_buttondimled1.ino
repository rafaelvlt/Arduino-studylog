int redled = 5;
int upbutton = 8;
int downbutton = 12;
int dt = 50;
int upval;
int downval;
int ledval = 255;
int changert = 15;
void setup()
{
	Serial.begin(9600);
  	pinMode(redled, OUTPUT);
  	pinMode(upbutton, INPUT);
  	pinMode(downbutton, INPUT);
}

void loop()
{
	analogWrite(redled, ledval);
  	upval = digitalRead(upbutton);
  	downval = digitalRead(downbutton);
  while(upval == 0){
    if (ledval < 255 && upval == 0) {
  	ledval += changert;
    }else {
     ledval = 255; 
    }
    analogWrite(redled, ledval);
    upval = digitalRead(upbutton);
  	downval = digitalRead(downbutton);
    delay(dt);
	Serial.println(ledval);
  }
  while (downval == 0){
    if (downval == 0 && ledval> 0){
   	ledval -= changert;
    }else{
     ledval = 0;
    }
    analogWrite(redled, ledval);
    upval = digitalRead(upbutton);
  	downval = digitalRead(downbutton);
    delay(dt);
    Serial.println(ledval);
  }
}