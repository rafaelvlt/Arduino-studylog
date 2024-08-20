# Aula 38 - Hexadecimal

Computadores apenas conseguem entender numeros, então nós como cientistas temos que dar jeitos de converter tudo que é real para números, estrelas, cores etc etc. Como podemos representar qualquer número com switches

podemos numerar coisas para representar elas, podemos representar qualquer coisa, por exemplo podemos dar um número para qualquer cor para formar ela atraves de 0’s e 1’s

Para interagirmos com switches precisamos do endereços deles na memória, endereço ele que seria representado em binário para o pc conseguir interpretar, então teriamos endereços em binário e comandos ou valores em binário, por isso começamos a utilizar Hexadecimals para diminuir a quantidade de 0’s e 1’s que humanos deriam lidar diariamente.

Para números muitos grandes binário deixa de ser legível para humanos, sendo dificil de operar com, então foi pensado em uma maneira de chunkar os 4 bits em um só caracter. para representar o valor dos 4 bits que formam até 16, foi utilizado do sistema hexadecimal

0-9 é igual

A = 10

B = 11

C = 12

D = 13

E = 14

F = 15 

ou seja 10 em hex seria equivalente a 16 em decimal, pois colocariamos um 0 a direita após o F e recomeçariamos a conta com 1

Assim com 2 caracterés podemos contar de 0 até 255

FF seria o mesmo que 8 switches ligados, ou 8 bits

11111111

Tipos de dados: int, float, byte(em Hexadecimal) tem 2 caracteres

para representar hexadecimal usamos um 0x 

de prefixo antes do numero

0x32

0xFF

Usamos muitos hexadecimal

byte varname = 0x00;

podemos colocar em binário tb

byte varname = B00000000

Podemos usar parâmetros novos para Serial.print(), se colocado uma , após o que deve ser printado, podemos específicar o tipo de numero que deve ser printado

Serial.println(myByte, BIN); = binário

Serial.println(myByte, HEX); = hexa

Serial.println(myByte, DEC); = decimal

Podemos facilmente transferir entre binário e hex, mas em algum casos como por exemplo output para varios atuadores seria mais fácil usar binário para identificação

Basicamente o que levamos dessa aula é que hexadecimal foi criado e é utilizado por conveniência, mas é facilmente transferivel para binário por ex