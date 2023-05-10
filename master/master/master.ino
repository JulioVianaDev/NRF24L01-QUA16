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
  pinMode(pinoBotao,INPUT_PULLUP);//define botao como entrado negativa;
  radio.begin();//inicia radio
  radio.openWritingPipe(endereco);//diz qual endereço do sinal está conversando
  radio.setPALevel(RF24_PA_HIGH);//frequencia alta
  radio.stopListening();//diz que ele não precisa ouvir só enviar
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
