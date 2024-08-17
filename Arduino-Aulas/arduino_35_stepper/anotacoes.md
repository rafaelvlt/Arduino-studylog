# Aula 35: Stepper Motor

CIRCUITO: para utilizar de um motor de passos, precisamos do próprio motor, um módulo driver para ele, normalmente de uma fonte externa de energia e fios para controlar e fazer o aterramento+alimentação. não é aconselhavel alimentar o motor pelo arduino. É necessário plugar 4 fios para o controle.

Stepper motor assim como o servo utiliza de bibliotecas próprias, no caso sendo

#include <Stepper.h>

onde trabalhamos com objetos também, tendo que setar o próprio stepper

Stepper <nomedomotor>(revolução_por_min, pinos de controle separados por vírgula);

no setup é necessário setar a velocidade do motor em rotações por minuto

<nomedomotor>.setSpeed(int);

para rodar, no loop utilizamos a função

<nomedomotor>.step(REV_PER_MIN);

podemos colocar - na frente para o motor rodar anti-horário