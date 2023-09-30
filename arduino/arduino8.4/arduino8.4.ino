void setup() {
    Serial.begin(9600);


}

void loop() {
    if(Serial.available())
    {
        String str = Serial.readString();
        int count = str.toInt();
        if(count > 0 && count < 10)
        {
            for(int j = 0; j < count; j++)
            {
                Serial.print('*');
            }
            Serial.println();
        }
    } 
}
