void setup() {
    pinMode(A5, OUTPUT); //Konfiguracja A5 jako wyjście  
}
 
void loop() {
    const static uint8_t size = 19;
    static uint8_t time = 0;
    static int array[size] = {1,2,4,6,8,10,12, 14,17,20,23,27,31,35,40,50,70,110,140};
    
    time = ++time % size;
    
    digitalWrite(A5, LOW); //Cykliczna zmiana stanu wyjścia
    delay((array[time]) );
    digitalWrite(A5, HIGH);
    delay((array[time]) );
}