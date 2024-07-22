int pLED = 7;
int sLED = 8;
int tLED = 12;
int qLED = 13;
int mNumero = 1000;

void setup()
{
  pinMode(pLED, OUTPUT);
  pinMode(sLED, OUTPUT);
  pinMode(tLED, OUTPUT);
  pinMode(qLED, OUTPUT);
}

void loop()
{
  //0
	digitalWrite(pLED, LOW);
  	digitalWrite(sLED, LOW);
  	digitalWrite(tLED, LOW);
  	digitalWrite(qLED, LOW);
  	delay(mNumero);
  //1
  	digitalWrite(pLED, HIGH);
  	digitalWrite(sLED, LOW);
  	digitalWrite(tLED, LOW);
  	digitalWrite(qLED, LOW);
  	delay(mNumero);
  //2
	digitalWrite(pLED, LOW);
  	digitalWrite(sLED, HIGH);
  	digitalWrite(tLED, LOW);
  	digitalWrite(qLED, LOW);
  	delay(mNumero);
  //3
  	digitalWrite(pLED, HIGH);
  	digitalWrite(sLED, HIGH);
  	digitalWrite(tLED, LOW);
  	digitalWrite(qLED, LOW);
  	delay(mNumero);
  //4
  	digitalWrite(pLED, LOW);
  	digitalWrite(sLED, LOW);
  	digitalWrite(tLED, HIGH);
  	digitalWrite(qLED, LOW);
  	delay(mNumero);
  //5
  	digitalWrite(pLED, HIGH);
  	digitalWrite(sLED, LOW);
  	digitalWrite(tLED, HIGH);
  	digitalWrite(qLED, LOW);
  	delay(mNumero);
  //6
  	digitalWrite(pLED, LOW);
  	digitalWrite(sLED, HIGH);
  	digitalWrite(tLED, HIGH);
  	digitalWrite(qLED, LOW);
  	delay(mNumero);
  //7
  	digitalWrite(pLED, HIGH);
  	digitalWrite(sLED, HIGH);
  	digitalWrite(tLED, HIGH);
  	digitalWrite(qLED, LOW);
  	delay(mNumero);
  //8
  	digitalWrite(pLED, LOW);
  	digitalWrite(sLED, LOW);
  	digitalWrite(tLED, LOW);
  	digitalWrite(qLED, HIGH);
  	delay(mNumero);
  //9
  	digitalWrite(pLED, HIGH);
  	digitalWrite(sLED, LOW);
  	digitalWrite(tLED, LOW);
  	digitalWrite(qLED, HIGH);
  	delay(mNumero);
  //10
  	digitalWrite(pLED, LOW);
  	digitalWrite(sLED, HIGH);
  	digitalWrite(tLED, LOW);
  	digitalWrite(qLED, HIGH);
  	delay(mNumero);
  //11
  	digitalWrite(pLED, HIGH);
  	digitalWrite(sLED, HIGH);
  	digitalWrite(tLED, LOW);
  	digitalWrite(qLED, HIGH);
  	delay(mNumero);
  //12
  	digitalWrite(pLED, LOW);
  	digitalWrite(sLED, LOW);
  	digitalWrite(tLED, HIGH);
  	digitalWrite(qLED, HIGH);
  	delay(mNumero);
  //13
  	digitalWrite(pLED, HIGH);
  	digitalWrite(sLED, LOW);
  	digitalWrite(tLED, HIGH);
  	digitalWrite(qLED, HIGH);
  	delay(mNumero);
  //14
  	digitalWrite(pLED, LOW);
  	digitalWrite(sLED, HIGH);
  	digitalWrite(tLED, HIGH);
  	digitalWrite(qLED, HIGH);
  	delay(mNumero);
  //15
  	digitalWrite(pLED, HIGH);
  	digitalWrite(sLED, HIGH);
  	digitalWrite(tLED, HIGH);
  	digitalWrite(qLED, HIGH);
  	delay(mNumero);
}