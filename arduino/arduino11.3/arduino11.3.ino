#include <Adafruit_NeoPixel.h> //Dołączenie biblioteki
 
//Konfiguracja linijki
Adafruit_NeoPixel linijka = Adafruit_NeoPixel(8, A5, NEO_GRB + NEO_KHZ800);
 
void setup() {
  linijka.begin(); //Inicjalizacja
  linijka.show(); 
 
  linijka.setPixelColor(0, linijka.Color(0, 255, 0)); //Dioda nr 1 świeci na zielono
  linijka.show(); 
}
 
void loop() {
    for(int i = 0; i < 8; i++) 
    {
        linijka.setPixelColor(i, linijka.Color(0, 255, 0));
        linijka.show(); 
        delay(300);
        linijka.setPixelColor(i, linijka.Color(0, 0, 0));
    }
    for(int r = 0; r <= 255; r++)
    {
        linijka.setPixelColor(7, linijka.Color(r, 255 - r, 0));
        linijka.show();
        delay(10); 
    }
    for(int j = 7; j >= 0; j--)
    {
        linijka.setPixelColor(j, linijka.Color(255, 0, 0));
        linijka.show(); 
        delay(300);
        linijka.setPixelColor(j, linijka.Color(0, 0, 0));
    }
    for(int g = 0; g <= 255; g++)
    {
        linijka.setPixelColor(0, linijka.Color(255 - g, g, 0));
        linijka.show();
        delay(10); 
    }
}