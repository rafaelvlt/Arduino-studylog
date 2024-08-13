# Aula 32 - Joysticks

Para conectar com o arduino, devemos usar Cabos Female-male dupont.

Joysticks são dois potenciometros basicamente que compartilham 5v e GND, e duas axis, x e y, onde mover o joystick nessas axis altera a resistência do potenciômetro associado a ela. VRX e VRY, além de ter um switch, que é  atrelado ao pressionar do joystick

X e Y devem ser conectados em analógicos, enquanto o switch deve estar conectado em um digital.

Inicializamos variáveis para representar os pinos x, y, e o switch, além de setar variáveis também para armazenar valores da posição delas.

Para o pullup pin do switch, devemos colocar digitalWrite(spin, HIGH); para não precisar colocar um resistor em sequência com o pullup switch(necessário no caso do botão).