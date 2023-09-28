int receivedVal = 0;
 
void setup() {
  pinMode(8, OUTPUT);
}
 
void loop() {
  receivedVal = analogRead(A5);
  
  if (receivedVal < 100) {
     digitalWrite(8, HIGH);   
  } else {
     digitalWrite(8, LOW);     
  }
  
  delay(50);
}