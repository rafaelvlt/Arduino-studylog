##Aula 9 - Lei de Ohm e Design de circuitos
Os circuitos que usamos anteriormente foram fornecidos pelo professor. Agora, iremos criar os nossos próprios circuitos, e saber como fazer o design e entender as leis por trás é importante para evitar que componentes sejam queimados pela corrente alta.

Voltagem = tipo de pressão; define a quantidade de corrente que “sai” do circuito.

Corrente = flui na direção positiva, mesmo que os elétrons fluam do negativo para o positivo.

Resistência = limita a corrente que passa pelos fios.

Lei de Ohm:

V=IRV=IR

    VV = Voltagem (Volts)
    II = Corrente (Amperes)
    RR = Resistência (Ohms, Ω)

Outras formas da Lei de Ohm:

    I=VRI=RV​
    R=VIR=IV​

Exemplo:

I=VR=5330≈15,15×10−3 AI=RV​=3305​≈15,15×10−3 A

Transformando 10−310−3 em micro, temos:

I≈15,15 mAI≈15,15 mA

Amperes completos são normalmente utilizados em estruturas maiores, enquanto em circuitos simples de eletrônica lidamos com miliamperes (mA).

Resistores em Série:

Se temos R1=330 ΩR1=330Ω e R2=100 ΩR2=100Ω:

Rs=R1+R2=330+100=430 ΩRs​=R1+R2=330+100=430Ω

Quando sabemos a resistência resultante, podemos reescrever o circuito com apenas uma resistência desenhada, que é a soma das duas, e o circuito funcionará da mesma forma.

Se quisermos encontrar os valores de voltagem pelos resistores originais, basta usar a Lei de Ohm para a resistência específica, considerando a corrente total do circuito.

Exemplo:

Para R1R1:

V=I×R1=11,63×10−3×330=3,84 VV=I×R1=11,63×10−3×330=3,84 V

Para R2R2:

V=I×R2=11,63×10−3×100=1,16 VV=I×R2=11,63×10−3×100=1,16 V

A soma das duas voltagens individuais das resistências é igual à voltagem original do circuito que supre a corrente.

Pode-se usar essa propriedade para verificar se o resultado está correto.

No circuito, podemos testar no próprio Arduino e verificar a validade conectando 5V a um resistor de 330Ω que está ligado a um resistor de 100Ω, ambos conectados ao terra. Não precisamos de software, pois a voltagem está sempre ligada. O jeito mais fácil de medir a corrente é medir a voltagem individual de cada resistor usando um voltímetro, conectando o cátodo e o ânodo nos pontos corretos influenciados pelos resistores.

O Arduino normalmente não entrega completamente os 5V, fornecendo cerca de 4,9V.

Medimos individualmente com o voltímetro conectando o positivo e o negativo nos pontos corretos ao redor do resistor.

Essa seção foi focada em entender a teoria; portanto, não foi feita uma avaliação. Na próxima aula, usaremos o mesmo circuito para medir a voltagem através do próprio Arduino, lendo um sinal através do pino.