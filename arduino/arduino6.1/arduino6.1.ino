void setup() {
    Serial.begin(9600);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, INPUT_PULLUP);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
}

void loop() {
    static bool ok = true;
    static int count = 0;
    
    if (!digitalRead(5) && ok == true) {
        count++;
        
        // Build a string with the information
        String message = "Photoresistor 1: " + String(analogRead(A4)) + 
                        ", Photoresistor 2: " + String(analogRead(A3)) +
                        ", Potentiometer: " + String(analogRead(A5)) +
                        ", Button pressed: " + String(count);
        
        
        Serial.println(message);
        
        ok = false;
    } else if (digitalRead(5)) {
        ok = true;
    }
    delay(20);
}
