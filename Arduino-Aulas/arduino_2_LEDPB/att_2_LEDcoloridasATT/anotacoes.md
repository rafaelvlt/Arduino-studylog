<h1>Aula 3 - Breadboard, lendo diagramas de circuitos e traduzindo-os para a realidade</h1>

Primeira aula lidando com circuitos externos, interagindo com os pinos, que podem receber ou enviar sinais.
[Print da tela do circuito}
Como transformar os diagramas de circuito em realidade?

O triângulo abaixo representa o terra, conectado ao negativo da fonte de alimentação.

A placa de prototipagem é uma forma de conectar os componentes sem ter que soldar tudo ou conectar os fios diretamente.

A placa de prototipagem segue o seguinte "algoritmo":

As colunas de entradas estão conectadas entre si, e não as linhas.

Placa de Protótipo

Não existe conexão entre colunas diferentes; existe uma camada no meio da protoboard que divide as colunas, chamada de "center channel".

Existem linhas especiais que são conectadas, consistindo nas linhas no topo e na base da protoboard.

Essas linhas são conectadas apenas na linha, e não na coluna. Ou seja, a linha inteira é conectada, funcionando de forma diferente das colunas ao redor do "center channel".

Essas linhas especiais normalmente são utilizadas para dispositivos que alimentam ou que recebem alimentação. Por exemplo, podemos conectar o pino de 5V do Arduino em uma linha positiva da protoboard, e toda a linha estará conectada, permitindo alimentar vários dispositivos.

Agora, usaremos os componentes para construir o circuito:

    Resistor de 330 Ohms recomendado, mas o intervalo pode ser entre 200 e 500 Ohms
    LEDs
    Fios

Os resistores são coloridos, mas no caso do kit, existem etiquetas para eles.

A voltagem virá do pino 13.

Conectamos um fio no pino 13 e em uma coluna qualquer da protoboard, e também conectamos uma perna do resistor na mesma coluna. Na coluna da segunda perna do resistor, conectamos o LED, que deve ter a perna longa na mesma coluna que o L2 do resistor.

A perna longa é chamada de ânodo e a perna curta é o cátodo.

O cátodo precisa estar conectado ao terra, conforme o diagrama, e o próprio Arduino tem um pino para o terra (Pino GND).

Codamos da mesma forma que o LED embutido com:

```
cpp
void setup() {
  // Coloque seu código de configuração aqui, para ser executado uma vez:
  pinMode(13, OUTPUT);
}

void loop() {
  // Coloque seu código principal aqui, para ser executado repetidamente:
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
}
```
E agora ele funciona, piscando junto com o LED embutido!

Configuração do Circuito

Podemos conectar os fios em qualquer pino (exceto os pinos 0 e 1, que são usados para comunicação preferencialmente).

Conectando no pino 8 e trocando o código para funcionar com o pino 8, o LED embutido não pisca junto com o LED externo.


<h3>Atividade</h3>

    Circuito com LEDs vermelho, verde e azul: Faça o LED vermelho piscar 5 vezes enquanto os outros não piscam, o verde 10 vezes e o azul 15 vezes.

Existem outros pinos de GND no Arduino na seção "Power", à esquerda dos pinos 13, 8, etc.

Conectei os outros LEDs da mesma forma que o primeiro.

Fiz da maneira mais difícil, escrevendo cada digitalWrite individualmente. Acredito que seja o método mais longo, mas como o tutorial ainda não apresentou conceitos avançados de programação em C++, foi a forma que o McWhorter utilizou.
```
cpp

void setup() {
  // Coloque seu código de configuração aqui, para ser executado uma vez:
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  // Coloque seu código principal aqui, para ser executado repetidamente:
  
  for (int i = 0; i < 5; i++) {
    digitalWrite(8, HIGH);
    delay(250);
    digitalWrite(8, LOW);
    delay(250);
  }
  
  for (int i = 0; i < 10; i++) {
    digitalWrite(7, HIGH);
    delay(250);
    digitalWrite(7, LOW);
    delay(250);
  }
  
  for (int i = 0; i < 15; i++) {
    digitalWrite(4, HIGH);
    delay(250);
    digitalWrite(4, LOW);
    delay(250);
  }
}
```
Isso é um exemplo bem feito do loop.
