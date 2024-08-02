Aula 17 - While Loops
Loops while funcionam melhor quando precisamos lidar com loops cujo tempo de execução não é conhecido de antemão. Eles podem realizar as funções de um loop for também. São bons, por exemplo, para trabalhar com sensores que devem executar uma ação até lerem uma informação específica e então parar.

A sintaxe do while loop é diferente da do for loop, pois não permite colocar o contador e a iteração nos parâmetros do loop. Isso precisa ser feito manualmente dentro do próprio loop.

cpp

int j;

j = 1;
while (j < 10) {
    j = j + 1;
    Serial.println("Hello World!");
}

A sintaxe funciona mais ou menos assim. É importante inicializar j = 1; antes, caso esteja na função loop(), para sempre resetar j antes de iniciar o loop.

O while loop é muito poderoso, por exemplo, ao lidar com um potenciômetro. Podemos usar condicionais para agir somente quando o valor lido estiver acima de um determinado número