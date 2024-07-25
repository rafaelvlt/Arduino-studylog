Aula 10 - Lendo voltagem analógica e usando analogRead()

Como podemos medir a voltagem através do Arduino? Essa pergunta é respondida nesta aula.

Conectamos um fio na localização entre os resistores do vídeo anterior (entre 330Ω e 100Ω) e o conectamos a um dos pinos analógicos de 0 a 5, que fica abaixo da seção de alimentação do Arduino. Esse fio também está conectado à breadboard, alimentando o circuito.

Setamos o pino que iremos ler no código e a variável para voltagem, que inicializamos com 0, apenas para criá-la.

Configuramos o pino com pinMode() e INPUT.

Declaramos uma variável para armazenar os dados do analogRead(), que será a mesma que inicializamos anteriormente.

Assim, teremos a voltagem armazenada na variável em loop, mas precisamos de um modo de exibi-la, printando-a.

Para printar:

Setamos isso no void setup():
```
cpp

Serial.begin(baudRate);
```
baudRate é um número que define a velocidade da comunicação com o Serial Monitor (não sei exatamente o que é).

O padrão é 9600.

Para printar:
```
cpp

Serial.println(V);
```
println significa "print line", ou seja, printa uma linha com quebra de linha.

Iniciando a simulação, podemos ver no Serial Monitor da IDE ou no CAD os valores no que seria o “console”.

O resultado no CAD foi 240, mas esse não é o valor da voltagem.

O analogRead() retorna um valor entre 0 e 1023, ou seja, 10 bits.

Se tivermos 0 volts, o valor do analogRead() será 0.

Se a voltagem for 5V, o valor será 1023. Podemos ver isso conectando o pino na mesma coluna que 5V ou na mesma coluna que o GND para obter 0.

Para descobrir o valor da voltagem:
```
makefile

V = (5 / 1023) * readVal

    5 é o valor da voltagem
    1023 é o valor máximo em bits
    readVal é o valor adquirido pelo analogRead()
```
No código, fazemos isso como:

```cpp

V = (5.0 / 1023.0) * readVal;
```
A sintaxe exige os pontos entre os valores para evitar que a operação entre dois inteiros resulte em um número inteiro, aproximando para o valor inteiro mais próximo (neste caso, 0). Utilizando pontos, o cálculo é tratado como float.

Devemos setar o valor final da voltagem como float também.

Agora é possível obter o valor real da voltagem entre os resistores.

Aprendemos a usar o Serial, operações em C++ e cálculos de voltagem a partir do analogRead().

Assignment

Encontre dois resistores aleatórios, analise o circuito através das fórmulas e leia com o analogRead(). Colocarei os resultados aqui.

Peguei resistores de 200Ω e 1kΩ.

Consegui ler os resultados para o resistor de 200Ω.

Os resultados dos cálculos foram:

    4.16V para o resistor de 1kΩ
    0.832V para o resistor de 200Ω

Com esse setup e código, conseguimos ler a voltagem do segundo resistor em série.