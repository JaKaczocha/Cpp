void setup() {
  
    pinMode(5,OUTPUT);
    digitalWrite(5, LOW);
}

void loop() {
  
    for(int i = 0; i < 5; i++)
    {
        digitalWrite(5,HIGH);
        delay(50);
        digitalWrite(5, LOW);
        delay(50);
    }

    delay(5000);
}
