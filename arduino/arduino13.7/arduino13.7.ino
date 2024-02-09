#define LED_R 8
#define LED_G 9
#define LED_B 10
#define LED_SYG 13
#define PIR 2
 
volatile bool on = 0;
 
void setup() {
    pinMode(LED_R, OUTPUT); //Poszczególne piny sterujące diodą jako wyjścia
    pinMode(LED_G, OUTPUT);
    pinMode(LED_B, OUTPUT);
    

    pinMode(PIR, INPUT); //PIR jako wejście
        
    digitalWrite(LED_R, LOW);
    digitalWrite(LED_G, LOW);
    digitalWrite(LED_B, LOW);
    
    attachInterrupt(digitalPinToInterrupt(PIR), alarm, RISING); // Przerwanie reagujące na zbocze rosnące

}
 
void loop() {
  
}
 
void alarm() { //Przerwanie
    on = !on;
    digitalWrite(LED_B, on);
}
