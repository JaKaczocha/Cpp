void setup() { 
  pinMode(6, OUTPUT);
  digitalWrite(6, HIGH); 
  
  pinMode(7, OUTPUT); 
  pinMode(8, OUTPUT);

  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  digitalWrite(7, LOW); 
  digitalWrite(8, HIGH); 

} 
 
void loop()  {   
    
    for(int i = 0; i <= 255; i++)
    {
        analogWrite(6,i);
        delay(25);
    }
    for(int i = 255; i >= 0; i--)
    {
        analogWrite(6,i);
        delay(25);
    }
                      
}