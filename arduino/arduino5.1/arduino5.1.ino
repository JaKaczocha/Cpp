#define diodaPIN 3

char wypelnienie = 0;
int zmiana = 2;

void setup() {
	pinMode(diodaPIN, OUTPUT);//Konfiguracja pinu jako wyjścia 
}

void loop() {
	analogWrite(diodaPIN, wypelnienie); //Generujemy sygnał o zadanym wypełnieniu

	
	wypelnienie = wypelnienie + zmiana; //Zwiększamy wypełnienie
	
 
	delay(50); //Małe opóźnienie, aby efekt był widoczny
}