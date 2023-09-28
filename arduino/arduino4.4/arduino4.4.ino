int receivedValue = 0;
 
void setup() {
  pinMode(8, OUTPUT); 
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}
 
void loop() {
  receivedValue = analogRead(A5);
  receivedValue = map(receivedValue, 0, 1023, 1, 5);
  
  if (receivedValue == 1) { 
      digitalWrite(8, HIGH); 
      digitalWrite(9, LOW); 
      digitalWrite(10, LOW); 
      digitalWrite(11, LOW); 
      digitalWrite(12, LOW); 
  } else if (receivedValue == 2) {
      digitalWrite(8, LOW); 
      digitalWrite(9, HIGH); 
      digitalWrite(10, LOW); 
      digitalWrite(11, LOW); 
      digitalWrite(12, LOW);       
  } else if (receivedValue == 3) {  
      digitalWrite(8, LOW); 
      digitalWrite(9, LOW); 
      digitalWrite(10, HIGH); 
      digitalWrite(11, LOW); 
      digitalWrite(12, LOW);       
  } else if (receivedValue == 4) {  
      digitalWrite(8, LOW); 
      digitalWrite(9, LOW); 
      digitalWrite(10, LOW); 
      digitalWrite(11, HIGH); 
      digitalWrite(12, LOW);       
  } else if(receivedValue == 5) { 
      digitalWrite(8, LOW); 
      digitalWrite(9, LOW); 
      digitalWrite(10, LOW); 
      digitalWrite(11, LOW); 
      digitalWrite(12, HIGH);       
  }
  delay(50);   
}