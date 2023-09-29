#define diodaPIN 3
 
int wypelnienie = 0;
int zmiana = 5;
bool inc {true};
void setup() {
	pinMode(diodaPIN, OUTPUT);//Konfiguracja pinu jako wyjścia 
}
 
void loop() {
	analogWrite(diodaPIN, wypelnienie); //Generujemy sygnał o zadanym wypełnieniu
 
	if (inc) { //Jeśli wypełnienie mniejsze od 100%
		wypelnienie = wypelnienie + zmiana; //Zwiększamy wypełnienie
	} else {
		wypelnienie = wypelnienie - zmiana; //Jeśli wypełnienie większe od 100%, to wracamy na początek
	}
    if(wypelnienie >= 255 || wypelnienie <= 0)
    {
        inc = !inc;
    }
	delay(70); //Małe opóźnienie, aby efekt był widoczny
}