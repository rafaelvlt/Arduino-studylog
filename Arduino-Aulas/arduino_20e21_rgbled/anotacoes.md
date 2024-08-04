Aula 20 - Entendendo como LEDs RGB Funcionam

Usaremos um LED RGB com 4 pernas e 3 resistores.

Existem dois tipos de LEDs RGB:

    LED de cátodo comum: os LEDs verde, azul e vermelho embutidos no RGB usam apenas um GND comum.
    LED de ânodo comum: como o anterior, exceto que o ânodo é o comum.

Uma das pernas é maior que as outras, e ela representa ou o ânodo ou o cátodo comum. Abaixo dela temos o vermelho, acima o verde, e acima do verde o azul.

Podemos usar apenas um resistor no RGB, mas é aconselhável usar três, um para cada cor.

É uma boa prática conectar o GND antes de qualquer coisa.

É interessante conectar os resistores pelo canal central para ficar mais organizado.

Vamos pedir o input do usuário sobre as cores do LED, enviando sinal para o pino conectado aos ânodos, que vão determinar as cores do LED.

Com o LED RGB é possível ligar duas cores ao mesmo tempo e fazer mesclas.

Um bom jeito de fazer a mesclagem entre as cores é utilizar pinos analógicos para fazer a mesclagem RGB. Por exemplo, podemos fazer algo como um LED aqua:

cpp

analogWrite(greenPin, 255);
analogWrite(bluePin, 125);

Atividade
Espectro de Cores RGB

Fazer as cores:

    RGB
    Ciano
    Magenta
    Amarelo
    Laranja
    Fuchsia
    Desligar