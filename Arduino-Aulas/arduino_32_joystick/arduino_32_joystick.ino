int xpin = A1;
int ypin = A0;
int spin = 2;
int sval;
int xval;
int yval;
int dt = 500;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(xpin, INPUT);
  pinMode(ypin, INPUT);
  pinMode(spin, INPUT);
  digitalWrite(spin, 1);
}
void loop() {
  // put your main code here, to run repeatedly:
  xval = analogRead(xpin);
  yval = analogRead(ypin);
  sval = digitalRead(spin);
  delay(dt);
  Serial.print("Valor de X: ");
  Serial.println(xval);
  Serial.print("Valor de Y: ");
  Serial.println(yval);
  Serial.print("Estado do Switch: ");
  Serial.println(sval);
}
