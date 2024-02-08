#define LED_R 10
#define LED_G 11
#define LED_B 12
#define BUZZER A5
#define KONTAKTRON 0
 
void setup() {
  pinMode(LED_R, OUTPUT); //Poszczególne piny sterujące diodą jako wyjścia
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
 
  pinMode(KONTAKTRON, INPUT_PULLUP); //Kontaktron jako wejście
  
  digitalWrite(LED_R, LOW); //Dioda wyłączona
  digitalWrite(LED_G, LOW);
  digitalWrite(LED_B, LOW);

  analogWrite(BUZZER,OUTPUT);
}
 
void loop() {

    
    if (digitalRead(KONTAKTRON) == LOW) { //Jeśli czujnik zwarty
        digitalWrite(LED_R, LOW); //Stan OK - dioda zielona
        digitalWrite(LED_G, HIGH);
    } else {
        digitalWrite(LED_R, HIGH); //Stan ALARM - dioda czerwona
        digitalWrite(LED_G, LOW);
        digitalWrite(A5, LOW); //Cykliczna zmiana stanu wyjścia
        while(true) 
        {
            digitalWrite(A5, LOW); //Cykliczna zmiana stanu wyjścia
            delay(90);
            digitalWrite(A5, HIGH);
            delay(90);
        }
    }

  
}