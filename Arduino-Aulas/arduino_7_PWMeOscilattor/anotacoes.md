Aula 8 - Entendendo o que é Pulse Width Modulation (PWM)

O analogWrite() funciona por meio de um fenômeno conhecido como PWM. Utilizando um osciloscópio, uma ferramenta capaz de medir a voltagem, mesmo com uma margem de erro, podemos conectar nos anodos e cátodos do LED.

A voltagem analógica na verdade não funciona como constante. Existe uma frequência em que o LED é ligado/desligado para dar um somatório da voltagem desejada. O período padrão do Arduino é de 4 milissegundos, e nesses milissegundos ele é ligado/desligado para dar uma média da voltagem desejada. Quando colocamos 127 como valor para a função analogWrite(), teremos apenas 5 volts durante 2 milissegundos e 0 volts durante os outros 2 milissegundos restantes do período.

Uma forma de "arrumar" isso é utilizar um capacitor, e podemos ver isso no próprio gráfico do osciloscópio. O capacitor utilizado tinha 1 kilofaraday.

Pesquisei um pouco mais a fundo sobre a eletrônica por trás, para ter uma melhor definição de voltagem, corrente e outras coisas relacionadas.

    Voltagem
        Símbolo (V ou E)
        Custo de energia (trabalho) para mover uma unidade de carga positiva do ponto mais negativo (menor potencial) para o ponto mais positivo (maior potencial). De modo equivalente, é também usado quando a energia é liberada para mover do ponto mais alto para o menor.
        Pode ser chamada de diferença de potencial ou força eletromotriz (EMF).
        1 Joule de trabalho = Mover uma carga de 1 Coulomb pela EMF de 1V.

    Corrente Elétrica (I)
        Taxa de fluxo de carga elétrica passando por um ponto.
        Medida em Ampere (A), indo de miliampere para nano e etc.
        1A = 1C/s.
        Basicamente, corrente em circuitos é o fluxo do ponto mais positivo para o mais negativo, mesmo que o fluxo de um elétron seja na verdade o contrário.

    Voltagem = entre pontos
        Gerada por meio de trabalho em dispositivos com baterias, que fazem conversão de energia eletroquímica, geradores que convertem energia mecânica, solares, etc.

    Corrente = através dos pontos
        Adquirida quando colocamos voltagem através das coisas.

Podemos ver ambos através do osciloscópio, que permite ver voltagem e, às vezes, correntes ao longo do tempo.

Power = Energia por tempo

P = VI, medido em watts

1W = 1J por segundo

Capacitores ou Condensadores

Voltando ao PWM, funcionam em ciclos de trabalho (Duty Cycle) que é a razão de tempo que o sinal está alto e baixo durante o período do PWM.

Para ter de fato um sinal analógico apenas utilizando capacitores no caso do Arduino.
