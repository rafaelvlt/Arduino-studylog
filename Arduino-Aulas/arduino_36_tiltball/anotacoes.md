# Aula 36: Tilt Switch

tilt ou ball switch tem dois conectores e uma latinha com uma bola de metal dentro, se a bola está parada com a lata em pé vai existir um short no circuito que vai dar sinal, caso ela não esteja conectada(o switch está de lado) o circuito vai estar off. em casos de projetos maiores com motores vibrando teria problema com o motor.

CIRCUITO

Conectamos ambas as pernas do switch em colunas diferentes, como são apolares podemos conectar voltagem e gnd em qualquer uma das pernas, contanto que tenha duas 

CÓDIGO

O código é bem similar ao do button switch, setamos o digitalinput e o digitalWrite no void setup()