#include<Servo.h>

Servo olhoDireito;
Servo olhoEsquerdo;
Servo labioSDireito;
int pos = 0;
int val;
int BotaoSorriso = 2;
int BotaoTristeza = 5;
int BotaoRaiva = 8;
int BotaoMedo = 9;

void setup()
{
  Serial.begin(9600);
  pinMode(BotaoSorriso, INPUT);
  pinMode(BotaoTristeza, INPUT);
  pinMode(BotaoRaiva, INPUT);
  pinMode(BotaoMedo, INPUT);
  
  olhoDireito.attach(3);
  olhoEsquerdo.attach(4);
  labioSDireito.attach(7);

}

void loop()
{
  if (digitalRead(BotaoSorriso) == HIGH) {
    Sorrir();
    delay(2000);
  }
  if (digitalRead(BotaoTristeza) == HIGH) {
    Triste();
    delay(2000);
  }
  if (digitalRead(BotaoRaiva) == HIGH) {
    Raiva();
    delay(2000);
  }
  if (digitalRead(BotaoMedo) == HIGH) {
    Medo();
    delay(2000);
  }
  CaraMorna();
}



void Sorrir() {
  olhoDireito.write(90);
  olhoEsquerdo.write(45);
    labioSDireito.write(90);
}

void Triste() {
  olhoDireito.write(45);
  olhoEsquerdo.write(90);
  labioSDireito.write(90);
}

void Raiva() {
  olhoDireito.write(45);
  olhoEsquerdo.write(90);
  labioSDireito.write(45);
}

void Medo() {
  olhoDireito.write(45);
  olhoEsquerdo.write(90);
  labioSDireito.write(90);
}


void CaraMorna() {
  olhoDireito.write(0);
  olhoEsquerdo.write(0);
  labioSDireito.write(0);
}
