/* Inclut la lib Servo pour manipuler le servomoteur */
#include <Servo.h>

/* Créer un objet Servo pour contrôler le servomoteur */
Servo monServomoteur;

void setup() {
    
  // Attache le servomoteur à la broche D9
  monServomoteur.attach(11 );
  Serial.begin(9600);
}

void loop() {
    monServomoteur.write(0);
    delay(1000);
    monServomoteur.write(90);
    delay(5000);
    monServomoteur.write(180);
    delay(900);
    monServomoteur.write(90);
    delay(5000);
}
