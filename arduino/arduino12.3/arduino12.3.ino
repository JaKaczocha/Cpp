void setup() {
    pinMode(A5, OUTPUT); //Konfiguracja A5 jako wyjście
}

void loop() {
  tone(A5, 4300); //Wygeneruj sygnał o częstotliwości 4300Hz na pinie A5  
  delay(150);  
  tone(A5, 3500); //Wygeneruj sygnał o częstotliwości 3500Hz na pinie A5  
  delay(150);
}

