/* Inclut la lib Servo pour manipuler le servomoteur */
#include <Servo.h>

/* Créer un objet Servo pour contrôler le servomoteur */
Servo monServomoteur;

void setup() {
    
  // Attache le servomoteur à la broche D9
  monServomoteur.attach(10);
  Serial.begin(9600);
}

void loop() {
    monServomoteur.write(100);
    delay(825);
     monServomoteur.write(0);
    delay(300);
    monServomoteur.write(90);
    delay(5000); 
}
