# Aula 18  - Lendo inputs através do Serial Monitor

Podemos conseguir valores do usuários através do serial monitor, alocando os números(tanto int quanto floats) a uma variável e trabalhando em cima dela, para isso, seguimos 3 conceitos importantes.

1. Pedimos o input do usuário, normalmente sendo através de um print no monitor como por exemplo “por favor, dê um número!”
2. Esperamos para que o usuário dê o input, normalmente usando um while loop sem nada, com a condicional de ter de fato um valor dado
3. Ler o que o usuário mandou, através de funções especiais

Um flowchart bom seria algo

printar mensagem pedindo para que o usuário dê algum valor

usar um while loop com condição while (Serial.available() == 0){
}

que funciona até o usuário por um input no serial monitor

ler o número ou string do usuário, preferencialmente alocando ele a uma variável, a sintaxe seria algo tipo

para int: myVar = Serial.parseInt();

para float: myVar = Serial.parseFloat();

para strings myVar = Serial.readString();

assim armazenamos o valor!

Com isso podemos fazer um projeto simples, onde o usuário dá um input por exemplo, quantas vezes o led deve blinkar