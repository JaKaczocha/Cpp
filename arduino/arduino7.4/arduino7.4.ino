#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
bool isRunning = false;
unsigned long startTime = 0;

void setup() {
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Stoper");
  lcd.setCursor(0, 1);
  lcd.print("Naciśnij start");
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    String command = Serial.readString();
    Serial.println("Otrzymano komendę: " + command);
    if (command == "start" && !isRunning) {
    
      isRunning = true;
      startTime = millis();
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Mierzenie czasu");
    } else if (command == "stop" && isRunning) {
      isRunning = false;
      unsigned long stopTime = millis();
      unsigned long elapsedTime = (stopTime - startTime) / 1000; // Czas w sekundach
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Koniec");
      lcd.setCursor(0, 1);
      lcd.print("Czas: ");
      lcd.print(elapsedTime);
      lcd.print(" s");
    }
  }
}