Aula 27 e 28 - Pushbuttons
Como os Switches Funcionam?

Um switch é um dispositivo que possui dois estados: up e down. No estado "up", o circuito está aberto, ou seja, não está conectado. No estado "down" (ou short), o circuito se fecha, estabelecendo a conexão.

Usaremos a função digitalRead() para obter o valor 0 ou 1, dependendo da presença ou ausência de voltagem aplicada.
Pull-up Resistor

Ao utilizar um resistor pull-up, conectamos um resistor em série com o botão, ligado a 5V, e o outro extremo do botão ao GND.

A leitura da voltagem com digitalRead() varia dependendo se o switch está em estado short (conectado) ou open (desconectado).

O terminal mais curto no botão está sempre mais próximo. Vamos utilizar os terminais mais distantes do switch.

Quando o switch está em estado short, o pino de leitura é conectado ao terra, resultando em uma leitura de 0.

É importante adicionar um delay entre as leituras de entrada do botão, pois há um tempo necessário para a troca de estado.
Exercício

Faça um switch toggle, onde o estado do botão se mantém até ser pressionado novamente.

A lógica por trás do código envolve a criação de uma variável que alterna entre estados e "lembra" qual foi o último estado do LED, mudando de ligado para desligado, dependendo da memória.