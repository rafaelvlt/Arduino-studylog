Aula 11 - Serial Port e Print

Para obter informações do Arduino através da porta serial, você pode usar a comunicação serial para ler dados dos sensores. Isso é feito configurando a porta serial no setup() do Arduino e usando funções de impressão como Serial.print() e Serial.println() no loop().
Configuração da Porta Serial

No setup(), você inicializa a comunicação serial com a taxa de transmissão (baud rate) desejada:

cpp

void setup() {
  Serial.begin(9600); // Inicializa a comunicação serial com baud rate de 9600
}

Imprimindo Dados

Para imprimir valores sem uma nova linha:

cpp

Serial.print(j); // Imprime o valor de j na mesma linha

Para imprimir valores com uma nova linha:

cpp

Serial.println(j); // Imprime o valor de j e adiciona uma nova linha

Variáveis e Operações

Você pode alterar variáveis após serem configuradas:

cpp

j = j + 1; // Incrementa o valor de j

A taxa de transmissão no monitor serial deve corresponder à configurada no código.
Trabalhando com Strings

Você pode definir e imprimir strings:

cpp

String varname = "caracteres";
Serial.println(varname); // Imprime a string e adiciona uma nova linha

Considerações

    A função println adiciona uma nova linha após a impressão.
    A taxa de atualização aumenta com um baud rate maior.
    Variáveis podem ser declaradas sem valor inicial:

cpp

int v;

    É ineficiente usar muitos Serial.print(), portanto agrupar informações em uma única impressão é preferível:

cpp

Serial.print("A temperatura é: ");
Serial.println(temperatura);

    A multiplicação é feita com *:

cpp

int resultado = 2 * 3;

    Números de ponto flutuante podem ser representados diretamente:

cpp

float valor = 0.5;

Aula 12 - Potenciômetro
Descrição do Potenciômetro

Um potenciômetro é um resistor variável com três pernas: duas externas e uma central. A resistência pode ser ajustada girando uma roda no topo.
Funcionamento

Pense no potenciômetro como dois resistores em série dentro de uma caixa. A resistência total é a soma das resistências dos dois resistores. A roda ajusta a resistência relativa entre os dois resistores, sem alterar a resistência total.
Conexão e Medição

Para usar o potenciômetro:

    Conecte a voltagem a uma das pernas externas.
    Conecte o GND à outra perna externa.
    Use a perna central para medir a voltagem de saída.

Exemplo de Conexão

cpp

int sensorPin = A0; // Pino do sensor conectado ao pino central do potenciômetro
int sensorValue = 0; // Valor lido do potenciômetro

void setup() {
  Serial.begin(9600); // Inicializa a comunicação serial
}

void loop() {
  sensorValue = analogRead(sensorPin); // Lê o valor do pino do sensor
  Serial.println(sensorValue); // Imprime o valor lido
  delay(100); // Aguarda 100 milissegundos
}

Neste exemplo, o pino central do potenciômetro está conectado ao pino analógico A0 do Arduino. O valor lido é impresso no monitor serial.
Medição da Voltagem

A voltagem de saída é medida pela fórmula:
Vout=I×R2Vout​=I×R2​

Ao conectar o potenciômetro:

    A voltagem é conectada a uma das pernas externas.
    O GND à outra perna externa.
    A perna central é usada para medir a voltagem de saída.

A resistência é ajustada girando o knob, alterando a voltagem de saída proporcionalmente.