# Aula 7 - Entendendo pin analog e comandos relacionados

Pins digitais possuem apenas a capacidade de emitir 5 volts ou emitir 0(HIGH e LOW respectivamente) porém utilizando analogWrite(pin, volt(int de 0 a 225)) é possível habilitar um meio termo entre as duas voltagens

para poder utilizar o analogWrite, o pin em questão deve possuir um til(~) ao lado da sua numeração.

O numero da voltagem vai de 0 até 255(devido ao byte só armazenar 8 digitos, 2^8 menos 1 devido a começarmos a contar pelo 0)

selecionando 0 como parâmetro, a voltagem de 0 será colocada, porém, colocando 5 não será dado 5 volts.

A voltagem é em escala de 0 até 5, sendo 0, de fato 0 volts e 255 5 volts, então por exemplo, se querermos 2,5V, teriamos que colocar a metade de 255, em torno de 127,5 se fossemos utilizar floats.

Importante!! usar variáveis para definir a voltagem.

Assignment 

Criar um circuito em que o brilho do led mude com o tempo, tendo ao menos 4-5 estágios.

vars podem ser mudadsa dinamicamente depois de setadas!! mas errei ao tentar só mudar o brilho invés de mudar o brilho e depois enviar o sinal para mudar no circuito de fato com o analogWrite()
