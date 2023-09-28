int receivedVal{0};
 
void setup() {
    Serial.begin(9600);
}
 
void loop() {
    receivedVal = analogRead(A5);
    Serial.print("value: " );
    Serial.print(receivedVal);
    Serial.print( '\n');
    delay(500);
}