Aula 15 - For Loops

Primeiro, começamos com uma avaliação simples de ligar 2 LEDs por conta própria e fazer o primeiro LED piscar 3 vezes e o segundo 5 vezes. Depois, vemos que a forma como fazíamos, escrevendo o código várias vezes, é ineficiente, e que podemos simplesmente usar um for loop.

Para escrever for loops, deixamos apenas uma vez o bloco de código que queremos executar.

Bloqueamos o código por chaves:

cpp

for {
    digitalWrite(yellowLed, HIGH);
    delay(waitT);
    digitalWrite(yellowLed, LOW);
    delay(waitT);
}

Por exemplo, mas antes, precisamos declarar variáveis para definir condições antes de iniciar o for loop e depois.

cpp

int redBlink = 5; // quantidade máxima de blinks
int i; // contador

Por padrão, usamos i ou j, preferencialmente j por ser mais discernível.

Continuando a cláusula:

cpp

for (j = 1; j ≤ redBlink; j = j + 1) {
    // Código a ser repetido
}

Colocamos j = 1 inicialmente para sempre resetar o contador antes de iniciar o loop. O restante é a condição e o código para incrementar o contador.

For loops são uma ferramenta ótima para utilizar com periféricos e coisas do tipo, iremos ver.
Aula 16 - Truques com For Loops

É importante saber que o loop só é incrementado após ser finalizado, e ele inicia com o contador em sua definição original. Ou seja, se colocarmos o contador iniciando em 1 e imprimirmos o contador no for loop, o 1 será impresso ao invés do 2 como primeiro número na sequência.

Sempre podemos alterar os parâmetros do for loop, incrementando 2 para contadores, ou iniciando em outro número além de 1, ou até mesmo decrementando o contador.

cpp

for (inicialização; condição; incremento) {
    // Código a ser repetido
}