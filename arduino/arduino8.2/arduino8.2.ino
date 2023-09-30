void setup() { 
  pinMode(6, OUTPUT);
  digitalWrite(6, HIGH); 
  
  pinMode(7, OUTPUT); 
  pinMode(8, OUTPUT);

  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  digitalWrite(7, LOW); 
  digitalWrite(8, LOW); 
  digitalWrite(12, LOW); 
  digitalWrite(13, LOW); 
} 
 
void loop()  {   
    digitalWrite(7, LOW); 
    digitalWrite(8, HIGH); 
    digitalWrite(12, LOW); 
    digitalWrite(13, HIGH); 
    delay(2000);
  
    digitalWrite(8, LOW); 
    digitalWrite(7, HIGH); 
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH); 
    delay(2000);

    digitalWrite(8, LOW); 
    digitalWrite(7, HIGH); 
    digitalWrite(13, LOW); 
    digitalWrite(12, HIGH); 
    delay(2000);


    digitalWrite(7, LOW); 
    digitalWrite(8, HIGH); 
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH); 
    delay(2000);                     
}