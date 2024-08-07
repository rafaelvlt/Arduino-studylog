Aula 25 - Fotoresistores e Fotodetectores
Fotoresistores

A luz é inversamente proporcional à resistência.

A teoria é similar à dos diodos, pois funciona com camadas de condução e de valência. Quando há pouca luz, os elétrons são acumulados até o máximo na camada de valência. Porém, quando recebem fótons, os elétrons são enviados para a camada de condução, e, com isso, a resistência diminui.

É importante ser teórico na medição de resistência.

A resistência pode variar de 1.5 kOhms a 16 kOhms em total escuridão. Muitos sensores funcionam dessa forma, com resistência variável dependendo da condição. São resistores variáveis.

Para medir a corrente variável, como o Arduino só mede voltagem, temos que colocar um resistor em série:

I=5Rf+5kΩI=Rf​+5kΩ5​

no caso de usarmos um resistor de 5 kOhms.

A corrente é diretamente proporcional à luz:

V=(5Rf+5kΩ)×5kΩV=(Rf​+5kΩ5​)×5kΩ

Usaremos um pino analógico para medir. Colocamos então entre a conexão do fotoresistor e do resistor normal. A medição será entre 0 e 1023 no pino analógico.

Fizemos o teste e podemos alterar o fotoresistor no Tinkercad.
Exercício

Faça um circuito onde, se as luzes estiverem ligadas, o LED verde deve ligar; e, quando estiverem apagadas, o LED vermelho deve ligar.
Aula 26 - Projeto com Buzzer e Fotoresistor

Faça um circuito que dê uma indicação visual de quão luminoso está o quarto, tendo o buzzer com um som agradável.

    50 ms apagado
    10 ms aceso

995−94995−94

50−1050−10

m=40901m=90140​

dt−10=40901(fotoval−94)dt−10=90140​(fotoval−94)

dt=40901⋅fotoval−40⋅94901+10dt=90140​⋅fotoval−90140⋅94​+10

Consegui fazer até estar entre 50 ms e 13 ms. Errei algo na matemática; funciona, mas não da forma como gostaria totalmente.

Reassistindo o vídeo, percebi que era um erro de matemática em relação à equação da reta. Consegui fazer para o caso positivo, mas, para o negativo, acredito que eu teria que positivar de alguma maneira o valor.