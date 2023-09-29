#include <Servo.h>

#define POT_PIN  A5

Servo serwomechanizm;
int pozycja = 0;
int zmiana = 6;


void setup() {
  serwomechanizm.attach(9); 
  pinMode(POT_PIN, INPUT); 
}

void loop() {
  
  int potValue = analogRead(POT_PIN);
  
  
  pozycja = map(potValue, 0, 1023, 0, 180);
  
  
  serwomechanizm.write(pozycja);
  
  delay(200);
}