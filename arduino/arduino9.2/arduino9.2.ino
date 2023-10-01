
void blink(int PIN, int lightingTime, int intervalTime, int blinkCount);

void setup() {
    pinMode(3, OUTPUT);
    
    digitalWrite(3, LOW);
}

void loop() {
    blink(3,50,30,10);
    blink(3,5,50,15);
    blink(3,199,80,3);
    delay(3000);
}

void blink(int PIN, int lightingTime, int intervalTime, int blinkCount)
{
    for(int i = 0; i < blinkCount; i++)
    {
        digitalWrite(PIN, HIGH);
        delay(lightingTime);
        digitalWrite(PIN,LOW);
        delay(intervalTime);
    }
}