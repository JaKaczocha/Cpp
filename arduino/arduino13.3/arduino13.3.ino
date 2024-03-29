#define LED_R 8
#define LED_G 9
#define LED_B 10

#define PIR 2
 
void setup() {
  pinMode(LED_R, OUTPUT); //Poszczególne piny sterujące diodą jako wyjścia
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
 
 
  pinMode(PIR, INPUT); //PIR jako wejście
    
  digitalWrite(LED_R, LOW); //Dioda wyłączona
  digitalWrite(LED_G, LOW);
  digitalWrite(LED_B, LOW);
}
 
void loop() {
  if (digitalRead(PIR) == LOW) { //Jeśli wykryto ruch
    digitalWrite(LED_R, LOW); //Stan OK - dioda zielona
    digitalWrite(LED_G, HIGH);
  } else {
    digitalWrite(LED_R, HIGH); //Stan ALARM - dioda czerwona
    digitalWrite(LED_G, LOW);
  }
}