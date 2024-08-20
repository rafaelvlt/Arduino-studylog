# Aula 39e40 - Serial to Parallel Shift Register(74HC595)/Shift Register

Quando fazemos um projeto maior, frequentemente os digitals pins do arduino não são suficiente, por isso usamos Shift Registers

Funcionamento - conecta através de algum pino, e o arduino puxa os dados para ele em série, e ele distribui em paralelo. converte 1 pino em 3.

O 74HC595 é parecido com o driver do motor, mas tem o número em cima.

Pinout do chip

![image.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/f163399c-8e00-426a-a177-85bdfa6bda43/afc0a735-ea14-44c3-92be-3cf8dfec6d12/image.png)

pinos 1-7 e 15 OUTPUT

pino 8 - GND   | pin 9 - Serial output(Arduino 9)

pino 10 - Reclear | pin 11 Shift register clock pin

pin 12 - Storage register clock (Arduino 11)| pin 13 Output enable

pin 14 - Serial data input (Arduino 14) | p16 - Positive voltage

pino 11 - Clock signal, usado para sincronizar com o arduino

pin 12 - latch pin, é um portão para os dados, que só conseguem entrar quando esse pino está low

pin 14 - Onde entras os dados 

pin 14 e 12 e 11 trabalham juntos para possibilitar a entrada de dados

Seguiremos esse diagrama

![image.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/f163399c-8e00-426a-a177-85bdfa6bda43/0d998690-9fcc-4d34-9c6a-c37a68c2be3d/image.png)

Circuito complicado mas recompensador de construir

Código

setamos o pino latchque habiltita/desabilita entrada de dados no shift register

latchpin = 11;

setamos pino do relógio do shiftregister e do pino onde os dados entram

clockpin = 9;

datapin = 12;

e fazemos a configuração do led com um datatype de byte para ser enviado ao shift register

byte LEDS = 0x00; ou LEDS = B10101010;

nos pinmode, setamos todos os conectados ao arduino para serem OUTPUT

e no loop lidamos com a lógica para o shift register

para darmos algum comando para ele, primeiro temos que abrir o pin portão(latch)

digitalWrite(latchpin, 0);

caso seja high, não entra dados, e para enviar comandos do arduino para o shift register, usamos um comando novo

shiftOut();

que aceita 4 parametros

shiftOut(DADOS_PIN, RELOGIO_PIN, ORIENTAÇÃO, BYTE_ENVIADO)

ORIENTAÇÂO pode ser tanto do LEAST SIGNIFICANT BYTE FIRST(lido da direita para esquerda e representado assim no OUTPUT) como do MOST SIGNIFICANT BYTE FIRST(Esquerda para direita)

logo após, fechamos o latchpin

digitalWrite(latchpin, 1);

com isso, já temos um flowchart de como enviar comandos para o shift register, e um código funcional.