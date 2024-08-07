float dbuzz;
int fotopin = A0;
float fotoval;
int buzzpin = 4;
void setup()
{
  pinMode(fotopin, INPUT);
  pinMode(buzzpin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
	fotoval = analogRead(fotopin);
  	dbuzz = (40./901.)*fotoval - ((40.*94.)/901.) + 10 ;
  	Serial.println(dbuzz);
  	digitalWrite(buzzpin, 1);
  	delay(dbuzz);
  	digitalWrite(buzzpin, 0);
  	delay(dbuzz);
}