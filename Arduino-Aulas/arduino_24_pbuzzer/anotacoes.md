Aula 24 - Buzzer Passivo

Para fazer o buzzer passivo funcionar, precisamos ligá-lo e desligá-lo. O tempo de delay entre o estado alto (1) e o estado baixo (0) faz o tom mudar.

A função utilizada é:

cpp

delayMicroseconds(microsegundos);

1 milissegundo = 1000 microsegundos.
Exercícios

Pegue um potenciômetro de 10k ohms e faça o buzzer variar de acordo com ele, com o tempo de delay variando de 0 microsegundos até 10k microsegundos.

Resolvi assim:

cpp

int buzzpin = 11;
int potpin = A2;
int potval;
float delayt;

void setup()
{
  pinMode(buzzpin, OUTPUT);
  pinMode(potpin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  potval = analogRead(potpin);
  delayt = (9999.0 / 1023.0) * potval;
  Serial.println(delayt);
  
  digitalWrite(buzzpin, HIGH);
  delayMicroseconds(delayt);
  digitalWrite(buzzpin, LOW);
  delayMicroseconds(delayt);
}

Observações

    Diferença de f(x)f(x) + xinicialxinicial​
    Diferença de xx

A equação da reta é importante para esse tipo de exercício. Esqueci de colocar o valor inicial e não ouvi quando foi mencionado sobre o valor inicial de 60 para o yy.

Vimos um exemplo de sensor e atuador em conjunto, com o potenciômetro ajustando o som do buzzer. Veremos mais sobre isso em breve.