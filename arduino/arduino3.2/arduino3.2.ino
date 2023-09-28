void setup() {
  Serial.begin(9600); //Inicjalizacja połączenia z PC
  pinMode(5,INPUT_PULLUP);
}

void loop() {
  static int licznik{0};
  if(!digitalRead(5))
  {
    Serial.println(licznik); //Wysłanie wartości zmiennej licznik
    while(!digitalRead(5))
    {
      delay(10);
    }
  }  
  licznik = licznik + 1; //Zwiększenie licznika o 1
  delay(1);//Opóźnienie, aby efekt był lepiej widoczny
}
