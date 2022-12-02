#include<Servo.h>

Servo olhoDireito;
Servo olhoEsquerdo;
Servo labioSDireito;
Servo labioSEsquerdo;
int pos = 0;
int val;
int angulo = 0;
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
  labioSEsquerdo.attach(6);
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
  olhoDireito.write(0);
  olhoEsquerdo.write(0);
  labioSDireito.write(0);
  labioSEsquerdo.write(0);
}

void Triste() {
  olhoDireito.write(90);
  olhoEsquerdo.write(90);
  labioSDireito.write(30);
  labioSEsquerdo.write(-20);
}

void Raiva() {
  olhoDireito.write(40);
  olhoEsquerdo.write(300);
  labioSDireito.write(0);
  labioSEsquerdo.write(30);
}

void Medo() {
  
  olhoDireito.write(20);
  olhoEsquerdo.write(220);
  labioSDireito.write(30);
  labioSEsquerdo.write(25);
}


void CaraMorna() {
  olhoDireito.write(0);
  olhoEsquerdo.write(0);
  labioSDireito.write(0);
  labioSEsquerdo.write(0);
}
