int valL; 
int valR;
 
void setup() {
  Serial.begin(9600); //Uruchomienie komunikacji przez USART
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  digitalWrite(2,HIGH);
  digitalWrite(4,HIGH);
    
}
 
void loop() {

  valL = analogRead(A5); 
  valR = analogRead(A2);
  Serial.print(valL);
  Serial.print("\t"); 
  Serial.print(valR); 
  Serial.println();
  delay(200); //Czekamy, aby wygodniej odczytywać wyniki  
}