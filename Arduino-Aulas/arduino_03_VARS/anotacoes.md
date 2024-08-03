# Aula 4 - Programação em Arduino, variáveis e outros.

Antes de começar a aula, tive curiosidade do que aconteceria se tirar o terra conectado ao LED ou se ligarmos diretamente o led no pino . primeiro caso, o led simplesmente não ligou, e no segundo caso, foi dado um aviso no tinkercad que o LED n suportava uma voltagem tão alta, e a vida útil seria diminuida, mas funcionou.

Iniciamos essa aula com o objetivo de realizar o código S.O.S em Morse no LED do Arduino

S = . / . / .

O = _ / _ /_

S.O.S = . / . / .   _ / _ /_    . / . / .

fiz um programa inicial para tentar realizar a atividade antes, sendo ele bem idiota mesmo, mas só para ter uma ideia de como um script inicial poderia ser usado e será aprimorado durante a lição

```cpp
void setup()
{
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(12, HIGH);
  delay(300);
  digitalWrite(12, LOW);
  delay(300);
  digitalWrite(12, HIGH);
  delay(300);
  digitalWrite(12, LOW);
  delay(300);
  digitalWrite(12, HIGH);
  delay(300);
  digitalWrite(12, LOW);
  delay(300);
  //S
  digitalWrite(12, HIGH);
  delay(900);
  digitalWrite(12, LOW);
  delay(300);
  digitalWrite(12, HIGH);
  delay(900);
  digitalWrite(12, LOW);
  delay(300);
  digitalWrite(12, HIGH);
  delay(900);
  digitalWrite(12, LOW);
  delay(300);
  //O
  digitalWrite(12, HIGH);
  delay(300);
  digitalWrite(12, LOW);
  delay(300);
  digitalWrite(12, HIGH);
  delay(300);
  digitalWrite(12, LOW);
  delay(300);
  digitalWrite(12, HIGH);
  delay(300);
  digitalWrite(12, LOW);
  delay(30000);
  //S
}
```

vendo o video, o exemplo inicial dado foi o mesmo

iniciando a aula de verdade, vemos a problematica com esse código, devido ao fato de quando visualizamos o resultado, queremos fazer alterações para melhorar o andamento, um exemplo disso seria o delay entre os blinks do led, que colocamos inicialmente como constantes.

Por isso, usamos variáveis, que devem ser setado acima do void setup(), o codigo que é rodado na inicialização

variáveis podem ser

integrais = naturais ou inteiros

float = decimais

```cpp
//usamos int para setar a integral
int redLED = 8;
float pi = 3.14;
int dot = 150
int dash = 500

String nomeDoProjeto = "LED S.O.S"
```

substituimos todas as constantes do código pelas variáveis, e agora podemos mexer alterar os parâmetros bem facilmente

cuidado com a capitalização das variáveis

Exercício

Colocar LEDs vermelha, verde e azul

blinkando cada uma 5 vezes, porém, blink rápido para vermelha, longo para verde, e muito longo para azul

***Sem usar constantes***

Codigo no Repo

Tentei usar for loops mas n deu mt certo, vou ver adiante o motivo
