 //Programme principal

#include <Servo.h>

#include<SoftwareSerial.h> 
#define RX 5 
#define TX 6 
SoftwareSerial BT(RX,TX);
char DATA;

int solenoidePetit = 7;
int solenoideGrand = 8;

Servo ServoCap;
Servo ServoOuv;


void setup() {
  pinMode(solenoidePetit, OUTPUT);
  pinMode(solenoideGrand, OUTPUT);
  BT.begin(9600);
  
  ServoCap.attach(10);
  ServoOuv.attach(9);
  Serial.begin(9600);
}

void loop() {
  if(BT.available()){
    DATA=BT.read();
    if(DATA=='C'){
      ServoC();
    }
    if(DATA=='O'){
      ServoO();
    }
    if(DATA=='B'){
      SolenG();
    }
    if(DATA=='b'){
      SolenP();
    }
    if(DATA=='F'){
      ServoF();
    }

    if(DATA=='P'){
      ServoO();
      delay(2000);
      ServoC();
      delay(2000);
      ServoF();
      delay(2000);
      SolenP();
      delay(30000);
      ServoO();
      delay(1000);
      ServoF();
    }

     if(DATA=='G'){
      ServoO();
      delay(2000);
      ServoC();
      delay(2000);
      ServoF();
      delay(2000);
      SolenG();
      delay(30000);
      ServoO();
      delay(1000);
      ServoF();
     }
  }
}

void ServoC() {
    ServoCap.write(100);
    delay(800);
    ServoCap.write(0);
    delay(320);
    ServoCap.write(90);
    delay(1000);
}

void ServoO() {
    ServoOuv.write(0);
    delay(1500);
    ServoOuv.write(90);
    delay(1000);
}

void ServoF(){
    ServoOuv.write(180);
    delay(1500);
    ServoOuv.write(90);
    delay(1000);
}

void SolenP() {
      digitalWrite(solenoidePetit, HIGH);   // Active le solenoide
      delay(500);               
      digitalWrite(solenoidePetit, LOW);    // Relache
      delay(1000);
}

void SolenG() {
      digitalWrite(solenoideGrand, HIGH);   // Active le solenoide
      delay(500);               
      digitalWrite(solenoideGrand, LOW);    // Relache
      delay(1000);
}
