#define BUZZER 11
#define KONTAKTRON 10
#define PIR 1

#include <Keypad.h> //biblioteka od klawiatury
#include <Adafruit_NeoPixel.h> //biblioteka od linijki LED

const byte ROWS = 4; // ile wierszy
const byte COLS = 4; //ile kolumn

byte rowPins[ROWS] = {5, 4, 3, 2}; //piny wierszy
byte colPins[COLS] = {6, 7, 8, 9}; //piny kolumn

char keys[ROWS][COLS] = { //mapowanie klawiatury
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

Keypad klawiatura = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS ); //inicjalizacja klawiatury
Adafruit_NeoPixel linijka = Adafruit_NeoPixel(8, A0, NEO_GRB + NEO_KHZ800); //konfiguracja linijki LED

volatile int stanAlarmu = 1;
int pinAlarmuPozycja = 1;
char pinCyfra1 = '1';
char pinCyfra2 = '2';
char pinCyfra3 = '3';
char pinCyfra4 = '4';

int ileCzasuMinelo = 0;

void setup() {
  pinMode(BUZZER, OUTPUT);
  pinMode(KONTAKTRON, INPUT_PULLUP);
  pinMode(PIR, INPUT_PULLUP);

  linijka.begin(); //inicjalizacja linijki
  linijka.show(); 
}

void loop() {
  char klawisz = 0; //zmienna do przetrzymywania znakow z klawiatury
  int i = 0; //zmienna pomocnicza do pętli

  switch(stanAlarmu) { //Wykonywania akcji odpowiedniej dla danego stanu
    case 1:
      //Czuwanie
      linijka.setPixelColor(0, linijka.Color(0, 15, 0)); //Dioda nr 1 świeci na zielono
      linijka.show();
      
      klawisz = klawiatura.getKey();
      if (klawisz == 'A') { //Czy zubroic alarm?
        for (i = 1; i < 8; i++) {
          linijka.setPixelColor(i, linijka.Color(0, 0, 15)); //Dioda nr i świeci na niebiesko
          linijka.show();
          delay(710);
        } // wykonanie tej petli zajmie okolo 5 sekund
        
         for (i = 1; i < 8; i++) {
          linijka.setPixelColor(i, linijka.Color(15, 0, 0)); //Dioda nr i świeci na czerwono
          linijka.show();
          delay(710);
        } // wykonanie tej petli zajmie okolo 5 sekund     
          
        wylaczDiody();
        stanAlarmu = 2;
      }
        
    break;
    
    case 2:
      //Monitorowanie
      linijka.setPixelColor(7, linijka.Color(15, 0, 0)); //Dioda nr 8 świeci na czerwono
      linijka.show();
      delay(50);
      linijka.setPixelColor(7, linijka.Color(0, 0, 0)); //Dioda nr 8 wylaczona
      linijka.show();
      delay(50);

      if (digitalRead(PIR) == HIGH) {
        stanAlarmu = 4; //Natychmiast uruchamiamy alarm
      } else if (digitalRead(KONTAKTRON) == HIGH) {
        ileCzasuMinelo= 0; //Zerowanie zmiennej
        stanAlarmu = 3; //Szansa na rozbrojenie
      }
      
    break;
    
    case 3:
      //Rozbrajanie
      klawisz = klawiatura.getKey();
      if (klawisz) {
        //Czy kolejna podana cyfra jest poprawna?
        if (pinAlarmuPozycja == 1 && klawisz == pinCyfra1) { //Jesli sprawdzamy 1 pozycje PINu
          pinAlarmuPozycja++; //Cyfra poprawna, mozna sprawdzic na kolejna
        } else if (pinAlarmuPozycja == 2 && klawisz == pinCyfra2) { //Jesli sprawdzamy 2 pozycje PINu
          pinAlarmuPozycja++; //Cyfra poprawna, mozna sprawdzic na kolejna         
        } else if (pinAlarmuPozycja == 3 && klawisz == pinCyfra3) { //Jesli sprawdzamy 3 pozycje PINu
          pinAlarmuPozycja++; //Cyfra poprawna, mozna sprawdzic na kolejna        
        } else if (pinAlarmuPozycja == 4 && klawisz == pinCyfra4) { //Jesli sprawdzamy 4 pozycje PINu
            stanAlarmu = 1; //Wszystkie 4 cyfry kodu sa poprawne
            pinAlarmuPozycja = 1; //Resetujemy informacje o wpisywanym pinie       
        } else {
           stanAlarmu = 4; //Blad w kodzie PIN - wlacz alarm
           pinAlarmuPozycja = 1; //Resetujemy informacje o wpisywanym pinie 
        }
      }

      delay(100);
      ileCzasuMinelo++;

      if (ileCzasuMinelo >= 50) {
        stanAlarmu = 4;
      }
    break;
    
    case 4:
      //Sygnalizacja alarmu
      for (i = 0; i < 8; i++) {  
        linijka.setPixelColor(i, linijka.Color(255, 0, 0)); //Dioda nr i świeci na czerwono 
      }
      linijka.show();
      delay(100);
      
      for (i = 0; i < 8; i++) {  
        linijka.setPixelColor(i, linijka.Color(0, 0, 255)); //Dioda nr i świeci na niebiesko 
      }
      linijka.show();
      delay(100);

    break;
   }
  
}

void wylaczDiody() {
  int i = 0;
  for (i = 0; i < 8; i++){
    linijka.setPixelColor(i, linijka.Color(0, 0, 0)); //Dioda nr 1 wylaczona    
  }

  linijka.show();
}