# Aula 22 e 23 - Buzzers Ativos e Sons

Primeira vez que usaremos um atuador diferente que LED. Aprendemos a programar e agora usaremos sensores e atuadores diferentes.

- Existem dois tipos de Buzzers, ativos e passivos:
  1. **Buzzers Ativos (todo preto)**
      - Mais fácil de usar, basta conectar a voltagem e o GND que faz barulho.
  2. **Buzzers Passivos (verde)**
      - Necessita de um sinal analógico, sendo mais difícil de usar.
      - Têm custo reduzido, mas podem fazer a mesma coisa que o ativo.
      - Pode mudar a tonalidade.

Usaremos o buzzer ativo para servir de alerta.

Iniciamos o buzzer conectando em um pino normalmente, e temos que setar o `pinMode()`.

Conseguimos ativar o pino usando `digitalWrite` da mesma forma que o LED.

## Exercício

Usar um potenciômetro e um buzzer. Se a voltagem lida no potenciômetro for maior que 1000, o buzzer tem que apitar.

O resto da aula seguiu a lógica do código que eu fiz, mas ao invés de usar `while`, aproveitei a função `void loop()`, e resultou em menos código.

```cpp
int potVal = analogRead(potPin);

Serial.println(potVal);

if (potVal > 1000) {
    digitalWrite(buzzPin, HIGH);
    delay(dt);
    digitalWrite(buzzPin, LOW);
}
```
#Aula 23

Como mudar o som do buzzer ativo? É melhor usar o passivo, mas é possível com o ativo também, criando 2 delays e com um for loop.

```cpp

for (int j = 1; j <= 100; j++) {
    digitalWrite(buzzPin, HIGH);
    delay(dt1);
    digitalWrite(buzzPin, LOW);
    delay(dt1);
}

for (int j = 1; j <= 100; j++) {
    digitalWrite(buzzPin, HIGH);
    delay(dt2);
    digitalWrite(buzzPin, LOW);
    delay(dt2);
}
```
Muda bastante o som, mas é melhor usar o passivo.

O buzzer tem um símbolo de speaker no circuito.