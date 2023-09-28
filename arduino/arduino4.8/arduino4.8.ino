#define RIGHT 2
#define LEFT 3
#define ANA_RIGHT A5
#define ANA_LEFT A4

void setup() {
    pinMode(LEFT,OUTPUT);
    pinMode(RIGHT,OUTPUT);
    Serial.begin(9600);
}

void loop() {
    if(analogRead(ANA_RIGHT) > analogRead(ANA_LEFT))
    {   
        digitalWrite(LEFT, LOW);
        digitalWrite(RIGHT, HIGH);   
    }
    else 
    {
        digitalWrite(LEFT, HIGH);
        digitalWrite(RIGHT, LOW);
    }
    delay(1000);
    Serial.println("LEFT --- RIGHT");
    Serial.print(analogRead(ANA_LEFT));
    Serial.print("    ");
    Serial.print(analogRead(ANA_RIGHT));
    Serial.print("\n");

}
