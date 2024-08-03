Arduino 14 - Projeto de LED Dimmable

LED com luminosidade controlada por potenciômetro

Circuito padrão com potenciômetro, e conectar o LED a um pino analógico para ser possível alterar a luminosidade.

É necessário fazer uma conversão matemática para realizar esse circuito devido ao valor lido com o potenciômetro ter 10 bits, enquanto o valor do PWM analógico é 8 bits (1023 e 255).

Como converter?

Plotamos um gráfico relacionando o valor do potenciômetro (potvalue) e o valor do LED (ledvalue).

Descobrimos que o coeficiente angular pode ser calculado usando o valor mínimo dos dois que é 0 e o valor máximo dos dois que é 1023 e 255.

Fazendo a equação da inclinação, temos:
Δ(ledvalue)Δ(potvalue)=2551023
Δ(potvalue)Δ(ledvalue)​=1023255​

sendo a inclinação 25510231023255​.

Com a equação da reta:
ledval−ledvalue inicial=m(potvalue−potvalue inicial)
ledval−ledvalue inicial=m(potvalue−potvalue inicial)

descobrimos que:
ledval=(2551023)(potvalue)
ledval=(1023255​)(potvalue)

Assim, conseguimos converter o valor do potenciômetro para o LED. Basta codificar para colocar o valor de ledval como input de um analogWrite em um LED e teremos um LED ajustável.
