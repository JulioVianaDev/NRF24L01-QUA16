#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(9,10);//criando o radio
const byte endereco[6] = "00001"; //cria um endereço 
//MESMO ENDEREÇO DO SLAVE

int pinoBotao = 2; //pino do botao no arduino
int estadoBotao = 0; //variavel para armazenar o estado

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
