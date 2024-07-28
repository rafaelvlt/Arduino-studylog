Aula 13 - If Statements

If são cláusulas: se → então

As funções setup() e loop() são duas cláusulas principais em um programa Arduino.

Cláusulas If são executadas apenas se condições específicas forem atendidas. Vamos ver um exemplo usando um potenciômetro.

Adicionamos um LED para funcionar como um "aviso" se a voltagem for maior que 4 volts.

A sintaxe é:

cpp

if (voltagem > 4.0) {
  digitalWrite(redLed, HIGH);
}

if (voltagem < 4.0) {
  digitalWrite(redLed, LOW);
}

Condicionais possíveis:

    Menor que: var < const ou var
    Maior que: var > int ou var
    Igual: var == int
    Diferente: var != int
    Menor ou igual: var <= int
    Maior ou igual: var >= int

No Tinkercad, a voltagem estava incorreta. Primeiro, tentei mudar a tolerância do tipo float e depois mudei para ler o valor como analog.

Podemos usar condicionais compostas, como E (AND) ou OU (OR):

    And - &&
    Or - ||

Avaliação:

3 LEDs: Vermelho, Verde e Amarelo

    Verde (Safezone): se < 2V
    Amarelo (Aviso): se entre 2V e 4V
    Vermelho (Perigo): se maior que 4V