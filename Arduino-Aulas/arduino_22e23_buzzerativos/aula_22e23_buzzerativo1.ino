int myNumb;
int buzzPin = 8;
String msg = "Coloque um numero";
int dt = 1000;
int dt1 = 5;
int dt2 = 2;
int j;
void setup()
{
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
}

void loop()
{
	/*Serial.println(msg);
    while(Serial.available()==0){
    }
    myNumb = Serial.parseInt();
    if (myNumb > 10){
      digitalWrite(buzzPin, HIGH);
      delay(dt);
      digitalWrite(buzzPin, LOW);
  }*/
  
  for(j=1;j<=100;j=j+1){

    digitalWrite(buzzPin, HIGH);

    delay(dt1);

    digitalWrite(buzzPin, LOW);

    delay(dt1);
  } 
  for(j=1;j<=100;j=j+1){

    digitalWrite(buzzPin, HIGH);

    delay(dt2);

    digitalWrite(buzzPin, LOW);

    delay(dt2);
  }
}