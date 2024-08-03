Aula 1: Introdução

Programas iniciais, como interagir com pinos:

```cpp
pinMode([número do pino], INPUT/OUTPUT);
digitalWrite([número do pino], ação);
delay(tempo);
```

    Não use ponto e vírgula (;) no final das linhas de código.
    A ação do digitalWrite pode ser HIGH ou LOW.
    Case sensitive (sensível a maiúsculas e minúsculas).
    delay(milisegundos);

Aula 2: LED
Funcionamento das Lâmpadas

    Existem resistores dentro das lâmpadas.
    A voltagem aquece o resistor; quando o resistor está muito aquecido, ele passa de quente vermelho para quente branco (incandescente).
    A energia é usada principalmente para aquecer, o que é ineficiente para gerar luz. Lâmpadas incandescentes eram assim antes, mas agora LEDs são mais eficientes.

LEDs
Semicondutores

    Semicondutores: São literalmente um meio termo entre condutores e isolantes. Podem ser fabricados para serem mais condutores ou mais isolantes. Também podemos ajustar sinais elétricos para modificar a condutividade, permitindo armazenar informações em binário e manufaturar dispositivos digitais.

    A maioria dos LEDs é feita de silício, moldado em wafers, onde máquinas cortam chipzinhos.

Como Funcionam?

    Silício: Forma cristais com uma organização atômica estruturada, normalmente formando cubos eletrônicos e mantendo os níveis de energia dos elétrons juntos em bandas.

    As bandas possuem uma distância entre si chamada de bandgap.

    Elétrons tentam permanecer no menor nível possível, que é a banda chamada valence band (banda de valência).

    Conduction band (banda de condução) é a banda que perdeu elétrons da banda de valência e está praticamente vazia.

    Quando energizado/esquentado, os elétrons podem escapar da banda de valência para a de condução, absorvendo energia térmica e permitindo que a banda de valência conduza também.

    Basicamente, a banda de valência ganha carga positiva e a banda de condução ganha carga negativa.

    Quanto maior a temperatura, maior a condutividade, pois mais elétrons têm chances de passar.

    Todos os casos assumem silício puro, chamado intrínseco.

Tipo N (elétrons)

    Em fábricas, é possível adicionar impurezas com elétrons adicionais, que podem doar átomos facilmente para a camada de condução, mantendo a banda de valência cheia, pois os átomos doados não vêm dela.

Tipo P (buracos)

    Átomos de impureza são adicionados e faltam um elétron para se estabilizarem, facilitando para os átomos da banda de valência pularem para eles, criando cargas positivas.

    Quando juntamos tipo N e tipo P, nada acontece até aplicarmos voltagem, positiva no tipo P e negativa no tipo N, fazendo a "ladeira" (bandgap) que os elétrons têm que subir para se encontrar, facilitando a passagem.

    Essa junção é chamada de recombinação de elétrons ou E.H.P Recombination (Electron-Hole Pair Recombination).

Diodo

    Quando ocorre a recombinação, o elétron vai para um nível menor, liberando energia e emitindo fótons. Um fóton é emitido para cada recombinação de E.H.P. A diminuição do bandgap faz com que mais fótons sejam emitidos e a luz se torne mais forte.

    Se a voltagem positiva é aplicada ao pino positivo e negativa ao pino negativo, podemos aumentar o bandgap, interrompendo a emissão de luz devido à dificuldade de realizar a recombinação de E.H.P.

    Para diodos, é importante conectá-los corretamente: a voltagem negativa deve ir ao tipo N e a positiva ao tipo P.

    Nos LEDs, eles possuem duas pernas para conexão: a perna mais longa deve ser conectada ao tipo P e a perna mais curta ao tipo N. A perna longa é para a voltagem positiva e a curta para a negativa.

Esquema LED
Corrente em Função da Voltagem

    Para diodos, quando a voltagem é negativa, a corrente aumenta muito. Quando a voltagem é positiva, a corrente aumenta exponencialmente. Se isso acontecer diretamente, ligando um diodo a uma voltagem alta, é praticamente certo que o diodo queimará. NUNCA FAÇA ISSO!

    Coloque um resistor em série na parte positiva, entre 330 ohms e 200 ohms, mais ou menos.

Cores do LED

    A cor é definida pela energia liberada, que é determinada pelo bandgap. A fórmula equivalente é:
    E=hf

    Onde h é a constante de Planck e f é a frequência.

    A frequência é dada por:
    f=1/λ

    Onde λ é o comprimento de onda da luz.

    Quanto maior a frequência, menor o comprimento de onda da luz. Frequências altas vão em direção ao roxo, violeta, ultravioleta, etc. (cores de comprimentos de onda curtos). Frequências baixas (vermelho, infravermelho) têm comprimentos de onda maiores.

    A energia liberada depende do bandgap. O LED é definido pelo material do semicondutor e a distância entre a banda de valência e a banda condutora.
