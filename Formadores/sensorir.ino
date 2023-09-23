/* Acionamento de LED através da leitura do Sensor Infravermelho IR */
int pinoSensor = 2; /* Pino digital utilizado pelo sensor. */
int Pin_LED = 4 ; /* Define o pino 4 como pino do LED. */
int Sensor_IR = 0; /* Variável que armazena o estado do sensor (0 ou 1).
*/
void setup() {
pinMode(pinoSensor, INPUT); /*Define o pino do sensor como ENTRADA. */
pinMode(Pin_LED, OUTPUT); /* Define o pino do LED como SAÍDA. */
Serial.begin(9600); /* Inicializa a comunicação serial */
}
void loop() {
Sensor_IR = digitalRead(pinoSensor); /* Realiza a leitura do sensor e
registra na variável */
Serial.println(Sensor_IR); /* Imprime o valor registrado na
variável */
 /* (0: com obstáculo ou 1: sem
obstáculo) */
if (Sensor_IR == 0) { /* Se a leitura no sensor for igual a 0
*/
 digitalWrite(Pin_LED, HIGH); /* Ligue o LED */
}
if (Sensor_IR == 1) { /* Se a leitura no sensor for igual a 1
*/
 digitalWrite(Pin_LED, LOW); /* Desligue o LED */
}
}