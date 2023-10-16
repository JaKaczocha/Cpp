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
  
  randomSeed(analogRead(A5)); //Ziarno dla generatora liczb losowych
}
 
 
void loop() {
  int zmiana = 0;
  int zmianaLosowa = random(255);
  
  for (zmiana = 0; zmiana < 255; zmiana++) { //Płynna zmiana kolorów
    analogWrite(czerwona1, zmianaLosowa);  
    analogWrite(zielona1, zmiana);
    analogWrite(niebieska1, 255 - zmiana);   
 
    analogWrite(czerwona2, zmiana);  
    analogWrite(zielona2, 255 - zmiana);
    analogWrite(niebieska2, zmianaLosowa);
 
    delay(10);
  } 
 
  for (zmiana = 255; zmiana > 0; zmiana--) { //Płynna zmiana kolorów "wstecz"
    analogWrite(czerwona1, zmianaLosowa);  
    analogWrite(zielona1, zmiana);
    analogWrite(niebieska1, 255 - zmiana);   
 
    analogWrite(czerwona2, zmiana);  
    analogWrite(zielona2, 255 - zmiana);
    analogWrite(niebieska2, zmianaLosowa);
 
    delay(10);
  } 
}
