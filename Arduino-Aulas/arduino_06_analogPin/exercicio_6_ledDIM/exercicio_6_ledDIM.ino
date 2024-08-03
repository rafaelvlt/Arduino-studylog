int rLED = 6;
int dlyTroca = 300;
int brilho = 255;

//não sei ainda se vou alterar a int ou setar
//vários brilhos
void setup()
{
  pinMode(rLED, OUTPUT);
}

void loop()
{
 analogWrite(rLED, brilho);
 brilho = 255;
 delay(dlyTroca);
 analogWrite(rLED, brilho);
 brilho = 160;
 delay(dlyTroca);
 analogWrite(rLED, brilho);
 brilho = 127;
 delay(dlyTroca);
 analogWrite(rLED, brilho);
 brilho = 80;
 delay(dlyTroca);
 analogWrite(rLED, brilho);
 brilho = 40;
 delay(dlyTroca);
 analogWrite(rLED, brilho);
 brilho = 15;
 delay(dlyTroca);
 analogWrite(rLED, brilho);
 brilho = 5;
 delay(dlyTroca);
 analogWrite(rLED, brilho);
 brilho = 0;
 delay(dlyTroca);
}