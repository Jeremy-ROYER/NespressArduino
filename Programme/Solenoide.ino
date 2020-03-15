//Solénoïdes

#include<SoftwareSerial.h> 
#define RX 5 
#define TX 6 
SoftwareSerial BT(RX,TX);
char DATA;

int solenoidePetit = 8;
int solenoideGrand = 9;

void setup() {  
                
  pinMode(solenoidePetit, OUTPUT);
  pinMode(solenoideGrand, OUTPUT);
  Serial.begin(9600);
  BT.begin(9600);    
}
void loop() {
  //if(BT.available()) {
    //DATA=BT.read();
    //if (DATA=='P'){
      digitalWrite(solenoidePetit, HIGH);   // Active le solenoide
      delay(500);               
      digitalWrite(solenoidePetit, LOW);    // Relache
      delay(1000);
    //}

    //if (DATA=='G'){
      digitalWrite(solenoideGrand, HIGH);   // Active le solenoide
      delay(500);               
      digitalWrite(solenoideGrand, LOW);    // Relache
      delay(1000);
    //}
  //} 
}
