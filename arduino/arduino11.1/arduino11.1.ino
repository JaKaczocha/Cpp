#define czerwona1 6
#define zielona1 5
#define niebieska1 3
 
//Definicja wyprowadzeń drugiej diody
#define czerwona2 11
#define zielona2 10
#define niebieska2 9
 
void setup() {
  pinMode(czerwona1, OUTPUT); //Konfiguracja wyprowadzeń jako wyjścia
  pinMode(zielona1, OUTPUT);
  pinMode(niebieska1, OUTPUT);
  pinMode(czerwona2, OUTPUT);
  pinMode(zielona2, OUTPUT);
  pinMode(niebieska2, OUTPUT);
}
 
void loop() {
  digitalWrite(czerwona1, HIGH); //Miganie diodami, z użyciem różnych kolorów
  digitalWrite(zielona2, HIGH);   
  delay(1000);
  digitalWrite(czerwona1, LOW);
  digitalWrite(zielona2, LOW);
  digitalWrite(niebieska1, HIGH);
  digitalWrite(czerwona2, HIGH);      
  delay(1000);
  digitalWrite(niebieska1, LOW);
  digitalWrite(czerwona2, LOW);     
}