#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

#define PIN            3  // Pin, do którego są podłączone neopixele
#define NUMPIXELS      7  // Ilość neopixeli

void setColors();

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();
  setColors();
}

void setColors() {
  // Ustaw kolory na poszczególnych neopixelach
  pixels.setPixelColor(0, pixels.Color(255, 0, 0));  // Czerwony
  pixels.setPixelColor(1, pixels.Color(0, 255, 0));  // Zielony
  pixels.setPixelColor(2, pixels.Color(0, 0, 255));  // Niebieski
  pixels.setPixelColor(3, pixels.Color(255, 255, 0));  // Żółty
  pixels.setPixelColor(4, pixels.Color(255, 0, 255));  // Magenta
  pixels.setPixelColor(5, pixels.Color(0, 255, 255));  // Cyjan
  pixels.setPixelColor(6, pixels.Color(255, 255, 255));  // Biały

  pixels.show();  // Wyświetl ustawione kolory
}

void loop() {
  // Puste ciało pętli, ponieważ kolory są ustawiane tylko raz w funkcji setup()
}
