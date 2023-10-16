#include <Adafruit_NeoPixel.h> //Dołączenie biblioteki
 
//Konfiguracja linijki
Adafruit_NeoPixel linijka = Adafruit_NeoPixel(8, A5, NEO_GRB + NEO_KHZ800);
 
void setup() {
  linijka.begin(); //Inicjalizacja
  linijka.show(); 
}
 
void loop() {
 int i = 0;
  for (i = 0; i < 8; i++) {
    if (i < 4) {
      linijka.setPixelColor(i, linijka.Color(255, 0, 0)); //Dioda nr i świeci na wybrany kolor
    } else {
      linijka.setPixelColor(i, linijka.Color(0, 0, 255)); //Dioda nr i świeci na wybrany kolor     
    }
    
    linijka.show(); 
    delay(100);
  }
  linijka.clear();
}